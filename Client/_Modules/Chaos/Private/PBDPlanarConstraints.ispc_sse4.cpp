// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_sse4 @ 14030cbc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,uint param_9)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  byte bVar27;
  int in_R11D;
  uint uVar28;
  bool bVar29;
  float fVar30;
  float fVar41;
  float fVar42;
  int iVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar31;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar45;
  float fVar53;
  float fVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar70;
  float fVar72;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar74;
  undefined1 auVar59 [16];
  float fVar71;
  float fVar73;
  float fVar75;
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
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  undefined4 uVar80;
  float fVar86;
  float fVar87;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar98;
  float fVar99;
  undefined1 unaff_XMM7 [16];
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  float fVar107;
  float fVar108;
  undefined1 auVar102 [16];
  float fVar109;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar110;
  float fVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar129;
  float fVar130;
  undefined1 auVar124 [16];
  float fVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar142;
  undefined1 auVar141 [16];
  undefined1 auVar143 [16];
  
  uVar15 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar15 = param_9;
  }
  if ((int)(uVar15 & 0xfffffffc) < 1) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    lVar18 = 0;
    uVar28 = 0;
    do {
      piVar1 = (int *)(param_3 + (ulonglong)uVar28);
      iVar43 = piVar1[3] << 4;
      lVar19 = (longlong)(*piVar1 << 4);
      lVar21 = (longlong)(piVar1[1] * 0x10);
      lVar25 = (longlong)(piVar1[2] << 4);
      lVar17 = (longlong)iVar43;
      uVar6 = *(uint *)(param_1 + 0xc + lVar19);
      uVar7 = *(uint *)(param_1 + 0xc + lVar21);
      uVar8 = *(uint *)(param_1 + 0xc + lVar25);
      uVar9 = *(uint *)(param_1 + 0xc + lVar17);
      auVar57 = insertps(ZEXT416(uVar6),ZEXT416(uVar7),0x10);
      auVar57 = insertps(auVar57,ZEXT416(uVar8),0x20);
      auVar57 = insertps(auVar57,ZEXT416(uVar9),0x30);
      fVar30 = auVar57._0_4_;
      fVar41 = auVar57._4_4_;
      fVar42 = auVar57._8_4_;
      fVar44 = auVar57._12_4_;
      auVar57._4_4_ = -(uint)(fVar41 == 0.0);
      auVar57._0_4_ = -(uint)(fVar30 == 0.0);
      auVar57._8_4_ = -(uint)(fVar42 == 0.0);
      auVar57._12_4_ = -(uint)(fVar44 == 0.0);
      auVar90._4_4_ = -(uint)NAN(fVar41);
      auVar90._0_4_ = -(uint)NAN(fVar30);
      auVar90._8_4_ = -(uint)NAN(fVar42);
      auVar90._12_4_ = -(uint)NAN(fVar44);
      iVar43 = movmskps(iVar43,auVar90 | auVar57);
      if (iVar43 == 0) {
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar21),
                           0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + lVar25),0x20);
        auVar143 = insertps(auVar57,*(undefined4 *)(param_1 + lVar17),0x30);
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                           *(undefined4 *)(param_1 + 4 + lVar21),0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar25),0x20);
        auVar46 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar17),0x30);
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                           *(undefined4 *)(param_1 + 8 + lVar21),0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar25),0x20);
        auVar88 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar17),0x30);
        auVar57 = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar90 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18);
        pfVar3 = (float *)(param_4 + 0x20 + lVar18);
        auVar102 = insertps(auVar90,auVar57,0x8c);
        auVar115 = *(undefined1 (*) [16])(param_5 + lVar18);
        fVar71 = auVar115._12_4_;
        auVar47 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar18);
        fVar56 = auVar47._0_4_;
        fVar73 = auVar47._12_4_;
        auVar93 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar18);
        fVar75 = auVar93._12_4_;
        fVar54 = auVar47._8_4_;
        fVar110 = auVar115._0_4_;
        fVar114 = auVar115._4_4_;
        fVar79 = auVar93._0_4_;
        fVar86 = auVar93._4_4_;
        fVar87 = auVar93._8_4_;
        auVar115 = insertps(auVar47,auVar115,0x8c);
        fVar45 = auVar115._0_4_;
        fVar53 = auVar115._4_4_;
        fVar101 = (auVar102._0_4_ - auVar88._0_4_) * fVar45 +
                  (auVar57._4_4_ - auVar46._0_4_) * fVar114 +
                  (auVar57._0_4_ - auVar143._0_4_) * fVar110;
        fVar107 = (auVar102._4_4_ - auVar88._4_4_) * fVar53 +
                  (auVar90._0_4_ - auVar46._4_4_) * fVar56 +
                  (auVar57._12_4_ - auVar143._4_4_) * fVar71;
        fVar108 = (*pfVar3 - auVar88._8_4_) * fVar79 +
                  (auVar90._12_4_ - auVar46._8_4_) * fVar73 +
                  (auVar90._8_4_ - auVar143._8_4_) * fVar54;
        fVar109 = (pfVar3[3] - auVar88._12_4_) * fVar75 +
                  (pfVar3[2] - auVar46._12_4_) * fVar87 + (pfVar3[1] - auVar143._12_4_) * fVar86;
        unaff_XMM7._0_4_ = -(uint)(0.0 < fVar101 && fVar30 != 0.0);
        unaff_XMM7._4_4_ = -(uint)(0.0 < fVar107 && fVar41 != 0.0);
        unaff_XMM7._8_4_ = -(uint)(0.0 < fVar108 && fVar42 != 0.0);
        unaff_XMM7._12_4_ = -(uint)(0.0 < fVar109 && fVar44 != 0.0);
        in_R11D = movmskps(in_R11D,unaff_XMM7);
        if (in_R11D != 0) {
          bVar27 = (char)((char)in_R11D << 4) >> 4;
          in_R11D = CONCAT31((int3)((uint)in_R11D >> 8),bVar27);
          auVar115._0_8_ =
               CONCAT44(fVar71 * fVar107 + auVar143._4_4_,fVar110 * fVar101 + auVar143._0_4_);
          auVar115._8_4_ = fVar54 * fVar108 + auVar143._8_4_;
          auVar115._12_4_ = fVar86 * fVar109 + auVar143._12_4_;
          bVar29 = (bVar27 & 1) != 0;
          auVar47 = auVar143;
          if (bVar29) {
            auVar47._8_4_ = auVar115._8_4_;
            auVar47._0_8_ = auVar115._0_8_;
            auVar47._12_4_ = auVar115._12_4_;
          }
          auVar93._0_8_ =
               CONCAT44(fVar56 * fVar107 + auVar46._4_4_,fVar114 * fVar101 + auVar46._0_4_);
          auVar93._8_4_ = fVar73 * fVar108 + auVar46._8_4_;
          auVar93._12_4_ = fVar87 * fVar109 + auVar46._12_4_;
          auVar102._0_8_ =
               CONCAT44(fVar53 * fVar107 + auVar88._4_4_,fVar45 * fVar101 + auVar88._0_4_);
          auVar102._8_4_ = fVar79 * fVar108 + auVar88._8_4_;
          auVar102._12_4_ = fVar75 * fVar109 + auVar88._12_4_;
          if (bVar29) {
            auVar137._8_4_ = auVar93._8_4_;
            auVar137._0_8_ = auVar93._0_8_;
            auVar137._12_4_ = auVar93._12_4_;
            auVar33._8_4_ = auVar102._8_4_;
            auVar33._0_8_ = auVar102._0_8_;
            auVar33._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar143,auVar47,1);
            if ((bVar27 & 2) != 0) goto LAB_14030d08d;
LAB_14030cece:
            auVar47 = blendps(auVar46,auVar137,1);
            auVar88 = blendps(auVar88,auVar33,1);
            auVar57 = blendps(auVar57,auVar57,2);
            auVar90 = auVar88;
            auVar46 = auVar47;
            if ((bVar27 & 4) == 0) goto LAB_14030cf0a;
LAB_14030d0d4:
            auVar132._8_4_ = auVar115._8_4_;
            auVar132._0_8_ = auVar115._0_8_;
            auVar132._12_4_ = auVar115._12_4_;
            auVar47 = blendps(auVar47,auVar46,2);
            auVar124._8_4_ = auVar93._8_4_;
            auVar124._0_8_ = auVar93._0_8_;
            auVar124._12_4_ = auVar93._12_4_;
            auVar90 = blendps(auVar90,auVar88,2);
            auVar89._8_4_ = auVar102._8_4_;
            auVar89._0_8_ = auVar102._0_8_;
            auVar89._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar57,auVar132,4);
            if (-1 < (char)bVar27) goto LAB_14030d10f;
LAB_14030cf3a:
            auVar47 = blendps(auVar47,auVar124,4);
            if ((char)bVar27 < '\0') goto LAB_14030cf47;
LAB_14030d120:
            auVar90 = blendps(auVar90,auVar89,4);
            auVar93 = auVar47;
          }
          else {
            auVar57 = blendps(auVar143,auVar47,1);
            auVar33 = auVar88;
            auVar137 = auVar46;
            if ((bVar27 & 2) == 0) goto LAB_14030cece;
LAB_14030d08d:
            auVar143._8_4_ = auVar115._8_4_;
            auVar143._0_8_ = auVar115._0_8_;
            auVar143._12_4_ = auVar115._12_4_;
            auVar47 = blendps(auVar46,auVar137,1);
            auVar46._8_4_ = auVar93._8_4_;
            auVar46._0_8_ = auVar93._0_8_;
            auVar46._12_4_ = auVar93._12_4_;
            auVar90 = blendps(auVar88,auVar33,1);
            auVar88._8_4_ = auVar102._8_4_;
            auVar88._0_8_ = auVar102._0_8_;
            auVar88._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar57,auVar143,2);
            if ((bVar27 & 4) != 0) goto LAB_14030d0d4;
LAB_14030cf0a:
            auVar47 = blendps(auVar47,auVar46,2);
            auVar89 = blendps(auVar90,auVar88,2);
            auVar57 = blendps(auVar57,auVar57,4);
            auVar90 = auVar89;
            auVar124 = auVar47;
            if ((char)bVar27 < '\0') goto LAB_14030cf3a;
LAB_14030d10f:
            auVar115 = auVar57;
            auVar47 = blendps(auVar47,auVar124,4);
            auVar57 = auVar115;
            if (-1 < (char)bVar27) goto LAB_14030d120;
