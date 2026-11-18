// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_sse4 @ 1405c45b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar38;
  undefined1 auVar37 [16];
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
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar78;
  float fVar79;
  undefined1 auVar75 [16];
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  undefined1 auVar82 [16];
  float fVar85;
  undefined1 auVar86 [16];
  
  fVar31 = _UNK_1508be49c;
  fVar30 = _UNK_1508be498;
  fVar29 = _UNK_1508be494;
  fVar25 = ___xmm_00800000008000000080000000800000;
  auVar42 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar21 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar21 = param_4;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar15 = 0x20;
    uVar7 = 0;
    do {
      auVar45 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar15);
      auVar56 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar15);
      piVar1 = (int *)(param_3 + lVar15);
      uVar38 = auVar56._0_4_;
      auVar82._4_4_ = uVar38;
      auVar82._0_4_ = uVar38;
      auVar82._8_4_ = uVar38;
      auVar82._12_4_ = uVar38;
      iVar14 = auVar45._12_4_;
      auVar46._4_4_ = iVar14;
      auVar46._0_4_ = auVar45._0_4_;
      auVar46._8_4_ = auVar45._4_4_;
      auVar46._12_4_ = iVar14;
      auVar55 = pblendw(auVar82,auVar46,0x3f);
      auVar69._0_8_ = auVar45._8_8_;
      auVar69._8_4_ = auVar45._8_4_;
      auVar69._12_4_ = iVar14;
      auVar70 = pblendw(auVar69,auVar56,0xc);
      lVar10 = (longlong)(auVar45._0_4_ * 3);
      lVar12 = (longlong)(iVar14 * 3);
      lVar8 = (longlong)(auVar56._8_4_ * 3);
      lVar18 = (longlong)(piVar1[1] * 3);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar46 = insertps(auVar45,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar39 = insertps(auVar45,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      lVar10 = (longlong)(auVar55._8_4_ * 3);
      lVar12 = (longlong)(auVar55._12_4_ * 3);
      lVar8 = (longlong)(auVar56._12_4_ * 3);
      lVar18 = (longlong)(piVar1[2] * 3);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar55 = insertps(auVar56,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar75 = insertps(auVar56,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar63 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      lVar10 = (longlong)(auVar70._0_4_ * 3);
      lVar12 = (longlong)(auVar70._4_4_ * 3);
      lVar8 = (longlong)(*piVar1 * 3);
      lVar18 = (longlong)(piVar1[3] * 3);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar70 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar82 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      fVar54 = auVar55._0_4_ - auVar46._0_4_;
      fVar59 = auVar55._4_4_ - auVar46._4_4_;
      fVar60 = auVar55._8_4_ - auVar46._8_4_;
      fVar61 = auVar55._12_4_ - auVar46._12_4_;
      fVar74 = auVar75._0_4_ - auVar39._0_4_;
      fVar78 = auVar75._4_4_ - auVar39._4_4_;
      fVar79 = auVar75._8_4_ - auVar39._8_4_;
      fVar80 = auVar75._12_4_ - auVar39._12_4_;
      fVar62 = auVar63._0_4_ - auVar45._0_4_;
      fVar65 = auVar63._4_4_ - auVar45._4_4_;
      fVar66 = auVar63._8_4_ - auVar45._8_4_;
      fVar67 = auVar63._12_4_ - auVar45._12_4_;
      fVar49 = auVar56._0_4_ - auVar46._0_4_;
      fVar51 = auVar56._4_4_ - auVar46._4_4_;
      fVar52 = auVar56._8_4_ - auVar46._8_4_;
      fVar53 = auVar56._12_4_ - auVar46._12_4_;
      fVar68 = auVar70._0_4_ - auVar39._0_4_;
      fVar71 = auVar70._4_4_ - auVar39._4_4_;
      fVar72 = auVar70._8_4_ - auVar39._8_4_;
      fVar73 = auVar70._12_4_ - auVar39._12_4_;
      fVar81 = auVar82._0_4_ - auVar45._0_4_;
      fVar83 = auVar82._4_4_ - auVar45._4_4_;
      fVar84 = auVar82._8_4_ - auVar45._8_4_;
      fVar85 = auVar82._12_4_ - auVar45._12_4_;
      auVar76._0_4_ = fVar74 * fVar49 - fVar68 * fVar54;
      auVar76._4_4_ = fVar78 * fVar51 - fVar71 * fVar59;
      auVar76._8_4_ = fVar79 * fVar52 - fVar72 * fVar60;
      auVar76._12_4_ = fVar80 * fVar53 - fVar73 * fVar61;
      auVar64._0_4_ = fVar62 * fVar68 - fVar81 * fVar74;
      auVar64._4_4_ = fVar65 * fVar71 - fVar83 * fVar78;
      auVar64._8_4_ = fVar66 * fVar72 - fVar84 * fVar79;
      auVar64._12_4_ = fVar67 * fVar73 - fVar85 * fVar80;
      auVar55._0_4_ = fVar54 * fVar81 - fVar49 * fVar62;
      auVar55._4_4_ = fVar59 * fVar83 - fVar51 * fVar65;
      auVar55._8_4_ = fVar60 * fVar84 - fVar52 * fVar66;
      auVar55._12_4_ = fVar61 * fVar85 - fVar53 * fVar67;
      auVar63._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar64._0_4_ * auVar64._0_4_;
      auVar63._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar64._4_4_ * auVar64._4_4_;
      auVar63._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar64._8_4_ * auVar64._8_4_;
      auVar63._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar64._12_4_ * auVar64._12_4_;
      auVar45._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar63._0_4_;
      auVar45._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar63._4_4_;
      auVar45._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar63._8_4_;
      auVar45._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar63._12_4_;
      auVar39 = sqrtps(auVar63,auVar45);
      uVar20 = -(uint)(auVar45._0_4_ <= fVar25);
      uVar22 = -(uint)(auVar45._4_4_ <= fVar29);
      uVar23 = -(uint)(auVar45._8_4_ <= fVar30);
      uVar24 = -(uint)(auVar45._12_4_ <= fVar31);
      auVar56._4_4_ = uVar22;
      auVar56._0_4_ = uVar20;
      auVar56._8_4_ = uVar23;
      auVar56._12_4_ = uVar24;
      auVar46 = divps(auVar64,auVar39);
      auVar45 = divps(auVar55,auVar39);
      auVar55 = divps(auVar76,auVar39);
      auVar56 = blendvps(auVar46,auVar42,auVar56);
      auVar70._0_4_ = ~uVar20 & auVar45._0_4_;
      auVar70._4_4_ = ~uVar22 & auVar45._4_4_;
      auVar70._8_4_ = ~uVar23 & auVar45._8_4_;
      auVar70._12_4_ = ~uVar24 & auVar45._12_4_;
      auVar39._0_4_ = ~uVar20 & auVar55._0_4_;
      auVar39._4_4_ = ~uVar22 & auVar55._4_4_;
      auVar39._8_4_ = ~uVar23 & auVar55._8_4_;
      auVar39._12_4_ = ~uVar24 & auVar55._12_4_;
      auVar45 = insertps(auVar56,auVar70,0x30);
      auVar75._4_4_ = auVar70._8_4_;
      auVar75._0_4_ = auVar70._4_4_;
      auVar75._8_4_ = auVar39._0_4_;
      auVar75._12_4_ = auVar39._4_4_;
      auVar45 = insertps(auVar45,auVar39,0x20);
      puVar4 = (undefined4 *)(param_1 + -0x20 + lVar15);
      *puVar4 = auVar45._0_4_;
      puVar4[1] = auVar45._12_4_;
      puVar4[2] = auVar45._8_4_;
      puVar4[3] = auVar45._4_4_;
      auVar45 = blendps(auVar75,auVar56,4);
      puVar4 = (undefined4 *)(param_1 + -0x10 + lVar15);
      *puVar4 = auVar45._0_4_;
      puVar4[1] = auVar45._12_4_;
      puVar4[2] = auVar45._8_4_;
      puVar4[3] = auVar45._4_4_;
      puVar2 = (uint *)(param_1 + lVar15);
      *puVar2 = auVar39._8_4_;
      puVar2[1] = auVar56._12_4_;
      puVar2[2] = auVar70._12_4_;
      puVar2[3] = auVar39._12_4_;
      lVar15 = lVar15 + 0x30;
      uVar7 = uVar7 + 4;
    } while ((int)uVar7 < (int)(uVar21 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar42._0_4_ =
       -(uint)((int)(uVar7 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar42._4_4_ =
       -(uint)((int)(uVar7 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar42._8_4_ = -(uint)((int)(uVar7 | _UNK_150631e08) < (int)param_4);
  auVar42._12_4_ = -(uint)((int)(uVar7 | _UNK_150631e0c) < (int)param_4);
  pauVar3 = (undefined1 (*) [16])(param_3 + (ulonglong)uVar7 * 0xc);
  iVar14 = movmskps(param_4,auVar42);
  bVar6 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar45 = *pauVar3;
    auVar56 = pauVar3[1];
    uVar38 = auVar56._0_4_;
    auVar41._4_4_ = uVar38;
    auVar41._0_4_ = uVar38;
    auVar41._8_4_ = uVar38;
    auVar41._12_4_ = uVar38;
    uVar38 = auVar45._12_4_;
    auVar34._0_8_ = CONCAT44(uVar38,auVar45._0_4_);
    auVar34._8_4_ = auVar45._4_4_;
    auVar34._12_4_ = uVar38;
    auVar39 = pblendw(auVar41,auVar34,0x3f);
    auVar58._0_8_ = auVar45._8_8_;
    auVar58._8_4_ = auVar45._8_4_;
    auVar58._12_4_ = uVar38;
    auVar45 = pblendw(auVar58,auVar56,0xc);
    auVar47._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar56._8_4_);
    auVar47._8_4_ = auVar56._12_4_;
    auVar47._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar33._8_8_ = auVar47._0_8_;
    auVar33._0_8_ = auVar34._0_8_;
    auVar40._8_8_ = auVar47._8_8_;
    auVar40._0_8_ = auVar39._8_8_;
    auVar57._0_8_ = auVar45._0_8_;
    auVar57._8_4_ = *(undefined4 *)pauVar3[2];
    auVar57._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar42._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar42._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar42._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar42._12_4_;
    lVar15 = extractps(auVar32,1);
    lVar8 = extractps(auVar32,2);
    lVar10 = extractps(auVar32,3);
    auVar33._4_4_ = *(undefined4 *)(*pauVar3 + lVar15);
    auVar33._0_4_ = *(undefined4 *)*pauVar3;
    auVar33._12_4_ = *(undefined4 *)(*pauVar3 + lVar10);
    auVar33._8_4_ = *(undefined4 *)(*pauVar3 + lVar8);
    auVar45 = ___xmm_000000280000001c0000001000000004 & auVar42;
    auVar40._4_4_ = *(undefined4 *)(*pauVar3 + auVar45._4_4_);
    auVar40._0_4_ = *(undefined4 *)(*pauVar3 + auVar45._0_4_);
    auVar40._12_4_ = *(undefined4 *)(*pauVar3 + auVar45._12_4_);
    auVar40._8_4_ = *(undefined4 *)(*pauVar3 + auVar45._8_4_);
    auVar45 = ___xmm_0000002c000000200000001400000008 & auVar42;
    auVar57._4_4_ = *(undefined4 *)(*pauVar3 + auVar45._4_4_);
    auVar57._0_4_ = *(undefined4 *)(*pauVar3 + auVar45._0_4_);
    auVar57._12_4_ = *(undefined4 *)(*pauVar3 + auVar45._12_4_);
    auVar57._8_4_ = *(undefined4 *)(*pauVar3 + auVar45._8_4_);
  }
  auVar50._4_4_ = auVar33._4_4_ * 3;
  auVar50._0_4_ = auVar33._0_4_ * 3;
  auVar50._8_4_ = auVar33._8_4_ * 3;
  auVar50._12_4_ = auVar33._12_4_ * 3;
  auVar50 = auVar50 & auVar42;
  lVar15 = param_2 + (longlong)auVar50._0_4_ * 4;
  lVar8 = param_2 + (longlong)auVar50._4_4_ * 4;
  lVar10 = param_2 + (longlong)auVar50._8_4_ * 4;
  auVar70 = ___xmm_00000004000000040000000400000004 & auVar42;
  uVar13 = (ulonglong)auVar70._4_4_;
  uVar11 = (ulonglong)auVar70._8_4_;
  uVar16 = (ulonglong)auVar70._0_4_;
  auVar45 = insertps(ZEXT416(*(uint *)(uVar16 + lVar15)),*(undefined4 *)(uVar13 + lVar8),0x10);
  auVar45 = insertps(auVar45,*(undefined4 *)(uVar11 + lVar10),0x20);
  auVar75 = ___xmm_00000008000000080000000800000008 & auVar42;
  uVar19 = (ulonglong)auVar75._4_4_;
  uVar9 = (ulonglong)auVar75._8_4_;
  uVar17 = (ulonglong)auVar75._0_4_;
  auVar56 = insertps(ZEXT416(*(uint *)(uVar17 + lVar15)),*(undefined4 *)(uVar19 + lVar8),0x10);
  auVar56 = insertps(auVar56,*(undefined4 *)(uVar9 + lVar10),0x20);
  auVar77._4_4_ = auVar40._4_4_ * 3;
  auVar77._0_4_ = auVar40._0_4_ * 3;
  auVar77._8_4_ = auVar40._8_4_ * 3;
  auVar77._12_4_ = auVar40._12_4_ * 3;
  auVar77 = auVar77 & auVar42;
  lVar15 = param_2 + (longlong)auVar77._0_4_ * 4;
  auVar86._4_4_ = auVar57._4_4_ * 3;
  auVar86._0_4_ = auVar57._0_4_ * 3;
  auVar86._8_4_ = auVar57._8_4_ * 3;
  auVar86._12_4_ = auVar57._12_4_ * 3;
  auVar86 = auVar86 & auVar42;
  lVar8 = param_2 + (longlong)auVar86._0_4_ * 4;
  lVar10 = param_2 + (longlong)auVar77._4_4_ * 4;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar16 + lVar15)),*(undefined4 *)(uVar13 + lVar10),0x10);
  auVar46 = insertps(ZEXT416(*(uint *)(uVar17 + lVar15)),*(undefined4 *)(uVar19 + lVar10),0x10);
  lVar15 = param_2 + (longlong)auVar77._8_4_ * 4;
  auVar39 = insertps(auVar42,*(undefined4 *)(uVar11 + lVar15),0x20);
  auVar46 = insertps(auVar46,*(undefined4 *)(uVar9 + lVar15),0x20);
  lVar15 = param_2 + (longlong)auVar86._4_4_ * 4;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar16 + lVar8)),*(undefined4 *)(uVar13 + lVar15),0x10);
  auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar8)),*(undefined4 *)(uVar19 + lVar15),0x10);
  lVar15 = param_2 + (longlong)auVar86._8_4_ * 4;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar11 + lVar15),0x20);
  auVar63 = insertps(auVar55,*(undefined4 *)(uVar9 + lVar15),0x20);
  auVar55 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar50._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar50._4_4_ * 4),0x10);
  uVar11 = (ulonglong)auVar70._12_4_;
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar50._8_4_ * 4),0x20);
  lVar15 = param_2 + (longlong)auVar50._12_4_ * 4;
  auVar82 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar50._12_4_ * 4),0x30);
  auVar45 = insertps(auVar45,*(undefined4 *)(uVar11 + lVar15),0x30);
  uVar9 = (ulonglong)auVar75._12_4_;
  auVar56 = insertps(auVar56,*(undefined4 *)(uVar9 + lVar15),0x30);
  auVar55 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar77._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar77._4_4_ * 4),0x10);
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar77._8_4_ * 4),0x20);
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar77._12_4_ * 4),0x30);
  lVar15 = param_2 + (longlong)auVar77._12_4_ * 4;
  auVar39 = insertps(auVar39,*(undefined4 *)(uVar11 + lVar15),0x30);
  auVar46 = insertps(auVar46,*(undefined4 *)(uVar9 + lVar15),0x30);
  auVar70 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar86._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar86._4_4_ * 4),0x10);
  auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + (longlong)auVar86._8_4_ * 4),0x20);
  auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + (longlong)auVar86._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar86._12_4_ * 4;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar11 + param_2),0x30);
  auVar63 = insertps(auVar63,*(undefined4 *)(uVar9 + param_2),0x30);
  puVar4 = (undefined4 *)(param_1 + (ulonglong)uVar7 * 0xc);
  fVar62 = auVar55._0_4_ - auVar82._0_4_;
  fVar65 = auVar55._4_4_ - auVar82._4_4_;
  fVar66 = auVar55._8_4_ - auVar82._8_4_;
  fVar67 = auVar55._12_4_ - auVar82._12_4_;
  fVar49 = auVar39._0_4_ - auVar45._0_4_;
  fVar51 = auVar39._4_4_ - auVar45._4_4_;
  fVar52 = auVar39._8_4_ - auVar45._8_4_;
  fVar53 = auVar39._12_4_ - auVar45._12_4_;
  fVar54 = auVar46._0_4_ - auVar56._0_4_;
  fVar59 = auVar46._4_4_ - auVar56._4_4_;
  fVar60 = auVar46._8_4_ - auVar56._8_4_;
  fVar61 = auVar46._12_4_ - auVar56._12_4_;
  fVar74 = auVar70._0_4_ - auVar82._0_4_;
  fVar78 = auVar70._4_4_ - auVar82._4_4_;
  fVar79 = auVar70._8_4_ - auVar82._8_4_;
  fVar80 = auVar70._12_4_ - auVar82._12_4_;
  fVar25 = auVar42._0_4_ - auVar45._0_4_;
  fVar29 = auVar42._4_4_ - auVar45._4_4_;
  fVar30 = auVar42._8_4_ - auVar45._8_4_;
  fVar31 = auVar42._12_4_ - auVar45._12_4_;
  fVar68 = auVar63._0_4_ - auVar56._0_4_;
  fVar71 = auVar63._4_4_ - auVar56._4_4_;
  fVar72 = auVar63._8_4_ - auVar56._8_4_;
  fVar73 = auVar63._12_4_ - auVar56._12_4_;
  auVar43._0_4_ = fVar49 * fVar74 - fVar25 * fVar62;
  auVar43._4_4_ = fVar51 * fVar78 - fVar29 * fVar65;
  auVar43._8_4_ = fVar52 * fVar79 - fVar30 * fVar66;
  auVar43._12_4_ = fVar53 * fVar80 - fVar31 * fVar67;
  auVar48._0_4_ = fVar54 * fVar25 - fVar68 * fVar49;
  auVar48._4_4_ = fVar59 * fVar29 - fVar71 * fVar51;
  auVar48._8_4_ = fVar60 * fVar30 - fVar72 * fVar52;
  auVar48._12_4_ = fVar61 * fVar31 - fVar73 * fVar53;
  auVar37._0_4_ = fVar62 * fVar68 - fVar74 * fVar54;
  auVar37._4_4_ = fVar65 * fVar71 - fVar78 * fVar59;
  auVar37._8_4_ = fVar66 * fVar72 - fVar79 * fVar60;
  auVar37._12_4_ = fVar67 * fVar73 - fVar80 * fVar61;
  auVar35._0_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar48._0_4_ * auVar48._0_4_;
  auVar35._4_4_ = auVar37._4_4_ * auVar37._4_4_ + auVar48._4_4_ * auVar48._4_4_;
  auVar35._8_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar48._8_4_ * auVar48._8_4_;
  auVar35._12_4_ = auVar37._12_4_ * auVar37._12_4_ + auVar48._12_4_ * auVar48._12_4_;
  auVar26._0_4_ = auVar43._0_4_ * auVar43._0_4_ + auVar35._0_4_;
  auVar26._4_4_ = auVar43._4_4_ * auVar43._4_4_ + auVar35._4_4_;
  auVar26._8_4_ = auVar43._8_4_ * auVar43._8_4_ + auVar35._8_4_;
  auVar26._12_4_ = auVar43._12_4_ * auVar43._12_4_ + auVar35._12_4_;
  auVar42 = sqrtps(auVar35,auVar26);
  uVar21 = -(uint)(auVar26._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar7 = -(uint)(auVar26._4_4_ <= _UNK_1508be494);
  uVar20 = -(uint)(auVar26._8_4_ <= _UNK_1508be498);
  uVar22 = -(uint)(auVar26._12_4_ <= _UNK_1508be49c);
  auVar27._4_4_ = uVar7;
  auVar27._0_4_ = uVar21;
  auVar27._8_4_ = uVar20;
  auVar27._12_4_ = uVar22;
  auVar56 = divps(auVar48,auVar42);
  auVar45 = divps(auVar37,auVar42);
  auVar56 = blendvps(auVar56,___xmm_3f8000003f8000003f8000003f800000,auVar27);
  auVar42 = divps(auVar43,auVar42);
  auVar36._0_4_ = ~uVar21 & auVar45._0_4_;
  auVar36._4_4_ = ~uVar7 & auVar45._4_4_;
  auVar36._8_4_ = ~uVar20 & auVar45._8_4_;
  auVar36._12_4_ = ~uVar22 & auVar45._12_4_;
  auVar28._0_4_ = ~uVar21 & auVar42._0_4_;
  auVar28._4_4_ = ~uVar7 & auVar42._4_4_;
  auVar28._8_4_ = ~uVar20 & auVar42._8_4_;
  auVar28._12_4_ = ~uVar22 & auVar42._12_4_;
  if ((~bVar6 & 0xf) == 0) {
    auVar42 = insertps(auVar56,auVar36,0x30);
    auVar44._4_4_ = auVar36._8_4_;
    auVar44._0_4_ = auVar36._4_4_;
    auVar44._8_4_ = auVar28._0_4_;
    auVar44._12_4_ = auVar28._4_4_;
    auVar42 = insertps(auVar42,auVar28,0x20);
    *puVar4 = auVar42._0_4_;
    puVar4[1] = auVar42._12_4_;
    puVar4[2] = auVar42._8_4_;
    puVar4[3] = auVar42._4_4_;
    auVar42 = blendps(auVar44,auVar56,4);
    puVar4[4] = auVar42._0_4_;
    puVar4[5] = auVar42._12_4_;
    puVar4[6] = auVar42._8_4_;
    puVar4[7] = auVar42._4_4_;
    puVar4[8] = auVar28._8_4_;
    puVar4[9] = auVar56._12_4_;
    puVar4[10] = auVar36._12_4_;
    puVar4[0xb] = auVar28._12_4_;
  }
  else {
    if ((bVar6 & 1) != 0) {
      *puVar4 = auVar56._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar56,1);
      *(undefined8 *)(puVar4 + 3) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar56,2);
      *(undefined8 *)(puVar4 + 6) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar56,3);
      *(undefined8 *)(puVar4 + 9) = uVar5;
    }
    if ((bVar6 & 1) != 0) {
      puVar4[1] = auVar36._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar36,1);
      *(undefined8 *)(puVar4 + 4) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar36,2);
      *(undefined8 *)(puVar4 + 7) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar36,3);
      *(undefined8 *)(puVar4 + 10) = uVar5;
    }
    if ((bVar6 & 1) != 0) {
      puVar4[2] = auVar28._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar28,1);
      *(undefined8 *)(puVar4 + 5) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar28,2);
      *(undefined8 *)(puVar4 + 8) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar28,3);
      *(undefined8 *)(puVar4 + 0xb) = uVar5;
    }
  }
  return;
}

// GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_sse4 @ 1405c4e70

void GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6,undefined1 (*param_7) [16])

{
  uint uVar1;
  uint uVar2;
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
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 in_R11D;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  float in_XMM3_Dc;
  float in_XMM3_Dd;
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
  float fVar89;
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
  
  fVar19 = __real_3f000000;
  fVar18 = __real_3f800000;
  fVar17 = __real_322bcc77;
  auVar26 = *param_7;
  iVar22 = movmskps(in_R11D,auVar26);
  if (iVar22 == 0xf) {
    if (0 < (int)param_6) {
      lVar23 = (longlong)param_4;
      if (param_6 < 4) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar21 * 0x10);
          if ((int)uVar1 < 1) {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
          }
          else {
            lVar25 = *(longlong *)(param_3 + uVar21 * 0x10);
            if (uVar1 == 1) {
              auVar72._8_4_ = 0.0;
              auVar63._8_4_ = 0.0;
              auVar72._4_4_ = 0.0;
              auVar63._4_4_ = 0.0;
              lVar24 = 0;
            }
            else {
              auVar72._8_4_ = 0.0;
              auVar63._8_4_ = 0.0;
              auVar72._4_4_ = 0.0;
              auVar63._4_4_ = 0.0;
              lVar24 = 0;
              do {
                uVar2 = *(uint *)(lVar25 + lVar24 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar30,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                  auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                  auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                  auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
                }
                uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar58._8_8_ = 0;
                  auVar58._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar58,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                  auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                  auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                  auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
                }
                lVar24 = lVar24 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
              if ((uVar1 & 1) == 0) goto LAB_1405c5d09;
            }
            uVar1 = *(uint *)(lVar25 + lVar24 * 4);
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar46._8_8_ = 0;
              auVar46._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar30 = insertps(auVar46,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28)
              ;
              auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
              auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
              auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
              auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
            }
          }
LAB_1405c5d09:
          auVar64._4_4_ = auVar63._8_4_ * auVar63._8_4_;
          auVar64._12_4_ = auVar63._4_4_ * auVar63._4_4_;
          auVar47._4_4_ = auVar64._4_4_;
          auVar47._0_4_ = auVar64._4_4_;
          auVar47._8_4_ = auVar64._12_4_;
          auVar47._12_4_ = auVar64._12_4_;
          auVar48._4_12_ = auVar47._4_12_;
          auVar48._0_4_ =
               auVar64._4_4_ + auVar72._8_4_ * auVar72._8_4_ + auVar72._4_4_ * auVar72._4_4_;
          if ((auVar48._0_4_ != fVar18) ||
             (fVar89 = auVar63._8_4_, auVar100._4_4_ = auVar72._4_4_, auVar100._8_4_ = auVar72._8_4_
             , NAN(auVar48._0_4_) || NAN(fVar18))) {
            if (fVar17 <= auVar48._0_4_) {
              auVar64._0_4_ = auVar48._0_4_;
              auVar64._8_4_ = auVar64._12_4_;
              auVar30 = rsqrtss(auVar64,auVar48);
              fVar89 = auVar30._0_4_;
              fVar89 = (fVar19 - fVar89 * fVar89 * auVar48._0_4_ * fVar19) * fVar89 + fVar89;
              fVar89 = (fVar19 - fVar89 * fVar89 * auVar48._0_4_ * fVar19) * fVar89 + fVar89;
              auVar16._4_4_ = auVar63._8_4_;
              auVar16._0_4_ = auVar72._8_4_;
              auVar16._8_4_ = auVar72._4_4_;
              auVar16._12_4_ = auVar63._4_4_;
              auVar26 = blendps(auVar26,auVar16,7);
              auVar99._4_4_ = fVar89;
              auVar99._0_4_ = fVar89;
              auVar99._8_4_ = in_XMM3_Dc;
              auVar99._12_4_ = in_XMM3_Dd;
              auVar30 = insertps(auVar99,ZEXT416((uint)fVar89),0x20);
              in_XMM3_Dc = auVar30._8_4_;
              in_XMM3_Dd = auVar30._12_4_;
              fVar89 = auVar63._8_4_ * auVar30._4_4_;
              auVar100._4_4_ = auVar72._4_4_ * in_XMM3_Dc;
              auVar100._8_4_ = auVar72._8_4_ * auVar30._0_4_;
            }
            else {
              fVar89 = 0.0;
              auVar100._4_4_ = 0.0;
              auVar100._8_4_ = 0.0;
            }
          }
          lVar25 = param_1 + uVar21 * 0xc;
          *(float *)(lVar25 + lVar23 * 0xc) = auVar100._8_4_;
          *(float *)(lVar25 + 4 + lVar23 * 0xc) = fVar89;
          *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar100._4_4_;
          lVar25 = (uVar21 | 1) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar25);
          if ((int)uVar1 < 1) {
            auVar49 = ZEXT816(0);
          }
          else {
            lVar25 = *(longlong *)(param_3 + lVar25);
            if (uVar1 == 1) {
              lVar24 = 0;
              auVar30 = ZEXT816(0);
            }
            else {
              auVar49 = ZEXT816(0);
              lVar24 = 0;
              do {
                uVar2 = *(uint *)(lVar25 + lVar24 * 4);
                auVar50 = auVar49;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar65._8_8_ = 0;
                  auVar65._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar65,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar50._0_4_ = auVar49._0_4_ + auVar30._0_4_;
                  auVar50._4_4_ = auVar49._4_4_ + auVar30._4_4_;
                  auVar50._8_4_ = auVar49._8_4_ + auVar30._8_4_;
                  auVar50._12_4_ = auVar49._12_4_ + auVar30._12_4_;
                }
                uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
                auVar49 = auVar50;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar66._8_8_ = 0;
                  auVar66._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar66,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar49._0_4_ = auVar50._0_4_ + auVar30._0_4_;
                  auVar49._4_4_ = auVar50._4_4_ + auVar30._4_4_;
                  auVar49._8_4_ = auVar50._8_4_ + auVar30._8_4_;
                  auVar49._12_4_ = auVar50._12_4_ + auVar30._12_4_;
                }
                lVar24 = lVar24 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
              auVar30 = auVar49;
              if ((uVar1 & 1) == 0) goto LAB_1405c5efb;
            }
            uVar1 = *(uint *)(lVar25 + lVar24 * 4);
            auVar49 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar67._8_8_ = 0;
              auVar67._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar58 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28)
              ;
              auVar49._0_4_ = auVar30._0_4_ + auVar58._0_4_;
              auVar49._4_4_ = auVar30._4_4_ + auVar58._4_4_;
              auVar49._8_4_ = auVar30._8_4_ + auVar58._8_4_;
              auVar49._12_4_ = auVar30._12_4_ + auVar58._12_4_;
            }
          }
