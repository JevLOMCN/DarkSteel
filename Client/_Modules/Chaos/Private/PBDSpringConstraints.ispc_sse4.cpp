// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_sse4 @ 140369a20

/* WARNING: Removing unreachable block (ram,0x00014036a7c4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,uint param_5)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  byte bVar24;
  int iVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  uint uVar66;
  float fVar69;
  uint uVar72;
  float fVar74;
  undefined1 auVar67 [16];
  uint uVar70;
  float fVar75;
  uint uVar76;
  undefined1 auVar68 [16];
  int iVar78;
  float fVar79;
  int iVar83;
  int iVar84;
  undefined1 auVar80 [16];
  int iVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar91 [16];
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar105 [16];
  float fVar108;
  float fVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar125;
  float fVar127;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar128 [16];
  float fVar126;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  int iVar71;
  int iVar73;
  int iVar77;
  undefined1 auVar121 [16];
  undefined1 auVar129 [16];
  
  uVar23 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar23 = param_5;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar27 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar27 * 2);
      piVar3 = (int *)(param_2 + 0x10 + uVar27 * 2);
      lVar20 = (longlong)(*piVar1 * 0x10);
      lVar29 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar3 * 0x10);
      lVar32 = (longlong)(piVar3[2] * 0x10);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar29),0x10
                        );
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar98 = insertps(auVar97,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar80 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar128 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      uVar57 = *(uint *)(param_1 + 0xc + lVar20);
      uVar58 = *(uint *)(param_1 + 0xc + lVar29);
      uVar59 = *(uint *)(param_1 + 0xc + lVar28);
      uVar60 = *(uint *)(param_1 + 0xc + lVar32);
      lVar30 = (longlong)(piVar1[1] << 4);
      lVar19 = (longlong)(piVar1[3] * 0x10);
      lVar22 = (longlong)(piVar3[1] << 4);
      lVar21 = (longlong)(piVar3[3] << 4);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + lVar22),0x20);
      auVar101 = insertps(auVar97,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar30)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar22),0x20);
      auVar91 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar30)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar22),0x20);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      auVar115._0_4_ = auVar98._0_4_ - auVar101._0_4_;
      auVar115._4_4_ = auVar98._4_4_ - auVar101._4_4_;
      auVar115._8_4_ = auVar98._8_4_ - auVar101._8_4_;
      auVar115._12_4_ = auVar98._12_4_ - auVar101._12_4_;
      fVar64 = auVar91._0_4_;
      auVar112._0_4_ = auVar80._0_4_ - fVar64;
      fVar94 = auVar91._4_4_;
      auVar112._4_4_ = auVar80._4_4_ - fVar94;
      fVar95 = auVar91._8_4_;
      auVar112._8_4_ = auVar80._8_4_ - fVar95;
      fVar96 = auVar91._12_4_;
      auVar112._12_4_ = auVar80._12_4_ - fVar96;
      fVar125 = auVar128._0_4_;
      fVar86 = auVar97._0_4_;
      auVar135._0_4_ = fVar125 - fVar86;
      fVar69 = auVar128._4_4_;
      fVar126 = auVar97._4_4_;
      auVar135._4_4_ = fVar69 - fVar126;
      fVar79 = auVar128._8_4_;
      fVar74 = auVar128._12_4_;
      fVar132 = auVar97._8_4_;
      auVar135._8_4_ = fVar79 - fVar132;
      fVar63 = auVar97._12_4_;
      auVar135._12_4_ = fVar74 - fVar63;
      auVar110._0_4_ = auVar112._0_4_ * auVar112._0_4_ + auVar115._0_4_ * auVar115._0_4_;
      auVar110._4_4_ = auVar112._4_4_ * auVar112._4_4_ + auVar115._4_4_ * auVar115._4_4_;
      auVar110._8_4_ = auVar112._8_4_ * auVar112._8_4_ + auVar115._8_4_ * auVar115._8_4_;
      auVar110._12_4_ = auVar112._12_4_ * auVar112._12_4_ + auVar115._12_4_ * auVar115._12_4_;
      auVar97._0_4_ = auVar135._0_4_ * auVar135._0_4_ + auVar110._0_4_;
      auVar97._4_4_ = auVar135._4_4_ * auVar135._4_4_ + auVar110._4_4_;
      auVar97._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar110._8_4_;
      auVar97._12_4_ = auVar135._12_4_ * auVar135._12_4_ + auVar110._12_4_;
      auVar111 = sqrtps(auVar110,auVar97);
      uVar35 = -(uint)(auVar97._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar37 = -(uint)(auVar97._4_4_ < _UNK_1506895e4);
      uVar39 = -(uint)(auVar97._8_4_ < _UNK_1506895e8);
      uVar41 = -(uint)(auVar97._12_4_ < _UNK_1506895ec);
      auVar91._4_4_ = uVar37;
      auVar91._0_4_ = uVar35;
      auVar91._8_4_ = uVar39;
      auVar91._12_4_ = uVar41;
      auVar128 = divps(auVar115,auVar111);
      auVar97 = divps(auVar112,auVar111);
      auVar67 = divps(auVar135,auVar111);
      auVar128 = blendvps(auVar128,___xmm_3f8000003f8000003f8000003f800000,auVar91);
      auVar91 = insertps(ZEXT416(uVar57),ZEXT416(uVar58),0x10);
      auVar91 = insertps(auVar91,ZEXT416(uVar59),0x20);
      auVar91 = insertps(auVar91,ZEXT416(uVar60),0x30);
      pfVar2 = (float *)(param_3 + (uVar27 & 0xffffffff));
      fVar43 = (float)(~uVar35 & auVar111._0_4_) - *pfVar2;
      fVar49 = (float)(~uVar37 & auVar111._4_4_) - pfVar2[1];
      fVar50 = (float)(~uVar39 & auVar111._8_4_) - pfVar2[2];
      fVar51 = (float)(~uVar41 & auVar111._12_4_) - pfVar2[3];
      uVar66 = *(uint *)(param_1 + 0xc + lVar30);
      uVar70 = *(uint *)(param_1 + 0xc + lVar19);
      auVar112 = insertps(ZEXT416(uVar66),ZEXT416(uVar70),0x10);
      uVar72 = *(uint *)(param_1 + 0xc + lVar22);
      auVar112 = insertps(auVar112,ZEXT416(uVar72),0x20);
      uVar76 = *(uint *)(param_1 + 0xc + lVar21);
      auVar112 = insertps(auVar112,ZEXT416(uVar76),0x30);
      fVar65 = auVar91._0_4_;
      fVar119 = auVar91._4_4_;
      fVar124 = auVar91._8_4_;
      fVar75 = auVar91._12_4_;
      fVar109 = auVar112._0_4_;
      auVar111._0_4_ = fVar65 + fVar109;
      fVar127 = auVar112._4_4_;
      auVar111._4_4_ = fVar119 + fVar127;
      fVar133 = auVar112._8_4_;
      auVar111._8_4_ = fVar124 + fVar133;
      fVar134 = auVar112._12_4_;
      auVar111._12_4_ = fVar75 + fVar134;
      auVar105._0_4_ = auVar128._0_4_ * fVar43 * param_4;
      auVar105._4_4_ = auVar128._4_4_ * fVar49 * param_4;
      auVar105._8_4_ = auVar128._8_4_ * fVar50 * param_4;
      auVar105._12_4_ = auVar128._12_4_ * fVar51 * param_4;
      auVar120._0_4_ = (float)(~uVar35 & auVar97._0_4_) * fVar43 * param_4;
      auVar120._4_4_ = (float)(~uVar37 & auVar97._4_4_) * fVar49 * param_4;
      auVar120._8_4_ = (float)(~uVar39 & auVar97._8_4_) * fVar50 * param_4;
      auVar120._12_4_ = (float)(~uVar41 & auVar97._12_4_) * fVar51 * param_4;
      auVar128._0_4_ = fVar43 * (float)(~uVar35 & auVar67._0_4_) * param_4;
      auVar128._4_4_ = fVar49 * (float)(~uVar37 & auVar67._4_4_) * param_4;
      auVar128._8_4_ = fVar50 * (float)(~uVar39 & auVar67._8_4_) * param_4;
      auVar128._12_4_ = fVar51 * (float)(~uVar41 & auVar67._12_4_) * param_4;
      auVar91 = divps(auVar105,auVar111);
      auVar67 = divps(auVar120,auVar111);
      auVar97 = divps(auVar128,auVar111);
      unaff_XMM15._0_12_ = ZEXT812(0);
      unaff_XMM15._12_4_ = 0;
      uVar35 = -(uint)(fVar109 == 0.0 && fVar65 == 0.0);
      uVar37 = -(uint)(fVar127 == 0.0 && fVar119 == 0.0);
      uVar39 = -(uint)(fVar133 == 0.0 && fVar124 == 0.0);
      uVar41 = -(uint)(fVar134 == 0.0 && fVar75 == 0.0);
      fVar114 = (float)(~uVar35 & auVar91._0_4_);
      fVar116 = (float)(~uVar37 & auVar91._4_4_);
      fVar117 = (float)(~uVar39 & auVar91._8_4_);
      fVar118 = (float)(~uVar41 & auVar91._12_4_);
      fVar104 = (float)(~uVar35 & auVar67._0_4_);
      fVar106 = (float)(~uVar37 & auVar67._4_4_);
      fVar107 = (float)(~uVar39 & auVar67._8_4_);
      fVar108 = (float)(~uVar41 & auVar67._12_4_);
      fVar43 = (float)(~uVar35 & auVar97._0_4_);
      fVar49 = (float)(~uVar37 & auVar97._4_4_);
      fVar50 = (float)(~uVar39 & auVar97._8_4_);
      fVar51 = (float)(~uVar41 & auVar97._12_4_);
      auVar67._4_4_ = -(uint)(0.0 < fVar119);
      auVar67._0_4_ = -(uint)(0.0 < fVar65);
      auVar67._8_4_ = -(uint)(0.0 < fVar124);
      auVar67._12_4_ = -(uint)(0.0 < fVar75);
      iVar25 = movmskps((int)uVar27,auVar67);
      uVar26 = 0;
      if (iVar25 != 0) {
        bVar24 = (char)((char)iVar25 << 4) >> 4;
        uVar26 = CONCAT31((int3)((uint)iVar25 >> 8),bVar24);
        auVar99._0_4_ = auVar98._0_4_ - fVar65 * fVar114;
        auVar99._4_4_ = auVar98._4_4_ - fVar119 * fVar116;
        auVar99._8_4_ = auVar98._8_4_ - fVar124 * fVar117;
        auVar99._12_4_ = auVar98._12_4_ - fVar75 * fVar118;
        if ((bVar24 & 1) != 0) {
          *(float *)(param_1 + lVar20) = auVar99._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar99,1);
          *(undefined8 *)(param_1 + lVar29) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar99,2);
          *(undefined8 *)(param_1 + lVar28) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar99,3);
          *(undefined8 *)(param_1 + lVar32) = uVar5;
        }
        auVar98._0_4_ = auVar80._0_4_ - fVar65 * fVar104;
        auVar98._4_4_ = auVar80._4_4_ - fVar119 * fVar106;
        auVar98._8_4_ = auVar80._8_4_ - fVar124 * fVar107;
        auVar98._12_4_ = auVar80._12_4_ - fVar75 * fVar108;
        if ((bVar24 & 1) == 0) {
          if ((bVar24 & 2) == 0) goto LAB_140369ddd;
LAB_140369f80:
          uVar5 = extractps(auVar98,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_140369f93;
LAB_140369de7:
          if (-1 < (char)bVar24) goto LAB_140369df0;
LAB_140369fa5:
          uVar5 = extractps(auVar98,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar5;
          auVar80._0_4_ = fVar125 - fVar65 * fVar43;
          auVar80._4_4_ = fVar69 - fVar119 * fVar49;
          auVar80._8_4_ = fVar79 - fVar124 * fVar50;
          auVar80._12_4_ = fVar74 - fVar75 * fVar51;
        }
        else {
          *(float *)(param_1 + 4 + lVar20) = auVar98._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_140369f80;
LAB_140369ddd:
          if ((bVar24 & 4) == 0) goto LAB_140369de7;
LAB_140369f93:
          uVar5 = extractps(auVar98,2);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_140369fa5;
LAB_140369df0:
          auVar80._0_4_ = fVar125 - fVar65 * fVar43;
          auVar80._4_4_ = fVar69 - fVar119 * fVar49;
          auVar80._8_4_ = fVar79 - fVar124 * fVar50;
          auVar80._12_4_ = fVar74 - fVar75 * fVar51;
        }
        if ((bVar24 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar80._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar80,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar80,2);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar80,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar5;
        }
        if ((bVar24 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar57;
        }
        if ((bVar24 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar58;
        }
        if ((bVar24 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar59;
        }
        if ((char)bVar24 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar60;
        }
      }
      auVar44._4_4_ = -(uint)(0.0 < fVar127);
      auVar44._0_4_ = -(uint)(0.0 < fVar109);
      auVar44._8_4_ = -(uint)(0.0 < fVar133);
      auVar44._12_4_ = -(uint)(0.0 < fVar134);
      iVar25 = movmskps(uVar26,auVar44);
      if (iVar25 != 0) {
        bVar24 = (char)((char)iVar25 << 4) >> 4;
        auVar102._0_4_ = auVar101._0_4_ + fVar114 * fVar109;
        auVar102._4_4_ = auVar101._4_4_ + fVar116 * fVar127;
        auVar102._8_4_ = auVar101._8_4_ + fVar117 * fVar133;
        auVar102._12_4_ = auVar101._12_4_ + fVar118 * fVar134;
        if ((bVar24 & 1) == 0) {
          if ((bVar24 & 2) == 0) goto LAB_140369e86;
LAB_14036a064:
          uVar5 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + lVar19) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_14036a076;
LAB_140369e90:
          if (-1 < (char)bVar24) goto LAB_140369e99;
LAB_14036a087:
          uVar5 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + lVar21) = uVar5;
          auVar101._0_4_ = fVar64 + fVar104 * fVar109;
          auVar101._4_4_ = fVar94 + fVar106 * fVar127;
          auVar101._8_4_ = fVar95 + fVar107 * fVar133;
          auVar101._12_4_ = fVar96 + fVar108 * fVar134;
          if ((bVar24 & 1) != 0) goto LAB_14036a0a1;
LAB_140369eab:
          if ((bVar24 & 2) == 0) goto LAB_140369eb5;
LAB_14036a0b2:
          uVar5 = extractps(auVar101,1);
          *(undefined8 *)(param_1 + 4 + lVar19) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_14036a0c4;
LAB_140369ebf:
          if (-1 < (char)bVar24) goto LAB_140369ec8;
LAB_14036a0d5:
          uVar5 = extractps(auVar101,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar5;
          auVar87._0_4_ = fVar86 + fVar109 * fVar43;
          auVar87._4_4_ = fVar126 + fVar127 * fVar49;
          auVar87._8_4_ = fVar132 + fVar133 * fVar50;
          auVar87._12_4_ = fVar63 + fVar134 * fVar51;
        }
        else {
          *(float *)(param_1 + lVar30) = auVar102._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_14036a064;
LAB_140369e86:
          if ((bVar24 & 4) == 0) goto LAB_140369e90;
LAB_14036a076:
          uVar5 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + lVar22) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_14036a087;
LAB_140369e99:
          auVar101._0_4_ = fVar64 + fVar104 * fVar109;
          auVar101._4_4_ = fVar94 + fVar106 * fVar127;
          auVar101._8_4_ = fVar95 + fVar107 * fVar133;
          auVar101._12_4_ = fVar96 + fVar108 * fVar134;
          if ((bVar24 & 1) == 0) goto LAB_140369eab;
LAB_14036a0a1:
          *(int *)(param_1 + 4 + lVar30) = auVar101._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_14036a0b2;
LAB_140369eb5:
          if ((bVar24 & 4) == 0) goto LAB_140369ebf;
LAB_14036a0c4:
          uVar5 = extractps(auVar101,2);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_14036a0d5;
LAB_140369ec8:
          auVar87._0_4_ = fVar86 + fVar109 * fVar43;
          auVar87._4_4_ = fVar126 + fVar127 * fVar49;
          auVar87._8_4_ = fVar132 + fVar133 * fVar50;
          auVar87._12_4_ = fVar63 + fVar134 * fVar51;
        }
        if ((bVar24 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar30) = auVar87._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar87,1);
          *(undefined8 *)(param_1 + 8 + lVar19) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar87,2);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar87,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar5;
        }
        if ((bVar24 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar66;
        }
        if ((bVar24 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar70;
        }
        if ((bVar24 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar22) = uVar72;
        }
        if ((char)bVar24 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar76;
        }
      }
      uVar27 = uVar27 + 0x10;
      uVar17 = uVar17 + 4;
    } while ((int)uVar17 < (int)(uVar23 & 0xfffffffc));
  }
  if ((int)param_5 <= (int)uVar17) {
    return;
  }
  bVar6 = (int)(uVar17 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  uVar57 = -(uint)bVar6;
  bVar7 = (int)(uVar17 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  uVar58 = -(uint)bVar7;
  bVar8 = (int)(uVar17 | _UNK_150631e08) < (int)param_5;
  uVar59 = -(uint)bVar8;
  bVar9 = (int)(uVar17 | _UNK_150631e0c) < (int)param_5;
  uVar60 = -(uint)bVar9;
  piVar1 = (int *)(param_2 + (ulonglong)uVar17 * 8);
  auVar10._4_4_ = uVar58;
  auVar10._0_4_ = uVar57;
  auVar10._8_4_ = uVar59;
  auVar10._12_4_ = uVar60;
  uVar23 = movmskps(uVar17,auVar10);
  bVar24 = (char)((char)uVar23 << 4) >> 4;
  if (uVar23 == 0xf) {
    iVar25 = *piVar1;
    iVar78 = piVar1[1];
    iVar71 = piVar1[2];
    iVar83 = piVar1[3];
    iVar73 = piVar1[4];
    iVar84 = piVar1[5];
    iVar77 = piVar1[6];
    iVar85 = piVar1[7];
  }
  else {
    auVar45._0_4_ = ___xmm_00000018000000100000000800000000 & uVar57;
    auVar45._4_4_ = _UNK_150b51a04 & uVar58;
    auVar45._8_4_ = _UNK_150b51a08 & uVar59;
    auVar45._12_4_ = _UNK_150b51a0c & uVar60;
    lVar19 = extractps(auVar45,1);
    lVar20 = extractps(auVar45,2);
    lVar21 = extractps(auVar45,3);
    iVar25 = *piVar1;
    iVar71 = *(int *)((longlong)piVar1 + lVar19);
    iVar73 = *(int *)((longlong)piVar1 + lVar20);
    iVar77 = *(int *)((longlong)piVar1 + lVar21);
    iVar78 = *(int *)((longlong)piVar1 +
                     (ulonglong)(___xmm_0000001c000000140000000c00000004 & uVar57));
    iVar83 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a14 & uVar58));
    iVar84 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a18 & uVar59));
    iVar85 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a1c & uVar60));
  }
  uVar66 = iVar25 << 4;
  uVar70 = iVar71 << 4;
  uVar72 = iVar73 << 4;
  uVar76 = iVar77 << 4;
  lVar19 = param_1 + (int)(uVar57 & uVar66);
  lVar20 = param_1 + (int)(uVar58 & uVar70);
  lVar21 = param_1 + (int)(uVar59 & uVar72);
  lVar22 = param_1 + (int)(uVar60 & uVar76);
  uVar31 = (ulonglong)(___xmm_00000004000000040000000400000004 & uVar57);
  uVar27 = (ulonglong)(___xmm_00000008000000080000000800000008 & uVar57);
  uVar35 = iVar78 << 4;
  uVar37 = iVar83 << 4;
  uVar39 = iVar84 << 4;
  uVar41 = iVar85 << 4;
  lVar33 = (longlong)(int)(uVar57 & uVar35);
  auVar97 = ZEXT416(*(uint *)(param_1 + (int)(uVar57 & uVar66)));
  lVar28 = param_1 + lVar33;
  lVar29 = param_1 + (int)(uVar58 & uVar37);
  lVar32 = (int)(uVar59 & uVar39) + param_1;
  lVar30 = param_1 + (int)(uVar60 & uVar41);
  bVar34 = (bVar24 & 2) != 0;
  if (bVar34) {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar58 & uVar70)),0x10);
  }
  auVar91 = ZEXT416(*(uint *)(uVar31 + lVar19));
  if (bVar34) {
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar58) + lVar20),0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar27 + lVar19)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar58) + lVar20),0x10);
    auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar33)),
                       *(undefined4 *)(param_1 + (int)(uVar58 & uVar37)),0x10);
    auVar128 = insertps(ZEXT416(*(uint *)(uVar31 + lVar28)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar58) + lVar29),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar27 + lVar28)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar58) + lVar29),0x10);
  }
  else {
    auVar112 = ZEXT416(*(uint *)(uVar27 + lVar19));
    auVar67 = ZEXT416(*(uint *)(param_1 + lVar33));
    auVar128 = ZEXT416(*(uint *)(uVar31 + lVar28));
    auVar111 = ZEXT416(*(uint *)(uVar27 + lVar28));
  }
  if ((bVar24 & 4) != 0) {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar59 & uVar72)),0x20);
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar59) + lVar21),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar59) + lVar21),0x20
                       );
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + (int)(uVar59 & uVar39)),0x20);
    auVar128 = insertps(auVar128,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar59) + lVar32),0x20
                       );
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar59) + lVar32),0x20
                       );
  }
  if ((char)bVar24 < '\0') {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar60 & uVar76)),0x30);
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar60) + lVar22),0x30);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar60) + lVar22),0x30
                       );
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + (int)(uVar60 & uVar41)),0x30);
    auVar128 = insertps(auVar128,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar60) + lVar30),0x30
                       );
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar60) + lVar30),0x30
                       );
  }
  fVar43 = auVar97._0_4_ - auVar67._0_4_;
  fVar49 = auVar97._4_4_ - auVar67._4_4_;
  auVar61._0_8_ = CONCAT44(fVar49,fVar43);
  auVar61._8_4_ = auVar97._8_4_ - auVar67._8_4_;
  auVar61._12_4_ = auVar97._12_4_ - auVar67._12_4_;
  fVar79 = auVar91._0_4_;
  fVar119 = fVar79 - auVar128._0_4_;
  fVar74 = auVar91._4_4_;
  fVar124 = fVar74 - auVar128._4_4_;
  auVar121._0_8_ = CONCAT44(fVar124,fVar119);
  fVar75 = auVar91._8_4_;
  fVar86 = auVar91._12_4_;
  auVar121._8_4_ = fVar75 - auVar128._8_4_;
  auVar121._12_4_ = fVar86 - auVar128._12_4_;
  fVar50 = auVar111._0_4_;
  fVar126 = auVar112._0_4_ - fVar50;
  fVar51 = auVar111._4_4_;
  fVar132 = auVar112._4_4_ - fVar51;
  auVar129._0_8_ = CONCAT44(fVar132,fVar126);
  fVar65 = auVar111._8_4_;
  auVar129._8_4_ = auVar112._8_4_ - fVar65;
  fVar69 = auVar111._12_4_;
  auVar129._12_4_ = auVar112._12_4_ - fVar69;
  auVar46._0_4_ = fVar126 * fVar126 + fVar119 * fVar119 + fVar43 * fVar43;
  auVar46._4_4_ = fVar132 * fVar132 + fVar124 * fVar124 + fVar49 * fVar49;
  auVar46._8_4_ =
       auVar129._8_4_ * auVar129._8_4_ +
       auVar121._8_4_ * auVar121._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar46._12_4_ =
       auVar129._12_4_ * auVar129._12_4_ +
       auVar121._12_4_ * auVar121._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar135 = sqrtps(unaff_XMM15,auVar46);
  uVar36 = -(uint)(auVar46._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar38 = -(uint)(auVar46._4_4_ < _UNK_1506895e4);
  uVar40 = -(uint)(auVar46._8_4_ < _UNK_1506895e8);
  uVar42 = -(uint)(auVar46._12_4_ < _UNK_1506895ec);
  auVar47._4_4_ = uVar38;
  auVar47._0_4_ = uVar36;
  auVar47._8_4_ = uVar40;
  auVar47._12_4_ = uVar42;
  auVar52._8_4_ = auVar121._8_4_;
  auVar52._0_8_ = auVar121._0_8_;
  auVar52._12_4_ = auVar121._12_4_;
  auVar91 = divps(auVar52,auVar135);
  auVar92._8_4_ = auVar129._8_4_;
  auVar92._0_8_ = auVar129._0_8_;
  auVar92._12_4_ = auVar129._12_4_;
  auVar111 = divps(auVar92,auVar135);
  auVar81._0_8_ = CONCAT44(~uVar38 & auVar91._4_4_,~uVar36 & auVar91._0_4_);
  auVar81._8_4_ = ~uVar40 & auVar91._8_4_;
  auVar81._12_4_ = ~uVar42 & auVar91._12_4_;
  auVar88._0_8_ = CONCAT44(~uVar38 & auVar111._4_4_,~uVar36 & auVar111._0_4_);
  auVar88._8_4_ = ~uVar40 & auVar111._8_4_;
  auVar88._12_4_ = ~uVar42 & auVar111._12_4_;
  auVar93._8_4_ = auVar61._8_4_;
  auVar93._0_8_ = auVar61._0_8_;
  auVar93._12_4_ = auVar61._12_4_;
  auVar91 = divps(auVar93,auVar135);
  auVar91 = blendvps(auVar91,___xmm_3f8000003f8000003f8000003f800000,auVar47);
  auVar100._8_4_ = auVar61._8_4_;
  auVar100._0_8_ = auVar61._0_8_;
  auVar100._12_4_ = auVar61._12_4_;
  auVar103._8_4_ = auVar121._8_4_;
  auVar103._0_8_ = auVar121._0_8_;
  auVar103._12_4_ = auVar121._12_4_;
  auVar53._8_4_ = auVar129._8_4_;
  auVar53._0_8_ = auVar129._0_8_;
  auVar53._12_4_ = auVar129._12_4_;
  if ((bVar24 & 1) != 0) {
    auVar103._8_4_ = auVar81._8_4_;
    auVar103._0_8_ = auVar81._0_8_;
    auVar103._12_4_ = auVar81._12_4_;
    auVar53._8_4_ = auVar88._8_4_;
    auVar53._0_8_ = auVar88._0_8_;
    auVar53._12_4_ = auVar88._12_4_;
    auVar100 = auVar91;
  }
  auVar80 = blendps(auVar61,auVar100,1);
  bVar34 = (bVar24 & 2) != 0;
  auVar111 = auVar80;
  if (bVar34) {
    auVar111 = auVar91;
  }
  auVar98 = blendps(auVar121,auVar103,1);
  if (bVar34) {
    auVar113._8_4_ = auVar81._8_4_;
    auVar113._0_8_ = auVar81._0_8_;
    auVar113._12_4_ = auVar81._12_4_;
    auVar101 = blendps(auVar129,auVar53,1);
    auVar130._8_4_ = auVar88._8_4_;
    auVar130._0_8_ = auVar88._0_8_;
    auVar130._12_4_ = auVar88._12_4_;
    auVar111 = blendps(auVar80,auVar111,2);
    if ((bVar24 & 4) != 0) goto LAB_14036a79b;
LAB_14036a517:
    auVar122 = blendps(auVar98,auVar113,2);
    auVar131 = blendps(auVar101,auVar130,2);
    auVar80 = auVar111;
    auVar98 = auVar122;
    auVar101 = auVar131;
  }
  else {
    auVar130 = blendps(auVar129,auVar53,1);
    auVar111 = blendps(auVar80,auVar111,2);
    auVar113 = auVar98;
    auVar101 = auVar130;
    if ((bVar24 & 4) == 0) goto LAB_14036a517;
LAB_14036a79b:
    auVar98 = blendps(auVar98,auVar113,2);
    auVar122._8_4_ = auVar81._8_4_;
    auVar122._0_8_ = auVar81._0_8_;
    auVar122._12_4_ = auVar81._12_4_;
    auVar101 = blendps(auVar101,auVar130,2);
    auVar131._8_4_ = auVar88._8_4_;
    auVar131._0_8_ = auVar88._0_8_;
    auVar131._12_4_ = auVar88._12_4_;
    auVar80 = auVar91;
  }
  auVar111 = blendps(auVar111,auVar80,4);
  bVar34 = -1 < (char)bVar24;
  if (bVar34) {
    auVar91 = auVar111;
  }
  auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)
                                        (___xmm_0000000c0000000c0000000c0000000c & uVar57) + lVar19)
                             ),*(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar58) + lVar20),0x10);
  auVar80 = insertps(ZEXT416(*(uint *)((ulonglong)(___xmm_0000000c0000000c0000000c0000000c & uVar57)
                                      + lVar28)),
                     *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar58) + lVar29),0x10);
  auVar98 = blendps(auVar98,auVar122,4);
  if (bVar34) {
    auVar81 = auVar98;
  }
  auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar59) + lVar21),0x20);
  auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar59) + lVar32),0x20);
  auVar101 = blendps(auVar101,auVar131,4);
  if (bVar34) {
    auVar88 = auVar101;
  }
  auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar60) + lVar22),0x30);
  auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar60) + lVar30),0x30);
  auVar91 = blendps(auVar111,auVar91,8);
  auVar111 = blendps(auVar98,auVar81,8);
  auVar98 = blendps(auVar101,auVar88,8);
  puVar18 = (uint *)(longlong)(int)(uVar17 << 2);
  if ((~bVar24 & 9) == 0) {
    auVar81 = *(undefined1 (*) [16])(param_3 + (longlong)puVar18);
  }
  else {
    puVar4 = (uint *)(param_3 + (longlong)puVar18);
    if ((uVar23 & 1) != 0) {
      auVar81 = ZEXT416(*puVar4);
      puVar18 = puVar4;
    }
    if ((uVar23 & 2) != 0) {
      auVar81 = insertps(auVar81,puVar4[1],0x10);
      puVar18 = puVar4;
    }
    if ((uVar23 & 4) != 0) {
      auVar81 = insertps(auVar81,puVar4[2],0x20);
      puVar18 = puVar4;
    }
    if ((uVar23 & 8) != 0) {
      auVar81 = insertps(auVar81,puVar4[3],0x30);
      puVar18 = puVar4;
    }
  }
  fVar43 = (float)(~uVar36 & auVar135._0_4_) - auVar81._0_4_;
  fVar49 = (float)(~uVar38 & auVar135._4_4_) - auVar81._4_4_;
  fVar119 = (float)(~uVar40 & auVar135._8_4_) - auVar81._8_4_;
  fVar124 = (float)(~uVar42 & auVar135._12_4_) - auVar81._12_4_;
  fVar106 = auVar115._0_4_;
  fVar107 = auVar115._4_4_;
  fVar108 = auVar115._8_4_;
  fVar109 = auVar115._12_4_;
  fVar94 = auVar80._0_4_;
  auVar48._0_4_ = fVar106 + fVar94;
  fVar95 = auVar80._4_4_;
  auVar48._4_4_ = fVar107 + fVar95;
  fVar96 = auVar80._8_4_;
  auVar48._8_4_ = fVar108 + fVar96;
  fVar104 = auVar80._12_4_;
  auVar48._12_4_ = fVar109 + fVar104;
  auVar62._0_4_ = auVar91._0_4_ * fVar43 * param_4;
  auVar62._4_4_ = auVar91._4_4_ * fVar49 * param_4;
  auVar62._8_4_ = auVar91._8_4_ * fVar119 * param_4;
  auVar62._12_4_ = auVar91._12_4_ * fVar124 * param_4;
  auVar123._0_4_ = auVar111._0_4_ * fVar43 * param_4;
  auVar123._4_4_ = auVar111._4_4_ * fVar49 * param_4;
  auVar123._8_4_ = auVar111._8_4_ * fVar119 * param_4;
  auVar123._12_4_ = auVar111._12_4_ * fVar124 * param_4;
  auVar89._0_4_ = param_4 * auVar98._0_4_ * fVar43;
  auVar89._4_4_ = param_4 * auVar98._4_4_ * fVar49;
  auVar89._8_4_ = param_4 * auVar98._8_4_ * fVar119;
  auVar89._12_4_ = param_4 * auVar98._12_4_ * fVar124;
  auVar91 = divps(auVar62,auVar48);
  auVar135 = divps(auVar123,auVar48);
  auVar111 = divps(auVar89,auVar48);
  uVar23 = -(uint)(fVar94 == 0.0 && fVar106 == 0.0);
  uVar17 = -(uint)(fVar95 == 0.0 && fVar107 == 0.0);
  uVar57 = -(uint)(fVar96 == 0.0 && fVar108 == 0.0);
  uVar58 = -(uint)(fVar104 == 0.0 && fVar109 == 0.0);
  fVar127 = (float)(~uVar23 & auVar91._0_4_);
  fVar133 = (float)(~uVar17 & auVar91._4_4_);
  fVar134 = (float)(~uVar57 & auVar91._8_4_);
  fVar114 = (float)(~uVar58 & auVar91._12_4_);
  fVar126 = (float)(~uVar23 & auVar135._0_4_);
  fVar132 = (float)(~uVar17 & auVar135._4_4_);
  fVar63 = (float)(~uVar57 & auVar135._8_4_);
  fVar64 = (float)(~uVar58 & auVar135._12_4_);
  fVar43 = (float)(~uVar23 & auVar111._0_4_);
  fVar49 = (float)(~uVar17 & auVar111._4_4_);
  fVar119 = (float)(~uVar57 & auVar111._8_4_);
  fVar124 = (float)(~uVar58 & auVar111._12_4_);
  auVar54._0_4_ = -(uint)(0.0 < fVar106 && bVar6);
  auVar54._4_4_ = -(uint)(0.0 < fVar107 && bVar7);
  auVar54._8_4_ = -(uint)(0.0 < fVar108 && bVar8);
  auVar54._12_4_ = -(uint)(0.0 < fVar109 && bVar9);
  iVar25 = movmskps((int)puVar18,auVar54);
  uVar23 = 0;
  if (iVar25 == 0) goto LAB_14036a95e;
  bVar24 = (char)((char)iVar25 << 4) >> 4;
  auVar90._0_4_ = auVar97._0_4_ - fVar106 * fVar127;
  auVar90._4_4_ = auVar97._4_4_ - fVar107 * fVar133;
  auVar90._8_4_ = auVar97._8_4_ - fVar108 * fVar134;
  auVar90._12_4_ = auVar97._12_4_ - fVar109 * fVar114;
  if ((bVar24 & 1) == 0) {
    if ((bVar24 & 2) == 0) goto LAB_14036a8c1;
LAB_14036aad7:
    uVar5 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + (int)uVar70) = uVar5;
    if ((bVar24 & 4) != 0) goto LAB_14036aaf2;
LAB_14036a8d1:
    if (-1 < (char)bVar24) goto LAB_14036a8e0;
LAB_14036ab0c:
    uVar5 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + (int)uVar76) = uVar5;
    auVar82._0_4_ = fVar79 - fVar106 * fVar126;
    auVar82._4_4_ = fVar74 - fVar107 * fVar132;
    auVar82._8_4_ = fVar75 - fVar108 * fVar63;
    auVar82._12_4_ = fVar86 - fVar109 * fVar64;
  }
  else {
    *(float *)(param_1 + (int)uVar66) = auVar90._0_4_;
    if ((bVar24 & 2) != 0) goto LAB_14036aad7;
LAB_14036a8c1:
    if ((bVar24 & 4) == 0) goto LAB_14036a8d1;
LAB_14036aaf2:
    uVar5 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + (int)uVar72) = uVar5;
    if ((char)bVar24 < '\0') goto LAB_14036ab0c;
LAB_14036a8e0:
    auVar82._0_4_ = fVar79 - fVar106 * fVar126;
    auVar82._4_4_ = fVar74 - fVar107 * fVar132;
    auVar82._8_4_ = fVar75 - fVar108 * fVar63;
    auVar82._12_4_ = fVar86 - fVar109 * fVar64;
  }
  if ((bVar24 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)uVar66) = auVar82._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar82,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar82,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar72) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar82,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar76) = uVar5;
  }
  fVar79 = auVar112._0_4_ - fVar106 * fVar43;
  auVar55._4_4_ = auVar112._4_4_ - fVar107 * fVar49;
  auVar55._0_4_ = fVar79;
  auVar55._8_4_ = auVar112._8_4_ - fVar108 * fVar119;
  auVar55._12_4_ = auVar112._12_4_ - fVar109 * fVar124;
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)(int)uVar66) = fVar79;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar55,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar55,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar72) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar55,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar76) = uVar5;
  }
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar66) = fVar106;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar115,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar115,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar72) = uVar5;
  }
  uVar23 = CONCAT31((int3)((uint)iVar25 >> 8),bVar24);
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar76) = uVar5;
    uVar23 = uVar76;
  }
LAB_14036a95e:
  auVar136._0_4_ = -(uint)(0.0 < fVar94 && bVar6);
  auVar136._4_4_ = -(uint)(0.0 < fVar95 && bVar7);
  auVar136._8_4_ = -(uint)(0.0 < fVar96 && bVar8);
  auVar136._12_4_ = -(uint)(0.0 < fVar104 && bVar9);
  iVar25 = movmskps(uVar23,auVar136);
  if (iVar25 == 0) {
    return;
  }
  bVar24 = (char)((char)iVar25 << 4) >> 4;
  auVar68._0_4_ = auVar67._0_4_ + fVar127 * fVar94;
  auVar68._4_4_ = auVar67._4_4_ + fVar133 * fVar95;
  auVar68._8_4_ = auVar67._8_4_ + fVar134 * fVar96;
  auVar68._12_4_ = auVar67._12_4_ + fVar114 * fVar104;
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + (int)uVar35) = auVar68._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar68,1);
    *(undefined8 *)(param_1 + (int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar68,2);
    *(undefined8 *)(param_1 + (int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar68,3);
    *(undefined8 *)(param_1 + (int)uVar41) = uVar5;
  }
  uVar16 = auVar128._12_4_ + fVar64 * fVar104;
  uVar15 = auVar128._8_4_ + fVar63 * fVar96;
  uVar14 = auVar128._4_4_ + fVar132 * fVar95;
  uVar26 = auVar128._0_4_ + fVar126 * fVar94;
  if ((bVar24 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)(int)uVar35) = uVar26;
  }
  if ((bVar24 & 2) != 0) {
    auVar13._4_4_ = uVar14;
    auVar13._0_4_ = uVar26;
    auVar13._8_4_ = uVar15;
    auVar13._12_4_ = uVar16;
    uVar5 = extractps(auVar13,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    auVar12._4_4_ = uVar14;
    auVar12._0_4_ = uVar26;
    auVar12._8_4_ = uVar15;
    auVar12._12_4_ = uVar16;
    uVar5 = extractps(auVar12,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    auVar11._4_4_ = uVar14;
    auVar11._0_4_ = uVar26;
    auVar11._8_4_ = uVar15;
    auVar11._12_4_ = uVar16;
    uVar5 = extractps(auVar11,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar41) = uVar5;
    auVar56._0_4_ = fVar50 + fVar43 * fVar94;
    auVar56._4_4_ = fVar51 + fVar49 * fVar95;
    auVar56._8_4_ = fVar65 + fVar119 * fVar96;
    auVar56._12_4_ = fVar69 + fVar124 * fVar104;
  }
  else {
    auVar56._0_4_ = fVar50 + fVar43 * fVar94;
    auVar56._4_4_ = fVar51 + fVar49 * fVar95;
    auVar56._8_4_ = fVar65 + fVar119 * fVar96;
    auVar56._12_4_ = fVar69 + fVar124 * fVar104;
  }
  if ((bVar24 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)uVar35) = auVar56._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar56,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar56,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar56,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar41) = uVar5;
  }
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar35) = fVar94;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar41) = uVar5;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 14036add0

/* WARNING: Removing unreachable block (ram,0x00014036bc1b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  uint uVar56;
  float fVar57;
  uint uVar58;
  float fVar59;
  uint uVar60;
  float fVar61;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  int iVar71;
  int iVar76;
  float fVar77;
  undefined1 auVar72 [16];
  int iVar78;
  float fVar79;
  int iVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar89;
  float fVar90;
  float fVar92;
  undefined1 auVar86 [16];
  float fVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar93;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  float fVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar112;
  float fVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  float fVar115;
  float fVar119;
  undefined1 auVar116 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar126;
  undefined1 auVar121 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar128;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  int iVar68;
  int iVar69;
  undefined1 auVar117 [16];
  undefined1 auVar122 [16];
  undefined1 auVar129 [16];
  
  uVar12 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar12 = param_6;
  }
  if ((int)(uVar12 & 0xfffffffc) < 1) {
    uVar19 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar19 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar16 * 2);
      iVar10 = *piVar1;
      piVar2 = (int *)(param_2 + 0x10 + uVar16 * 2);
      lVar11 = (longlong)(iVar10 << 4);
      lVar20 = (longlong)(piVar1[2] * 0x10);
      lVar14 = (longlong)(*piVar2 << 4);
      lVar22 = (longlong)(piVar2[2] << 4);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + lVar20),
                          0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar11)),
                          *(undefined4 *)(param_1 + 4 + lVar20),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      auVar121 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar11)),
                          *(undefined4 *)(param_1 + 8 + lVar20),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar104 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      uVar43 = *(uint *)(param_1 + 0xc + lVar11);
      uVar28 = *(uint *)(param_1 + 0xc + lVar20);
      uVar30 = *(uint *)(param_1 + 0xc + lVar14);
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar25 = (longlong)(piVar1[3] * 0x10);
      lVar24 = (longlong)(piVar2[1] << 4);
      lVar13 = (longlong)(piVar2[3] << 4);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar25),
                          0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + lVar24),0x20);
      auVar81 = insertps(auVar100,*(undefined4 *)(param_1 + lVar13),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                          *(undefined4 *)(param_1 + 4 + lVar25),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar24),0x20);
      auVar72 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar13),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                          *(undefined4 *)(param_1 + 8 + lVar25),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar24),0x20);
      uVar32 = *(uint *)(param_1 + 0xc + lVar22);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar13),0x30);
      auVar108._0_4_ = auVar101._0_4_ - auVar81._0_4_;
      auVar108._4_4_ = auVar101._4_4_ - auVar81._4_4_;
      auVar108._8_4_ = auVar101._8_4_ - auVar81._8_4_;
      auVar108._12_4_ = auVar101._12_4_ - auVar81._12_4_;
      fVar70 = auVar72._0_4_;
      auVar86._0_4_ = auVar121._0_4_ - fVar70;
      fVar126 = auVar72._4_4_;
      auVar86._4_4_ = auVar121._4_4_ - fVar126;
      fVar77 = auVar72._8_4_;
      auVar86._8_4_ = auVar121._8_4_ - fVar77;
      fVar79 = auVar72._12_4_;
      auVar86._12_4_ = auVar121._12_4_ - fVar79;
      fVar103 = auVar104._0_4_;
      fVar115 = auVar100._0_4_;
      auVar111._0_4_ = fVar103 - fVar115;
      fVar119 = auVar100._4_4_;
      fVar89 = auVar104._4_4_;
      auVar111._4_4_ = fVar89 - fVar119;
      fVar67 = auVar100._8_4_;
      fVar90 = auVar104._8_4_;
      fVar92 = auVar104._12_4_;
      auVar111._8_4_ = fVar90 - fVar67;
      fVar120 = auVar100._12_4_;
      auVar111._12_4_ = fVar92 - fVar120;
      auVar110._0_4_ = auVar86._0_4_ * auVar86._0_4_ + auVar108._0_4_ * auVar108._0_4_;
      auVar110._4_4_ = auVar86._4_4_ * auVar86._4_4_ + auVar108._4_4_ * auVar108._4_4_;
      auVar110._8_4_ = auVar86._8_4_ * auVar86._8_4_ + auVar108._8_4_ * auVar108._8_4_;
      auVar110._12_4_ = auVar86._12_4_ * auVar86._12_4_ + auVar108._12_4_ * auVar108._12_4_;
      auVar100._0_4_ = auVar111._0_4_ * auVar111._0_4_ + auVar110._0_4_;
      auVar100._4_4_ = auVar111._4_4_ * auVar111._4_4_ + auVar110._4_4_;
      auVar100._8_4_ = auVar111._8_4_ * auVar111._8_4_ + auVar110._8_4_;
      auVar100._12_4_ = auVar111._12_4_ * auVar111._12_4_ + auVar110._12_4_;
      auVar94 = sqrtps(auVar110,auVar100);
      uVar27 = -(uint)(auVar100._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar29 = -(uint)(auVar100._4_4_ < _UNK_1506895e4);
      uVar31 = -(uint)(auVar100._8_4_ < _UNK_1506895e8);
      uVar33 = -(uint)(auVar100._12_4_ < _UNK_1506895ec);
      auVar72._4_4_ = uVar29;
      auVar72._0_4_ = uVar27;
      auVar72._8_4_ = uVar31;
      auVar72._12_4_ = uVar33;
      auVar100 = divps(auVar108,auVar94);
      auVar104 = divps(auVar86,auVar94);
      auVar72 = blendvps(auVar100,___xmm_3f8000003f8000003f8000003f800000,auVar72);
      auVar86 = divps(auVar111,auVar94);
      auVar100 = insertps(ZEXT416(uVar43),ZEXT416(uVar28),0x10);
      auVar100 = insertps(auVar100,ZEXT416(uVar30),0x20);
      auVar116 = insertps(auVar100,ZEXT416(uVar32),0x30);
      auVar100 = *(undefined1 (*) [16])(param_3 + (uVar16 & 0xffffffff));
      fVar35 = (float)(~uVar27 & auVar94._0_4_) - auVar100._0_4_;
      fVar42 = (float)(~uVar29 & auVar94._4_4_) - auVar100._4_4_;
      fVar44 = (float)(~uVar31 & auVar94._8_4_) - auVar100._8_4_;
      fVar45 = (float)(~uVar33 & auVar94._12_4_) - auVar100._12_4_;
      auVar100 = pmovzxbd(auVar100,*(undefined4 *)(param_4 + uVar19));
      auVar108 = insertps(ZEXT416(*(uint *)(param_5 + (ulonglong)(uint)(auVar100._0_4_ << 2))),
                          *(undefined4 *)(param_5 + (ulonglong)(uint)(auVar100._4_4_ * 4)),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_5 + (ulonglong)(uint)(auVar100._8_4_ << 2))
                          ,0x20);
      uVar34 = *(uint *)(param_1 + 0xc + lVar21);
      auVar100 = insertps(auVar108,*(undefined4 *)
                                    (param_5 + (ulonglong)(uint)(auVar100._12_4_ << 2)),0x30);
      fVar49 = auVar100._0_4_;
      auVar94._0_4_ = auVar72._0_4_ * fVar35 * fVar49;
      fVar57 = auVar100._4_4_;
      auVar94._4_4_ = auVar72._4_4_ * fVar42 * fVar57;
      fVar59 = auVar100._8_4_;
      auVar94._8_4_ = auVar72._8_4_ * fVar44 * fVar59;
      fVar61 = auVar100._12_4_;
      auVar94._12_4_ = auVar72._12_4_ * fVar45 * fVar61;
      auVar106._0_4_ = (float)(~uVar27 & auVar104._0_4_) * fVar35 * fVar49;
      auVar106._4_4_ = (float)(~uVar29 & auVar104._4_4_) * fVar42 * fVar57;
      auVar106._8_4_ = (float)(~uVar31 & auVar104._8_4_) * fVar44 * fVar59;
      auVar106._12_4_ = (float)(~uVar33 & auVar104._12_4_) * fVar45 * fVar61;
      auVar109._0_4_ = fVar49 * fVar35 * (float)(~uVar27 & auVar86._0_4_);
      auVar109._4_4_ = fVar57 * fVar42 * (float)(~uVar29 & auVar86._4_4_);
      auVar109._8_4_ = fVar59 * fVar44 * (float)(~uVar31 & auVar86._8_4_);
      auVar109._12_4_ = fVar61 * fVar45 * (float)(~uVar33 & auVar86._12_4_);
      uVar27 = *(uint *)(param_1 + 0xc + lVar25);
      auVar100 = insertps(ZEXT416(uVar34),ZEXT416(uVar27),0x10);
      uVar29 = *(uint *)(param_1 + 0xc + lVar24);
      auVar100 = insertps(auVar100,ZEXT416(uVar29),0x20);
      uVar31 = *(uint *)(param_1 + 0xc + lVar13);
      auVar100 = insertps(auVar100,ZEXT416(uVar31),0x30);
      fVar107 = auVar116._0_4_;
      fVar112 = auVar116._4_4_;
      fVar113 = auVar116._8_4_;
      fVar114 = auVar116._12_4_;
      fVar127 = auVar100._0_4_;
      auVar104._0_4_ = fVar107 + fVar127;
      fVar132 = auVar100._4_4_;
      auVar104._4_4_ = fVar112 + fVar132;
      fVar91 = auVar100._8_4_;
      auVar104._8_4_ = fVar113 + fVar91;
      fVar48 = auVar100._12_4_;
      auVar104._12_4_ = fVar114 + fVar48;
      auVar100 = divps(auVar94,auVar104);
      auVar72 = divps(auVar106,auVar104);
      auVar104 = divps(auVar109,auVar104);
      uVar33 = -(uint)(fVar127 == 0.0 && fVar107 == 0.0);
      uVar56 = -(uint)(fVar132 == 0.0 && fVar112 == 0.0);
      uVar58 = -(uint)(fVar91 == 0.0 && fVar113 == 0.0);
      uVar60 = -(uint)(fVar48 == 0.0 && fVar114 == 0.0);
      fVar93 = (float)(~uVar33 & auVar100._0_4_);
      fVar97 = (float)(~uVar56 & auVar100._4_4_);
      fVar98 = (float)(~uVar58 & auVar100._8_4_);
      fVar99 = (float)(~uVar60 & auVar100._12_4_);
      fVar35 = (float)(~uVar33 & auVar72._0_4_);
      fVar42 = (float)(~uVar56 & auVar72._4_4_);
      fVar44 = (float)(~uVar58 & auVar72._8_4_);
      fVar45 = (float)(~uVar60 & auVar72._12_4_);
      fVar49 = (float)(~uVar33 & auVar104._0_4_);
      fVar57 = (float)(~uVar56 & auVar104._4_4_);
      fVar59 = (float)(~uVar58 & auVar104._8_4_);
      fVar61 = (float)(~uVar60 & auVar104._12_4_);
      auVar116._4_4_ = -(uint)(0.0 < fVar112);
      auVar116._0_4_ = -(uint)(0.0 < fVar107);
      auVar116._8_4_ = -(uint)(0.0 < fVar113);
      auVar116._12_4_ = -(uint)(0.0 < fVar114);
      iVar18 = movmskps((int)param_5,auVar116);
      if (iVar18 != 0) {
        bVar17 = (char)((char)iVar18 << 4) >> 4;
        auVar102._0_4_ = auVar101._0_4_ - fVar107 * fVar93;
        auVar102._4_4_ = auVar101._4_4_ - fVar112 * fVar97;
        auVar102._8_4_ = auVar101._8_4_ - fVar113 * fVar98;
        auVar102._12_4_ = auVar101._12_4_ - fVar114 * fVar99;
        if ((bVar17 & 1) != 0) {
          *(float *)(param_1 + lVar11) = auVar102._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + lVar20) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + lVar14) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + lVar22) = uVar5;
        }
        auVar101._0_4_ = auVar121._0_4_ - fVar107 * fVar35;
        auVar101._4_4_ = auVar121._4_4_ - fVar112 * fVar42;
        auVar101._8_4_ = auVar121._8_4_ - fVar113 * fVar44;
        auVar101._12_4_ = auVar121._12_4_ - fVar114 * fVar45;
        if ((bVar17 & 1) == 0) {
          if ((bVar17 & 2) == 0) goto LAB_14036b1cb;
LAB_14036b361:
          uVar5 = extractps(auVar101,1);
          *(undefined8 *)(param_1 + 4 + lVar20) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036b374;
LAB_14036b1d5:
          if (-1 < (char)bVar17) goto LAB_14036b1de;
LAB_14036b386:
          uVar5 = extractps(auVar101,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar5;
          auVar121._0_4_ = fVar103 - fVar107 * fVar49;
          auVar121._4_4_ = fVar89 - fVar112 * fVar57;
          auVar121._8_4_ = fVar90 - fVar113 * fVar59;
          auVar121._12_4_ = fVar92 - fVar114 * fVar61;
        }
        else {
          *(float *)(param_1 + 4 + lVar11) = auVar101._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036b361;
LAB_14036b1cb:
          if ((bVar17 & 4) == 0) goto LAB_14036b1d5;
LAB_14036b374:
          uVar5 = extractps(auVar101,2);
          *(undefined8 *)(param_1 + 4 + lVar14) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036b386;
LAB_14036b1de:
          auVar121._0_4_ = fVar103 - fVar107 * fVar49;
          auVar121._4_4_ = fVar89 - fVar112 * fVar57;
          auVar121._8_4_ = fVar90 - fVar113 * fVar59;
          auVar121._12_4_ = fVar92 - fVar114 * fVar61;
        }
        if ((bVar17 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar11) = auVar121._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar121,1);
          *(undefined8 *)(param_1 + 8 + lVar20) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar121,2);
          *(undefined8 *)(param_1 + 8 + lVar14) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar121,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar5;
        }
        if ((bVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar11) = uVar43;
        }
        if ((bVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar28;
        }
        if ((bVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar14) = uVar30;
        }
        if ((char)bVar17 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar32;
        }
      }
      auVar46._4_4_ = -(uint)(0.0 < fVar132);
      auVar46._0_4_ = -(uint)(0.0 < fVar127);
      auVar46._8_4_ = -(uint)(0.0 < fVar91);
      auVar46._12_4_ = -(uint)(0.0 < fVar48);
      iVar10 = movmskps(iVar10 << 4,auVar46);
      if (iVar10 != 0) {
        bVar17 = (char)((char)iVar10 << 4) >> 4;
        auVar82._0_4_ = auVar81._0_4_ + fVar93 * fVar127;
        auVar82._4_4_ = auVar81._4_4_ + fVar97 * fVar132;
        auVar82._8_4_ = auVar81._8_4_ + fVar98 * fVar91;
        auVar82._12_4_ = auVar81._12_4_ + fVar99 * fVar48;
        if ((bVar17 & 1) == 0) {
          if ((bVar17 & 2) == 0) goto LAB_14036b270;
LAB_14036b454:
          uVar5 = extractps(auVar82,1);
          *(undefined8 *)(param_1 + lVar25) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036b466;
LAB_14036b27a:
          if (-1 < (char)bVar17) goto LAB_14036b282;
LAB_14036b476:
          uVar5 = extractps(auVar82,3);
          *(undefined8 *)(param_1 + lVar13) = uVar5;
          auVar81._0_4_ = fVar70 + fVar35 * fVar127;
          auVar81._4_4_ = fVar126 + fVar42 * fVar132;
          auVar81._8_4_ = fVar77 + fVar44 * fVar91;
          auVar81._12_4_ = fVar79 + fVar45 * fVar48;
          if ((bVar17 & 1) != 0) goto LAB_14036b48d;
LAB_14036b292:
          if ((bVar17 & 2) == 0) goto LAB_14036b29c;
LAB_14036b49e:
          uVar5 = extractps(auVar81,1);
          *(undefined8 *)(param_1 + 4 + lVar25) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036b4b1;
LAB_14036b2a6:
          if (-1 < (char)bVar17) goto LAB_14036b2ae;
LAB_14036b4c2:
          uVar5 = extractps(auVar81,3);
          *(undefined8 *)(param_1 + 4 + lVar13) = uVar5;
          auVar64._0_4_ = fVar115 + fVar127 * fVar49;
          auVar64._4_4_ = fVar119 + fVar132 * fVar57;
          auVar64._8_4_ = fVar67 + fVar91 * fVar59;
          auVar64._12_4_ = fVar120 + fVar48 * fVar61;
        }
        else {
          *(float *)(param_1 + lVar21) = auVar82._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036b454;
LAB_14036b270:
          if ((bVar17 & 4) == 0) goto LAB_14036b27a;
LAB_14036b466:
          uVar5 = extractps(auVar82,2);
          *(undefined8 *)(param_1 + lVar24) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036b476;
LAB_14036b282:
          auVar81._0_4_ = fVar70 + fVar35 * fVar127;
          auVar81._4_4_ = fVar126 + fVar42 * fVar132;
          auVar81._8_4_ = fVar77 + fVar44 * fVar91;
          auVar81._12_4_ = fVar79 + fVar45 * fVar48;
          if ((bVar17 & 1) == 0) goto LAB_14036b292;
LAB_14036b48d:
          *(int *)(param_1 + 4 + lVar21) = auVar81._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036b49e;
LAB_14036b29c:
          if ((bVar17 & 4) == 0) goto LAB_14036b2a6;
LAB_14036b4b1:
          uVar5 = extractps(auVar81,2);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036b4c2;
LAB_14036b2ae:
          auVar64._0_4_ = fVar115 + fVar127 * fVar49;
          auVar64._4_4_ = fVar119 + fVar132 * fVar57;
          auVar64._8_4_ = fVar67 + fVar91 * fVar59;
          auVar64._12_4_ = fVar120 + fVar48 * fVar61;
        }
        if ((bVar17 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar21) = auVar64._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar64,1);
          *(undefined8 *)(param_1 + 8 + lVar25) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar64,2);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar64,3);
          *(undefined8 *)(param_1 + 8 + lVar13) = uVar5;
        }
        if ((bVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar34;
        }
        if ((bVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar27;
        }
        if ((bVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar29;
        }
        if ((char)bVar17 < '\0') {
          *(uint *)(param_1 + 0xc + lVar13) = uVar31;
        }
      }
      uVar19 = uVar19 + 4;
      uVar16 = uVar16 + 0x10;
    } while ((int)uVar19 < (int)(uVar12 & 0xfffffffc));
    if ((int)param_6 <= (int)uVar19) {
      return;
    }
  }
  uVar43 = (uint)uVar19;
  bVar6 = (int)(uVar43 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6;
  auVar62._0_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar43 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6;
  auVar62._4_4_ = -(uint)bVar7;
  bVar8 = (int)(uVar43 | _UNK_150631e08) < (int)param_6;
  auVar62._8_4_ = -(uint)bVar8;
  bVar9 = (int)(uVar43 | _UNK_150631e0c) < (int)param_6;
  auVar62._12_4_ = -(uint)bVar9;
  uVar19 = uVar19 & 0xffffffff;
  piVar1 = (int *)(param_2 + uVar19 * 8);
  uVar12 = movmskps((int)param_2,auVar62);
  bVar17 = (char)((char)uVar12 << 4) >> 4;
  if (uVar12 == 0xf) {
    iVar10 = *piVar1;
    iVar71 = piVar1[1];
    iVar18 = piVar1[2];
    iVar76 = piVar1[3];
    iVar68 = piVar1[4];
    iVar78 = piVar1[5];
    iVar69 = piVar1[6];
    iVar80 = piVar1[7];
  }
  else {
    auVar36._0_4_ = ___xmm_00000018000000100000000800000000 & auVar62._0_4_;
    auVar36._4_4_ = _UNK_150b51a04 & auVar62._4_4_;
    auVar36._8_4_ = _UNK_150b51a08 & auVar62._8_4_;
    auVar36._12_4_ = _UNK_150b51a0c & auVar62._12_4_;
    lVar11 = extractps(auVar36,1);
    lVar13 = extractps(auVar36,2);
    lVar14 = extractps(auVar36,3);
    iVar10 = *piVar1;
    iVar18 = *(int *)((longlong)piVar1 + lVar11);
    iVar68 = *(int *)((longlong)piVar1 + lVar13);
    iVar69 = *(int *)((longlong)piVar1 + lVar14);
    auVar100 = ___xmm_0000001c000000140000000c00000004 & auVar62;
    iVar71 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._0_4_);
    iVar76 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._4_4_);
    iVar78 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._8_4_);
    iVar80 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._12_4_);
  }
  auVar65._0_4_ = iVar10 << 4;
  auVar65._4_4_ = iVar18 * 0x10;
  auVar65._8_4_ = iVar68 << 4;
  auVar65._12_4_ = iVar69 << 4;
  auVar72 = auVar62 & auVar65;
  lVar11 = param_1 + auVar72._0_4_;
  lVar13 = param_1 + auVar72._4_4_;
  lVar14 = param_1 + auVar72._8_4_;
  lVar20 = param_1 + auVar72._12_4_;
  auVar86 = ___xmm_00000004000000040000000400000004 & auVar62;
  uVar23 = (ulonglong)auVar86._0_4_;
  auVar104 = ___xmm_00000008000000080000000800000008 & auVar62;
  uVar16 = (ulonglong)auVar104._0_4_;
  auVar73._0_4_ = iVar71 << 4;
  auVar73._4_4_ = iVar76 << 4;
  auVar73._8_4_ = iVar78 << 4;
  auVar73._12_4_ = iVar80 << 4;
  auVar108 = auVar62 & auVar73;
  lVar15 = (longlong)auVar108._0_4_;
  auVar100 = ZEXT416(*(uint *)(param_1 + auVar72._0_4_));
  lVar21 = param_1 + lVar15;
  lVar22 = param_1 + auVar108._4_4_;
  lVar24 = param_1 + auVar108._8_4_;
  lVar25 = param_1 + auVar108._12_4_;
  if ((bVar17 & 2) == 0) {
    auVar111 = ZEXT416(*(uint *)(uVar23 + lVar11));
    auVar81 = ZEXT416(*(uint *)(uVar16 + lVar11));
    auVar116 = ZEXT416(*(uint *)(param_1 + lVar15));
    auVar94 = ZEXT416(*(uint *)(uVar23 + lVar21));
    auVar110 = ZEXT416(*(uint *)(uVar16 + lVar21));
  }
  else {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._4_4_),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar23 + lVar11)),
                        *(undefined4 *)((ulonglong)auVar86._4_4_ + lVar13),0x10);
    auVar81 = insertps(ZEXT416(*(uint *)(uVar16 + lVar11)),
                       *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar13),0x10);
    auVar116 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),
                        *(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    auVar94 = insertps(ZEXT416(*(uint *)(uVar23 + lVar21)),
                       *(undefined4 *)((ulonglong)auVar86._4_4_ + lVar22),0x10);
    auVar110 = insertps(ZEXT416(*(uint *)(uVar16 + lVar21)),
                        *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar22),0x10);
  }
  if ((bVar17 & 4) != 0) {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._8_4_),0x20);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar86._8_4_ + lVar14),0x20);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar14),0x20);
    auVar116 = insertps(auVar116,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    auVar94 = insertps(auVar94,*(undefined4 *)((ulonglong)auVar86._8_4_ + lVar24),0x20);
    auVar110 = insertps(auVar110,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar24),0x20);
  }
  if ((char)bVar17 < '\0') {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._12_4_),0x30);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar86._12_4_ + lVar20),0x30);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar20),0x30);
    auVar116 = insertps(auVar116,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    auVar94 = insertps(auVar94,*(undefined4 *)((ulonglong)auVar86._12_4_ + lVar25),0x30);
    auVar110 = insertps(auVar110,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar25),0x30);
  }
  fVar115 = auVar100._0_4_ - auVar116._0_4_;
  fVar119 = auVar100._4_4_ - auVar116._4_4_;
  auVar117._0_8_ = CONCAT44(fVar119,fVar115);
  auVar117._8_4_ = auVar100._8_4_ - auVar116._8_4_;
  auVar117._12_4_ = auVar100._12_4_ - auVar116._12_4_;
  fVar35 = auVar94._0_4_;
  fVar67 = auVar111._0_4_;
  fVar120 = fVar67 - fVar35;
  fVar42 = auVar94._4_4_;
  fVar70 = auVar111._4_4_;
  fVar126 = fVar70 - fVar42;
  auVar122._0_8_ = CONCAT44(fVar126,fVar120);
  fVar44 = auVar94._8_4_;
  fVar77 = auVar111._8_4_;
  fVar79 = auVar111._12_4_;
  auVar122._8_4_ = fVar77 - fVar44;
  fVar45 = auVar94._12_4_;
  auVar122._12_4_ = fVar79 - fVar45;
  fVar49 = auVar110._0_4_;
  fVar89 = auVar81._0_4_;
  fVar127 = fVar89 - fVar49;
  fVar57 = auVar110._4_4_;
  fVar90 = auVar81._4_4_;
  fVar132 = fVar90 - fVar57;
  auVar129._0_8_ = CONCAT44(fVar132,fVar127);
  fVar59 = auVar110._8_4_;
  fVar91 = auVar81._8_4_;
  fVar92 = auVar81._12_4_;
  auVar129._8_4_ = fVar91 - fVar59;
  fVar61 = auVar110._12_4_;
  auVar129._12_4_ = fVar92 - fVar61;
  auVar47._0_4_ = fVar127 * fVar127 + fVar120 * fVar120 + fVar115 * fVar115;
  auVar47._4_4_ = fVar132 * fVar132 + fVar126 * fVar126 + fVar119 * fVar119;
  auVar47._8_4_ =
       auVar129._8_4_ * auVar129._8_4_ +
       auVar122._8_4_ * auVar122._8_4_ + auVar117._8_4_ * auVar117._8_4_;
  auVar47._12_4_ =
       auVar129._12_4_ * auVar129._12_4_ +
       auVar122._12_4_ * auVar122._12_4_ + auVar117._12_4_ * auVar117._12_4_;
  auVar86 = sqrtps(auVar73,auVar47);
  uVar28 = -(uint)(auVar47._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar30 = -(uint)(auVar47._4_4_ < _UNK_1506895e4);
  uVar32 = -(uint)(auVar47._8_4_ < _UNK_1506895e8);
  uVar34 = -(uint)(auVar47._12_4_ < _UNK_1506895ec);
  auVar38._4_4_ = uVar30;
  auVar38._0_4_ = uVar28;
  auVar37._8_4_ = auVar122._8_4_;
  auVar37._0_8_ = auVar122._0_8_;
  auVar37._12_4_ = auVar122._12_4_;
  auVar72 = divps(auVar37,auVar86);
  auVar50._8_4_ = auVar129._8_4_;
  auVar50._0_8_ = auVar129._0_8_;
  auVar50._12_4_ = auVar129._12_4_;
  auVar104 = divps(auVar50,auVar86);
  auVar83._0_8_ = CONCAT44(~uVar30 & auVar72._4_4_,~uVar28 & auVar72._0_4_);
  auVar83._8_4_ = ~uVar32 & auVar72._8_4_;
  auVar83._12_4_ = ~uVar34 & auVar72._12_4_;
  auVar87._0_8_ = CONCAT44(~uVar30 & auVar104._4_4_,~uVar28 & auVar104._0_4_);
  auVar87._8_4_ = ~uVar32 & auVar104._8_4_;
  auVar87._12_4_ = ~uVar34 & auVar104._12_4_;
  auVar95._8_4_ = auVar117._8_4_;
  auVar95._0_8_ = auVar117._0_8_;
  auVar95._12_4_ = auVar117._12_4_;
  auVar72 = divps(auVar95,auVar86);
  auVar38._8_4_ = uVar32;
  auVar38._12_4_ = uVar34;
  auVar72 = blendvps(auVar72,___xmm_3f8000003f8000003f8000003f800000,auVar38);
  auVar51._8_4_ = auVar117._8_4_;
  auVar51._0_8_ = auVar117._0_8_;
  auVar51._12_4_ = auVar117._12_4_;
  auVar105._8_4_ = auVar122._8_4_;
  auVar105._0_8_ = auVar122._0_8_;
  auVar105._12_4_ = auVar122._12_4_;
  auVar39._8_4_ = auVar129._8_4_;
  auVar39._0_8_ = auVar129._0_8_;
  auVar39._12_4_ = auVar129._12_4_;
  if ((bVar17 & 1) == 0) {
    auVar104 = blendps(auVar117,auVar51,1);
    if ((bVar17 & 2) != 0) goto LAB_14036bbb3;
LAB_14036b921:
    auVar123 = blendps(auVar122,auVar105,1);
    auVar131 = blendps(auVar129,auVar39,1);
    auVar104 = blendps(auVar104,auVar104,2);
    auVar108 = auVar123;
    auVar94 = auVar131;
    if ((bVar17 & 4) != 0) goto LAB_14036b95a;
LAB_14036bbef:
    auVar124 = blendps(auVar108,auVar123,2);
    auVar130 = blendps(auVar94,auVar131,2);
    auVar108 = auVar104;
    auVar81 = auVar124;
    auVar94 = auVar130;
  }
  else {
    auVar105._8_4_ = auVar83._8_4_;
    auVar105._0_8_ = auVar83._0_8_;
    auVar105._12_4_ = auVar83._12_4_;
    auVar39._8_4_ = auVar87._8_4_;
    auVar39._0_8_ = auVar87._0_8_;
    auVar39._12_4_ = auVar87._12_4_;
    auVar104 = blendps(auVar117,auVar72,1);
    if ((bVar17 & 2) == 0) goto LAB_14036b921;
LAB_14036bbb3:
    auVar108 = blendps(auVar122,auVar105,1);
    auVar123._8_4_ = auVar83._8_4_;
    auVar123._0_8_ = auVar83._0_8_;
    auVar123._12_4_ = auVar83._12_4_;
    auVar94 = blendps(auVar129,auVar39,1);
    auVar131._8_4_ = auVar87._8_4_;
    auVar131._0_8_ = auVar87._0_8_;
    auVar131._12_4_ = auVar87._12_4_;
    auVar104 = blendps(auVar104,auVar72,2);
    if ((bVar17 & 4) == 0) goto LAB_14036bbef;
LAB_14036b95a:
    auVar81 = blendps(auVar108,auVar123,2);
    auVar124._8_4_ = auVar83._8_4_;
    auVar124._0_8_ = auVar83._0_8_;
    auVar124._12_4_ = auVar83._12_4_;
    auVar94 = blendps(auVar94,auVar131,2);
    auVar130._8_4_ = auVar87._8_4_;
    auVar130._0_8_ = auVar87._0_8_;
    auVar130._12_4_ = auVar87._12_4_;
    auVar108 = auVar72;
  }
  auVar52 = ___xmm_0000000c0000000c0000000c0000000c & auVar62;
  auVar104 = blendps(auVar104,auVar108,4);
  bVar26 = -1 < (char)bVar17;
  if (bVar26) {
    auVar72 = auVar104;
  }
  auVar111 = insertps(ZEXT416(*(uint *)((ulonglong)auVar52._0_4_ + lVar11)),
                      *(undefined4 *)((ulonglong)auVar52._4_4_ + lVar13),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)((ulonglong)auVar52._0_4_ + lVar21)),
                      *(undefined4 *)((ulonglong)auVar52._4_4_ + lVar22),0x10);
  auVar81 = blendps(auVar81,auVar124,4);
  if (bVar26) {
    auVar83 = auVar81;
  }
  auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar52._8_4_ + lVar14),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)((ulonglong)auVar52._8_4_ + lVar24),0x20);
  auVar94 = blendps(auVar94,auVar130,4);
  if (bVar26) {
    auVar87 = auVar94;
  }
  auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar52._12_4_ + lVar20),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)((ulonglong)auVar52._12_4_ + lVar25),0x30);
  auVar72 = blendps(auVar104,auVar72,8);
  auVar104 = blendps(auVar81,auVar83,8);
  auVar94 = blendps(auVar94,auVar87,8);
  if ((~bVar17 & 9) == 0) {
    auVar83 = *(undefined1 (*) [16])(param_3 + (int)(uVar43 << 2));
    auVar130 = ZEXT416(*(uint *)(param_4 + uVar19));
  }
  else {
    puVar3 = (uint *)(param_3 + (int)(uVar43 << 2));
    if ((uVar12 & 1) != 0) {
      auVar83 = ZEXT416(*puVar3);
    }
    if ((uVar12 & 2) != 0) {
      auVar83 = insertps(auVar83,puVar3[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar83 = insertps(auVar83,puVar3[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar83 = insertps(auVar83,puVar3[3],0x30);
    }
    pbVar4 = (byte *)(param_4 + uVar19);
    if ((uVar12 & 1) != 0) {
      auVar130 = ZEXT116(*pbVar4);
    }
    if ((uVar12 & 2) != 0) {
      auVar52._8_8_ = auVar130._8_8_;
      auVar52._0_8_ = auVar130._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar4[1] << 8;
      auVar130 = pblendw(auVar130,auVar52,0xfd);
    }
    if ((uVar12 & 4) != 0) {
      bVar17 = auVar130[3];
      auVar81 = pmovzxwd(auVar130,auVar130);
      auVar130._8_8_ = auVar81._8_8_;
      auVar130._0_8_ =
           auVar81._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar4[2] << 0x10 |
           (ulonglong)bVar17 << 0x18;
    }
    if ((uVar12 & 8) != 0) {
      bVar17 = auVar130[2];
      auVar81 = pmovzxwd(auVar130,auVar130);
      auVar130._8_8_ = auVar81._8_8_;
      auVar130._0_8_ =
           auVar81._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar17 << 0x10 |
           (ulonglong)pbVar4[3] << 0x18;
    }
  }
  auVar81 = pmovzxbd(auVar52,auVar130);
  auVar53._0_4_ = auVar81._0_4_ << 2;
  auVar53._4_4_ = auVar81._4_4_ << 2;
  auVar53._8_4_ = auVar81._8_4_ << 2;
  auVar53._12_4_ = auVar81._12_4_ << 2;
  auVar110 = pmovzxdq(auVar87,auVar53);
  auVar54._4_4_ = 0;
  auVar54._0_4_ = auVar53._8_4_;
  auVar54._8_4_ = auVar53._12_4_;
  auVar54._12_4_ = 0;
  auVar81 = pmovsxdq(auVar130,auVar62);
  auVar110 = blendvps(ZEXT816(0),auVar110,auVar81);
  auVar40._4_4_ = auVar62._8_4_;
  auVar40._0_4_ = auVar62._8_4_;
  auVar40._8_4_ = auVar62._12_4_;
  auVar40._12_4_ = auVar62._12_4_;
  auVar81 = blendvps(ZEXT816(0),auVar54,auVar40);
  fVar115 = (float)(~uVar28 & auVar86._0_4_) - auVar83._0_4_;
  fVar119 = (float)(~uVar30 & auVar86._4_4_) - auVar83._4_4_;
  fVar120 = (float)(~uVar32 & auVar86._8_4_) - auVar83._8_4_;
  fVar126 = (float)(~uVar34 & auVar86._12_4_) - auVar83._12_4_;
  auVar86 = insertps(ZEXT416(*(uint *)(param_5 + auVar110._0_8_)),
                     *(undefined4 *)(param_5 + auVar110._8_8_),0x10);
  auVar86 = insertps(auVar86,*(undefined4 *)(param_5 + auVar81._0_8_),0x20);
  auVar86 = insertps(auVar86,*(undefined4 *)(param_5 + auVar81._8_8_),0x30);
  fVar107 = auVar111._0_4_;
  fVar112 = auVar111._4_4_;
  fVar113 = auVar111._8_4_;
  fVar114 = auVar111._12_4_;
  fVar97 = auVar108._0_4_;
  auVar41._0_4_ = fVar107 + fVar97;
  fVar98 = auVar108._4_4_;
  auVar41._4_4_ = fVar112 + fVar98;
  fVar99 = auVar108._8_4_;
  auVar41._8_4_ = fVar113 + fVar99;
  fVar103 = auVar108._12_4_;
  auVar41._12_4_ = fVar114 + fVar103;
  fVar127 = auVar86._0_4_;
  auVar118._0_4_ = auVar72._0_4_ * fVar115 * fVar127;
  fVar132 = auVar86._4_4_;
  auVar118._4_4_ = auVar72._4_4_ * fVar119 * fVar132;
  fVar48 = auVar86._8_4_;
  auVar118._8_4_ = auVar72._8_4_ * fVar120 * fVar48;
  fVar93 = auVar86._12_4_;
  auVar118._12_4_ = auVar72._12_4_ * fVar126 * fVar93;
  auVar125._0_4_ = auVar104._0_4_ * fVar115 * fVar127;
  auVar125._4_4_ = auVar104._4_4_ * fVar119 * fVar132;
  auVar125._8_4_ = auVar104._8_4_ * fVar120 * fVar48;
  auVar125._12_4_ = auVar104._12_4_ * fVar126 * fVar93;
  auVar84._0_4_ = fVar127 * auVar94._0_4_ * fVar115;
  auVar84._4_4_ = fVar132 * auVar94._4_4_ * fVar119;
  auVar84._8_4_ = fVar48 * auVar94._8_4_ * fVar120;
  auVar84._12_4_ = fVar93 * auVar94._12_4_ * fVar126;
  auVar104 = divps(auVar118,auVar41);
  auVar86 = divps(auVar125,auVar41);
  auVar72 = divps(auVar84,auVar41);
  uVar12 = -(uint)(fVar97 == 0.0 && fVar107 == 0.0);
  uVar43 = -(uint)(fVar98 == 0.0 && fVar112 == 0.0);
  uVar28 = -(uint)(fVar99 == 0.0 && fVar113 == 0.0);
  uVar30 = -(uint)(fVar103 == 0.0 && fVar114 == 0.0);
  fVar128 = (float)(~uVar12 & auVar104._0_4_);
  fVar133 = (float)(~uVar43 & auVar104._4_4_);
  fVar134 = (float)(~uVar28 & auVar104._8_4_);
  fVar135 = (float)(~uVar30 & auVar104._12_4_);
  fVar127 = (float)(~uVar12 & auVar86._0_4_);
  fVar132 = (float)(~uVar43 & auVar86._4_4_);
  fVar48 = (float)(~uVar28 & auVar86._8_4_);
  fVar93 = (float)(~uVar30 & auVar86._12_4_);
  fVar115 = (float)(~uVar12 & auVar72._0_4_);
  fVar119 = (float)(~uVar43 & auVar72._4_4_);
  fVar120 = (float)(~uVar28 & auVar72._8_4_);
  fVar126 = (float)(~uVar30 & auVar72._12_4_);
  auVar55._0_4_ = -(uint)(0.0 < fVar107 && bVar6);
  auVar55._4_4_ = -(uint)(0.0 < fVar112 && bVar7);
  auVar55._8_4_ = -(uint)(0.0 < fVar113 && bVar8);
  auVar55._12_4_ = -(uint)(0.0 < fVar114 && bVar9);
  iVar18 = movmskps(auVar110._0_4_,auVar55);
  iVar10 = 0;
  if (iVar18 == 0) goto LAB_14036bedc;
  bVar17 = (char)((char)iVar18 << 4) >> 4;
  auVar96._0_4_ = auVar100._0_4_ - fVar107 * fVar128;
  auVar96._4_4_ = auVar100._4_4_ - fVar112 * fVar133;
  auVar96._8_4_ = auVar100._8_4_ - fVar113 * fVar134;
  auVar96._12_4_ = auVar100._12_4_ - fVar114 * fVar135;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + auVar65._0_4_) = auVar96._0_4_;
  }
  if ((bVar17 & 2) == 0) {
    if ((bVar17 & 4) == 0) goto LAB_14036be57;
LAB_14036c059:
    uVar5 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + auVar65._8_4_) = uVar5;
    if ((char)bVar17 < '\0') goto LAB_14036c073;
LAB_14036be66:
    auVar88._0_4_ = fVar67 - fVar107 * fVar127;
    auVar88._4_4_ = fVar70 - fVar112 * fVar132;
    auVar88._8_4_ = fVar77 - fVar113 * fVar48;
    auVar88._12_4_ = fVar79 - fVar114 * fVar93;
    if ((bVar17 & 1) == 0) goto LAB_14036be72;
LAB_14036c091:
    *(int *)(param_1 + 4 + (longlong)auVar65._0_4_) = auVar88._0_4_;
    if ((bVar17 & 2) != 0) goto LAB_14036c0a4;
LAB_14036be7b:
    if ((bVar17 & 4) == 0) goto LAB_14036be84;
LAB_14036c0b9:
    uVar5 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._8_4_) = uVar5;
    if ((char)bVar17 < '\0') goto LAB_14036c0d4;
LAB_14036be93:
    auVar85._0_4_ = fVar89 - fVar107 * fVar115;
    auVar85._4_4_ = fVar90 - fVar112 * fVar119;
    auVar85._8_4_ = fVar91 - fVar113 * fVar120;
    auVar85._12_4_ = fVar92 - fVar114 * fVar126;
  }
  else {
    uVar5 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + auVar65._4_4_) = uVar5;
    if ((bVar17 & 4) != 0) goto LAB_14036c059;
LAB_14036be57:
    if (-1 < (char)bVar17) goto LAB_14036be66;
LAB_14036c073:
    uVar5 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + auVar65._12_4_) = uVar5;
    auVar88._0_4_ = fVar67 - fVar107 * fVar127;
    auVar88._4_4_ = fVar70 - fVar112 * fVar132;
    auVar88._8_4_ = fVar77 - fVar113 * fVar48;
    auVar88._12_4_ = fVar79 - fVar114 * fVar93;
    if ((bVar17 & 1) != 0) goto LAB_14036c091;
LAB_14036be72:
    if ((bVar17 & 2) == 0) goto LAB_14036be7b;
LAB_14036c0a4:
    uVar5 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._4_4_) = uVar5;
    if ((bVar17 & 4) != 0) goto LAB_14036c0b9;
LAB_14036be84:
    if (-1 < (char)bVar17) goto LAB_14036be93;
LAB_14036c0d4:
    uVar5 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._12_4_) = uVar5;
    auVar85._0_4_ = fVar89 - fVar107 * fVar115;
    auVar85._4_4_ = fVar90 - fVar112 * fVar119;
    auVar85._8_4_ = fVar91 - fVar113 * fVar120;
    auVar85._12_4_ = fVar92 - fVar114 * fVar126;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar65._0_4_) = auVar85._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._12_4_) = uVar5;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar65._0_4_) = fVar107;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar111,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar111,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._8_4_) = uVar5;
  }
  iVar10 = CONCAT31((int3)((uint)iVar18 >> 8),bVar17);
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar111,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._12_4_) = uVar5;
    iVar10 = auVar65._12_4_;
  }
LAB_14036bedc:
  auVar74._0_4_ = -(uint)(0.0 < fVar97 && bVar6);
  auVar74._4_4_ = -(uint)(0.0 < fVar98 && bVar7);
  auVar74._8_4_ = -(uint)(0.0 < fVar99 && bVar8);
  auVar74._12_4_ = -(uint)(0.0 < fVar103 && bVar9);
  iVar10 = movmskps(iVar10,auVar74);
  if (iVar10 == 0) {
    return;
  }
  bVar17 = (char)((char)iVar10 << 4) >> 4;
  auVar75._0_4_ = auVar116._0_4_ + fVar128 * fVar97;
  auVar75._4_4_ = auVar116._4_4_ + fVar133 * fVar98;
  auVar75._8_4_ = auVar116._8_4_ + fVar134 * fVar99;
  auVar75._12_4_ = auVar116._12_4_ + fVar135 * fVar103;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + auVar73._0_4_) = auVar75._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar75,1);
    *(undefined8 *)(param_1 + auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar75,2);
    *(undefined8 *)(param_1 + auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar75,3);
    *(undefined8 *)(param_1 + auVar73._12_4_) = uVar5;
    auVar66._0_4_ = fVar35 + fVar127 * fVar97;
    auVar66._4_4_ = fVar42 + fVar132 * fVar98;
    auVar66._8_4_ = fVar44 + fVar48 * fVar99;
    auVar66._12_4_ = fVar45 + fVar93 * fVar103;
  }
  else {
    auVar66._0_4_ = fVar35 + fVar127 * fVar97;
    auVar66._4_4_ = fVar42 + fVar132 * fVar98;
    auVar66._8_4_ = fVar44 + fVar48 * fVar99;
    auVar66._12_4_ = fVar45 + fVar93 * fVar103;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar73._0_4_) = auVar66._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar66,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar66,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar66,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar5;
    auVar63._0_4_ = fVar49 + fVar115 * fVar97;
    auVar63._4_4_ = fVar57 + fVar119 * fVar98;
    auVar63._8_4_ = fVar59 + fVar120 * fVar99;
    auVar63._12_4_ = fVar61 + fVar126 * fVar103;
  }
  else {
    auVar63._0_4_ = fVar49 + fVar115 * fVar97;
    auVar63._4_4_ = fVar57 + fVar119 * fVar98;
    auVar63._8_4_ = fVar59 + fVar120 * fVar99;
    auVar63._12_4_ = fVar61 + fVar126 * fVar103;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar73._0_4_) = auVar63._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar63,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar63,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar63,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar5;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = fVar97;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar5;
  }
  return;
}

// ApplySpringConstraints_sse4 @ 14036c300

/* WARNING: Removing unreachable block (ram,0x00014036d0a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,float param_4,uint param_5)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  byte bVar24;
  int iVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  float fVar63;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  float fVar65;
  uint uVar66;
  float fVar69;
  uint uVar72;
  float fVar74;
  undefined1 auVar67 [16];
  uint uVar70;
  float fVar75;
  uint uVar76;
  undefined1 auVar68 [16];
  int iVar78;
  float fVar79;
  int iVar83;
  int iVar84;
  undefined1 auVar80 [16];
  int iVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar91 [16];
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar105 [16];
  float fVar108;
  float fVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  float fVar116;
  float fVar117;
  float fVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar125;
  float fVar127;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar128 [16];
  float fVar126;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  int iVar71;
  int iVar73;
  int iVar77;
  undefined1 auVar121 [16];
  undefined1 auVar129 [16];
  
  uVar23 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar23 = param_5;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar27 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar27 * 2);
      piVar3 = (int *)(param_2 + 0x10 + uVar27 * 2);
      lVar20 = (longlong)(*piVar1 * 0x10);
      lVar29 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar3 * 0x10);
      lVar32 = (longlong)(piVar3[2] * 0x10);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar29),0x10
                        );
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar98 = insertps(auVar97,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar80 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar128 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      uVar57 = *(uint *)(param_1 + 0xc + lVar20);
      uVar58 = *(uint *)(param_1 + 0xc + lVar29);
      uVar59 = *(uint *)(param_1 + 0xc + lVar28);
      uVar60 = *(uint *)(param_1 + 0xc + lVar32);
      lVar30 = (longlong)(piVar1[1] << 4);
      lVar19 = (longlong)(piVar1[3] * 0x10);
      lVar22 = (longlong)(piVar3[1] << 4);
      lVar21 = (longlong)(piVar3[3] << 4);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + lVar22),0x20);
      auVar101 = insertps(auVar97,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar30)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar22),0x20);
      auVar91 = insertps(auVar97,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      auVar97 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar30)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar22),0x20);
      auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      auVar115._0_4_ = auVar98._0_4_ - auVar101._0_4_;
      auVar115._4_4_ = auVar98._4_4_ - auVar101._4_4_;
      auVar115._8_4_ = auVar98._8_4_ - auVar101._8_4_;
      auVar115._12_4_ = auVar98._12_4_ - auVar101._12_4_;
      fVar64 = auVar91._0_4_;
      auVar112._0_4_ = auVar80._0_4_ - fVar64;
      fVar94 = auVar91._4_4_;
      auVar112._4_4_ = auVar80._4_4_ - fVar94;
      fVar95 = auVar91._8_4_;
      auVar112._8_4_ = auVar80._8_4_ - fVar95;
      fVar96 = auVar91._12_4_;
      auVar112._12_4_ = auVar80._12_4_ - fVar96;
      fVar125 = auVar128._0_4_;
      fVar86 = auVar97._0_4_;
      auVar135._0_4_ = fVar125 - fVar86;
      fVar69 = auVar128._4_4_;
      fVar126 = auVar97._4_4_;
      auVar135._4_4_ = fVar69 - fVar126;
      fVar79 = auVar128._8_4_;
      fVar74 = auVar128._12_4_;
      fVar132 = auVar97._8_4_;
      auVar135._8_4_ = fVar79 - fVar132;
      fVar63 = auVar97._12_4_;
      auVar135._12_4_ = fVar74 - fVar63;
      auVar110._0_4_ = auVar112._0_4_ * auVar112._0_4_ + auVar115._0_4_ * auVar115._0_4_;
      auVar110._4_4_ = auVar112._4_4_ * auVar112._4_4_ + auVar115._4_4_ * auVar115._4_4_;
      auVar110._8_4_ = auVar112._8_4_ * auVar112._8_4_ + auVar115._8_4_ * auVar115._8_4_;
      auVar110._12_4_ = auVar112._12_4_ * auVar112._12_4_ + auVar115._12_4_ * auVar115._12_4_;
      auVar97._0_4_ = auVar135._0_4_ * auVar135._0_4_ + auVar110._0_4_;
      auVar97._4_4_ = auVar135._4_4_ * auVar135._4_4_ + auVar110._4_4_;
      auVar97._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar110._8_4_;
      auVar97._12_4_ = auVar135._12_4_ * auVar135._12_4_ + auVar110._12_4_;
      auVar111 = sqrtps(auVar110,auVar97);
      uVar35 = -(uint)(auVar97._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar37 = -(uint)(auVar97._4_4_ < _UNK_1506895e4);
      uVar39 = -(uint)(auVar97._8_4_ < _UNK_1506895e8);
      uVar41 = -(uint)(auVar97._12_4_ < _UNK_1506895ec);
      auVar91._4_4_ = uVar37;
      auVar91._0_4_ = uVar35;
      auVar91._8_4_ = uVar39;
      auVar91._12_4_ = uVar41;
      auVar128 = divps(auVar115,auVar111);
      auVar97 = divps(auVar112,auVar111);
      auVar67 = divps(auVar135,auVar111);
      auVar128 = blendvps(auVar128,___xmm_3f8000003f8000003f8000003f800000,auVar91);
      auVar91 = insertps(ZEXT416(uVar57),ZEXT416(uVar58),0x10);
      auVar91 = insertps(auVar91,ZEXT416(uVar59),0x20);
      auVar91 = insertps(auVar91,ZEXT416(uVar60),0x30);
      pfVar2 = (float *)(param_3 + (uVar27 & 0xffffffff));
      fVar43 = (float)(~uVar35 & auVar111._0_4_) - *pfVar2;
      fVar49 = (float)(~uVar37 & auVar111._4_4_) - pfVar2[1];
      fVar50 = (float)(~uVar39 & auVar111._8_4_) - pfVar2[2];
      fVar51 = (float)(~uVar41 & auVar111._12_4_) - pfVar2[3];
      uVar66 = *(uint *)(param_1 + 0xc + lVar30);
      uVar70 = *(uint *)(param_1 + 0xc + lVar19);
      auVar112 = insertps(ZEXT416(uVar66),ZEXT416(uVar70),0x10);
      uVar72 = *(uint *)(param_1 + 0xc + lVar22);
      auVar112 = insertps(auVar112,ZEXT416(uVar72),0x20);
      uVar76 = *(uint *)(param_1 + 0xc + lVar21);
      auVar112 = insertps(auVar112,ZEXT416(uVar76),0x30);
      fVar65 = auVar91._0_4_;
      fVar119 = auVar91._4_4_;
      fVar124 = auVar91._8_4_;
      fVar75 = auVar91._12_4_;
      fVar109 = auVar112._0_4_;
      auVar111._0_4_ = fVar65 + fVar109;
      fVar127 = auVar112._4_4_;
      auVar111._4_4_ = fVar119 + fVar127;
      fVar133 = auVar112._8_4_;
      auVar111._8_4_ = fVar124 + fVar133;
      fVar134 = auVar112._12_4_;
      auVar111._12_4_ = fVar75 + fVar134;
      auVar105._0_4_ = auVar128._0_4_ * fVar43 * param_4;
      auVar105._4_4_ = auVar128._4_4_ * fVar49 * param_4;
      auVar105._8_4_ = auVar128._8_4_ * fVar50 * param_4;
      auVar105._12_4_ = auVar128._12_4_ * fVar51 * param_4;
      auVar120._0_4_ = (float)(~uVar35 & auVar97._0_4_) * fVar43 * param_4;
      auVar120._4_4_ = (float)(~uVar37 & auVar97._4_4_) * fVar49 * param_4;
      auVar120._8_4_ = (float)(~uVar39 & auVar97._8_4_) * fVar50 * param_4;
      auVar120._12_4_ = (float)(~uVar41 & auVar97._12_4_) * fVar51 * param_4;
      auVar128._0_4_ = fVar43 * (float)(~uVar35 & auVar67._0_4_) * param_4;
      auVar128._4_4_ = fVar49 * (float)(~uVar37 & auVar67._4_4_) * param_4;
      auVar128._8_4_ = fVar50 * (float)(~uVar39 & auVar67._8_4_) * param_4;
      auVar128._12_4_ = fVar51 * (float)(~uVar41 & auVar67._12_4_) * param_4;
      auVar91 = divps(auVar105,auVar111);
      auVar67 = divps(auVar120,auVar111);
      auVar97 = divps(auVar128,auVar111);
      unaff_XMM15._0_12_ = ZEXT812(0);
      unaff_XMM15._12_4_ = 0;
      uVar35 = -(uint)(fVar109 == 0.0 && fVar65 == 0.0);
      uVar37 = -(uint)(fVar127 == 0.0 && fVar119 == 0.0);
      uVar39 = -(uint)(fVar133 == 0.0 && fVar124 == 0.0);
      uVar41 = -(uint)(fVar134 == 0.0 && fVar75 == 0.0);
      fVar114 = (float)(~uVar35 & auVar91._0_4_);
      fVar116 = (float)(~uVar37 & auVar91._4_4_);
      fVar117 = (float)(~uVar39 & auVar91._8_4_);
      fVar118 = (float)(~uVar41 & auVar91._12_4_);
      fVar104 = (float)(~uVar35 & auVar67._0_4_);
      fVar106 = (float)(~uVar37 & auVar67._4_4_);
      fVar107 = (float)(~uVar39 & auVar67._8_4_);
      fVar108 = (float)(~uVar41 & auVar67._12_4_);
      fVar43 = (float)(~uVar35 & auVar97._0_4_);
      fVar49 = (float)(~uVar37 & auVar97._4_4_);
      fVar50 = (float)(~uVar39 & auVar97._8_4_);
      fVar51 = (float)(~uVar41 & auVar97._12_4_);
      auVar67._4_4_ = -(uint)(0.0 < fVar119);
      auVar67._0_4_ = -(uint)(0.0 < fVar65);
      auVar67._8_4_ = -(uint)(0.0 < fVar124);
      auVar67._12_4_ = -(uint)(0.0 < fVar75);
      iVar25 = movmskps((int)uVar27,auVar67);
      uVar26 = 0;
      if (iVar25 != 0) {
        bVar24 = (char)((char)iVar25 << 4) >> 4;
        uVar26 = CONCAT31((int3)((uint)iVar25 >> 8),bVar24);
        auVar99._0_4_ = auVar98._0_4_ - fVar65 * fVar114;
        auVar99._4_4_ = auVar98._4_4_ - fVar119 * fVar116;
        auVar99._8_4_ = auVar98._8_4_ - fVar124 * fVar117;
        auVar99._12_4_ = auVar98._12_4_ - fVar75 * fVar118;
        if ((bVar24 & 1) != 0) {
          *(float *)(param_1 + lVar20) = auVar99._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar99,1);
          *(undefined8 *)(param_1 + lVar29) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar99,2);
          *(undefined8 *)(param_1 + lVar28) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar99,3);
          *(undefined8 *)(param_1 + lVar32) = uVar5;
        }
        auVar98._0_4_ = auVar80._0_4_ - fVar65 * fVar104;
        auVar98._4_4_ = auVar80._4_4_ - fVar119 * fVar106;
        auVar98._8_4_ = auVar80._8_4_ - fVar124 * fVar107;
        auVar98._12_4_ = auVar80._12_4_ - fVar75 * fVar108;
        if ((bVar24 & 1) == 0) {
          if ((bVar24 & 2) == 0) goto LAB_14036c6bd;
LAB_14036c860:
          uVar5 = extractps(auVar98,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_14036c873;
LAB_14036c6c7:
          if (-1 < (char)bVar24) goto LAB_14036c6d0;
LAB_14036c885:
          uVar5 = extractps(auVar98,3);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar5;
          auVar80._0_4_ = fVar125 - fVar65 * fVar43;
          auVar80._4_4_ = fVar69 - fVar119 * fVar49;
          auVar80._8_4_ = fVar79 - fVar124 * fVar50;
          auVar80._12_4_ = fVar74 - fVar75 * fVar51;
        }
        else {
          *(float *)(param_1 + 4 + lVar20) = auVar98._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_14036c860;
LAB_14036c6bd:
          if ((bVar24 & 4) == 0) goto LAB_14036c6c7;
LAB_14036c873:
          uVar5 = extractps(auVar98,2);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_14036c885;
LAB_14036c6d0:
          auVar80._0_4_ = fVar125 - fVar65 * fVar43;
          auVar80._4_4_ = fVar69 - fVar119 * fVar49;
          auVar80._8_4_ = fVar79 - fVar124 * fVar50;
          auVar80._12_4_ = fVar74 - fVar75 * fVar51;
        }
        if ((bVar24 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar20) = auVar80._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar80,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar80,2);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar80,3);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar5;
        }
        if ((bVar24 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar57;
        }
        if ((bVar24 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar58;
        }
        if ((bVar24 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar59;
        }
        if ((char)bVar24 < '\0') {
          *(uint *)(param_1 + 0xc + lVar32) = uVar60;
        }
      }
      auVar44._4_4_ = -(uint)(0.0 < fVar127);
      auVar44._0_4_ = -(uint)(0.0 < fVar109);
      auVar44._8_4_ = -(uint)(0.0 < fVar133);
      auVar44._12_4_ = -(uint)(0.0 < fVar134);
      iVar25 = movmskps(uVar26,auVar44);
      if (iVar25 != 0) {
        bVar24 = (char)((char)iVar25 << 4) >> 4;
        auVar102._0_4_ = auVar101._0_4_ + fVar114 * fVar109;
        auVar102._4_4_ = auVar101._4_4_ + fVar116 * fVar127;
        auVar102._8_4_ = auVar101._8_4_ + fVar117 * fVar133;
        auVar102._12_4_ = auVar101._12_4_ + fVar118 * fVar134;
        if ((bVar24 & 1) == 0) {
          if ((bVar24 & 2) == 0) goto LAB_14036c766;
LAB_14036c944:
          uVar5 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + lVar19) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_14036c956;
LAB_14036c770:
          if (-1 < (char)bVar24) goto LAB_14036c779;
LAB_14036c967:
          uVar5 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + lVar21) = uVar5;
          auVar101._0_4_ = fVar64 + fVar104 * fVar109;
          auVar101._4_4_ = fVar94 + fVar106 * fVar127;
          auVar101._8_4_ = fVar95 + fVar107 * fVar133;
          auVar101._12_4_ = fVar96 + fVar108 * fVar134;
          if ((bVar24 & 1) != 0) goto LAB_14036c981;
LAB_14036c78b:
          if ((bVar24 & 2) == 0) goto LAB_14036c795;
LAB_14036c992:
          uVar5 = extractps(auVar101,1);
          *(undefined8 *)(param_1 + 4 + lVar19) = uVar5;
          if ((bVar24 & 4) != 0) goto LAB_14036c9a4;
LAB_14036c79f:
          if (-1 < (char)bVar24) goto LAB_14036c7a8;
LAB_14036c9b5:
          uVar5 = extractps(auVar101,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar5;
          auVar87._0_4_ = fVar86 + fVar109 * fVar43;
          auVar87._4_4_ = fVar126 + fVar127 * fVar49;
          auVar87._8_4_ = fVar132 + fVar133 * fVar50;
          auVar87._12_4_ = fVar63 + fVar134 * fVar51;
        }
        else {
          *(float *)(param_1 + lVar30) = auVar102._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_14036c944;
LAB_14036c766:
          if ((bVar24 & 4) == 0) goto LAB_14036c770;
LAB_14036c956:
          uVar5 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + lVar22) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_14036c967;
LAB_14036c779:
          auVar101._0_4_ = fVar64 + fVar104 * fVar109;
          auVar101._4_4_ = fVar94 + fVar106 * fVar127;
          auVar101._8_4_ = fVar95 + fVar107 * fVar133;
          auVar101._12_4_ = fVar96 + fVar108 * fVar134;
          if ((bVar24 & 1) == 0) goto LAB_14036c78b;
LAB_14036c981:
          *(int *)(param_1 + 4 + lVar30) = auVar101._0_4_;
          if ((bVar24 & 2) != 0) goto LAB_14036c992;
LAB_14036c795:
          if ((bVar24 & 4) == 0) goto LAB_14036c79f;
LAB_14036c9a4:
          uVar5 = extractps(auVar101,2);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar5;
          if ((char)bVar24 < '\0') goto LAB_14036c9b5;
LAB_14036c7a8:
          auVar87._0_4_ = fVar86 + fVar109 * fVar43;
          auVar87._4_4_ = fVar126 + fVar127 * fVar49;
          auVar87._8_4_ = fVar132 + fVar133 * fVar50;
          auVar87._12_4_ = fVar63 + fVar134 * fVar51;
        }
        if ((bVar24 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar30) = auVar87._0_4_;
        }
        if ((bVar24 & 2) != 0) {
          uVar5 = extractps(auVar87,1);
          *(undefined8 *)(param_1 + 8 + lVar19) = uVar5;
        }
        if ((bVar24 & 4) != 0) {
          uVar5 = extractps(auVar87,2);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar5;
        }
        if ((char)bVar24 < '\0') {
          uVar5 = extractps(auVar87,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar5;
        }
        if ((bVar24 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar66;
        }
        if ((bVar24 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar19) = uVar70;
        }
        if ((bVar24 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar22) = uVar72;
        }
        if ((char)bVar24 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar76;
        }
      }
      uVar27 = uVar27 + 0x10;
      uVar17 = uVar17 + 4;
    } while ((int)uVar17 < (int)(uVar23 & 0xfffffffc));
  }
  if ((int)param_5 <= (int)uVar17) {
    return;
  }
  bVar6 = (int)(uVar17 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5;
  uVar57 = -(uint)bVar6;
  bVar7 = (int)(uVar17 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5;
  uVar58 = -(uint)bVar7;
  bVar8 = (int)(uVar17 | _UNK_150631e08) < (int)param_5;
  uVar59 = -(uint)bVar8;
  bVar9 = (int)(uVar17 | _UNK_150631e0c) < (int)param_5;
  uVar60 = -(uint)bVar9;
  piVar1 = (int *)(param_2 + (ulonglong)uVar17 * 8);
  auVar10._4_4_ = uVar58;
  auVar10._0_4_ = uVar57;
  auVar10._8_4_ = uVar59;
  auVar10._12_4_ = uVar60;
  uVar23 = movmskps(uVar17,auVar10);
  bVar24 = (char)((char)uVar23 << 4) >> 4;
  if (uVar23 == 0xf) {
    iVar25 = *piVar1;
    iVar78 = piVar1[1];
    iVar71 = piVar1[2];
    iVar83 = piVar1[3];
    iVar73 = piVar1[4];
    iVar84 = piVar1[5];
    iVar77 = piVar1[6];
    iVar85 = piVar1[7];
  }
  else {
    auVar45._0_4_ = ___xmm_00000018000000100000000800000000 & uVar57;
    auVar45._4_4_ = _UNK_150b51a04 & uVar58;
    auVar45._8_4_ = _UNK_150b51a08 & uVar59;
    auVar45._12_4_ = _UNK_150b51a0c & uVar60;
    lVar19 = extractps(auVar45,1);
    lVar20 = extractps(auVar45,2);
    lVar21 = extractps(auVar45,3);
    iVar25 = *piVar1;
    iVar71 = *(int *)((longlong)piVar1 + lVar19);
    iVar73 = *(int *)((longlong)piVar1 + lVar20);
    iVar77 = *(int *)((longlong)piVar1 + lVar21);
    iVar78 = *(int *)((longlong)piVar1 +
                     (ulonglong)(___xmm_0000001c000000140000000c00000004 & uVar57));
    iVar83 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a14 & uVar58));
    iVar84 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a18 & uVar59));
    iVar85 = *(int *)((longlong)piVar1 + (ulonglong)(_UNK_150b51a1c & uVar60));
  }
  uVar66 = iVar25 << 4;
  uVar70 = iVar71 << 4;
  uVar72 = iVar73 << 4;
  uVar76 = iVar77 << 4;
  lVar19 = param_1 + (int)(uVar57 & uVar66);
  lVar20 = param_1 + (int)(uVar58 & uVar70);
  lVar21 = param_1 + (int)(uVar59 & uVar72);
  lVar22 = param_1 + (int)(uVar60 & uVar76);
  uVar31 = (ulonglong)(___xmm_00000004000000040000000400000004 & uVar57);
  uVar27 = (ulonglong)(___xmm_00000008000000080000000800000008 & uVar57);
  uVar35 = iVar78 << 4;
  uVar37 = iVar83 << 4;
  uVar39 = iVar84 << 4;
  uVar41 = iVar85 << 4;
  lVar33 = (longlong)(int)(uVar57 & uVar35);
  auVar97 = ZEXT416(*(uint *)(param_1 + (int)(uVar57 & uVar66)));
  lVar28 = param_1 + lVar33;
  lVar29 = param_1 + (int)(uVar58 & uVar37);
  lVar32 = (int)(uVar59 & uVar39) + param_1;
  lVar30 = param_1 + (int)(uVar60 & uVar41);
  bVar34 = (bVar24 & 2) != 0;
  if (bVar34) {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar58 & uVar70)),0x10);
  }
  auVar91 = ZEXT416(*(uint *)(uVar31 + lVar19));
  if (bVar34) {
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar58) + lVar20),0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar27 + lVar19)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar58) + lVar20),0x10);
    auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar33)),
                       *(undefined4 *)(param_1 + (int)(uVar58 & uVar37)),0x10);
    auVar128 = insertps(ZEXT416(*(uint *)(uVar31 + lVar28)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50dd4 & uVar58) + lVar29),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar27 + lVar28)),
                        *(undefined4 *)((ulonglong)(_UNK_150b50de4 & uVar58) + lVar29),0x10);
  }
  else {
    auVar112 = ZEXT416(*(uint *)(uVar27 + lVar19));
    auVar67 = ZEXT416(*(uint *)(param_1 + lVar33));
    auVar128 = ZEXT416(*(uint *)(uVar31 + lVar28));
    auVar111 = ZEXT416(*(uint *)(uVar27 + lVar28));
  }
  if ((bVar24 & 4) != 0) {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar59 & uVar72)),0x20);
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar59) + lVar21),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar59) + lVar21),0x20
                       );
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + (int)(uVar59 & uVar39)),0x20);
    auVar128 = insertps(auVar128,*(undefined4 *)((ulonglong)(_UNK_150b50dd8 & uVar59) + lVar32),0x20
                       );
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)(_UNK_150b50de8 & uVar59) + lVar32),0x20
                       );
  }
  if ((char)bVar24 < '\0') {
    auVar97 = insertps(auVar97,*(undefined4 *)(param_1 + (int)(uVar60 & uVar76)),0x30);
    auVar91 = insertps(auVar91,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar60) + lVar22),0x30);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar60) + lVar22),0x30
                       );
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + (int)(uVar60 & uVar41)),0x30);
    auVar128 = insertps(auVar128,*(undefined4 *)((ulonglong)(_UNK_150b50ddc & uVar60) + lVar30),0x30
                       );
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)(_UNK_150b50dec & uVar60) + lVar30),0x30
                       );
  }
  fVar43 = auVar97._0_4_ - auVar67._0_4_;
  fVar49 = auVar97._4_4_ - auVar67._4_4_;
  auVar61._0_8_ = CONCAT44(fVar49,fVar43);
  auVar61._8_4_ = auVar97._8_4_ - auVar67._8_4_;
  auVar61._12_4_ = auVar97._12_4_ - auVar67._12_4_;
  fVar79 = auVar91._0_4_;
  fVar119 = fVar79 - auVar128._0_4_;
  fVar74 = auVar91._4_4_;
  fVar124 = fVar74 - auVar128._4_4_;
  auVar121._0_8_ = CONCAT44(fVar124,fVar119);
  fVar75 = auVar91._8_4_;
  fVar86 = auVar91._12_4_;
  auVar121._8_4_ = fVar75 - auVar128._8_4_;
  auVar121._12_4_ = fVar86 - auVar128._12_4_;
  fVar50 = auVar111._0_4_;
  fVar126 = auVar112._0_4_ - fVar50;
  fVar51 = auVar111._4_4_;
  fVar132 = auVar112._4_4_ - fVar51;
  auVar129._0_8_ = CONCAT44(fVar132,fVar126);
  fVar65 = auVar111._8_4_;
  auVar129._8_4_ = auVar112._8_4_ - fVar65;
  fVar69 = auVar111._12_4_;
  auVar129._12_4_ = auVar112._12_4_ - fVar69;
  auVar46._0_4_ = fVar126 * fVar126 + fVar119 * fVar119 + fVar43 * fVar43;
  auVar46._4_4_ = fVar132 * fVar132 + fVar124 * fVar124 + fVar49 * fVar49;
  auVar46._8_4_ =
       auVar129._8_4_ * auVar129._8_4_ +
       auVar121._8_4_ * auVar121._8_4_ + auVar61._8_4_ * auVar61._8_4_;
  auVar46._12_4_ =
       auVar129._12_4_ * auVar129._12_4_ +
       auVar121._12_4_ * auVar121._12_4_ + auVar61._12_4_ * auVar61._12_4_;
  auVar135 = sqrtps(unaff_XMM15,auVar46);
  uVar36 = -(uint)(auVar46._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar38 = -(uint)(auVar46._4_4_ < _UNK_1506895e4);
  uVar40 = -(uint)(auVar46._8_4_ < _UNK_1506895e8);
  uVar42 = -(uint)(auVar46._12_4_ < _UNK_1506895ec);
  auVar47._4_4_ = uVar38;
  auVar47._0_4_ = uVar36;
  auVar47._8_4_ = uVar40;
  auVar47._12_4_ = uVar42;
  auVar52._8_4_ = auVar121._8_4_;
  auVar52._0_8_ = auVar121._0_8_;
  auVar52._12_4_ = auVar121._12_4_;
  auVar91 = divps(auVar52,auVar135);
  auVar92._8_4_ = auVar129._8_4_;
  auVar92._0_8_ = auVar129._0_8_;
  auVar92._12_4_ = auVar129._12_4_;
  auVar111 = divps(auVar92,auVar135);
  auVar81._0_8_ = CONCAT44(~uVar38 & auVar91._4_4_,~uVar36 & auVar91._0_4_);
  auVar81._8_4_ = ~uVar40 & auVar91._8_4_;
  auVar81._12_4_ = ~uVar42 & auVar91._12_4_;
  auVar88._0_8_ = CONCAT44(~uVar38 & auVar111._4_4_,~uVar36 & auVar111._0_4_);
  auVar88._8_4_ = ~uVar40 & auVar111._8_4_;
  auVar88._12_4_ = ~uVar42 & auVar111._12_4_;
  auVar93._8_4_ = auVar61._8_4_;
  auVar93._0_8_ = auVar61._0_8_;
  auVar93._12_4_ = auVar61._12_4_;
  auVar91 = divps(auVar93,auVar135);
  auVar91 = blendvps(auVar91,___xmm_3f8000003f8000003f8000003f800000,auVar47);
  auVar100._8_4_ = auVar61._8_4_;
  auVar100._0_8_ = auVar61._0_8_;
  auVar100._12_4_ = auVar61._12_4_;
  auVar103._8_4_ = auVar121._8_4_;
  auVar103._0_8_ = auVar121._0_8_;
  auVar103._12_4_ = auVar121._12_4_;
  auVar53._8_4_ = auVar129._8_4_;
  auVar53._0_8_ = auVar129._0_8_;
  auVar53._12_4_ = auVar129._12_4_;
  if ((bVar24 & 1) != 0) {
    auVar103._8_4_ = auVar81._8_4_;
    auVar103._0_8_ = auVar81._0_8_;
    auVar103._12_4_ = auVar81._12_4_;
    auVar53._8_4_ = auVar88._8_4_;
    auVar53._0_8_ = auVar88._0_8_;
    auVar53._12_4_ = auVar88._12_4_;
    auVar100 = auVar91;
  }
  auVar80 = blendps(auVar61,auVar100,1);
  bVar34 = (bVar24 & 2) != 0;
  auVar111 = auVar80;
  if (bVar34) {
    auVar111 = auVar91;
  }
  auVar98 = blendps(auVar121,auVar103,1);
  if (bVar34) {
    auVar113._8_4_ = auVar81._8_4_;
    auVar113._0_8_ = auVar81._0_8_;
    auVar113._12_4_ = auVar81._12_4_;
    auVar101 = blendps(auVar129,auVar53,1);
    auVar130._8_4_ = auVar88._8_4_;
    auVar130._0_8_ = auVar88._0_8_;
    auVar130._12_4_ = auVar88._12_4_;
    auVar111 = blendps(auVar80,auVar111,2);
    if ((bVar24 & 4) != 0) goto LAB_14036d07b;
LAB_14036cdf7:
    auVar122 = blendps(auVar98,auVar113,2);
    auVar131 = blendps(auVar101,auVar130,2);
    auVar80 = auVar111;
    auVar98 = auVar122;
    auVar101 = auVar131;
  }
  else {
    auVar130 = blendps(auVar129,auVar53,1);
    auVar111 = blendps(auVar80,auVar111,2);
    auVar113 = auVar98;
    auVar101 = auVar130;
    if ((bVar24 & 4) == 0) goto LAB_14036cdf7;
LAB_14036d07b:
    auVar98 = blendps(auVar98,auVar113,2);
    auVar122._8_4_ = auVar81._8_4_;
    auVar122._0_8_ = auVar81._0_8_;
    auVar122._12_4_ = auVar81._12_4_;
    auVar101 = blendps(auVar101,auVar130,2);
    auVar131._8_4_ = auVar88._8_4_;
    auVar131._0_8_ = auVar88._0_8_;
    auVar131._12_4_ = auVar88._12_4_;
    auVar80 = auVar91;
  }
  auVar111 = blendps(auVar111,auVar80,4);
  bVar34 = -1 < (char)bVar24;
  if (bVar34) {
    auVar91 = auVar111;
  }
  auVar115 = insertps(ZEXT416(*(uint *)((ulonglong)
                                        (___xmm_0000000c0000000c0000000c0000000c & uVar57) + lVar19)
                             ),*(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar58) + lVar20),0x10);
  auVar80 = insertps(ZEXT416(*(uint *)((ulonglong)(___xmm_0000000c0000000c0000000c0000000c & uVar57)
                                      + lVar28)),
                     *(undefined4 *)((ulonglong)(_UNK_150b50df4 & uVar58) + lVar29),0x10);
  auVar98 = blendps(auVar98,auVar122,4);
  if (bVar34) {
    auVar81 = auVar98;
  }
  auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar59) + lVar21),0x20);
  auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)(_UNK_150b50df8 & uVar59) + lVar32),0x20);
  auVar101 = blendps(auVar101,auVar131,4);
  if (bVar34) {
    auVar88 = auVar101;
  }
  auVar115 = insertps(auVar115,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar60) + lVar22),0x30);
  auVar80 = insertps(auVar80,*(undefined4 *)((ulonglong)(_UNK_150b50dfc & uVar60) + lVar30),0x30);
  auVar91 = blendps(auVar111,auVar91,8);
  auVar111 = blendps(auVar98,auVar81,8);
  auVar98 = blendps(auVar101,auVar88,8);
  puVar18 = (uint *)(longlong)(int)(uVar17 << 2);
  if ((~bVar24 & 9) == 0) {
    auVar81 = *(undefined1 (*) [16])(param_3 + (longlong)puVar18);
  }
  else {
    puVar4 = (uint *)(param_3 + (longlong)puVar18);
    if ((uVar23 & 1) != 0) {
      auVar81 = ZEXT416(*puVar4);
      puVar18 = puVar4;
    }
    if ((uVar23 & 2) != 0) {
      auVar81 = insertps(auVar81,puVar4[1],0x10);
      puVar18 = puVar4;
    }
    if ((uVar23 & 4) != 0) {
      auVar81 = insertps(auVar81,puVar4[2],0x20);
      puVar18 = puVar4;
    }
    if ((uVar23 & 8) != 0) {
      auVar81 = insertps(auVar81,puVar4[3],0x30);
      puVar18 = puVar4;
    }
  }
  fVar43 = (float)(~uVar36 & auVar135._0_4_) - auVar81._0_4_;
  fVar49 = (float)(~uVar38 & auVar135._4_4_) - auVar81._4_4_;
  fVar119 = (float)(~uVar40 & auVar135._8_4_) - auVar81._8_4_;
  fVar124 = (float)(~uVar42 & auVar135._12_4_) - auVar81._12_4_;
  fVar106 = auVar115._0_4_;
  fVar107 = auVar115._4_4_;
  fVar108 = auVar115._8_4_;
  fVar109 = auVar115._12_4_;
  fVar94 = auVar80._0_4_;
  auVar48._0_4_ = fVar106 + fVar94;
  fVar95 = auVar80._4_4_;
  auVar48._4_4_ = fVar107 + fVar95;
  fVar96 = auVar80._8_4_;
  auVar48._8_4_ = fVar108 + fVar96;
  fVar104 = auVar80._12_4_;
  auVar48._12_4_ = fVar109 + fVar104;
  auVar62._0_4_ = auVar91._0_4_ * fVar43 * param_4;
  auVar62._4_4_ = auVar91._4_4_ * fVar49 * param_4;
  auVar62._8_4_ = auVar91._8_4_ * fVar119 * param_4;
  auVar62._12_4_ = auVar91._12_4_ * fVar124 * param_4;
  auVar123._0_4_ = auVar111._0_4_ * fVar43 * param_4;
  auVar123._4_4_ = auVar111._4_4_ * fVar49 * param_4;
  auVar123._8_4_ = auVar111._8_4_ * fVar119 * param_4;
  auVar123._12_4_ = auVar111._12_4_ * fVar124 * param_4;
  auVar89._0_4_ = param_4 * auVar98._0_4_ * fVar43;
  auVar89._4_4_ = param_4 * auVar98._4_4_ * fVar49;
  auVar89._8_4_ = param_4 * auVar98._8_4_ * fVar119;
  auVar89._12_4_ = param_4 * auVar98._12_4_ * fVar124;
  auVar91 = divps(auVar62,auVar48);
  auVar135 = divps(auVar123,auVar48);
  auVar111 = divps(auVar89,auVar48);
  uVar23 = -(uint)(fVar94 == 0.0 && fVar106 == 0.0);
  uVar17 = -(uint)(fVar95 == 0.0 && fVar107 == 0.0);
  uVar57 = -(uint)(fVar96 == 0.0 && fVar108 == 0.0);
  uVar58 = -(uint)(fVar104 == 0.0 && fVar109 == 0.0);
  fVar127 = (float)(~uVar23 & auVar91._0_4_);
  fVar133 = (float)(~uVar17 & auVar91._4_4_);
  fVar134 = (float)(~uVar57 & auVar91._8_4_);
  fVar114 = (float)(~uVar58 & auVar91._12_4_);
  fVar126 = (float)(~uVar23 & auVar135._0_4_);
  fVar132 = (float)(~uVar17 & auVar135._4_4_);
  fVar63 = (float)(~uVar57 & auVar135._8_4_);
  fVar64 = (float)(~uVar58 & auVar135._12_4_);
  fVar43 = (float)(~uVar23 & auVar111._0_4_);
  fVar49 = (float)(~uVar17 & auVar111._4_4_);
  fVar119 = (float)(~uVar57 & auVar111._8_4_);
  fVar124 = (float)(~uVar58 & auVar111._12_4_);
  auVar54._0_4_ = -(uint)(0.0 < fVar106 && bVar6);
  auVar54._4_4_ = -(uint)(0.0 < fVar107 && bVar7);
  auVar54._8_4_ = -(uint)(0.0 < fVar108 && bVar8);
  auVar54._12_4_ = -(uint)(0.0 < fVar109 && bVar9);
  iVar25 = movmskps((int)puVar18,auVar54);
  uVar23 = 0;
  if (iVar25 == 0) goto LAB_14036d23e;
  bVar24 = (char)((char)iVar25 << 4) >> 4;
  auVar90._0_4_ = auVar97._0_4_ - fVar106 * fVar127;
  auVar90._4_4_ = auVar97._4_4_ - fVar107 * fVar133;
  auVar90._8_4_ = auVar97._8_4_ - fVar108 * fVar134;
  auVar90._12_4_ = auVar97._12_4_ - fVar109 * fVar114;
  if ((bVar24 & 1) == 0) {
    if ((bVar24 & 2) == 0) goto LAB_14036d1a1;
LAB_14036d3b7:
    uVar5 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + (int)uVar70) = uVar5;
    if ((bVar24 & 4) != 0) goto LAB_14036d3d2;
LAB_14036d1b1:
    if (-1 < (char)bVar24) goto LAB_14036d1c0;
LAB_14036d3ec:
    uVar5 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + (int)uVar76) = uVar5;
    auVar82._0_4_ = fVar79 - fVar106 * fVar126;
    auVar82._4_4_ = fVar74 - fVar107 * fVar132;
    auVar82._8_4_ = fVar75 - fVar108 * fVar63;
    auVar82._12_4_ = fVar86 - fVar109 * fVar64;
  }
  else {
    *(float *)(param_1 + (int)uVar66) = auVar90._0_4_;
    if ((bVar24 & 2) != 0) goto LAB_14036d3b7;
LAB_14036d1a1:
    if ((bVar24 & 4) == 0) goto LAB_14036d1b1;
LAB_14036d3d2:
    uVar5 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + (int)uVar72) = uVar5;
    if ((char)bVar24 < '\0') goto LAB_14036d3ec;
LAB_14036d1c0:
    auVar82._0_4_ = fVar79 - fVar106 * fVar126;
    auVar82._4_4_ = fVar74 - fVar107 * fVar132;
    auVar82._8_4_ = fVar75 - fVar108 * fVar63;
    auVar82._12_4_ = fVar86 - fVar109 * fVar64;
  }
  if ((bVar24 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)(int)uVar66) = auVar82._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar82,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar82,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar72) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar82,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar76) = uVar5;
  }
  fVar79 = auVar112._0_4_ - fVar106 * fVar43;
  auVar55._4_4_ = auVar112._4_4_ - fVar107 * fVar49;
  auVar55._0_4_ = fVar79;
  auVar55._8_4_ = auVar112._8_4_ - fVar108 * fVar119;
  auVar55._12_4_ = auVar112._12_4_ - fVar109 * fVar124;
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)(int)uVar66) = fVar79;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar55,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar55,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar72) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar55,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar76) = uVar5;
  }
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar66) = fVar106;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar115,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar70) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar115,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar72) = uVar5;
  }
  uVar23 = CONCAT31((int3)((uint)iVar25 >> 8),bVar24);
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar76) = uVar5;
    uVar23 = uVar76;
  }
LAB_14036d23e:
  auVar136._0_4_ = -(uint)(0.0 < fVar94 && bVar6);
  auVar136._4_4_ = -(uint)(0.0 < fVar95 && bVar7);
  auVar136._8_4_ = -(uint)(0.0 < fVar96 && bVar8);
  auVar136._12_4_ = -(uint)(0.0 < fVar104 && bVar9);
  iVar25 = movmskps(uVar23,auVar136);
  if (iVar25 == 0) {
    return;
  }
  bVar24 = (char)((char)iVar25 << 4) >> 4;
  auVar68._0_4_ = auVar67._0_4_ + fVar127 * fVar94;
  auVar68._4_4_ = auVar67._4_4_ + fVar133 * fVar95;
  auVar68._8_4_ = auVar67._8_4_ + fVar134 * fVar96;
  auVar68._12_4_ = auVar67._12_4_ + fVar114 * fVar104;
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + (int)uVar35) = auVar68._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar68,1);
    *(undefined8 *)(param_1 + (int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar68,2);
    *(undefined8 *)(param_1 + (int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar68,3);
    *(undefined8 *)(param_1 + (int)uVar41) = uVar5;
  }
  uVar16 = auVar128._12_4_ + fVar64 * fVar104;
  uVar15 = auVar128._8_4_ + fVar63 * fVar96;
  uVar14 = auVar128._4_4_ + fVar132 * fVar95;
  uVar26 = auVar128._0_4_ + fVar126 * fVar94;
  if ((bVar24 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)(int)uVar35) = uVar26;
  }
  if ((bVar24 & 2) != 0) {
    auVar13._4_4_ = uVar14;
    auVar13._0_4_ = uVar26;
    auVar13._8_4_ = uVar15;
    auVar13._12_4_ = uVar16;
    uVar5 = extractps(auVar13,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    auVar12._4_4_ = uVar14;
    auVar12._0_4_ = uVar26;
    auVar12._8_4_ = uVar15;
    auVar12._12_4_ = uVar16;
    uVar5 = extractps(auVar12,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    auVar11._4_4_ = uVar14;
    auVar11._0_4_ = uVar26;
    auVar11._8_4_ = uVar15;
    auVar11._12_4_ = uVar16;
    uVar5 = extractps(auVar11,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar41) = uVar5;
    auVar56._0_4_ = fVar50 + fVar43 * fVar94;
    auVar56._4_4_ = fVar51 + fVar49 * fVar95;
    auVar56._8_4_ = fVar65 + fVar119 * fVar96;
    auVar56._12_4_ = fVar69 + fVar124 * fVar104;
  }
  else {
    auVar56._0_4_ = fVar50 + fVar43 * fVar94;
    auVar56._4_4_ = fVar51 + fVar49 * fVar95;
    auVar56._8_4_ = fVar65 + fVar119 * fVar96;
    auVar56._12_4_ = fVar69 + fVar124 * fVar104;
  }
  if ((bVar24 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)(int)uVar35) = auVar56._0_4_;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar56,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar56,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar56,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar41) = uVar5;
  }
  if ((bVar24 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)(int)uVar35) = fVar94;
  }
  if ((bVar24 & 2) != 0) {
    uVar5 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar37) = uVar5;
  }
  if ((bVar24 & 4) != 0) {
    uVar5 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar39) = uVar5;
  }
  if ((char)bVar24 < '\0') {
    uVar5 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar41) = uVar5;
  }
  return;
}

// ApplySpringConstraintsWithWeightMaps_sse4 @ 14036d6b0

/* WARNING: Removing unreachable block (ram,0x00014036e4fb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySpringConstraintsWithWeightMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar49;
  uint uVar56;
  float fVar57;
  uint uVar58;
  float fVar59;
  uint uVar60;
  float fVar61;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  int iVar71;
  int iVar76;
  float fVar77;
  undefined1 auVar72 [16];
  int iVar78;
  float fVar79;
  int iVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar89;
  float fVar90;
  float fVar92;
  undefined1 auVar86 [16];
  float fVar91;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar93;
  float fVar97;
  float fVar98;
  undefined1 auVar94 [16];
  float fVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar112;
  float fVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  float fVar115;
  float fVar119;
  undefined1 auVar116 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar126;
  undefined1 auVar121 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar128;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar135;
  int iVar68;
  int iVar69;
  undefined1 auVar117 [16];
  undefined1 auVar122 [16];
  undefined1 auVar129 [16];
  
  uVar12 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar12 = param_6;
  }
  if ((int)(uVar12 & 0xfffffffc) < 1) {
    uVar19 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar19 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar16 * 2);
      iVar10 = *piVar1;
      piVar2 = (int *)(param_2 + 0x10 + uVar16 * 2);
      lVar11 = (longlong)(iVar10 << 4);
      lVar20 = (longlong)(piVar1[2] * 0x10);
      lVar14 = (longlong)(*piVar2 << 4);
      lVar22 = (longlong)(piVar2[2] << 4);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar11)),*(undefined4 *)(param_1 + lVar20),
                          0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + lVar14),0x20);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + lVar22),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar11)),
                          *(undefined4 *)(param_1 + 4 + lVar20),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar14),0x20);
      auVar121 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar22),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar11)),
                          *(undefined4 *)(param_1 + 8 + lVar20),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar14),0x20);
      auVar104 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar22),0x30);
      uVar43 = *(uint *)(param_1 + 0xc + lVar11);
      uVar28 = *(uint *)(param_1 + 0xc + lVar20);
      uVar30 = *(uint *)(param_1 + 0xc + lVar14);
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar25 = (longlong)(piVar1[3] * 0x10);
      lVar24 = (longlong)(piVar2[1] << 4);
      lVar13 = (longlong)(piVar2[3] << 4);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar25),
                          0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + lVar24),0x20);
      auVar81 = insertps(auVar100,*(undefined4 *)(param_1 + lVar13),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                          *(undefined4 *)(param_1 + 4 + lVar25),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar24),0x20);
      auVar72 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar13),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                          *(undefined4 *)(param_1 + 8 + lVar25),0x10);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar24),0x20);
      uVar32 = *(uint *)(param_1 + 0xc + lVar22);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar13),0x30);
      auVar108._0_4_ = auVar101._0_4_ - auVar81._0_4_;
      auVar108._4_4_ = auVar101._4_4_ - auVar81._4_4_;
      auVar108._8_4_ = auVar101._8_4_ - auVar81._8_4_;
      auVar108._12_4_ = auVar101._12_4_ - auVar81._12_4_;
      fVar70 = auVar72._0_4_;
      auVar86._0_4_ = auVar121._0_4_ - fVar70;
      fVar126 = auVar72._4_4_;
      auVar86._4_4_ = auVar121._4_4_ - fVar126;
      fVar77 = auVar72._8_4_;
      auVar86._8_4_ = auVar121._8_4_ - fVar77;
      fVar79 = auVar72._12_4_;
      auVar86._12_4_ = auVar121._12_4_ - fVar79;
      fVar103 = auVar104._0_4_;
      fVar115 = auVar100._0_4_;
      auVar111._0_4_ = fVar103 - fVar115;
      fVar119 = auVar100._4_4_;
      fVar89 = auVar104._4_4_;
      auVar111._4_4_ = fVar89 - fVar119;
      fVar67 = auVar100._8_4_;
      fVar90 = auVar104._8_4_;
      fVar92 = auVar104._12_4_;
      auVar111._8_4_ = fVar90 - fVar67;
      fVar120 = auVar100._12_4_;
      auVar111._12_4_ = fVar92 - fVar120;
      auVar110._0_4_ = auVar86._0_4_ * auVar86._0_4_ + auVar108._0_4_ * auVar108._0_4_;
      auVar110._4_4_ = auVar86._4_4_ * auVar86._4_4_ + auVar108._4_4_ * auVar108._4_4_;
      auVar110._8_4_ = auVar86._8_4_ * auVar86._8_4_ + auVar108._8_4_ * auVar108._8_4_;
      auVar110._12_4_ = auVar86._12_4_ * auVar86._12_4_ + auVar108._12_4_ * auVar108._12_4_;
      auVar100._0_4_ = auVar111._0_4_ * auVar111._0_4_ + auVar110._0_4_;
      auVar100._4_4_ = auVar111._4_4_ * auVar111._4_4_ + auVar110._4_4_;
      auVar100._8_4_ = auVar111._8_4_ * auVar111._8_4_ + auVar110._8_4_;
      auVar100._12_4_ = auVar111._12_4_ * auVar111._12_4_ + auVar110._12_4_;
      auVar94 = sqrtps(auVar110,auVar100);
      uVar27 = -(uint)(auVar100._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar29 = -(uint)(auVar100._4_4_ < _UNK_1506895e4);
      uVar31 = -(uint)(auVar100._8_4_ < _UNK_1506895e8);
      uVar33 = -(uint)(auVar100._12_4_ < _UNK_1506895ec);
      auVar72._4_4_ = uVar29;
      auVar72._0_4_ = uVar27;
      auVar72._8_4_ = uVar31;
      auVar72._12_4_ = uVar33;
      auVar100 = divps(auVar108,auVar94);
      auVar104 = divps(auVar86,auVar94);
      auVar72 = blendvps(auVar100,___xmm_3f8000003f8000003f8000003f800000,auVar72);
      auVar86 = divps(auVar111,auVar94);
      auVar100 = insertps(ZEXT416(uVar43),ZEXT416(uVar28),0x10);
      auVar100 = insertps(auVar100,ZEXT416(uVar30),0x20);
      auVar116 = insertps(auVar100,ZEXT416(uVar32),0x30);
      auVar100 = *(undefined1 (*) [16])(param_3 + (uVar16 & 0xffffffff));
      fVar35 = (float)(~uVar27 & auVar94._0_4_) - auVar100._0_4_;
      fVar42 = (float)(~uVar29 & auVar94._4_4_) - auVar100._4_4_;
      fVar44 = (float)(~uVar31 & auVar94._8_4_) - auVar100._8_4_;
      fVar45 = (float)(~uVar33 & auVar94._12_4_) - auVar100._12_4_;
      auVar100 = pmovzxbd(auVar100,*(undefined4 *)(param_4 + uVar19));
      auVar108 = insertps(ZEXT416(*(uint *)(param_5 + (ulonglong)(uint)(auVar100._0_4_ << 2))),
                          *(undefined4 *)(param_5 + (ulonglong)(uint)(auVar100._4_4_ * 4)),0x10);
      auVar108 = insertps(auVar108,*(undefined4 *)(param_5 + (ulonglong)(uint)(auVar100._8_4_ << 2))
                          ,0x20);
      uVar34 = *(uint *)(param_1 + 0xc + lVar21);
      auVar100 = insertps(auVar108,*(undefined4 *)
                                    (param_5 + (ulonglong)(uint)(auVar100._12_4_ << 2)),0x30);
      fVar49 = auVar100._0_4_;
      auVar94._0_4_ = auVar72._0_4_ * fVar35 * fVar49;
      fVar57 = auVar100._4_4_;
      auVar94._4_4_ = auVar72._4_4_ * fVar42 * fVar57;
      fVar59 = auVar100._8_4_;
      auVar94._8_4_ = auVar72._8_4_ * fVar44 * fVar59;
      fVar61 = auVar100._12_4_;
      auVar94._12_4_ = auVar72._12_4_ * fVar45 * fVar61;
      auVar106._0_4_ = (float)(~uVar27 & auVar104._0_4_) * fVar35 * fVar49;
      auVar106._4_4_ = (float)(~uVar29 & auVar104._4_4_) * fVar42 * fVar57;
      auVar106._8_4_ = (float)(~uVar31 & auVar104._8_4_) * fVar44 * fVar59;
      auVar106._12_4_ = (float)(~uVar33 & auVar104._12_4_) * fVar45 * fVar61;
      auVar109._0_4_ = fVar49 * fVar35 * (float)(~uVar27 & auVar86._0_4_);
      auVar109._4_4_ = fVar57 * fVar42 * (float)(~uVar29 & auVar86._4_4_);
      auVar109._8_4_ = fVar59 * fVar44 * (float)(~uVar31 & auVar86._8_4_);
      auVar109._12_4_ = fVar61 * fVar45 * (float)(~uVar33 & auVar86._12_4_);
      uVar27 = *(uint *)(param_1 + 0xc + lVar25);
      auVar100 = insertps(ZEXT416(uVar34),ZEXT416(uVar27),0x10);
      uVar29 = *(uint *)(param_1 + 0xc + lVar24);
      auVar100 = insertps(auVar100,ZEXT416(uVar29),0x20);
      uVar31 = *(uint *)(param_1 + 0xc + lVar13);
      auVar100 = insertps(auVar100,ZEXT416(uVar31),0x30);
      fVar107 = auVar116._0_4_;
      fVar112 = auVar116._4_4_;
      fVar113 = auVar116._8_4_;
      fVar114 = auVar116._12_4_;
      fVar127 = auVar100._0_4_;
      auVar104._0_4_ = fVar107 + fVar127;
      fVar132 = auVar100._4_4_;
      auVar104._4_4_ = fVar112 + fVar132;
      fVar91 = auVar100._8_4_;
      auVar104._8_4_ = fVar113 + fVar91;
      fVar48 = auVar100._12_4_;
      auVar104._12_4_ = fVar114 + fVar48;
      auVar100 = divps(auVar94,auVar104);
      auVar72 = divps(auVar106,auVar104);
      auVar104 = divps(auVar109,auVar104);
      uVar33 = -(uint)(fVar127 == 0.0 && fVar107 == 0.0);
      uVar56 = -(uint)(fVar132 == 0.0 && fVar112 == 0.0);
      uVar58 = -(uint)(fVar91 == 0.0 && fVar113 == 0.0);
      uVar60 = -(uint)(fVar48 == 0.0 && fVar114 == 0.0);
      fVar93 = (float)(~uVar33 & auVar100._0_4_);
      fVar97 = (float)(~uVar56 & auVar100._4_4_);
      fVar98 = (float)(~uVar58 & auVar100._8_4_);
      fVar99 = (float)(~uVar60 & auVar100._12_4_);
      fVar35 = (float)(~uVar33 & auVar72._0_4_);
      fVar42 = (float)(~uVar56 & auVar72._4_4_);
      fVar44 = (float)(~uVar58 & auVar72._8_4_);
      fVar45 = (float)(~uVar60 & auVar72._12_4_);
      fVar49 = (float)(~uVar33 & auVar104._0_4_);
      fVar57 = (float)(~uVar56 & auVar104._4_4_);
      fVar59 = (float)(~uVar58 & auVar104._8_4_);
      fVar61 = (float)(~uVar60 & auVar104._12_4_);
      auVar116._4_4_ = -(uint)(0.0 < fVar112);
      auVar116._0_4_ = -(uint)(0.0 < fVar107);
      auVar116._8_4_ = -(uint)(0.0 < fVar113);
      auVar116._12_4_ = -(uint)(0.0 < fVar114);
      iVar18 = movmskps((int)param_5,auVar116);
      if (iVar18 != 0) {
        bVar17 = (char)((char)iVar18 << 4) >> 4;
        auVar102._0_4_ = auVar101._0_4_ - fVar107 * fVar93;
        auVar102._4_4_ = auVar101._4_4_ - fVar112 * fVar97;
        auVar102._8_4_ = auVar101._8_4_ - fVar113 * fVar98;
        auVar102._12_4_ = auVar101._12_4_ - fVar114 * fVar99;
        if ((bVar17 & 1) != 0) {
          *(float *)(param_1 + lVar11) = auVar102._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar102,1);
          *(undefined8 *)(param_1 + lVar20) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar102,2);
          *(undefined8 *)(param_1 + lVar14) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar102,3);
          *(undefined8 *)(param_1 + lVar22) = uVar5;
        }
        auVar101._0_4_ = auVar121._0_4_ - fVar107 * fVar35;
        auVar101._4_4_ = auVar121._4_4_ - fVar112 * fVar42;
        auVar101._8_4_ = auVar121._8_4_ - fVar113 * fVar44;
        auVar101._12_4_ = auVar121._12_4_ - fVar114 * fVar45;
        if ((bVar17 & 1) == 0) {
          if ((bVar17 & 2) == 0) goto LAB_14036daab;
LAB_14036dc41:
          uVar5 = extractps(auVar101,1);
          *(undefined8 *)(param_1 + 4 + lVar20) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036dc54;
LAB_14036dab5:
          if (-1 < (char)bVar17) goto LAB_14036dabe;
LAB_14036dc66:
          uVar5 = extractps(auVar101,3);
          *(undefined8 *)(param_1 + 4 + lVar22) = uVar5;
          auVar121._0_4_ = fVar103 - fVar107 * fVar49;
          auVar121._4_4_ = fVar89 - fVar112 * fVar57;
          auVar121._8_4_ = fVar90 - fVar113 * fVar59;
          auVar121._12_4_ = fVar92 - fVar114 * fVar61;
        }
        else {
          *(float *)(param_1 + 4 + lVar11) = auVar101._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036dc41;
LAB_14036daab:
          if ((bVar17 & 4) == 0) goto LAB_14036dab5;
LAB_14036dc54:
          uVar5 = extractps(auVar101,2);
          *(undefined8 *)(param_1 + 4 + lVar14) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036dc66;
LAB_14036dabe:
          auVar121._0_4_ = fVar103 - fVar107 * fVar49;
          auVar121._4_4_ = fVar89 - fVar112 * fVar57;
          auVar121._8_4_ = fVar90 - fVar113 * fVar59;
          auVar121._12_4_ = fVar92 - fVar114 * fVar61;
        }
        if ((bVar17 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar11) = auVar121._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar121,1);
          *(undefined8 *)(param_1 + 8 + lVar20) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar121,2);
          *(undefined8 *)(param_1 + 8 + lVar14) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar121,3);
          *(undefined8 *)(param_1 + 8 + lVar22) = uVar5;
        }
        if ((bVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar11) = uVar43;
        }
        if ((bVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar20) = uVar28;
        }
        if ((bVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar14) = uVar30;
        }
        if ((char)bVar17 < '\0') {
          *(uint *)(param_1 + 0xc + lVar22) = uVar32;
        }
      }
      auVar46._4_4_ = -(uint)(0.0 < fVar132);
      auVar46._0_4_ = -(uint)(0.0 < fVar127);
      auVar46._8_4_ = -(uint)(0.0 < fVar91);
      auVar46._12_4_ = -(uint)(0.0 < fVar48);
      iVar10 = movmskps(iVar10 << 4,auVar46);
      if (iVar10 != 0) {
        bVar17 = (char)((char)iVar10 << 4) >> 4;
        auVar82._0_4_ = auVar81._0_4_ + fVar93 * fVar127;
        auVar82._4_4_ = auVar81._4_4_ + fVar97 * fVar132;
        auVar82._8_4_ = auVar81._8_4_ + fVar98 * fVar91;
        auVar82._12_4_ = auVar81._12_4_ + fVar99 * fVar48;
        if ((bVar17 & 1) == 0) {
          if ((bVar17 & 2) == 0) goto LAB_14036db50;
LAB_14036dd34:
          uVar5 = extractps(auVar82,1);
          *(undefined8 *)(param_1 + lVar25) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036dd46;
LAB_14036db5a:
          if (-1 < (char)bVar17) goto LAB_14036db62;
LAB_14036dd56:
          uVar5 = extractps(auVar82,3);
          *(undefined8 *)(param_1 + lVar13) = uVar5;
          auVar81._0_4_ = fVar70 + fVar35 * fVar127;
          auVar81._4_4_ = fVar126 + fVar42 * fVar132;
          auVar81._8_4_ = fVar77 + fVar44 * fVar91;
          auVar81._12_4_ = fVar79 + fVar45 * fVar48;
          if ((bVar17 & 1) != 0) goto LAB_14036dd6d;
LAB_14036db72:
          if ((bVar17 & 2) == 0) goto LAB_14036db7c;
LAB_14036dd7e:
          uVar5 = extractps(auVar81,1);
          *(undefined8 *)(param_1 + 4 + lVar25) = uVar5;
          if ((bVar17 & 4) != 0) goto LAB_14036dd91;
LAB_14036db86:
          if (-1 < (char)bVar17) goto LAB_14036db8e;
LAB_14036dda2:
          uVar5 = extractps(auVar81,3);
          *(undefined8 *)(param_1 + 4 + lVar13) = uVar5;
          auVar64._0_4_ = fVar115 + fVar127 * fVar49;
          auVar64._4_4_ = fVar119 + fVar132 * fVar57;
          auVar64._8_4_ = fVar67 + fVar91 * fVar59;
          auVar64._12_4_ = fVar120 + fVar48 * fVar61;
        }
        else {
          *(float *)(param_1 + lVar21) = auVar82._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036dd34;
LAB_14036db50:
          if ((bVar17 & 4) == 0) goto LAB_14036db5a;
LAB_14036dd46:
          uVar5 = extractps(auVar82,2);
          *(undefined8 *)(param_1 + lVar24) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036dd56;
LAB_14036db62:
          auVar81._0_4_ = fVar70 + fVar35 * fVar127;
          auVar81._4_4_ = fVar126 + fVar42 * fVar132;
          auVar81._8_4_ = fVar77 + fVar44 * fVar91;
          auVar81._12_4_ = fVar79 + fVar45 * fVar48;
          if ((bVar17 & 1) == 0) goto LAB_14036db72;
LAB_14036dd6d:
          *(int *)(param_1 + 4 + lVar21) = auVar81._0_4_;
          if ((bVar17 & 2) != 0) goto LAB_14036dd7e;
LAB_14036db7c:
          if ((bVar17 & 4) == 0) goto LAB_14036db86;
LAB_14036dd91:
          uVar5 = extractps(auVar81,2);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar5;
          if ((char)bVar17 < '\0') goto LAB_14036dda2;
LAB_14036db8e:
          auVar64._0_4_ = fVar115 + fVar127 * fVar49;
          auVar64._4_4_ = fVar119 + fVar132 * fVar57;
          auVar64._8_4_ = fVar67 + fVar91 * fVar59;
          auVar64._12_4_ = fVar120 + fVar48 * fVar61;
        }
        if ((bVar17 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar21) = auVar64._0_4_;
        }
        if ((bVar17 & 2) != 0) {
          uVar5 = extractps(auVar64,1);
          *(undefined8 *)(param_1 + 8 + lVar25) = uVar5;
        }
        if ((bVar17 & 4) != 0) {
          uVar5 = extractps(auVar64,2);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar5;
        }
        if ((char)bVar17 < '\0') {
          uVar5 = extractps(auVar64,3);
          *(undefined8 *)(param_1 + 8 + lVar13) = uVar5;
        }
        if ((bVar17 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar21) = uVar34;
        }
        if ((bVar17 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar25) = uVar27;
        }
        if ((bVar17 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar24) = uVar29;
        }
        if ((char)bVar17 < '\0') {
          *(uint *)(param_1 + 0xc + lVar13) = uVar31;
        }
      }
      uVar19 = uVar19 + 4;
      uVar16 = uVar16 + 0x10;
    } while ((int)uVar19 < (int)(uVar12 & 0xfffffffc));
    if ((int)param_6 <= (int)uVar19) {
      return;
    }
  }
  uVar43 = (uint)uVar19;
  bVar6 = (int)(uVar43 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6;
  auVar62._0_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar43 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6;
  auVar62._4_4_ = -(uint)bVar7;
  bVar8 = (int)(uVar43 | _UNK_150631e08) < (int)param_6;
  auVar62._8_4_ = -(uint)bVar8;
  bVar9 = (int)(uVar43 | _UNK_150631e0c) < (int)param_6;
  auVar62._12_4_ = -(uint)bVar9;
  uVar19 = uVar19 & 0xffffffff;
  piVar1 = (int *)(param_2 + uVar19 * 8);
  uVar12 = movmskps((int)param_2,auVar62);
  bVar17 = (char)((char)uVar12 << 4) >> 4;
  if (uVar12 == 0xf) {
    iVar10 = *piVar1;
    iVar71 = piVar1[1];
    iVar18 = piVar1[2];
    iVar76 = piVar1[3];
    iVar68 = piVar1[4];
    iVar78 = piVar1[5];
    iVar69 = piVar1[6];
    iVar80 = piVar1[7];
  }
  else {
    auVar36._0_4_ = ___xmm_00000018000000100000000800000000 & auVar62._0_4_;
    auVar36._4_4_ = _UNK_150b51a04 & auVar62._4_4_;
    auVar36._8_4_ = _UNK_150b51a08 & auVar62._8_4_;
    auVar36._12_4_ = _UNK_150b51a0c & auVar62._12_4_;
    lVar11 = extractps(auVar36,1);
    lVar13 = extractps(auVar36,2);
    lVar14 = extractps(auVar36,3);
    iVar10 = *piVar1;
    iVar18 = *(int *)((longlong)piVar1 + lVar11);
    iVar68 = *(int *)((longlong)piVar1 + lVar13);
    iVar69 = *(int *)((longlong)piVar1 + lVar14);
    auVar100 = ___xmm_0000001c000000140000000c00000004 & auVar62;
    iVar71 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._0_4_);
    iVar76 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._4_4_);
    iVar78 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._8_4_);
    iVar80 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._12_4_);
  }
  auVar65._0_4_ = iVar10 << 4;
  auVar65._4_4_ = iVar18 * 0x10;
  auVar65._8_4_ = iVar68 << 4;
  auVar65._12_4_ = iVar69 << 4;
  auVar72 = auVar62 & auVar65;
  lVar11 = param_1 + auVar72._0_4_;
  lVar13 = param_1 + auVar72._4_4_;
  lVar14 = param_1 + auVar72._8_4_;
  lVar20 = param_1 + auVar72._12_4_;
  auVar86 = ___xmm_00000004000000040000000400000004 & auVar62;
  uVar23 = (ulonglong)auVar86._0_4_;
  auVar104 = ___xmm_00000008000000080000000800000008 & auVar62;
  uVar16 = (ulonglong)auVar104._0_4_;
  auVar73._0_4_ = iVar71 << 4;
  auVar73._4_4_ = iVar76 << 4;
  auVar73._8_4_ = iVar78 << 4;
  auVar73._12_4_ = iVar80 << 4;
  auVar108 = auVar62 & auVar73;
  lVar15 = (longlong)auVar108._0_4_;
  auVar100 = ZEXT416(*(uint *)(param_1 + auVar72._0_4_));
  lVar21 = param_1 + lVar15;
  lVar22 = param_1 + auVar108._4_4_;
  lVar24 = param_1 + auVar108._8_4_;
  lVar25 = param_1 + auVar108._12_4_;
  if ((bVar17 & 2) == 0) {
    auVar111 = ZEXT416(*(uint *)(uVar23 + lVar11));
    auVar81 = ZEXT416(*(uint *)(uVar16 + lVar11));
    auVar116 = ZEXT416(*(uint *)(param_1 + lVar15));
    auVar94 = ZEXT416(*(uint *)(uVar23 + lVar21));
    auVar110 = ZEXT416(*(uint *)(uVar16 + lVar21));
  }
  else {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._4_4_),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar23 + lVar11)),
                        *(undefined4 *)((ulonglong)auVar86._4_4_ + lVar13),0x10);
    auVar81 = insertps(ZEXT416(*(uint *)(uVar16 + lVar11)),
                       *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar13),0x10);
    auVar116 = insertps(ZEXT416(*(uint *)(param_1 + lVar15)),
                        *(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    auVar94 = insertps(ZEXT416(*(uint *)(uVar23 + lVar21)),
                       *(undefined4 *)((ulonglong)auVar86._4_4_ + lVar22),0x10);
    auVar110 = insertps(ZEXT416(*(uint *)(uVar16 + lVar21)),
                        *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar22),0x10);
  }
  if ((bVar17 & 4) != 0) {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._8_4_),0x20);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar86._8_4_ + lVar14),0x20);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar14),0x20);
    auVar116 = insertps(auVar116,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    auVar94 = insertps(auVar94,*(undefined4 *)((ulonglong)auVar86._8_4_ + lVar24),0x20);
    auVar110 = insertps(auVar110,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar24),0x20);
  }
  if ((char)bVar17 < '\0') {
    auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + auVar72._12_4_),0x30);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar86._12_4_ + lVar20),0x30);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar20),0x30);
    auVar116 = insertps(auVar116,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    auVar94 = insertps(auVar94,*(undefined4 *)((ulonglong)auVar86._12_4_ + lVar25),0x30);
    auVar110 = insertps(auVar110,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar25),0x30);
  }
  fVar115 = auVar100._0_4_ - auVar116._0_4_;
  fVar119 = auVar100._4_4_ - auVar116._4_4_;
  auVar117._0_8_ = CONCAT44(fVar119,fVar115);
  auVar117._8_4_ = auVar100._8_4_ - auVar116._8_4_;
  auVar117._12_4_ = auVar100._12_4_ - auVar116._12_4_;
  fVar35 = auVar94._0_4_;
  fVar67 = auVar111._0_4_;
  fVar120 = fVar67 - fVar35;
  fVar42 = auVar94._4_4_;
  fVar70 = auVar111._4_4_;
  fVar126 = fVar70 - fVar42;
  auVar122._0_8_ = CONCAT44(fVar126,fVar120);
  fVar44 = auVar94._8_4_;
  fVar77 = auVar111._8_4_;
  fVar79 = auVar111._12_4_;
  auVar122._8_4_ = fVar77 - fVar44;
  fVar45 = auVar94._12_4_;
  auVar122._12_4_ = fVar79 - fVar45;
  fVar49 = auVar110._0_4_;
  fVar89 = auVar81._0_4_;
  fVar127 = fVar89 - fVar49;
  fVar57 = auVar110._4_4_;
  fVar90 = auVar81._4_4_;
  fVar132 = fVar90 - fVar57;
  auVar129._0_8_ = CONCAT44(fVar132,fVar127);
  fVar59 = auVar110._8_4_;
  fVar91 = auVar81._8_4_;
  fVar92 = auVar81._12_4_;
  auVar129._8_4_ = fVar91 - fVar59;
  fVar61 = auVar110._12_4_;
  auVar129._12_4_ = fVar92 - fVar61;
  auVar47._0_4_ = fVar127 * fVar127 + fVar120 * fVar120 + fVar115 * fVar115;
  auVar47._4_4_ = fVar132 * fVar132 + fVar126 * fVar126 + fVar119 * fVar119;
  auVar47._8_4_ =
       auVar129._8_4_ * auVar129._8_4_ +
       auVar122._8_4_ * auVar122._8_4_ + auVar117._8_4_ * auVar117._8_4_;
  auVar47._12_4_ =
       auVar129._12_4_ * auVar129._12_4_ +
       auVar122._12_4_ * auVar122._12_4_ + auVar117._12_4_ * auVar117._12_4_;
  auVar86 = sqrtps(auVar73,auVar47);
  uVar28 = -(uint)(auVar47._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar30 = -(uint)(auVar47._4_4_ < _UNK_1506895e4);
  uVar32 = -(uint)(auVar47._8_4_ < _UNK_1506895e8);
  uVar34 = -(uint)(auVar47._12_4_ < _UNK_1506895ec);
  auVar38._4_4_ = uVar30;
  auVar38._0_4_ = uVar28;
  auVar37._8_4_ = auVar122._8_4_;
  auVar37._0_8_ = auVar122._0_8_;
  auVar37._12_4_ = auVar122._12_4_;
  auVar72 = divps(auVar37,auVar86);
  auVar50._8_4_ = auVar129._8_4_;
  auVar50._0_8_ = auVar129._0_8_;
  auVar50._12_4_ = auVar129._12_4_;
  auVar104 = divps(auVar50,auVar86);
  auVar83._0_8_ = CONCAT44(~uVar30 & auVar72._4_4_,~uVar28 & auVar72._0_4_);
  auVar83._8_4_ = ~uVar32 & auVar72._8_4_;
  auVar83._12_4_ = ~uVar34 & auVar72._12_4_;
  auVar87._0_8_ = CONCAT44(~uVar30 & auVar104._4_4_,~uVar28 & auVar104._0_4_);
  auVar87._8_4_ = ~uVar32 & auVar104._8_4_;
  auVar87._12_4_ = ~uVar34 & auVar104._12_4_;
  auVar95._8_4_ = auVar117._8_4_;
  auVar95._0_8_ = auVar117._0_8_;
  auVar95._12_4_ = auVar117._12_4_;
  auVar72 = divps(auVar95,auVar86);
  auVar38._8_4_ = uVar32;
  auVar38._12_4_ = uVar34;
  auVar72 = blendvps(auVar72,___xmm_3f8000003f8000003f8000003f800000,auVar38);
  auVar51._8_4_ = auVar117._8_4_;
  auVar51._0_8_ = auVar117._0_8_;
  auVar51._12_4_ = auVar117._12_4_;
  auVar105._8_4_ = auVar122._8_4_;
  auVar105._0_8_ = auVar122._0_8_;
  auVar105._12_4_ = auVar122._12_4_;
  auVar39._8_4_ = auVar129._8_4_;
  auVar39._0_8_ = auVar129._0_8_;
  auVar39._12_4_ = auVar129._12_4_;
  if ((bVar17 & 1) == 0) {
    auVar104 = blendps(auVar117,auVar51,1);
    if ((bVar17 & 2) != 0) goto LAB_14036e493;
LAB_14036e201:
    auVar123 = blendps(auVar122,auVar105,1);
    auVar131 = blendps(auVar129,auVar39,1);
    auVar104 = blendps(auVar104,auVar104,2);
    auVar108 = auVar123;
    auVar94 = auVar131;
    if ((bVar17 & 4) != 0) goto LAB_14036e23a;
LAB_14036e4cf:
    auVar124 = blendps(auVar108,auVar123,2);
    auVar130 = blendps(auVar94,auVar131,2);
    auVar108 = auVar104;
    auVar81 = auVar124;
    auVar94 = auVar130;
  }
  else {
    auVar105._8_4_ = auVar83._8_4_;
    auVar105._0_8_ = auVar83._0_8_;
    auVar105._12_4_ = auVar83._12_4_;
    auVar39._8_4_ = auVar87._8_4_;
    auVar39._0_8_ = auVar87._0_8_;
    auVar39._12_4_ = auVar87._12_4_;
    auVar104 = blendps(auVar117,auVar72,1);
    if ((bVar17 & 2) == 0) goto LAB_14036e201;
LAB_14036e493:
    auVar108 = blendps(auVar122,auVar105,1);
    auVar123._8_4_ = auVar83._8_4_;
    auVar123._0_8_ = auVar83._0_8_;
    auVar123._12_4_ = auVar83._12_4_;
    auVar94 = blendps(auVar129,auVar39,1);
    auVar131._8_4_ = auVar87._8_4_;
    auVar131._0_8_ = auVar87._0_8_;
    auVar131._12_4_ = auVar87._12_4_;
    auVar104 = blendps(auVar104,auVar72,2);
    if ((bVar17 & 4) == 0) goto LAB_14036e4cf;
LAB_14036e23a:
    auVar81 = blendps(auVar108,auVar123,2);
    auVar124._8_4_ = auVar83._8_4_;
    auVar124._0_8_ = auVar83._0_8_;
    auVar124._12_4_ = auVar83._12_4_;
    auVar94 = blendps(auVar94,auVar131,2);
    auVar130._8_4_ = auVar87._8_4_;
    auVar130._0_8_ = auVar87._0_8_;
    auVar130._12_4_ = auVar87._12_4_;
    auVar108 = auVar72;
  }
  auVar52 = ___xmm_0000000c0000000c0000000c0000000c & auVar62;
  auVar104 = blendps(auVar104,auVar108,4);
  bVar26 = -1 < (char)bVar17;
  if (bVar26) {
    auVar72 = auVar104;
  }
  auVar111 = insertps(ZEXT416(*(uint *)((ulonglong)auVar52._0_4_ + lVar11)),
                      *(undefined4 *)((ulonglong)auVar52._4_4_ + lVar13),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)((ulonglong)auVar52._0_4_ + lVar21)),
                      *(undefined4 *)((ulonglong)auVar52._4_4_ + lVar22),0x10);
  auVar81 = blendps(auVar81,auVar124,4);
  if (bVar26) {
    auVar83 = auVar81;
  }
  auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar52._8_4_ + lVar14),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)((ulonglong)auVar52._8_4_ + lVar24),0x20);
  auVar94 = blendps(auVar94,auVar130,4);
  if (bVar26) {
    auVar87 = auVar94;
  }
  auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)auVar52._12_4_ + lVar20),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)((ulonglong)auVar52._12_4_ + lVar25),0x30);
  auVar72 = blendps(auVar104,auVar72,8);
  auVar104 = blendps(auVar81,auVar83,8);
  auVar94 = blendps(auVar94,auVar87,8);
  if ((~bVar17 & 9) == 0) {
    auVar83 = *(undefined1 (*) [16])(param_3 + (int)(uVar43 << 2));
    auVar130 = ZEXT416(*(uint *)(param_4 + uVar19));
  }
  else {
    puVar3 = (uint *)(param_3 + (int)(uVar43 << 2));
    if ((uVar12 & 1) != 0) {
      auVar83 = ZEXT416(*puVar3);
    }
    if ((uVar12 & 2) != 0) {
      auVar83 = insertps(auVar83,puVar3[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar83 = insertps(auVar83,puVar3[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar83 = insertps(auVar83,puVar3[3],0x30);
    }
    pbVar4 = (byte *)(param_4 + uVar19);
    if ((uVar12 & 1) != 0) {
      auVar130 = ZEXT116(*pbVar4);
    }
    if ((uVar12 & 2) != 0) {
      auVar52._8_8_ = auVar130._8_8_;
      auVar52._0_8_ = auVar130._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar4[1] << 8;
      auVar130 = pblendw(auVar130,auVar52,0xfd);
    }
    if ((uVar12 & 4) != 0) {
      bVar17 = auVar130[3];
      auVar81 = pmovzxwd(auVar130,auVar130);
      auVar130._8_8_ = auVar81._8_8_;
      auVar130._0_8_ =
           auVar81._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar4[2] << 0x10 |
           (ulonglong)bVar17 << 0x18;
    }
    if ((uVar12 & 8) != 0) {
      bVar17 = auVar130[2];
      auVar81 = pmovzxwd(auVar130,auVar130);
      auVar130._8_8_ = auVar81._8_8_;
      auVar130._0_8_ =
           auVar81._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar17 << 0x10 |
           (ulonglong)pbVar4[3] << 0x18;
    }
  }
  auVar81 = pmovzxbd(auVar52,auVar130);
  auVar53._0_4_ = auVar81._0_4_ << 2;
  auVar53._4_4_ = auVar81._4_4_ << 2;
  auVar53._8_4_ = auVar81._8_4_ << 2;
  auVar53._12_4_ = auVar81._12_4_ << 2;
  auVar110 = pmovzxdq(auVar87,auVar53);
  auVar54._4_4_ = 0;
  auVar54._0_4_ = auVar53._8_4_;
  auVar54._8_4_ = auVar53._12_4_;
  auVar54._12_4_ = 0;
  auVar81 = pmovsxdq(auVar130,auVar62);
  auVar110 = blendvps(ZEXT816(0),auVar110,auVar81);
  auVar40._4_4_ = auVar62._8_4_;
  auVar40._0_4_ = auVar62._8_4_;
  auVar40._8_4_ = auVar62._12_4_;
  auVar40._12_4_ = auVar62._12_4_;
  auVar81 = blendvps(ZEXT816(0),auVar54,auVar40);
  fVar115 = (float)(~uVar28 & auVar86._0_4_) - auVar83._0_4_;
  fVar119 = (float)(~uVar30 & auVar86._4_4_) - auVar83._4_4_;
  fVar120 = (float)(~uVar32 & auVar86._8_4_) - auVar83._8_4_;
  fVar126 = (float)(~uVar34 & auVar86._12_4_) - auVar83._12_4_;
  auVar86 = insertps(ZEXT416(*(uint *)(param_5 + auVar110._0_8_)),
                     *(undefined4 *)(param_5 + auVar110._8_8_),0x10);
  auVar86 = insertps(auVar86,*(undefined4 *)(param_5 + auVar81._0_8_),0x20);
  auVar86 = insertps(auVar86,*(undefined4 *)(param_5 + auVar81._8_8_),0x30);
  fVar107 = auVar111._0_4_;
  fVar112 = auVar111._4_4_;
  fVar113 = auVar111._8_4_;
  fVar114 = auVar111._12_4_;
  fVar97 = auVar108._0_4_;
  auVar41._0_4_ = fVar107 + fVar97;
  fVar98 = auVar108._4_4_;
  auVar41._4_4_ = fVar112 + fVar98;
  fVar99 = auVar108._8_4_;
  auVar41._8_4_ = fVar113 + fVar99;
  fVar103 = auVar108._12_4_;
  auVar41._12_4_ = fVar114 + fVar103;
  fVar127 = auVar86._0_4_;
  auVar118._0_4_ = auVar72._0_4_ * fVar115 * fVar127;
  fVar132 = auVar86._4_4_;
  auVar118._4_4_ = auVar72._4_4_ * fVar119 * fVar132;
  fVar48 = auVar86._8_4_;
  auVar118._8_4_ = auVar72._8_4_ * fVar120 * fVar48;
  fVar93 = auVar86._12_4_;
  auVar118._12_4_ = auVar72._12_4_ * fVar126 * fVar93;
  auVar125._0_4_ = auVar104._0_4_ * fVar115 * fVar127;
  auVar125._4_4_ = auVar104._4_4_ * fVar119 * fVar132;
  auVar125._8_4_ = auVar104._8_4_ * fVar120 * fVar48;
  auVar125._12_4_ = auVar104._12_4_ * fVar126 * fVar93;
  auVar84._0_4_ = fVar127 * auVar94._0_4_ * fVar115;
  auVar84._4_4_ = fVar132 * auVar94._4_4_ * fVar119;
  auVar84._8_4_ = fVar48 * auVar94._8_4_ * fVar120;
  auVar84._12_4_ = fVar93 * auVar94._12_4_ * fVar126;
  auVar104 = divps(auVar118,auVar41);
  auVar86 = divps(auVar125,auVar41);
  auVar72 = divps(auVar84,auVar41);
  uVar12 = -(uint)(fVar97 == 0.0 && fVar107 == 0.0);
  uVar43 = -(uint)(fVar98 == 0.0 && fVar112 == 0.0);
  uVar28 = -(uint)(fVar99 == 0.0 && fVar113 == 0.0);
  uVar30 = -(uint)(fVar103 == 0.0 && fVar114 == 0.0);
  fVar128 = (float)(~uVar12 & auVar104._0_4_);
  fVar133 = (float)(~uVar43 & auVar104._4_4_);
  fVar134 = (float)(~uVar28 & auVar104._8_4_);
  fVar135 = (float)(~uVar30 & auVar104._12_4_);
  fVar127 = (float)(~uVar12 & auVar86._0_4_);
  fVar132 = (float)(~uVar43 & auVar86._4_4_);
  fVar48 = (float)(~uVar28 & auVar86._8_4_);
  fVar93 = (float)(~uVar30 & auVar86._12_4_);
  fVar115 = (float)(~uVar12 & auVar72._0_4_);
  fVar119 = (float)(~uVar43 & auVar72._4_4_);
  fVar120 = (float)(~uVar28 & auVar72._8_4_);
  fVar126 = (float)(~uVar30 & auVar72._12_4_);
  auVar55._0_4_ = -(uint)(0.0 < fVar107 && bVar6);
  auVar55._4_4_ = -(uint)(0.0 < fVar112 && bVar7);
  auVar55._8_4_ = -(uint)(0.0 < fVar113 && bVar8);
  auVar55._12_4_ = -(uint)(0.0 < fVar114 && bVar9);
  iVar18 = movmskps(auVar110._0_4_,auVar55);
  iVar10 = 0;
  if (iVar18 == 0) goto LAB_14036e7bc;
  bVar17 = (char)((char)iVar18 << 4) >> 4;
  auVar96._0_4_ = auVar100._0_4_ - fVar107 * fVar128;
  auVar96._4_4_ = auVar100._4_4_ - fVar112 * fVar133;
  auVar96._8_4_ = auVar100._8_4_ - fVar113 * fVar134;
  auVar96._12_4_ = auVar100._12_4_ - fVar114 * fVar135;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + auVar65._0_4_) = auVar96._0_4_;
  }
  if ((bVar17 & 2) == 0) {
    if ((bVar17 & 4) == 0) goto LAB_14036e737;
LAB_14036e939:
    uVar5 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + auVar65._8_4_) = uVar5;
    if ((char)bVar17 < '\0') goto LAB_14036e953;
LAB_14036e746:
    auVar88._0_4_ = fVar67 - fVar107 * fVar127;
    auVar88._4_4_ = fVar70 - fVar112 * fVar132;
    auVar88._8_4_ = fVar77 - fVar113 * fVar48;
    auVar88._12_4_ = fVar79 - fVar114 * fVar93;
    if ((bVar17 & 1) == 0) goto LAB_14036e752;
LAB_14036e971:
    *(int *)(param_1 + 4 + (longlong)auVar65._0_4_) = auVar88._0_4_;
    if ((bVar17 & 2) != 0) goto LAB_14036e984;
LAB_14036e75b:
    if ((bVar17 & 4) == 0) goto LAB_14036e764;
LAB_14036e999:
    uVar5 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._8_4_) = uVar5;
    if ((char)bVar17 < '\0') goto LAB_14036e9b4;
LAB_14036e773:
    auVar85._0_4_ = fVar89 - fVar107 * fVar115;
    auVar85._4_4_ = fVar90 - fVar112 * fVar119;
    auVar85._8_4_ = fVar91 - fVar113 * fVar120;
    auVar85._12_4_ = fVar92 - fVar114 * fVar126;
  }
  else {
    uVar5 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + auVar65._4_4_) = uVar5;
    if ((bVar17 & 4) != 0) goto LAB_14036e939;
LAB_14036e737:
    if (-1 < (char)bVar17) goto LAB_14036e746;
LAB_14036e953:
    uVar5 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + auVar65._12_4_) = uVar5;
    auVar88._0_4_ = fVar67 - fVar107 * fVar127;
    auVar88._4_4_ = fVar70 - fVar112 * fVar132;
    auVar88._8_4_ = fVar77 - fVar113 * fVar48;
    auVar88._12_4_ = fVar79 - fVar114 * fVar93;
    if ((bVar17 & 1) != 0) goto LAB_14036e971;
LAB_14036e752:
    if ((bVar17 & 2) == 0) goto LAB_14036e75b;
LAB_14036e984:
    uVar5 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._4_4_) = uVar5;
    if ((bVar17 & 4) != 0) goto LAB_14036e999;
LAB_14036e764:
    if (-1 < (char)bVar17) goto LAB_14036e773;
LAB_14036e9b4:
    uVar5 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar65._12_4_) = uVar5;
    auVar85._0_4_ = fVar89 - fVar107 * fVar115;
    auVar85._4_4_ = fVar90 - fVar112 * fVar119;
    auVar85._8_4_ = fVar91 - fVar113 * fVar120;
    auVar85._12_4_ = fVar92 - fVar114 * fVar126;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar65._0_4_) = auVar85._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar65._12_4_) = uVar5;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar65._0_4_) = fVar107;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar111,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar111,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._8_4_) = uVar5;
  }
  iVar10 = CONCAT31((int3)((uint)iVar18 >> 8),bVar17);
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar111,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar65._12_4_) = uVar5;
    iVar10 = auVar65._12_4_;
  }
LAB_14036e7bc:
  auVar74._0_4_ = -(uint)(0.0 < fVar97 && bVar6);
  auVar74._4_4_ = -(uint)(0.0 < fVar98 && bVar7);
  auVar74._8_4_ = -(uint)(0.0 < fVar99 && bVar8);
  auVar74._12_4_ = -(uint)(0.0 < fVar103 && bVar9);
  iVar10 = movmskps(iVar10,auVar74);
  if (iVar10 == 0) {
    return;
  }
  bVar17 = (char)((char)iVar10 << 4) >> 4;
  auVar75._0_4_ = auVar116._0_4_ + fVar128 * fVar97;
  auVar75._4_4_ = auVar116._4_4_ + fVar133 * fVar98;
  auVar75._8_4_ = auVar116._8_4_ + fVar134 * fVar99;
  auVar75._12_4_ = auVar116._12_4_ + fVar135 * fVar103;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + auVar73._0_4_) = auVar75._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar75,1);
    *(undefined8 *)(param_1 + auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar75,2);
    *(undefined8 *)(param_1 + auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar75,3);
    *(undefined8 *)(param_1 + auVar73._12_4_) = uVar5;
    auVar66._0_4_ = fVar35 + fVar127 * fVar97;
    auVar66._4_4_ = fVar42 + fVar132 * fVar98;
    auVar66._8_4_ = fVar44 + fVar48 * fVar99;
    auVar66._12_4_ = fVar45 + fVar93 * fVar103;
  }
  else {
    auVar66._0_4_ = fVar35 + fVar127 * fVar97;
    auVar66._4_4_ = fVar42 + fVar132 * fVar98;
    auVar66._8_4_ = fVar44 + fVar48 * fVar99;
    auVar66._12_4_ = fVar45 + fVar93 * fVar103;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar73._0_4_) = auVar66._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar66,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar66,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar66,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar5;
    auVar63._0_4_ = fVar49 + fVar115 * fVar97;
    auVar63._4_4_ = fVar57 + fVar119 * fVar98;
    auVar63._8_4_ = fVar59 + fVar120 * fVar99;
    auVar63._12_4_ = fVar61 + fVar126 * fVar103;
  }
  else {
    auVar63._0_4_ = fVar49 + fVar115 * fVar97;
    auVar63._4_4_ = fVar57 + fVar119 * fVar98;
    auVar63._8_4_ = fVar59 + fVar120 * fVar99;
    auVar63._12_4_ = fVar61 + fVar126 * fVar103;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar73._0_4_) = auVar63._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar63,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar63,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar63,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar5;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = fVar97;
  }
  if ((bVar17 & 2) != 0) {
    uVar5 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar5;
  }
  if ((bVar17 & 4) != 0) {
    uVar5 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar5;
  }
  if ((char)bVar17 < '\0') {
    uVar5 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar5;
  }
  return;
}