LAB_14030cf47:
            auVar90 = blendps(auVar90,auVar89,4);
          }
          if (-1 < (char)bVar27) {
            auVar102 = auVar90;
          }
          auVar115 = blendps(auVar57,auVar115,8);
          auVar57 = blendps(auVar47,auVar93,8);
          auVar90 = blendps(auVar90,auVar102,8);
          if ((~bVar27 & 0xf) == 0) {
            auVar47 = *(undefined1 (*) [16])(param_6 + lVar18);
            auVar93 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar18);
            puVar4 = (undefined4 *)(param_6 + 0x20 + lVar18);
            auVar76._0_4_ = auVar47._0_4_;
            auVar46 = insertps(auVar93,auVar47,0x8c);
            auVar76._4_4_ = auVar47._12_4_;
            auVar76._8_4_ = auVar93._8_4_;
            auVar76._12_4_ = puVar4[1];
            auVar81._4_4_ = auVar93._0_4_;
            auVar81._0_4_ = auVar47._4_4_;
            auVar81._8_4_ = auVar93._12_4_;
            auVar81._12_4_ = puVar4[2];
            auVar58._0_8_ = auVar46._0_8_;
            auVar58._8_4_ = *puVar4;
            auVar58._12_4_ = puVar4[3];
          }
          else {
            auVar32._0_4_ = unaff_XMM7._0_4_ & ___xmm_00000024000000180000000c00000000;
            auVar32._4_4_ = unaff_XMM7._4_4_ & _UNK_150b50da4;
            auVar32._8_4_ = unaff_XMM7._8_4_ & _UNK_150b50da8;
            auVar32._12_4_ = unaff_XMM7._12_4_ & _UNK_150b50dac;
            lVar22 = extractps(auVar32,1);
            lVar24 = extractps(auVar32,2);
            lVar26 = extractps(auVar32,3);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + param_6)),
                               *(undefined4 *)(lVar18 + lVar22 + param_6),0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)(lVar18 + lVar24 + param_6),0x20);
            auVar76 = insertps(auVar47,*(undefined4 *)(lVar18 + lVar26 + param_6),0x30);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + (ulonglong)
                                                          (unaff_XMM7._0_4_ &
                                                          ___xmm_000000280000001c0000001000000004) +
                                                          param_6)),
                               *(undefined4 *)
                                (lVar18 + (ulonglong)(unaff_XMM7._4_4_ & _UNK_150b50db4) + param_6),
                               0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._8_4_ & _UNK_150b50db8) +
                                                  param_6),0x20);
            auVar81 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._12_4_ & _UNK_150b50dbc) +
                                                  param_6),0x30);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + (ulonglong)
                                                          (unaff_XMM7._0_4_ &
                                                          ___xmm_0000002c000000200000001400000008) +
                                                          param_6)),
                               *(undefined4 *)
                                (lVar18 + (ulonglong)(unaff_XMM7._4_4_ & _UNK_150b50dc4) + param_6),
                               0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._8_4_ & _UNK_150b50dc8) +
                                                  param_6),0x20);
            auVar58 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._12_4_ & _UNK_150b50dcc) +
                                                  param_6),0x30);
          }
          auVar34._4_4_ = piVar1[1] * 3;
          auVar34._0_4_ = *piVar1 * 3;
          auVar34._8_4_ = piVar1[2] * 3;
          auVar34._12_4_ = piVar1[3] * 3;
          auVar34 = auVar34 & unaff_XMM7;
          lVar22 = param_2 + (longlong)auVar34._0_4_ * 4;
          lVar24 = param_2 + (longlong)auVar34._4_4_ * 4;
          lVar26 = param_2 + (longlong)auVar34._8_4_ * 4;
          lVar5 = param_2 + (longlong)auVar34._12_4_ * 4;
          auVar47 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar34._0_4_ * 4)),
                             *(undefined4 *)(param_2 + (longlong)auVar34._4_4_ * 4),0x10);
          auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar34._8_4_ * 4),0x20);
          auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar34._12_4_ * 4),0x30);
          auVar93 = unaff_XMM7 & ___xmm_00000004000000040000000400000004;
          auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar93._0_4_ + lVar22)),
                             *(undefined4 *)((ulonglong)auVar93._4_4_ + lVar24),0x10);
          auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar93._8_4_ + lVar26),0x20);
          auVar93 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar93._12_4_ + lVar5),0x30);
          auVar46 = unaff_XMM7 & ___xmm_00000008000000080000000800000008;
          auVar88 = insertps(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar22)),
                             *(undefined4 *)((ulonglong)auVar46._4_4_ + lVar24),0x10);
          auVar88 = insertps(auVar88,*(undefined4 *)((ulonglong)auVar46._8_4_ + lVar26),0x20);
          auVar46 = insertps(auVar88,*(undefined4 *)((ulonglong)auVar46._12_4_ + lVar5),0x30);
          fVar123 = (auVar115._0_4_ - auVar47._0_4_) - auVar76._0_4_ * param_8;
          fVar129 = (auVar115._4_4_ - auVar47._4_4_) - auVar76._4_4_ * param_8;
          fVar130 = (auVar115._8_4_ - auVar47._8_4_) - auVar76._8_4_ * param_8;
          fVar131 = (auVar115._12_4_ - auVar47._12_4_) - auVar76._12_4_ * param_8;
          fVar96 = (auVar57._0_4_ - auVar93._0_4_) - auVar81._0_4_ * param_8;
          fVar98 = (auVar57._4_4_ - auVar93._4_4_) - auVar81._4_4_ * param_8;
          fVar99 = (auVar57._8_4_ - auVar93._8_4_) - auVar81._8_4_ * param_8;
          fVar100 = (auVar57._12_4_ - auVar93._12_4_) - auVar81._12_4_ * param_8;
          fVar30 = (auVar90._0_4_ - auVar46._0_4_) - auVar58._0_4_ * param_8;
          fVar41 = (auVar90._4_4_ - auVar46._4_4_) - auVar58._4_4_ * param_8;
          fVar42 = (auVar90._8_4_ - auVar46._8_4_) - auVar58._8_4_ * param_8;
          fVar44 = (auVar90._12_4_ - auVar46._12_4_) - auVar58._12_4_ * param_8;
          fVar55 = fVar45 * fVar30 + fVar114 * fVar96 + fVar110 * fVar123;
          fVar70 = fVar53 * fVar41 + fVar56 * fVar98 + fVar71 * fVar129;
          fVar72 = fVar79 * fVar42 + fVar73 * fVar99 + fVar54 * fVar130;
          fVar74 = fVar75 * fVar44 + fVar87 * fVar100 + fVar86 * fVar131;
          fVar123 = fVar123 - fVar110 * fVar55;
          fVar129 = fVar129 - fVar71 * fVar70;
          fVar130 = fVar130 - fVar54 * fVar72;
          fVar131 = fVar131 - fVar86 * fVar74;
          fVar96 = fVar96 - fVar114 * fVar55;
          fVar98 = fVar98 - fVar56 * fVar70;
          fVar99 = fVar99 - fVar73 * fVar72;
          fVar100 = fVar100 - fVar87 * fVar74;
          fVar30 = fVar30 - fVar55 * fVar45;
          fVar41 = fVar41 - fVar70 * fVar53;
          fVar42 = fVar42 - fVar72 * fVar79;
          fVar44 = fVar44 - fVar74 * fVar75;
          auVar59._0_4_ = fVar30 * fVar30 + fVar96 * fVar96 + fVar123 * fVar123;
          auVar59._4_4_ = fVar41 * fVar41 + fVar98 * fVar98 + fVar129 * fVar129;
          auVar59._8_4_ = fVar42 * fVar42 + fVar99 * fVar99 + fVar130 * fVar130;
          auVar59._12_4_ = fVar44 * fVar44 + fVar100 * fVar100 + fVar131 * fVar131;
          auVar47 = sqrtps(auVar59,auVar59);
          auVar103._0_4_ = fVar101 * param_7;
          auVar103._4_4_ = fVar107 * param_7;
          auVar103._8_4_ = fVar108 * param_7;
          auVar103._12_4_ = fVar109 * param_7;
          auVar93 = minps(auVar103,auVar47);
          auVar93 = divps(auVar93,auVar47);
          fVar56 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar47._0_4_) &
                          auVar93._0_4_);
          fVar71 = (float)(-(uint)(_UNK_1506895d4 <= auVar47._4_4_) & auVar93._4_4_);
          fVar73 = (float)(-(uint)(_UNK_1506895d8 <= auVar47._8_4_) & auVar93._8_4_);
          fVar75 = (float)(-(uint)(_UNK_1506895dc <= auVar47._12_4_) & auVar93._12_4_);
          auVar94._0_8_ =
               CONCAT44(auVar115._4_4_ - fVar129 * fVar71,auVar115._0_4_ - fVar123 * fVar56);
          auVar94._8_4_ = auVar115._8_4_ - fVar130 * fVar73;
          auVar94._12_4_ = auVar115._12_4_ - fVar131 * fVar75;
          bVar29 = (bVar27 & 1) != 0;
          auVar111 = auVar115;
          if (bVar29) {
            auVar111._8_4_ = auVar94._8_4_;
            auVar111._0_8_ = auVar94._0_8_;
            auVar111._12_4_ = auVar94._12_4_;
          }
          auVar60._0_8_ = CONCAT44(auVar57._4_4_ - fVar98 * fVar71,auVar57._0_4_ - fVar96 * fVar56);
          auVar60._8_4_ = auVar57._8_4_ - fVar99 * fVar73;
          auVar60._12_4_ = auVar57._12_4_ - fVar100 * fVar75;
          auVar77._0_8_ = CONCAT44(auVar90._4_4_ - fVar41 * fVar71,auVar90._0_4_ - fVar30 * fVar56);
          auVar77._8_4_ = auVar90._8_4_ - fVar42 * fVar73;
          auVar77._12_4_ = auVar90._12_4_ - fVar44 * fVar75;
          if (bVar29) {
            auVar82._8_4_ = auVar60._8_4_;
            auVar82._0_8_ = auVar60._0_8_;
            auVar82._12_4_ = auVar60._12_4_;
            auVar35._8_4_ = auVar77._8_4_;
            auVar35._0_8_ = auVar77._0_8_;
            auVar35._12_4_ = auVar77._12_4_;
            auVar115 = blendps(auVar115,auVar111,1);
            auVar119 = auVar115;
            if ((bVar27 & 2) != 0) goto LAB_14030d48d;
LAB_14030d370:
            auVar47 = blendps(auVar57,auVar82,1);
            uVar80 = auVar82._0_4_;
            auVar90 = blendps(auVar90,auVar35,1);
            uVar31 = auVar35._0_4_;
            auVar57 = blendps(auVar119,auVar119,2);
            unaff_XMM7 = auVar90;
            auVar116 = auVar47;
            if ((bVar27 & 4) == 0) goto LAB_14030d3a4;
LAB_14030d4cc:
            auVar133._8_4_ = auVar94._8_4_;
            auVar133._0_8_ = auVar94._0_8_;
            auVar133._12_4_ = auVar94._12_4_;
            auVar115 = blendps(auVar47,auVar116,2);
            auVar125._8_4_ = auVar60._8_4_;
            auVar125._0_8_ = auVar60._0_8_;
            auVar125._12_4_ = auVar60._12_4_;
            auVar90 = blendps(auVar90,unaff_XMM7,2);
            auVar104._8_4_ = auVar77._8_4_;
            auVar104._0_8_ = auVar77._0_8_;
            auVar104._12_4_ = auVar77._12_4_;
          }
          else {
            auVar115 = blendps(auVar115,auVar111,1);
            auVar35 = auVar90;
            auVar82 = auVar57;
            auVar119 = auVar115;
            if ((bVar27 & 2) == 0) goto LAB_14030d370;
LAB_14030d48d:
            auVar119._8_4_ = auVar94._8_4_;
            auVar119._0_8_ = auVar94._0_8_;
            auVar119._12_4_ = auVar94._12_4_;
            auVar47 = blendps(auVar57,auVar82,1);
            uVar80 = auVar82._0_4_;
            auVar116._8_4_ = auVar60._8_4_;
            auVar116._0_8_ = auVar60._0_8_;
            auVar116._12_4_ = auVar60._12_4_;
            auVar90 = blendps(auVar90,auVar35,1);
            uVar31 = auVar35._0_4_;
            unaff_XMM7._8_4_ = (uint)auVar77._8_4_;
            unaff_XMM7._0_8_ = auVar77._0_8_;
            unaff_XMM7._12_4_ = (uint)auVar77._12_4_;
            auVar57 = blendps(auVar115,auVar119,2);
            if ((bVar27 & 4) != 0) goto LAB_14030d4cc;
LAB_14030d3a4:
            auVar115 = blendps(auVar47,auVar116,2);
            auVar90 = blendps(auVar90,unaff_XMM7,2);
            auVar104 = auVar90;
            auVar125 = auVar115;
            auVar133 = auVar57;
          }
          if ((char)bVar27 < '\0') {
            auVar115 = auVar60;
            auVar90 = auVar77;
            auVar57 = auVar94;
          }
          if ((bVar27 & 1) != 0) {
            *(int *)(param_1 + lVar19) = auVar111._0_4_;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(auVar119,1);
            *(undefined8 *)(param_1 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar133,2);
            *(undefined8 *)(param_1 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar57,3);
            *(undefined8 *)(param_1 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(undefined4 *)(param_1 + 4 + lVar19) = uVar80;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(auVar116,1);
            *(undefined8 *)(param_1 + 4 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar125,2);
            *(undefined8 *)(param_1 + 4 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar115,3);
            *(undefined8 *)(param_1 + 4 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(undefined4 *)(param_1 + 8 + lVar19) = uVar31;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(unaff_XMM7,1);
            *(undefined8 *)(param_1 + 8 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar104,2);
            *(undefined8 *)(param_1 + 8 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar90,3);
            *(undefined8 *)(param_1 + 8 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar19) = uVar6;
          }
          if ((bVar27 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar21) = uVar7;
          }
          if ((bVar27 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar25) = uVar8;
          }
          if ((char)bVar27 < '\0') {
            *(uint *)(param_1 + 0xc + lVar17) = uVar9;
          }
        }
      }
      uVar28 = uVar28 + 0x10;
      lVar18 = lVar18 + 0x30;
      uVar20 = uVar20 + 4;
    } while ((int)uVar20 < (int)(uVar15 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar20) {
    return;
  }
  bVar29 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar48._0_4_ = -(uint)bVar29;
  bVar11 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar48._4_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar20 | _UNK_150631e08) < (int)param_9;
  auVar48._8_4_ = -(uint)bVar12;
  bVar13 = (int)(uVar20 | _UNK_150631e0c) < (int)param_9;
  auVar48._12_4_ = -(uint)bVar13;
  uVar15 = movmskps(param_9,auVar48);
  bVar27 = (char)((byte)uVar15 << 4) >> 4;
  if ((~(byte)uVar15 & 9) == 0) {
    unaff_XMM7 = *(undefined1 (*) [16])(param_3 + (int)(uVar20 << 2));
  }
  else {
    puVar23 = (uint *)(param_3 + (int)(uVar20 << 2));
    if ((uVar15 & 1) != 0) {
      unaff_XMM7 = ZEXT416(*puVar23);
    }
    if ((uVar15 & 2) != 0) {
      unaff_XMM7._0_8_ = unaff_XMM7._0_8_ & 0xffffffff | (ulonglong)puVar23[1] << 0x20;
    }
    if ((uVar15 & 4) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM7._8_8_ & 0xffffffff00000000 | (ulonglong)puVar23[2];
    }
    if ((uVar15 & 8) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM7._8_8_ & 0xffffffff | (ulonglong)puVar23[3] << 0x20;
    }
  }
  auVar91._0_4_ = unaff_XMM7._0_4_ << 4;
  auVar91._4_4_ = unaff_XMM7._4_4_ << 4;
  auVar91._8_4_ = unaff_XMM7._8_4_ << 4;
  auVar91._12_4_ = unaff_XMM7._12_4_ << 4;
  auVar90 = auVar48 & auVar91;
  lVar18 = param_1 + auVar90._0_4_;
  lVar17 = param_1 + auVar90._4_4_;
  lVar19 = param_1 + auVar90._8_4_;
  lVar21 = param_1 + auVar90._12_4_;
  auVar47 = ___xmm_00000004000000040000000400000004 & auVar48;
  auVar115 = ___xmm_00000008000000080000000800000008 & auVar48;
  auVar57 = ZEXT416(*(uint *)(param_1 + auVar90._0_4_));
  if ((bVar27 & 2) == 0) {
    auVar93 = ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18));
    auVar46 = ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar18));
  }
  else {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._4_4_),0x10);
    auVar93 = insertps(ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar47._4_4_ + lVar17),0x10);
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar17),0x10);
  }
  uVar10 = ZEXT48((uint)__xmm_0000000c0000000c0000000c0000000c & auVar48._0_4_);
  if ((bVar27 & 4) == 0) {
    auVar88 = insertps(ZEXT416(*(uint *)(uVar10 + lVar18)),
                       *(undefined4 *)
                        ((ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar48._4_4_) +
                        lVar17),0x10);
  }
  else {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._8_4_),0x20);
    auVar93 = insertps(auVar93,*(undefined4 *)((ulonglong)auVar47._8_4_ + lVar19),0x20);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar19),0x20);
    auVar88 = insertps(ZEXT416(*(uint *)(uVar10 + lVar18)),
                       *(undefined4 *)
                        ((ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar48._4_4_) +
                        lVar17),0x10);
  }
  uVar14 = ZEXT48(__xmm_0000000c0000000c0000000c0000000c._8_4_ & auVar48._8_4_);
  uVar10 = ZEXT48(__xmm_0000000c0000000c0000000c0000000c._12_4_ & auVar48._12_4_);
  if ((char)bVar27 < '\0') {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._12_4_),0x30);
    auVar90 = insertps(auVar88,*(undefined4 *)(uVar14 + lVar19),0x20);
  }
  else {
    auVar90 = insertps(auVar88,*(undefined4 *)(uVar14 + lVar19),0x20);
  }
  if ((char)bVar27 < '\0') {
    auVar93 = insertps(auVar93,*(undefined4 *)((ulonglong)auVar47._12_4_ + lVar21),0x30);
    auVar90 = insertps(auVar90,*(undefined4 *)(uVar10 + lVar21),0x30);
  }
  else {
    auVar90 = insertps(auVar90,*(undefined4 *)(uVar10 + lVar21),0x30);
  }
  if ((char)bVar27 < '\0') {
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar21),0x30);
  }
  fVar30 = auVar90._0_4_;
  auVar61._0_4_ = -(uint)(fVar30 == 0.0 && bVar29);
  auVar61._4_4_ = -(uint)(auVar90._4_4_ == 0.0 && bVar11);
  auVar61._8_4_ = -(uint)(auVar90._8_4_ == 0.0 && bVar12);
  auVar61._12_4_ = -(uint)(auVar90._12_4_ == 0.0 && bVar13);
  iVar43 = movmskps((int)lVar21,auVar61);
  if (iVar43 != 0) {
    return;
  }
  uVar16 = (ulonglong)(uVar20 | (uint)__xmm_00000003000000020000000100000000);
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar16 * 0xc);
  if ((~bVar27 & 0xf) == 0) {
    auVar115 = *pauVar2;
    auVar47 = pauVar2[1];
    auVar120._0_4_ = auVar115._0_4_;
    auVar88 = insertps(auVar47,auVar115,0x8c);
    auVar120._4_4_ = auVar115._12_4_;
    auVar120._8_4_ = auVar47._8_4_;
    auVar120._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar126._4_4_ = auVar47._0_4_;
    auVar126._0_4_ = auVar115._4_4_;
    auVar126._8_4_ = auVar47._12_4_;
    auVar126._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar39._0_8_ = auVar88._0_8_;
    auVar39._8_4_ = *(undefined4 *)pauVar2[2];
    auVar39._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    auVar115 = *(undefined1 (*) [16])(param_5 + uVar16 * 0xc);
    auVar47 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar16 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar16 * 0xc);
    auVar105._0_4_ = auVar115._0_4_;
    auVar88 = insertps(auVar47,auVar115,0x8c);
    auVar105._4_4_ = auVar115._12_4_;
    auVar105._8_4_ = auVar47._8_4_;
    auVar105._12_4_ = puVar4[1];
    auVar112._4_4_ = auVar47._0_4_;
    auVar112._0_4_ = auVar115._4_4_;
    auVar112._8_4_ = auVar47._12_4_;
    auVar112._12_4_ = puVar4[2];
    auVar117._0_8_ = auVar88._0_8_;
    auVar117._8_4_ = *puVar4;
    auVar117._12_4_ = puVar4[3];
  }
  else {
    auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar48._0_4_;
    auVar36._4_4_ = _UNK_150b50da4 & auVar48._4_4_;
    auVar36._8_4_ = _UNK_150b50da8 & auVar48._8_4_;
    auVar36._12_4_ = _UNK_150b50dac & auVar48._12_4_;
    lVar19 = extractps(auVar36,1);
    lVar17 = extractps(auVar36,2);
    lVar21 = extractps(auVar36,3);
    auVar115 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar19),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar120 = insertps(auVar115,*(undefined4 *)(*pauVar2 + lVar21),0x30);
    auVar37._4_4_ = _UNK_150b50db4;
    auVar37._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar37._8_4_ = _UNK_150b50db8;
    auVar37._12_4_ = _UNK_150b50dbc;
    auVar37 = auVar37 & auVar48;
    auVar115 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar37._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar37._4_4_),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar37._8_4_),0x20);
    auVar126 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar37._12_4_),0x30);
    auVar38._4_4_ = _UNK_150b50dc4;
    auVar38._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar38._8_4_ = _UNK_150b50dc8;
    auVar38._12_4_ = _UNK_150b50dcc;
    auVar38 = auVar38 & auVar48;
    auVar115 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar38._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar38._4_4_),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar38._8_4_),0x20);
    auVar39 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar38._12_4_),0x30);
    lVar18 = param_5 + uVar16 * 0xc;
    auVar115 = insertps(ZEXT416(*(uint *)(param_5 + uVar16 * 0xc)),*(undefined4 *)(lVar19 + lVar18),
                        0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar105 = insertps(auVar115,*(undefined4 *)(lVar21 + lVar18),0x30);
    auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar18)),
                        *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar18),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar18),0x20);
    auVar112 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar18),0x30);
    auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar18)),
                        *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar18),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar18),0x20);
    auVar117 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar18),0x30);
  }
  fVar71 = auVar105._0_4_;
  fVar73 = auVar105._4_4_;
  fVar75 = auVar105._8_4_;
  fVar79 = auVar105._12_4_;
  fVar86 = auVar112._0_4_;
  fVar87 = auVar112._4_4_;
  fVar101 = auVar112._8_4_;
  fVar107 = auVar112._12_4_;
  fVar108 = auVar117._0_4_;
  fVar109 = auVar117._4_4_;
  fVar110 = auVar117._8_4_;
  fVar114 = auVar117._12_4_;
  fVar41 = (auVar39._0_4_ - auVar46._0_4_) * fVar108 +
           (auVar126._0_4_ - auVar93._0_4_) * fVar86 + (auVar120._0_4_ - auVar57._0_4_) * fVar71;
  fVar42 = (auVar39._4_4_ - auVar46._4_4_) * fVar109 +
           (auVar126._4_4_ - auVar93._4_4_) * fVar87 + (auVar120._4_4_ - auVar57._4_4_) * fVar73;
  fVar44 = (auVar39._8_4_ - auVar46._8_4_) * fVar110 +
           (auVar126._8_4_ - auVar93._8_4_) * fVar101 + (auVar120._8_4_ - auVar57._8_4_) * fVar75;
  fVar56 = (auVar39._12_4_ - auVar46._12_4_) * fVar114 +
           (auVar126._12_4_ - auVar93._12_4_) * fVar107 +
           (auVar120._12_4_ - auVar57._12_4_) * fVar79;
  auVar121._0_4_ = -(uint)(0.0 < fVar41 && (fVar30 != 0.0 && bVar29));
  auVar121._4_4_ = -(uint)(0.0 < fVar42 && (auVar90._4_4_ != 0.0 && bVar11));
  auVar121._8_4_ = -(uint)(0.0 < fVar44 && (auVar90._8_4_ != 0.0 && bVar12));
  auVar121._12_4_ = -(uint)(0.0 < fVar56 && (auVar90._12_4_ != 0.0 && bVar13));
  iVar43 = movmskps((int)lVar19,auVar121);
  if (iVar43 == 0) {
    return;
  }
  bVar27 = (char)((char)iVar43 << 4) >> 4;
  auVar134._0_8_ = CONCAT44(fVar73 * fVar42 + auVar57._4_4_,fVar71 * fVar41 + auVar57._0_4_);
  auVar134._8_4_ = fVar75 * fVar44 + auVar57._8_4_;
  auVar134._12_4_ = fVar79 * fVar56 + auVar57._12_4_;
  bVar29 = (bVar27 & 1) != 0;
  auVar62 = auVar57;
  if (bVar29) {
    auVar62._8_4_ = auVar134._8_4_;
    auVar62._0_8_ = auVar134._0_8_;
    auVar62._12_4_ = auVar134._12_4_;
  }
  auVar78._0_8_ = CONCAT44(fVar87 * fVar42 + auVar93._4_4_,fVar86 * fVar41 + auVar93._0_4_);
  auVar78._8_4_ = fVar101 * fVar44 + auVar93._8_4_;
  auVar78._12_4_ = fVar107 * fVar56 + auVar93._12_4_;
  auVar95._0_8_ = CONCAT44(fVar109 * fVar42 + auVar46._4_4_,fVar108 * fVar41 + auVar46._0_4_);
  auVar95._8_4_ = fVar110 * fVar44 + auVar46._8_4_;
  auVar95._12_4_ = fVar114 * fVar56 + auVar46._12_4_;
  if (bVar29) {
    auVar92._8_4_ = auVar78._8_4_;
    auVar92._0_8_ = auVar78._0_8_;
    auVar92._12_4_ = auVar78._12_4_;
    auVar138._8_4_ = auVar95._8_4_;
    auVar138._0_8_ = auVar95._0_8_;
    auVar138._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar62,1);
  }
  else {
    auVar57 = blendps(auVar57,auVar62,1);
    auVar92 = auVar93;
    auVar138 = auVar46;
  }
  if ((bVar27 & 2) == 0) {
    auVar115 = blendps(auVar93,auVar92,1);
    auVar47 = blendps(auVar46,auVar138,1);
    auVar57 = blendps(auVar57,auVar57,2);
    auVar65 = auVar115;
    auVar139 = auVar47;
  }
  else {
    auVar83._8_4_ = auVar134._8_4_;
    auVar83._0_8_ = auVar134._0_8_;
    auVar83._12_4_ = auVar134._12_4_;
    auVar115 = blendps(auVar93,auVar92,1);
    auVar65._8_4_ = auVar78._8_4_;
    auVar65._0_8_ = auVar78._0_8_;
    auVar65._12_4_ = auVar78._12_4_;
    auVar47 = blendps(auVar46,auVar138,1);
    auVar139._8_4_ = auVar95._8_4_;
    auVar139._0_8_ = auVar95._0_8_;
    auVar139._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar83,2);
  }
  if ((bVar27 & 4) == 0) {
    auVar93 = blendps(auVar115,auVar65,2);
    auVar115 = blendps(auVar47,auVar139,2);
    auVar57 = blendps(auVar57,auVar57,4);
    auVar66 = auVar93;
    auVar140 = auVar115;
  }
  else {
    auVar84._8_4_ = auVar134._8_4_;
    auVar84._0_8_ = auVar134._0_8_;
    auVar84._12_4_ = auVar134._12_4_;
    auVar93 = blendps(auVar115,auVar65,2);
    auVar66._8_4_ = auVar78._8_4_;
    auVar66._0_8_ = auVar78._0_8_;
    auVar66._12_4_ = auVar78._12_4_;
    auVar115 = blendps(auVar47,auVar139,2);
    auVar140._8_4_ = auVar95._8_4_;
    auVar140._0_8_ = auVar95._0_8_;
    auVar140._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar84,4);
  }
  if ((char)bVar27 < '\0') {
    auVar47 = blendps(auVar93,auVar66,4);
    auVar115 = blendps(auVar115,auVar140,4);
  }
  else {
    auVar78 = blendps(auVar93,auVar66,4);
    auVar95 = blendps(auVar115,auVar140,4);
    auVar115 = auVar95;
    auVar134 = auVar57;
    auVar47 = auVar78;
  }
  auVar93 = blendps(auVar57,auVar134,8);
  auVar57 = blendps(auVar47,auVar78,8);
  auVar115 = blendps(auVar115,auVar95,8);
  pauVar2 = (undefined1 (*) [16])(param_6 + uVar16 * 0xc);
  if ((~bVar27 & 0xf) == 0) {
    auVar47 = *pauVar2;
    auVar46 = pauVar2[1];
    auVar50._0_4_ = auVar47._0_4_;
    auVar88 = insertps(auVar46,auVar47,0x8c);
    auVar50._4_4_ = auVar47._12_4_;
    auVar50._8_4_ = auVar46._8_4_;
    auVar50._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar127._4_4_ = auVar46._0_4_;
    auVar127._0_4_ = auVar47._4_4_;
    auVar127._8_4_ = auVar46._12_4_;
    auVar127._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar135._0_8_ = auVar88._0_8_;
    auVar135._8_4_ = *(undefined4 *)pauVar2[2];
    auVar135._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar49._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar121._0_4_;
    auVar49._4_4_ = _UNK_150b50da4 & auVar121._4_4_;
    auVar49._8_4_ = _UNK_150b50da8 & auVar121._8_4_;
    auVar49._12_4_ = _UNK_150b50dac & auVar121._12_4_;
    lVar18 = extractps(auVar49,1);
    lVar17 = extractps(auVar49,2);
    lVar19 = extractps(auVar49,3);
    auVar47 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar50 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
    auVar63._0_4_ = ___xmm_000000280000001c0000001000000004 & auVar121._0_4_;
    auVar63._4_4_ = _UNK_150b50db4 & auVar121._4_4_;
    auVar63._8_4_ = _UNK_150b50db8 & auVar121._8_4_;
    auVar63._12_4_ = _UNK_150b50dbc & auVar121._12_4_;
    lVar18 = extractps(auVar63,1);
    lVar17 = extractps(auVar63,2);
    lVar19 = extractps(auVar63,3);
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar63._0_4_)),
                       *(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar127 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
    auVar64._0_4_ = ___xmm_0000002c000000200000001400000008 & auVar121._0_4_;
    auVar64._4_4_ = _UNK_150b50dc4 & auVar121._4_4_;
    auVar64._8_4_ = _UNK_150b50dc8 & auVar121._8_4_;
    auVar64._12_4_ = _UNK_150b50dcc & auVar121._12_4_;
    lVar18 = extractps(auVar64,1);
    lVar17 = extractps(auVar64,2);
    lVar19 = extractps(auVar64,3);
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar135 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
  }
  auVar67._4_4_ = unaff_XMM7._4_4_ * 3;
  auVar67._0_4_ = unaff_XMM7._0_4_ * 3;
  auVar67._8_4_ = unaff_XMM7._8_4_ * 3;
  auVar67._12_4_ = unaff_XMM7._12_4_ * 3;
  auVar67 = auVar67 & auVar121;
  lVar18 = param_2 + (longlong)auVar67._0_4_ * 4;
  lVar17 = param_2 + (longlong)auVar67._4_4_ * 4;
  lVar19 = param_2 + (longlong)auVar67._8_4_ * 4;
  lVar21 = param_2 + (longlong)auVar67._12_4_ * 4;
  auVar47 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar67._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar67._4_4_ * 4),0x10);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar67._8_4_ * 4),0x20);
  auVar88 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar67._12_4_ * 4),0x30);
  auVar47 = ___xmm_00000004000000040000000400000004 & auVar121;
  auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18)),
                     *(undefined4 *)((ulonglong)auVar47._4_4_ + lVar17),0x10);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar47._8_4_ + lVar19),0x20);
  auVar47 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar47._12_4_ + lVar21),0x30);
  auVar121 = auVar121 & ___xmm_00000008000000080000000800000008;
  auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar121._0_4_ + lVar18)),
                     *(undefined4 *)((ulonglong)auVar121._4_4_ + lVar17),0x10);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar121._8_4_ + lVar19),0x20);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar121._12_4_ + lVar21),0x30);
  fVar70 = (auVar93._0_4_ - auVar88._0_4_) - auVar50._0_4_ * param_8;
  fVar72 = (auVar93._4_4_ - auVar88._4_4_) - auVar50._4_4_ * param_8;
  fVar74 = (auVar93._8_4_ - auVar88._8_4_) - auVar50._8_4_ * param_8;
  fVar96 = (auVar93._12_4_ - auVar88._12_4_) - auVar50._12_4_ * param_8;
  fVar98 = (auVar57._0_4_ - auVar47._0_4_) - auVar127._0_4_ * param_8;
  fVar99 = (auVar57._4_4_ - auVar47._4_4_) - auVar127._4_4_ * param_8;
  fVar100 = (auVar57._8_4_ - auVar47._8_4_) - auVar127._8_4_ * param_8;
  fVar123 = (auVar57._12_4_ - auVar47._12_4_) - auVar127._12_4_ * param_8;
  fVar129 = (auVar115._0_4_ - auVar46._0_4_) - param_8 * auVar135._0_4_;
  fVar130 = (auVar115._4_4_ - auVar46._4_4_) - param_8 * auVar135._4_4_;
  fVar131 = (auVar115._8_4_ - auVar46._8_4_) - param_8 * auVar135._8_4_;
  fVar142 = (auVar115._12_4_ - auVar46._12_4_) - param_8 * auVar135._12_4_;
  fVar45 = fVar108 * fVar129 + fVar86 * fVar98 + fVar71 * fVar70;
  fVar53 = fVar109 * fVar130 + fVar87 * fVar99 + fVar73 * fVar72;
  fVar54 = fVar110 * fVar131 + fVar101 * fVar100 + fVar75 * fVar74;
  fVar55 = fVar114 * fVar142 + fVar107 * fVar123 + fVar79 * fVar96;
  fVar70 = fVar70 - fVar71 * fVar45;
  fVar72 = fVar72 - fVar73 * fVar53;
  fVar74 = fVar74 - fVar75 * fVar54;
  fVar96 = fVar96 - fVar79 * fVar55;
  fVar98 = fVar98 - fVar86 * fVar45;
  fVar99 = fVar99 - fVar87 * fVar53;
  fVar100 = fVar100 - fVar101 * fVar54;
  fVar123 = fVar123 - fVar107 * fVar55;
  fVar129 = fVar129 - fVar45 * fVar108;
  fVar130 = fVar130 - fVar53 * fVar109;
  fVar131 = fVar131 - fVar54 * fVar110;
  fVar142 = fVar142 - fVar55 * fVar114;
  auVar51._0_4_ = fVar129 * fVar129 + fVar98 * fVar98 + fVar70 * fVar70;
  auVar51._4_4_ = fVar130 * fVar130 + fVar99 * fVar99 + fVar72 * fVar72;
  auVar51._8_4_ = fVar131 * fVar131 + fVar100 * fVar100 + fVar74 * fVar74;
  auVar51._12_4_ = fVar142 * fVar142 + fVar123 * fVar123 + fVar96 * fVar96;
  auVar47 = sqrtps(auVar51,auVar51);
  auVar68._0_4_ = param_7 * fVar41;
  auVar68._4_4_ = param_7 * fVar42;
  auVar68._8_4_ = param_7 * fVar44;
  auVar68._12_4_ = param_7 * fVar56;
  auVar46 = minps(auVar68,auVar47);
  auVar46 = divps(auVar46,auVar47);
  fVar41 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar47._0_4_) & auVar46._0_4_
                  );
  fVar42 = (float)(-(uint)(_UNK_1506895d4 <= auVar47._4_4_) & auVar46._4_4_);
  fVar44 = (float)(-(uint)(_UNK_1506895d8 <= auVar47._8_4_) & auVar46._8_4_);
  fVar56 = (float)(-(uint)(_UNK_1506895dc <= auVar47._12_4_) & auVar46._12_4_);
  auVar113._0_8_ = CONCAT44(auVar93._4_4_ - fVar42 * fVar72,auVar93._0_4_ - fVar41 * fVar70);
  auVar113._8_4_ = auVar93._8_4_ - fVar44 * fVar74;
  auVar113._12_4_ = auVar93._12_4_ - fVar56 * fVar96;
  bVar29 = (bVar27 & 1) != 0;
  auVar136 = auVar93;
  if (bVar29) {
    auVar136._8_4_ = auVar113._8_4_;
    auVar136._0_8_ = auVar113._0_8_;
    auVar136._12_4_ = auVar113._12_4_;
  }
  auVar97._0_8_ = CONCAT44(auVar57._4_4_ - fVar99 * fVar42,auVar57._0_4_ - fVar98 * fVar41);
  auVar97._8_4_ = auVar57._8_4_ - fVar100 * fVar44;
  auVar97._12_4_ = auVar57._12_4_ - fVar123 * fVar56;
  auVar40._0_8_ = CONCAT44(auVar115._4_4_ - fVar130 * fVar42,auVar115._0_4_ - fVar129 * fVar41);
  auVar40._8_4_ = auVar115._8_4_ - fVar131 * fVar44;
  auVar40._12_4_ = auVar115._12_4_ - fVar142 * fVar56;
  if (bVar29) {
    auVar118._8_4_ = auVar97._8_4_;
    auVar118._0_8_ = auVar97._0_8_;
    auVar118._12_4_ = auVar97._12_4_;
    auVar52._8_4_ = auVar40._8_4_;
    auVar52._0_8_ = auVar40._0_8_;
    auVar52._12_4_ = auVar40._12_4_;
    auVar47 = blendps(auVar93,auVar136,1);
  }
  else {
    auVar47 = blendps(auVar93,auVar136,1);
    auVar52 = auVar115;
    auVar118 = auVar57;
  }
  if ((bVar27 & 2) == 0) {
    auVar93 = blendps(auVar57,auVar118,1);
    auVar115 = blendps(auVar115,auVar52,1);
    auVar57 = blendps(auVar47,auVar47,2);
    auVar128 = auVar93;
    auVar106 = auVar115;
    auVar85 = auVar47;
  }
  else {
    auVar85._8_4_ = auVar113._8_4_;
    auVar85._0_8_ = auVar113._0_8_;
    auVar85._12_4_ = auVar113._12_4_;
    auVar93 = blendps(auVar57,auVar118,1);
    auVar128._8_4_ = auVar97._8_4_;
    auVar128._0_8_ = auVar97._0_8_;
    auVar128._12_4_ = auVar97._12_4_;
    auVar115 = blendps(auVar115,auVar52,1);
    auVar106._8_4_ = auVar40._8_4_;
    auVar106._0_8_ = auVar40._0_8_;
    auVar106._12_4_ = auVar40._12_4_;
    auVar57 = blendps(auVar47,auVar85,2);
  }
  if ((bVar27 & 4) == 0) {
    auVar47 = blendps(auVar93,auVar128,2);
    auVar115 = blendps(auVar115,auVar106,2);
    auVar69 = auVar115;
    auVar122 = auVar57;
    auVar141 = auVar47;
  }
  else {
    auVar122._8_4_ = auVar113._8_4_;
    auVar122._0_8_ = auVar113._0_8_;
    auVar122._12_4_ = auVar113._12_4_;
    auVar47 = blendps(auVar93,auVar128,2);
    auVar141._8_4_ = auVar97._8_4_;
    auVar141._0_8_ = auVar97._0_8_;
    auVar141._12_4_ = auVar97._12_4_;
    auVar115 = blendps(auVar115,auVar106,2);
    auVar69._8_4_ = auVar40._8_4_;
    auVar69._0_8_ = auVar40._0_8_;
    auVar69._12_4_ = auVar40._12_4_;
  }
  if ((char)bVar27 < '\0') {
    auVar47 = auVar97;
    auVar115 = auVar40;
    auVar57 = auVar113;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + auVar91._0_4_) = auVar136._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar122,2);
    *(undefined8 *)(param_1 + auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar91._0_4_) = auVar118._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar128,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar141,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar91._0_4_) = auVar52._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar69,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar91._0_4_) = fVar30;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._12_4_) = uVar10;
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_sse4 @ 14030e350

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  int iVar28;
  uint *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  byte bVar32;
  int unaff_EBP;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  bool bVar39;
  uint uVar41;
  uint uVar42;
  undefined1 auVar40 [16];
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  float fVar76;
  float fVar77;
  float fVar81;
  float fVar83;
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  float fVar84;
  float fVar90;
  float fVar91;
  undefined1 auVar85 [16];
  float fVar92;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined1 auVar58 [16];
  undefined1 auVar78 [16];
  
  uVar35 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar35 = param_5;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar34 = 0;
  }
  else {
    lVar33 = 8;
    uVar34 = 0;
    uVar48 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar48);
      lVar36 = (longlong)(*piVar1 << 4);
      lVar38 = (longlong)(piVar1[1] * 0x10);
      lVar37 = (longlong)(piVar1[2] << 4);
      lVar31 = (longlong)(piVar1[3] << 4);
      uVar49 = *(uint *)(param_1 + 0xc + lVar36);
      uVar50 = *(uint *)(param_1 + 0xc + lVar38);
      uVar51 = *(uint *)(param_1 + 0xc + lVar37);
      uVar41 = *(uint *)(param_1 + 0xc + lVar31);
      auVar40 = insertps(ZEXT416(uVar49),ZEXT416(uVar50),0x10);
      auVar40 = insertps(auVar40,ZEXT416(uVar51),0x20);
      auVar40 = insertps(auVar40,ZEXT416(uVar41),0x30);
      fVar76 = auVar40._0_4_;
      fVar81 = auVar40._4_4_;
      fVar52 = auVar40._8_4_;
      fVar55 = auVar40._12_4_;
      auVar40._4_4_ = -(uint)(fVar81 == 0.0);
      auVar40._0_4_ = -(uint)(fVar76 == 0.0);
      auVar40._8_4_ = -(uint)(fVar52 == 0.0);
      auVar40._12_4_ = -(uint)(fVar55 == 0.0);
      auVar73._4_4_ = -(uint)NAN(fVar81);
      auVar73._0_4_ = -(uint)NAN(fVar76);
      auVar73._8_4_ = -(uint)NAN(fVar52);
      auVar73._12_4_ = -(uint)NAN(fVar55);
      iVar28 = movmskps(piVar1[3] << 4,auVar73 | auVar40);
      if (iVar28 == 0) {
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),*(undefined4 *)(param_1 + lVar38),
                           0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + lVar37),0x20);
        auVar63 = insertps(auVar40,*(undefined4 *)(param_1 + lVar31),0x30);
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                           *(undefined4 *)(param_1 + 4 + lVar38),0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + 4 + lVar37),0x20);
        auVar67 = insertps(auVar40,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                           *(undefined4 *)(param_1 + 8 + lVar38),0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + 8 + lVar37),0x20);
        auVar71 = insertps(auVar40,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
        auVar40 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar33 * 4);
        auVar73 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar33 * 4);
        pfVar2 = (float *)(param_3 + lVar33 * 4);
        auVar85 = insertps(auVar73,auVar40,0x8c);
        auVar54 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar33 * 4);
        auVar72 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar33 * 4);
        pfVar3 = (float *)(param_4 + lVar33 * 4);
        auVar53 = insertps(auVar72,auVar54,0x8c);
        fVar46 = auVar63._0_4_;
        fVar47 = auVar63._4_4_;
        fVar45 = auVar63._8_4_;
        fVar77 = auVar63._12_4_;
        fVar82 = auVar67._0_4_;
        fVar83 = auVar67._4_4_;
        fVar56 = auVar67._8_4_;
        fVar44 = auVar67._12_4_;
        fVar84 = (auVar85._0_4_ - auVar71._0_4_) * auVar53._0_4_ +
                 (auVar40._4_4_ - fVar82) * auVar54._4_4_ + (auVar40._0_4_ - fVar46) * auVar54._0_4_
        ;
        fVar90 = (auVar85._4_4_ - auVar71._4_4_) * auVar53._4_4_ +
                 (auVar73._0_4_ - fVar83) * auVar72._0_4_ +
                 (auVar40._12_4_ - fVar47) * auVar54._12_4_;
        fVar91 = (*pfVar2 - auVar71._8_4_) * *pfVar3 +
                 (auVar73._12_4_ - fVar56) * auVar72._12_4_ +
                 (auVar73._8_4_ - fVar45) * auVar72._8_4_;
        fVar92 = (pfVar2[3] - auVar71._12_4_) * pfVar3[3] +
                 (pfVar2[2] - fVar44) * pfVar3[2] + (pfVar2[1] - fVar77) * pfVar3[1];
        auVar85._4_4_ = -(uint)(0.0 < fVar90 && fVar81 != 0.0);
        auVar85._0_4_ = -(uint)(0.0 < fVar84 && fVar76 != 0.0);
        auVar85._8_4_ = -(uint)(0.0 < fVar91 && fVar52 != 0.0);
        auVar85._12_4_ = -(uint)(0.0 < fVar92 && fVar55 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar85);
        if (unaff_EBP != 0) {
          bVar32 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31((int3)((uint)unaff_EBP >> 8),bVar32);
          fVar76 = auVar54._0_4_ * fVar84 + fVar46;
          fVar81 = auVar54._12_4_ * fVar90 + fVar47;
          auVar78._0_8_ = CONCAT44(fVar81,fVar76);
          auVar78._8_4_ = auVar72._8_4_ * fVar91 + fVar45;
          auVar78._12_4_ = pfVar3[1] * fVar92 + fVar77;
          bVar39 = (bVar32 & 1) != 0;
          if (bVar39) {
            fVar46 = fVar76;
            fVar47 = fVar81;
            fVar45 = auVar78._8_4_;
            fVar77 = auVar78._12_4_;
          }
          fVar57 = auVar54._4_4_ * fVar84 + fVar82;
          fVar62 = auVar72._0_4_ * fVar90 + fVar83;
          auVar58._0_8_ = CONCAT44(fVar62,fVar57);
          auVar58._8_4_ = auVar72._12_4_ * fVar91 + fVar56;
          auVar58._12_4_ = pfVar3[2] * fVar92 + fVar44;
          fVar52 = auVar53._0_4_ * fVar84 + auVar71._0_4_;
          fVar55 = auVar53._4_4_ * fVar90 + auVar71._4_4_;
          auVar54._0_8_ = CONCAT44(fVar55,fVar52);
          auVar54._8_4_ = *pfVar3 * fVar91 + auVar71._8_4_;
          auVar54._12_4_ = pfVar3[3] * fVar92 + auVar71._12_4_;
          if (bVar39) {
            auVar53._8_4_ = auVar54._8_4_;
            auVar53._0_8_ = auVar54._0_8_;
            auVar53._12_4_ = auVar54._12_4_;
            auVar72._4_4_ = fVar47;
            auVar72._0_4_ = fVar46;
            auVar72._8_4_ = fVar45;
            auVar72._12_4_ = fVar77;
            auVar40 = blendps(auVar63,auVar72,1);
            fVar47 = auVar40._8_4_;
            fVar45 = auVar40._12_4_;
            fVar56 = auVar58._8_4_;
            fVar44 = auVar58._12_4_;
            fVar77 = auVar40._0_4_;
            fVar82 = auVar40._4_4_;
            if ((bVar32 & 2) != 0) goto LAB_14030e70d;
LAB_14030e5ef:
            fVar81 = fVar82;
            fVar76 = fVar77;
            auVar19._4_4_ = fVar62;
            auVar19._0_4_ = fVar57;
            auVar19._8_4_ = fVar56;
            auVar19._12_4_ = fVar44;
            auVar68 = blendps(auVar67,auVar19,1);
            auVar72 = blendps(auVar71,auVar53,1);
            fVar52 = auVar72._0_4_;
            fVar55 = auVar72._4_4_;
            local_f8 = auVar53._0_4_;
            auVar71._4_4_ = fVar81;
            auVar71._0_4_ = fVar76;
            auVar71._8_4_ = fVar47;
            auVar71._12_4_ = fVar45;
            auVar40 = blendps(auVar40,auVar71,2);
            auVar73 = auVar68;
            fVar56 = auVar72._8_4_;
            fVar44 = auVar72._12_4_;
            if ((bVar32 & 4) == 0) goto LAB_14030e62a;
LAB_14030e753:
            auVar86._8_4_ = auVar78._8_4_;
            auVar86._0_8_ = auVar78._0_8_;
            auVar86._12_4_ = auVar78._12_4_;
            auVar85 = blendps(auVar73,auVar68,2);
            auVar18._4_4_ = fVar55;
            auVar18._0_4_ = fVar52;
            auVar18._8_4_ = fVar56;
            auVar18._12_4_ = fVar44;
            auVar73 = blendps(auVar72,auVar18,2);
            auVar72 = auVar54;
            auVar53 = auVar58;
          }
          else {
            auVar24._4_4_ = fVar47;
            auVar24._0_4_ = fVar46;
            auVar24._8_4_ = fVar45;
            auVar24._12_4_ = fVar77;
            auVar40 = blendps(auVar63,auVar24,1);
            fVar47 = auVar40._8_4_;
            fVar45 = auVar40._12_4_;
            auVar53 = auVar71;
            fVar57 = fVar82;
            fVar62 = fVar83;
            fVar77 = auVar40._0_4_;
            fVar82 = auVar40._4_4_;
            if ((bVar32 & 2) == 0) goto LAB_14030e5ef;
LAB_14030e70d:
            auVar63._4_4_ = fVar62;
            auVar63._0_4_ = fVar57;
            auVar63._8_4_ = fVar56;
            auVar63._12_4_ = fVar44;
            auVar73 = blendps(auVar67,auVar63,1);
            auVar68._8_4_ = auVar58._8_4_;
            auVar68._0_8_ = auVar58._0_8_;
            auVar68._12_4_ = auVar58._12_4_;
            auVar72 = blendps(auVar71,auVar53,1);
            local_f8 = auVar53._0_4_;
            auVar67._4_4_ = fVar81;
            auVar67._0_4_ = fVar76;
            auVar67._8_4_ = auVar78._8_4_;
            auVar67._12_4_ = auVar78._12_4_;
            auVar40 = blendps(auVar40,auVar67,2);
            fVar56 = auVar54._8_4_;
            fVar44 = auVar54._12_4_;
            fVar47 = auVar78._8_4_;
            fVar45 = auVar78._12_4_;
            if ((bVar32 & 4) != 0) goto LAB_14030e753;
LAB_14030e62a:
            auVar85 = blendps(auVar73,auVar68,2);
            auVar13._4_4_ = fVar55;
            auVar13._0_4_ = fVar52;
            auVar13._8_4_ = fVar56;
            auVar13._12_4_ = fVar44;
            auVar73 = blendps(auVar72,auVar13,2);
            auVar72 = auVar73;
            auVar53 = auVar85;
            auVar86 = auVar40;
          }
          if ((char)bVar32 < '\0') {
            auVar73 = auVar54;
            auVar85 = auVar58;
            auVar40 = auVar78;
          }
          if ((bVar32 & 1) != 0) {
            *(float *)(param_1 + lVar36) = fVar46;
          }
          if ((bVar32 & 2) != 0) {
            auVar23._4_4_ = fVar81;
            auVar23._0_4_ = fVar76;
            auVar23._8_4_ = fVar47;
            auVar23._12_4_ = fVar45;
            uVar6 = extractps(auVar23,1);
            *(undefined8 *)(param_1 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar86,2);
            *(undefined8 *)(param_1 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar40,3);
            *(undefined8 *)(param_1 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(float *)(param_1 + 4 + lVar36) = fVar57;
          }
          if ((bVar32 & 2) != 0) {
            uVar6 = extractps(auVar68,1);
            *(undefined8 *)(param_1 + 4 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar53,2);
            *(undefined8 *)(param_1 + 4 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar85,3);
            *(undefined8 *)(param_1 + 4 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(undefined4 *)(param_1 + 8 + lVar36) = local_f8;
          }
          if ((bVar32 & 2) != 0) {
            auVar17._4_4_ = fVar55;
            auVar17._0_4_ = fVar52;
            auVar17._8_4_ = fVar56;
            auVar17._12_4_ = fVar44;
            uVar6 = extractps(auVar17,1);
            *(undefined8 *)(param_1 + 8 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar72,2);
            *(undefined8 *)(param_1 + 8 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar73,3);
            *(undefined8 *)(param_1 + 8 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar36) = uVar49;
          }
          if ((bVar32 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar38) = uVar50;
          }
          if ((bVar32 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar37) = uVar51;
          }
          if ((char)bVar32 < '\0') {
            *(uint *)(param_1 + 0xc + lVar31) = uVar41;
          }
        }
      }
      uVar48 = uVar48 + 0x10;
      lVar33 = lVar33 + 0xc;
      uVar34 = uVar34 + 4;
    } while ((int)uVar34 < (int)(uVar35 & 0xfffffffc));
  }
  if ((int)param_5 <= (int)uVar34) {
    return;
  }
  iVar28 = uVar34 << 2;
  bVar39 = (int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  uVar48 = -(uint)bVar39;
  bVar7 = (int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  uVar49 = -(uint)bVar7;
  bVar8 = (int)(uVar34 | _UNK_150631e08) < (int)param_5;
  uVar50 = -(uint)bVar8;
  bVar9 = (int)(uVar34 | _UNK_150631e0c) < (int)param_5;
  uVar51 = -(uint)bVar9;
  auVar10._4_4_ = uVar49;
  auVar10._0_4_ = uVar48;
  auVar10._8_4_ = uVar50;
  auVar10._12_4_ = uVar51;
  uVar35 = movmskps(iVar28,auVar10);
  bVar32 = (char)((byte)uVar35 << 4) >> 4;
  if ((~(byte)uVar35 & 9) == 0) {
    puVar29 = (uint *)(param_2 + iVar28);
    param_5 = *puVar29;
    uVar41 = puVar29[1];
    uVar42 = puVar29[2];
    uVar43 = puVar29[3];
    goto LAB_14030e948;
  }
  puVar29 = (uint *)(param_2 + iVar28);
  if ((uVar35 & 1) == 0) {
    if ((uVar35 & 2) == 0) goto LAB_14030e931;
LAB_14030ed09:
    uVar41 = puVar29[1];
    if ((uVar35 & 4) != 0) goto LAB_14030ed1a;
LAB_14030e93b:
    uVar42 = 0;
  }
  else {
    param_5 = *puVar29;
    if ((uVar35 & 2) != 0) goto LAB_14030ed09;
LAB_14030e931:
    uVar41 = 0;
    if ((uVar35 & 4) == 0) goto LAB_14030e93b;
LAB_14030ed1a:
    uVar42 = puVar29[2];
  }
  uVar43 = 0;
  if ((uVar35 & 8) != 0) {
    uVar43 = puVar29[3];
  }
LAB_14030e948:
  param_5 = param_5 << 4;
  uVar41 = uVar41 * 0x10;
  uVar42 = uVar42 << 4;
  uVar43 = uVar43 << 4;
  lVar33 = param_1 + (int)(uVar48 & param_5);
  lVar31 = param_1 + (int)(uVar49 & uVar41);
  lVar36 = param_1 + (int)(uVar50 & uVar42);
  lVar37 = param_1 + (int)(uVar51 & uVar43);
  auVar40 = ZEXT416(*(uint *)(param_1 + (int)(uVar48 & param_5)));
  if ((bVar32 & 2) == 0) {
    auVar73 = ZEXT416(*(uint *)((ulonglong)(___xmm_00000004000000040000000400000004 & uVar48) +
                               lVar33));
    auVar54 = ZEXT416(*(uint *)((ulonglong)(___xmm_00000008000000080000000800000008 & uVar48) +
                               lVar33));
  }
  else {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar49 & uVar41)),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000004000000040000000400000004 & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar49) + lVar31),0x10);
    auVar54 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000008000000080000000800000008 & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar49) + lVar31),0x10);
  }
  if ((bVar32 & 4) == 0) {
    auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000000c0000000c0000000c0000000c & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar49) + lVar31),0x10);
  }
  else {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar50 & uVar42)),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar50) + lVar36),0x20);
    auVar54 = insertps(auVar54,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar50) + lVar36),0x20);
    auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000000c0000000c0000000c0000000c & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar49) + lVar31),0x10);
  }
  if ((char)bVar32 < '\0') {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar51 & uVar43)),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar50) + lVar36),0x20);
  }
  else {
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar50) + lVar36),0x20);
  }
  if ((char)bVar32 < '\0') {
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar51) + lVar37),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar51) + lVar37),0x30);
  }
  else {
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar51) + lVar37),0x30);
  }
  if ((char)bVar32 < '\0') {
    auVar54 = insertps(auVar54,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar51) + lVar37),0x30);
  }
  fVar76 = auVar72._0_4_;
  auVar64._0_4_ = -(uint)(fVar76 == 0.0 && bVar39);
  auVar64._4_4_ = -(uint)(auVar72._4_4_ == 0.0 && bVar7);
  auVar64._8_4_ = -(uint)(auVar72._8_4_ == 0.0 && bVar8);
  auVar64._12_4_ = -(uint)(auVar72._12_4_ == 0.0 && bVar9);
  iVar28 = movmskps((int)lVar37,auVar64);
  if (iVar28 == 0) {
    uVar30 = (ulonglong)(uVar34 | (uint)__xmm_00000003000000020000000100000000);
    pauVar4 = (undefined1 (*) [16])(param_3 + uVar30 * 0xc);
    if ((~bVar32 & 0xf) == 0) {
      auVar85 = *pauVar4;
      auVar53 = pauVar4[1];
      auVar74._0_4_ = auVar85._0_4_;
      auVar63 = insertps(auVar53,auVar85,0x8c);
      auVar74._4_4_ = auVar85._12_4_;
      auVar74._8_4_ = auVar53._8_4_;
      auVar74._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar87._4_4_ = auVar53._0_4_;
      auVar87._0_4_ = auVar85._4_4_;
      auVar87._8_4_ = auVar53._12_4_;
      auVar87._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar79._0_8_ = auVar63._0_8_;
      auVar79._8_4_ = *(undefined4 *)pauVar4[2];
      auVar79._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar85 = *(undefined1 (*) [16])(param_4 + uVar30 * 0xc);
      auVar53 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar30 * 0xc);
      puVar5 = (undefined4 *)(param_4 + 0x20 + uVar30 * 0xc);
      auVar69._0_4_ = auVar85._0_4_;
      auVar63 = insertps(auVar53,auVar85,0x8c);
      auVar69._4_4_ = auVar85._12_4_;
      auVar69._8_4_ = auVar53._8_4_;
      auVar69._12_4_ = puVar5[1];
      auVar65._4_4_ = auVar53._0_4_;
      auVar65._0_4_ = auVar85._4_4_;
      auVar65._8_4_ = auVar53._12_4_;
      auVar65._12_4_ = puVar5[2];
      auVar60._0_8_ = auVar63._0_8_;
      auVar60._8_4_ = *puVar5;
      auVar60._12_4_ = puVar5[3];
    }
    else {
      auVar59._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar48;
      auVar59._4_4_ = _UNK_150b50da4 & uVar49;
      auVar59._8_4_ = _UNK_150b50da8 & uVar50;
      auVar59._12_4_ = _UNK_150b50dac & uVar51;
      lVar31 = extractps(auVar59,1);
      lVar36 = extractps(auVar59,2);
      lVar37 = extractps(auVar59,3);
      auVar85 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar31),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + lVar36),0x20);
      auVar74 = insertps(auVar85,*(undefined4 *)(*pauVar4 + lVar37),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar48))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar49)),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar50)),0x20);
      auVar87 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar51)),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_0000002c000000200000001400000008 & uVar48))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50dc4 & uVar49)),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dc8 & uVar50)),0x20);
      auVar79 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dcc & uVar51)),0x30);
      lVar33 = param_4 + uVar30 * 0xc;
      auVar85 = insertps(ZEXT416(*(uint *)(param_4 + uVar30 * 0xc)),*(undefined4 *)(lVar31 + lVar33)
                         ,0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(lVar36 + lVar33),0x20);
      auVar69 = insertps(auVar85,*(undefined4 *)(lVar37 + lVar33),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar48) +
                                          lVar33)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar49) + lVar33),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar50) + lVar33),0x20
                        );
      auVar65 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar51) + lVar33),0x30
                        );
      auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_0000002c000000200000001400000008 & uVar48) +
                                          lVar33)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar49) + lVar33),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar50) + lVar33),0x20
                        );
      auVar60 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar51) + lVar33),0x30
                        );
    }
    fVar44 = auVar40._0_4_;
    fVar46 = auVar40._4_4_;
    fVar47 = auVar40._8_4_;
    fVar45 = auVar40._12_4_;
    fVar81 = auVar54._0_4_;
    fVar52 = auVar54._4_4_;
    fVar55 = auVar54._8_4_;
    fVar56 = auVar54._12_4_;
    fVar77 = (auVar79._0_4_ - fVar81) * auVar60._0_4_ +
             (auVar87._0_4_ - auVar73._0_4_) * auVar65._0_4_ +
             (auVar74._0_4_ - fVar44) * auVar69._0_4_;
    fVar82 = (auVar79._4_4_ - fVar52) * auVar60._4_4_ +
             (auVar87._4_4_ - auVar73._4_4_) * auVar65._4_4_ +
             (auVar74._4_4_ - fVar46) * auVar69._4_4_;
    fVar83 = (auVar79._8_4_ - fVar55) * auVar60._8_4_ +
             (auVar87._8_4_ - auVar73._8_4_) * auVar65._8_4_ +
             (auVar74._8_4_ - fVar47) * auVar69._8_4_;
    fVar84 = (auVar79._12_4_ - fVar56) * auVar60._12_4_ +
             (auVar87._12_4_ - auVar73._12_4_) * auVar65._12_4_ +
             (auVar74._12_4_ - fVar45) * auVar69._12_4_;
    auVar88._0_4_ = -(uint)((fVar76 != 0.0 && bVar39) && 0.0 < fVar77);
    auVar88._4_4_ = -(uint)((auVar72._4_4_ != 0.0 && bVar7) && 0.0 < fVar82);
    auVar88._8_4_ = -(uint)((auVar72._8_4_ != 0.0 && bVar8) && 0.0 < fVar83);
    auVar88._12_4_ = -(uint)((auVar72._12_4_ != 0.0 && bVar9) && 0.0 < fVar84);
    iVar28 = movmskps((int)local_118,auVar88);
    if (iVar28 == 0) {
      return;
    }
    bVar32 = (char)((char)iVar28 << 4) >> 4;
    fVar90 = auVar69._0_4_ * fVar77 + fVar44;
    fVar91 = auVar69._4_4_ * fVar82 + fVar46;
    auVar70._0_8_ = CONCAT44(fVar91,fVar90);
    auVar70._8_4_ = auVar69._8_4_ * fVar83 + fVar47;
    auVar70._12_4_ = auVar69._12_4_ * fVar84 + fVar45;
    bVar39 = (bVar32 & 1) != 0;
    if (bVar39) {
      fVar44 = fVar90;
      fVar46 = fVar91;
      fVar47 = auVar70._8_4_;
      fVar45 = auVar70._12_4_;
    }
    fVar92 = auVar65._0_4_ * fVar77 + auVar73._0_4_;
    fVar57 = auVar65._4_4_ * fVar82 + auVar73._4_4_;
    auVar66._0_8_ = CONCAT44(fVar57,fVar92);
    auVar66._8_4_ = auVar65._8_4_ * fVar83 + auVar73._8_4_;
    auVar66._12_4_ = auVar65._12_4_ * fVar84 + auVar73._12_4_;
    fVar77 = auVar60._0_4_ * fVar77 + fVar81;
    fVar82 = auVar60._4_4_ * fVar82 + fVar52;
    auVar61._0_8_ = CONCAT44(fVar82,fVar77);
    auVar61._8_4_ = auVar60._8_4_ * fVar83 + fVar55;
    auVar61._12_4_ = auVar60._12_4_ * fVar84 + fVar56;
    if (bVar39) {
      auVar80._8_4_ = auVar66._8_4_;
      auVar80._0_8_ = auVar66._0_8_;
      auVar80._12_4_ = auVar66._12_4_;
      auVar21._4_4_ = fVar46;
      auVar21._0_4_ = fVar44;
      auVar21._8_4_ = fVar47;
      auVar21._12_4_ = fVar45;
      auVar40 = blendps(auVar40,auVar21,1);
      fVar45 = auVar40._0_4_;
      fVar83 = auVar40._4_4_;
      fVar46 = auVar40._8_4_;
      fVar47 = auVar40._12_4_;
      fVar81 = fVar77;
      fVar52 = fVar82;
      fVar55 = auVar61._8_4_;
      fVar56 = auVar61._12_4_;
    }
    else {
      auVar20._4_4_ = fVar46;
      auVar20._0_4_ = fVar44;
      auVar20._8_4_ = fVar47;
      auVar20._12_4_ = fVar45;
      auVar40 = blendps(auVar40,auVar20,1);
      fVar45 = auVar40._0_4_;
      fVar83 = auVar40._4_4_;
      fVar46 = auVar40._8_4_;
      fVar47 = auVar40._12_4_;
      auVar80 = auVar73;
    }
    if ((bVar32 & 2) == 0) {
      auVar73 = blendps(auVar73,auVar80,1);
      auVar11._4_4_ = fVar52;
      auVar11._0_4_ = fVar81;
      auVar11._8_4_ = fVar55;
      auVar11._12_4_ = fVar56;
      auVar54 = blendps(auVar54,auVar11,1);
      auVar25._4_4_ = fVar83;
      auVar25._0_4_ = fVar45;
      auVar25._8_4_ = fVar46;
      auVar25._12_4_ = fVar47;
      auVar40 = blendps(auVar40,auVar25,2);
      fVar52 = auVar73._0_4_;
      fVar55 = auVar73._4_4_;
      fVar56 = auVar73._8_4_;
      fVar77 = auVar73._12_4_;
      auVar75 = auVar54;
      fVar90 = fVar45;
      fVar91 = fVar83;
    }
    else {
      auVar73 = blendps(auVar73,auVar80,1);
      auVar12._4_4_ = fVar52;
      auVar12._0_4_ = fVar81;
      auVar12._8_4_ = fVar55;
      auVar12._12_4_ = fVar56;
      auVar54 = blendps(auVar54,auVar12,1);
      auVar75._8_4_ = auVar61._8_4_;
      auVar75._0_8_ = auVar61._0_8_;
      auVar75._12_4_ = auVar61._12_4_;
      auVar27._4_4_ = fVar91;
      auVar27._0_4_ = fVar90;
      auVar27._8_4_ = auVar70._8_4_;
      auVar27._12_4_ = auVar70._12_4_;
      auVar40 = blendps(auVar40,auVar27,2);
      fVar52 = fVar92;
      fVar55 = fVar57;
      fVar56 = auVar66._8_4_;
      fVar77 = auVar66._12_4_;
      fVar46 = auVar70._8_4_;
      fVar47 = auVar70._12_4_;
    }
    if ((bVar32 & 4) == 0) {
      auVar14._4_4_ = fVar55;
      auVar14._0_4_ = fVar52;
      auVar14._8_4_ = fVar56;
      auVar14._12_4_ = fVar77;
      auVar73 = blendps(auVar73,auVar14,2);
      fVar92 = auVar73._0_4_;
      fVar57 = auVar73._4_4_;
      fVar45 = auVar73._8_4_;
      fVar82 = auVar73._12_4_;
      auVar54 = blendps(auVar54,auVar75,2);
      auVar85 = auVar54;
      auVar89 = auVar40;
    }
    else {
      auVar89._8_4_ = auVar70._8_4_;
      auVar89._0_8_ = auVar70._0_8_;
      auVar89._12_4_ = auVar70._12_4_;
      auVar16._4_4_ = fVar55;
      auVar16._0_4_ = fVar52;
      auVar16._8_4_ = fVar56;
      auVar16._12_4_ = fVar77;
      auVar73 = blendps(auVar73,auVar16,2);
      auVar54 = blendps(auVar54,auVar75,2);
      fVar45 = auVar66._8_4_;
      fVar82 = auVar66._12_4_;
      auVar85 = auVar61;
    }
    if ((char)bVar32 < '\0') {
      auVar40 = auVar70;
      auVar73 = auVar66;
      auVar54 = auVar61;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + (int)param_5) = fVar44;
    }
    if ((bVar32 & 2) != 0) {
      auVar26._4_4_ = fVar91;
      auVar26._0_4_ = fVar90;
      auVar26._8_4_ = fVar46;
      auVar26._12_4_ = fVar47;
      uVar6 = extractps(auVar26,1);
      *(undefined8 *)(param_1 + (int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar89,2);
      *(undefined8 *)(param_1 + (int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar40,3);
      *(undefined8 *)(param_1 + (int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(int *)(param_1 + 4 + (longlong)(int)param_5) = auVar80._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      auVar15._4_4_ = fVar55;
      auVar15._0_4_ = fVar52;
      auVar15._8_4_ = fVar56;
      auVar15._12_4_ = fVar77;
      uVar6 = extractps(auVar15,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      auVar22._4_4_ = fVar57;
      auVar22._0_4_ = fVar92;
      auVar22._8_4_ = fVar45;
      auVar22._12_4_ = fVar82;
      uVar6 = extractps(auVar22,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + 8 + (longlong)(int)param_5) = fVar81;
    }
    if ((bVar32 & 2) != 0) {
      uVar6 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar54,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)param_5) = fVar76;
    }
    if ((bVar32 & 2) != 0) {
      uVar6 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar43) = uVar6;
    }
    return;
  }
  return;
}