LAB_1405c5efb:
          fVar89 = auVar49._0_4_;
          auVar100._4_4_ = auVar49._4_4_;
          auVar100._8_4_ = auVar49._8_4_;
          auVar109._4_4_ = auVar49._12_4_;
          auVar81._4_4_ = auVar100._4_4_ * auVar100._4_4_;
          auVar81._12_4_ = auVar109._4_4_ * auVar109._4_4_;
          auVar68._4_4_ = auVar81._4_4_;
          auVar68._0_4_ = auVar81._4_4_;
          auVar68._8_4_ = auVar81._12_4_;
          auVar68._12_4_ = auVar81._12_4_;
          auVar69._4_12_ = auVar68._4_12_;
          auVar69._0_4_ = auVar81._4_4_ + fVar89 * fVar89 + auVar100._8_4_ * auVar100._8_4_;
          if ((auVar69._0_4_ != fVar18) || (auVar30 = auVar49, NAN(auVar69._0_4_) || NAN(fVar18))) {
            if (fVar17 <= auVar69._0_4_) {
              auVar81._0_4_ = auVar69._0_4_;
              auVar81._8_4_ = auVar81._12_4_;
              auVar30 = rsqrtss(auVar81,auVar69);
              auVar109._8_4_ = auVar30._0_4_;
              auVar109._8_4_ =
                   (fVar19 - auVar109._8_4_ * auVar109._8_4_ * auVar69._0_4_ * fVar19) *
                   auVar109._8_4_ + auVar109._8_4_;
              auVar109._8_4_ =
                   (fVar19 - auVar109._8_4_ * auVar109._8_4_ * auVar69._0_4_ * fVar19) *
                   auVar109._8_4_ + auVar109._8_4_;
              auVar26 = blendps(auVar26,auVar49,7);
              auVar108._4_4_ = auVar109._8_4_;
              auVar108._0_4_ = auVar109._8_4_;
              auVar108._8_4_ = in_XMM3_Dc;
              auVar108._12_4_ = in_XMM3_Dd;
              auVar30 = insertps(auVar108,ZEXT416((uint)auVar109._8_4_),0x20);
              auVar100._0_4_ = fVar89 * auVar30._0_4_;
              auVar100._4_4_ = auVar100._4_4_ * auVar30._4_4_;
              in_XMM3_Dc = auVar30._8_4_;
              auVar100._8_4_ = auVar100._8_4_ * in_XMM3_Dc;
              in_XMM3_Dd = auVar30._12_4_;
              auVar100._12_4_ = auVar109._4_4_ * in_XMM3_Dd;
              auVar30 = auVar100;
            }
            else {
              auVar100._4_4_ = 0.0;
              auVar100._8_4_ = 0.0;
              auVar30 = ZEXT816(0);
            }
          }
          lVar25 = param_1 + (uVar21 | 1) * 0xc;
          *(int *)(lVar25 + lVar23 * 0xc) = auVar30._0_4_;
          *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar100._4_4_;
          *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar100._8_4_;
          lVar25 = (uVar21 | 2) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar25);
          if ((int)uVar1 < 1) {
            auVar70 = ZEXT816(0);
          }
          else {
            lVar25 = *(longlong *)(param_3 + lVar25);
            if (uVar1 == 1) {
              lVar24 = 0;
              auVar30 = ZEXT816(0);
            }
            else {
              auVar70 = ZEXT816(0);
              lVar24 = 0;
              do {
                uVar2 = *(uint *)(lVar25 + lVar24 * 4);
                auVar71 = auVar70;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar82._8_8_ = 0;
                  auVar82._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar82,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar71._0_4_ = auVar70._0_4_ + auVar30._0_4_;
                  auVar71._4_4_ = auVar70._4_4_ + auVar30._4_4_;
                  auVar71._8_4_ = auVar70._8_4_ + auVar30._8_4_;
                  auVar71._12_4_ = auVar70._12_4_ + auVar30._12_4_;
                }
                uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
                auVar70 = auVar71;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar83._8_8_ = 0;
                  auVar83._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar83,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar70._0_4_ = auVar71._0_4_ + auVar30._0_4_;
                  auVar70._4_4_ = auVar71._4_4_ + auVar30._4_4_;
                  auVar70._8_4_ = auVar71._8_4_ + auVar30._8_4_;
                  auVar70._12_4_ = auVar71._12_4_ + auVar30._12_4_;
                }
                lVar24 = lVar24 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
              auVar30 = auVar70;
              if ((uVar1 & 1) == 0) goto LAB_1405c60eb;
            }
            uVar1 = *(uint *)(lVar25 + lVar24 * 4);
            auVar70 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar84._8_8_ = 0;
              auVar84._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar58 = insertps(auVar84,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28)
              ;
              auVar70._0_4_ = auVar30._0_4_ + auVar58._0_4_;
              auVar70._4_4_ = auVar30._4_4_ + auVar58._4_4_;
              auVar70._8_4_ = auVar30._8_4_ + auVar58._8_4_;
              auVar70._12_4_ = auVar30._12_4_ + auVar58._12_4_;
            }
          }
LAB_1405c60eb:
          fVar89 = auVar70._0_4_;
          auVar109._4_4_ = auVar70._4_4_;
          auVar109._8_4_ = auVar70._8_4_;
          auVar100._4_4_ = auVar70._12_4_;
          auVar101._4_4_ = auVar109._4_4_ * auVar109._4_4_;
          auVar101._12_4_ = auVar100._4_4_ * auVar100._4_4_;
          auVar85._4_4_ = auVar101._4_4_;
          auVar85._0_4_ = auVar101._4_4_;
          auVar85._8_4_ = auVar101._12_4_;
          auVar85._12_4_ = auVar101._12_4_;
          auVar86._4_12_ = auVar85._4_12_;
          auVar86._0_4_ = auVar101._4_4_ + fVar89 * fVar89 + auVar109._8_4_ * auVar109._8_4_;
          if ((auVar86._0_4_ != fVar18) || (auVar30 = auVar70, NAN(auVar86._0_4_) || NAN(fVar18))) {
            if (fVar17 <= auVar86._0_4_) {
              auVar101._0_4_ = auVar86._0_4_;
              auVar101._8_4_ = auVar101._12_4_;
              auVar30 = rsqrtss(auVar101,auVar86);
              auVar100._8_4_ = auVar30._0_4_;
              auVar100._8_4_ =
                   (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar86._0_4_ * fVar19) *
                   auVar100._8_4_ + auVar100._8_4_;
              auVar100._8_4_ =
                   (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar86._0_4_ * fVar19) *
                   auVar100._8_4_ + auVar100._8_4_;
              auVar26 = blendps(auVar26,auVar70,7);
              auVar111._4_4_ = auVar100._8_4_;
              auVar111._0_4_ = auVar100._8_4_;
              auVar111._8_4_ = in_XMM3_Dc;
              auVar111._12_4_ = in_XMM3_Dd;
              auVar30 = insertps(auVar111,ZEXT416((uint)auVar100._8_4_),0x20);
              auVar109._0_4_ = fVar89 * auVar30._0_4_;
              auVar109._4_4_ = auVar109._4_4_ * auVar30._4_4_;
              in_XMM3_Dc = auVar30._8_4_;
              auVar109._8_4_ = auVar109._8_4_ * in_XMM3_Dc;
              in_XMM3_Dd = auVar30._12_4_;
              auVar109._12_4_ = auVar100._4_4_ * in_XMM3_Dd;
              auVar30 = auVar109;
            }
            else {
              auVar109._4_4_ = 0.0;
              auVar109._8_4_ = 0.0;
              auVar30 = ZEXT816(0);
            }
          }
          lVar25 = param_1 + (uVar21 | 2) * 0xc;
          *(int *)(lVar25 + lVar23 * 0xc) = auVar30._0_4_;
          *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar109._4_4_;
          *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar109._8_4_;
          lVar25 = (uVar21 | 3) * 0x10;
          uVar1 = *(uint *)(param_3 + 8 + lVar25);
          if ((int)uVar1 < 1) {
            auVar87 = ZEXT816(0);
          }
          else {
            lVar25 = *(longlong *)(param_3 + lVar25);
            if (uVar1 == 1) {
              lVar24 = 0;
              auVar30 = ZEXT816(0);
            }
            else {
              auVar87 = ZEXT816(0);
              lVar24 = 0;
              do {
                uVar2 = *(uint *)(lVar25 + lVar24 * 4);
                auVar88 = auVar87;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar102._8_8_ = 0;
                  auVar102._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar102,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar88._0_4_ = auVar87._0_4_ + auVar30._0_4_;
                  auVar88._4_4_ = auVar87._4_4_ + auVar30._4_4_;
                  auVar88._8_4_ = auVar87._8_4_ + auVar30._8_4_;
                  auVar88._12_4_ = auVar87._12_4_ + auVar30._12_4_;
                }
                uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
                auVar87 = auVar88;
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar103._8_8_ = 0;
                  auVar103._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar103,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar87._0_4_ = auVar88._0_4_ + auVar30._0_4_;
                  auVar87._4_4_ = auVar88._4_4_ + auVar30._4_4_;
                  auVar87._8_4_ = auVar88._8_4_ + auVar30._8_4_;
                  auVar87._12_4_ = auVar88._12_4_ + auVar30._12_4_;
                }
                lVar24 = lVar24 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
              auVar30 = auVar87;
              if ((uVar1 & 1) == 0) goto LAB_1405c62db;
            }
            uVar1 = *(uint *)(lVar25 + lVar24 * 4);
            auVar87 = auVar30;
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar104._8_8_ = 0;
              auVar104._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar58 = insertps(auVar104,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28
                                );
              auVar87._0_4_ = auVar30._0_4_ + auVar58._0_4_;
              auVar87._4_4_ = auVar30._4_4_ + auVar58._4_4_;
              auVar87._8_4_ = auVar30._8_4_ + auVar58._8_4_;
              auVar87._12_4_ = auVar30._12_4_ + auVar58._12_4_;
            }
          }
LAB_1405c62db:
          auVar13._4_4_ = auVar63._8_4_;
          auVar13._0_4_ = auVar72._8_4_;
          auVar13._8_4_ = auVar72._4_4_;
          auVar13._12_4_ = auVar63._4_4_;
          auVar30 = blendps(in_XMM1,auVar13,7);
          auVar14._4_4_ = auVar63._8_4_;
          auVar14._0_4_ = auVar72._8_4_;
          auVar14._8_4_ = auVar72._4_4_;
          auVar14._12_4_ = auVar63._4_4_;
          auVar58 = blendps(in_XMM2,auVar14,7);
          auVar30 = blendps(auVar30,auVar49,7);
          auVar58 = blendps(auVar58,auVar49,7);
          auVar30 = blendps(auVar30,auVar70,7);
          auVar58 = blendps(auVar58,auVar70,7);
          auVar63._4_4_ = auVar87._0_4_;
          auVar72._4_4_ = auVar87._4_4_;
          auVar72._8_4_ = auVar87._8_4_;
          fVar89 = auVar87._12_4_;
          auVar51._4_4_ = auVar72._4_4_ * auVar72._4_4_;
          auVar51._12_4_ = fVar89 * fVar89;
          auVar63._8_4_ =
               auVar51._4_4_ + auVar63._4_4_ * auVar63._4_4_ + auVar72._8_4_ * auVar72._8_4_;
          if ((auVar63._8_4_ != fVar18) || (auVar46 = auVar87, NAN(auVar63._8_4_) || NAN(fVar18))) {
            if (fVar17 <= auVar63._8_4_) {
              auVar51._0_4_ = auVar63._8_4_;
              auVar51._8_4_ = auVar51._12_4_;
              auVar15._4_4_ = auVar51._4_4_;
              auVar15._0_4_ = auVar63._8_4_;
              auVar15._8_4_ = auVar51._12_4_;
              auVar15._12_4_ = auVar51._12_4_;
              auVar46 = rsqrtss(auVar51,auVar15);
              auVar100._4_4_ = auVar46._0_4_;
              auVar100._4_4_ =
                   (fVar19 - auVar100._4_4_ * auVar100._4_4_ * auVar63._8_4_ * fVar19) *
                   auVar100._4_4_ + auVar100._4_4_;
              auVar100._4_4_ =
                   (fVar19 - auVar100._4_4_ * auVar100._4_4_ * auVar63._8_4_ * fVar19) *
                   auVar100._4_4_ + auVar100._4_4_;
              auVar26 = blendps(auVar26,auVar87,7);
              auVar105._4_4_ = auVar100._4_4_;
              auVar105._0_4_ = auVar100._4_4_;
              auVar105._8_4_ = in_XMM3_Dc;
              auVar105._12_4_ = in_XMM3_Dd;
              auVar46 = insertps(auVar105,ZEXT416((uint)auVar100._4_4_),0x20);
              auVar72._0_4_ = auVar63._4_4_ * auVar46._0_4_;
              auVar72._4_4_ = auVar72._4_4_ * auVar46._4_4_;
              in_XMM3_Dc = auVar46._8_4_;
              auVar72._8_4_ = auVar72._8_4_ * in_XMM3_Dc;
              in_XMM3_Dd = auVar46._12_4_;
              auVar72._12_4_ = fVar89 * in_XMM3_Dd;
              auVar46 = auVar72;
            }
            else {
              auVar72._4_4_ = 0.0;
              auVar72._8_4_ = 0.0;
              auVar46 = ZEXT816(0);
            }
          }
          in_XMM1 = blendps(auVar30,auVar87,7);
          in_XMM2 = blendps(auVar58,auVar87,7);
          lVar25 = param_1 + (uVar21 | 3) * 0xc;
          *(int *)(lVar25 + lVar23 * 0xc) = auVar46._0_4_;
          *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar72._4_4_;
          *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar72._8_4_;
          uVar21 = uVar21 + 4;
        } while (uVar21 != (param_6 & 0x7ffffffc));
      }
      fVar19 = __real_3f000000;
      fVar18 = __real_3f800000;
      fVar17 = __real_322bcc77;
      if ((ulonglong)(param_6 & 3) != 0) {
        uVar20 = 0;
        do {
          uVar1 = *(uint *)(param_3 + 8 + uVar21 * 0x10);
          if ((int)uVar1 < 1) {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
          }
          else {
            lVar25 = *(longlong *)(param_3 + uVar21 * 0x10);
            if (uVar1 == 1) {
              auVar72._8_4_ = 0.0;
              auVar63._8_4_ = 0.0;
              auVar72._4_4_ = 0.0;
              auVar63._4_4_ = 0.0;
              lVar24 = 0;
            }
            else {
              auVar72._8_4_ = 0.0;
              auVar63._8_4_ = 0.0;
              auVar72._4_4_ = 0.0;
              auVar63._4_4_ = 0.0;
              lVar24 = 0;
              do {
                uVar2 = *(uint *)(lVar25 + lVar24 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar33,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                  auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                  auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                  auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
                }
                uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
                if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                  auVar30 = insertps(auVar34,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                     0x28);
                  auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                  auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                  auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                  auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
                }
                lVar24 = lVar24 + 2;
              } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
              if ((uVar1 & 1) == 0) goto LAB_1405c5298;
            }
            uVar1 = *(uint *)(lVar25 + lVar24 * 4);
            if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
              auVar35._8_8_ = 0;
              auVar35._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
              auVar30 = insertps(auVar35,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28)
              ;
              auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
              auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
              auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
              auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
            }
          }
