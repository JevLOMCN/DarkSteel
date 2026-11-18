// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_sse4 @ 140021ff0

/* WARNING: Removing unreachable block (ram,0x0001400236a6) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte bVar27;
  int iVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  bool bVar41;
  int iVar42;
  float fVar43;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  float fVar64;
  float fVar65;
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  float fVar74;
  float fVar76;
  undefined1 auVar69 [16];
  float fVar75;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar80;
  float fVar83;
  float fVar84;
  undefined1 in_XMM3 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  float fVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 in_XMM4 [16];
  undefined1 auVar87 [16];
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  uint uVar105;
  float fVar108;
  float fVar110;
  undefined1 auVar106 [16];
  uint uVar109;
  uint uVar111;
  float fVar112;
  uint uVar113;
  undefined1 auVar107 [16];
  float fVar117;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar118;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar123;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar125;
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
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar142;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar143 [16];
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  float fVar152;
  uint uVar153;
  float fVar154;
  float fVar157;
  undefined1 auVar155 [16];
  float fVar158;
  undefined1 auVar156 [16];
  float fVar159;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  uVar17 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  if ((int)(uVar17 & 0xfffffffc) < 1) {
    uVar38 = 0;
  }
  else {
    piVar18 = (int *)(param_2 + 0x20);
    uVar38 = 0;
    uVar148 = 0;
    do {
      auVar126 = *(undefined1 (*) [16])(piVar18 + -8);
      auVar135 = *(undefined1 (*) [16])(piVar18 + -4);
      uVar55 = auVar135._0_4_;
      auVar95._4_4_ = uVar55;
      auVar95._0_4_ = uVar55;
      auVar95._8_4_ = uVar55;
      auVar95._12_4_ = uVar55;
      auVar101._8_4_ = auVar126._8_4_;
      auVar101._12_4_ = auVar126._12_4_;
      auVar57._4_4_ = auVar101._12_4_;
      auVar57._0_4_ = auVar126._0_4_;
      auVar57._8_4_ = auVar126._4_4_;
      auVar57._12_4_ = auVar101._12_4_;
      auVar69 = pblendw(auVar95,auVar57,0x3f);
      auVar101._0_8_ = auVar126._8_8_;
      auVar57 = pblendw(auVar101,auVar135,0xc);
      lVar29 = (longlong)(auVar69._8_4_ << 4);
      lVar25 = (longlong)(auVar69._12_4_ * 0x10);
      lVar21 = (longlong)(auVar135._12_4_ << 4);
      lVar32 = (longlong)(piVar18[2] << 4);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar25),0x10
                        );
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar95 = insertps(auVar69,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                         *(undefined4 *)(param_1 + 4 + lVar25),0x10);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar114 = insertps(auVar69,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar25),0x10);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      lVar24 = (longlong)(auVar57._0_4_ << 4);
      lVar37 = (longlong)(auVar57._4_4_ * 0x10);
      lVar36 = (longlong)(*piVar18 << 4);
      lVar22 = (longlong)(piVar18[3] << 4);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + lVar24)),*(undefined4 *)(param_1 + lVar37),0x10
                        );
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + lVar36),0x20);
      auVar106 = insertps(auVar57,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar24)),
                         *(undefined4 *)(param_1 + 4 + lVar37),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar36),0x20);
      auVar87 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar24)),
                         *(undefined4 *)(param_1 + 8 + lVar37),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar36),0x20);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      iVar42 = auVar126._0_4_ << 4;
      lVar19 = (longlong)iVar42;
      lVar40 = (longlong)(auVar101._12_4_ * 0x10);
      lVar39 = (longlong)(auVar135._8_4_ << 4);
      lVar34 = (longlong)(piVar18[1] << 4);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar40),
                          0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + lVar39),0x20);
      auVar127 = insertps(auVar126,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                          *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar101 = insertps(auVar126,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                          *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar135 = insertps(auVar126,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      auVar126 = *(undefined1 (*) [16])(param_3 + (ulonglong)uVar148);
      fVar142 = auVar126._0_4_;
      fVar144 = auVar126._4_4_;
      fVar146 = auVar126._12_4_;
      fVar104 = auVar106._0_4_;
      fVar108 = auVar106._4_4_;
      fVar110 = auVar106._8_4_;
      fVar112 = auVar106._12_4_;
      fVar125 = auVar87._0_4_;
      fVar88 = auVar87._4_4_;
      fVar90 = auVar87._8_4_;
      fVar93 = auVar87._12_4_;
      fVar67 = auVar69._0_4_;
      fVar119 = auVar57._0_4_;
      fVar74 = auVar69._4_4_;
      fVar123 = auVar57._4_4_;
      fVar76 = auVar69._8_4_;
      fVar78 = auVar69._12_4_;
      fVar83 = auVar57._8_4_;
      fVar124 = auVar57._12_4_;
      fVar145 = auVar126._8_4_;
      auVar137._0_4_ = auVar127._0_4_ - ((auVar95._0_4_ - fVar104) * fVar142 + fVar104);
      auVar137._4_4_ = auVar127._4_4_ - ((auVar95._4_4_ - fVar108) * fVar144 + fVar108);
      auVar137._8_4_ = auVar127._8_4_ - ((auVar95._8_4_ - fVar110) * fVar145 + fVar110);
      auVar137._12_4_ = auVar127._12_4_ - ((auVar95._12_4_ - fVar112) * fVar146 + fVar112);
      auVar140._0_4_ = auVar101._0_4_ - ((auVar114._0_4_ - fVar125) * fVar142 + fVar125);
      auVar140._4_4_ = auVar101._4_4_ - ((auVar114._4_4_ - fVar88) * fVar144 + fVar88);
      auVar140._8_4_ = auVar101._8_4_ - ((auVar114._8_4_ - fVar90) * fVar145 + fVar90);
      auVar140._12_4_ = auVar101._12_4_ - ((auVar114._12_4_ - fVar93) * fVar146 + fVar93);
      fVar147 = auVar135._0_4_;
      auVar133._0_4_ = fVar147 - ((fVar67 - fVar119) * fVar142 + fVar119);
      fVar84 = auVar135._4_4_;
      auVar133._4_4_ = fVar84 - ((fVar74 - fVar123) * fVar144 + fVar123);
      fVar86 = auVar135._8_4_;
      fVar92 = auVar135._12_4_;
      auVar133._8_4_ = fVar86 - ((fVar76 - fVar83) * fVar145 + fVar83);
      auVar133._12_4_ = fVar92 - ((fVar78 - fVar124) * fVar146 + fVar124);
      auVar135._0_4_ =
           auVar133._0_4_ * auVar133._0_4_ +
           auVar140._0_4_ * auVar140._0_4_ + auVar137._0_4_ * auVar137._0_4_;
      auVar135._4_4_ =
           auVar133._4_4_ * auVar133._4_4_ +
           auVar140._4_4_ * auVar140._4_4_ + auVar137._4_4_ * auVar137._4_4_;
      auVar135._8_4_ =
           auVar133._8_4_ * auVar133._8_4_ +
           auVar140._8_4_ * auVar140._8_4_ + auVar137._8_4_ * auVar137._8_4_;
      auVar135._12_4_ =
           auVar133._12_4_ * auVar133._12_4_ +
           auVar140._12_4_ * auVar140._12_4_ + auVar137._12_4_ * auVar137._12_4_;
      auVar156._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar142;
      auVar156._4_4_ = _UNK_15076b1f4 - fVar144;
      auVar156._8_4_ = _UNK_15076b1f8 - fVar145;
      auVar156._12_4_ = _UNK_15076b1fc - fVar146;
      auVar126 = maxps(auVar126,auVar156);
      auVar155._0_4_ = auVar126._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar155._4_4_ = auVar126._4_4_ + _UNK_15076b1f4;
      auVar155._8_4_ = auVar126._8_4_ + _UNK_15076b1f8;
      auVar155._12_4_ = auVar126._12_4_ + _UNK_15076b1fc;
      auVar155 = divps(___xmm_40000000400000004000000040000000,auVar155);
      auVar87 = sqrtps(auVar106,auVar135);
      pfVar1 = (float *)(param_4 + (ulonglong)uVar148);
      fVar43 = auVar87._0_4_ - *pfVar1;
      fVar52 = auVar87._4_4_ - pfVar1[1];
      fVar53 = auVar87._8_4_ - pfVar1[2];
      fVar54 = auVar87._12_4_ - pfVar1[3];
      auVar57 = divps(auVar137,auVar87);
      auVar69 = divps(auVar140,auVar87);
      auVar126 = divps(auVar133,auVar87);
      uVar150 = *(uint *)(param_1 + 0xc + lVar29);
      uVar153 = *(uint *)(param_1 + 0xc + lVar25);
      auVar135 = insertps(ZEXT416(uVar150),ZEXT416(uVar153),0x10);
      uVar2 = *(uint *)(param_1 + 0xc + lVar21);
      auVar135 = insertps(auVar135,ZEXT416(uVar2),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar32);
      in_XMM4 = insertps(auVar135,ZEXT416(uVar3),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar24);
      uVar5 = *(uint *)(param_1 + 0xc + lVar37);
      auVar135 = insertps(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar36);
      auVar135 = insertps(auVar135,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar22);
      auVar135 = insertps(auVar135,ZEXT416(uVar7),0x30);
      fVar151 = auVar135._0_4_;
      fVar154 = auVar135._4_4_;
      fVar149 = auVar135._8_4_;
      fVar152 = auVar135._12_4_;
      fVar85 = in_XMM4._0_4_;
      fVar89 = in_XMM4._4_4_;
      fVar91 = in_XMM4._8_4_;
      fVar94 = in_XMM4._12_4_;
      fVar68 = fVar142 * fVar85 + auVar156._0_4_ * fVar151;
      fVar75 = fVar144 * fVar89 + auVar156._4_4_ * fVar154;
      fVar77 = fVar145 * fVar91 + auVar156._8_4_ * fVar149;
      fVar79 = fVar146 * fVar94 + auVar156._12_4_ * fVar152;
      uVar8 = *(uint *)(param_1 + 0xc + lVar19);
      uVar9 = *(uint *)(param_1 + 0xc + lVar40);
      auVar135 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar39);
      auVar135 = insertps(auVar135,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar34);
      auVar135 = insertps(auVar135,ZEXT416(uVar11),0x30);
      fVar56 = auVar135._0_4_;
      auVar115._0_4_ = fVar68 + fVar56;
      fVar64 = auVar135._4_4_;
      auVar115._4_4_ = fVar75 + fVar64;
      fVar65 = auVar135._8_4_;
      auVar115._8_4_ = fVar77 + fVar65;
      fVar66 = auVar135._12_4_;
      auVar115._12_4_ = fVar79 + fVar66;
      auVar106._0_4_ = auVar57._0_4_ * fVar43 * param_5;
      auVar106._4_4_ = auVar57._4_4_ * fVar52 * param_5;
      auVar106._8_4_ = auVar57._8_4_ * fVar53 * param_5;
      auVar106._12_4_ = auVar57._12_4_ * fVar54 * param_5;
      auVar141._0_4_ = auVar69._0_4_ * fVar43 * param_5;
      auVar141._4_4_ = auVar69._4_4_ * fVar52 * param_5;
      auVar141._8_4_ = auVar69._8_4_ * fVar53 * param_5;
      auVar141._12_4_ = auVar69._12_4_ * fVar54 * param_5;
      auVar69._0_4_ = fVar43 * auVar126._0_4_ * param_5;
      auVar69._4_4_ = fVar52 * auVar126._4_4_ * param_5;
      auVar69._8_4_ = fVar53 * auVar126._8_4_ * param_5;
      auVar69._12_4_ = fVar54 * auVar126._12_4_ * param_5;
      in_XMM3 = divps(auVar106,auVar115);
      auVar57 = divps(auVar141,auVar115);
      auVar135 = divps(auVar69,auVar115);
      uVar105 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                       fVar56 == 0.0 && fVar68 == 0.0);
      uVar109 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4 || fVar64 == 0.0 && fVar75 == 0.0);
      uVar111 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8 || fVar65 == 0.0 && fVar77 == 0.0);
      uVar113 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc || fVar66 == 0.0 && fVar79 == 0.0);
      fVar43 = (float)(~uVar105 & in_XMM3._0_4_);
      fVar52 = (float)(~uVar109 & in_XMM3._4_4_);
      auVar126._0_8_ = CONCAT44(fVar52,fVar43);
      auVar126._8_4_ = (float)(~uVar111 & in_XMM3._8_4_);
      auVar126._12_4_ = (float)(~uVar113 & in_XMM3._12_4_);
      fVar77 = (float)(~uVar105 & auVar57._0_4_);
      fVar79 = (float)(~uVar109 & auVar57._4_4_);
      fVar117 = (float)(~uVar111 & auVar57._8_4_);
      fVar118 = (float)(~uVar113 & auVar57._12_4_);
      fVar53 = (float)(~uVar105 & auVar135._0_4_);
      fVar54 = (float)(~uVar109 & auVar135._4_4_);
      fVar68 = (float)(~uVar111 & auVar135._8_4_);
      fVar75 = (float)(~uVar113 & auVar135._12_4_);
      auVar87._4_4_ = -(uint)(0.0 < fVar64);
      auVar87._0_4_ = -(uint)(0.0 < fVar56);
      auVar87._8_4_ = -(uint)(0.0 < fVar65);
      auVar87._12_4_ = -(uint)(0.0 < fVar66);
      iVar28 = movmskps(uVar148,auVar87);
      fVar157 = auVar155._0_4_;
      fVar159 = auVar155._4_4_;
      fVar80 = auVar155._8_4_;
      fVar158 = auVar155._12_4_;
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        fVar56 = fVar56 * fVar157;
        fVar64 = fVar64 * fVar159;
        fVar65 = fVar65 * fVar80;
        fVar66 = fVar66 * fVar158;
        auVar128._0_4_ = auVar127._0_4_ - fVar56 * fVar43;
        auVar128._4_4_ = auVar127._4_4_ - fVar64 * fVar52;
        auVar128._8_4_ = auVar127._8_4_ - fVar65 * auVar126._8_4_;
        auVar128._12_4_ = auVar127._12_4_ - fVar66 * auVar126._12_4_;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar19) = auVar128._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar128,1);
          *(undefined8 *)(param_1 + lVar40) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar128,2);
          *(undefined8 *)(param_1 + lVar39) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar128,3);
          *(undefined8 *)(param_1 + lVar34) = uVar12;
        }
        auVar127._0_4_ = auVar101._0_4_ - fVar56 * fVar77;
        auVar127._4_4_ = auVar101._4_4_ - fVar64 * fVar79;
        auVar127._8_4_ = auVar101._8_4_ - fVar65 * fVar117;
        auVar127._12_4_ = auVar101._12_4_ - fVar66 * fVar118;
        if ((bVar27 & 1) == 0) {
          if ((bVar27 & 2) == 0) goto LAB_14002258a;
LAB_14002284f:
          uVar12 = extractps(auVar127,1);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140022861;
LAB_140022593:
          if (-1 < (char)bVar27) goto LAB_14002259c;
LAB_140022873:
          uVar12 = extractps(auVar127,3);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar12;
          auVar136._0_4_ = fVar147 - fVar56 * fVar53;
          auVar136._4_4_ = fVar84 - fVar64 * fVar54;
          auVar136._8_4_ = fVar86 - fVar65 * fVar68;
          auVar136._12_4_ = fVar92 - fVar66 * fVar75;
        }
        else {
          *(float *)(param_1 + 4 + lVar19) = auVar127._0_4_;
          if ((bVar27 & 2) != 0) goto LAB_14002284f;
LAB_14002258a:
          if ((bVar27 & 4) == 0) goto LAB_140022593;
LAB_140022861:
          uVar12 = extractps(auVar127,2);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_140022873;
LAB_14002259c:
          auVar136._0_4_ = fVar147 - fVar56 * fVar53;
          auVar136._4_4_ = fVar84 - fVar64 * fVar54;
          auVar136._8_4_ = fVar86 - fVar65 * fVar68;
          auVar136._12_4_ = fVar92 - fVar66 * fVar75;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar19) = auVar136._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar136,1);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar136,2);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar136,3);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar8;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar9;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar10;
        }
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar34) = uVar11;
        }
      }
      auVar58._0_4_ = -(uint)(fVar85 != 0.0);
      auVar58._4_4_ = -(uint)(fVar89 != 0.0);
      auVar58._8_4_ = -(uint)(fVar91 != 0.0);
      auVar58._12_4_ = -(uint)(fVar94 != 0.0);
      iVar28 = movmskps(iVar42,auVar58);
      uVar55 = 0;
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        uVar55 = CONCAT31((int3)((uint)iVar28 >> 8),bVar27);
        in_XMM4._0_4_ = fVar85 * fVar157;
        in_XMM4._4_4_ = fVar89 * fVar159;
        in_XMM4._8_4_ = fVar91 * fVar80;
        in_XMM4._12_4_ = fVar94 * fVar158;
        fVar142 = fVar142 * in_XMM4._0_4_;
        fVar144 = fVar144 * in_XMM4._4_4_;
        fVar145 = fVar145 * in_XMM4._8_4_;
        fVar146 = fVar146 * in_XMM4._12_4_;
        auVar96._0_4_ = auVar95._0_4_ + fVar142 * fVar43;
        auVar96._4_4_ = auVar95._4_4_ + fVar144 * fVar52;
        auVar96._8_4_ = auVar95._8_4_ + fVar145 * auVar126._8_4_;
        auVar96._12_4_ = auVar95._12_4_ + fVar146 * auVar126._12_4_;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar29) = auVar96._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar96,1);
          *(undefined8 *)(param_1 + lVar25) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar96,2);
          *(undefined8 *)(param_1 + lVar21) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar96,3);
          *(undefined8 *)(param_1 + lVar32) = uVar12;
        }
        fVar43 = auVar114._0_4_ + fVar142 * fVar77;
        auVar44._4_4_ = auVar114._4_4_ + fVar144 * fVar79;
        auVar44._0_4_ = fVar43;
        auVar44._8_4_ = auVar114._8_4_ + fVar145 * fVar117;
        auVar44._12_4_ = auVar114._12_4_ + fVar146 * fVar118;
        if ((bVar27 & 1) == 0) {
          if ((bVar27 & 2) == 0) goto LAB_140022696;
LAB_1400229a0:
          uVar12 = extractps(auVar44,1);
          *(undefined8 *)(param_1 + 4 + lVar25) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_1400229b5;
LAB_1400226a3:
          if (-1 < (char)bVar27) goto LAB_1400226ab;
LAB_1400229c6:
          uVar12 = extractps(auVar44,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar12;
          auVar114._0_4_ = fVar67 + fVar142 * fVar53;
          auVar114._4_4_ = fVar74 + fVar144 * fVar54;
          auVar114._8_4_ = fVar76 + fVar145 * fVar68;
          auVar114._12_4_ = fVar78 + fVar146 * fVar75;
        }
        else {
          *(float *)(param_1 + 4 + lVar29) = fVar43;
          if ((bVar27 & 2) != 0) goto LAB_1400229a0;
LAB_140022696:
          if ((bVar27 & 4) == 0) goto LAB_1400226a3;
LAB_1400229b5:
          uVar12 = extractps(auVar44,2);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_1400229c6;
LAB_1400226ab:
          auVar114._0_4_ = fVar67 + fVar142 * fVar53;
          auVar114._4_4_ = fVar74 + fVar144 * fVar54;
          auVar114._8_4_ = fVar76 + fVar145 * fVar68;
          auVar114._12_4_ = fVar78 + fVar146 * fVar75;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar29) = auVar114._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 8 + lVar25) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar150;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar153;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar2;
        }
        in_XMM3 = auVar126;
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar3;
        }
      }
      auVar59._0_4_ = -(uint)(fVar151 != 0.0);
      auVar59._4_4_ = -(uint)(fVar154 != 0.0);
      auVar59._8_4_ = -(uint)(fVar149 != 0.0);
      auVar59._12_4_ = -(uint)(fVar152 != 0.0);
      iVar28 = movmskps(uVar55,auVar59);
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        fVar142 = auVar156._0_4_ * fVar151 * fVar157;
        fVar144 = auVar156._4_4_ * fVar154 * fVar159;
        fVar146 = auVar156._8_4_ * fVar149 * fVar80;
        fVar43 = auVar156._12_4_ * fVar152 * fVar158;
        auVar70._0_4_ = fVar104 + auVar126._0_4_ * fVar142;
        auVar70._4_4_ = fVar108 + auVar126._4_4_ * fVar144;
        auVar70._8_4_ = fVar110 + auVar126._8_4_ * fVar146;
        auVar70._12_4_ = fVar112 + auVar126._12_4_ * fVar43;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar24) = auVar70._0_4_;
        }
        if ((bVar27 & 2) == 0) {
          if ((bVar27 & 4) == 0) goto LAB_140022773;
LAB_140022a91:
          uVar12 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + lVar36) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_140022aa1;
LAB_14002277b:
          auVar60._0_4_ = fVar125 + fVar77 * fVar142;
          auVar60._4_4_ = fVar88 + fVar79 * fVar144;
          auVar60._8_4_ = fVar90 + fVar117 * fVar146;
          auVar60._12_4_ = fVar93 + fVar118 * fVar43;
          if ((bVar27 & 1) == 0) goto LAB_14002278c;
LAB_140022abf:
          *(int *)(param_1 + 4 + lVar24) = auVar60._0_4_;
          if ((bVar27 & 2) != 0) goto LAB_140022acf;
LAB_140022795:
          if ((bVar27 & 4) == 0) goto LAB_14002279e;
LAB_140022ae1:
          uVar12 = extractps(auVar60,2);
          *(undefined8 *)(param_1 + 4 + lVar36) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_140022af2;
LAB_1400227a6:
          in_XMM3._0_4_ = fVar142 * fVar53;
          in_XMM3._4_4_ = fVar144 * fVar54;
          in_XMM3._8_4_ = fVar146 * fVar68;
          in_XMM3._12_4_ = fVar43 * fVar75;
          auVar45._0_4_ = fVar119 + in_XMM3._0_4_;
          auVar45._4_4_ = fVar123 + in_XMM3._4_4_;
          auVar45._8_4_ = fVar83 + in_XMM3._8_4_;
          auVar45._12_4_ = fVar124 + in_XMM3._12_4_;
        }
        else {
          uVar12 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + lVar37) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140022a91;
LAB_140022773:
          if (-1 < (char)bVar27) goto LAB_14002277b;
LAB_140022aa1:
          uVar12 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + lVar22) = uVar12;
          auVar60._0_4_ = fVar125 + fVar77 * fVar142;
          auVar60._4_4_ = fVar88 + fVar79 * fVar144;
          auVar60._8_4_ = fVar90 + fVar117 * fVar146;
          auVar60._12_4_ = fVar93 + fVar118 * fVar43;
          if ((bVar27 & 1) != 0) goto LAB_140022abf;
LAB_14002278c:
          if ((bVar27 & 2) == 0) goto LAB_140022795;
LAB_140022acf:
          uVar12 = extractps(auVar60,1);
          *(undefined8 *)(param_1 + 4 + lVar37) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140022ae1;
LAB_14002279e:
          if (-1 < (char)bVar27) goto LAB_1400227a6;
LAB_140022af2:
          uVar12 = extractps(auVar60,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar12;
          in_XMM3._0_4_ = fVar142 * fVar53;
          in_XMM3._4_4_ = fVar144 * fVar54;
          in_XMM3._8_4_ = fVar146 * fVar68;
          in_XMM3._12_4_ = fVar43 * fVar75;
          auVar45._0_4_ = fVar119 + in_XMM3._0_4_;
          auVar45._4_4_ = fVar123 + in_XMM3._4_4_;
          auVar45._8_4_ = fVar83 + in_XMM3._8_4_;
          auVar45._12_4_ = fVar124 + in_XMM3._12_4_;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar24) = auVar45._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar45,1);
          *(undefined8 *)(param_1 + 8 + lVar37) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar45,2);
          *(undefined8 *)(param_1 + 8 + lVar36) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar45,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar4;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar5;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar6;
        }
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar7;
        }
      }
      uVar148 = uVar148 + 0x10;
      piVar18 = piVar18 + 0xc;
      uVar38 = uVar38 + 4;
    } while ((int)uVar38 < (int)(uVar17 & 0xfffffffc));
  }
  if ((int)param_6 <= (int)uVar38) {
    return;
  }
  bVar13 = (int)(uVar38 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6;
  auVar120._0_4_ = -(uint)bVar13;
  bVar14 = (int)(uVar38 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6;
  auVar120._4_4_ = -(uint)bVar14;
  bVar15 = (int)(uVar38 | _UNK_150631e08) < (int)param_6;
  auVar120._8_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar38 | _UNK_150631e0c) < (int)param_6;
  auVar120._12_4_ = -(uint)bVar16;
  pauVar23 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar38 * 0xc);
  uVar17 = movmskps(uVar38 * 3,auVar120);
  bVar27 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    auVar126 = *pauVar23;
    auVar135 = pauVar23[1];
    uVar55 = auVar135._0_4_;
    auVar72._4_4_ = uVar55;
    auVar72._0_4_ = uVar55;
    auVar72._8_4_ = uVar55;
    auVar72._12_4_ = uVar55;
    uVar55 = auVar126._12_4_;
    auVar130._0_8_ = CONCAT44(uVar55,auVar126._0_4_);
    auVar130._8_4_ = auVar126._4_4_;
    auVar130._12_4_ = uVar55;
    auVar57 = pblendw(auVar72,auVar130,0x3f);
    auVar98._0_8_ = auVar126._8_8_;
    auVar98._8_4_ = auVar126._8_4_;
    auVar98._12_4_ = uVar55;
    auVar126 = pblendw(auVar98,auVar135,0xc);
    auVar61._0_8_ = CONCAT44(*(undefined4 *)(pauVar23[2] + 4),auVar135._8_4_);
    auVar61._8_4_ = auVar135._12_4_;
    auVar61._12_4_ = *(undefined4 *)(pauVar23[2] + 8);
    auVar129._8_8_ = auVar61._0_8_;
    auVar129._0_8_ = auVar130._0_8_;
    auVar71._8_8_ = auVar61._8_8_;
    auVar71._0_8_ = auVar57._8_8_;
    auVar97._0_8_ = auVar126._0_8_;
    auVar97._8_4_ = *(undefined4 *)pauVar23[2];
    auVar97._12_4_ = *(undefined4 *)(pauVar23[2] + 0xc);
    pauVar23 = (undefined1 (*) [16])(param_3 + (int)(uVar38 << 2));
    pauVar30 = (undefined1 (*) [16])(param_4 + (int)(uVar38 << 2));
LAB_140022d9b:
    in_XMM4 = *pauVar23;
    in_XMM3 = *pauVar30;
  }
  else {
    auVar46._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar120._0_4_;
    auVar46._4_4_ = _UNK_150b50da4 & auVar120._4_4_;
    auVar46._8_4_ = _UNK_150b50da8 & auVar120._8_4_;
    auVar46._12_4_ = _UNK_150b50dac & auVar120._12_4_;
    lVar19 = extractps(auVar46,1);
    lVar21 = extractps(auVar46,2);
    lVar22 = extractps(auVar46,3);
    auVar129._4_4_ = *(undefined4 *)(*pauVar23 + lVar19);
    auVar129._0_4_ = *(undefined4 *)*pauVar23;
    auVar129._12_4_ = *(undefined4 *)(*pauVar23 + lVar22);
    auVar129._8_4_ = *(undefined4 *)(*pauVar23 + lVar21);
    auVar126 = ___xmm_000000280000001c0000001000000004 & auVar120;
    auVar71._4_4_ = *(undefined4 *)(*pauVar23 + auVar126._4_4_);
    auVar71._0_4_ = *(undefined4 *)(*pauVar23 + auVar126._0_4_);
    auVar71._12_4_ = *(undefined4 *)(*pauVar23 + auVar126._12_4_);
    auVar71._8_4_ = *(undefined4 *)(*pauVar23 + auVar126._8_4_);
    auVar126 = ___xmm_0000002c000000200000001400000008 & auVar120;
    auVar97._4_4_ = *(undefined4 *)(*pauVar23 + auVar126._4_4_);
    auVar97._0_4_ = *(undefined4 *)(*pauVar23 + auVar126._0_4_);
    auVar97._12_4_ = *(undefined4 *)(*pauVar23 + auVar126._12_4_);
    auVar97._8_4_ = *(undefined4 *)(*pauVar23 + auVar126._8_4_);
    pauVar23 = (undefined1 (*) [16])(param_3 + (int)(uVar38 << 2));
    pauVar30 = (undefined1 (*) [16])(param_4 + (int)(uVar38 << 2));
    if ((~bVar27 & 9) == 0) goto LAB_140022d9b;
    if ((uVar17 & 1) != 0) {
      in_XMM4 = ZEXT416(*(uint *)*pauVar23);
    }
    if ((uVar17 & 2) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 4),0x10);
    }
    if ((uVar17 & 4) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 8),0x20);
    }
    if ((uVar17 & 8) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 0xc),0x30);
    }
    if ((uVar17 & 1) != 0) {
      in_XMM3 = ZEXT416(*(uint *)*pauVar30);
    }
    if ((uVar17 & 2) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 4),0x10);
    }
    if ((uVar17 & 4) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 8),0x20);
    }
    if ((uVar17 & 8) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 0xc),0x30);
    }
  }
  auVar73._0_4_ = auVar71._0_4_ << 4;
  auVar73._4_4_ = auVar71._4_4_ << 4;
  auVar73._8_4_ = auVar71._8_4_ << 4;
  auVar73._12_4_ = auVar71._12_4_ << 4;
  auVar135 = auVar120 & auVar73;
  lVar19 = param_1 + auVar135._0_4_;
  lVar21 = param_1 + auVar135._4_4_;
  lVar22 = param_1 + auVar135._8_4_;
  lVar24 = param_1 + auVar135._12_4_;
  auVar101 = ___xmm_00000004000000040000000400000004 & auVar120;
  auVar87 = ___xmm_00000008000000080000000800000008 & auVar120;
  auVar99._0_4_ = auVar97._0_4_ << 4;
  auVar99._4_4_ = auVar97._4_4_ << 4;
  auVar99._8_4_ = auVar97._8_4_ << 4;
  auVar99._12_4_ = auVar97._12_4_ << 4;
  auVar57 = auVar120 & auVar99;
  lVar40 = (longlong)auVar57._0_4_;
  auVar126 = ZEXT416(*(uint *)(param_1 + auVar135._0_4_));
  auVar131._0_4_ = auVar129._0_4_ << 4;
  auVar131._4_4_ = auVar129._4_4_ << 4;
  auVar131._8_4_ = auVar129._8_4_ << 4;
  auVar131._12_4_ = auVar129._12_4_ << 4;
  auVar69 = auVar120 & auVar131;
  uVar26 = (ulonglong)auVar101._4_4_;
  uVar33 = (ulonglong)auVar101._0_4_;
  uVar35 = (ulonglong)auVar87._0_4_;
  lVar25 = param_1 + lVar40;
  lVar29 = param_1 + auVar57._4_4_;
  lVar32 = param_1 + auVar57._8_4_;
  lVar34 = param_1 + auVar57._12_4_;
  lVar36 = param_1 + auVar69._0_4_;
  lVar37 = param_1 + auVar69._4_4_;
  lVar39 = param_1 + auVar69._8_4_;
  lVar31 = auVar69._12_4_ + param_1;
  bVar41 = (bVar27 & 2) != 0;
  uVar17 = auVar87._4_4_;
  if (bVar41) {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._4_4_),0x10);
    auVar155 = insertps(ZEXT416(*(uint *)(uVar33 + lVar19)),*(undefined4 *)(uVar26 + lVar21),0x10);
    auVar95 = insertps(ZEXT416(*(uint *)(uVar35 + lVar19)),
                       *(undefined4 *)((ulonglong)uVar17 + lVar21),0x10);
    auVar133 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),
                        *(undefined4 *)(param_1 + auVar57._4_4_),0x10);
    auVar137 = insertps(ZEXT416(*(uint *)(uVar33 + lVar25)),*(undefined4 *)(uVar26 + lVar29),0x10);
    auVar106 = insertps(ZEXT416(*(uint *)(uVar35 + lVar25)),
                        *(undefined4 *)((ulonglong)uVar17 + lVar29),0x10);
  }
  else {
    auVar155 = ZEXT416(*(uint *)(uVar33 + lVar19));
    auVar95 = ZEXT416(*(uint *)(uVar35 + lVar19));
    auVar133 = ZEXT416(*(uint *)(param_1 + lVar40));
    auVar137 = ZEXT416(*(uint *)(uVar33 + lVar25));
    auVar106 = ZEXT416(*(uint *)(uVar35 + lVar25));
  }
  auVar114 = ZEXT416(*(uint *)(param_1 + auVar69._0_4_));
  uVar38 = auVar101._8_4_;
  uVar150 = auVar101._12_4_;
  uVar148 = auVar87._8_4_;
  uVar153 = auVar87._12_4_;
  if (bVar41) {
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._4_4_),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar33 + lVar36)),*(undefined4 *)(uVar26 + lVar37),0x10);
    auVar87 = insertps(ZEXT416(*(uint *)(uVar35 + lVar36)),
                       *(undefined4 *)((ulonglong)uVar17 + lVar37),0x10);
  }
  else {
    auVar101 = ZEXT416(*(uint *)(uVar33 + lVar36));
    auVar87 = ZEXT416(*(uint *)(uVar35 + lVar36));
  }
  if ((bVar27 & 4) != 0) {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._8_4_),0x20);
    auVar155 = insertps(auVar155,*(undefined4 *)((ulonglong)uVar38 + lVar22),0x20);
    auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)uVar148 + lVar22),0x20);
    auVar133 = insertps(auVar133,*(undefined4 *)(param_1 + auVar57._8_4_),0x20);
    auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)uVar38 + lVar32),0x20);
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)uVar148 + lVar32),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._8_4_),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar38 + lVar39),0x20);
    auVar87 = insertps(auVar87,*(undefined4 *)((ulonglong)uVar148 + lVar39),0x20);
  }
  if ((char)bVar27 < '\0') {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._12_4_),0x30);
    auVar155 = insertps(auVar155,*(undefined4 *)((ulonglong)uVar150 + lVar24),0x30);
    auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)uVar153 + lVar24),0x30);
  }
  uVar26 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar120._0_4_);
  if ((char)bVar27 < '\0') {
    auVar133 = insertps(auVar133,*(undefined4 *)(param_1 + auVar57._12_4_),0x30);
  }
  uVar35 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar120._4_4_);
  if ((char)bVar27 < '\0') {
    auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)uVar150 + lVar34),0x30);
  }
  bVar41 = (char)bVar27 < '\0';
  uVar33 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar120,8);
  if (bVar41) {
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)uVar153 + lVar34),0x30);
  }
  uVar17 = SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar120,0xc);
  uVar20 = (ulonglong)uVar17;
  auVar156 = insertps(ZEXT416(*(uint *)(uVar26 + lVar19)),*(undefined4 *)(uVar35 + lVar21),0x10);
  auVar57 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar35 + lVar29),0x10);
  auVar135 = insertps(ZEXT416(*(uint *)(uVar26 + lVar36)),*(undefined4 *)(uVar35 + lVar37),0x10);
  if (bVar41) {
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._12_4_),0x30);
  }
  auVar69 = insertps(auVar156,*(undefined4 *)(uVar33 + lVar22),0x20);
  auVar57 = insertps(auVar57,*(undefined4 *)(uVar33 + lVar32),0x20);
  auVar135 = insertps(auVar135,*(undefined4 *)(uVar33 + lVar39),0x20);
  if (bVar41) {
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar150 + lVar31),0x30);
  }
  auVar69 = insertps(auVar69,*(undefined4 *)(uVar20 + lVar24),0x30);
  auVar57 = insertps(auVar57,*(undefined4 *)(uVar20 + lVar34),0x30);
  auVar135 = insertps(auVar135,*(undefined4 *)(uVar20 + lVar31),0x30);
  if (bVar41) {
    auVar87 = insertps(auVar87,*(undefined4 *)((ulonglong)uVar153 + lVar31),0x30);
  }
  local_248 = auVar126._0_4_;
  fStack_244 = auVar126._4_4_;
  fStack_240 = auVar126._8_4_;
  fStack_23c = auVar126._12_4_;
  fVar76 = auVar133._0_4_;
  fVar77 = auVar133._4_4_;
  fVar78 = auVar133._8_4_;
  fVar79 = auVar133._12_4_;
  local_258 = auVar155._0_4_;
  fStack_254 = auVar155._4_4_;
  fStack_250 = auVar155._8_4_;
  fStack_24c = auVar155._12_4_;
  fVar88 = auVar137._0_4_;
  fVar89 = auVar137._4_4_;
  fVar90 = auVar137._8_4_;
  fVar91 = auVar137._12_4_;
  fVar110 = auVar106._0_4_;
  fVar112 = auVar106._4_4_;
  fVar117 = auVar106._8_4_;
  fVar118 = auVar106._12_4_;
  fVar86 = in_XMM4._0_4_;
  fVar65 = in_XMM4._4_4_;
  fVar92 = in_XMM4._8_4_;
  fVar66 = in_XMM4._12_4_;
  auVar62._0_4_ = auVar114._0_4_ - ((local_248 - fVar76) * fVar86 + fVar76);
  auVar62._4_4_ = auVar114._4_4_ - ((fStack_244 - fVar77) * fVar65 + fVar77);
  auVar62._8_4_ = auVar114._8_4_ - ((fStack_240 - fVar78) * fVar92 + fVar78);
  auVar62._12_4_ = auVar114._12_4_ - ((fStack_23c - fVar79) * fVar66 + fVar79);
  fVar68 = auVar101._0_4_;
  fVar74 = auVar101._4_4_;
  fVar75 = auVar101._12_4_;
  auVar132._0_4_ = fVar68 - ((local_258 - fVar88) * fVar86 + fVar88);
  auVar132._4_4_ = fVar74 - ((fStack_254 - fVar89) * fVar65 + fVar89);
  fVar85 = auVar101._8_4_;
  auVar132._8_4_ = fVar85 - ((fStack_250 - fVar90) * fVar92 + fVar90);
  auVar132._12_4_ = fVar75 - ((fStack_24c - fVar91) * fVar66 + fVar91);
  fVar142 = auVar87._0_4_;
  fVar144 = auVar87._4_4_;
  fVar146 = auVar87._12_4_;
  auVar121._0_4_ = fVar142 - ((auVar95._0_4_ - fVar110) * fVar86 + fVar110);
  auVar121._4_4_ = fVar144 - ((auVar95._4_4_ - fVar112) * fVar65 + fVar112);
  fVar83 = auVar87._8_4_;
  auVar121._8_4_ = fVar83 - ((auVar95._8_4_ - fVar117) * fVar92 + fVar117);
  auVar121._12_4_ = fVar146 - ((auVar95._12_4_ - fVar118) * fVar66 + fVar118);
  auVar81._0_4_ =
       auVar121._0_4_ * auVar121._0_4_ +
       auVar132._0_4_ * auVar132._0_4_ + auVar62._0_4_ * auVar62._0_4_;
  auVar81._4_4_ =
       auVar121._4_4_ * auVar121._4_4_ +
       auVar132._4_4_ * auVar132._4_4_ + auVar62._4_4_ * auVar62._4_4_;
  auVar81._8_4_ =
       auVar121._8_4_ * auVar121._8_4_ +
       auVar132._8_4_ * auVar132._8_4_ + auVar62._8_4_ * auVar62._8_4_;
  auVar81._12_4_ =
       auVar121._12_4_ * auVar121._12_4_ +
       auVar132._12_4_ * auVar132._12_4_ + auVar62._12_4_ * auVar62._12_4_;
  auVar155 = sqrtps(auVar95,auVar81);
  auVar143._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar86;
  auVar143._4_4_ = _UNK_15076b1f4 - fVar65;
  auVar143._8_4_ = _UNK_15076b1f8 - fVar92;
  auVar143._12_4_ = _UNK_15076b1fc - fVar66;
  auVar126 = maxps(in_XMM4,auVar143);
  auVar138._0_4_ = auVar126._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar138._4_4_ = auVar126._4_4_ + _UNK_15076b1f4;
  auVar138._8_4_ = auVar126._8_4_ + _UNK_15076b1f8;
  auVar138._12_4_ = auVar126._12_4_ + _UNK_15076b1fc;
  auVar87 = divps(___xmm_40000000400000004000000040000000,auVar138);
  auVar126 = divps(auVar62,auVar155);
  auVar133 = divps(auVar132,auVar155);
  auVar101 = divps(auVar121,auVar155);
  local_158 = in_XMM3._0_4_;
  fStack_154 = in_XMM3._4_4_;
  fStack_150 = in_XMM3._8_4_;
  fStack_14c = in_XMM3._12_4_;
  local_158 = auVar155._0_4_ - local_158;
  fStack_154 = auVar155._4_4_ - fStack_154;
  fStack_150 = auVar155._8_4_ - fStack_150;
  fStack_14c = auVar155._12_4_ - fStack_14c;
  fVar93 = auVar57._0_4_;
  fVar94 = auVar57._4_4_;
  fVar104 = auVar57._8_4_;
  fVar108 = auVar57._12_4_;
  fVar149 = auVar69._0_4_;
  fVar152 = auVar69._4_4_;
  fVar157 = auVar69._8_4_;
  fVar159 = auVar69._12_4_;
  fVar43 = fVar86 * fVar149 + auVar143._0_4_ * fVar93;
  fVar52 = fVar65 * fVar152 + auVar143._4_4_ * fVar94;
  fVar53 = fVar92 * fVar157 + auVar143._8_4_ * fVar104;
  fVar54 = fVar66 * fVar159 + auVar143._12_4_ * fVar108;
  fVar67 = auVar135._0_4_;
  auVar122._0_4_ = fVar43 + fVar67;
  fVar56 = auVar135._4_4_;
  auVar122._4_4_ = fVar52 + fVar56;
  fVar84 = auVar135._8_4_;
  auVar122._8_4_ = fVar53 + fVar84;
  fVar64 = auVar135._12_4_;
  auVar122._12_4_ = fVar54 + fVar64;
  auVar63._0_4_ = auVar126._0_4_ * local_158 * param_5;
  auVar63._4_4_ = auVar126._4_4_ * fStack_154 * param_5;
  auVar63._8_4_ = auVar126._8_4_ * fStack_150 * param_5;
  auVar63._12_4_ = auVar126._12_4_ * fStack_14c * param_5;
  auVar134._0_4_ = auVar133._0_4_ * local_158 * param_5;
  auVar134._4_4_ = auVar133._4_4_ * fStack_154 * param_5;
  auVar134._8_4_ = auVar133._8_4_ * fStack_150 * param_5;
  auVar134._12_4_ = auVar133._12_4_ * fStack_14c * param_5;
  auVar107._0_4_ = param_5 * local_158 * auVar101._0_4_;
  auVar107._4_4_ = param_5 * fStack_154 * auVar101._4_4_;
  auVar107._8_4_ = param_5 * fStack_150 * auVar101._8_4_;
  auVar107._12_4_ = param_5 * fStack_14c * auVar101._12_4_;
  auVar126 = divps(auVar63,auVar122);
  auVar133 = divps(auVar134,auVar122);
  auVar101 = divps(auVar107,auVar122);
  uVar38 = -(uint)(auVar155._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                  fVar67 == 0.0 && fVar43 == 0.0);
  uVar148 = -(uint)(auVar155._4_4_ <= _UNK_1506895d4 || fVar56 == 0.0 && fVar52 == 0.0);
  uVar150 = -(uint)(auVar155._8_4_ <= _UNK_1506895d8 || fVar84 == 0.0 && fVar53 == 0.0);
  uVar153 = -(uint)(auVar155._12_4_ <= _UNK_1506895dc || fVar64 == 0.0 && fVar54 == 0.0);
  fVar119 = (float)(~uVar38 & auVar126._0_4_);
  fVar123 = (float)(~uVar148 & auVar126._4_4_);
  fVar124 = (float)(~uVar150 & auVar126._8_4_);
  fVar125 = (float)(~uVar153 & auVar126._12_4_);
  fVar43 = (float)(~uVar38 & auVar133._0_4_);
  fVar52 = (float)(~uVar148 & auVar133._4_4_);
  fVar53 = (float)(~uVar150 & auVar133._8_4_);
  fVar54 = (float)(~uVar153 & auVar133._12_4_);
  fVar147 = (float)(~uVar38 & auVar101._0_4_);
  fVar145 = (float)(~uVar148 & auVar101._4_4_);
  fVar151 = (float)(~uVar150 & auVar101._8_4_);
  fVar154 = (float)(~uVar153 & auVar101._12_4_);
  auVar82._0_4_ = -(uint)(0.0 < fVar67 && bVar13);
  auVar82._4_4_ = -(uint)(0.0 < fVar56 && bVar14);
  auVar82._8_4_ = -(uint)(0.0 < fVar84 && bVar15);
  auVar82._12_4_ = -(uint)(0.0 < fVar64 && bVar16);
  iVar42 = movmskps(uVar17,auVar82);
  local_268 = auVar87._0_4_;
  fStack_264 = auVar87._4_4_;
  fStack_260 = auVar87._8_4_;
  fStack_25c = auVar87._12_4_;
  iVar28 = 0;
  if (iVar42 == 0) goto LAB_140023380;
  bVar27 = (char)((char)iVar42 << 4) >> 4;
  fVar80 = fVar67 * local_268;
  fVar56 = fVar56 * fStack_264;
  fVar84 = fVar84 * fStack_260;
  fVar64 = fVar64 * fStack_25c;
  auVar116._0_4_ = auVar114._0_4_ - fVar80 * fVar119;
  auVar116._4_4_ = auVar114._4_4_ - fVar56 * fVar123;
  auVar116._8_4_ = auVar114._8_4_ - fVar84 * fVar124;
  auVar116._12_4_ = auVar114._12_4_ - fVar64 * fVar125;
  if ((bVar27 & 1) == 0) {
    if ((bVar27 & 2) == 0) goto LAB_1400232e4;
LAB_140023864:
    uVar12 = extractps(auVar116,1);
    *(undefined8 *)(param_1 + auVar131._4_4_) = uVar12;
    if ((bVar27 & 4) != 0) goto LAB_140023883;
LAB_1400232f8:
    if (-1 < (char)bVar27) goto LAB_140023308;
LAB_14002389e:
    uVar12 = extractps(auVar116,3);
    *(undefined8 *)(param_1 + auVar131._12_4_) = uVar12;
    auVar102._0_4_ = fVar68 - fVar80 * fVar43;
    auVar102._4_4_ = fVar74 - fVar56 * fVar52;
    auVar102._8_4_ = fVar85 - fVar84 * fVar53;
    auVar102._12_4_ = fVar75 - fVar64 * fVar54;
    if ((bVar27 & 1) != 0) goto LAB_1400238bd;
LAB_140023315:
    if ((bVar27 & 2) == 0) goto LAB_140023322;
LAB_1400238d4:
    uVar12 = extractps(auVar102,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._4_4_) = uVar12;
    if ((bVar27 & 4) != 0) goto LAB_1400238e9;
LAB_14002332b:
    if (-1 < (char)bVar27) goto LAB_140023337;
LAB_140023901:
    uVar12 = extractps(auVar102,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._12_4_) = uVar12;
    auVar47._0_4_ = fVar142 - fVar80 * fVar147;
    auVar47._4_4_ = fVar144 - fVar56 * fVar145;
    auVar47._8_4_ = fVar83 - fVar84 * fVar151;
    auVar47._12_4_ = fVar146 - fVar64 * fVar154;
  }
  else {
    *(float *)(param_1 + auVar131._0_4_) = auVar116._0_4_;
    if ((bVar27 & 2) != 0) goto LAB_140023864;
LAB_1400232e4:
    if ((bVar27 & 4) == 0) goto LAB_1400232f8;
LAB_140023883:
    uVar12 = extractps(auVar116,2);
    *(undefined8 *)(param_1 + auVar131._8_4_) = uVar12;
    if ((char)bVar27 < '\0') goto LAB_14002389e;
LAB_140023308:
    auVar102._0_4_ = fVar68 - fVar80 * fVar43;
    auVar102._4_4_ = fVar74 - fVar56 * fVar52;
    auVar102._8_4_ = fVar85 - fVar84 * fVar53;
    auVar102._12_4_ = fVar75 - fVar64 * fVar54;
    if ((bVar27 & 1) == 0) goto LAB_140023315;
LAB_1400238bd:
    *(int *)(param_1 + 4 + (longlong)auVar131._0_4_) = auVar102._0_4_;
    if ((bVar27 & 2) != 0) goto LAB_1400238d4;
LAB_140023322:
    if ((bVar27 & 4) == 0) goto LAB_14002332b;
LAB_1400238e9:
    uVar12 = extractps(auVar102,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._8_4_) = uVar12;
    if ((char)bVar27 < '\0') goto LAB_140023901;
LAB_140023337:
    auVar47._0_4_ = fVar142 - fVar80 * fVar147;
    auVar47._4_4_ = fVar144 - fVar56 * fVar145;
    auVar47._8_4_ = fVar83 - fVar84 * fVar151;
    auVar47._12_4_ = fVar146 - fVar64 * fVar154;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar131._0_4_) = auVar47._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar47,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar47,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._12_4_) = uVar12;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar131._0_4_) = fVar67;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar135,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar135,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._8_4_) = uVar12;
  }
  iVar28 = CONCAT31((int3)((uint)iVar42 >> 8),bVar27);
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar135,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._12_4_) = uVar12;
    iVar28 = auVar131._12_4_;
  }
LAB_140023380:
  auVar139._0_4_ = -(uint)(fVar149 != 0.0 && bVar13);
  auVar139._4_4_ = -(uint)(fVar152 != 0.0 && bVar14);
  auVar139._8_4_ = -(uint)(fVar157 != 0.0 && bVar15);
  auVar139._12_4_ = -(uint)(fVar159 != 0.0 && bVar16);
  iVar42 = movmskps(iVar28,auVar139);
  iVar28 = 0;
  if (iVar42 != 0) {
    bVar27 = (char)((char)iVar42 << 4) >> 4;
    fVar86 = fVar86 * fVar149 * local_268;
    fVar65 = fVar65 * fVar152 * fStack_264;
    fVar92 = fVar92 * fVar157 * fStack_260;
    fVar66 = fVar66 * fVar159 * fStack_25c;
    auVar103._0_4_ = local_248 + fVar86 * fVar119;
    auVar103._4_4_ = fStack_244 + fVar65 * fVar123;
    auVar103._8_4_ = fStack_240 + fVar92 * fVar124;
    auVar103._12_4_ = fStack_23c + fVar66 * fVar125;
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + auVar73._0_4_) = auVar103._0_4_;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar103,1);
      *(undefined8 *)(param_1 + auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar103,2);
      *(undefined8 *)(param_1 + auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar103,3);
      *(undefined8 *)(param_1 + auVar73._12_4_) = uVar12;
    }
    local_258 = local_258 + fVar86 * fVar43;
    auVar48._4_4_ = fStack_254 + fVar65 * fVar52;
    auVar48._0_4_ = local_258;
    auVar48._8_4_ = fStack_250 + fVar92 * fVar53;
    auVar48._12_4_ = fStack_24c + fVar66 * fVar54;
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + 4 + (longlong)auVar73._0_4_) = local_258;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar48,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar48,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar48,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar12;
    }
    local_288._0_4_ = auVar95._0_4_ + fVar86 * fVar147;
    local_288._4_4_ = auVar95._4_4_ + fVar65 * fVar145;
    fStack_280 = auVar95._8_4_ + fVar92 * fVar151;
    fStack_27c = auVar95._12_4_ + fVar66 * fVar154;
    if ((bVar27 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar73._0_4_) = local_288._0_4_;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(_local_288,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(_local_288,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(_local_288,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar12;
    }
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = fVar149;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar69,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar69,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar12;
    }
    iVar28 = CONCAT31((int3)((uint)iVar42 >> 8),bVar27);
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar69,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar12;
      iVar28 = auVar73._12_4_;
    }
  }
  auVar49._0_4_ = -(uint)(fVar93 != 0.0 && bVar13);
  auVar49._4_4_ = -(uint)(fVar94 != 0.0 && bVar14);
  auVar49._8_4_ = -(uint)(fVar104 != 0.0 && bVar15);
  auVar49._12_4_ = -(uint)(fVar108 != 0.0 && bVar16);
  iVar28 = movmskps(iVar28,auVar49);
  if (iVar28 == 0) {
    return;
  }
  bVar27 = (char)((char)iVar28 << 4) >> 4;
  fVar142 = auVar143._0_4_ * local_268 * fVar93;
  fVar144 = auVar143._4_4_ * fStack_264 * fVar94;
  fVar146 = auVar143._8_4_ * fStack_260 * fVar104;
  fVar56 = auVar143._12_4_ * fStack_25c * fVar108;
  auVar50._0_4_ = fVar76 + fVar119 * fVar142;
  auVar50._4_4_ = fVar77 + fVar123 * fVar144;
  auVar50._8_4_ = fVar78 + fVar124 * fVar146;
  auVar50._12_4_ = fVar79 + fVar125 * fVar56;
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + auVar99._0_4_) = auVar50._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar50,1);
    *(undefined8 *)(param_1 + auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar50,2);
    *(undefined8 *)(param_1 + auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar50,3);
    *(undefined8 *)(param_1 + auVar99._12_4_) = uVar12;
    auVar100._0_4_ = fVar88 + fVar43 * fVar142;
    auVar100._4_4_ = fVar89 + fVar52 * fVar144;
    auVar100._8_4_ = fVar90 + fVar53 * fVar146;
    auVar100._12_4_ = fVar91 + fVar54 * fVar56;
  }
  else {
    auVar100._0_4_ = fVar88 + fVar43 * fVar142;
    auVar100._4_4_ = fVar89 + fVar52 * fVar144;
    auVar100._8_4_ = fVar90 + fVar53 * fVar146;
    auVar100._12_4_ = fVar91 + fVar54 * fVar56;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar99._0_4_) = auVar100._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._12_4_) = uVar12;
    auVar51._0_4_ = fVar110 + fVar142 * fVar147;
    auVar51._4_4_ = fVar112 + fVar144 * fVar145;
    auVar51._8_4_ = fVar117 + fVar146 * fVar151;
    auVar51._12_4_ = fVar118 + fVar56 * fVar154;
  }
  else {
    auVar51._0_4_ = fVar110 + fVar142 * fVar147;
    auVar51._4_4_ = fVar112 + fVar144 * fVar145;
    auVar51._8_4_ = fVar117 + fVar146 * fVar151;
    auVar51._12_4_ = fVar118 + fVar56 * fVar154;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar99._0_4_) = auVar51._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._12_4_) = uVar12;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar99._0_4_) = fVar93;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._12_4_) = uVar12;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 140023d30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int unaff_EBP;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  byte bVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar65;
  undefined1 in_XMM2 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar64 [16];
  float fVar67;
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  float fVar86;
  float fVar87;
  float fVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar88;
  uint uVar90;
  undefined1 auVar85 [16];
  float fVar91;
  float fVar92;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar107;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  uint uVar109;
  float fVar110;
  float fVar111;
  float fVar117;
  float fVar120;
  float fVar121;
  float fVar124;
  undefined1 auVar112 [16];
  float fVar125;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar118;
  float fVar119;
  uint uVar122;
  float fVar123;
  uint uVar126;
  float fVar127;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar128;
  float fVar129;
  float fVar133;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar135 [16];
  float fVar139;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar152;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  byte *local_2c0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined4 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  
  uVar24 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar24 = param_7;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar27 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    piVar18 = (int *)(param_2 + 0x20);
    uVar40 = 0;
    uVar27 = 0;
    do {
      auVar43 = *(undefined1 (*) [16])(piVar18 + -8);
      auVar75 = *(undefined1 (*) [16])(piVar18 + -4);
      iVar17 = piVar18[2];
      uVar50 = auVar75._0_4_;
      auVar63._4_4_ = uVar50;
      auVar63._0_4_ = uVar50;
      auVar63._8_4_ = uVar50;
      auVar63._12_4_ = uVar50;
      auVar140._8_4_ = auVar43._8_4_;
      auVar140._12_4_ = auVar43._12_4_;
      auVar51._4_4_ = auVar140._12_4_;
      auVar51._0_4_ = auVar43._0_4_;
      auVar51._8_4_ = auVar43._4_4_;
      auVar51._12_4_ = auVar140._12_4_;
      auVar63 = pblendw(auVar63,auVar51,0x3f);
      auVar140._0_8_ = auVar43._8_8_;
      auVar51 = pblendw(auVar140,auVar75,0xc);
      lVar35 = (longlong)(auVar63._8_4_ << 4);
      lVar19 = (longlong)(auVar63._12_4_ * 0x10);
      lVar21 = (longlong)(auVar75._12_4_ << 4);
      lVar31 = (longlong)(iVar17 << 4);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + lVar35)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar162 = insertps(auVar63,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar68 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar112 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      unaff_EBP = auVar51._0_4_ << 4;
      lVar23 = (longlong)unaff_EBP;
      lVar28 = (longlong)(auVar51._4_4_ * 0x10);
      lVar36 = (longlong)(*piVar18 << 4);
      lVar22 = (longlong)(piVar18[3] << 4);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + lVar23)),*(undefined4 *)(param_1 + lVar28),0x10
                        );
      auVar51 = insertps(auVar51,*(undefined4 *)(param_1 + lVar36),0x20);
      auVar105 = insertps(auVar51,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar23)),
                         *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar51 = insertps(auVar51,*(undefined4 *)(param_1 + 4 + lVar36),0x20);
      auVar93 = insertps(auVar51,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar23)),
                         *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar63 = insertps(auVar51,*(undefined4 *)(param_1 + 8 + lVar36),0x20);
      auVar51 = *(undefined1 (*) [16])(param_3 + (uVar40 & 0xffffffff));
      fVar80 = auVar51._0_4_;
      fVar86 = auVar51._4_4_;
      fVar89 = auVar51._12_4_;
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      lVar37 = (longlong)(auVar43._0_4_ << 4);
      lVar41 = (longlong)(auVar140._12_4_ * 0x10);
      lVar29 = (longlong)(auVar75._8_4_ << 4);
      lVar32 = (longlong)(piVar18[1] << 4);
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar41),0x10
                        );
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar29),0x20);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar75 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                         *(undefined4 *)(param_1 + 4 + lVar41),0x10);
      auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar29),0x20);
      auVar76 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar75 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                         *(undefined4 *)(param_1 + 8 + lVar41),0x10);
      auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + 8 + lVar29),0x20);
      auVar140 = insertps(auVar75,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar104 = auVar105._0_4_;
      fVar129 = auVar105._4_4_;
      fVar107 = auVar105._8_4_;
      fVar133 = auVar105._12_4_;
      fVar91 = auVar93._0_4_;
      fVar120 = auVar93._4_4_;
      fVar124 = auVar93._8_4_;
      fVar128 = auVar93._12_4_;
      fVar99 = auVar63._0_4_;
      fVar108 = auVar112._0_4_;
      fVar100 = auVar63._4_4_;
      fVar117 = auVar112._4_4_;
      fVar102 = auVar63._8_4_;
      fVar121 = auVar112._8_4_;
      fVar125 = auVar112._12_4_;
      fVar111 = auVar63._12_4_;
      fVar87 = auVar51._8_4_;
      auVar93._0_4_ = auVar43._0_4_ - ((auVar162._0_4_ - fVar104) * fVar80 + fVar104);
      auVar93._4_4_ = auVar43._4_4_ - ((auVar162._4_4_ - fVar129) * fVar86 + fVar129);
      auVar93._8_4_ = auVar43._8_4_ - ((auVar162._8_4_ - fVar107) * fVar87 + fVar107);
      auVar93._12_4_ = auVar43._12_4_ - ((auVar162._12_4_ - fVar133) * fVar89 + fVar133);
      auVar150._0_4_ = auVar76._0_4_ - ((auVar68._0_4_ - fVar91) * fVar80 + fVar91);
      auVar150._4_4_ = auVar76._4_4_ - ((auVar68._4_4_ - fVar120) * fVar86 + fVar120);
      auVar150._8_4_ = auVar76._8_4_ - ((auVar68._8_4_ - fVar124) * fVar87 + fVar124);
      auVar150._12_4_ = auVar76._12_4_ - ((auVar68._12_4_ - fVar128) * fVar89 + fVar128);
      fVar139 = auVar140._0_4_;
      auVar75._0_4_ = fVar139 - ((fVar108 - fVar99) * fVar80 + fVar99);
      fVar101 = auVar140._4_4_;
      auVar75._4_4_ = fVar101 - ((fVar117 - fVar100) * fVar86 + fVar100);
      fVar103 = auVar140._8_4_;
      fVar61 = auVar140._12_4_;
      auVar75._8_4_ = fVar103 - ((fVar121 - fVar102) * fVar87 + fVar102);
      auVar75._12_4_ = fVar61 - ((fVar125 - fVar111) * fVar89 + fVar111);
      auVar112._0_4_ =
           auVar75._0_4_ * auVar75._0_4_ +
           auVar150._0_4_ * auVar150._0_4_ + auVar93._0_4_ * auVar93._0_4_;
      auVar112._4_4_ =
           auVar75._4_4_ * auVar75._4_4_ +
           auVar150._4_4_ * auVar150._4_4_ + auVar93._4_4_ * auVar93._4_4_;
      auVar112._8_4_ =
           auVar75._8_4_ * auVar75._8_4_ +
           auVar150._8_4_ * auVar150._8_4_ + auVar93._8_4_ * auVar93._8_4_;
      auVar112._12_4_ =
           auVar75._12_4_ * auVar75._12_4_ +
           auVar150._12_4_ * auVar150._12_4_ + auVar93._12_4_ * auVar93._12_4_;
      auVar85._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar80;
      auVar85._4_4_ = _UNK_15076b1f4 - fVar86;
      auVar85._8_4_ = _UNK_15076b1f8 - fVar87;
      auVar85._12_4_ = _UNK_15076b1fc - fVar89;
      auVar51 = maxps(auVar51,auVar85);
      auVar113._0_4_ = auVar51._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar113._4_4_ = auVar51._4_4_ + _UNK_15076b1f4;
      auVar113._8_4_ = auVar51._8_4_ + _UNK_15076b1f8;
      auVar113._12_4_ = auVar51._12_4_ + _UNK_15076b1fc;
      auVar130 = divps(___xmm_40000000400000004000000040000000,auVar113);
      auVar51 = pmovzxbd(auVar113,*(undefined4 *)(param_5 + uVar27));
      auVar114._0_4_ = auVar51._0_4_ << 2;
      auVar114._4_4_ = auVar51._4_4_ * 4;
      auVar114._8_4_ = auVar51._8_4_ << 2;
      auVar114._12_4_ = auVar51._12_4_ << 2;
      auVar63 = sqrtps(auVar114,auVar112);
      pfVar1 = (float *)(param_4 + (uVar40 & 0xffffffff));
      fVar152 = auVar63._0_4_ - *pfVar1;
      fVar155 = auVar63._4_4_ - pfVar1[1];
      fVar156 = auVar63._8_4_ - pfVar1[2];
      fVar157 = auVar63._12_4_ - pfVar1[3];
      auVar140 = divps(auVar93,auVar63);
      auVar112 = divps(auVar150,auVar63);
      auVar75 = divps(auVar75,auVar63);
      auVar51 = insertps(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar114._0_4_)),
                         *(undefined4 *)(param_6 + (ulonglong)auVar114._4_4_),0x10);
      auVar93 = insertps(auVar51,*(undefined4 *)(param_6 + (ulonglong)auVar114._8_4_),0x20);
      uVar26 = *(uint *)(param_1 + 0xc + lVar35);
      uVar88 = *(uint *)(param_1 + 0xc + lVar19);
      auVar51 = insertps(ZEXT416(uVar26),ZEXT416(uVar88),0x10);
      uVar90 = *(uint *)(param_1 + 0xc + lVar21);
      auVar51 = insertps(auVar51,ZEXT416(uVar90),0x20);
      uVar2 = *(uint *)(param_1 + 0xc + lVar31);
      auVar51 = insertps(auVar51,ZEXT416(uVar2),0x30);
      uVar3 = *(uint *)(param_1 + 0xc + lVar23);
      uVar4 = *(uint *)(param_1 + 0xc + lVar28);
      auVar105 = insertps(ZEXT416(uVar3),ZEXT416(uVar4),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar36);
      auVar105 = insertps(auVar105,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar22);
      auVar105 = insertps(auVar105,ZEXT416(uVar6),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_6 + (ulonglong)auVar114._12_4_),0x30);
      fVar158 = auVar105._0_4_;
      fVar159 = auVar105._4_4_;
      fVar160 = auVar105._8_4_;
      fVar161 = auVar105._12_4_;
      fVar79 = auVar51._0_4_;
      fVar65 = auVar51._4_4_;
      fVar66 = auVar51._8_4_;
      fVar62 = auVar51._12_4_;
      fVar67 = fVar80 * fVar79 + auVar85._0_4_ * fVar158;
      fVar72 = fVar86 * fVar65 + auVar85._4_4_ * fVar159;
      fVar73 = fVar87 * fVar66 + auVar85._8_4_ * fVar160;
      fVar74 = fVar89 * fVar62 + auVar85._12_4_ * fVar161;
      fVar110 = auVar93._0_4_;
      auVar105._0_4_ = auVar140._0_4_ * fVar152 * fVar110;
      fVar119 = auVar93._4_4_;
      auVar105._4_4_ = auVar140._4_4_ * fVar155 * fVar119;
      fVar123 = auVar93._8_4_;
      auVar105._8_4_ = auVar140._8_4_ * fVar156 * fVar123;
      fVar127 = auVar93._12_4_;
      auVar105._12_4_ = auVar140._12_4_ * fVar157 * fVar127;
      auVar151._0_4_ = auVar112._0_4_ * fVar152 * fVar110;
      auVar151._4_4_ = auVar112._4_4_ * fVar155 * fVar119;
      auVar151._8_4_ = auVar112._8_4_ * fVar156 * fVar123;
      auVar151._12_4_ = auVar112._12_4_ * fVar157 * fVar127;
      auVar153._0_4_ = fVar152 * auVar75._0_4_ * fVar110;
      auVar153._4_4_ = fVar155 * auVar75._4_4_ * fVar119;
      auVar153._8_4_ = fVar156 * auVar75._8_4_ * fVar123;
      auVar153._12_4_ = fVar157 * auVar75._12_4_ * fVar127;
      uVar7 = *(uint *)(param_1 + 0xc + lVar37);
      uVar8 = *(uint *)(param_1 + 0xc + lVar41);
      auVar75 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar29);
      auVar75 = insertps(auVar75,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar32);
      auVar75 = insertps(auVar75,ZEXT416(uVar10),0x30);
      fVar134 = auVar75._0_4_;
      auVar47._0_4_ = fVar67 + fVar134;
      fVar136 = auVar75._4_4_;
      auVar47._4_4_ = fVar72 + fVar136;
      fVar137 = auVar75._8_4_;
      auVar47._8_4_ = fVar73 + fVar137;
      fVar138 = auVar75._12_4_;
      auVar47._12_4_ = fVar74 + fVar138;
      auVar75 = divps(auVar105,auVar47);
      auVar51 = divps(auVar151,auVar47);
      auVar140 = divps(auVar153,auVar47);
      uVar109 = -(uint)(auVar63._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                       fVar134 == 0.0 && fVar67 == 0.0);
      uVar118 = -(uint)(auVar63._4_4_ <= _UNK_1506895d4 || fVar136 == 0.0 && fVar72 == 0.0);
      uVar122 = -(uint)(auVar63._8_4_ <= _UNK_1506895d8 || fVar137 == 0.0 && fVar73 == 0.0);
      uVar126 = -(uint)(auVar63._12_4_ <= _UNK_1506895dc || fVar138 == 0.0 && fVar74 == 0.0);
      fVar67 = (float)(~uVar109 & auVar75._0_4_);
      fVar72 = (float)(~uVar118 & auVar75._4_4_);
      fVar73 = (float)(~uVar122 & auVar75._8_4_);
      fVar74 = (float)(~uVar126 & auVar75._12_4_);
      in_XMM2._0_4_ = (float)(~uVar109 & auVar51._0_4_);
      in_XMM2._4_4_ = (float)(~uVar118 & auVar51._4_4_);
      in_XMM2._8_4_ = (float)(~uVar122 & auVar51._8_4_);
      in_XMM2._12_4_ = (float)(~uVar126 & auVar51._12_4_);
      fVar110 = (float)(~uVar109 & auVar140._0_4_);
      fVar119 = (float)(~uVar118 & auVar140._4_4_);
      fVar123 = (float)(~uVar122 & auVar140._8_4_);
      fVar127 = (float)(~uVar126 & auVar140._12_4_);
      auVar154._4_4_ = -(uint)(0.0 < fVar136);
      auVar154._0_4_ = -(uint)(0.0 < fVar134);
      auVar154._8_4_ = -(uint)(0.0 < fVar137);
      auVar154._12_4_ = -(uint)(0.0 < fVar138);
      iVar39 = movmskps((int)param_6,auVar154);
      fVar152 = auVar130._0_4_;
      fVar155 = auVar130._4_4_;
      fVar156 = auVar130._8_4_;
      fVar157 = auVar130._12_4_;
      if (iVar39 != 0) {
        bVar38 = (char)((char)iVar39 << 4) >> 4;
        fVar134 = fVar134 * fVar152;
        fVar136 = fVar136 * fVar155;
        fVar137 = fVar137 * fVar156;
        fVar138 = fVar138 * fVar157;
        auVar130._0_4_ = auVar43._0_4_ - fVar134 * fVar67;
        auVar130._4_4_ = auVar43._4_4_ - fVar136 * fVar72;
        auVar130._8_4_ = auVar43._8_4_ - fVar137 * fVar73;
        auVar130._12_4_ = auVar43._12_4_ - fVar138 * fVar74;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar37) = auVar130._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar130,1);
          *(undefined8 *)(param_1 + lVar41) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar130,2);
          *(undefined8 *)(param_1 + lVar29) = uVar11;
        }
        auVar114._12_4_ = bVar38 & 0xf;
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar130,3);
          *(undefined8 *)(param_1 + lVar32) = uVar11;
        }
        auVar43._0_4_ = auVar76._0_4_ - fVar134 * in_XMM2._0_4_;
        auVar43._4_4_ = auVar76._4_4_ - fVar136 * in_XMM2._4_4_;
        auVar43._8_4_ = auVar76._8_4_ - fVar137 * in_XMM2._8_4_;
        auVar43._12_4_ = auVar76._12_4_ - fVar138 * in_XMM2._12_4_;
        if ((bVar38 & 1) == 0) {
          if ((bVar38 & 2) == 0) goto LAB_14002433c;
LAB_140024611:
          uVar11 = extractps(auVar43,1);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_140024624;
LAB_140024346:
          if (-1 < (char)bVar38) goto LAB_14002434f;
LAB_140024636:
          uVar11 = extractps(auVar43,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar11;
          auVar76._0_4_ = fVar139 - fVar134 * fVar110;
          auVar76._4_4_ = fVar101 - fVar136 * fVar119;
          auVar76._8_4_ = fVar103 - fVar137 * fVar123;
          auVar76._12_4_ = fVar61 - fVar138 * fVar127;
        }
        else {
          *(float *)(param_1 + 4 + lVar37) = auVar43._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_140024611;
LAB_14002433c:
          if ((bVar38 & 4) == 0) goto LAB_140024346;
LAB_140024624:
          uVar11 = extractps(auVar43,2);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_140024636;
LAB_14002434f:
          auVar76._0_4_ = fVar139 - fVar134 * fVar110;
          auVar76._4_4_ = fVar101 - fVar136 * fVar119;
          auVar76._8_4_ = fVar103 - fVar137 * fVar123;
          auVar76._12_4_ = fVar61 - fVar138 * fVar127;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar37) = auVar76._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar76,1);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar76,2);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar76,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar7;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar8;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar9;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar10;
        }
      }
      in_XMM4._0_12_ = ZEXT812(0);
      in_XMM4._12_4_ = 0.0;
      auVar69._0_4_ = -(uint)(fVar79 != 0.0);
      auVar69._4_4_ = -(uint)(fVar65 != 0.0);
      auVar69._8_4_ = -(uint)(fVar66 != 0.0);
      auVar69._12_4_ = -(uint)(fVar62 != 0.0);
      iVar39 = movmskps(auVar114._12_4_,auVar69);
      if (iVar39 != 0) {
        bVar38 = (char)((char)iVar39 << 4) >> 4;
        fVar80 = fVar80 * fVar79 * fVar152;
        fVar86 = fVar86 * fVar65 * fVar155;
        fVar87 = fVar87 * fVar66 * fVar156;
        fVar89 = fVar89 * fVar62 * fVar157;
        auVar163._0_4_ = auVar162._0_4_ + fVar80 * fVar67;
        auVar163._4_4_ = auVar162._4_4_ + fVar86 * fVar72;
        auVar163._8_4_ = auVar162._8_4_ + fVar87 * fVar73;
        auVar163._12_4_ = auVar162._12_4_ + fVar89 * fVar74;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar35) = auVar163._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar163,1);
          *(undefined8 *)(param_1 + lVar19) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar163,2);
          *(undefined8 *)(param_1 + lVar21) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar163,3);
          *(undefined8 *)(param_1 + lVar31) = uVar11;
        }
        auVar162._0_4_ = auVar68._0_4_ + fVar80 * in_XMM2._0_4_;
        auVar162._4_4_ = auVar68._4_4_ + fVar86 * in_XMM2._4_4_;
        auVar162._8_4_ = auVar68._8_4_ + fVar87 * in_XMM2._8_4_;
        auVar162._12_4_ = auVar68._12_4_ + fVar89 * in_XMM2._12_4_;
        if ((bVar38 & 1) == 0) {
          if ((bVar38 & 2) == 0) goto LAB_14002444d;
LAB_140024768:
          uVar11 = extractps(auVar162,1);
          *(undefined8 *)(param_1 + 4 + lVar19) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_14002477a;
LAB_140024457:
          if (-1 < (char)bVar38) goto LAB_140024460;
LAB_14002478b:
          uVar11 = extractps(auVar162,3);
          *(undefined8 *)(param_1 + 4 + lVar31) = uVar11;
          auVar68._0_4_ = fVar108 + fVar80 * fVar110;
          auVar68._4_4_ = fVar117 + fVar86 * fVar119;
          auVar68._8_4_ = fVar121 + fVar87 * fVar123;
          auVar68._12_4_ = fVar125 + fVar89 * fVar127;
        }
        else {
          *(float *)(param_1 + 4 + lVar35) = auVar162._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_140024768;
LAB_14002444d:
          if ((bVar38 & 4) == 0) goto LAB_140024457;
LAB_14002477a:
          uVar11 = extractps(auVar162,2);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_14002478b;
LAB_140024460:
          auVar68._0_4_ = fVar108 + fVar80 * fVar110;
          auVar68._4_4_ = fVar117 + fVar86 * fVar119;
          auVar68._8_4_ = fVar121 + fVar87 * fVar123;
          auVar68._12_4_ = fVar125 + fVar89 * fVar127;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar35) = auVar68._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar68,1);
          *(undefined8 *)(param_1 + 8 + lVar19) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar68,2);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar68,3);
          *(undefined8 *)(param_1 + 8 + lVar31) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar26;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar88;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar90;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar2;
        }
      }
      auVar52._0_4_ = -(uint)(fVar158 != 0.0);
      auVar52._4_4_ = -(uint)(fVar159 != 0.0);
      auVar52._8_4_ = -(uint)(fVar160 != 0.0);
      auVar52._12_4_ = -(uint)(fVar161 != 0.0);
      iVar17 = movmskps(iVar17 << 4,auVar52);
      if (iVar17 != 0) {
        bVar38 = (char)((char)iVar17 << 4) >> 4;
        fVar80 = auVar85._0_4_ * fVar158 * fVar152;
        fVar86 = auVar85._4_4_ * fVar159 * fVar155;
        fVar89 = auVar85._8_4_ * fVar160 * fVar156;
        fVar79 = auVar85._12_4_ * fVar161 * fVar157;
        auVar70._0_4_ = fVar104 + fVar67 * fVar80;
        auVar70._4_4_ = fVar129 + fVar72 * fVar86;
        auVar70._8_4_ = fVar107 + fVar73 * fVar89;
        auVar70._12_4_ = fVar133 + fVar74 * fVar79;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar23) = auVar70._0_4_;
        }
        if ((bVar38 & 2) == 0) {
          if ((bVar38 & 4) == 0) goto LAB_140024529;
LAB_140024861:
          uVar11 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + lVar36) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_140024871;
LAB_140024531:
          in_XMM2._0_4_ = in_XMM2._0_4_ * fVar80;
          in_XMM2._4_4_ = in_XMM2._4_4_ * fVar86;
          in_XMM2._8_4_ = in_XMM2._8_4_ * fVar89;
          in_XMM2._12_4_ = in_XMM2._12_4_ * fVar79;
          auVar53._0_4_ = fVar91 + in_XMM2._0_4_;
          auVar53._4_4_ = fVar120 + in_XMM2._4_4_;
          auVar53._8_4_ = fVar124 + in_XMM2._8_4_;
          auVar53._12_4_ = fVar128 + in_XMM2._12_4_;
          if ((bVar38 & 1) == 0) goto LAB_140024540;
LAB_14002488d:
          *(int *)(param_1 + 4 + lVar23) = auVar53._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_14002489c;
LAB_140024549:
          if ((bVar38 & 4) == 0) goto LAB_140024552;
LAB_1400248ae:
          uVar11 = extractps(auVar53,2);
          *(undefined8 *)(param_1 + 4 + lVar36) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_1400248bf;
LAB_14002455a:
          in_XMM4._0_4_ = fVar80 * fVar110;
          in_XMM4._4_4_ = fVar86 * fVar119;
          in_XMM4._8_4_ = fVar89 * fVar123;
          in_XMM4._12_4_ = fVar79 * fVar127;
          auVar44._0_4_ = fVar99 + in_XMM4._0_4_;
          auVar44._4_4_ = fVar100 + in_XMM4._4_4_;
          auVar44._8_4_ = fVar102 + in_XMM4._8_4_;
          auVar44._12_4_ = fVar111 + in_XMM4._12_4_;
        }
        else {
          uVar11 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + lVar28) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_140024861;
LAB_140024529:
          if (-1 < (char)bVar38) goto LAB_140024531;
LAB_140024871:
          uVar11 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + lVar22) = uVar11;
          in_XMM2._0_4_ = in_XMM2._0_4_ * fVar80;
          in_XMM2._4_4_ = in_XMM2._4_4_ * fVar86;
          in_XMM2._8_4_ = in_XMM2._8_4_ * fVar89;
          in_XMM2._12_4_ = in_XMM2._12_4_ * fVar79;
          auVar53._0_4_ = fVar91 + in_XMM2._0_4_;
          auVar53._4_4_ = fVar120 + in_XMM2._4_4_;
          auVar53._8_4_ = fVar124 + in_XMM2._8_4_;
          auVar53._12_4_ = fVar128 + in_XMM2._12_4_;
          if ((bVar38 & 1) != 0) goto LAB_14002488d;
LAB_140024540:
          if ((bVar38 & 2) == 0) goto LAB_140024549;
LAB_14002489c:
          uVar11 = extractps(auVar53,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_1400248ae;
LAB_140024552:
          if (-1 < (char)bVar38) goto LAB_14002455a;
LAB_1400248bf:
          uVar11 = extractps(auVar53,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar11;
          in_XMM4._0_4_ = fVar80 * fVar110;
          in_XMM4._4_4_ = fVar86 * fVar119;
          in_XMM4._8_4_ = fVar89 * fVar123;
          in_XMM4._12_4_ = fVar79 * fVar127;
          auVar44._0_4_ = fVar99 + in_XMM4._0_4_;
          auVar44._4_4_ = fVar100 + in_XMM4._4_4_;
          auVar44._8_4_ = fVar102 + in_XMM4._8_4_;
          auVar44._12_4_ = fVar111 + in_XMM4._12_4_;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar23) = auVar44._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar44,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar44,2);
          *(undefined8 *)(param_1 + 8 + lVar36) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar44,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar3;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar4;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar5;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar6;
        }
      }
      uVar27 = uVar27 + 4;
      uVar40 = uVar40 + 0x10;
      piVar18 = piVar18 + 0xc;
    } while ((int)uVar27 < (int)(uVar24 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar27) {
      return;
    }
  }
  uVar26 = (uint)uVar27;
  bVar12 = (int)(uVar26 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar131._0_4_ = -(uint)bVar12;
  bVar13 = (int)(uVar26 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar131._4_4_ = -(uint)bVar13;
  bVar14 = (int)(uVar26 | _UNK_150631e08) < (int)param_7;
  auVar131._8_4_ = -(uint)bVar14;
  bVar15 = (int)(uVar26 | _UNK_150631e0c) < (int)param_7;
  auVar131._12_4_ = -(uint)bVar15;
  uVar27 = uVar27 & 0xffffffff;
  pauVar30 = (undefined1 (*) [16])(param_2 + uVar27 * 0xc);
  uVar24 = movmskps(unaff_EBP,auVar131);
  bVar38 = (char)((char)uVar24 << 4) >> 4;
  if (uVar24 == 0xf) {
    auVar43 = *pauVar30;
    auVar75 = pauVar30[1];
    uVar50 = auVar75._0_4_;
    auVar95._4_4_ = uVar50;
    auVar95._0_4_ = uVar50;
    auVar95._8_4_ = uVar50;
    auVar95._12_4_ = uVar50;
    uVar50 = auVar43._12_4_;
    auVar142._0_8_ = CONCAT44(uVar50,auVar43._0_4_);
    auVar142._8_4_ = auVar43._4_4_;
    auVar142._12_4_ = uVar50;
    auVar51 = pblendw(auVar95,auVar142,0x3f);
    auVar82._0_8_ = auVar43._8_8_;
    auVar82._8_4_ = auVar43._8_4_;
    auVar82._12_4_ = uVar50;
    auVar43 = pblendw(auVar82,auVar75,0xc);
    auVar54._0_8_ = CONCAT44(*(undefined4 *)(pauVar30[2] + 4),auVar75._8_4_);
    auVar54._8_4_ = auVar75._12_4_;
    auVar54._12_4_ = *(undefined4 *)(pauVar30[2] + 8);
    auVar141._8_8_ = auVar54._0_8_;
    auVar141._0_8_ = auVar142._0_8_;
    auVar94._8_8_ = auVar54._8_8_;
    auVar94._0_8_ = auVar51._8_8_;
    auVar81._0_8_ = auVar43._0_8_;
    auVar81._8_4_ = *(undefined4 *)pauVar30[2];
    auVar81._12_4_ = *(undefined4 *)(pauVar30[2] + 0xc);
    pauVar30 = (undefined1 (*) [16])(param_3 + (int)(uVar26 << 2));
    pauVar33 = (undefined1 (*) [16])(param_4 + (int)(uVar26 << 2));
LAB_140024ba5:
    in_XMM2 = *pauVar30;
    in_XMM4 = *pauVar33;
    auVar46 = ZEXT416(*(uint *)(param_5 + uVar27));
  }
  else {
    auVar45._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar45._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar45._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar45._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar21 = extractps(auVar45,1);
    lVar22 = extractps(auVar45,2);
    lVar19 = extractps(auVar45,3);
    auVar141._4_4_ = *(undefined4 *)(*pauVar30 + lVar21);
    auVar141._0_4_ = *(undefined4 *)*pauVar30;
    auVar141._12_4_ = *(undefined4 *)(*pauVar30 + lVar19);
    auVar141._8_4_ = *(undefined4 *)(*pauVar30 + lVar22);
    auVar43 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar94._4_4_ = *(undefined4 *)(*pauVar30 + auVar43._4_4_);
    auVar94._0_4_ = *(undefined4 *)(*pauVar30 + auVar43._0_4_);
    auVar94._12_4_ = *(undefined4 *)(*pauVar30 + auVar43._12_4_);
    auVar94._8_4_ = *(undefined4 *)(*pauVar30 + auVar43._8_4_);
    auVar46 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar81._4_4_ = *(undefined4 *)(*pauVar30 + auVar46._4_4_);
    auVar81._0_4_ = *(undefined4 *)(*pauVar30 + auVar46._0_4_);
    auVar81._12_4_ = *(undefined4 *)(*pauVar30 + auVar46._12_4_);
    auVar81._8_4_ = *(undefined4 *)(*pauVar30 + auVar46._8_4_);
    pauVar30 = (undefined1 (*) [16])(param_3 + (int)(uVar26 << 2));
    pauVar33 = (undefined1 (*) [16])(param_4 + (int)(uVar26 << 2));
    if ((~bVar38 & 9) == 0) goto LAB_140024ba5;
    if ((uVar24 & 1) != 0) {
      in_XMM2 = ZEXT416(*(uint *)*pauVar30);
    }
    if ((uVar24 & 2) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 4),0x10);
    }
    if ((uVar24 & 4) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 8),0x20);
    }
    if ((uVar24 & 8) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 0xc),0x30);
    }
    if ((uVar24 & 1) != 0) {
      in_XMM4 = ZEXT416(*(uint *)*pauVar33);
    }
    if ((uVar24 & 2) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 4),0x10);
    }
    if ((uVar24 & 4) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 8),0x20);
    }
    if ((uVar24 & 8) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 0xc),0x30);
    }
    if ((uVar24 & 1) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      auVar46 = ZEXT116(*local_2c0);
    }
    if ((uVar24 & 2) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      auVar60._8_8_ = auVar46._8_8_;
      auVar60._0_8_ =
           auVar46._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)((longlong)local_2c0 + 1) << 8;
      auVar46 = pblendw(auVar46,auVar60,0xfd);
    }
    if ((uVar24 & 4) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      bVar16 = auVar46[3];
      auVar43 = pmovzxwd(auVar46,auVar46);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ =
           auVar43._0_8_ & 0xffffffff0000ffff |
           (ulonglong)*(byte *)((longlong)local_2c0 + 2) << 0x10 | (ulonglong)bVar16 << 0x18;
    }
    if ((uVar24 & 8) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      bVar16 = auVar46[2];
      auVar43 = pmovzxwd(auVar46,auVar46);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ =
           auVar43._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
           (ulonglong)*(byte *)((longlong)local_2c0 + 3) << 0x18;
    }
  }
  auVar96._0_4_ = auVar94._0_4_ << 4;
  auVar96._4_4_ = auVar94._4_4_ << 4;
  auVar96._8_4_ = auVar94._8_4_ << 4;
  auVar96._12_4_ = auVar94._12_4_ << 4;
  auVar43 = auVar131 & auVar96;
  lVar19 = param_1 + auVar43._0_4_;
  lVar21 = param_1 + auVar43._4_4_;
  lVar22 = param_1 + auVar43._8_4_;
  lVar23 = param_1 + auVar43._12_4_;
  auVar63 = ___xmm_00000004000000040000000400000004 & auVar131;
  auVar140 = ___xmm_00000008000000080000000800000008 & auVar131;
  auVar83._0_4_ = auVar81._0_4_ << 4;
  auVar83._4_4_ = auVar81._4_4_ << 4;
  auVar83._8_4_ = auVar81._8_4_ << 4;
  auVar83._12_4_ = auVar81._12_4_ << 4;
  auVar75 = auVar131 & auVar83;
  lVar34 = (longlong)auVar75._0_4_;
  _local_278 = ZEXT416(*(uint *)(param_1 + auVar43._0_4_));
  auVar143._0_4_ = auVar141._0_4_ << 4;
  auVar143._4_4_ = auVar141._4_4_ << 4;
  auVar143._8_4_ = auVar141._8_4_ << 4;
  auVar143._12_4_ = auVar141._12_4_ << 4;
  auVar51 = auVar131 & auVar143;
  lVar41 = (longlong)auVar51._0_4_;
  uVar40 = (ulonglong)auVar63._4_4_;
  uVar20 = (ulonglong)auVar63._0_4_;
  uVar27 = (ulonglong)auVar140._0_4_;
  lVar28 = param_1 + lVar34;
  lVar29 = param_1 + auVar75._4_4_;
  lVar31 = param_1 + auVar75._8_4_;
  lVar32 = param_1 + auVar75._12_4_;
  lVar35 = param_1 + lVar41;
  lVar36 = param_1 + auVar51._4_4_;
  lVar37 = param_1 + auVar51._8_4_;
  lVar25 = auVar51._12_4_ + param_1;
  bVar42 = (bVar38 & 2) != 0;
  uVar24 = auVar140._4_4_;
  if (bVar42) {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._4_4_),0x10);
    auVar85 = insertps(ZEXT416(*(uint *)(uVar20 + lVar19)),*(undefined4 *)(uVar40 + lVar21),0x10);
    auVar154 = insertps(ZEXT416(*(uint *)(uVar27 + lVar19)),
                        *(undefined4 *)((ulonglong)uVar24 + lVar21),0x10);
    auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar34)),*(undefined4 *)(param_1 + auVar75._4_4_)
                       ,0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar20 + lVar28)),*(undefined4 *)(uVar40 + lVar29),0x10);
    auVar76 = insertps(ZEXT416(*(uint *)(uVar27 + lVar28)),
                       *(undefined4 *)((ulonglong)uVar24 + lVar29),0x10);
    auVar105 = insertps(ZEXT416(*(uint *)(param_1 + lVar41)),
                        *(undefined4 *)(param_1 + auVar51._4_4_),0x10);
    auVar68 = insertps(ZEXT416(*(uint *)(uVar20 + lVar35)),*(undefined4 *)(uVar40 + lVar36),0x10);
    uVar26 = *(uint *)(uVar27 + lVar35);
  }
  else {
    auVar85 = ZEXT416(*(uint *)(uVar20 + lVar19));
    auVar154 = ZEXT416(*(uint *)(uVar27 + lVar19));
    auVar93 = ZEXT416(*(uint *)(param_1 + lVar34));
    auVar112 = ZEXT416(*(uint *)(uVar20 + lVar28));
    auVar76 = ZEXT416(*(uint *)(uVar27 + lVar28));
    auVar105 = ZEXT416(*(uint *)(param_1 + lVar41));
    auVar68 = ZEXT416(*(uint *)(uVar20 + lVar35));
    uVar26 = *(uint *)(uVar27 + lVar35);
  }
  auVar47 = ZEXT416(uVar26);
  if (bVar42) {
    auVar47 = insertps(auVar47,*(undefined4 *)((ulonglong)uVar24 + lVar36),0x10);
  }
  bVar42 = (bVar38 & 4) != 0;
  if (bVar42) {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._8_4_),0x20);
  }
  uVar27 = (ulonglong)auVar63._8_4_;
  uVar40 = (ulonglong)auVar140._8_4_;
  uVar24 = auVar63._12_4_;
  uVar26 = auVar140._12_4_;
  if (bVar42) {
    auVar85 = insertps(auVar85,*(undefined4 *)(uVar27 + lVar22),0x20);
    auVar154 = insertps(auVar154,*(undefined4 *)(uVar40 + lVar22),0x20);
    auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + auVar75._8_4_),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)(uVar27 + lVar31),0x20);
    auVar76 = insertps(auVar76,*(undefined4 *)(uVar40 + lVar31),0x20);
    auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + auVar51._8_4_),0x20);
    auVar68 = insertps(auVar68,*(undefined4 *)(uVar27 + lVar37),0x20);
    auVar47 = insertps(auVar47,*(undefined4 *)(uVar40 + lVar37),0x20);
  }
  if ((char)bVar38 < '\0') {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._12_4_),0x30);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)uVar24 + lVar23),0x30);
    auVar154 = insertps(auVar154,*(undefined4 *)((ulonglong)uVar26 + lVar23),0x30);
  }
  uVar11 = ZEXT48((uint)__xmm_0000000c0000000c0000000c0000000c & auVar131._0_4_);
  if ((char)bVar38 < '\0') {
    auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + auVar75._12_4_),0x30);
  }
  uVar27 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar131._4_4_);
  if ((char)bVar38 < '\0') {
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar24 + lVar32),0x30);
  }
  bVar42 = (char)bVar38 < '\0';
  uVar40 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar131,8);
  if (bVar42) {
    auVar76 = insertps(auVar76,*(undefined4 *)((ulonglong)uVar26 + lVar32),0x30);
  }
  uVar20 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar131,0xc);
  auVar140 = insertps(ZEXT416(*(uint *)(uVar11 + lVar19)),*(undefined4 *)(uVar27 + lVar21),0x10);
  auVar75 = insertps(ZEXT416(*(uint *)(uVar11 + lVar28)),*(undefined4 *)(uVar27 + lVar29),0x10);
  auVar43 = insertps(ZEXT416(*(uint *)(uVar11 + lVar35)),*(undefined4 *)(uVar27 + lVar36),0x10);
  if (bVar42) {
    auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + auVar51._12_4_),0x30);
  }
  auVar51 = insertps(auVar140,*(undefined4 *)(uVar40 + lVar22),0x20);
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar40 + lVar31),0x20);
  auVar43 = insertps(auVar43,*(undefined4 *)(uVar40 + lVar37),0x20);
  if (bVar42) {
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)uVar24 + lVar25),0x30);
  }
  auVar140 = insertps(auVar51,*(undefined4 *)(uVar20 + lVar23),0x30);
  auVar51 = insertps(auVar75,*(undefined4 *)(uVar20 + lVar32),0x30);
  auVar75 = insertps(auVar43,*(undefined4 *)(uVar20 + lVar25),0x30);
  auVar43 = auVar47;
  if (bVar42) {
    auVar43 = insertps(auVar47,*(undefined4 *)((ulonglong)uVar26 + lVar25),0x30);
  }
  fVar67 = auVar93._0_4_;
  fVar72 = auVar93._4_4_;
  fVar73 = auVar93._8_4_;
  fVar74 = auVar93._12_4_;
  local_288 = auVar85._0_4_;
  fStack_284 = auVar85._4_4_;
  fStack_280 = auVar85._8_4_;
  fStack_27c = auVar85._12_4_;
  local_2a8 = auVar112._0_4_;
  fStack_2a4 = auVar112._4_4_;
  fStack_2a0 = auVar112._8_4_;
  fStack_29c = auVar112._12_4_;
  local_298 = auVar154._0_4_;
  fStack_294 = auVar154._4_4_;
  fStack_290 = auVar154._8_4_;
  fStack_28c = auVar154._12_4_;
  fVar158 = auVar76._0_4_;
  fVar159 = auVar76._4_4_;
  fVar160 = auVar76._8_4_;
  fVar161 = auVar76._12_4_;
  fVar80 = in_XMM2._0_4_;
  fVar89 = in_XMM2._4_4_;
  fVar101 = in_XMM2._8_4_;
  fVar103 = in_XMM2._12_4_;
  auVar115._0_4_ = auVar105._0_4_ - (((float)local_278._0_4_ - fVar67) * fVar80 + fVar67);
  auVar115._4_4_ = auVar105._4_4_ - (((float)local_278._4_4_ - fVar72) * fVar89 + fVar72);
  auVar115._8_4_ = auVar105._8_4_ - ((fStack_270 - fVar73) * fVar101 + fVar73);
  auVar115._12_4_ = auVar105._12_4_ - ((fStack_26c - fVar74) * fVar103 + fVar74);
  fVar61 = auVar68._4_4_;
  fVar62 = auVar68._12_4_;
  fVar87 = auVar68._0_4_;
  auVar97._0_4_ = fVar87 - ((local_288 - local_2a8) * fVar80 + local_2a8);
  auVar97._4_4_ = fVar61 - ((fStack_284 - fStack_2a4) * fVar89 + fStack_2a4);
  fVar91 = auVar68._8_4_;
  auVar97._8_4_ = fVar91 - ((fStack_280 - fStack_2a0) * fVar101 + fStack_2a0);
  auVar97._12_4_ = fVar62 - ((fStack_27c - fStack_29c) * fVar103 + fStack_29c);
  fVar104 = auVar43._0_4_;
  auVar132._0_4_ = fVar104 - ((local_298 - fVar158) * fVar80 + fVar158);
  fVar107 = auVar43._4_4_;
  auVar132._4_4_ = fVar107 - ((fStack_294 - fVar159) * fVar89 + fVar159);
  fVar108 = auVar43._8_4_;
  fVar117 = auVar43._12_4_;
  auVar132._8_4_ = fVar108 - ((fStack_290 - fVar160) * fVar101 + fVar160);
  auVar132._12_4_ = fVar117 - ((fStack_28c - fVar161) * fVar103 + fVar161);
  auVar144._0_4_ = auVar97._0_4_ * auVar97._0_4_ + auVar115._0_4_ * auVar115._0_4_;
  auVar144._4_4_ = auVar97._4_4_ * auVar97._4_4_ + auVar115._4_4_ * auVar115._4_4_;
  auVar144._8_4_ = auVar97._8_4_ * auVar97._8_4_ + auVar115._8_4_ * auVar115._8_4_;
  auVar144._12_4_ = auVar97._12_4_ * auVar97._12_4_ + auVar115._12_4_ * auVar115._12_4_;
  auVar84._0_4_ = auVar132._0_4_ * auVar132._0_4_ + auVar144._0_4_;
  auVar84._4_4_ = auVar132._4_4_ * auVar132._4_4_ + auVar144._4_4_;
  auVar84._8_4_ = auVar132._8_4_ * auVar132._8_4_ + auVar144._8_4_;
  auVar84._12_4_ = auVar132._12_4_ * auVar132._12_4_ + auVar144._12_4_;
  local_158 = auVar46._0_4_;
  auVar43 = pmovzxbd(auVar144,local_158);
  auVar145._0_4_ = auVar43._0_4_ << 2;
  auVar145._4_4_ = auVar43._4_4_ << 2;
  auVar145._8_4_ = auVar43._8_4_ << 2;
  auVar145._12_4_ = auVar43._12_4_ << 2;
  auVar63 = pmovzxdq(auVar76,auVar145);
  auVar146._4_4_ = 0;
  auVar146._0_4_ = auVar145._8_4_;
  auVar146._8_4_ = auVar145._12_4_;
  auVar146._12_4_ = 0;
  auVar43 = pmovsxdq(auVar47,auVar131);
  auVar43 = blendvps((undefined1  [16])0x0,auVar63,auVar43);
  auVar48._4_4_ = auVar131._8_4_;
  auVar48._0_4_ = auVar131._8_4_;
  auVar48._8_4_ = auVar131._12_4_;
  auVar48._12_4_ = auVar131._12_4_;
  auVar76 = blendvps(ZEXT816(0),auVar146,auVar48);
  auVar49._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar80;
  auVar49._4_4_ = _UNK_15076b1f4 - fVar89;
  auVar49._8_4_ = _UNK_15076b1f8 - fVar101;
  auVar49._12_4_ = _UNK_15076b1fc - fVar103;
  auVar63 = maxps(in_XMM2,auVar49);
  auVar147._0_4_ = auVar63._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar147._4_4_ = auVar63._4_4_ + _UNK_15076b1f4;
  auVar147._8_4_ = auVar63._8_4_ + _UNK_15076b1f8;
  auVar147._12_4_ = auVar63._12_4_ + _UNK_15076b1fc;
  auVar154 = divps(___xmm_40000000400000004000000040000000,auVar147);
  auVar63 = sqrtps(auVar84,auVar84);
  auVar43 = insertps(ZEXT416(*(uint *)(param_6 + auVar43._0_8_)),
                     *(undefined4 *)(param_6 + auVar43._8_8_),0x10);
  auVar43 = insertps(auVar43,*(undefined4 *)(param_6 + auVar76._0_8_),0x20);
  auVar68 = divps(auVar115,auVar63);
  auVar93 = divps(auVar97,auVar63);
  auVar112 = divps(auVar132,auVar63);
  local_148 = in_XMM4._0_4_;
  fStack_144 = in_XMM4._4_4_;
  fStack_140 = in_XMM4._8_4_;
  fStack_13c = in_XMM4._12_4_;
  local_148 = auVar63._0_4_ - local_148;
  fStack_144 = auVar63._4_4_ - fStack_144;
  fStack_140 = auVar63._8_4_ - fStack_140;
  fStack_13c = auVar63._12_4_ - fStack_13c;
  fVar123 = auVar51._0_4_;
  fVar125 = auVar51._4_4_;
  fVar127 = auVar51._8_4_;
  fVar152 = auVar51._12_4_;
  fVar136 = auVar140._0_4_;
  fVar137 = auVar140._4_4_;
  fVar138 = auVar140._8_4_;
  fVar139 = auVar140._12_4_;
  fVar86 = fVar80 * fVar136 + auVar49._0_4_ * fVar123;
  fVar79 = fVar89 * fVar137 + auVar49._4_4_ * fVar125;
  fVar65 = fVar101 * fVar138 + auVar49._8_4_ * fVar127;
  fVar66 = fVar103 * fVar139 + auVar49._12_4_ * fVar152;
  auVar43 = insertps(auVar43,*(undefined4 *)(param_6 + auVar76._8_8_),0x30);
  fVar99 = auVar43._0_4_;
  auVar116._0_4_ = auVar68._0_4_ * local_148 * fVar99;
  fVar100 = auVar43._4_4_;
  auVar116._4_4_ = auVar68._4_4_ * fStack_144 * fVar100;
  fVar102 = auVar43._8_4_;
  auVar116._8_4_ = auVar68._8_4_ * fStack_140 * fVar102;
  fVar111 = auVar43._12_4_;
  auVar116._12_4_ = auVar68._12_4_ * fStack_13c * fVar111;
  auVar98._0_4_ = auVar93._0_4_ * local_148 * fVar99;
  auVar98._4_4_ = auVar93._4_4_ * fStack_144 * fVar100;
  auVar98._8_4_ = auVar93._8_4_ * fStack_140 * fVar102;
  auVar98._12_4_ = auVar93._12_4_ * fStack_13c * fVar111;
  auVar164._0_4_ = local_148 * auVar112._0_4_ * fVar99;
  auVar164._4_4_ = fStack_144 * auVar112._4_4_ * fVar100;
  auVar164._8_4_ = fStack_140 * auVar112._8_4_ * fVar102;
  auVar164._12_4_ = fStack_13c * auVar112._12_4_ * fVar111;
  fVar121 = auVar75._0_4_;
  auVar77._0_4_ = fVar86 + fVar121;
  fVar99 = auVar75._4_4_;
  auVar77._4_4_ = fVar79 + fVar99;
  fVar100 = auVar75._8_4_;
  auVar77._8_4_ = fVar65 + fVar100;
  fVar102 = auVar75._12_4_;
  auVar77._12_4_ = fVar66 + fVar102;
  auVar93 = divps(auVar116,auVar77);
  auVar43 = divps(auVar98,auVar77);
  auVar68 = divps(auVar164,auVar77);
  uVar24 = -(uint)(auVar63._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                  fVar121 == 0.0 && fVar86 == 0.0);
  uVar26 = -(uint)(auVar63._4_4_ <= _UNK_1506895d4 || fVar99 == 0.0 && fVar79 == 0.0);
  uVar88 = -(uint)(auVar63._8_4_ <= _UNK_1506895d8 || fVar100 == 0.0 && fVar65 == 0.0);
  uVar90 = -(uint)(auVar63._12_4_ <= _UNK_1506895dc || fVar102 == 0.0 && fVar66 == 0.0);
  fVar129 = (float)(~uVar24 & auVar93._0_4_);
  fVar133 = (float)(~uVar26 & auVar93._4_4_);
  fVar110 = (float)(~uVar88 & auVar93._8_4_);
  fVar119 = (float)(~uVar90 & auVar93._12_4_);
  fVar111 = (float)(~uVar24 & auVar43._0_4_);
  fVar120 = (float)(~uVar26 & auVar43._4_4_);
  fVar124 = (float)(~uVar88 & auVar43._8_4_);
  fVar128 = (float)(~uVar90 & auVar43._12_4_);
  fVar86 = (float)(~uVar24 & auVar68._0_4_);
  fVar79 = (float)(~uVar26 & auVar68._4_4_);
  fVar65 = (float)(~uVar88 & auVar68._8_4_);
  fVar66 = (float)(~uVar90 & auVar68._12_4_);
  auVar78._0_4_ = -(uint)(0.0 < fVar121 && bVar12);
  auVar78._4_4_ = -(uint)(0.0 < fVar99 && bVar13);
  auVar78._8_4_ = -(uint)(0.0 < fVar100 && bVar14);
  auVar78._12_4_ = -(uint)(0.0 < fVar102 && bVar15);
  iVar39 = movmskps(auVar76._8_4_,auVar78);
  fVar155 = auVar154._0_4_;
  fVar156 = auVar154._4_4_;
  fVar157 = auVar154._8_4_;
  fVar134 = auVar154._12_4_;
  iVar17 = 0;
  if (iVar39 != 0) {
    bVar38 = (char)((char)iVar39 << 4) >> 4;
    fVar92 = fVar121 * fVar155;
    fVar99 = fVar99 * fVar156;
    fVar100 = fVar100 * fVar157;
    fVar102 = fVar102 * fVar134;
    auVar55._0_4_ = auVar105._0_4_ - fVar92 * fVar129;
    auVar55._4_4_ = auVar105._4_4_ - fVar99 * fVar133;
    auVar55._8_4_ = auVar105._8_4_ - fVar100 * fVar110;
    auVar55._12_4_ = auVar105._12_4_ - fVar102 * fVar119;
    if ((bVar38 & 1) == 0) {
      if ((bVar38 & 2) == 0) goto LAB_1400252f6;
LAB_140025770:
      uVar11 = extractps(auVar55,1);
      *(undefined8 *)(param_1 + auVar143._4_4_) = uVar11;
      if ((bVar38 & 4) != 0) goto LAB_14002578b;
LAB_140025306:
      if (-1 < (char)bVar38) goto LAB_140025315;
LAB_1400257a5:
      uVar11 = extractps(auVar55,3);
      *(undefined8 *)(param_1 + auVar143._12_4_) = uVar11;
      auVar71._0_4_ = fVar87 - fVar92 * fVar111;
      auVar71._4_4_ = fVar61 - fVar99 * fVar120;
      auVar71._8_4_ = fVar91 - fVar100 * fVar124;
      auVar71._12_4_ = fVar62 - fVar102 * fVar128;
      if ((bVar38 & 1) != 0) goto LAB_1400257c3;
LAB_140025321:
      if ((bVar38 & 2) == 0) goto LAB_14002532f;
LAB_1400257db:
      uVar11 = extractps(auVar71,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._4_4_) = uVar11;
      if ((bVar38 & 4) != 0) goto LAB_1400257f0;
LAB_140025338:
      if (-1 < (char)bVar38) goto LAB_140025343;
LAB_140025807:
      uVar11 = extractps(auVar71,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._12_4_) = uVar11;
      auVar56._0_4_ = fVar104 - fVar92 * fVar86;
      auVar56._4_4_ = fVar107 - fVar99 * fVar79;
      auVar56._8_4_ = fVar108 - fVar100 * fVar65;
      auVar56._12_4_ = fVar117 - fVar102 * fVar66;
    }
    else {
      *(float *)(param_1 + auVar143._0_4_) = auVar55._0_4_;
      if ((bVar38 & 2) != 0) goto LAB_140025770;
LAB_1400252f6:
      if ((bVar38 & 4) == 0) goto LAB_140025306;
LAB_14002578b:
      uVar11 = extractps(auVar55,2);
      *(undefined8 *)(param_1 + auVar143._8_4_) = uVar11;
      if ((char)bVar38 < '\0') goto LAB_1400257a5;
LAB_140025315:
      auVar71._0_4_ = fVar87 - fVar92 * fVar111;
      auVar71._4_4_ = fVar61 - fVar99 * fVar120;
      auVar71._8_4_ = fVar91 - fVar100 * fVar124;
      auVar71._12_4_ = fVar62 - fVar102 * fVar128;
      if ((bVar38 & 1) == 0) goto LAB_140025321;
LAB_1400257c3:
      *(int *)(param_1 + 4 + (longlong)auVar143._0_4_) = auVar71._0_4_;
      if ((bVar38 & 2) != 0) goto LAB_1400257db;
LAB_14002532f:
      if ((bVar38 & 4) == 0) goto LAB_140025338;
LAB_1400257f0:
      uVar11 = extractps(auVar71,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._8_4_) = uVar11;
      if ((char)bVar38 < '\0') goto LAB_140025807;
LAB_140025343:
      auVar56._0_4_ = fVar104 - fVar92 * fVar86;
      auVar56._4_4_ = fVar107 - fVar99 * fVar79;
      auVar56._8_4_ = fVar108 - fVar100 * fVar65;
      auVar56._12_4_ = fVar117 - fVar102 * fVar66;
    }
    if ((bVar38 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar143._0_4_) = auVar56._0_4_;
    }
    if ((bVar38 & 2) != 0) {
      uVar11 = extractps(auVar56,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._4_4_) = uVar11;
    }
    if ((bVar38 & 4) != 0) {
      uVar11 = extractps(auVar56,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._8_4_) = uVar11;
    }
    if ((char)bVar38 < '\0') {
      uVar11 = extractps(auVar56,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._12_4_) = uVar11;
    }
    if ((bVar38 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar143._0_4_) = fVar121;
    }
    if ((bVar38 & 2) != 0) {
      uVar11 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._4_4_) = uVar11;
    }
    if ((bVar38 & 4) != 0) {
      uVar11 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._8_4_) = uVar11;
    }
    iVar17 = CONCAT31((int3)((uint)iVar39 >> 8),bVar38);
    if ((char)bVar38 < '\0') {
      uVar11 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._12_4_) = uVar11;
      iVar17 = auVar143._12_4_;
    }
  }
  auVar148._0_4_ = -(uint)(fVar136 != 0.0 && bVar12);
  auVar148._4_4_ = -(uint)(fVar137 != 0.0 && bVar13);
  auVar148._8_4_ = -(uint)(fVar138 != 0.0 && bVar14);
  auVar148._12_4_ = -(uint)(fVar139 != 0.0 && bVar15);
  iVar39 = movmskps(iVar17,auVar148);
  iVar17 = 0;
  if (iVar39 == 0) goto LAB_1400254bb;
  bVar38 = (char)((char)iVar39 << 4) >> 4;
  fVar80 = fVar80 * fVar136 * fVar155;
  fVar89 = fVar89 * fVar137 * fVar156;
  fVar101 = fVar101 * fVar138 * fVar157;
  fVar103 = fVar103 * fVar139 * fVar134;
  auVar149._0_4_ = (float)local_278._0_4_ + fVar80 * fVar129;
  auVar149._4_4_ = (float)local_278._4_4_ + fVar89 * fVar133;
  auVar149._8_4_ = fStack_270 + fVar101 * fVar110;
  auVar149._12_4_ = fStack_26c + fVar103 * fVar119;
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + auVar96._0_4_) = auVar149._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar149,1);
    *(undefined8 *)(param_1 + auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar149,2);
    *(undefined8 *)(param_1 + auVar96._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar149,3);
    *(undefined8 *)(param_1 + auVar96._12_4_) = uVar11;
  }
  local_288 = local_288 + fVar80 * fVar111;
  auVar57._4_4_ = fStack_284 + fVar89 * fVar120;
  auVar57._0_4_ = local_288;
  auVar57._8_4_ = fStack_280 + fVar101 * fVar124;
  auVar57._12_4_ = fStack_27c + fVar103 * fVar128;
  if ((bVar38 & 1) == 0) {
    if ((bVar38 & 2) == 0) goto LAB_14002545d;
LAB_14002594e:
    uVar11 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._4_4_) = uVar11;
    if ((bVar38 & 4) != 0) goto LAB_140025963;
LAB_140025466:
    if (-1 < (char)bVar38) goto LAB_140025471;
LAB_14002597a:
    uVar11 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._12_4_) = uVar11;
    auVar135._0_4_ = local_298 + fVar80 * fVar86;
    auVar135._4_4_ = fStack_294 + fVar89 * fVar79;
    auVar135._8_4_ = fStack_290 + fVar101 * fVar65;
    auVar135._12_4_ = fStack_28c + fVar103 * fVar66;
  }
  else {
    *(float *)(param_1 + 4 + (longlong)auVar96._0_4_) = local_288;
    if ((bVar38 & 2) != 0) goto LAB_14002594e;
LAB_14002545d:
    if ((bVar38 & 4) == 0) goto LAB_140025466;
LAB_140025963:
    uVar11 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._8_4_) = uVar11;
    if ((char)bVar38 < '\0') goto LAB_14002597a;
LAB_140025471:
    auVar135._0_4_ = local_298 + fVar80 * fVar86;
    auVar135._4_4_ = fStack_294 + fVar89 * fVar79;
    auVar135._8_4_ = fStack_290 + fVar101 * fVar65;
    auVar135._12_4_ = fStack_28c + fVar103 * fVar66;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar96._0_4_) = auVar135._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar135,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar135,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar135,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._12_4_) = uVar11;
  }
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar96._0_4_) = fVar136;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._8_4_) = uVar11;
  }
  iVar17 = CONCAT31((int3)((uint)iVar39 >> 8),bVar38);
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._12_4_) = uVar11;
    iVar17 = auVar96._12_4_;
  }
LAB_1400254bb:
  auVar58._0_4_ = -(uint)(fVar123 != 0.0 && bVar12);
  auVar58._4_4_ = -(uint)(fVar125 != 0.0 && bVar13);
  auVar58._8_4_ = -(uint)(fVar127 != 0.0 && bVar14);
  auVar58._12_4_ = -(uint)(fVar152 != 0.0 && bVar15);
  iVar17 = movmskps(iVar17,auVar58);
  if (iVar17 == 0) {
    return;
  }
  bVar38 = (char)((char)iVar17 << 4) >> 4;
  fVar80 = auVar49._0_4_ * fVar155 * fVar123;
  fVar89 = auVar49._4_4_ * fVar156 * fVar125;
  fVar101 = auVar49._8_4_ * fVar157 * fVar127;
  fVar103 = auVar49._12_4_ * fVar134 * fVar152;
  auVar64._0_4_ = fVar67 + fVar129 * fVar80;
  auVar64._4_4_ = fVar72 + fVar133 * fVar89;
  auVar64._8_4_ = fVar73 + fVar110 * fVar101;
  auVar64._12_4_ = fVar74 + fVar119 * fVar103;
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + auVar83._0_4_) = auVar64._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar64,1);
    *(undefined8 *)(param_1 + auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar64,2);
    *(undefined8 *)(param_1 + auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar64,3);
    *(undefined8 *)(param_1 + auVar83._12_4_) = uVar11;
    auVar59._0_4_ = local_2a8 + fVar111 * fVar80;
    auVar59._4_4_ = fStack_2a4 + fVar120 * fVar89;
    auVar59._8_4_ = fStack_2a0 + fVar124 * fVar101;
    auVar59._12_4_ = fStack_29c + fVar128 * fVar103;
  }
  else {
    auVar59._0_4_ = local_2a8 + fVar111 * fVar80;
    auVar59._4_4_ = fStack_2a4 + fVar120 * fVar89;
    auVar59._8_4_ = fStack_2a0 + fVar124 * fVar101;
    auVar59._12_4_ = fStack_29c + fVar128 * fVar103;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar83._0_4_) = auVar59._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar59,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar59,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar59,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._12_4_) = uVar11;
    auVar106._0_4_ = fVar158 + fVar80 * fVar86;
    auVar106._4_4_ = fVar159 + fVar89 * fVar79;
    auVar106._8_4_ = fVar160 + fVar101 * fVar65;
    auVar106._12_4_ = fVar161 + fVar103 * fVar66;
  }
  else {
    auVar106._0_4_ = fVar158 + fVar80 * fVar86;
    auVar106._4_4_ = fVar159 + fVar89 * fVar79;
    auVar106._8_4_ = fVar160 + fVar101 * fVar65;
    auVar106._12_4_ = fVar161 + fVar103 * fVar66;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar83._0_4_) = auVar106._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar106,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar106,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._12_4_) = uVar11;
  }
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar83._0_4_) = fVar123;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._12_4_) = uVar11;
  }
  return;
}

// ApplyAxialSpringConstraints_sse4 @ 140025cd0

/* WARNING: Removing unreachable block (ram,0x000140027386) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte bVar27;
  int iVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  longlong lVar39;
  longlong lVar40;
  bool bVar41;
  int iVar42;
  float fVar43;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar56;
  float fVar64;
  float fVar65;
  undefined1 auVar57 [16];
  float fVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  float fVar74;
  float fVar76;
  undefined1 auVar69 [16];
  float fVar75;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar80;
  float fVar83;
  float fVar84;
  undefined1 in_XMM3 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar85;
  float fVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 in_XMM4 [16];
  undefined1 auVar87 [16];
  float fVar93;
  float fVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  uint uVar105;
  float fVar108;
  float fVar110;
  undefined1 auVar106 [16];
  uint uVar109;
  uint uVar111;
  float fVar112;
  uint uVar113;
  undefined1 auVar107 [16];
  float fVar117;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar118;
  undefined1 auVar116 [16];
  float fVar119;
  float fVar123;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar125;
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
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar142;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar143 [16];
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  float fVar152;
  uint uVar153;
  float fVar154;
  float fVar157;
  undefined1 auVar155 [16];
  float fVar158;
  undefined1 auVar156 [16];
  float fVar159;
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  uVar17 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  if ((int)(uVar17 & 0xfffffffc) < 1) {
    uVar38 = 0;
  }
  else {
    piVar18 = (int *)(param_2 + 0x20);
    uVar38 = 0;
    uVar148 = 0;
    do {
      auVar126 = *(undefined1 (*) [16])(piVar18 + -8);
      auVar135 = *(undefined1 (*) [16])(piVar18 + -4);
      uVar55 = auVar135._0_4_;
      auVar95._4_4_ = uVar55;
      auVar95._0_4_ = uVar55;
      auVar95._8_4_ = uVar55;
      auVar95._12_4_ = uVar55;
      auVar101._8_4_ = auVar126._8_4_;
      auVar101._12_4_ = auVar126._12_4_;
      auVar57._4_4_ = auVar101._12_4_;
      auVar57._0_4_ = auVar126._0_4_;
      auVar57._8_4_ = auVar126._4_4_;
      auVar57._12_4_ = auVar101._12_4_;
      auVar69 = pblendw(auVar95,auVar57,0x3f);
      auVar101._0_8_ = auVar126._8_8_;
      auVar57 = pblendw(auVar101,auVar135,0xc);
      lVar29 = (longlong)(auVar69._8_4_ << 4);
      lVar25 = (longlong)(auVar69._12_4_ * 0x10);
      lVar21 = (longlong)(auVar135._12_4_ << 4);
      lVar32 = (longlong)(piVar18[2] << 4);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar25),0x10
                        );
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar95 = insertps(auVar69,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                         *(undefined4 *)(param_1 + 4 + lVar25),0x10);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar114 = insertps(auVar69,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar69 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar25),0x10);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar69 = insertps(auVar69,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      lVar24 = (longlong)(auVar57._0_4_ << 4);
      lVar37 = (longlong)(auVar57._4_4_ * 0x10);
      lVar36 = (longlong)(*piVar18 << 4);
      lVar22 = (longlong)(piVar18[3] << 4);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + lVar24)),*(undefined4 *)(param_1 + lVar37),0x10
                        );
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + lVar36),0x20);
      auVar106 = insertps(auVar57,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar24)),
                         *(undefined4 *)(param_1 + 4 + lVar37),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar36),0x20);
      auVar87 = insertps(auVar57,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar57 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar24)),
                         *(undefined4 *)(param_1 + 8 + lVar37),0x10);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar36),0x20);
      auVar57 = insertps(auVar57,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      iVar42 = auVar126._0_4_ << 4;
      lVar19 = (longlong)iVar42;
      lVar40 = (longlong)(auVar101._12_4_ * 0x10);
      lVar39 = (longlong)(auVar135._8_4_ << 4);
      lVar34 = (longlong)(piVar18[1] << 4);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar40),
                          0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + lVar39),0x20);
      auVar127 = insertps(auVar126,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                          *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar101 = insertps(auVar126,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar126 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                          *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar135 = insertps(auVar126,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      auVar126 = *(undefined1 (*) [16])(param_3 + (ulonglong)uVar148);
      fVar142 = auVar126._0_4_;
      fVar144 = auVar126._4_4_;
      fVar146 = auVar126._12_4_;
      fVar104 = auVar106._0_4_;
      fVar108 = auVar106._4_4_;
      fVar110 = auVar106._8_4_;
      fVar112 = auVar106._12_4_;
      fVar125 = auVar87._0_4_;
      fVar88 = auVar87._4_4_;
      fVar90 = auVar87._8_4_;
      fVar93 = auVar87._12_4_;
      fVar67 = auVar69._0_4_;
      fVar119 = auVar57._0_4_;
      fVar74 = auVar69._4_4_;
      fVar123 = auVar57._4_4_;
      fVar76 = auVar69._8_4_;
      fVar78 = auVar69._12_4_;
      fVar83 = auVar57._8_4_;
      fVar124 = auVar57._12_4_;
      fVar145 = auVar126._8_4_;
      auVar137._0_4_ = auVar127._0_4_ - ((auVar95._0_4_ - fVar104) * fVar142 + fVar104);
      auVar137._4_4_ = auVar127._4_4_ - ((auVar95._4_4_ - fVar108) * fVar144 + fVar108);
      auVar137._8_4_ = auVar127._8_4_ - ((auVar95._8_4_ - fVar110) * fVar145 + fVar110);
      auVar137._12_4_ = auVar127._12_4_ - ((auVar95._12_4_ - fVar112) * fVar146 + fVar112);
      auVar140._0_4_ = auVar101._0_4_ - ((auVar114._0_4_ - fVar125) * fVar142 + fVar125);
      auVar140._4_4_ = auVar101._4_4_ - ((auVar114._4_4_ - fVar88) * fVar144 + fVar88);
      auVar140._8_4_ = auVar101._8_4_ - ((auVar114._8_4_ - fVar90) * fVar145 + fVar90);
      auVar140._12_4_ = auVar101._12_4_ - ((auVar114._12_4_ - fVar93) * fVar146 + fVar93);
      fVar147 = auVar135._0_4_;
      auVar133._0_4_ = fVar147 - ((fVar67 - fVar119) * fVar142 + fVar119);
      fVar84 = auVar135._4_4_;
      auVar133._4_4_ = fVar84 - ((fVar74 - fVar123) * fVar144 + fVar123);
      fVar86 = auVar135._8_4_;
      fVar92 = auVar135._12_4_;
      auVar133._8_4_ = fVar86 - ((fVar76 - fVar83) * fVar145 + fVar83);
      auVar133._12_4_ = fVar92 - ((fVar78 - fVar124) * fVar146 + fVar124);
      auVar135._0_4_ =
           auVar133._0_4_ * auVar133._0_4_ +
           auVar140._0_4_ * auVar140._0_4_ + auVar137._0_4_ * auVar137._0_4_;
      auVar135._4_4_ =
           auVar133._4_4_ * auVar133._4_4_ +
           auVar140._4_4_ * auVar140._4_4_ + auVar137._4_4_ * auVar137._4_4_;
      auVar135._8_4_ =
           auVar133._8_4_ * auVar133._8_4_ +
           auVar140._8_4_ * auVar140._8_4_ + auVar137._8_4_ * auVar137._8_4_;
      auVar135._12_4_ =
           auVar133._12_4_ * auVar133._12_4_ +
           auVar140._12_4_ * auVar140._12_4_ + auVar137._12_4_ * auVar137._12_4_;
      auVar156._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar142;
      auVar156._4_4_ = _UNK_15076b1f4 - fVar144;
      auVar156._8_4_ = _UNK_15076b1f8 - fVar145;
      auVar156._12_4_ = _UNK_15076b1fc - fVar146;
      auVar126 = maxps(auVar126,auVar156);
      auVar155._0_4_ = auVar126._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar155._4_4_ = auVar126._4_4_ + _UNK_15076b1f4;
      auVar155._8_4_ = auVar126._8_4_ + _UNK_15076b1f8;
      auVar155._12_4_ = auVar126._12_4_ + _UNK_15076b1fc;
      auVar155 = divps(___xmm_40000000400000004000000040000000,auVar155);
      auVar87 = sqrtps(auVar106,auVar135);
      pfVar1 = (float *)(param_4 + (ulonglong)uVar148);
      fVar43 = auVar87._0_4_ - *pfVar1;
      fVar52 = auVar87._4_4_ - pfVar1[1];
      fVar53 = auVar87._8_4_ - pfVar1[2];
      fVar54 = auVar87._12_4_ - pfVar1[3];
      auVar57 = divps(auVar137,auVar87);
      auVar69 = divps(auVar140,auVar87);
      auVar126 = divps(auVar133,auVar87);
      uVar150 = *(uint *)(param_1 + 0xc + lVar29);
      uVar153 = *(uint *)(param_1 + 0xc + lVar25);
      auVar135 = insertps(ZEXT416(uVar150),ZEXT416(uVar153),0x10);
      uVar2 = *(uint *)(param_1 + 0xc + lVar21);
      auVar135 = insertps(auVar135,ZEXT416(uVar2),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar32);
      in_XMM4 = insertps(auVar135,ZEXT416(uVar3),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar24);
      uVar5 = *(uint *)(param_1 + 0xc + lVar37);
      auVar135 = insertps(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar36);
      auVar135 = insertps(auVar135,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar22);
      auVar135 = insertps(auVar135,ZEXT416(uVar7),0x30);
      fVar151 = auVar135._0_4_;
      fVar154 = auVar135._4_4_;
      fVar149 = auVar135._8_4_;
      fVar152 = auVar135._12_4_;
      fVar85 = in_XMM4._0_4_;
      fVar89 = in_XMM4._4_4_;
      fVar91 = in_XMM4._8_4_;
      fVar94 = in_XMM4._12_4_;
      fVar68 = fVar142 * fVar85 + auVar156._0_4_ * fVar151;
      fVar75 = fVar144 * fVar89 + auVar156._4_4_ * fVar154;
      fVar77 = fVar145 * fVar91 + auVar156._8_4_ * fVar149;
      fVar79 = fVar146 * fVar94 + auVar156._12_4_ * fVar152;
      uVar8 = *(uint *)(param_1 + 0xc + lVar19);
      uVar9 = *(uint *)(param_1 + 0xc + lVar40);
      auVar135 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar39);
      auVar135 = insertps(auVar135,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar34);
      auVar135 = insertps(auVar135,ZEXT416(uVar11),0x30);
      fVar56 = auVar135._0_4_;
      auVar115._0_4_ = fVar68 + fVar56;
      fVar64 = auVar135._4_4_;
      auVar115._4_4_ = fVar75 + fVar64;
      fVar65 = auVar135._8_4_;
      auVar115._8_4_ = fVar77 + fVar65;
      fVar66 = auVar135._12_4_;
      auVar115._12_4_ = fVar79 + fVar66;
      auVar106._0_4_ = auVar57._0_4_ * fVar43 * param_5;
      auVar106._4_4_ = auVar57._4_4_ * fVar52 * param_5;
      auVar106._8_4_ = auVar57._8_4_ * fVar53 * param_5;
      auVar106._12_4_ = auVar57._12_4_ * fVar54 * param_5;
      auVar141._0_4_ = auVar69._0_4_ * fVar43 * param_5;
      auVar141._4_4_ = auVar69._4_4_ * fVar52 * param_5;
      auVar141._8_4_ = auVar69._8_4_ * fVar53 * param_5;
      auVar141._12_4_ = auVar69._12_4_ * fVar54 * param_5;
      auVar69._0_4_ = fVar43 * auVar126._0_4_ * param_5;
      auVar69._4_4_ = fVar52 * auVar126._4_4_ * param_5;
      auVar69._8_4_ = fVar53 * auVar126._8_4_ * param_5;
      auVar69._12_4_ = fVar54 * auVar126._12_4_ * param_5;
      in_XMM3 = divps(auVar106,auVar115);
      auVar57 = divps(auVar141,auVar115);
      auVar135 = divps(auVar69,auVar115);
      uVar105 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                       fVar56 == 0.0 && fVar68 == 0.0);
      uVar109 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4 || fVar64 == 0.0 && fVar75 == 0.0);
      uVar111 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8 || fVar65 == 0.0 && fVar77 == 0.0);
      uVar113 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc || fVar66 == 0.0 && fVar79 == 0.0);
      fVar43 = (float)(~uVar105 & in_XMM3._0_4_);
      fVar52 = (float)(~uVar109 & in_XMM3._4_4_);
      auVar126._0_8_ = CONCAT44(fVar52,fVar43);
      auVar126._8_4_ = (float)(~uVar111 & in_XMM3._8_4_);
      auVar126._12_4_ = (float)(~uVar113 & in_XMM3._12_4_);
      fVar77 = (float)(~uVar105 & auVar57._0_4_);
      fVar79 = (float)(~uVar109 & auVar57._4_4_);
      fVar117 = (float)(~uVar111 & auVar57._8_4_);
      fVar118 = (float)(~uVar113 & auVar57._12_4_);
      fVar53 = (float)(~uVar105 & auVar135._0_4_);
      fVar54 = (float)(~uVar109 & auVar135._4_4_);
      fVar68 = (float)(~uVar111 & auVar135._8_4_);
      fVar75 = (float)(~uVar113 & auVar135._12_4_);
      auVar87._4_4_ = -(uint)(0.0 < fVar64);
      auVar87._0_4_ = -(uint)(0.0 < fVar56);
      auVar87._8_4_ = -(uint)(0.0 < fVar65);
      auVar87._12_4_ = -(uint)(0.0 < fVar66);
      iVar28 = movmskps(uVar148,auVar87);
      fVar157 = auVar155._0_4_;
      fVar159 = auVar155._4_4_;
      fVar80 = auVar155._8_4_;
      fVar158 = auVar155._12_4_;
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        fVar56 = fVar56 * fVar157;
        fVar64 = fVar64 * fVar159;
        fVar65 = fVar65 * fVar80;
        fVar66 = fVar66 * fVar158;
        auVar128._0_4_ = auVar127._0_4_ - fVar56 * fVar43;
        auVar128._4_4_ = auVar127._4_4_ - fVar64 * fVar52;
        auVar128._8_4_ = auVar127._8_4_ - fVar65 * auVar126._8_4_;
        auVar128._12_4_ = auVar127._12_4_ - fVar66 * auVar126._12_4_;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar19) = auVar128._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar128,1);
          *(undefined8 *)(param_1 + lVar40) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar128,2);
          *(undefined8 *)(param_1 + lVar39) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar128,3);
          *(undefined8 *)(param_1 + lVar34) = uVar12;
        }
        auVar127._0_4_ = auVar101._0_4_ - fVar56 * fVar77;
        auVar127._4_4_ = auVar101._4_4_ - fVar64 * fVar79;
        auVar127._8_4_ = auVar101._8_4_ - fVar65 * fVar117;
        auVar127._12_4_ = auVar101._12_4_ - fVar66 * fVar118;
        if ((bVar27 & 1) == 0) {
          if ((bVar27 & 2) == 0) goto LAB_14002626a;
LAB_14002652f:
          uVar12 = extractps(auVar127,1);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140026541;
LAB_140026273:
          if (-1 < (char)bVar27) goto LAB_14002627c;
LAB_140026553:
          uVar12 = extractps(auVar127,3);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar12;
          auVar136._0_4_ = fVar147 - fVar56 * fVar53;
          auVar136._4_4_ = fVar84 - fVar64 * fVar54;
          auVar136._8_4_ = fVar86 - fVar65 * fVar68;
          auVar136._12_4_ = fVar92 - fVar66 * fVar75;
        }
        else {
          *(float *)(param_1 + 4 + lVar19) = auVar127._0_4_;
          if ((bVar27 & 2) != 0) goto LAB_14002652f;
LAB_14002626a:
          if ((bVar27 & 4) == 0) goto LAB_140026273;
LAB_140026541:
          uVar12 = extractps(auVar127,2);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_140026553;
LAB_14002627c:
          auVar136._0_4_ = fVar147 - fVar56 * fVar53;
          auVar136._4_4_ = fVar84 - fVar64 * fVar54;
          auVar136._8_4_ = fVar86 - fVar65 * fVar68;
          auVar136._12_4_ = fVar92 - fVar66 * fVar75;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar19) = auVar136._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar136,1);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar136,2);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar136,3);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar8;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar9;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar10;
        }
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar34) = uVar11;
        }
      }
      auVar58._0_4_ = -(uint)(fVar85 != 0.0);
      auVar58._4_4_ = -(uint)(fVar89 != 0.0);
      auVar58._8_4_ = -(uint)(fVar91 != 0.0);
      auVar58._12_4_ = -(uint)(fVar94 != 0.0);
      iVar28 = movmskps(iVar42,auVar58);
      uVar55 = 0;
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        uVar55 = CONCAT31((int3)((uint)iVar28 >> 8),bVar27);
        in_XMM4._0_4_ = fVar85 * fVar157;
        in_XMM4._4_4_ = fVar89 * fVar159;
        in_XMM4._8_4_ = fVar91 * fVar80;
        in_XMM4._12_4_ = fVar94 * fVar158;
        fVar142 = fVar142 * in_XMM4._0_4_;
        fVar144 = fVar144 * in_XMM4._4_4_;
        fVar145 = fVar145 * in_XMM4._8_4_;
        fVar146 = fVar146 * in_XMM4._12_4_;
        auVar96._0_4_ = auVar95._0_4_ + fVar142 * fVar43;
        auVar96._4_4_ = auVar95._4_4_ + fVar144 * fVar52;
        auVar96._8_4_ = auVar95._8_4_ + fVar145 * auVar126._8_4_;
        auVar96._12_4_ = auVar95._12_4_ + fVar146 * auVar126._12_4_;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar29) = auVar96._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar96,1);
          *(undefined8 *)(param_1 + lVar25) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar96,2);
          *(undefined8 *)(param_1 + lVar21) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar96,3);
          *(undefined8 *)(param_1 + lVar32) = uVar12;
        }
        fVar43 = auVar114._0_4_ + fVar142 * fVar77;
        auVar44._4_4_ = auVar114._4_4_ + fVar144 * fVar79;
        auVar44._0_4_ = fVar43;
        auVar44._8_4_ = auVar114._8_4_ + fVar145 * fVar117;
        auVar44._12_4_ = auVar114._12_4_ + fVar146 * fVar118;
        if ((bVar27 & 1) == 0) {
          if ((bVar27 & 2) == 0) goto LAB_140026376;
LAB_140026680:
          uVar12 = extractps(auVar44,1);
          *(undefined8 *)(param_1 + 4 + lVar25) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140026695;
LAB_140026383:
          if (-1 < (char)bVar27) goto LAB_14002638b;
LAB_1400266a6:
          uVar12 = extractps(auVar44,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar12;
          auVar114._0_4_ = fVar67 + fVar142 * fVar53;
          auVar114._4_4_ = fVar74 + fVar144 * fVar54;
          auVar114._8_4_ = fVar76 + fVar145 * fVar68;
          auVar114._12_4_ = fVar78 + fVar146 * fVar75;
        }
        else {
          *(float *)(param_1 + 4 + lVar29) = fVar43;
          if ((bVar27 & 2) != 0) goto LAB_140026680;
LAB_140026376:
          if ((bVar27 & 4) == 0) goto LAB_140026383;
LAB_140026695:
          uVar12 = extractps(auVar44,2);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_1400266a6;
LAB_14002638b:
          auVar114._0_4_ = fVar67 + fVar142 * fVar53;
          auVar114._4_4_ = fVar74 + fVar144 * fVar54;
          auVar114._8_4_ = fVar76 + fVar145 * fVar68;
          auVar114._12_4_ = fVar78 + fVar146 * fVar75;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar29) = auVar114._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 8 + lVar25) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar150;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar153;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar2;
        }
        in_XMM3 = auVar126;
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar3;
        }
      }
      auVar59._0_4_ = -(uint)(fVar151 != 0.0);
      auVar59._4_4_ = -(uint)(fVar154 != 0.0);
      auVar59._8_4_ = -(uint)(fVar149 != 0.0);
      auVar59._12_4_ = -(uint)(fVar152 != 0.0);
      iVar28 = movmskps(uVar55,auVar59);
      if (iVar28 != 0) {
        bVar27 = (char)((char)iVar28 << 4) >> 4;
        fVar142 = auVar156._0_4_ * fVar151 * fVar157;
        fVar144 = auVar156._4_4_ * fVar154 * fVar159;
        fVar146 = auVar156._8_4_ * fVar149 * fVar80;
        fVar43 = auVar156._12_4_ * fVar152 * fVar158;
        auVar70._0_4_ = fVar104 + auVar126._0_4_ * fVar142;
        auVar70._4_4_ = fVar108 + auVar126._4_4_ * fVar144;
        auVar70._8_4_ = fVar110 + auVar126._8_4_ * fVar146;
        auVar70._12_4_ = fVar112 + auVar126._12_4_ * fVar43;
        if ((bVar27 & 1) != 0) {
          *(float *)(param_1 + lVar24) = auVar70._0_4_;
        }
        if ((bVar27 & 2) == 0) {
          if ((bVar27 & 4) == 0) goto LAB_140026453;
LAB_140026771:
          uVar12 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + lVar36) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_140026781;
LAB_14002645b:
          auVar60._0_4_ = fVar125 + fVar77 * fVar142;
          auVar60._4_4_ = fVar88 + fVar79 * fVar144;
          auVar60._8_4_ = fVar90 + fVar117 * fVar146;
          auVar60._12_4_ = fVar93 + fVar118 * fVar43;
          if ((bVar27 & 1) == 0) goto LAB_14002646c;
LAB_14002679f:
          *(int *)(param_1 + 4 + lVar24) = auVar60._0_4_;
          if ((bVar27 & 2) != 0) goto LAB_1400267af;
LAB_140026475:
          if ((bVar27 & 4) == 0) goto LAB_14002647e;
LAB_1400267c1:
          uVar12 = extractps(auVar60,2);
          *(undefined8 *)(param_1 + 4 + lVar36) = uVar12;
          if ((char)bVar27 < '\0') goto LAB_1400267d2;
LAB_140026486:
          in_XMM3._0_4_ = fVar142 * fVar53;
          in_XMM3._4_4_ = fVar144 * fVar54;
          in_XMM3._8_4_ = fVar146 * fVar68;
          in_XMM3._12_4_ = fVar43 * fVar75;
          auVar45._0_4_ = fVar119 + in_XMM3._0_4_;
          auVar45._4_4_ = fVar123 + in_XMM3._4_4_;
          auVar45._8_4_ = fVar83 + in_XMM3._8_4_;
          auVar45._12_4_ = fVar124 + in_XMM3._12_4_;
        }
        else {
          uVar12 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + lVar37) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_140026771;
LAB_140026453:
          if (-1 < (char)bVar27) goto LAB_14002645b;
LAB_140026781:
          uVar12 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + lVar22) = uVar12;
          auVar60._0_4_ = fVar125 + fVar77 * fVar142;
          auVar60._4_4_ = fVar88 + fVar79 * fVar144;
          auVar60._8_4_ = fVar90 + fVar117 * fVar146;
          auVar60._12_4_ = fVar93 + fVar118 * fVar43;
          if ((bVar27 & 1) != 0) goto LAB_14002679f;
LAB_14002646c:
          if ((bVar27 & 2) == 0) goto LAB_140026475;
LAB_1400267af:
          uVar12 = extractps(auVar60,1);
          *(undefined8 *)(param_1 + 4 + lVar37) = uVar12;
          if ((bVar27 & 4) != 0) goto LAB_1400267c1;
LAB_14002647e:
          if (-1 < (char)bVar27) goto LAB_140026486;
LAB_1400267d2:
          uVar12 = extractps(auVar60,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar12;
          in_XMM3._0_4_ = fVar142 * fVar53;
          in_XMM3._4_4_ = fVar144 * fVar54;
          in_XMM3._8_4_ = fVar146 * fVar68;
          in_XMM3._12_4_ = fVar43 * fVar75;
          auVar45._0_4_ = fVar119 + in_XMM3._0_4_;
          auVar45._4_4_ = fVar123 + in_XMM3._4_4_;
          auVar45._8_4_ = fVar83 + in_XMM3._8_4_;
          auVar45._12_4_ = fVar124 + in_XMM3._12_4_;
        }
        if ((bVar27 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar24) = auVar45._0_4_;
        }
        if ((bVar27 & 2) != 0) {
          uVar12 = extractps(auVar45,1);
          *(undefined8 *)(param_1 + 8 + lVar37) = uVar12;
        }
        if ((bVar27 & 4) != 0) {
          uVar12 = extractps(auVar45,2);
          *(undefined8 *)(param_1 + 8 + lVar36) = uVar12;
        }
        if ((char)bVar27 < '\0') {
          uVar12 = extractps(auVar45,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar12;
        }
        if ((bVar27 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar4;
        }
        if ((bVar27 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar5;
        }
        if ((bVar27 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar6;
        }
        if ((char)bVar27 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar7;
        }
      }
      uVar148 = uVar148 + 0x10;
      piVar18 = piVar18 + 0xc;
      uVar38 = uVar38 + 4;
    } while ((int)uVar38 < (int)(uVar17 & 0xfffffffc));
  }
  if ((int)param_6 <= (int)uVar38) {
    return;
  }
  bVar13 = (int)(uVar38 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6;
  auVar120._0_4_ = -(uint)bVar13;
  bVar14 = (int)(uVar38 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6;
  auVar120._4_4_ = -(uint)bVar14;
  bVar15 = (int)(uVar38 | _UNK_150631e08) < (int)param_6;
  auVar120._8_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar38 | _UNK_150631e0c) < (int)param_6;
  auVar120._12_4_ = -(uint)bVar16;
  pauVar23 = (undefined1 (*) [16])(param_2 + (ulonglong)uVar38 * 0xc);
  uVar17 = movmskps(uVar38 * 3,auVar120);
  bVar27 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    auVar126 = *pauVar23;
    auVar135 = pauVar23[1];
    uVar55 = auVar135._0_4_;
    auVar72._4_4_ = uVar55;
    auVar72._0_4_ = uVar55;
    auVar72._8_4_ = uVar55;
    auVar72._12_4_ = uVar55;
    uVar55 = auVar126._12_4_;
    auVar130._0_8_ = CONCAT44(uVar55,auVar126._0_4_);
    auVar130._8_4_ = auVar126._4_4_;
    auVar130._12_4_ = uVar55;
    auVar57 = pblendw(auVar72,auVar130,0x3f);
    auVar98._0_8_ = auVar126._8_8_;
    auVar98._8_4_ = auVar126._8_4_;
    auVar98._12_4_ = uVar55;
    auVar126 = pblendw(auVar98,auVar135,0xc);
    auVar61._0_8_ = CONCAT44(*(undefined4 *)(pauVar23[2] + 4),auVar135._8_4_);
    auVar61._8_4_ = auVar135._12_4_;
    auVar61._12_4_ = *(undefined4 *)(pauVar23[2] + 8);
    auVar129._8_8_ = auVar61._0_8_;
    auVar129._0_8_ = auVar130._0_8_;
    auVar71._8_8_ = auVar61._8_8_;
    auVar71._0_8_ = auVar57._8_8_;
    auVar97._0_8_ = auVar126._0_8_;
    auVar97._8_4_ = *(undefined4 *)pauVar23[2];
    auVar97._12_4_ = *(undefined4 *)(pauVar23[2] + 0xc);
    pauVar23 = (undefined1 (*) [16])(param_3 + (int)(uVar38 << 2));
    pauVar30 = (undefined1 (*) [16])(param_4 + (int)(uVar38 << 2));
LAB_140026a7b:
    in_XMM4 = *pauVar23;
    in_XMM3 = *pauVar30;
  }
  else {
    auVar46._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar120._0_4_;
    auVar46._4_4_ = _UNK_150b50da4 & auVar120._4_4_;
    auVar46._8_4_ = _UNK_150b50da8 & auVar120._8_4_;
    auVar46._12_4_ = _UNK_150b50dac & auVar120._12_4_;
    lVar19 = extractps(auVar46,1);
    lVar21 = extractps(auVar46,2);
    lVar22 = extractps(auVar46,3);
    auVar129._4_4_ = *(undefined4 *)(*pauVar23 + lVar19);
    auVar129._0_4_ = *(undefined4 *)*pauVar23;
    auVar129._12_4_ = *(undefined4 *)(*pauVar23 + lVar22);
    auVar129._8_4_ = *(undefined4 *)(*pauVar23 + lVar21);
    auVar126 = ___xmm_000000280000001c0000001000000004 & auVar120;
    auVar71._4_4_ = *(undefined4 *)(*pauVar23 + auVar126._4_4_);
    auVar71._0_4_ = *(undefined4 *)(*pauVar23 + auVar126._0_4_);
    auVar71._12_4_ = *(undefined4 *)(*pauVar23 + auVar126._12_4_);
    auVar71._8_4_ = *(undefined4 *)(*pauVar23 + auVar126._8_4_);
    auVar126 = ___xmm_0000002c000000200000001400000008 & auVar120;
    auVar97._4_4_ = *(undefined4 *)(*pauVar23 + auVar126._4_4_);
    auVar97._0_4_ = *(undefined4 *)(*pauVar23 + auVar126._0_4_);
    auVar97._12_4_ = *(undefined4 *)(*pauVar23 + auVar126._12_4_);
    auVar97._8_4_ = *(undefined4 *)(*pauVar23 + auVar126._8_4_);
    pauVar23 = (undefined1 (*) [16])(param_3 + (int)(uVar38 << 2));
    pauVar30 = (undefined1 (*) [16])(param_4 + (int)(uVar38 << 2));
    if ((~bVar27 & 9) == 0) goto LAB_140026a7b;
    if ((uVar17 & 1) != 0) {
      in_XMM4 = ZEXT416(*(uint *)*pauVar23);
    }
    if ((uVar17 & 2) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 4),0x10);
    }
    if ((uVar17 & 4) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 8),0x20);
    }
    if ((uVar17 & 8) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar23 + 0xc),0x30);
    }
    if ((uVar17 & 1) != 0) {
      in_XMM3 = ZEXT416(*(uint *)*pauVar30);
    }
    if ((uVar17 & 2) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 4),0x10);
    }
    if ((uVar17 & 4) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 8),0x20);
    }
    if ((uVar17 & 8) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(*pauVar30 + 0xc),0x30);
    }
  }
  auVar73._0_4_ = auVar71._0_4_ << 4;
  auVar73._4_4_ = auVar71._4_4_ << 4;
  auVar73._8_4_ = auVar71._8_4_ << 4;
  auVar73._12_4_ = auVar71._12_4_ << 4;
  auVar135 = auVar120 & auVar73;
  lVar19 = param_1 + auVar135._0_4_;
  lVar21 = param_1 + auVar135._4_4_;
  lVar22 = param_1 + auVar135._8_4_;
  lVar24 = param_1 + auVar135._12_4_;
  auVar101 = ___xmm_00000004000000040000000400000004 & auVar120;
  auVar87 = ___xmm_00000008000000080000000800000008 & auVar120;
  auVar99._0_4_ = auVar97._0_4_ << 4;
  auVar99._4_4_ = auVar97._4_4_ << 4;
  auVar99._8_4_ = auVar97._8_4_ << 4;
  auVar99._12_4_ = auVar97._12_4_ << 4;
  auVar57 = auVar120 & auVar99;
  lVar40 = (longlong)auVar57._0_4_;
  auVar126 = ZEXT416(*(uint *)(param_1 + auVar135._0_4_));
  auVar131._0_4_ = auVar129._0_4_ << 4;
  auVar131._4_4_ = auVar129._4_4_ << 4;
  auVar131._8_4_ = auVar129._8_4_ << 4;
  auVar131._12_4_ = auVar129._12_4_ << 4;
  auVar69 = auVar120 & auVar131;
  uVar26 = (ulonglong)auVar101._4_4_;
  uVar33 = (ulonglong)auVar101._0_4_;
  uVar35 = (ulonglong)auVar87._0_4_;
  lVar25 = param_1 + lVar40;
  lVar29 = param_1 + auVar57._4_4_;
  lVar32 = param_1 + auVar57._8_4_;
  lVar34 = param_1 + auVar57._12_4_;
  lVar36 = param_1 + auVar69._0_4_;
  lVar37 = param_1 + auVar69._4_4_;
  lVar39 = param_1 + auVar69._8_4_;
  lVar31 = auVar69._12_4_ + param_1;
  bVar41 = (bVar27 & 2) != 0;
  uVar17 = auVar87._4_4_;
  if (bVar41) {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._4_4_),0x10);
    auVar155 = insertps(ZEXT416(*(uint *)(uVar33 + lVar19)),*(undefined4 *)(uVar26 + lVar21),0x10);
    auVar95 = insertps(ZEXT416(*(uint *)(uVar35 + lVar19)),
                       *(undefined4 *)((ulonglong)uVar17 + lVar21),0x10);
    auVar133 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),
                        *(undefined4 *)(param_1 + auVar57._4_4_),0x10);
    auVar137 = insertps(ZEXT416(*(uint *)(uVar33 + lVar25)),*(undefined4 *)(uVar26 + lVar29),0x10);
    auVar106 = insertps(ZEXT416(*(uint *)(uVar35 + lVar25)),
                        *(undefined4 *)((ulonglong)uVar17 + lVar29),0x10);
  }
  else {
    auVar155 = ZEXT416(*(uint *)(uVar33 + lVar19));
    auVar95 = ZEXT416(*(uint *)(uVar35 + lVar19));
    auVar133 = ZEXT416(*(uint *)(param_1 + lVar40));
    auVar137 = ZEXT416(*(uint *)(uVar33 + lVar25));
    auVar106 = ZEXT416(*(uint *)(uVar35 + lVar25));
  }
  auVar114 = ZEXT416(*(uint *)(param_1 + auVar69._0_4_));
  uVar38 = auVar101._8_4_;
  uVar150 = auVar101._12_4_;
  uVar148 = auVar87._8_4_;
  uVar153 = auVar87._12_4_;
  if (bVar41) {
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._4_4_),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar33 + lVar36)),*(undefined4 *)(uVar26 + lVar37),0x10);
    auVar87 = insertps(ZEXT416(*(uint *)(uVar35 + lVar36)),
                       *(undefined4 *)((ulonglong)uVar17 + lVar37),0x10);
  }
  else {
    auVar101 = ZEXT416(*(uint *)(uVar33 + lVar36));
    auVar87 = ZEXT416(*(uint *)(uVar35 + lVar36));
  }
  if ((bVar27 & 4) != 0) {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._8_4_),0x20);
    auVar155 = insertps(auVar155,*(undefined4 *)((ulonglong)uVar38 + lVar22),0x20);
    auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)uVar148 + lVar22),0x20);
    auVar133 = insertps(auVar133,*(undefined4 *)(param_1 + auVar57._8_4_),0x20);
    auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)uVar38 + lVar32),0x20);
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)uVar148 + lVar32),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._8_4_),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar38 + lVar39),0x20);
    auVar87 = insertps(auVar87,*(undefined4 *)((ulonglong)uVar148 + lVar39),0x20);
  }
  if ((char)bVar27 < '\0') {
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar135._12_4_),0x30);
    auVar155 = insertps(auVar155,*(undefined4 *)((ulonglong)uVar150 + lVar24),0x30);
    auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)uVar153 + lVar24),0x30);
  }
  uVar26 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar120._0_4_);
  if ((char)bVar27 < '\0') {
    auVar133 = insertps(auVar133,*(undefined4 *)(param_1 + auVar57._12_4_),0x30);
  }
  uVar35 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar120._4_4_);
  if ((char)bVar27 < '\0') {
    auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)uVar150 + lVar34),0x30);
  }
  bVar41 = (char)bVar27 < '\0';
  uVar33 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar120,8);
  if (bVar41) {
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)uVar153 + lVar34),0x30);
  }
  uVar17 = SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar120,0xc);
  uVar20 = (ulonglong)uVar17;
  auVar156 = insertps(ZEXT416(*(uint *)(uVar26 + lVar19)),*(undefined4 *)(uVar35 + lVar21),0x10);
  auVar57 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar35 + lVar29),0x10);
  auVar135 = insertps(ZEXT416(*(uint *)(uVar26 + lVar36)),*(undefined4 *)(uVar35 + lVar37),0x10);
  if (bVar41) {
    auVar114 = insertps(auVar114,*(undefined4 *)(param_1 + auVar69._12_4_),0x30);
  }
  auVar69 = insertps(auVar156,*(undefined4 *)(uVar33 + lVar22),0x20);
  auVar57 = insertps(auVar57,*(undefined4 *)(uVar33 + lVar32),0x20);
  auVar135 = insertps(auVar135,*(undefined4 *)(uVar33 + lVar39),0x20);
  if (bVar41) {
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar150 + lVar31),0x30);
  }
  auVar69 = insertps(auVar69,*(undefined4 *)(uVar20 + lVar24),0x30);
  auVar57 = insertps(auVar57,*(undefined4 *)(uVar20 + lVar34),0x30);
  auVar135 = insertps(auVar135,*(undefined4 *)(uVar20 + lVar31),0x30);
  if (bVar41) {
    auVar87 = insertps(auVar87,*(undefined4 *)((ulonglong)uVar153 + lVar31),0x30);
  }
  local_248 = auVar126._0_4_;
  fStack_244 = auVar126._4_4_;
  fStack_240 = auVar126._8_4_;
  fStack_23c = auVar126._12_4_;
  fVar76 = auVar133._0_4_;
  fVar77 = auVar133._4_4_;
  fVar78 = auVar133._8_4_;
  fVar79 = auVar133._12_4_;
  local_258 = auVar155._0_4_;
  fStack_254 = auVar155._4_4_;
  fStack_250 = auVar155._8_4_;
  fStack_24c = auVar155._12_4_;
  fVar88 = auVar137._0_4_;
  fVar89 = auVar137._4_4_;
  fVar90 = auVar137._8_4_;
  fVar91 = auVar137._12_4_;
  fVar110 = auVar106._0_4_;
  fVar112 = auVar106._4_4_;
  fVar117 = auVar106._8_4_;
  fVar118 = auVar106._12_4_;
  fVar86 = in_XMM4._0_4_;
  fVar65 = in_XMM4._4_4_;
  fVar92 = in_XMM4._8_4_;
  fVar66 = in_XMM4._12_4_;
  auVar62._0_4_ = auVar114._0_4_ - ((local_248 - fVar76) * fVar86 + fVar76);
  auVar62._4_4_ = auVar114._4_4_ - ((fStack_244 - fVar77) * fVar65 + fVar77);
  auVar62._8_4_ = auVar114._8_4_ - ((fStack_240 - fVar78) * fVar92 + fVar78);
  auVar62._12_4_ = auVar114._12_4_ - ((fStack_23c - fVar79) * fVar66 + fVar79);
  fVar68 = auVar101._0_4_;
  fVar74 = auVar101._4_4_;
  fVar75 = auVar101._12_4_;
  auVar132._0_4_ = fVar68 - ((local_258 - fVar88) * fVar86 + fVar88);
  auVar132._4_4_ = fVar74 - ((fStack_254 - fVar89) * fVar65 + fVar89);
  fVar85 = auVar101._8_4_;
  auVar132._8_4_ = fVar85 - ((fStack_250 - fVar90) * fVar92 + fVar90);
  auVar132._12_4_ = fVar75 - ((fStack_24c - fVar91) * fVar66 + fVar91);
  fVar142 = auVar87._0_4_;
  fVar144 = auVar87._4_4_;
  fVar146 = auVar87._12_4_;
  auVar121._0_4_ = fVar142 - ((auVar95._0_4_ - fVar110) * fVar86 + fVar110);
  auVar121._4_4_ = fVar144 - ((auVar95._4_4_ - fVar112) * fVar65 + fVar112);
  fVar83 = auVar87._8_4_;
  auVar121._8_4_ = fVar83 - ((auVar95._8_4_ - fVar117) * fVar92 + fVar117);
  auVar121._12_4_ = fVar146 - ((auVar95._12_4_ - fVar118) * fVar66 + fVar118);
  auVar81._0_4_ =
       auVar121._0_4_ * auVar121._0_4_ +
       auVar132._0_4_ * auVar132._0_4_ + auVar62._0_4_ * auVar62._0_4_;
  auVar81._4_4_ =
       auVar121._4_4_ * auVar121._4_4_ +
       auVar132._4_4_ * auVar132._4_4_ + auVar62._4_4_ * auVar62._4_4_;
  auVar81._8_4_ =
       auVar121._8_4_ * auVar121._8_4_ +
       auVar132._8_4_ * auVar132._8_4_ + auVar62._8_4_ * auVar62._8_4_;
  auVar81._12_4_ =
       auVar121._12_4_ * auVar121._12_4_ +
       auVar132._12_4_ * auVar132._12_4_ + auVar62._12_4_ * auVar62._12_4_;
  auVar155 = sqrtps(auVar95,auVar81);
  auVar143._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar86;
  auVar143._4_4_ = _UNK_15076b1f4 - fVar65;
  auVar143._8_4_ = _UNK_15076b1f8 - fVar92;
  auVar143._12_4_ = _UNK_15076b1fc - fVar66;
  auVar126 = maxps(in_XMM4,auVar143);
  auVar138._0_4_ = auVar126._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar138._4_4_ = auVar126._4_4_ + _UNK_15076b1f4;
  auVar138._8_4_ = auVar126._8_4_ + _UNK_15076b1f8;
  auVar138._12_4_ = auVar126._12_4_ + _UNK_15076b1fc;
  auVar87 = divps(___xmm_40000000400000004000000040000000,auVar138);
  auVar126 = divps(auVar62,auVar155);
  auVar133 = divps(auVar132,auVar155);
  auVar101 = divps(auVar121,auVar155);
  local_158 = in_XMM3._0_4_;
  fStack_154 = in_XMM3._4_4_;
  fStack_150 = in_XMM3._8_4_;
  fStack_14c = in_XMM3._12_4_;
  local_158 = auVar155._0_4_ - local_158;
  fStack_154 = auVar155._4_4_ - fStack_154;
  fStack_150 = auVar155._8_4_ - fStack_150;
  fStack_14c = auVar155._12_4_ - fStack_14c;
  fVar93 = auVar57._0_4_;
  fVar94 = auVar57._4_4_;
  fVar104 = auVar57._8_4_;
  fVar108 = auVar57._12_4_;
  fVar149 = auVar69._0_4_;
  fVar152 = auVar69._4_4_;
  fVar157 = auVar69._8_4_;
  fVar159 = auVar69._12_4_;
  fVar43 = fVar86 * fVar149 + auVar143._0_4_ * fVar93;
  fVar52 = fVar65 * fVar152 + auVar143._4_4_ * fVar94;
  fVar53 = fVar92 * fVar157 + auVar143._8_4_ * fVar104;
  fVar54 = fVar66 * fVar159 + auVar143._12_4_ * fVar108;
  fVar67 = auVar135._0_4_;
  auVar122._0_4_ = fVar43 + fVar67;
  fVar56 = auVar135._4_4_;
  auVar122._4_4_ = fVar52 + fVar56;
  fVar84 = auVar135._8_4_;
  auVar122._8_4_ = fVar53 + fVar84;
  fVar64 = auVar135._12_4_;
  auVar122._12_4_ = fVar54 + fVar64;
  auVar63._0_4_ = auVar126._0_4_ * local_158 * param_5;
  auVar63._4_4_ = auVar126._4_4_ * fStack_154 * param_5;
  auVar63._8_4_ = auVar126._8_4_ * fStack_150 * param_5;
  auVar63._12_4_ = auVar126._12_4_ * fStack_14c * param_5;
  auVar134._0_4_ = auVar133._0_4_ * local_158 * param_5;
  auVar134._4_4_ = auVar133._4_4_ * fStack_154 * param_5;
  auVar134._8_4_ = auVar133._8_4_ * fStack_150 * param_5;
  auVar134._12_4_ = auVar133._12_4_ * fStack_14c * param_5;
  auVar107._0_4_ = param_5 * local_158 * auVar101._0_4_;
  auVar107._4_4_ = param_5 * fStack_154 * auVar101._4_4_;
  auVar107._8_4_ = param_5 * fStack_150 * auVar101._8_4_;
  auVar107._12_4_ = param_5 * fStack_14c * auVar101._12_4_;
  auVar126 = divps(auVar63,auVar122);
  auVar133 = divps(auVar134,auVar122);
  auVar101 = divps(auVar107,auVar122);
  uVar38 = -(uint)(auVar155._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                  fVar67 == 0.0 && fVar43 == 0.0);
  uVar148 = -(uint)(auVar155._4_4_ <= _UNK_1506895d4 || fVar56 == 0.0 && fVar52 == 0.0);
  uVar150 = -(uint)(auVar155._8_4_ <= _UNK_1506895d8 || fVar84 == 0.0 && fVar53 == 0.0);
  uVar153 = -(uint)(auVar155._12_4_ <= _UNK_1506895dc || fVar64 == 0.0 && fVar54 == 0.0);
  fVar119 = (float)(~uVar38 & auVar126._0_4_);
  fVar123 = (float)(~uVar148 & auVar126._4_4_);
  fVar124 = (float)(~uVar150 & auVar126._8_4_);
  fVar125 = (float)(~uVar153 & auVar126._12_4_);
  fVar43 = (float)(~uVar38 & auVar133._0_4_);
  fVar52 = (float)(~uVar148 & auVar133._4_4_);
  fVar53 = (float)(~uVar150 & auVar133._8_4_);
  fVar54 = (float)(~uVar153 & auVar133._12_4_);
  fVar147 = (float)(~uVar38 & auVar101._0_4_);
  fVar145 = (float)(~uVar148 & auVar101._4_4_);
  fVar151 = (float)(~uVar150 & auVar101._8_4_);
  fVar154 = (float)(~uVar153 & auVar101._12_4_);
  auVar82._0_4_ = -(uint)(0.0 < fVar67 && bVar13);
  auVar82._4_4_ = -(uint)(0.0 < fVar56 && bVar14);
  auVar82._8_4_ = -(uint)(0.0 < fVar84 && bVar15);
  auVar82._12_4_ = -(uint)(0.0 < fVar64 && bVar16);
  iVar42 = movmskps(uVar17,auVar82);
  local_268 = auVar87._0_4_;
  fStack_264 = auVar87._4_4_;
  fStack_260 = auVar87._8_4_;
  fStack_25c = auVar87._12_4_;
  iVar28 = 0;
  if (iVar42 == 0) goto LAB_140027060;
  bVar27 = (char)((char)iVar42 << 4) >> 4;
  fVar80 = fVar67 * local_268;
  fVar56 = fVar56 * fStack_264;
  fVar84 = fVar84 * fStack_260;
  fVar64 = fVar64 * fStack_25c;
  auVar116._0_4_ = auVar114._0_4_ - fVar80 * fVar119;
  auVar116._4_4_ = auVar114._4_4_ - fVar56 * fVar123;
  auVar116._8_4_ = auVar114._8_4_ - fVar84 * fVar124;
  auVar116._12_4_ = auVar114._12_4_ - fVar64 * fVar125;
  if ((bVar27 & 1) == 0) {
    if ((bVar27 & 2) == 0) goto LAB_140026fc4;
LAB_140027544:
    uVar12 = extractps(auVar116,1);
    *(undefined8 *)(param_1 + auVar131._4_4_) = uVar12;
    if ((bVar27 & 4) != 0) goto LAB_140027563;
LAB_140026fd8:
    if (-1 < (char)bVar27) goto LAB_140026fe8;
LAB_14002757e:
    uVar12 = extractps(auVar116,3);
    *(undefined8 *)(param_1 + auVar131._12_4_) = uVar12;
    auVar102._0_4_ = fVar68 - fVar80 * fVar43;
    auVar102._4_4_ = fVar74 - fVar56 * fVar52;
    auVar102._8_4_ = fVar85 - fVar84 * fVar53;
    auVar102._12_4_ = fVar75 - fVar64 * fVar54;
    if ((bVar27 & 1) != 0) goto LAB_14002759d;
LAB_140026ff5:
    if ((bVar27 & 2) == 0) goto LAB_140027002;
LAB_1400275b4:
    uVar12 = extractps(auVar102,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._4_4_) = uVar12;
    if ((bVar27 & 4) != 0) goto LAB_1400275c9;
LAB_14002700b:
    if (-1 < (char)bVar27) goto LAB_140027017;
LAB_1400275e1:
    uVar12 = extractps(auVar102,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._12_4_) = uVar12;
    auVar47._0_4_ = fVar142 - fVar80 * fVar147;
    auVar47._4_4_ = fVar144 - fVar56 * fVar145;
    auVar47._8_4_ = fVar83 - fVar84 * fVar151;
    auVar47._12_4_ = fVar146 - fVar64 * fVar154;
  }
  else {
    *(float *)(param_1 + auVar131._0_4_) = auVar116._0_4_;
    if ((bVar27 & 2) != 0) goto LAB_140027544;
LAB_140026fc4:
    if ((bVar27 & 4) == 0) goto LAB_140026fd8;
LAB_140027563:
    uVar12 = extractps(auVar116,2);
    *(undefined8 *)(param_1 + auVar131._8_4_) = uVar12;
    if ((char)bVar27 < '\0') goto LAB_14002757e;
LAB_140026fe8:
    auVar102._0_4_ = fVar68 - fVar80 * fVar43;
    auVar102._4_4_ = fVar74 - fVar56 * fVar52;
    auVar102._8_4_ = fVar85 - fVar84 * fVar53;
    auVar102._12_4_ = fVar75 - fVar64 * fVar54;
    if ((bVar27 & 1) == 0) goto LAB_140026ff5;
LAB_14002759d:
    *(int *)(param_1 + 4 + (longlong)auVar131._0_4_) = auVar102._0_4_;
    if ((bVar27 & 2) != 0) goto LAB_1400275b4;
LAB_140027002:
    if ((bVar27 & 4) == 0) goto LAB_14002700b;
LAB_1400275c9:
    uVar12 = extractps(auVar102,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar131._8_4_) = uVar12;
    if ((char)bVar27 < '\0') goto LAB_1400275e1;
LAB_140027017:
    auVar47._0_4_ = fVar142 - fVar80 * fVar147;
    auVar47._4_4_ = fVar144 - fVar56 * fVar145;
    auVar47._8_4_ = fVar83 - fVar84 * fVar151;
    auVar47._12_4_ = fVar146 - fVar64 * fVar154;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar131._0_4_) = auVar47._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar47,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar47,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar47,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar131._12_4_) = uVar12;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar131._0_4_) = fVar67;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar135,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar135,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._8_4_) = uVar12;
  }
  iVar28 = CONCAT31((int3)((uint)iVar42 >> 8),bVar27);
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar135,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar131._12_4_) = uVar12;
    iVar28 = auVar131._12_4_;
  }
LAB_140027060:
  auVar139._0_4_ = -(uint)(fVar149 != 0.0 && bVar13);
  auVar139._4_4_ = -(uint)(fVar152 != 0.0 && bVar14);
  auVar139._8_4_ = -(uint)(fVar157 != 0.0 && bVar15);
  auVar139._12_4_ = -(uint)(fVar159 != 0.0 && bVar16);
  iVar42 = movmskps(iVar28,auVar139);
  iVar28 = 0;
  if (iVar42 != 0) {
    bVar27 = (char)((char)iVar42 << 4) >> 4;
    fVar86 = fVar86 * fVar149 * local_268;
    fVar65 = fVar65 * fVar152 * fStack_264;
    fVar92 = fVar92 * fVar157 * fStack_260;
    fVar66 = fVar66 * fVar159 * fStack_25c;
    auVar103._0_4_ = local_248 + fVar86 * fVar119;
    auVar103._4_4_ = fStack_244 + fVar65 * fVar123;
    auVar103._8_4_ = fStack_240 + fVar92 * fVar124;
    auVar103._12_4_ = fStack_23c + fVar66 * fVar125;
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + auVar73._0_4_) = auVar103._0_4_;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar103,1);
      *(undefined8 *)(param_1 + auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar103,2);
      *(undefined8 *)(param_1 + auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar103,3);
      *(undefined8 *)(param_1 + auVar73._12_4_) = uVar12;
    }
    local_258 = local_258 + fVar86 * fVar43;
    auVar48._4_4_ = fStack_254 + fVar65 * fVar52;
    auVar48._0_4_ = local_258;
    auVar48._8_4_ = fStack_250 + fVar92 * fVar53;
    auVar48._12_4_ = fStack_24c + fVar66 * fVar54;
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + 4 + (longlong)auVar73._0_4_) = local_258;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar48,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar48,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar48,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar12;
    }
    local_288._0_4_ = auVar95._0_4_ + fVar86 * fVar147;
    local_288._4_4_ = auVar95._4_4_ + fVar65 * fVar145;
    fStack_280 = auVar95._8_4_ + fVar92 * fVar151;
    fStack_27c = auVar95._12_4_ + fVar66 * fVar154;
    if ((bVar27 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar73._0_4_) = local_288._0_4_;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(_local_288,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(_local_288,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar12;
    }
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(_local_288,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar12;
    }
    if ((bVar27 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = fVar149;
    }
    if ((bVar27 & 2) != 0) {
      uVar12 = extractps(auVar69,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar12;
    }
    if ((bVar27 & 4) != 0) {
      uVar12 = extractps(auVar69,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar12;
    }
    iVar28 = CONCAT31((int3)((uint)iVar42 >> 8),bVar27);
    if ((char)bVar27 < '\0') {
      uVar12 = extractps(auVar69,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar12;
      iVar28 = auVar73._12_4_;
    }
  }
  auVar49._0_4_ = -(uint)(fVar93 != 0.0 && bVar13);
  auVar49._4_4_ = -(uint)(fVar94 != 0.0 && bVar14);
  auVar49._8_4_ = -(uint)(fVar104 != 0.0 && bVar15);
  auVar49._12_4_ = -(uint)(fVar108 != 0.0 && bVar16);
  iVar28 = movmskps(iVar28,auVar49);
  if (iVar28 == 0) {
    return;
  }
  bVar27 = (char)((char)iVar28 << 4) >> 4;
  fVar142 = auVar143._0_4_ * local_268 * fVar93;
  fVar144 = auVar143._4_4_ * fStack_264 * fVar94;
  fVar146 = auVar143._8_4_ * fStack_260 * fVar104;
  fVar56 = auVar143._12_4_ * fStack_25c * fVar108;
  auVar50._0_4_ = fVar76 + fVar119 * fVar142;
  auVar50._4_4_ = fVar77 + fVar123 * fVar144;
  auVar50._8_4_ = fVar78 + fVar124 * fVar146;
  auVar50._12_4_ = fVar79 + fVar125 * fVar56;
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + auVar99._0_4_) = auVar50._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar50,1);
    *(undefined8 *)(param_1 + auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar50,2);
    *(undefined8 *)(param_1 + auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar50,3);
    *(undefined8 *)(param_1 + auVar99._12_4_) = uVar12;
    auVar100._0_4_ = fVar88 + fVar43 * fVar142;
    auVar100._4_4_ = fVar89 + fVar52 * fVar144;
    auVar100._8_4_ = fVar90 + fVar53 * fVar146;
    auVar100._12_4_ = fVar91 + fVar54 * fVar56;
  }
  else {
    auVar100._0_4_ = fVar88 + fVar43 * fVar142;
    auVar100._4_4_ = fVar89 + fVar52 * fVar144;
    auVar100._8_4_ = fVar90 + fVar53 * fVar146;
    auVar100._12_4_ = fVar91 + fVar54 * fVar56;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar99._0_4_) = auVar100._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar99._12_4_) = uVar12;
    auVar51._0_4_ = fVar110 + fVar142 * fVar147;
    auVar51._4_4_ = fVar112 + fVar144 * fVar145;
    auVar51._8_4_ = fVar117 + fVar146 * fVar151;
    auVar51._12_4_ = fVar118 + fVar56 * fVar154;
  }
  else {
    auVar51._0_4_ = fVar110 + fVar142 * fVar147;
    auVar51._4_4_ = fVar112 + fVar144 * fVar145;
    auVar51._8_4_ = fVar117 + fVar146 * fVar151;
    auVar51._12_4_ = fVar118 + fVar56 * fVar154;
  }
  if ((bVar27 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar99._0_4_) = auVar51._0_4_;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar99._12_4_) = uVar12;
  }
  if ((bVar27 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar99._0_4_) = fVar93;
  }
  if ((bVar27 & 2) != 0) {
    uVar12 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._4_4_) = uVar12;
  }
  if ((bVar27 & 4) != 0) {
    uVar12 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._8_4_) = uVar12;
  }
  if ((char)bVar27 < '\0') {
    uVar12 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar99._12_4_) = uVar12;
  }
  return;
}

// ApplyAxialSpringConstraintsWithWeightMaps_sse4 @ 140027a10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAxialSpringConstraintsWithWeightMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int unaff_EBP;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  byte bVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar65;
  undefined1 in_XMM2 [16];
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 auVar64 [16];
  float fVar67;
  float fVar72;
  float fVar73;
  undefined1 auVar68 [16];
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  float fVar86;
  float fVar87;
  float fVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  uint uVar88;
  uint uVar90;
  undefined1 auVar85 [16];
  float fVar91;
  float fVar92;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar107;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  uint uVar109;
  float fVar110;
  float fVar111;
  float fVar117;
  float fVar120;
  float fVar121;
  float fVar124;
  undefined1 auVar112 [16];
  float fVar125;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  uint uVar118;
  float fVar119;
  uint uVar122;
  float fVar123;
  uint uVar126;
  float fVar127;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar128;
  float fVar129;
  float fVar133;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  undefined1 auVar135 [16];
  float fVar139;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar152;
  float fVar155;
  float fVar156;
  float fVar157;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  byte *local_2c0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined4 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  
  uVar24 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar24 = param_7;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar27 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    piVar18 = (int *)(param_2 + 0x20);
    uVar40 = 0;
    uVar27 = 0;
    do {
      auVar43 = *(undefined1 (*) [16])(piVar18 + -8);
      auVar75 = *(undefined1 (*) [16])(piVar18 + -4);
      iVar17 = piVar18[2];
      uVar50 = auVar75._0_4_;
      auVar63._4_4_ = uVar50;
      auVar63._0_4_ = uVar50;
      auVar63._8_4_ = uVar50;
      auVar63._12_4_ = uVar50;
      auVar140._8_4_ = auVar43._8_4_;
      auVar140._12_4_ = auVar43._12_4_;
      auVar51._4_4_ = auVar140._12_4_;
      auVar51._0_4_ = auVar43._0_4_;
      auVar51._8_4_ = auVar43._4_4_;
      auVar51._12_4_ = auVar140._12_4_;
      auVar63 = pblendw(auVar63,auVar51,0x3f);
      auVar140._0_8_ = auVar43._8_8_;
      auVar51 = pblendw(auVar140,auVar75,0xc);
      lVar35 = (longlong)(auVar63._8_4_ << 4);
      lVar19 = (longlong)(auVar63._12_4_ * 0x10);
      lVar21 = (longlong)(auVar75._12_4_ << 4);
      lVar31 = (longlong)(iVar17 << 4);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + lVar35)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + lVar21),0x20);
      auVar162 = insertps(auVar63,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar21),0x20);
      auVar68 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar21),0x20);
      auVar112 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      unaff_EBP = auVar51._0_4_ << 4;
      lVar23 = (longlong)unaff_EBP;
      lVar28 = (longlong)(auVar51._4_4_ * 0x10);
      lVar36 = (longlong)(*piVar18 << 4);
      lVar22 = (longlong)(piVar18[3] << 4);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + lVar23)),*(undefined4 *)(param_1 + lVar28),0x10
                        );
      auVar51 = insertps(auVar51,*(undefined4 *)(param_1 + lVar36),0x20);
      auVar105 = insertps(auVar51,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar23)),
                         *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar51 = insertps(auVar51,*(undefined4 *)(param_1 + 4 + lVar36),0x20);
      auVar93 = insertps(auVar51,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar51 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar23)),
                         *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar63 = insertps(auVar51,*(undefined4 *)(param_1 + 8 + lVar36),0x20);
      auVar51 = *(undefined1 (*) [16])(param_3 + (uVar40 & 0xffffffff));
      fVar80 = auVar51._0_4_;
      fVar86 = auVar51._4_4_;
      fVar89 = auVar51._12_4_;
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      lVar37 = (longlong)(auVar43._0_4_ << 4);
      lVar41 = (longlong)(auVar140._12_4_ * 0x10);
      lVar29 = (longlong)(auVar75._8_4_ << 4);
      lVar32 = (longlong)(piVar18[1] << 4);
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar41),0x10
                        );
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar29),0x20);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar75 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                         *(undefined4 *)(param_1 + 4 + lVar41),0x10);
      auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar29),0x20);
      auVar76 = insertps(auVar75,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar75 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                         *(undefined4 *)(param_1 + 8 + lVar41),0x10);
      auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + 8 + lVar29),0x20);
      auVar140 = insertps(auVar75,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar104 = auVar105._0_4_;
      fVar129 = auVar105._4_4_;
      fVar107 = auVar105._8_4_;
      fVar133 = auVar105._12_4_;
      fVar91 = auVar93._0_4_;
      fVar120 = auVar93._4_4_;
      fVar124 = auVar93._8_4_;
      fVar128 = auVar93._12_4_;
      fVar99 = auVar63._0_4_;
      fVar108 = auVar112._0_4_;
      fVar100 = auVar63._4_4_;
      fVar117 = auVar112._4_4_;
      fVar102 = auVar63._8_4_;
      fVar121 = auVar112._8_4_;
      fVar125 = auVar112._12_4_;
      fVar111 = auVar63._12_4_;
      fVar87 = auVar51._8_4_;
      auVar93._0_4_ = auVar43._0_4_ - ((auVar162._0_4_ - fVar104) * fVar80 + fVar104);
      auVar93._4_4_ = auVar43._4_4_ - ((auVar162._4_4_ - fVar129) * fVar86 + fVar129);
      auVar93._8_4_ = auVar43._8_4_ - ((auVar162._8_4_ - fVar107) * fVar87 + fVar107);
      auVar93._12_4_ = auVar43._12_4_ - ((auVar162._12_4_ - fVar133) * fVar89 + fVar133);
      auVar150._0_4_ = auVar76._0_4_ - ((auVar68._0_4_ - fVar91) * fVar80 + fVar91);
      auVar150._4_4_ = auVar76._4_4_ - ((auVar68._4_4_ - fVar120) * fVar86 + fVar120);
      auVar150._8_4_ = auVar76._8_4_ - ((auVar68._8_4_ - fVar124) * fVar87 + fVar124);
      auVar150._12_4_ = auVar76._12_4_ - ((auVar68._12_4_ - fVar128) * fVar89 + fVar128);
      fVar139 = auVar140._0_4_;
      auVar75._0_4_ = fVar139 - ((fVar108 - fVar99) * fVar80 + fVar99);
      fVar101 = auVar140._4_4_;
      auVar75._4_4_ = fVar101 - ((fVar117 - fVar100) * fVar86 + fVar100);
      fVar103 = auVar140._8_4_;
      fVar61 = auVar140._12_4_;
      auVar75._8_4_ = fVar103 - ((fVar121 - fVar102) * fVar87 + fVar102);
      auVar75._12_4_ = fVar61 - ((fVar125 - fVar111) * fVar89 + fVar111);
      auVar112._0_4_ =
           auVar75._0_4_ * auVar75._0_4_ +
           auVar150._0_4_ * auVar150._0_4_ + auVar93._0_4_ * auVar93._0_4_;
      auVar112._4_4_ =
           auVar75._4_4_ * auVar75._4_4_ +
           auVar150._4_4_ * auVar150._4_4_ + auVar93._4_4_ * auVar93._4_4_;
      auVar112._8_4_ =
           auVar75._8_4_ * auVar75._8_4_ +
           auVar150._8_4_ * auVar150._8_4_ + auVar93._8_4_ * auVar93._8_4_;
      auVar112._12_4_ =
           auVar75._12_4_ * auVar75._12_4_ +
           auVar150._12_4_ * auVar150._12_4_ + auVar93._12_4_ * auVar93._12_4_;
      auVar85._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar80;
      auVar85._4_4_ = _UNK_15076b1f4 - fVar86;
      auVar85._8_4_ = _UNK_15076b1f8 - fVar87;
      auVar85._12_4_ = _UNK_15076b1fc - fVar89;
      auVar51 = maxps(auVar51,auVar85);
      auVar113._0_4_ = auVar51._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar113._4_4_ = auVar51._4_4_ + _UNK_15076b1f4;
      auVar113._8_4_ = auVar51._8_4_ + _UNK_15076b1f8;
      auVar113._12_4_ = auVar51._12_4_ + _UNK_15076b1fc;
      auVar130 = divps(___xmm_40000000400000004000000040000000,auVar113);
      auVar51 = pmovzxbd(auVar113,*(undefined4 *)(param_5 + uVar27));
      auVar114._0_4_ = auVar51._0_4_ << 2;
      auVar114._4_4_ = auVar51._4_4_ * 4;
      auVar114._8_4_ = auVar51._8_4_ << 2;
      auVar114._12_4_ = auVar51._12_4_ << 2;
      auVar63 = sqrtps(auVar114,auVar112);
      pfVar1 = (float *)(param_4 + (uVar40 & 0xffffffff));
      fVar152 = auVar63._0_4_ - *pfVar1;
      fVar155 = auVar63._4_4_ - pfVar1[1];
      fVar156 = auVar63._8_4_ - pfVar1[2];
      fVar157 = auVar63._12_4_ - pfVar1[3];
      auVar140 = divps(auVar93,auVar63);
      auVar112 = divps(auVar150,auVar63);
      auVar75 = divps(auVar75,auVar63);
      auVar51 = insertps(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar114._0_4_)),
                         *(undefined4 *)(param_6 + (ulonglong)auVar114._4_4_),0x10);
      auVar93 = insertps(auVar51,*(undefined4 *)(param_6 + (ulonglong)auVar114._8_4_),0x20);
      uVar26 = *(uint *)(param_1 + 0xc + lVar35);
      uVar88 = *(uint *)(param_1 + 0xc + lVar19);
      auVar51 = insertps(ZEXT416(uVar26),ZEXT416(uVar88),0x10);
      uVar90 = *(uint *)(param_1 + 0xc + lVar21);
      auVar51 = insertps(auVar51,ZEXT416(uVar90),0x20);
      uVar2 = *(uint *)(param_1 + 0xc + lVar31);
      auVar51 = insertps(auVar51,ZEXT416(uVar2),0x30);
      uVar3 = *(uint *)(param_1 + 0xc + lVar23);
      uVar4 = *(uint *)(param_1 + 0xc + lVar28);
      auVar105 = insertps(ZEXT416(uVar3),ZEXT416(uVar4),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar36);
      auVar105 = insertps(auVar105,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar22);
      auVar105 = insertps(auVar105,ZEXT416(uVar6),0x30);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_6 + (ulonglong)auVar114._12_4_),0x30);
      fVar158 = auVar105._0_4_;
      fVar159 = auVar105._4_4_;
      fVar160 = auVar105._8_4_;
      fVar161 = auVar105._12_4_;
      fVar79 = auVar51._0_4_;
      fVar65 = auVar51._4_4_;
      fVar66 = auVar51._8_4_;
      fVar62 = auVar51._12_4_;
      fVar67 = fVar80 * fVar79 + auVar85._0_4_ * fVar158;
      fVar72 = fVar86 * fVar65 + auVar85._4_4_ * fVar159;
      fVar73 = fVar87 * fVar66 + auVar85._8_4_ * fVar160;
      fVar74 = fVar89 * fVar62 + auVar85._12_4_ * fVar161;
      fVar110 = auVar93._0_4_;
      auVar105._0_4_ = auVar140._0_4_ * fVar152 * fVar110;
      fVar119 = auVar93._4_4_;
      auVar105._4_4_ = auVar140._4_4_ * fVar155 * fVar119;
      fVar123 = auVar93._8_4_;
      auVar105._8_4_ = auVar140._8_4_ * fVar156 * fVar123;
      fVar127 = auVar93._12_4_;
      auVar105._12_4_ = auVar140._12_4_ * fVar157 * fVar127;
      auVar151._0_4_ = auVar112._0_4_ * fVar152 * fVar110;
      auVar151._4_4_ = auVar112._4_4_ * fVar155 * fVar119;
      auVar151._8_4_ = auVar112._8_4_ * fVar156 * fVar123;
      auVar151._12_4_ = auVar112._12_4_ * fVar157 * fVar127;
      auVar153._0_4_ = fVar152 * auVar75._0_4_ * fVar110;
      auVar153._4_4_ = fVar155 * auVar75._4_4_ * fVar119;
      auVar153._8_4_ = fVar156 * auVar75._8_4_ * fVar123;
      auVar153._12_4_ = fVar157 * auVar75._12_4_ * fVar127;
      uVar7 = *(uint *)(param_1 + 0xc + lVar37);
      uVar8 = *(uint *)(param_1 + 0xc + lVar41);
      auVar75 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar29);
      auVar75 = insertps(auVar75,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar32);
      auVar75 = insertps(auVar75,ZEXT416(uVar10),0x30);
      fVar134 = auVar75._0_4_;
      auVar47._0_4_ = fVar67 + fVar134;
      fVar136 = auVar75._4_4_;
      auVar47._4_4_ = fVar72 + fVar136;
      fVar137 = auVar75._8_4_;
      auVar47._8_4_ = fVar73 + fVar137;
      fVar138 = auVar75._12_4_;
      auVar47._12_4_ = fVar74 + fVar138;
      auVar75 = divps(auVar105,auVar47);
      auVar51 = divps(auVar151,auVar47);
      auVar140 = divps(auVar153,auVar47);
      uVar109 = -(uint)(auVar63._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                       fVar134 == 0.0 && fVar67 == 0.0);
      uVar118 = -(uint)(auVar63._4_4_ <= _UNK_1506895d4 || fVar136 == 0.0 && fVar72 == 0.0);
      uVar122 = -(uint)(auVar63._8_4_ <= _UNK_1506895d8 || fVar137 == 0.0 && fVar73 == 0.0);
      uVar126 = -(uint)(auVar63._12_4_ <= _UNK_1506895dc || fVar138 == 0.0 && fVar74 == 0.0);
      fVar67 = (float)(~uVar109 & auVar75._0_4_);
      fVar72 = (float)(~uVar118 & auVar75._4_4_);
      fVar73 = (float)(~uVar122 & auVar75._8_4_);
      fVar74 = (float)(~uVar126 & auVar75._12_4_);
      in_XMM2._0_4_ = (float)(~uVar109 & auVar51._0_4_);
      in_XMM2._4_4_ = (float)(~uVar118 & auVar51._4_4_);
      in_XMM2._8_4_ = (float)(~uVar122 & auVar51._8_4_);
      in_XMM2._12_4_ = (float)(~uVar126 & auVar51._12_4_);
      fVar110 = (float)(~uVar109 & auVar140._0_4_);
      fVar119 = (float)(~uVar118 & auVar140._4_4_);
      fVar123 = (float)(~uVar122 & auVar140._8_4_);
      fVar127 = (float)(~uVar126 & auVar140._12_4_);
      auVar154._4_4_ = -(uint)(0.0 < fVar136);
      auVar154._0_4_ = -(uint)(0.0 < fVar134);
      auVar154._8_4_ = -(uint)(0.0 < fVar137);
      auVar154._12_4_ = -(uint)(0.0 < fVar138);
      iVar39 = movmskps((int)param_6,auVar154);
      fVar152 = auVar130._0_4_;
      fVar155 = auVar130._4_4_;
      fVar156 = auVar130._8_4_;
      fVar157 = auVar130._12_4_;
      if (iVar39 != 0) {
        bVar38 = (char)((char)iVar39 << 4) >> 4;
        fVar134 = fVar134 * fVar152;
        fVar136 = fVar136 * fVar155;
        fVar137 = fVar137 * fVar156;
        fVar138 = fVar138 * fVar157;
        auVar130._0_4_ = auVar43._0_4_ - fVar134 * fVar67;
        auVar130._4_4_ = auVar43._4_4_ - fVar136 * fVar72;
        auVar130._8_4_ = auVar43._8_4_ - fVar137 * fVar73;
        auVar130._12_4_ = auVar43._12_4_ - fVar138 * fVar74;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar37) = auVar130._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar130,1);
          *(undefined8 *)(param_1 + lVar41) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar130,2);
          *(undefined8 *)(param_1 + lVar29) = uVar11;
        }
        auVar114._12_4_ = bVar38 & 0xf;
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar130,3);
          *(undefined8 *)(param_1 + lVar32) = uVar11;
        }
        auVar43._0_4_ = auVar76._0_4_ - fVar134 * in_XMM2._0_4_;
        auVar43._4_4_ = auVar76._4_4_ - fVar136 * in_XMM2._4_4_;
        auVar43._8_4_ = auVar76._8_4_ - fVar137 * in_XMM2._8_4_;
        auVar43._12_4_ = auVar76._12_4_ - fVar138 * in_XMM2._12_4_;
        if ((bVar38 & 1) == 0) {
          if ((bVar38 & 2) == 0) goto LAB_14002801c;
LAB_1400282f1:
          uVar11 = extractps(auVar43,1);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_140028304;
LAB_140028026:
          if (-1 < (char)bVar38) goto LAB_14002802f;
LAB_140028316:
          uVar11 = extractps(auVar43,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar11;
          auVar76._0_4_ = fVar139 - fVar134 * fVar110;
          auVar76._4_4_ = fVar101 - fVar136 * fVar119;
          auVar76._8_4_ = fVar103 - fVar137 * fVar123;
          auVar76._12_4_ = fVar61 - fVar138 * fVar127;
        }
        else {
          *(float *)(param_1 + 4 + lVar37) = auVar43._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_1400282f1;
LAB_14002801c:
          if ((bVar38 & 4) == 0) goto LAB_140028026;
LAB_140028304:
          uVar11 = extractps(auVar43,2);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_140028316;
LAB_14002802f:
          auVar76._0_4_ = fVar139 - fVar134 * fVar110;
          auVar76._4_4_ = fVar101 - fVar136 * fVar119;
          auVar76._8_4_ = fVar103 - fVar137 * fVar123;
          auVar76._12_4_ = fVar61 - fVar138 * fVar127;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar37) = auVar76._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar76,1);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar76,2);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar76,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar7;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar8;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar9;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar10;
        }
      }
      in_XMM4._0_12_ = ZEXT812(0);
      in_XMM4._12_4_ = 0.0;
      auVar69._0_4_ = -(uint)(fVar79 != 0.0);
      auVar69._4_4_ = -(uint)(fVar65 != 0.0);
      auVar69._8_4_ = -(uint)(fVar66 != 0.0);
      auVar69._12_4_ = -(uint)(fVar62 != 0.0);
      iVar39 = movmskps(auVar114._12_4_,auVar69);
      if (iVar39 != 0) {
        bVar38 = (char)((char)iVar39 << 4) >> 4;
        fVar80 = fVar80 * fVar79 * fVar152;
        fVar86 = fVar86 * fVar65 * fVar155;
        fVar87 = fVar87 * fVar66 * fVar156;
        fVar89 = fVar89 * fVar62 * fVar157;
        auVar163._0_4_ = auVar162._0_4_ + fVar80 * fVar67;
        auVar163._4_4_ = auVar162._4_4_ + fVar86 * fVar72;
        auVar163._8_4_ = auVar162._8_4_ + fVar87 * fVar73;
        auVar163._12_4_ = auVar162._12_4_ + fVar89 * fVar74;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar35) = auVar163._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar163,1);
          *(undefined8 *)(param_1 + lVar19) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar163,2);
          *(undefined8 *)(param_1 + lVar21) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar163,3);
          *(undefined8 *)(param_1 + lVar31) = uVar11;
        }
        auVar162._0_4_ = auVar68._0_4_ + fVar80 * in_XMM2._0_4_;
        auVar162._4_4_ = auVar68._4_4_ + fVar86 * in_XMM2._4_4_;
        auVar162._8_4_ = auVar68._8_4_ + fVar87 * in_XMM2._8_4_;
        auVar162._12_4_ = auVar68._12_4_ + fVar89 * in_XMM2._12_4_;
        if ((bVar38 & 1) == 0) {
          if ((bVar38 & 2) == 0) goto LAB_14002812d;
LAB_140028448:
          uVar11 = extractps(auVar162,1);
          *(undefined8 *)(param_1 + 4 + lVar19) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_14002845a;
LAB_140028137:
          if (-1 < (char)bVar38) goto LAB_140028140;
LAB_14002846b:
          uVar11 = extractps(auVar162,3);
          *(undefined8 *)(param_1 + 4 + lVar31) = uVar11;
          auVar68._0_4_ = fVar108 + fVar80 * fVar110;
          auVar68._4_4_ = fVar117 + fVar86 * fVar119;
          auVar68._8_4_ = fVar121 + fVar87 * fVar123;
          auVar68._12_4_ = fVar125 + fVar89 * fVar127;
        }
        else {
          *(float *)(param_1 + 4 + lVar35) = auVar162._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_140028448;
LAB_14002812d:
          if ((bVar38 & 4) == 0) goto LAB_140028137;
LAB_14002845a:
          uVar11 = extractps(auVar162,2);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_14002846b;
LAB_140028140:
          auVar68._0_4_ = fVar108 + fVar80 * fVar110;
          auVar68._4_4_ = fVar117 + fVar86 * fVar119;
          auVar68._8_4_ = fVar121 + fVar87 * fVar123;
          auVar68._12_4_ = fVar125 + fVar89 * fVar127;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar35) = auVar68._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar68,1);
          *(undefined8 *)(param_1 + 8 + lVar19) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar68,2);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar68,3);
          *(undefined8 *)(param_1 + 8 + lVar31) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar26;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar88;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar90;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar31) = uVar2;
        }
      }
      auVar52._0_4_ = -(uint)(fVar158 != 0.0);
      auVar52._4_4_ = -(uint)(fVar159 != 0.0);
      auVar52._8_4_ = -(uint)(fVar160 != 0.0);
      auVar52._12_4_ = -(uint)(fVar161 != 0.0);
      iVar17 = movmskps(iVar17 << 4,auVar52);
      if (iVar17 != 0) {
        bVar38 = (char)((char)iVar17 << 4) >> 4;
        fVar80 = auVar85._0_4_ * fVar158 * fVar152;
        fVar86 = auVar85._4_4_ * fVar159 * fVar155;
        fVar89 = auVar85._8_4_ * fVar160 * fVar156;
        fVar79 = auVar85._12_4_ * fVar161 * fVar157;
        auVar70._0_4_ = fVar104 + fVar67 * fVar80;
        auVar70._4_4_ = fVar129 + fVar72 * fVar86;
        auVar70._8_4_ = fVar107 + fVar73 * fVar89;
        auVar70._12_4_ = fVar133 + fVar74 * fVar79;
        if ((bVar38 & 1) != 0) {
          *(float *)(param_1 + lVar23) = auVar70._0_4_;
        }
        if ((bVar38 & 2) == 0) {
          if ((bVar38 & 4) == 0) goto LAB_140028209;
LAB_140028541:
          uVar11 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + lVar36) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_140028551;
LAB_140028211:
          in_XMM2._0_4_ = in_XMM2._0_4_ * fVar80;
          in_XMM2._4_4_ = in_XMM2._4_4_ * fVar86;
          in_XMM2._8_4_ = in_XMM2._8_4_ * fVar89;
          in_XMM2._12_4_ = in_XMM2._12_4_ * fVar79;
          auVar53._0_4_ = fVar91 + in_XMM2._0_4_;
          auVar53._4_4_ = fVar120 + in_XMM2._4_4_;
          auVar53._8_4_ = fVar124 + in_XMM2._8_4_;
          auVar53._12_4_ = fVar128 + in_XMM2._12_4_;
          if ((bVar38 & 1) == 0) goto LAB_140028220;
LAB_14002856d:
          *(int *)(param_1 + 4 + lVar23) = auVar53._0_4_;
          if ((bVar38 & 2) != 0) goto LAB_14002857c;
LAB_140028229:
          if ((bVar38 & 4) == 0) goto LAB_140028232;
LAB_14002858e:
          uVar11 = extractps(auVar53,2);
          *(undefined8 *)(param_1 + 4 + lVar36) = uVar11;
          if ((char)bVar38 < '\0') goto LAB_14002859f;
LAB_14002823a:
          in_XMM4._0_4_ = fVar80 * fVar110;
          in_XMM4._4_4_ = fVar86 * fVar119;
          in_XMM4._8_4_ = fVar89 * fVar123;
          in_XMM4._12_4_ = fVar79 * fVar127;
          auVar44._0_4_ = fVar99 + in_XMM4._0_4_;
          auVar44._4_4_ = fVar100 + in_XMM4._4_4_;
          auVar44._8_4_ = fVar102 + in_XMM4._8_4_;
          auVar44._12_4_ = fVar111 + in_XMM4._12_4_;
        }
        else {
          uVar11 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + lVar28) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_140028541;
LAB_140028209:
          if (-1 < (char)bVar38) goto LAB_140028211;
LAB_140028551:
          uVar11 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + lVar22) = uVar11;
          in_XMM2._0_4_ = in_XMM2._0_4_ * fVar80;
          in_XMM2._4_4_ = in_XMM2._4_4_ * fVar86;
          in_XMM2._8_4_ = in_XMM2._8_4_ * fVar89;
          in_XMM2._12_4_ = in_XMM2._12_4_ * fVar79;
          auVar53._0_4_ = fVar91 + in_XMM2._0_4_;
          auVar53._4_4_ = fVar120 + in_XMM2._4_4_;
          auVar53._8_4_ = fVar124 + in_XMM2._8_4_;
          auVar53._12_4_ = fVar128 + in_XMM2._12_4_;
          if ((bVar38 & 1) != 0) goto LAB_14002856d;
LAB_140028220:
          if ((bVar38 & 2) == 0) goto LAB_140028229;
LAB_14002857c:
          uVar11 = extractps(auVar53,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar11;
          if ((bVar38 & 4) != 0) goto LAB_14002858e;
LAB_140028232:
          if (-1 < (char)bVar38) goto LAB_14002823a;
LAB_14002859f:
          uVar11 = extractps(auVar53,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar11;
          in_XMM4._0_4_ = fVar80 * fVar110;
          in_XMM4._4_4_ = fVar86 * fVar119;
          in_XMM4._8_4_ = fVar89 * fVar123;
          in_XMM4._12_4_ = fVar79 * fVar127;
          auVar44._0_4_ = fVar99 + in_XMM4._0_4_;
          auVar44._4_4_ = fVar100 + in_XMM4._4_4_;
          auVar44._8_4_ = fVar102 + in_XMM4._8_4_;
          auVar44._12_4_ = fVar111 + in_XMM4._12_4_;
        }
        if ((bVar38 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar23) = auVar44._0_4_;
        }
        if ((bVar38 & 2) != 0) {
          uVar11 = extractps(auVar44,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar11;
        }
        if ((bVar38 & 4) != 0) {
          uVar11 = extractps(auVar44,2);
          *(undefined8 *)(param_1 + 8 + lVar36) = uVar11;
        }
        if ((char)bVar38 < '\0') {
          uVar11 = extractps(auVar44,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar11;
        }
        if ((bVar38 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar23) = uVar3;
        }
        if ((bVar38 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar4;
        }
        if ((bVar38 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar5;
        }
        if ((char)bVar38 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar6;
        }
      }
      uVar27 = uVar27 + 4;
      uVar40 = uVar40 + 0x10;
      piVar18 = piVar18 + 0xc;
    } while ((int)uVar27 < (int)(uVar24 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar27) {
      return;
    }
  }
  uVar26 = (uint)uVar27;
  bVar12 = (int)(uVar26 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar131._0_4_ = -(uint)bVar12;
  bVar13 = (int)(uVar26 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar131._4_4_ = -(uint)bVar13;
  bVar14 = (int)(uVar26 | _UNK_150631e08) < (int)param_7;
  auVar131._8_4_ = -(uint)bVar14;
  bVar15 = (int)(uVar26 | _UNK_150631e0c) < (int)param_7;
  auVar131._12_4_ = -(uint)bVar15;
  uVar27 = uVar27 & 0xffffffff;
  pauVar30 = (undefined1 (*) [16])(param_2 + uVar27 * 0xc);
  uVar24 = movmskps(unaff_EBP,auVar131);
  bVar38 = (char)((char)uVar24 << 4) >> 4;
  if (uVar24 == 0xf) {
    auVar43 = *pauVar30;
    auVar75 = pauVar30[1];
    uVar50 = auVar75._0_4_;
    auVar95._4_4_ = uVar50;
    auVar95._0_4_ = uVar50;
    auVar95._8_4_ = uVar50;
    auVar95._12_4_ = uVar50;
    uVar50 = auVar43._12_4_;
    auVar142._0_8_ = CONCAT44(uVar50,auVar43._0_4_);
    auVar142._8_4_ = auVar43._4_4_;
    auVar142._12_4_ = uVar50;
    auVar51 = pblendw(auVar95,auVar142,0x3f);
    auVar82._0_8_ = auVar43._8_8_;
    auVar82._8_4_ = auVar43._8_4_;
    auVar82._12_4_ = uVar50;
    auVar43 = pblendw(auVar82,auVar75,0xc);
    auVar54._0_8_ = CONCAT44(*(undefined4 *)(pauVar30[2] + 4),auVar75._8_4_);
    auVar54._8_4_ = auVar75._12_4_;
    auVar54._12_4_ = *(undefined4 *)(pauVar30[2] + 8);
    auVar141._8_8_ = auVar54._0_8_;
    auVar141._0_8_ = auVar142._0_8_;
    auVar94._8_8_ = auVar54._8_8_;
    auVar94._0_8_ = auVar51._8_8_;
    auVar81._0_8_ = auVar43._0_8_;
    auVar81._8_4_ = *(undefined4 *)pauVar30[2];
    auVar81._12_4_ = *(undefined4 *)(pauVar30[2] + 0xc);
    pauVar30 = (undefined1 (*) [16])(param_3 + (int)(uVar26 << 2));
    pauVar33 = (undefined1 (*) [16])(param_4 + (int)(uVar26 << 2));
LAB_140028885:
    in_XMM2 = *pauVar30;
    in_XMM4 = *pauVar33;
    auVar46 = ZEXT416(*(uint *)(param_5 + uVar27));
  }
  else {
    auVar45._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar131._0_4_;
    auVar45._4_4_ = _UNK_150b50da4 & auVar131._4_4_;
    auVar45._8_4_ = _UNK_150b50da8 & auVar131._8_4_;
    auVar45._12_4_ = _UNK_150b50dac & auVar131._12_4_;
    lVar21 = extractps(auVar45,1);
    lVar22 = extractps(auVar45,2);
    lVar19 = extractps(auVar45,3);
    auVar141._4_4_ = *(undefined4 *)(*pauVar30 + lVar21);
    auVar141._0_4_ = *(undefined4 *)*pauVar30;
    auVar141._12_4_ = *(undefined4 *)(*pauVar30 + lVar19);
    auVar141._8_4_ = *(undefined4 *)(*pauVar30 + lVar22);
    auVar43 = ___xmm_000000280000001c0000001000000004 & auVar131;
    auVar94._4_4_ = *(undefined4 *)(*pauVar30 + auVar43._4_4_);
    auVar94._0_4_ = *(undefined4 *)(*pauVar30 + auVar43._0_4_);
    auVar94._12_4_ = *(undefined4 *)(*pauVar30 + auVar43._12_4_);
    auVar94._8_4_ = *(undefined4 *)(*pauVar30 + auVar43._8_4_);
    auVar46 = ___xmm_0000002c000000200000001400000008 & auVar131;
    auVar81._4_4_ = *(undefined4 *)(*pauVar30 + auVar46._4_4_);
    auVar81._0_4_ = *(undefined4 *)(*pauVar30 + auVar46._0_4_);
    auVar81._12_4_ = *(undefined4 *)(*pauVar30 + auVar46._12_4_);
    auVar81._8_4_ = *(undefined4 *)(*pauVar30 + auVar46._8_4_);
    pauVar30 = (undefined1 (*) [16])(param_3 + (int)(uVar26 << 2));
    pauVar33 = (undefined1 (*) [16])(param_4 + (int)(uVar26 << 2));
    if ((~bVar38 & 9) == 0) goto LAB_140028885;
    if ((uVar24 & 1) != 0) {
      in_XMM2 = ZEXT416(*(uint *)*pauVar30);
    }
    if ((uVar24 & 2) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 4),0x10);
    }
    if ((uVar24 & 4) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 8),0x20);
    }
    if ((uVar24 & 8) != 0) {
      in_XMM2 = insertps(in_XMM2,*(undefined4 *)(*pauVar30 + 0xc),0x30);
    }
    if ((uVar24 & 1) != 0) {
      in_XMM4 = ZEXT416(*(uint *)*pauVar33);
    }
    if ((uVar24 & 2) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 4),0x10);
    }
    if ((uVar24 & 4) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 8),0x20);
    }
    if ((uVar24 & 8) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(*pauVar33 + 0xc),0x30);
    }
    if ((uVar24 & 1) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      auVar46 = ZEXT116(*local_2c0);
    }
    if ((uVar24 & 2) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      auVar60._8_8_ = auVar46._8_8_;
      auVar60._0_8_ =
           auVar46._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)((longlong)local_2c0 + 1) << 8;
      auVar46 = pblendw(auVar46,auVar60,0xfd);
    }
    if ((uVar24 & 4) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      bVar16 = auVar46[3];
      auVar43 = pmovzxwd(auVar46,auVar46);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ =
           auVar43._0_8_ & 0xffffffff0000ffff |
           (ulonglong)*(byte *)((longlong)local_2c0 + 2) << 0x10 | (ulonglong)bVar16 << 0x18;
    }
    if ((uVar24 & 8) != 0) {
      local_2c0 = (byte *)(param_5 + uVar27);
      bVar16 = auVar46[2];
      auVar43 = pmovzxwd(auVar46,auVar46);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ =
           auVar43._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
           (ulonglong)*(byte *)((longlong)local_2c0 + 3) << 0x18;
    }
  }
  auVar96._0_4_ = auVar94._0_4_ << 4;
  auVar96._4_4_ = auVar94._4_4_ << 4;
  auVar96._8_4_ = auVar94._8_4_ << 4;
  auVar96._12_4_ = auVar94._12_4_ << 4;
  auVar43 = auVar131 & auVar96;
  lVar19 = param_1 + auVar43._0_4_;
  lVar21 = param_1 + auVar43._4_4_;
  lVar22 = param_1 + auVar43._8_4_;
  lVar23 = param_1 + auVar43._12_4_;
  auVar63 = ___xmm_00000004000000040000000400000004 & auVar131;
  auVar140 = ___xmm_00000008000000080000000800000008 & auVar131;
  auVar83._0_4_ = auVar81._0_4_ << 4;
  auVar83._4_4_ = auVar81._4_4_ << 4;
  auVar83._8_4_ = auVar81._8_4_ << 4;
  auVar83._12_4_ = auVar81._12_4_ << 4;
  auVar75 = auVar131 & auVar83;
  lVar34 = (longlong)auVar75._0_4_;
  _local_278 = ZEXT416(*(uint *)(param_1 + auVar43._0_4_));
  auVar143._0_4_ = auVar141._0_4_ << 4;
  auVar143._4_4_ = auVar141._4_4_ << 4;
  auVar143._8_4_ = auVar141._8_4_ << 4;
  auVar143._12_4_ = auVar141._12_4_ << 4;
  auVar51 = auVar131 & auVar143;
  lVar41 = (longlong)auVar51._0_4_;
  uVar40 = (ulonglong)auVar63._4_4_;
  uVar20 = (ulonglong)auVar63._0_4_;
  uVar27 = (ulonglong)auVar140._0_4_;
  lVar28 = param_1 + lVar34;
  lVar29 = param_1 + auVar75._4_4_;
  lVar31 = param_1 + auVar75._8_4_;
  lVar32 = param_1 + auVar75._12_4_;
  lVar35 = param_1 + lVar41;
  lVar36 = param_1 + auVar51._4_4_;
  lVar37 = param_1 + auVar51._8_4_;
  lVar25 = auVar51._12_4_ + param_1;
  bVar42 = (bVar38 & 2) != 0;
  uVar24 = auVar140._4_4_;
  if (bVar42) {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._4_4_),0x10);
    auVar85 = insertps(ZEXT416(*(uint *)(uVar20 + lVar19)),*(undefined4 *)(uVar40 + lVar21),0x10);
    auVar154 = insertps(ZEXT416(*(uint *)(uVar27 + lVar19)),
                        *(undefined4 *)((ulonglong)uVar24 + lVar21),0x10);
    auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar34)),*(undefined4 *)(param_1 + auVar75._4_4_)
                       ,0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar20 + lVar28)),*(undefined4 *)(uVar40 + lVar29),0x10);
    auVar76 = insertps(ZEXT416(*(uint *)(uVar27 + lVar28)),
                       *(undefined4 *)((ulonglong)uVar24 + lVar29),0x10);
    auVar105 = insertps(ZEXT416(*(uint *)(param_1 + lVar41)),
                        *(undefined4 *)(param_1 + auVar51._4_4_),0x10);
    auVar68 = insertps(ZEXT416(*(uint *)(uVar20 + lVar35)),*(undefined4 *)(uVar40 + lVar36),0x10);
    uVar26 = *(uint *)(uVar27 + lVar35);
  }
  else {
    auVar85 = ZEXT416(*(uint *)(uVar20 + lVar19));
    auVar154 = ZEXT416(*(uint *)(uVar27 + lVar19));
    auVar93 = ZEXT416(*(uint *)(param_1 + lVar34));
    auVar112 = ZEXT416(*(uint *)(uVar20 + lVar28));
    auVar76 = ZEXT416(*(uint *)(uVar27 + lVar28));
    auVar105 = ZEXT416(*(uint *)(param_1 + lVar41));
    auVar68 = ZEXT416(*(uint *)(uVar20 + lVar35));
    uVar26 = *(uint *)(uVar27 + lVar35);
  }
  auVar47 = ZEXT416(uVar26);
  if (bVar42) {
    auVar47 = insertps(auVar47,*(undefined4 *)((ulonglong)uVar24 + lVar36),0x10);
  }
  bVar42 = (bVar38 & 4) != 0;
  if (bVar42) {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._8_4_),0x20);
  }
  uVar27 = (ulonglong)auVar63._8_4_;
  uVar40 = (ulonglong)auVar140._8_4_;
  uVar24 = auVar63._12_4_;
  uVar26 = auVar140._12_4_;
  if (bVar42) {
    auVar85 = insertps(auVar85,*(undefined4 *)(uVar27 + lVar22),0x20);
    auVar154 = insertps(auVar154,*(undefined4 *)(uVar40 + lVar22),0x20);
    auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + auVar75._8_4_),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)(uVar27 + lVar31),0x20);
    auVar76 = insertps(auVar76,*(undefined4 *)(uVar40 + lVar31),0x20);
    auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + auVar51._8_4_),0x20);
    auVar68 = insertps(auVar68,*(undefined4 *)(uVar27 + lVar37),0x20);
    auVar47 = insertps(auVar47,*(undefined4 *)(uVar40 + lVar37),0x20);
  }
  if ((char)bVar38 < '\0') {
    _local_278 = insertps(_local_278,*(undefined4 *)(param_1 + auVar43._12_4_),0x30);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)uVar24 + lVar23),0x30);
    auVar154 = insertps(auVar154,*(undefined4 *)((ulonglong)uVar26 + lVar23),0x30);
  }
  uVar11 = ZEXT48((uint)__xmm_0000000c0000000c0000000c0000000c & auVar131._0_4_);
  if ((char)bVar38 < '\0') {
    auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + auVar75._12_4_),0x30);
  }
  uVar27 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar131._4_4_);
  if ((char)bVar38 < '\0') {
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar24 + lVar32),0x30);
  }
  bVar42 = (char)bVar38 < '\0';
  uVar40 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar131,8);
  if (bVar42) {
    auVar76 = insertps(auVar76,*(undefined4 *)((ulonglong)uVar26 + lVar32),0x30);
  }
  uVar20 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar131,0xc);
  auVar140 = insertps(ZEXT416(*(uint *)(uVar11 + lVar19)),*(undefined4 *)(uVar27 + lVar21),0x10);
  auVar75 = insertps(ZEXT416(*(uint *)(uVar11 + lVar28)),*(undefined4 *)(uVar27 + lVar29),0x10);
  auVar43 = insertps(ZEXT416(*(uint *)(uVar11 + lVar35)),*(undefined4 *)(uVar27 + lVar36),0x10);
  if (bVar42) {
    auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + auVar51._12_4_),0x30);
  }
  auVar51 = insertps(auVar140,*(undefined4 *)(uVar40 + lVar22),0x20);
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar40 + lVar31),0x20);
  auVar43 = insertps(auVar43,*(undefined4 *)(uVar40 + lVar37),0x20);
  if (bVar42) {
    auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)uVar24 + lVar25),0x30);
  }
  auVar140 = insertps(auVar51,*(undefined4 *)(uVar20 + lVar23),0x30);
  auVar51 = insertps(auVar75,*(undefined4 *)(uVar20 + lVar32),0x30);
  auVar75 = insertps(auVar43,*(undefined4 *)(uVar20 + lVar25),0x30);
  auVar43 = auVar47;
  if (bVar42) {
    auVar43 = insertps(auVar47,*(undefined4 *)((ulonglong)uVar26 + lVar25),0x30);
  }
  fVar67 = auVar93._0_4_;
  fVar72 = auVar93._4_4_;
  fVar73 = auVar93._8_4_;
  fVar74 = auVar93._12_4_;
  local_288 = auVar85._0_4_;
  fStack_284 = auVar85._4_4_;
  fStack_280 = auVar85._8_4_;
  fStack_27c = auVar85._12_4_;
  local_2a8 = auVar112._0_4_;
  fStack_2a4 = auVar112._4_4_;
  fStack_2a0 = auVar112._8_4_;
  fStack_29c = auVar112._12_4_;
  local_298 = auVar154._0_4_;
  fStack_294 = auVar154._4_4_;
  fStack_290 = auVar154._8_4_;
  fStack_28c = auVar154._12_4_;
  fVar158 = auVar76._0_4_;
  fVar159 = auVar76._4_4_;
  fVar160 = auVar76._8_4_;
  fVar161 = auVar76._12_4_;
  fVar80 = in_XMM2._0_4_;
  fVar89 = in_XMM2._4_4_;
  fVar101 = in_XMM2._8_4_;
  fVar103 = in_XMM2._12_4_;
  auVar115._0_4_ = auVar105._0_4_ - (((float)local_278._0_4_ - fVar67) * fVar80 + fVar67);
  auVar115._4_4_ = auVar105._4_4_ - (((float)local_278._4_4_ - fVar72) * fVar89 + fVar72);
  auVar115._8_4_ = auVar105._8_4_ - ((fStack_270 - fVar73) * fVar101 + fVar73);
  auVar115._12_4_ = auVar105._12_4_ - ((fStack_26c - fVar74) * fVar103 + fVar74);
  fVar61 = auVar68._4_4_;
  fVar62 = auVar68._12_4_;
  fVar87 = auVar68._0_4_;
  auVar97._0_4_ = fVar87 - ((local_288 - local_2a8) * fVar80 + local_2a8);
  auVar97._4_4_ = fVar61 - ((fStack_284 - fStack_2a4) * fVar89 + fStack_2a4);
  fVar91 = auVar68._8_4_;
  auVar97._8_4_ = fVar91 - ((fStack_280 - fStack_2a0) * fVar101 + fStack_2a0);
  auVar97._12_4_ = fVar62 - ((fStack_27c - fStack_29c) * fVar103 + fStack_29c);
  fVar104 = auVar43._0_4_;
  auVar132._0_4_ = fVar104 - ((local_298 - fVar158) * fVar80 + fVar158);
  fVar107 = auVar43._4_4_;
  auVar132._4_4_ = fVar107 - ((fStack_294 - fVar159) * fVar89 + fVar159);
  fVar108 = auVar43._8_4_;
  fVar117 = auVar43._12_4_;
  auVar132._8_4_ = fVar108 - ((fStack_290 - fVar160) * fVar101 + fVar160);
  auVar132._12_4_ = fVar117 - ((fStack_28c - fVar161) * fVar103 + fVar161);
  auVar144._0_4_ = auVar97._0_4_ * auVar97._0_4_ + auVar115._0_4_ * auVar115._0_4_;
  auVar144._4_4_ = auVar97._4_4_ * auVar97._4_4_ + auVar115._4_4_ * auVar115._4_4_;
  auVar144._8_4_ = auVar97._8_4_ * auVar97._8_4_ + auVar115._8_4_ * auVar115._8_4_;
  auVar144._12_4_ = auVar97._12_4_ * auVar97._12_4_ + auVar115._12_4_ * auVar115._12_4_;
  auVar84._0_4_ = auVar132._0_4_ * auVar132._0_4_ + auVar144._0_4_;
  auVar84._4_4_ = auVar132._4_4_ * auVar132._4_4_ + auVar144._4_4_;
  auVar84._8_4_ = auVar132._8_4_ * auVar132._8_4_ + auVar144._8_4_;
  auVar84._12_4_ = auVar132._12_4_ * auVar132._12_4_ + auVar144._12_4_;
  local_158 = auVar46._0_4_;
  auVar43 = pmovzxbd(auVar144,local_158);
  auVar145._0_4_ = auVar43._0_4_ << 2;
  auVar145._4_4_ = auVar43._4_4_ << 2;
  auVar145._8_4_ = auVar43._8_4_ << 2;
  auVar145._12_4_ = auVar43._12_4_ << 2;
  auVar63 = pmovzxdq(auVar76,auVar145);
  auVar146._4_4_ = 0;
  auVar146._0_4_ = auVar145._8_4_;
  auVar146._8_4_ = auVar145._12_4_;
  auVar146._12_4_ = 0;
  auVar43 = pmovsxdq(auVar47,auVar131);
  auVar43 = blendvps((undefined1  [16])0x0,auVar63,auVar43);
  auVar48._4_4_ = auVar131._8_4_;
  auVar48._0_4_ = auVar131._8_4_;
  auVar48._8_4_ = auVar131._12_4_;
  auVar48._12_4_ = auVar131._12_4_;
  auVar76 = blendvps(ZEXT816(0),auVar146,auVar48);
  auVar49._0_4_ = ___xmm_3f8000003f8000003f8000003f800000 - fVar80;
  auVar49._4_4_ = _UNK_15076b1f4 - fVar89;
  auVar49._8_4_ = _UNK_15076b1f8 - fVar101;
  auVar49._12_4_ = _UNK_15076b1fc - fVar103;
  auVar63 = maxps(in_XMM2,auVar49);
  auVar147._0_4_ = auVar63._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar147._4_4_ = auVar63._4_4_ + _UNK_15076b1f4;
  auVar147._8_4_ = auVar63._8_4_ + _UNK_15076b1f8;
  auVar147._12_4_ = auVar63._12_4_ + _UNK_15076b1fc;
  auVar154 = divps(___xmm_40000000400000004000000040000000,auVar147);
  auVar63 = sqrtps(auVar84,auVar84);
  auVar43 = insertps(ZEXT416(*(uint *)(param_6 + auVar43._0_8_)),
                     *(undefined4 *)(param_6 + auVar43._8_8_),0x10);
  auVar43 = insertps(auVar43,*(undefined4 *)(param_6 + auVar76._0_8_),0x20);
  auVar68 = divps(auVar115,auVar63);
  auVar93 = divps(auVar97,auVar63);
  auVar112 = divps(auVar132,auVar63);
  local_148 = in_XMM4._0_4_;
  fStack_144 = in_XMM4._4_4_;
  fStack_140 = in_XMM4._8_4_;
  fStack_13c = in_XMM4._12_4_;
  local_148 = auVar63._0_4_ - local_148;
  fStack_144 = auVar63._4_4_ - fStack_144;
  fStack_140 = auVar63._8_4_ - fStack_140;
  fStack_13c = auVar63._12_4_ - fStack_13c;
  fVar123 = auVar51._0_4_;
  fVar125 = auVar51._4_4_;
  fVar127 = auVar51._8_4_;
  fVar152 = auVar51._12_4_;
  fVar136 = auVar140._0_4_;
  fVar137 = auVar140._4_4_;
  fVar138 = auVar140._8_4_;
  fVar139 = auVar140._12_4_;
  fVar86 = fVar80 * fVar136 + auVar49._0_4_ * fVar123;
  fVar79 = fVar89 * fVar137 + auVar49._4_4_ * fVar125;
  fVar65 = fVar101 * fVar138 + auVar49._8_4_ * fVar127;
  fVar66 = fVar103 * fVar139 + auVar49._12_4_ * fVar152;
  auVar43 = insertps(auVar43,*(undefined4 *)(param_6 + auVar76._8_8_),0x30);
  fVar99 = auVar43._0_4_;
  auVar116._0_4_ = auVar68._0_4_ * local_148 * fVar99;
  fVar100 = auVar43._4_4_;
  auVar116._4_4_ = auVar68._4_4_ * fStack_144 * fVar100;
  fVar102 = auVar43._8_4_;
  auVar116._8_4_ = auVar68._8_4_ * fStack_140 * fVar102;
  fVar111 = auVar43._12_4_;
  auVar116._12_4_ = auVar68._12_4_ * fStack_13c * fVar111;
  auVar98._0_4_ = auVar93._0_4_ * local_148 * fVar99;
  auVar98._4_4_ = auVar93._4_4_ * fStack_144 * fVar100;
  auVar98._8_4_ = auVar93._8_4_ * fStack_140 * fVar102;
  auVar98._12_4_ = auVar93._12_4_ * fStack_13c * fVar111;
  auVar164._0_4_ = local_148 * auVar112._0_4_ * fVar99;
  auVar164._4_4_ = fStack_144 * auVar112._4_4_ * fVar100;
  auVar164._8_4_ = fStack_140 * auVar112._8_4_ * fVar102;
  auVar164._12_4_ = fStack_13c * auVar112._12_4_ * fVar111;
  fVar121 = auVar75._0_4_;
  auVar77._0_4_ = fVar86 + fVar121;
  fVar99 = auVar75._4_4_;
  auVar77._4_4_ = fVar79 + fVar99;
  fVar100 = auVar75._8_4_;
  auVar77._8_4_ = fVar65 + fVar100;
  fVar102 = auVar75._12_4_;
  auVar77._12_4_ = fVar66 + fVar102;
  auVar93 = divps(auVar116,auVar77);
  auVar43 = divps(auVar98,auVar77);
  auVar68 = divps(auVar164,auVar77);
  uVar24 = -(uint)(auVar63._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77 ||
                  fVar121 == 0.0 && fVar86 == 0.0);
  uVar26 = -(uint)(auVar63._4_4_ <= _UNK_1506895d4 || fVar99 == 0.0 && fVar79 == 0.0);
  uVar88 = -(uint)(auVar63._8_4_ <= _UNK_1506895d8 || fVar100 == 0.0 && fVar65 == 0.0);
  uVar90 = -(uint)(auVar63._12_4_ <= _UNK_1506895dc || fVar102 == 0.0 && fVar66 == 0.0);
  fVar129 = (float)(~uVar24 & auVar93._0_4_);
  fVar133 = (float)(~uVar26 & auVar93._4_4_);
  fVar110 = (float)(~uVar88 & auVar93._8_4_);
  fVar119 = (float)(~uVar90 & auVar93._12_4_);
  fVar111 = (float)(~uVar24 & auVar43._0_4_);
  fVar120 = (float)(~uVar26 & auVar43._4_4_);
  fVar124 = (float)(~uVar88 & auVar43._8_4_);
  fVar128 = (float)(~uVar90 & auVar43._12_4_);
  fVar86 = (float)(~uVar24 & auVar68._0_4_);
  fVar79 = (float)(~uVar26 & auVar68._4_4_);
  fVar65 = (float)(~uVar88 & auVar68._8_4_);
  fVar66 = (float)(~uVar90 & auVar68._12_4_);
  auVar78._0_4_ = -(uint)(0.0 < fVar121 && bVar12);
  auVar78._4_4_ = -(uint)(0.0 < fVar99 && bVar13);
  auVar78._8_4_ = -(uint)(0.0 < fVar100 && bVar14);
  auVar78._12_4_ = -(uint)(0.0 < fVar102 && bVar15);
  iVar39 = movmskps(auVar76._8_4_,auVar78);
  fVar155 = auVar154._0_4_;
  fVar156 = auVar154._4_4_;
  fVar157 = auVar154._8_4_;
  fVar134 = auVar154._12_4_;
  iVar17 = 0;
  if (iVar39 != 0) {
    bVar38 = (char)((char)iVar39 << 4) >> 4;
    fVar92 = fVar121 * fVar155;
    fVar99 = fVar99 * fVar156;
    fVar100 = fVar100 * fVar157;
    fVar102 = fVar102 * fVar134;
    auVar55._0_4_ = auVar105._0_4_ - fVar92 * fVar129;
    auVar55._4_4_ = auVar105._4_4_ - fVar99 * fVar133;
    auVar55._8_4_ = auVar105._8_4_ - fVar100 * fVar110;
    auVar55._12_4_ = auVar105._12_4_ - fVar102 * fVar119;
    if ((bVar38 & 1) == 0) {
      if ((bVar38 & 2) == 0) goto LAB_140028fd6;
LAB_140029450:
      uVar11 = extractps(auVar55,1);
      *(undefined8 *)(param_1 + auVar143._4_4_) = uVar11;
      if ((bVar38 & 4) != 0) goto LAB_14002946b;
LAB_140028fe6:
      if (-1 < (char)bVar38) goto LAB_140028ff5;
LAB_140029485:
      uVar11 = extractps(auVar55,3);
      *(undefined8 *)(param_1 + auVar143._12_4_) = uVar11;
      auVar71._0_4_ = fVar87 - fVar92 * fVar111;
      auVar71._4_4_ = fVar61 - fVar99 * fVar120;
      auVar71._8_4_ = fVar91 - fVar100 * fVar124;
      auVar71._12_4_ = fVar62 - fVar102 * fVar128;
      if ((bVar38 & 1) != 0) goto LAB_1400294a3;
LAB_140029001:
      if ((bVar38 & 2) == 0) goto LAB_14002900f;
LAB_1400294bb:
      uVar11 = extractps(auVar71,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._4_4_) = uVar11;
      if ((bVar38 & 4) != 0) goto LAB_1400294d0;
LAB_140029018:
      if (-1 < (char)bVar38) goto LAB_140029023;
LAB_1400294e7:
      uVar11 = extractps(auVar71,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._12_4_) = uVar11;
      auVar56._0_4_ = fVar104 - fVar92 * fVar86;
      auVar56._4_4_ = fVar107 - fVar99 * fVar79;
      auVar56._8_4_ = fVar108 - fVar100 * fVar65;
      auVar56._12_4_ = fVar117 - fVar102 * fVar66;
    }
    else {
      *(float *)(param_1 + auVar143._0_4_) = auVar55._0_4_;
      if ((bVar38 & 2) != 0) goto LAB_140029450;
LAB_140028fd6:
      if ((bVar38 & 4) == 0) goto LAB_140028fe6;
LAB_14002946b:
      uVar11 = extractps(auVar55,2);
      *(undefined8 *)(param_1 + auVar143._8_4_) = uVar11;
      if ((char)bVar38 < '\0') goto LAB_140029485;
LAB_140028ff5:
      auVar71._0_4_ = fVar87 - fVar92 * fVar111;
      auVar71._4_4_ = fVar61 - fVar99 * fVar120;
      auVar71._8_4_ = fVar91 - fVar100 * fVar124;
      auVar71._12_4_ = fVar62 - fVar102 * fVar128;
      if ((bVar38 & 1) == 0) goto LAB_140029001;
LAB_1400294a3:
      *(int *)(param_1 + 4 + (longlong)auVar143._0_4_) = auVar71._0_4_;
      if ((bVar38 & 2) != 0) goto LAB_1400294bb;
LAB_14002900f:
      if ((bVar38 & 4) == 0) goto LAB_140029018;
LAB_1400294d0:
      uVar11 = extractps(auVar71,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar143._8_4_) = uVar11;
      if ((char)bVar38 < '\0') goto LAB_1400294e7;
LAB_140029023:
      auVar56._0_4_ = fVar104 - fVar92 * fVar86;
      auVar56._4_4_ = fVar107 - fVar99 * fVar79;
      auVar56._8_4_ = fVar108 - fVar100 * fVar65;
      auVar56._12_4_ = fVar117 - fVar102 * fVar66;
    }
    if ((bVar38 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar143._0_4_) = auVar56._0_4_;
    }
    if ((bVar38 & 2) != 0) {
      uVar11 = extractps(auVar56,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._4_4_) = uVar11;
    }
    if ((bVar38 & 4) != 0) {
      uVar11 = extractps(auVar56,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._8_4_) = uVar11;
    }
    if ((char)bVar38 < '\0') {
      uVar11 = extractps(auVar56,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar143._12_4_) = uVar11;
    }
    if ((bVar38 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar143._0_4_) = fVar121;
    }
    if ((bVar38 & 2) != 0) {
      uVar11 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._4_4_) = uVar11;
    }
    if ((bVar38 & 4) != 0) {
      uVar11 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._8_4_) = uVar11;
    }
    iVar17 = CONCAT31((int3)((uint)iVar39 >> 8),bVar38);
    if ((char)bVar38 < '\0') {
      uVar11 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar143._12_4_) = uVar11;
      iVar17 = auVar143._12_4_;
    }
  }
  auVar148._0_4_ = -(uint)(fVar136 != 0.0 && bVar12);
  auVar148._4_4_ = -(uint)(fVar137 != 0.0 && bVar13);
  auVar148._8_4_ = -(uint)(fVar138 != 0.0 && bVar14);
  auVar148._12_4_ = -(uint)(fVar139 != 0.0 && bVar15);
  iVar39 = movmskps(iVar17,auVar148);
  iVar17 = 0;
  if (iVar39 == 0) goto LAB_14002919b;
  bVar38 = (char)((char)iVar39 << 4) >> 4;
  fVar80 = fVar80 * fVar136 * fVar155;
  fVar89 = fVar89 * fVar137 * fVar156;
  fVar101 = fVar101 * fVar138 * fVar157;
  fVar103 = fVar103 * fVar139 * fVar134;
  auVar149._0_4_ = (float)local_278._0_4_ + fVar80 * fVar129;
  auVar149._4_4_ = (float)local_278._4_4_ + fVar89 * fVar133;
  auVar149._8_4_ = fStack_270 + fVar101 * fVar110;
  auVar149._12_4_ = fStack_26c + fVar103 * fVar119;
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + auVar96._0_4_) = auVar149._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar149,1);
    *(undefined8 *)(param_1 + auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar149,2);
    *(undefined8 *)(param_1 + auVar96._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar149,3);
    *(undefined8 *)(param_1 + auVar96._12_4_) = uVar11;
  }
  local_288 = local_288 + fVar80 * fVar111;
  auVar57._4_4_ = fStack_284 + fVar89 * fVar120;
  auVar57._0_4_ = local_288;
  auVar57._8_4_ = fStack_280 + fVar101 * fVar124;
  auVar57._12_4_ = fStack_27c + fVar103 * fVar128;
  if ((bVar38 & 1) == 0) {
    if ((bVar38 & 2) == 0) goto LAB_14002913d;
LAB_14002962e:
    uVar11 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._4_4_) = uVar11;
    if ((bVar38 & 4) != 0) goto LAB_140029643;
LAB_140029146:
    if (-1 < (char)bVar38) goto LAB_140029151;
LAB_14002965a:
    uVar11 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._12_4_) = uVar11;
    auVar135._0_4_ = local_298 + fVar80 * fVar86;
    auVar135._4_4_ = fStack_294 + fVar89 * fVar79;
    auVar135._8_4_ = fStack_290 + fVar101 * fVar65;
    auVar135._12_4_ = fStack_28c + fVar103 * fVar66;
  }
  else {
    *(float *)(param_1 + 4 + (longlong)auVar96._0_4_) = local_288;
    if ((bVar38 & 2) != 0) goto LAB_14002962e;
LAB_14002913d:
    if ((bVar38 & 4) == 0) goto LAB_140029146;
LAB_140029643:
    uVar11 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar96._8_4_) = uVar11;
    if ((char)bVar38 < '\0') goto LAB_14002965a;
LAB_140029151:
    auVar135._0_4_ = local_298 + fVar80 * fVar86;
    auVar135._4_4_ = fStack_294 + fVar89 * fVar79;
    auVar135._8_4_ = fStack_290 + fVar101 * fVar65;
    auVar135._12_4_ = fStack_28c + fVar103 * fVar66;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar96._0_4_) = auVar135._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar135,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar135,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar135,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar96._12_4_) = uVar11;
  }
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar96._0_4_) = fVar136;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._8_4_) = uVar11;
  }
  iVar17 = CONCAT31((int3)((uint)iVar39 >> 8),bVar38);
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar96._12_4_) = uVar11;
    iVar17 = auVar96._12_4_;
  }
LAB_14002919b:
  auVar58._0_4_ = -(uint)(fVar123 != 0.0 && bVar12);
  auVar58._4_4_ = -(uint)(fVar125 != 0.0 && bVar13);
  auVar58._8_4_ = -(uint)(fVar127 != 0.0 && bVar14);
  auVar58._12_4_ = -(uint)(fVar152 != 0.0 && bVar15);
  iVar17 = movmskps(iVar17,auVar58);
  if (iVar17 == 0) {
    return;
  }
  bVar38 = (char)((char)iVar17 << 4) >> 4;
  fVar80 = auVar49._0_4_ * fVar155 * fVar123;
  fVar89 = auVar49._4_4_ * fVar156 * fVar125;
  fVar101 = auVar49._8_4_ * fVar157 * fVar127;
  fVar103 = auVar49._12_4_ * fVar134 * fVar152;
  auVar64._0_4_ = fVar67 + fVar129 * fVar80;
  auVar64._4_4_ = fVar72 + fVar133 * fVar89;
  auVar64._8_4_ = fVar73 + fVar110 * fVar101;
  auVar64._12_4_ = fVar74 + fVar119 * fVar103;
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + auVar83._0_4_) = auVar64._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar64,1);
    *(undefined8 *)(param_1 + auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar64,2);
    *(undefined8 *)(param_1 + auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar64,3);
    *(undefined8 *)(param_1 + auVar83._12_4_) = uVar11;
    auVar59._0_4_ = local_2a8 + fVar111 * fVar80;
    auVar59._4_4_ = fStack_2a4 + fVar120 * fVar89;
    auVar59._8_4_ = fStack_2a0 + fVar124 * fVar101;
    auVar59._12_4_ = fStack_29c + fVar128 * fVar103;
  }
  else {
    auVar59._0_4_ = local_2a8 + fVar111 * fVar80;
    auVar59._4_4_ = fStack_2a4 + fVar120 * fVar89;
    auVar59._8_4_ = fStack_2a0 + fVar124 * fVar101;
    auVar59._12_4_ = fStack_29c + fVar128 * fVar103;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar83._0_4_) = auVar59._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar59,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar59,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar59,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar83._12_4_) = uVar11;
    auVar106._0_4_ = fVar158 + fVar80 * fVar86;
    auVar106._4_4_ = fVar159 + fVar89 * fVar79;
    auVar106._8_4_ = fVar160 + fVar101 * fVar65;
    auVar106._12_4_ = fVar161 + fVar103 * fVar66;
  }
  else {
    auVar106._0_4_ = fVar158 + fVar80 * fVar86;
    auVar106._4_4_ = fVar159 + fVar89 * fVar79;
    auVar106._8_4_ = fVar160 + fVar101 * fVar65;
    auVar106._12_4_ = fVar161 + fVar103 * fVar66;
  }
  if ((bVar38 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar83._0_4_) = auVar106._0_4_;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar106,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar106,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar83._12_4_) = uVar11;
  }
  if ((bVar38 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar83._0_4_) = fVar123;
  }
  if ((bVar38 & 2) != 0) {
    uVar11 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._4_4_) = uVar11;
  }
  if ((bVar38 & 4) != 0) {
    uVar11 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._8_4_) = uVar11;
  }
  if ((char)bVar38 < '\0') {
    uVar11 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar83._12_4_) = uVar11;
  }
  return;
}