// ApplyPBDPlanarConstraintsWithFriction_sse4 @ 14030f160

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,float param_8,uint param_9)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  float *pfVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  byte bVar27;
  int in_R11D;
  uint uVar28;
  bool bVar29;
  float fVar30;
  float fVar41;
  float fVar42;
  int iVar43;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar31;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar45;
  float fVar53;
  float fVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar56;
  float fVar70;
  float fVar72;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar74;
  undefined1 auVar59 [16];
  float fVar71;
  float fVar73;
  float fVar75;
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
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar79;
  undefined4 uVar80;
  float fVar86;
  float fVar87;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar98;
  float fVar99;
  undefined1 unaff_XMM7 [16];
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  float fVar107;
  float fVar108;
  undefined1 auVar102 [16];
  float fVar109;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar110;
  float fVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar129;
  float fVar130;
  undefined1 auVar124 [16];
  float fVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar142;
  undefined1 auVar141 [16];
  undefined1 auVar143 [16];
  
  uVar15 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar15 = param_9;
  }
  if ((int)(uVar15 & 0xfffffffc) < 1) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    lVar18 = 0;
    uVar28 = 0;
    do {
      piVar1 = (int *)(param_3 + (ulonglong)uVar28);
      iVar43 = piVar1[3] << 4;
      lVar19 = (longlong)(*piVar1 << 4);
      lVar21 = (longlong)(piVar1[1] * 0x10);
      lVar25 = (longlong)(piVar1[2] << 4);
      lVar17 = (longlong)iVar43;
      uVar6 = *(uint *)(param_1 + 0xc + lVar19);
      uVar7 = *(uint *)(param_1 + 0xc + lVar21);
      uVar8 = *(uint *)(param_1 + 0xc + lVar25);
      uVar9 = *(uint *)(param_1 + 0xc + lVar17);
      auVar57 = insertps(ZEXT416(uVar6),ZEXT416(uVar7),0x10);
      auVar57 = insertps(auVar57,ZEXT416(uVar8),0x20);
      auVar57 = insertps(auVar57,ZEXT416(uVar9),0x30);
      fVar30 = auVar57._0_4_;
      fVar41 = auVar57._4_4_;
      fVar42 = auVar57._8_4_;
      fVar44 = auVar57._12_4_;
      auVar57._4_4_ = -(uint)(fVar41 == 0.0);
      auVar57._0_4_ = -(uint)(fVar30 == 0.0);
      auVar57._8_4_ = -(uint)(fVar42 == 0.0);
      auVar57._12_4_ = -(uint)(fVar44 == 0.0);
      auVar90._4_4_ = -(uint)NAN(fVar41);
      auVar90._0_4_ = -(uint)NAN(fVar30);
      auVar90._8_4_ = -(uint)NAN(fVar42);
      auVar90._12_4_ = -(uint)NAN(fVar44);
      iVar43 = movmskps(iVar43,auVar90 | auVar57);
      if (iVar43 == 0) {
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar21),
                           0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + lVar25),0x20);
        auVar143 = insertps(auVar57,*(undefined4 *)(param_1 + lVar17),0x30);
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                           *(undefined4 *)(param_1 + 4 + lVar21),0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar25),0x20);
        auVar46 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar17),0x30);
        auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                           *(undefined4 *)(param_1 + 8 + lVar21),0x10);
        auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar25),0x20);
        auVar88 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar17),0x30);
        auVar57 = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar90 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18);
        pfVar3 = (float *)(param_4 + 0x20 + lVar18);
        auVar102 = insertps(auVar90,auVar57,0x8c);
        auVar115 = *(undefined1 (*) [16])(param_5 + lVar18);
        fVar71 = auVar115._12_4_;
        auVar47 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar18);
        fVar56 = auVar47._0_4_;
        fVar73 = auVar47._12_4_;
        auVar93 = *(undefined1 (*) [16])(param_5 + 0x20 + lVar18);
        fVar75 = auVar93._12_4_;
        fVar54 = auVar47._8_4_;
        fVar110 = auVar115._0_4_;
        fVar114 = auVar115._4_4_;
        fVar79 = auVar93._0_4_;
        fVar86 = auVar93._4_4_;
        fVar87 = auVar93._8_4_;
        auVar115 = insertps(auVar47,auVar115,0x8c);
        fVar45 = auVar115._0_4_;
        fVar53 = auVar115._4_4_;
        fVar101 = (auVar102._0_4_ - auVar88._0_4_) * fVar45 +
                  (auVar57._4_4_ - auVar46._0_4_) * fVar114 +
                  (auVar57._0_4_ - auVar143._0_4_) * fVar110;
        fVar107 = (auVar102._4_4_ - auVar88._4_4_) * fVar53 +
                  (auVar90._0_4_ - auVar46._4_4_) * fVar56 +
                  (auVar57._12_4_ - auVar143._4_4_) * fVar71;
        fVar108 = (*pfVar3 - auVar88._8_4_) * fVar79 +
                  (auVar90._12_4_ - auVar46._8_4_) * fVar73 +
                  (auVar90._8_4_ - auVar143._8_4_) * fVar54;
        fVar109 = (pfVar3[3] - auVar88._12_4_) * fVar75 +
                  (pfVar3[2] - auVar46._12_4_) * fVar87 + (pfVar3[1] - auVar143._12_4_) * fVar86;
        unaff_XMM7._0_4_ = -(uint)(0.0 < fVar101 && fVar30 != 0.0);
        unaff_XMM7._4_4_ = -(uint)(0.0 < fVar107 && fVar41 != 0.0);
        unaff_XMM7._8_4_ = -(uint)(0.0 < fVar108 && fVar42 != 0.0);
        unaff_XMM7._12_4_ = -(uint)(0.0 < fVar109 && fVar44 != 0.0);
        in_R11D = movmskps(in_R11D,unaff_XMM7);
        if (in_R11D != 0) {
          bVar27 = (char)((char)in_R11D << 4) >> 4;
          in_R11D = CONCAT31((int3)((uint)in_R11D >> 8),bVar27);
          auVar115._0_8_ =
               CONCAT44(fVar71 * fVar107 + auVar143._4_4_,fVar110 * fVar101 + auVar143._0_4_);
          auVar115._8_4_ = fVar54 * fVar108 + auVar143._8_4_;
          auVar115._12_4_ = fVar86 * fVar109 + auVar143._12_4_;
          bVar29 = (bVar27 & 1) != 0;
          auVar47 = auVar143;
          if (bVar29) {
            auVar47._8_4_ = auVar115._8_4_;
            auVar47._0_8_ = auVar115._0_8_;
            auVar47._12_4_ = auVar115._12_4_;
          }
          auVar93._0_8_ =
               CONCAT44(fVar56 * fVar107 + auVar46._4_4_,fVar114 * fVar101 + auVar46._0_4_);
          auVar93._8_4_ = fVar73 * fVar108 + auVar46._8_4_;
          auVar93._12_4_ = fVar87 * fVar109 + auVar46._12_4_;
          auVar102._0_8_ =
               CONCAT44(fVar53 * fVar107 + auVar88._4_4_,fVar45 * fVar101 + auVar88._0_4_);
          auVar102._8_4_ = fVar79 * fVar108 + auVar88._8_4_;
          auVar102._12_4_ = fVar75 * fVar109 + auVar88._12_4_;
          if (bVar29) {
            auVar137._8_4_ = auVar93._8_4_;
            auVar137._0_8_ = auVar93._0_8_;
            auVar137._12_4_ = auVar93._12_4_;
            auVar33._8_4_ = auVar102._8_4_;
            auVar33._0_8_ = auVar102._0_8_;
            auVar33._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar143,auVar47,1);
            if ((bVar27 & 2) != 0) goto LAB_14030f62d;
LAB_14030f46e:
            auVar47 = blendps(auVar46,auVar137,1);
            auVar88 = blendps(auVar88,auVar33,1);
            auVar57 = blendps(auVar57,auVar57,2);
            auVar90 = auVar88;
            auVar46 = auVar47;
            if ((bVar27 & 4) == 0) goto LAB_14030f4aa;
LAB_14030f674:
            auVar132._8_4_ = auVar115._8_4_;
            auVar132._0_8_ = auVar115._0_8_;
            auVar132._12_4_ = auVar115._12_4_;
            auVar47 = blendps(auVar47,auVar46,2);
            auVar124._8_4_ = auVar93._8_4_;
            auVar124._0_8_ = auVar93._0_8_;
            auVar124._12_4_ = auVar93._12_4_;
            auVar90 = blendps(auVar90,auVar88,2);
            auVar89._8_4_ = auVar102._8_4_;
            auVar89._0_8_ = auVar102._0_8_;
            auVar89._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar57,auVar132,4);
            if (-1 < (char)bVar27) goto LAB_14030f6af;