LAB_1405c5298:
          auVar53._4_4_ = auVar63._8_4_ * auVar63._8_4_;
          auVar53._12_4_ = auVar63._4_4_ * auVar63._4_4_;
          auVar36._4_4_ = auVar53._4_4_;
          auVar36._0_4_ = auVar53._4_4_;
          auVar36._8_4_ = auVar53._12_4_;
          auVar36._12_4_ = auVar53._12_4_;
          auVar37._4_12_ = auVar36._4_12_;
          auVar37._0_4_ =
               auVar53._4_4_ + auVar72._8_4_ * auVar72._8_4_ + auVar72._4_4_ * auVar72._4_4_;
          if ((auVar37._0_4_ != fVar18) ||
             (fVar89 = auVar63._8_4_, auVar100._4_4_ = auVar72._4_4_, auVar100._8_4_ = auVar72._8_4_
             , NAN(auVar37._0_4_) || NAN(fVar18))) {
            if (fVar17 <= auVar37._0_4_) {
              auVar53._0_4_ = auVar37._0_4_;
              auVar53._8_4_ = auVar53._12_4_;
              auVar30 = rsqrtss(auVar53,auVar37);
              fVar89 = auVar30._0_4_;
              fVar89 = (fVar19 - fVar89 * fVar89 * auVar37._0_4_ * fVar19) * fVar89 + fVar89;
              fVar89 = (fVar19 - fVar89 * fVar89 * auVar37._0_4_ * fVar19) * fVar89 + fVar89;
              auVar12._4_4_ = auVar63._8_4_;
              auVar12._0_4_ = auVar72._8_4_;
              auVar12._8_4_ = auVar72._4_4_;
              auVar12._12_4_ = auVar63._4_4_;
              auVar26 = blendps(auVar26,auVar12,7);
              auVar91._4_4_ = fVar89;
              auVar91._0_4_ = fVar89;
              auVar91._8_4_ = in_XMM3_Dc;
              auVar91._12_4_ = in_XMM3_Dd;
              auVar30 = insertps(auVar91,ZEXT416((uint)fVar89),0x20);
              in_XMM3_Dc = auVar30._8_4_;
              in_XMM3_Dd = auVar30._12_4_;
              fVar89 = auVar63._8_4_ * auVar30._4_4_;
              auVar100._4_4_ = auVar72._4_4_ * in_XMM3_Dc;
              auVar100._8_4_ = auVar72._8_4_ * auVar30._0_4_;
            }
            else {
              fVar89 = 0.0;
              auVar100._4_4_ = 0.0;
              auVar100._8_4_ = 0.0;
            }
          }
          auVar10._4_4_ = auVar63._8_4_;
          auVar10._0_4_ = auVar72._8_4_;
          auVar10._8_4_ = auVar72._4_4_;
          auVar10._12_4_ = auVar63._4_4_;
          in_XMM1 = blendps(in_XMM1,auVar10,7);
          auVar11._4_4_ = auVar63._8_4_;
          auVar11._0_4_ = auVar72._8_4_;
          auVar11._8_4_ = auVar72._4_4_;
          auVar11._12_4_ = auVar63._4_4_;
          in_XMM2 = blendps(in_XMM2,auVar11,7);
          lVar25 = param_1 + uVar21 * 0xc;
          *(float *)(lVar25 + lVar23 * 0xc) = auVar100._8_4_;
          *(float *)(lVar25 + 4 + lVar23 * 0xc) = fVar89;
          *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar100._4_4_;
          uVar21 = uVar21 + 1;
          uVar20 = uVar20 + 1;
        } while (uVar20 != (param_6 & 3));
      }
    }
  }
  else if (0 < (int)param_6) {
    lVar23 = (longlong)param_4;
    if (param_6 < 4) {
      uVar21 = 0;
    }
    else {
      uVar21 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar21 * 0x10);
        if ((int)uVar1 < 1) {
          auVar72._8_4_ = 0.0;
          auVar63._8_4_ = 0.0;
          auVar72._4_4_ = 0.0;
          auVar63._4_4_ = 0.0;
        }
        else {
          lVar25 = *(longlong *)(param_3 + uVar21 * 0x10);
          if (uVar1 == 1) {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
            lVar24 = 0;
          }
          else {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
            lVar24 = 0;
            do {
              uVar2 = *(uint *)(lVar25 + lVar24 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar38._8_8_ = 0;
                auVar38._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar38,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
              }
              uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar39._8_8_ = 0;
                auVar39._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar39,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
              }
              lVar24 = lVar24 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
            if ((uVar1 & 1) == 0) goto LAB_1405c54f9;
          }
          uVar1 = *(uint *)(lVar25 + lVar24 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar40._8_8_ = 0;
            auVar40._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = insertps(auVar40,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
            auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
            auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
            auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
          }
        }
LAB_1405c54f9:
        auVar54._4_4_ = auVar63._8_4_ * auVar63._8_4_;
        auVar54._12_4_ = auVar63._4_4_ * auVar63._4_4_;
        auVar41._4_4_ = auVar54._4_4_;
        auVar41._0_4_ = auVar54._4_4_;
        auVar41._8_4_ = auVar54._12_4_;
        auVar41._12_4_ = auVar54._12_4_;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ =
             auVar54._4_4_ + auVar72._8_4_ * auVar72._8_4_ + auVar72._4_4_ * auVar72._4_4_;
        if ((auVar42._0_4_ != fVar18) ||
           (fVar89 = auVar63._8_4_, auVar100._4_4_ = auVar72._4_4_, auVar100._8_4_ = auVar72._8_4_,
           NAN(auVar42._0_4_) || NAN(fVar18))) {
          if (fVar17 <= auVar42._0_4_) {
            auVar54._0_4_ = auVar42._0_4_;
            auVar54._8_4_ = auVar54._12_4_;
            auVar30 = rsqrtss(auVar54,auVar42);
            fVar89 = auVar30._0_4_;
            fVar89 = (fVar19 - fVar89 * fVar89 * auVar42._0_4_ * fVar19) * fVar89 + fVar89;
            fVar89 = (fVar19 - fVar89 * fVar89 * auVar42._0_4_ * fVar19) * fVar89 + fVar89;
            auVar9._4_4_ = auVar63._8_4_;
            auVar9._0_4_ = auVar72._8_4_;
            auVar9._8_4_ = auVar72._4_4_;
            auVar9._12_4_ = auVar63._4_4_;
            auVar26 = blendps(auVar26,auVar9,7);
            auVar92._4_4_ = fVar89;
            auVar92._0_4_ = fVar89;
            auVar92._8_4_ = in_XMM3_Dc;
            auVar92._12_4_ = in_XMM3_Dd;
            auVar30 = insertps(auVar92,ZEXT416((uint)fVar89),0x20);
            in_XMM3_Dc = auVar30._8_4_;
            in_XMM3_Dd = auVar30._12_4_;
            fVar89 = auVar63._8_4_ * auVar30._4_4_;
            auVar100._4_4_ = auVar72._4_4_ * in_XMM3_Dc;
            auVar100._8_4_ = auVar72._8_4_ * auVar30._0_4_;
          }
          else {
            fVar89 = 0.0;
            auVar100._4_4_ = 0.0;
            auVar100._8_4_ = 0.0;
          }
        }
        lVar25 = param_1 + uVar21 * 0xc;
        *(float *)(lVar25 + lVar23 * 0xc) = auVar100._8_4_;
        *(float *)(lVar25 + 4 + lVar23 * 0xc) = fVar89;
        *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar100._4_4_;
        lVar25 = (uVar21 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar25);
        if ((int)uVar1 < 1) {
          auVar43 = ZEXT816(0);
        }
        else {
          lVar25 = *(longlong *)(param_3 + lVar25);
          if (uVar1 == 1) {
            lVar24 = 0;
            auVar30 = ZEXT816(0);
          }
          else {
            auVar43 = ZEXT816(0);
            lVar24 = 0;
            do {
              uVar2 = *(uint *)(lVar25 + lVar24 * 4);
              auVar44 = auVar43;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar55._8_8_ = 0;
                auVar55._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar55,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar44._0_4_ = auVar43._0_4_ + auVar30._0_4_;
                auVar44._4_4_ = auVar43._4_4_ + auVar30._4_4_;
                auVar44._8_4_ = auVar43._8_4_ + auVar30._8_4_;
                auVar44._12_4_ = auVar43._12_4_ + auVar30._12_4_;
              }
              uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
              auVar43 = auVar44;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar56._8_8_ = 0;
                auVar56._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar43._0_4_ = auVar44._0_4_ + auVar30._0_4_;
                auVar43._4_4_ = auVar44._4_4_ + auVar30._4_4_;
                auVar43._8_4_ = auVar44._8_4_ + auVar30._8_4_;
                auVar43._12_4_ = auVar44._12_4_ + auVar30._12_4_;
              }
              lVar24 = lVar24 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
            auVar30 = auVar43;
            if ((uVar1 & 1) == 0) goto LAB_1405c56eb;
          }
          uVar1 = *(uint *)(lVar25 + lVar24 * 4);
          auVar43 = auVar30;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar57._8_8_ = 0;
            auVar57._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar58 = insertps(auVar57,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar43._0_4_ = auVar30._0_4_ + auVar58._0_4_;
            auVar43._4_4_ = auVar30._4_4_ + auVar58._4_4_;
            auVar43._8_4_ = auVar30._8_4_ + auVar58._8_4_;
            auVar43._12_4_ = auVar30._12_4_ + auVar58._12_4_;
          }
        }
LAB_1405c56eb:
        fVar89 = auVar43._0_4_;
        auVar93._4_4_ = auVar43._4_4_;
        auVar93._8_4_ = auVar43._8_4_;
        auVar100._4_4_ = auVar43._12_4_;
        auVar73._4_4_ = auVar93._4_4_ * auVar93._4_4_;
        auVar73._12_4_ = auVar100._4_4_ * auVar100._4_4_;
        auVar59._4_4_ = auVar73._4_4_;
        auVar59._0_4_ = auVar73._4_4_;
        auVar59._8_4_ = auVar73._12_4_;
        auVar59._12_4_ = auVar73._12_4_;
        auVar60._4_12_ = auVar59._4_12_;
        auVar60._0_4_ = auVar73._4_4_ + fVar89 * fVar89 + auVar93._8_4_ * auVar93._8_4_;
        if ((auVar60._0_4_ != fVar18) || (auVar30 = auVar43, NAN(auVar60._0_4_) || NAN(fVar18))) {
          if (fVar17 <= auVar60._0_4_) {
            auVar73._0_4_ = auVar60._0_4_;
            auVar73._8_4_ = auVar73._12_4_;
            auVar30 = rsqrtss(auVar73,auVar60);
            auVar100._8_4_ = auVar30._0_4_;
            auVar100._8_4_ =
                 (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar60._0_4_ * fVar19) *
                 auVar100._8_4_ + auVar100._8_4_;
            auVar100._8_4_ =
                 (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar60._0_4_ * fVar19) *
                 auVar100._8_4_ + auVar100._8_4_;
            auVar26 = blendps(auVar26,auVar43,7);
            auVar106._4_4_ = auVar100._8_4_;
            auVar106._0_4_ = auVar100._8_4_;
            auVar106._8_4_ = in_XMM3_Dc;
            auVar106._12_4_ = in_XMM3_Dd;
            auVar30 = insertps(auVar106,ZEXT416((uint)auVar100._8_4_),0x20);
            auVar93._0_4_ = fVar89 * auVar30._0_4_;
            auVar93._4_4_ = auVar93._4_4_ * auVar30._4_4_;
            in_XMM3_Dc = auVar30._8_4_;
            auVar93._8_4_ = auVar93._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar30._12_4_;
            auVar93._12_4_ = auVar100._4_4_ * in_XMM3_Dd;
            auVar30 = auVar93;
          }
          else {
            auVar93._4_4_ = 0.0;
            auVar93._8_4_ = 0.0;
            auVar30 = ZEXT816(0);
          }
        }
        lVar25 = param_1 + (uVar21 | 1) * 0xc;
        *(int *)(lVar25 + lVar23 * 0xc) = auVar30._0_4_;
        *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar93._4_4_;
        *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar93._8_4_;
        lVar25 = (uVar21 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar25);
        if ((int)uVar1 < 1) {
          auVar61 = ZEXT816(0);
        }
        else {
          lVar25 = *(longlong *)(param_3 + lVar25);
          if (uVar1 == 1) {
            lVar24 = 0;
            auVar30 = ZEXT816(0);
          }
          else {
            auVar61 = ZEXT816(0);
            lVar24 = 0;
            do {
              uVar2 = *(uint *)(lVar25 + lVar24 * 4);
              auVar62 = auVar61;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar74._8_8_ = 0;
                auVar74._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar74,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar62._0_4_ = auVar61._0_4_ + auVar30._0_4_;
                auVar62._4_4_ = auVar61._4_4_ + auVar30._4_4_;
                auVar62._8_4_ = auVar61._8_4_ + auVar30._8_4_;
                auVar62._12_4_ = auVar61._12_4_ + auVar30._12_4_;
              }
              uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
              auVar61 = auVar62;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar75._8_8_ = 0;
                auVar75._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar75,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar61._0_4_ = auVar62._0_4_ + auVar30._0_4_;
                auVar61._4_4_ = auVar62._4_4_ + auVar30._4_4_;
                auVar61._8_4_ = auVar62._8_4_ + auVar30._8_4_;
                auVar61._12_4_ = auVar62._12_4_ + auVar30._12_4_;
              }
              lVar24 = lVar24 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
            auVar30 = auVar61;
            if ((uVar1 & 1) == 0) goto LAB_1405c58db;
          }
          uVar1 = *(uint *)(lVar25 + lVar24 * 4);
          auVar61 = auVar30;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar76._8_8_ = 0;
            auVar76._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar58 = insertps(auVar76,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar61._0_4_ = auVar30._0_4_ + auVar58._0_4_;
            auVar61._4_4_ = auVar30._4_4_ + auVar58._4_4_;
            auVar61._8_4_ = auVar30._8_4_ + auVar58._8_4_;
            auVar61._12_4_ = auVar30._12_4_ + auVar58._12_4_;
          }
        }
LAB_1405c58db:
        fVar89 = auVar61._0_4_;
        auVar107._4_4_ = auVar61._4_4_;
        auVar107._8_4_ = auVar61._8_4_;
        auVar100._4_4_ = auVar61._12_4_;
        auVar94._4_4_ = auVar107._4_4_ * auVar107._4_4_;
        auVar94._12_4_ = auVar100._4_4_ * auVar100._4_4_;
        auVar77._4_4_ = auVar94._4_4_;
        auVar77._0_4_ = auVar94._4_4_;
        auVar77._8_4_ = auVar94._12_4_;
        auVar77._12_4_ = auVar94._12_4_;
        auVar78._4_12_ = auVar77._4_12_;
        auVar78._0_4_ = auVar94._4_4_ + fVar89 * fVar89 + auVar107._8_4_ * auVar107._8_4_;
        if ((auVar78._0_4_ != fVar18) || (auVar30 = auVar61, NAN(auVar78._0_4_) || NAN(fVar18))) {
          if (fVar17 <= auVar78._0_4_) {
            auVar94._0_4_ = auVar78._0_4_;
            auVar94._8_4_ = auVar94._12_4_;
            auVar30 = rsqrtss(auVar94,auVar78);
            auVar100._8_4_ = auVar30._0_4_;
            auVar100._8_4_ =
                 (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar78._0_4_ * fVar19) *
                 auVar100._8_4_ + auVar100._8_4_;
            auVar100._8_4_ =
                 (fVar19 - auVar100._8_4_ * auVar100._8_4_ * auVar78._0_4_ * fVar19) *
                 auVar100._8_4_ + auVar100._8_4_;
            auVar26 = blendps(auVar26,auVar61,7);
            auVar110._4_4_ = auVar100._8_4_;
            auVar110._0_4_ = auVar100._8_4_;
            auVar110._8_4_ = in_XMM3_Dc;
            auVar110._12_4_ = in_XMM3_Dd;
            auVar30 = insertps(auVar110,ZEXT416((uint)auVar100._8_4_),0x20);
            auVar107._0_4_ = fVar89 * auVar30._0_4_;
            auVar107._4_4_ = auVar107._4_4_ * auVar30._4_4_;
            in_XMM3_Dc = auVar30._8_4_;
            auVar107._8_4_ = auVar107._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar30._12_4_;
            auVar107._12_4_ = auVar100._4_4_ * in_XMM3_Dd;
            auVar30 = auVar107;
          }
          else {
            auVar107._4_4_ = 0.0;
            auVar107._8_4_ = 0.0;
            auVar30 = ZEXT816(0);
          }
        }
        lVar25 = param_1 + (uVar21 | 2) * 0xc;
        *(int *)(lVar25 + lVar23 * 0xc) = auVar30._0_4_;
        *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar107._4_4_;
        *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar107._8_4_;
        lVar25 = (uVar21 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar25);
        if ((int)uVar1 < 1) {
          auVar79 = ZEXT816(0);
        }
        else {
          lVar25 = *(longlong *)(param_3 + lVar25);
          if (uVar1 == 1) {
            lVar24 = 0;
            auVar30 = ZEXT816(0);
          }
          else {
            auVar79 = ZEXT816(0);
            lVar24 = 0;
            do {
              uVar2 = *(uint *)(lVar25 + lVar24 * 4);
              auVar80 = auVar79;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar95._8_8_ = 0;
                auVar95._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar95,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar80._0_4_ = auVar79._0_4_ + auVar30._0_4_;
                auVar80._4_4_ = auVar79._4_4_ + auVar30._4_4_;
                auVar80._8_4_ = auVar79._8_4_ + auVar30._8_4_;
                auVar80._12_4_ = auVar79._12_4_ + auVar30._12_4_;
              }
              uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
              auVar79 = auVar80;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar96._8_8_ = 0;
                auVar96._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar96,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar79._0_4_ = auVar80._0_4_ + auVar30._0_4_;
                auVar79._4_4_ = auVar80._4_4_ + auVar30._4_4_;
                auVar79._8_4_ = auVar80._8_4_ + auVar30._8_4_;
                auVar79._12_4_ = auVar80._12_4_ + auVar30._12_4_;
              }
              lVar24 = lVar24 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
            auVar30 = auVar79;
            if ((uVar1 & 1) == 0) goto LAB_1405c5acb;
          }
          uVar1 = *(uint *)(lVar25 + lVar24 * 4);
          auVar79 = auVar30;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar97._8_8_ = 0;
            auVar97._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar58 = insertps(auVar97,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar79._0_4_ = auVar30._0_4_ + auVar58._0_4_;
            auVar79._4_4_ = auVar30._4_4_ + auVar58._4_4_;
            auVar79._8_4_ = auVar30._8_4_ + auVar58._8_4_;
            auVar79._12_4_ = auVar30._12_4_ + auVar58._12_4_;
          }
        }
LAB_1405c5acb:
        auVar6._4_4_ = auVar63._8_4_;
        auVar6._0_4_ = auVar72._8_4_;
        auVar6._8_4_ = auVar72._4_4_;
        auVar6._12_4_ = auVar63._4_4_;
        auVar30 = blendps(in_XMM1,auVar6,7);
        auVar7._4_4_ = auVar63._8_4_;
        auVar7._0_4_ = auVar72._8_4_;
        auVar7._8_4_ = auVar72._4_4_;
        auVar7._12_4_ = auVar63._4_4_;
        auVar58 = blendps(in_XMM2,auVar7,7);
        auVar30 = blendps(auVar30,auVar43,7);
        auVar58 = blendps(auVar58,auVar43,7);
        auVar30 = blendps(auVar30,auVar61,7);
        auVar58 = blendps(auVar58,auVar61,7);
        auVar72._4_4_ = auVar79._0_4_;
        auVar63._4_4_ = auVar79._4_4_;
        auVar63._8_4_ = auVar79._8_4_;
        fVar89 = auVar79._12_4_;
        auVar45._4_4_ = auVar63._4_4_ * auVar63._4_4_;
        auVar45._12_4_ = fVar89 * fVar89;
        auVar72._8_4_ =
             auVar45._4_4_ + auVar72._4_4_ * auVar72._4_4_ + auVar63._8_4_ * auVar63._8_4_;
        if ((auVar72._8_4_ != fVar18) || (auVar46 = auVar79, NAN(auVar72._8_4_) || NAN(fVar18))) {
          if (fVar17 <= auVar72._8_4_) {
            auVar45._0_4_ = auVar72._8_4_;
            auVar45._8_4_ = auVar45._12_4_;
            auVar8._4_4_ = auVar45._4_4_;
            auVar8._0_4_ = auVar72._8_4_;
            auVar8._8_4_ = auVar45._12_4_;
            auVar8._12_4_ = auVar45._12_4_;
            auVar46 = rsqrtss(auVar45,auVar8);
            auVar100._4_4_ = auVar46._0_4_;
            auVar100._4_4_ =
                 (fVar19 - auVar100._4_4_ * auVar100._4_4_ * auVar72._8_4_ * fVar19) *
                 auVar100._4_4_ + auVar100._4_4_;
            auVar100._4_4_ =
                 (fVar19 - auVar100._4_4_ * auVar100._4_4_ * auVar72._8_4_ * fVar19) *
                 auVar100._4_4_ + auVar100._4_4_;
            auVar26 = blendps(auVar26,auVar79,7);
            auVar98._4_4_ = auVar100._4_4_;
            auVar98._0_4_ = auVar100._4_4_;
            auVar98._8_4_ = in_XMM3_Dc;
            auVar98._12_4_ = in_XMM3_Dd;
            auVar46 = insertps(auVar98,ZEXT416((uint)auVar100._4_4_),0x20);
            auVar63._0_4_ = auVar72._4_4_ * auVar46._0_4_;
            auVar63._4_4_ = auVar63._4_4_ * auVar46._4_4_;
            in_XMM3_Dc = auVar46._8_4_;
            auVar63._8_4_ = auVar63._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar46._12_4_;
            auVar63._12_4_ = fVar89 * in_XMM3_Dd;
            auVar46 = auVar63;
          }
          else {
            auVar63._4_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar46 = ZEXT816(0);
          }
        }
        in_XMM1 = blendps(auVar30,auVar79,7);
        in_XMM2 = blendps(auVar58,auVar79,7);
        lVar25 = param_1 + (uVar21 | 3) * 0xc;
        *(int *)(lVar25 + lVar23 * 0xc) = auVar46._0_4_;
        *(float *)(lVar25 + 4 + lVar23 * 0xc) = auVar63._4_4_;
        *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar63._8_4_;
        uVar21 = uVar21 + 4;
      } while (uVar21 != (param_6 & 0x7ffffffc));
    }
    fVar19 = __real_3f000000;
    fVar18 = __real_3f800000;
    fVar17 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar20 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar21 * 0x10);
        if ((int)uVar1 < 1) {
          auVar72._8_4_ = 0.0;
          auVar63._8_4_ = 0.0;
          auVar72._4_4_ = 0.0;
          auVar63._4_4_ = 0.0;
        }
        else {
          lVar25 = *(longlong *)(param_3 + uVar21 * 0x10);
          if (uVar1 == 1) {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
            lVar24 = 0;
          }
          else {
            auVar72._8_4_ = 0.0;
            auVar63._8_4_ = 0.0;
            auVar72._4_4_ = 0.0;
            auVar63._4_4_ = 0.0;
            lVar24 = 0;
            do {
              uVar2 = *(uint *)(lVar25 + lVar24 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar27,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
              }
              uVar2 = *(uint *)(lVar25 + 4 + lVar24 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar30 = insertps(auVar28,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
                auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
                auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
                auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
              }
              lVar24 = lVar24 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar24);
            if ((uVar1 & 1) == 0) goto LAB_1405c5058;
          }
          uVar1 = *(uint *)(lVar25 + lVar24 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar30 = insertps(auVar29,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar72._8_4_ = auVar72._8_4_ + auVar30._0_4_;
            auVar63._8_4_ = auVar63._8_4_ + auVar30._4_4_;
            auVar72._4_4_ = auVar72._4_4_ + auVar30._8_4_;
            auVar63._4_4_ = auVar63._4_4_ + auVar30._12_4_;
          }
        }
LAB_1405c5058:
        auVar52._4_4_ = auVar63._8_4_ * auVar63._8_4_;
        auVar52._12_4_ = auVar63._4_4_ * auVar63._4_4_;
        auVar31._4_4_ = auVar52._4_4_;
        auVar31._0_4_ = auVar52._4_4_;
        auVar31._8_4_ = auVar52._12_4_;
        auVar31._12_4_ = auVar52._12_4_;
        auVar32._4_12_ = auVar31._4_12_;
        auVar32._0_4_ =
             auVar52._4_4_ + auVar72._8_4_ * auVar72._8_4_ + auVar72._4_4_ * auVar72._4_4_;
        if ((auVar32._0_4_ != fVar18) ||
           (fVar89 = auVar63._8_4_, auVar100._4_4_ = auVar72._4_4_, auVar100._8_4_ = auVar72._8_4_,
           NAN(auVar32._0_4_) || NAN(fVar18))) {
          if (fVar17 <= auVar32._0_4_) {
            auVar52._0_4_ = auVar32._0_4_;
            auVar52._8_4_ = auVar52._12_4_;
            auVar30 = rsqrtss(auVar52,auVar32);
            fVar89 = auVar30._0_4_;
            fVar89 = (fVar19 - fVar89 * fVar89 * auVar32._0_4_ * fVar19) * fVar89 + fVar89;
            fVar89 = (fVar19 - fVar89 * fVar89 * auVar32._0_4_ * fVar19) * fVar89 + fVar89;
            auVar5._4_4_ = auVar63._8_4_;
            auVar5._0_4_ = auVar72._8_4_;
            auVar5._8_4_ = auVar72._4_4_;
            auVar5._12_4_ = auVar63._4_4_;
            auVar26 = blendps(auVar26,auVar5,7);
            auVar90._4_4_ = fVar89;
            auVar90._0_4_ = fVar89;
            auVar90._8_4_ = in_XMM3_Dc;
            auVar90._12_4_ = in_XMM3_Dd;
            auVar30 = insertps(auVar90,ZEXT416((uint)fVar89),0x20);
            in_XMM3_Dc = auVar30._8_4_;
            in_XMM3_Dd = auVar30._12_4_;
            fVar89 = auVar63._8_4_ * auVar30._4_4_;
            auVar100._4_4_ = auVar72._4_4_ * in_XMM3_Dc;
            auVar100._8_4_ = auVar72._8_4_ * auVar30._0_4_;
          }
          else {
            fVar89 = 0.0;
            auVar100._4_4_ = 0.0;
            auVar100._8_4_ = 0.0;
          }
        }
        auVar3._4_4_ = auVar63._8_4_;
        auVar3._0_4_ = auVar72._8_4_;
        auVar3._8_4_ = auVar72._4_4_;
        auVar3._12_4_ = auVar63._4_4_;
        in_XMM1 = blendps(in_XMM1,auVar3,7);
        auVar4._4_4_ = auVar63._8_4_;
        auVar4._0_4_ = auVar72._8_4_;
        auVar4._8_4_ = auVar72._4_4_;
        auVar4._12_4_ = auVar63._4_4_;
        in_XMM2 = blendps(in_XMM2,auVar4,7);
        lVar25 = param_1 + uVar21 * 0xc;
        *(float *)(lVar25 + lVar23 * 0xc) = auVar100._8_4_;
        *(float *)(lVar25 + 4 + lVar23 * 0xc) = fVar89;
        *(float *)(lVar25 + 8 + lVar23 * 0xc) = auVar100._4_4_;
        uVar21 = uVar21 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != (param_6 & 3));
    }
  }
  return;
}