LAB_14030f4da:
            auVar47 = blendps(auVar47,auVar124,4);
            if ((char)bVar27 < '\0') goto LAB_14030f4e7;
LAB_14030f6c0:
            auVar90 = blendps(auVar90,auVar89,4);
            auVar93 = auVar47;
          }
          else {
            auVar57 = blendps(auVar143,auVar47,1);
            auVar33 = auVar88;
            auVar137 = auVar46;
            if ((bVar27 & 2) == 0) goto LAB_14030f46e;
LAB_14030f62d:
            auVar143._8_4_ = auVar115._8_4_;
            auVar143._0_8_ = auVar115._0_8_;
            auVar143._12_4_ = auVar115._12_4_;
            auVar47 = blendps(auVar46,auVar137,1);
            auVar46._8_4_ = auVar93._8_4_;
            auVar46._0_8_ = auVar93._0_8_;
            auVar46._12_4_ = auVar93._12_4_;
            auVar90 = blendps(auVar88,auVar33,1);
            auVar88._8_4_ = auVar102._8_4_;
            auVar88._0_8_ = auVar102._0_8_;
            auVar88._12_4_ = auVar102._12_4_;
            auVar57 = blendps(auVar57,auVar143,2);
            if ((bVar27 & 4) != 0) goto LAB_14030f674;
LAB_14030f4aa:
            auVar47 = blendps(auVar47,auVar46,2);
            auVar89 = blendps(auVar90,auVar88,2);
            auVar57 = blendps(auVar57,auVar57,4);
            auVar90 = auVar89;
            auVar124 = auVar47;
            if ((char)bVar27 < '\0') goto LAB_14030f4da;
LAB_14030f6af:
            auVar115 = auVar57;
            auVar47 = blendps(auVar47,auVar124,4);
            auVar57 = auVar115;
            if (-1 < (char)bVar27) goto LAB_14030f6c0;
LAB_14030f4e7:
            auVar90 = blendps(auVar90,auVar89,4);
          }
          if (-1 < (char)bVar27) {
            auVar102 = auVar90;
          }
          auVar115 = blendps(auVar57,auVar115,8);
          auVar57 = blendps(auVar47,auVar93,8);
          auVar90 = blendps(auVar90,auVar102,8);
          if ((~bVar27 & 0xf) == 0) {
            auVar47 = *(undefined1 (*) [16])(param_6 + lVar18);
            auVar93 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar18);
            puVar4 = (undefined4 *)(param_6 + 0x20 + lVar18);
            auVar76._0_4_ = auVar47._0_4_;
            auVar46 = insertps(auVar93,auVar47,0x8c);
            auVar76._4_4_ = auVar47._12_4_;
            auVar76._8_4_ = auVar93._8_4_;
            auVar76._12_4_ = puVar4[1];
            auVar81._4_4_ = auVar93._0_4_;
            auVar81._0_4_ = auVar47._4_4_;
            auVar81._8_4_ = auVar93._12_4_;
            auVar81._12_4_ = puVar4[2];
            auVar58._0_8_ = auVar46._0_8_;
            auVar58._8_4_ = *puVar4;
            auVar58._12_4_ = puVar4[3];
          }
          else {
            auVar32._0_4_ = unaff_XMM7._0_4_ & ___xmm_00000024000000180000000c00000000;
            auVar32._4_4_ = unaff_XMM7._4_4_ & _UNK_150b50da4;
            auVar32._8_4_ = unaff_XMM7._8_4_ & _UNK_150b50da8;
            auVar32._12_4_ = unaff_XMM7._12_4_ & _UNK_150b50dac;
            lVar22 = extractps(auVar32,1);
            lVar24 = extractps(auVar32,2);
            lVar26 = extractps(auVar32,3);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + param_6)),
                               *(undefined4 *)(lVar18 + lVar22 + param_6),0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)(lVar18 + lVar24 + param_6),0x20);
            auVar76 = insertps(auVar47,*(undefined4 *)(lVar18 + lVar26 + param_6),0x30);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + (ulonglong)
                                                          (unaff_XMM7._0_4_ &
                                                          ___xmm_000000280000001c0000001000000004) +
                                                          param_6)),
                               *(undefined4 *)
                                (lVar18 + (ulonglong)(unaff_XMM7._4_4_ & _UNK_150b50db4) + param_6),
                               0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._8_4_ & _UNK_150b50db8) +
                                                  param_6),0x20);
            auVar81 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._12_4_ & _UNK_150b50dbc) +
                                                  param_6),0x30);
            auVar47 = insertps(ZEXT416(*(uint *)(lVar18 + (ulonglong)
                                                          (unaff_XMM7._0_4_ &
                                                          ___xmm_0000002c000000200000001400000008) +
                                                          param_6)),
                               *(undefined4 *)
                                (lVar18 + (ulonglong)(unaff_XMM7._4_4_ & _UNK_150b50dc4) + param_6),
                               0x10);
            auVar47 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._8_4_ & _UNK_150b50dc8) +
                                                  param_6),0x20);
            auVar58 = insertps(auVar47,*(undefined4 *)
                                        (lVar18 + (ulonglong)(unaff_XMM7._12_4_ & _UNK_150b50dcc) +
                                                  param_6),0x30);
          }
          auVar34._4_4_ = piVar1[1] * 3;
          auVar34._0_4_ = *piVar1 * 3;
          auVar34._8_4_ = piVar1[2] * 3;
          auVar34._12_4_ = piVar1[3] * 3;
          auVar34 = auVar34 & unaff_XMM7;
          lVar22 = param_2 + (longlong)auVar34._0_4_ * 4;
          lVar24 = param_2 + (longlong)auVar34._4_4_ * 4;
          lVar26 = param_2 + (longlong)auVar34._8_4_ * 4;
          lVar5 = param_2 + (longlong)auVar34._12_4_ * 4;
          auVar47 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar34._0_4_ * 4)),
                             *(undefined4 *)(param_2 + (longlong)auVar34._4_4_ * 4),0x10);
          auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar34._8_4_ * 4),0x20);
          auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar34._12_4_ * 4),0x30);
          auVar93 = unaff_XMM7 & ___xmm_00000004000000040000000400000004;
          auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar93._0_4_ + lVar22)),
                             *(undefined4 *)((ulonglong)auVar93._4_4_ + lVar24),0x10);
          auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar93._8_4_ + lVar26),0x20);
          auVar93 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar93._12_4_ + lVar5),0x30);
          auVar46 = unaff_XMM7 & ___xmm_00000008000000080000000800000008;
          auVar88 = insertps(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar22)),
                             *(undefined4 *)((ulonglong)auVar46._4_4_ + lVar24),0x10);
          auVar88 = insertps(auVar88,*(undefined4 *)((ulonglong)auVar46._8_4_ + lVar26),0x20);
          auVar46 = insertps(auVar88,*(undefined4 *)((ulonglong)auVar46._12_4_ + lVar5),0x30);
          fVar123 = (auVar115._0_4_ - auVar47._0_4_) - auVar76._0_4_ * param_8;
          fVar129 = (auVar115._4_4_ - auVar47._4_4_) - auVar76._4_4_ * param_8;
          fVar130 = (auVar115._8_4_ - auVar47._8_4_) - auVar76._8_4_ * param_8;
          fVar131 = (auVar115._12_4_ - auVar47._12_4_) - auVar76._12_4_ * param_8;
          fVar96 = (auVar57._0_4_ - auVar93._0_4_) - auVar81._0_4_ * param_8;
          fVar98 = (auVar57._4_4_ - auVar93._4_4_) - auVar81._4_4_ * param_8;
          fVar99 = (auVar57._8_4_ - auVar93._8_4_) - auVar81._8_4_ * param_8;
          fVar100 = (auVar57._12_4_ - auVar93._12_4_) - auVar81._12_4_ * param_8;
          fVar30 = (auVar90._0_4_ - auVar46._0_4_) - auVar58._0_4_ * param_8;
          fVar41 = (auVar90._4_4_ - auVar46._4_4_) - auVar58._4_4_ * param_8;
          fVar42 = (auVar90._8_4_ - auVar46._8_4_) - auVar58._8_4_ * param_8;
          fVar44 = (auVar90._12_4_ - auVar46._12_4_) - auVar58._12_4_ * param_8;
          fVar55 = fVar45 * fVar30 + fVar114 * fVar96 + fVar110 * fVar123;
          fVar70 = fVar53 * fVar41 + fVar56 * fVar98 + fVar71 * fVar129;
          fVar72 = fVar79 * fVar42 + fVar73 * fVar99 + fVar54 * fVar130;
          fVar74 = fVar75 * fVar44 + fVar87 * fVar100 + fVar86 * fVar131;
          fVar123 = fVar123 - fVar110 * fVar55;
          fVar129 = fVar129 - fVar71 * fVar70;
          fVar130 = fVar130 - fVar54 * fVar72;
          fVar131 = fVar131 - fVar86 * fVar74;
          fVar96 = fVar96 - fVar114 * fVar55;
          fVar98 = fVar98 - fVar56 * fVar70;
          fVar99 = fVar99 - fVar73 * fVar72;
          fVar100 = fVar100 - fVar87 * fVar74;
          fVar30 = fVar30 - fVar55 * fVar45;
          fVar41 = fVar41 - fVar70 * fVar53;
          fVar42 = fVar42 - fVar72 * fVar79;
          fVar44 = fVar44 - fVar74 * fVar75;
          auVar59._0_4_ = fVar30 * fVar30 + fVar96 * fVar96 + fVar123 * fVar123;
          auVar59._4_4_ = fVar41 * fVar41 + fVar98 * fVar98 + fVar129 * fVar129;
          auVar59._8_4_ = fVar42 * fVar42 + fVar99 * fVar99 + fVar130 * fVar130;
          auVar59._12_4_ = fVar44 * fVar44 + fVar100 * fVar100 + fVar131 * fVar131;
          auVar47 = sqrtps(auVar59,auVar59);
          auVar103._0_4_ = fVar101 * param_7;
          auVar103._4_4_ = fVar107 * param_7;
          auVar103._8_4_ = fVar108 * param_7;
          auVar103._12_4_ = fVar109 * param_7;
          auVar93 = minps(auVar103,auVar47);
          auVar93 = divps(auVar93,auVar47);
          fVar56 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar47._0_4_) &
                          auVar93._0_4_);
          fVar71 = (float)(-(uint)(_UNK_1506895d4 <= auVar47._4_4_) & auVar93._4_4_);
          fVar73 = (float)(-(uint)(_UNK_1506895d8 <= auVar47._8_4_) & auVar93._8_4_);
          fVar75 = (float)(-(uint)(_UNK_1506895dc <= auVar47._12_4_) & auVar93._12_4_);
          auVar94._0_8_ =
               CONCAT44(auVar115._4_4_ - fVar129 * fVar71,auVar115._0_4_ - fVar123 * fVar56);
          auVar94._8_4_ = auVar115._8_4_ - fVar130 * fVar73;
          auVar94._12_4_ = auVar115._12_4_ - fVar131 * fVar75;
          bVar29 = (bVar27 & 1) != 0;
          auVar111 = auVar115;
          if (bVar29) {
            auVar111._8_4_ = auVar94._8_4_;
            auVar111._0_8_ = auVar94._0_8_;
            auVar111._12_4_ = auVar94._12_4_;
          }
          auVar60._0_8_ = CONCAT44(auVar57._4_4_ - fVar98 * fVar71,auVar57._0_4_ - fVar96 * fVar56);
          auVar60._8_4_ = auVar57._8_4_ - fVar99 * fVar73;
          auVar60._12_4_ = auVar57._12_4_ - fVar100 * fVar75;
          auVar77._0_8_ = CONCAT44(auVar90._4_4_ - fVar41 * fVar71,auVar90._0_4_ - fVar30 * fVar56);
          auVar77._8_4_ = auVar90._8_4_ - fVar42 * fVar73;
          auVar77._12_4_ = auVar90._12_4_ - fVar44 * fVar75;
          if (bVar29) {
            auVar82._8_4_ = auVar60._8_4_;
            auVar82._0_8_ = auVar60._0_8_;
            auVar82._12_4_ = auVar60._12_4_;
            auVar35._8_4_ = auVar77._8_4_;
            auVar35._0_8_ = auVar77._0_8_;
            auVar35._12_4_ = auVar77._12_4_;
            auVar115 = blendps(auVar115,auVar111,1);
            auVar119 = auVar115;
            if ((bVar27 & 2) != 0) goto LAB_14030fa2d;
LAB_14030f910:
            auVar47 = blendps(auVar57,auVar82,1);
            uVar80 = auVar82._0_4_;
            auVar90 = blendps(auVar90,auVar35,1);
            uVar31 = auVar35._0_4_;
            auVar57 = blendps(auVar119,auVar119,2);
            unaff_XMM7 = auVar90;
            auVar116 = auVar47;
            if ((bVar27 & 4) == 0) goto LAB_14030f944;
LAB_14030fa6c:
            auVar133._8_4_ = auVar94._8_4_;
            auVar133._0_8_ = auVar94._0_8_;
            auVar133._12_4_ = auVar94._12_4_;
            auVar115 = blendps(auVar47,auVar116,2);
            auVar125._8_4_ = auVar60._8_4_;
            auVar125._0_8_ = auVar60._0_8_;
            auVar125._12_4_ = auVar60._12_4_;
            auVar90 = blendps(auVar90,unaff_XMM7,2);
            auVar104._8_4_ = auVar77._8_4_;
            auVar104._0_8_ = auVar77._0_8_;
            auVar104._12_4_ = auVar77._12_4_;
          }
          else {
            auVar115 = blendps(auVar115,auVar111,1);
            auVar35 = auVar90;
            auVar82 = auVar57;
            auVar119 = auVar115;
            if ((bVar27 & 2) == 0) goto LAB_14030f910;
LAB_14030fa2d:
            auVar119._8_4_ = auVar94._8_4_;
            auVar119._0_8_ = auVar94._0_8_;
            auVar119._12_4_ = auVar94._12_4_;
            auVar47 = blendps(auVar57,auVar82,1);
            uVar80 = auVar82._0_4_;
            auVar116._8_4_ = auVar60._8_4_;
            auVar116._0_8_ = auVar60._0_8_;
            auVar116._12_4_ = auVar60._12_4_;
            auVar90 = blendps(auVar90,auVar35,1);
            uVar31 = auVar35._0_4_;
            unaff_XMM7._8_4_ = (uint)auVar77._8_4_;
            unaff_XMM7._0_8_ = auVar77._0_8_;
            unaff_XMM7._12_4_ = (uint)auVar77._12_4_;
            auVar57 = blendps(auVar115,auVar119,2);
            if ((bVar27 & 4) != 0) goto LAB_14030fa6c;
LAB_14030f944:
            auVar115 = blendps(auVar47,auVar116,2);
            auVar90 = blendps(auVar90,unaff_XMM7,2);
            auVar104 = auVar90;
            auVar125 = auVar115;
            auVar133 = auVar57;
          }
          if ((char)bVar27 < '\0') {
            auVar115 = auVar60;
            auVar90 = auVar77;
            auVar57 = auVar94;
          }
          if ((bVar27 & 1) != 0) {
            *(int *)(param_1 + lVar19) = auVar111._0_4_;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(auVar119,1);
            *(undefined8 *)(param_1 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar133,2);
            *(undefined8 *)(param_1 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar57,3);
            *(undefined8 *)(param_1 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(undefined4 *)(param_1 + 4 + lVar19) = uVar80;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(auVar116,1);
            *(undefined8 *)(param_1 + 4 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar125,2);
            *(undefined8 *)(param_1 + 4 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar115,3);
            *(undefined8 *)(param_1 + 4 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(undefined4 *)(param_1 + 8 + lVar19) = uVar31;
          }
          if ((bVar27 & 2) != 0) {
            uVar10 = extractps(unaff_XMM7,1);
            *(undefined8 *)(param_1 + 8 + lVar21) = uVar10;
          }
          if ((bVar27 & 4) != 0) {
            uVar10 = extractps(auVar104,2);
            *(undefined8 *)(param_1 + 8 + lVar25) = uVar10;
          }
          if ((char)bVar27 < '\0') {
            uVar10 = extractps(auVar90,3);
            *(undefined8 *)(param_1 + 8 + lVar17) = uVar10;
          }
          if ((bVar27 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar19) = uVar6;
          }
          if ((bVar27 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar21) = uVar7;
          }
          if ((bVar27 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar25) = uVar8;
          }
          if ((char)bVar27 < '\0') {
            *(uint *)(param_1 + 0xc + lVar17) = uVar9;
          }
        }
      }
      uVar28 = uVar28 + 0x10;
      lVar18 = lVar18 + 0x30;
      uVar20 = uVar20 + 4;
    } while ((int)uVar20 < (int)(uVar15 & 0xfffffffc));
  }
  if ((int)param_9 <= (int)uVar20) {
    return;
  }
  bVar29 = (int)(uVar20 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9;
  auVar48._0_4_ = -(uint)bVar29;
  bVar11 = (int)(uVar20 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9;
  auVar48._4_4_ = -(uint)bVar11;
  bVar12 = (int)(uVar20 | _UNK_150631e08) < (int)param_9;
  auVar48._8_4_ = -(uint)bVar12;
  bVar13 = (int)(uVar20 | _UNK_150631e0c) < (int)param_9;
  auVar48._12_4_ = -(uint)bVar13;
  uVar15 = movmskps(param_9,auVar48);
  bVar27 = (char)((byte)uVar15 << 4) >> 4;
  if ((~(byte)uVar15 & 9) == 0) {
    unaff_XMM7 = *(undefined1 (*) [16])(param_3 + (int)(uVar20 << 2));
  }
  else {
    puVar23 = (uint *)(param_3 + (int)(uVar20 << 2));
    if ((uVar15 & 1) != 0) {
      unaff_XMM7 = ZEXT416(*puVar23);
    }
    if ((uVar15 & 2) != 0) {
      unaff_XMM7._0_8_ = unaff_XMM7._0_8_ & 0xffffffff | (ulonglong)puVar23[1] << 0x20;
    }
    if ((uVar15 & 4) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM7._8_8_ & 0xffffffff00000000 | (ulonglong)puVar23[2];
    }
    if ((uVar15 & 8) != 0) {
      unaff_XMM7._8_8_ = unaff_XMM7._8_8_ & 0xffffffff | (ulonglong)puVar23[3] << 0x20;
    }
  }
  auVar91._0_4_ = unaff_XMM7._0_4_ << 4;
  auVar91._4_4_ = unaff_XMM7._4_4_ << 4;
  auVar91._8_4_ = unaff_XMM7._8_4_ << 4;
  auVar91._12_4_ = unaff_XMM7._12_4_ << 4;
  auVar90 = auVar48 & auVar91;
  lVar18 = param_1 + auVar90._0_4_;
  lVar17 = param_1 + auVar90._4_4_;
  lVar19 = param_1 + auVar90._8_4_;
  lVar21 = param_1 + auVar90._12_4_;
  auVar47 = ___xmm_00000004000000040000000400000004 & auVar48;
  auVar115 = ___xmm_00000008000000080000000800000008 & auVar48;
  auVar57 = ZEXT416(*(uint *)(param_1 + auVar90._0_4_));
  if ((bVar27 & 2) == 0) {
    auVar93 = ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18));
    auVar46 = ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar18));
  }
  else {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._4_4_),0x10);
    auVar93 = insertps(ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar47._4_4_ + lVar17),0x10);
    auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar115._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar115._4_4_ + lVar17),0x10);
  }
  uVar10 = ZEXT48((uint)__xmm_0000000c0000000c0000000c0000000c & auVar48._0_4_);
  if ((bVar27 & 4) == 0) {
    auVar88 = insertps(ZEXT416(*(uint *)(uVar10 + lVar18)),
                       *(undefined4 *)
                        ((ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar48._4_4_) +
                        lVar17),0x10);
  }
  else {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._8_4_),0x20);
    auVar93 = insertps(auVar93,*(undefined4 *)((ulonglong)auVar47._8_4_ + lVar19),0x20);
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar115._8_4_ + lVar19),0x20);
    auVar88 = insertps(ZEXT416(*(uint *)(uVar10 + lVar18)),
                       *(undefined4 *)
                        ((ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar48._4_4_) +
                        lVar17),0x10);
  }
  uVar14 = ZEXT48(__xmm_0000000c0000000c0000000c0000000c._8_4_ & auVar48._8_4_);
  uVar10 = ZEXT48(__xmm_0000000c0000000c0000000c0000000c._12_4_ & auVar48._12_4_);
  if ((char)bVar27 < '\0') {
    auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + auVar90._12_4_),0x30);
    auVar90 = insertps(auVar88,*(undefined4 *)(uVar14 + lVar19),0x20);
  }
  else {
    auVar90 = insertps(auVar88,*(undefined4 *)(uVar14 + lVar19),0x20);
  }
  if ((char)bVar27 < '\0') {
    auVar93 = insertps(auVar93,*(undefined4 *)((ulonglong)auVar47._12_4_ + lVar21),0x30);
    auVar90 = insertps(auVar90,*(undefined4 *)(uVar10 + lVar21),0x30);
  }
  else {
    auVar90 = insertps(auVar90,*(undefined4 *)(uVar10 + lVar21),0x30);
  }
  if ((char)bVar27 < '\0') {
    auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar115._12_4_ + lVar21),0x30);
  }
  fVar30 = auVar90._0_4_;
  auVar61._0_4_ = -(uint)(fVar30 == 0.0 && bVar29);
  auVar61._4_4_ = -(uint)(auVar90._4_4_ == 0.0 && bVar11);
  auVar61._8_4_ = -(uint)(auVar90._8_4_ == 0.0 && bVar12);
  auVar61._12_4_ = -(uint)(auVar90._12_4_ == 0.0 && bVar13);
  iVar43 = movmskps((int)lVar21,auVar61);
  if (iVar43 != 0) {
    return;
  }
  uVar16 = (ulonglong)(uVar20 | (uint)__xmm_00000003000000020000000100000000);
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar16 * 0xc);
  if ((~bVar27 & 0xf) == 0) {
    auVar115 = *pauVar2;
    auVar47 = pauVar2[1];
    auVar120._0_4_ = auVar115._0_4_;
    auVar88 = insertps(auVar47,auVar115,0x8c);
    auVar120._4_4_ = auVar115._12_4_;
    auVar120._8_4_ = auVar47._8_4_;
    auVar120._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar126._4_4_ = auVar47._0_4_;
    auVar126._0_4_ = auVar115._4_4_;
    auVar126._8_4_ = auVar47._12_4_;
    auVar126._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar39._0_8_ = auVar88._0_8_;
    auVar39._8_4_ = *(undefined4 *)pauVar2[2];
    auVar39._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    auVar115 = *(undefined1 (*) [16])(param_5 + uVar16 * 0xc);
    auVar47 = *(undefined1 (*) [16])(param_5 + 0x10 + uVar16 * 0xc);
    puVar4 = (undefined4 *)(param_5 + 0x20 + uVar16 * 0xc);
    auVar105._0_4_ = auVar115._0_4_;
    auVar88 = insertps(auVar47,auVar115,0x8c);
    auVar105._4_4_ = auVar115._12_4_;
    auVar105._8_4_ = auVar47._8_4_;
    auVar105._12_4_ = puVar4[1];
    auVar112._4_4_ = auVar47._0_4_;
    auVar112._0_4_ = auVar115._4_4_;
    auVar112._8_4_ = auVar47._12_4_;
    auVar112._12_4_ = puVar4[2];
    auVar117._0_8_ = auVar88._0_8_;
    auVar117._8_4_ = *puVar4;
    auVar117._12_4_ = puVar4[3];
  }
  else {
    auVar36._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar48._0_4_;
    auVar36._4_4_ = _UNK_150b50da4 & auVar48._4_4_;
    auVar36._8_4_ = _UNK_150b50da8 & auVar48._8_4_;
    auVar36._12_4_ = _UNK_150b50dac & auVar48._12_4_;
    lVar19 = extractps(auVar36,1);
    lVar17 = extractps(auVar36,2);
    lVar21 = extractps(auVar36,3);
    auVar115 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar19),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar120 = insertps(auVar115,*(undefined4 *)(*pauVar2 + lVar21),0x30);
    auVar37._4_4_ = _UNK_150b50db4;
    auVar37._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar37._8_4_ = _UNK_150b50db8;
    auVar37._12_4_ = _UNK_150b50dbc;
    auVar37 = auVar37 & auVar48;
    auVar115 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar37._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar37._4_4_),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar37._8_4_),0x20);
    auVar126 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar37._12_4_),0x30);
    auVar38._4_4_ = _UNK_150b50dc4;
    auVar38._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar38._8_4_ = _UNK_150b50dc8;
    auVar38._12_4_ = _UNK_150b50dcc;
    auVar38 = auVar38 & auVar48;
    auVar115 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar38._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar38._4_4_),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar38._8_4_),0x20);
    auVar39 = insertps(auVar115,*(undefined4 *)(*pauVar2 + auVar38._12_4_),0x30);
    lVar18 = param_5 + uVar16 * 0xc;
    auVar115 = insertps(ZEXT416(*(uint *)(param_5 + uVar16 * 0xc)),*(undefined4 *)(lVar19 + lVar18),
                        0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar105 = insertps(auVar115,*(undefined4 *)(lVar21 + lVar18),0x30);
    auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar18)),
                        *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar18),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar18),0x20);
    auVar112 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar18),0x30);
    auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)auVar38._0_4_ + lVar18)),
                        *(undefined4 *)((ulonglong)auVar38._4_4_ + lVar18),0x10);
    auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar38._8_4_ + lVar18),0x20);
    auVar117 = insertps(auVar115,*(undefined4 *)((ulonglong)auVar38._12_4_ + lVar18),0x30);
  }
  fVar71 = auVar105._0_4_;
  fVar73 = auVar105._4_4_;
  fVar75 = auVar105._8_4_;
  fVar79 = auVar105._12_4_;
  fVar86 = auVar112._0_4_;
  fVar87 = auVar112._4_4_;
  fVar101 = auVar112._8_4_;
  fVar107 = auVar112._12_4_;
  fVar108 = auVar117._0_4_;
  fVar109 = auVar117._4_4_;
  fVar110 = auVar117._8_4_;
  fVar114 = auVar117._12_4_;
  fVar41 = (auVar39._0_4_ - auVar46._0_4_) * fVar108 +
           (auVar126._0_4_ - auVar93._0_4_) * fVar86 + (auVar120._0_4_ - auVar57._0_4_) * fVar71;
  fVar42 = (auVar39._4_4_ - auVar46._4_4_) * fVar109 +
           (auVar126._4_4_ - auVar93._4_4_) * fVar87 + (auVar120._4_4_ - auVar57._4_4_) * fVar73;
  fVar44 = (auVar39._8_4_ - auVar46._8_4_) * fVar110 +
           (auVar126._8_4_ - auVar93._8_4_) * fVar101 + (auVar120._8_4_ - auVar57._8_4_) * fVar75;
  fVar56 = (auVar39._12_4_ - auVar46._12_4_) * fVar114 +
           (auVar126._12_4_ - auVar93._12_4_) * fVar107 +
           (auVar120._12_4_ - auVar57._12_4_) * fVar79;
  auVar121._0_4_ = -(uint)(0.0 < fVar41 && (fVar30 != 0.0 && bVar29));
  auVar121._4_4_ = -(uint)(0.0 < fVar42 && (auVar90._4_4_ != 0.0 && bVar11));
  auVar121._8_4_ = -(uint)(0.0 < fVar44 && (auVar90._8_4_ != 0.0 && bVar12));
  auVar121._12_4_ = -(uint)(0.0 < fVar56 && (auVar90._12_4_ != 0.0 && bVar13));
  iVar43 = movmskps((int)lVar19,auVar121);
  if (iVar43 == 0) {
    return;
  }
  bVar27 = (char)((char)iVar43 << 4) >> 4;
  auVar134._0_8_ = CONCAT44(fVar73 * fVar42 + auVar57._4_4_,fVar71 * fVar41 + auVar57._0_4_);
  auVar134._8_4_ = fVar75 * fVar44 + auVar57._8_4_;
  auVar134._12_4_ = fVar79 * fVar56 + auVar57._12_4_;
  bVar29 = (bVar27 & 1) != 0;
  auVar62 = auVar57;
  if (bVar29) {
    auVar62._8_4_ = auVar134._8_4_;
    auVar62._0_8_ = auVar134._0_8_;
    auVar62._12_4_ = auVar134._12_4_;
  }
  auVar78._0_8_ = CONCAT44(fVar87 * fVar42 + auVar93._4_4_,fVar86 * fVar41 + auVar93._0_4_);
  auVar78._8_4_ = fVar101 * fVar44 + auVar93._8_4_;
  auVar78._12_4_ = fVar107 * fVar56 + auVar93._12_4_;
  auVar95._0_8_ = CONCAT44(fVar109 * fVar42 + auVar46._4_4_,fVar108 * fVar41 + auVar46._0_4_);
  auVar95._8_4_ = fVar110 * fVar44 + auVar46._8_4_;
  auVar95._12_4_ = fVar114 * fVar56 + auVar46._12_4_;
  if (bVar29) {
    auVar92._8_4_ = auVar78._8_4_;
    auVar92._0_8_ = auVar78._0_8_;
    auVar92._12_4_ = auVar78._12_4_;
    auVar138._8_4_ = auVar95._8_4_;
    auVar138._0_8_ = auVar95._0_8_;
    auVar138._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar62,1);
  }
  else {
    auVar57 = blendps(auVar57,auVar62,1);
    auVar92 = auVar93;
    auVar138 = auVar46;
  }
  if ((bVar27 & 2) == 0) {
    auVar115 = blendps(auVar93,auVar92,1);
    auVar47 = blendps(auVar46,auVar138,1);
    auVar57 = blendps(auVar57,auVar57,2);
    auVar65 = auVar115;
    auVar139 = auVar47;
  }
  else {
    auVar83._8_4_ = auVar134._8_4_;
    auVar83._0_8_ = auVar134._0_8_;
    auVar83._12_4_ = auVar134._12_4_;
    auVar115 = blendps(auVar93,auVar92,1);
    auVar65._8_4_ = auVar78._8_4_;
    auVar65._0_8_ = auVar78._0_8_;
    auVar65._12_4_ = auVar78._12_4_;
    auVar47 = blendps(auVar46,auVar138,1);
    auVar139._8_4_ = auVar95._8_4_;
    auVar139._0_8_ = auVar95._0_8_;
    auVar139._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar83,2);
  }
  if ((bVar27 & 4) == 0) {
    auVar93 = blendps(auVar115,auVar65,2);
    auVar115 = blendps(auVar47,auVar139,2);
    auVar57 = blendps(auVar57,auVar57,4);
    auVar66 = auVar93;
    auVar140 = auVar115;
  }
  else {
    auVar84._8_4_ = auVar134._8_4_;
    auVar84._0_8_ = auVar134._0_8_;
    auVar84._12_4_ = auVar134._12_4_;
    auVar93 = blendps(auVar115,auVar65,2);
    auVar66._8_4_ = auVar78._8_4_;
    auVar66._0_8_ = auVar78._0_8_;
    auVar66._12_4_ = auVar78._12_4_;
    auVar115 = blendps(auVar47,auVar139,2);
    auVar140._8_4_ = auVar95._8_4_;
    auVar140._0_8_ = auVar95._0_8_;
    auVar140._12_4_ = auVar95._12_4_;
    auVar57 = blendps(auVar57,auVar84,4);
  }
  if ((char)bVar27 < '\0') {
    auVar47 = blendps(auVar93,auVar66,4);
    auVar115 = blendps(auVar115,auVar140,4);
  }
  else {
    auVar78 = blendps(auVar93,auVar66,4);
    auVar95 = blendps(auVar115,auVar140,4);
    auVar115 = auVar95;
    auVar134 = auVar57;
    auVar47 = auVar78;
  }
  auVar93 = blendps(auVar57,auVar134,8);
  auVar57 = blendps(auVar47,auVar78,8);
  auVar115 = blendps(auVar115,auVar95,8);
  pauVar2 = (undefined1 (*) [16])(param_6 + uVar16 * 0xc);
  if ((~bVar27 & 0xf) == 0) {
    auVar47 = *pauVar2;
    auVar46 = pauVar2[1];
    auVar50._0_4_ = auVar47._0_4_;
    auVar88 = insertps(auVar46,auVar47,0x8c);
    auVar50._4_4_ = auVar47._12_4_;
    auVar50._8_4_ = auVar46._8_4_;
    auVar50._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar127._4_4_ = auVar46._0_4_;
    auVar127._0_4_ = auVar47._4_4_;
    auVar127._8_4_ = auVar46._12_4_;
    auVar127._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar135._0_8_ = auVar88._0_8_;
    auVar135._8_4_ = *(undefined4 *)pauVar2[2];
    auVar135._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar49._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar121._0_4_;
    auVar49._4_4_ = _UNK_150b50da4 & auVar121._4_4_;
    auVar49._8_4_ = _UNK_150b50da8 & auVar121._8_4_;
    auVar49._12_4_ = _UNK_150b50dac & auVar121._12_4_;
    lVar18 = extractps(auVar49,1);
    lVar17 = extractps(auVar49,2);
    lVar19 = extractps(auVar49,3);
    auVar47 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar50 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
    auVar63._0_4_ = ___xmm_000000280000001c0000001000000004 & auVar121._0_4_;
    auVar63._4_4_ = _UNK_150b50db4 & auVar121._4_4_;
    auVar63._8_4_ = _UNK_150b50db8 & auVar121._8_4_;
    auVar63._12_4_ = _UNK_150b50dbc & auVar121._12_4_;
    lVar18 = extractps(auVar63,1);
    lVar17 = extractps(auVar63,2);
    lVar19 = extractps(auVar63,3);
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar63._0_4_)),
                       *(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar127 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
    auVar64._0_4_ = ___xmm_0000002c000000200000001400000008 & auVar121._0_4_;
    auVar64._4_4_ = _UNK_150b50dc4 & auVar121._4_4_;
    auVar64._8_4_ = _UNK_150b50dc8 & auVar121._8_4_;
    auVar64._12_4_ = _UNK_150b50dcc & auVar121._12_4_;
    lVar18 = extractps(auVar64,1);
    lVar17 = extractps(auVar64,2);
    lVar19 = extractps(auVar64,3);
    auVar47 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar64._0_4_)),
                       *(undefined4 *)(*pauVar2 + lVar18),0x10);
    auVar47 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar17),0x20);
    auVar135 = insertps(auVar47,*(undefined4 *)(*pauVar2 + lVar19),0x30);
  }
  auVar67._4_4_ = unaff_XMM7._4_4_ * 3;
  auVar67._0_4_ = unaff_XMM7._0_4_ * 3;
  auVar67._8_4_ = unaff_XMM7._8_4_ * 3;
  auVar67._12_4_ = unaff_XMM7._12_4_ * 3;
  auVar67 = auVar67 & auVar121;
  lVar18 = param_2 + (longlong)auVar67._0_4_ * 4;
  lVar17 = param_2 + (longlong)auVar67._4_4_ * 4;
  lVar19 = param_2 + (longlong)auVar67._8_4_ * 4;
  lVar21 = param_2 + (longlong)auVar67._12_4_ * 4;
  auVar47 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar67._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar67._4_4_ * 4),0x10);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar67._8_4_ * 4),0x20);
  auVar88 = insertps(auVar47,*(undefined4 *)(param_2 + (longlong)auVar67._12_4_ * 4),0x30);
  auVar47 = ___xmm_00000004000000040000000400000004 & auVar121;
  auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar47._0_4_ + lVar18)),
                     *(undefined4 *)((ulonglong)auVar47._4_4_ + lVar17),0x10);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar47._8_4_ + lVar19),0x20);
  auVar47 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar47._12_4_ + lVar21),0x30);
  auVar121 = auVar121 & ___xmm_00000008000000080000000800000008;
  auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar121._0_4_ + lVar18)),
                     *(undefined4 *)((ulonglong)auVar121._4_4_ + lVar17),0x10);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar121._8_4_ + lVar19),0x20);
  auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar121._12_4_ + lVar21),0x30);
  fVar70 = (auVar93._0_4_ - auVar88._0_4_) - auVar50._0_4_ * param_8;
  fVar72 = (auVar93._4_4_ - auVar88._4_4_) - auVar50._4_4_ * param_8;
  fVar74 = (auVar93._8_4_ - auVar88._8_4_) - auVar50._8_4_ * param_8;
  fVar96 = (auVar93._12_4_ - auVar88._12_4_) - auVar50._12_4_ * param_8;
  fVar98 = (auVar57._0_4_ - auVar47._0_4_) - auVar127._0_4_ * param_8;
  fVar99 = (auVar57._4_4_ - auVar47._4_4_) - auVar127._4_4_ * param_8;
  fVar100 = (auVar57._8_4_ - auVar47._8_4_) - auVar127._8_4_ * param_8;
  fVar123 = (auVar57._12_4_ - auVar47._12_4_) - auVar127._12_4_ * param_8;
  fVar129 = (auVar115._0_4_ - auVar46._0_4_) - param_8 * auVar135._0_4_;
  fVar130 = (auVar115._4_4_ - auVar46._4_4_) - param_8 * auVar135._4_4_;
  fVar131 = (auVar115._8_4_ - auVar46._8_4_) - param_8 * auVar135._8_4_;
  fVar142 = (auVar115._12_4_ - auVar46._12_4_) - param_8 * auVar135._12_4_;
  fVar45 = fVar108 * fVar129 + fVar86 * fVar98 + fVar71 * fVar70;
  fVar53 = fVar109 * fVar130 + fVar87 * fVar99 + fVar73 * fVar72;
  fVar54 = fVar110 * fVar131 + fVar101 * fVar100 + fVar75 * fVar74;
  fVar55 = fVar114 * fVar142 + fVar107 * fVar123 + fVar79 * fVar96;
  fVar70 = fVar70 - fVar71 * fVar45;
  fVar72 = fVar72 - fVar73 * fVar53;
  fVar74 = fVar74 - fVar75 * fVar54;
  fVar96 = fVar96 - fVar79 * fVar55;
  fVar98 = fVar98 - fVar86 * fVar45;
  fVar99 = fVar99 - fVar87 * fVar53;
  fVar100 = fVar100 - fVar101 * fVar54;
  fVar123 = fVar123 - fVar107 * fVar55;
  fVar129 = fVar129 - fVar45 * fVar108;
  fVar130 = fVar130 - fVar53 * fVar109;
  fVar131 = fVar131 - fVar54 * fVar110;
  fVar142 = fVar142 - fVar55 * fVar114;
  auVar51._0_4_ = fVar129 * fVar129 + fVar98 * fVar98 + fVar70 * fVar70;
  auVar51._4_4_ = fVar130 * fVar130 + fVar99 * fVar99 + fVar72 * fVar72;
  auVar51._8_4_ = fVar131 * fVar131 + fVar100 * fVar100 + fVar74 * fVar74;
  auVar51._12_4_ = fVar142 * fVar142 + fVar123 * fVar123 + fVar96 * fVar96;
  auVar47 = sqrtps(auVar51,auVar51);
  auVar68._0_4_ = param_7 * fVar41;
  auVar68._4_4_ = param_7 * fVar42;
  auVar68._8_4_ = param_7 * fVar44;
  auVar68._12_4_ = param_7 * fVar56;
  auVar46 = minps(auVar68,auVar47);
  auVar46 = divps(auVar46,auVar47);
  fVar41 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar47._0_4_) & auVar46._0_4_
                  );
  fVar42 = (float)(-(uint)(_UNK_1506895d4 <= auVar47._4_4_) & auVar46._4_4_);
  fVar44 = (float)(-(uint)(_UNK_1506895d8 <= auVar47._8_4_) & auVar46._8_4_);
  fVar56 = (float)(-(uint)(_UNK_1506895dc <= auVar47._12_4_) & auVar46._12_4_);
  auVar113._0_8_ = CONCAT44(auVar93._4_4_ - fVar42 * fVar72,auVar93._0_4_ - fVar41 * fVar70);
  auVar113._8_4_ = auVar93._8_4_ - fVar44 * fVar74;
  auVar113._12_4_ = auVar93._12_4_ - fVar56 * fVar96;
  bVar29 = (bVar27 & 1) != 0;
  auVar136 = auVar93;
  if (bVar29) {
    auVar136._8_4_ = auVar113._8_4_;
    auVar136._0_8_ = auVar113._0_8_;
    auVar136._12_4_ = auVar113._12_4_;
  }
  auVar97._0_8_ = CONCAT44(auVar57._4_4_ - fVar99 * fVar42,auVar57._0_4_ - fVar98 * fVar41);
  auVar97._8_4_ = auVar57._8_4_ - fVar100 * fVar44;
  auVar97._12_4_ = auVar57._12_4_ - fVar123 * fVar56;
  auVar40._0_8_ = CONCAT44(auVar115._4_4_ - fVar130 * fVar42,auVar115._0_4_ - fVar129 * fVar41);
  auVar40._8_4_ = auVar115._8_4_ - fVar131 * fVar44;
  auVar40._12_4_ = auVar115._12_4_ - fVar142 * fVar56;
  if (bVar29) {
    auVar118._8_4_ = auVar97._8_4_;
    auVar118._0_8_ = auVar97._0_8_;
    auVar118._12_4_ = auVar97._12_4_;
    auVar52._8_4_ = auVar40._8_4_;
    auVar52._0_8_ = auVar40._0_8_;
    auVar52._12_4_ = auVar40._12_4_;
    auVar47 = blendps(auVar93,auVar136,1);
  }
  else {
    auVar47 = blendps(auVar93,auVar136,1);
    auVar52 = auVar115;
    auVar118 = auVar57;
  }
  if ((bVar27 & 2) == 0) {
    auVar93 = blendps(auVar57,auVar118,1);
    auVar115 = blendps(auVar115,auVar52,1);
    auVar57 = blendps(auVar47,auVar47,2);
    auVar128 = auVar93;
    auVar106 = auVar115;
    auVar85 = auVar47;
  }
  else {
    auVar85._8_4_ = auVar113._8_4_;
    auVar85._0_8_ = auVar113._0_8_;
    auVar85._12_4_ = auVar113._12_4_;
    auVar93 = blendps(auVar57,auVar118,1);
    auVar128._8_4_ = auVar97._8_4_;
    auVar128._0_8_ = auVar97._0_8_;
    auVar128._12_4_ = auVar97._12_4_;
    auVar115 = blendps(auVar115,auVar52,1);
    auVar106._8_4_ = auVar40._8_4_;
    auVar106._0_8_ = auVar40._0_8_;
    auVar106._12_4_ = auVar40._12_4_;
    auVar57 = blendps(auVar47,auVar85,2);
  }
  if ((bVar27 & 4) == 0) {
    auVar47 = blendps(auVar93,auVar128,2);
    auVar115 = blendps(auVar115,auVar106,2);
    auVar69 = auVar115;
    auVar122 = auVar57;
    auVar141 = auVar47;
  }
  else {
    auVar122._8_4_ = auVar113._8_4_;
    auVar122._0_8_ = auVar113._0_8_;
    auVar122._12_4_ = auVar113._12_4_;
    auVar47 = blendps(auVar93,auVar128,2);
    auVar141._8_4_ = auVar97._8_4_;
    auVar141._0_8_ = auVar97._0_8_;
    auVar141._12_4_ = auVar97._12_4_;
    auVar115 = blendps(auVar115,auVar106,2);
    auVar69._8_4_ = auVar40._8_4_;
    auVar69._0_8_ = auVar40._0_8_;
    auVar69._12_4_ = auVar40._12_4_;
  }
  if ((char)bVar27 < '\0') {
    auVar47 = auVar97;
    auVar115 = auVar40;
    auVar57 = auVar113;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + auVar91._0_4_) = auVar136._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar122,2);
    *(undefined8 *)(param_1 + auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar91._0_4_) = auVar118._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar128,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar141,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar91._0_4_) = auVar52._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar69,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar91._12_4_) = uVar10;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar91._0_4_) = fVar30;
  }
  if ((bVar27 & 2) != 0) {
    uVar10 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._4_4_) = uVar10;
  }
  if ((bVar27 & 4) != 0) {
    uVar10 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._8_4_) = uVar10;
  }
  if ((char)bVar27 < '\0') {
    uVar10 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar91._12_4_) = uVar10;
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction_sse4 @ 1403108f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
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
  int iVar28;
  uint *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  byte bVar32;
  int unaff_EBP;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  bool bVar39;
  uint uVar41;
  uint uVar42;
  undefined1 auVar40 [16];
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  float fVar52;
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
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
  float fVar76;
  float fVar77;
  float fVar81;
  float fVar83;
  undefined1 auVar79 [16];
  float fVar82;
  undefined1 auVar80 [16];
  float fVar84;
  float fVar90;
  float fVar91;
  undefined1 auVar85 [16];
  float fVar92;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 local_118 [32];
  undefined4 local_f8;
  undefined1 auVar58 [16];
  undefined1 auVar78 [16];
  
  uVar35 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar35 = param_5;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar34 = 0;
  }
  else {
    lVar33 = 8;
    uVar34 = 0;
    uVar48 = 0;
    do {
      piVar1 = (int *)(param_2 + (ulonglong)uVar48);
      lVar36 = (longlong)(*piVar1 << 4);
      lVar38 = (longlong)(piVar1[1] * 0x10);
      lVar37 = (longlong)(piVar1[2] << 4);
      lVar31 = (longlong)(piVar1[3] << 4);
      uVar49 = *(uint *)(param_1 + 0xc + lVar36);
      uVar50 = *(uint *)(param_1 + 0xc + lVar38);
      uVar51 = *(uint *)(param_1 + 0xc + lVar37);
      uVar41 = *(uint *)(param_1 + 0xc + lVar31);
      auVar40 = insertps(ZEXT416(uVar49),ZEXT416(uVar50),0x10);
      auVar40 = insertps(auVar40,ZEXT416(uVar51),0x20);
      auVar40 = insertps(auVar40,ZEXT416(uVar41),0x30);
      fVar76 = auVar40._0_4_;
      fVar81 = auVar40._4_4_;
      fVar52 = auVar40._8_4_;
      fVar55 = auVar40._12_4_;
      auVar40._4_4_ = -(uint)(fVar81 == 0.0);
      auVar40._0_4_ = -(uint)(fVar76 == 0.0);
      auVar40._8_4_ = -(uint)(fVar52 == 0.0);
      auVar40._12_4_ = -(uint)(fVar55 == 0.0);
      auVar73._4_4_ = -(uint)NAN(fVar81);
      auVar73._0_4_ = -(uint)NAN(fVar76);
      auVar73._8_4_ = -(uint)NAN(fVar52);
      auVar73._12_4_ = -(uint)NAN(fVar55);
      iVar28 = movmskps(piVar1[3] << 4,auVar73 | auVar40);
      if (iVar28 == 0) {
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),*(undefined4 *)(param_1 + lVar38),
                           0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + lVar37),0x20);
        auVar63 = insertps(auVar40,*(undefined4 *)(param_1 + lVar31),0x30);
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                           *(undefined4 *)(param_1 + 4 + lVar38),0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + 4 + lVar37),0x20);
        auVar67 = insertps(auVar40,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
        auVar40 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                           *(undefined4 *)(param_1 + 8 + lVar38),0x10);
        auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + 8 + lVar37),0x20);
        auVar71 = insertps(auVar40,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
        auVar40 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar33 * 4);
        auVar73 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar33 * 4);
        pfVar2 = (float *)(param_3 + lVar33 * 4);
        auVar85 = insertps(auVar73,auVar40,0x8c);
        auVar54 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar33 * 4);
        auVar72 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar33 * 4);
        pfVar3 = (float *)(param_4 + lVar33 * 4);
        auVar53 = insertps(auVar72,auVar54,0x8c);
        fVar46 = auVar63._0_4_;
        fVar47 = auVar63._4_4_;
        fVar45 = auVar63._8_4_;
        fVar77 = auVar63._12_4_;
        fVar82 = auVar67._0_4_;
        fVar83 = auVar67._4_4_;
        fVar56 = auVar67._8_4_;
        fVar44 = auVar67._12_4_;
        fVar84 = (auVar85._0_4_ - auVar71._0_4_) * auVar53._0_4_ +
                 (auVar40._4_4_ - fVar82) * auVar54._4_4_ + (auVar40._0_4_ - fVar46) * auVar54._0_4_
        ;
        fVar90 = (auVar85._4_4_ - auVar71._4_4_) * auVar53._4_4_ +
                 (auVar73._0_4_ - fVar83) * auVar72._0_4_ +
                 (auVar40._12_4_ - fVar47) * auVar54._12_4_;
        fVar91 = (*pfVar2 - auVar71._8_4_) * *pfVar3 +
                 (auVar73._12_4_ - fVar56) * auVar72._12_4_ +
                 (auVar73._8_4_ - fVar45) * auVar72._8_4_;
        fVar92 = (pfVar2[3] - auVar71._12_4_) * pfVar3[3] +
                 (pfVar2[2] - fVar44) * pfVar3[2] + (pfVar2[1] - fVar77) * pfVar3[1];
        auVar85._4_4_ = -(uint)(0.0 < fVar90 && fVar81 != 0.0);
        auVar85._0_4_ = -(uint)(0.0 < fVar84 && fVar76 != 0.0);
        auVar85._8_4_ = -(uint)(0.0 < fVar91 && fVar52 != 0.0);
        auVar85._12_4_ = -(uint)(0.0 < fVar92 && fVar55 != 0.0);
        unaff_EBP = movmskps(unaff_EBP,auVar85);
        if (unaff_EBP != 0) {
          bVar32 = (char)((char)unaff_EBP << 4) >> 4;
          unaff_EBP = CONCAT31((int3)((uint)unaff_EBP >> 8),bVar32);
          fVar76 = auVar54._0_4_ * fVar84 + fVar46;
          fVar81 = auVar54._12_4_ * fVar90 + fVar47;
          auVar78._0_8_ = CONCAT44(fVar81,fVar76);
          auVar78._8_4_ = auVar72._8_4_ * fVar91 + fVar45;
          auVar78._12_4_ = pfVar3[1] * fVar92 + fVar77;
          bVar39 = (bVar32 & 1) != 0;
          if (bVar39) {
            fVar46 = fVar76;
            fVar47 = fVar81;
            fVar45 = auVar78._8_4_;
            fVar77 = auVar78._12_4_;
          }
          fVar57 = auVar54._4_4_ * fVar84 + fVar82;
          fVar62 = auVar72._0_4_ * fVar90 + fVar83;
          auVar58._0_8_ = CONCAT44(fVar62,fVar57);
          auVar58._8_4_ = auVar72._12_4_ * fVar91 + fVar56;
          auVar58._12_4_ = pfVar3[2] * fVar92 + fVar44;
          fVar52 = auVar53._0_4_ * fVar84 + auVar71._0_4_;
          fVar55 = auVar53._4_4_ * fVar90 + auVar71._4_4_;
          auVar54._0_8_ = CONCAT44(fVar55,fVar52);
          auVar54._8_4_ = *pfVar3 * fVar91 + auVar71._8_4_;
          auVar54._12_4_ = pfVar3[3] * fVar92 + auVar71._12_4_;
          if (bVar39) {
            auVar53._8_4_ = auVar54._8_4_;
            auVar53._0_8_ = auVar54._0_8_;
            auVar53._12_4_ = auVar54._12_4_;
            auVar72._4_4_ = fVar47;
            auVar72._0_4_ = fVar46;
            auVar72._8_4_ = fVar45;
            auVar72._12_4_ = fVar77;
            auVar40 = blendps(auVar63,auVar72,1);
            fVar47 = auVar40._8_4_;
            fVar45 = auVar40._12_4_;
            fVar56 = auVar58._8_4_;
            fVar44 = auVar58._12_4_;
            fVar77 = auVar40._0_4_;
            fVar82 = auVar40._4_4_;
            if ((bVar32 & 2) != 0) goto LAB_140310cad;
LAB_140310b8f:
            fVar81 = fVar82;
            fVar76 = fVar77;
            auVar19._4_4_ = fVar62;
            auVar19._0_4_ = fVar57;
            auVar19._8_4_ = fVar56;
            auVar19._12_4_ = fVar44;
            auVar68 = blendps(auVar67,auVar19,1);
            auVar72 = blendps(auVar71,auVar53,1);
            fVar52 = auVar72._0_4_;
            fVar55 = auVar72._4_4_;
            local_f8 = auVar53._0_4_;
            auVar71._4_4_ = fVar81;
            auVar71._0_4_ = fVar76;
            auVar71._8_4_ = fVar47;
            auVar71._12_4_ = fVar45;
            auVar40 = blendps(auVar40,auVar71,2);
            auVar73 = auVar68;
            fVar56 = auVar72._8_4_;
            fVar44 = auVar72._12_4_;
            if ((bVar32 & 4) == 0) goto LAB_140310bca;
LAB_140310cf3:
            auVar86._8_4_ = auVar78._8_4_;
            auVar86._0_8_ = auVar78._0_8_;
            auVar86._12_4_ = auVar78._12_4_;
            auVar85 = blendps(auVar73,auVar68,2);
            auVar18._4_4_ = fVar55;
            auVar18._0_4_ = fVar52;
            auVar18._8_4_ = fVar56;
            auVar18._12_4_ = fVar44;
            auVar73 = blendps(auVar72,auVar18,2);
            auVar72 = auVar54;
            auVar53 = auVar58;
          }
          else {
            auVar24._4_4_ = fVar47;
            auVar24._0_4_ = fVar46;
            auVar24._8_4_ = fVar45;
            auVar24._12_4_ = fVar77;
            auVar40 = blendps(auVar63,auVar24,1);
            fVar47 = auVar40._8_4_;
            fVar45 = auVar40._12_4_;
            auVar53 = auVar71;
            fVar57 = fVar82;
            fVar62 = fVar83;
            fVar77 = auVar40._0_4_;
            fVar82 = auVar40._4_4_;
            if ((bVar32 & 2) == 0) goto LAB_140310b8f;
LAB_140310cad:
            auVar63._4_4_ = fVar62;
            auVar63._0_4_ = fVar57;
            auVar63._8_4_ = fVar56;
            auVar63._12_4_ = fVar44;
            auVar73 = blendps(auVar67,auVar63,1);
            auVar68._8_4_ = auVar58._8_4_;
            auVar68._0_8_ = auVar58._0_8_;
            auVar68._12_4_ = auVar58._12_4_;
            auVar72 = blendps(auVar71,auVar53,1);
            local_f8 = auVar53._0_4_;
            auVar67._4_4_ = fVar81;
            auVar67._0_4_ = fVar76;
            auVar67._8_4_ = auVar78._8_4_;
            auVar67._12_4_ = auVar78._12_4_;
            auVar40 = blendps(auVar40,auVar67,2);
            fVar56 = auVar54._8_4_;
            fVar44 = auVar54._12_4_;
            fVar47 = auVar78._8_4_;
            fVar45 = auVar78._12_4_;
            if ((bVar32 & 4) != 0) goto LAB_140310cf3;
LAB_140310bca:
            auVar85 = blendps(auVar73,auVar68,2);
            auVar13._4_4_ = fVar55;
            auVar13._0_4_ = fVar52;
            auVar13._8_4_ = fVar56;
            auVar13._12_4_ = fVar44;
            auVar73 = blendps(auVar72,auVar13,2);
            auVar72 = auVar73;
            auVar53 = auVar85;
            auVar86 = auVar40;
          }
          if ((char)bVar32 < '\0') {
            auVar73 = auVar54;
            auVar85 = auVar58;
            auVar40 = auVar78;
          }
          if ((bVar32 & 1) != 0) {
            *(float *)(param_1 + lVar36) = fVar46;
          }
          if ((bVar32 & 2) != 0) {
            auVar23._4_4_ = fVar81;
            auVar23._0_4_ = fVar76;
            auVar23._8_4_ = fVar47;
            auVar23._12_4_ = fVar45;
            uVar6 = extractps(auVar23,1);
            *(undefined8 *)(param_1 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar86,2);
            *(undefined8 *)(param_1 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar40,3);
            *(undefined8 *)(param_1 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(float *)(param_1 + 4 + lVar36) = fVar57;
          }
          if ((bVar32 & 2) != 0) {
            uVar6 = extractps(auVar68,1);
            *(undefined8 *)(param_1 + 4 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar53,2);
            *(undefined8 *)(param_1 + 4 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar85,3);
            *(undefined8 *)(param_1 + 4 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(undefined4 *)(param_1 + 8 + lVar36) = local_f8;
          }
          if ((bVar32 & 2) != 0) {
            auVar17._4_4_ = fVar55;
            auVar17._0_4_ = fVar52;
            auVar17._8_4_ = fVar56;
            auVar17._12_4_ = fVar44;
            uVar6 = extractps(auVar17,1);
            *(undefined8 *)(param_1 + 8 + lVar38) = uVar6;
          }
          if ((bVar32 & 4) != 0) {
            uVar6 = extractps(auVar72,2);
            *(undefined8 *)(param_1 + 8 + lVar37) = uVar6;
          }
          if ((char)bVar32 < '\0') {
            uVar6 = extractps(auVar73,3);
            *(undefined8 *)(param_1 + 8 + lVar31) = uVar6;
          }
          if ((bVar32 & 1) != 0) {
            *(uint *)(param_1 + 0xc + lVar36) = uVar49;
          }
          if ((bVar32 & 2) != 0) {
            *(uint *)(param_1 + 0xc + lVar38) = uVar50;
          }
          if ((bVar32 & 4) != 0) {
            *(uint *)(param_1 + 0xc + lVar37) = uVar51;
          }
          if ((char)bVar32 < '\0') {
            *(uint *)(param_1 + 0xc + lVar31) = uVar41;
          }
        }
      }
      uVar48 = uVar48 + 0x10;
      lVar33 = lVar33 + 0xc;
      uVar34 = uVar34 + 4;
    } while ((int)uVar34 < (int)(uVar35 & 0xfffffffc));
  }
  if ((int)param_5 <= (int)uVar34) {
    return;
  }
  iVar28 = uVar34 << 2;
  bVar39 = (int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  uVar48 = -(uint)bVar39;
  bVar7 = (int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  uVar49 = -(uint)bVar7;
  bVar8 = (int)(uVar34 | _UNK_150631e08) < (int)param_5;
  uVar50 = -(uint)bVar8;
  bVar9 = (int)(uVar34 | _UNK_150631e0c) < (int)param_5;
  uVar51 = -(uint)bVar9;
  auVar10._4_4_ = uVar49;
  auVar10._0_4_ = uVar48;
  auVar10._8_4_ = uVar50;
  auVar10._12_4_ = uVar51;
  uVar35 = movmskps(iVar28,auVar10);
  bVar32 = (char)((byte)uVar35 << 4) >> 4;
  if ((~(byte)uVar35 & 9) == 0) {
    puVar29 = (uint *)(param_2 + iVar28);
    param_5 = *puVar29;
    uVar41 = puVar29[1];
    uVar42 = puVar29[2];
    uVar43 = puVar29[3];
    goto LAB_140310ee8;
  }
  puVar29 = (uint *)(param_2 + iVar28);
  if ((uVar35 & 1) == 0) {
    if ((uVar35 & 2) == 0) goto LAB_140310ed1;
LAB_1403112a9:
    uVar41 = puVar29[1];
    if ((uVar35 & 4) != 0) goto LAB_1403112ba;
LAB_140310edb:
    uVar42 = 0;
  }
  else {
    param_5 = *puVar29;
    if ((uVar35 & 2) != 0) goto LAB_1403112a9;
LAB_140310ed1:
    uVar41 = 0;
    if ((uVar35 & 4) == 0) goto LAB_140310edb;
LAB_1403112ba:
    uVar42 = puVar29[2];
  }
  uVar43 = 0;
  if ((uVar35 & 8) != 0) {
    uVar43 = puVar29[3];
  }
LAB_140310ee8:
  param_5 = param_5 << 4;
  uVar41 = uVar41 * 0x10;
  uVar42 = uVar42 << 4;
  uVar43 = uVar43 << 4;
  lVar33 = param_1 + (int)(uVar48 & param_5);
  lVar31 = param_1 + (int)(uVar49 & uVar41);
  lVar36 = param_1 + (int)(uVar50 & uVar42);
  lVar37 = param_1 + (int)(uVar51 & uVar43);
  auVar40 = ZEXT416(*(uint *)(param_1 + (int)(uVar48 & param_5)));
  if ((bVar32 & 2) == 0) {
    auVar73 = ZEXT416(*(uint *)((ulonglong)(___xmm_00000004000000040000000400000004 & uVar48) +
                               lVar33));
    auVar54 = ZEXT416(*(uint *)((ulonglong)(___xmm_00000008000000080000000800000008 & uVar48) +
                               lVar33));
  }
  else {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar49 & uVar41)),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000004000000040000000400000004 & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar49) + lVar31),0x10);
    auVar54 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_00000008000000080000000800000008 & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar49) + lVar31),0x10);
  }
  if ((bVar32 & 4) == 0) {
    auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000000c0000000c0000000c0000000c & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar49) + lVar31),0x10);
  }
  else {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar50 & uVar42)),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar50) + lVar36),0x20);
    auVar54 = insertps(auVar54,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar50) + lVar36),0x20);
    auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000000c0000000c0000000c0000000c & uVar48) + lVar33
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar49) + lVar31),0x10);
  }
  if ((char)bVar32 < '\0') {
    auVar40 = insertps(auVar40,*(undefined4 *)(param_1 + (int)(uVar51 & uVar43)),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar50) + lVar36),0x20);
  }
  else {
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar50) + lVar36),0x20);
  }
  if ((char)bVar32 < '\0') {
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar51) + lVar37),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar51) + lVar37),0x30);
  }
  else {
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar51) + lVar37),0x30);
  }
  if ((char)bVar32 < '\0') {
    auVar54 = insertps(auVar54,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar51) + lVar37),0x30);
  }
  fVar76 = auVar72._0_4_;
  auVar64._0_4_ = -(uint)(fVar76 == 0.0 && bVar39);
  auVar64._4_4_ = -(uint)(auVar72._4_4_ == 0.0 && bVar7);
  auVar64._8_4_ = -(uint)(auVar72._8_4_ == 0.0 && bVar8);
  auVar64._12_4_ = -(uint)(auVar72._12_4_ == 0.0 && bVar9);
  iVar28 = movmskps((int)lVar37,auVar64);
  if (iVar28 == 0) {
    uVar30 = (ulonglong)(uVar34 | (uint)__xmm_00000003000000020000000100000000);
    pauVar4 = (undefined1 (*) [16])(param_3 + uVar30 * 0xc);
    if ((~bVar32 & 0xf) == 0) {
      auVar85 = *pauVar4;
      auVar53 = pauVar4[1];
      auVar74._0_4_ = auVar85._0_4_;
      auVar63 = insertps(auVar53,auVar85,0x8c);
      auVar74._4_4_ = auVar85._12_4_;
      auVar74._8_4_ = auVar53._8_4_;
      auVar74._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar87._4_4_ = auVar53._0_4_;
      auVar87._0_4_ = auVar85._4_4_;
      auVar87._8_4_ = auVar53._12_4_;
      auVar87._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar79._0_8_ = auVar63._0_8_;
      auVar79._8_4_ = *(undefined4 *)pauVar4[2];
      auVar79._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar85 = *(undefined1 (*) [16])(param_4 + uVar30 * 0xc);
      auVar53 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar30 * 0xc);
      puVar5 = (undefined4 *)(param_4 + 0x20 + uVar30 * 0xc);
      auVar69._0_4_ = auVar85._0_4_;
      auVar63 = insertps(auVar53,auVar85,0x8c);
      auVar69._4_4_ = auVar85._12_4_;
      auVar69._8_4_ = auVar53._8_4_;
      auVar69._12_4_ = puVar5[1];
      auVar65._4_4_ = auVar53._0_4_;
      auVar65._0_4_ = auVar85._4_4_;
      auVar65._8_4_ = auVar53._12_4_;
      auVar65._12_4_ = puVar5[2];
      auVar60._0_8_ = auVar63._0_8_;
      auVar60._8_4_ = *puVar5;
      auVar60._12_4_ = puVar5[3];
    }
    else {
      auVar59._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar48;
      auVar59._4_4_ = _UNK_150b50da4 & uVar49;
      auVar59._8_4_ = _UNK_150b50da8 & uVar50;
      auVar59._12_4_ = _UNK_150b50dac & uVar51;
      lVar31 = extractps(auVar59,1);
      lVar36 = extractps(auVar59,2);
      lVar37 = extractps(auVar59,3);
      auVar85 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar31),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + lVar36),0x20);
      auVar74 = insertps(auVar85,*(undefined4 *)(*pauVar4 + lVar37),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_000000280000001c0000001000000004 & uVar48))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50db4 & uVar49)),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50db8 & uVar50)),0x20);
      auVar87 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dbc & uVar51)),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)(*pauVar4 +
                                          (___xmm_0000002c000000200000001400000008 & uVar48))),
                         *(undefined4 *)(*pauVar4 + (_UNK_150b50dc4 & uVar49)),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dc8 & uVar50)),0x20);
      auVar79 = insertps(auVar85,*(undefined4 *)(*pauVar4 + (_UNK_150b50dcc & uVar51)),0x30);
      lVar33 = param_4 + uVar30 * 0xc;
      auVar85 = insertps(ZEXT416(*(uint *)(param_4 + uVar30 * 0xc)),*(undefined4 *)(lVar31 + lVar33)
                         ,0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)(lVar36 + lVar33),0x20);
      auVar69 = insertps(auVar85,*(undefined4 *)(lVar37 + lVar33),0x30);
      auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_000000280000001c0000001000000004 & uVar48) +
                                          lVar33)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar49) + lVar33),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar50) + lVar33),0x20
                        );
      auVar65 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar51) + lVar33),0x30
                        );
      auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)
                                           (___xmm_0000002c000000200000001400000008 & uVar48) +
                                          lVar33)),
                         *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar49) + lVar33),0x10);
      auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & uVar50) + lVar33),0x20
                        );
      auVar60 = insertps(auVar85,*(undefined4 *)((ulonglong)(_UNK_150b50dcc & uVar51) + lVar33),0x30
                        );
    }
    fVar44 = auVar40._0_4_;
    fVar46 = auVar40._4_4_;
    fVar47 = auVar40._8_4_;
    fVar45 = auVar40._12_4_;
    fVar81 = auVar54._0_4_;
    fVar52 = auVar54._4_4_;
    fVar55 = auVar54._8_4_;
    fVar56 = auVar54._12_4_;
    fVar77 = (auVar79._0_4_ - fVar81) * auVar60._0_4_ +
             (auVar87._0_4_ - auVar73._0_4_) * auVar65._0_4_ +
             (auVar74._0_4_ - fVar44) * auVar69._0_4_;
    fVar82 = (auVar79._4_4_ - fVar52) * auVar60._4_4_ +
             (auVar87._4_4_ - auVar73._4_4_) * auVar65._4_4_ +
             (auVar74._4_4_ - fVar46) * auVar69._4_4_;
    fVar83 = (auVar79._8_4_ - fVar55) * auVar60._8_4_ +
             (auVar87._8_4_ - auVar73._8_4_) * auVar65._8_4_ +
             (auVar74._8_4_ - fVar47) * auVar69._8_4_;
    fVar84 = (auVar79._12_4_ - fVar56) * auVar60._12_4_ +
             (auVar87._12_4_ - auVar73._12_4_) * auVar65._12_4_ +
             (auVar74._12_4_ - fVar45) * auVar69._12_4_;
    auVar88._0_4_ = -(uint)((fVar76 != 0.0 && bVar39) && 0.0 < fVar77);
    auVar88._4_4_ = -(uint)((auVar72._4_4_ != 0.0 && bVar7) && 0.0 < fVar82);
    auVar88._8_4_ = -(uint)((auVar72._8_4_ != 0.0 && bVar8) && 0.0 < fVar83);
    auVar88._12_4_ = -(uint)((auVar72._12_4_ != 0.0 && bVar9) && 0.0 < fVar84);
    iVar28 = movmskps((int)local_118,auVar88);
    if (iVar28 == 0) {
      return;
    }
    bVar32 = (char)((char)iVar28 << 4) >> 4;
    fVar90 = auVar69._0_4_ * fVar77 + fVar44;
    fVar91 = auVar69._4_4_ * fVar82 + fVar46;
    auVar70._0_8_ = CONCAT44(fVar91,fVar90);
    auVar70._8_4_ = auVar69._8_4_ * fVar83 + fVar47;
    auVar70._12_4_ = auVar69._12_4_ * fVar84 + fVar45;
    bVar39 = (bVar32 & 1) != 0;
    if (bVar39) {
      fVar44 = fVar90;
      fVar46 = fVar91;
      fVar47 = auVar70._8_4_;
      fVar45 = auVar70._12_4_;
    }
    fVar92 = auVar65._0_4_ * fVar77 + auVar73._0_4_;
    fVar57 = auVar65._4_4_ * fVar82 + auVar73._4_4_;
    auVar66._0_8_ = CONCAT44(fVar57,fVar92);
    auVar66._8_4_ = auVar65._8_4_ * fVar83 + auVar73._8_4_;
    auVar66._12_4_ = auVar65._12_4_ * fVar84 + auVar73._12_4_;
    fVar77 = auVar60._0_4_ * fVar77 + fVar81;
    fVar82 = auVar60._4_4_ * fVar82 + fVar52;
    auVar61._0_8_ = CONCAT44(fVar82,fVar77);
    auVar61._8_4_ = auVar60._8_4_ * fVar83 + fVar55;
    auVar61._12_4_ = auVar60._12_4_ * fVar84 + fVar56;
    if (bVar39) {
      auVar80._8_4_ = auVar66._8_4_;
      auVar80._0_8_ = auVar66._0_8_;
      auVar80._12_4_ = auVar66._12_4_;
      auVar21._4_4_ = fVar46;
      auVar21._0_4_ = fVar44;
      auVar21._8_4_ = fVar47;
      auVar21._12_4_ = fVar45;
      auVar40 = blendps(auVar40,auVar21,1);
      fVar45 = auVar40._0_4_;
      fVar83 = auVar40._4_4_;
      fVar46 = auVar40._8_4_;
      fVar47 = auVar40._12_4_;
      fVar81 = fVar77;
      fVar52 = fVar82;
      fVar55 = auVar61._8_4_;
      fVar56 = auVar61._12_4_;
    }
    else {
      auVar20._4_4_ = fVar46;
      auVar20._0_4_ = fVar44;
      auVar20._8_4_ = fVar47;
      auVar20._12_4_ = fVar45;
      auVar40 = blendps(auVar40,auVar20,1);
      fVar45 = auVar40._0_4_;
      fVar83 = auVar40._4_4_;
      fVar46 = auVar40._8_4_;
      fVar47 = auVar40._12_4_;
      auVar80 = auVar73;
    }
    if ((bVar32 & 2) == 0) {
      auVar73 = blendps(auVar73,auVar80,1);
      auVar11._4_4_ = fVar52;
      auVar11._0_4_ = fVar81;
      auVar11._8_4_ = fVar55;
      auVar11._12_4_ = fVar56;
      auVar54 = blendps(auVar54,auVar11,1);
      auVar25._4_4_ = fVar83;
      auVar25._0_4_ = fVar45;
      auVar25._8_4_ = fVar46;
      auVar25._12_4_ = fVar47;
      auVar40 = blendps(auVar40,auVar25,2);
      fVar52 = auVar73._0_4_;
      fVar55 = auVar73._4_4_;
      fVar56 = auVar73._8_4_;
      fVar77 = auVar73._12_4_;
      auVar75 = auVar54;
      fVar90 = fVar45;
      fVar91 = fVar83;
    }
    else {
      auVar73 = blendps(auVar73,auVar80,1);
      auVar12._4_4_ = fVar52;
      auVar12._0_4_ = fVar81;
      auVar12._8_4_ = fVar55;
      auVar12._12_4_ = fVar56;
      auVar54 = blendps(auVar54,auVar12,1);
      auVar75._8_4_ = auVar61._8_4_;
      auVar75._0_8_ = auVar61._0_8_;
      auVar75._12_4_ = auVar61._12_4_;
      auVar27._4_4_ = fVar91;
      auVar27._0_4_ = fVar90;
      auVar27._8_4_ = auVar70._8_4_;
      auVar27._12_4_ = auVar70._12_4_;
      auVar40 = blendps(auVar40,auVar27,2);
      fVar52 = fVar92;
      fVar55 = fVar57;
      fVar56 = auVar66._8_4_;
      fVar77 = auVar66._12_4_;
      fVar46 = auVar70._8_4_;
      fVar47 = auVar70._12_4_;
    }
    if ((bVar32 & 4) == 0) {
      auVar14._4_4_ = fVar55;
      auVar14._0_4_ = fVar52;
      auVar14._8_4_ = fVar56;
      auVar14._12_4_ = fVar77;
      auVar73 = blendps(auVar73,auVar14,2);
      fVar92 = auVar73._0_4_;
      fVar57 = auVar73._4_4_;
      fVar45 = auVar73._8_4_;
      fVar82 = auVar73._12_4_;
      auVar54 = blendps(auVar54,auVar75,2);
      auVar85 = auVar54;
      auVar89 = auVar40;
    }
    else {
      auVar89._8_4_ = auVar70._8_4_;
      auVar89._0_8_ = auVar70._0_8_;
      auVar89._12_4_ = auVar70._12_4_;
      auVar16._4_4_ = fVar55;
      auVar16._0_4_ = fVar52;
      auVar16._8_4_ = fVar56;
      auVar16._12_4_ = fVar77;
      auVar73 = blendps(auVar73,auVar16,2);
      auVar54 = blendps(auVar54,auVar75,2);
      fVar45 = auVar66._8_4_;
      fVar82 = auVar66._12_4_;
      auVar85 = auVar61;
    }
    if ((char)bVar32 < '\0') {
      auVar40 = auVar70;
      auVar73 = auVar66;
      auVar54 = auVar61;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + (int)param_5) = fVar44;
    }
    if ((bVar32 & 2) != 0) {
      auVar26._4_4_ = fVar91;
      auVar26._0_4_ = fVar90;
      auVar26._8_4_ = fVar46;
      auVar26._12_4_ = fVar47;
      uVar6 = extractps(auVar26,1);
      *(undefined8 *)(param_1 + (int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar89,2);
      *(undefined8 *)(param_1 + (int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar40,3);
      *(undefined8 *)(param_1 + (int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(int *)(param_1 + 4 + (longlong)(int)param_5) = auVar80._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      auVar15._4_4_ = fVar55;
      auVar15._0_4_ = fVar52;
      auVar15._8_4_ = fVar56;
      auVar15._12_4_ = fVar77;
      uVar6 = extractps(auVar15,1);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      auVar22._4_4_ = fVar57;
      auVar22._0_4_ = fVar92;
      auVar22._8_4_ = fVar45;
      auVar22._12_4_ = fVar82;
      uVar6 = extractps(auVar22,2);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + 8 + (longlong)(int)param_5) = fVar81;
    }
    if ((bVar32 & 2) != 0) {
      uVar6 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar54,3);
      *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar43) = uVar6;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)(int)param_5) = fVar76;
    }
    if ((bVar32 & 2) != 0) {
      uVar6 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar41) = uVar6;
    }
    if ((bVar32 & 4) != 0) {
      uVar6 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar6;
    }
    if ((char)bVar32 < '\0') {
      uVar6 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar43) = uVar6;
    }
    return;
  }
  return;
}