// GetFaceNormals_sse4 @ 1405c63d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar38;
  undefined1 auVar37 [16];
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
  float fVar49;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar50 [16];
  float fVar54;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar65;
  float fVar66;
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar78;
  float fVar79;
  undefined1 auVar75 [16];
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  undefined1 auVar82 [16];
  float fVar85;
  undefined1 auVar86 [16];
  
  fVar31 = _UNK_1508be49c;
  fVar30 = _UNK_1508be498;
  fVar29 = _UNK_1508be494;
  fVar25 = ___xmm_00800000008000000080000000800000;
  auVar42 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar21 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar21 = param_4;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar15 = 0x20;
    uVar7 = 0;
    do {
      auVar45 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar15);
      auVar56 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar15);
      piVar1 = (int *)(param_3 + lVar15);
      uVar38 = auVar56._0_4_;
      auVar82._4_4_ = uVar38;
      auVar82._0_4_ = uVar38;
      auVar82._8_4_ = uVar38;
      auVar82._12_4_ = uVar38;
      iVar14 = auVar45._12_4_;
      auVar46._4_4_ = iVar14;
      auVar46._0_4_ = auVar45._0_4_;
      auVar46._8_4_ = auVar45._4_4_;
      auVar46._12_4_ = iVar14;
      auVar55 = pblendw(auVar82,auVar46,0x3f);
      auVar69._0_8_ = auVar45._8_8_;
      auVar69._8_4_ = auVar45._8_4_;
      auVar69._12_4_ = iVar14;
      auVar70 = pblendw(auVar69,auVar56,0xc);
      lVar10 = (longlong)(auVar45._0_4_ * 3);
      lVar12 = (longlong)(iVar14 * 3);
      lVar8 = (longlong)(auVar56._8_4_ * 3);
      lVar18 = (longlong)(piVar1[1] * 3);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar46 = insertps(auVar45,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar39 = insertps(auVar45,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar45 = insertps(auVar45,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      lVar10 = (longlong)(auVar55._8_4_ * 3);
      lVar12 = (longlong)(auVar55._12_4_ * 3);
      lVar8 = (longlong)(auVar56._12_4_ * 3);
      lVar18 = (longlong)(piVar1[2] * 3);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar55 = insertps(auVar56,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar75 = insertps(auVar56,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar63 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      lVar10 = (longlong)(auVar70._0_4_ * 3);
      lVar12 = (longlong)(auVar70._4_4_ * 3);
      lVar8 = (longlong)(*piVar1 * 3);
      lVar18 = (longlong)(piVar1[3] * 3);
      auVar56 = insertps(ZEXT416(*(uint *)(param_2 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + lVar12 * 4),0x10);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar8 * 4),0x20);
      auVar56 = insertps(auVar56,*(undefined4 *)(param_2 + lVar18 * 4),0x30);
      auVar70 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar12 * 4),0x10);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + 4 + lVar8 * 4),0x20);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + 4 + lVar18 * 4),0x30);
      auVar82 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar10 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar12 * 4),0x10);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_2 + 8 + lVar8 * 4),0x20);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_2 + 8 + lVar18 * 4),0x30);
      fVar54 = auVar55._0_4_ - auVar46._0_4_;
      fVar59 = auVar55._4_4_ - auVar46._4_4_;
      fVar60 = auVar55._8_4_ - auVar46._8_4_;
      fVar61 = auVar55._12_4_ - auVar46._12_4_;
      fVar74 = auVar75._0_4_ - auVar39._0_4_;
      fVar78 = auVar75._4_4_ - auVar39._4_4_;
      fVar79 = auVar75._8_4_ - auVar39._8_4_;
      fVar80 = auVar75._12_4_ - auVar39._12_4_;
      fVar62 = auVar63._0_4_ - auVar45._0_4_;
      fVar65 = auVar63._4_4_ - auVar45._4_4_;
      fVar66 = auVar63._8_4_ - auVar45._8_4_;
      fVar67 = auVar63._12_4_ - auVar45._12_4_;
      fVar49 = auVar56._0_4_ - auVar46._0_4_;
      fVar51 = auVar56._4_4_ - auVar46._4_4_;
      fVar52 = auVar56._8_4_ - auVar46._8_4_;
      fVar53 = auVar56._12_4_ - auVar46._12_4_;
      fVar68 = auVar70._0_4_ - auVar39._0_4_;
      fVar71 = auVar70._4_4_ - auVar39._4_4_;
      fVar72 = auVar70._8_4_ - auVar39._8_4_;
      fVar73 = auVar70._12_4_ - auVar39._12_4_;
      fVar81 = auVar82._0_4_ - auVar45._0_4_;
      fVar83 = auVar82._4_4_ - auVar45._4_4_;
      fVar84 = auVar82._8_4_ - auVar45._8_4_;
      fVar85 = auVar82._12_4_ - auVar45._12_4_;
      auVar76._0_4_ = fVar74 * fVar49 - fVar68 * fVar54;
      auVar76._4_4_ = fVar78 * fVar51 - fVar71 * fVar59;
      auVar76._8_4_ = fVar79 * fVar52 - fVar72 * fVar60;
      auVar76._12_4_ = fVar80 * fVar53 - fVar73 * fVar61;
      auVar64._0_4_ = fVar62 * fVar68 - fVar81 * fVar74;
      auVar64._4_4_ = fVar65 * fVar71 - fVar83 * fVar78;
      auVar64._8_4_ = fVar66 * fVar72 - fVar84 * fVar79;
      auVar64._12_4_ = fVar67 * fVar73 - fVar85 * fVar80;
      auVar55._0_4_ = fVar54 * fVar81 - fVar49 * fVar62;
      auVar55._4_4_ = fVar59 * fVar83 - fVar51 * fVar65;
      auVar55._8_4_ = fVar60 * fVar84 - fVar52 * fVar66;
      auVar55._12_4_ = fVar61 * fVar85 - fVar53 * fVar67;
      auVar63._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar64._0_4_ * auVar64._0_4_;
      auVar63._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar64._4_4_ * auVar64._4_4_;
      auVar63._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar64._8_4_ * auVar64._8_4_;
      auVar63._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar64._12_4_ * auVar64._12_4_;
      auVar45._0_4_ = auVar76._0_4_ * auVar76._0_4_ + auVar63._0_4_;
      auVar45._4_4_ = auVar76._4_4_ * auVar76._4_4_ + auVar63._4_4_;
      auVar45._8_4_ = auVar76._8_4_ * auVar76._8_4_ + auVar63._8_4_;
      auVar45._12_4_ = auVar76._12_4_ * auVar76._12_4_ + auVar63._12_4_;
      auVar39 = sqrtps(auVar63,auVar45);
      uVar20 = -(uint)(auVar45._0_4_ <= fVar25);
      uVar22 = -(uint)(auVar45._4_4_ <= fVar29);
      uVar23 = -(uint)(auVar45._8_4_ <= fVar30);
      uVar24 = -(uint)(auVar45._12_4_ <= fVar31);
      auVar56._4_4_ = uVar22;
      auVar56._0_4_ = uVar20;
      auVar56._8_4_ = uVar23;
      auVar56._12_4_ = uVar24;
      auVar46 = divps(auVar64,auVar39);
      auVar45 = divps(auVar55,auVar39);
      auVar55 = divps(auVar76,auVar39);
      auVar56 = blendvps(auVar46,auVar42,auVar56);
      auVar70._0_4_ = ~uVar20 & auVar45._0_4_;
      auVar70._4_4_ = ~uVar22 & auVar45._4_4_;
      auVar70._8_4_ = ~uVar23 & auVar45._8_4_;
      auVar70._12_4_ = ~uVar24 & auVar45._12_4_;
      auVar39._0_4_ = ~uVar20 & auVar55._0_4_;
      auVar39._4_4_ = ~uVar22 & auVar55._4_4_;
      auVar39._8_4_ = ~uVar23 & auVar55._8_4_;
      auVar39._12_4_ = ~uVar24 & auVar55._12_4_;
      auVar45 = insertps(auVar56,auVar70,0x30);
      auVar75._4_4_ = auVar70._8_4_;
      auVar75._0_4_ = auVar70._4_4_;
      auVar75._8_4_ = auVar39._0_4_;
      auVar75._12_4_ = auVar39._4_4_;
      auVar45 = insertps(auVar45,auVar39,0x20);
      puVar4 = (undefined4 *)(param_1 + -0x20 + lVar15);
      *puVar4 = auVar45._0_4_;
      puVar4[1] = auVar45._12_4_;
      puVar4[2] = auVar45._8_4_;
      puVar4[3] = auVar45._4_4_;
      auVar45 = blendps(auVar75,auVar56,4);
      puVar4 = (undefined4 *)(param_1 + -0x10 + lVar15);
      *puVar4 = auVar45._0_4_;
      puVar4[1] = auVar45._12_4_;
      puVar4[2] = auVar45._8_4_;
      puVar4[3] = auVar45._4_4_;
      puVar2 = (uint *)(param_1 + lVar15);
      *puVar2 = auVar39._8_4_;
      puVar2[1] = auVar56._12_4_;
      puVar2[2] = auVar70._12_4_;
      puVar2[3] = auVar39._12_4_;
      lVar15 = lVar15 + 0x30;
      uVar7 = uVar7 + 4;
    } while ((int)uVar7 < (int)(uVar21 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar42._0_4_ =
       -(uint)((int)(uVar7 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar42._4_4_ =
       -(uint)((int)(uVar7 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar42._8_4_ = -(uint)((int)(uVar7 | _UNK_150631e08) < (int)param_4);
  auVar42._12_4_ = -(uint)((int)(uVar7 | _UNK_150631e0c) < (int)param_4);
  pauVar3 = (undefined1 (*) [16])(param_3 + (ulonglong)uVar7 * 0xc);
  iVar14 = movmskps(param_4,auVar42);
  bVar6 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar45 = *pauVar3;
    auVar56 = pauVar3[1];
    uVar38 = auVar56._0_4_;
    auVar41._4_4_ = uVar38;
    auVar41._0_4_ = uVar38;
    auVar41._8_4_ = uVar38;
    auVar41._12_4_ = uVar38;
    uVar38 = auVar45._12_4_;
    auVar34._0_8_ = CONCAT44(uVar38,auVar45._0_4_);
    auVar34._8_4_ = auVar45._4_4_;
    auVar34._12_4_ = uVar38;
    auVar39 = pblendw(auVar41,auVar34,0x3f);
    auVar58._0_8_ = auVar45._8_8_;
    auVar58._8_4_ = auVar45._8_4_;
    auVar58._12_4_ = uVar38;
    auVar45 = pblendw(auVar58,auVar56,0xc);
    auVar47._0_8_ = CONCAT44(*(undefined4 *)(pauVar3[2] + 4),auVar56._8_4_);
    auVar47._8_4_ = auVar56._12_4_;
    auVar47._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar33._8_8_ = auVar47._0_8_;
    auVar33._0_8_ = auVar34._0_8_;
    auVar40._8_8_ = auVar47._8_8_;
    auVar40._0_8_ = auVar39._8_8_;
    auVar57._0_8_ = auVar45._0_8_;
    auVar57._8_4_ = *(undefined4 *)pauVar3[2];
    auVar57._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar42._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar42._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar42._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar42._12_4_;
    lVar15 = extractps(auVar32,1);
    lVar8 = extractps(auVar32,2);
    lVar10 = extractps(auVar32,3);
    auVar33._4_4_ = *(undefined4 *)(*pauVar3 + lVar15);
    auVar33._0_4_ = *(undefined4 *)*pauVar3;
    auVar33._12_4_ = *(undefined4 *)(*pauVar3 + lVar10);
    auVar33._8_4_ = *(undefined4 *)(*pauVar3 + lVar8);
    auVar45 = ___xmm_000000280000001c0000001000000004 & auVar42;
    auVar40._4_4_ = *(undefined4 *)(*pauVar3 + auVar45._4_4_);
    auVar40._0_4_ = *(undefined4 *)(*pauVar3 + auVar45._0_4_);
    auVar40._12_4_ = *(undefined4 *)(*pauVar3 + auVar45._12_4_);
    auVar40._8_4_ = *(undefined4 *)(*pauVar3 + auVar45._8_4_);
    auVar45 = ___xmm_0000002c000000200000001400000008 & auVar42;
    auVar57._4_4_ = *(undefined4 *)(*pauVar3 + auVar45._4_4_);
    auVar57._0_4_ = *(undefined4 *)(*pauVar3 + auVar45._0_4_);
    auVar57._12_4_ = *(undefined4 *)(*pauVar3 + auVar45._12_4_);
    auVar57._8_4_ = *(undefined4 *)(*pauVar3 + auVar45._8_4_);
  }
  auVar50._4_4_ = auVar33._4_4_ * 3;
  auVar50._0_4_ = auVar33._0_4_ * 3;
  auVar50._8_4_ = auVar33._8_4_ * 3;
  auVar50._12_4_ = auVar33._12_4_ * 3;
  auVar50 = auVar50 & auVar42;
  lVar15 = param_2 + (longlong)auVar50._0_4_ * 4;
  lVar8 = param_2 + (longlong)auVar50._4_4_ * 4;
  lVar10 = param_2 + (longlong)auVar50._8_4_ * 4;
  auVar70 = ___xmm_00000004000000040000000400000004 & auVar42;
  uVar13 = (ulonglong)auVar70._4_4_;
  uVar11 = (ulonglong)auVar70._8_4_;
  uVar16 = (ulonglong)auVar70._0_4_;
  auVar45 = insertps(ZEXT416(*(uint *)(uVar16 + lVar15)),*(undefined4 *)(uVar13 + lVar8),0x10);
  auVar45 = insertps(auVar45,*(undefined4 *)(uVar11 + lVar10),0x20);
  auVar75 = ___xmm_00000008000000080000000800000008 & auVar42;
  uVar19 = (ulonglong)auVar75._4_4_;
  uVar9 = (ulonglong)auVar75._8_4_;
  uVar17 = (ulonglong)auVar75._0_4_;
  auVar56 = insertps(ZEXT416(*(uint *)(uVar17 + lVar15)),*(undefined4 *)(uVar19 + lVar8),0x10);
  auVar56 = insertps(auVar56,*(undefined4 *)(uVar9 + lVar10),0x20);
  auVar77._4_4_ = auVar40._4_4_ * 3;
  auVar77._0_4_ = auVar40._0_4_ * 3;
  auVar77._8_4_ = auVar40._8_4_ * 3;
  auVar77._12_4_ = auVar40._12_4_ * 3;
  auVar77 = auVar77 & auVar42;
  lVar15 = param_2 + (longlong)auVar77._0_4_ * 4;
  auVar86._4_4_ = auVar57._4_4_ * 3;
  auVar86._0_4_ = auVar57._0_4_ * 3;
  auVar86._8_4_ = auVar57._8_4_ * 3;
  auVar86._12_4_ = auVar57._12_4_ * 3;
  auVar86 = auVar86 & auVar42;
  lVar8 = param_2 + (longlong)auVar86._0_4_ * 4;
  lVar10 = param_2 + (longlong)auVar77._4_4_ * 4;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar16 + lVar15)),*(undefined4 *)(uVar13 + lVar10),0x10);
  auVar46 = insertps(ZEXT416(*(uint *)(uVar17 + lVar15)),*(undefined4 *)(uVar19 + lVar10),0x10);
  lVar15 = param_2 + (longlong)auVar77._8_4_ * 4;
  auVar39 = insertps(auVar42,*(undefined4 *)(uVar11 + lVar15),0x20);
  auVar46 = insertps(auVar46,*(undefined4 *)(uVar9 + lVar15),0x20);
  lVar15 = param_2 + (longlong)auVar86._4_4_ * 4;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar16 + lVar8)),*(undefined4 *)(uVar13 + lVar15),0x10);
  auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar8)),*(undefined4 *)(uVar19 + lVar15),0x10);
  lVar15 = param_2 + (longlong)auVar86._8_4_ * 4;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar11 + lVar15),0x20);
  auVar63 = insertps(auVar55,*(undefined4 *)(uVar9 + lVar15),0x20);
  auVar55 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar50._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar50._4_4_ * 4),0x10);
  uVar11 = (ulonglong)auVar70._12_4_;
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar50._8_4_ * 4),0x20);
  lVar15 = param_2 + (longlong)auVar50._12_4_ * 4;
  auVar82 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar50._12_4_ * 4),0x30);
  auVar45 = insertps(auVar45,*(undefined4 *)(uVar11 + lVar15),0x30);
  uVar9 = (ulonglong)auVar75._12_4_;
  auVar56 = insertps(auVar56,*(undefined4 *)(uVar9 + lVar15),0x30);
  auVar55 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar77._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar77._4_4_ * 4),0x10);
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar77._8_4_ * 4),0x20);
  auVar55 = insertps(auVar55,*(undefined4 *)(param_2 + (longlong)auVar77._12_4_ * 4),0x30);
  lVar15 = param_2 + (longlong)auVar77._12_4_ * 4;
  auVar39 = insertps(auVar39,*(undefined4 *)(uVar11 + lVar15),0x30);
  auVar46 = insertps(auVar46,*(undefined4 *)(uVar9 + lVar15),0x30);
  auVar70 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar86._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar86._4_4_ * 4),0x10);
  auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + (longlong)auVar86._8_4_ * 4),0x20);
  auVar70 = insertps(auVar70,*(undefined4 *)(param_2 + (longlong)auVar86._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar86._12_4_ * 4;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar11 + param_2),0x30);
  auVar63 = insertps(auVar63,*(undefined4 *)(uVar9 + param_2),0x30);
  puVar4 = (undefined4 *)(param_1 + (ulonglong)uVar7 * 0xc);
  fVar62 = auVar55._0_4_ - auVar82._0_4_;
  fVar65 = auVar55._4_4_ - auVar82._4_4_;
  fVar66 = auVar55._8_4_ - auVar82._8_4_;
  fVar67 = auVar55._12_4_ - auVar82._12_4_;
  fVar49 = auVar39._0_4_ - auVar45._0_4_;
  fVar51 = auVar39._4_4_ - auVar45._4_4_;
  fVar52 = auVar39._8_4_ - auVar45._8_4_;
  fVar53 = auVar39._12_4_ - auVar45._12_4_;
  fVar54 = auVar46._0_4_ - auVar56._0_4_;
  fVar59 = auVar46._4_4_ - auVar56._4_4_;
  fVar60 = auVar46._8_4_ - auVar56._8_4_;
  fVar61 = auVar46._12_4_ - auVar56._12_4_;
  fVar74 = auVar70._0_4_ - auVar82._0_4_;
  fVar78 = auVar70._4_4_ - auVar82._4_4_;
  fVar79 = auVar70._8_4_ - auVar82._8_4_;
  fVar80 = auVar70._12_4_ - auVar82._12_4_;
  fVar25 = auVar42._0_4_ - auVar45._0_4_;
  fVar29 = auVar42._4_4_ - auVar45._4_4_;
  fVar30 = auVar42._8_4_ - auVar45._8_4_;
  fVar31 = auVar42._12_4_ - auVar45._12_4_;
  fVar68 = auVar63._0_4_ - auVar56._0_4_;
  fVar71 = auVar63._4_4_ - auVar56._4_4_;
  fVar72 = auVar63._8_4_ - auVar56._8_4_;
  fVar73 = auVar63._12_4_ - auVar56._12_4_;
  auVar43._0_4_ = fVar49 * fVar74 - fVar25 * fVar62;
  auVar43._4_4_ = fVar51 * fVar78 - fVar29 * fVar65;
  auVar43._8_4_ = fVar52 * fVar79 - fVar30 * fVar66;
  auVar43._12_4_ = fVar53 * fVar80 - fVar31 * fVar67;
  auVar48._0_4_ = fVar54 * fVar25 - fVar68 * fVar49;
  auVar48._4_4_ = fVar59 * fVar29 - fVar71 * fVar51;
  auVar48._8_4_ = fVar60 * fVar30 - fVar72 * fVar52;
  auVar48._12_4_ = fVar61 * fVar31 - fVar73 * fVar53;
  auVar37._0_4_ = fVar62 * fVar68 - fVar74 * fVar54;
  auVar37._4_4_ = fVar65 * fVar71 - fVar78 * fVar59;
  auVar37._8_4_ = fVar66 * fVar72 - fVar79 * fVar60;
  auVar37._12_4_ = fVar67 * fVar73 - fVar80 * fVar61;
  auVar35._0_4_ = auVar37._0_4_ * auVar37._0_4_ + auVar48._0_4_ * auVar48._0_4_;
  auVar35._4_4_ = auVar37._4_4_ * auVar37._4_4_ + auVar48._4_4_ * auVar48._4_4_;
  auVar35._8_4_ = auVar37._8_4_ * auVar37._8_4_ + auVar48._8_4_ * auVar48._8_4_;
  auVar35._12_4_ = auVar37._12_4_ * auVar37._12_4_ + auVar48._12_4_ * auVar48._12_4_;
  auVar26._0_4_ = auVar43._0_4_ * auVar43._0_4_ + auVar35._0_4_;
  auVar26._4_4_ = auVar43._4_4_ * auVar43._4_4_ + auVar35._4_4_;
  auVar26._8_4_ = auVar43._8_4_ * auVar43._8_4_ + auVar35._8_4_;
  auVar26._12_4_ = auVar43._12_4_ * auVar43._12_4_ + auVar35._12_4_;
  auVar42 = sqrtps(auVar35,auVar26);
  uVar21 = -(uint)(auVar26._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar7 = -(uint)(auVar26._4_4_ <= _UNK_1508be494);
  uVar20 = -(uint)(auVar26._8_4_ <= _UNK_1508be498);
  uVar22 = -(uint)(auVar26._12_4_ <= _UNK_1508be49c);
  auVar27._4_4_ = uVar7;
  auVar27._0_4_ = uVar21;
  auVar27._8_4_ = uVar20;
  auVar27._12_4_ = uVar22;
  auVar56 = divps(auVar48,auVar42);
  auVar45 = divps(auVar37,auVar42);
  auVar56 = blendvps(auVar56,___xmm_3f8000003f8000003f8000003f800000,auVar27);
  auVar42 = divps(auVar43,auVar42);
  auVar36._0_4_ = ~uVar21 & auVar45._0_4_;
  auVar36._4_4_ = ~uVar7 & auVar45._4_4_;
  auVar36._8_4_ = ~uVar20 & auVar45._8_4_;
  auVar36._12_4_ = ~uVar22 & auVar45._12_4_;
  auVar28._0_4_ = ~uVar21 & auVar42._0_4_;
  auVar28._4_4_ = ~uVar7 & auVar42._4_4_;
  auVar28._8_4_ = ~uVar20 & auVar42._8_4_;
  auVar28._12_4_ = ~uVar22 & auVar42._12_4_;
  if ((~bVar6 & 0xf) == 0) {
    auVar42 = insertps(auVar56,auVar36,0x30);
    auVar44._4_4_ = auVar36._8_4_;
    auVar44._0_4_ = auVar36._4_4_;
    auVar44._8_4_ = auVar28._0_4_;
    auVar44._12_4_ = auVar28._4_4_;
    auVar42 = insertps(auVar42,auVar28,0x20);
    *puVar4 = auVar42._0_4_;
    puVar4[1] = auVar42._12_4_;
    puVar4[2] = auVar42._8_4_;
    puVar4[3] = auVar42._4_4_;
    auVar42 = blendps(auVar44,auVar56,4);
    puVar4[4] = auVar42._0_4_;
    puVar4[5] = auVar42._12_4_;
    puVar4[6] = auVar42._8_4_;
    puVar4[7] = auVar42._4_4_;
    puVar4[8] = auVar28._8_4_;
    puVar4[9] = auVar56._12_4_;
    puVar4[10] = auVar36._12_4_;
    puVar4[0xb] = auVar28._12_4_;
  }
  else {
    if ((bVar6 & 1) != 0) {
      *puVar4 = auVar56._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar56,1);
      *(undefined8 *)(puVar4 + 3) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar56,2);
      *(undefined8 *)(puVar4 + 6) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar56,3);
      *(undefined8 *)(puVar4 + 9) = uVar5;
    }
    if ((bVar6 & 1) != 0) {
      puVar4[1] = auVar36._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar36,1);
      *(undefined8 *)(puVar4 + 4) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar36,2);
      *(undefined8 *)(puVar4 + 7) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar36,3);
      *(undefined8 *)(puVar4 + 10) = uVar5;
    }
    if ((bVar6 & 1) != 0) {
      puVar4[2] = auVar28._0_4_;
    }
    if ((bVar6 & 2) != 0) {
      uVar5 = extractps(auVar28,1);
      *(undefined8 *)(puVar4 + 5) = uVar5;
    }
    if ((bVar6 & 4) != 0) {
      uVar5 = extractps(auVar28,2);
      *(undefined8 *)(puVar4 + 8) = uVar5;
    }
    if ((char)bVar6 < '\0') {
      uVar5 = extractps(auVar28,3);
      *(undefined8 *)(puVar4 + 0xb) = uVar5;
    }
  }
  return;
}

// GetPointNormals_sse4 @ 1405c6c90

void GetPointNormals_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 in_XMM0 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  float in_XMM3_Dc;
  float in_XMM3_Dd;
  float fVar18;
  float fVar19;
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
  float fVar51;
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
  
  fVar12 = __real_3f000000;
  fVar11 = __real_3f800000;
  fVar10 = __real_322bcc77;
  if (0 < (int)param_6) {
    lVar15 = (longlong)param_4;
    if (param_6 < 4) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar14 * 0x10);
        if ((int)uVar1 < 1) {
          auVar42._8_4_ = 0.0;
          fVar18 = 0.0;
          auVar42._4_4_ = 0.0;
          fVar19 = 0.0;
        }
        else {
          lVar17 = *(longlong *)(param_3 + uVar14 * 0x10);
          if (uVar1 == 1) {
            auVar42._8_4_ = 0.0;
            fVar18 = 0.0;
            auVar42._4_4_ = 0.0;
            fVar19 = 0.0;
            lVar16 = 0;
          }
          else {
            auVar42._8_4_ = 0.0;
            fVar18 = 0.0;
            auVar42._4_4_ = 0.0;
            fVar19 = 0.0;
            lVar16 = 0;
            do {
              uVar2 = *(uint *)(lVar17 + lVar16 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar23._8_8_ = 0;
                auVar23._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar23,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
                fVar18 = fVar18 + auVar23._4_4_;
                auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
                fVar19 = fVar19 + auVar23._12_4_;
              }
              uVar2 = *(uint *)(lVar17 + 4 + lVar16 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar37._8_8_ = 0;
                auVar37._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar37,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
                fVar18 = fVar18 + auVar23._4_4_;
                auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
                fVar19 = fVar19 + auVar23._12_4_;
              }
              lVar16 = lVar16 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar16);
            if ((uVar1 & 1) == 0) goto LAB_1405c70b9;
          }
          uVar1 = *(uint *)(lVar17 + lVar16 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar31._8_8_ = 0;
            auVar31._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = insertps(auVar31,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
            fVar18 = fVar18 + auVar23._4_4_;
            auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
            fVar19 = fVar19 + auVar23._12_4_;
          }
        }
LAB_1405c70b9:
        auVar33._4_4_ = fVar18 * fVar18;
        auVar33._12_4_ = fVar19 * fVar19;
        auVar26._4_4_ = auVar33._4_4_;
        auVar26._0_4_ = auVar33._4_4_;
        auVar26._8_4_ = auVar33._12_4_;
        auVar26._12_4_ = auVar33._12_4_;
        auVar27._4_12_ = auVar26._4_12_;
        auVar27._0_4_ =
             auVar33._4_4_ + auVar42._8_4_ * auVar42._8_4_ + auVar42._4_4_ * auVar42._4_4_;
        if ((auVar27._0_4_ != fVar11) ||
           (fVar51 = fVar18, auVar54._4_4_ = auVar42._4_4_, auVar54._8_4_ = auVar42._8_4_,
           NAN(auVar27._0_4_) || NAN(fVar11))) {
          if (fVar10 <= auVar27._0_4_) {
            auVar33._0_4_ = auVar27._0_4_;
            auVar33._8_4_ = auVar33._12_4_;
            auVar23 = rsqrtss(auVar33,auVar27);
            fVar51 = auVar23._0_4_;
            fVar51 = (fVar12 - fVar51 * fVar51 * auVar27._0_4_ * fVar12) * fVar51 + fVar51;
            fVar51 = (fVar12 - fVar51 * fVar51 * auVar27._0_4_ * fVar12) * fVar51 + fVar51;
            auVar9._4_4_ = fVar18;
            auVar9._0_4_ = auVar42._8_4_;
            auVar9._8_4_ = auVar42._4_4_;
            auVar9._12_4_ = fVar19;
            in_XMM0 = blendps(in_XMM0,auVar9,7);
            auVar53._4_4_ = fVar51;
            auVar53._0_4_ = fVar51;
            auVar53._8_4_ = in_XMM3_Dc;
            auVar53._12_4_ = in_XMM3_Dd;
            auVar23 = insertps(auVar53,ZEXT416((uint)fVar51),0x20);
            in_XMM3_Dc = auVar23._8_4_;
            in_XMM3_Dd = auVar23._12_4_;
            fVar51 = fVar18 * auVar23._4_4_;
            auVar54._4_4_ = auVar42._4_4_ * in_XMM3_Dc;
            auVar54._8_4_ = auVar42._8_4_ * auVar23._0_4_;
          }
          else {
            fVar51 = 0.0;
            auVar54._4_4_ = 0.0;
            auVar54._8_4_ = 0.0;
          }
        }
        lVar17 = param_1 + uVar14 * 0xc;
        *(float *)(lVar17 + lVar15 * 0xc) = auVar54._8_4_;
        *(float *)(lVar17 + 4 + lVar15 * 0xc) = fVar51;
        *(float *)(lVar17 + 8 + lVar15 * 0xc) = auVar54._4_4_;
        lVar17 = (uVar14 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar17);
        if ((int)uVar1 < 1) {
          auVar28 = ZEXT816(0);
        }
        else {
          lVar17 = *(longlong *)(param_3 + lVar17);
          if (uVar1 == 1) {
            lVar16 = 0;
            auVar23 = ZEXT816(0);
          }
          else {
            auVar28 = ZEXT816(0);
            lVar16 = 0;
            do {
              uVar2 = *(uint *)(lVar17 + lVar16 * 4);
              auVar29 = auVar28;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar34._8_8_ = 0;
                auVar34._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar34,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar29._0_4_ = auVar28._0_4_ + auVar23._0_4_;
                auVar29._4_4_ = auVar28._4_4_ + auVar23._4_4_;
                auVar29._8_4_ = auVar28._8_4_ + auVar23._8_4_;
                auVar29._12_4_ = auVar28._12_4_ + auVar23._12_4_;
              }
              uVar2 = *(uint *)(lVar17 + 4 + lVar16 * 4);
              auVar28 = auVar29;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar35._8_8_ = 0;
                auVar35._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar35,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar28._0_4_ = auVar29._0_4_ + auVar23._0_4_;
                auVar28._4_4_ = auVar29._4_4_ + auVar23._4_4_;
                auVar28._8_4_ = auVar29._8_4_ + auVar23._8_4_;
                auVar28._12_4_ = auVar29._12_4_ + auVar23._12_4_;
              }
              lVar16 = lVar16 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar16);
            auVar23 = auVar28;
            if ((uVar1 & 1) == 0) goto LAB_1405c72ab;
          }
          uVar1 = *(uint *)(lVar17 + lVar16 * 4);
          auVar28 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar36._8_8_ = 0;
            auVar36._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = insertps(auVar36,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar28._0_4_ = auVar23._0_4_ + auVar37._0_4_;
            auVar28._4_4_ = auVar23._4_4_ + auVar37._4_4_;
            auVar28._8_4_ = auVar23._8_4_ + auVar37._8_4_;
            auVar28._12_4_ = auVar23._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405c72ab:
        fVar51 = auVar28._0_4_;
        auVar54._4_4_ = auVar28._4_4_;
        auVar54._8_4_ = auVar28._8_4_;
        auVar61._4_4_ = auVar28._12_4_;
        auVar43._4_4_ = auVar54._4_4_ * auVar54._4_4_;
        auVar43._12_4_ = auVar61._4_4_ * auVar61._4_4_;
        auVar38._4_4_ = auVar43._4_4_;
        auVar38._0_4_ = auVar43._4_4_;
        auVar38._8_4_ = auVar43._12_4_;
        auVar38._12_4_ = auVar43._12_4_;
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = auVar43._4_4_ + fVar51 * fVar51 + auVar54._8_4_ * auVar54._8_4_;
        if ((auVar39._0_4_ != fVar11) || (auVar23 = auVar28, NAN(auVar39._0_4_) || NAN(fVar11))) {
          if (fVar10 <= auVar39._0_4_) {
            auVar43._0_4_ = auVar39._0_4_;
            auVar43._8_4_ = auVar43._12_4_;
            auVar23 = rsqrtss(auVar43,auVar39);
            auVar61._8_4_ = auVar23._0_4_;
            auVar61._8_4_ =
                 (fVar12 - auVar61._8_4_ * auVar61._8_4_ * auVar39._0_4_ * fVar12) * auVar61._8_4_ +
                 auVar61._8_4_;
            auVar61._8_4_ =
                 (fVar12 - auVar61._8_4_ * auVar61._8_4_ * auVar39._0_4_ * fVar12) * auVar61._8_4_ +
                 auVar61._8_4_;
            in_XMM0 = blendps(in_XMM0,auVar28,7);
            auVar60._4_4_ = auVar61._8_4_;
            auVar60._0_4_ = auVar61._8_4_;
            auVar60._8_4_ = in_XMM3_Dc;
            auVar60._12_4_ = in_XMM3_Dd;
            auVar23 = insertps(auVar60,ZEXT416((uint)auVar61._8_4_),0x20);
            auVar54._0_4_ = fVar51 * auVar23._0_4_;
            auVar54._4_4_ = auVar54._4_4_ * auVar23._4_4_;
            in_XMM3_Dc = auVar23._8_4_;
            auVar54._8_4_ = auVar54._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar23._12_4_;
            auVar54._12_4_ = auVar61._4_4_ * in_XMM3_Dd;
            auVar23 = auVar54;
          }
          else {
            auVar54._4_4_ = 0.0;
            auVar54._8_4_ = 0.0;
            auVar23 = ZEXT816(0);
          }
        }
        lVar17 = param_1 + (uVar14 | 1) * 0xc;
        *(int *)(lVar17 + lVar15 * 0xc) = auVar23._0_4_;
        *(float *)(lVar17 + 4 + lVar15 * 0xc) = auVar54._4_4_;
        *(float *)(lVar17 + 8 + lVar15 * 0xc) = auVar54._8_4_;
        lVar17 = (uVar14 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar17);
        if ((int)uVar1 < 1) {
          auVar40 = ZEXT816(0);
        }
        else {
          lVar17 = *(longlong *)(param_3 + lVar17);
          if (uVar1 == 1) {
            lVar16 = 0;
            auVar23 = ZEXT816(0);
          }
          else {
            auVar40 = ZEXT816(0);
            lVar16 = 0;
            do {
              uVar2 = *(uint *)(lVar17 + lVar16 * 4);
              auVar41 = auVar40;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar44._8_8_ = 0;
                auVar44._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar44,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar41._0_4_ = auVar40._0_4_ + auVar23._0_4_;
                auVar41._4_4_ = auVar40._4_4_ + auVar23._4_4_;
                auVar41._8_4_ = auVar40._8_4_ + auVar23._8_4_;
                auVar41._12_4_ = auVar40._12_4_ + auVar23._12_4_;
              }
              uVar2 = *(uint *)(lVar17 + 4 + lVar16 * 4);
              auVar40 = auVar41;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar45._8_8_ = 0;
                auVar45._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar45,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar40._0_4_ = auVar41._0_4_ + auVar23._0_4_;
                auVar40._4_4_ = auVar41._4_4_ + auVar23._4_4_;
                auVar40._8_4_ = auVar41._8_4_ + auVar23._8_4_;
                auVar40._12_4_ = auVar41._12_4_ + auVar23._12_4_;
              }
              lVar16 = lVar16 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar16);
            auVar23 = auVar40;
            if ((uVar1 & 1) == 0) goto LAB_1405c749b;
          }
          uVar1 = *(uint *)(lVar17 + lVar16 * 4);
          auVar40 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar46._8_8_ = 0;
            auVar46._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = insertps(auVar46,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar40._0_4_ = auVar23._0_4_ + auVar37._0_4_;
            auVar40._4_4_ = auVar23._4_4_ + auVar37._4_4_;
            auVar40._8_4_ = auVar23._8_4_ + auVar37._8_4_;
            auVar40._12_4_ = auVar23._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405c749b:
        fVar51 = auVar40._0_4_;
        auVar61._4_4_ = auVar40._4_4_;
        auVar61._8_4_ = auVar40._8_4_;
        auVar54._4_4_ = auVar40._12_4_;
        auVar55._4_4_ = auVar61._4_4_ * auVar61._4_4_;
        auVar55._12_4_ = auVar54._4_4_ * auVar54._4_4_;
        auVar47._4_4_ = auVar55._4_4_;
        auVar47._0_4_ = auVar55._4_4_;
        auVar47._8_4_ = auVar55._12_4_;
        auVar47._12_4_ = auVar55._12_4_;
        auVar48._4_12_ = auVar47._4_12_;
        auVar48._0_4_ = auVar55._4_4_ + fVar51 * fVar51 + auVar61._8_4_ * auVar61._8_4_;
        if ((auVar48._0_4_ != fVar11) || (auVar23 = auVar40, NAN(auVar48._0_4_) || NAN(fVar11))) {
          if (fVar10 <= auVar48._0_4_) {
            auVar55._0_4_ = auVar48._0_4_;
            auVar55._8_4_ = auVar55._12_4_;
            auVar23 = rsqrtss(auVar55,auVar48);
            auVar54._8_4_ = auVar23._0_4_;
            auVar54._8_4_ =
                 (fVar12 - auVar54._8_4_ * auVar54._8_4_ * auVar48._0_4_ * fVar12) * auVar54._8_4_ +
                 auVar54._8_4_;
            auVar54._8_4_ =
                 (fVar12 - auVar54._8_4_ * auVar54._8_4_ * auVar48._0_4_ * fVar12) * auVar54._8_4_ +
                 auVar54._8_4_;
            in_XMM0 = blendps(in_XMM0,auVar40,7);
            auVar62._4_4_ = auVar54._8_4_;
            auVar62._0_4_ = auVar54._8_4_;
            auVar62._8_4_ = in_XMM3_Dc;
            auVar62._12_4_ = in_XMM3_Dd;
            auVar23 = insertps(auVar62,ZEXT416((uint)auVar54._8_4_),0x20);
            auVar61._0_4_ = fVar51 * auVar23._0_4_;
            auVar61._4_4_ = auVar61._4_4_ * auVar23._4_4_;
            in_XMM3_Dc = auVar23._8_4_;
            auVar61._8_4_ = auVar61._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar23._12_4_;
            auVar61._12_4_ = auVar54._4_4_ * in_XMM3_Dd;
            auVar23 = auVar61;
          }
          else {
            auVar61._4_4_ = 0.0;
            auVar61._8_4_ = 0.0;
            auVar23 = ZEXT816(0);
          }
        }
        lVar17 = param_1 + (uVar14 | 2) * 0xc;
        *(int *)(lVar17 + lVar15 * 0xc) = auVar23._0_4_;
        *(float *)(lVar17 + 4 + lVar15 * 0xc) = auVar61._4_4_;
        *(float *)(lVar17 + 8 + lVar15 * 0xc) = auVar61._8_4_;
        lVar17 = (uVar14 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar17);
        if ((int)uVar1 < 1) {
          auVar49 = ZEXT816(0);
        }
        else {
          lVar17 = *(longlong *)(param_3 + lVar17);
          if (uVar1 == 1) {
            lVar16 = 0;
            auVar23 = ZEXT816(0);
          }
          else {
            auVar49 = ZEXT816(0);
            lVar16 = 0;
            do {
              uVar2 = *(uint *)(lVar17 + lVar16 * 4);
              auVar50 = auVar49;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar56._8_8_ = 0;
                auVar56._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar56,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar50._0_4_ = auVar49._0_4_ + auVar23._0_4_;
                auVar50._4_4_ = auVar49._4_4_ + auVar23._4_4_;
                auVar50._8_4_ = auVar49._8_4_ + auVar23._8_4_;
                auVar50._12_4_ = auVar49._12_4_ + auVar23._12_4_;
              }
              uVar2 = *(uint *)(lVar17 + 4 + lVar16 * 4);
              auVar49 = auVar50;
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar57._8_8_ = 0;
                auVar57._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar57,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar49._0_4_ = auVar50._0_4_ + auVar23._0_4_;
                auVar49._4_4_ = auVar50._4_4_ + auVar23._4_4_;
                auVar49._8_4_ = auVar50._8_4_ + auVar23._8_4_;
                auVar49._12_4_ = auVar50._12_4_ + auVar23._12_4_;
              }
              lVar16 = lVar16 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar16);
            auVar23 = auVar49;
            if ((uVar1 & 1) == 0) goto LAB_1405c768b;
          }
          uVar1 = *(uint *)(lVar17 + lVar16 * 4);
          auVar49 = auVar23;
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar58._8_8_ = 0;
            auVar58._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar37 = insertps(auVar58,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar49._0_4_ = auVar23._0_4_ + auVar37._0_4_;
            auVar49._4_4_ = auVar23._4_4_ + auVar37._4_4_;
            auVar49._8_4_ = auVar23._8_4_ + auVar37._8_4_;
            auVar49._12_4_ = auVar23._12_4_ + auVar37._12_4_;
          }
        }
LAB_1405c768b:
        auVar6._4_4_ = fVar18;
        auVar6._0_4_ = auVar42._8_4_;
        auVar6._8_4_ = auVar42._4_4_;
        auVar6._12_4_ = fVar19;
        auVar23 = blendps(in_XMM1,auVar6,7);
        auVar7._4_4_ = fVar18;
        auVar7._0_4_ = auVar42._8_4_;
        auVar7._8_4_ = auVar42._4_4_;
        auVar7._12_4_ = fVar19;
        auVar37 = blendps(in_XMM2,auVar7,7);
        auVar23 = blendps(auVar23,auVar28,7);
        auVar37 = blendps(auVar37,auVar28,7);
        auVar23 = blendps(auVar23,auVar40,7);
        auVar37 = blendps(auVar37,auVar40,7);
        fVar19 = auVar49._0_4_;
        auVar42._4_4_ = auVar49._4_4_;
        auVar42._8_4_ = auVar49._8_4_;
        fVar51 = auVar49._12_4_;
        auVar30._4_4_ = auVar42._4_4_ * auVar42._4_4_;
        auVar30._12_4_ = fVar51 * fVar51;
        fVar18 = auVar30._4_4_ + fVar19 * fVar19 + auVar42._8_4_ * auVar42._8_4_;
        if ((fVar18 != fVar11) || (auVar31 = auVar49, NAN(fVar18) || NAN(fVar11))) {
          if (fVar10 <= fVar18) {
            auVar30._0_4_ = fVar18;
            auVar30._8_4_ = auVar30._12_4_;
            auVar8._4_4_ = auVar30._4_4_;
            auVar8._0_4_ = fVar18;
            auVar8._8_4_ = auVar30._12_4_;
            auVar8._12_4_ = auVar30._12_4_;
            auVar31 = rsqrtss(auVar30,auVar8);
            auVar54._4_4_ = auVar31._0_4_;
            auVar54._4_4_ =
                 (fVar12 - auVar54._4_4_ * auVar54._4_4_ * fVar18 * fVar12) * auVar54._4_4_ +
                 auVar54._4_4_;
            auVar54._4_4_ =
                 (fVar12 - auVar54._4_4_ * auVar54._4_4_ * fVar18 * fVar12) * auVar54._4_4_ +
                 auVar54._4_4_;
            in_XMM0 = blendps(in_XMM0,auVar49,7);
            auVar59._4_4_ = auVar54._4_4_;
            auVar59._0_4_ = auVar54._4_4_;
            auVar59._8_4_ = in_XMM3_Dc;
            auVar59._12_4_ = in_XMM3_Dd;
            auVar31 = insertps(auVar59,ZEXT416((uint)auVar54._4_4_),0x20);
            auVar42._0_4_ = fVar19 * auVar31._0_4_;
            auVar42._4_4_ = auVar42._4_4_ * auVar31._4_4_;
            in_XMM3_Dc = auVar31._8_4_;
            auVar42._8_4_ = auVar42._8_4_ * in_XMM3_Dc;
            in_XMM3_Dd = auVar31._12_4_;
            auVar42._12_4_ = fVar51 * in_XMM3_Dd;
            auVar31 = auVar42;
          }
          else {
            auVar42._4_4_ = 0.0;
            auVar42._8_4_ = 0.0;
            auVar31 = ZEXT816(0);
          }
        }
        in_XMM1 = blendps(auVar23,auVar49,7);
        in_XMM2 = blendps(auVar37,auVar49,7);
        lVar17 = param_1 + (uVar14 | 3) * 0xc;
        *(int *)(lVar17 + lVar15 * 0xc) = auVar31._0_4_;
        *(float *)(lVar17 + 4 + lVar15 * 0xc) = auVar42._4_4_;
        *(float *)(lVar17 + 8 + lVar15 * 0xc) = auVar42._8_4_;
        uVar14 = uVar14 + 4;
      } while (uVar14 != (param_6 & 0x7ffffffc));
    }
    fVar12 = __real_3f000000;
    fVar11 = __real_3f800000;
    fVar10 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar13 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar14 * 0x10);
        if ((int)uVar1 < 1) {
          auVar42._8_4_ = 0.0;
          fVar18 = 0.0;
          auVar42._4_4_ = 0.0;
          fVar19 = 0.0;
        }
        else {
          lVar17 = *(longlong *)(param_3 + uVar14 * 0x10);
          if (uVar1 == 1) {
            auVar42._8_4_ = 0.0;
            fVar18 = 0.0;
            auVar42._4_4_ = 0.0;
            fVar19 = 0.0;
            lVar16 = 0;
          }
          else {
            auVar42._8_4_ = 0.0;
            fVar18 = 0.0;
            auVar42._4_4_ = 0.0;
            fVar19 = 0.0;
            lVar16 = 0;
            do {
              uVar2 = *(uint *)(lVar17 + lVar16 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar20,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
                fVar18 = fVar18 + auVar23._4_4_;
                auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
                fVar19 = fVar19 + auVar23._12_4_;
              }
              uVar2 = *(uint *)(lVar17 + 4 + lVar16 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar21._8_8_ = 0;
                auVar21._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar23 = insertps(auVar21,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar2 * 0xc),
                                   0x28);
                auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
                fVar18 = fVar18 + auVar23._4_4_;
                auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
                fVar19 = fVar19 + auVar23._12_4_;
              }
              lVar16 = lVar16 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar16);
            if ((uVar1 & 1) == 0) goto LAB_1405c6e58;
          }
          uVar1 = *(uint *)(lVar17 + lVar16 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar22._8_8_ = 0;
            auVar22._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar23 = insertps(auVar22,*(undefined4 *)(param_2 + 8 + (ulonglong)uVar1 * 0xc),0x28);
            auVar42._8_4_ = auVar42._8_4_ + auVar23._0_4_;
            fVar18 = fVar18 + auVar23._4_4_;
            auVar42._4_4_ = auVar42._4_4_ + auVar23._8_4_;
            fVar19 = fVar19 + auVar23._12_4_;
          }
        }
LAB_1405c6e58:
        auVar32._4_4_ = fVar18 * fVar18;
        auVar32._12_4_ = fVar19 * fVar19;
        auVar24._4_4_ = auVar32._4_4_;
        auVar24._0_4_ = auVar32._4_4_;
        auVar24._8_4_ = auVar32._12_4_;
        auVar24._12_4_ = auVar32._12_4_;
        auVar25._4_12_ = auVar24._4_12_;
        auVar25._0_4_ =
             auVar32._4_4_ + auVar42._8_4_ * auVar42._8_4_ + auVar42._4_4_ * auVar42._4_4_;
        if ((auVar25._0_4_ != fVar11) ||
           (fVar51 = fVar18, auVar54._4_4_ = auVar42._4_4_, auVar54._8_4_ = auVar42._8_4_,
           NAN(auVar25._0_4_) || NAN(fVar11))) {
          if (fVar10 <= auVar25._0_4_) {
            auVar32._0_4_ = auVar25._0_4_;
            auVar32._8_4_ = auVar32._12_4_;
            auVar23 = rsqrtss(auVar32,auVar25);
            fVar51 = auVar23._0_4_;
            fVar51 = (fVar12 - fVar51 * fVar51 * auVar25._0_4_ * fVar12) * fVar51 + fVar51;
            fVar51 = (fVar12 - fVar51 * fVar51 * auVar25._0_4_ * fVar12) * fVar51 + fVar51;
            auVar5._4_4_ = fVar18;
            auVar5._0_4_ = auVar42._8_4_;
            auVar5._8_4_ = auVar42._4_4_;
            auVar5._12_4_ = fVar19;
            in_XMM0 = blendps(in_XMM0,auVar5,7);
            auVar52._4_4_ = fVar51;
            auVar52._0_4_ = fVar51;
            auVar52._8_4_ = in_XMM3_Dc;
            auVar52._12_4_ = in_XMM3_Dd;
            auVar23 = insertps(auVar52,ZEXT416((uint)fVar51),0x20);
            in_XMM3_Dc = auVar23._8_4_;
            in_XMM3_Dd = auVar23._12_4_;
            fVar51 = fVar18 * auVar23._4_4_;
            auVar54._4_4_ = auVar42._4_4_ * in_XMM3_Dc;
            auVar54._8_4_ = auVar42._8_4_ * auVar23._0_4_;
          }
          else {
            fVar51 = 0.0;
            auVar54._4_4_ = 0.0;
            auVar54._8_4_ = 0.0;
          }
        }
        auVar3._4_4_ = fVar18;
        auVar3._0_4_ = auVar42._8_4_;
        auVar3._8_4_ = auVar42._4_4_;
        auVar3._12_4_ = fVar19;
        in_XMM1 = blendps(in_XMM1,auVar3,7);
        auVar4._4_4_ = fVar18;
        auVar4._0_4_ = auVar42._8_4_;
        auVar4._8_4_ = auVar42._4_4_;
        auVar4._12_4_ = fVar19;
        in_XMM2 = blendps(in_XMM2,auVar4,7);
        lVar17 = param_1 + uVar14 * 0xc;
        *(float *)(lVar17 + lVar15 * 0xc) = auVar54._8_4_;
        *(float *)(lVar17 + 4 + lVar15 * 0xc) = fVar51;
        *(float *)(lVar17 + 8 + lVar15 * 0xc) = auVar54._4_4_;
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != (param_6 & 3));
    }
  }
  return;
}

