// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ApplyXPBDEmbeddedSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408e3780

/* WARNING: Removing unreachable block (ram,0x0001408e3f8e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,float param_5,
               byte param_6,float *param_7,longlong param_8,byte param_9,float *param_10,
               longlong param_11,uint param_12)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar62;
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar67;
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  float fVar75;
  undefined1 auVar74 [16];
  float fVar77;
  float fVar80;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar104;
  float fVar109;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar110;
  float fVar111;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  float fVar119;
  float fVar123;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar124;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  int iVar68;
  int iVar70;
  int iVar71;
  int iVar72;
  float fVar76;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar108 [16];
  
  uVar35 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar35 = param_12;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar20 = 0;
    uVar29 = param_3;
  }
  else {
    uVar20 = 0;
    uVar29 = 0;
    do {
      uVar22 = uVar29 & 0xffffffff;
      fVar61 = *param_7;
      fVar55 = fVar61;
      fVar59 = fVar61;
      fVar60 = fVar61;
      if ((param_6 & 1) != 0) {
        pfVar1 = (float *)(param_8 + uVar22);
        fVar48 = param_7[1];
        fVar55 = fVar61 + fVar48 * *pfVar1;
        fVar59 = fVar61 + fVar48 * pfVar1[1];
        fVar60 = fVar61 + fVar48 * pfVar1[2];
        fVar61 = fVar61 + fVar48 * pfVar1[3];
      }
      piVar2 = (int *)(param_2 + uVar29 * 2);
      piVar3 = (int *)(param_2 + 0x10 + uVar29 * 2);
      lVar21 = (longlong)(*piVar2 << 4);
      lVar24 = (longlong)(piVar2[2] * 0x10);
      lVar31 = (longlong)(*piVar3 << 4);
      lVar25 = (longlong)(piVar3[2] << 4);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar24),0x10
                        );
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + lVar31),0x20);
      auVar64 = insertps(auVar63,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                         *(undefined4 *)(param_1 + 4 + lVar24),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                         *(undefined4 *)(param_1 + 8 + lVar24),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      uVar19 = *(uint *)(param_1 + 0xc + lVar21);
      uVar38 = *(uint *)(param_1 + 0xc + lVar24);
      uVar40 = *(uint *)(param_1 + 0xc + lVar31);
      uVar4 = *(uint *)(param_1 + 0xc + lVar25);
      auVar106 = insertps(ZEXT416(uVar19),ZEXT416(uVar38),0x10);
      auVar107 = insertps(auVar106,ZEXT416(uVar40),0x20);
      lVar28 = (longlong)(piVar2[1] << 4);
      lVar30 = (longlong)(piVar2[3] * 0x10);
      lVar26 = (longlong)(piVar3[1] << 4);
      lVar32 = (longlong)(piVar3[3] << 4);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + lVar26),0x20);
      auVar98 = insertps(auVar106,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 4 + lVar26),0x20);
      auVar85 = insertps(auVar106,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                          *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 8 + lVar26),0x20);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      auVar107 = insertps(auVar107,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      uVar6 = *(uint *)(param_1 + 0xc + lVar30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar26);
      uVar8 = *(uint *)(param_1 + 0xc + lVar32);
      auVar131 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar131 = insertps(auVar131,ZEXT416(uVar7),0x20);
      unaff_XMM15 = insertps(auVar131,ZEXT416(uVar8),0x30);
      fVar48 = *param_10;
      auVar131._4_4_ = fVar48;
      auVar131._0_4_ = fVar48;
      auVar131._8_4_ = fVar48;
      auVar131._12_4_ = fVar48;
      if ((param_9 & 1) != 0) {
        pfVar1 = (float *)(param_11 + uVar22);
        fVar52 = param_10[1];
        auVar131._0_4_ = fVar48 + fVar52 * *pfVar1;
        auVar131._4_4_ = fVar48 + fVar52 * pfVar1[1];
        auVar131._8_4_ = fVar48 + fVar52 * pfVar1[2];
        auVar131._12_4_ = fVar48 + fVar52 * pfVar1[3];
      }
      auVar112._0_4_ = auVar64._0_4_ - auVar98._0_4_;
      auVar112._4_4_ = auVar64._4_4_ - auVar98._4_4_;
      auVar112._8_4_ = auVar64._8_4_ - auVar98._8_4_;
      auVar112._12_4_ = auVar64._12_4_ - auVar98._12_4_;
      auVar88._0_4_ = auVar63._0_4_ - auVar85._0_4_;
      auVar88._4_4_ = auVar63._4_4_ - auVar85._4_4_;
      auVar88._8_4_ = auVar63._8_4_ - auVar85._8_4_;
      auVar88._12_4_ = auVar63._12_4_ - auVar85._12_4_;
      auVar81._0_4_ = auVar73._0_4_ - auVar106._0_4_;
      auVar81._4_4_ = auVar73._4_4_ - auVar106._4_4_;
      auVar81._8_4_ = auVar73._8_4_ - auVar106._8_4_;
      auVar81._12_4_ = auVar73._12_4_ - auVar106._12_4_;
      auVar49._0_4_ =
           auVar81._0_4_ * auVar81._0_4_ +
           auVar88._0_4_ * auVar88._0_4_ + auVar112._0_4_ * auVar112._0_4_;
      auVar49._4_4_ =
           auVar81._4_4_ * auVar81._4_4_ +
           auVar88._4_4_ * auVar88._4_4_ + auVar112._4_4_ * auVar112._4_4_;
      auVar49._8_4_ =
           auVar81._8_4_ * auVar81._8_4_ +
           auVar88._8_4_ * auVar88._8_4_ + auVar112._8_4_ * auVar112._8_4_;
      auVar49._12_4_ =
           auVar81._12_4_ * auVar81._12_4_ +
           auVar88._12_4_ * auVar88._12_4_ + auVar112._12_4_ * auVar112._12_4_;
      unaff_XMM13 = sqrtps(unaff_XMM13,auVar49);
      uVar34 = -(uint)(auVar49._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar36 = -(uint)(auVar49._4_4_ < _UNK_1506895e4);
      uVar37 = -(uint)(auVar49._8_4_ < _UNK_1506895e8);
      uVar39 = -(uint)(auVar49._12_4_ < _UNK_1506895ec);
      auVar114._4_4_ = uVar36;
      auVar114._0_4_ = uVar34;
      auVar113 = divps(auVar112,unaff_XMM13);
      auVar114._8_4_ = uVar37;
      auVar114._12_4_ = uVar39;
      auVar89._4_4_ = _UNK_15076b1f4;
      auVar89._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar89._8_4_ = _UNK_15076b1f8;
      auVar89._12_4_ = _UNK_15076b1fc;
      auVar114 = blendvps(auVar113,auVar89,auVar114);
      pfVar1 = (float *)(param_3 + uVar22);
      fVar48 = (float)(~uVar34 & unaff_XMM13._0_4_) - *pfVar1;
      fVar52 = (float)(~uVar36 & unaff_XMM13._4_4_) - pfVar1[1];
      fVar53 = (float)(~uVar37 & unaff_XMM13._8_4_) - pfVar1[2];
      fVar54 = (float)(~uVar39 & unaff_XMM13._12_4_) - pfVar1[3];
      auVar41._4_4_ = -(uint)(0.0 <= fVar52);
      auVar41._0_4_ = -(uint)(0.0 <= fVar48);
      auVar41._8_4_ = -(uint)(0.0 <= fVar53);
      auVar41._12_4_ = -(uint)(0.0 <= fVar54);
      auVar113._4_4_ = fVar59;
      auVar113._0_4_ = fVar55;
      auVar113._8_4_ = fVar60;
      auVar113._12_4_ = fVar61;
      auVar113 = blendvps(auVar131,auVar113,auVar41);
      auVar89 = divps(auVar88,unaff_XMM13);
      auVar131 = divps(auVar81,unaff_XMM13);
      fVar124 = auVar113._0_4_ * param_5 * param_5;
      fVar128 = auVar113._4_4_ * param_5 * param_5;
      fVar129 = auVar113._8_4_ * param_5 * param_5;
      fVar130 = auVar113._12_4_ * param_5 * param_5;
      fVar76 = auVar107._0_4_;
      fVar77 = auVar107._4_4_;
      fVar80 = auVar107._12_4_;
      fVar104 = unaff_XMM15._0_4_;
      fVar109 = unaff_XMM15._4_4_;
      fVar75 = auVar107._8_4_;
      fVar94 = unaff_XMM15._8_4_;
      fVar95 = unaff_XMM15._12_4_;
      pfVar1 = (float *)(param_4 + uVar22);
      fVar61 = *pfVar1;
      fVar55 = pfVar1[1];
      fVar59 = pfVar1[2];
      fVar60 = pfVar1[3];
      auVar125._0_4_ =
           (float)((uint)fVar124 ^ __xmm_80000000800000008000000080000000) * fVar48 - fVar61;
      auVar125._4_4_ = (float)((uint)fVar128 ^ _UNK_150651574) * fVar52 - fVar55;
      auVar125._8_4_ = (float)((uint)fVar129 ^ _UNK_150651578) * fVar53 - fVar59;
      auVar125._12_4_ = (float)((uint)fVar130 ^ _UNK_15065157c) * fVar54 - fVar60;
      auVar82._0_4_ = (fVar76 + fVar104) * fVar124 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar82._4_4_ = (fVar77 + fVar109) * fVar128 + _UNK_15076b1f4;
      auVar82._8_4_ = (fVar75 + fVar94) * fVar129 + _UNK_15076b1f8;
      auVar82._12_4_ = (fVar80 + fVar95) * fVar130 + _UNK_15076b1fc;
      auVar107 = divps(auVar125,auVar82);
      fVar100 = auVar107._0_4_;
      fVar110 = auVar114._0_4_ * fVar100;
      fVar101 = auVar107._4_4_;
      fVar115 = auVar114._4_4_ * fVar101;
      fVar102 = auVar107._8_4_;
      fVar117 = auVar114._8_4_ * fVar102;
      fVar103 = auVar107._12_4_;
      fVar118 = auVar114._12_4_ * fVar103;
      auVar107._0_4_ = fVar76 * fVar110 + auVar64._0_4_;
      auVar107._4_4_ = fVar77 * fVar115 + auVar64._4_4_;
      auVar107._8_4_ = fVar75 * fVar117 + auVar64._8_4_;
      auVar107._12_4_ = fVar80 * fVar118 + auVar64._12_4_;
      fVar124 = (float)(~uVar34 & auVar89._0_4_) * fVar100;
      fVar128 = (float)(~uVar36 & auVar89._4_4_) * fVar101;
      fVar129 = (float)(~uVar37 & auVar89._8_4_) * fVar102;
      fVar130 = (float)(~uVar39 & auVar89._12_4_) * fVar103;
      *(float *)(param_1 + lVar21) = auVar107._0_4_;
      uVar9 = extractps(auVar107,1);
      *(undefined8 *)(param_1 + lVar24) = uVar9;
      auVar64._0_4_ = fVar76 * fVar124 + auVar63._0_4_;
      auVar64._4_4_ = fVar77 * fVar128 + auVar63._4_4_;
      auVar64._8_4_ = fVar75 * fVar129 + auVar63._8_4_;
      auVar64._12_4_ = fVar80 * fVar130 + auVar63._12_4_;
      uVar9 = extractps(auVar107,2);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      uVar9 = extractps(auVar107,3);
      *(undefined8 *)(param_1 + lVar25) = uVar9;
      fVar48 = (float)(~uVar34 & auVar131._0_4_) * fVar100;
      fVar52 = (float)(~uVar36 & auVar131._4_4_) * fVar101;
      fVar53 = (float)(~uVar37 & auVar131._8_4_) * fVar102;
      fVar54 = (float)(~uVar39 & auVar131._12_4_) * fVar103;
      *(float *)(param_1 + 4 + lVar21) = auVar64._0_4_;
      uVar9 = extractps(auVar64,1);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar9;
      uVar9 = extractps(auVar64,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      auVar105._0_4_ = fVar76 * fVar48 + auVar73._0_4_;
      auVar105._4_4_ = fVar77 * fVar52 + auVar73._4_4_;
      auVar105._8_4_ = fVar75 * fVar53 + auVar73._8_4_;
      auVar105._12_4_ = fVar80 * fVar54 + auVar73._12_4_;
      uVar9 = extractps(auVar64,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar9;
      *(float *)(param_1 + 8 + lVar21) = auVar105._0_4_;
      uVar9 = extractps(auVar105,1);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar9;
      uVar9 = extractps(auVar105,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = extractps(auVar105,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar9;
      *(uint *)(param_1 + 0xc + lVar21) = uVar19;
      *(uint *)(param_1 + 0xc + lVar24) = uVar38;
      *(uint *)(param_1 + 0xc + lVar31) = uVar40;
      *(uint *)(param_1 + 0xc + lVar25) = uVar4;
      auVar97._0_4_ = auVar98._0_4_ - fVar110 * fVar104;
      auVar97._4_4_ = auVar98._4_4_ - fVar115 * fVar109;
      auVar97._8_4_ = auVar98._8_4_ - fVar117 * fVar94;
      auVar97._12_4_ = auVar98._12_4_ - fVar118 * fVar95;
      *(float *)(param_1 + lVar28) = auVar97._0_4_;
      uVar9 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + lVar30) = uVar9;
      uVar9 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + lVar26) = uVar9;
      auVar73._0_4_ = auVar85._0_4_ - fVar124 * fVar104;
      auVar73._4_4_ = auVar85._4_4_ - fVar128 * fVar109;
      auVar73._8_4_ = auVar85._8_4_ - fVar129 * fVar94;
      auVar73._12_4_ = auVar85._12_4_ - fVar130 * fVar95;
      uVar9 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar73._0_4_;
      uVar9 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar9;
      uVar9 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + 4 + lVar26) = uVar9;
      auVar63._0_4_ = auVar106._0_4_ - fVar48 * fVar104;
      auVar63._4_4_ = auVar106._4_4_ - fVar52 * fVar109;
      auVar63._8_4_ = auVar106._8_4_ - fVar53 * fVar94;
      auVar63._12_4_ = auVar106._12_4_ - fVar54 * fVar95;
      uVar9 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar63._0_4_;
      uVar9 = extractps(auVar63,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar9;
      uVar9 = extractps(auVar63,2);
      *(undefined8 *)(param_1 + 8 + lVar26) = uVar9;
      uVar9 = extractps(auVar63,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      pfVar1 = (float *)(param_4 + uVar22);
      *pfVar1 = fVar100 + fVar61;
      pfVar1[1] = fVar101 + fVar55;
      pfVar1[2] = fVar102 + fVar59;
      pfVar1[3] = fVar103 + fVar60;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      *(uint *)(param_1 + 0xc + lVar30) = uVar6;
      *(uint *)(param_1 + 0xc + lVar26) = uVar7;
      *(uint *)(param_1 + 0xc + lVar32) = uVar8;
      uVar29 = uVar29 + 0x10;
      uVar19 = (int)uVar20 + 4;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)(uVar35 & 0xfffffffc));
  }
  uVar35 = (uint)uVar20;
  if ((int)param_12 <= (int)uVar35) {
    return;
  }
  auVar106._0_4_ =
       -(uint)((int)(uVar35 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12);
  auVar106._4_4_ =
       -(uint)((int)(uVar35 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12);
  auVar106._8_4_ = -(uint)((int)(uVar35 | _UNK_150631e08) < (int)param_12);
  auVar106._12_4_ = -(uint)((int)(uVar35 | _UNK_150631e0c) < (int)param_12);
  piVar2 = (int *)(param_2 + uVar20 * 8);
  uVar19 = movmskps((int)uVar29,auVar106);
  bVar18 = (char)((char)uVar19 << 4) >> 4;
  if (uVar19 == 0xf) {
    iVar68 = *piVar2;
    iVar62 = piVar2[1];
    iVar70 = piVar2[2];
    iVar65 = piVar2[3];
    iVar71 = piVar2[4];
    iVar66 = piVar2[5];
    iVar72 = piVar2[6];
    iVar67 = piVar2[7];
  }
  else {
    auVar85._0_4_ = ___xmm_00000018000000100000000800000000 & auVar106._0_4_;
    auVar85._4_4_ = _UNK_150b51a04 & auVar106._4_4_;
    auVar85._8_4_ = _UNK_150b51a08 & auVar106._8_4_;
    auVar85._12_4_ = _UNK_150b51a0c & auVar106._12_4_;
    lVar21 = extractps(auVar85,1);
    lVar24 = extractps(auVar85,2);
    lVar25 = extractps(auVar85,3);
    iVar68 = *piVar2;
    iVar70 = *(int *)((longlong)piVar2 + lVar21);
    iVar71 = *(int *)((longlong)piVar2 + lVar24);
    iVar72 = *(int *)((longlong)piVar2 + lVar25);
    auVar63 = ___xmm_0000001c000000140000000c00000004 & auVar106;
    iVar62 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._0_4_);
    iVar65 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._4_4_);
    iVar66 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._8_4_);
    iVar67 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._12_4_);
  }
  auVar69._0_4_ = iVar68 << 4;
  auVar69._4_4_ = iVar70 * 0x10;
  auVar69._8_4_ = iVar71 << 4;
  auVar69._12_4_ = iVar72 << 4;
  auVar64 = auVar106 & auVar69;
  lVar21 = param_1 + auVar64._0_4_;
  lVar24 = param_1 + auVar64._4_4_;
  lVar25 = param_1 + auVar64._8_4_;
  lVar26 = param_1 + auVar64._12_4_;
  auVar85 = ___xmm_00000004000000040000000400000004 & auVar106;
  uVar20 = (ulonglong)auVar85._0_4_;
  _local_1e8 = ___xmm_00000008000000080000000800000008 & auVar106;
  uVar29 = (ulonglong)local_1e8._0_4_;
  auVar98._0_4_ = iVar62 << 4;
  auVar98._4_4_ = iVar65 * 0x10;
  auVar98._8_4_ = iVar66 << 4;
  auVar98._12_4_ = iVar67 << 4;
  auVar73 = auVar106 & auVar98;
  lVar27 = (longlong)auVar73._0_4_;
  auVar63 = ZEXT416(*(uint *)(param_1 + auVar64._0_4_));
  lVar28 = param_1 + lVar27;
  lVar30 = param_1 + auVar73._4_4_;
  lVar31 = param_1 + auVar73._8_4_;
  lVar32 = param_1 + auVar73._12_4_;
  if ((bVar18 & 2) == 0) {
    auVar114 = ZEXT416(*(uint *)(uVar20 + lVar21));
    auVar113 = ZEXT416(*(uint *)(uVar29 + lVar21));
    auVar89 = ZEXT416(*(uint *)(param_1 + lVar27));
    auVar131 = ZEXT416(*(uint *)(uVar20 + lVar28));
    auVar107 = ZEXT416(*(uint *)(uVar29 + lVar28));
  }
  else {
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._4_4_),0x10);
    auVar114 = insertps(ZEXT416(*(uint *)(uVar20 + lVar21)),
                        *(undefined4 *)((ulonglong)auVar85._4_4_ + lVar24),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar29 + lVar21)),
                        *(undefined4 *)((ulonglong)local_1e8._4_4_ + lVar24),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(param_1 + lVar27)),*(undefined4 *)(param_1 + auVar73._4_4_)
                       ,0x10);
    auVar131 = insertps(ZEXT416(*(uint *)(uVar20 + lVar28)),
                        *(undefined4 *)((ulonglong)auVar85._4_4_ + lVar30),0x10);
    auVar107 = insertps(ZEXT416(*(uint *)(uVar29 + lVar28)),
                        *(undefined4 *)((ulonglong)local_1e8._4_4_ + lVar30),0x10);
  }
  if ((bVar18 & 4) == 0) {
    if (-1 < (char)bVar18) goto LAB_1408e4071;
LAB_1408e41eb:
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._12_4_),0x30);
    uVar29 = (ulonglong)(auVar106._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
    if ((char)bVar18 < '\0') goto LAB_1408e420c;
LAB_1408e4082:
    uVar20 = (ulonglong)(auVar106._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
    if (-1 < (char)bVar18) goto LAB_1408e408e;
LAB_1408e4220:
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_1e8._12_4_ + lVar26),0x30);
    uVar40 = *(uint *)(uVar29 + lVar21);
    uVar38 = *(uint *)(uVar29 + lVar28);
  }
  else {
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._8_4_),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar85._8_4_ + lVar25),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_1e8._8_4_ + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)(param_1 + auVar73._8_4_),0x20);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)auVar85._8_4_ + lVar31),0x20);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)local_1e8._8_4_ + lVar31),0x20);
    if ((char)bVar18 < '\0') goto LAB_1408e41eb;
LAB_1408e4071:
    uVar29 = (ulonglong)(auVar106._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
    if (-1 < (char)bVar18) goto LAB_1408e4082;
LAB_1408e420c:
    auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar85._12_4_ + lVar26),0x30);
    uVar20 = (ulonglong)(auVar106._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
    if ((char)bVar18 < '\0') goto LAB_1408e4220;
LAB_1408e408e:
    uVar40 = *(uint *)(uVar29 + lVar21);
    uVar38 = *(uint *)(uVar29 + lVar28);
  }
  uVar29 = (ulonglong)(auVar106._8_4_ & __xmm_0000000c0000000c0000000c0000000c._8_4_);
  if ((char)bVar18 < '\0') {
    auVar89 = insertps(auVar89,*(undefined4 *)(param_1 + auVar73._12_4_),0x30);
  }
  auVar106 = auVar106 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar73 = insertps(ZEXT416(uVar40),*(undefined4 *)(uVar20 + lVar24),0x10);
  auVar64 = insertps(ZEXT416(uVar38),*(undefined4 *)(uVar20 + lVar30),0x10);
  if ((char)bVar18 < '\0') {
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)auVar85._12_4_ + lVar32),0x30);
  }
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar29 + lVar25),0x20);
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar29 + lVar31),0x20);
  if ((char)bVar18 < '\0') {
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)local_1e8._12_4_ + lVar32),0x30);
  }
  auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar106._12_4_ + lVar26),0x30);
  auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar106._12_4_ + lVar32),0x30);
  lVar21 = (longlong)(int)(uVar35 << 2);
  pfVar1 = (float *)(param_4 + lVar21);
  local_1d8._0_4_ = *param_7;
  local_1d8._4_4_ = local_1d8._0_4_;
  fStack_1d0 = (float)local_1d8._0_4_;
  fStack_1cc = (float)local_1d8._0_4_;
  if ((bVar18 & 9) == 9) {
    _local_1e8 = *(undefined1 (*) [16])(param_3 + lVar21);
    unaff_XMM15 = *(undefined1 (*) [16])(param_4 + lVar21);
    if ((param_6 & 1) == 0) {
      fVar61 = *param_10;
      auVar120._4_4_ = fVar61;
      auVar120._0_4_ = fVar61;
      auVar120._8_4_ = fVar61;
      auVar120._12_4_ = fVar61;
    }
    else {
      auVar106 = *(undefined1 (*) [16])(param_8 + lVar21);
LAB_1408e4422:
      fVar61 = param_7[1];
      local_1d8._4_4_ = (float)local_1d8._0_4_ + fVar61 * auVar106._4_4_;
      fStack_1d0 = (float)local_1d8._0_4_ + fVar61 * auVar106._8_4_;
      fStack_1cc = (float)local_1d8._0_4_ + fVar61 * auVar106._12_4_;
      fVar55 = *param_10;
      auVar120._4_4_ = fVar55;
      auVar120._0_4_ = fVar55;
      auVar120._8_4_ = fVar55;
      auVar120._12_4_ = fVar55;
      local_1d8._0_4_ = (float)local_1d8._0_4_ + fVar61 * auVar106._0_4_;
    }
    if ((param_9 & 1) != 0) {
      if ((bVar18 & 9) == 9) {
        auVar106 = *(undefined1 (*) [16])(param_11 + lVar21);
      }
      else {
LAB_1408e4467:
        puVar23 = (uint *)(param_11 + lVar21);
        if ((uVar19 & 1) != 0) {
          auVar106 = ZEXT416(*puVar23);
        }
        if ((uVar19 & 2) != 0) {
          auVar106 = insertps(auVar106,puVar23[1],0x10);
        }
        if ((uVar19 & 4) != 0) {
          auVar106 = insertps(auVar106,puVar23[2],0x20);
        }
        if ((uVar19 & 8) != 0) {
          auVar106 = insertps(auVar106,puVar23[3],0x30);
        }
      }
      fVar61 = param_10[1];
      auVar121._0_4_ = auVar120._0_4_ + fVar61 * auVar106._0_4_;
      auVar121._4_4_ = auVar120._4_4_ + fVar61 * auVar106._4_4_;
      auVar121._8_4_ = auVar120._8_4_ + fVar61 * auVar106._8_4_;
      auVar121._12_4_ = auVar120._12_4_ + fVar61 * auVar106._12_4_;
      auVar120 = auVar121;
      goto LAB_1408e44c8;
    }
  }
  else {
    puVar23 = (uint *)(param_3 + lVar21);
    if ((uVar19 & 1) != 0) {
      _local_1e8 = ZEXT416(*puVar23);
    }
    if ((uVar19 & 2) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      unaff_XMM15 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[3],0x30);
    }
    if ((param_6 & 1) != 0) {
      puVar23 = (uint *)(param_8 + lVar21);
      if ((uVar19 & 1) != 0) {
        auVar106 = ZEXT416(*puVar23);
      }
      if ((uVar19 & 2) != 0) {
        auVar106 = insertps(auVar106,puVar23[1],0x10);
      }
      if ((uVar19 & 4) != 0) {
        auVar106 = insertps(auVar106,puVar23[2],0x20);
      }
      if ((uVar19 & 8) != 0) {
        auVar106 = insertps(auVar106,puVar23[3],0x30);
      }
      goto LAB_1408e4422;
    }
    fVar61 = *param_10;
    auVar120._4_4_ = fVar61;
    auVar120._0_4_ = fVar61;
    auVar120._8_4_ = fVar61;
    auVar120._12_4_ = fVar61;
    if ((param_9 & 1) != 0) goto LAB_1408e4467;
  }
LAB_1408e44c8:
  local_178 = auVar63._0_4_;
  fStack_174 = auVar63._4_4_;
  fStack_170 = auVar63._8_4_;
  fStack_16c = auVar63._12_4_;
  fVar77 = auVar89._0_4_;
  fVar104 = local_178 - fVar77;
  fVar80 = auVar89._4_4_;
  fVar109 = fStack_174 - fVar80;
  auVar108._0_8_ = CONCAT44(fVar109,fVar104);
  fVar110 = auVar89._8_4_;
  auVar108._8_4_ = fStack_170 - fVar110;
  fVar115 = auVar89._12_4_;
  auVar108._12_4_ = fStack_16c - fVar115;
  fVar48 = auVar131._0_4_;
  fVar118 = auVar114._0_4_;
  fVar117 = fVar118 - fVar48;
  fVar54 = auVar131._4_4_;
  fVar101 = auVar114._4_4_;
  fVar100 = fVar101 - fVar54;
  auVar99._0_8_ = CONCAT44(fVar100,fVar117);
  fVar129 = auVar131._8_4_;
  fVar102 = auVar114._8_4_;
  fVar103 = auVar114._12_4_;
  auVar99._8_4_ = fVar102 - fVar129;
  fVar75 = auVar131._12_4_;
  auVar99._12_4_ = fVar103 - fVar75;
  fVar61 = auVar107._0_4_;
  fVar52 = auVar113._0_4_;
  fVar53 = fVar52 - fVar61;
  fVar55 = auVar107._4_4_;
  fVar128 = auVar113._4_4_;
  fVar124 = fVar128 - fVar55;
  auVar74._0_8_ = CONCAT44(fVar124,fVar53);
  fVar59 = auVar107._8_4_;
  fVar130 = auVar113._8_4_;
  fVar76 = auVar113._12_4_;
  auVar74._8_4_ = fVar130 - fVar59;
  fVar60 = auVar107._12_4_;
  auVar74._12_4_ = fVar76 - fVar60;
  auVar56._0_4_ = fVar117 * fVar117 + fVar104 * fVar104;
  auVar56._4_4_ = fVar100 * fVar100 + fVar109 * fVar109;
  auVar56._8_4_ = auVar99._8_4_ * auVar99._8_4_ + auVar108._8_4_ * auVar108._8_4_;
  auVar56._12_4_ = auVar99._12_4_ * auVar99._12_4_ + auVar108._12_4_ * auVar108._12_4_;
  auVar50._0_4_ = fVar53 * fVar53 + auVar56._0_4_;
  auVar50._4_4_ = fVar124 * fVar124 + auVar56._4_4_;
  auVar50._8_4_ = auVar74._8_4_ * auVar74._8_4_ + auVar56._8_4_;
  auVar50._12_4_ = auVar74._12_4_ * auVar74._12_4_ + auVar56._12_4_;
  auVar106 = sqrtps(auVar56,auVar50);
  uVar35 = -(uint)(auVar50._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar19 = -(uint)(auVar50._4_4_ < _UNK_1506895e4);
  uVar38 = -(uint)(auVar50._8_4_ < _UNK_1506895e8);
  uVar40 = -(uint)(auVar50._12_4_ < _UNK_1506895ec);
  auVar42._4_4_ = uVar19;
  auVar42._0_4_ = uVar35;
  auVar83._8_4_ = auVar99._8_4_;
  auVar83._0_8_ = auVar99._0_8_;
  auVar83._12_4_ = auVar99._12_4_;
  auVar85 = divps(auVar83,auVar106);
  auVar90._8_4_ = auVar74._8_4_;
  auVar90._0_8_ = auVar74._0_8_;
  auVar90._12_4_ = auVar74._12_4_;
  auVar107 = divps(auVar90,auVar106);
  auVar86._8_4_ = auVar108._8_4_;
  auVar86._0_8_ = auVar108._0_8_;
  auVar86._12_4_ = auVar108._12_4_;
  auVar63 = divps(auVar86,auVar106);
  auVar42._8_4_ = uVar38;
  auVar42._12_4_ = uVar40;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar63 = blendvps(auVar63,auVar10,auVar42);
  auVar126._8_4_ = auVar108._8_4_;
  auVar126._0_8_ = auVar108._0_8_;
  auVar126._12_4_ = auVar108._12_4_;
  bVar33 = (bVar18 & 1) == 0;
  if (!bVar33) {
    auVar126 = auVar63;
  }
  auVar78._0_8_ = CONCAT44(~uVar19 & auVar85._4_4_,~uVar35 & auVar85._0_4_);
  auVar78._8_4_ = ~uVar38 & auVar85._8_4_;
  auVar78._12_4_ = ~uVar40 & auVar85._12_4_;
  auVar84._0_8_ = CONCAT44(~uVar19 & auVar107._4_4_,~uVar35 & auVar107._0_4_);
  auVar84._8_4_ = ~uVar38 & auVar107._8_4_;
  auVar84._12_4_ = ~uVar40 & auVar107._12_4_;
  auVar91._8_4_ = auVar99._8_4_;
  auVar91._0_8_ = auVar99._0_8_;
  auVar91._12_4_ = auVar99._12_4_;
  auVar43._8_4_ = auVar74._8_4_;
  auVar43._0_8_ = auVar74._0_8_;
  auVar43._12_4_ = auVar74._12_4_;
  if (bVar33) {
    auVar85 = blendps(auVar108,auVar126,1);
  }
  else {
    auVar91._8_4_ = auVar78._8_4_;
    auVar91._0_8_ = auVar78._0_8_;
    auVar91._12_4_ = auVar78._12_4_;
    auVar43._8_4_ = auVar84._8_4_;
    auVar43._0_8_ = auVar84._0_8_;
    auVar43._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar108,auVar126,1);
  }
  if ((bVar18 & 2) == 0) {
    auVar107 = blendps(auVar99,auVar91,1);
    auVar131 = blendps(auVar74,auVar43,1);
    auVar85 = blendps(auVar85,auVar85,2);
    auVar92 = auVar107;
    auVar45 = auVar131;
  }
  else {
    auVar107 = blendps(auVar99,auVar91,1);
    auVar92._8_4_ = auVar78._8_4_;
    auVar92._0_8_ = auVar78._0_8_;
    auVar92._12_4_ = auVar78._12_4_;
    auVar131 = blendps(auVar74,auVar43,1);
    auVar45._8_4_ = auVar84._8_4_;
    auVar45._0_8_ = auVar84._0_8_;
    auVar45._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar85,auVar63,2);
  }
  if ((bVar18 & 4) == 0) {
    auVar89 = blendps(auVar107,auVar92,2);
    auVar107 = blendps(auVar131,auVar45,2);
    auVar85 = blendps(auVar85,auVar85,4);
    auVar44 = auVar107;
    auVar93 = auVar89;
  }
  else {
    auVar89 = blendps(auVar107,auVar92,2);
    auVar93._8_4_ = auVar78._8_4_;
    auVar93._0_8_ = auVar78._0_8_;
    auVar93._12_4_ = auVar78._12_4_;
    auVar107 = blendps(auVar131,auVar45,2);
    auVar44._8_4_ = auVar84._8_4_;
    auVar44._0_8_ = auVar84._0_8_;
    auVar44._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar85,auVar63,4);
  }
  if ((char)bVar18 < '\0') {
    auVar131 = blendps(auVar89,auVar93,4);
  }
  else {
    auVar131 = blendps(auVar89,auVar93,4);
    auVar63 = auVar85;
  }
  if ((char)bVar18 < '\0') {
    auVar107 = blendps(auVar107,auVar44,4);
  }
  else {
    auVar107 = blendps(auVar107,auVar44,4);
    auVar78 = auVar131;
  }
  if (-1 < (char)bVar18) {
    auVar84 = auVar107;
  }
  fVar53 = (float)(~uVar35 & auVar106._0_4_) - (float)local_1e8._0_4_;
  fVar124 = (float)(~uVar19 & auVar106._4_4_) - (float)local_1e8._4_4_;
  fStack_1e0 = (float)(~uVar38 & auVar106._8_4_) - fStack_1e0;
  fStack_1dc = (float)(~uVar40 & auVar106._12_4_) - fStack_1dc;
  auVar46._4_4_ = -(uint)(0.0 <= fVar124);
  auVar46._0_4_ = -(uint)(0.0 <= fVar53);
  auVar46._8_4_ = -(uint)(0.0 <= fStack_1e0);
  auVar46._12_4_ = -(uint)(0.0 <= fStack_1dc);
  auVar106 = blendvps(auVar120,_local_1d8,auVar46);
  fVar117 = auVar106._0_4_ * param_5 * param_5;
  fVar100 = auVar106._4_4_ * param_5 * param_5;
  fVar123 = auVar106._8_4_ * param_5 * param_5;
  param_5 = auVar106._12_4_ * param_5 * param_5;
  fVar111 = auVar73._0_4_;
  fVar116 = auVar73._4_4_;
  fVar119 = auVar73._12_4_;
  fVar109 = auVar64._0_4_;
  fVar94 = auVar64._4_4_;
  fVar104 = auVar73._8_4_;
  fVar95 = auVar64._8_4_;
  fVar96 = auVar64._12_4_;
  auVar122._0_4_ =
       (float)((uint)fVar117 ^ __xmm_80000000800000008000000080000000) * fVar53 - unaff_XMM15._0_4_;
  auVar122._4_4_ = (float)((uint)fVar100 ^ _UNK_150651574) * fVar124 - unaff_XMM15._4_4_;
  auVar122._8_4_ = (float)((uint)fVar123 ^ _UNK_150651578) * fStack_1e0 - unaff_XMM15._8_4_;
  auVar122._12_4_ = (float)((uint)param_5 ^ _UNK_15065157c) * fStack_1dc - unaff_XMM15._12_4_;
  auVar47._0_4_ = (fVar111 + fVar109) * fVar117 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar47._4_4_ = (fVar116 + fVar94) * fVar100 + _UNK_15076b1f4;
  auVar47._8_4_ = (fVar104 + fVar95) * fVar123 + _UNK_15076b1f8;
  auVar47._12_4_ = (fVar119 + fVar96) * param_5 + _UNK_15076b1fc;
  auVar106 = divps(auVar122,auVar47);
  fVar53 = auVar106._0_4_;
  auVar132._0_4_ = unaff_XMM15._0_4_ + fVar53;
  fVar124 = auVar106._4_4_;
  auVar132._4_4_ = unaff_XMM15._4_4_ + fVar124;
  fVar117 = auVar106._8_4_;
  auVar132._8_4_ = unaff_XMM15._8_4_ + fVar117;
  fVar100 = auVar106._12_4_;
  auVar132._12_4_ = unaff_XMM15._12_4_ + fVar100;
  if ((bVar18 & 1) != 0) {
    *pfVar1 = auVar132._0_4_;
  }
  if ((bVar18 & 2) == 0) {
    auVar63 = blendps(auVar85,auVar63,8);
  }
  else {
    uVar9 = extractps(auVar132,1);
    *(undefined8 *)(pfVar1 + 1) = uVar9;
    auVar63 = blendps(auVar85,auVar63,8);
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar132,2);
    *(undefined8 *)(pfVar1 + 2) = uVar9;
  }
  fVar13 = (float)auVar63._12_4_ * fVar100;
  fVar12 = (float)auVar63._8_4_ * fVar117;
  fVar11 = (float)auVar63._4_4_ * fVar124;
  fVar123 = auVar63._0_4_ * fVar53;
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar132,3);
    *(undefined8 *)(pfVar1 + 3) = uVar9;
  }
  auVar57._0_4_ = local_178 + fVar111 * fVar123;
  auVar57._4_4_ = fStack_174 + fVar116 * fVar11;
  auVar57._8_4_ = fStack_170 + fVar104 * fVar12;
  auVar57._12_4_ = fStack_16c + fVar119 * fVar13;
  if ((bVar18 & 1) == 0) {
    auVar63 = blendps(auVar131,auVar78,8);
  }
  else {
    *(float *)(param_1 + auVar69._0_4_) = auVar57._0_4_;
    auVar63 = blendps(auVar131,auVar78,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + auVar69._4_4_) = uVar9;
  }
  uVar17 = (float)auVar63._12_4_ * fVar100;
  uVar16 = (float)auVar63._8_4_ * fVar117;
  uVar15 = (float)auVar63._4_4_ * fVar124;
  uVar14 = (float)auVar63._0_4_ * fVar53;
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + auVar69._12_4_) = uVar9;
    auVar127._0_4_ = fVar118 + fVar111 * (float)uVar14;
    auVar127._4_4_ = fVar101 + fVar116 * (float)uVar15;
    auVar127._8_4_ = fVar102 + fVar104 * (float)uVar16;
    auVar127._12_4_ = fVar103 + fVar119 * (float)uVar17;
  }
  else {
    auVar127._0_4_ = fVar118 + fVar111 * (float)uVar14;
    auVar127._4_4_ = fVar101 + fVar116 * (float)uVar15;
    auVar127._8_4_ = fVar102 + fVar104 * (float)uVar16;
    auVar127._12_4_ = fVar103 + fVar119 * (float)uVar17;
  }
  if ((bVar18 & 1) == 0) {
    auVar63 = blendps(auVar107,auVar84,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar69._0_4_) = auVar127._0_4_;
    auVar63 = blendps(auVar107,auVar84,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar127,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._4_4_) = uVar9;
  }
  fVar100 = fVar100 * (float)auVar63._12_4_;
  fVar117 = fVar117 * (float)auVar63._8_4_;
  fVar124 = fVar124 * (float)auVar63._4_4_;
  fVar53 = fVar53 * (float)auVar63._0_4_;
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar127,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar127,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._12_4_) = uVar9;
    auVar87._0_4_ = fVar52 + fVar111 * fVar53;
    auVar87._4_4_ = fVar128 + fVar116 * fVar124;
    auVar87._8_4_ = fVar130 + fVar104 * fVar117;
    auVar87._12_4_ = fVar76 + fVar119 * fVar100;
  }
  else {
    auVar87._0_4_ = fVar52 + fVar111 * fVar53;
    auVar87._4_4_ = fVar128 + fVar116 * fVar124;
    auVar87._8_4_ = fVar130 + fVar104 * fVar117;
    auVar87._12_4_ = fVar76 + fVar119 * fVar100;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar69._0_4_) = auVar87._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._12_4_) = uVar9;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar69._0_4_) = fVar111;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._12_4_) = uVar9;
    auVar79._0_4_ = fVar77 - fVar123 * fVar109;
    auVar79._4_4_ = fVar80 - fVar11 * fVar94;
    auVar79._8_4_ = fVar110 - fVar12 * fVar95;
    auVar79._12_4_ = fVar115 - fVar13 * fVar96;
  }
  else {
    auVar79._0_4_ = fVar77 - fVar123 * fVar109;
    auVar79._4_4_ = fVar80 - fVar11 * fVar94;
    auVar79._8_4_ = fVar110 - fVar12 * fVar95;
    auVar79._12_4_ = fVar115 - fVar13 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + auVar98._0_4_) = auVar79._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + auVar98._12_4_) = uVar9;
    auVar58._0_4_ = fVar48 - (float)uVar14 * fVar109;
    auVar58._4_4_ = fVar54 - (float)uVar15 * fVar94;
    auVar58._8_4_ = fVar129 - (float)uVar16 * fVar95;
    auVar58._12_4_ = fVar75 - (float)uVar17 * fVar96;
  }
  else {
    auVar58._0_4_ = fVar48 - (float)uVar14 * fVar109;
    auVar58._4_4_ = fVar54 - (float)uVar15 * fVar94;
    auVar58._8_4_ = fVar129 - (float)uVar16 * fVar95;
    auVar58._12_4_ = fVar75 - (float)uVar17 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar98._0_4_) = auVar58._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar58,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar58,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar58,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._12_4_) = uVar9;
    auVar51._0_4_ = fVar61 - fVar53 * fVar109;
    auVar51._4_4_ = fVar55 - fVar124 * fVar94;
    auVar51._8_4_ = fVar59 - fVar117 * fVar95;
    auVar51._12_4_ = fVar60 - fVar100 * fVar96;
  }
  else {
    auVar51._0_4_ = fVar61 - fVar53 * fVar109;
    auVar51._4_4_ = fVar55 - fVar124 * fVar94;
    auVar51._8_4_ = fVar59 - fVar117 * fVar95;
    auVar51._12_4_ = fVar60 - fVar100 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar98._0_4_) = auVar51._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._12_4_) = uVar9;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar98._0_4_) = fVar109;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar64,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar64,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar64,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDEmbeddedSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408e4d30

/* WARNING: Removing unreachable block (ram,0x0001408e599a) */
/* WARNING: Removing unreachable block (ram,0x0001408e58db) */
/* WARNING: Removing unreachable block (ram,0x0001408e5968) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,byte param_13,float *param_14,longlong param_15,
               uint param_16)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  byte bVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  int iVar48;
  float fVar54;
  float fVar56;
  float fVar58;
  undefined1 auVar49 [16];
  int iVar55;
  int iVar57;
  int iVar59;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar60;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  float fVar71;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar80;
  float fVar86;
  float fVar87;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar90 [16];
  float fVar96;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar103;
  float fVar106;
  float fVar107;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar108;
  float fVar111;
  float fVar112;
  undefined1 auVar110 [16];
  float fVar120;
  float fVar121;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar126;
  float fVar127;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar128;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar139;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar152;
  float fVar154;
  undefined1 auVar146 [16];
  float fVar156;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auVar91 [16];
  undefined1 auVar109 [16];
  float fVar135;
  float fVar138;
  float fVar144;
  float fVar151;
  float fVar153;
  float fVar155;
  
  auVar41 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar35 = param_16 + 3;
  if (-1 < (int)param_16) {
    uVar35 = param_16;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    uVar26 = 0;
    fVar103 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
    do {
      uVar15 = uVar26 & 0xffffffff;
      fStack_20c = *param_8;
      local_218._0_4_ = fStack_20c;
      local_218._4_4_ = fStack_20c;
      fStack_210 = fStack_20c;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar15);
        fVar71 = param_8[1];
        local_218._0_4_ = fStack_20c + fVar71 * *pfVar1;
        local_218._4_4_ = fStack_20c + fVar71 * pfVar1[1];
        fStack_210 = fStack_20c + fVar71 * pfVar1[2];
        fStack_20c = fStack_20c + fVar71 * pfVar1[3];
      }
      fStack_22c = *param_11;
      local_238._0_4_ = fStack_22c;
      local_238._4_4_ = fStack_22c;
      fStack_230 = fStack_22c;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar15);
        fVar71 = param_11[1];
        local_238._0_4_ = fStack_22c + fVar71 * *pfVar1;
        local_238._4_4_ = fStack_22c + fVar71 * pfVar1[1];
        fStack_230 = fStack_22c + fVar71 * pfVar1[2];
        fStack_22c = fStack_22c + fVar71 * pfVar1[3];
      }
      piVar2 = (int *)(param_3 + uVar26 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar26 * 2);
      lVar19 = (longlong)(*piVar2 << 4);
      lVar27 = (longlong)(piVar2[2] * 0x10);
      lVar32 = (longlong)(*piVar3 << 4);
      lVar25 = (longlong)(piVar3[2] << 4);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar27),
                          0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar148 = insertps(auVar147,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                          *(undefined4 *)(param_1 + 4 + lVar27),0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar104 = insertps(auVar147,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                          *(undefined4 *)(param_1 + 8 + lVar27),0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar129 = insertps(auVar147,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      uVar22 = *(uint *)(param_1 + 0xc + lVar19);
      uVar38 = *(uint *)(param_1 + 0xc + lVar27);
      uVar40 = *(uint *)(param_1 + 0xc + lVar32);
      auVar113 = insertps(ZEXT416(uVar22),ZEXT416(uVar38),0x10);
      lVar17 = (longlong)(*piVar2 * 3);
      lVar28 = (longlong)(piVar2[2] * 3);
      auVar81 = insertps(ZEXT416(*(uint *)(param_2 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + lVar28 * 4),0x10);
      auVar72 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar28 * 4),0x10);
      auVar147 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar28 * 4),0x10);
      lVar17 = (longlong)(*piVar3 * 3);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + lVar17 * 4),0x20);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x20);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x20);
      lVar28 = (longlong)(piVar2[1] << 4);
      lVar17 = (longlong)(piVar3[2] * 3);
      auVar82 = insertps(auVar81,*(undefined4 *)(param_2 + lVar17 * 4),0x30);
      auVar73 = insertps(auVar72,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x30);
      auVar72 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x30);
      lVar17 = (longlong)(piVar2[1] * 3);
      lVar29 = (longlong)(piVar2[3] * 3);
      auVar74 = insertps(ZEXT416(*(uint *)(param_2 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + lVar29 * 4),0x10);
      auVar81 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar29 * 4),0x10);
      auVar147 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar29 * 4),0x10);
      lVar31 = (longlong)(piVar2[3] * 0x10);
      lVar17 = (longlong)(piVar3[1] * 3);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_2 + lVar17 * 4),0x20);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x20);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x20);
      lVar29 = (longlong)(piVar3[1] << 4);
      lVar17 = (longlong)(piVar3[3] * 3);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_2 + lVar17 * 4),0x30);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x30);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x30);
      lVar17 = (longlong)(piVar3[3] << 4);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),*(undefined4 *)(param_1 + lVar31),0x10
                        );
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + lVar29),0x20);
      auVar76 = insertps(auVar74,*(undefined4 *)(param_1 + lVar17),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar29),0x20);
      auVar83 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar17),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 8 + lVar29),0x20);
      auVar113 = insertps(auVar113,ZEXT416(uVar40),0x20);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 8 + lVar17),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar25);
      auVar114 = insertps(auVar113,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      uVar6 = *(uint *)(param_1 + 0xc + lVar31);
      auVar113 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar29);
      auVar113 = insertps(auVar113,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar17);
      auVar113 = insertps(auVar113,ZEXT416(uVar8),0x30);
      fVar71 = *param_14;
      fVar87 = fVar71;
      fVar126 = fVar71;
      fVar127 = fVar71;
      if ((param_13 & 1) != 0) {
        pfVar1 = (float *)(param_15 + uVar15);
        fVar47 = param_14[1];
        fVar87 = fVar71 + fVar47 * pfVar1[1];
        fVar126 = fVar71 + fVar47 * pfVar1[2];
        fVar127 = fVar71 + fVar47 * pfVar1[3];
        fVar71 = fVar71 + fVar47 * *pfVar1;
      }
      fVar70 = auVar76._0_4_;
      fVar144 = auVar148._0_4_;
      auVar146._0_4_ = fVar144 - fVar70;
      fVar77 = auVar76._4_4_;
      fVar151 = auVar148._4_4_;
      auVar146._4_4_ = fVar151 - fVar77;
      fVar78 = auVar76._8_4_;
      fVar153 = auVar148._8_4_;
      fVar155 = auVar148._12_4_;
      auVar146._8_4_ = fVar153 - fVar78;
      fVar79 = auVar76._12_4_;
      auVar146._12_4_ = fVar155 - fVar79;
      fVar106 = auVar104._4_4_;
      fVar107 = auVar104._12_4_;
      fVar80 = auVar83._0_4_;
      fVar135 = auVar104._0_4_;
      auVar136._0_4_ = fVar135 - fVar80;
      fVar108 = auVar83._4_4_;
      auVar136._4_4_ = fVar106 - fVar108;
      fVar86 = auVar83._8_4_;
      fVar138 = auVar104._8_4_;
      auVar136._8_4_ = fVar138 - fVar86;
      fVar111 = auVar83._12_4_;
      auVar136._12_4_ = fVar107 - fVar111;
      auVar148._0_4_ = auVar136._0_4_ * auVar136._0_4_ + auVar146._0_4_ * auVar146._0_4_;
      auVar148._4_4_ = auVar136._4_4_ * auVar136._4_4_ + auVar146._4_4_ * auVar146._4_4_;
      auVar148._8_4_ = auVar136._8_4_ * auVar136._8_4_ + auVar146._8_4_ * auVar146._8_4_;
      auVar148._12_4_ = auVar136._12_4_ * auVar136._12_4_ + auVar146._12_4_ * auVar146._12_4_;
      fVar66 = auVar74._0_4_;
      fVar128 = auVar129._0_4_;
      auVar50._0_4_ = fVar128 - fVar66;
      fVar89 = auVar74._4_4_;
      fVar132 = auVar129._4_4_;
      auVar50._4_4_ = fVar132 - fVar89;
      fVar93 = auVar74._8_4_;
      fVar133 = auVar129._8_4_;
      fVar134 = auVar129._12_4_;
      auVar50._8_4_ = fVar133 - fVar93;
      fVar69 = auVar74._12_4_;
      auVar50._12_4_ = fVar134 - fVar69;
      auVar104._0_4_ = auVar50._0_4_ * auVar50._0_4_ + auVar148._0_4_;
      auVar104._4_4_ = auVar50._4_4_ * auVar50._4_4_ + auVar148._4_4_;
      auVar104._8_4_ = auVar50._8_4_ * auVar50._8_4_ + auVar148._8_4_;
      auVar104._12_4_ = auVar50._12_4_ * auVar50._12_4_ + auVar148._12_4_;
      auVar129 = sqrtps(auVar148,auVar104);
      uVar34 = -(uint)(auVar104._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar36 = -(uint)(auVar104._4_4_ < _UNK_1506895e4);
      uVar37 = -(uint)(auVar104._8_4_ < _UNK_1506895e8);
      uVar39 = -(uint)(auVar104._12_4_ < _UNK_1506895ec);
      auVar74._4_4_ = uVar36;
      auVar74._0_4_ = uVar34;
      auVar76 = divps(auVar146,auVar129);
      auVar74._8_4_ = uVar37;
      auVar74._12_4_ = uVar39;
      auVar148 = blendvps(auVar76,auVar41,auVar74);
      auVar74 = *(undefined1 (*) [16])(param_4 + uVar15);
      auVar83 = divps(auVar41,auVar74);
      auVar76._4_4_ = -(uint)(auVar74._4_4_ < _UNK_1506895d4);
      auVar76._0_4_ = -(uint)(auVar74._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar76._8_4_ = -(uint)(auVar74._8_4_ < _UNK_1506895d8);
      auVar76._12_4_ = -(uint)(auVar74._12_4_ < _UNK_1506895dc);
      auVar76 = blendvps(auVar83,auVar41,auVar76);
      auVar83._4_4_ = -(uint)(0.0 <= (float)(~uVar36 & auVar129._4_4_) - auVar74._4_4_);
      auVar83._0_4_ = -(uint)(0.0 <= (float)(~uVar34 & auVar129._0_4_) - auVar74._0_4_);
      auVar83._8_4_ = -(uint)(0.0 <= (float)(~uVar37 & auVar129._8_4_) - auVar74._8_4_);
      auVar83._12_4_ = -(uint)(0.0 <= (float)(~uVar39 & auVar129._12_4_) - auVar74._12_4_);
      auVar74 = blendvps(_local_238,_local_218,auVar83);
      auVar104 = divps(auVar136,auVar129);
      auVar83 = divps(auVar50,auVar129);
      fVar96 = (float)(~uVar34 & auVar104._0_4_);
      fVar100 = (float)(~uVar36 & auVar104._4_4_);
      fVar101 = (float)(~uVar37 & auVar104._8_4_);
      fVar102 = (float)(~uVar39 & auVar104._12_4_);
      fVar140 = (float)(~uVar34 & auVar83._0_4_);
      fVar141 = (float)(~uVar36 & auVar83._4_4_);
      fVar142 = (float)(~uVar37 & auVar83._8_4_);
      fVar143 = (float)(~uVar39 & auVar83._12_4_);
      fVar112 = auVar114._0_4_;
      fVar120 = auVar114._4_4_;
      fVar121 = auVar114._12_4_;
      fVar88 = auVar113._0_4_;
      auVar129._0_4_ = fVar112 + fVar88;
      fVar92 = auVar113._4_4_;
      auVar129._4_4_ = fVar120 + fVar92;
      fVar94 = auVar113._8_4_;
      fVar139 = auVar114._8_4_;
      auVar129._8_4_ = fVar139 + fVar94;
      fVar95 = auVar113._12_4_;
      auVar129._12_4_ = fVar121 + fVar95;
      auVar74 = divps(auVar74,auVar129);
      auVar74 = sqrtps(auVar74,auVar74);
      local_168 = auVar82._0_4_;
      fStack_164 = auVar82._4_4_;
      fStack_160 = auVar82._8_4_;
      fStack_15c = auVar82._12_4_;
      local_1e8 = auVar73._0_4_;
      fStack_1e4 = auVar73._4_4_;
      fStack_1e0 = auVar73._8_4_;
      fStack_1dc = auVar73._12_4_;
      local_158 = auVar72._0_4_;
      fStack_154 = auVar72._4_4_;
      fStack_150 = auVar72._8_4_;
      fStack_14c = auVar72._12_4_;
      local_198._0_4_ = auVar75._0_4_;
      local_198._4_4_ = auVar75._4_4_;
      fStack_190 = auVar75._8_4_;
      fStack_18c = auVar75._12_4_;
      local_188._0_4_ = auVar81._0_4_;
      local_188._4_4_ = auVar81._4_4_;
      fStack_180 = auVar81._8_4_;
      fStack_17c = auVar81._12_4_;
      local_178 = auVar147._0_4_;
      fStack_174 = auVar147._4_4_;
      fStack_170 = auVar147._8_4_;
      fStack_16c = auVar147._12_4_;
      fVar47 = auVar74._0_4_ * (fVar71 + fVar71) * auVar76._0_4_ * param_6;
      fVar54 = auVar74._4_4_ * (fVar87 + fVar87) * auVar76._4_4_ * param_6;
      fVar56 = auVar74._8_4_ * (fVar126 + fVar126) * auVar76._8_4_ * param_6;
      fVar58 = auVar74._12_4_ * (fVar127 + fVar127) * auVar76._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar15);
      fVar71 = *pfVar1;
      fVar87 = pfVar1[1];
      fVar126 = pfVar1[2];
      fVar127 = pfVar1[3];
      auVar147._0_4_ =
           ((((fVar128 - local_158) - fVar66) + local_178) * fVar140 +
           (((fVar135 - local_1e8) - fVar80) + (float)local_188._0_4_) * fVar96 +
           (((fVar144 - local_168) - fVar70) + (float)local_198._0_4_) * auVar148._0_4_) *
           (float)((uint)fVar47 ^ __xmm_80000000800000008000000080000000) - fVar71;
      auVar147._4_4_ =
           ((((fVar132 - fStack_154) - fVar89) + fStack_174) * fVar141 +
           (((fVar106 - fStack_1e4) - fVar108) + (float)local_188._4_4_) * fVar100 +
           (((fVar151 - fStack_164) - fVar77) + (float)local_198._4_4_) * auVar148._4_4_) *
           (float)((uint)fVar54 ^ _UNK_150651574) - fVar87;
      auVar147._8_4_ =
           ((((fVar133 - fStack_150) - fVar93) + fStack_170) * fVar142 +
           (((fVar138 - fStack_1e0) - fVar86) + fStack_180) * fVar101 +
           (((fVar153 - fStack_160) - fVar78) + fStack_190) * auVar148._8_4_) *
           (float)((uint)fVar56 ^ _UNK_150651578) - fVar126;
      auVar147._12_4_ =
           ((((fVar134 - fStack_14c) - fVar69) + fStack_16c) * fVar143 +
           (((fVar107 - fStack_1dc) - fVar111) + fStack_17c) * fVar102 +
           (((fVar155 - fStack_15c) - fVar79) + fStack_18c) * auVar148._12_4_) *
           (float)((uint)fVar58 ^ _UNK_15065157c) - fVar127;
      auVar114._0_4_ = auVar129._0_4_ * fVar47 + auVar41._0_4_;
      auVar114._4_4_ = auVar129._4_4_ * fVar54 + auVar41._4_4_;
      auVar114._8_4_ = auVar129._8_4_ * fVar56 + auVar41._8_4_;
      auVar114._12_4_ = auVar129._12_4_ * fVar58 + fVar103;
      auVar147 = divps(auVar147,auVar114);
      fVar47 = auVar147._0_4_;
      fVar145 = auVar148._0_4_ * fVar47;
      fVar54 = auVar147._4_4_;
      fVar152 = auVar148._4_4_ * fVar54;
      fVar56 = auVar147._8_4_;
      fVar154 = auVar148._8_4_ * fVar56;
      fVar58 = auVar147._12_4_;
      fVar156 = auVar148._12_4_ * fVar58;
      auVar72._0_4_ = fVar112 * fVar145 + fVar144;
      auVar72._4_4_ = fVar120 * fVar152 + fVar151;
      auVar72._8_4_ = fVar139 * fVar154 + fVar153;
      auVar72._12_4_ = fVar121 * fVar156 + fVar155;
      fVar96 = fVar96 * fVar47;
      fVar100 = fVar100 * fVar54;
      fVar101 = fVar101 * fVar56;
      fVar102 = fVar102 * fVar58;
      *(float *)(param_1 + lVar19) = auVar72._0_4_;
      uVar9 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + lVar27) = uVar9;
      auVar82._0_4_ = fVar112 * fVar96 + fVar135;
      auVar82._4_4_ = fVar120 * fVar100 + fVar106;
      auVar82._8_4_ = fVar139 * fVar101 + fVar138;
      auVar82._12_4_ = fVar121 * fVar102 + fVar107;
      uVar9 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      uVar9 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + lVar25) = uVar9;
      fVar140 = fVar140 * fVar47;
      fVar141 = fVar141 * fVar54;
      fVar142 = fVar142 * fVar56;
      fVar143 = fVar143 * fVar58;
      *(float *)(param_1 + 4 + lVar19) = auVar82._0_4_;
      uVar9 = extractps(auVar82,1);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar9;
      uVar9 = extractps(auVar82,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      auVar113._0_4_ = fVar112 * fVar140 + fVar128;
      auVar113._4_4_ = fVar120 * fVar141 + fVar132;
      auVar113._8_4_ = fVar139 * fVar142 + fVar133;
      auVar113._12_4_ = fVar121 * fVar143 + fVar134;
      uVar9 = extractps(auVar82,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar9;
      *(float *)(param_1 + 8 + lVar19) = auVar113._0_4_;
      uVar9 = extractps(auVar113,1);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar9;
      uVar9 = extractps(auVar113,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      uVar9 = extractps(auVar113,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar9;
      *(uint *)(param_1 + 0xc + lVar19) = uVar22;
      *(uint *)(param_1 + 0xc + lVar27) = uVar38;
      *(uint *)(param_1 + 0xc + lVar32) = uVar40;
      *(uint *)(param_1 + 0xc + lVar25) = uVar4;
      auVar73._0_4_ = fVar70 - fVar145 * fVar88;
      auVar73._4_4_ = fVar77 - fVar152 * fVar92;
      auVar73._8_4_ = fVar78 - fVar154 * fVar94;
      auVar73._12_4_ = fVar79 - fVar156 * fVar95;
      *(float *)(param_1 + lVar28) = auVar73._0_4_;
      uVar9 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      uVar9 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + lVar29) = uVar9;
      auVar75._0_4_ = fVar80 - fVar96 * fVar88;
      auVar75._4_4_ = fVar108 - fVar100 * fVar92;
      auVar75._8_4_ = fVar86 - fVar101 * fVar94;
      auVar75._12_4_ = fVar111 - fVar102 * fVar95;
      uVar9 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + lVar17) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar75._0_4_;
      uVar9 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      uVar9 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 4 + lVar29) = uVar9;
      auVar81._0_4_ = fVar66 - fVar140 * fVar88;
      auVar81._4_4_ = fVar89 - fVar141 * fVar92;
      auVar81._8_4_ = fVar93 - fVar142 * fVar94;
      auVar81._12_4_ = fVar69 - fVar143 * fVar95;
      uVar9 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar81._0_4_;
      uVar9 = extractps(auVar81,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = extractps(auVar81,2);
      *(undefined8 *)(param_1 + 8 + lVar29) = uVar9;
      uVar9 = extractps(auVar81,3);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar9;
      pfVar1 = (float *)(param_5 + uVar15);
      *pfVar1 = fVar47 + fVar71;
      pfVar1[1] = fVar54 + fVar87;
      pfVar1[2] = fVar56 + fVar126;
      pfVar1[3] = fVar58 + fVar127;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      *(uint *)(param_1 + 0xc + lVar31) = uVar6;
      *(uint *)(param_1 + 0xc + lVar29) = uVar7;
      *(uint *)(param_1 + 0xc + lVar17) = uVar8;
      uVar26 = uVar26 + 0x10;
      uVar22 = (int)uVar14 + 4;
      uVar14 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)(uVar35 & 0xfffffffc));
  }
  uVar35 = (uint)uVar14;
  if ((int)param_16 <= (int)uVar35) {
    return;
  }
  auVar41._0_4_ =
       -(uint)((int)(uVar35 | (uint)__xmm_00000003000000020000000100000000) < (int)param_16);
  auVar41._4_4_ =
       -(uint)((int)(uVar35 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_16);
  auVar41._8_4_ = -(uint)((int)(uVar35 | _UNK_150631e08) < (int)param_16);
  auVar41._12_4_ = -(uint)((int)(uVar35 | _UNK_150631e0c) < (int)param_16);
  piVar2 = (int *)(param_3 + uVar14 * 8);
  uVar22 = movmskps((int)param_3,auVar41);
  bVar21 = (char)((char)uVar22 << 4) >> 4;
  if (uVar22 == 0xf) {
    iVar60 = *piVar2;
    iVar48 = piVar2[1];
    iVar63 = piVar2[2];
    iVar55 = piVar2[3];
    iVar64 = piVar2[4];
    iVar57 = piVar2[5];
    iVar65 = piVar2[6];
    iVar59 = piVar2[7];
  }
  else {
    auVar49._0_4_ = ___xmm_00000018000000100000000800000000 & auVar41._0_4_;
    auVar49._4_4_ = _UNK_150b51a04 & auVar41._4_4_;
    auVar49._8_4_ = _UNK_150b51a08 & auVar41._8_4_;
    auVar49._12_4_ = _UNK_150b51a0c & auVar41._12_4_;
    lVar17 = extractps(auVar49,1);
    lVar28 = extractps(auVar49,2);
    lVar19 = extractps(auVar49,3);
    iVar60 = *piVar2;
    iVar63 = *(int *)((longlong)piVar2 + lVar17);
    iVar64 = *(int *)((longlong)piVar2 + lVar28);
    iVar65 = *(int *)((longlong)piVar2 + lVar19);
    auVar147 = ___xmm_0000001c000000140000000c00000004 & auVar41;
    iVar48 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._0_4_);
    iVar55 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._4_4_);
    iVar57 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._8_4_);
    iVar59 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._12_4_);
  }
  auVar97._0_4_ = iVar60 << 4;
  auVar97._4_4_ = iVar63 << 4;
  auVar97._8_4_ = iVar64 << 4;
  auVar97._12_4_ = iVar65 << 4;
  auVar147 = auVar41 & auVar97;
  lVar17 = param_1 + auVar147._0_4_;
  lVar28 = param_1 + auVar147._4_4_;
  lVar19 = param_1 + auVar147._8_4_;
  lVar25 = param_1 + auVar147._12_4_;
  auVar81 = ___xmm_00000004000000040000000400000004 & auVar41;
  uVar14 = (ulonglong)auVar81._0_4_;
  uVar26 = (ulonglong)auVar81._4_4_;
  auVar72 = ___xmm_00000008000000080000000800000008 & auVar41;
  uVar15 = (ulonglong)auVar72._0_4_;
  auVar90._0_4_ = iVar48 << 4;
  auVar90._4_4_ = iVar55 << 4;
  auVar90._8_4_ = iVar57 << 4;
  auVar90._12_4_ = iVar59 << 4;
  auVar74 = auVar41 & auVar90;
  lVar23 = (longlong)auVar74._0_4_;
  auVar73 = ZEXT416(*(uint *)(param_1 + auVar147._0_4_));
  lVar27 = param_1 + lVar23;
  lVar29 = param_1 + auVar74._4_4_;
  lVar31 = param_1 + auVar74._8_4_;
  lVar32 = param_1 + auVar74._12_4_;
  bVar33 = (bVar21 & 2) != 0;
  if (bVar33) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._4_4_),0x10);
  }
  uVar18 = (ulonglong)auVar72._4_4_;
  auVar75 = ZEXT416(*(uint *)(uVar14 + lVar17));
  if (bVar33) {
    auVar75 = insertps(auVar75,*(undefined4 *)(uVar26 + lVar28),0x10);
    auVar82 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
    auVar76 = insertps(ZEXT416(*(uint *)(param_1 + lVar23)),*(undefined4 *)(param_1 + auVar74._4_4_)
                       ,0x10);
  }
  else {
    auVar82 = ZEXT416(*(uint *)(uVar15 + lVar17));
    auVar76 = ZEXT416(*(uint *)(param_1 + lVar23));
  }
  auVar83 = ZEXT416(*(uint *)(uVar14 + lVar27));
  uVar38 = auVar81._8_4_;
  uVar40 = auVar72._8_4_;
  if (bVar33) {
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar26 + lVar29),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar15 + lVar27)),*(undefined4 *)(uVar18 + lVar29),0x10);
  }
  else {
    auVar113 = ZEXT416(*(uint *)(uVar15 + lVar27));
  }
  if ((bVar21 & 4) != 0) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._8_4_),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)uVar38 + lVar19),0x20);
    auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)uVar40 + lVar19),0x20);
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar74._8_4_),0x20);
    auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar38 + lVar31),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)uVar40 + lVar31),0x20);
  }
  auVar104 = ___xmm_0000000c0000000c0000000c0000000c & auVar41;
  uVar20 = (ulonglong)auVar81._12_4_;
  bVar33 = (char)bVar21 < '\0';
  if (bVar33) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._12_4_),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)(uVar20 + lVar25),0x30);
    auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar25),0x30);
  }
  uVar30 = (ulonglong)auVar72._12_4_;
  if (bVar33) {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar74._12_4_),0x30);
  }
  auVar147 = insertps(ZEXT416(*(uint *)((ulonglong)auVar104._0_4_ + lVar17)),
                      *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar28),0x10);
  auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)auVar104._0_4_ + lVar27)),
                     *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar29),0x10);
  if (bVar33) {
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar20 + lVar32),0x30);
  }
  auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar19),0x20);
  auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar31),0x20);
  if (bVar33) {
    auVar113 = insertps(auVar113,*(undefined4 *)(uVar30 + lVar32),0x30);
  }
  auVar81 = insertps(auVar147,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar25),0x30);
  auVar129 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar32),0x30);
  auVar67._4_4_ = iVar63 * 3;
  auVar67._0_4_ = iVar60 * 3;
  auVar67._8_4_ = iVar64 * 3;
  auVar67._12_4_ = iVar65 * 3;
  auVar67 = auVar67 & auVar41;
  lVar17 = param_2 + (longlong)auVar67._0_4_ * 4;
  lVar28 = param_2 + (longlong)auVar67._4_4_ * 4;
  lVar19 = param_2 + (longlong)auVar67._8_4_ * 4;
  auVar147 = insertps(ZEXT416(*(uint *)(uVar14 + lVar17)),*(undefined4 *)(uVar26 + lVar28),0x10);
  auVar72 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar38 + lVar19),0x20);
  auVar147 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
  auVar114 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar40 + lVar19),0x20);
  auVar61._4_4_ = iVar55 * 3;
  auVar61._0_4_ = iVar48 * 3;
  auVar61._8_4_ = iVar57 * 3;
  auVar61._12_4_ = iVar59 * 3;
  auVar61 = auVar61 & auVar41;
  lVar17 = param_2 + (longlong)auVar61._0_4_ * 4;
  lVar28 = param_2 + (longlong)auVar61._4_4_ * 4;
  auVar41 = insertps(ZEXT416(*(uint *)(uVar14 + lVar17)),*(undefined4 *)(uVar26 + lVar28),0x10);
  auVar147 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
  lVar17 = param_2 + (longlong)auVar61._8_4_ * 4;
  auVar41 = insertps(auVar41,*(undefined4 *)((ulonglong)uVar38 + lVar17),0x20);
  auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar40 + lVar17),0x20);
  auVar74 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar67._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar67._4_4_ * 4),0x10);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_2 + (longlong)auVar67._8_4_ * 4),0x20);
  auVar104 = insertps(auVar74,*(undefined4 *)(param_2 + (longlong)auVar67._12_4_ * 4),0x30);
  lVar17 = param_2 + (longlong)auVar67._12_4_ * 4;
  auVar74 = insertps(auVar72,*(undefined4 *)(uVar20 + lVar17),0x30);
  auVar114 = insertps(auVar114,*(undefined4 *)(uVar30 + lVar17),0x30);
  auVar72 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar61._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar61._4_4_ * 4),0x10);
  auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + (longlong)auVar61._8_4_ * 4),0x20);
  auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + (longlong)auVar61._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar61._12_4_ * 4;
  auVar41 = insertps(auVar41,*(undefined4 *)(uVar20 + param_2),0x30);
  auVar147 = insertps(auVar147,*(undefined4 *)(uVar30 + param_2),0x30);
  lVar17 = (longlong)(int)(uVar35 << 2);
  bVar24 = bVar21 & 9;
  pfVar1 = (float *)(param_5 + lVar17);
  local_188._0_4_ = *param_8;
  fVar103 = (float)local_188._0_4_;
  local_188._4_4_ = local_188._0_4_;
  fStack_180 = (float)local_188._0_4_;
  if (bVar24 == 9) {
    _local_198 = *(undefined1 (*) [16])(param_4 + lVar17);
    auVar50 = *(undefined1 (*) [16])(param_5 + lVar17);
    auVar148 = _local_198;
    if ((param_7 & 1) != 0) {
      auVar148 = *(undefined1 (*) [16])(param_9 + lVar17);
LAB_1408e5cef:
      fVar71 = param_8[1];
      fVar103 = (float)local_188._0_4_ + fVar71 * auVar148._0_4_;
      local_188._4_4_ = (float)local_188._0_4_ + fVar71 * auVar148._4_4_;
      fStack_180 = (float)local_188._0_4_ + fVar71 * auVar148._8_4_;
      local_188._0_4_ = (float)local_188._0_4_ + fVar71 * auVar148._12_4_;
    }
    fVar71 = *param_11;
    auVar130._4_4_ = fVar71;
    auVar130._0_4_ = fVar71;
    auVar130._8_4_ = fVar71;
    auVar130._12_4_ = fVar71;
    if ((param_10 & 1) == 0) {
      fVar71 = *param_14;
      fStack_17c = (float)local_188._0_4_;
    }
    else {
      if (bVar24 == 9) {
        auVar148 = *(undefined1 (*) [16])(param_12 + lVar17);
      }
      else {
LAB_1408e5e06:
        puVar16 = (uint *)(param_12 + lVar17);
        if ((uVar22 & 1) != 0) {
          auVar148 = ZEXT416(*puVar16);
        }
        if ((uVar22 & 2) != 0) {
          auVar148 = insertps(auVar148,puVar16[1],0x10);
        }
        if ((uVar22 & 4) != 0) {
          auVar148 = insertps(auVar148,puVar16[2],0x20);
        }
        if ((uVar22 & 8) != 0) {
          auVar148 = insertps(auVar148,puVar16[3],0x30);
        }
      }
      fVar71 = param_11[1];
      auVar131._0_4_ = auVar130._0_4_ + fVar71 * auVar148._0_4_;
      auVar131._4_4_ = auVar130._4_4_ + fVar71 * auVar148._4_4_;
      auVar131._8_4_ = auVar130._8_4_ + fVar71 * auVar148._8_4_;
      auVar131._12_4_ = auVar130._12_4_ + fVar71 * auVar148._12_4_;
      fVar71 = *param_14;
      auVar130 = auVar131;
      fStack_17c = (float)local_188._0_4_;
    }
    local_188._0_4_ = fVar103;
    fVar103 = fVar71;
    fVar87 = fVar71;
    fVar126 = fVar71;
    if ((param_13 & 1) == 0) goto LAB_1408e5f41;
    if (bVar24 != 9) goto LAB_1408e5f06;
    auVar148 = *(undefined1 (*) [16])(param_15 + lVar17);
  }
  else {
    puVar16 = (uint *)(param_4 + lVar17);
    auVar148 = auVar41;
    if ((uVar22 & 1) != 0) {
      auVar148 = ZEXT416(*puVar16);
    }
    if ((uVar22 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar16[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar16[2],0x20);
    }
    if ((uVar22 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar16[3],0x30);
    }
    auVar50 = auVar147;
    if ((uVar22 & 1) != 0) {
      auVar50 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar22 & 2) != 0) {
      auVar50 = insertps(auVar50,pfVar1[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar50 = insertps(auVar50,pfVar1[2],0x20);
    }
    if ((uVar22 & 8) != 0) {
      auVar50 = insertps(auVar50,pfVar1[3],0x30);
    }
    _local_198 = auVar148;
    if ((param_7 & 1) != 0) {
      puVar16 = (uint *)(param_9 + lVar17);
      if ((uVar22 & 1) != 0) {
        auVar148 = ZEXT416(*puVar16);
      }
      if ((uVar22 & 2) != 0) {
        auVar148 = insertps(auVar148,puVar16[1],0x10);
      }
      if ((uVar22 & 4) != 0) {
        auVar148 = insertps(auVar148,puVar16[2],0x20);
      }
      if ((uVar22 & 8) != 0) {
        auVar148 = insertps(auVar148,puVar16[3],0x30);
      }
      goto LAB_1408e5cef;
    }
    fVar71 = *param_11;
    auVar130._4_4_ = fVar71;
    auVar130._0_4_ = fVar71;
    auVar130._8_4_ = fVar71;
    auVar130._12_4_ = fVar71;
    if ((param_10 & 1) != 0) goto LAB_1408e5e06;
    fVar71 = *param_14;
    fVar103 = fVar71;
    fVar87 = fVar71;
    fVar126 = fVar71;
    fStack_17c = (float)local_188._0_4_;
    if ((param_13 & 1) == 0) goto LAB_1408e5f41;
LAB_1408e5f06:
    puVar16 = (uint *)(param_15 + lVar17);
    if ((uVar22 & 1) != 0) {
      auVar148 = ZEXT416(*puVar16);
    }
    if ((uVar22 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar16[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar16[2],0x20);
    }
    fVar126 = fVar71;
    if ((uVar22 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar16[3],0x30);
    }
  }
  fVar127 = param_14[1];
  fVar71 = fVar126 + fVar127 * auVar148._0_4_;
  fVar103 = fVar126 + fVar127 * auVar148._4_4_;
  fVar87 = fVar126 + fVar127 * auVar148._8_4_;
  fVar126 = fVar126 + fVar127 * auVar148._12_4_;
LAB_1408e5f41:
  local_208 = auVar73._0_4_;
  fStack_204 = auVar73._4_4_;
  fStack_200 = auVar73._8_4_;
  fStack_1fc = auVar73._12_4_;
  fVar79 = auVar76._0_4_;
  fVar89 = local_208 - fVar79;
  fVar86 = auVar76._4_4_;
  fVar93 = fStack_204 - fVar86;
  auVar91._0_8_ = CONCAT44(fVar93,fVar89);
  fVar88 = auVar76._8_4_;
  auVar91._8_4_ = fStack_200 - fVar88;
  fVar94 = auVar76._12_4_;
  auVar91._12_4_ = fStack_1fc - fVar94;
  fVar102 = auVar75._4_4_;
  fVar106 = auVar75._12_4_;
  fVar80 = auVar75._0_4_;
  fVar95 = auVar83._0_4_;
  fVar108 = fVar80 - fVar95;
  fVar96 = auVar83._4_4_;
  fVar111 = fVar102 - fVar96;
  auVar109._0_8_ = CONCAT44(fVar111,fVar108);
  fVar92 = auVar75._8_4_;
  fVar100 = auVar83._8_4_;
  auVar109._8_4_ = fVar92 - fVar100;
  fVar101 = auVar83._12_4_;
  auVar109._12_4_ = fVar106 - fVar101;
  fVar127 = auVar82._0_4_;
  fVar69 = auVar113._0_4_;
  fVar47 = fVar127 - fVar69;
  fVar56 = auVar82._4_4_;
  fVar70 = auVar113._4_4_;
  fVar54 = fVar56 - fVar70;
  auVar68._0_8_ = CONCAT44(fVar54,fVar47);
  fVar58 = auVar82._8_4_;
  fVar66 = auVar82._12_4_;
  fVar77 = auVar113._8_4_;
  auVar68._8_4_ = fVar58 - fVar77;
  fVar78 = auVar113._12_4_;
  auVar68._12_4_ = fVar66 - fVar78;
  auVar62._0_4_ = fVar108 * fVar108 + fVar89 * fVar89;
  auVar62._4_4_ = fVar111 * fVar111 + fVar93 * fVar93;
  auVar62._8_4_ = auVar109._8_4_ * auVar109._8_4_ + auVar91._8_4_ * auVar91._8_4_;
  auVar62._12_4_ = auVar109._12_4_ * auVar109._12_4_ + auVar91._12_4_ * auVar91._12_4_;
  auVar42._0_4_ = fVar47 * fVar47 + auVar62._0_4_;
  auVar42._4_4_ = fVar54 * fVar54 + auVar62._4_4_;
  auVar42._8_4_ = auVar68._8_4_ * auVar68._8_4_ + auVar62._8_4_;
  auVar42._12_4_ = auVar68._12_4_ * auVar68._12_4_ + auVar62._12_4_;
  auVar75 = sqrtps(auVar62,auVar42);
  uVar35 = -(uint)(auVar42._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar22 = -(uint)(auVar42._4_4_ < _UNK_1506895e4);
  uVar38 = -(uint)(auVar42._8_4_ < _UNK_1506895e8);
  uVar40 = -(uint)(auVar42._12_4_ < _UNK_1506895ec);
  auVar43._4_4_ = uVar22;
  auVar43._0_4_ = uVar35;
  auVar43._8_4_ = uVar38;
  auVar43._12_4_ = uVar40;
  auVar84._8_4_ = auVar109._8_4_;
  auVar84._0_8_ = auVar109._0_8_;
  auVar84._12_4_ = auVar109._12_4_;
  auVar76 = divps(auVar84,auVar75);
  auVar115._8_4_ = auVar68._8_4_;
  auVar115._0_8_ = auVar68._0_8_;
  auVar115._12_4_ = auVar68._12_4_;
  auVar82 = divps(auVar115,auVar75);
  auVar98._8_4_ = auVar91._8_4_;
  auVar98._0_8_ = auVar91._0_8_;
  auVar98._12_4_ = auVar91._12_4_;
  auVar73 = divps(auVar98,auVar75);
  auVar73 = blendvps(auVar73,___xmm_3f8000003f8000003f8000003f800000,auVar43);
  auVar122._8_4_ = auVar91._8_4_;
  auVar122._0_8_ = auVar91._0_8_;
  auVar122._12_4_ = auVar91._12_4_;
  bVar33 = (bVar21 & 1) != 0;
  if (bVar33) {
    auVar122 = auVar73;
  }
  auVar110._0_8_ = CONCAT44(~uVar22 & auVar76._4_4_,~uVar35 & auVar76._0_4_);
  auVar110._8_4_ = ~uVar38 & auVar76._8_4_;
  auVar110._12_4_ = ~uVar40 & auVar76._12_4_;
  auVar85._0_8_ = CONCAT44(~uVar22 & auVar82._4_4_,~uVar35 & auVar82._0_4_);
  auVar85._8_4_ = ~uVar38 & auVar82._8_4_;
  auVar85._12_4_ = ~uVar40 & auVar82._12_4_;
  auVar149._8_4_ = auVar109._8_4_;
  auVar149._0_8_ = auVar109._0_8_;
  auVar149._12_4_ = auVar109._12_4_;
  auVar116._8_4_ = auVar68._8_4_;
  auVar116._0_8_ = auVar68._0_8_;
  auVar116._12_4_ = auVar68._12_4_;
  if (bVar33) {
    auVar149._8_4_ = auVar110._8_4_;
    auVar149._0_8_ = auVar110._0_8_;
    auVar149._12_4_ = auVar110._12_4_;
    auVar116._8_4_ = auVar85._8_4_;
    auVar116._0_8_ = auVar85._0_8_;
    auVar116._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar91,auVar122,1);
  }
  else {
    auVar76 = blendps(auVar91,auVar122,1);
  }
  if ((bVar21 & 2) == 0) {
    auVar83 = blendps(auVar109,auVar149,1);
    auVar82 = blendps(auVar68,auVar116,1);
    auVar76 = blendps(auVar76,auVar76,2);
    auVar118 = auVar82;
    auVar124 = auVar83;
  }
  else {
    auVar83 = blendps(auVar109,auVar149,1);
    auVar124._8_4_ = auVar110._8_4_;
    auVar124._0_8_ = auVar110._0_8_;
    auVar124._12_4_ = auVar110._12_4_;
    auVar82 = blendps(auVar68,auVar116,1);
    auVar118._8_4_ = auVar85._8_4_;
    auVar118._0_8_ = auVar85._0_8_;
    auVar118._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar76,auVar73,2);
  }
  if ((bVar21 & 4) == 0) {
    auVar83 = blendps(auVar83,auVar124,2);
    auVar82 = blendps(auVar82,auVar118,2);
    auVar76 = blendps(auVar76,auVar76,4);
    auVar119 = auVar82;
    auVar125 = auVar83;
  }
  else {
    auVar83 = blendps(auVar83,auVar124,2);
    auVar125._8_4_ = auVar110._8_4_;
    auVar125._0_8_ = auVar110._0_8_;
    auVar125._12_4_ = auVar110._12_4_;
    auVar82 = blendps(auVar82,auVar118,2);
    auVar119._8_4_ = auVar85._8_4_;
    auVar119._0_8_ = auVar85._0_8_;
    auVar119._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar76,auVar73,4);
  }
  if ((char)bVar21 < '\0') {
    auVar83 = blendps(auVar83,auVar125,4);
  }
  else {
    auVar110 = blendps(auVar83,auVar125,4);
    auVar73 = auVar76;
    auVar83 = auVar110;
  }
  auVar82 = blendps(auVar82,auVar119,4);
  if (-1 < (char)bVar21) {
    auVar85 = auVar82;
  }
  auVar45._4_4_ = -(uint)(0.0 <= (float)(~uVar22 & auVar75._4_4_) - local_198._4_4_);
  auVar45._0_4_ = -(uint)(0.0 <= (float)(~uVar35 & auVar75._0_4_) - local_198._0_4_);
  auVar113 = divps(___xmm_3f8000003f8000003f8000003f800000,_local_198);
  auVar44._4_4_ = -(uint)(local_198._4_4_ < _UNK_1506895d4);
  auVar44._0_4_ = -(uint)(local_198._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar44._8_4_ = -(uint)(local_198._8_4_ < _UNK_1506895d8);
  auVar44._12_4_ = -(uint)(local_198._12_4_ < _UNK_1506895dc);
  auVar113 = blendvps(auVar113,___xmm_3f8000003f8000003f8000003f800000,auVar44);
  auVar45._8_4_ = -(uint)(0.0 <= (float)(~uVar38 & auVar75._8_4_) - local_198._8_4_);
  auVar45._12_4_ = -(uint)(0.0 <= (float)(~uVar40 & auVar75._12_4_) - local_198._12_4_);
  auVar148 = blendvps(auVar130,_local_188,auVar45);
  auVar76 = blendps(auVar76,auVar73,8);
  auVar83 = blendps(auVar83,auVar110,8);
  auVar75 = blendps(auVar82,auVar85,8);
  local_268 = auVar81._0_4_;
  fStack_264 = auVar81._4_4_;
  fStack_260 = auVar81._8_4_;
  fStack_25c = auVar81._12_4_;
  local_1a8 = auVar129._0_4_;
  fStack_1a4 = auVar129._4_4_;
  fStack_1a0 = auVar129._8_4_;
  fStack_19c = auVar129._12_4_;
  auVar51._0_4_ = local_268 + local_1a8;
  auVar51._4_4_ = fStack_264 + fStack_1a4;
  auVar51._8_4_ = fStack_260 + fStack_1a0;
  auVar51._12_4_ = fStack_25c + fStack_19c;
  auVar73 = divps(auVar148,auVar51);
  auVar73 = sqrtps(auVar45,auVar73);
  fVar71 = param_6 * auVar73._0_4_ * (fVar71 + fVar71) * auVar113._0_4_;
  fVar103 = param_6 * auVar73._4_4_ * (fVar103 + fVar103) * auVar113._4_4_;
  fVar87 = param_6 * auVar73._8_4_ * (fVar87 + fVar87) * auVar113._8_4_;
  param_6 = param_6 * auVar73._12_4_ * (fVar126 + fVar126) * auVar113._12_4_;
  local_168 = auVar104._0_4_;
  fStack_164 = auVar104._4_4_;
  fStack_160 = auVar104._8_4_;
  fStack_15c = auVar104._12_4_;
  local_248 = auVar74._0_4_;
  fStack_244 = auVar74._4_4_;
  fStack_240 = auVar74._8_4_;
  fStack_23c = auVar74._12_4_;
  local_1c8 = auVar114._0_4_;
  fStack_1c4 = auVar114._4_4_;
  fStack_1c0 = auVar114._8_4_;
  fStack_1bc = auVar114._12_4_;
  local_178 = auVar72._0_4_;
  fStack_174 = auVar72._4_4_;
  fStack_170 = auVar72._8_4_;
  fStack_16c = auVar72._12_4_;
  local_158 = auVar41._0_4_;
  fStack_154 = auVar41._4_4_;
  fStack_150 = auVar41._8_4_;
  fStack_14c = auVar41._12_4_;
  local_1e8 = auVar147._0_4_;
  fStack_1e4 = auVar147._4_4_;
  fStack_1e0 = auVar147._8_4_;
  fStack_1dc = auVar147._12_4_;
  fVar108 = auVar83._0_4_;
  fVar111 = auVar83._4_4_;
  fVar107 = auVar83._8_4_;
  fVar112 = auVar83._12_4_;
  fVar47 = auVar75._0_4_;
  fVar54 = auVar75._4_4_;
  fVar89 = auVar75._8_4_;
  fVar93 = auVar75._12_4_;
  auVar52._0_4_ = auVar51._0_4_ * fVar71 + (float)__xmm_3f8000003f8000003f8000003f800000;
  auVar52._4_4_ = auVar51._4_4_ * fVar103 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
  auVar52._8_4_ = auVar51._8_4_ * fVar87 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
  auVar52._12_4_ = auVar51._12_4_ * param_6 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
  local_1d8 = auVar50._0_4_;
  fStack_1d4 = auVar50._4_4_;
  fStack_1d0 = auVar50._8_4_;
  fStack_1cc = auVar50._12_4_;
  auVar46._0_4_ =
       ((((fVar127 - local_1c8) - fVar69) + local_1e8) * fVar47 +
       (((fVar80 - local_248) - fVar95) + local_158) * fVar108 +
       (((local_208 - local_168) - fVar79) + local_178) * auVar76._0_4_) *
       (float)((uint)fVar71 ^ __xmm_80000000800000008000000080000000) - local_1d8;
  auVar46._4_4_ =
       ((((fVar56 - fStack_1c4) - fVar70) + fStack_1e4) * fVar54 +
       (((fVar102 - fStack_244) - fVar96) + fStack_154) * fVar111 +
       (((fStack_204 - fStack_164) - fVar86) + fStack_174) * auVar76._4_4_) *
       (float)((uint)fVar103 ^ _UNK_150651574) - fStack_1d4;
  auVar46._8_4_ =
       ((((fVar58 - fStack_1c0) - fVar77) + fStack_1e0) * fVar89 +
       (((fVar92 - fStack_240) - fVar100) + fStack_150) * fVar107 +
       (((fStack_200 - fStack_160) - fVar88) + fStack_170) * auVar76._8_4_) *
       (float)((uint)fVar87 ^ _UNK_150651578) - fStack_1d0;
  auVar46._12_4_ =
       ((((fVar66 - fStack_1bc) - fVar78) + fStack_1dc) * fVar93 +
       (((fVar106 - fStack_23c) - fVar101) + fStack_14c) * fVar112 +
       (((fStack_1fc - fStack_15c) - fVar94) + fStack_16c) * auVar76._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_1cc;
  auVar41 = divps(auVar46,auVar52);
  fVar103 = auVar41._0_4_;
  auVar53._0_4_ = local_1d8 + fVar103;
  fVar71 = auVar41._4_4_;
  auVar53._4_4_ = fStack_1d4 + fVar71;
  fVar87 = auVar41._8_4_;
  auVar53._8_4_ = fStack_1d0 + fVar87;
  fVar126 = auVar41._12_4_;
  auVar53._12_4_ = fStack_1cc + fVar126;
  if ((bVar21 & 1) != 0) {
    *pfVar1 = auVar53._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar53,1);
    *(undefined8 *)(pfVar1 + 1) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar53,2);
    *(undefined8 *)(pfVar1 + 2) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar53,3);
    *(undefined8 *)(pfVar1 + 3) = uVar9;
  }
  fVar121 = auVar76._4_4_ * fVar71;
  fVar120 = auVar76._0_4_ * fVar103;
  fVar132 = auVar76._12_4_ * fVar126;
  fVar128 = auVar76._8_4_ * fVar87;
  auVar117._0_4_ = local_208 + local_268 * fVar120;
  auVar117._4_4_ = fStack_204 + fStack_264 * fVar121;
  auVar117._8_4_ = fStack_200 + fStack_260 * fVar128;
  auVar117._12_4_ = fStack_1fc + fStack_25c * fVar132;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + auVar97._0_4_) = auVar117._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar117,1);
    *(undefined8 *)(param_1 + auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar117,2);
    *(undefined8 *)(param_1 + auVar97._8_4_) = uVar9;
  }
  uVar13 = fStack_25c * fVar112 * fVar126;
  uVar12 = fStack_260 * fVar107 * fVar87;
  uVar11 = fStack_264 * fVar111 * fVar71;
  uVar10 = local_268 * fVar108 * fVar103;
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar117,3);
    *(undefined8 *)(param_1 + auVar97._12_4_) = uVar9;
    auVar150._0_4_ = fVar80 + (float)uVar10;
    auVar150._4_4_ = fVar102 + (float)uVar11;
    auVar150._8_4_ = fVar92 + (float)uVar12;
    auVar150._12_4_ = fVar106 + (float)uVar13;
  }
  else {
    auVar150._0_4_ = fVar80 + (float)uVar10;
    auVar150._4_4_ = fVar102 + (float)uVar11;
    auVar150._8_4_ = fVar92 + (float)uVar12;
    auVar150._12_4_ = fVar106 + (float)uVar13;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar97._0_4_) = auVar150._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar150,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar150,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._8_4_) = uVar9;
  }
  uVar13 = fStack_25c * fVar93 * fVar126;
  uVar12 = fStack_260 * fVar89 * fVar87;
  uVar11 = fStack_264 * fVar54 * fVar71;
  uVar10 = local_268 * fVar47 * fVar103;
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar150,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._12_4_) = uVar9;
    auVar137._0_4_ = fVar127 + (float)uVar10;
    auVar137._4_4_ = fVar56 + (float)uVar11;
    auVar137._8_4_ = fVar58 + (float)uVar12;
    auVar137._12_4_ = fVar66 + (float)uVar13;
  }
  else {
    auVar137._0_4_ = fVar127 + (float)uVar10;
    auVar137._4_4_ = fVar56 + (float)uVar11;
    auVar137._8_4_ = fVar58 + (float)uVar12;
    auVar137._12_4_ = fVar66 + (float)uVar13;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar97._0_4_) = auVar137._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar137,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar137,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar137,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._12_4_) = uVar9;
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar97._0_4_) = local_268;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._12_4_) = uVar9;
  }
  auVar123._0_4_ = fVar79 - fVar120 * local_1a8;
  auVar123._4_4_ = fVar86 - fVar121 * fStack_1a4;
  auVar123._8_4_ = fVar88 - fVar128 * fStack_1a0;
  auVar123._12_4_ = fVar94 - fVar132 * fStack_19c;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + auVar90._0_4_) = auVar123._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar123,1);
    *(undefined8 *)(param_1 + auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar123,2);
    *(undefined8 *)(param_1 + auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar123,3);
    *(undefined8 *)(param_1 + auVar90._12_4_) = uVar9;
    auVar105._0_4_ = fVar95 - fVar108 * fVar103 * local_1a8;
    auVar105._4_4_ = fVar96 - fVar111 * fVar71 * fStack_1a4;
    auVar105._8_4_ = fVar100 - fVar107 * fVar87 * fStack_1a0;
    auVar105._12_4_ = fVar101 - fVar112 * fVar126 * fStack_19c;
  }
  else {
    auVar105._0_4_ = fVar95 - fVar108 * fVar103 * local_1a8;
    auVar105._4_4_ = fVar96 - fVar111 * fVar71 * fStack_1a4;
    auVar105._8_4_ = fVar100 - fVar107 * fVar87 * fStack_1a0;
    auVar105._12_4_ = fVar101 - fVar112 * fVar126 * fStack_19c;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar90._0_4_) = auVar105._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar105,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar105,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar105,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._12_4_) = uVar9;
    auVar99._0_4_ = fVar69 - fVar47 * fVar103 * local_1a8;
    auVar99._4_4_ = fVar70 - fVar54 * fVar71 * fStack_1a4;
    auVar99._8_4_ = fVar77 - fVar89 * fVar87 * fStack_1a0;
    auVar99._12_4_ = fVar78 - fVar93 * fVar126 * fStack_19c;
  }
  else {
    auVar99._0_4_ = fVar69 - fVar47 * fVar103 * local_1a8;
    auVar99._4_4_ = fVar70 - fVar54 * fVar71 * fStack_1a4;
    auVar99._8_4_ = fVar77 - fVar89 * fVar87 * fStack_1a0;
    auVar99._12_4_ = fVar78 - fVar93 * fVar126 * fStack_19c;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar90._0_4_) = auVar99._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._12_4_) = uVar9;
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar90._0_4_) = local_1a8;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar129,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar129,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar129,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408e6860

/* WARNING: Removing unreachable block (ram,0x0001408e89a6) */
/* WARNING: Removing unreachable block (ram,0x0001408e7ba4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  ulonglong uVar38;
  uint *puVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  bool bVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  int iVar73;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar84;
  undefined1 auVar81 [16];
  float fVar85;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar96;
  float fVar97;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar104;
  undefined1 in_XMM4 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar105;
  undefined1 auVar103 [16];
  float fVar106;
  float fVar114;
  float fVar115;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar116;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar122;
  float fVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  int iVar131;
  float fVar140;
  float fVar141;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar142;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  int iVar154;
  undefined1 auVar149 [16];
  int iVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  uint uVar159;
  float fVar160;
  undefined1 auVar158 [16];
  float fVar161;
  float fVar162;
  float fVar166;
  float fVar168;
  float fVar170;
  undefined1 auVar163 [16];
  float fVar167;
  float fVar169;
  float fVar171;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  float fVar172;
  float fVar175;
  float fVar176;
  undefined1 auVar173 [16];
  float fVar177;
  undefined1 auVar174 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar181;
  float fVar188;
  float fVar190;
  undefined1 unaff_XMM15 [16];
  float fVar192;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar191;
  float fVar193;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 auVar135 [16];
  
  uVar58 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar58 = param_13;
  }
  if ((int)(uVar58 & 0xfffffffc) < 1) {
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    uVar47 = 0;
    uVar46 = __xmm_80000000800000008000000080000000;
    uVar61 = _UNK_150651574;
    uVar63 = _UNK_150651578;
    uVar159 = _UNK_15065157c;
    do {
      uVar28 = _UNK_15065157c;
      uVar27 = _UNK_150651578;
      uVar26 = _UNK_150651574;
      uVar20 = __xmm_80000000800000008000000080000000;
      uVar38 = uVar47 & 0xffffffff;
      fStack_2fc = *param_8;
      local_308._0_4_ = fStack_2fc;
      local_308._4_4_ = fStack_2fc;
      fStack_300 = fStack_2fc;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar38);
        fVar84 = param_8[1];
        local_308._0_4_ = fStack_2fc + fVar84 * *pfVar1;
        local_308._4_4_ = fStack_2fc + fVar84 * pfVar1[1];
        fStack_300 = fStack_2fc + fVar84 * pfVar1[2];
        fStack_2fc = fStack_2fc + fVar84 * pfVar1[3];
      }
      piVar2 = (int *)(param_2 + uVar47 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar47 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar47 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar47 * 4);
      lVar32 = param_3 + uVar47 * 4;
      fVar85 = *(float *)(lVar32 + 4);
      fVar86 = *(float *)(lVar32 + 8);
      fVar106 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x10 + uVar47 * 4;
      fVar96 = *(float *)(lVar32 + 4);
      fVar114 = *(float *)(lVar32 + 8);
      fVar97 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x20 + uVar47 * 4;
      fVar98 = *(float *)(lVar32 + 4);
      fVar99 = *(float *)(lVar32 + 8);
      fVar104 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x30 + uVar47 * 4;
      fVar105 = *(float *)(lVar32 + 4);
      fVar115 = *(float *)(lVar32 + 8);
      fVar116 = *(float *)(lVar32 + 0xc);
      lVar53 = (longlong)(*piVar2 << 4);
      lVar48 = (longlong)(*piVar3 * 0x10);
      lVar34 = (longlong)(*piVar4 << 4);
      lVar43 = (longlong)(*piVar5 << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar48),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar34),0x20);
      auVar180 = insertps(auVar179,*(undefined4 *)(param_1 + lVar43),0x30);
      lVar52 = (longlong)(piVar2[1] << 4);
      lVar35 = (longlong)(piVar3[1] * 0x10);
      lVar32 = (longlong)(piVar4[1] << 4);
      lVar41 = (longlong)(piVar5[1] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar52)),*(undefined4 *)(param_1 + lVar35),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar163 = insertps(auVar179,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar52)),
                          *(undefined4 *)(param_1 + 4 + lVar35),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar118 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar52)),
                          *(undefined4 *)(param_1 + 8 + lVar35),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar149 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      lVar40 = (longlong)(piVar2[2] << 4);
      lVar50 = (longlong)(piVar3[2] * 0x10);
      lVar33 = (longlong)(piVar4[2] << 4);
      lVar51 = (longlong)(piVar5[2] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),*(undefined4 *)(param_1 + lVar50),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar33),0x20);
      auVar126 = insertps(auVar179,*(undefined4 *)(param_1 + lVar51),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                          *(undefined4 *)(param_1 + 4 + lVar50),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar33),0x20);
      auVar100 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar51),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                          *(undefined4 *)(param_1 + 8 + lVar50),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar33),0x20);
      auVar90 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar51),0x30);
      lVar45 = (longlong)(piVar2[3] << 4);
      lVar54 = (longlong)(piVar3[3] * 0x10);
      lVar49 = (longlong)(piVar4[3] << 4);
      lVar36 = (longlong)(piVar5[3] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar54),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar49),0x20);
      auVar132 = insertps(auVar179,*(undefined4 *)(param_1 + lVar36),0x30);
      fVar172 = (float)((uint)fVar85 ^ uVar46);
      fVar175 = (float)((uint)fVar96 ^ uVar61);
      fVar176 = (float)((uint)fVar98 ^ uVar63);
      fVar177 = (float)((uint)fVar105 ^ uVar159);
      auVar101 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar48),0x10);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar54),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar49),0x20);
      auVar91 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar36),0x30);
      auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + 4 + lVar34),0x20);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar54),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar49),0x20);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar36),0x30);
      uVar46 = *(uint *)(param_1 + 0xc + lVar52);
      uVar61 = *(uint *)(param_1 + 0xc + lVar35);
      auVar119 = insertps(ZEXT416(uVar46),ZEXT416(uVar61),0x10);
      uVar63 = *(uint *)(param_1 + 0xc + lVar32);
      auVar119 = insertps(auVar119,ZEXT416(uVar63),0x20);
      uVar159 = *(uint *)(param_1 + 0xc + lVar41);
      auVar119 = insertps(auVar119,ZEXT416(uVar159),0x30);
      uVar30 = *(uint *)(param_1 + 0xc + lVar40);
      uVar6 = *(uint *)(param_1 + 0xc + lVar50);
      auVar133 = insertps(ZEXT416(uVar30),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar33);
      auVar133 = insertps(auVar133,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar51);
      auVar133 = insertps(auVar133,ZEXT416(uVar8),0x30);
      fVar117 = auVar119._0_4_;
      fVar122 = auVar119._4_4_;
      fVar123 = auVar119._8_4_;
      fVar124 = auVar119._12_4_;
      fVar130 = auVar133._0_4_;
      fVar140 = auVar133._4_4_;
      fVar141 = auVar133._8_4_;
      fVar162 = auVar133._12_4_;
      auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      auVar119 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar48),0x10);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + 8 + lVar34),0x20);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + lVar45);
      uVar10 = *(uint *)(param_1 + 0xc + lVar54);
      auVar133 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar49);
      auVar133 = insertps(auVar133,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar36);
      auVar133 = insertps(auVar133,ZEXT416(uVar12),0x30);
      fVar167 = auVar133._0_4_;
      fVar169 = auVar133._4_4_;
      fVar171 = auVar133._8_4_;
      fVar160 = auVar133._12_4_;
      uVar13 = *(uint *)(param_1 + 0xc + lVar53);
      uVar14 = *(uint *)(param_1 + 0xc + lVar48);
      auVar133 = insertps(ZEXT416(uVar13),ZEXT416(uVar14),0x10);
      uVar15 = *(uint *)(param_1 + 0xc + lVar34);
      auVar133 = insertps(auVar133,ZEXT416(uVar15),0x20);
      uVar16 = *(uint *)(param_1 + 0xc + lVar43);
      auVar182 = insertps(auVar133,ZEXT416(uVar16),0x30);
      fVar84 = *param_11;
      auVar133._4_4_ = fVar84;
      auVar133._0_4_ = fVar84;
      auVar133._8_4_ = fVar84;
      auVar133._12_4_ = fVar84;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar38);
        fVar189 = param_11[1];
        auVar133._0_4_ = fVar84 + fVar189 * *pfVar1;
        auVar133._4_4_ = fVar84 + fVar189 * pfVar1[1];
        auVar133._8_4_ = fVar84 + fVar189 * pfVar1[2];
        auVar133._12_4_ = fVar84 + fVar189 * pfVar1[3];
      }
      auVar87._0_4_ =
           auVar180._0_4_ -
           ((auVar163._0_4_ * fVar172 - fVar86 * auVar126._0_4_) - fVar106 * auVar132._0_4_);
      auVar87._4_4_ =
           auVar180._4_4_ -
           ((auVar163._4_4_ * fVar175 - fVar114 * auVar126._4_4_) - fVar97 * auVar132._4_4_);
      auVar87._8_4_ =
           auVar180._8_4_ -
           ((auVar163._8_4_ * fVar176 - fVar99 * auVar126._8_4_) - fVar104 * auVar132._8_4_);
      auVar87._12_4_ =
           auVar180._12_4_ -
           ((auVar163._12_4_ * fVar177 - fVar115 * auVar126._12_4_) - fVar116 * auVar132._12_4_);
      auVar156._0_4_ =
           auVar101._0_4_ -
           ((auVar118._0_4_ * fVar172 - fVar86 * auVar100._0_4_) - fVar106 * auVar91._0_4_);
      auVar156._4_4_ =
           auVar101._4_4_ -
           ((auVar118._4_4_ * fVar175 - fVar114 * auVar100._4_4_) - fVar97 * auVar91._4_4_);
      auVar156._8_4_ =
           auVar101._8_4_ -
           ((auVar118._8_4_ * fVar176 - fVar99 * auVar100._8_4_) - fVar104 * auVar91._8_4_);
      auVar156._12_4_ =
           auVar101._12_4_ -
           ((auVar118._12_4_ * fVar177 - fVar115 * auVar100._12_4_) - fVar116 * auVar91._12_4_);
      auVar178._0_4_ =
           auVar119._0_4_ -
           ((auVar149._0_4_ * fVar172 - fVar86 * auVar90._0_4_) - fVar106 * auVar179._0_4_);
      auVar178._4_4_ =
           auVar119._4_4_ -
           ((auVar149._4_4_ * fVar175 - fVar114 * auVar90._4_4_) - fVar97 * auVar179._4_4_);
      auVar178._8_4_ =
           auVar119._8_4_ -
           ((auVar149._8_4_ * fVar176 - fVar99 * auVar90._8_4_) - fVar104 * auVar179._8_4_);
      auVar178._12_4_ =
           auVar119._12_4_ -
           ((auVar149._12_4_ * fVar177 - fVar115 * auVar90._12_4_) - fVar116 * auVar179._12_4_);
      auVar74._0_4_ =
           auVar178._0_4_ * auVar178._0_4_ +
           auVar156._0_4_ * auVar156._0_4_ + auVar87._0_4_ * auVar87._0_4_;
      auVar74._4_4_ =
           auVar178._4_4_ * auVar178._4_4_ +
           auVar156._4_4_ * auVar156._4_4_ + auVar87._4_4_ * auVar87._4_4_;
      auVar74._8_4_ =
           auVar178._8_4_ * auVar178._8_4_ +
           auVar156._8_4_ * auVar156._8_4_ + auVar87._8_4_ * auVar87._8_4_;
      auVar74._12_4_ =
           auVar178._12_4_ * auVar178._12_4_ +
           auVar156._12_4_ * auVar156._12_4_ + auVar87._12_4_ * auVar87._12_4_;
      auVar125 = sqrtps(ZEXT416(uVar10),auVar74);
      uVar57 = -(uint)(auVar74._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar59 = -(uint)(auVar74._4_4_ < _UNK_1506895e4);
      uVar60 = -(uint)(auVar74._8_4_ < _UNK_1506895e8);
      uVar62 = -(uint)(auVar74._12_4_ < _UNK_1506895ec);
      auVar157._4_4_ = uVar59;
      auVar157._0_4_ = uVar57;
      auVar88 = divps(auVar87,auVar125);
      auVar157._8_4_ = uVar60;
      auVar157._12_4_ = uVar62;
      auVar89._4_4_ = _UNK_15076b1f4;
      auVar89._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar89._8_4_ = _UNK_15076b1f8;
      auVar89._12_4_ = _UNK_15076b1fc;
      auVar89 = blendvps(auVar88,auVar89,auVar157);
      pfVar1 = (float *)(param_4 + uVar38);
      fVar72 = (float)(~uVar57 & auVar125._0_4_) - *pfVar1;
      fVar78 = (float)(~uVar59 & auVar125._4_4_) - pfVar1[1];
      fVar79 = (float)(~uVar60 & auVar125._8_4_) - pfVar1[2];
      fVar80 = (float)(~uVar62 & auVar125._12_4_) - pfVar1[3];
      auVar88._4_4_ = -(uint)(0.0 <= fVar78);
      auVar88._0_4_ = -(uint)(0.0 <= fVar72);
      auVar88._8_4_ = -(uint)(0.0 <= fVar79);
      auVar88._12_4_ = -(uint)(0.0 <= fVar80);
      auVar133 = blendvps(auVar133,_local_308,auVar88);
      auVar157 = divps(auVar156,auVar125);
      auVar88 = divps(auVar178,auVar125);
      fVar142 = auVar133._0_4_ * param_6 * param_6;
      fVar146 = auVar133._4_4_ * param_6 * param_6;
      fVar147 = auVar133._8_4_ * param_6 * param_6;
      fVar148 = auVar133._12_4_ * param_6 * param_6;
      fVar181 = auVar182._0_4_;
      fVar188 = auVar182._4_4_;
      fVar190 = auVar182._8_4_;
      fVar192 = auVar182._12_4_;
      pfVar1 = (float *)(param_5 + uVar38);
      fVar84 = *pfVar1;
      fVar189 = pfVar1[1];
      fVar191 = pfVar1[2];
      fVar193 = pfVar1[3];
      auVar143._0_4_ =
           (float)((uint)fVar142 ^ __xmm_80000000800000008000000080000000) * fVar72 - fVar84;
      auVar143._4_4_ = (float)((uint)fVar146 ^ _UNK_150651574) * fVar78 - fVar189;
      auVar143._8_4_ = (float)((uint)fVar147 ^ _UNK_150651578) * fVar79 - fVar191;
      auVar143._12_4_ = (float)((uint)fVar148 ^ _UNK_15065157c) * fVar80 - fVar193;
      auVar173._0_4_ =
           (((fVar172 * fVar117 - fVar86 * fVar130) - fVar106 * fVar167) + fVar181) * fVar142 +
           ___xmm_3f8000003f8000003f8000003f800000;
      auVar173._4_4_ =
           (((fVar175 * fVar122 - fVar114 * fVar140) - fVar97 * fVar169) + fVar188) * fVar146 +
           _UNK_15076b1f4;
      auVar173._8_4_ =
           (((fVar176 * fVar123 - fVar99 * fVar141) - fVar104 * fVar171) + fVar190) * fVar147 +
           _UNK_15076b1f8;
      auVar173._12_4_ =
           (((fVar177 * fVar124 - fVar115 * fVar162) - fVar116 * fVar160) + fVar192) * fVar148 +
           _UNK_15076b1fc;
      auVar133 = divps(auVar143,auVar173);
      fVar72 = auVar133._0_4_;
      fVar172 = auVar89._0_4_ * fVar72;
      fVar78 = auVar133._4_4_;
      fVar175 = auVar89._4_4_ * fVar78;
      fVar79 = auVar133._8_4_;
      fVar176 = auVar89._8_4_ * fVar79;
      fVar80 = auVar133._12_4_;
      fVar177 = auVar89._12_4_ * fVar80;
      auVar182._0_4_ = fVar181 * fVar172 + auVar180._0_4_;
      auVar182._4_4_ = fVar188 * fVar175 + auVar180._4_4_;
      auVar182._8_4_ = fVar190 * fVar176 + auVar180._8_4_;
      auVar182._12_4_ = fVar192 * fVar177 + auVar180._12_4_;
      fVar161 = (float)(~uVar57 & auVar157._0_4_) * fVar72;
      fVar166 = (float)(~uVar59 & auVar157._4_4_) * fVar78;
      fVar168 = (float)(~uVar60 & auVar157._8_4_) * fVar79;
      fVar170 = (float)(~uVar62 & auVar157._12_4_) * fVar80;
      *(float *)(param_1 + lVar53) = auVar182._0_4_;
      uVar17 = extractps(auVar182,1);
      *(undefined8 *)(param_1 + lVar48) = uVar17;
      auVar180._0_4_ = fVar181 * fVar161 + auVar101._0_4_;
      auVar180._4_4_ = fVar188 * fVar166 + auVar101._4_4_;
      auVar180._8_4_ = fVar190 * fVar168 + auVar101._8_4_;
      auVar180._12_4_ = fVar192 * fVar170 + auVar101._12_4_;
      uVar17 = extractps(auVar182,2);
      *(undefined8 *)(param_1 + lVar34) = uVar17;
      uVar17 = extractps(auVar182,3);
      *(undefined8 *)(param_1 + lVar43) = uVar17;
      fVar142 = (float)(~uVar57 & auVar88._0_4_) * fVar72;
      fVar146 = (float)(~uVar59 & auVar88._4_4_) * fVar78;
      fVar147 = (float)(~uVar60 & auVar88._8_4_) * fVar79;
      fVar148 = (float)(~uVar62 & auVar88._12_4_) * fVar80;
      *(float *)(param_1 + 4 + lVar53) = auVar180._0_4_;
      uVar17 = extractps(auVar180,1);
      *(undefined8 *)(param_1 + 4 + lVar48) = uVar17;
      uVar17 = extractps(auVar180,2);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar17;
      unaff_XMM15._0_4_ = fVar181 * fVar142 + auVar119._0_4_;
      unaff_XMM15._4_4_ = fVar188 * fVar146 + auVar119._4_4_;
      unaff_XMM15._8_4_ = fVar190 * fVar147 + auVar119._8_4_;
      unaff_XMM15._12_4_ = fVar192 * fVar148 + auVar119._12_4_;
      uVar17 = extractps(auVar180,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar17;
      *(float *)(param_1 + 8 + lVar53) = unaff_XMM15._0_4_;
      uVar17 = extractps(unaff_XMM15,1);
      *(undefined8 *)(param_1 + 8 + lVar48) = uVar17;
      uVar17 = extractps(unaff_XMM15,2);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar17;
      uVar17 = extractps(unaff_XMM15,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar17;
      *(uint *)(param_1 + 0xc + lVar53) = uVar13;
      *(uint *)(param_1 + 0xc + lVar48) = uVar14;
      *(uint *)(param_1 + 0xc + lVar34) = uVar15;
      *(uint *)(param_1 + 0xc + lVar43) = uVar16;
      auVar125._0_4_ = auVar163._0_4_ + fVar117 * fVar172 * fVar85;
      auVar125._4_4_ = auVar163._4_4_ + fVar122 * fVar175 * fVar96;
      auVar125._8_4_ = auVar163._8_4_ + fVar123 * fVar176 * fVar98;
      auVar125._12_4_ = auVar163._12_4_ + fVar124 * fVar177 * fVar105;
      *(float *)(param_1 + lVar52) = auVar125._0_4_;
      uVar17 = extractps(auVar125,1);
      *(undefined8 *)(param_1 + lVar35) = uVar17;
      auVar163._0_4_ = auVar118._0_4_ + fVar117 * fVar161 * fVar85;
      auVar163._4_4_ = auVar118._4_4_ + fVar122 * fVar166 * fVar96;
      auVar163._8_4_ = auVar118._8_4_ + fVar123 * fVar168 * fVar98;
      auVar163._12_4_ = auVar118._12_4_ + fVar124 * fVar170 * fVar105;
      uVar17 = extractps(auVar125,2);
      *(undefined8 *)(param_1 + lVar32) = uVar17;
      uVar17 = extractps(auVar125,3);
      *(undefined8 *)(param_1 + lVar41) = uVar17;
      *(float *)(param_1 + 4 + lVar52) = auVar163._0_4_;
      uVar17 = extractps(auVar163,1);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar17;
      uVar17 = extractps(auVar163,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar17;
      auVar101._0_4_ = auVar149._0_4_ + fVar117 * fVar142 * fVar85;
      auVar101._4_4_ = auVar149._4_4_ + fVar122 * fVar146 * fVar96;
      auVar101._8_4_ = auVar149._8_4_ + fVar123 * fVar147 * fVar98;
      auVar101._12_4_ = auVar149._12_4_ + fVar124 * fVar148 * fVar105;
      uVar17 = extractps(auVar163,3);
      *(undefined8 *)(param_1 + 4 + lVar41) = uVar17;
      *(float *)(param_1 + 8 + lVar52) = auVar101._0_4_;
      uVar17 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar17;
      uVar17 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar17;
      uVar17 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 8 + lVar41) = uVar17;
      *(uint *)(param_1 + 0xc + lVar52) = uVar46;
      *(uint *)(param_1 + 0xc + lVar35) = uVar61;
      *(uint *)(param_1 + 0xc + lVar32) = uVar63;
      *(uint *)(param_1 + 0xc + lVar41) = uVar159;
      auVar149._0_4_ = auVar126._0_4_ + fVar130 * fVar172 * fVar86;
      auVar149._4_4_ = auVar126._4_4_ + fVar140 * fVar175 * fVar114;
      auVar149._8_4_ = auVar126._8_4_ + fVar141 * fVar176 * fVar99;
      auVar149._12_4_ = auVar126._12_4_ + fVar162 * fVar177 * fVar115;
      *(float *)(param_1 + lVar40) = auVar149._0_4_;
      uVar17 = extractps(auVar149,1);
      *(undefined8 *)(param_1 + lVar50) = uVar17;
      auVar118._0_4_ = auVar100._0_4_ + fVar130 * fVar161 * fVar86;
      auVar118._4_4_ = auVar100._4_4_ + fVar140 * fVar166 * fVar114;
      auVar118._8_4_ = auVar100._8_4_ + fVar141 * fVar168 * fVar99;
      auVar118._12_4_ = auVar100._12_4_ + fVar162 * fVar170 * fVar115;
      uVar17 = extractps(auVar149,2);
      *(undefined8 *)(param_1 + lVar33) = uVar17;
      uVar17 = extractps(auVar149,3);
      *(undefined8 *)(param_1 + lVar51) = uVar17;
      *(float *)(param_1 + 4 + lVar40) = auVar118._0_4_;
      uVar17 = extractps(auVar118,1);
      *(undefined8 *)(param_1 + 4 + lVar50) = uVar17;
      uVar17 = extractps(auVar118,2);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar17;
      auVar100._0_4_ = auVar90._0_4_ + fVar130 * fVar142 * fVar86;
      auVar100._4_4_ = auVar90._4_4_ + fVar140 * fVar146 * fVar114;
      auVar100._8_4_ = auVar90._8_4_ + fVar141 * fVar147 * fVar99;
      auVar100._12_4_ = auVar90._12_4_ + fVar162 * fVar148 * fVar115;
      uVar17 = extractps(auVar118,3);
      *(undefined8 *)(param_1 + 4 + lVar51) = uVar17;
      *(float *)(param_1 + 8 + lVar40) = auVar100._0_4_;
      uVar17 = extractps(auVar100,1);
      *(undefined8 *)(param_1 + 8 + lVar50) = uVar17;
      uVar17 = extractps(auVar100,2);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar17;
      uVar17 = extractps(auVar100,3);
      *(undefined8 *)(param_1 + 8 + lVar51) = uVar17;
      *(uint *)(param_1 + 0xc + lVar40) = uVar30;
      *(uint *)(param_1 + 0xc + lVar50) = uVar6;
      *(uint *)(param_1 + 0xc + lVar33) = uVar7;
      *(uint *)(param_1 + 0xc + lVar51) = uVar8;
      in_XMM4._0_4_ = auVar132._0_4_ + fVar172 * fVar167 * fVar106;
      in_XMM4._4_4_ = auVar132._4_4_ + fVar175 * fVar169 * fVar97;
      in_XMM4._8_4_ = auVar132._8_4_ + fVar176 * fVar171 * fVar104;
      in_XMM4._12_4_ = auVar132._12_4_ + fVar177 * fVar160 * fVar116;
      *(float *)(param_1 + lVar45) = in_XMM4._0_4_;
      uVar17 = extractps(in_XMM4,1);
      *(undefined8 *)(param_1 + lVar54) = uVar17;
      uVar17 = extractps(in_XMM4,2);
      *(undefined8 *)(param_1 + lVar49) = uVar17;
      auVar119._0_4_ = auVar91._0_4_ + fVar161 * fVar167 * fVar106;
      auVar119._4_4_ = auVar91._4_4_ + fVar166 * fVar169 * fVar97;
      auVar119._8_4_ = auVar91._8_4_ + fVar168 * fVar171 * fVar104;
      auVar119._12_4_ = auVar91._12_4_ + fVar170 * fVar160 * fVar116;
      uVar17 = extractps(in_XMM4,3);
      *(undefined8 *)(param_1 + lVar36) = uVar17;
      *(float *)(param_1 + 4 + lVar45) = auVar119._0_4_;
      uVar17 = extractps(auVar119,1);
      *(undefined8 *)(param_1 + 4 + lVar54) = uVar17;
      uVar17 = extractps(auVar119,2);
      *(undefined8 *)(param_1 + 4 + lVar49) = uVar17;
      auVar90._0_4_ = auVar179._0_4_ + fVar142 * fVar167 * fVar106;
      auVar90._4_4_ = auVar179._4_4_ + fVar146 * fVar169 * fVar97;
      auVar90._8_4_ = auVar179._8_4_ + fVar147 * fVar171 * fVar104;
      auVar90._12_4_ = auVar179._12_4_ + fVar148 * fVar160 * fVar116;
      uVar17 = extractps(auVar119,3);
      *(undefined8 *)(param_1 + 4 + lVar36) = uVar17;
      *(float *)(param_1 + 8 + lVar45) = auVar90._0_4_;
      uVar17 = extractps(auVar90,1);
      *(undefined8 *)(param_1 + 8 + lVar54) = uVar17;
      uVar17 = extractps(auVar90,2);
      *(undefined8 *)(param_1 + 8 + lVar49) = uVar17;
      uVar17 = extractps(auVar90,3);
      *(undefined8 *)(param_1 + 8 + lVar36) = uVar17;
      pfVar1 = (float *)(param_5 + uVar38);
      *pfVar1 = fVar72 + fVar84;
      pfVar1[1] = fVar78 + fVar189;
      pfVar1[2] = fVar79 + fVar191;
      pfVar1[3] = fVar80 + fVar193;
      *(uint *)(param_1 + 0xc + lVar45) = uVar9;
      *(uint *)(param_1 + 0xc + lVar54) = uVar10;
      *(uint *)(param_1 + 0xc + lVar49) = uVar11;
      *(uint *)(param_1 + 0xc + lVar36) = uVar12;
      uVar47 = uVar47 + 0x10;
      uVar30 = (int)uVar31 + 4;
      uVar31 = (ulonglong)uVar30;
      uVar46 = uVar20;
      uVar61 = uVar26;
      uVar63 = uVar27;
      uVar159 = uVar28;
    } while ((int)uVar30 < (int)(uVar58 & 0xfffffffc));
  }
  uVar58 = (uint)uVar31;
  if ((int)param_13 <= (int)uVar58) {
    return;
  }
  auVar179._0_4_ =
       -(uint)((int)(uVar58 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar179._4_4_ =
       -(uint)((int)(uVar58 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar179._8_4_ = -(uint)((int)(uVar58 | _UNK_150631e08) < (int)param_13);
  auVar179._12_4_ = -(uint)((int)(uVar58 | _UNK_150631e0c) < (int)param_13);
  lVar32 = uVar31 * 0x10;
  pauVar37 = (undefined1 (*) [16])(param_2 + lVar32);
  uVar46 = movmskps(param_13,auVar179);
  bVar29 = (char)((char)uVar46 << 4) >> 4;
  if (uVar46 == 0xf) {
    auVar90 = *pauVar37;
    iVar154 = *(int *)pauVar37[1];
    auVar91 = pauVar37[2];
    iVar155 = *(int *)pauVar37[3];
    auVar135._0_8_ = auVar90._0_8_;
    auVar135._8_4_ = auVar90._4_4_;
    auVar135._12_4_ = *(undefined4 *)(pauVar37[1] + 4);
    iVar131 = auVar90._0_4_;
    auVar108._0_8_ = CONCAT44(*(undefined4 *)(pauVar37[1] + 8),auVar90._8_4_);
    auVar108._8_4_ = auVar90._12_4_;
    auVar108._12_4_ = *(undefined4 *)(pauVar37[1] + 0xc);
    auVar126._0_8_ = auVar91._0_8_;
    auVar126._8_4_ = auVar91._4_4_;
    auVar126._12_4_ = *(undefined4 *)(pauVar37[3] + 4);
    iVar73 = auVar91._0_4_;
    auVar81._0_8_ = CONCAT44(*(undefined4 *)(pauVar37[3] + 8),auVar91._8_4_);
    auVar81._8_4_ = auVar91._12_4_;
    auVar81._12_4_ = *(undefined4 *)(pauVar37[3] + 0xc);
    auVar134._8_8_ = auVar126._8_8_;
    auVar134._0_8_ = auVar135._8_8_;
    auVar127._8_8_ = auVar81._0_8_;
    auVar127._0_8_ = auVar108._0_8_;
    auVar107._8_8_ = auVar81._8_8_;
    auVar107._0_8_ = auVar108._8_8_;
    lVar33 = param_3 + lVar32;
    lVar34 = param_3 + 0x10 + lVar32;
    lVar35 = param_3 + 0x20 + lVar32;
    lVar32 = param_3 + 0x30 + lVar32;
    auVar18._4_8_ = in_XMM4._8_8_;
    auVar18._0_4_ = *(undefined4 *)(lVar33 + 4);
    auVar102._0_8_ = auVar18._0_8_ << 0x20;
    auVar102._8_4_ = *(undefined4 *)(lVar33 + 4);
    auVar102._12_4_ = *(undefined4 *)(lVar34 + 4);
    auVar132._0_8_ = CONCAT44(*(undefined4 *)(lVar34 + 8),*(undefined4 *)(lVar33 + 8));
    auVar132._8_4_ = *(undefined4 *)(lVar33 + 0xc);
    auVar132._12_4_ = *(undefined4 *)(lVar34 + 0xc);
    auVar19._4_8_ = unaff_XMM15._8_8_;
    auVar19._0_4_ = *(undefined4 *)(lVar35 + 4);
    auVar184._0_8_ = auVar19._0_8_ << 0x20;
    auVar184._8_4_ = *(undefined4 *)(lVar35 + 4);
    auVar184._12_4_ = *(undefined4 *)(lVar32 + 4);
    auVar183._8_8_ = auVar184._8_8_;
    auVar183._0_8_ = auVar102._8_8_;
    auVar121._0_8_ = CONCAT44(*(undefined4 *)(lVar32 + 8),*(undefined4 *)(lVar35 + 8));
    auVar121._8_4_ = *(undefined4 *)(lVar35 + 0xc);
    auVar121._12_4_ = *(undefined4 *)(lVar32 + 0xc);
    auVar91._8_8_ = auVar121._0_8_;
    auVar91._0_8_ = auVar132._0_8_;
    auVar120._8_8_ = auVar121._8_8_;
    auVar120._0_8_ = auVar132._8_8_;
  }
  else {
    auVar75._0_4_ = ___xmm_00000030000000200000001000000000 & auVar179._0_4_;
    auVar75._4_4_ = _UNK_150b511c4 & auVar179._4_4_;
    auVar75._8_4_ = _UNK_150b511c8 & auVar179._8_4_;
    auVar75._12_4_ = _UNK_150b511cc & auVar179._12_4_;
    lVar33 = extractps(auVar75,1);
    lVar34 = extractps(auVar75,2);
    lVar35 = extractps(auVar75,3);
    iVar131 = *(int *)*pauVar37;
    iVar154 = *(int *)(*pauVar37 + lVar33);
    iVar73 = *(int *)(*pauVar37 + lVar34);
    iVar155 = *(int *)(*pauVar37 + lVar35);
    auVar90 = ___xmm_00000034000000240000001400000004 & auVar179;
    auVar134._4_4_ = *(undefined4 *)(*pauVar37 + auVar90._4_4_);
    auVar134._0_4_ = *(undefined4 *)(*pauVar37 + auVar90._0_4_);
    auVar134._12_4_ = *(undefined4 *)(*pauVar37 + auVar90._12_4_);
    auVar134._8_4_ = *(undefined4 *)(*pauVar37 + auVar90._8_4_);
    auVar91 = ___xmm_00000038000000280000001800000008 & auVar179;
    auVar127._4_4_ = *(undefined4 *)(*pauVar37 + auVar91._4_4_);
    auVar127._0_4_ = *(undefined4 *)(*pauVar37 + auVar91._0_4_);
    auVar127._12_4_ = *(undefined4 *)(*pauVar37 + auVar91._12_4_);
    auVar127._8_4_ = *(undefined4 *)(*pauVar37 + auVar91._8_4_);
    auVar100 = ___xmm_0000003c0000002c0000001c0000000c & auVar179;
    auVar107._4_4_ = *(undefined4 *)(*pauVar37 + auVar100._4_4_);
    auVar107._0_4_ = *(undefined4 *)(*pauVar37 + auVar100._0_4_);
    auVar107._12_4_ = *(undefined4 *)(*pauVar37 + auVar100._12_4_);
    auVar107._8_4_ = *(undefined4 *)(*pauVar37 + auVar100._8_4_);
    param_3 = param_3 + lVar32;
    auVar101 = insertps(ZEXT416(*(uint *)((ulonglong)auVar90._0_4_ + param_3)),
                        *(undefined4 *)((ulonglong)auVar90._4_4_ + param_3),0x10);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)auVar90._8_4_ + param_3),0x20);
    auVar183 = insertps(auVar101,*(undefined4 *)((ulonglong)auVar90._12_4_ + param_3),0x30);
    auVar90 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + param_3)),
                       *(undefined4 *)((ulonglong)auVar91._4_4_ + param_3),0x10);
    auVar90 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar91._8_4_ + param_3),0x20);
    auVar91 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar91._12_4_ + param_3),0x30);
    auVar90 = insertps(ZEXT416(*(uint *)((ulonglong)auVar100._0_4_ + param_3)),
                       *(undefined4 *)((ulonglong)auVar100._4_4_ + param_3),0x10);
    auVar90 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar100._8_4_ + param_3),0x20);
    auVar120 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar100._12_4_ + param_3),0x30);
  }
  auVar150._0_4_ = iVar131 << 4;
  auVar150._4_4_ = iVar154 << 4;
  auVar150._8_4_ = iVar73 << 4;
  auVar150._12_4_ = iVar155 << 4;
  auVar100 = auVar179 & auVar150;
  lVar32 = param_1 + auVar100._0_4_;
  auVar119 = ___xmm_00000004000000040000000400000004 & auVar179;
  auVar101 = ___xmm_00000008000000080000000800000008 & auVar179;
  auVar136._0_4_ = auVar134._0_4_ << 4;
  auVar136._4_4_ = auVar134._4_4_ << 4;
  auVar136._8_4_ = auVar134._8_4_ << 4;
  auVar136._12_4_ = auVar134._12_4_ << 4;
  auVar118 = auVar179 & auVar136;
  auVar128._0_4_ = auVar127._0_4_ << 4;
  auVar128._4_4_ = auVar127._4_4_ << 4;
  auVar128._8_4_ = auVar127._8_4_ << 4;
  auVar128._12_4_ = auVar127._12_4_ << 4;
  auVar126 = auVar179 & auVar128;
  lVar44 = (longlong)auVar126._0_4_;
  auVar109._0_4_ = auVar107._0_4_ << 4;
  auVar109._4_4_ = auVar107._4_4_ << 4;
  auVar109._8_4_ = auVar107._8_4_ << 4;
  auVar109._12_4_ = auVar107._12_4_ << 4;
  auVar132 = auVar179 & auVar109;
  lVar55 = (longlong)auVar132._0_4_;
  auVar90 = ZEXT416(*(uint *)(param_1 + auVar100._0_4_));
  lVar33 = param_1 + auVar100._4_4_;
  lVar34 = param_1 + auVar100._8_4_;
  lVar35 = param_1 + auVar100._12_4_;
  uVar31 = (ulonglong)auVar119._4_4_;
  uVar38 = (ulonglong)auVar119._0_4_;
  uVar47 = (ulonglong)auVar101._0_4_;
  lVar36 = param_1 + auVar118._0_4_;
  lVar40 = param_1 + auVar118._4_4_;
  lVar41 = param_1 + auVar118._8_4_;
  lVar43 = param_1 + auVar118._12_4_;
  lVar45 = param_1 + lVar44;
  lVar48 = param_1 + auVar126._4_4_;
  lVar49 = param_1 + auVar126._8_4_;
  lVar50 = param_1 + auVar126._12_4_;
  lVar51 = param_1 + lVar55;
  lVar52 = param_1 + auVar132._4_4_;
  lVar53 = param_1 + auVar132._8_4_;
  lVar54 = param_1 + auVar132._12_4_;
  bVar56 = (bVar29 & 2) != 0;
  if (bVar56) {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._4_4_),0x10);
  }
  uVar42 = (ulonglong)auVar101._4_4_;
  auVar133 = ZEXT416(*(uint *)(uVar38 + lVar32));
  if (bVar56) {
    auVar133 = insertps(auVar133,*(undefined4 *)(uVar31 + lVar33),0x10);
  }
  auVar149 = ZEXT416(*(uint *)(uVar47 + lVar32));
  if (bVar56) {
    auVar149 = insertps(auVar149,*(undefined4 *)(uVar42 + lVar33),0x10);
  }
  _local_368 = ZEXT416(*(uint *)(param_1 + auVar118._0_4_));
  if (bVar56) {
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._4_4_),0x10);
    _local_388 = insertps(ZEXT416(*(uint *)(uVar38 + lVar36)),*(undefined4 *)(uVar31 + lVar40),0x10)
    ;
    auVar180 = insertps(ZEXT416(*(uint *)(uVar47 + lVar36)),*(undefined4 *)(uVar42 + lVar40),0x10);
    auVar163 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                        *(undefined4 *)(param_1 + auVar126._4_4_),0x10);
  }
  else {
    _local_388 = ZEXT416(*(uint *)(uVar38 + lVar36));
    auVar180 = ZEXT416(*(uint *)(uVar47 + lVar36));
    auVar163 = ZEXT416(*(uint *)(param_1 + lVar44));
  }
  auVar182 = ZEXT416(*(uint *)(uVar38 + lVar45));
  uVar61 = auVar119._8_4_;
  uVar159 = auVar119._12_4_;
  uVar63 = auVar101._8_4_;
  uVar20 = auVar101._12_4_;
  if (bVar56) {
    auVar182 = insertps(auVar182,*(undefined4 *)(uVar31 + lVar48),0x10);
    auVar157 = insertps(ZEXT416(*(uint *)(uVar47 + lVar45)),*(undefined4 *)(uVar42 + lVar48),0x10);
    auVar119 = insertps(ZEXT416(*(uint *)(param_1 + lVar55)),
                        *(undefined4 *)(param_1 + auVar132._4_4_),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar38 + lVar51)),*(undefined4 *)(uVar31 + lVar52),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar47 + lVar51)),*(undefined4 *)(uVar42 + lVar52),0x10);
  }
  else {
    auVar157 = ZEXT416(*(uint *)(uVar47 + lVar45));
    auVar119 = ZEXT416(*(uint *)(param_1 + lVar55));
    auVar89 = ZEXT416(*(uint *)(uVar38 + lVar51));
    auVar101 = ZEXT416(*(uint *)(uVar47 + lVar51));
  }
  if ((bVar29 & 4) != 0) {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._8_4_),0x20);
    auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar61 + lVar34),0x20);
    auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar63 + lVar34),0x20);
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._8_4_),0x20);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar61 + lVar41),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar63 + lVar41),0x20);
    auVar163 = insertps(auVar163,*(undefined4 *)(param_1 + auVar126._8_4_),0x20);
    auVar182 = insertps(auVar182,*(undefined4 *)((ulonglong)uVar61 + lVar49),0x20);
    auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)uVar63 + lVar49),0x20);
    auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + auVar132._8_4_),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar61 + lVar53),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar63 + lVar53),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._12_4_),0x30);
    auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar159 + lVar35),0x30);
    auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar20 + lVar35),0x30);
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._12_4_),0x30);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar159 + lVar43),0x30);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar20 + lVar43),0x30);
    auVar163 = insertps(auVar163,*(undefined4 *)(param_1 + auVar126._12_4_),0x30);
  }
  uVar31 = (ulonglong)(auVar179._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
  if ((char)bVar29 < '\0') {
    auVar182 = insertps(auVar182,*(undefined4 *)((ulonglong)uVar159 + lVar50),0x30);
  }
  uVar47 = (ulonglong)(auVar179._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
  if ((char)bVar29 < '\0') {
    auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)uVar20 + lVar50),0x30);
  }
  bVar56 = (char)bVar29 < '\0';
  uVar38 = (ulonglong)SUB164(auVar179 & ___xmm_0000000c0000000c0000000c0000000c,8);
  if (bVar56) {
    auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + auVar132._12_4_),0x30);
  }
  uVar42 = (ulonglong)SUB164(auVar179 & ___xmm_0000000c0000000c0000000c0000000c,0xc);
  auVar179 = insertps(ZEXT416(*(uint *)(uVar31 + lVar36)),*(undefined4 *)(uVar47 + lVar40),0x10);
  auVar100 = insertps(ZEXT416(*(uint *)(uVar31 + lVar45)),*(undefined4 *)(uVar47 + lVar48),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)(uVar31 + lVar51)),*(undefined4 *)(uVar47 + lVar52),0x10);
  auVar126 = insertps(ZEXT416(*(uint *)(uVar31 + lVar32)),*(undefined4 *)(uVar47 + lVar33),0x10);
  if (bVar56) {
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar159 + lVar54),0x30);
  }
  auVar179 = insertps(auVar179,*(undefined4 *)(uVar38 + lVar41),0x20);
  auVar100 = insertps(auVar100,*(undefined4 *)(uVar38 + lVar49),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)(uVar38 + lVar53),0x20);
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar38 + lVar34),0x20);
  if (bVar56) {
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar20 + lVar54),0x30);
  }
  auVar179 = insertps(auVar179,*(undefined4 *)(uVar42 + lVar43),0x30);
  auVar100 = insertps(auVar100,*(undefined4 *)(uVar42 + lVar50),0x30);
  auVar118 = insertps(auVar118,*(undefined4 *)(uVar42 + lVar54),0x30);
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar42 + lVar35),0x30);
  fVar160 = auVar183._0_4_;
  fVar162 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar160);
  fVar172 = auVar183._4_4_;
  fVar167 = (float)(_UNK_150651574 ^ (uint)fVar172);
  fVar175 = auVar183._8_4_;
  fVar169 = (float)(_UNK_150651578 ^ (uint)fVar175);
  fVar176 = auVar183._12_4_;
  fVar171 = (float)(_UNK_15065157c ^ (uint)fVar176);
  local_378 = auVar180._0_4_;
  fStack_374 = auVar180._4_4_;
  fStack_370 = auVar180._8_4_;
  fStack_36c = auVar180._12_4_;
  fVar99 = auVar91._0_4_;
  fVar104 = auVar91._4_4_;
  fVar105 = auVar91._12_4_;
  local_2e8 = auVar163._0_4_;
  fStack_2e4 = auVar163._4_4_;
  fStack_2e0 = auVar163._8_4_;
  fStack_2dc = auVar163._12_4_;
  fVar84 = auVar91._8_4_;
  local_2d8 = auVar182._0_4_;
  fStack_2d4 = auVar182._4_4_;
  fStack_2d0 = auVar182._8_4_;
  fStack_2cc = auVar182._12_4_;
  fVar177 = auVar157._0_4_;
  fVar189 = auVar157._4_4_;
  fVar191 = auVar157._8_4_;
  fVar193 = auVar157._12_4_;
  fVar117 = auVar120._0_4_;
  fVar122 = auVar120._4_4_;
  fVar123 = auVar120._12_4_;
  fVar85 = auVar120._8_4_;
  fVar124 = auVar89._0_4_;
  fVar130 = auVar89._4_4_;
  fVar140 = auVar89._8_4_;
  fVar141 = auVar89._12_4_;
  fVar86 = auVar101._0_4_;
  auVar82._0_4_ = fVar117 * fVar86;
  fVar96 = auVar101._4_4_;
  auVar82._4_4_ = fVar122 * fVar96;
  fVar97 = auVar101._8_4_;
  auVar82._8_4_ = fVar85 * fVar97;
  fVar98 = auVar101._12_4_;
  auVar82._12_4_ = fVar123 * fVar98;
  fVar106 = (local_378 * fVar162 - fVar99 * fVar177) - auVar82._0_4_;
  fVar114 = (fStack_374 * fVar167 - fVar104 * fVar189) - auVar82._4_4_;
  fVar115 = (fStack_370 * fVar169 - fVar84 * fVar191) - auVar82._8_4_;
  fVar116 = (fStack_36c * fVar171 - fVar105 * fVar193) - auVar82._12_4_;
  lVar32 = (longlong)(int)(uVar58 << 2);
  pfVar1 = (float *)(param_5 + lVar32);
  local_348._0_4_ = *param_8;
  local_348._4_4_ = local_348._0_4_;
  fStack_340 = (float)local_348._0_4_;
  fStack_33c = (float)local_348._0_4_;
  if ((bVar29 & 9) == 9) {
    _local_338 = *(undefined1 (*) [16])(param_4 + lVar32);
    auVar91 = *(undefined1 (*) [16])(param_5 + lVar32);
    if ((param_7 & 1) == 0) {
      fVar72 = *param_11;
      auVar151._4_4_ = fVar72;
      auVar151._0_4_ = fVar72;
      auVar151._8_4_ = fVar72;
      auVar151._12_4_ = fVar72;
    }
    else {
      auVar82 = *(undefined1 (*) [16])(param_9 + lVar32);
LAB_1408e8147:
      fVar72 = param_8[1];
      local_348._4_4_ = (float)local_348._0_4_ + fVar72 * auVar82._4_4_;
      fStack_340 = (float)local_348._0_4_ + fVar72 * auVar82._8_4_;
      fStack_33c = (float)local_348._0_4_ + fVar72 * auVar82._12_4_;
      fVar78 = *param_11;
      auVar151._4_4_ = fVar78;
      auVar151._0_4_ = fVar78;
      auVar151._8_4_ = fVar78;
      auVar151._12_4_ = fVar78;
      local_348._0_4_ = (float)local_348._0_4_ + fVar72 * auVar82._0_4_;
    }
    if ((param_10 & 1) != 0) {
      if ((bVar29 & 9) == 9) {
        auVar82 = *(undefined1 (*) [16])(param_12 + lVar32);
      }
      else {
LAB_1408e8281:
        puVar39 = (uint *)(param_12 + lVar32);
        if ((uVar46 & 1) != 0) {
          auVar82 = ZEXT416(*puVar39);
        }
        if ((uVar46 & 2) != 0) {
          auVar82 = insertps(auVar82,puVar39[1],0x10);
        }
        if ((uVar46 & 4) != 0) {
          auVar82 = insertps(auVar82,puVar39[2],0x20);
        }
        if ((uVar46 & 8) != 0) {
          auVar82 = insertps(auVar82,puVar39[3],0x30);
        }
      }
      fVar72 = param_11[1];
      auVar152._0_4_ = auVar151._0_4_ + fVar72 * auVar82._0_4_;
      auVar152._4_4_ = auVar151._4_4_ + fVar72 * auVar82._4_4_;
      auVar152._8_4_ = auVar151._8_4_ + fVar72 * auVar82._8_4_;
      auVar152._12_4_ = auVar151._12_4_ + fVar72 * auVar82._12_4_;
      goto LAB_1408e82ce;
    }
  }
  else {
    puVar39 = (uint *)(param_4 + lVar32);
    _local_338 = auVar150;
    if ((uVar46 & 1) != 0) {
      _local_338 = ZEXT416(*puVar39);
    }
    if ((uVar46 & 2) != 0) {
      _local_338 = insertps(_local_338,puVar39[1],0x10);
    }
    if ((uVar46 & 4) != 0) {
      _local_338 = insertps(_local_338,puVar39[2],0x20);
    }
    if ((uVar46 & 8) != 0) {
      _local_338 = insertps(_local_338,puVar39[3],0x30);
    }
    if ((uVar46 & 1) != 0) {
      auVar91 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar46 & 2) != 0) {
      auVar91 = insertps(auVar91,pfVar1[1],0x10);
    }
    if ((uVar46 & 4) != 0) {
      auVar91 = insertps(auVar91,pfVar1[2],0x20);
    }
    if ((uVar46 & 8) != 0) {
      auVar91 = insertps(auVar91,pfVar1[3],0x30);
    }
    if ((param_7 & 1) != 0) {
      puVar39 = (uint *)(param_9 + lVar32);
      if ((uVar46 & 1) != 0) {
        auVar82 = ZEXT416(*puVar39);
      }
      if ((uVar46 & 2) != 0) {
        auVar82 = insertps(auVar82,puVar39[1],0x10);
      }
      if ((uVar46 & 4) != 0) {
        auVar82 = insertps(auVar82,puVar39[2],0x20);
      }
      if ((uVar46 & 8) != 0) {
        auVar82 = insertps(auVar82,puVar39[3],0x30);
      }
      goto LAB_1408e8147;
    }
    fVar72 = *param_11;
    auVar151._4_4_ = fVar72;
    auVar151._0_4_ = fVar72;
    auVar151._8_4_ = fVar72;
    auVar151._12_4_ = fVar72;
    if ((param_10 & 1) != 0) goto LAB_1408e8281;
  }
  auVar152 = auVar151;
LAB_1408e82ce:
  local_398 = auVar149._0_4_;
  fStack_394 = auVar149._4_4_;
  fStack_390 = auVar149._8_4_;
  fStack_38c = auVar149._12_4_;
  local_328 = auVar90._0_4_;
  fStack_324 = auVar90._4_4_;
  fStack_320 = auVar90._8_4_;
  fStack_31c = auVar90._12_4_;
  fVar79 = local_328 -
           (((float)local_368._0_4_ * fVar162 - fVar99 * local_2e8) - fVar117 * auVar119._0_4_);
  fVar80 = fStack_324 -
           (((float)local_368._4_4_ * fVar167 - fVar104 * fStack_2e4) - fVar122 * auVar119._4_4_);
  auVar174._0_8_ = CONCAT44(fVar80,fVar79);
  auVar174._8_4_ =
       fStack_320 - ((fStack_360 * fVar169 - fVar84 * fStack_2e0) - fVar85 * auVar119._8_4_);
  auVar174._12_4_ =
       fStack_31c - ((fStack_35c * fVar171 - fVar105 * fStack_2dc) - fVar123 * auVar119._12_4_);
  local_318 = auVar133._0_4_;
  fStack_314 = auVar133._4_4_;
  fStack_310 = auVar133._8_4_;
  fStack_30c = auVar133._12_4_;
  fVar72 = local_318 - (((float)local_388._0_4_ * fVar162 - fVar99 * local_2d8) - fVar117 * fVar124)
  ;
  fVar78 = fStack_314 -
           (((float)local_388._4_4_ * fVar167 - fVar104 * fStack_2d4) - fVar122 * fVar130);
  auVar158._0_8_ = CONCAT44(fVar78,fVar72);
  auVar158._8_4_ = fStack_310 - ((fStack_380 * fVar169 - fVar84 * fStack_2d0) - fVar85 * fVar140);
  auVar158._12_4_ = fStack_30c - ((fStack_37c * fVar171 - fVar105 * fStack_2cc) - fVar123 * fVar141)
  ;
  fVar106 = local_398 - fVar106;
  fVar114 = fStack_394 - fVar114;
  auVar92._0_8_ = CONCAT44(fVar114,fVar106);
  auVar92._8_4_ = fStack_390 - fVar115;
  auVar92._12_4_ = fStack_38c - fVar116;
  auVar76._0_4_ = fVar106 * fVar106 + fVar72 * fVar72 + fVar79 * fVar79;
  auVar76._4_4_ = fVar114 * fVar114 + fVar78 * fVar78 + fVar80 * fVar80;
  auVar76._8_4_ =
       auVar92._8_4_ * auVar92._8_4_ +
       auVar158._8_4_ * auVar158._8_4_ + auVar174._8_4_ * auVar174._8_4_;
  auVar76._12_4_ =
       auVar92._12_4_ * auVar92._12_4_ +
       auVar158._12_4_ * auVar158._12_4_ + auVar174._12_4_ * auVar174._12_4_;
  auVar132 = sqrtps(auVar120,auVar76);
  uVar58 = -(uint)(auVar76._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar46 = -(uint)(auVar76._4_4_ < _UNK_1506895e4);
  uVar61 = -(uint)(auVar76._8_4_ < _UNK_1506895e8);
  uVar63 = -(uint)(auVar76._12_4_ < _UNK_1506895ec);
  auVar64._4_4_ = uVar46;
  auVar64._0_4_ = uVar58;
  auVar110._8_4_ = auVar158._8_4_;
  auVar110._0_8_ = auVar158._0_8_;
  auVar110._12_4_ = auVar158._12_4_;
  auVar101 = divps(auVar110,auVar132);
  auVar129._8_4_ = auVar92._8_4_;
  auVar129._0_8_ = auVar92._0_8_;
  auVar129._12_4_ = auVar92._12_4_;
  auVar133 = divps(auVar129,auVar132);
  auVar137._8_4_ = auVar174._8_4_;
  auVar137._0_8_ = auVar174._0_8_;
  auVar137._12_4_ = auVar174._12_4_;
  auVar90 = divps(auVar137,auVar132);
  auVar64._8_4_ = uVar61;
  auVar64._12_4_ = uVar63;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar90 = blendvps(auVar90,auVar21,auVar64);
  auVar185._8_4_ = auVar174._8_4_;
  auVar185._0_8_ = auVar174._0_8_;
  auVar185._12_4_ = auVar174._12_4_;
  bVar56 = (bVar29 & 1) != 0;
  if (bVar56) {
    auVar185 = auVar90;
  }
  auVar144._0_8_ = CONCAT44(~uVar46 & auVar101._4_4_,~uVar58 & auVar101._0_4_);
  auVar144._8_4_ = ~uVar61 & auVar101._8_4_;
  auVar144._12_4_ = ~uVar63 & auVar101._12_4_;
  auVar111._0_8_ = CONCAT44(~uVar46 & auVar133._4_4_,~uVar58 & auVar133._0_4_);
  auVar111._8_4_ = ~uVar61 & auVar133._8_4_;
  auVar111._12_4_ = ~uVar63 & auVar133._12_4_;
  auVar83._8_4_ = auVar158._8_4_;
  auVar83._0_8_ = auVar158._0_8_;
  auVar83._12_4_ = auVar158._12_4_;
  auVar65._8_4_ = auVar92._8_4_;
  auVar65._0_8_ = auVar92._0_8_;
  auVar65._12_4_ = auVar92._12_4_;
  if (bVar56) {
    auVar83._8_4_ = auVar144._8_4_;
    auVar83._0_8_ = auVar144._0_8_;
    auVar83._12_4_ = auVar144._12_4_;
    auVar65._8_4_ = auVar111._8_4_;
    auVar65._0_8_ = auVar111._0_8_;
    auVar65._12_4_ = auVar111._12_4_;
    auVar101 = blendps(auVar174,auVar185,1);
  }
  else {
    auVar101 = blendps(auVar174,auVar185,1);
  }
  if ((bVar29 & 2) == 0) {
    auVar149 = blendps(auVar158,auVar83,1);
    auVar133 = blendps(auVar92,auVar65,1);
    auVar101 = blendps(auVar101,auVar101,2);
    auVar71 = auVar133;
    auVar186 = auVar149;
  }
  else {
    auVar149 = blendps(auVar158,auVar83,1);
    auVar186._8_4_ = auVar144._8_4_;
    auVar186._0_8_ = auVar144._0_8_;
    auVar186._12_4_ = auVar144._12_4_;
    auVar133 = blendps(auVar92,auVar65,1);
    auVar71._8_4_ = auVar111._8_4_;
    auVar71._0_8_ = auVar111._0_8_;
    auVar71._12_4_ = auVar111._12_4_;
    auVar101 = blendps(auVar101,auVar90,2);
  }
  if ((bVar29 & 4) == 0) {
    auVar163 = blendps(auVar149,auVar186,2);
    auVar93 = blendps(auVar133,auVar71,2);
    auVar133 = auVar93;
    auVar149 = auVar101;
    auVar187 = auVar163;
  }
  else {
    auVar163 = blendps(auVar149,auVar186,2);
    auVar187._8_4_ = auVar144._8_4_;
    auVar187._0_8_ = auVar144._0_8_;
    auVar187._12_4_ = auVar144._12_4_;
    auVar133 = blendps(auVar133,auVar71,2);
    auVar93._8_4_ = auVar111._8_4_;
    auVar93._0_8_ = auVar111._0_8_;
    auVar93._12_4_ = auVar111._12_4_;
    auVar149 = auVar90;
  }
  local_3a8 = auVar179._0_4_;
  fStack_3a4 = auVar179._4_4_;
  fStack_3a0 = auVar179._8_4_;
  fStack_39c = auVar179._12_4_;
  local_3c8 = auVar100._0_4_;
  fStack_3c4 = auVar100._4_4_;
  fStack_3c0 = auVar100._8_4_;
  fStack_3bc = auVar100._12_4_;
  auVar101 = blendps(auVar101,auVar149,4);
  bVar56 = -1 < (char)bVar29;
  if (bVar56) {
    auVar90 = auVar101;
  }
  local_2c8 = auVar118._0_4_;
  fStack_2c4 = auVar118._4_4_;
  fStack_2c0 = auVar118._8_4_;
  fStack_2bc = auVar118._12_4_;
  auVar149 = blendps(auVar163,auVar187,4);
  if (bVar56) {
    auVar144 = auVar149;
  }
  auVar133 = blendps(auVar133,auVar93,4);
  if (bVar56) {
    auVar111 = auVar133;
  }
  fVar106 = (float)(~uVar58 & auVar132._0_4_) - (float)local_338._0_4_;
  fVar114 = (float)(~uVar46 & auVar132._4_4_) - (float)local_338._4_4_;
  fStack_330 = (float)(~uVar61 & auVar132._8_4_) - fStack_330;
  fStack_32c = (float)(~uVar63 & auVar132._12_4_) - fStack_32c;
  auVar66._4_4_ = -(uint)(0.0 <= fVar114);
  auVar66._0_4_ = -(uint)(0.0 <= fVar106);
  auVar66._8_4_ = -(uint)(0.0 <= fStack_330);
  auVar66._12_4_ = -(uint)(0.0 <= fStack_32c);
  auVar132 = blendvps(auVar152,_local_348,auVar66);
  fVar115 = auVar132._0_4_ * param_6 * param_6;
  fVar116 = auVar132._4_4_ * param_6 * param_6;
  fVar72 = auVar132._8_4_ * param_6 * param_6;
  param_6 = auVar132._12_4_ * param_6 * param_6;
  fVar78 = auVar126._0_4_;
  fVar79 = auVar126._4_4_;
  fVar80 = auVar126._8_4_;
  fVar142 = auVar126._12_4_;
  auVar153._0_4_ =
       (float)((uint)fVar115 ^ __xmm_80000000800000008000000080000000) * fVar106 - auVar91._0_4_;
  auVar153._4_4_ = (float)((uint)fVar116 ^ _UNK_150651574) * fVar114 - auVar91._4_4_;
  auVar153._8_4_ = (float)((uint)fVar72 ^ _UNK_150651578) * fStack_330 - auVar91._8_4_;
  auVar153._12_4_ = (float)((uint)param_6 ^ _UNK_15065157c) * fStack_32c - auVar91._12_4_;
  auVar164._0_4_ =
       (((fVar162 * local_3a8 - fVar99 * local_3c8) - fVar117 * local_2c8) + fVar78) * fVar115 +
       ___xmm_3f8000003f8000003f8000003f800000;
  auVar164._4_4_ =
       (((fVar167 * fStack_3a4 - fVar104 * fStack_3c4) - fVar122 * fStack_2c4) + fVar79) * fVar116 +
       _UNK_15076b1f4;
  auVar164._8_4_ =
       (((fVar169 * fStack_3a0 - fVar84 * fStack_3c0) - fVar85 * fStack_2c0) + fVar80) * fVar72 +
       _UNK_15076b1f8;
  auVar164._12_4_ =
       (((fVar171 * fStack_39c - fVar105 * fStack_3bc) - fVar123 * fStack_2bc) + fVar142) * param_6
       + _UNK_15076b1fc;
  auVar132 = divps(auVar153,auVar164);
  fVar106 = auVar132._0_4_;
  auVar103._0_4_ = auVar91._0_4_ + fVar106;
  fVar114 = auVar132._4_4_;
  auVar103._4_4_ = auVar91._4_4_ + fVar114;
  fVar115 = auVar132._8_4_;
  auVar103._8_4_ = auVar91._8_4_ + fVar115;
  fVar116 = auVar132._12_4_;
  auVar103._12_4_ = auVar91._12_4_ + fVar116;
  if ((bVar29 & 1) != 0) {
    *pfVar1 = auVar103._0_4_;
  }
  if ((bVar29 & 2) == 0) {
    auVar90 = blendps(auVar101,auVar90,8);
  }
  else {
    uVar17 = extractps(auVar103,1);
    *(undefined8 *)(pfVar1 + 1) = uVar17;
    auVar90 = blendps(auVar101,auVar90,8);
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar103,2);
    *(undefined8 *)(pfVar1 + 2) = uVar17;
  }
  fVar162 = auVar90._0_4_ * fVar106;
  fVar167 = auVar90._4_4_ * fVar114;
  fVar169 = auVar90._8_4_ * fVar115;
  fVar171 = auVar90._12_4_ * fVar116;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar103,3);
    *(undefined8 *)(pfVar1 + 3) = uVar17;
  }
  auVar77._0_4_ = local_328 + fVar78 * fVar162;
  auVar77._4_4_ = fStack_324 + fVar79 * fVar167;
  auVar77._8_4_ = fStack_320 + fVar80 * fVar169;
  auVar77._12_4_ = fStack_31c + fVar142 * fVar171;
  if ((bVar29 & 1) == 0) {
    auVar90 = blendps(auVar149,auVar144,8);
  }
  else {
    *(float *)(param_1 + auVar150._0_4_) = auVar77._0_4_;
    auVar90 = blendps(auVar149,auVar144,8);
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + auVar150._4_4_) = uVar17;
  }
  fVar148 = (float)auVar90._12_4_ * fVar116;
  fVar147 = (float)auVar90._8_4_ * fVar115;
  fVar146 = (float)auVar90._4_4_ * fVar114;
  fVar72 = auVar90._0_4_ * fVar106;
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + auVar150._12_4_) = uVar17;
  }
  local_318 = local_318 + fVar78 * fVar72;
  fStack_314 = fStack_314 + fVar79 * fVar146;
  auVar67._4_4_ = fStack_314;
  auVar67._0_4_ = local_318;
  fStack_310 = fStack_310 + fVar80 * fVar147;
  fStack_30c = fStack_30c + fVar142 * fVar148;
  auVar67._8_4_ = fStack_310;
  auVar67._12_4_ = fStack_30c;
  if ((bVar29 & 1) == 0) {
    auVar90 = blendps(auVar133,auVar111,8);
  }
  else {
    *(float *)(param_1 + 4 + (longlong)auVar150._0_4_) = local_318;
    auVar90 = blendps(auVar133,auVar111,8);
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar67,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._4_4_) = uVar17;
  }
  fVar116 = fVar116 * (float)auVar90._12_4_;
  fVar115 = fVar115 * (float)auVar90._8_4_;
  fVar114 = fVar114 * (float)auVar90._4_4_;
  fVar106 = fVar106 * (float)auVar90._0_4_;
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar67,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._8_4_) = uVar17;
  }
  auVar112._4_4_ = fStack_314;
  auVar112._0_4_ = local_318;
  auVar112._8_4_ = fStack_310;
  auVar112._12_4_ = fStack_30c;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._12_4_) = uVar17;
    auVar138._0_4_ = local_398 + fVar78 * fVar106;
    auVar138._4_4_ = fStack_394 + fVar79 * fVar114;
    auVar138._8_4_ = fStack_390 + fVar80 * fVar115;
    auVar138._12_4_ = fStack_38c + fVar142 * fVar116;
  }
  else {
    auVar138._0_4_ = local_398 + fVar78 * fVar106;
    auVar138._4_4_ = fStack_394 + fVar79 * fVar114;
    auVar138._8_4_ = fStack_390 + fVar80 * fVar115;
    auVar138._12_4_ = fStack_38c + fVar142 * fVar116;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar150._0_4_) = auVar138._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar138,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar138,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar138,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar150._0_4_) = fVar78;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._12_4_) = uVar17;
  }
  auVar165._0_4_ = (float)local_368._0_4_ + local_3a8 * fVar162 * fVar160;
  auVar165._4_4_ = (float)local_368._4_4_ + fStack_3a4 * fVar167 * fVar172;
  auVar165._8_4_ = fStack_360 + fStack_3a0 * fVar169 * fVar175;
  auVar165._12_4_ = fStack_35c + fStack_39c * fVar171 * fVar176;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar136._0_4_) = auVar165._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar165,1);
    *(undefined8 *)(param_1 + auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar165,2);
    *(undefined8 *)(param_1 + auVar136._8_4_) = uVar17;
  }
  uVar25 = fStack_39c * fVar148 * fVar176;
  uVar24 = fStack_3a0 * fVar147 * fVar175;
  uVar23 = fStack_3a4 * fVar146 * fVar172;
  uVar22 = local_3a8 * fVar72 * fVar160;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar165,3);
    *(undefined8 *)(param_1 + auVar136._12_4_) = uVar17;
    auVar94._0_4_ = (float)local_388._0_4_ + (float)uVar22;
    auVar94._4_4_ = (float)local_388._4_4_ + (float)uVar23;
    auVar94._8_4_ = fStack_380 + (float)uVar24;
    auVar94._12_4_ = fStack_37c + (float)uVar25;
  }
  else {
    auVar94._0_4_ = (float)local_388._0_4_ + (float)uVar22;
    auVar94._4_4_ = (float)local_388._4_4_ + (float)uVar23;
    auVar94._8_4_ = fStack_380 + (float)uVar24;
    auVar94._12_4_ = fStack_37c + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar136._0_4_) = auVar94._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._8_4_) = uVar17;
  }
  uVar25 = fVar176 * fStack_39c * fVar116;
  uVar24 = fVar175 * fStack_3a0 * fVar115;
  uVar23 = fVar172 * fStack_3a4 * fVar114;
  uVar22 = fVar160 * local_3a8 * fVar106;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._12_4_) = uVar17;
    auVar145._0_4_ = local_378 + (float)uVar22;
    auVar145._4_4_ = fStack_374 + (float)uVar23;
    auVar145._8_4_ = fStack_370 + (float)uVar24;
    auVar145._12_4_ = fStack_36c + (float)uVar25;
  }
  else {
    auVar145._0_4_ = local_378 + (float)uVar22;
    auVar145._4_4_ = fStack_374 + (float)uVar23;
    auVar145._8_4_ = fStack_370 + (float)uVar24;
    auVar145._12_4_ = fStack_36c + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar136._0_4_) = auVar145._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar145,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar145,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar145,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar136._0_4_) = local_3a8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar179,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar179,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar179,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._12_4_) = uVar17;
  }
  auVar139._0_4_ = local_2e8 + local_3c8 * fVar162 * fVar99;
  auVar139._4_4_ = fStack_2e4 + fStack_3c4 * fVar167 * fVar104;
  auVar139._8_4_ = fStack_2e0 + fStack_3c0 * fVar169 * fVar84;
  auVar139._12_4_ = fStack_2dc + fStack_3bc * fVar171 * fVar105;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar128._0_4_) = auVar139._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar139,1);
    *(undefined8 *)(param_1 + auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar139,2);
    *(undefined8 *)(param_1 + auVar128._8_4_) = uVar17;
  }
  uVar25 = fStack_3bc * fVar148 * fVar105;
  uVar24 = fStack_3c0 * fVar147 * fVar84;
  uVar23 = fStack_3c4 * fVar146 * fVar104;
  uVar22 = local_3c8 * fVar72 * fVar99;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar139,3);
    *(undefined8 *)(param_1 + auVar128._12_4_) = uVar17;
    auVar113._0_4_ = local_2d8 + (float)uVar22;
    auVar113._4_4_ = fStack_2d4 + (float)uVar23;
    auVar113._8_4_ = fStack_2d0 + (float)uVar24;
    auVar113._12_4_ = fStack_2cc + (float)uVar25;
  }
  else {
    auVar113._0_4_ = local_2d8 + (float)uVar22;
    auVar113._4_4_ = fStack_2d4 + (float)uVar23;
    auVar113._8_4_ = fStack_2d0 + (float)uVar24;
    auVar113._12_4_ = fStack_2cc + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar128._0_4_) = auVar113._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar113,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar113,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._8_4_) = uVar17;
  }
  uVar25 = fVar105 * fStack_3bc * fVar116;
  uVar24 = fVar84 * fStack_3c0 * fVar115;
  uVar23 = fVar104 * fStack_3c4 * fVar114;
  uVar22 = fVar99 * local_3c8 * fVar106;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar113,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._12_4_) = uVar17;
    auVar95._0_4_ = fVar177 + (float)uVar22;
    auVar95._4_4_ = fVar189 + (float)uVar23;
    auVar95._8_4_ = fVar191 + (float)uVar24;
    auVar95._12_4_ = fVar193 + (float)uVar25;
  }
  else {
    auVar95._0_4_ = fVar177 + (float)uVar22;
    auVar95._4_4_ = fVar189 + (float)uVar23;
    auVar95._8_4_ = fVar191 + (float)uVar24;
    auVar95._12_4_ = fVar193 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar128._0_4_) = auVar95._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar128._0_4_) = local_3c8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._12_4_) = uVar17;
  }
  auVar68._0_4_ = auVar119._0_4_ + fVar162 * local_2c8 * fVar117;
  auVar68._4_4_ = auVar119._4_4_ + fVar167 * fStack_2c4 * fVar122;
  auVar68._8_4_ = auVar119._8_4_ + fVar169 * fStack_2c0 * fVar85;
  auVar68._12_4_ = auVar119._12_4_ + fVar171 * fStack_2bc * fVar123;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar109._0_4_) = auVar68._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar68,1);
    *(undefined8 *)(param_1 + auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar68,2);
    *(undefined8 *)(param_1 + auVar109._8_4_) = uVar17;
  }
  uVar25 = fVar148 * fStack_2bc * fVar123;
  uVar24 = fVar147 * fStack_2c0 * fVar85;
  uVar23 = fVar146 * fStack_2c4 * fVar122;
  uVar22 = fVar72 * local_2c8 * fVar117;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar68,3);
    *(undefined8 *)(param_1 + auVar109._12_4_) = uVar17;
    auVar69._0_4_ = fVar124 + (float)uVar22;
    auVar69._4_4_ = fVar130 + (float)uVar23;
    auVar69._8_4_ = fVar140 + (float)uVar24;
    auVar69._12_4_ = fVar141 + (float)uVar25;
  }
  else {
    auVar69._0_4_ = fVar124 + (float)uVar22;
    auVar69._4_4_ = fVar130 + (float)uVar23;
    auVar69._8_4_ = fVar140 + (float)uVar24;
    auVar69._12_4_ = fVar141 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar109._0_4_) = auVar69._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar69,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar69,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._8_4_) = uVar17;
  }
  uVar25 = fVar123 * fVar116 * fStack_2bc;
  uVar24 = fVar85 * fVar115 * fStack_2c0;
  uVar23 = fVar122 * fVar114 * fStack_2c4;
  uVar22 = fVar117 * fVar106 * local_2c8;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar69,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._12_4_) = uVar17;
    auVar70._0_4_ = fVar86 + (float)uVar22;
    auVar70._4_4_ = fVar96 + (float)uVar23;
    auVar70._8_4_ = fVar97 + (float)uVar24;
    auVar70._12_4_ = fVar98 + (float)uVar25;
  }
  else {
    auVar70._0_4_ = fVar86 + (float)uVar22;
    auVar70._4_4_ = fVar96 + (float)uVar23;
    auVar70._8_4_ = fVar97 + (float)uVar24;
    auVar70._12_4_ = fVar98 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar109._0_4_) = auVar70._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar70,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar70,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar70,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar109._0_4_) = local_2c8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._12_4_) = uVar17;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408e91a0

/* WARNING: Removing unreachable block (ram,0x0001408ea639) */
/* WARNING: Removing unreachable block (ram,0x0001408ebe38) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,byte param_8,float *param_9,longlong param_10,
               byte param_11,float *param_12,longlong param_13,byte param_14,float *param_15,
               longlong param_16,uint param_17)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  uint *puVar28;
  byte bVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  byte bVar38;
  longlong lVar39;
  longlong lVar40;
  undefined1 (*pauVar41) [16];
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  uint uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  bool bVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  float fVar81;
  float fVar82;
  undefined1 auVar70 [16];
  float fVar83;
  float fVar84;
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
  float fVar85;
  float fVar86;
  float fVar96;
  float fVar98;
  float fVar100;
  undefined1 auVar87 [16];
  float fVar97;
  float fVar99;
  float fVar101;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar102;
  int iVar103;
  float fVar105;
  float fVar106;
  undefined1 auVar104 [16];
  int iVar112;
  undefined1 auVar107 [16];
  int iVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar140;
  float fVar141;
  float fVar145;
  float fVar147;
  undefined1 unaff_XMM7 [16];
  float fVar146;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar153;
  int iVar154;
  float fVar160;
  float fVar161;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar162;
  undefined1 auVar157 [16];
  undefined1 auVar159 [16];
  float fVar168;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar169;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float fVar177;
  float fVar185;
  float fVar187;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  float fVar188;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar190;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  float fVar200;
  float fVar201;
  float fVar205;
  float fVar207;
  undefined1 auVar202 [16];
  float fVar208;
  undefined1 auVar203 [16];
  float fVar206;
  undefined1 auVar204 [16];
  float fVar209;
  float fVar215;
  float fVar216;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar217;
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  float fVar225;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  float fVar226;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 local_498 [8];
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3b8 [16];
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  undefined1 local_318 [8];
  float fStack_310;
  float fStack_30c;
  ulonglong local_308;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  float local_288;
  float fStack_284;
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
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar158 [16];
  float fVar186;
  undefined1 auVar194 [16];
  
  uVar62 = param_17 + 3;
  if (-1 < (int)param_17) {
    uVar62 = param_17;
  }
  if ((int)(uVar62 & 0xfffffffc) < 1) {
    uVar33 = 0;
  }
  else {
    uVar33 = 0;
    uVar34 = 0;
    do {
      uVar37 = uVar34 & 0xffffffff;
      fStack_32c = *param_9;
      local_338._0_4_ = fStack_32c;
      local_338._4_4_ = fStack_32c;
      fStack_330 = fStack_32c;
      if ((param_8 & 1) != 0) {
        pfVar1 = (float *)(param_10 + uVar37);
        fVar69 = param_9[1];
        local_338._0_4_ = fStack_32c + fVar69 * *pfVar1;
        local_338._4_4_ = fStack_32c + fVar69 * pfVar1[1];
        fStack_330 = fStack_32c + fVar69 * pfVar1[2];
        fStack_32c = fStack_32c + fVar69 * pfVar1[3];
      }
      fStack_37c = *param_12;
      local_388._0_4_ = fStack_37c;
      local_388._4_4_ = fStack_37c;
      fStack_380 = fStack_37c;
      if ((param_11 & 1) != 0) {
        pfVar1 = (float *)(param_13 + uVar37);
        fVar69 = param_12[1];
        local_388._0_4_ = fStack_37c + fVar69 * *pfVar1;
        local_388._4_4_ = fStack_37c + fVar69 * pfVar1[1];
        fStack_380 = fStack_37c + fVar69 * pfVar1[2];
        fStack_37c = fStack_37c + fVar69 * pfVar1[3];
      }
      piVar2 = (int *)(param_3 + uVar34 * 4);
      piVar3 = (int *)(param_3 + 0x10 + uVar34 * 4);
      piVar4 = (int *)(param_3 + 0x20 + uVar34 * 4);
      piVar5 = (int *)(param_3 + 0x30 + uVar34 * 4);
      lVar31 = param_4 + uVar34 * 4;
      fVar86 = *(float *)(lVar31 + 4);
      fVar97 = *(float *)(lVar31 + 8);
      fVar99 = *(float *)(lVar31 + 0xc);
      auVar210 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar34 * 4);
      fVar83 = auVar210._12_4_;
      lVar31 = param_4 + 0x20 + uVar34 * 4;
      fVar101 = *(float *)(lVar31 + 4);
      fVar177 = *(float *)(lVar31 + 8);
      fVar185 = *(float *)(lVar31 + 0xc);
      lVar31 = param_4 + 0x30 + uVar34 * 4;
      fVar187 = *(float *)(lVar31 + 4);
      fVar188 = *(float *)(lVar31 + 8);
      fVar196 = *(float *)(lVar31 + 0xc);
      fVar225 = auVar210._4_4_;
      fVar226 = auVar210._8_4_;
      lVar30 = (longlong)(piVar2[1] << 4);
      lVar35 = (longlong)(piVar3[1] * 0x10);
      lVar39 = (longlong)(piVar4[1] << 4);
      lVar44 = (longlong)(piVar5[1] << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + lVar35),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar39),0x20);
      auVar211 = insertps(auVar210,*(undefined4 *)(param_1 + lVar44),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar30)),
                          *(undefined4 *)(param_1 + 4 + lVar35),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar202 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar44),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar30)),
                          *(undefined4 *)(param_1 + 8 + lVar35),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar191 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar44),0x30);
      lVar31 = (longlong)(*piVar2 * 3);
      lVar56 = (longlong)(*piVar3 * 3);
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar56 * 4),0x10);
      auVar133 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar56 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar56 * 4),0x10);
      lVar57 = (longlong)(piVar2[2] << 4);
      lVar31 = (longlong)(*piVar4 * 3);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar40 = (longlong)(piVar3[2] * 0x10);
      lVar31 = (longlong)(*piVar5 * 3);
      auVar220 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar134 = insertps(auVar133,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar133 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      lVar32 = (longlong)(piVar4[2] << 4);
      lVar31 = (longlong)(piVar2[1] * 3);
      lVar50 = (longlong)(piVar5[2] << 4);
      lVar56 = (longlong)(piVar3[1] * 3);
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar56 * 4),0x10);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar56 * 4),0x10);
      auVar221 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar56 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar57)),*(undefined4 *)(param_1 + lVar40),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar126 = insertps(auVar210,*(undefined4 *)(param_1 + lVar50),0x30);
      fVar68 = (float)((uint)fVar86 ^ __xmm_80000000800000008000000080000000);
      fVar81 = (float)((uint)fVar225 ^ _UNK_150651574);
      fVar82 = (float)((uint)fVar101 ^ _UNK_150651578);
      fVar84 = (float)((uint)fVar187 ^ _UNK_15065157c);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar57)),
                          *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar115 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar50),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar57)),
                          *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar116 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar50),0x30);
      lVar31 = (longlong)(piVar4[1] * 3);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar221 = insertps(auVar221,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar53 = (longlong)(piVar2[3] << 4);
      lVar52 = (longlong)(piVar3[3] * 0x10);
      lVar56 = (longlong)(piVar4[3] << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar52),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar56),0x20);
      lVar45 = (longlong)(piVar5[3] << 4);
      auVar127 = insertps(auVar210,*(undefined4 *)(param_1 + lVar45),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar56),0x20);
      auVar117 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar45),0x30);
      fVar209 = (auVar211._0_4_ * fVar68 - fVar97 * auVar126._0_4_) - fVar99 * auVar127._0_4_;
      fVar215 = (auVar211._4_4_ * fVar81 - fVar226 * auVar126._4_4_) - fVar83 * auVar127._4_4_;
      fVar216 = (auVar211._8_4_ * fVar82 - fVar177 * auVar126._8_4_) - fVar185 * auVar127._8_4_;
      fVar217 = (auVar211._12_4_ * fVar84 - fVar188 * auVar126._12_4_) - fVar196 * auVar127._12_4_;
      auVar179._4_4_ = fVar83;
      auVar179._0_4_ = fVar99;
      auVar179._8_4_ = fVar185;
      auVar179._12_4_ = fVar196;
      lVar31 = (longlong)(piVar5[1] * 3);
      auVar170 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar181 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      fVar200 = (auVar202._0_4_ * fVar68 - fVar97 * auVar115._0_4_) - fVar99 * auVar117._0_4_;
      fVar205 = (auVar202._4_4_ * fVar81 - fVar226 * auVar115._4_4_) - fVar83 * auVar117._4_4_;
      fVar207 = (auVar202._8_4_ * fVar82 - fVar177 * auVar115._8_4_) - fVar185 * auVar117._8_4_;
      fVar208 = (auVar202._12_4_ * fVar84 - fVar188 * auVar115._12_4_) - fVar196 * auVar117._12_4_;
      auVar222 = insertps(auVar221,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar56),0x20);
      auVar118 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar45),0x30);
      lVar31 = (longlong)(piVar2[2] * 3);
      lVar58 = (longlong)(piVar3[2] * 3);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar58 * 4),0x10);
      fVar132 = (auVar191._0_4_ * fVar68 - fVar97 * auVar116._0_4_) - fVar99 * auVar118._0_4_;
      fVar136 = (auVar191._4_4_ * fVar81 - fVar226 * auVar116._4_4_) - fVar83 * auVar118._4_4_;
      fVar138 = (auVar191._8_4_ * fVar82 - fVar177 * auVar116._8_4_) - fVar185 * auVar118._8_4_;
      fVar140 = (auVar191._12_4_ * fVar84 - fVar188 * auVar116._12_4_) - fVar196 * auVar118._12_4_;
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar58 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar58 * 4),0x10);
      uVar48 = *(uint *)(param_1 + 0xc + lVar30);
      uVar65 = *(uint *)(param_1 + 0xc + lVar35);
      auVar221 = insertps(ZEXT416(uVar48),ZEXT416(uVar65),0x10);
      uVar67 = *(uint *)(param_1 + 0xc + lVar39);
      auVar221 = insertps(auVar221,ZEXT416(uVar67),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar44);
      auVar156 = insertps(auVar221,ZEXT416(uVar6),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar57);
      uVar8 = *(uint *)(param_1 + 0xc + lVar40);
      auVar221 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar32);
      auVar221 = insertps(auVar221,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar50);
      auVar221 = insertps(auVar221,ZEXT416(uVar10),0x30);
      fVar153 = auVar156._0_4_;
      fVar160 = auVar156._4_4_;
      fVar161 = auVar156._8_4_;
      fVar162 = auVar156._12_4_;
      fVar190 = auVar221._0_4_;
      fVar130 = auVar221._4_4_;
      fVar148 = auVar221._8_4_;
      fVar151 = auVar221._12_4_;
      lVar31 = (longlong)(piVar4[2] * 3);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar31 = (longlong)(piVar5[2] * 3);
      auVar156 = insertps(auVar180,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar221 = insertps(auVar219,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar219 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      uVar11 = *(uint *)(param_1 + 0xc + lVar53);
      uVar12 = *(uint *)(param_1 + 0xc + lVar52);
      auVar210 = insertps(ZEXT416(uVar11),ZEXT416(uVar12),0x10);
      uVar13 = *(uint *)(param_1 + 0xc + lVar56);
      auVar210 = insertps(auVar210,ZEXT416(uVar13),0x20);
      uVar14 = *(uint *)(param_1 + 0xc + lVar45);
      auVar210 = insertps(auVar210,ZEXT416(uVar14),0x30);
      fVar197 = auVar210._0_4_;
      fVar146 = auVar210._4_4_;
      fVar149 = auVar210._8_4_;
      fVar152 = auVar210._12_4_;
      lVar58 = (longlong)(piVar2[3] * 3);
      lVar31 = (longlong)(piVar3[3] * 3);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + lVar31 * 4),0x10);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar31 * 4),0x10);
      auVar163 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar31 * 4),0x10);
      lVar31 = (longlong)(piVar4[3] * 3);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar163 = insertps(auVar163,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar31 = (longlong)(piVar5[3] * 3);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar142 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar164 = insertps(auVar163,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      lVar49 = (longlong)(*piVar2 << 4);
      lVar58 = (longlong)(*piVar3 * 0x10);
      lVar31 = (longlong)(*piVar4 << 4);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar58),
                          0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + lVar31),0x20);
      lVar59 = (longlong)(*piVar5 << 4);
      auVar163 = insertps(auVar180,*(undefined4 *)(param_1 + lVar59),0x30);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar58),0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar192 = insertps(auVar180,*(undefined4 *)(param_1 + 4 + lVar59),0x30);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                          *(undefined4 *)(param_1 + 8 + lVar58),0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 8 + lVar59),0x30);
      uVar15 = *(uint *)(param_1 + 0xc + lVar49);
      uVar16 = *(uint *)(param_1 + 0xc + lVar58);
      auVar171 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
      uVar17 = *(uint *)(param_1 + 0xc + lVar31);
      auVar171 = insertps(auVar171,ZEXT416(uVar17),0x20);
      uVar18 = *(uint *)(param_1 + 0xc + lVar59);
      auVar171 = insertps(auVar171,ZEXT416(uVar18),0x30);
      fVar69 = *param_15;
      fVar168 = fVar69;
      fVar201 = fVar69;
      fVar206 = fVar69;
      if ((param_14 & 1) != 0) {
        pfVar1 = (float *)(param_16 + uVar37);
        fVar85 = param_15[1];
        fVar168 = fVar69 + fVar85 * pfVar1[1];
        fVar201 = fVar69 + fVar85 * pfVar1[2];
        fVar206 = fVar69 + fVar85 * pfVar1[3];
        fVar69 = fVar69 + fVar85 * *pfVar1;
      }
      fVar131 = auVar163._0_4_;
      fVar135 = auVar163._4_4_;
      fVar137 = auVar163._8_4_;
      fVar139 = auVar163._12_4_;
      auVar218._0_4_ = fVar131 - fVar209;
      auVar218._4_4_ = fVar135 - fVar215;
      auVar218._8_4_ = fVar137 - fVar216;
      auVar218._12_4_ = fVar139 - fVar217;
      fVar189 = auVar192._0_4_;
      fVar195 = auVar192._4_4_;
      fVar198 = auVar192._8_4_;
      fVar199 = auVar192._12_4_;
      auVar107._0_4_ = fVar189 - fVar200;
      auVar107._4_4_ = fVar195 - fVar205;
      auVar107._8_4_ = fVar198 - fVar207;
      auVar107._12_4_ = fVar199 - fVar208;
      fVar102 = auVar180._0_4_;
      fVar105 = auVar180._4_4_;
      fVar106 = auVar180._12_4_;
      auVar178._0_4_ = fVar102 - fVar132;
      auVar178._4_4_ = fVar105 - fVar136;
      fVar186 = auVar180._8_4_;
      auVar178._8_4_ = fVar186 - fVar138;
      auVar178._12_4_ = fVar106 - fVar140;
      auVar180._0_4_ =
           auVar178._0_4_ * auVar178._0_4_ +
           auVar107._0_4_ * auVar107._0_4_ + auVar218._0_4_ * auVar218._0_4_;
      auVar180._4_4_ =
           auVar178._4_4_ * auVar178._4_4_ +
           auVar107._4_4_ * auVar107._4_4_ + auVar218._4_4_ * auVar218._4_4_;
      auVar180._8_4_ =
           auVar178._8_4_ * auVar178._8_4_ +
           auVar107._8_4_ * auVar107._8_4_ + auVar218._8_4_ * auVar218._8_4_;
      auVar180._12_4_ =
           auVar178._12_4_ * auVar178._12_4_ +
           auVar107._12_4_ * auVar107._12_4_ + auVar218._12_4_ * auVar218._12_4_;
      unaff_XMM14 = sqrtps(auVar179,auVar180);
      uVar61 = -(uint)(auVar180._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar63 = -(uint)(auVar180._4_4_ < _UNK_1506895e4);
      uVar64 = -(uint)(auVar180._8_4_ < _UNK_1506895e8);
      uVar66 = -(uint)(auVar180._12_4_ < _UNK_1506895ec);
      auVar163._4_4_ = uVar63;
      auVar163._0_4_ = uVar61;
      auVar163._8_4_ = uVar64;
      auVar163._12_4_ = uVar66;
      auVar180 = divps(auVar218,unaff_XMM14);
      auVar218 = blendvps(auVar180,___xmm_3f8000003f8000003f8000003f800000,auVar163);
      auVar180 = *(undefined1 (*) [16])(param_5 + uVar37);
      auVar70._4_4_ = -(uint)(0.0 <= (float)(~uVar63 & unaff_XMM14._4_4_) - auVar180._4_4_);
      auVar70._0_4_ = -(uint)(0.0 <= (float)(~uVar61 & unaff_XMM14._0_4_) - auVar180._0_4_);
      auVar163 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar180);
      auVar192._4_4_ = -(uint)(auVar180._4_4_ < _UNK_1506895d4);
      auVar192._0_4_ = -(uint)(auVar180._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar192._8_4_ = -(uint)(auVar180._8_4_ < _UNK_1506895d8);
      auVar192._12_4_ = -(uint)(auVar180._12_4_ < _UNK_1506895dc);
      auVar192 = blendvps(auVar163,___xmm_3f8000003f8000003f8000003f800000,auVar192);
      auVar70._8_4_ = -(uint)(0.0 <= (float)(~uVar64 & unaff_XMM14._8_4_) - auVar180._8_4_);
      auVar70._12_4_ = -(uint)(0.0 <= (float)(~uVar66 & unaff_XMM14._12_4_) - auVar180._12_4_);
      auVar180 = blendvps(_local_388,_local_338,auVar70);
      auVar163 = divps(auVar107,unaff_XMM14);
      auVar179 = divps(auVar178,unaff_XMM14);
      fVar114 = (float)(~uVar61 & auVar163._0_4_);
      fVar123 = (float)(~uVar63 & auVar163._4_4_);
      fVar124 = (float)(~uVar64 & auVar163._8_4_);
      fVar125 = (float)(~uVar66 & auVar163._12_4_);
      fVar141 = (float)(~uVar61 & auVar179._0_4_);
      fVar145 = (float)(~uVar63 & auVar179._4_4_);
      fVar147 = (float)(~uVar64 & auVar179._8_4_);
      fVar150 = (float)(~uVar66 & auVar179._12_4_);
      fVar169 = auVar171._0_4_;
      auVar155._0_4_ = ((fVar153 * fVar68 - fVar97 * fVar190) - fVar99 * fVar197) + fVar169;
      fVar174 = auVar171._4_4_;
      auVar155._4_4_ = ((fVar160 * fVar81 - fVar226 * fVar130) - fVar83 * fVar146) + fVar174;
      fVar175 = auVar171._8_4_;
      auVar155._8_4_ = ((fVar161 * fVar82 - fVar177 * fVar148) - fVar185 * fVar149) + fVar175;
      fVar176 = auVar171._12_4_;
      auVar155._12_4_ = ((fVar162 * fVar84 - fVar188 * fVar151) - fVar196 * fVar152) + fVar176;
      auVar180 = divps(auVar180,auVar155);
      auVar180 = sqrtps(auVar180,auVar180);
      local_108 = auVar220._0_4_;
      fStack_104 = auVar220._4_4_;
      fStack_100 = auVar220._8_4_;
      fStack_fc = auVar220._12_4_;
      local_f8 = auVar134._0_4_;
      fStack_f4 = auVar134._4_4_;
      fStack_f0 = auVar134._8_4_;
      fStack_ec = auVar134._12_4_;
      local_238 = auVar133._0_4_;
      fStack_234 = auVar133._4_4_;
      fStack_230 = auVar133._8_4_;
      fStack_22c = auVar133._12_4_;
      fVar85 = auVar180._0_4_ * (fVar69 + fVar69) * auVar192._0_4_ * param_7;
      fVar96 = auVar180._4_4_ * (fVar168 + fVar168) * auVar192._4_4_ * param_7;
      fVar98 = auVar180._8_4_ * (fVar201 + fVar201) * auVar192._8_4_ * param_7;
      fVar100 = auVar180._12_4_ * (fVar206 + fVar206) * auVar192._12_4_ * param_7;
      pfVar1 = (float *)(param_6 + uVar37);
      fVar69 = *pfVar1;
      fVar168 = pfVar1[1];
      fVar201 = pfVar1[2];
      fVar206 = pfVar1[3];
      auVar133._0_4_ =
           ((((fVar102 - local_238) - fVar132) +
            ((auVar222._0_4_ * fVar68 - auVar219._0_4_ * fVar97) - auVar164._0_4_ * fVar99)) *
            fVar141 +
           (((fVar189 - local_f8) - fVar200) +
           ((auVar181._0_4_ * fVar68 - auVar221._0_4_ * fVar97) - auVar142._0_4_ * fVar99)) *
           fVar114 + (((fVar131 - local_108) - fVar209) +
                     ((auVar170._0_4_ * fVar68 - auVar156._0_4_ * fVar97) - auVar210._0_4_ * fVar99)
                     ) * auVar218._0_4_) *
           (float)((uint)fVar85 ^ __xmm_80000000800000008000000080000000) - fVar69;
      auVar133._4_4_ =
           ((((fVar105 - fStack_234) - fVar136) +
            ((auVar222._4_4_ * fVar81 - auVar219._4_4_ * fVar226) - auVar164._4_4_ * fVar83)) *
            fVar145 +
           (((fVar195 - fStack_f4) - fVar205) +
           ((auVar181._4_4_ * fVar81 - auVar221._4_4_ * fVar226) - auVar142._4_4_ * fVar83)) *
           fVar123 + (((fVar135 - fStack_104) - fVar215) +
                     ((auVar170._4_4_ * fVar81 - auVar156._4_4_ * fVar226) - auVar210._4_4_ * fVar83
                     )) * auVar218._4_4_) * (float)((uint)fVar96 ^ _UNK_150651574) - fVar168;
      auVar133._8_4_ =
           ((((fVar186 - fStack_230) - fVar138) +
            ((auVar222._8_4_ * fVar82 - auVar219._8_4_ * fVar177) - auVar164._8_4_ * fVar185)) *
            fVar147 +
           (((fVar198 - fStack_f0) - fVar207) +
           ((auVar181._8_4_ * fVar82 - auVar221._8_4_ * fVar177) - auVar142._8_4_ * fVar185)) *
           fVar124 + (((fVar137 - fStack_100) - fVar216) +
                     ((auVar170._8_4_ * fVar82 - auVar156._8_4_ * fVar177) -
                     auVar210._8_4_ * fVar185)) * auVar218._8_4_) *
           (float)((uint)fVar98 ^ _UNK_150651578) - fVar201;
      auVar133._12_4_ =
           ((((fVar106 - fStack_22c) - fVar140) +
            ((auVar222._12_4_ * fVar84 - auVar219._12_4_ * fVar188) - auVar164._12_4_ * fVar196)) *
            fVar150 +
           (((fVar199 - fStack_ec) - fVar208) +
           ((auVar181._12_4_ * fVar84 - auVar221._12_4_ * fVar188) - auVar142._12_4_ * fVar196)) *
           fVar125 + (((fVar139 - fStack_fc) - fVar217) +
                     ((auVar170._12_4_ * fVar84 - auVar156._12_4_ * fVar188) -
                     auVar210._12_4_ * fVar196)) * auVar218._12_4_) *
           (float)((uint)fVar100 ^ _UNK_15065157c) - fVar206;
      auVar171._0_4_ = auVar155._0_4_ * fVar85 + (float)__xmm_3f8000003f8000003f8000003f800000;
      auVar171._4_4_ = auVar155._4_4_ * fVar96 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
      auVar171._8_4_ = auVar155._8_4_ * fVar98 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
      auVar171._12_4_ = auVar155._12_4_ * fVar100 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
      auVar210 = divps(auVar133,auVar171);
      fVar68 = auVar210._0_4_;
      fVar132 = auVar218._0_4_ * fVar68;
      fVar81 = auVar210._4_4_;
      fVar136 = auVar218._4_4_ * fVar81;
      fVar82 = auVar210._8_4_;
      fVar138 = auVar218._8_4_ * fVar82;
      fVar84 = auVar210._12_4_;
      fVar140 = auVar218._12_4_ * fVar84;
      auVar210._0_4_ = fVar169 * fVar132 + fVar131;
      auVar210._4_4_ = fVar174 * fVar136 + fVar135;
      auVar210._8_4_ = fVar175 * fVar138 + fVar137;
      auVar210._12_4_ = fVar176 * fVar140 + fVar139;
      fVar114 = fVar114 * fVar68;
      fVar123 = fVar123 * fVar81;
      fVar124 = fVar124 * fVar82;
      fVar125 = fVar125 * fVar84;
      *(float *)(param_1 + lVar49) = auVar210._0_4_;
      uVar19 = extractps(auVar210,1);
      *(undefined8 *)(param_1 + lVar58) = uVar19;
      auVar156._0_4_ = fVar169 * fVar114 + fVar189;
      auVar156._4_4_ = fVar174 * fVar123 + fVar195;
      auVar156._8_4_ = fVar175 * fVar124 + fVar198;
      auVar156._12_4_ = fVar176 * fVar125 + fVar199;
      uVar19 = extractps(auVar210,2);
      *(undefined8 *)(param_1 + lVar31) = uVar19;
      uVar19 = extractps(auVar210,3);
      *(undefined8 *)(param_1 + lVar59) = uVar19;
      fVar141 = fVar141 * fVar68;
      fVar145 = fVar145 * fVar81;
      fVar147 = fVar147 * fVar82;
      fVar150 = fVar150 * fVar84;
      *(float *)(param_1 + 4 + lVar49) = auVar156._0_4_;
      uVar19 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 4 + lVar58) = uVar19;
      uVar19 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar19;
      auVar181._0_4_ = fVar169 * fVar141 + fVar102;
      auVar181._4_4_ = fVar174 * fVar145 + fVar105;
      auVar181._8_4_ = fVar175 * fVar147 + fVar186;
      auVar181._12_4_ = fVar176 * fVar150 + fVar106;
      uVar19 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 4 + lVar59) = uVar19;
      *(float *)(param_1 + 8 + lVar49) = auVar181._0_4_;
      uVar19 = extractps(auVar181,1);
      *(undefined8 *)(param_1 + 8 + lVar58) = uVar19;
      uVar19 = extractps(auVar181,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar19;
      uVar19 = extractps(auVar181,3);
      *(undefined8 *)(param_1 + 8 + lVar59) = uVar19;
      *(uint *)(param_1 + 0xc + lVar49) = uVar15;
      *(uint *)(param_1 + 0xc + lVar58) = uVar16;
      *(uint *)(param_1 + 0xc + lVar31) = uVar17;
      *(uint *)(param_1 + 0xc + lVar59) = uVar18;
      auVar164._0_4_ = auVar211._0_4_ + fVar153 * fVar132 * fVar86;
      auVar164._4_4_ = auVar211._4_4_ + fVar160 * fVar136 * fVar225;
      auVar164._8_4_ = auVar211._8_4_ + fVar161 * fVar138 * fVar101;
      auVar164._12_4_ = auVar211._12_4_ + fVar162 * fVar140 * fVar187;
      *(float *)(param_1 + lVar30) = auVar164._0_4_;
      uVar19 = extractps(auVar164,1);
      *(undefined8 *)(param_1 + lVar35) = uVar19;
      auVar134._0_4_ = auVar202._0_4_ + fVar153 * fVar114 * fVar86;
      auVar134._4_4_ = auVar202._4_4_ + fVar160 * fVar123 * fVar225;
      auVar134._8_4_ = auVar202._8_4_ + fVar161 * fVar124 * fVar101;
      auVar134._12_4_ = auVar202._12_4_ + fVar162 * fVar125 * fVar187;
      uVar19 = extractps(auVar164,2);
      *(undefined8 *)(param_1 + lVar39) = uVar19;
      uVar19 = extractps(auVar164,3);
      *(undefined8 *)(param_1 + lVar44) = uVar19;
      *(float *)(param_1 + 4 + lVar30) = auVar134._0_4_;
      uVar19 = extractps(auVar134,1);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar19;
      uVar19 = extractps(auVar134,2);
      *(undefined8 *)(param_1 + 4 + lVar39) = uVar19;
      auVar219._0_4_ = auVar191._0_4_ + fVar153 * fVar141 * fVar86;
      auVar219._4_4_ = auVar191._4_4_ + fVar160 * fVar145 * fVar225;
      auVar219._8_4_ = auVar191._8_4_ + fVar161 * fVar147 * fVar101;
      auVar219._12_4_ = auVar191._12_4_ + fVar162 * fVar150 * fVar187;
      uVar19 = extractps(auVar134,3);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar19;
      *(float *)(param_1 + 8 + lVar30) = auVar219._0_4_;
      uVar19 = extractps(auVar219,1);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar19;
      uVar19 = extractps(auVar219,2);
      *(undefined8 *)(param_1 + 8 + lVar39) = uVar19;
      uVar19 = extractps(auVar219,3);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar19;
      *(uint *)(param_1 + 0xc + lVar30) = uVar48;
      *(uint *)(param_1 + 0xc + lVar35) = uVar65;
      *(uint *)(param_1 + 0xc + lVar39) = uVar67;
      *(uint *)(param_1 + 0xc + lVar44) = uVar6;
      auVar142._0_4_ = auVar126._0_4_ + fVar190 * fVar132 * fVar97;
      auVar142._4_4_ = auVar126._4_4_ + fVar130 * fVar136 * fVar226;
      auVar142._8_4_ = auVar126._8_4_ + fVar148 * fVar138 * fVar177;
      auVar142._12_4_ = auVar126._12_4_ + fVar151 * fVar140 * fVar188;
      *(float *)(param_1 + lVar57) = auVar142._0_4_;
      uVar19 = extractps(auVar142,1);
      *(undefined8 *)(param_1 + lVar40) = uVar19;
      auVar170._0_4_ = auVar115._0_4_ + fVar190 * fVar114 * fVar97;
      auVar170._4_4_ = auVar115._4_4_ + fVar130 * fVar123 * fVar226;
      auVar170._8_4_ = auVar115._8_4_ + fVar148 * fVar124 * fVar177;
      auVar170._12_4_ = auVar115._12_4_ + fVar151 * fVar125 * fVar188;
      uVar19 = extractps(auVar142,2);
      *(undefined8 *)(param_1 + lVar32) = uVar19;
      uVar19 = extractps(auVar142,3);
      *(undefined8 *)(param_1 + lVar50) = uVar19;
      *(float *)(param_1 + 4 + lVar57) = auVar170._0_4_;
      uVar19 = extractps(auVar170,1);
      *(undefined8 *)(param_1 + 4 + lVar40) = uVar19;
      uVar19 = extractps(auVar170,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar19;
      auVar221._0_4_ = auVar116._0_4_ + fVar190 * fVar141 * fVar97;
      auVar221._4_4_ = auVar116._4_4_ + fVar130 * fVar145 * fVar226;
      auVar221._8_4_ = auVar116._8_4_ + fVar148 * fVar147 * fVar177;
      auVar221._12_4_ = auVar116._12_4_ + fVar151 * fVar150 * fVar188;
      uVar19 = extractps(auVar170,3);
      *(undefined8 *)(param_1 + 4 + lVar50) = uVar19;
      *(float *)(param_1 + 8 + lVar57) = auVar221._0_4_;
      uVar19 = extractps(auVar221,1);
      *(undefined8 *)(param_1 + 8 + lVar40) = uVar19;
      uVar19 = extractps(auVar221,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar19;
      uVar19 = extractps(auVar221,3);
      *(undefined8 *)(param_1 + 8 + lVar50) = uVar19;
      *(uint *)(param_1 + 0xc + lVar57) = uVar7;
      *(uint *)(param_1 + 0xc + lVar40) = uVar8;
      *(uint *)(param_1 + 0xc + lVar32) = uVar9;
      *(uint *)(param_1 + 0xc + lVar50) = uVar10;
      auVar126._0_4_ = auVar127._0_4_ + fVar132 * fVar197 * fVar99;
      auVar126._4_4_ = auVar127._4_4_ + fVar136 * fVar146 * fVar83;
      auVar126._8_4_ = auVar127._8_4_ + fVar138 * fVar149 * fVar185;
      auVar126._12_4_ = auVar127._12_4_ + fVar140 * fVar152 * fVar196;
      *(float *)(param_1 + lVar53) = auVar126._0_4_;
      uVar19 = extractps(auVar126,1);
      *(undefined8 *)(param_1 + lVar52) = uVar19;
      uVar19 = extractps(auVar126,2);
      *(undefined8 *)(param_1 + lVar56) = uVar19;
      auVar116._0_4_ = auVar117._0_4_ + fVar114 * fVar197 * fVar99;
      auVar116._4_4_ = auVar117._4_4_ + fVar123 * fVar146 * fVar83;
      auVar116._8_4_ = auVar117._8_4_ + fVar124 * fVar149 * fVar185;
      auVar116._12_4_ = auVar117._12_4_ + fVar125 * fVar152 * fVar196;
      uVar19 = extractps(auVar126,3);
      *(undefined8 *)(param_1 + lVar45) = uVar19;
      *(float *)(param_1 + 4 + lVar53) = auVar116._0_4_;
      uVar19 = extractps(auVar116,1);
      *(undefined8 *)(param_1 + 4 + lVar52) = uVar19;
      unaff_XMM7._0_4_ = fVar141 * fVar197 * fVar99;
      unaff_XMM7._4_4_ = fVar145 * fVar146 * fVar83;
      unaff_XMM7._8_4_ = fVar147 * fVar149 * fVar185;
      unaff_XMM7._12_4_ = fVar150 * fVar152 * fVar196;
      uVar19 = extractps(auVar116,2);
      *(undefined8 *)(param_1 + 4 + lVar56) = uVar19;
      auVar115._0_4_ = auVar118._0_4_ + unaff_XMM7._0_4_;
      auVar115._4_4_ = auVar118._4_4_ + unaff_XMM7._4_4_;
      auVar115._8_4_ = auVar118._8_4_ + unaff_XMM7._8_4_;
      auVar115._12_4_ = auVar118._12_4_ + unaff_XMM7._12_4_;
      uVar19 = extractps(auVar116,3);
      *(undefined8 *)(param_1 + 4 + lVar45) = uVar19;
      *(float *)(param_1 + 8 + lVar53) = auVar115._0_4_;
      uVar19 = extractps(auVar115,1);
      *(undefined8 *)(param_1 + 8 + lVar52) = uVar19;
      uVar19 = extractps(auVar115,2);
      *(undefined8 *)(param_1 + 8 + lVar56) = uVar19;
      uVar19 = extractps(auVar115,3);
      *(undefined8 *)(param_1 + 8 + lVar45) = uVar19;
      pfVar1 = (float *)(param_6 + uVar37);
      *pfVar1 = fVar68 + fVar69;
      pfVar1[1] = fVar81 + fVar168;
      pfVar1[2] = fVar82 + fVar201;
      pfVar1[3] = fVar84 + fVar206;
      *(uint *)(param_1 + 0xc + lVar53) = uVar11;
      *(uint *)(param_1 + 0xc + lVar52) = uVar12;
      *(uint *)(param_1 + 0xc + lVar56) = uVar13;
      *(uint *)(param_1 + 0xc + lVar45) = uVar14;
      uVar34 = uVar34 + 0x10;
      uVar48 = (int)uVar33 + 4;
      uVar33 = (ulonglong)uVar48;
    } while ((int)uVar48 < (int)(uVar62 & 0xfffffffc));
  }
  uVar62 = (uint)uVar33;
  if ((int)param_17 <= (int)uVar62) {
    return;
  }
  auVar117._0_4_ =
       -(uint)((int)(uVar62 | (uint)__xmm_00000003000000020000000100000000) < (int)param_17);
  auVar117._4_4_ =
       -(uint)((int)(uVar62 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_17);
  auVar117._8_4_ = -(uint)((int)(uVar62 | _UNK_150631e08) < (int)param_17);
  auVar117._12_4_ = -(uint)((int)(uVar62 | _UNK_150631e0c) < (int)param_17);
  lVar31 = uVar33 * 0x10;
  pauVar41 = (undefined1 (*) [16])(param_3 + lVar31);
  uVar48 = movmskps(param_17,auVar117);
  bVar29 = (char)((char)uVar48 << 4) >> 4;
  if (uVar48 == 0xf) {
    auVar210 = *pauVar41;
    iVar112 = *(int *)pauVar41[1];
    auVar133 = pauVar41[2];
    iVar113 = *(int *)pauVar41[3];
    auVar158._0_8_ = auVar210._0_8_;
    auVar158._8_4_ = auVar210._4_4_;
    auVar158._12_4_ = *(undefined4 *)(pauVar41[1] + 4);
    iVar154 = auVar210._0_4_;
    auVar118._0_8_ = CONCAT44(*(undefined4 *)(pauVar41[1] + 8),auVar210._8_4_);
    auVar118._8_4_ = auVar210._12_4_;
    auVar118._12_4_ = *(undefined4 *)(pauVar41[1] + 0xc);
    auVar191._0_8_ = auVar133._0_8_;
    auVar191._8_4_ = auVar133._4_4_;
    auVar191._12_4_ = *(undefined4 *)(pauVar41[3] + 4);
    iVar103 = auVar133._0_4_;
    auVar211._0_8_ = CONCAT44(*(undefined4 *)(pauVar41[3] + 8),auVar133._8_4_);
    auVar211._8_4_ = auVar133._12_4_;
    auVar211._12_4_ = *(undefined4 *)(pauVar41[3] + 0xc);
    auVar157._8_8_ = auVar191._8_8_;
    auVar157._0_8_ = auVar158._8_8_;
    auVar202._8_8_ = auVar211._0_8_;
    auVar202._0_8_ = auVar118._0_8_;
    auVar127._8_8_ = auVar211._8_8_;
    auVar127._0_8_ = auVar118._8_8_;
    lVar30 = param_4 + lVar31;
    lVar56 = param_4 + 0x10 + lVar31;
    lVar32 = param_4 + 0x20 + lVar31;
    lVar31 = param_4 + 0x30 + lVar31;
    auVar20._4_8_ = unaff_XMM7._8_8_;
    auVar20._0_4_ = *(undefined4 *)(lVar30 + 4);
    auVar222._0_8_ = auVar20._0_8_ << 0x20;
    auVar222._8_4_ = *(undefined4 *)(lVar30 + 4);
    auVar222._12_4_ = *(undefined4 *)(lVar56 + 4);
    auVar220._0_8_ = CONCAT44(*(undefined4 *)(lVar56 + 8),*(undefined4 *)(lVar30 + 8));
    auVar220._8_4_ = *(undefined4 *)(lVar30 + 0xc);
    auVar220._12_4_ = *(undefined4 *)(lVar56 + 0xc);
    auVar21._4_8_ = unaff_XMM14._8_8_;
    auVar21._0_4_ = *(undefined4 *)(lVar32 + 4);
    auVar213._0_8_ = auVar21._0_8_ << 0x20;
    auVar213._8_4_ = *(undefined4 *)(lVar32 + 4);
    auVar213._12_4_ = *(undefined4 *)(lVar31 + 4);
    auVar212._8_8_ = auVar213._8_8_;
    auVar212._0_8_ = auVar222._8_8_;
    auVar165._0_8_ = CONCAT44(*(undefined4 *)(lVar31 + 8),*(undefined4 *)(lVar32 + 8));
    auVar165._8_4_ = *(undefined4 *)(lVar32 + 0xc);
    auVar165._12_4_ = *(undefined4 *)(lVar31 + 0xc);
    auVar143._8_8_ = auVar165._0_8_;
    auVar143._0_8_ = auVar220._0_8_;
    uStack_290 = auVar165._8_8_;
    local_298 = (undefined1  [8])auVar220._8_8_;
  }
  else {
    auVar87._0_4_ = ___xmm_00000030000000200000001000000000 & auVar117._0_4_;
    auVar87._4_4_ = _UNK_150b511c4 & auVar117._4_4_;
    auVar87._8_4_ = _UNK_150b511c8 & auVar117._8_4_;
    auVar87._12_4_ = _UNK_150b511cc & auVar117._12_4_;
    lVar30 = extractps(auVar87,1);
    lVar56 = extractps(auVar87,2);
    lVar32 = extractps(auVar87,3);
    iVar154 = *(int *)*pauVar41;
    iVar112 = *(int *)(*pauVar41 + lVar30);
    iVar103 = *(int *)(*pauVar41 + lVar56);
    iVar113 = *(int *)(*pauVar41 + lVar32);
    auVar210 = ___xmm_00000034000000240000001400000004 & auVar117;
    auVar157._4_4_ = *(undefined4 *)(*pauVar41 + auVar210._4_4_);
    auVar157._0_4_ = *(undefined4 *)(*pauVar41 + auVar210._0_4_);
    auVar157._12_4_ = *(undefined4 *)(*pauVar41 + auVar210._12_4_);
    auVar157._8_4_ = *(undefined4 *)(*pauVar41 + auVar210._8_4_);
    auVar133 = ___xmm_00000038000000280000001800000008 & auVar117;
    auVar202._4_4_ = *(undefined4 *)(*pauVar41 + auVar133._4_4_);
    auVar202._0_4_ = *(undefined4 *)(*pauVar41 + auVar133._0_4_);
    auVar202._12_4_ = *(undefined4 *)(*pauVar41 + auVar133._12_4_);
    auVar202._8_4_ = *(undefined4 *)(*pauVar41 + auVar133._8_4_);
    auVar219 = ___xmm_0000003c0000002c0000001c0000000c & auVar117;
    auVar127._4_4_ = *(undefined4 *)(*pauVar41 + auVar219._4_4_);
    auVar127._0_4_ = *(undefined4 *)(*pauVar41 + auVar219._0_4_);
    auVar127._12_4_ = *(undefined4 *)(*pauVar41 + auVar219._12_4_);
    auVar127._8_4_ = *(undefined4 *)(*pauVar41 + auVar219._8_4_);
    param_4 = param_4 + lVar31;
    auVar180 = insertps(ZEXT416(*(uint *)((ulonglong)auVar210._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar210._4_4_ + param_4),0x10);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)auVar210._8_4_ + param_4),0x20);
    auVar212 = insertps(auVar180,*(undefined4 *)((ulonglong)auVar210._12_4_ + param_4),0x30);
    auVar210 = insertps(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar133._4_4_ + param_4),0x10);
    auVar210 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar133._8_4_ + param_4),0x20);
    auVar143 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar133._12_4_ + param_4),0x30);
    auVar210 = insertps(ZEXT416(*(uint *)((ulonglong)auVar219._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar219._4_4_ + param_4),0x10);
    auVar210 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar219._8_4_ + param_4),0x20);
    _local_298 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar219._12_4_ + param_4),0x30);
  }
  auVar203._0_4_ = iVar154 << 4;
  auVar203._4_4_ = iVar112 << 4;
  auVar203._8_4_ = iVar103 << 4;
  auVar203._12_4_ = iVar113 << 4;
  auVar133 = auVar117 & auVar203;
  lVar31 = param_1 + auVar133._0_4_;
  auVar180 = ___xmm_00000004000000040000000400000004 & auVar117;
  auVar219 = ___xmm_00000008000000080000000800000008 & auVar117;
  auVar193._0_4_ = auVar157._0_4_ << 4;
  auVar193._4_4_ = auVar157._4_4_ << 4;
  auVar193._8_4_ = auVar157._8_4_ << 4;
  auVar193._12_4_ = auVar157._12_4_ << 4;
  auVar221 = auVar117 & auVar193;
  lVar54 = (longlong)auVar221._0_4_;
  auVar166._0_4_ = auVar202._0_4_ << 4;
  auVar166._4_4_ = auVar202._4_4_ << 4;
  auVar166._8_4_ = auVar202._8_4_ << 4;
  auVar166._12_4_ = auVar202._12_4_ << 4;
  auVar115 = auVar117 & auVar166;
  lVar42 = (longlong)auVar115._0_4_;
  auVar182._0_4_ = auVar127._0_4_ << 4;
  auVar182._4_4_ = auVar127._4_4_ << 4;
  auVar182._8_4_ = auVar127._8_4_ << 4;
  auVar182._12_4_ = auVar127._12_4_ << 4;
  auVar116 = auVar117 & auVar182;
  auVar210 = ZEXT416(*(uint *)(param_1 + auVar133._0_4_));
  lVar30 = param_1 + auVar133._4_4_;
  lVar56 = param_1 + auVar133._8_4_;
  lVar32 = param_1 + auVar133._12_4_;
  uVar34 = (ulonglong)auVar180._4_4_;
  uVar37 = (ulonglong)auVar180._0_4_;
  uVar33 = (ulonglong)auVar219._0_4_;
  lVar35 = param_1 + lVar54;
  lVar58 = param_1 + auVar221._4_4_;
  lVar39 = param_1 + auVar221._8_4_;
  lVar40 = param_1 + auVar221._12_4_;
  lVar44 = param_1 + lVar42;
  lVar45 = param_1 + auVar115._4_4_;
  lVar49 = param_1 + auVar115._8_4_;
  lVar50 = param_1 + auVar115._12_4_;
  lVar52 = param_1 + auVar116._0_4_;
  lVar53 = param_1 + auVar116._4_4_;
  lVar57 = param_1 + auVar116._8_4_;
  lVar59 = param_1 + auVar116._12_4_;
  bVar60 = (bVar29 & 2) == 0;
  if (!bVar60) {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._4_4_),0x10);
  }
  uVar43 = (ulonglong)auVar219._4_4_;
  auVar118 = ZEXT416(*(uint *)(uVar37 + lVar31));
  if (!bVar60) {
    auVar118 = insertps(auVar118,*(undefined4 *)(uVar34 + lVar30),0x10);
  }
  _local_498 = ZEXT416(*(uint *)(uVar33 + lVar31));
  if (bVar60) {
    auVar156 = ZEXT416(*(uint *)(param_1 + lVar54));
  }
  else {
    _local_498 = insertps(_local_498,*(undefined4 *)(uVar43 + lVar30),0x10);
    auVar156 = insertps(ZEXT416(*(uint *)(param_1 + lVar54)),
                        *(undefined4 *)(param_1 + auVar221._4_4_),0x10);
  }
  _local_388 = ZEXT416(*(uint *)(uVar37 + lVar35));
  if (bVar60) {
    _local_338 = ZEXT416(*(uint *)(uVar33 + lVar35));
    if (!bVar60) goto LAB_1408ea966;
LAB_1408ea699:
    auVar126 = ZEXT416(*(uint *)(param_1 + lVar42));
    if (!bVar60) goto LAB_1408ea98f;
LAB_1408ea6ad:
    uVar65 = *(uint *)(uVar37 + lVar44);
  }
  else {
    _local_388 = insertps(_local_388,*(undefined4 *)(uVar34 + lVar58),0x10);
    _local_338 = ZEXT416(*(uint *)(uVar33 + lVar35));
    if (bVar60) goto LAB_1408ea699;
LAB_1408ea966:
    _local_338 = insertps(_local_338,*(undefined4 *)(uVar43 + lVar58),0x10);
    auVar126 = ZEXT416(*(uint *)(param_1 + lVar42));
    if (bVar60) goto LAB_1408ea6ad;
LAB_1408ea98f:
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._4_4_),0x10);
    uVar65 = *(uint *)(uVar37 + lVar44);
  }
  _local_3e8 = ZEXT416(uVar65);
  if (!bVar60) {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)(uVar34 + lVar45),0x10);
  }
  _local_3d8 = ZEXT416(*(uint *)(uVar33 + lVar44));
  if (!bVar60) {
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)(uVar43 + lVar45),0x10);
  }
  auVar134 = ZEXT416(*(uint *)(param_1 + auVar116._0_4_));
  uVar65 = auVar180._8_4_;
  uVar6 = auVar180._12_4_;
  uVar67 = auVar219._8_4_;
  uVar7 = auVar219._12_4_;
  if (bVar60) {
    auVar219 = ZEXT416(*(uint *)(uVar37 + lVar52));
    if (!bVar60) goto LAB_1408ea9ec;
LAB_1408ea743:
    uVar8 = *(uint *)(uVar33 + lVar52);
  }
  else {
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._4_4_),0x10);
    auVar219 = ZEXT416(*(uint *)(uVar37 + lVar52));
    if (bVar60) goto LAB_1408ea743;
LAB_1408ea9ec:
    auVar219 = insertps(auVar219,*(undefined4 *)(uVar34 + lVar53),0x10);
    uVar8 = *(uint *)(uVar33 + lVar52);
  }
  auVar180 = ZEXT416(uVar8);
  if (!bVar60) {
    auVar180 = insertps(auVar180,*(undefined4 *)(uVar43 + lVar53),0x10);
  }
  if ((bVar29 & 4) != 0) {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._8_4_),0x20);
    auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar65 + lVar56),0x20);
    _local_498 = insertps(_local_498,*(undefined4 *)((ulonglong)uVar67 + lVar56),0x20);
    auVar156 = insertps(auVar156,*(undefined4 *)(param_1 + auVar221._8_4_),0x20);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar65 + lVar39),0x20);
    _local_338 = insertps(_local_338,*(undefined4 *)((ulonglong)uVar67 + lVar39),0x20);
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._8_4_),0x20);
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar65 + lVar49),0x20);
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)((ulonglong)uVar67 + lVar49),0x20);
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._8_4_),0x20);
    auVar219 = insertps(auVar219,*(undefined4 *)((ulonglong)uVar65 + lVar57),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar67 + lVar57),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._12_4_),0x30);
    auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar6 + lVar32),0x30);
    _local_498 = insertps(_local_498,*(undefined4 *)((ulonglong)uVar7 + lVar32),0x30);
    auVar156 = insertps(auVar156,*(undefined4 *)(param_1 + auVar221._12_4_),0x30);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar6 + lVar40),0x30);
    _local_338 = insertps(_local_338,*(undefined4 *)((ulonglong)uVar7 + lVar40),0x30);
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._12_4_),0x30);
  }
  uVar22 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar117._0_4_);
  if ((char)bVar29 < '\0') {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar6 + lVar50),0x30);
  }
  local_308 = (ulonglong)uVar65;
  auVar133 = ___xmm_0000000c0000000c0000000c0000000c & auVar117;
  uVar55 = (ulonglong)uVar7;
  uVar46 = (ulonglong)uVar67;
  uVar36 = (ulonglong)uVar6;
  bVar60 = (char)bVar29 < '\0';
  uVar51 = (ulonglong)auVar133._4_4_;
  if (bVar60) {
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)(uVar55 + lVar50),0x30);
  }
  uVar47 = (ulonglong)auVar133._8_4_;
  if (bVar60) {
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._12_4_),0x30);
  }
  uVar27 = (ulonglong)auVar133._12_4_;
  auVar133 = insertps(ZEXT416(*(uint *)(uVar22 + lVar35)),*(undefined4 *)(uVar51 + lVar58),0x10);
  auVar221 = insertps(ZEXT416(*(uint *)(uVar22 + lVar44)),*(undefined4 *)(uVar51 + lVar45),0x10);
  auVar116 = insertps(ZEXT416(*(uint *)(uVar22 + lVar52)),*(undefined4 *)(uVar51 + lVar53),0x10);
  auVar115 = insertps(ZEXT416(*(uint *)(uVar22 + lVar31)),*(undefined4 *)(uVar51 + lVar30),0x10);
  if (bVar60) {
    auVar219 = insertps(auVar219,*(undefined4 *)(uVar36 + lVar59),0x30);
  }
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar47 + lVar39),0x20);
  auVar221 = insertps(auVar221,*(undefined4 *)(uVar47 + lVar49),0x20);
  auVar116 = insertps(auVar116,*(undefined4 *)(uVar47 + lVar57),0x20);
  auVar115 = insertps(auVar115,*(undefined4 *)(uVar47 + lVar56),0x20);
  if (bVar60) {
    auVar180 = insertps(auVar180,*(undefined4 *)(uVar55 + lVar59),0x30);
  }
  auVar163 = insertps(auVar133,*(undefined4 *)(uVar27 + lVar40),0x30);
  auVar221 = insertps(auVar221,*(undefined4 *)(uVar27 + lVar50),0x30);
  auVar164 = insertps(auVar116,*(undefined4 *)(uVar27 + lVar59),0x30);
  auVar115 = insertps(auVar115,*(undefined4 *)(uVar27 + lVar32),0x30);
  auVar144._4_4_ = iVar112 * 3;
  auVar144._0_4_ = iVar154 * 3;
  auVar144._8_4_ = iVar103 * 3;
  auVar144._12_4_ = iVar113 * 3;
  auVar144 = auVar144 & auVar117;
  lVar31 = param_2 + (longlong)auVar144._0_4_ * 4;
  lVar30 = param_2 + (longlong)auVar144._4_4_ * 4;
  auVar133 = insertps(ZEXT416(*(uint *)(uVar37 + lVar31)),*(undefined4 *)(uVar34 + lVar30),0x10);
  auVar142 = insertps(ZEXT416(*(uint *)(uVar33 + lVar31)),*(undefined4 *)(uVar43 + lVar30),0x10);
  auVar108._4_4_ = auVar157._4_4_ * 3;
  auVar108._0_4_ = auVar157._0_4_ * 3;
  auVar108._8_4_ = auVar157._8_4_ * 3;
  auVar108._12_4_ = auVar157._12_4_ * 3;
  auVar108 = auVar108 & auVar117;
  lVar31 = param_2 + (longlong)auVar108._0_4_ * 4;
  auVar119._4_4_ = auVar202._4_4_ * 3;
  auVar119._0_4_ = auVar202._0_4_ * 3;
  auVar119._8_4_ = auVar202._8_4_ * 3;
  auVar119._12_4_ = auVar202._12_4_ * 3;
  auVar119 = auVar119 & auVar117;
  lVar30 = param_2 + (longlong)auVar119._0_4_ * 4;
  auVar104._4_4_ = auVar127._4_4_ * 3;
  auVar104._0_4_ = auVar127._0_4_ * 3;
  auVar104._8_4_ = auVar127._8_4_ * 3;
  auVar104._12_4_ = auVar127._12_4_ * 3;
  auVar104 = auVar104 & auVar117;
  lVar56 = param_2 + (longlong)auVar104._0_4_ * 4;
  lVar32 = param_2 + (longlong)auVar108._4_4_ * 4;
  auVar117 = insertps(ZEXT416(*(uint *)(uVar37 + lVar31)),*(undefined4 *)(uVar34 + lVar32),0x10);
  auVar191 = insertps(ZEXT416(*(uint *)(uVar33 + lVar31)),*(undefined4 *)(uVar43 + lVar32),0x10);
  lVar31 = param_2 + (longlong)auVar119._4_4_ * 4;
  auVar171 = insertps(ZEXT416(*(uint *)(uVar37 + lVar30)),*(undefined4 *)(uVar34 + lVar31),0x10);
  auVar170 = insertps(ZEXT416(*(uint *)(uVar33 + lVar30)),*(undefined4 *)(uVar43 + lVar31),0x10);
  lVar31 = param_2 + (longlong)auVar104._4_4_ * 4;
  auVar116 = insertps(ZEXT416(*(uint *)(uVar37 + lVar56)),*(undefined4 *)(uVar34 + lVar31),0x10);
  auVar192 = insertps(ZEXT416(*(uint *)(uVar33 + lVar56)),*(undefined4 *)(uVar43 + lVar31),0x10);
  lVar31 = param_2 + (longlong)auVar144._8_4_ * 4;
  auVar181 = insertps(auVar133,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar133 = insertps(auVar142,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar108._8_4_ * 4;
  auVar127 = insertps(auVar117,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar191 = insertps(auVar191,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar119._8_4_ * 4;
  auVar171 = insertps(auVar171,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar142 = insertps(auVar170,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar104._8_4_ * 4;
  auVar116 = insertps(auVar116,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar192 = insertps(auVar192,*(undefined4 *)(uVar46 + lVar31),0x20);
  local_248 = auVar212._0_4_;
  fStack_244 = auVar212._4_4_;
  fStack_240 = auVar212._8_4_;
  fStack_23c = auVar212._12_4_;
  fVar177 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)local_248);
  fVar185 = (float)(_UNK_150651574 ^ (uint)fStack_244);
  fVar187 = (float)(_UNK_150651578 ^ (uint)fStack_240);
  fVar188 = (float)(_UNK_15065157c ^ (uint)fStack_23c);
  local_3f8 = auVar156._0_4_;
  fStack_3f4 = auVar156._4_4_;
  fStack_3f0 = auVar156._8_4_;
  fStack_3ec = auVar156._12_4_;
  fVar196 = auVar143._4_4_;
  fVar168 = auVar143._12_4_;
  local_378 = auVar126._0_4_;
  fStack_374 = auVar126._4_4_;
  fStack_370 = auVar126._8_4_;
  fStack_36c = auVar126._12_4_;
  fVar69 = auVar143._0_4_;
  fVar83 = auVar143._8_4_;
  auVar117 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar144._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar144._4_4_ * 4),0x10);
  auVar117 = insertps(auVar117,*(undefined4 *)(param_2 + (longlong)auVar144._8_4_ * 4),0x20);
  local_2c8 = auVar134._0_4_;
  fStack_2c4 = auVar134._4_4_;
  fStack_2c0 = auVar134._8_4_;
  fStack_2bc = auVar134._12_4_;
  auVar170 = insertps(auVar117,*(undefined4 *)(param_2 + (longlong)auVar144._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar144._12_4_ * 4;
  auVar181 = insertps(auVar181,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar117 = insertps(auVar133,*(undefined4 *)(uVar55 + lVar31),0x30);
  fVar82 = (local_3f8 * fVar177 - fVar69 * local_378) - (float)local_298._0_4_ * local_2c8;
  fVar84 = (fStack_3f4 * fVar185 - fVar196 * fStack_374) - (float)local_298._4_4_ * fStack_2c4;
  fVar225 = (fStack_3f0 * fVar187 - fVar83 * fStack_370) - (float)uStack_290 * fStack_2c0;
  fVar226 = (fStack_3ec * fVar188 - fVar168 * fStack_36c) - uStack_290._4_4_ * fStack_2bc;
  auVar133 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar108._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar108._4_4_ * 4),0x10);
  auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + (longlong)auVar108._8_4_ * 4),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + (longlong)auVar108._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar108._12_4_ * 4;
  auVar126 = insertps(auVar127,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar156 = insertps(auVar191,*(undefined4 *)(uVar55 + lVar31),0x30);
  local_2b8 = auVar219._0_4_;
  fStack_2b4 = auVar219._4_4_;
  fStack_2b0 = auVar219._8_4_;
  fStack_2ac = auVar219._12_4_;
  auVar71._0_4_ = (float)local_298._0_4_ * local_2b8;
  auVar71._4_4_ = (float)local_298._4_4_ * fStack_2b4;
  auVar71._8_4_ = (float)uStack_290 * fStack_2b0;
  auVar71._12_4_ = uStack_290._4_4_ * fStack_2ac;
  fVar86 = ((float)local_388._0_4_ * fVar177 - fVar69 * (float)local_3e8._0_4_) - auVar71._0_4_;
  fVar97 = ((float)local_388._4_4_ * fVar185 - fVar196 * (float)local_3e8._4_4_) - auVar71._4_4_;
  fVar99 = (fStack_380 * fVar187 - fVar83 * fStack_3e0) - auVar71._8_4_;
  fVar101 = (fStack_37c * fVar188 - fVar168 * fStack_3dc) - auVar71._12_4_;
  auVar219 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar119._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar119._4_4_ * 4),0x10);
  auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + (longlong)auVar119._8_4_ * 4),0x20);
  local_348 = auVar180._0_4_;
  fStack_344 = auVar180._4_4_;
  fStack_340 = auVar180._8_4_;
  fStack_33c = auVar180._12_4_;
  auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + (longlong)auVar119._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar119._12_4_ * 4;
  auVar134 = insertps(auVar171,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar127 = insertps(auVar142,*(undefined4 *)(uVar55 + lVar31),0x30);
  fVar201 = ((float)local_338._0_4_ * fVar177 - fVar69 * (float)local_3d8._0_4_) -
            (float)local_298._0_4_ * local_348;
  fVar206 = ((float)local_338._4_4_ * fVar185 - fVar196 * (float)local_3d8._4_4_) -
            (float)local_298._4_4_ * fStack_344;
  fVar68 = (fStack_330 * fVar187 - fVar83 * fStack_3d0) - (float)uStack_290 * fStack_340;
  fVar81 = (fStack_32c * fVar188 - fVar168 * fStack_3cc) - uStack_290._4_4_ * fStack_33c;
  auVar180 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar104._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar104._4_4_ * 4),0x10);
  auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + (longlong)auVar104._8_4_ * 4),0x20);
  auVar142 = insertps(auVar180,*(undefined4 *)(param_2 + (longlong)auVar104._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar104._12_4_ * 4;
  auVar180 = insertps(auVar116,*(undefined4 *)(uVar36 + param_2),0x30);
  auVar116 = insertps(auVar192,*(undefined4 *)(uVar55 + param_2),0x30);
  lVar31 = (longlong)(int)(uVar62 << 2);
  bVar38 = bVar29 & 9;
  pfVar1 = (float *)(param_6 + lVar31);
  local_358._0_4_ = *param_9;
  local_458 = auVar118._0_4_;
  fStack_454 = auVar118._4_4_;
  fStack_450 = auVar118._8_4_;
  fStack_44c = auVar118._12_4_;
  local_358._4_4_ = local_358._0_4_;
  fStack_350 = (float)local_358._0_4_;
  fStack_34c = (float)local_358._0_4_;
  if (bVar38 == 9) {
    local_3b8 = *(undefined1 (*) [16])(param_5 + lVar31);
    _local_2a8 = *(undefined1 (*) [16])(param_6 + lVar31);
    if ((param_8 & 1) == 0) {
      local_318._0_4_ = *param_12;
      if ((param_11 & 1) != 0) goto LAB_1408eb345;
LAB_1408eb37a:
      fStack_360 = *param_15;
      local_318._4_4_ = local_318._0_4_;
      fStack_310 = (float)local_318._0_4_;
      fStack_30c = (float)local_318._0_4_;
    }
    else {
      auVar71 = *(undefined1 (*) [16])(param_10 + lVar31);
LAB_1408eb315:
      fVar132 = param_9[1];
      fVar136 = (float)local_358._0_4_ + fVar132 * auVar71._0_4_;
      local_358._4_4_ = (float)local_358._0_4_ + fVar132 * auVar71._4_4_;
      fStack_350 = (float)local_358._0_4_ + fVar132 * auVar71._8_4_;
      fStack_34c = (float)local_358._0_4_ + fVar132 * auVar71._12_4_;
      local_318._0_4_ = *param_12;
      local_358._0_4_ = fVar136;
      if ((param_11 & 1) == 0) goto LAB_1408eb37a;
LAB_1408eb345:
      if (bVar38 == 9) {
        auVar71 = *(undefined1 (*) [16])(param_13 + lVar31);
      }
      else {
LAB_1408eb48c:
        puVar28 = (uint *)(param_13 + lVar31);
        if ((uVar48 & 1) != 0) {
          auVar71 = ZEXT416(*puVar28);
        }
        if ((uVar48 & 2) != 0) {
          auVar71 = insertps(auVar71,puVar28[1],0x10);
        }
        if ((uVar48 & 4) != 0) {
          auVar71 = insertps(auVar71,puVar28[2],0x20);
        }
        if ((uVar48 & 8) != 0) {
          auVar71 = insertps(auVar71,puVar28[3],0x30);
        }
      }
      fVar132 = param_12[1];
      local_318._4_4_ = (float)local_318._0_4_ + fVar132 * auVar71._4_4_;
      fStack_310 = (float)local_318._0_4_ + fVar132 * auVar71._8_4_;
      fStack_30c = (float)local_318._0_4_ + fVar132 * auVar71._12_4_;
      fStack_360 = *param_15;
      local_318._0_4_ = (float)local_318._0_4_ + fVar132 * auVar71._0_4_;
    }
    if ((param_14 & 1) == 0) {
      fStack_35c = fStack_360;
      local_368 = fStack_360;
      fStack_364 = fStack_360;
      goto LAB_1408eb65f;
    }
    if (bVar38 != 9) goto LAB_1408eb5ed;
    auVar71 = *(undefined1 (*) [16])(param_16 + lVar31);
  }
  else {
    puVar28 = (uint *)(param_5 + lVar31);
    local_3b8 = auVar127;
    if ((uVar48 & 1) != 0) {
      local_3b8 = ZEXT416(*puVar28);
    }
    if ((uVar48 & 2) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[3],0x30);
    }
    _local_2a8 = auVar219;
    if ((uVar48 & 1) != 0) {
      _local_2a8 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar48 & 2) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[3],0x30);
    }
    if ((param_8 & 1) != 0) {
      puVar28 = (uint *)(param_10 + lVar31);
      if ((uVar48 & 1) != 0) {
        auVar71 = ZEXT416(*puVar28);
      }
      if ((uVar48 & 2) != 0) {
        auVar71 = insertps(auVar71,puVar28[1],0x10);
      }
      if ((uVar48 & 4) != 0) {
        auVar71 = insertps(auVar71,puVar28[2],0x20);
      }
      if ((uVar48 & 8) != 0) {
        auVar71 = insertps(auVar71,puVar28[3],0x30);
      }
      goto LAB_1408eb315;
    }
    local_318._0_4_ = *param_12;
    if ((param_11 & 1) != 0) goto LAB_1408eb48c;
    fStack_360 = *param_15;
    local_318._4_4_ = local_318._0_4_;
    fStack_310 = (float)local_318._0_4_;
    fStack_30c = (float)local_318._0_4_;
    if ((param_14 & 1) == 0) {
      fStack_35c = fStack_360;
      local_368 = fStack_360;
      fStack_364 = fStack_360;
      goto LAB_1408eb65f;
    }
LAB_1408eb5ed:
    puVar28 = (uint *)(param_16 + lVar31);
    if ((uVar48 & 1) != 0) {
      auVar71 = ZEXT416(*puVar28);
    }
    if ((uVar48 & 2) != 0) {
      auVar71 = insertps(auVar71,puVar28[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      auVar71 = insertps(auVar71,puVar28[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      auVar71 = insertps(auVar71,puVar28[3],0x30);
    }
  }
  fVar132 = param_15[1];
  local_368 = fStack_360 + fVar132 * auVar71._0_4_;
  fStack_364 = fStack_360 + fVar132 * auVar71._4_4_;
  fStack_35c = fStack_360 + fVar132 * auVar71._12_4_;
  fStack_360 = fStack_360 + fVar132 * auVar71._8_4_;
LAB_1408eb65f:
  local_288 = auVar210._0_4_;
  fStack_284 = auVar210._4_4_;
  fStack_280 = auVar210._8_4_;
  fStack_27c = auVar210._12_4_;
  fVar138 = local_288 - fVar82;
  fVar140 = fStack_284 - fVar84;
  auVar167._0_8_ = CONCAT44(fVar140,fVar138);
  auVar167._8_4_ = fStack_280 - fVar225;
  auVar167._12_4_ = fStack_27c - fVar226;
  fVar190 = local_458 - fVar86;
  fVar197 = fStack_454 - fVar97;
  auVar194._0_8_ = CONCAT44(fVar197,fVar190);
  auVar194._8_4_ = fStack_450 - fVar99;
  auVar194._12_4_ = fStack_44c - fVar101;
  fVar132 = (float)local_498._0_4_ - fVar201;
  fVar136 = (float)local_498._4_4_ - fVar206;
  auVar128._0_8_ = CONCAT44(fVar136,fVar132);
  auVar128._8_4_ = fStack_490 - fVar68;
  auVar128._12_4_ = fStack_48c - fVar81;
  auVar72._0_4_ = fVar132 * fVar132 + fVar190 * fVar190 + fVar138 * fVar138;
  auVar72._4_4_ = fVar136 * fVar136 + fVar197 * fVar197 + fVar140 * fVar140;
  auVar72._8_4_ =
       auVar128._8_4_ * auVar128._8_4_ +
       auVar194._8_4_ * auVar194._8_4_ + auVar167._8_4_ * auVar167._8_4_;
  auVar72._12_4_ =
       auVar128._12_4_ * auVar128._12_4_ +
       auVar194._12_4_ * auVar194._12_4_ + auVar167._12_4_ * auVar167._12_4_;
  auVar171 = sqrtps(auVar104,auVar72);
  uVar62 = -(uint)(auVar72._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar48 = -(uint)(auVar72._4_4_ < _UNK_1506895e4);
  uVar65 = -(uint)(auVar72._8_4_ < _UNK_1506895e8);
  uVar67 = -(uint)(auVar72._12_4_ < _UNK_1506895ec);
  auVar73._4_4_ = uVar48;
  auVar73._0_4_ = uVar62;
  auVar73._8_4_ = uVar65;
  auVar73._12_4_ = uVar67;
  auVar88._8_4_ = auVar194._8_4_;
  auVar88._0_8_ = auVar194._0_8_;
  auVar88._12_4_ = auVar194._12_4_;
  auVar118 = divps(auVar88,auVar171);
  auVar109._8_4_ = auVar128._8_4_;
  auVar109._0_8_ = auVar128._0_8_;
  auVar109._12_4_ = auVar128._12_4_;
  auVar191 = divps(auVar109,auVar171);
  auVar159._8_4_ = auVar167._8_4_;
  auVar159._0_8_ = auVar167._0_8_;
  auVar159._12_4_ = auVar167._12_4_;
  auVar210 = divps(auVar159,auVar171);
  auVar210 = blendvps(auVar210,___xmm_3f8000003f8000003f8000003f800000,auVar73);
  auVar120._8_4_ = auVar167._8_4_;
  auVar120._0_8_ = auVar167._0_8_;
  auVar120._12_4_ = auVar167._12_4_;
  bVar60 = (bVar29 & 1) != 0;
  if (bVar60) {
    auVar120 = auVar210;
  }
  auVar183._0_8_ = CONCAT44(~uVar48 & auVar118._4_4_,~uVar62 & auVar118._0_4_);
  auVar183._8_4_ = ~uVar65 & auVar118._8_4_;
  auVar183._12_4_ = ~uVar67 & auVar118._12_4_;
  auVar172._0_8_ = CONCAT44(~uVar48 & auVar191._4_4_,~uVar62 & auVar191._0_4_);
  auVar172._8_4_ = ~uVar65 & auVar191._8_4_;
  auVar172._12_4_ = ~uVar67 & auVar191._12_4_;
  auVar110._8_4_ = auVar194._8_4_;
  auVar110._0_8_ = auVar194._0_8_;
  auVar110._12_4_ = auVar194._12_4_;
  auVar89._8_4_ = auVar128._8_4_;
  auVar89._0_8_ = auVar128._0_8_;
  auVar89._12_4_ = auVar128._12_4_;
  if (bVar60) {
    auVar110._8_4_ = auVar183._8_4_;
    auVar110._0_8_ = auVar183._0_8_;
    auVar110._12_4_ = auVar183._12_4_;
    auVar89._8_4_ = auVar172._8_4_;
    auVar89._0_8_ = auVar172._0_8_;
    auVar89._12_4_ = auVar172._12_4_;
    auVar118 = blendps(auVar167,auVar120,1);
  }
  else {
    auVar118 = blendps(auVar167,auVar120,1);
  }
  if ((bVar29 & 2) == 0) {
    auVar192 = blendps(auVar194,auVar110,1);
    auVar191 = blendps(auVar128,auVar89,1);
    auVar118 = blendps(auVar118,auVar118,2);
    auVar95 = auVar191;
    auVar111 = auVar192;
  }
  else {
    auVar192 = blendps(auVar194,auVar110,1);
    auVar111._8_4_ = auVar183._8_4_;
    auVar111._0_8_ = auVar183._0_8_;
    auVar111._12_4_ = auVar183._12_4_;
    auVar191 = blendps(auVar128,auVar89,1);
    auVar95._8_4_ = auVar172._8_4_;
    auVar95._0_8_ = auVar172._0_8_;
    auVar95._12_4_ = auVar172._12_4_;
    auVar118 = blendps(auVar118,auVar210,2);
  }
  if ((bVar29 & 4) == 0) {
    auVar202 = blendps(auVar192,auVar111,2);
    auVar129 = blendps(auVar191,auVar95,2);
    auVar191 = auVar129;
    auVar192 = auVar118;
    auVar224 = auVar202;
  }
  else {
    auVar202 = blendps(auVar192,auVar111,2);
    auVar224._8_4_ = auVar183._8_4_;
    auVar224._0_8_ = auVar183._0_8_;
    auVar224._12_4_ = auVar183._12_4_;
    auVar191 = blendps(auVar191,auVar95,2);
    auVar129._8_4_ = auVar172._8_4_;
    auVar129._0_8_ = auVar172._0_8_;
    auVar129._12_4_ = auVar172._12_4_;
    auVar192 = auVar210;
  }
  local_478 = auVar163._0_4_;
  fStack_474 = auVar163._4_4_;
  fStack_470 = auVar163._8_4_;
  fStack_46c = auVar163._12_4_;
  local_488 = auVar221._0_4_;
  fStack_484 = auVar221._4_4_;
  fStack_480 = auVar221._8_4_;
  fStack_47c = auVar221._12_4_;
  local_428 = auVar133._0_4_;
  fStack_424 = auVar133._4_4_;
  fStack_420 = auVar133._8_4_;
  fStack_41c = auVar133._12_4_;
  local_448 = auVar126._0_4_;
  fStack_444 = auVar126._4_4_;
  fStack_440 = auVar126._8_4_;
  fStack_43c = auVar126._12_4_;
  local_228 = auVar219._0_4_;
  fStack_224 = auVar219._4_4_;
  fStack_220 = auVar219._8_4_;
  fStack_21c = auVar219._12_4_;
  local_408 = auVar134._0_4_;
  fStack_404 = auVar134._4_4_;
  fStack_400 = auVar134._8_4_;
  fStack_3fc = auVar134._12_4_;
  local_418 = auVar127._0_4_;
  fStack_414 = auVar127._4_4_;
  fStack_410 = auVar127._8_4_;
  fStack_40c = auVar127._12_4_;
  auVar133 = blendps(auVar118,auVar192,4);
  bVar60 = -1 < (char)bVar29;
  if (bVar60) {
    auVar210 = auVar133;
  }
  local_2d8 = auVar164._0_4_;
  fStack_2d4 = auVar164._4_4_;
  fStack_2d0 = auVar164._8_4_;
  fStack_2cc = auVar164._12_4_;
  local_438 = auVar142._0_4_;
  fStack_434 = auVar142._4_4_;
  fStack_430 = auVar142._8_4_;
  fStack_42c = auVar142._12_4_;
  local_258 = auVar180._0_4_;
  fStack_254 = auVar180._4_4_;
  fStack_250 = auVar180._8_4_;
  fStack_24c = auVar180._12_4_;
  local_3a8 = auVar116._0_4_;
  fStack_3a4 = auVar116._4_4_;
  fStack_3a0 = auVar116._8_4_;
  fStack_39c = auVar116._12_4_;
  auVar219 = blendps(auVar202,auVar224,4);
  if (bVar60) {
    auVar183 = auVar219;
  }
  auVar180 = blendps(auVar191,auVar129,4);
  if (bVar60) {
    auVar172 = auVar180;
  }
  local_238 = auVar171._0_4_;
  fStack_234 = auVar171._4_4_;
  fStack_230 = auVar171._8_4_;
  fStack_22c = auVar171._12_4_;
  auVar116 = divps(___xmm_3f8000003f8000003f8000003f800000,local_3b8);
  auVar74._4_4_ = -(uint)(local_3b8._4_4_ < _UNK_1506895d4);
  auVar74._0_4_ = -(uint)(local_3b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar75._4_4_ = -(uint)(0.0 <= (float)(~uVar48 & (uint)fStack_234) - local_3b8._4_4_);
  auVar75._0_4_ = -(uint)(0.0 <= (float)(~uVar62 & (uint)local_238) - local_3b8._0_4_);
  auVar74._8_4_ = -(uint)(local_3b8._8_4_ < _UNK_1506895d8);
  auVar74._12_4_ = -(uint)(local_3b8._12_4_ < _UNK_1506895dc);
  auVar116 = blendvps(auVar116,___xmm_3f8000003f8000003f8000003f800000,auVar74);
  auVar75._8_4_ = -(uint)(0.0 <= (float)(~uVar65 & (uint)fStack_230) - local_3b8._8_4_);
  auVar75._12_4_ = -(uint)(0.0 <= (float)(~uVar67 & (uint)fStack_22c) - local_3b8._12_4_);
  auVar118 = blendvps(_local_318,_local_358,auVar75);
  auVar126 = blendps(auVar133,auVar210,8);
  auVar219 = blendps(auVar219,auVar183,8);
  auVar133 = blendps(auVar180,auVar172,8);
  local_468 = auVar115._0_4_;
  fStack_464 = auVar115._4_4_;
  fStack_460 = auVar115._8_4_;
  fStack_45c = auVar115._12_4_;
  auVar121._0_4_ =
       ((local_478 * fVar177 - fVar69 * local_488) - (float)local_298._0_4_ * local_2d8) + local_468
  ;
  auVar121._4_4_ =
       ((fStack_474 * fVar185 - fVar196 * fStack_484) - (float)local_298._4_4_ * fStack_2d4) +
       fStack_464;
  auVar121._8_4_ =
       ((fStack_470 * fVar187 - fVar83 * fStack_480) - (float)uStack_290 * fStack_2d0) + fStack_460;
  auVar121._12_4_ =
       ((fStack_46c * fVar188 - fVar168 * fStack_47c) - uStack_290._4_4_ * fStack_2cc) + fStack_45c;
  auVar210 = divps(auVar118,auVar121);
  auVar210 = sqrtps(auVar75,auVar210);
  fVar132 = param_7 * auVar210._0_4_ * (local_368 + local_368) * auVar116._0_4_;
  fVar136 = param_7 * auVar210._4_4_ * (fStack_364 + fStack_364) * auVar116._4_4_;
  fVar138 = param_7 * auVar210._8_4_ * (fStack_360 + fStack_360) * auVar116._8_4_;
  param_7 = param_7 * auVar210._12_4_ * (fStack_35c + fStack_35c) * auVar116._12_4_;
  local_268 = auVar170._0_4_;
  fStack_264 = auVar170._4_4_;
  fStack_260 = auVar170._8_4_;
  fStack_25c = auVar170._12_4_;
  local_398 = auVar181._0_4_;
  fStack_394 = auVar181._4_4_;
  fStack_390 = auVar181._8_4_;
  fStack_38c = auVar181._12_4_;
  local_208 = auVar117._0_4_;
  fStack_204 = auVar117._4_4_;
  fStack_200 = auVar117._8_4_;
  fStack_1fc = auVar117._12_4_;
  fVar140 = auVar133._0_4_;
  fVar190 = auVar133._4_4_;
  fVar197 = auVar133._8_4_;
  fVar130 = auVar133._12_4_;
  auVar122._0_4_ = auVar121._0_4_ * fVar132 + (float)__xmm_3f8000003f8000003f8000003f800000;
  auVar122._4_4_ = auVar121._4_4_ * fVar136 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
  auVar122._8_4_ = auVar121._8_4_ * fVar138 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
  auVar122._12_4_ = auVar121._12_4_ * param_7 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
  auVar76._0_4_ =
       (((((float)local_498._0_4_ - local_208) - fVar201) +
        ((auVar156._0_4_ * fVar177 - local_418 * fVar69) - local_3a8 * (float)local_298._0_4_)) *
        fVar140 +
       (((local_458 - local_398) - fVar86) +
       ((local_448 * fVar177 - local_408 * fVar69) - local_258 * (float)local_298._0_4_)) *
       auVar219._0_4_ +
       (((local_288 - local_268) - fVar82) +
       ((local_428 * fVar177 - local_228 * fVar69) - local_438 * (float)local_298._0_4_)) *
       auVar126._0_4_) * (float)((uint)fVar132 ^ __xmm_80000000800000008000000080000000) -
       (float)local_2a8._0_4_;
  auVar76._4_4_ =
       (((((float)local_498._4_4_ - fStack_204) - fVar206) +
        ((auVar156._4_4_ * fVar185 - fStack_414 * fVar196) - fStack_3a4 * (float)local_298._4_4_)) *
        fVar190 +
       (((fStack_454 - fStack_394) - fVar97) +
       ((fStack_444 * fVar185 - fStack_404 * fVar196) - fStack_254 * (float)local_298._4_4_)) *
       auVar219._4_4_ +
       (((fStack_284 - fStack_264) - fVar84) +
       ((fStack_424 * fVar185 - fStack_224 * fVar196) - fStack_434 * (float)local_298._4_4_)) *
       auVar126._4_4_) * (float)((uint)fVar136 ^ _UNK_150651574) - (float)local_2a8._4_4_;
  auVar76._8_4_ =
       ((((fStack_490 - fStack_200) - fVar68) +
        ((auVar156._8_4_ * fVar187 - fStack_410 * fVar83) - fStack_3a0 * (float)uStack_290)) *
        fVar197 +
       (((fStack_450 - fStack_390) - fVar99) +
       ((fStack_440 * fVar187 - fStack_400 * fVar83) - fStack_250 * (float)uStack_290)) *
       auVar219._8_4_ +
       (((fStack_280 - fStack_260) - fVar225) +
       ((fStack_420 * fVar187 - fStack_220 * fVar83) - fStack_430 * (float)uStack_290)) *
       auVar126._8_4_) * (float)((uint)fVar138 ^ _UNK_150651578) - fStack_2a0;
  auVar76._12_4_ =
       ((((fStack_48c - fStack_1fc) - fVar81) +
        ((auVar156._12_4_ * fVar188 - fStack_40c * fVar168) - fStack_39c * uStack_290._4_4_)) *
        fVar130 +
       (((fStack_44c - fStack_38c) - fVar101) +
       ((fStack_43c * fVar188 - fStack_3fc * fVar168) - fStack_24c * uStack_290._4_4_)) *
       auVar219._12_4_ +
       (((fStack_27c - fStack_25c) - fVar226) +
       ((fStack_41c * fVar188 - fStack_21c * fVar168) - fStack_42c * uStack_290._4_4_)) *
       auVar126._12_4_) * (float)((uint)param_7 ^ _UNK_15065157c) - fStack_29c;
  auVar210 = divps(auVar76,auVar122);
  fVar86 = auVar210._0_4_;
  auVar90._0_4_ = (float)local_2a8._0_4_ + fVar86;
  fVar97 = auVar210._4_4_;
  auVar90._4_4_ = (float)local_2a8._4_4_ + fVar97;
  fVar99 = auVar210._8_4_;
  auVar90._8_4_ = fStack_2a0 + fVar99;
  fVar101 = auVar210._12_4_;
  auVar90._12_4_ = fStack_29c + fVar101;
  if ((bVar29 & 1) != 0) {
    *pfVar1 = auVar90._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar90,1);
    *(undefined8 *)(pfVar1 + 1) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar90,2);
    *(undefined8 *)(pfVar1 + 2) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar90,3);
    *(undefined8 *)(pfVar1 + 3) = uVar19;
  }
  fVar185 = auVar126._4_4_ * fVar97;
  fVar177 = auVar126._0_4_ * fVar86;
  fVar188 = auVar126._12_4_ * fVar101;
  fVar187 = auVar126._8_4_ * fVar99;
  local_288 = local_288 + local_468 * fVar177;
  auVar223._0_8_ = CONCAT44(fStack_284 + fStack_464 * fVar185,local_288);
  auVar223._8_4_ = fStack_280 + fStack_460 * fVar187;
  auVar223._12_4_ = fStack_27c + fStack_45c * fVar188;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar203._0_4_) = local_288;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar223,1);
    *(undefined8 *)(param_1 + auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar223,2);
    *(undefined8 *)(param_1 + auVar203._8_4_) = uVar19;
  }
  fVar206 = auVar219._4_4_ * fVar97;
  fVar201 = auVar219._0_4_ * fVar86;
  fVar81 = auVar219._12_4_ * fVar101;
  fVar68 = auVar219._8_4_ * fVar99;
  auVar91._8_4_ = auVar223._8_4_;
  auVar91._0_8_ = auVar223._0_8_;
  auVar91._12_4_ = auVar223._12_4_;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar91,3);
    *(undefined8 *)(param_1 + auVar203._12_4_) = uVar19;
    auVar92._0_4_ = local_458 + local_468 * fVar201;
    auVar92._4_4_ = fStack_454 + fStack_464 * fVar206;
    auVar92._8_4_ = fStack_450 + fStack_460 * fVar68;
    auVar92._12_4_ = fStack_44c + fStack_45c * fVar81;
  }
  else {
    auVar92._0_4_ = local_458 + local_468 * fVar201;
    auVar92._4_4_ = fStack_454 + fStack_464 * fVar206;
    auVar92._8_4_ = fStack_450 + fStack_460 * fVar68;
    auVar92._12_4_ = fStack_44c + fStack_45c * fVar81;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar203._0_4_) = auVar92._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar92,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar92,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar92,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._12_4_) = uVar19;
  }
  fVar84 = fVar190 * fVar97;
  fVar82 = fVar140 * fVar86;
  fVar226 = fVar130 * fVar101;
  fVar225 = fVar197 * fVar99;
  fVar86 = (float)local_498._0_4_ + local_468 * fVar140 * fVar86;
  auVar77._4_4_ = (float)local_498._4_4_ + fStack_464 * fVar190 * fVar97;
  auVar77._0_4_ = fVar86;
  auVar77._8_4_ = fStack_490 + fStack_460 * fVar197 * fVar99;
  auVar77._12_4_ = fStack_48c + fStack_45c * fVar130 * fVar101;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)auVar203._0_4_) = fVar86;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar203._0_4_) = local_468;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar115,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar115,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._12_4_) = uVar19;
  }
  auVar204._0_4_ = local_3f8 + local_478 * fVar177 * local_248;
  auVar204._4_4_ = fStack_3f4 + fStack_474 * fVar185 * fStack_244;
  auVar204._8_4_ = fStack_3f0 + fStack_470 * fVar187 * fStack_240;
  auVar204._12_4_ = fStack_3ec + fStack_46c * fVar188 * fStack_23c;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar193._0_4_) = auVar204._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar204,1);
    *(undefined8 *)(param_1 + auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar204,2);
    *(undefined8 *)(param_1 + auVar193._8_4_) = uVar19;
  }
  uVar26 = fStack_46c * fVar81 * fStack_23c;
  uVar25 = fStack_470 * fVar68 * fStack_240;
  uVar24 = fStack_474 * fVar206 * fStack_244;
  uVar23 = local_478 * fVar201 * local_248;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar204,3);
    *(undefined8 *)(param_1 + auVar193._12_4_) = uVar19;
    auVar93._0_4_ = (float)local_388._0_4_ + (float)uVar23;
    auVar93._4_4_ = (float)local_388._4_4_ + (float)uVar24;
    auVar93._8_4_ = fStack_380 + (float)uVar25;
    auVar93._12_4_ = fStack_37c + (float)uVar26;
  }
  else {
    auVar93._0_4_ = (float)local_388._0_4_ + (float)uVar23;
    auVar93._4_4_ = (float)local_388._4_4_ + (float)uVar24;
    auVar93._8_4_ = fStack_380 + (float)uVar25;
    auVar93._12_4_ = fStack_37c + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar193._0_4_) = auVar93._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar93,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar93,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._8_4_) = uVar19;
  }
  uVar26 = fStack_23c * fStack_46c * fVar226;
  uVar25 = fStack_240 * fStack_470 * fVar225;
  uVar24 = fStack_244 * fStack_474 * fVar84;
  uVar23 = local_248 * local_478 * fVar82;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar93,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._12_4_) = uVar19;
    auVar78._0_4_ = (float)local_338._0_4_ + (float)uVar23;
    auVar78._4_4_ = (float)local_338._4_4_ + (float)uVar24;
    auVar78._8_4_ = fStack_330 + (float)uVar25;
    auVar78._12_4_ = fStack_32c + (float)uVar26;
  }
  else {
    auVar78._0_4_ = (float)local_338._0_4_ + (float)uVar23;
    auVar78._4_4_ = (float)local_338._4_4_ + (float)uVar24;
    auVar78._8_4_ = fStack_330 + (float)uVar25;
    auVar78._12_4_ = fStack_32c + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar193._0_4_) = auVar78._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar193._0_4_) = local_478;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar163,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar163,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar163,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._12_4_) = uVar19;
  }
  auVar184._0_4_ = local_378 + local_488 * fVar177 * fVar69;
  auVar184._4_4_ = fStack_374 + fStack_484 * fVar185 * fVar196;
  auVar184._8_4_ = fStack_370 + fStack_480 * fVar187 * fVar83;
  auVar184._12_4_ = fStack_36c + fStack_47c * fVar188 * fVar168;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar166._0_4_) = auVar184._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + auVar166._8_4_) = uVar19;
  }
  uVar26 = fStack_47c * fVar81 * fVar168;
  uVar25 = fStack_480 * fVar68 * fVar83;
  uVar24 = fStack_484 * fVar206 * fVar196;
  uVar23 = local_488 * fVar201 * fVar69;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + auVar166._12_4_) = uVar19;
    auVar173._0_4_ = (float)local_3e8._0_4_ + (float)uVar23;
    auVar173._4_4_ = (float)local_3e8._4_4_ + (float)uVar24;
    auVar173._8_4_ = fStack_3e0 + (float)uVar25;
    auVar173._12_4_ = fStack_3dc + (float)uVar26;
  }
  else {
    auVar173._0_4_ = (float)local_3e8._0_4_ + (float)uVar23;
    auVar173._4_4_ = (float)local_3e8._4_4_ + (float)uVar24;
    auVar173._8_4_ = fStack_3e0 + (float)uVar25;
    auVar173._12_4_ = fStack_3dc + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar166._0_4_) = auVar173._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar173,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar173,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._8_4_) = uVar19;
  }
  uVar26 = fVar168 * fStack_47c * fVar226;
  uVar25 = fVar83 * fStack_480 * fVar225;
  uVar24 = fVar196 * fStack_484 * fVar84;
  uVar23 = fVar69 * local_488 * fVar82;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar173,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._12_4_) = uVar19;
    auVar79._0_4_ = (float)local_3d8._0_4_ + (float)uVar23;
    auVar79._4_4_ = (float)local_3d8._4_4_ + (float)uVar24;
    auVar79._8_4_ = fStack_3d0 + (float)uVar25;
    auVar79._12_4_ = fStack_3cc + (float)uVar26;
  }
  else {
    auVar79._0_4_ = (float)local_3d8._0_4_ + (float)uVar23;
    auVar79._4_4_ = (float)local_3d8._4_4_ + (float)uVar24;
    auVar79._8_4_ = fStack_3d0 + (float)uVar25;
    auVar79._12_4_ = fStack_3cc + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar166._0_4_) = auVar79._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar166._0_4_) = local_488;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar221,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar221,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar221,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._12_4_) = uVar19;
  }
  auVar214._0_4_ = local_2c8 + fVar177 * local_2d8 * (float)local_298._0_4_;
  auVar214._4_4_ = fStack_2c4 + fVar185 * fStack_2d4 * (float)local_298._4_4_;
  auVar214._8_4_ = fStack_2c0 + fVar187 * fStack_2d0 * (float)uStack_290;
  auVar214._12_4_ = fStack_2bc + fVar188 * fStack_2cc * uStack_290._4_4_;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar182._0_4_) = auVar214._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar214,1);
    *(undefined8 *)(param_1 + auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar214,2);
    *(undefined8 *)(param_1 + auVar182._8_4_) = uVar19;
  }
  uVar26 = fVar81 * fStack_2cc * uStack_290._4_4_;
  uVar25 = fVar68 * fStack_2d0 * (float)uStack_290;
  uVar24 = fVar206 * fStack_2d4 * (float)local_298._4_4_;
  uVar23 = fVar201 * local_2d8 * (float)local_298._0_4_;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar214,3);
    *(undefined8 *)(param_1 + auVar182._12_4_) = uVar19;
    auVar94._0_4_ = local_2b8 + (float)uVar23;
    auVar94._4_4_ = fStack_2b4 + (float)uVar24;
    auVar94._8_4_ = fStack_2b0 + (float)uVar25;
    auVar94._12_4_ = fStack_2ac + (float)uVar26;
  }
  else {
    auVar94._0_4_ = local_2b8 + (float)uVar23;
    auVar94._4_4_ = fStack_2b4 + (float)uVar24;
    auVar94._8_4_ = fStack_2b0 + (float)uVar25;
    auVar94._12_4_ = fStack_2ac + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar182._0_4_) = auVar94._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._8_4_) = uVar19;
  }
  uVar24 = uStack_290._4_4_ * fVar226 * fStack_2cc;
  uVar23 = (float)uStack_290 * fVar225 * fStack_2d0;
  local_298._4_4_ = (float)local_298._4_4_ * fVar84 * fStack_2d4;
  local_298._0_4_ = (float)local_298._0_4_ * fVar82 * local_2d8;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._12_4_) = uVar19;
    auVar80._0_4_ = local_348 + (float)local_298._0_4_;
    auVar80._4_4_ = fStack_344 + (float)local_298._4_4_;
    auVar80._8_4_ = fStack_340 + (float)uVar23;
    auVar80._12_4_ = fStack_33c + (float)uVar24;
  }
  else {
    auVar80._0_4_ = local_348 + (float)local_298._0_4_;
    auVar80._4_4_ = fStack_344 + (float)local_298._4_4_;
    auVar80._8_4_ = fStack_340 + (float)uVar23;
    auVar80._12_4_ = fStack_33c + (float)uVar24;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar182._0_4_) = auVar80._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar182._0_4_) = local_2d8;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar164,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar164,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar164,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDEmbeddedFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector6_5D__3E_un_3C_s_5B__c_unFVector6f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408ec590

/* WARNING: Removing unreachable block (ram,0x0001408ee157) */
/* WARNING: Removing unreachable block (ram,0x0001408ee19c) */
/* WARNING: Removing unreachable block (ram,0x0001408ee09f) */
/* WARNING: Removing unreachable block (ram,0x0001408ee117) */
/* WARNING: Removing unreachable block (ram,0x0001408ef795) */
/* WARNING: Removing unreachable block (ram,0x0001408eea3b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedFaceSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector6_5D__3E_un_3C_s_5B__c_unFVector6f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
               longlong param_5,float param_6,byte param_7,float *param_8,longlong param_9,
               byte param_10,float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  byte bVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint *puVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  bool bVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  float fVar91;
  float fVar92;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar93;
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
  float fVar94;
  float fVar95;
  float fVar102;
  float fVar103;
  undefined1 auVar96 [16];
  float fVar104;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar105;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
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
  float fVar127;
  float fVar131;
  float fVar132;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar133;
  float fVar134;
  float fVar141;
  float fVar142;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar143;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar144;
  float fVar145;
  float fVar152;
  float fVar153;
  undefined1 auVar146 [16];
  float fVar154;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar155;
  float fVar161;
  float fVar162;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar170;
  float fVar180;
  float fVar181;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  float fVar182;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  float fVar183;
  float fVar184;
  float fVar187;
  float fVar188;
  float fVar189;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  float fVar190;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  float fVar198;
  float fVar204;
  float fVar206;
  undefined1 auVar199 [16];
  float fVar208;
  undefined1 auVar200 [16];
  float fVar205;
  float fVar207;
  float fVar209;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar210;
  float fVar211;
  float fVar218;
  float fVar219;
  undefined1 auVar212 [16];
  float fVar220;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  float fVar221;
  float fVar222;
  float fVar226;
  float fVar228;
  float fVar229;
  float fVar231;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  float fVar227;
  float fVar230;
  float fVar232;
  float fVar233;
  undefined1 auVar225 [16];
  float fVar234;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined1 local_558 [8];
  float fStack_550;
  float fStack_54c;
  undefined1 local_548 [16];
  undefined1 local_538 [8];
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [8];
  float fStack_520;
  float fStack_51c;
  undefined1 local_518 [8];
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [8];
  float fStack_500;
  float fStack_4fc;
  undefined1 local_4e8 [8];
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  undefined1 local_4c8 [8];
  float fStack_4c0;
  float fStack_4bc;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  undefined1 local_478 [8];
  float fStack_470;
  float fStack_46c;
  undefined1 local_468 [8];
  float fStack_460;
  float fStack_45c;
  undefined1 local_458 [8];
  float fStack_450;
  float fStack_44c;
  undefined1 local_448 [8];
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [8];
  float fStack_430;
  float fStack_42c;
  undefined1 local_428 [8];
  float fStack_420;
  float fStack_41c;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_398 [32];
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 auVar130 [16];
  undefined1 auVar140 [16];
  
  uVar70 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar70 = param_13;
  }
  if ((int)(uVar70 & 0xfffffffc) < 1) {
    uVar40 = 0;
    uVar55 = param_4;
  }
  else {
    lVar50 = 0x14;
    uVar40 = 0;
    uVar55 = 0;
    do {
      uVar36 = uVar55 & 0xffffffff;
      fStack_46c = *param_8;
      local_478._0_4_ = fStack_46c;
      local_478._4_4_ = fStack_46c;
      fStack_470 = fStack_46c;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar36);
        fVar163 = param_8[1];
        local_478._0_4_ = fStack_46c + fVar163 * *pfVar1;
        local_478._4_4_ = fStack_46c + fVar163 * pfVar1[1];
        fStack_470 = fStack_46c + fVar163 * pfVar1[2];
        fStack_46c = fStack_46c + fVar163 * pfVar1[3];
      }
      auVar129 = *(undefined1 (*) [16])(param_2 + -0x50 + lVar50 * 4);
      auVar199 = *(undefined1 (*) [16])(param_2 + -0x40 + lVar50 * 4);
      auVar173 = *(undefined1 (*) [16])(param_2 + -0x30 + lVar50 * 4);
      auVar156 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar50 * 4);
      auVar108 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar50 * 4);
      auVar119 = *(undefined1 (*) [16])(param_2 + lVar50 * 4);
      auVar146 = pblendw(auVar173,auVar129,0xf0);
      auVar77 = pblendw(auVar129,auVar199,0xf0);
      auVar78 = pblendw(auVar119,auVar156,0xf0);
      auVar97 = pblendw(auVar156,auVar108,0xf0);
      auVar107 = pblendw(auVar199,auVar173,0xf0);
      auVar128 = pblendw(auVar108,auVar119,0xf0);
      auVar129 = *(undefined1 (*) [16])(param_3 + -0x50 + lVar50 * 4);
      auVar199 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar50 * 4);
      auVar173 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar50 * 4);
      auVar156 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar50 * 4);
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar50 * 4);
      auVar119 = *(undefined1 (*) [16])(param_3 + lVar50 * 4);
      auVar79 = blendps(auVar199,auVar129,3);
      auVar172 = blendps(auVar108,auVar156,3);
      auVar224 = blendps(auVar129,auVar173,3);
      auVar156 = blendps(auVar156,auVar119,3);
      auVar199 = blendps(auVar173,auVar199,3);
      auVar129 = blendps(auVar119,auVar108,3);
      fVar91 = auVar79._4_4_;
      fVar92 = auVar79._8_4_;
      fVar93 = auVar79._12_4_;
      fVar131 = auVar172._0_4_;
      fVar134 = auVar172._4_4_;
      fVar141 = auVar172._8_4_;
      fVar95 = auVar172._12_4_;
      fVar144 = auVar79._0_4_;
      fVar226 = auVar224._4_4_;
      fVar229 = auVar224._8_4_;
      fVar232 = auVar224._12_4_;
      fVar155 = auVar156._0_4_;
      fVar161 = auVar156._4_4_;
      fVar231 = auVar156._8_4_;
      fVar234 = auVar156._12_4_;
      fVar184 = auVar224._0_4_;
      fVar204 = auVar199._4_4_;
      fVar206 = auVar199._8_4_;
      fVar208 = auVar199._12_4_;
      fVar170 = auVar129._0_4_;
      fVar180 = auVar129._4_4_;
      fVar132 = auVar129._8_4_;
      fVar133 = auVar129._12_4_;
      fVar210 = auVar199._0_4_;
      lVar51 = (longlong)(auVar77._0_4_ << 4);
      lVar56 = (longlong)(auVar77._8_4_ * 0x10);
      lVar41 = (longlong)(auVar97._0_4_ << 4);
      lVar34 = (longlong)(auVar97._8_4_ << 4);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + lVar51)),*(undefined4 *)(param_1 + lVar56),
                          0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + lVar41),0x20);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar51)),
                          *(undefined4 *)(param_1 + 4 + lVar56),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar41),0x20);
      auVar166 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar51)),
                          *(undefined4 *)(param_1 + 8 + lVar56),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar41),0x20);
      lVar52 = (longlong)(auVar77._4_4_ << 4);
      lVar57 = (longlong)(auVar77._12_4_ * 0x10);
      lVar42 = (longlong)(auVar97._4_4_ << 4);
      lVar35 = (longlong)(auVar97._12_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar52)),*(undefined4 *)(param_1 + lVar57),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar42),0x20);
      auVar174 = insertps(auVar173,*(undefined4 *)(param_1 + lVar35),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar52)),
                          *(undefined4 *)(param_1 + 4 + lVar57),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar42),0x20);
      _local_4e8 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar35),0x30);
      auVar97 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar52)),
                          *(undefined4 *)(param_1 + 8 + lVar57),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar42),0x20);
      auVar79 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar35),0x30);
      lVar48 = (longlong)(auVar146._8_4_ << 4);
      lVar63 = (longlong)(auVar146._0_4_ * 0x10);
      lVar58 = (longlong)(auVar78._8_4_ << 4);
      lVar43 = (longlong)(auVar78._0_4_ << 4);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + lVar48)),*(undefined4 *)(param_1 + lVar63),
                          0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar58),0x20);
      auVar224 = insertps(auVar199,*(undefined4 *)(param_1 + lVar43),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                          *(undefined4 *)(param_1 + 4 + lVar63),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar58),0x20);
      auVar156 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                          *(undefined4 *)(param_1 + 8 + lVar63),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar58),0x20);
      auVar172 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      lVar49 = (longlong)(auVar146._12_4_ << 4);
      lVar53 = (longlong)(auVar146._4_4_ * 0x10);
      lVar59 = (longlong)(auVar78._12_4_ << 4);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar53),
                          0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar59),0x20);
      lVar64 = (longlong)(auVar78._4_4_ << 4);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar64),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar53),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar59),0x20);
      auVar78 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar64),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                          *(undefined4 *)(param_1 + 8 + lVar53),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar59),0x20);
      auVar200 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar64),0x30);
      lVar45 = (longlong)(auVar107._0_4_ << 4);
      lVar61 = (longlong)(auVar107._8_4_ * 0x10);
      lVar66 = (longlong)(auVar128._0_4_ << 4);
      lVar44 = (longlong)(auVar128._8_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar61),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar66),0x20);
      auVar108 = insertps(auVar173,*(undefined4 *)(param_1 + lVar44),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar61),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar66),0x20);
      fVar221 = (float)((uint)fVar232 ^ __xmm_80000000800000008000000080000000);
      fVar227 = (float)((uint)fVar226 ^ _UNK_150651574);
      fVar230 = (float)((uint)fVar234 ^ _UNK_150651578);
      fVar233 = (float)((uint)fVar161 ^ _UNK_15065157c);
      auVar119 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar44),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar61),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar66),0x20);
      auVar146 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar44),0x30);
      lVar47 = (longlong)(auVar107._4_4_ << 4);
      lVar65 = (longlong)(auVar107._12_4_ * 0x10);
      lVar46 = (longlong)(auVar128._4_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar47)),*(undefined4 *)(param_1 + lVar65),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar46),0x20);
      lVar62 = (longlong)(auVar128._12_4_ << 4);
      auVar107 = insertps(auVar173,*(undefined4 *)(param_1 + lVar62),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar47)),
                          *(undefined4 *)(param_1 + 4 + lVar65),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar46),0x20);
      auVar77 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar62),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar47)),
                          *(undefined4 *)(param_1 + 8 + lVar65),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar46),0x20);
      auVar128 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar62),0x30);
      uVar39 = *(uint *)(param_1 + 0xc + lVar51);
      uVar73 = *(uint *)(param_1 + 0xc + lVar56);
      auVar173 = insertps(ZEXT416(uVar39),ZEXT416(uVar73),0x10);
      uVar75 = *(uint *)(param_1 + 0xc + lVar41);
      auVar173 = insertps(auVar173,ZEXT416(uVar75),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar34);
      auVar212 = insertps(auVar173,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar52);
      uVar6 = *(uint *)(param_1 + 0xc + lVar57);
      auVar173 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar42);
      auVar173 = insertps(auVar173,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar35);
      auVar173 = insertps(auVar173,ZEXT416(uVar8),0x30);
      fVar211 = auVar212._0_4_;
      fVar218 = auVar212._4_4_;
      fVar219 = auVar212._8_4_;
      fVar220 = auVar212._12_4_;
      fVar198 = auVar173._0_4_;
      fVar205 = auVar173._4_4_;
      fVar207 = auVar173._8_4_;
      fVar209 = auVar173._12_4_;
      uVar9 = *(uint *)(param_1 + 0xc + lVar48);
      uVar10 = *(uint *)(param_1 + 0xc + lVar63);
      auVar173 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar58);
      auVar173 = insertps(auVar173,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar43);
      auVar173 = insertps(auVar173,ZEXT416(uVar12),0x30);
      fVar190 = auVar173._0_4_;
      fVar195 = auVar173._4_4_;
      fVar196 = auVar173._8_4_;
      fVar197 = auVar173._12_4_;
      uVar13 = *(uint *)(param_1 + 0xc + lVar49);
      uVar14 = *(uint *)(param_1 + 0xc + lVar53);
      auVar173 = insertps(ZEXT416(uVar13),ZEXT416(uVar14),0x10);
      uVar15 = *(uint *)(param_1 + 0xc + lVar59);
      auVar173 = insertps(auVar173,ZEXT416(uVar15),0x20);
      uVar16 = *(uint *)(param_1 + 0xc + lVar64);
      auVar212 = insertps(auVar173,ZEXT416(uVar16),0x30);
      uVar17 = *(uint *)(param_1 + 0xc + lVar45);
      uVar18 = *(uint *)(param_1 + 0xc + lVar61);
      auVar173 = insertps(ZEXT416(uVar17),ZEXT416(uVar18),0x10);
      uVar19 = *(uint *)(param_1 + 0xc + lVar66);
      auVar173 = insertps(auVar173,ZEXT416(uVar19),0x20);
      uVar20 = *(uint *)(param_1 + 0xc + lVar44);
      auVar173 = insertps(auVar173,ZEXT416(uVar20),0x30);
      fVar222 = auVar212._0_4_;
      fVar228 = auVar212._4_4_;
      fVar162 = auVar212._8_4_;
      fVar127 = auVar212._12_4_;
      fVar145 = auVar173._0_4_;
      fVar152 = auVar173._4_4_;
      fVar153 = auVar173._8_4_;
      fVar154 = auVar173._12_4_;
      uVar21 = *(uint *)(param_1 + 0xc + lVar47);
      uVar22 = *(uint *)(param_1 + 0xc + lVar65);
      auVar173 = insertps(ZEXT416(uVar21),ZEXT416(uVar22),0x10);
      uVar23 = *(uint *)(param_1 + 0xc + lVar46);
      auVar173 = insertps(auVar173,ZEXT416(uVar23),0x20);
      uVar24 = *(uint *)(param_1 + 0xc + lVar62);
      auVar173 = insertps(auVar173,ZEXT416(uVar24),0x30);
      fVar181 = auVar173._0_4_;
      fVar182 = auVar173._4_4_;
      fVar142 = auVar173._8_4_;
      fVar143 = auVar173._12_4_;
      fVar163 = *param_11;
      auVar173._4_4_ = fVar163;
      auVar173._0_4_ = fVar163;
      auVar173._8_4_ = fVar163;
      auVar173._12_4_ = fVar163;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar36);
        fVar3 = param_11[1];
        auVar173._0_4_ = fVar163 + fVar3 * *pfVar1;
        auVar173._4_4_ = fVar163 + fVar3 * pfVar1[1];
        auVar173._8_4_ = fVar163 + fVar3 * pfVar1[2];
        auVar173._12_4_ = fVar163 + fVar3 * pfVar1[3];
      }
      auVar164._0_4_ =
           (fVar229 * auVar224._0_4_ + fVar91 * auVar174._0_4_ + fVar144 * auVar129._0_4_) -
           ((auVar199._0_4_ * fVar221 - fVar210 * auVar108._0_4_) - fVar204 * auVar107._0_4_);
      auVar164._4_4_ =
           (fVar184 * auVar224._4_4_ + fVar93 * auVar174._4_4_ + fVar92 * auVar129._4_4_) -
           ((auVar199._4_4_ * fVar227 - fVar206 * auVar108._4_4_) - fVar208 * auVar107._4_4_);
      auVar164._8_4_ =
           (fVar231 * auVar224._8_4_ + fVar134 * auVar174._8_4_ + fVar131 * auVar129._8_4_) -
           ((auVar199._8_4_ * fVar230 - fVar170 * auVar108._8_4_) - fVar180 * auVar107._8_4_);
      auVar164._12_4_ =
           (fVar155 * auVar224._12_4_ + fVar95 * auVar174._12_4_ + fVar141 * auVar129._12_4_) -
           ((auVar199._12_4_ * fVar233 - fVar132 * auVar108._12_4_) - fVar133 * auVar107._12_4_);
      auVar135._0_4_ =
           (fVar229 * auVar156._0_4_ + fVar91 * local_4e8._0_4_ + fVar144 * auVar166._0_4_) -
           ((auVar78._0_4_ * fVar221 - fVar210 * auVar119._0_4_) - fVar204 * auVar77._0_4_);
      auVar135._4_4_ =
           (fVar184 * auVar156._4_4_ + fVar93 * local_4e8._4_4_ + fVar92 * auVar166._4_4_) -
           ((auVar78._4_4_ * fVar227 - fVar206 * auVar119._4_4_) - fVar208 * auVar77._4_4_);
      auVar135._8_4_ =
           (fVar231 * auVar156._8_4_ + fVar134 * local_4e8._8_4_ + fVar131 * auVar166._8_4_) -
           ((auVar78._8_4_ * fVar230 - fVar170 * auVar119._8_4_) - fVar180 * auVar77._8_4_);
      auVar135._12_4_ =
           (fVar155 * auVar156._12_4_ + fVar95 * local_4e8._12_4_ + fVar141 * auVar166._12_4_) -
           ((auVar78._12_4_ * fVar233 - fVar132 * auVar119._12_4_) - fVar133 * auVar77._12_4_);
      auVar171._0_4_ =
           (fVar229 * auVar172._0_4_ + fVar91 * auVar79._0_4_ + fVar144 * auVar97._0_4_) -
           ((auVar200._0_4_ * fVar221 - fVar210 * auVar146._0_4_) - fVar204 * auVar128._0_4_);
      auVar171._4_4_ =
           (fVar184 * auVar172._4_4_ + fVar93 * auVar79._4_4_ + fVar92 * auVar97._4_4_) -
           ((auVar200._4_4_ * fVar227 - fVar206 * auVar146._4_4_) - fVar208 * auVar128._4_4_);
      auVar171._8_4_ =
           (fVar231 * auVar172._8_4_ + fVar134 * auVar79._8_4_ + fVar131 * auVar97._8_4_) -
           ((auVar200._8_4_ * fVar230 - fVar170 * auVar146._8_4_) - fVar180 * auVar128._8_4_);
      auVar171._12_4_ =
           (fVar155 * auVar172._12_4_ + fVar95 * auVar79._12_4_ + fVar141 * auVar97._12_4_) -
           ((auVar200._12_4_ * fVar233 - fVar132 * auVar146._12_4_) - fVar133 * auVar128._12_4_);
      auVar117._0_4_ = auVar135._0_4_ * auVar135._0_4_ + auVar164._0_4_ * auVar164._0_4_;
      auVar117._4_4_ = auVar135._4_4_ * auVar135._4_4_ + auVar164._4_4_ * auVar164._4_4_;
      auVar117._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar164._8_4_ * auVar164._8_4_;
      auVar117._12_4_ = auVar135._12_4_ * auVar135._12_4_ + auVar164._12_4_ * auVar164._12_4_;
      auVar96._0_4_ = auVar171._0_4_ * auVar171._0_4_ + auVar117._0_4_;
      auVar96._4_4_ = auVar171._4_4_ * auVar171._4_4_ + auVar117._4_4_;
      auVar96._8_4_ = auVar171._8_4_ * auVar171._8_4_ + auVar117._8_4_;
      auVar96._12_4_ = auVar171._12_4_ * auVar171._12_4_ + auVar117._12_4_;
      auVar117 = sqrtps(auVar117,auVar96);
      uVar69 = -(uint)(auVar96._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar71 = -(uint)(auVar96._4_4_ < _UNK_1506895e4);
      uVar72 = -(uint)(auVar96._8_4_ < _UNK_1506895e8);
      uVar74 = -(uint)(auVar96._12_4_ < _UNK_1506895ec);
      auVar76._4_4_ = uVar71;
      auVar76._0_4_ = uVar69;
      auVar165 = divps(auVar164,auVar117);
      auVar76._8_4_ = uVar72;
      auVar76._12_4_ = uVar74;
      auVar212._4_4_ = _UNK_15076b1f4;
      auVar212._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar212._8_4_ = _UNK_15076b1f8;
      auVar212._12_4_ = _UNK_15076b1fc;
      auVar212 = blendvps(auVar165,auVar212,auVar76);
      pfVar1 = (float *)(param_4 + uVar36);
      fVar94 = (float)(~uVar69 & auVar117._0_4_) - *pfVar1;
      fVar102 = (float)(~uVar71 & auVar117._4_4_) - pfVar1[1];
      fVar103 = (float)(~uVar72 & auVar117._8_4_) - pfVar1[2];
      fVar104 = (float)(~uVar74 & auVar117._12_4_) - pfVar1[3];
      auVar165._4_4_ = -(uint)(0.0 <= fVar102);
      auVar165._0_4_ = -(uint)(0.0 <= fVar94);
      auVar165._8_4_ = -(uint)(0.0 <= fVar103);
      auVar165._12_4_ = -(uint)(0.0 <= fVar104);
      auVar173 = blendvps(auVar173,_local_478,auVar165);
      fVar105 = auVar173._0_4_ * param_6 * param_6;
      fVar114 = auVar173._4_4_ * param_6 * param_6;
      fVar115 = auVar173._8_4_ * param_6 * param_6;
      fVar116 = auVar173._12_4_ * param_6 * param_6;
      pfVar1 = (float *)(param_5 + uVar36);
      fVar163 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar26 = pfVar1[2];
      fVar27 = pfVar1[3];
      auVar106._0_4_ =
           (float)((uint)fVar105 ^ __xmm_80000000800000008000000080000000) * fVar94 - fVar163;
      auVar106._4_4_ = (float)((uint)fVar114 ^ _UNK_150651574) * fVar102 - fVar3;
      auVar106._8_4_ = (float)((uint)fVar115 ^ _UNK_150651578) * fVar103 - fVar26;
      auVar106._12_4_ = (float)((uint)fVar116 ^ _UNK_15065157c) * fVar104 - fVar27;
      auVar122._0_4_ =
           (fVar229 * fVar190 + fVar91 * fVar198 + fVar144 * fVar211 +
           ((fVar221 * fVar222 - fVar210 * fVar145) - fVar204 * fVar181)) * fVar105 +
           ___xmm_3f8000003f8000003f8000003f800000;
      auVar122._4_4_ =
           (fVar184 * fVar195 + fVar93 * fVar205 + fVar92 * fVar218 +
           ((fVar227 * fVar228 - fVar206 * fVar152) - fVar208 * fVar182)) * fVar114 + _UNK_15076b1f4
      ;
      auVar122._8_4_ =
           (fVar231 * fVar196 + fVar134 * fVar207 + fVar131 * fVar219 +
           ((fVar230 * fVar162 - fVar170 * fVar153) - fVar180 * fVar142)) * fVar115 + _UNK_15076b1f8
      ;
      auVar122._12_4_ =
           (fVar155 * fVar197 + fVar95 * fVar209 + fVar141 * fVar220 +
           ((fVar233 * fVar127 - fVar132 * fVar154) - fVar133 * fVar143)) * fVar116 + _UNK_15076b1fc
      ;
      auVar173 = divps(auVar106,auVar122);
      fVar221 = auVar173._0_4_;
      fVar105 = auVar212._0_4_ * fVar221;
      fVar227 = auVar173._4_4_;
      fVar114 = auVar212._4_4_ * fVar227;
      fVar230 = auVar173._8_4_;
      fVar115 = auVar212._8_4_ * fVar230;
      fVar233 = auVar173._12_4_;
      fVar116 = auVar212._12_4_ * fVar233;
      auVar223._0_4_ = auVar129._0_4_ + fVar211 * fVar105 * fVar144;
      auVar223._4_4_ = auVar129._4_4_ + fVar218 * fVar114 * fVar92;
      auVar223._8_4_ = auVar129._8_4_ + fVar219 * fVar115 * fVar131;
      auVar223._12_4_ = auVar129._12_4_ + fVar220 * fVar116 * fVar141;
      auVar129 = divps(auVar135,auVar117);
      *(float *)(param_1 + lVar51) = auVar223._0_4_;
      uVar25 = extractps(auVar223,1);
      *(undefined8 *)(param_1 + lVar56) = uVar25;
      auVar173 = divps(auVar171,auVar117);
      uVar25 = extractps(auVar223,2);
      *(undefined8 *)(param_1 + lVar41) = uVar25;
      uVar25 = extractps(auVar223,3);
      *(undefined8 *)(param_1 + lVar34) = uVar25;
      fVar94 = (float)(~uVar69 & auVar129._0_4_) * fVar221;
      fVar102 = (float)(~uVar71 & auVar129._4_4_) * fVar227;
      fVar103 = (float)(~uVar72 & auVar129._8_4_) * fVar230;
      fVar104 = (float)(~uVar74 & auVar129._12_4_) * fVar233;
      auVar118._0_4_ = auVar166._0_4_ + fVar211 * fVar94 * fVar144;
      auVar118._4_4_ = auVar166._4_4_ + fVar218 * fVar102 * fVar92;
      auVar118._8_4_ = auVar166._8_4_ + fVar219 * fVar103 * fVar131;
      auVar118._12_4_ = auVar166._12_4_ + fVar220 * fVar104 * fVar141;
      fVar183 = (float)(~uVar69 & auVar173._0_4_) * fVar221;
      fVar187 = (float)(~uVar71 & auVar173._4_4_) * fVar227;
      fVar188 = (float)(~uVar72 & auVar173._8_4_) * fVar230;
      fVar189 = (float)(~uVar74 & auVar173._12_4_) * fVar233;
      *(float *)(param_1 + 4 + lVar51) = auVar118._0_4_;
      uVar25 = extractps(auVar118,1);
      *(undefined8 *)(param_1 + 4 + lVar56) = uVar25;
      uVar25 = extractps(auVar118,2);
      *(undefined8 *)(param_1 + 4 + lVar41) = uVar25;
      auVar129._0_4_ = auVar97._0_4_ + fVar211 * fVar183 * fVar144;
      auVar129._4_4_ = auVar97._4_4_ + fVar218 * fVar187 * fVar92;
      auVar129._8_4_ = auVar97._8_4_ + fVar219 * fVar188 * fVar131;
      auVar129._12_4_ = auVar97._12_4_ + fVar220 * fVar189 * fVar141;
      uVar25 = extractps(auVar118,3);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar25;
      *(float *)(param_1 + 8 + lVar51) = auVar129._0_4_;
      uVar25 = extractps(auVar129,1);
      *(undefined8 *)(param_1 + 8 + lVar56) = uVar25;
      uVar25 = extractps(auVar129,2);
      *(undefined8 *)(param_1 + 8 + lVar41) = uVar25;
      uVar25 = extractps(auVar129,3);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar25;
      *(uint *)(param_1 + 0xc + lVar51) = uVar39;
      *(uint *)(param_1 + 0xc + lVar56) = uVar73;
      *(uint *)(param_1 + 0xc + lVar41) = uVar75;
      *(uint *)(param_1 + 0xc + lVar34) = uVar4;
      auVar136._0_4_ = auVar174._0_4_ + fVar198 * fVar105 * fVar91;
      auVar136._4_4_ = auVar174._4_4_ + fVar205 * fVar114 * fVar93;
      auVar136._8_4_ = auVar174._8_4_ + fVar207 * fVar115 * fVar134;
      auVar136._12_4_ = auVar174._12_4_ + fVar209 * fVar116 * fVar95;
      *(float *)(param_1 + lVar52) = auVar136._0_4_;
      uVar25 = extractps(auVar136,1);
      *(undefined8 *)(param_1 + lVar57) = uVar25;
      auVar166._0_4_ = local_4e8._0_4_ + fVar198 * fVar94 * fVar91;
      auVar166._4_4_ = local_4e8._4_4_ + fVar205 * fVar102 * fVar93;
      auVar166._8_4_ = local_4e8._8_4_ + fVar207 * fVar103 * fVar134;
      auVar166._12_4_ = local_4e8._12_4_ + fVar209 * fVar104 * fVar95;
      uVar25 = extractps(auVar136,2);
      *(undefined8 *)(param_1 + lVar42) = uVar25;
      uVar25 = extractps(auVar136,3);
      *(undefined8 *)(param_1 + lVar35) = uVar25;
      *(float *)(param_1 + 4 + lVar52) = auVar166._0_4_;
      uVar25 = extractps(auVar166,1);
      *(undefined8 *)(param_1 + 4 + lVar57) = uVar25;
      uVar25 = extractps(auVar166,2);
      *(undefined8 *)(param_1 + 4 + lVar42) = uVar25;
      auVar97._0_4_ = auVar79._0_4_ + fVar198 * fVar183 * fVar91;
      auVar97._4_4_ = auVar79._4_4_ + fVar205 * fVar187 * fVar93;
      auVar97._8_4_ = auVar79._8_4_ + fVar207 * fVar188 * fVar134;
      auVar97._12_4_ = auVar79._12_4_ + fVar209 * fVar189 * fVar95;
      uVar25 = extractps(auVar166,3);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar25;
      *(float *)(param_1 + 8 + lVar52) = auVar97._0_4_;
      uVar25 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + 8 + lVar57) = uVar25;
      uVar25 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + 8 + lVar42) = uVar25;
      uVar25 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar25;
      *(uint *)(param_1 + 0xc + lVar52) = uVar5;
      *(uint *)(param_1 + 0xc + lVar57) = uVar6;
      *(uint *)(param_1 + 0xc + lVar42) = uVar7;
      *(uint *)(param_1 + 0xc + lVar35) = uVar8;
      auVar174._0_4_ = auVar224._0_4_ + fVar190 * fVar105 * fVar229;
      auVar174._4_4_ = auVar224._4_4_ + fVar195 * fVar114 * fVar184;
      auVar174._8_4_ = auVar224._8_4_ + fVar196 * fVar115 * fVar231;
      auVar174._12_4_ = auVar224._12_4_ + fVar197 * fVar116 * fVar155;
      *(float *)(param_1 + lVar48) = auVar174._0_4_;
      uVar25 = extractps(auVar174,1);
      *(undefined8 *)(param_1 + lVar63) = uVar25;
      auVar79._0_4_ = auVar156._0_4_ + fVar190 * fVar94 * fVar229;
      auVar79._4_4_ = auVar156._4_4_ + fVar195 * fVar102 * fVar184;
      auVar79._8_4_ = auVar156._8_4_ + fVar196 * fVar103 * fVar231;
      auVar79._12_4_ = auVar156._12_4_ + fVar197 * fVar104 * fVar155;
      uVar25 = extractps(auVar174,2);
      *(undefined8 *)(param_1 + lVar58) = uVar25;
      uVar25 = extractps(auVar174,3);
      *(undefined8 *)(param_1 + lVar43) = uVar25;
      *(float *)(param_1 + 4 + lVar48) = auVar79._0_4_;
      uVar25 = extractps(auVar79,1);
      *(undefined8 *)(param_1 + 4 + lVar63) = uVar25;
      uVar25 = extractps(auVar79,2);
      *(undefined8 *)(param_1 + 4 + lVar58) = uVar25;
      auVar156._0_4_ = auVar172._0_4_ + fVar190 * fVar183 * fVar229;
      auVar156._4_4_ = auVar172._4_4_ + fVar195 * fVar187 * fVar184;
      auVar156._8_4_ = auVar172._8_4_ + fVar196 * fVar188 * fVar231;
      auVar156._12_4_ = auVar172._12_4_ + fVar197 * fVar189 * fVar155;
      uVar25 = extractps(auVar79,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar25;
      *(float *)(param_1 + 8 + lVar48) = auVar156._0_4_;
      uVar25 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 8 + lVar63) = uVar25;
      uVar25 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 8 + lVar58) = uVar25;
      uVar25 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar25;
      *(uint *)(param_1 + 0xc + lVar48) = uVar9;
      *(uint *)(param_1 + 0xc + lVar63) = uVar10;
      *(uint *)(param_1 + 0xc + lVar58) = uVar11;
      *(uint *)(param_1 + 0xc + lVar43) = uVar12;
      auVar137._0_4_ = auVar199._0_4_ + fVar222 * fVar105 * fVar232;
      auVar137._4_4_ = auVar199._4_4_ + fVar228 * fVar114 * fVar226;
      auVar137._8_4_ = auVar199._8_4_ + fVar162 * fVar115 * fVar234;
      auVar137._12_4_ = auVar199._12_4_ + fVar127 * fVar116 * fVar161;
      *(float *)(param_1 + lVar49) = auVar137._0_4_;
      uVar25 = extractps(auVar137,1);
      *(undefined8 *)(param_1 + lVar53) = uVar25;
      auVar172._0_4_ = auVar78._0_4_ + fVar222 * fVar94 * fVar232;
      auVar172._4_4_ = auVar78._4_4_ + fVar228 * fVar102 * fVar226;
      auVar172._8_4_ = auVar78._8_4_ + fVar162 * fVar103 * fVar234;
      auVar172._12_4_ = auVar78._12_4_ + fVar127 * fVar104 * fVar161;
      uVar25 = extractps(auVar137,2);
      *(undefined8 *)(param_1 + lVar59) = uVar25;
      uVar25 = extractps(auVar137,3);
      *(undefined8 *)(param_1 + lVar64) = uVar25;
      *(float *)(param_1 + 4 + lVar49) = auVar172._0_4_;
      uVar25 = extractps(auVar172,1);
      *(undefined8 *)(param_1 + 4 + lVar53) = uVar25;
      uVar25 = extractps(auVar172,2);
      *(undefined8 *)(param_1 + 4 + lVar59) = uVar25;
      auVar199._0_4_ = auVar200._0_4_ + fVar222 * fVar183 * fVar232;
      auVar199._4_4_ = auVar200._4_4_ + fVar228 * fVar187 * fVar226;
      auVar199._8_4_ = auVar200._8_4_ + fVar162 * fVar188 * fVar234;
      auVar199._12_4_ = auVar200._12_4_ + fVar127 * fVar189 * fVar161;
      uVar25 = extractps(auVar172,3);
      *(undefined8 *)(param_1 + 4 + lVar64) = uVar25;
      *(float *)(param_1 + 8 + lVar49) = auVar199._0_4_;
      uVar25 = extractps(auVar199,1);
      *(undefined8 *)(param_1 + 8 + lVar53) = uVar25;
      uVar25 = extractps(auVar199,2);
      *(undefined8 *)(param_1 + 8 + lVar59) = uVar25;
      uVar25 = extractps(auVar199,3);
      *(undefined8 *)(param_1 + 8 + lVar64) = uVar25;
      *(uint *)(param_1 + 0xc + lVar49) = uVar13;
      *(uint *)(param_1 + 0xc + lVar53) = uVar14;
      *(uint *)(param_1 + 0xc + lVar59) = uVar15;
      *(uint *)(param_1 + 0xc + lVar64) = uVar16;
      auVar224._0_4_ = auVar108._0_4_ + fVar145 * fVar105 * fVar210;
      auVar224._4_4_ = auVar108._4_4_ + fVar152 * fVar114 * fVar206;
      auVar224._8_4_ = auVar108._8_4_ + fVar153 * fVar115 * fVar170;
      auVar224._12_4_ = auVar108._12_4_ + fVar154 * fVar116 * fVar132;
      *(float *)(param_1 + lVar45) = auVar224._0_4_;
      uVar25 = extractps(auVar224,1);
      *(undefined8 *)(param_1 + lVar61) = uVar25;
      auVar200._0_4_ = auVar119._0_4_ + fVar145 * fVar94 * fVar210;
      auVar200._4_4_ = auVar119._4_4_ + fVar152 * fVar102 * fVar206;
      auVar200._8_4_ = auVar119._8_4_ + fVar153 * fVar103 * fVar170;
      auVar200._12_4_ = auVar119._12_4_ + fVar154 * fVar104 * fVar132;
      uVar25 = extractps(auVar224,2);
      *(undefined8 *)(param_1 + lVar66) = uVar25;
      uVar25 = extractps(auVar224,3);
      *(undefined8 *)(param_1 + lVar44) = uVar25;
      *(float *)(param_1 + 4 + lVar45) = auVar200._0_4_;
      uVar25 = extractps(auVar200,1);
      *(undefined8 *)(param_1 + 4 + lVar61) = uVar25;
      uVar25 = extractps(auVar200,2);
      *(undefined8 *)(param_1 + 4 + lVar66) = uVar25;
      auVar108._0_4_ = auVar146._0_4_ + fVar145 * fVar183 * fVar210;
      auVar108._4_4_ = auVar146._4_4_ + fVar152 * fVar187 * fVar206;
      auVar108._8_4_ = auVar146._8_4_ + fVar153 * fVar188 * fVar170;
      auVar108._12_4_ = auVar146._12_4_ + fVar154 * fVar189 * fVar132;
      uVar25 = extractps(auVar200,3);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar25;
      *(float *)(param_1 + 8 + lVar45) = auVar108._0_4_;
      uVar25 = extractps(auVar108,1);
      *(undefined8 *)(param_1 + 8 + lVar61) = uVar25;
      uVar25 = extractps(auVar108,2);
      *(undefined8 *)(param_1 + 8 + lVar66) = uVar25;
      uVar25 = extractps(auVar108,3);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar25;
      *(uint *)(param_1 + 0xc + lVar45) = uVar17;
      *(uint *)(param_1 + 0xc + lVar61) = uVar18;
      *(uint *)(param_1 + 0xc + lVar66) = uVar19;
      *(uint *)(param_1 + 0xc + lVar44) = uVar20;
      auVar146._0_4_ = auVar107._0_4_ + fVar105 * fVar181 * fVar204;
      auVar146._4_4_ = auVar107._4_4_ + fVar114 * fVar182 * fVar208;
      auVar146._8_4_ = auVar107._8_4_ + fVar115 * fVar142 * fVar180;
      auVar146._12_4_ = auVar107._12_4_ + fVar116 * fVar143 * fVar133;
      *(float *)(param_1 + lVar47) = auVar146._0_4_;
      uVar25 = extractps(auVar146,1);
      *(undefined8 *)(param_1 + lVar65) = uVar25;
      uVar25 = extractps(auVar146,2);
      *(undefined8 *)(param_1 + lVar46) = uVar25;
      auVar78._0_4_ = auVar77._0_4_ + fVar94 * fVar181 * fVar204;
      auVar78._4_4_ = auVar77._4_4_ + fVar102 * fVar182 * fVar208;
      auVar78._8_4_ = auVar77._8_4_ + fVar103 * fVar142 * fVar180;
      auVar78._12_4_ = auVar77._12_4_ + fVar104 * fVar143 * fVar133;
      uVar25 = extractps(auVar146,3);
      *(undefined8 *)(param_1 + lVar62) = uVar25;
      *(float *)(param_1 + 4 + lVar47) = auVar78._0_4_;
      uVar25 = extractps(auVar78,1);
      *(undefined8 *)(param_1 + 4 + lVar65) = uVar25;
      uVar25 = extractps(auVar78,2);
      *(undefined8 *)(param_1 + 4 + lVar46) = uVar25;
      auVar119._0_4_ = auVar128._0_4_ + fVar183 * fVar181 * fVar204;
      auVar119._4_4_ = auVar128._4_4_ + fVar187 * fVar182 * fVar208;
      auVar119._8_4_ = auVar128._8_4_ + fVar188 * fVar142 * fVar180;
      auVar119._12_4_ = auVar128._12_4_ + fVar189 * fVar143 * fVar133;
      uVar25 = extractps(auVar78,3);
      *(undefined8 *)(param_1 + 4 + lVar62) = uVar25;
      *(float *)(param_1 + 8 + lVar47) = auVar119._0_4_;
      uVar25 = extractps(auVar119,1);
      *(undefined8 *)(param_1 + 8 + lVar65) = uVar25;
      uVar25 = extractps(auVar119,2);
      *(undefined8 *)(param_1 + 8 + lVar46) = uVar25;
      pfVar1 = (float *)(param_5 + uVar36);
      *pfVar1 = fVar221 + fVar163;
      pfVar1[1] = fVar227 + fVar3;
      pfVar1[2] = fVar230 + fVar26;
      pfVar1[3] = fVar233 + fVar27;
      uVar25 = extractps(auVar119,3);
      *(undefined8 *)(param_1 + 8 + lVar62) = uVar25;
      *(uint *)(param_1 + 0xc + lVar47) = uVar21;
      *(uint *)(param_1 + 0xc + lVar65) = uVar22;
      *(uint *)(param_1 + 0xc + lVar46) = uVar23;
      *(uint *)(param_1 + 0xc + lVar62) = uVar24;
      uVar55 = uVar55 + 0x10;
      lVar50 = lVar50 + 0x18;
      uVar39 = (int)uVar40 + 4;
      uVar40 = (ulonglong)uVar39;
    } while ((int)uVar39 < (int)(uVar70 & 0xfffffffc));
  }
  uVar70 = (uint)uVar40;
  if ((int)param_13 <= (int)uVar70) {
    return;
  }
  auVar77._0_4_ =
       -(uint)((int)(uVar70 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar77._4_4_ =
       -(uint)((int)(uVar70 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar77._8_4_ = -(uint)((int)(uVar70 | _UNK_150631e08) < (int)param_13);
  auVar77._12_4_ = -(uint)((int)(uVar70 | _UNK_150631e0c) < (int)param_13);
  pauVar2 = (undefined1 (*) [16])(param_2 + uVar40 * 0x18);
  uVar39 = movmskps((int)uVar55,auVar77);
  bVar33 = (char)((char)uVar39 << 4) >> 4;
  if (uVar39 == 0xf) {
    auVar173 = pblendw(pauVar2[2],*pauVar2,0xf0);
    auVar129 = pblendw(*pauVar2,pauVar2[1],0xf0);
    auVar214._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar214._8_4_ = auVar129._4_4_;
    auVar214._12_4_ = auVar129._12_4_;
    auVar129 = pblendw(pauVar2[5],pauVar2[3],0xf0);
    auVar199 = pblendw(pauVar2[3],pauVar2[4],0xf0);
    auVar123._12_4_ = auVar199._12_4_;
    auVar123._0_8_ = CONCAT44(auVar199._8_4_,auVar199._0_4_);
    auVar123._8_4_ = auVar199._4_4_;
    auVar176._0_8_ = CONCAT44(auVar173._0_4_,auVar173._8_4_);
    auVar176._8_4_ = auVar173._12_4_;
    auVar176._12_4_ = auVar173._4_4_;
    auVar107._0_8_ = CONCAT44(auVar129._0_4_,auVar129._8_4_);
    auVar107._8_4_ = auVar129._12_4_;
    auVar107._12_4_ = auVar129._4_4_;
    auVar129 = pblendw(pauVar2[1],pauVar2[2],0xf0);
    auVar148._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar148._8_4_ = auVar129._4_4_;
    auVar148._12_4_ = auVar129._12_4_;
    auVar129 = pblendw(pauVar2[4],pauVar2[5],0xf0);
    auVar128._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar128._8_4_ = auVar129._4_4_;
    auVar128._12_4_ = auVar129._12_4_;
    auVar138._8_8_ = auVar123._0_8_;
    auVar138._0_8_ = auVar214._0_8_;
    auVar213._8_8_ = auVar123._8_8_;
    auVar213._0_8_ = auVar214._8_8_;
    auVar191._8_8_ = auVar107._0_8_;
    auVar191._0_8_ = auVar176._0_8_;
    auVar175._8_8_ = auVar107._8_8_;
    auVar175._0_8_ = auVar176._8_8_;
    auVar157._8_8_ = auVar128._0_8_;
    auVar157._0_8_ = auVar148._0_8_;
    auVar147._8_8_ = auVar128._8_8_;
    auVar147._0_8_ = auVar148._8_8_;
    auVar129 = *(undefined1 (*) [16])(param_3 + uVar40 * 0x18);
    auVar199 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar40 * 0x18);
    auVar173 = *(undefined1 (*) [16])(param_3 + 0x20 + uVar40 * 0x18);
    auVar156 = *(undefined1 (*) [16])(param_3 + 0x30 + uVar40 * 0x18);
    auVar108 = *(undefined1 (*) [16])(param_3 + 0x40 + uVar40 * 0x18);
    auVar119 = *(undefined1 (*) [16])(param_3 + 0x50 + uVar40 * 0x18);
    auVar79 = blendps(auVar199,auVar129,3);
    auVar78 = blendps(auVar108,auVar156,3);
    auVar97 = blendps(auVar129,auVar173,3);
    auVar129 = blendps(auVar156,auVar119,3);
    auVar173 = blendps(auVar173,auVar199,3);
    auVar199 = blendps(auVar119,auVar108,3);
    local_448._4_4_ = auVar79._8_4_;
    local_448._0_4_ = auVar79._0_4_;
    fStack_440 = (float)auVar78._0_4_;
    fStack_43c = (float)auVar78._8_4_;
    local_378._4_4_ = auVar79._12_4_;
    local_378._0_4_ = auVar79._4_4_;
    fStack_370 = (float)auVar78._4_4_;
    fStack_36c = (float)auVar78._12_4_;
    auVar201._4_4_ = auVar97._4_4_;
    auVar225._4_4_ = auVar97._0_4_;
    auVar225._0_4_ = auVar97._8_4_;
    auVar225._8_4_ = auVar129._8_4_;
    auVar225._12_4_ = auVar129._0_4_;
    auVar201._0_4_ = auVar97._12_4_;
    auVar201._8_4_ = auVar129._12_4_;
    auVar201._12_4_ = auVar129._4_4_;
    auVar185._0_4_ = auVar173._0_4_;
    auVar185._4_4_ = auVar173._8_4_;
    auVar185._8_4_ = auVar199._0_4_;
    auVar185._12_4_ = auVar199._8_4_;
    auVar167._4_4_ = auVar173._12_4_;
    auVar167._0_4_ = auVar173._4_4_;
    auVar167._8_4_ = auVar199._4_4_;
    auVar167._12_4_ = auVar199._12_4_;
  }
  else {
    auVar98._0_4_ = ___xmm_00000048000000300000001800000000 & auVar77._0_4_;
    auVar98._4_4_ = _UNK_150b51284 & auVar77._4_4_;
    auVar98._8_4_ = _UNK_150b51288 & auVar77._8_4_;
    auVar98._12_4_ = _UNK_150b5128c & auVar77._12_4_;
    lVar34 = extractps(auVar98,1);
    lVar35 = extractps(auVar98,2);
    lVar41 = extractps(auVar98,3);
    auVar138._4_4_ = *(undefined4 *)(*pauVar2 + lVar34);
    auVar138._0_4_ = *(undefined4 *)*pauVar2;
    auVar138._12_4_ = *(undefined4 *)(*pauVar2 + lVar41);
    auVar138._8_4_ = *(undefined4 *)(*pauVar2 + lVar35);
    auVar129 = ___xmm_0000004c000000340000001c00000004 & auVar77;
    auVar213._4_4_ = *(undefined4 *)(*pauVar2 + auVar129._4_4_);
    auVar213._0_4_ = *(undefined4 *)(*pauVar2 + auVar129._0_4_);
    auVar213._12_4_ = *(undefined4 *)(*pauVar2 + auVar129._12_4_);
    auVar213._8_4_ = *(undefined4 *)(*pauVar2 + auVar129._8_4_);
    auVar199 = ___xmm_00000050000000380000002000000008 & auVar77;
    auVar191._4_4_ = *(undefined4 *)(*pauVar2 + auVar199._4_4_);
    auVar191._0_4_ = *(undefined4 *)(*pauVar2 + auVar199._0_4_);
    auVar191._12_4_ = *(undefined4 *)(*pauVar2 + auVar199._12_4_);
    auVar191._8_4_ = *(undefined4 *)(*pauVar2 + auVar199._8_4_);
    auVar173 = ___xmm_000000540000003c000000240000000c & auVar77;
    auVar175._4_4_ = *(undefined4 *)(*pauVar2 + auVar173._4_4_);
    auVar175._0_4_ = *(undefined4 *)(*pauVar2 + auVar173._0_4_);
    auVar175._12_4_ = *(undefined4 *)(*pauVar2 + auVar173._12_4_);
    auVar175._8_4_ = *(undefined4 *)(*pauVar2 + auVar173._8_4_);
    auVar156 = ___xmm_00000058000000400000002800000010 & auVar77;
    auVar157._4_4_ = *(undefined4 *)(*pauVar2 + auVar156._4_4_);
    auVar157._0_4_ = *(undefined4 *)(*pauVar2 + auVar156._0_4_);
    auVar157._12_4_ = *(undefined4 *)(*pauVar2 + auVar156._12_4_);
    auVar157._8_4_ = *(undefined4 *)(*pauVar2 + auVar156._8_4_);
    auVar108 = ___xmm_0000005c000000440000002c00000014 & auVar77;
    auVar147._4_4_ = *(undefined4 *)(*pauVar2 + auVar108._4_4_);
    auVar147._0_4_ = *(undefined4 *)(*pauVar2 + auVar108._0_4_);
    auVar147._12_4_ = *(undefined4 *)(*pauVar2 + auVar108._12_4_);
    auVar147._8_4_ = *(undefined4 *)(*pauVar2 + auVar108._8_4_);
    lVar50 = param_3 + uVar40 * 0x18;
    auVar119 = insertps(ZEXT416(*(uint *)(param_3 + uVar40 * 0x18)),*(undefined4 *)(lVar34 + lVar50)
                        ,0x10);
    auVar119 = insertps(auVar119,*(undefined4 *)(lVar35 + lVar50),0x20);
    _local_448 = insertps(auVar119,*(undefined4 *)(lVar41 + lVar50),0x30);
    auVar119 = insertps(ZEXT416(*(uint *)((ulonglong)auVar129._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar129._4_4_ + lVar50),0x10);
    auVar119 = insertps(auVar119,*(undefined4 *)((ulonglong)auVar129._8_4_ + lVar50),0x20);
    _local_378 = insertps(auVar119,*(undefined4 *)((ulonglong)auVar129._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar199._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar199._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar199._8_4_ + lVar50),0x20);
    auVar225 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar199._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar173._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar173._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar173._8_4_ + lVar50),0x20);
    auVar201 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar173._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar156._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar156._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar156._8_4_ + lVar50),0x20);
    auVar185 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar156._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar108._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar108._8_4_ + lVar50),0x20);
    auVar167 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar108._12_4_ + lVar50),0x30);
  }
  auVar139._0_4_ = auVar138._0_4_ << 4;
  auVar139._4_4_ = auVar138._4_4_ << 4;
  auVar139._8_4_ = auVar138._8_4_ << 4;
  auVar139._12_4_ = auVar138._12_4_ << 4;
  auVar199 = auVar77 & auVar139;
  lVar50 = param_1 + auVar199._0_4_;
  auVar97 = ___xmm_00000004000000040000000400000004 & auVar77;
  auVar173 = ___xmm_00000008000000080000000800000008 & auVar77;
  auVar215._0_4_ = auVar213._0_4_ << 4;
  auVar215._4_4_ = auVar213._4_4_ << 4;
  auVar215._8_4_ = auVar213._8_4_ << 4;
  auVar215._12_4_ = auVar213._12_4_ << 4;
  auVar156 = auVar77 & auVar215;
  lVar66 = (longlong)auVar156._0_4_;
  auVar192._0_4_ = auVar191._0_4_ << 4;
  auVar192._4_4_ = auVar191._4_4_ << 4;
  auVar192._8_4_ = auVar191._8_4_ << 4;
  auVar192._12_4_ = auVar191._12_4_ << 4;
  auVar108 = auVar77 & auVar192;
  auVar177._0_4_ = auVar175._0_4_ << 4;
  auVar177._4_4_ = auVar175._4_4_ << 4;
  auVar177._8_4_ = auVar175._8_4_ << 4;
  auVar177._12_4_ = auVar175._12_4_ << 4;
  auVar119 = auVar77 & auVar177;
  auVar129 = ZEXT416(*(uint *)(param_1 + auVar199._0_4_));
  auVar158._0_4_ = auVar157._0_4_ << 4;
  auVar158._4_4_ = auVar157._4_4_ << 4;
  auVar158._8_4_ = auVar157._8_4_ << 4;
  auVar158._12_4_ = auVar157._12_4_ << 4;
  auVar78 = auVar77 & auVar158;
  auVar149._0_4_ = auVar147._0_4_ << 4;
  auVar149._4_4_ = auVar147._4_4_ << 4;
  auVar149._8_4_ = auVar147._8_4_ << 4;
  auVar149._12_4_ = auVar147._12_4_ << 4;
  auVar79 = auVar77 & auVar149;
  lVar67 = (longlong)auVar79._0_4_;
  lVar34 = param_1 + auVar199._4_4_;
  lVar35 = param_1 + auVar199._8_4_;
  local_4e8 = (undefined1  [8])lVar35;
  lVar41 = param_1 + auVar199._12_4_;
  uVar36 = (ulonglong)auVar97._4_4_;
  uVar55 = (ulonglong)auVar97._0_4_;
  uVar40 = (ulonglong)auVar173._0_4_;
  lVar42 = param_1 + lVar66;
  lVar43 = param_1 + auVar156._4_4_;
  lVar44 = param_1 + auVar156._8_4_;
  lVar45 = param_1 + auVar156._12_4_;
  lVar46 = param_1 + auVar108._0_4_;
  lVar47 = param_1 + auVar108._4_4_;
  lVar48 = param_1 + auVar108._8_4_;
  lVar49 = param_1 + auVar108._12_4_;
  lVar51 = param_1 + auVar119._0_4_;
  lVar52 = param_1 + auVar119._4_4_;
  lVar53 = param_1 + auVar119._8_4_;
  lVar56 = param_1 + auVar119._12_4_;
  lVar57 = param_1 + auVar78._0_4_;
  lVar58 = param_1 + auVar78._4_4_;
  lVar59 = param_1 + auVar78._8_4_;
  lVar61 = param_1 + auVar78._12_4_;
  lVar62 = param_1 + lVar67;
  lVar63 = param_1 + auVar79._4_4_;
  lVar64 = param_1 + auVar79._8_4_;
  lVar65 = param_1 + auVar79._12_4_;
  bVar68 = (bVar33 & 2) == 0;
  if (!bVar68) {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._4_4_),0x10);
  }
  uVar54 = (ulonglong)auVar173._4_4_;
  _local_508 = ZEXT416(*(uint *)(uVar55 + lVar50));
  if (bVar68) {
    _local_4c8 = ZEXT416(*(uint *)(uVar40 + lVar50));
    auVar107 = ZEXT416(*(uint *)(param_1 + lVar66));
    _local_428 = ZEXT416(*(uint *)(uVar55 + lVar42));
    _local_4b8 = ZEXT416(*(uint *)(uVar40 + lVar42));
  }
  else {
    _local_508 = insertps(_local_508,*(undefined4 *)(uVar36 + lVar34),0x10);
    _local_4c8 = insertps(ZEXT416(*(uint *)(uVar40 + lVar50)),*(undefined4 *)(uVar54 + lVar34),0x10)
    ;
    auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar66)),
                        *(undefined4 *)(param_1 + auVar156._4_4_),0x10);
    _local_428 = insertps(ZEXT416(*(uint *)(uVar55 + lVar42)),*(undefined4 *)(uVar36 + lVar43),0x10)
    ;
    _local_4b8 = insertps(ZEXT416(*(uint *)(uVar40 + lVar42)),*(undefined4 *)(uVar54 + lVar43),0x10)
    ;
  }
  _local_468 = ZEXT416(*(uint *)(param_1 + auVar108._0_4_));
  if (bVar68) {
    _local_418 = ZEXT416(*(uint *)(uVar55 + lVar46));
    _local_408 = ZEXT416(*(uint *)(uVar40 + lVar46));
  }
  else {
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    _local_418 = insertps(ZEXT416(*(uint *)(uVar55 + lVar46)),*(undefined4 *)(uVar36 + lVar47),0x10)
    ;
    _local_408 = insertps(ZEXT416(*(uint *)(uVar40 + lVar46)),*(undefined4 *)(uVar54 + lVar47),0x10)
    ;
  }
  _local_458 = ZEXT416(*(uint *)(param_1 + auVar119._0_4_));
  if (bVar68) {
    _local_4d8 = ZEXT416(*(uint *)(uVar55 + lVar51));
    _local_538 = ZEXT416(*(uint *)(uVar40 + lVar51));
  }
  else {
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._4_4_),0x10);
    _local_4d8 = insertps(ZEXT416(*(uint *)(uVar55 + lVar51)),*(undefined4 *)(uVar36 + lVar52),0x10)
    ;
    _local_538 = insertps(ZEXT416(*(uint *)(uVar40 + lVar51)),*(undefined4 *)(uVar54 + lVar52),0x10)
    ;
  }
  _local_528 = ZEXT416(*(uint *)(param_1 + auVar78._0_4_));
  if (bVar68) {
    _local_518 = ZEXT416(*(uint *)(uVar55 + lVar57));
    _local_558 = ZEXT416(*(uint *)(uVar40 + lVar57));
    auVar128 = ZEXT416(*(uint *)(param_1 + lVar67));
  }
  else {
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._4_4_),0x10);
    _local_518 = insertps(ZEXT416(*(uint *)(uVar55 + lVar57)),*(undefined4 *)(uVar36 + lVar58),0x10)
    ;
    _local_558 = insertps(ZEXT416(*(uint *)(uVar40 + lVar57)),*(undefined4 *)(uVar54 + lVar58),0x10)
    ;
    auVar128 = insertps(ZEXT416(*(uint *)(param_1 + lVar67)),
                        *(undefined4 *)(param_1 + auVar79._4_4_),0x10);
  }
  auVar172 = ZEXT416(*(uint *)(uVar55 + lVar62));
  fVar163 = auVar167._0_4_;
  fVar91 = auVar167._12_4_;
  if (!bVar68) {
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar36 + lVar63),0x10);
  }
  local_548 = ZEXT416(*(uint *)(uVar40 + lVar62));
  if (!bVar68) {
    local_548 = insertps(local_548,*(undefined4 *)(uVar54 + lVar63),0x10);
  }
  uVar55 = (ulonglong)auVar97._8_4_;
  fVar92 = auVar167._8_4_;
  uVar73 = auVar173._8_4_;
  local_488 = auVar185._0_4_;
  fStack_484 = auVar185._4_4_;
  fStack_480 = auVar185._8_4_;
  fStack_47c = auVar185._12_4_;
  if ((bVar33 & 4) != 0) {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._8_4_),0x20);
    _local_508 = insertps(_local_508,*(undefined4 *)(uVar55 + lVar35),0x20);
    _local_4c8 = insertps(_local_4c8,*(undefined4 *)((ulonglong)uVar73 + lVar35),0x20);
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar156._8_4_),0x20);
    _local_428 = insertps(_local_428,*(undefined4 *)(uVar55 + lVar44),0x20);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)((ulonglong)uVar73 + lVar44),0x20);
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    _local_418 = insertps(_local_418,*(undefined4 *)(uVar55 + lVar48),0x20);
    _local_408 = insertps(_local_408,*(undefined4 *)((ulonglong)uVar73 + lVar48),0x20);
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._8_4_),0x20);
    _local_4d8 = insertps(_local_4d8,*(undefined4 *)(uVar55 + lVar53),0x20);
    _local_538 = insertps(_local_538,*(undefined4 *)((ulonglong)uVar73 + lVar53),0x20);
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._8_4_),0x20);
    _local_518 = insertps(_local_518,*(undefined4 *)(uVar55 + lVar59),0x20);
    _local_558 = insertps(_local_558,*(undefined4 *)((ulonglong)uVar73 + lVar59),0x20);
    auVar128 = insertps(auVar128,*(undefined4 *)(param_1 + auVar79._8_4_),0x20);
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar55 + lVar64),0x20);
    local_548 = insertps(local_548,*(undefined4 *)((ulonglong)uVar73 + lVar64),0x20);
  }
  if ((char)bVar33 < '\0') {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._12_4_),0x30);
    _local_508 = insertps(_local_508,*(undefined4 *)((ulonglong)auVar97._12_4_ + lVar41),0x30);
    _local_4c8 = insertps(_local_4c8,*(undefined4 *)((ulonglong)auVar173._12_4_ + lVar41),0x30);
  }
  uVar40 = (ulonglong)auVar173._12_4_;
  uVar55 = (ulonglong)auVar97._12_4_;
  bVar68 = (char)bVar33 < '\0';
  if (bVar68) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar156._12_4_),0x30);
    _local_428 = insertps(_local_428,*(undefined4 *)(uVar55 + lVar45),0x30);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(uVar40 + lVar45),0x30);
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    _local_418 = insertps(_local_418,*(undefined4 *)(uVar55 + lVar49),0x30);
    _local_408 = insertps(_local_408,*(undefined4 *)(uVar40 + lVar49),0x30);
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._12_4_),0x30);
    _local_4d8 = insertps(_local_4d8,*(undefined4 *)(uVar55 + lVar56),0x30);
    _local_538 = insertps(_local_538,*(undefined4 *)(uVar40 + lVar56),0x30);
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._12_4_),0x30);
    _local_518 = insertps(_local_518,*(undefined4 *)(uVar55 + lVar61),0x30);
    _local_558 = insertps(_local_558,*(undefined4 *)(uVar40 + lVar61),0x30);
  }
  uVar60 = (ulonglong)(auVar77._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
  uVar36 = (ulonglong)(auVar77._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
  uVar54 = (ulonglong)SUB164(auVar77 & ___xmm_0000000c0000000c0000000c0000000c,8);
  if (bVar68) {
    auVar128 = insertps(auVar128,*(undefined4 *)(param_1 + auVar79._12_4_),0x30);
  }
  uVar37 = (ulonglong)SUB164(auVar77 & ___xmm_0000000c0000000c0000000c0000000c,0xc);
  auVar199 = insertps(ZEXT416(*(uint *)(uVar36 + lVar50)),*(undefined4 *)(uVar60 + lVar34),0x10);
  auVar173 = insertps(ZEXT416(*(uint *)(uVar36 + lVar42)),*(undefined4 *)(uVar60 + lVar43),0x10);
  auVar156 = insertps(ZEXT416(*(uint *)(uVar36 + lVar51)),*(undefined4 *)(uVar60 + lVar52),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar36 + lVar57)),*(undefined4 *)(uVar60 + lVar58),0x10);
  auVar77 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar60 + lVar47),0x10);
  auVar119 = insertps(ZEXT416(*(uint *)(uVar36 + lVar62)),*(undefined4 *)(uVar60 + lVar63),0x10);
  if (bVar68) {
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar55 + lVar65),0x30);
  }
  auVar78 = insertps(auVar199,*(undefined4 *)(uVar54 + lVar35),0x20);
  auVar173 = insertps(auVar173,*(undefined4 *)(uVar54 + lVar44),0x20);
  auVar156 = insertps(auVar156,*(undefined4 *)(uVar54 + lVar53),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar54 + lVar59),0x20);
  auVar77 = insertps(auVar77,*(undefined4 *)(uVar54 + lVar48),0x20);
  auVar199 = insertps(auVar119,*(undefined4 *)(uVar54 + lVar64),0x20);
  if (bVar68) {
    local_548 = insertps(local_548,*(undefined4 *)(uVar40 + lVar65),0x30);
  }
  auVar119 = insertps(auVar78,*(undefined4 *)(uVar37 + lVar41),0x30);
  auVar173 = insertps(auVar173,*(undefined4 *)(uVar37 + lVar45),0x30);
  auVar156 = insertps(auVar156,*(undefined4 *)(uVar37 + lVar56),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar37 + lVar61),0x30);
  auVar77 = insertps(auVar77,*(undefined4 *)(uVar37 + lVar49),0x30);
  auVar199 = insertps(auVar199,*(undefined4 *)(uVar37 + lVar65),0x30);
  local_478._0_4_ = auVar129._0_4_;
  local_478._4_4_ = auVar129._4_4_;
  fStack_470 = auVar129._8_4_;
  fStack_46c = auVar129._12_4_;
  fVar161 = auVar225._4_4_;
  fVar162 = auVar225._12_4_;
  fVar132 = auVar225._0_4_;
  fVar133 = auVar225._8_4_;
  fVar142 = auVar201._0_4_;
  fVar222 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar142);
  fVar143 = auVar201._4_4_;
  fVar228 = (float)(_UNK_150651574 ^ (uint)fVar143);
  fVar144 = auVar201._8_4_;
  fVar231 = (float)(_UNK_150651578 ^ (uint)fVar144);
  fVar145 = auVar201._12_4_;
  fVar234 = (float)(_UNK_15065157c ^ (uint)fVar145);
  local_3c8 = auVar128._0_4_;
  fStack_3c4 = auVar128._4_4_;
  fStack_3c0 = auVar128._8_4_;
  fStack_3bc = auVar128._12_4_;
  fVar93 = auVar167._4_4_;
  local_3b8 = auVar172._0_4_;
  fStack_3b4 = auVar172._4_4_;
  fStack_3b0 = auVar172._8_4_;
  fStack_3ac = auVar172._12_4_;
  fVar152 = local_548._0_4_;
  local_438._0_4_ = fVar163 * fVar152;
  fVar153 = local_548._4_4_;
  local_438._4_4_ = fVar93 * fVar153;
  fVar154 = local_548._8_4_;
  fStack_430 = fVar92 * fVar154;
  fVar155 = local_548._12_4_;
  fStack_42c = fVar91 * fVar155;
  fVar170 = ((float)local_538._0_4_ * fVar222 - local_488 * (float)local_558._0_4_) -
            (float)local_438._0_4_;
  fVar180 = ((float)local_538._4_4_ * fVar228 - fStack_484 * (float)local_558._4_4_) -
            (float)local_438._4_4_;
  fVar181 = (fStack_530 * fVar231 - fStack_480 * fStack_550) - fStack_430;
  fVar182 = (fStack_52c * fVar234 - fStack_47c * fStack_54c) - fStack_42c;
  lVar50 = (longlong)(int)(uVar70 << 2);
  pfVar1 = (float *)(param_5 + lVar50);
  local_398._0_4_ = *param_8;
  auVar150 = auVar149;
  local_398._4_4_ = local_398._0_4_;
  local_398._8_4_ = local_398._0_4_;
  local_398._12_4_ = local_398._0_4_;
  if ((bVar33 & 9) == 9) {
    _local_438 = *(undefined1 (*) [16])(param_4 + lVar50);
    _local_4e8 = *(undefined1 (*) [16])(param_5 + lVar50);
    if ((param_7 & 1) == 0) {
      fVar127 = *param_11;
      auVar124._4_4_ = fVar127;
      auVar124._0_4_ = fVar127;
      auVar124._8_4_ = fVar127;
      auVar124._12_4_ = fVar127;
      auVar129 = _local_4e8;
    }
    else {
      auVar129 = *(undefined1 (*) [16])(param_9 + lVar50);
LAB_1408eee6a:
      fVar127 = param_8[1];
      local_398._4_4_ = (float)local_398._0_4_ + fVar127 * auVar129._4_4_;
      local_398._8_4_ = (float)local_398._0_4_ + fVar127 * auVar129._8_4_;
      local_398._12_4_ = (float)local_398._0_4_ + fVar127 * auVar129._12_4_;
      fVar131 = *param_11;
      auVar124._4_4_ = fVar131;
      auVar124._0_4_ = fVar131;
      auVar124._8_4_ = fVar131;
      auVar124._12_4_ = fVar131;
      local_398._0_4_ = (float)local_398._0_4_ + fVar127 * auVar129._0_4_;
    }
    if ((param_10 & 1) == 0) goto LAB_1408eef01;
    if ((bVar33 & 9) != 9) goto LAB_1408eeea4;
    auVar129 = *(undefined1 (*) [16])(param_12 + lVar50);
  }
  else {
    puVar38 = (uint *)(param_4 + lVar50);
    if ((uVar39 & 1) != 0) {
      _local_438 = ZEXT416(*puVar38);
    }
    if ((uVar39 & 2) != 0) {
      _local_438 = insertps(_local_438,puVar38[1],0x10);
    }
    if ((uVar39 & 4) != 0) {
      _local_438 = insertps(_local_438,puVar38[2],0x20);
    }
    if ((uVar39 & 8) != 0) {
      _local_438 = insertps(_local_438,puVar38[3],0x30);
    }
    auVar129 = _local_438;
    if ((uVar39 & 1) != 0) {
      _local_4e8 = ZEXT416((uint)*pfVar1);
      auVar129 = _local_4e8;
    }
    if ((uVar39 & 2) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[1],0x10);
      _local_4e8 = auVar129;
    }
    if ((uVar39 & 4) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[2],0x20);
      _local_4e8 = auVar129;
    }
    if ((uVar39 & 8) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[3],0x30);
      _local_4e8 = auVar129;
    }
    if ((param_7 & 1) != 0) {
      puVar38 = (uint *)(param_9 + lVar50);
      if ((uVar39 & 1) != 0) {
        auVar129 = ZEXT416(*puVar38);
      }
      if ((uVar39 & 2) != 0) {
        auVar129 = insertps(auVar129,puVar38[1],0x10);
      }
      if ((uVar39 & 4) != 0) {
        auVar129 = insertps(auVar129,puVar38[2],0x20);
      }
      if ((uVar39 & 8) != 0) {
        auVar129 = insertps(auVar129,puVar38[3],0x30);
      }
      goto LAB_1408eee6a;
    }
    fVar127 = *param_11;
    auVar124._4_4_ = fVar127;
    auVar124._0_4_ = fVar127;
    auVar124._8_4_ = fVar127;
    auVar124._12_4_ = fVar127;
    if ((param_10 & 1) == 0) goto LAB_1408eef01;
LAB_1408eeea4:
    puVar38 = (uint *)(param_12 + lVar50);
    if ((uVar39 & 1) != 0) {
      auVar129 = ZEXT416(*puVar38);
    }
    if ((uVar39 & 2) != 0) {
      auVar129 = insertps(auVar129,puVar38[1],0x10);
    }
    if ((uVar39 & 4) != 0) {
      auVar129 = insertps(auVar129,puVar38[2],0x20);
    }
    if ((uVar39 & 8) != 0) {
      auVar129 = insertps(auVar129,puVar38[3],0x30);
    }
  }
  fVar127 = param_11[1];
  auVar150._0_4_ = fVar127 * auVar129._0_4_;
  auVar150._4_4_ = fVar127 * auVar129._4_4_;
  auVar150._8_4_ = fVar127 * auVar129._8_4_;
  auVar150._12_4_ = fVar127 * auVar129._12_4_;
  auVar125._0_4_ = auVar124._0_4_ + auVar150._0_4_;
  auVar125._4_4_ = auVar124._4_4_ + auVar150._4_4_;
  auVar125._8_4_ = auVar124._8_4_ + auVar150._8_4_;
  auVar125._12_4_ = auVar124._12_4_ + auVar150._12_4_;
  auVar124 = auVar125;
LAB_1408eef01:
  fVar134 = (fVar132 * (float)local_468._0_4_ +
            (float)local_378._0_4_ * auVar107._0_4_ +
            (float)local_448._0_4_ * (float)local_478._0_4_) -
            (((float)local_458._0_4_ * fVar222 - local_488 * (float)local_528._0_4_) -
            fVar163 * local_3c8);
  fVar141 = (fVar161 * (float)local_468._4_4_ +
            (float)local_378._4_4_ * auVar107._4_4_ +
            (float)local_448._4_4_ * (float)local_478._4_4_) -
            (((float)local_458._4_4_ * fVar228 - fStack_484 * (float)local_528._4_4_) -
            fVar93 * fStack_3c4);
  auVar140._0_8_ = CONCAT44(fVar141,fVar134);
  auVar140._8_4_ =
       (fVar133 * fStack_460 + fStack_370 * auVar107._8_4_ + fStack_440 * fStack_470) -
       ((fStack_450 * fVar231 - fStack_480 * fStack_520) - fVar92 * fStack_3c0);
  auVar140._12_4_ =
       (fVar162 * fStack_45c + fStack_36c * auVar107._12_4_ + fStack_43c * fStack_46c) -
       ((fStack_44c * fVar234 - fStack_47c * fStack_51c) - fVar91 * fStack_3bc);
  fVar127 = (fVar132 * (float)local_418._0_4_ +
            (float)local_378._0_4_ * (float)local_428._0_4_ +
            (float)local_448._0_4_ * (float)local_508._0_4_) -
            (((float)local_4d8._0_4_ * fVar222 - local_488 * (float)local_518._0_4_) -
            fVar163 * local_3b8);
  fVar131 = (fVar161 * (float)local_418._4_4_ +
            (float)local_378._4_4_ * (float)local_428._4_4_ +
            (float)local_448._4_4_ * (float)local_508._4_4_) -
            (((float)local_4d8._4_4_ * fVar228 - fStack_484 * (float)local_518._4_4_) -
            fVar93 * fStack_3b4);
  auVar130._0_8_ = CONCAT44(fVar131,fVar127);
  auVar130._8_4_ =
       (fVar133 * fStack_410 + fStack_370 * fStack_420 + fStack_440 * fStack_500) -
       ((fStack_4d0 * fVar231 - fStack_480 * fStack_510) - fVar92 * fStack_3b0);
  auVar130._12_4_ =
       (fVar162 * fStack_40c + fStack_36c * fStack_41c + fStack_43c * fStack_4fc) -
       ((fStack_4cc * fVar234 - fStack_47c * fStack_50c) - fVar91 * fStack_3ac);
  fVar170 = (fVar132 * (float)local_408._0_4_ +
            (float)local_378._0_4_ * (float)local_4b8._0_4_ +
            (float)local_448._0_4_ * (float)local_4c8._0_4_) - fVar170;
  fVar180 = (fVar161 * (float)local_408._4_4_ +
            (float)local_378._4_4_ * (float)local_4b8._4_4_ +
            (float)local_448._4_4_ * (float)local_4c8._4_4_) - fVar180;
  auVar120._0_8_ = CONCAT44(fVar180,fVar170);
  auVar120._8_4_ =
       (fVar133 * fStack_400 + fStack_370 * fStack_4b0 + fStack_440 * fStack_4c0) - fVar181;
  auVar120._12_4_ =
       (fVar162 * fStack_3fc + fStack_36c * fStack_4ac + fStack_43c * fStack_4bc) - fVar182;
  auVar99._0_4_ = fVar170 * fVar170 + fVar127 * fVar127 + fVar134 * fVar134;
  auVar99._4_4_ = fVar180 * fVar180 + fVar131 * fVar131 + fVar141 * fVar141;
  auVar99._8_4_ =
       auVar120._8_4_ * auVar120._8_4_ +
       auVar130._8_4_ * auVar130._8_4_ + auVar140._8_4_ * auVar140._8_4_;
  auVar99._12_4_ =
       auVar120._12_4_ * auVar120._12_4_ +
       auVar130._12_4_ * auVar130._12_4_ + auVar140._12_4_ * auVar140._12_4_;
  auVar79 = sqrtps(auVar150,auVar99);
  uVar70 = -(uint)(auVar99._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar39 = -(uint)(auVar99._4_4_ < _UNK_1506895e4);
  uVar73 = -(uint)(auVar99._8_4_ < _UNK_1506895e8);
  uVar75 = -(uint)(auVar99._12_4_ < _UNK_1506895ec);
  auVar80._4_4_ = uVar39;
  auVar80._0_4_ = uVar70;
  auVar109._8_4_ = auVar130._8_4_;
  auVar109._0_8_ = auVar130._0_8_;
  auVar109._12_4_ = auVar130._12_4_;
  auVar78 = divps(auVar109,auVar79);
  auVar193._8_4_ = auVar120._8_4_;
  auVar193._0_8_ = auVar120._0_8_;
  auVar193._12_4_ = auVar120._12_4_;
  auVar97 = divps(auVar193,auVar79);
  auVar168._8_4_ = auVar140._8_4_;
  auVar168._0_8_ = auVar140._0_8_;
  auVar168._12_4_ = auVar140._12_4_;
  auVar129 = divps(auVar168,auVar79);
  auVar80._8_4_ = uVar73;
  auVar80._12_4_ = uVar75;
  auVar28._4_4_ = _UNK_15076b1f4;
  auVar28._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar28._8_4_ = _UNK_15076b1f8;
  auVar28._12_4_ = _UNK_15076b1fc;
  auVar129 = blendvps(auVar129,auVar28,auVar80);
  auVar202._8_4_ = auVar140._8_4_;
  auVar202._0_8_ = auVar140._0_8_;
  auVar202._12_4_ = auVar140._12_4_;
  bVar68 = (bVar33 & 1) == 0;
  if (!bVar68) {
    auVar202 = auVar129;
  }
  auVar216._0_8_ = CONCAT44(~uVar39 & auVar78._4_4_,~uVar70 & auVar78._0_4_);
  auVar216._8_4_ = ~uVar73 & auVar78._8_4_;
  auVar216._12_4_ = ~uVar75 & auVar78._12_4_;
  auVar178._0_8_ = CONCAT44(~uVar39 & auVar97._4_4_,~uVar70 & auVar97._0_4_);
  auVar178._8_4_ = ~uVar73 & auVar97._8_4_;
  auVar178._12_4_ = ~uVar75 & auVar97._12_4_;
  auVar110._8_4_ = auVar130._8_4_;
  auVar110._0_8_ = auVar130._0_8_;
  auVar110._12_4_ = auVar130._12_4_;
  auVar81._8_4_ = auVar120._8_4_;
  auVar81._0_8_ = auVar120._0_8_;
  auVar81._12_4_ = auVar120._12_4_;
  if (bVar68) {
    auVar78 = blendps(auVar140,auVar202,1);
  }
  else {
    auVar110._8_4_ = auVar216._8_4_;
    auVar110._0_8_ = auVar216._0_8_;
    auVar110._12_4_ = auVar216._12_4_;
    auVar81._8_4_ = auVar178._8_4_;
    auVar81._0_8_ = auVar178._0_8_;
    auVar81._12_4_ = auVar178._12_4_;
    auVar78 = blendps(auVar140,auVar202,1);
  }
  if ((bVar33 & 2) == 0) {
    auVar128 = blendps(auVar130,auVar110,1);
    auVar97 = blendps(auVar120,auVar81,1);
    auVar78 = blendps(auVar78,auVar78,2);
    auVar90 = auVar97;
    auVar111 = auVar128;
  }
  else {
    auVar128 = blendps(auVar130,auVar110,1);
    auVar111._8_4_ = auVar216._8_4_;
    auVar111._0_8_ = auVar216._0_8_;
    auVar111._12_4_ = auVar216._12_4_;
    auVar97 = blendps(auVar120,auVar81,1);
    auVar90._8_4_ = auVar178._8_4_;
    auVar90._0_8_ = auVar178._0_8_;
    auVar90._12_4_ = auVar178._12_4_;
    auVar78 = blendps(auVar78,auVar129,2);
  }
  if ((bVar33 & 4) == 0) {
    auVar172 = blendps(auVar128,auVar111,2);
    auVar121 = blendps(auVar97,auVar90,2);
    auVar97 = auVar121;
    auVar128 = auVar78;
    auVar203 = auVar172;
  }
  else {
    auVar172 = blendps(auVar128,auVar111,2);
    auVar203._8_4_ = auVar216._8_4_;
    auVar203._0_8_ = auVar216._0_8_;
    auVar203._12_4_ = auVar216._12_4_;
    auVar97 = blendps(auVar97,auVar90,2);
    auVar121._8_4_ = auVar178._8_4_;
    auVar121._0_8_ = auVar178._0_8_;
    auVar121._12_4_ = auVar178._12_4_;
    auVar128 = auVar129;
  }
  local_5a8 = auVar119._0_4_;
  fStack_5a4 = auVar119._4_4_;
  fStack_5a0 = auVar119._8_4_;
  fStack_59c = auVar119._12_4_;
  local_598 = auVar173._0_4_;
  fStack_594 = auVar173._4_4_;
  fStack_590 = auVar173._8_4_;
  fStack_58c = auVar173._12_4_;
  local_578 = auVar156._0_4_;
  fStack_574 = auVar156._4_4_;
  fStack_570 = auVar156._8_4_;
  fStack_56c = auVar156._12_4_;
  local_568 = auVar108._0_4_;
  fStack_564 = auVar108._4_4_;
  fStack_560 = auVar108._8_4_;
  fStack_55c = auVar108._12_4_;
  auVar78 = blendps(auVar78,auVar128,4);
  bVar68 = -1 < (char)bVar33;
  if (bVar68) {
    auVar129 = auVar78;
  }
  local_588 = auVar77._0_4_;
  fStack_584 = auVar77._4_4_;
  fStack_580 = auVar77._8_4_;
  fStack_57c = auVar77._12_4_;
  local_3e8 = auVar199._0_4_;
  fStack_3e4 = auVar199._4_4_;
  fStack_3e0 = auVar199._8_4_;
  fStack_3dc = auVar199._12_4_;
  auVar128 = blendps(auVar172,auVar203,4);
  if (bVar68) {
    auVar216 = auVar128;
  }
  auVar97 = blendps(auVar97,auVar121,4);
  if (bVar68) {
    auVar178 = auVar97;
  }
  local_438._0_4_ = (float)(~uVar70 & auVar79._0_4_) - (float)local_438._0_4_;
  local_438._4_4_ = (float)(~uVar39 & auVar79._4_4_) - (float)local_438._4_4_;
  fStack_430 = (float)(~uVar73 & auVar79._8_4_) - fStack_430;
  fStack_42c = (float)(~uVar75 & auVar79._12_4_) - fStack_42c;
  auVar82._4_4_ = -(uint)(0.0 <= (float)local_438._4_4_);
  auVar82._0_4_ = -(uint)(0.0 <= (float)local_438._0_4_);
  auVar82._8_4_ = -(uint)(0.0 <= fStack_430);
  auVar82._12_4_ = -(uint)(0.0 <= fStack_42c);
  auVar79 = blendvps(auVar124,local_398._0_16_,auVar82);
  fVar170 = auVar79._0_4_ * param_6 * param_6;
  fVar180 = auVar79._4_4_ * param_6 * param_6;
  fVar181 = auVar79._8_4_ * param_6 * param_6;
  param_6 = auVar79._12_4_ * param_6 * param_6;
  auVar126._0_4_ =
       (float)((uint)fVar170 ^ __xmm_80000000800000008000000080000000) * (float)local_438._0_4_ -
       (float)local_4e8._0_4_;
  auVar126._4_4_ =
       (float)((uint)fVar180 ^ _UNK_150651574) * (float)local_438._4_4_ - (float)local_4e8._4_4_;
  auVar126._8_4_ = (float)((uint)fVar181 ^ _UNK_150651578) * fStack_430 - fStack_4e0;
  auVar126._12_4_ = (float)((uint)param_6 ^ _UNK_15065157c) * fStack_42c - fStack_4dc;
  auVar112._0_4_ =
       ((float)local_448._0_4_ * local_5a8 + (float)local_378._0_4_ * local_598 +
        fVar132 * local_588 + ((fVar222 * local_578 - local_488 * local_568) - fVar163 * local_3e8))
       * fVar170 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar112._4_4_ =
       ((float)local_448._4_4_ * fStack_5a4 + (float)local_378._4_4_ * fStack_594 +
        fVar161 * fStack_584 +
       ((fVar228 * fStack_574 - fStack_484 * fStack_564) - fVar93 * fStack_3e4)) * fVar180 +
       _UNK_15076b1f4;
  auVar112._8_4_ =
       (fStack_440 * fStack_5a0 + fStack_370 * fStack_590 + fVar133 * fStack_580 +
       ((fVar231 * fStack_570 - fStack_480 * fStack_560) - fVar92 * fStack_3e0)) * fVar181 +
       _UNK_15076b1f8;
  auVar112._12_4_ =
       (fStack_43c * fStack_59c + fStack_36c * fStack_58c + fVar162 * fStack_57c +
       ((fVar234 * fStack_56c - fStack_47c * fStack_55c) - fVar91 * fStack_3dc)) * param_6 +
       _UNK_15076b1fc;
  auVar79 = divps(auVar126,auVar112);
  fVar170 = auVar79._0_4_;
  auVar83._0_4_ = (float)local_4e8._0_4_ + fVar170;
  fVar180 = auVar79._4_4_;
  auVar83._4_4_ = (float)local_4e8._4_4_ + fVar180;
  fVar181 = auVar79._8_4_;
  auVar83._8_4_ = fStack_4e0 + fVar181;
  fVar182 = auVar79._12_4_;
  auVar83._12_4_ = fStack_4dc + fVar182;
  if ((bVar33 & 1) != 0) {
    *pfVar1 = auVar83._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar83,1);
    *(undefined8 *)(pfVar1 + 1) = uVar25;
  }
  auVar129 = blendps(auVar78,auVar129,8);
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar83,2);
    *(undefined8 *)(pfVar1 + 2) = uVar25;
  }
  fVar222 = auVar129._0_4_ * fVar170;
  fVar228 = auVar129._4_4_ * fVar180;
  fVar231 = auVar129._8_4_ * fVar181;
  fVar234 = auVar129._12_4_ * fVar182;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar83,3);
    *(undefined8 *)(pfVar1 + 3) = uVar25;
  }
  auVar129 = blendps(auVar128,auVar216,8);
  auVar100._0_4_ = (float)local_478._0_4_ + local_5a8 * fVar222 * (float)local_448._0_4_;
  auVar100._4_4_ = (float)local_478._4_4_ + fStack_5a4 * fVar228 * (float)local_448._4_4_;
  auVar100._8_4_ = fStack_470 + fStack_5a0 * fVar231 * fStack_440;
  auVar100._12_4_ = fStack_46c + fStack_59c * fVar234 * fStack_43c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar139._0_4_) = auVar100._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + auVar139._12_4_) = uVar25;
  }
  fVar131 = auVar129._4_4_ * fVar180;
  fVar127 = auVar129._0_4_ * fVar170;
  fVar141 = auVar129._12_4_ * fVar182;
  fVar134 = auVar129._8_4_ * fVar181;
  auVar78 = blendps(auVar97,auVar178,8);
  auVar101._0_4_ =
       (float)local_508._0_4_ + local_5a8 * auVar129._0_4_ * fVar170 * (float)local_448._0_4_;
  auVar101._4_4_ =
       (float)local_508._4_4_ + fStack_5a4 * auVar129._4_4_ * fVar180 * (float)local_448._4_4_;
  auVar101._8_4_ = fStack_500 + fStack_5a0 * auVar129._8_4_ * fVar181 * fStack_440;
  auVar101._12_4_ = fStack_4fc + fStack_59c * auVar129._12_4_ * fVar182 * fStack_43c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 4 + (longlong)auVar139._0_4_) = auVar101._0_4_;
  }
  fVar170 = fVar170 * auVar78._0_4_;
  fVar180 = fVar180 * auVar78._4_4_;
  fVar181 = fVar181 * auVar78._8_4_;
  fVar182 = fVar182 * auVar78._12_4_;
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar101,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar101,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar101,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._12_4_) = uVar25;
  }
  fVar95 = (float)local_4c8._0_4_ + (float)local_448._0_4_ * local_5a8 * fVar170;
  auVar84._4_4_ = (float)local_4c8._4_4_ + (float)local_448._4_4_ * fStack_5a4 * fVar180;
  auVar84._0_4_ = fVar95;
  auVar84._8_4_ = fStack_4c0 + fStack_440 * fStack_5a0 * fVar181;
  auVar84._12_4_ = fStack_4bc + fStack_43c * fStack_59c * fVar182;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)auVar139._0_4_) = fVar95;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar84,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar84,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar84,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar139._0_4_) = local_5a8;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar119,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar119,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar119,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._12_4_) = uVar25;
  }
  local_4a8._0_4_ = auVar107._0_4_ + local_598 * fVar222 * (float)local_378._0_4_;
  local_4a8._4_4_ = auVar107._4_4_ + fStack_594 * fVar228 * (float)local_378._4_4_;
  fStack_4a0 = auVar107._8_4_ + fStack_590 * fVar231 * fStack_370;
  fStack_49c = auVar107._12_4_ + fStack_58c * fVar234 * fStack_36c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + auVar215._0_4_) = local_4a8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(_local_4a8,1);
    *(undefined8 *)(param_1 + auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(_local_4a8,2);
    *(undefined8 *)(param_1 + auVar215._8_4_) = uVar25;
  }
  uVar32 = fStack_58c * fVar141 * fStack_36c;
  uVar31 = fStack_590 * fVar134 * fStack_370;
  uVar30 = fStack_594 * fVar131 * (float)local_378._4_4_;
  uVar29 = local_598 * fVar127 * (float)local_378._0_4_;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(_local_4a8,3);
    *(undefined8 *)(param_1 + auVar215._12_4_) = uVar25;
    auVar159._0_4_ = (float)local_428._0_4_ + (float)uVar29;
    auVar159._4_4_ = (float)local_428._4_4_ + (float)uVar30;
    auVar159._8_4_ = fStack_420 + (float)uVar31;
    auVar159._12_4_ = fStack_41c + (float)uVar32;
  }
  else {
    auVar159._0_4_ = (float)local_428._0_4_ + (float)uVar29;
    auVar159._4_4_ = (float)local_428._4_4_ + (float)uVar30;
    auVar159._8_4_ = fStack_420 + (float)uVar31;
    auVar159._12_4_ = fStack_41c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar215._0_4_) = auVar159._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar159,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar159,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._8_4_) = uVar25;
  }
  uVar30 = fStack_36c * fStack_58c * fVar182;
  uVar29 = fStack_370 * fStack_590 * fVar181;
  local_378._4_4_ = (float)local_378._4_4_ * fStack_594 * fVar180;
  local_378._0_4_ = (float)local_378._0_4_ * local_598 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar159,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._12_4_) = uVar25;
    auVar85._0_4_ = (float)local_4b8._0_4_ + (float)local_378._0_4_;
    auVar85._4_4_ = (float)local_4b8._4_4_ + (float)local_378._4_4_;
    auVar85._8_4_ = fStack_4b0 + (float)uVar29;
    auVar85._12_4_ = fStack_4ac + (float)uVar30;
  }
  else {
    auVar85._0_4_ = (float)local_4b8._0_4_ + (float)local_378._0_4_;
    auVar85._4_4_ = (float)local_4b8._4_4_ + (float)local_378._4_4_;
    auVar85._8_4_ = fStack_4b0 + (float)uVar29;
    auVar85._12_4_ = fStack_4ac + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar215._0_4_) = auVar85._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar215._0_4_) = local_598;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar173,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar173,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar173,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._12_4_) = uVar25;
  }
  auVar160._0_4_ = (float)local_468._0_4_ + local_588 * fVar222 * fVar132;
  auVar160._4_4_ = (float)local_468._4_4_ + fStack_584 * fVar228 * fVar161;
  auVar160._8_4_ = fStack_460 + fStack_580 * fVar231 * fVar133;
  auVar160._12_4_ = fStack_45c + fStack_57c * fVar234 * fVar162;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar192._0_4_) = auVar160._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar160,1);
    *(undefined8 *)(param_1 + auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar160,2);
    *(undefined8 *)(param_1 + auVar192._8_4_) = uVar25;
  }
  uVar32 = fStack_57c * fVar141 * fVar162;
  uVar31 = fStack_580 * fVar134 * fVar133;
  uVar30 = fStack_584 * fVar131 * fVar161;
  uVar29 = local_588 * fVar127 * fVar132;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar160,3);
    *(undefined8 *)(param_1 + auVar192._12_4_) = uVar25;
    auVar194._0_4_ = (float)local_418._0_4_ + (float)uVar29;
    auVar194._4_4_ = (float)local_418._4_4_ + (float)uVar30;
    auVar194._8_4_ = fStack_410 + (float)uVar31;
    auVar194._12_4_ = fStack_40c + (float)uVar32;
  }
  else {
    auVar194._0_4_ = (float)local_418._0_4_ + (float)uVar29;
    auVar194._4_4_ = (float)local_418._4_4_ + (float)uVar30;
    auVar194._8_4_ = fStack_410 + (float)uVar31;
    auVar194._12_4_ = fStack_40c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar192._0_4_) = auVar194._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar194,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar194,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._8_4_) = uVar25;
  }
  uVar32 = fVar162 * fStack_57c * fVar182;
  uVar31 = fVar133 * fStack_580 * fVar181;
  uVar30 = fVar161 * fStack_584 * fVar180;
  uVar29 = fVar132 * local_588 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar194,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._12_4_) = uVar25;
    auVar86._0_4_ = (float)local_408._0_4_ + (float)uVar29;
    auVar86._4_4_ = (float)local_408._4_4_ + (float)uVar30;
    auVar86._8_4_ = fStack_400 + (float)uVar31;
    auVar86._12_4_ = fStack_3fc + (float)uVar32;
  }
  else {
    auVar86._0_4_ = (float)local_408._0_4_ + (float)uVar29;
    auVar86._4_4_ = (float)local_408._4_4_ + (float)uVar30;
    auVar86._8_4_ = fStack_400 + (float)uVar31;
    auVar86._12_4_ = fStack_3fc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar192._0_4_) = auVar86._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar86,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar86,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar86,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar192._0_4_) = local_588;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._12_4_) = uVar25;
  }
  auVar217._0_4_ = (float)local_458._0_4_ + local_578 * fVar222 * fVar142;
  auVar217._4_4_ = (float)local_458._4_4_ + fStack_574 * fVar228 * fVar143;
  auVar217._8_4_ = fStack_450 + fStack_570 * fVar231 * fVar144;
  auVar217._12_4_ = fStack_44c + fStack_56c * fVar234 * fVar145;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar177._0_4_) = auVar217._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar217,1);
    *(undefined8 *)(param_1 + auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar217,2);
    *(undefined8 *)(param_1 + auVar177._8_4_) = uVar25;
  }
  uVar32 = fStack_56c * fVar141 * fVar145;
  uVar31 = fStack_570 * fVar134 * fVar144;
  uVar30 = fStack_574 * fVar131 * fVar143;
  uVar29 = local_578 * fVar127 * fVar142;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar217,3);
    *(undefined8 *)(param_1 + auVar177._12_4_) = uVar25;
    auVar186._0_4_ = (float)local_4d8._0_4_ + (float)uVar29;
    auVar186._4_4_ = (float)local_4d8._4_4_ + (float)uVar30;
    auVar186._8_4_ = fStack_4d0 + (float)uVar31;
    auVar186._12_4_ = fStack_4cc + (float)uVar32;
  }
  else {
    auVar186._0_4_ = (float)local_4d8._0_4_ + (float)uVar29;
    auVar186._4_4_ = (float)local_4d8._4_4_ + (float)uVar30;
    auVar186._8_4_ = fStack_4d0 + (float)uVar31;
    auVar186._12_4_ = fStack_4cc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar177._0_4_) = auVar186._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar186,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar186,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._8_4_) = uVar25;
  }
  uVar32 = fVar145 * fStack_56c * fVar182;
  uVar31 = fVar144 * fStack_570 * fVar181;
  uVar30 = fVar143 * fStack_574 * fVar180;
  uVar29 = fVar142 * local_578 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar186,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._12_4_) = uVar25;
    auVar179._0_4_ = (float)local_538._0_4_ + (float)uVar29;
    auVar179._4_4_ = (float)local_538._4_4_ + (float)uVar30;
    auVar179._8_4_ = fStack_530 + (float)uVar31;
    auVar179._12_4_ = fStack_52c + (float)uVar32;
  }
  else {
    auVar179._0_4_ = (float)local_538._0_4_ + (float)uVar29;
    auVar179._4_4_ = (float)local_538._4_4_ + (float)uVar30;
    auVar179._8_4_ = fStack_530 + (float)uVar31;
    auVar179._12_4_ = fStack_52c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar177._0_4_) = auVar179._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar179,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar179,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar179,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar177._0_4_) = local_578;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar156,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar156,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar156,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._12_4_) = uVar25;
  }
  auVar169._0_4_ = (float)local_528._0_4_ + local_568 * fVar222 * local_488;
  auVar169._4_4_ = (float)local_528._4_4_ + fStack_564 * fVar228 * fStack_484;
  auVar169._8_4_ = fStack_520 + fStack_560 * fVar231 * fStack_480;
  auVar169._12_4_ = fStack_51c + fStack_55c * fVar234 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar158._0_4_) = auVar169._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar169,1);
    *(undefined8 *)(param_1 + auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar169,2);
    *(undefined8 *)(param_1 + auVar158._8_4_) = uVar25;
  }
  uVar32 = fStack_55c * fVar141 * fStack_47c;
  uVar31 = fStack_560 * fVar134 * fStack_480;
  uVar30 = fStack_564 * fVar131 * fStack_484;
  uVar29 = local_568 * fVar127 * local_488;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar169,3);
    *(undefined8 *)(param_1 + auVar158._12_4_) = uVar25;
    auVar151._0_4_ = (float)local_518._0_4_ + (float)uVar29;
    auVar151._4_4_ = (float)local_518._4_4_ + (float)uVar30;
    auVar151._8_4_ = fStack_510 + (float)uVar31;
    auVar151._12_4_ = fStack_50c + (float)uVar32;
  }
  else {
    auVar151._0_4_ = (float)local_518._0_4_ + (float)uVar29;
    auVar151._4_4_ = (float)local_518._4_4_ + (float)uVar30;
    auVar151._8_4_ = fStack_510 + (float)uVar31;
    auVar151._12_4_ = fStack_50c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar158._0_4_) = auVar151._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar151,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar151,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._8_4_) = uVar25;
  }
  uVar32 = fStack_47c * fStack_55c * fVar182;
  uVar31 = fStack_480 * fStack_560 * fVar181;
  uVar30 = fStack_484 * fStack_564 * fVar180;
  uVar29 = local_488 * local_568 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar151,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._12_4_) = uVar25;
    auVar87._0_4_ = (float)local_558._0_4_ + (float)uVar29;
    auVar87._4_4_ = (float)local_558._4_4_ + (float)uVar30;
    auVar87._8_4_ = fStack_550 + (float)uVar31;
    auVar87._12_4_ = fStack_54c + (float)uVar32;
  }
  else {
    auVar87._0_4_ = (float)local_558._0_4_ + (float)uVar29;
    auVar87._4_4_ = (float)local_558._4_4_ + (float)uVar30;
    auVar87._8_4_ = fStack_550 + (float)uVar31;
    auVar87._12_4_ = fStack_54c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar158._0_4_) = auVar87._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar158._0_4_) = local_568;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._12_4_) = uVar25;
  }
  auVar113._0_4_ = local_3c8 + fVar222 * local_3e8 * fVar163;
  auVar113._4_4_ = fStack_3c4 + fVar228 * fStack_3e4 * fVar93;
  auVar113._8_4_ = fStack_3c0 + fVar231 * fStack_3e0 * fVar92;
  auVar113._12_4_ = fStack_3bc + fVar234 * fStack_3dc * fVar91;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar149._0_4_) = auVar113._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar113,1);
    *(undefined8 *)(param_1 + auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar113,2);
    *(undefined8 *)(param_1 + auVar149._8_4_) = uVar25;
  }
  uVar32 = fVar141 * fStack_3dc * fVar91;
  uVar31 = fVar134 * fStack_3e0 * fVar92;
  uVar30 = fVar131 * fStack_3e4 * fVar93;
  uVar29 = fVar127 * local_3e8 * fVar163;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar113,3);
    *(undefined8 *)(param_1 + auVar149._12_4_) = uVar25;
    auVar88._0_4_ = local_3b8 + (float)uVar29;
    auVar88._4_4_ = fStack_3b4 + (float)uVar30;
    auVar88._8_4_ = fStack_3b0 + (float)uVar31;
    auVar88._12_4_ = fStack_3ac + (float)uVar32;
  }
  else {
    auVar88._0_4_ = local_3b8 + (float)uVar29;
    auVar88._4_4_ = fStack_3b4 + (float)uVar30;
    auVar88._8_4_ = fStack_3b0 + (float)uVar31;
    auVar88._12_4_ = fStack_3ac + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar149._0_4_) = auVar88._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._8_4_) = uVar25;
  }
  uVar32 = fVar91 * fVar182 * fStack_3dc;
  uVar31 = fVar92 * fVar181 * fStack_3e0;
  uVar30 = fVar93 * fVar180 * fStack_3e4;
  uVar29 = fVar163 * fVar170 * local_3e8;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._12_4_) = uVar25;
    auVar89._0_4_ = fVar152 + (float)uVar29;
    auVar89._4_4_ = fVar153 + (float)uVar30;
    auVar89._8_4_ = fVar154 + (float)uVar31;
    auVar89._12_4_ = fVar155 + (float)uVar32;
  }
  else {
    auVar89._0_4_ = fVar152 + (float)uVar29;
    auVar89._4_4_ = fVar153 + (float)uVar30;
    auVar89._8_4_ = fVar154 + (float)uVar31;
    auVar89._12_4_ = fVar155 + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar149._0_4_) = auVar89._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar89,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar89,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar89,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar149._0_4_) = local_3e8;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar199,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar199,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar199,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._12_4_) = uVar25;
  }
  return;
}

// ApplyXPBDEmbeddedFaceSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector6_5D__3E_un_3C_s_5B__c_unFVector6f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4 @ 1408f0200

/* WARNING: Removing unreachable block (ram,0x0001408f2609) */
/* WARNING: Removing unreachable block (ram,0x0001408f2654) */
/* WARNING: Removing unreachable block (ram,0x0001408f456e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedFaceSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector6_5D__3E_un_3C_s_5B__c_unFVector6f_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_CunbREFs_5B__c_unFVector2f_5D_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,byte param_8,float *param_9,longlong param_10,
               byte param_11,float *param_12,longlong param_13,byte param_14,float *param_15,
               longlong param_16,uint param_17)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  byte bVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint *puVar47;
  longlong lVar48;
  ulonglong uVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  byte bVar57;
  uint uVar58;
  ulonglong uVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  ulonglong uVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  bool bVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  float fVar83;
  float fVar98;
  float fVar100;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar101;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar99;
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
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar121;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar137;
  float fVar141;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar138;
  float fVar139;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar133 [16];
  float fVar140;
  float fVar144;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar150;
  float fVar152;
  float fVar158;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar153 [16];
  float fVar151;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar171;
  float fVar172;
  float fVar173;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  float fVar180;
  float fVar181;
  float fVar187;
  float fVar188;
  float fVar189;
  undefined1 auVar182 [16];
  float fVar190;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  float fVar206;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  float fVar207;
  float fVar208;
  float fVar214;
  float fVar215;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar216;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  float fVar217;
  float fVar227;
  float fVar228;
  undefined1 auVar218 [16];
  float fVar229;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  float fVar236;
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  float fVar240;
  float fVar241;
  undefined1 auVar237 [16];
  float fVar242;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  float fVar250;
  float fVar251;
  undefined1 auVar243 [16];
  float fVar252;
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  float fVar257;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  float fVar264;
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  undefined1 local_6e8 [8];
  float fStack_6e0;
  float fStack_6dc;
  undefined1 local_6d8 [8];
  float fStack_6d0;
  float fStack_6cc;
  undefined1 local_6c8 [8];
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  undefined1 local_678 [8];
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  undefined1 local_618 [8];
  float fStack_610;
  float fStack_60c;
  undefined1 local_608 [16];
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  undefined1 local_568 [8];
  float fStack_560;
  float fStack_55c;
  undefined1 local_548 [8];
  float fStack_540;
  float fStack_53c;
  undefined1 local_538 [16];
  undefined1 local_528 [8];
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [8];
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  undefined1 local_498 [16];
  undefined1 local_488 [8];
  float fStack_480;
  float fStack_47c;
  undefined8 local_478;
  float fStack_470;
  float fStack_46c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined1 auVar114 [16];
  undefined1 auVar157 [16];
  undefined1 auVar186 [16];
  
  uVar58 = param_17 + 3;
  if (-1 < (int)param_17) {
    uVar58 = param_17;
  }
  uVar58 = uVar58 & 0xfffffffc;
  uVar59 = (ulonglong)uVar58;
  if ((int)uVar58 < 1) {
    uVar49 = 0;
  }
  else {
    uVar59 = 0x14;
    uVar49 = 0;
    uVar67 = 0;
    do {
      uVar66 = uVar67 & 0xffffffff;
      fStack_49c = *param_9;
      local_4a8._0_4_ = fStack_49c;
      local_4a8._4_4_ = fStack_49c;
      fStack_4a0 = fStack_49c;
      if ((param_8 & 1) != 0) {
        pfVar1 = (float *)(param_10 + uVar66);
        fVar264 = param_9[1];
        local_4a8._0_4_ = fStack_49c + fVar264 * *pfVar1;
        local_4a8._4_4_ = fStack_49c + fVar264 * pfVar1[1];
        fStack_4a0 = fStack_49c + fVar264 * pfVar1[2];
        fStack_49c = fStack_49c + fVar264 * pfVar1[3];
      }
      fStack_4fc = *param_12;
      local_508._0_4_ = fStack_4fc;
      local_508._4_4_ = fStack_4fc;
      fStack_500 = fStack_4fc;
      if ((param_11 & 1) != 0) {
        pfVar1 = (float *)(param_13 + uVar66);
        fVar264 = param_12[1];
        local_508._0_4_ = fStack_4fc + fVar264 * *pfVar1;
        local_508._4_4_ = fStack_4fc + fVar264 * pfVar1[1];
        fStack_500 = fStack_4fc + fVar264 * pfVar1[2];
        fStack_4fc = fStack_4fc + fVar264 * pfVar1[3];
      }
      auVar107 = *(undefined1 (*) [16])(param_3 + -0x50 + uVar59 * 4);
      auVar210 = *(undefined1 (*) [16])(param_3 + -0x40 + uVar59 * 4);
      auVar232 = *(undefined1 (*) [16])(param_3 + -0x30 + uVar59 * 4);
      auVar220 = *(undefined1 (*) [16])(param_3 + -0x20 + uVar59 * 4);
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x10 + uVar59 * 4);
      auVar109 = *(undefined1 (*) [16])(param_3 + uVar59 * 4);
      auVar183 = pblendw(auVar232,auVar107,0xf0);
      auVar86 = pblendw(auVar107,auVar210,0xf0);
      auVar87 = pblendw(auVar109,auVar220,0xf0);
      auVar123 = pblendw(auVar220,auVar108,0xf0);
      auVar106 = pblendw(auVar210,auVar232,0xf0);
      auVar131 = pblendw(auVar108,auVar109,0xf0);
      auVar107 = *(undefined1 (*) [16])(param_4 + -0x50 + uVar59 * 4);
      auVar210 = *(undefined1 (*) [16])(param_4 + -0x40 + uVar59 * 4);
      auVar232 = *(undefined1 (*) [16])(param_4 + -0x30 + uVar59 * 4);
      auVar220 = *(undefined1 (*) [16])(param_4 + -0x20 + uVar59 * 4);
      auVar108 = *(undefined1 (*) [16])(param_4 + -0x10 + uVar59 * 4);
      auVar109 = *(undefined1 (*) [16])(param_4 + uVar59 * 4);
      auVar237 = blendps(auVar210,auVar107,3);
      auVar218 = blendps(auVar108,auVar220,3);
      auVar243 = blendps(auVar107,auVar232,3);
      auVar107 = blendps(auVar220,auVar109,3);
      auVar232 = blendps(auVar232,auVar210,3);
      auVar210 = blendps(auVar109,auVar108,3);
      fVar240 = auVar237._4_4_;
      fVar241 = auVar237._8_4_;
      fVar242 = auVar237._12_4_;
      fVar217 = auVar218._0_4_;
      fVar227 = auVar218._4_4_;
      fVar228 = auVar218._8_4_;
      fVar229 = auVar218._12_4_;
      fVar191 = auVar237._0_4_;
      fVar250 = auVar243._4_4_;
      fVar251 = auVar243._8_4_;
      fVar252 = auVar243._12_4_;
      fVar104 = auVar107._0_4_;
      fVar116 = auVar107._4_4_;
      fVar117 = auVar107._8_4_;
      fVar120 = auVar107._12_4_;
      fVar257 = auVar243._0_4_;
      fVar236 = auVar232._12_4_;
      fVar208 = auVar210._0_4_;
      fVar214 = auVar210._4_4_;
      fVar215 = auVar210._8_4_;
      fVar216 = auVar210._12_4_;
      fVar105 = auVar232._0_4_;
      fVar99 = auVar232._4_4_;
      fVar103 = auVar232._8_4_;
      lVar37 = (longlong)(auVar86._0_4_ << 4);
      lVar60 = (longlong)(auVar86._8_4_ * 0x10);
      lVar51 = (longlong)(auVar123._0_4_ << 4);
      lVar34 = (longlong)(auVar123._8_4_ << 4);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar60),
                          0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + lVar51),0x20);
      auVar108 = insertps(auVar107,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                          *(undefined4 *)(param_1 + 4 + lVar60),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar51),0x20);
      auVar132 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                          *(undefined4 *)(param_1 + 8 + lVar60),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 8 + lVar51),0x20);
      auVar244 = insertps(auVar107,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      lVar61 = (longlong)(auVar86._4_4_ << 4);
      lVar52 = (longlong)(auVar86._12_4_ * 0x10);
      lVar38 = (longlong)(auVar123._4_4_ << 4);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar61)),*(undefined4 *)(param_1 + lVar52),
                          0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + lVar38),0x20);
      lVar68 = (longlong)(auVar123._12_4_ << 4);
      auVar153 = insertps(auVar107,*(undefined4 *)(param_1 + lVar68),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar61)),
                          *(undefined4 *)(param_1 + 4 + lVar52),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar38),0x20);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar68),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar61)),
                          *(undefined4 *)(param_1 + 8 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar38),0x20);
      auVar109 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar68),0x30);
      lVar53 = (longlong)(auVar183._8_4_ << 4);
      lVar45 = (longlong)(auVar183._0_4_ * 0x10);
      lVar39 = (longlong)(auVar87._8_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar45),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar39),0x20);
      lVar62 = (longlong)(auVar87._0_4_ << 4);
      auVar194 = insertps(auVar210,*(undefined4 *)(param_1 + lVar62),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar45),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar218 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar62),0x30);
      fVar127 = fVar251 * auVar194._0_4_ + fVar240 * auVar153._0_4_ + fVar191 * auVar108._0_4_;
      fVar137 = fVar257 * auVar194._4_4_ + fVar242 * auVar153._4_4_ + fVar241 * auVar108._4_4_;
      fVar141 = fVar117 * auVar194._8_4_ + fVar227 * auVar153._8_4_ + fVar217 * auVar108._8_4_;
      fVar145 = fVar104 * auVar194._12_4_ + fVar229 * auVar153._12_4_ + fVar228 * auVar108._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar45),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar184 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar62),0x30);
      lVar69 = (longlong)(auVar183._12_4_ << 4);
      lVar54 = (longlong)(auVar183._4_4_ * 0x10);
      lVar70 = (longlong)(auVar87._12_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar69)),*(undefined4 *)(param_1 + lVar54),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar70),0x20);
      lVar63 = (longlong)(auVar87._4_4_ << 4);
      auVar219 = insertps(auVar210,*(undefined4 *)(param_1 + lVar63),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar69)),
                          *(undefined4 *)(param_1 + 4 + lVar54),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar70),0x20);
      auVar195 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar63),0x30);
      fVar128 = fVar251 * auVar218._0_4_ + fVar240 * auVar107._0_4_ + fVar191 * auVar132._0_4_;
      fVar138 = fVar257 * auVar218._4_4_ + fVar242 * auVar107._4_4_ + fVar241 * auVar132._4_4_;
      fVar142 = fVar117 * auVar218._8_4_ + fVar227 * auVar107._8_4_ + fVar217 * auVar132._8_4_;
      fVar146 = fVar104 * auVar218._12_4_ + fVar229 * auVar107._12_4_ + fVar228 * auVar132._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar69)),
                          *(undefined4 *)(param_1 + 8 + lVar54),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar70),0x20);
      fVar102 = fVar251 * auVar184._0_4_ + fVar240 * auVar109._0_4_ + fVar191 * auVar244._0_4_;
      fVar115 = fVar257 * auVar184._4_4_ + fVar242 * auVar109._4_4_ + fVar241 * auVar244._4_4_;
      fVar119 = fVar117 * auVar184._8_4_ + fVar227 * auVar109._8_4_ + fVar217 * auVar244._8_4_;
      fVar121 = fVar104 * auVar184._12_4_ + fVar229 * auVar109._12_4_ + fVar228 * auVar244._12_4_;
      auVar238 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar63),0x30);
      lVar40 = (longlong)(auVar106._0_4_ << 4);
      lVar44 = (longlong)(auVar106._8_4_ * 0x10);
      lVar72 = (longlong)(auVar131._0_4_ << 4);
      lVar73 = (longlong)(auVar131._8_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),*(undefined4 *)(param_1 + lVar44),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar72),0x20);
      auVar237 = insertps(auVar210,*(undefined4 *)(param_1 + lVar73),0x30);
      auVar124._0_4_ = (float)((uint)fVar252 ^ __xmm_80000000800000008000000080000000);
      auVar124._4_4_ = (float)((uint)fVar250 ^ _UNK_150651574);
      auVar124._8_4_ = (float)((uint)fVar120 ^ _UNK_150651578);
      auVar124._12_4_ = (float)((uint)fVar116 ^ _UNK_15065157c);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                          *(undefined4 *)(param_1 + 4 + lVar44),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar72),0x20);
      auVar243 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar73),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                          *(undefined4 *)(param_1 + 8 + lVar44),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar72),0x20);
      auVar110 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar73),0x30);
      lVar48 = (longlong)(auVar106._4_4_ << 4);
      lVar74 = (longlong)(auVar106._12_4_ * 0x10);
      lVar75 = (longlong)(auVar131._4_4_ << 4);
      lVar43 = (longlong)(auVar131._12_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar48)),*(undefined4 *)(param_1 + lVar74),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar75),0x20);
      auVar111 = insertps(auVar210,*(undefined4 *)(param_1 + lVar43),0x30);
      fVar129 = (auVar219._0_4_ * auVar124._0_4_ - fVar105 * auVar237._0_4_) -
                fVar99 * auVar111._0_4_;
      fVar139 = (auVar219._4_4_ * auVar124._4_4_ - fVar103 * auVar237._4_4_) -
                fVar236 * auVar111._4_4_;
      fVar143 = (auVar219._8_4_ * auVar124._8_4_ - fVar208 * auVar237._8_4_) -
                fVar214 * auVar111._8_4_;
      fVar147 = (auVar219._12_4_ * auVar124._12_4_ - fVar215 * auVar237._12_4_) -
                fVar216 * auVar111._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                          *(undefined4 *)(param_1 + 4 + lVar74),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar75),0x20);
      auVar112 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      fVar192 = (auVar195._0_4_ * auVar124._0_4_ - fVar105 * auVar243._0_4_) -
                fVar99 * auVar112._0_4_;
      fVar202 = (auVar195._4_4_ * auVar124._4_4_ - fVar103 * auVar243._4_4_) -
                fVar236 * auVar112._4_4_;
      fVar204 = (auVar195._8_4_ * auVar124._8_4_ - fVar208 * auVar243._8_4_) -
                fVar214 * auVar112._8_4_;
      fVar206 = (auVar195._12_4_ * auVar124._12_4_ - fVar215 * auVar243._12_4_) -
                fVar216 * auVar112._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                          *(undefined4 *)(param_1 + 8 + lVar74),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar75),0x20);
      auVar113 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      fVar151 = (auVar238._0_4_ * auVar124._0_4_ - fVar105 * auVar110._0_4_) -
                fVar99 * auVar113._0_4_;
      fVar159 = (auVar238._4_4_ * auVar124._4_4_ - fVar103 * auVar110._4_4_) -
                fVar236 * auVar113._4_4_;
      fVar165 = (auVar238._8_4_ * auVar124._8_4_ - fVar208 * auVar110._8_4_) -
                fVar214 * auVar113._8_4_;
      fVar171 = (auVar238._12_4_ * auVar124._12_4_ - fVar215 * auVar110._12_4_) -
                fVar216 * auVar113._12_4_;
      uVar50 = *(uint *)(param_1 + 0xc + lVar37);
      uVar80 = *(uint *)(param_1 + 0xc + lVar60);
      auVar210 = insertps(ZEXT416(uVar50),ZEXT416(uVar80),0x10);
      uVar82 = *(uint *)(param_1 + 0xc + lVar51);
      auVar210 = insertps(auVar210,ZEXT416(uVar82),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar34);
      auVar232 = insertps(auVar210,ZEXT416(uVar3),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar61);
      uVar5 = *(uint *)(param_1 + 0xc + lVar52);
      auVar210 = insertps(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar38);
      auVar210 = insertps(auVar210,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar68);
      auVar210 = insertps(auVar210,ZEXT416(uVar7),0x30);
      fVar181 = auVar232._0_4_;
      fVar160 = auVar232._4_4_;
      fVar166 = auVar232._8_4_;
      fVar172 = auVar232._12_4_;
      fVar122 = auVar210._0_4_;
      fVar162 = auVar210._4_4_;
      fVar193 = auVar210._8_4_;
      fVar148 = auVar210._12_4_;
      uVar8 = *(uint *)(param_1 + 0xc + lVar53);
      uVar9 = *(uint *)(param_1 + 0xc + lVar45);
      auVar210 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar39);
      auVar210 = insertps(auVar210,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar62);
      auVar210 = insertps(auVar210,ZEXT416(uVar11),0x30);
      fVar130 = auVar210._0_4_;
      fVar163 = auVar210._4_4_;
      fVar203 = auVar210._8_4_;
      fVar149 = auVar210._12_4_;
      uVar12 = *(uint *)(param_1 + 0xc + lVar69);
      uVar13 = *(uint *)(param_1 + 0xc + lVar54);
      auVar210 = insertps(ZEXT416(uVar12),ZEXT416(uVar13),0x10);
      uVar14 = *(uint *)(param_1 + 0xc + lVar70);
      auVar210 = insertps(auVar210,ZEXT416(uVar14),0x20);
      uVar15 = *(uint *)(param_1 + 0xc + lVar63);
      auVar232 = insertps(auVar210,ZEXT416(uVar15),0x30);
      uVar16 = *(uint *)(param_1 + 0xc + lVar40);
      uVar17 = *(uint *)(param_1 + 0xc + lVar44);
      auVar210 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      uVar18 = *(uint *)(param_1 + 0xc + lVar72);
      auVar210 = insertps(auVar210,ZEXT416(uVar18),0x20);
      uVar19 = *(uint *)(param_1 + 0xc + lVar73);
      auVar210 = insertps(auVar210,ZEXT416(uVar19),0x30);
      fVar188 = auVar232._0_4_;
      fVar161 = auVar232._4_4_;
      fVar167 = auVar232._8_4_;
      fVar173 = auVar232._12_4_;
      fVar140 = auVar210._0_4_;
      fVar168 = auVar210._4_4_;
      fVar205 = auVar210._8_4_;
      fVar118 = auVar210._12_4_;
      lVar64 = (longlong)(auVar86._0_4_ * 3);
      lVar35 = (longlong)(auVar86._8_4_ * 3);
      auVar245 = insertps(ZEXT416(*(uint *)(param_2 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + lVar35 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar35 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar35 * 4),0x10);
      uVar20 = *(uint *)(param_1 + 0xc + lVar48);
      uVar21 = *(uint *)(param_1 + 0xc + lVar74);
      auVar210 = insertps(ZEXT416(uVar20),ZEXT416(uVar21),0x10);
      uVar22 = *(uint *)(param_1 + 0xc + lVar75);
      auVar210 = insertps(auVar210,ZEXT416(uVar22),0x20);
      uVar23 = *(uint *)(param_1 + 0xc + lVar43);
      auVar210 = insertps(auVar210,ZEXT416(uVar23),0x30);
      fVar144 = auVar210._0_4_;
      fVar169 = auVar210._4_4_;
      fVar207 = auVar210._8_4_;
      fVar152 = auVar210._12_4_;
      lVar35 = (longlong)(auVar123._0_4_ * 3);
      auVar245 = insertps(auVar245,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar123._8_4_ * 3);
      auVar246 = insertps(auVar245,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar221 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar196 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar86._4_4_ * 3);
      lVar64 = (longlong)(auVar86._12_4_ * 3);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar123._4_4_ * 3);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar123._12_4_ * 3);
      auVar245 = insertps(auVar232,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar174 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar86 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar183._8_4_ * 3);
      lVar64 = (longlong)(auVar183._0_4_ * 3);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar87._8_4_ * 3);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar87._0_4_ * 3);
      auVar233 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar123 = insertps(auVar210,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar154 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar183._12_4_ * 3);
      lVar64 = (longlong)(auVar183._4_4_ * 3);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar87._12_4_ * 3);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar87._4_4_ * 3);
      auVar247 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar222 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar197 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar106._0_4_ * 3);
      lVar64 = (longlong)(auVar106._8_4_ * 3);
      lVar55 = (longlong)(auVar131._0_4_ * 3);
      lVar65 = (longlong)(auVar131._8_4_ * 3);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar55 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar65 * 4),0x30);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar55 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 8 + lVar55 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar65 * 4),0x30);
      auVar87 = insertps(auVar220,*(undefined4 *)(param_2 + 8 + lVar65 * 4),0x30);
      lVar35 = (longlong)(auVar106._4_4_ * 3);
      lVar64 = (longlong)(auVar106._12_4_ * 3);
      auVar106 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar183 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar131._4_4_ * 3);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar183 = insertps(auVar183,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar131._12_4_ * 3);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar131 = insertps(auVar183,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      fVar264 = *param_15;
      fVar177 = fVar264;
      fVar178 = fVar264;
      fVar179 = fVar264;
      if ((param_14 & 1) != 0) {
        pfVar1 = (float *)(param_16 + uVar66);
        fVar83 = param_15[1];
        fVar177 = fVar264 + fVar83 * pfVar1[1];
        fVar178 = fVar264 + fVar83 * pfVar1[2];
        fVar179 = fVar264 + fVar83 * pfVar1[3];
        fVar264 = fVar264 + fVar83 * *pfVar1;
      }
      auVar258._0_4_ = fVar127 - fVar129;
      auVar258._4_4_ = fVar137 - fVar139;
      auVar258._8_4_ = fVar141 - fVar143;
      auVar258._12_4_ = fVar145 - fVar147;
      auVar253._0_4_ = fVar128 - fVar192;
      auVar253._4_4_ = fVar138 - fVar202;
      auVar253._8_4_ = fVar142 - fVar204;
      auVar253._12_4_ = fVar146 - fVar206;
      auVar230._0_4_ = fVar102 - fVar151;
      auVar230._4_4_ = fVar115 - fVar159;
      auVar230._8_4_ = fVar119 - fVar165;
      auVar230._12_4_ = fVar121 - fVar171;
      auVar254._0_4_ =
           auVar230._0_4_ * auVar230._0_4_ +
           auVar253._0_4_ * auVar253._0_4_ + auVar258._0_4_ * auVar258._0_4_;
      auVar254._4_4_ =
           auVar230._4_4_ * auVar230._4_4_ +
           auVar253._4_4_ * auVar253._4_4_ + auVar258._4_4_ * auVar258._4_4_;
      auVar254._8_4_ =
           auVar230._8_4_ * auVar230._8_4_ +
           auVar253._8_4_ * auVar253._8_4_ + auVar258._8_4_ * auVar258._8_4_;
      auVar254._12_4_ =
           auVar230._12_4_ * auVar230._12_4_ +
           auVar253._12_4_ * auVar253._12_4_ + auVar258._12_4_ * auVar258._12_4_;
      auVar182 = sqrtps(auVar124,auVar254);
      uVar77 = -(uint)(auVar254._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar78 = -(uint)(auVar254._4_4_ < _UNK_1506895e4);
      uVar79 = -(uint)(auVar254._8_4_ < _UNK_1506895e8);
      uVar81 = -(uint)(auVar254._12_4_ < _UNK_1506895ec);
      auVar260._4_4_ = uVar78;
      auVar260._0_4_ = uVar77;
      auVar260._8_4_ = uVar79;
      auVar260._12_4_ = uVar81;
      auVar259 = divps(auVar258,auVar182);
      auVar183._4_4_ = _UNK_15076b1f4;
      auVar183._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar183._8_4_ = _UNK_15076b1f8;
      auVar183._12_4_ = _UNK_15076b1fc;
      auVar260 = blendvps(auVar259,auVar183,auVar260);
      auVar183 = *(undefined1 (*) [16])(param_5 + uVar66);
      auVar85._4_4_ = -(uint)(0.0 <= (float)(~uVar78 & auVar182._4_4_) - auVar183._4_4_);
      auVar85._0_4_ = -(uint)(0.0 <= (float)(~uVar77 & auVar182._0_4_) - auVar183._0_4_);
      auVar259._4_4_ = _UNK_15076b1f4;
      auVar259._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar259._8_4_ = _UNK_15076b1f8;
      auVar259._12_4_ = _UNK_15076b1fc;
      auVar259 = divps(auVar259,auVar183);
      auVar84._4_4_ = -(uint)(auVar183._4_4_ < _UNK_1506895d4);
      auVar84._0_4_ = -(uint)(auVar183._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar84._8_4_ = -(uint)(auVar183._8_4_ < _UNK_1506895d8);
      auVar84._12_4_ = -(uint)(auVar183._12_4_ < _UNK_1506895dc);
      auVar231._4_4_ = _UNK_15076b1f4;
      auVar231._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar231._8_4_ = _UNK_15076b1f8;
      auVar231._12_4_ = _UNK_15076b1fc;
      auVar259 = blendvps(auVar259,auVar231,auVar84);
      auVar85._8_4_ = -(uint)(0.0 <= (float)(~uVar79 & auVar182._8_4_) - auVar183._8_4_);
      auVar85._12_4_ = -(uint)(0.0 <= (float)(~uVar81 & auVar182._12_4_) - auVar183._12_4_);
      auVar183 = blendvps(_local_508,_local_4a8,auVar85);
      auVar254 = divps(auVar253,auVar182);
      auVar231 = divps(auVar230,auVar182);
      fVar150 = (float)(~uVar77 & auVar254._0_4_);
      fVar158 = (float)(~uVar78 & auVar254._4_4_);
      fVar164 = (float)(~uVar79 & auVar254._8_4_);
      fVar170 = (float)(~uVar81 & auVar254._12_4_);
      fVar180 = (float)(~uVar77 & auVar231._0_4_);
      fVar187 = (float)(~uVar78 & auVar231._4_4_);
      fVar189 = (float)(~uVar79 & auVar231._8_4_);
      fVar190 = (float)(~uVar81 & auVar231._12_4_);
      auVar182._0_4_ =
           fVar251 * fVar130 + fVar240 * fVar122 + fVar191 * fVar181 +
           ((fVar188 * auVar124._0_4_ - fVar105 * fVar140) - fVar99 * fVar144);
      auVar182._4_4_ =
           fVar257 * fVar163 + fVar242 * fVar162 + fVar241 * fVar160 +
           ((fVar161 * auVar124._4_4_ - fVar103 * fVar168) - fVar236 * fVar169);
      auVar182._8_4_ =
           fVar117 * fVar203 + fVar227 * fVar193 + fVar217 * fVar166 +
           ((fVar167 * auVar124._8_4_ - fVar208 * fVar205) - fVar214 * fVar207);
      auVar182._12_4_ =
           fVar104 * fVar149 + fVar229 * fVar148 + fVar228 * fVar172 +
           ((fVar173 * auVar124._12_4_ - fVar215 * fVar118) - fVar216 * fVar152);
      auVar183 = divps(auVar183,auVar182);
      auVar183 = sqrtps(auVar85,auVar183);
      fVar83 = auVar183._0_4_ * (fVar264 + fVar264) * auVar259._0_4_ * param_7;
      fVar98 = auVar183._4_4_ * (fVar177 + fVar177) * auVar259._4_4_ * param_7;
      fVar100 = auVar183._8_4_ * (fVar178 + fVar178) * auVar259._8_4_ * param_7;
      fVar101 = auVar183._12_4_ * (fVar179 + fVar179) * auVar259._12_4_ * param_7;
      pfVar1 = (float *)(param_6 + uVar66);
      fVar264 = *pfVar1;
      fVar177 = pfVar1[1];
      fVar178 = pfVar1[2];
      fVar179 = pfVar1[3];
      auVar209._0_4_ =
           ((((fVar102 -
              (auVar154._0_4_ * fVar251 + auVar86._0_4_ * fVar240 + auVar196._0_4_ * fVar191)) -
             fVar151) +
            ((auVar197._0_4_ * auVar124._0_4_ - auVar87._0_4_ * fVar105) - auVar131._0_4_ * fVar99))
            * fVar180 +
           (((fVar128 -
             (auVar123._0_4_ * fVar251 + auVar174._0_4_ * fVar240 + auVar221._0_4_ * fVar191)) -
            fVar192) +
           ((auVar222._0_4_ * auVar124._0_4_ - auVar232._0_4_ * fVar105) - auVar220._0_4_ * fVar99))
           * fVar150 +
           (((fVar127 -
             (auVar233._0_4_ * fVar251 + auVar245._0_4_ * fVar240 + auVar246._0_4_ * fVar191)) -
            fVar129) +
           ((auVar247._0_4_ * auVar124._0_4_ - auVar210._0_4_ * fVar105) - auVar106._0_4_ * fVar99))
           * auVar260._0_4_) * (float)((uint)fVar83 ^ __xmm_80000000800000008000000080000000) -
           fVar264;
      auVar209._4_4_ =
           ((((fVar115 -
              (auVar154._4_4_ * fVar257 + auVar86._4_4_ * fVar242 + auVar196._4_4_ * fVar241)) -
             fVar159) +
            ((auVar197._4_4_ * auVar124._4_4_ - auVar87._4_4_ * fVar103) - auVar131._4_4_ * fVar236)
            ) * fVar187 +
           (((fVar138 -
             (auVar123._4_4_ * fVar257 + auVar174._4_4_ * fVar242 + auVar221._4_4_ * fVar241)) -
            fVar202) +
           ((auVar222._4_4_ * auVar124._4_4_ - auVar232._4_4_ * fVar103) - auVar220._4_4_ * fVar236)
           ) * fVar158 +
           (((fVar137 -
             (auVar233._4_4_ * fVar257 + auVar245._4_4_ * fVar242 + auVar246._4_4_ * fVar241)) -
            fVar139) +
           ((auVar247._4_4_ * auVar124._4_4_ - auVar210._4_4_ * fVar103) - auVar106._4_4_ * fVar236)
           ) * auVar260._4_4_) * (float)((uint)fVar98 ^ _UNK_150651574) - fVar177;
      auVar209._8_4_ =
           ((((fVar119 -
              (auVar154._8_4_ * fVar117 + auVar86._8_4_ * fVar227 + auVar196._8_4_ * fVar217)) -
             fVar165) +
            ((auVar197._8_4_ * auVar124._8_4_ - auVar87._8_4_ * fVar208) - auVar131._8_4_ * fVar214)
            ) * fVar189 +
           (((fVar142 -
             (auVar123._8_4_ * fVar117 + auVar174._8_4_ * fVar227 + auVar221._8_4_ * fVar217)) -
            fVar204) +
           ((auVar222._8_4_ * auVar124._8_4_ - auVar232._8_4_ * fVar208) - auVar220._8_4_ * fVar214)
           ) * fVar164 +
           (((fVar141 -
             (auVar233._8_4_ * fVar117 + auVar245._8_4_ * fVar227 + auVar246._8_4_ * fVar217)) -
            fVar143) +
           ((auVar247._8_4_ * auVar124._8_4_ - auVar210._8_4_ * fVar208) - auVar106._8_4_ * fVar214)
           ) * auVar260._8_4_) * (float)((uint)fVar100 ^ _UNK_150651578) - fVar178;
      auVar209._12_4_ =
           ((((fVar121 -
              (auVar154._12_4_ * fVar104 + auVar86._12_4_ * fVar229 + auVar196._12_4_ * fVar228)) -
             fVar171) +
            ((auVar197._12_4_ * auVar124._12_4_ - auVar87._12_4_ * fVar215) -
            auVar131._12_4_ * fVar216)) * fVar190 +
           (((fVar146 -
             (auVar123._12_4_ * fVar104 + auVar174._12_4_ * fVar229 + auVar221._12_4_ * fVar228)) -
            fVar206) +
           ((auVar222._12_4_ * auVar124._12_4_ - auVar232._12_4_ * fVar215) -
           auVar220._12_4_ * fVar216)) * fVar170 +
           (((fVar145 -
             (auVar233._12_4_ * fVar104 + auVar245._12_4_ * fVar229 + auVar246._12_4_ * fVar228)) -
            fVar147) +
           ((auVar247._12_4_ * auVar124._12_4_ - auVar210._12_4_ * fVar215) -
           auVar106._12_4_ * fVar216)) * auVar260._12_4_) * (float)((uint)fVar101 ^ _UNK_15065157c)
           - fVar179;
      auVar86._0_4_ = auVar182._0_4_ * fVar83 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar86._4_4_ = auVar182._4_4_ * fVar98 + _UNK_15076b1f4;
      auVar86._8_4_ = auVar182._8_4_ * fVar100 + _UNK_15076b1f8;
      auVar86._12_4_ = auVar182._12_4_ * fVar101 + _UNK_15076b1fc;
      auVar210 = divps(auVar209,auVar86);
      fVar102 = auVar210._0_4_;
      fVar127 = auVar260._0_4_ * fVar102;
      fVar115 = auVar210._4_4_;
      fVar128 = auVar260._4_4_ * fVar115;
      fVar119 = auVar210._8_4_;
      fVar129 = auVar260._8_4_ * fVar119;
      fVar121 = auVar210._12_4_;
      fVar137 = auVar260._12_4_ * fVar121;
      auVar106._0_4_ = auVar108._0_4_ + fVar181 * fVar127 * fVar191;
      auVar106._4_4_ = auVar108._4_4_ + fVar160 * fVar128 * fVar241;
      auVar106._8_4_ = auVar108._8_4_ + fVar166 * fVar129 * fVar217;
      auVar106._12_4_ = auVar108._12_4_ + fVar172 * fVar137 * fVar228;
      *(float *)(param_1 + lVar37) = auVar106._0_4_;
      uVar24 = extractps(auVar106,1);
      *(undefined8 *)(param_1 + lVar60) = uVar24;
      uVar24 = extractps(auVar106,2);
      *(undefined8 *)(param_1 + lVar51) = uVar24;
      uVar24 = extractps(auVar106,3);
      *(undefined8 *)(param_1 + lVar34) = uVar24;
      fVar150 = fVar150 * fVar102;
      fVar158 = fVar158 * fVar115;
      fVar164 = fVar164 * fVar119;
      fVar170 = fVar170 * fVar121;
      auVar123._0_4_ = auVar132._0_4_ + fVar181 * fVar150 * fVar191;
      auVar123._4_4_ = auVar132._4_4_ + fVar160 * fVar158 * fVar241;
      auVar123._8_4_ = auVar132._8_4_ + fVar166 * fVar164 * fVar217;
      auVar123._12_4_ = auVar132._12_4_ + fVar172 * fVar170 * fVar228;
      fVar180 = fVar180 * fVar102;
      fVar187 = fVar187 * fVar115;
      fVar189 = fVar189 * fVar119;
      fVar190 = fVar190 * fVar121;
      *(float *)(param_1 + 4 + lVar37) = auVar123._0_4_;
      uVar24 = extractps(auVar123,1);
      *(undefined8 *)(param_1 + 4 + lVar60) = uVar24;
      uVar24 = extractps(auVar123,2);
      *(undefined8 *)(param_1 + 4 + lVar51) = uVar24;
      auVar210._0_4_ = auVar244._0_4_ + fVar181 * fVar180 * fVar191;
      auVar210._4_4_ = auVar244._4_4_ + fVar160 * fVar187 * fVar241;
      auVar210._8_4_ = auVar244._8_4_ + fVar166 * fVar189 * fVar217;
      auVar210._12_4_ = auVar244._12_4_ + fVar172 * fVar190 * fVar228;
      uVar24 = extractps(auVar123,3);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar24;
      *(float *)(param_1 + 8 + lVar37) = auVar210._0_4_;
      uVar24 = extractps(auVar210,1);
      *(undefined8 *)(param_1 + 8 + lVar60) = uVar24;
      uVar24 = extractps(auVar210,2);
      *(undefined8 *)(param_1 + 8 + lVar51) = uVar24;
      uVar24 = extractps(auVar210,3);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar24;
      *(uint *)(param_1 + 0xc + lVar37) = uVar50;
      *(uint *)(param_1 + 0xc + lVar60) = uVar80;
      *(uint *)(param_1 + 0xc + lVar51) = uVar82;
      *(uint *)(param_1 + 0xc + lVar34) = uVar3;
      auVar154._0_4_ = auVar153._0_4_ + fVar122 * fVar127 * fVar240;
      auVar154._4_4_ = auVar153._4_4_ + fVar162 * fVar128 * fVar242;
      auVar154._8_4_ = auVar153._8_4_ + fVar193 * fVar129 * fVar227;
      auVar154._12_4_ = auVar153._12_4_ + fVar148 * fVar137 * fVar229;
      *(float *)(param_1 + lVar61) = auVar154._0_4_;
      uVar24 = extractps(auVar154,1);
      *(undefined8 *)(param_1 + lVar52) = uVar24;
      auVar131._0_4_ = auVar107._0_4_ + fVar122 * fVar150 * fVar240;
      auVar131._4_4_ = auVar107._4_4_ + fVar162 * fVar158 * fVar242;
      auVar131._8_4_ = auVar107._8_4_ + fVar193 * fVar164 * fVar227;
      auVar131._12_4_ = auVar107._12_4_ + fVar148 * fVar170 * fVar229;
      uVar24 = extractps(auVar154,2);
      *(undefined8 *)(param_1 + lVar38) = uVar24;
      uVar24 = extractps(auVar154,3);
      *(undefined8 *)(param_1 + lVar68) = uVar24;
      *(float *)(param_1 + 4 + lVar61) = auVar131._0_4_;
      uVar24 = extractps(auVar131,1);
      *(undefined8 *)(param_1 + 4 + lVar52) = uVar24;
      uVar24 = extractps(auVar131,2);
      *(undefined8 *)(param_1 + 4 + lVar38) = uVar24;
      auVar107._0_4_ = auVar109._0_4_ + fVar122 * fVar180 * fVar240;
      auVar107._4_4_ = auVar109._4_4_ + fVar162 * fVar187 * fVar242;
      auVar107._8_4_ = auVar109._8_4_ + fVar193 * fVar189 * fVar227;
      auVar107._12_4_ = auVar109._12_4_ + fVar148 * fVar190 * fVar229;
      uVar24 = extractps(auVar131,3);
      *(undefined8 *)(param_1 + 4 + lVar68) = uVar24;
      *(float *)(param_1 + 8 + lVar61) = auVar107._0_4_;
      uVar24 = extractps(auVar107,1);
      *(undefined8 *)(param_1 + 8 + lVar52) = uVar24;
      uVar24 = extractps(auVar107,2);
      *(undefined8 *)(param_1 + 8 + lVar38) = uVar24;
      uVar24 = extractps(auVar107,3);
      *(undefined8 *)(param_1 + 8 + lVar68) = uVar24;
      *(uint *)(param_1 + 0xc + lVar61) = uVar4;
      *(uint *)(param_1 + 0xc + lVar52) = uVar5;
      *(uint *)(param_1 + 0xc + lVar38) = uVar6;
      *(uint *)(param_1 + 0xc + lVar68) = uVar7;
      auVar153._0_4_ = auVar194._0_4_ + fVar130 * fVar127 * fVar251;
      auVar153._4_4_ = auVar194._4_4_ + fVar163 * fVar128 * fVar257;
      auVar153._8_4_ = auVar194._8_4_ + fVar203 * fVar129 * fVar117;
      auVar153._12_4_ = auVar194._12_4_ + fVar149 * fVar137 * fVar104;
      *(float *)(param_1 + lVar53) = auVar153._0_4_;
      uVar24 = extractps(auVar153,1);
      *(undefined8 *)(param_1 + lVar45) = uVar24;
      auVar132._0_4_ = auVar218._0_4_ + fVar130 * fVar150 * fVar251;
      auVar132._4_4_ = auVar218._4_4_ + fVar163 * fVar158 * fVar257;
      auVar132._8_4_ = auVar218._8_4_ + fVar203 * fVar164 * fVar117;
      auVar132._12_4_ = auVar218._12_4_ + fVar149 * fVar170 * fVar104;
      uVar24 = extractps(auVar153,2);
      *(undefined8 *)(param_1 + lVar39) = uVar24;
      uVar24 = extractps(auVar153,3);
      *(undefined8 *)(param_1 + lVar62) = uVar24;
      *(float *)(param_1 + 4 + lVar53) = auVar132._0_4_;
      uVar24 = extractps(auVar132,1);
      *(undefined8 *)(param_1 + 4 + lVar45) = uVar24;
      uVar24 = extractps(auVar132,2);
      *(undefined8 *)(param_1 + 4 + lVar39) = uVar24;
      auVar232._0_4_ = auVar184._0_4_ + fVar130 * fVar180 * fVar251;
      auVar232._4_4_ = auVar184._4_4_ + fVar163 * fVar187 * fVar257;
      auVar232._8_4_ = auVar184._8_4_ + fVar203 * fVar189 * fVar117;
      auVar232._12_4_ = auVar184._12_4_ + fVar149 * fVar190 * fVar104;
      uVar24 = extractps(auVar132,3);
      *(undefined8 *)(param_1 + 4 + lVar62) = uVar24;
      *(float *)(param_1 + 8 + lVar53) = auVar232._0_4_;
      uVar24 = extractps(auVar232,1);
      *(undefined8 *)(param_1 + 8 + lVar45) = uVar24;
      uVar24 = extractps(auVar232,2);
      *(undefined8 *)(param_1 + 8 + lVar39) = uVar24;
      uVar24 = extractps(auVar232,3);
      *(undefined8 *)(param_1 + 8 + lVar62) = uVar24;
      *(uint *)(param_1 + 0xc + lVar53) = uVar8;
      *(uint *)(param_1 + 0xc + lVar45) = uVar9;
      *(uint *)(param_1 + 0xc + lVar39) = uVar10;
      *(uint *)(param_1 + 0xc + lVar62) = uVar11;
      auVar174._0_4_ = auVar219._0_4_ + fVar188 * fVar127 * fVar252;
      auVar174._4_4_ = auVar219._4_4_ + fVar161 * fVar128 * fVar250;
      auVar174._8_4_ = auVar219._8_4_ + fVar167 * fVar129 * fVar120;
      auVar174._12_4_ = auVar219._12_4_ + fVar173 * fVar137 * fVar116;
      *(float *)(param_1 + lVar69) = auVar174._0_4_;
      uVar24 = extractps(auVar174,1);
      *(undefined8 *)(param_1 + lVar54) = uVar24;
      auVar218._0_4_ = auVar195._0_4_ + fVar188 * fVar150 * fVar252;
      auVar218._4_4_ = auVar195._4_4_ + fVar161 * fVar158 * fVar250;
      auVar218._8_4_ = auVar195._8_4_ + fVar167 * fVar164 * fVar120;
      auVar218._12_4_ = auVar195._12_4_ + fVar173 * fVar170 * fVar116;
      uVar24 = extractps(auVar174,2);
      *(undefined8 *)(param_1 + lVar70) = uVar24;
      uVar24 = extractps(auVar174,3);
      *(undefined8 *)(param_1 + lVar63) = uVar24;
      *(float *)(param_1 + 4 + lVar69) = auVar218._0_4_;
      uVar24 = extractps(auVar218,1);
      *(undefined8 *)(param_1 + 4 + lVar54) = uVar24;
      uVar24 = extractps(auVar218,2);
      *(undefined8 *)(param_1 + 4 + lVar70) = uVar24;
      auVar220._0_4_ = auVar238._0_4_ + fVar188 * fVar180 * fVar252;
      auVar220._4_4_ = auVar238._4_4_ + fVar161 * fVar187 * fVar250;
      auVar220._8_4_ = auVar238._8_4_ + fVar167 * fVar189 * fVar120;
      auVar220._12_4_ = auVar238._12_4_ + fVar173 * fVar190 * fVar116;
      uVar24 = extractps(auVar218,3);
      *(undefined8 *)(param_1 + 4 + lVar63) = uVar24;
      *(float *)(param_1 + 8 + lVar69) = auVar220._0_4_;
      uVar24 = extractps(auVar220,1);
      *(undefined8 *)(param_1 + 8 + lVar54) = uVar24;
      uVar24 = extractps(auVar220,2);
      *(undefined8 *)(param_1 + 8 + lVar70) = uVar24;
      uVar24 = extractps(auVar220,3);
      *(undefined8 *)(param_1 + 8 + lVar63) = uVar24;
      *(uint *)(param_1 + 0xc + lVar69) = uVar12;
      *(uint *)(param_1 + 0xc + lVar54) = uVar13;
      *(uint *)(param_1 + 0xc + lVar70) = uVar14;
      *(uint *)(param_1 + 0xc + lVar63) = uVar15;
      auVar245._0_4_ = auVar237._0_4_ + fVar140 * fVar127 * fVar105;
      auVar245._4_4_ = auVar237._4_4_ + fVar168 * fVar128 * fVar103;
      auVar245._8_4_ = auVar237._8_4_ + fVar205 * fVar129 * fVar208;
      auVar245._12_4_ = auVar237._12_4_ + fVar118 * fVar137 * fVar215;
      *(float *)(param_1 + lVar40) = auVar245._0_4_;
      uVar24 = extractps(auVar245,1);
      *(undefined8 *)(param_1 + lVar44) = uVar24;
      auVar184._0_4_ = auVar243._0_4_ + fVar140 * fVar150 * fVar105;
      auVar184._4_4_ = auVar243._4_4_ + fVar168 * fVar158 * fVar103;
      auVar184._8_4_ = auVar243._8_4_ + fVar205 * fVar164 * fVar208;
      auVar184._12_4_ = auVar243._12_4_ + fVar118 * fVar170 * fVar215;
      uVar24 = extractps(auVar245,2);
      *(undefined8 *)(param_1 + lVar72) = uVar24;
      uVar24 = extractps(auVar245,3);
      *(undefined8 *)(param_1 + lVar73) = uVar24;
      *(float *)(param_1 + 4 + lVar40) = auVar184._0_4_;
      uVar24 = extractps(auVar184,1);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar24;
      uVar24 = extractps(auVar184,2);
      *(undefined8 *)(param_1 + 4 + lVar72) = uVar24;
      auVar108._0_4_ = auVar110._0_4_ + fVar140 * fVar180 * fVar105;
      auVar108._4_4_ = auVar110._4_4_ + fVar168 * fVar187 * fVar103;
      auVar108._8_4_ = auVar110._8_4_ + fVar205 * fVar189 * fVar208;
      auVar108._12_4_ = auVar110._12_4_ + fVar118 * fVar190 * fVar215;
      uVar24 = extractps(auVar184,3);
      *(undefined8 *)(param_1 + 4 + lVar73) = uVar24;
      *(float *)(param_1 + 8 + lVar40) = auVar108._0_4_;
      uVar24 = extractps(auVar108,1);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar24;
      uVar24 = extractps(auVar108,2);
      *(undefined8 *)(param_1 + 8 + lVar72) = uVar24;
      uVar24 = extractps(auVar108,3);
      *(undefined8 *)(param_1 + 8 + lVar73) = uVar24;
      *(uint *)(param_1 + 0xc + lVar40) = uVar16;
      *(uint *)(param_1 + 0xc + lVar44) = uVar17;
      *(uint *)(param_1 + 0xc + lVar72) = uVar18;
      *(uint *)(param_1 + 0xc + lVar73) = uVar19;
      auVar87._0_4_ = auVar111._0_4_ + fVar127 * fVar144 * fVar99;
      auVar87._4_4_ = auVar111._4_4_ + fVar128 * fVar169 * fVar236;
      auVar87._8_4_ = auVar111._8_4_ + fVar129 * fVar207 * fVar214;
      auVar87._12_4_ = auVar111._12_4_ + fVar137 * fVar152 * fVar216;
      *(float *)(param_1 + lVar48) = auVar87._0_4_;
      uVar24 = extractps(auVar87,1);
      *(undefined8 *)(param_1 + lVar74) = uVar24;
      uVar24 = extractps(auVar87,2);
      *(undefined8 *)(param_1 + lVar75) = uVar24;
      auVar237._0_4_ = auVar112._0_4_ + fVar150 * fVar144 * fVar99;
      auVar237._4_4_ = auVar112._4_4_ + fVar158 * fVar169 * fVar236;
      auVar237._8_4_ = auVar112._8_4_ + fVar164 * fVar207 * fVar214;
      auVar237._12_4_ = auVar112._12_4_ + fVar170 * fVar152 * fVar216;
      uVar24 = extractps(auVar87,3);
      *(undefined8 *)(param_1 + lVar43) = uVar24;
      *(float *)(param_1 + 4 + lVar48) = auVar237._0_4_;
      uVar24 = extractps(auVar237,1);
      *(undefined8 *)(param_1 + 4 + lVar74) = uVar24;
      uVar24 = extractps(auVar237,2);
      *(undefined8 *)(param_1 + 4 + lVar75) = uVar24;
      auVar109._0_4_ = auVar113._0_4_ + fVar180 * fVar144 * fVar99;
      auVar109._4_4_ = auVar113._4_4_ + fVar187 * fVar169 * fVar236;
      auVar109._8_4_ = auVar113._8_4_ + fVar189 * fVar207 * fVar214;
      auVar109._12_4_ = auVar113._12_4_ + fVar190 * fVar152 * fVar216;
      uVar24 = extractps(auVar237,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar24;
      *(float *)(param_1 + 8 + lVar48) = auVar109._0_4_;
      uVar24 = extractps(auVar109,1);
      *(undefined8 *)(param_1 + 8 + lVar74) = uVar24;
      uVar24 = extractps(auVar109,2);
      *(undefined8 *)(param_1 + 8 + lVar75) = uVar24;
      pfVar1 = (float *)(param_6 + uVar66);
      *pfVar1 = fVar102 + fVar264;
      pfVar1[1] = fVar115 + fVar177;
      pfVar1[2] = fVar119 + fVar178;
      pfVar1[3] = fVar121 + fVar179;
      uVar24 = extractps(auVar109,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar24;
      *(uint *)(param_1 + 0xc + lVar48) = uVar20;
      *(uint *)(param_1 + 0xc + lVar74) = uVar21;
      *(uint *)(param_1 + 0xc + lVar75) = uVar22;
      *(uint *)(param_1 + 0xc + lVar43) = uVar23;
      uVar67 = uVar67 + 0x10;
      uVar59 = uVar59 + 0x18;
      uVar50 = (int)uVar49 + 4;
      uVar49 = (ulonglong)uVar50;
    } while ((int)uVar50 < (int)uVar58);
  }
  uVar58 = (uint)uVar49;
  if ((int)param_17 <= (int)uVar58) {
    return;
  }
  auVar243._0_4_ =
       -(uint)((int)(uVar58 | (uint)__xmm_00000003000000020000000100000000) < (int)param_17);
  auVar243._4_4_ =
       -(uint)((int)(uVar58 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_17);
  auVar243._8_4_ = -(uint)((int)(uVar58 | _UNK_150631e08) < (int)param_17);
  auVar243._12_4_ = -(uint)((int)(uVar58 | _UNK_150631e0c) < (int)param_17);
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar49 * 0x18);
  uVar50 = movmskps((int)uVar59,auVar243);
  bVar33 = (char)((char)uVar50 << 4) >> 4;
  if (uVar50 == 0xf) {
    auVar232 = pblendw(pauVar2[2],*pauVar2,0xf0);
    auVar107 = pblendw(*pauVar2,pauVar2[1],0xf0);
    auVar233._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar233._8_4_ = auVar107._4_4_;
    auVar233._12_4_ = auVar107._12_4_;
    auVar107 = pblendw(pauVar2[5],pauVar2[3],0xf0);
    auVar210 = pblendw(pauVar2[3],pauVar2[4],0xf0);
    auVar196._0_8_ = CONCAT44(auVar210._8_4_,auVar210._0_4_);
    auVar196._8_4_ = auVar210._4_4_;
    auVar196._12_4_ = auVar210._12_4_;
    auVar112._0_8_ = CONCAT44(auVar232._0_4_,auVar232._8_4_);
    auVar112._8_4_ = auVar232._12_4_;
    auVar112._12_4_ = auVar232._4_4_;
    auVar195._0_8_ = CONCAT44(auVar107._0_4_,auVar107._8_4_);
    auVar195._8_4_ = auVar107._12_4_;
    auVar195._12_4_ = auVar107._4_4_;
    auVar107 = pblendw(pauVar2[1],pauVar2[2],0xf0);
    auVar221._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar221._8_4_ = auVar107._4_4_;
    auVar221._12_4_ = auVar107._12_4_;
    auVar107 = pblendw(pauVar2[4],pauVar2[5],0xf0);
    auVar111._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar111._8_4_ = auVar107._4_4_;
    auVar111._12_4_ = auVar107._12_4_;
    auVar194._8_8_ = auVar196._0_8_;
    auVar194._0_8_ = auVar233._0_8_;
    auVar238._8_8_ = auVar196._8_8_;
    auVar238._0_8_ = auVar233._8_8_;
    auVar110._8_8_ = auVar195._0_8_;
    auVar110._0_8_ = auVar112._0_8_;
    auVar113._8_8_ = auVar195._8_8_;
    auVar113._0_8_ = auVar112._8_8_;
    auVar244._8_8_ = auVar111._0_8_;
    auVar244._0_8_ = auVar221._0_8_;
    auVar222._8_8_ = auVar111._8_8_;
    auVar222._0_8_ = auVar221._8_8_;
    auVar107 = *(undefined1 (*) [16])(param_4 + uVar49 * 0x18);
    auVar210 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar49 * 0x18);
    auVar232 = *(undefined1 (*) [16])(param_4 + 0x20 + uVar49 * 0x18);
    auVar220 = *(undefined1 (*) [16])(param_4 + 0x30 + uVar49 * 0x18);
    auVar108 = *(undefined1 (*) [16])(param_4 + 0x40 + uVar49 * 0x18);
    auVar109 = *(undefined1 (*) [16])(param_4 + 0x50 + uVar49 * 0x18);
    auVar106 = blendps(auVar210,auVar107,3);
    auVar86 = blendps(auVar108,auVar220,3);
    auVar87 = blendps(auVar107,auVar232,3);
    auVar220 = blendps(auVar220,auVar109,3);
    auVar107 = blendps(auVar232,auVar210,3);
    auVar210 = blendps(auVar109,auVar108,3);
    local_488._4_4_ = auVar106._8_4_;
    local_488._0_4_ = auVar106._0_4_;
    fStack_480 = (float)auVar86._0_4_;
    fStack_47c = (float)auVar86._8_4_;
    local_418._4_4_ = auVar106._12_4_;
    local_418._0_4_ = auVar106._4_4_;
    fStack_410 = (float)auVar86._4_4_;
    fStack_40c = (float)auVar86._12_4_;
    auVar197._4_4_ = auVar87._0_4_;
    auVar197._0_4_ = auVar87._8_4_;
    local_328._4_4_ = auVar87._4_4_;
    local_328._0_4_ = auVar87._12_4_;
    fStack_320 = (float)auVar220._12_4_;
    fStack_31c = (float)auVar220._4_4_;
    auVar197._8_4_ = auVar220._8_4_;
    auVar197._12_4_ = auVar220._0_4_;
    auVar219._0_4_ = auVar107._0_4_;
    auVar219._4_4_ = auVar107._8_4_;
    auVar219._8_4_ = auVar210._0_4_;
    auVar219._12_4_ = auVar210._8_4_;
    local_4d8._4_4_ = auVar107._12_4_;
    local_4d8._0_4_ = auVar107._4_4_;
    fStack_4d0 = (float)auVar210._4_4_;
    fStack_4cc = (float)auVar210._12_4_;
  }
  else {
    auVar246._0_4_ = ___xmm_00000048000000300000001800000000 & auVar243._0_4_;
    auVar246._4_4_ = _UNK_150b51284 & auVar243._4_4_;
    auVar246._8_4_ = _UNK_150b51288 & auVar243._8_4_;
    auVar246._12_4_ = _UNK_150b5128c & auVar243._12_4_;
    lVar38 = extractps(auVar246,1);
    lVar35 = extractps(auVar246,2);
    lVar37 = extractps(auVar246,3);
    auVar194._4_4_ = *(undefined4 *)(*pauVar2 + lVar38);
    auVar194._0_4_ = *(undefined4 *)*pauVar2;
    auVar194._12_4_ = *(undefined4 *)(*pauVar2 + lVar37);
    auVar194._8_4_ = *(undefined4 *)(*pauVar2 + lVar35);
    auVar107 = ___xmm_0000004c000000340000001c00000004 & auVar243;
    auVar238._4_4_ = *(undefined4 *)(*pauVar2 + auVar107._4_4_);
    auVar238._0_4_ = *(undefined4 *)(*pauVar2 + auVar107._0_4_);
    auVar238._12_4_ = *(undefined4 *)(*pauVar2 + auVar107._12_4_);
    auVar238._8_4_ = *(undefined4 *)(*pauVar2 + auVar107._8_4_);
    auVar210 = ___xmm_00000050000000380000002000000008 & auVar243;
    auVar110._4_4_ = *(undefined4 *)(*pauVar2 + auVar210._4_4_);
    auVar110._0_4_ = *(undefined4 *)(*pauVar2 + auVar210._0_4_);
    auVar110._12_4_ = *(undefined4 *)(*pauVar2 + auVar210._12_4_);
    auVar110._8_4_ = *(undefined4 *)(*pauVar2 + auVar210._8_4_);
    auVar232 = ___xmm_000000540000003c000000240000000c & auVar243;
    auVar113._4_4_ = *(undefined4 *)(*pauVar2 + auVar232._4_4_);
    auVar113._0_4_ = *(undefined4 *)(*pauVar2 + auVar232._0_4_);
    auVar113._12_4_ = *(undefined4 *)(*pauVar2 + auVar232._12_4_);
    auVar113._8_4_ = *(undefined4 *)(*pauVar2 + auVar232._8_4_);
    auVar220 = ___xmm_00000058000000400000002800000010 & auVar243;
    auVar244._4_4_ = *(undefined4 *)(*pauVar2 + auVar220._4_4_);
    auVar244._0_4_ = *(undefined4 *)(*pauVar2 + auVar220._0_4_);
    auVar244._12_4_ = *(undefined4 *)(*pauVar2 + auVar220._12_4_);
    auVar244._8_4_ = *(undefined4 *)(*pauVar2 + auVar220._8_4_);
    auVar108 = ___xmm_0000005c000000440000002c00000014 & auVar243;
    auVar222._4_4_ = *(undefined4 *)(*pauVar2 + auVar108._4_4_);
    auVar222._0_4_ = *(undefined4 *)(*pauVar2 + auVar108._0_4_);
    auVar222._12_4_ = *(undefined4 *)(*pauVar2 + auVar108._12_4_);
    auVar222._8_4_ = *(undefined4 *)(*pauVar2 + auVar108._8_4_);
    lVar34 = param_4 + uVar49 * 0x18;
    auVar109 = insertps(ZEXT416(*(uint *)(param_4 + uVar49 * 0x18)),*(undefined4 *)(lVar38 + lVar34)
                        ,0x10);
    auVar109 = insertps(auVar109,*(undefined4 *)(lVar35 + lVar34),0x20);
    _local_488 = insertps(auVar109,*(undefined4 *)(lVar37 + lVar34),0x30);
    auVar109 = insertps(ZEXT416(*(uint *)((ulonglong)auVar107._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar107._4_4_ + lVar34),0x10);
    auVar109 = insertps(auVar109,*(undefined4 *)((ulonglong)auVar107._8_4_ + lVar34),0x20);
    _local_418 = insertps(auVar109,*(undefined4 *)((ulonglong)auVar107._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar210._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar210._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar210._8_4_ + lVar34),0x20);
    auVar197 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar210._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar232._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar232._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar232._8_4_ + lVar34),0x20);
    _local_328 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar232._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar220._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar220._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar220._8_4_ + lVar34),0x20);
    auVar219 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar220._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar108._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar108._8_4_ + lVar34),0x20);
    _local_4d8 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar108._12_4_ + lVar34),0x30);
  }
  auVar155._0_4_ = auVar194._0_4_ << 4;
  auVar155._4_4_ = auVar194._4_4_ << 4;
  auVar155._8_4_ = auVar194._8_4_ << 4;
  auVar155._12_4_ = auVar194._12_4_ << 4;
  auVar210 = auVar243 & auVar155;
  lVar34 = param_1 + auVar210._0_4_;
  auVar220 = ___xmm_00000004000000040000000400000004 & auVar243;
  auVar232 = ___xmm_00000008000000080000000800000008 & auVar243;
  auVar198._0_4_ = auVar238._0_4_ << 4;
  auVar198._4_4_ = auVar238._4_4_ << 4;
  auVar198._8_4_ = auVar238._8_4_ << 4;
  auVar198._12_4_ = auVar238._12_4_ << 4;
  auVar108 = auVar243 & auVar198;
  auVar199._0_4_ = auVar110._0_4_ << 4;
  auVar199._4_4_ = auVar110._4_4_ << 4;
  auVar199._8_4_ = auVar110._8_4_ << 4;
  auVar199._12_4_ = auVar110._12_4_ << 4;
  auVar109 = auVar243 & auVar199;
  auVar247._0_4_ = auVar113._0_4_ << 4;
  auVar247._4_4_ = auVar113._4_4_ << 4;
  auVar247._8_4_ = auVar113._8_4_ << 4;
  auVar247._12_4_ = auVar113._12_4_ << 4;
  auVar86 = auVar243 & auVar247;
  auVar107 = ZEXT416(*(uint *)(param_1 + auVar210._0_4_));
  auVar200._0_4_ = auVar244._0_4_ << 4;
  auVar200._4_4_ = auVar244._4_4_ << 4;
  auVar200._8_4_ = auVar244._8_4_ << 4;
  auVar200._12_4_ = auVar244._12_4_ << 4;
  auVar87 = auVar243 & auVar200;
  auVar175._0_4_ = auVar222._0_4_ << 4;
  auVar175._4_4_ = auVar222._4_4_ << 4;
  auVar175._8_4_ = auVar222._8_4_ << 4;
  auVar175._12_4_ = auVar222._12_4_ << 4;
  auVar106 = auVar243 & auVar175;
  lVar72 = (longlong)auVar106._0_4_;
  lVar35 = param_1 + auVar210._4_4_;
  lVar37 = param_1 + auVar210._8_4_;
  lVar38 = param_1 + auVar210._12_4_;
  uVar49 = (ulonglong)auVar220._4_4_;
  uVar59 = (ulonglong)auVar220._0_4_;
  uVar67 = (ulonglong)auVar232._0_4_;
  lVar39 = param_1 + auVar108._0_4_;
  lVar40 = param_1 + auVar108._4_4_;
  lVar64 = param_1 + auVar108._8_4_;
  lVar43 = param_1 + auVar108._12_4_;
  lVar44 = param_1 + auVar109._0_4_;
  lVar45 = param_1 + auVar109._4_4_;
  lVar48 = param_1 + auVar109._8_4_;
  lVar51 = param_1 + auVar109._12_4_;
  lVar52 = param_1 + auVar86._0_4_;
  lVar53 = param_1 + auVar86._4_4_;
  lVar54 = param_1 + auVar86._8_4_;
  lVar55 = param_1 + auVar86._12_4_;
  lVar60 = param_1 + auVar87._0_4_;
  lVar61 = param_1 + auVar87._4_4_;
  lVar62 = param_1 + auVar87._8_4_;
  lVar63 = param_1 + auVar87._12_4_;
  lVar65 = param_1 + lVar72;
  lVar68 = param_1 + auVar106._4_4_;
  lVar69 = param_1 + auVar106._8_4_;
  lVar70 = param_1 + auVar106._12_4_;
  bVar76 = (bVar33 & 2) != 0;
  if (bVar76) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._4_4_),0x10);
  }
  uVar66 = (ulonglong)auVar232._4_4_;
  auVar218 = ZEXT416(*(uint *)(uVar59 + lVar34));
  if (bVar76) {
    auVar218 = insertps(auVar218,*(undefined4 *)(uVar49 + lVar35),0x10);
  }
  auVar237 = ZEXT416(*(uint *)(uVar67 + lVar34));
  if (bVar76) {
    auVar237 = insertps(auVar237,*(undefined4 *)(uVar66 + lVar35),0x10);
  }
  _local_4b8 = ZEXT416(*(uint *)(param_1 + auVar108._0_4_));
  if (bVar76) {
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar59 + lVar39)),*(undefined4 *)(uVar49 + lVar40),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar67 + lVar39)),*(undefined4 *)(uVar66 + lVar40),0x10);
  }
  else {
    auVar112 = ZEXT416(*(uint *)(uVar59 + lVar39));
    auVar111 = ZEXT416(*(uint *)(uVar67 + lVar39));
  }
  _local_508 = ZEXT416(*(uint *)(param_1 + auVar109._0_4_));
  if (bVar76) {
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._4_4_),0x10);
    auVar131 = insertps(ZEXT416(*(uint *)(uVar59 + lVar44)),*(undefined4 *)(uVar49 + lVar45),0x10);
    auVar123 = insertps(ZEXT416(*(uint *)(uVar67 + lVar44)),*(undefined4 *)(uVar66 + lVar45),0x10);
  }
  else {
    auVar131 = ZEXT416(*(uint *)(uVar59 + lVar44));
    auVar123 = ZEXT416(*(uint *)(uVar67 + lVar44));
  }
  auVar132 = ZEXT416(*(uint *)(param_1 + auVar86._0_4_));
  if (bVar76) {
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._4_4_),0x10);
  }
  auVar245 = ZEXT416(*(uint *)(uVar59 + lVar52));
  if (bVar76) {
    auVar245 = insertps(auVar245,*(undefined4 *)(uVar49 + lVar53),0x10);
  }
  auVar183 = ZEXT416(*(uint *)(uVar67 + lVar52));
  if (bVar76) {
    auVar183 = insertps(auVar183,*(undefined4 *)(uVar66 + lVar53),0x10);
  }
  auVar153 = ZEXT416(*(uint *)(param_1 + auVar87._0_4_));
  uVar80 = auVar220._8_4_;
  uVar3 = auVar220._12_4_;
  uVar82 = auVar232._8_4_;
  uVar4 = auVar232._12_4_;
  if (bVar76) {
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._4_4_),0x10);
    auVar232 = insertps(ZEXT416(*(uint *)(uVar59 + lVar60)),*(undefined4 *)(uVar49 + lVar61),0x10);
    _local_678 = insertps(ZEXT416(*(uint *)(uVar67 + lVar60)),*(undefined4 *)(uVar66 + lVar61),0x10)
    ;
    _local_618 = insertps(ZEXT416(*(uint *)(param_1 + lVar72)),
                          *(undefined4 *)(param_1 + auVar106._4_4_),0x10);
    auVar220 = insertps(ZEXT416(*(uint *)(uVar59 + lVar65)),*(undefined4 *)(uVar49 + lVar68),0x10);
    _local_6d8 = insertps(ZEXT416(*(uint *)(uVar67 + lVar65)),*(undefined4 *)(uVar66 + lVar68),0x10)
    ;
  }
  else {
    auVar232 = ZEXT416(*(uint *)(uVar59 + lVar60));
    _local_678 = ZEXT416(*(uint *)(uVar67 + lVar60));
    _local_618 = ZEXT416(*(uint *)(param_1 + lVar72));
    auVar220 = ZEXT416(*(uint *)(uVar59 + lVar65));
    _local_6d8 = ZEXT416(*(uint *)(uVar67 + lVar65));
  }
  if ((bVar33 & 4) != 0) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._8_4_),0x20);
    auVar218 = insertps(auVar218,*(undefined4 *)((ulonglong)uVar80 + lVar37),0x20);
    auVar237 = insertps(auVar237,*(undefined4 *)((ulonglong)uVar82 + lVar37),0x20);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar80 + lVar64),0x20);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)uVar82 + lVar64),0x20);
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._8_4_),0x20);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar80 + lVar48),0x20);
    auVar123 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar82 + lVar48),0x20);
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._8_4_),0x20);
    auVar245 = insertps(auVar245,*(undefined4 *)((ulonglong)uVar80 + lVar54),0x20);
    auVar183 = insertps(auVar183,*(undefined4 *)((ulonglong)uVar82 + lVar54),0x20);
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._8_4_),0x20);
    auVar232 = insertps(auVar232,*(undefined4 *)((ulonglong)uVar80 + lVar62),0x20);
    _local_678 = insertps(_local_678,*(undefined4 *)((ulonglong)uVar82 + lVar62),0x20);
    _local_618 = insertps(_local_618,*(undefined4 *)(param_1 + auVar106._8_4_),0x20);
    auVar220 = insertps(auVar220,*(undefined4 *)((ulonglong)uVar80 + lVar69),0x20);
    _local_6d8 = insertps(_local_6d8,*(undefined4 *)((ulonglong)uVar82 + lVar69),0x20);
  }
  if ((char)bVar33 < '\0') {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._12_4_),0x30);
    auVar218 = insertps(auVar218,*(undefined4 *)((ulonglong)uVar3 + lVar38),0x30);
    auVar237 = insertps(auVar237,*(undefined4 *)((ulonglong)uVar4 + lVar38),0x30);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar3 + lVar43),0x30);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)uVar4 + lVar43),0x30);
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._12_4_),0x30);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar3 + lVar51),0x30);
    auVar123 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar4 + lVar51),0x30);
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._12_4_),0x30);
    auVar245 = insertps(auVar245,*(undefined4 *)((ulonglong)uVar3 + lVar55),0x30);
    auVar183 = insertps(auVar183,*(undefined4 *)((ulonglong)uVar4 + lVar55),0x30);
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._12_4_),0x30);
  }
  uVar28 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar243._0_4_);
  if ((char)bVar33 < '\0') {
    auVar232 = insertps(auVar232,*(undefined4 *)((ulonglong)uVar3 + lVar63),0x30);
  }
  uVar27 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar243._4_4_);
  if ((char)bVar33 < '\0') {
    _local_678 = insertps(_local_678,*(undefined4 *)((ulonglong)uVar4 + lVar63),0x30);
  }
  local_478 = (ulonglong)uVar80;
  uVar71 = (ulonglong)uVar3;
  uVar46 = (ulonglong)uVar4;
  uVar41 = (ulonglong)uVar82;
  bVar76 = (char)bVar33 < '\0';
  uVar56 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar243,8);
  if (bVar76) {
    _local_618 = insertps(_local_618,*(undefined4 *)(param_1 + auVar106._12_4_),0x30);
  }
  uVar36 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar243,0xc);
  auVar210 = insertps(ZEXT416(*(uint *)(uVar28 + lVar34)),*(undefined4 *)(uVar27 + lVar35),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar28 + lVar39)),*(undefined4 *)(uVar27 + lVar40),0x10);
  auVar109 = insertps(ZEXT416(*(uint *)(uVar28 + lVar52)),*(undefined4 *)(uVar27 + lVar53),0x10);
  auVar106 = insertps(ZEXT416(*(uint *)(uVar28 + lVar60)),*(undefined4 *)(uVar27 + lVar61),0x10);
  auVar86 = insertps(ZEXT416(*(uint *)(uVar28 + lVar44)),*(undefined4 *)(uVar27 + lVar45),0x10);
  auVar87 = insertps(ZEXT416(*(uint *)(uVar28 + lVar65)),*(undefined4 *)(uVar27 + lVar68),0x10);
  if (bVar76) {
    auVar220 = insertps(auVar220,*(undefined4 *)(uVar71 + lVar70),0x30);
  }
  auVar210 = insertps(auVar210,*(undefined4 *)(uVar56 + lVar37),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar56 + lVar64),0x20);
  auVar109 = insertps(auVar109,*(undefined4 *)(uVar56 + lVar54),0x20);
  auVar106 = insertps(auVar106,*(undefined4 *)(uVar56 + lVar62),0x20);
  auVar86 = insertps(auVar86,*(undefined4 *)(uVar56 + lVar48),0x20);
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar56 + lVar69),0x20);
  fVar264 = auVar131._12_4_;
  if (bVar76) {
    _local_6d8 = insertps(_local_6d8,*(undefined4 *)(uVar46 + lVar70),0x30);
  }
  auVar154 = insertps(auVar210,*(undefined4 *)(uVar36 + lVar38),0x30);
  auVar174 = insertps(auVar108,*(undefined4 *)(uVar36 + lVar43),0x30);
  auVar184 = insertps(auVar109,*(undefined4 *)(uVar36 + lVar55),0x30);
  auVar106 = insertps(auVar106,*(undefined4 *)(uVar36 + lVar63),0x30);
  auVar86 = insertps(auVar86,*(undefined4 *)(uVar36 + lVar51),0x30);
  auVar124 = insertps(auVar87,*(undefined4 *)(uVar36 + lVar70),0x30);
  local_6c8._0_4_ = auVar218._0_4_;
  local_6c8._4_4_ = auVar218._4_4_;
  fStack_6c0 = auVar218._8_4_;
  fStack_6bc = auVar218._12_4_;
  local_6e8._0_4_ = auVar112._0_4_;
  local_6e8._4_4_ = auVar112._4_4_;
  fStack_6e0 = auVar112._8_4_;
  fStack_6dc = auVar112._12_4_;
  local_3a8 = auVar111._0_4_;
  fStack_3a4 = auVar111._4_4_;
  fStack_3a0 = auVar111._8_4_;
  fStack_39c = auVar111._12_4_;
  fVar145 = auVar197._4_4_;
  fVar146 = auVar197._12_4_;
  fVar99 = auVar197._0_4_;
  fVar119 = auVar197._8_4_;
  fVar103 = fVar99 * (float)local_508._0_4_ +
            (float)local_418._0_4_ * (float)local_4b8._0_4_ +
            (float)local_488._0_4_ * auVar107._0_4_;
  fVar116 = fVar145 * (float)local_508._4_4_ +
            (float)local_418._4_4_ * (float)local_4b8._4_4_ +
            (float)local_488._4_4_ * auVar107._4_4_;
  fVar120 = fVar119 * fStack_500 + fStack_410 * fStack_4b0 + fStack_480 * auVar107._8_4_;
  fVar128 = fVar146 * fStack_4fc + fStack_40c * fStack_4ac + fStack_47c * auVar107._12_4_;
  fVar147 = auVar131._0_4_;
  fVar148 = auVar131._4_4_;
  fVar149 = auVar131._8_4_;
  fVar104 = fVar99 * fVar147 +
            (float)local_418._0_4_ * (float)local_6e8._0_4_ +
            (float)local_488._0_4_ * (float)local_6c8._0_4_;
  fVar115 = fVar145 * fVar148 +
            (float)local_418._4_4_ * (float)local_6e8._4_4_ +
            (float)local_488._4_4_ * (float)local_6c8._4_4_;
  fVar121 = fVar119 * fVar149 + fStack_410 * fStack_6e0 + fStack_480 * fStack_6c0;
  fVar129 = fVar146 * fVar264 + fStack_40c * fStack_6dc + fStack_47c * fStack_6bc;
  auVar156._4_4_ = auVar194._4_4_ * 3;
  auVar156._0_4_ = auVar194._0_4_ * 3;
  auVar156._8_4_ = auVar194._8_4_ * 3;
  auVar156._12_4_ = auVar194._12_4_ * 3;
  auVar156 = auVar156 & auVar243;
  lVar34 = param_2 + (longlong)auVar156._0_4_ * 4;
  auVar133._4_4_ = auVar238._4_4_ * 3;
  auVar133._0_4_ = auVar238._0_4_ * 3;
  auVar133._8_4_ = auVar238._8_4_ * 3;
  auVar133._12_4_ = auVar238._12_4_ * 3;
  auVar133 = auVar133 & auVar243;
  lVar35 = param_2 + (longlong)auVar133._0_4_ * 4;
  auVar185._4_4_ = auVar110._4_4_ * 3;
  auVar185._0_4_ = auVar110._0_4_ * 3;
  auVar185._8_4_ = auVar110._8_4_ * 3;
  auVar185._12_4_ = auVar110._12_4_ * 3;
  auVar185 = auVar185 & auVar243;
  lVar37 = param_2 + (longlong)auVar185._0_4_ * 4;
  auVar201._4_4_ = auVar113._4_4_ * 3;
  auVar201._0_4_ = auVar113._0_4_ * 3;
  auVar201._8_4_ = auVar113._8_4_ * 3;
  auVar201._12_4_ = auVar113._12_4_ * 3;
  auVar211._4_4_ = auVar244._4_4_ * 3;
  auVar211._0_4_ = auVar244._0_4_ * 3;
  auVar211._8_4_ = auVar244._8_4_ * 3;
  auVar211._12_4_ = auVar244._12_4_ * 3;
  auVar125._4_4_ = auVar222._4_4_ * 3;
  auVar125._0_4_ = auVar222._0_4_ * 3;
  auVar125._8_4_ = auVar222._8_4_ * 3;
  auVar125._12_4_ = auVar222._12_4_ * 3;
  auVar201 = auVar201 & auVar243;
  lVar38 = param_2 + (longlong)auVar201._0_4_ * 4;
  auVar211 = auVar211 & auVar243;
  lVar39 = param_2 + (longlong)auVar211._0_4_ * 4;
  auVar125 = auVar125 & auVar243;
  lVar40 = param_2 + (longlong)auVar125._0_4_ * 4;
  local_4a8._0_4_ = auVar123._0_4_;
  local_4a8._4_4_ = auVar123._4_4_;
  fStack_4a0 = auVar123._8_4_;
  fStack_49c = auVar123._12_4_;
  fVar138 = fVar99 * (float)local_4a8._0_4_ +
            (float)local_418._0_4_ * local_3a8 + (float)local_488._0_4_ * auVar237._0_4_;
  fVar162 = fVar145 * (float)local_4a8._4_4_ +
            (float)local_418._4_4_ * fStack_3a4 + (float)local_488._4_4_ * auVar237._4_4_;
  fVar168 = fVar119 * fStack_4a0 + fStack_410 * fStack_3a0 + fStack_480 * auVar237._8_4_;
  fVar141 = fVar146 * fStack_49c + fStack_40c * fStack_39c + fStack_47c * auVar237._12_4_;
  lVar64 = param_2 + (longlong)auVar156._4_4_ * 4;
  auVar109 = insertps(ZEXT416(*(uint *)(uVar59 + lVar34)),*(undefined4 *)(uVar49 + lVar64),0x10);
  auVar87 = insertps(ZEXT416(*(uint *)(uVar67 + lVar34)),*(undefined4 *)(uVar66 + lVar64),0x10);
  lVar34 = param_2 + (longlong)auVar133._4_4_ * 4;
  auVar131 = insertps(ZEXT416(*(uint *)(uVar59 + lVar35)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar112 = insertps(ZEXT416(*(uint *)(uVar67 + lVar35)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar185._4_4_ * 4;
  auVar195 = insertps(ZEXT416(*(uint *)(uVar59 + lVar37)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar113 = insertps(ZEXT416(*(uint *)(uVar67 + lVar37)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar201._4_4_ * 4;
  auVar218 = insertps(ZEXT416(*(uint *)(uVar59 + lVar38)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar67 + lVar38)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar211._4_4_ * 4;
  auVar210 = insertps(ZEXT416(*(uint *)(uVar59 + lVar39)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar123 = insertps(ZEXT416(*(uint *)(uVar67 + lVar39)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar125._4_4_ * 4;
  auVar243 = insertps(ZEXT416(*(uint *)(uVar59 + lVar40)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar111 = insertps(ZEXT416(*(uint *)(uVar67 + lVar40)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar156._8_4_ * 4;
  auVar109 = insertps(auVar109,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar110 = insertps(auVar87,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar133._8_4_ * 4;
  auVar197 = insertps(auVar131,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar194 = insertps(auVar112,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar185._8_4_ * 4;
  auVar221 = insertps(auVar195,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar195 = insertps(auVar113,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar201._8_4_ * 4;
  auVar131 = insertps(auVar218,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar218 = insertps(auVar108,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar211._8_4_ * 4;
  auVar87 = insertps(auVar210,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar196 = insertps(auVar123,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar125._8_4_ * 4;
  auVar112 = insertps(auVar243,*(undefined4 *)(local_478 + lVar34),0x20);
  fVar130 = (float)(__xmm_80000000800000008000000080000000 ^ local_328._0_4_);
  fVar140 = (float)(_UNK_150651574 ^ local_328._4_4_);
  fVar144 = (float)(_UNK_150651578 ^ (uint)fStack_320);
  fVar137 = (float)(_UNK_15065157c ^ (uint)fStack_31c);
  local_4f8 = auVar132._0_4_;
  fStack_4f4 = auVar132._4_4_;
  fStack_4f0 = auVar132._8_4_;
  fStack_4ec = auVar132._12_4_;
  local_398 = auVar219._0_4_;
  fStack_394 = auVar219._4_4_;
  fStack_390 = auVar219._8_4_;
  fStack_38c = auVar219._12_4_;
  local_698 = auVar153._0_4_;
  fStack_694 = auVar153._4_4_;
  fStack_690 = auVar153._8_4_;
  fStack_68c = auVar153._12_4_;
  auVar123 = insertps(auVar111,*(undefined4 *)(uVar41 + lVar34),0x20);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar156._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar156._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar156._8_4_ * 4),0x20);
  auVar108 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar156._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar156._12_4_ * 4;
  auVar111 = insertps(auVar109,*(undefined4 *)(uVar71 + lVar34),0x30);
  auVar113 = insertps(auVar110,*(undefined4 *)(uVar46 + lVar34),0x30);
  local_5e8 = auVar245._0_4_;
  fStack_5e4 = auVar245._4_4_;
  fStack_5e0 = auVar245._8_4_;
  fStack_5dc = auVar245._12_4_;
  local_688 = auVar232._0_4_;
  fStack_684 = auVar232._4_4_;
  fStack_680 = auVar232._8_4_;
  fStack_67c = auVar232._12_4_;
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar133._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar133._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar133._8_4_ * 4),0x20);
  local_5d8 = auVar183._0_4_;
  fStack_5d4 = auVar183._4_4_;
  fStack_5d0 = auVar183._8_4_;
  fStack_5cc = auVar183._12_4_;
  auVar232 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar133._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar133._12_4_ * 4;
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar71 + lVar34),0x30);
  auVar132 = insertps(auVar194,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar185._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar185._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar185._8_4_ * 4),0x20);
  auVar109 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar185._12_4_ * 4),0x30);
  fVar177 = local_4d8._0_4_;
  fVar178 = local_4d8._4_4_;
  fVar179 = local_4d8._12_4_;
  fVar143 = local_4d8._8_4_;
  lVar34 = param_2 + (longlong)auVar185._12_4_ * 4;
  auVar110 = insertps(auVar221,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar139 = (local_4f8 * fVar130 - local_398 * local_698) - fVar177 * (float)local_618._0_4_;
  fVar163 = (fStack_4f4 * fVar140 - fStack_394 * fStack_694) - fVar178 * (float)local_618._4_4_;
  fVar169 = (fStack_4f0 * fVar144 - fStack_390 * fStack_690) - fVar143 * fStack_610;
  fVar142 = (fStack_4ec * fVar137 - fStack_38c * fStack_68c) - fVar179 * fStack_60c;
  auVar245 = insertps(auVar195,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar201._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar201._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar201._8_4_ * 4),0x20);
  auVar183 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar201._12_4_ * 4),0x30);
  local_438 = auVar220._0_4_;
  fStack_434 = auVar220._4_4_;
  fStack_430 = auVar220._8_4_;
  fStack_42c = auVar220._12_4_;
  lVar34 = param_2 + (longlong)auVar201._12_4_ * 4;
  auVar131 = insertps(auVar131,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar193 = (local_5e8 * fVar130 - local_398 * local_688) - fVar177 * local_438;
  fVar203 = (fStack_5e4 * fVar140 - fStack_394 * fStack_684) - fVar178 * fStack_434;
  fVar205 = (fStack_5e0 * fVar144 - fStack_390 * fStack_680) - fVar143 * fStack_430;
  fVar207 = (fStack_5dc * fVar137 - fStack_38c * fStack_67c) - fVar179 * fStack_42c;
  auVar218 = insertps(auVar218,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar211._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar211._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar211._8_4_ * 4),0x20);
  auVar243 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar211._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar211._12_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar102 = (local_5d8 * fVar130 - local_398 * (float)local_678._0_4_) -
            fVar177 * (float)local_6d8._0_4_;
  fVar117 = (fStack_5d4 * fVar140 - fStack_394 * (float)local_678._4_4_) -
            fVar178 * (float)local_6d8._4_4_;
  fVar127 = (fStack_5d0 * fVar144 - fStack_390 * fStack_670) - fVar143 * fStack_6d0;
  fVar122 = (fStack_5cc * fVar137 - fStack_38c * fStack_66c) - fVar179 * fStack_6cc;
  auVar153 = insertps(auVar196,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar125._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar125._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar125._8_4_ * 4),0x20);
  auVar220 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar125._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar125._12_4_ * 4;
  auVar112 = insertps(auVar112,*(undefined4 *)(uVar71 + param_2),0x30);
  auVar123 = insertps(auVar123,*(undefined4 *)(uVar46 + param_2),0x30);
  lVar34 = (longlong)(int)(uVar58 << 2);
  bVar57 = bVar33 & 9;
  pfVar1 = (float *)(param_6 + lVar34);
  local_528._0_4_ = *param_9;
  auVar210 = auVar220;
  fVar105 = (float)local_528._0_4_;
  local_528._4_4_ = local_528._0_4_;
  fStack_520 = (float)local_528._0_4_;
  if (bVar57 == 9) {
    local_538 = *(undefined1 (*) [16])(param_5 + lVar34);
    _local_4d8 = *(undefined1 (*) [16])(param_6 + lVar34);
    if ((param_8 & 1) == 0) {
      local_548._0_4_ = *param_12;
      if ((param_11 & 1) != 0) goto LAB_1408f386f;
LAB_1408f3630:
      fStack_4dc = *param_15;
      local_548._4_4_ = local_548._0_4_;
      fStack_540 = (float)local_548._0_4_;
      fStack_53c = (float)local_548._0_4_;
      fStack_51c = (float)local_528._0_4_;
    }
    else {
      auVar210 = *(undefined1 (*) [16])(param_10 + lVar34);
LAB_1408f3849:
      fVar118 = param_9[1];
      fVar105 = (float)local_528._0_4_ + fVar118 * auVar210._0_4_;
      local_528._4_4_ = (float)local_528._0_4_ + fVar118 * auVar210._4_4_;
      fStack_520 = (float)local_528._0_4_ + fVar118 * auVar210._8_4_;
      local_528._0_4_ = (float)local_528._0_4_ + fVar118 * auVar210._12_4_;
      local_548._0_4_ = *param_12;
      if ((param_11 & 1) == 0) goto LAB_1408f3630;
LAB_1408f386f:
      if (bVar57 != 9) goto LAB_1408f387d;
      auVar210 = *(undefined1 (*) [16])(param_13 + lVar34);
LAB_1408f38a8:
      fVar118 = param_12[1];
      local_548._4_4_ = (float)local_548._0_4_ + fVar118 * auVar210._4_4_;
      fStack_540 = (float)local_548._0_4_ + fVar118 * auVar210._8_4_;
      fStack_53c = (float)local_548._0_4_ + fVar118 * auVar210._12_4_;
      fStack_4dc = *param_15;
      local_548._0_4_ = (float)local_548._0_4_ + fVar118 * auVar210._0_4_;
      fStack_51c = (float)local_528._0_4_;
    }
    local_528._0_4_ = fVar105;
    if ((param_14 & 1) != 0) {
      if (bVar57 == 9) {
        auVar210 = *(undefined1 (*) [16])(param_16 + lVar34);
      }
      else {
LAB_1408f394f:
        puVar47 = (uint *)(param_16 + lVar34);
        if ((uVar50 & 1) != 0) {
          auVar210 = ZEXT416(*puVar47);
        }
        if ((uVar50 & 2) != 0) {
          auVar210 = insertps(auVar210,puVar47[1],0x10);
        }
        if ((uVar50 & 4) != 0) {
          auVar210 = insertps(auVar210,puVar47[2],0x20);
        }
        if ((uVar50 & 8) != 0) {
          auVar210 = insertps(auVar210,puVar47[3],0x30);
        }
      }
      fVar105 = param_15[1];
      fStack_4e4 = fStack_4dc + fVar105 * auVar210._4_4_;
      local_4e8 = fStack_4dc + fVar105 * auVar210._0_4_;
      fStack_4e0 = fStack_4dc + fVar105 * auVar210._8_4_;
      fStack_4dc = fStack_4dc + fVar105 * auVar210._12_4_;
      goto LAB_1408f39fe;
    }
  }
  else {
    puVar47 = (uint *)(param_5 + lVar34);
    local_538 = auVar131;
    if ((uVar50 & 1) != 0) {
      local_538 = ZEXT416(*puVar47);
    }
    if ((uVar50 & 2) != 0) {
      local_538 = insertps(local_538,puVar47[1],0x10);
    }
    if ((uVar50 & 4) != 0) {
      local_538 = insertps(local_538,puVar47[2],0x20);
    }
    if ((uVar50 & 8) != 0) {
      local_538 = insertps(local_538,puVar47[3],0x30);
    }
    if ((uVar50 & 1) != 0) {
      _local_4d8 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar50 & 2) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[1],0x10);
    }
    if ((uVar50 & 4) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[2],0x20);
    }
    if ((uVar50 & 8) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[3],0x30);
    }
    if ((param_8 & 1) != 0) {
      puVar47 = (uint *)(param_10 + lVar34);
      if ((uVar50 & 1) != 0) {
        auVar210 = ZEXT416(*puVar47);
      }
      if ((uVar50 & 2) != 0) {
        auVar210 = insertps(auVar210,puVar47[1],0x10);
      }
      if ((uVar50 & 4) != 0) {
        auVar210 = insertps(auVar210,puVar47[2],0x20);
      }
      if ((uVar50 & 8) != 0) {
        auVar210 = insertps(auVar210,puVar47[3],0x30);
      }
      goto LAB_1408f3849;
    }
    local_548._0_4_ = *param_12;
    if ((param_11 & 1) != 0) {
LAB_1408f387d:
      puVar47 = (uint *)(param_13 + lVar34);
      if ((uVar50 & 1) != 0) {
        auVar210 = ZEXT416(*puVar47);
      }
      if ((uVar50 & 2) != 0) {
        auVar210 = insertps(auVar210,puVar47[1],0x10);
      }
      if ((uVar50 & 4) != 0) {
        auVar210 = insertps(auVar210,puVar47[2],0x20);
      }
      if ((uVar50 & 8) != 0) {
        auVar210 = insertps(auVar210,puVar47[3],0x30);
      }
      goto LAB_1408f38a8;
    }
    fStack_4dc = *param_15;
    local_548._4_4_ = local_548._0_4_;
    fStack_540 = (float)local_548._0_4_;
    fStack_53c = (float)local_548._0_4_;
    fStack_51c = (float)local_528._0_4_;
    if ((param_14 & 1) != 0) goto LAB_1408f394f;
  }
  fStack_4e4 = fStack_4dc;
  local_4e8 = fStack_4dc;
  fStack_4e0 = fStack_4dc;
LAB_1408f39fe:
  fVar181 = fVar103 - fVar139;
  fVar188 = fVar116 - fVar163;
  auVar186._0_8_ = CONCAT44(fVar188,fVar181);
  auVar186._8_4_ = fVar120 - fVar169;
  auVar186._12_4_ = fVar128 - fVar142;
  fVar105 = fVar104 - fVar193;
  fVar118 = fVar115 - fVar203;
  auVar114._0_8_ = CONCAT44(fVar118,fVar105);
  auVar114._8_4_ = fVar121 - fVar205;
  auVar114._12_4_ = fVar129 - fVar207;
  fVar152 = fVar138 - fVar102;
  fVar151 = fVar162 - fVar117;
  auVar157._0_8_ = CONCAT44(fVar151,fVar152);
  auVar157._8_4_ = fVar168 - fVar127;
  auVar157._12_4_ = fVar141 - fVar122;
  auVar88._0_4_ = fVar181 * fVar181;
  auVar88._4_4_ = fVar188 * fVar188;
  auVar88._8_4_ = auVar186._8_4_ * auVar186._8_4_;
  auVar88._12_4_ = auVar186._12_4_ * auVar186._12_4_;
  auVar176._0_4_ = fVar152 * fVar152 + fVar105 * fVar105 + auVar88._0_4_;
  auVar176._4_4_ = fVar151 * fVar151 + fVar118 * fVar118 + auVar88._4_4_;
  auVar176._8_4_ = auVar157._8_4_ * auVar157._8_4_ + auVar114._8_4_ * auVar114._8_4_ + auVar88._8_4_
  ;
  auVar176._12_4_ =
       auVar157._12_4_ * auVar157._12_4_ + auVar114._12_4_ * auVar114._12_4_ + auVar88._12_4_;
  auVar194 = sqrtps(auVar88,auVar176);
  uVar58 = -(uint)(auVar176._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar50 = -(uint)(auVar176._4_4_ < _UNK_1506895e4);
  uVar80 = -(uint)(auVar176._8_4_ < _UNK_1506895e8);
  uVar82 = -(uint)(auVar176._12_4_ < _UNK_1506895ec);
  auVar89._4_4_ = uVar50;
  auVar89._0_4_ = uVar58;
  auVar134._8_4_ = auVar114._8_4_;
  auVar134._0_8_ = auVar114._0_8_;
  auVar134._12_4_ = auVar114._12_4_;
  auVar195 = divps(auVar134,auVar194);
  auVar223._8_4_ = auVar157._8_4_;
  auVar223._0_8_ = auVar157._0_8_;
  auVar223._12_4_ = auVar157._12_4_;
  auVar196 = divps(auVar223,auVar194);
  auVar248._8_4_ = auVar186._8_4_;
  auVar248._0_8_ = auVar186._0_8_;
  auVar248._12_4_ = auVar186._12_4_;
  auVar210 = divps(auVar248,auVar194);
  auVar89._8_4_ = uVar80;
  auVar89._12_4_ = uVar82;
  auVar25._4_4_ = _UNK_15076b1f4;
  auVar25._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar25._8_4_ = _UNK_15076b1f8;
  auVar25._12_4_ = _UNK_15076b1fc;
  auVar210 = blendvps(auVar210,auVar25,auVar89);
  auVar234._8_4_ = auVar186._8_4_;
  auVar234._0_8_ = auVar186._0_8_;
  auVar234._12_4_ = auVar186._12_4_;
  bVar76 = (bVar33 & 1) != 0;
  if (bVar76) {
    auVar234 = auVar210;
  }
  local_608._0_8_ = CONCAT44(~uVar50 & auVar195._4_4_,~uVar58 & auVar195._0_4_);
  local_608._8_4_ = ~uVar80 & auVar195._8_4_;
  local_608._12_4_ = ~uVar82 & auVar195._12_4_;
  local_498._4_4_ = ~uVar50 & auVar196._4_4_;
  local_498._0_4_ = ~uVar58 & auVar196._0_4_;
  local_498._8_4_ = ~uVar80 & auVar196._8_4_;
  local_498._12_4_ = ~uVar82 & auVar196._12_4_;
  auVar224._8_4_ = auVar114._8_4_;
  auVar224._0_8_ = auVar114._0_8_;
  auVar224._12_4_ = auVar114._12_4_;
  auVar135._8_4_ = auVar157._8_4_;
  auVar135._0_8_ = auVar157._0_8_;
  auVar135._12_4_ = auVar157._12_4_;
  if (bVar76) {
    auVar224._8_4_ = local_608._8_4_;
    auVar224._0_8_ = local_608._0_8_;
    auVar224._12_4_ = local_608._12_4_;
    auVar135 = local_498;
  }
  auVar195 = blendps(auVar186,auVar234,1);
  local_3f8 = auVar220._0_4_;
  fStack_3f4 = auVar220._4_4_;
  fStack_3f0 = auVar220._8_4_;
  fStack_3ec = auVar220._12_4_;
  if ((bVar33 & 2) == 0) {
    auVar219 = blendps(auVar114,auVar224,1);
    auVar221 = blendps(auVar157,auVar135,1);
    auVar220 = auVar221;
    auVar226 = auVar219;
    auVar196 = auVar195;
  }
  else {
    auVar219 = blendps(auVar114,auVar224,1);
    auVar226._8_4_ = local_608._8_4_;
    auVar226._0_8_ = local_608._0_8_;
    auVar226._12_4_ = local_608._12_4_;
    auVar221 = blendps(auVar157,auVar135,1);
    auVar220 = local_498;
    auVar196 = auVar210;
  }
  auVar196 = blendps(auVar195,auVar196,2);
  bVar76 = (bVar33 & 4) != 0;
  auVar195 = auVar196;
  if (bVar76) {
    auVar195 = auVar210;
  }
  auVar219 = blendps(auVar219,auVar226,2);
  auVar212 = auVar219;
  if (bVar76) {
    auVar212._8_4_ = local_608._8_4_;
    auVar212._0_8_ = local_608._0_8_;
    auVar212._12_4_ = local_608._12_4_;
  }
  auVar221 = blendps(auVar221,auVar220,2);
  auVar220 = auVar221;
  if (bVar76) {
    auVar220 = local_498;
  }
  local_728 = auVar154._0_4_;
  fStack_724 = auVar154._4_4_;
  fStack_720 = auVar154._8_4_;
  fStack_71c = auVar154._12_4_;
  local_6b8 = auVar184._0_4_;
  fStack_6b4 = auVar184._4_4_;
  fStack_6b0 = auVar184._8_4_;
  fStack_6ac = auVar184._12_4_;
  local_668 = auVar183._0_4_;
  fStack_664 = auVar183._4_4_;
  fStack_660 = auVar183._8_4_;
  fStack_65c = auVar183._12_4_;
  local_648 = auVar131._0_4_;
  fStack_644 = auVar131._4_4_;
  fStack_640 = auVar131._8_4_;
  fStack_63c = auVar131._12_4_;
  local_738 = auVar218._0_4_;
  fStack_734 = auVar218._4_4_;
  fStack_730 = auVar218._8_4_;
  fStack_72c = auVar218._12_4_;
  local_718 = auVar174._0_4_;
  fStack_714 = auVar174._4_4_;
  fStack_710 = auVar174._8_4_;
  fStack_70c = auVar174._12_4_;
  auVar218 = blendps(auVar196,auVar195,4);
  local_518 = auVar106._0_4_;
  fStack_514 = auVar106._4_4_;
  fStack_510 = auVar106._8_4_;
  fStack_50c = auVar106._12_4_;
  local_658 = auVar108._0_4_;
  fStack_654 = auVar108._4_4_;
  fStack_650 = auVar108._8_4_;
  fStack_64c = auVar108._12_4_;
  local_628 = auVar111._0_4_;
  fStack_624 = auVar111._4_4_;
  fStack_620 = auVar111._8_4_;
  fStack_61c = auVar111._12_4_;
  local_578 = auVar113._0_4_;
  fStack_574 = auVar113._4_4_;
  fStack_570 = auVar113._8_4_;
  fStack_56c = auVar113._12_4_;
  local_5a8 = auVar232._0_4_;
  fStack_5a4 = auVar232._4_4_;
  fStack_5a0 = auVar232._8_4_;
  fStack_59c = auVar232._12_4_;
  local_3b8 = auVar197._0_4_;
  fStack_3b4 = auVar197._4_4_;
  fStack_3b0 = auVar197._8_4_;
  fStack_3ac = auVar197._12_4_;
  local_478._0_4_ = auVar132._0_4_;
  local_478._4_4_ = auVar132._4_4_;
  fStack_470 = auVar132._8_4_;
  fStack_46c = auVar132._12_4_;
  local_5b8 = auVar243._0_4_;
  fStack_5b4 = auVar243._4_4_;
  fStack_5b0 = auVar243._8_4_;
  fStack_5ac = auVar243._12_4_;
  local_3d8 = auVar153._0_4_;
  fStack_3d4 = auVar153._4_4_;
  fStack_3d0 = auVar153._8_4_;
  fStack_3cc = auVar153._12_4_;
  bVar76 = -1 < (char)bVar33;
  if (bVar76) {
    auVar210 = auVar218;
  }
  local_708 = auVar86._0_4_;
  fStack_704 = auVar86._4_4_;
  fStack_700 = auVar86._8_4_;
  fStack_6fc = auVar86._12_4_;
  auVar232 = blendps(auVar219,auVar212,4);
  local_6a8 = auVar124._0_4_;
  fStack_6a4 = auVar124._4_4_;
  fStack_6a0 = auVar124._8_4_;
  fStack_69c = auVar124._12_4_;
  local_598 = auVar109._0_4_;
  fStack_594 = auVar109._4_4_;
  fStack_590 = auVar109._8_4_;
  fStack_58c = auVar109._12_4_;
  local_638 = auVar110._0_4_;
  fStack_634 = auVar110._4_4_;
  fStack_630 = auVar110._8_4_;
  fStack_62c = auVar110._12_4_;
  local_368 = auVar245._0_4_;
  fStack_364 = auVar245._4_4_;
  fStack_360 = auVar245._8_4_;
  fStack_35c = auVar245._12_4_;
  local_3c8 = auVar112._0_4_;
  fStack_3c4 = auVar112._4_4_;
  fStack_3c0 = auVar112._8_4_;
  fStack_3bc = auVar112._12_4_;
  local_588 = auVar123._0_4_;
  fStack_584 = auVar123._4_4_;
  fStack_580 = auVar123._8_4_;
  fStack_57c = auVar123._12_4_;
  if (bVar76) {
    local_608 = auVar232;
  }
  auVar220 = blendps(auVar221,auVar220,4);
  if (bVar76) {
    local_498 = auVar220;
  }
  local_2b8 = auVar194._0_4_;
  uStack_2b4 = auVar194._4_4_;
  uStack_2b0 = auVar194._8_4_;
  uStack_2ac = auVar194._12_4_;
  auVar91._4_4_ = -(uint)(0.0 <= (float)(~uVar50 & uStack_2b4) - local_538._4_4_);
  auVar91._0_4_ = -(uint)(0.0 <= (float)(~uVar58 & local_2b8) - local_538._0_4_);
  auVar26._4_4_ = _UNK_15076b1f4;
  auVar26._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar26._8_4_ = _UNK_15076b1f8;
  auVar26._12_4_ = _UNK_15076b1fc;
  auVar108 = divps(auVar26,local_538);
  auVar90._4_4_ = -(uint)(local_538._4_4_ < _UNK_1506895d4);
  auVar90._0_4_ = -(uint)(local_538._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar90._8_4_ = -(uint)(local_538._8_4_ < _UNK_1506895d8);
  auVar90._12_4_ = -(uint)(local_538._12_4_ < _UNK_1506895dc);
  auVar243 = blendvps(auVar108,auVar26,auVar90);
  auVar91._8_4_ = -(uint)(0.0 <= (float)(~uVar80 & uStack_2b0) - local_538._8_4_);
  auVar91._12_4_ = -(uint)(0.0 <= (float)(~uVar82 & uStack_2ac) - local_538._12_4_);
  auVar108 = blendvps(_local_548,_local_528,auVar91);
  auVar109 = blendps(auVar218,auVar210,8);
  auVar232 = blendps(auVar232,local_608,8);
  auVar220 = blendps(auVar220,local_498,8);
  auVar261._0_4_ =
       (float)local_488._0_4_ * local_728 + (float)local_418._0_4_ * local_718 + fVar99 * local_708
       + ((local_6b8 * fVar130 - local_398 * local_518) - fVar177 * local_6a8);
  auVar261._4_4_ =
       (float)local_488._4_4_ * fStack_724 + (float)local_418._4_4_ * fStack_714 +
       fVar145 * fStack_704 +
       ((fStack_6b4 * fVar140 - fStack_394 * fStack_514) - fVar178 * fStack_6a4);
  auVar261._8_4_ =
       fStack_480 * fStack_720 + fStack_410 * fStack_710 + fVar119 * fStack_700 +
       ((fStack_6b0 * fVar144 - fStack_390 * fStack_510) - fVar143 * fStack_6a0);
  auVar261._12_4_ =
       fStack_47c * fStack_71c + fStack_40c * fStack_70c + fVar146 * fStack_6fc +
       ((fStack_6ac * fVar137 - fStack_38c * fStack_50c) - fVar179 * fStack_69c);
  auVar210 = divps(auVar108,auVar261);
  auVar210 = sqrtps(auVar91,auVar210);
  fVar181 = param_7 * auVar210._0_4_ * (local_4e8 + local_4e8) * auVar243._0_4_;
  fVar188 = param_7 * auVar210._4_4_ * (fStack_4e4 + fStack_4e4) * auVar243._4_4_;
  fVar159 = param_7 * auVar210._8_4_ * (fStack_4e0 + fStack_4e0) * auVar243._8_4_;
  param_7 = param_7 * auVar210._12_4_ * (fStack_4dc + fStack_4dc) * auVar243._12_4_;
  fVar105 = auVar232._0_4_;
  fVar118 = auVar232._4_4_;
  fVar152 = auVar232._8_4_;
  fVar151 = auVar232._12_4_;
  auVar262._0_4_ = auVar261._0_4_ * fVar181 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar262._4_4_ = auVar261._4_4_ * fVar188 + _UNK_15076b1f4;
  auVar262._8_4_ = auVar261._8_4_ * fVar159 + _UNK_15076b1f8;
  auVar262._12_4_ = auVar261._12_4_ * param_7 + _UNK_15076b1fc;
  auVar255._0_4_ =
       ((((fVar138 -
          (local_578 * (float)local_488._0_4_ + (float)local_478 * (float)local_418._0_4_ +
          local_368 * fVar99)) - fVar102) +
        ((local_738 * fVar130 - local_3d8 * local_398) - local_588 * fVar177)) * auVar220._0_4_ +
       (((fVar104 -
         (local_628 * (float)local_488._0_4_ + local_3b8 * (float)local_418._0_4_ +
         local_638 * fVar99)) - fVar193) +
       ((local_648 * fVar130 - auVar87._0_4_ * local_398) - local_3c8 * fVar177)) * fVar105 +
       (((fVar103 -
         (local_658 * (float)local_488._0_4_ + local_5a8 * (float)local_418._0_4_ +
         local_598 * fVar99)) - fVar139) +
       ((local_668 * fVar130 - local_5b8 * local_398) - local_3f8 * fVar177)) * auVar109._0_4_) *
       (float)((uint)fVar181 ^ __xmm_80000000800000008000000080000000) - (float)local_4d8._0_4_;
  auVar255._4_4_ =
       ((((fVar162 -
          (fStack_574 * (float)local_488._4_4_ + local_478._4_4_ * (float)local_418._4_4_ +
          fStack_364 * fVar145)) - fVar117) +
        ((fStack_734 * fVar140 - fStack_3d4 * fStack_394) - fStack_584 * fVar178)) * auVar220._4_4_
       + (((fVar115 -
           (fStack_624 * (float)local_488._4_4_ + fStack_3b4 * (float)local_418._4_4_ +
           fStack_634 * fVar145)) - fVar203) +
         ((fStack_644 * fVar140 - auVar87._4_4_ * fStack_394) - fStack_3c4 * fVar178)) * fVar118 +
         (((fVar116 -
           (fStack_654 * (float)local_488._4_4_ + fStack_5a4 * (float)local_418._4_4_ +
           fStack_594 * fVar145)) - fVar163) +
         ((fStack_664 * fVar140 - fStack_5b4 * fStack_394) - fStack_3f4 * fVar178)) * auVar109._4_4_
       ) * (float)((uint)fVar188 ^ _UNK_150651574) - (float)local_4d8._4_4_;
  auVar255._8_4_ =
       ((((fVar168 - (fStack_570 * fStack_480 + fStack_470 * fStack_410 + fStack_360 * fVar119)) -
         fVar127) + ((fStack_730 * fVar144 - fStack_3d0 * fStack_390) - fStack_580 * fVar143)) *
        auVar220._8_4_ +
       (((fVar121 - (fStack_620 * fStack_480 + fStack_3b0 * fStack_410 + fStack_630 * fVar119)) -
        fVar205) + ((fStack_640 * fVar144 - auVar87._8_4_ * fStack_390) - fStack_3c0 * fVar143)) *
       fVar152 + (((fVar120 -
                   (fStack_650 * fStack_480 + fStack_5a0 * fStack_410 + fStack_590 * fVar119)) -
                  fVar169) +
                 ((fStack_660 * fVar144 - fStack_5b0 * fStack_390) - fStack_3f0 * fVar143)) *
                 auVar109._8_4_) * (float)((uint)fVar159 ^ _UNK_150651578) - fStack_4d0;
  auVar255._12_4_ =
       ((((fVar141 - (fStack_56c * fStack_47c + fStack_46c * fStack_40c + fStack_35c * fVar146)) -
         fVar122) + ((fStack_72c * fVar137 - fStack_3cc * fStack_38c) - fStack_57c * fVar179)) *
        auVar220._12_4_ +
       (((fVar129 - (fStack_61c * fStack_47c + fStack_3ac * fStack_40c + fStack_62c * fVar146)) -
        fVar207) + ((fStack_63c * fVar137 - auVar87._12_4_ * fStack_38c) - fStack_3bc * fVar179)) *
       fVar151 + (((fVar128 -
                   (fStack_64c * fStack_47c + fStack_59c * fStack_40c + fStack_58c * fVar146)) -
                  fVar142) +
                 ((fStack_65c * fVar137 - fStack_5ac * fStack_38c) - fStack_3ec * fVar179)) *
                 auVar109._12_4_) * (float)((uint)param_7 ^ _UNK_15065157c) - fStack_4cc;
  auVar210 = divps(auVar255,auVar262);
  fVar103 = auVar210._0_4_;
  auVar92._0_4_ = (float)local_4d8._0_4_ + fVar103;
  fVar104 = auVar210._4_4_;
  auVar92._4_4_ = (float)local_4d8._4_4_ + fVar104;
  fVar102 = auVar210._8_4_;
  auVar92._8_4_ = fStack_4d0 + fVar102;
  fVar116 = auVar210._12_4_;
  auVar92._12_4_ = fStack_4cc + fVar116;
  if ((bVar33 & 1) != 0) {
    *pfVar1 = auVar92._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar92,1);
    *(undefined8 *)(pfVar1 + 1) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar92,2);
    *(undefined8 *)(pfVar1 + 2) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar92,3);
    *(undefined8 *)(pfVar1 + 3) = uVar24;
  }
  fVar117 = auVar109._4_4_ * fVar104;
  fVar115 = auVar109._0_4_ * fVar103;
  fVar121 = auVar109._12_4_ * fVar116;
  fVar120 = auVar109._8_4_ * fVar102;
  local_5f8._0_4_ = auVar107._0_4_ + local_728 * fVar115 * (float)local_488._0_4_;
  local_5f8._4_4_ = auVar107._4_4_ + fStack_724 * fVar117 * (float)local_488._4_4_;
  fStack_5f0 = auVar107._8_4_ + fStack_720 * fVar120 * fStack_480;
  fStack_5ec = auVar107._12_4_ + fStack_71c * fVar121 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + auVar155._0_4_) = local_5f8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_5f8,1);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_5f8,2);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_5f8,3);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  fVar128 = fVar118 * fVar104;
  fVar127 = fVar105 * fVar103;
  fVar122 = fVar151 * fVar116;
  fVar129 = fVar152 * fVar102;
  local_6c8._0_4_ = (float)local_6c8._0_4_ + local_728 * fVar105 * fVar103 * (float)local_488._0_4_;
  local_6c8._4_4_ = (float)local_6c8._4_4_ + fStack_724 * fVar118 * fVar104 * (float)local_488._4_4_
  ;
  fStack_6c0 = fStack_6c0 + fStack_720 * fVar152 * fVar102 * fStack_480;
  fStack_6bc = fStack_6bc + fStack_71c * fVar151 * fVar116 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)auVar155._0_4_) = local_6c8._0_4_;
  }
  fVar103 = auVar220._0_4_ * fVar103;
  fVar104 = auVar220._4_4_ * fVar104;
  fVar102 = auVar220._8_4_ * fVar102;
  fVar116 = auVar220._12_4_ * fVar116;
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_6c8,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_6c8,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_6c8,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  local_568._0_4_ = auVar237._0_4_ + (float)local_488._0_4_ * local_728 * fVar103;
  local_568._4_4_ = auVar237._4_4_ + (float)local_488._4_4_ * fStack_724 * fVar104;
  fStack_560 = auVar237._8_4_ + fStack_480 * fStack_720 * fVar102;
  fStack_55c = auVar237._12_4_ + fStack_47c * fStack_71c * fVar116;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 8 + (longlong)auVar155._0_4_) = local_568._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_568,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_568,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_568,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar155._0_4_) = local_728;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(auVar154,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(auVar154,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(auVar154,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  auVar239._0_4_ = (float)local_4b8._0_4_ + local_718 * fVar115 * (float)local_418._0_4_;
  auVar239._4_4_ = (float)local_4b8._4_4_ + fStack_714 * fVar117 * (float)local_418._4_4_;
  auVar239._8_4_ = fStack_4b0 + fStack_710 * fVar120 * fStack_410;
  auVar239._12_4_ = fStack_4ac + fStack_70c * fVar121 * fStack_40c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar198._0_4_) = auVar239._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar239,1);
    *(undefined8 *)(param_1 + auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar239,2);
    *(undefined8 *)(param_1 + auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar239,3);
    *(undefined8 *)(param_1 + auVar198._12_4_) = uVar24;
  }
  local_6e8._0_4_ = (float)local_6e8._0_4_ + local_718 * fVar127 * (float)local_418._0_4_;
  local_6e8._4_4_ = (float)local_6e8._4_4_ + fStack_714 * fVar128 * (float)local_418._4_4_;
  fStack_6e0 = fStack_6e0 + fStack_710 * fVar129 * fStack_410;
  fStack_6dc = fStack_6dc + fStack_70c * fVar122 * fStack_40c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)auVar198._0_4_) = local_6e8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(_local_6e8,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(_local_6e8,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._8_4_) = uVar24;
  }
  uVar30 = fStack_40c * fStack_70c * fVar116;
  uVar29 = fStack_410 * fStack_710 * fVar102;
  local_418._4_4_ = (float)local_418._4_4_ * fStack_714 * fVar104;
  local_418._0_4_ = (float)local_418._0_4_ * local_718 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(_local_6e8,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._12_4_) = uVar24;
    auVar93._0_4_ = local_3a8 + (float)local_418._0_4_;
    auVar93._4_4_ = fStack_3a4 + (float)local_418._4_4_;
    auVar93._8_4_ = fStack_3a0 + (float)uVar29;
    auVar93._12_4_ = fStack_39c + (float)uVar30;
  }
  else {
    auVar93._0_4_ = local_3a8 + (float)local_418._0_4_;
    auVar93._4_4_ = fStack_3a4 + (float)local_418._4_4_;
    auVar93._8_4_ = fStack_3a0 + (float)uVar29;
    auVar93._12_4_ = fStack_39c + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar198._0_4_) = auVar93._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar93,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar93,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar93,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar198._0_4_) = local_718;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar174,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar174,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar174,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._12_4_) = uVar24;
  }
  auVar256._0_4_ = (float)local_508._0_4_ + local_708 * fVar115 * fVar99;
  auVar256._4_4_ = (float)local_508._4_4_ + fStack_704 * fVar117 * fVar145;
  auVar256._8_4_ = fStack_500 + fStack_700 * fVar120 * fVar119;
  auVar256._12_4_ = fStack_4fc + fStack_6fc * fVar121 * fVar146;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar199._0_4_) = auVar256._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar256,1);
    *(undefined8 *)(param_1 + auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar256,2);
    *(undefined8 *)(param_1 + auVar199._8_4_) = uVar24;
  }
  uVar32 = fStack_6fc * fVar122 * fVar146;
  uVar31 = fStack_700 * fVar129 * fVar119;
  uVar30 = fStack_704 * fVar128 * fVar145;
  uVar29 = local_708 * fVar127 * fVar99;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar256,3);
    *(undefined8 *)(param_1 + auVar199._12_4_) = uVar24;
    auVar263._0_4_ = fVar147 + (float)uVar29;
    auVar263._4_4_ = fVar148 + (float)uVar30;
    auVar263._8_4_ = fVar149 + (float)uVar31;
    auVar263._12_4_ = fVar264 + (float)uVar32;
  }
  else {
    auVar263._0_4_ = fVar147 + (float)uVar29;
    auVar263._4_4_ = fVar148 + (float)uVar30;
    auVar263._8_4_ = fVar149 + (float)uVar31;
    auVar263._12_4_ = fVar264 + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar199._0_4_) = auVar263._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar263,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar263,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._8_4_) = uVar24;
  }
  uVar32 = fVar146 * fStack_6fc * fVar116;
  uVar31 = fVar119 * fStack_700 * fVar102;
  uVar30 = fVar145 * fStack_704 * fVar104;
  uVar29 = fVar99 * local_708 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar263,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._12_4_) = uVar24;
    auVar94._0_4_ = (float)local_4a8._0_4_ + (float)uVar29;
    auVar94._4_4_ = (float)local_4a8._4_4_ + (float)uVar30;
    auVar94._8_4_ = fStack_4a0 + (float)uVar31;
    auVar94._12_4_ = fStack_49c + (float)uVar32;
  }
  else {
    auVar94._0_4_ = (float)local_4a8._0_4_ + (float)uVar29;
    auVar94._4_4_ = (float)local_4a8._4_4_ + (float)uVar30;
    auVar94._8_4_ = fStack_4a0 + (float)uVar31;
    auVar94._12_4_ = fStack_49c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar199._0_4_) = auVar94._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar199._0_4_) = local_708;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar86,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar86,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar86,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._12_4_) = uVar24;
  }
  auVar249._0_4_ = local_4f8 + local_6b8 * fVar115 * (float)local_328._0_4_;
  auVar249._4_4_ = fStack_4f4 + fStack_6b4 * fVar117 * (float)local_328._4_4_;
  auVar249._8_4_ = fStack_4f0 + fStack_6b0 * fVar120 * fStack_320;
  auVar249._12_4_ = fStack_4ec + fStack_6ac * fVar121 * fStack_31c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar247._0_4_) = auVar249._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar249,1);
    *(undefined8 *)(param_1 + auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar249,2);
    *(undefined8 *)(param_1 + auVar247._8_4_) = uVar24;
  }
  uVar32 = fStack_6ac * fVar122 * fStack_31c;
  uVar31 = fStack_6b0 * fVar129 * fStack_320;
  uVar30 = fStack_6b4 * fVar128 * (float)local_328._4_4_;
  uVar29 = local_6b8 * fVar127 * (float)local_328._0_4_;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar249,3);
    *(undefined8 *)(param_1 + auVar247._12_4_) = uVar24;
    auVar235._0_4_ = local_5e8 + (float)uVar29;
    auVar235._4_4_ = fStack_5e4 + (float)uVar30;
    auVar235._8_4_ = fStack_5e0 + (float)uVar31;
    auVar235._12_4_ = fStack_5dc + (float)uVar32;
  }
  else {
    auVar235._0_4_ = local_5e8 + (float)uVar29;
    auVar235._4_4_ = fStack_5e4 + (float)uVar30;
    auVar235._8_4_ = fStack_5e0 + (float)uVar31;
    auVar235._12_4_ = fStack_5dc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar247._0_4_) = auVar235._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar235,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar235,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._8_4_) = uVar24;
  }
  uVar30 = fStack_31c * fStack_6ac * fVar116;
  uVar29 = fStack_320 * fStack_6b0 * fVar102;
  local_328._4_4_ = (float)local_328._4_4_ * fStack_6b4 * fVar104;
  local_328._0_4_ = (float)local_328._0_4_ * local_6b8 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar235,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._12_4_) = uVar24;
    auVar95._0_4_ = local_5d8 + (float)local_328._0_4_;
    auVar95._4_4_ = fStack_5d4 + (float)local_328._4_4_;
    auVar95._8_4_ = fStack_5d0 + (float)uVar29;
    auVar95._12_4_ = fStack_5cc + (float)uVar30;
  }
  else {
    auVar95._0_4_ = local_5d8 + (float)local_328._0_4_;
    auVar95._4_4_ = fStack_5d4 + (float)local_328._4_4_;
    auVar95._8_4_ = fStack_5d0 + (float)uVar29;
    auVar95._12_4_ = fStack_5cc + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar247._0_4_) = auVar95._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar247._0_4_) = local_6b8;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._12_4_) = uVar24;
  }
  auVar225._0_4_ = local_698 + local_518 * fVar115 * local_398;
  auVar225._4_4_ = fStack_694 + fStack_514 * fVar117 * fStack_394;
  auVar225._8_4_ = fStack_690 + fStack_510 * fVar120 * fStack_390;
  auVar225._12_4_ = fStack_68c + fStack_50c * fVar121 * fStack_38c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar200._0_4_) = auVar225._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar225,1);
    *(undefined8 *)(param_1 + auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar225,2);
    *(undefined8 *)(param_1 + auVar200._8_4_) = uVar24;
  }
  uVar32 = fStack_50c * fVar122 * fStack_38c;
  uVar31 = fStack_510 * fVar129 * fStack_390;
  uVar30 = fStack_514 * fVar128 * fStack_394;
  uVar29 = local_518 * fVar127 * local_398;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar225,3);
    *(undefined8 *)(param_1 + auVar200._12_4_) = uVar24;
    auVar213._0_4_ = local_688 + (float)uVar29;
    auVar213._4_4_ = fStack_684 + (float)uVar30;
    auVar213._8_4_ = fStack_680 + (float)uVar31;
    auVar213._12_4_ = fStack_67c + (float)uVar32;
  }
  else {
    auVar213._0_4_ = local_688 + (float)uVar29;
    auVar213._4_4_ = fStack_684 + (float)uVar30;
    auVar213._8_4_ = fStack_680 + (float)uVar31;
    auVar213._12_4_ = fStack_67c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar200._0_4_) = auVar213._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar213,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar213,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._8_4_) = uVar24;
  }
  uVar32 = fStack_38c * fStack_50c * fVar116;
  uVar31 = fStack_390 * fStack_510 * fVar102;
  uVar30 = fStack_394 * fStack_514 * fVar104;
  uVar29 = local_398 * local_518 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar213,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._12_4_) = uVar24;
    auVar136._0_4_ = (float)local_678._0_4_ + (float)uVar29;
    auVar136._4_4_ = (float)local_678._4_4_ + (float)uVar30;
    auVar136._8_4_ = fStack_670 + (float)uVar31;
    auVar136._12_4_ = fStack_66c + (float)uVar32;
  }
  else {
    auVar136._0_4_ = (float)local_678._0_4_ + (float)uVar29;
    auVar136._4_4_ = (float)local_678._4_4_ + (float)uVar30;
    auVar136._8_4_ = fStack_670 + (float)uVar31;
    auVar136._12_4_ = fStack_66c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar200._0_4_) = auVar136._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar136,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar136,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar136,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar200._0_4_) = local_518;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar106,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar106,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._12_4_) = uVar24;
  }
  auVar126._0_4_ = (float)local_618._0_4_ + fVar115 * local_6a8 * fVar177;
  auVar126._4_4_ = (float)local_618._4_4_ + fVar117 * fStack_6a4 * fVar178;
  auVar126._8_4_ = fStack_610 + fVar120 * fStack_6a0 * fVar143;
  auVar126._12_4_ = fStack_60c + fVar121 * fStack_69c * fVar179;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar175._0_4_) = auVar126._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + auVar175._8_4_) = uVar24;
  }
  uVar32 = fVar122 * fStack_69c * fVar179;
  uVar31 = fVar129 * fStack_6a0 * fVar143;
  uVar30 = fVar128 * fStack_6a4 * fVar178;
  uVar29 = fVar127 * local_6a8 * fVar177;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + auVar175._12_4_) = uVar24;
    auVar96._0_4_ = local_438 + (float)uVar29;
    auVar96._4_4_ = fStack_434 + (float)uVar30;
    auVar96._8_4_ = fStack_430 + (float)uVar31;
    auVar96._12_4_ = fStack_42c + (float)uVar32;
  }
  else {
    auVar96._0_4_ = local_438 + (float)uVar29;
    auVar96._4_4_ = fStack_434 + (float)uVar30;
    auVar96._8_4_ = fStack_430 + (float)uVar31;
    auVar96._12_4_ = fStack_42c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar175._0_4_) = auVar96._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._8_4_) = uVar24;
  }
  uVar32 = fVar179 * fVar116 * fStack_69c;
  uVar31 = fVar143 * fVar102 * fStack_6a0;
  uVar30 = fVar178 * fVar104 * fStack_6a4;
  uVar29 = fVar177 * fVar103 * local_6a8;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._12_4_) = uVar24;
    auVar97._0_4_ = (float)local_6d8._0_4_ + (float)uVar29;
    auVar97._4_4_ = (float)local_6d8._4_4_ + (float)uVar30;
    auVar97._8_4_ = fStack_6d0 + (float)uVar31;
    auVar97._12_4_ = fStack_6cc + (float)uVar32;
  }
  else {
    auVar97._0_4_ = (float)local_6d8._0_4_ + (float)uVar29;
    auVar97._4_4_ = (float)local_6d8._4_4_ + (float)uVar30;
    auVar97._8_4_ = fStack_6d0 + (float)uVar31;
    auVar97._12_4_ = fStack_6cc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar175._0_4_) = auVar97._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar97,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar97,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar97,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar175._0_4_) = local_6a8;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar124,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar124,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar124,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._12_4_) = uVar24;
  }
  return;
}

// ApplyXPBDEmbeddedSpringConstraints_sse4 @ 1408f5080

/* WARNING: Removing unreachable block (ram,0x0001408f588e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringConstraints_sse4
               (longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,float param_5,
               byte param_6,float *param_7,longlong param_8,byte param_9,float *param_10,
               longlong param_11,uint param_12)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 auVar49 [16];
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar62;
  int iVar65;
  int iVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar67;
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  float fVar75;
  undefined1 auVar74 [16];
  float fVar77;
  float fVar80;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  float fVar95;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar104;
  float fVar109;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar110;
  float fVar111;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  float fVar119;
  float fVar123;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar124;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined1 local_1d8 [8];
  float fStack_1d0;
  float fStack_1cc;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  int iVar68;
  int iVar70;
  int iVar71;
  int iVar72;
  float fVar76;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar108 [16];
  
  uVar35 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar35 = param_12;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar20 = 0;
    uVar29 = param_3;
  }
  else {
    uVar20 = 0;
    uVar29 = 0;
    do {
      uVar22 = uVar29 & 0xffffffff;
      fVar61 = *param_7;
      fVar55 = fVar61;
      fVar59 = fVar61;
      fVar60 = fVar61;
      if ((param_6 & 1) != 0) {
        pfVar1 = (float *)(param_8 + uVar22);
        fVar48 = param_7[1];
        fVar55 = fVar61 + fVar48 * *pfVar1;
        fVar59 = fVar61 + fVar48 * pfVar1[1];
        fVar60 = fVar61 + fVar48 * pfVar1[2];
        fVar61 = fVar61 + fVar48 * pfVar1[3];
      }
      piVar2 = (int *)(param_2 + uVar29 * 2);
      piVar3 = (int *)(param_2 + 0x10 + uVar29 * 2);
      lVar21 = (longlong)(*piVar2 << 4);
      lVar24 = (longlong)(piVar2[2] * 0x10);
      lVar31 = (longlong)(*piVar3 << 4);
      lVar25 = (longlong)(piVar3[2] << 4);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar24),0x10
                        );
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + lVar31),0x20);
      auVar64 = insertps(auVar63,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar63 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                         *(undefined4 *)(param_1 + 4 + lVar24),0x10);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                         *(undefined4 *)(param_1 + 8 + lVar24),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      uVar19 = *(uint *)(param_1 + 0xc + lVar21);
      uVar38 = *(uint *)(param_1 + 0xc + lVar24);
      uVar40 = *(uint *)(param_1 + 0xc + lVar31);
      uVar4 = *(uint *)(param_1 + 0xc + lVar25);
      auVar106 = insertps(ZEXT416(uVar19),ZEXT416(uVar38),0x10);
      auVar107 = insertps(auVar106,ZEXT416(uVar40),0x20);
      lVar28 = (longlong)(piVar2[1] << 4);
      lVar30 = (longlong)(piVar2[3] * 0x10);
      lVar26 = (longlong)(piVar3[1] << 4);
      lVar32 = (longlong)(piVar3[3] << 4);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + lVar26),0x20);
      auVar98 = insertps(auVar106,*(undefined4 *)(param_1 + lVar32),0x30);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 4 + lVar26),0x20);
      auVar85 = insertps(auVar106,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar106 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                          *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 8 + lVar26),0x20);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      auVar107 = insertps(auVar107,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      uVar6 = *(uint *)(param_1 + 0xc + lVar30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar26);
      uVar8 = *(uint *)(param_1 + 0xc + lVar32);
      auVar131 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      auVar131 = insertps(auVar131,ZEXT416(uVar7),0x20);
      unaff_XMM15 = insertps(auVar131,ZEXT416(uVar8),0x30);
      fVar48 = *param_10;
      auVar131._4_4_ = fVar48;
      auVar131._0_4_ = fVar48;
      auVar131._8_4_ = fVar48;
      auVar131._12_4_ = fVar48;
      if ((param_9 & 1) != 0) {
        pfVar1 = (float *)(param_11 + uVar22);
        fVar52 = param_10[1];
        auVar131._0_4_ = fVar48 + fVar52 * *pfVar1;
        auVar131._4_4_ = fVar48 + fVar52 * pfVar1[1];
        auVar131._8_4_ = fVar48 + fVar52 * pfVar1[2];
        auVar131._12_4_ = fVar48 + fVar52 * pfVar1[3];
      }
      auVar112._0_4_ = auVar64._0_4_ - auVar98._0_4_;
      auVar112._4_4_ = auVar64._4_4_ - auVar98._4_4_;
      auVar112._8_4_ = auVar64._8_4_ - auVar98._8_4_;
      auVar112._12_4_ = auVar64._12_4_ - auVar98._12_4_;
      auVar88._0_4_ = auVar63._0_4_ - auVar85._0_4_;
      auVar88._4_4_ = auVar63._4_4_ - auVar85._4_4_;
      auVar88._8_4_ = auVar63._8_4_ - auVar85._8_4_;
      auVar88._12_4_ = auVar63._12_4_ - auVar85._12_4_;
      auVar81._0_4_ = auVar73._0_4_ - auVar106._0_4_;
      auVar81._4_4_ = auVar73._4_4_ - auVar106._4_4_;
      auVar81._8_4_ = auVar73._8_4_ - auVar106._8_4_;
      auVar81._12_4_ = auVar73._12_4_ - auVar106._12_4_;
      auVar49._0_4_ =
           auVar81._0_4_ * auVar81._0_4_ +
           auVar88._0_4_ * auVar88._0_4_ + auVar112._0_4_ * auVar112._0_4_;
      auVar49._4_4_ =
           auVar81._4_4_ * auVar81._4_4_ +
           auVar88._4_4_ * auVar88._4_4_ + auVar112._4_4_ * auVar112._4_4_;
      auVar49._8_4_ =
           auVar81._8_4_ * auVar81._8_4_ +
           auVar88._8_4_ * auVar88._8_4_ + auVar112._8_4_ * auVar112._8_4_;
      auVar49._12_4_ =
           auVar81._12_4_ * auVar81._12_4_ +
           auVar88._12_4_ * auVar88._12_4_ + auVar112._12_4_ * auVar112._12_4_;
      unaff_XMM13 = sqrtps(unaff_XMM13,auVar49);
      uVar34 = -(uint)(auVar49._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar36 = -(uint)(auVar49._4_4_ < _UNK_1506895e4);
      uVar37 = -(uint)(auVar49._8_4_ < _UNK_1506895e8);
      uVar39 = -(uint)(auVar49._12_4_ < _UNK_1506895ec);
      auVar114._4_4_ = uVar36;
      auVar114._0_4_ = uVar34;
      auVar113 = divps(auVar112,unaff_XMM13);
      auVar114._8_4_ = uVar37;
      auVar114._12_4_ = uVar39;
      auVar89._4_4_ = _UNK_15076b1f4;
      auVar89._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar89._8_4_ = _UNK_15076b1f8;
      auVar89._12_4_ = _UNK_15076b1fc;
      auVar114 = blendvps(auVar113,auVar89,auVar114);
      pfVar1 = (float *)(param_3 + uVar22);
      fVar48 = (float)(~uVar34 & unaff_XMM13._0_4_) - *pfVar1;
      fVar52 = (float)(~uVar36 & unaff_XMM13._4_4_) - pfVar1[1];
      fVar53 = (float)(~uVar37 & unaff_XMM13._8_4_) - pfVar1[2];
      fVar54 = (float)(~uVar39 & unaff_XMM13._12_4_) - pfVar1[3];
      auVar41._4_4_ = -(uint)(0.0 <= fVar52);
      auVar41._0_4_ = -(uint)(0.0 <= fVar48);
      auVar41._8_4_ = -(uint)(0.0 <= fVar53);
      auVar41._12_4_ = -(uint)(0.0 <= fVar54);
      auVar113._4_4_ = fVar59;
      auVar113._0_4_ = fVar55;
      auVar113._8_4_ = fVar60;
      auVar113._12_4_ = fVar61;
      auVar113 = blendvps(auVar131,auVar113,auVar41);
      auVar89 = divps(auVar88,unaff_XMM13);
      auVar131 = divps(auVar81,unaff_XMM13);
      fVar124 = auVar113._0_4_ * param_5 * param_5;
      fVar128 = auVar113._4_4_ * param_5 * param_5;
      fVar129 = auVar113._8_4_ * param_5 * param_5;
      fVar130 = auVar113._12_4_ * param_5 * param_5;
      fVar76 = auVar107._0_4_;
      fVar77 = auVar107._4_4_;
      fVar80 = auVar107._12_4_;
      fVar104 = unaff_XMM15._0_4_;
      fVar109 = unaff_XMM15._4_4_;
      fVar75 = auVar107._8_4_;
      fVar94 = unaff_XMM15._8_4_;
      fVar95 = unaff_XMM15._12_4_;
      pfVar1 = (float *)(param_4 + uVar22);
      fVar61 = *pfVar1;
      fVar55 = pfVar1[1];
      fVar59 = pfVar1[2];
      fVar60 = pfVar1[3];
      auVar125._0_4_ =
           (float)((uint)fVar124 ^ __xmm_80000000800000008000000080000000) * fVar48 - fVar61;
      auVar125._4_4_ = (float)((uint)fVar128 ^ _UNK_150651574) * fVar52 - fVar55;
      auVar125._8_4_ = (float)((uint)fVar129 ^ _UNK_150651578) * fVar53 - fVar59;
      auVar125._12_4_ = (float)((uint)fVar130 ^ _UNK_15065157c) * fVar54 - fVar60;
      auVar82._0_4_ = (fVar76 + fVar104) * fVar124 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar82._4_4_ = (fVar77 + fVar109) * fVar128 + _UNK_15076b1f4;
      auVar82._8_4_ = (fVar75 + fVar94) * fVar129 + _UNK_15076b1f8;
      auVar82._12_4_ = (fVar80 + fVar95) * fVar130 + _UNK_15076b1fc;
      auVar107 = divps(auVar125,auVar82);
      fVar100 = auVar107._0_4_;
      fVar110 = auVar114._0_4_ * fVar100;
      fVar101 = auVar107._4_4_;
      fVar115 = auVar114._4_4_ * fVar101;
      fVar102 = auVar107._8_4_;
      fVar117 = auVar114._8_4_ * fVar102;
      fVar103 = auVar107._12_4_;
      fVar118 = auVar114._12_4_ * fVar103;
      auVar107._0_4_ = fVar76 * fVar110 + auVar64._0_4_;
      auVar107._4_4_ = fVar77 * fVar115 + auVar64._4_4_;
      auVar107._8_4_ = fVar75 * fVar117 + auVar64._8_4_;
      auVar107._12_4_ = fVar80 * fVar118 + auVar64._12_4_;
      fVar124 = (float)(~uVar34 & auVar89._0_4_) * fVar100;
      fVar128 = (float)(~uVar36 & auVar89._4_4_) * fVar101;
      fVar129 = (float)(~uVar37 & auVar89._8_4_) * fVar102;
      fVar130 = (float)(~uVar39 & auVar89._12_4_) * fVar103;
      *(float *)(param_1 + lVar21) = auVar107._0_4_;
      uVar9 = extractps(auVar107,1);
      *(undefined8 *)(param_1 + lVar24) = uVar9;
      auVar64._0_4_ = fVar76 * fVar124 + auVar63._0_4_;
      auVar64._4_4_ = fVar77 * fVar128 + auVar63._4_4_;
      auVar64._8_4_ = fVar75 * fVar129 + auVar63._8_4_;
      auVar64._12_4_ = fVar80 * fVar130 + auVar63._12_4_;
      uVar9 = extractps(auVar107,2);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      uVar9 = extractps(auVar107,3);
      *(undefined8 *)(param_1 + lVar25) = uVar9;
      fVar48 = (float)(~uVar34 & auVar131._0_4_) * fVar100;
      fVar52 = (float)(~uVar36 & auVar131._4_4_) * fVar101;
      fVar53 = (float)(~uVar37 & auVar131._8_4_) * fVar102;
      fVar54 = (float)(~uVar39 & auVar131._12_4_) * fVar103;
      *(float *)(param_1 + 4 + lVar21) = auVar64._0_4_;
      uVar9 = extractps(auVar64,1);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar9;
      uVar9 = extractps(auVar64,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      auVar105._0_4_ = fVar76 * fVar48 + auVar73._0_4_;
      auVar105._4_4_ = fVar77 * fVar52 + auVar73._4_4_;
      auVar105._8_4_ = fVar75 * fVar53 + auVar73._8_4_;
      auVar105._12_4_ = fVar80 * fVar54 + auVar73._12_4_;
      uVar9 = extractps(auVar64,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar9;
      *(float *)(param_1 + 8 + lVar21) = auVar105._0_4_;
      uVar9 = extractps(auVar105,1);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar9;
      uVar9 = extractps(auVar105,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = extractps(auVar105,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar9;
      *(uint *)(param_1 + 0xc + lVar21) = uVar19;
      *(uint *)(param_1 + 0xc + lVar24) = uVar38;
      *(uint *)(param_1 + 0xc + lVar31) = uVar40;
      *(uint *)(param_1 + 0xc + lVar25) = uVar4;
      auVar97._0_4_ = auVar98._0_4_ - fVar110 * fVar104;
      auVar97._4_4_ = auVar98._4_4_ - fVar115 * fVar109;
      auVar97._8_4_ = auVar98._8_4_ - fVar117 * fVar94;
      auVar97._12_4_ = auVar98._12_4_ - fVar118 * fVar95;
      *(float *)(param_1 + lVar28) = auVar97._0_4_;
      uVar9 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + lVar30) = uVar9;
      uVar9 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + lVar26) = uVar9;
      auVar73._0_4_ = auVar85._0_4_ - fVar124 * fVar104;
      auVar73._4_4_ = auVar85._4_4_ - fVar128 * fVar109;
      auVar73._8_4_ = auVar85._8_4_ - fVar129 * fVar94;
      auVar73._12_4_ = auVar85._12_4_ - fVar130 * fVar95;
      uVar9 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar73._0_4_;
      uVar9 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar9;
      uVar9 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + 4 + lVar26) = uVar9;
      auVar63._0_4_ = auVar106._0_4_ - fVar48 * fVar104;
      auVar63._4_4_ = auVar106._4_4_ - fVar52 * fVar109;
      auVar63._8_4_ = auVar106._8_4_ - fVar53 * fVar94;
      auVar63._12_4_ = auVar106._12_4_ - fVar54 * fVar95;
      uVar9 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar63._0_4_;
      uVar9 = extractps(auVar63,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar9;
      uVar9 = extractps(auVar63,2);
      *(undefined8 *)(param_1 + 8 + lVar26) = uVar9;
      uVar9 = extractps(auVar63,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      pfVar1 = (float *)(param_4 + uVar22);
      *pfVar1 = fVar100 + fVar61;
      pfVar1[1] = fVar101 + fVar55;
      pfVar1[2] = fVar102 + fVar59;
      pfVar1[3] = fVar103 + fVar60;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      *(uint *)(param_1 + 0xc + lVar30) = uVar6;
      *(uint *)(param_1 + 0xc + lVar26) = uVar7;
      *(uint *)(param_1 + 0xc + lVar32) = uVar8;
      uVar29 = uVar29 + 0x10;
      uVar19 = (int)uVar20 + 4;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < (int)(uVar35 & 0xfffffffc));
  }
  uVar35 = (uint)uVar20;
  if ((int)param_12 <= (int)uVar35) {
    return;
  }
  auVar106._0_4_ =
       -(uint)((int)(uVar35 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12);
  auVar106._4_4_ =
       -(uint)((int)(uVar35 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12);
  auVar106._8_4_ = -(uint)((int)(uVar35 | _UNK_150631e08) < (int)param_12);
  auVar106._12_4_ = -(uint)((int)(uVar35 | _UNK_150631e0c) < (int)param_12);
  piVar2 = (int *)(param_2 + uVar20 * 8);
  uVar19 = movmskps((int)uVar29,auVar106);
  bVar18 = (char)((char)uVar19 << 4) >> 4;
  if (uVar19 == 0xf) {
    iVar68 = *piVar2;
    iVar62 = piVar2[1];
    iVar70 = piVar2[2];
    iVar65 = piVar2[3];
    iVar71 = piVar2[4];
    iVar66 = piVar2[5];
    iVar72 = piVar2[6];
    iVar67 = piVar2[7];
  }
  else {
    auVar85._0_4_ = ___xmm_00000018000000100000000800000000 & auVar106._0_4_;
    auVar85._4_4_ = _UNK_150b51a04 & auVar106._4_4_;
    auVar85._8_4_ = _UNK_150b51a08 & auVar106._8_4_;
    auVar85._12_4_ = _UNK_150b51a0c & auVar106._12_4_;
    lVar21 = extractps(auVar85,1);
    lVar24 = extractps(auVar85,2);
    lVar25 = extractps(auVar85,3);
    iVar68 = *piVar2;
    iVar70 = *(int *)((longlong)piVar2 + lVar21);
    iVar71 = *(int *)((longlong)piVar2 + lVar24);
    iVar72 = *(int *)((longlong)piVar2 + lVar25);
    auVar63 = ___xmm_0000001c000000140000000c00000004 & auVar106;
    iVar62 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._0_4_);
    iVar65 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._4_4_);
    iVar66 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._8_4_);
    iVar67 = *(int *)((longlong)piVar2 + (ulonglong)auVar63._12_4_);
  }
  auVar69._0_4_ = iVar68 << 4;
  auVar69._4_4_ = iVar70 * 0x10;
  auVar69._8_4_ = iVar71 << 4;
  auVar69._12_4_ = iVar72 << 4;
  auVar64 = auVar106 & auVar69;
  lVar21 = param_1 + auVar64._0_4_;
  lVar24 = param_1 + auVar64._4_4_;
  lVar25 = param_1 + auVar64._8_4_;
  lVar26 = param_1 + auVar64._12_4_;
  auVar85 = ___xmm_00000004000000040000000400000004 & auVar106;
  uVar20 = (ulonglong)auVar85._0_4_;
  _local_1e8 = ___xmm_00000008000000080000000800000008 & auVar106;
  uVar29 = (ulonglong)local_1e8._0_4_;
  auVar98._0_4_ = iVar62 << 4;
  auVar98._4_4_ = iVar65 * 0x10;
  auVar98._8_4_ = iVar66 << 4;
  auVar98._12_4_ = iVar67 << 4;
  auVar73 = auVar106 & auVar98;
  lVar27 = (longlong)auVar73._0_4_;
  auVar63 = ZEXT416(*(uint *)(param_1 + auVar64._0_4_));
  lVar28 = param_1 + lVar27;
  lVar30 = param_1 + auVar73._4_4_;
  lVar31 = param_1 + auVar73._8_4_;
  lVar32 = param_1 + auVar73._12_4_;
  if ((bVar18 & 2) == 0) {
    auVar114 = ZEXT416(*(uint *)(uVar20 + lVar21));
    auVar113 = ZEXT416(*(uint *)(uVar29 + lVar21));
    auVar89 = ZEXT416(*(uint *)(param_1 + lVar27));
    auVar131 = ZEXT416(*(uint *)(uVar20 + lVar28));
    auVar107 = ZEXT416(*(uint *)(uVar29 + lVar28));
  }
  else {
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._4_4_),0x10);
    auVar114 = insertps(ZEXT416(*(uint *)(uVar20 + lVar21)),
                        *(undefined4 *)((ulonglong)auVar85._4_4_ + lVar24),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar29 + lVar21)),
                        *(undefined4 *)((ulonglong)local_1e8._4_4_ + lVar24),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(param_1 + lVar27)),*(undefined4 *)(param_1 + auVar73._4_4_)
                       ,0x10);
    auVar131 = insertps(ZEXT416(*(uint *)(uVar20 + lVar28)),
                        *(undefined4 *)((ulonglong)auVar85._4_4_ + lVar30),0x10);
    auVar107 = insertps(ZEXT416(*(uint *)(uVar29 + lVar28)),
                        *(undefined4 *)((ulonglong)local_1e8._4_4_ + lVar30),0x10);
  }
  if ((bVar18 & 4) == 0) {
    if (-1 < (char)bVar18) goto LAB_1408f5971;
LAB_1408f5aeb:
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._12_4_),0x30);
    uVar29 = (ulonglong)(auVar106._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
    if ((char)bVar18 < '\0') goto LAB_1408f5b0c;
LAB_1408f5982:
    uVar20 = (ulonglong)(auVar106._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
    if (-1 < (char)bVar18) goto LAB_1408f598e;
LAB_1408f5b20:
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_1e8._12_4_ + lVar26),0x30);
    uVar40 = *(uint *)(uVar29 + lVar21);
    uVar38 = *(uint *)(uVar29 + lVar28);
  }
  else {
    auVar63 = insertps(auVar63,*(undefined4 *)(param_1 + auVar64._8_4_),0x20);
    auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar85._8_4_ + lVar25),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_1e8._8_4_ + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)(param_1 + auVar73._8_4_),0x20);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)auVar85._8_4_ + lVar31),0x20);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)local_1e8._8_4_ + lVar31),0x20);
    if ((char)bVar18 < '\0') goto LAB_1408f5aeb;
LAB_1408f5971:
    uVar29 = (ulonglong)(auVar106._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
    if (-1 < (char)bVar18) goto LAB_1408f5982;
LAB_1408f5b0c:
    auVar114 = insertps(auVar114,*(undefined4 *)((ulonglong)auVar85._12_4_ + lVar26),0x30);
    uVar20 = (ulonglong)(auVar106._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
    if ((char)bVar18 < '\0') goto LAB_1408f5b20;
LAB_1408f598e:
    uVar40 = *(uint *)(uVar29 + lVar21);
    uVar38 = *(uint *)(uVar29 + lVar28);
  }
  uVar29 = (ulonglong)(auVar106._8_4_ & __xmm_0000000c0000000c0000000c0000000c._8_4_);
  if ((char)bVar18 < '\0') {
    auVar89 = insertps(auVar89,*(undefined4 *)(param_1 + auVar73._12_4_),0x30);
  }
  auVar106 = auVar106 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar73 = insertps(ZEXT416(uVar40),*(undefined4 *)(uVar20 + lVar24),0x10);
  auVar64 = insertps(ZEXT416(uVar38),*(undefined4 *)(uVar20 + lVar30),0x10);
  if ((char)bVar18 < '\0') {
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)auVar85._12_4_ + lVar32),0x30);
  }
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar29 + lVar25),0x20);
  auVar64 = insertps(auVar64,*(undefined4 *)(uVar29 + lVar31),0x20);
  if ((char)bVar18 < '\0') {
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)local_1e8._12_4_ + lVar32),0x30);
  }
  auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar106._12_4_ + lVar26),0x30);
  auVar64 = insertps(auVar64,*(undefined4 *)((ulonglong)auVar106._12_4_ + lVar32),0x30);
  lVar21 = (longlong)(int)(uVar35 << 2);
  pfVar1 = (float *)(param_4 + lVar21);
  local_1d8._0_4_ = *param_7;
  local_1d8._4_4_ = local_1d8._0_4_;
  fStack_1d0 = (float)local_1d8._0_4_;
  fStack_1cc = (float)local_1d8._0_4_;
  if ((bVar18 & 9) == 9) {
    _local_1e8 = *(undefined1 (*) [16])(param_3 + lVar21);
    unaff_XMM15 = *(undefined1 (*) [16])(param_4 + lVar21);
    if ((param_6 & 1) == 0) {
      fVar61 = *param_10;
      auVar120._4_4_ = fVar61;
      auVar120._0_4_ = fVar61;
      auVar120._8_4_ = fVar61;
      auVar120._12_4_ = fVar61;
    }
    else {
      auVar106 = *(undefined1 (*) [16])(param_8 + lVar21);
LAB_1408f5d22:
      fVar61 = param_7[1];
      local_1d8._4_4_ = (float)local_1d8._0_4_ + fVar61 * auVar106._4_4_;
      fStack_1d0 = (float)local_1d8._0_4_ + fVar61 * auVar106._8_4_;
      fStack_1cc = (float)local_1d8._0_4_ + fVar61 * auVar106._12_4_;
      fVar55 = *param_10;
      auVar120._4_4_ = fVar55;
      auVar120._0_4_ = fVar55;
      auVar120._8_4_ = fVar55;
      auVar120._12_4_ = fVar55;
      local_1d8._0_4_ = (float)local_1d8._0_4_ + fVar61 * auVar106._0_4_;
    }
    if ((param_9 & 1) != 0) {
      if ((bVar18 & 9) == 9) {
        auVar106 = *(undefined1 (*) [16])(param_11 + lVar21);
      }
      else {
LAB_1408f5d67:
        puVar23 = (uint *)(param_11 + lVar21);
        if ((uVar19 & 1) != 0) {
          auVar106 = ZEXT416(*puVar23);
        }
        if ((uVar19 & 2) != 0) {
          auVar106 = insertps(auVar106,puVar23[1],0x10);
        }
        if ((uVar19 & 4) != 0) {
          auVar106 = insertps(auVar106,puVar23[2],0x20);
        }
        if ((uVar19 & 8) != 0) {
          auVar106 = insertps(auVar106,puVar23[3],0x30);
        }
      }
      fVar61 = param_10[1];
      auVar121._0_4_ = auVar120._0_4_ + fVar61 * auVar106._0_4_;
      auVar121._4_4_ = auVar120._4_4_ + fVar61 * auVar106._4_4_;
      auVar121._8_4_ = auVar120._8_4_ + fVar61 * auVar106._8_4_;
      auVar121._12_4_ = auVar120._12_4_ + fVar61 * auVar106._12_4_;
      auVar120 = auVar121;
      goto LAB_1408f5dc8;
    }
  }
  else {
    puVar23 = (uint *)(param_3 + lVar21);
    if ((uVar19 & 1) != 0) {
      _local_1e8 = ZEXT416(*puVar23);
    }
    if ((uVar19 & 2) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      _local_1e8 = insertps(_local_1e8,puVar23[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      unaff_XMM15 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      unaff_XMM15 = insertps(unaff_XMM15,pfVar1[3],0x30);
    }
    if ((param_6 & 1) != 0) {
      puVar23 = (uint *)(param_8 + lVar21);
      if ((uVar19 & 1) != 0) {
        auVar106 = ZEXT416(*puVar23);
      }
      if ((uVar19 & 2) != 0) {
        auVar106 = insertps(auVar106,puVar23[1],0x10);
      }
      if ((uVar19 & 4) != 0) {
        auVar106 = insertps(auVar106,puVar23[2],0x20);
      }
      if ((uVar19 & 8) != 0) {
        auVar106 = insertps(auVar106,puVar23[3],0x30);
      }
      goto LAB_1408f5d22;
    }
    fVar61 = *param_10;
    auVar120._4_4_ = fVar61;
    auVar120._0_4_ = fVar61;
    auVar120._8_4_ = fVar61;
    auVar120._12_4_ = fVar61;
    if ((param_9 & 1) != 0) goto LAB_1408f5d67;
  }
LAB_1408f5dc8:
  local_178 = auVar63._0_4_;
  fStack_174 = auVar63._4_4_;
  fStack_170 = auVar63._8_4_;
  fStack_16c = auVar63._12_4_;
  fVar77 = auVar89._0_4_;
  fVar104 = local_178 - fVar77;
  fVar80 = auVar89._4_4_;
  fVar109 = fStack_174 - fVar80;
  auVar108._0_8_ = CONCAT44(fVar109,fVar104);
  fVar110 = auVar89._8_4_;
  auVar108._8_4_ = fStack_170 - fVar110;
  fVar115 = auVar89._12_4_;
  auVar108._12_4_ = fStack_16c - fVar115;
  fVar48 = auVar131._0_4_;
  fVar118 = auVar114._0_4_;
  fVar117 = fVar118 - fVar48;
  fVar54 = auVar131._4_4_;
  fVar101 = auVar114._4_4_;
  fVar100 = fVar101 - fVar54;
  auVar99._0_8_ = CONCAT44(fVar100,fVar117);
  fVar129 = auVar131._8_4_;
  fVar102 = auVar114._8_4_;
  fVar103 = auVar114._12_4_;
  auVar99._8_4_ = fVar102 - fVar129;
  fVar75 = auVar131._12_4_;
  auVar99._12_4_ = fVar103 - fVar75;
  fVar61 = auVar107._0_4_;
  fVar52 = auVar113._0_4_;
  fVar53 = fVar52 - fVar61;
  fVar55 = auVar107._4_4_;
  fVar128 = auVar113._4_4_;
  fVar124 = fVar128 - fVar55;
  auVar74._0_8_ = CONCAT44(fVar124,fVar53);
  fVar59 = auVar107._8_4_;
  fVar130 = auVar113._8_4_;
  fVar76 = auVar113._12_4_;
  auVar74._8_4_ = fVar130 - fVar59;
  fVar60 = auVar107._12_4_;
  auVar74._12_4_ = fVar76 - fVar60;
  auVar56._0_4_ = fVar117 * fVar117 + fVar104 * fVar104;
  auVar56._4_4_ = fVar100 * fVar100 + fVar109 * fVar109;
  auVar56._8_4_ = auVar99._8_4_ * auVar99._8_4_ + auVar108._8_4_ * auVar108._8_4_;
  auVar56._12_4_ = auVar99._12_4_ * auVar99._12_4_ + auVar108._12_4_ * auVar108._12_4_;
  auVar50._0_4_ = fVar53 * fVar53 + auVar56._0_4_;
  auVar50._4_4_ = fVar124 * fVar124 + auVar56._4_4_;
  auVar50._8_4_ = auVar74._8_4_ * auVar74._8_4_ + auVar56._8_4_;
  auVar50._12_4_ = auVar74._12_4_ * auVar74._12_4_ + auVar56._12_4_;
  auVar106 = sqrtps(auVar56,auVar50);
  uVar35 = -(uint)(auVar50._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar19 = -(uint)(auVar50._4_4_ < _UNK_1506895e4);
  uVar38 = -(uint)(auVar50._8_4_ < _UNK_1506895e8);
  uVar40 = -(uint)(auVar50._12_4_ < _UNK_1506895ec);
  auVar42._4_4_ = uVar19;
  auVar42._0_4_ = uVar35;
  auVar83._8_4_ = auVar99._8_4_;
  auVar83._0_8_ = auVar99._0_8_;
  auVar83._12_4_ = auVar99._12_4_;
  auVar85 = divps(auVar83,auVar106);
  auVar90._8_4_ = auVar74._8_4_;
  auVar90._0_8_ = auVar74._0_8_;
  auVar90._12_4_ = auVar74._12_4_;
  auVar107 = divps(auVar90,auVar106);
  auVar86._8_4_ = auVar108._8_4_;
  auVar86._0_8_ = auVar108._0_8_;
  auVar86._12_4_ = auVar108._12_4_;
  auVar63 = divps(auVar86,auVar106);
  auVar42._8_4_ = uVar38;
  auVar42._12_4_ = uVar40;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar63 = blendvps(auVar63,auVar10,auVar42);
  auVar126._8_4_ = auVar108._8_4_;
  auVar126._0_8_ = auVar108._0_8_;
  auVar126._12_4_ = auVar108._12_4_;
  bVar33 = (bVar18 & 1) == 0;
  if (!bVar33) {
    auVar126 = auVar63;
  }
  auVar78._0_8_ = CONCAT44(~uVar19 & auVar85._4_4_,~uVar35 & auVar85._0_4_);
  auVar78._8_4_ = ~uVar38 & auVar85._8_4_;
  auVar78._12_4_ = ~uVar40 & auVar85._12_4_;
  auVar84._0_8_ = CONCAT44(~uVar19 & auVar107._4_4_,~uVar35 & auVar107._0_4_);
  auVar84._8_4_ = ~uVar38 & auVar107._8_4_;
  auVar84._12_4_ = ~uVar40 & auVar107._12_4_;
  auVar91._8_4_ = auVar99._8_4_;
  auVar91._0_8_ = auVar99._0_8_;
  auVar91._12_4_ = auVar99._12_4_;
  auVar43._8_4_ = auVar74._8_4_;
  auVar43._0_8_ = auVar74._0_8_;
  auVar43._12_4_ = auVar74._12_4_;
  if (bVar33) {
    auVar85 = blendps(auVar108,auVar126,1);
  }
  else {
    auVar91._8_4_ = auVar78._8_4_;
    auVar91._0_8_ = auVar78._0_8_;
    auVar91._12_4_ = auVar78._12_4_;
    auVar43._8_4_ = auVar84._8_4_;
    auVar43._0_8_ = auVar84._0_8_;
    auVar43._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar108,auVar126,1);
  }
  if ((bVar18 & 2) == 0) {
    auVar107 = blendps(auVar99,auVar91,1);
    auVar131 = blendps(auVar74,auVar43,1);
    auVar85 = blendps(auVar85,auVar85,2);
    auVar92 = auVar107;
    auVar45 = auVar131;
  }
  else {
    auVar107 = blendps(auVar99,auVar91,1);
    auVar92._8_4_ = auVar78._8_4_;
    auVar92._0_8_ = auVar78._0_8_;
    auVar92._12_4_ = auVar78._12_4_;
    auVar131 = blendps(auVar74,auVar43,1);
    auVar45._8_4_ = auVar84._8_4_;
    auVar45._0_8_ = auVar84._0_8_;
    auVar45._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar85,auVar63,2);
  }
  if ((bVar18 & 4) == 0) {
    auVar89 = blendps(auVar107,auVar92,2);
    auVar107 = blendps(auVar131,auVar45,2);
    auVar85 = blendps(auVar85,auVar85,4);
    auVar44 = auVar107;
    auVar93 = auVar89;
  }
  else {
    auVar89 = blendps(auVar107,auVar92,2);
    auVar93._8_4_ = auVar78._8_4_;
    auVar93._0_8_ = auVar78._0_8_;
    auVar93._12_4_ = auVar78._12_4_;
    auVar107 = blendps(auVar131,auVar45,2);
    auVar44._8_4_ = auVar84._8_4_;
    auVar44._0_8_ = auVar84._0_8_;
    auVar44._12_4_ = auVar84._12_4_;
    auVar85 = blendps(auVar85,auVar63,4);
  }
  if ((char)bVar18 < '\0') {
    auVar131 = blendps(auVar89,auVar93,4);
  }
  else {
    auVar131 = blendps(auVar89,auVar93,4);
    auVar63 = auVar85;
  }
  if ((char)bVar18 < '\0') {
    auVar107 = blendps(auVar107,auVar44,4);
  }
  else {
    auVar107 = blendps(auVar107,auVar44,4);
    auVar78 = auVar131;
  }
  if (-1 < (char)bVar18) {
    auVar84 = auVar107;
  }
  fVar53 = (float)(~uVar35 & auVar106._0_4_) - (float)local_1e8._0_4_;
  fVar124 = (float)(~uVar19 & auVar106._4_4_) - (float)local_1e8._4_4_;
  fStack_1e0 = (float)(~uVar38 & auVar106._8_4_) - fStack_1e0;
  fStack_1dc = (float)(~uVar40 & auVar106._12_4_) - fStack_1dc;
  auVar46._4_4_ = -(uint)(0.0 <= fVar124);
  auVar46._0_4_ = -(uint)(0.0 <= fVar53);
  auVar46._8_4_ = -(uint)(0.0 <= fStack_1e0);
  auVar46._12_4_ = -(uint)(0.0 <= fStack_1dc);
  auVar106 = blendvps(auVar120,_local_1d8,auVar46);
  fVar117 = auVar106._0_4_ * param_5 * param_5;
  fVar100 = auVar106._4_4_ * param_5 * param_5;
  fVar123 = auVar106._8_4_ * param_5 * param_5;
  param_5 = auVar106._12_4_ * param_5 * param_5;
  fVar111 = auVar73._0_4_;
  fVar116 = auVar73._4_4_;
  fVar119 = auVar73._12_4_;
  fVar109 = auVar64._0_4_;
  fVar94 = auVar64._4_4_;
  fVar104 = auVar73._8_4_;
  fVar95 = auVar64._8_4_;
  fVar96 = auVar64._12_4_;
  auVar122._0_4_ =
       (float)((uint)fVar117 ^ __xmm_80000000800000008000000080000000) * fVar53 - unaff_XMM15._0_4_;
  auVar122._4_4_ = (float)((uint)fVar100 ^ _UNK_150651574) * fVar124 - unaff_XMM15._4_4_;
  auVar122._8_4_ = (float)((uint)fVar123 ^ _UNK_150651578) * fStack_1e0 - unaff_XMM15._8_4_;
  auVar122._12_4_ = (float)((uint)param_5 ^ _UNK_15065157c) * fStack_1dc - unaff_XMM15._12_4_;
  auVar47._0_4_ = (fVar111 + fVar109) * fVar117 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar47._4_4_ = (fVar116 + fVar94) * fVar100 + _UNK_15076b1f4;
  auVar47._8_4_ = (fVar104 + fVar95) * fVar123 + _UNK_15076b1f8;
  auVar47._12_4_ = (fVar119 + fVar96) * param_5 + _UNK_15076b1fc;
  auVar106 = divps(auVar122,auVar47);
  fVar53 = auVar106._0_4_;
  auVar132._0_4_ = unaff_XMM15._0_4_ + fVar53;
  fVar124 = auVar106._4_4_;
  auVar132._4_4_ = unaff_XMM15._4_4_ + fVar124;
  fVar117 = auVar106._8_4_;
  auVar132._8_4_ = unaff_XMM15._8_4_ + fVar117;
  fVar100 = auVar106._12_4_;
  auVar132._12_4_ = unaff_XMM15._12_4_ + fVar100;
  if ((bVar18 & 1) != 0) {
    *pfVar1 = auVar132._0_4_;
  }
  if ((bVar18 & 2) == 0) {
    auVar63 = blendps(auVar85,auVar63,8);
  }
  else {
    uVar9 = extractps(auVar132,1);
    *(undefined8 *)(pfVar1 + 1) = uVar9;
    auVar63 = blendps(auVar85,auVar63,8);
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar132,2);
    *(undefined8 *)(pfVar1 + 2) = uVar9;
  }
  fVar13 = (float)auVar63._12_4_ * fVar100;
  fVar12 = (float)auVar63._8_4_ * fVar117;
  fVar11 = (float)auVar63._4_4_ * fVar124;
  fVar123 = auVar63._0_4_ * fVar53;
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar132,3);
    *(undefined8 *)(pfVar1 + 3) = uVar9;
  }
  auVar57._0_4_ = local_178 + fVar111 * fVar123;
  auVar57._4_4_ = fStack_174 + fVar116 * fVar11;
  auVar57._8_4_ = fStack_170 + fVar104 * fVar12;
  auVar57._12_4_ = fStack_16c + fVar119 * fVar13;
  if ((bVar18 & 1) == 0) {
    auVar63 = blendps(auVar131,auVar78,8);
  }
  else {
    *(float *)(param_1 + auVar69._0_4_) = auVar57._0_4_;
    auVar63 = blendps(auVar131,auVar78,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar57,1);
    *(undefined8 *)(param_1 + auVar69._4_4_) = uVar9;
  }
  uVar17 = (float)auVar63._12_4_ * fVar100;
  uVar16 = (float)auVar63._8_4_ * fVar117;
  uVar15 = (float)auVar63._4_4_ * fVar124;
  uVar14 = (float)auVar63._0_4_ * fVar53;
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar57,2);
    *(undefined8 *)(param_1 + auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar57,3);
    *(undefined8 *)(param_1 + auVar69._12_4_) = uVar9;
    auVar127._0_4_ = fVar118 + fVar111 * (float)uVar14;
    auVar127._4_4_ = fVar101 + fVar116 * (float)uVar15;
    auVar127._8_4_ = fVar102 + fVar104 * (float)uVar16;
    auVar127._12_4_ = fVar103 + fVar119 * (float)uVar17;
  }
  else {
    auVar127._0_4_ = fVar118 + fVar111 * (float)uVar14;
    auVar127._4_4_ = fVar101 + fVar116 * (float)uVar15;
    auVar127._8_4_ = fVar102 + fVar104 * (float)uVar16;
    auVar127._12_4_ = fVar103 + fVar119 * (float)uVar17;
  }
  if ((bVar18 & 1) == 0) {
    auVar63 = blendps(auVar107,auVar84,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar69._0_4_) = auVar127._0_4_;
    auVar63 = blendps(auVar107,auVar84,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar127,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._4_4_) = uVar9;
  }
  fVar100 = fVar100 * (float)auVar63._12_4_;
  fVar117 = fVar117 * (float)auVar63._8_4_;
  fVar124 = fVar124 * (float)auVar63._4_4_;
  fVar53 = fVar53 * (float)auVar63._0_4_;
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar127,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar127,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar69._12_4_) = uVar9;
    auVar87._0_4_ = fVar52 + fVar111 * fVar53;
    auVar87._4_4_ = fVar128 + fVar116 * fVar124;
    auVar87._8_4_ = fVar130 + fVar104 * fVar117;
    auVar87._12_4_ = fVar76 + fVar119 * fVar100;
  }
  else {
    auVar87._0_4_ = fVar52 + fVar111 * fVar53;
    auVar87._4_4_ = fVar128 + fVar116 * fVar124;
    auVar87._8_4_ = fVar130 + fVar104 * fVar117;
    auVar87._12_4_ = fVar76 + fVar119 * fVar100;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar69._0_4_) = auVar87._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar69._12_4_) = uVar9;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar69._0_4_) = fVar111;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar69._12_4_) = uVar9;
    auVar79._0_4_ = fVar77 - fVar123 * fVar109;
    auVar79._4_4_ = fVar80 - fVar11 * fVar94;
    auVar79._8_4_ = fVar110 - fVar12 * fVar95;
    auVar79._12_4_ = fVar115 - fVar13 * fVar96;
  }
  else {
    auVar79._0_4_ = fVar77 - fVar123 * fVar109;
    auVar79._4_4_ = fVar80 - fVar11 * fVar94;
    auVar79._8_4_ = fVar110 - fVar12 * fVar95;
    auVar79._12_4_ = fVar115 - fVar13 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + auVar98._0_4_) = auVar79._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + auVar98._12_4_) = uVar9;
    auVar58._0_4_ = fVar48 - (float)uVar14 * fVar109;
    auVar58._4_4_ = fVar54 - (float)uVar15 * fVar94;
    auVar58._8_4_ = fVar129 - (float)uVar16 * fVar95;
    auVar58._12_4_ = fVar75 - (float)uVar17 * fVar96;
  }
  else {
    auVar58._0_4_ = fVar48 - (float)uVar14 * fVar109;
    auVar58._4_4_ = fVar54 - (float)uVar15 * fVar94;
    auVar58._8_4_ = fVar129 - (float)uVar16 * fVar95;
    auVar58._12_4_ = fVar75 - (float)uVar17 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar98._0_4_) = auVar58._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar58,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar58,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar58,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar98._12_4_) = uVar9;
    auVar51._0_4_ = fVar61 - fVar53 * fVar109;
    auVar51._4_4_ = fVar55 - fVar124 * fVar94;
    auVar51._8_4_ = fVar59 - fVar117 * fVar95;
    auVar51._12_4_ = fVar60 - fVar100 * fVar96;
  }
  else {
    auVar51._0_4_ = fVar61 - fVar53 * fVar109;
    auVar51._4_4_ = fVar55 - fVar124 * fVar94;
    auVar51._8_4_ = fVar59 - fVar117 * fVar95;
    auVar51._12_4_ = fVar60 - fVar100 * fVar96;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar98._0_4_) = auVar51._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar51,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar51,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar51,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar98._12_4_) = uVar9;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar98._0_4_) = fVar109;
  }
  if ((bVar18 & 2) != 0) {
    uVar9 = extractps(auVar64,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._4_4_) = uVar9;
  }
  if ((bVar18 & 4) != 0) {
    uVar9 = extractps(auVar64,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._8_4_) = uVar9;
  }
  if ((char)bVar18 < '\0') {
    uVar9 = extractps(auVar64,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar98._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDEmbeddedSpringDampingConstraints_sse4 @ 1408f6630

/* WARNING: Removing unreachable block (ram,0x0001408f729a) */
/* WARNING: Removing unreachable block (ram,0x0001408f71db) */
/* WARNING: Removing unreachable block (ram,0x0001408f7268) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedSpringDampingConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,byte param_13,float *param_14,longlong param_15,
               uint param_16)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  byte bVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  int iVar48;
  float fVar54;
  float fVar56;
  float fVar58;
  undefined1 auVar49 [16];
  int iVar55;
  int iVar57;
  int iVar59;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar60;
  int iVar63;
  int iVar64;
  int iVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar69;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar70;
  float fVar71;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar80;
  float fVar86;
  float fVar87;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  float fVar89;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar90 [16];
  float fVar96;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar103;
  float fVar106;
  float fVar107;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar108;
  float fVar111;
  float fVar112;
  undefined1 auVar110 [16];
  float fVar120;
  float fVar121;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar126;
  float fVar127;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar128;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar139;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar152;
  float fVar154;
  undefined1 auVar146 [16];
  float fVar156;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  float fStack_22c;
  undefined1 local_218 [8];
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_198 [8];
  float fStack_190;
  float fStack_18c;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auVar91 [16];
  undefined1 auVar109 [16];
  float fVar135;
  float fVar138;
  float fVar144;
  float fVar151;
  float fVar153;
  float fVar155;
  
  auVar41 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar35 = param_16 + 3;
  if (-1 < (int)param_16) {
    uVar35 = param_16;
  }
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    uVar26 = 0;
    fVar103 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
    do {
      uVar15 = uVar26 & 0xffffffff;
      fStack_20c = *param_8;
      local_218._0_4_ = fStack_20c;
      local_218._4_4_ = fStack_20c;
      fStack_210 = fStack_20c;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar15);
        fVar71 = param_8[1];
        local_218._0_4_ = fStack_20c + fVar71 * *pfVar1;
        local_218._4_4_ = fStack_20c + fVar71 * pfVar1[1];
        fStack_210 = fStack_20c + fVar71 * pfVar1[2];
        fStack_20c = fStack_20c + fVar71 * pfVar1[3];
      }
      fStack_22c = *param_11;
      local_238._0_4_ = fStack_22c;
      local_238._4_4_ = fStack_22c;
      fStack_230 = fStack_22c;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar15);
        fVar71 = param_11[1];
        local_238._0_4_ = fStack_22c + fVar71 * *pfVar1;
        local_238._4_4_ = fStack_22c + fVar71 * pfVar1[1];
        fStack_230 = fStack_22c + fVar71 * pfVar1[2];
        fStack_22c = fStack_22c + fVar71 * pfVar1[3];
      }
      piVar2 = (int *)(param_3 + uVar26 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar26 * 2);
      lVar19 = (longlong)(*piVar2 << 4);
      lVar27 = (longlong)(piVar2[2] * 0x10);
      lVar32 = (longlong)(*piVar3 << 4);
      lVar25 = (longlong)(piVar3[2] << 4);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + lVar19)),*(undefined4 *)(param_1 + lVar27),
                          0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar148 = insertps(auVar147,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar19)),
                          *(undefined4 *)(param_1 + 4 + lVar27),0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar104 = insertps(auVar147,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar147 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar19)),
                          *(undefined4 *)(param_1 + 8 + lVar27),0x10);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar129 = insertps(auVar147,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      uVar22 = *(uint *)(param_1 + 0xc + lVar19);
      uVar38 = *(uint *)(param_1 + 0xc + lVar27);
      uVar40 = *(uint *)(param_1 + 0xc + lVar32);
      auVar113 = insertps(ZEXT416(uVar22),ZEXT416(uVar38),0x10);
      lVar17 = (longlong)(*piVar2 * 3);
      lVar28 = (longlong)(piVar2[2] * 3);
      auVar81 = insertps(ZEXT416(*(uint *)(param_2 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + lVar28 * 4),0x10);
      auVar72 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar28 * 4),0x10);
      auVar147 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar28 * 4),0x10);
      lVar17 = (longlong)(*piVar3 * 3);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + lVar17 * 4),0x20);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x20);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x20);
      lVar28 = (longlong)(piVar2[1] << 4);
      lVar17 = (longlong)(piVar3[2] * 3);
      auVar82 = insertps(auVar81,*(undefined4 *)(param_2 + lVar17 * 4),0x30);
      auVar73 = insertps(auVar72,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x30);
      auVar72 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x30);
      lVar17 = (longlong)(piVar2[1] * 3);
      lVar29 = (longlong)(piVar2[3] * 3);
      auVar74 = insertps(ZEXT416(*(uint *)(param_2 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + lVar29 * 4),0x10);
      auVar81 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar17 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar29 * 4),0x10);
      auVar147 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar17 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar29 * 4),0x10);
      lVar31 = (longlong)(piVar2[3] * 0x10);
      lVar17 = (longlong)(piVar3[1] * 3);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_2 + lVar17 * 4),0x20);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x20);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x20);
      lVar29 = (longlong)(piVar3[1] << 4);
      lVar17 = (longlong)(piVar3[3] * 3);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_2 + lVar17 * 4),0x30);
      auVar81 = insertps(auVar81,*(undefined4 *)(param_2 + 4 + lVar17 * 4),0x30);
      auVar147 = insertps(auVar147,*(undefined4 *)(param_2 + 8 + lVar17 * 4),0x30);
      lVar17 = (longlong)(piVar3[3] << 4);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),*(undefined4 *)(param_1 + lVar31),0x10
                        );
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + lVar29),0x20);
      auVar76 = insertps(auVar74,*(undefined4 *)(param_1 + lVar17),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar29),0x20);
      auVar83 = insertps(auVar74,*(undefined4 *)(param_1 + 4 + lVar17),0x30);
      auVar74 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 8 + lVar29),0x20);
      auVar113 = insertps(auVar113,ZEXT416(uVar40),0x20);
      auVar74 = insertps(auVar74,*(undefined4 *)(param_1 + 8 + lVar17),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar25);
      auVar114 = insertps(auVar113,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      uVar6 = *(uint *)(param_1 + 0xc + lVar31);
      auVar113 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar29);
      auVar113 = insertps(auVar113,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar17);
      auVar113 = insertps(auVar113,ZEXT416(uVar8),0x30);
      fVar71 = *param_14;
      fVar87 = fVar71;
      fVar126 = fVar71;
      fVar127 = fVar71;
      if ((param_13 & 1) != 0) {
        pfVar1 = (float *)(param_15 + uVar15);
        fVar47 = param_14[1];
        fVar87 = fVar71 + fVar47 * pfVar1[1];
        fVar126 = fVar71 + fVar47 * pfVar1[2];
        fVar127 = fVar71 + fVar47 * pfVar1[3];
        fVar71 = fVar71 + fVar47 * *pfVar1;
      }
      fVar70 = auVar76._0_4_;
      fVar144 = auVar148._0_4_;
      auVar146._0_4_ = fVar144 - fVar70;
      fVar77 = auVar76._4_4_;
      fVar151 = auVar148._4_4_;
      auVar146._4_4_ = fVar151 - fVar77;
      fVar78 = auVar76._8_4_;
      fVar153 = auVar148._8_4_;
      fVar155 = auVar148._12_4_;
      auVar146._8_4_ = fVar153 - fVar78;
      fVar79 = auVar76._12_4_;
      auVar146._12_4_ = fVar155 - fVar79;
      fVar106 = auVar104._4_4_;
      fVar107 = auVar104._12_4_;
      fVar80 = auVar83._0_4_;
      fVar135 = auVar104._0_4_;
      auVar136._0_4_ = fVar135 - fVar80;
      fVar108 = auVar83._4_4_;
      auVar136._4_4_ = fVar106 - fVar108;
      fVar86 = auVar83._8_4_;
      fVar138 = auVar104._8_4_;
      auVar136._8_4_ = fVar138 - fVar86;
      fVar111 = auVar83._12_4_;
      auVar136._12_4_ = fVar107 - fVar111;
      auVar148._0_4_ = auVar136._0_4_ * auVar136._0_4_ + auVar146._0_4_ * auVar146._0_4_;
      auVar148._4_4_ = auVar136._4_4_ * auVar136._4_4_ + auVar146._4_4_ * auVar146._4_4_;
      auVar148._8_4_ = auVar136._8_4_ * auVar136._8_4_ + auVar146._8_4_ * auVar146._8_4_;
      auVar148._12_4_ = auVar136._12_4_ * auVar136._12_4_ + auVar146._12_4_ * auVar146._12_4_;
      fVar66 = auVar74._0_4_;
      fVar128 = auVar129._0_4_;
      auVar50._0_4_ = fVar128 - fVar66;
      fVar89 = auVar74._4_4_;
      fVar132 = auVar129._4_4_;
      auVar50._4_4_ = fVar132 - fVar89;
      fVar93 = auVar74._8_4_;
      fVar133 = auVar129._8_4_;
      fVar134 = auVar129._12_4_;
      auVar50._8_4_ = fVar133 - fVar93;
      fVar69 = auVar74._12_4_;
      auVar50._12_4_ = fVar134 - fVar69;
      auVar104._0_4_ = auVar50._0_4_ * auVar50._0_4_ + auVar148._0_4_;
      auVar104._4_4_ = auVar50._4_4_ * auVar50._4_4_ + auVar148._4_4_;
      auVar104._8_4_ = auVar50._8_4_ * auVar50._8_4_ + auVar148._8_4_;
      auVar104._12_4_ = auVar50._12_4_ * auVar50._12_4_ + auVar148._12_4_;
      auVar129 = sqrtps(auVar148,auVar104);
      uVar34 = -(uint)(auVar104._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar36 = -(uint)(auVar104._4_4_ < _UNK_1506895e4);
      uVar37 = -(uint)(auVar104._8_4_ < _UNK_1506895e8);
      uVar39 = -(uint)(auVar104._12_4_ < _UNK_1506895ec);
      auVar74._4_4_ = uVar36;
      auVar74._0_4_ = uVar34;
      auVar76 = divps(auVar146,auVar129);
      auVar74._8_4_ = uVar37;
      auVar74._12_4_ = uVar39;
      auVar148 = blendvps(auVar76,auVar41,auVar74);
      auVar74 = *(undefined1 (*) [16])(param_4 + uVar15);
      auVar83 = divps(auVar41,auVar74);
      auVar76._4_4_ = -(uint)(auVar74._4_4_ < _UNK_1506895d4);
      auVar76._0_4_ = -(uint)(auVar74._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar76._8_4_ = -(uint)(auVar74._8_4_ < _UNK_1506895d8);
      auVar76._12_4_ = -(uint)(auVar74._12_4_ < _UNK_1506895dc);
      auVar76 = blendvps(auVar83,auVar41,auVar76);
      auVar83._4_4_ = -(uint)(0.0 <= (float)(~uVar36 & auVar129._4_4_) - auVar74._4_4_);
      auVar83._0_4_ = -(uint)(0.0 <= (float)(~uVar34 & auVar129._0_4_) - auVar74._0_4_);
      auVar83._8_4_ = -(uint)(0.0 <= (float)(~uVar37 & auVar129._8_4_) - auVar74._8_4_);
      auVar83._12_4_ = -(uint)(0.0 <= (float)(~uVar39 & auVar129._12_4_) - auVar74._12_4_);
      auVar74 = blendvps(_local_238,_local_218,auVar83);
      auVar104 = divps(auVar136,auVar129);
      auVar83 = divps(auVar50,auVar129);
      fVar96 = (float)(~uVar34 & auVar104._0_4_);
      fVar100 = (float)(~uVar36 & auVar104._4_4_);
      fVar101 = (float)(~uVar37 & auVar104._8_4_);
      fVar102 = (float)(~uVar39 & auVar104._12_4_);
      fVar140 = (float)(~uVar34 & auVar83._0_4_);
      fVar141 = (float)(~uVar36 & auVar83._4_4_);
      fVar142 = (float)(~uVar37 & auVar83._8_4_);
      fVar143 = (float)(~uVar39 & auVar83._12_4_);
      fVar112 = auVar114._0_4_;
      fVar120 = auVar114._4_4_;
      fVar121 = auVar114._12_4_;
      fVar88 = auVar113._0_4_;
      auVar129._0_4_ = fVar112 + fVar88;
      fVar92 = auVar113._4_4_;
      auVar129._4_4_ = fVar120 + fVar92;
      fVar94 = auVar113._8_4_;
      fVar139 = auVar114._8_4_;
      auVar129._8_4_ = fVar139 + fVar94;
      fVar95 = auVar113._12_4_;
      auVar129._12_4_ = fVar121 + fVar95;
      auVar74 = divps(auVar74,auVar129);
      auVar74 = sqrtps(auVar74,auVar74);
      local_168 = auVar82._0_4_;
      fStack_164 = auVar82._4_4_;
      fStack_160 = auVar82._8_4_;
      fStack_15c = auVar82._12_4_;
      local_1e8 = auVar73._0_4_;
      fStack_1e4 = auVar73._4_4_;
      fStack_1e0 = auVar73._8_4_;
      fStack_1dc = auVar73._12_4_;
      local_158 = auVar72._0_4_;
      fStack_154 = auVar72._4_4_;
      fStack_150 = auVar72._8_4_;
      fStack_14c = auVar72._12_4_;
      local_198._0_4_ = auVar75._0_4_;
      local_198._4_4_ = auVar75._4_4_;
      fStack_190 = auVar75._8_4_;
      fStack_18c = auVar75._12_4_;
      local_188._0_4_ = auVar81._0_4_;
      local_188._4_4_ = auVar81._4_4_;
      fStack_180 = auVar81._8_4_;
      fStack_17c = auVar81._12_4_;
      local_178 = auVar147._0_4_;
      fStack_174 = auVar147._4_4_;
      fStack_170 = auVar147._8_4_;
      fStack_16c = auVar147._12_4_;
      fVar47 = auVar74._0_4_ * (fVar71 + fVar71) * auVar76._0_4_ * param_6;
      fVar54 = auVar74._4_4_ * (fVar87 + fVar87) * auVar76._4_4_ * param_6;
      fVar56 = auVar74._8_4_ * (fVar126 + fVar126) * auVar76._8_4_ * param_6;
      fVar58 = auVar74._12_4_ * (fVar127 + fVar127) * auVar76._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar15);
      fVar71 = *pfVar1;
      fVar87 = pfVar1[1];
      fVar126 = pfVar1[2];
      fVar127 = pfVar1[3];
      auVar147._0_4_ =
           ((((fVar128 - local_158) - fVar66) + local_178) * fVar140 +
           (((fVar135 - local_1e8) - fVar80) + (float)local_188._0_4_) * fVar96 +
           (((fVar144 - local_168) - fVar70) + (float)local_198._0_4_) * auVar148._0_4_) *
           (float)((uint)fVar47 ^ __xmm_80000000800000008000000080000000) - fVar71;
      auVar147._4_4_ =
           ((((fVar132 - fStack_154) - fVar89) + fStack_174) * fVar141 +
           (((fVar106 - fStack_1e4) - fVar108) + (float)local_188._4_4_) * fVar100 +
           (((fVar151 - fStack_164) - fVar77) + (float)local_198._4_4_) * auVar148._4_4_) *
           (float)((uint)fVar54 ^ _UNK_150651574) - fVar87;
      auVar147._8_4_ =
           ((((fVar133 - fStack_150) - fVar93) + fStack_170) * fVar142 +
           (((fVar138 - fStack_1e0) - fVar86) + fStack_180) * fVar101 +
           (((fVar153 - fStack_160) - fVar78) + fStack_190) * auVar148._8_4_) *
           (float)((uint)fVar56 ^ _UNK_150651578) - fVar126;
      auVar147._12_4_ =
           ((((fVar134 - fStack_14c) - fVar69) + fStack_16c) * fVar143 +
           (((fVar107 - fStack_1dc) - fVar111) + fStack_17c) * fVar102 +
           (((fVar155 - fStack_15c) - fVar79) + fStack_18c) * auVar148._12_4_) *
           (float)((uint)fVar58 ^ _UNK_15065157c) - fVar127;
      auVar114._0_4_ = auVar129._0_4_ * fVar47 + auVar41._0_4_;
      auVar114._4_4_ = auVar129._4_4_ * fVar54 + auVar41._4_4_;
      auVar114._8_4_ = auVar129._8_4_ * fVar56 + auVar41._8_4_;
      auVar114._12_4_ = auVar129._12_4_ * fVar58 + fVar103;
      auVar147 = divps(auVar147,auVar114);
      fVar47 = auVar147._0_4_;
      fVar145 = auVar148._0_4_ * fVar47;
      fVar54 = auVar147._4_4_;
      fVar152 = auVar148._4_4_ * fVar54;
      fVar56 = auVar147._8_4_;
      fVar154 = auVar148._8_4_ * fVar56;
      fVar58 = auVar147._12_4_;
      fVar156 = auVar148._12_4_ * fVar58;
      auVar72._0_4_ = fVar112 * fVar145 + fVar144;
      auVar72._4_4_ = fVar120 * fVar152 + fVar151;
      auVar72._8_4_ = fVar139 * fVar154 + fVar153;
      auVar72._12_4_ = fVar121 * fVar156 + fVar155;
      fVar96 = fVar96 * fVar47;
      fVar100 = fVar100 * fVar54;
      fVar101 = fVar101 * fVar56;
      fVar102 = fVar102 * fVar58;
      *(float *)(param_1 + lVar19) = auVar72._0_4_;
      uVar9 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + lVar27) = uVar9;
      auVar82._0_4_ = fVar112 * fVar96 + fVar135;
      auVar82._4_4_ = fVar120 * fVar100 + fVar106;
      auVar82._8_4_ = fVar139 * fVar101 + fVar138;
      auVar82._12_4_ = fVar121 * fVar102 + fVar107;
      uVar9 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      uVar9 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + lVar25) = uVar9;
      fVar140 = fVar140 * fVar47;
      fVar141 = fVar141 * fVar54;
      fVar142 = fVar142 * fVar56;
      fVar143 = fVar143 * fVar58;
      *(float *)(param_1 + 4 + lVar19) = auVar82._0_4_;
      uVar9 = extractps(auVar82,1);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar9;
      uVar9 = extractps(auVar82,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      auVar113._0_4_ = fVar112 * fVar140 + fVar128;
      auVar113._4_4_ = fVar120 * fVar141 + fVar132;
      auVar113._8_4_ = fVar139 * fVar142 + fVar133;
      auVar113._12_4_ = fVar121 * fVar143 + fVar134;
      uVar9 = extractps(auVar82,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar9;
      *(float *)(param_1 + 8 + lVar19) = auVar113._0_4_;
      uVar9 = extractps(auVar113,1);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar9;
      uVar9 = extractps(auVar113,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      uVar9 = extractps(auVar113,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar9;
      *(uint *)(param_1 + 0xc + lVar19) = uVar22;
      *(uint *)(param_1 + 0xc + lVar27) = uVar38;
      *(uint *)(param_1 + 0xc + lVar32) = uVar40;
      *(uint *)(param_1 + 0xc + lVar25) = uVar4;
      auVar73._0_4_ = fVar70 - fVar145 * fVar88;
      auVar73._4_4_ = fVar77 - fVar152 * fVar92;
      auVar73._8_4_ = fVar78 - fVar154 * fVar94;
      auVar73._12_4_ = fVar79 - fVar156 * fVar95;
      *(float *)(param_1 + lVar28) = auVar73._0_4_;
      uVar9 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      uVar9 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + lVar29) = uVar9;
      auVar75._0_4_ = fVar80 - fVar96 * fVar88;
      auVar75._4_4_ = fVar108 - fVar100 * fVar92;
      auVar75._8_4_ = fVar86 - fVar101 * fVar94;
      auVar75._12_4_ = fVar111 - fVar102 * fVar95;
      uVar9 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + lVar17) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar75._0_4_;
      uVar9 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      uVar9 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 4 + lVar29) = uVar9;
      auVar81._0_4_ = fVar66 - fVar140 * fVar88;
      auVar81._4_4_ = fVar89 - fVar141 * fVar92;
      auVar81._8_4_ = fVar93 - fVar142 * fVar94;
      auVar81._12_4_ = fVar69 - fVar143 * fVar95;
      uVar9 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar81._0_4_;
      uVar9 = extractps(auVar81,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = extractps(auVar81,2);
      *(undefined8 *)(param_1 + 8 + lVar29) = uVar9;
      uVar9 = extractps(auVar81,3);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar9;
      pfVar1 = (float *)(param_5 + uVar15);
      *pfVar1 = fVar47 + fVar71;
      pfVar1[1] = fVar54 + fVar87;
      pfVar1[2] = fVar56 + fVar126;
      pfVar1[3] = fVar58 + fVar127;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      *(uint *)(param_1 + 0xc + lVar31) = uVar6;
      *(uint *)(param_1 + 0xc + lVar29) = uVar7;
      *(uint *)(param_1 + 0xc + lVar17) = uVar8;
      uVar26 = uVar26 + 0x10;
      uVar22 = (int)uVar14 + 4;
      uVar14 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)(uVar35 & 0xfffffffc));
  }
  uVar35 = (uint)uVar14;
  if ((int)param_16 <= (int)uVar35) {
    return;
  }
  auVar41._0_4_ =
       -(uint)((int)(uVar35 | (uint)__xmm_00000003000000020000000100000000) < (int)param_16);
  auVar41._4_4_ =
       -(uint)((int)(uVar35 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_16);
  auVar41._8_4_ = -(uint)((int)(uVar35 | _UNK_150631e08) < (int)param_16);
  auVar41._12_4_ = -(uint)((int)(uVar35 | _UNK_150631e0c) < (int)param_16);
  piVar2 = (int *)(param_3 + uVar14 * 8);
  uVar22 = movmskps((int)param_3,auVar41);
  bVar21 = (char)((char)uVar22 << 4) >> 4;
  if (uVar22 == 0xf) {
    iVar60 = *piVar2;
    iVar48 = piVar2[1];
    iVar63 = piVar2[2];
    iVar55 = piVar2[3];
    iVar64 = piVar2[4];
    iVar57 = piVar2[5];
    iVar65 = piVar2[6];
    iVar59 = piVar2[7];
  }
  else {
    auVar49._0_4_ = ___xmm_00000018000000100000000800000000 & auVar41._0_4_;
    auVar49._4_4_ = _UNK_150b51a04 & auVar41._4_4_;
    auVar49._8_4_ = _UNK_150b51a08 & auVar41._8_4_;
    auVar49._12_4_ = _UNK_150b51a0c & auVar41._12_4_;
    lVar17 = extractps(auVar49,1);
    lVar28 = extractps(auVar49,2);
    lVar19 = extractps(auVar49,3);
    iVar60 = *piVar2;
    iVar63 = *(int *)((longlong)piVar2 + lVar17);
    iVar64 = *(int *)((longlong)piVar2 + lVar28);
    iVar65 = *(int *)((longlong)piVar2 + lVar19);
    auVar147 = ___xmm_0000001c000000140000000c00000004 & auVar41;
    iVar48 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._0_4_);
    iVar55 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._4_4_);
    iVar57 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._8_4_);
    iVar59 = *(int *)((longlong)piVar2 + (ulonglong)auVar147._12_4_);
  }
  auVar97._0_4_ = iVar60 << 4;
  auVar97._4_4_ = iVar63 << 4;
  auVar97._8_4_ = iVar64 << 4;
  auVar97._12_4_ = iVar65 << 4;
  auVar147 = auVar41 & auVar97;
  lVar17 = param_1 + auVar147._0_4_;
  lVar28 = param_1 + auVar147._4_4_;
  lVar19 = param_1 + auVar147._8_4_;
  lVar25 = param_1 + auVar147._12_4_;
  auVar81 = ___xmm_00000004000000040000000400000004 & auVar41;
  uVar14 = (ulonglong)auVar81._0_4_;
  uVar26 = (ulonglong)auVar81._4_4_;
  auVar72 = ___xmm_00000008000000080000000800000008 & auVar41;
  uVar15 = (ulonglong)auVar72._0_4_;
  auVar90._0_4_ = iVar48 << 4;
  auVar90._4_4_ = iVar55 << 4;
  auVar90._8_4_ = iVar57 << 4;
  auVar90._12_4_ = iVar59 << 4;
  auVar74 = auVar41 & auVar90;
  lVar23 = (longlong)auVar74._0_4_;
  auVar73 = ZEXT416(*(uint *)(param_1 + auVar147._0_4_));
  lVar27 = param_1 + lVar23;
  lVar29 = param_1 + auVar74._4_4_;
  lVar31 = param_1 + auVar74._8_4_;
  lVar32 = param_1 + auVar74._12_4_;
  bVar33 = (bVar21 & 2) != 0;
  if (bVar33) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._4_4_),0x10);
  }
  uVar18 = (ulonglong)auVar72._4_4_;
  auVar75 = ZEXT416(*(uint *)(uVar14 + lVar17));
  if (bVar33) {
    auVar75 = insertps(auVar75,*(undefined4 *)(uVar26 + lVar28),0x10);
    auVar82 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
    auVar76 = insertps(ZEXT416(*(uint *)(param_1 + lVar23)),*(undefined4 *)(param_1 + auVar74._4_4_)
                       ,0x10);
  }
  else {
    auVar82 = ZEXT416(*(uint *)(uVar15 + lVar17));
    auVar76 = ZEXT416(*(uint *)(param_1 + lVar23));
  }
  auVar83 = ZEXT416(*(uint *)(uVar14 + lVar27));
  uVar38 = auVar81._8_4_;
  uVar40 = auVar72._8_4_;
  if (bVar33) {
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar26 + lVar29),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar15 + lVar27)),*(undefined4 *)(uVar18 + lVar29),0x10);
  }
  else {
    auVar113 = ZEXT416(*(uint *)(uVar15 + lVar27));
  }
  if ((bVar21 & 4) != 0) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._8_4_),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)uVar38 + lVar19),0x20);
    auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)uVar40 + lVar19),0x20);
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar74._8_4_),0x20);
    auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar38 + lVar31),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)uVar40 + lVar31),0x20);
  }
  auVar104 = ___xmm_0000000c0000000c0000000c0000000c & auVar41;
  uVar20 = (ulonglong)auVar81._12_4_;
  bVar33 = (char)bVar21 < '\0';
  if (bVar33) {
    auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + auVar147._12_4_),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)(uVar20 + lVar25),0x30);
    auVar82 = insertps(auVar82,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar25),0x30);
  }
  uVar30 = (ulonglong)auVar72._12_4_;
  if (bVar33) {
    auVar76 = insertps(auVar76,*(undefined4 *)(param_1 + auVar74._12_4_),0x30);
  }
  auVar147 = insertps(ZEXT416(*(uint *)((ulonglong)auVar104._0_4_ + lVar17)),
                      *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar28),0x10);
  auVar72 = insertps(ZEXT416(*(uint *)((ulonglong)auVar104._0_4_ + lVar27)),
                     *(undefined4 *)((ulonglong)auVar104._4_4_ + lVar29),0x10);
  if (bVar33) {
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar20 + lVar32),0x30);
  }
  auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar19),0x20);
  auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar104._8_4_ + lVar31),0x20);
  if (bVar33) {
    auVar113 = insertps(auVar113,*(undefined4 *)(uVar30 + lVar32),0x30);
  }
  auVar81 = insertps(auVar147,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar25),0x30);
  auVar129 = insertps(auVar72,*(undefined4 *)((ulonglong)auVar104._12_4_ + lVar32),0x30);
  auVar67._4_4_ = iVar63 * 3;
  auVar67._0_4_ = iVar60 * 3;
  auVar67._8_4_ = iVar64 * 3;
  auVar67._12_4_ = iVar65 * 3;
  auVar67 = auVar67 & auVar41;
  lVar17 = param_2 + (longlong)auVar67._0_4_ * 4;
  lVar28 = param_2 + (longlong)auVar67._4_4_ * 4;
  lVar19 = param_2 + (longlong)auVar67._8_4_ * 4;
  auVar147 = insertps(ZEXT416(*(uint *)(uVar14 + lVar17)),*(undefined4 *)(uVar26 + lVar28),0x10);
  auVar72 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar38 + lVar19),0x20);
  auVar147 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
  auVar114 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar40 + lVar19),0x20);
  auVar61._4_4_ = iVar55 * 3;
  auVar61._0_4_ = iVar48 * 3;
  auVar61._8_4_ = iVar57 * 3;
  auVar61._12_4_ = iVar59 * 3;
  auVar61 = auVar61 & auVar41;
  lVar17 = param_2 + (longlong)auVar61._0_4_ * 4;
  lVar28 = param_2 + (longlong)auVar61._4_4_ * 4;
  auVar41 = insertps(ZEXT416(*(uint *)(uVar14 + lVar17)),*(undefined4 *)(uVar26 + lVar28),0x10);
  auVar147 = insertps(ZEXT416(*(uint *)(uVar15 + lVar17)),*(undefined4 *)(uVar18 + lVar28),0x10);
  lVar17 = param_2 + (longlong)auVar61._8_4_ * 4;
  auVar41 = insertps(auVar41,*(undefined4 *)((ulonglong)uVar38 + lVar17),0x20);
  auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar40 + lVar17),0x20);
  auVar74 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar67._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar67._4_4_ * 4),0x10);
  auVar74 = insertps(auVar74,*(undefined4 *)(param_2 + (longlong)auVar67._8_4_ * 4),0x20);
  auVar104 = insertps(auVar74,*(undefined4 *)(param_2 + (longlong)auVar67._12_4_ * 4),0x30);
  lVar17 = param_2 + (longlong)auVar67._12_4_ * 4;
  auVar74 = insertps(auVar72,*(undefined4 *)(uVar20 + lVar17),0x30);
  auVar114 = insertps(auVar114,*(undefined4 *)(uVar30 + lVar17),0x30);
  auVar72 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar61._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar61._4_4_ * 4),0x10);
  auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + (longlong)auVar61._8_4_ * 4),0x20);
  auVar72 = insertps(auVar72,*(undefined4 *)(param_2 + (longlong)auVar61._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar61._12_4_ * 4;
  auVar41 = insertps(auVar41,*(undefined4 *)(uVar20 + param_2),0x30);
  auVar147 = insertps(auVar147,*(undefined4 *)(uVar30 + param_2),0x30);
  lVar17 = (longlong)(int)(uVar35 << 2);
  bVar24 = bVar21 & 9;
  pfVar1 = (float *)(param_5 + lVar17);
  local_188._0_4_ = *param_8;
  fVar103 = (float)local_188._0_4_;
  local_188._4_4_ = local_188._0_4_;
  fStack_180 = (float)local_188._0_4_;
  if (bVar24 == 9) {
    _local_198 = *(undefined1 (*) [16])(param_4 + lVar17);
    auVar50 = *(undefined1 (*) [16])(param_5 + lVar17);
    auVar148 = _local_198;
    if ((param_7 & 1) != 0) {
      auVar148 = *(undefined1 (*) [16])(param_9 + lVar17);
LAB_1408f75ef:
      fVar71 = param_8[1];
      fVar103 = (float)local_188._0_4_ + fVar71 * auVar148._0_4_;
      local_188._4_4_ = (float)local_188._0_4_ + fVar71 * auVar148._4_4_;
      fStack_180 = (float)local_188._0_4_ + fVar71 * auVar148._8_4_;
      local_188._0_4_ = (float)local_188._0_4_ + fVar71 * auVar148._12_4_;
    }
    fVar71 = *param_11;
    auVar130._4_4_ = fVar71;
    auVar130._0_4_ = fVar71;
    auVar130._8_4_ = fVar71;
    auVar130._12_4_ = fVar71;
    if ((param_10 & 1) == 0) {
      fVar71 = *param_14;
      fStack_17c = (float)local_188._0_4_;
    }
    else {
      if (bVar24 == 9) {
        auVar148 = *(undefined1 (*) [16])(param_12 + lVar17);
      }
      else {
LAB_1408f7706:
        puVar16 = (uint *)(param_12 + lVar17);
        if ((uVar22 & 1) != 0) {
          auVar148 = ZEXT416(*puVar16);
        }
        if ((uVar22 & 2) != 0) {
          auVar148 = insertps(auVar148,puVar16[1],0x10);
        }
        if ((uVar22 & 4) != 0) {
          auVar148 = insertps(auVar148,puVar16[2],0x20);
        }
        if ((uVar22 & 8) != 0) {
          auVar148 = insertps(auVar148,puVar16[3],0x30);
        }
      }
      fVar71 = param_11[1];
      auVar131._0_4_ = auVar130._0_4_ + fVar71 * auVar148._0_4_;
      auVar131._4_4_ = auVar130._4_4_ + fVar71 * auVar148._4_4_;
      auVar131._8_4_ = auVar130._8_4_ + fVar71 * auVar148._8_4_;
      auVar131._12_4_ = auVar130._12_4_ + fVar71 * auVar148._12_4_;
      fVar71 = *param_14;
      auVar130 = auVar131;
      fStack_17c = (float)local_188._0_4_;
    }
    local_188._0_4_ = fVar103;
    fVar103 = fVar71;
    fVar87 = fVar71;
    fVar126 = fVar71;
    if ((param_13 & 1) == 0) goto LAB_1408f7841;
    if (bVar24 != 9) goto LAB_1408f7806;
    auVar148 = *(undefined1 (*) [16])(param_15 + lVar17);
  }
  else {
    puVar16 = (uint *)(param_4 + lVar17);
    auVar148 = auVar41;
    if ((uVar22 & 1) != 0) {
      auVar148 = ZEXT416(*puVar16);
    }
    if ((uVar22 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar16[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar16[2],0x20);
    }
    if ((uVar22 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar16[3],0x30);
    }
    auVar50 = auVar147;
    if ((uVar22 & 1) != 0) {
      auVar50 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar22 & 2) != 0) {
      auVar50 = insertps(auVar50,pfVar1[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar50 = insertps(auVar50,pfVar1[2],0x20);
    }
    if ((uVar22 & 8) != 0) {
      auVar50 = insertps(auVar50,pfVar1[3],0x30);
    }
    _local_198 = auVar148;
    if ((param_7 & 1) != 0) {
      puVar16 = (uint *)(param_9 + lVar17);
      if ((uVar22 & 1) != 0) {
        auVar148 = ZEXT416(*puVar16);
      }
      if ((uVar22 & 2) != 0) {
        auVar148 = insertps(auVar148,puVar16[1],0x10);
      }
      if ((uVar22 & 4) != 0) {
        auVar148 = insertps(auVar148,puVar16[2],0x20);
      }
      if ((uVar22 & 8) != 0) {
        auVar148 = insertps(auVar148,puVar16[3],0x30);
      }
      goto LAB_1408f75ef;
    }
    fVar71 = *param_11;
    auVar130._4_4_ = fVar71;
    auVar130._0_4_ = fVar71;
    auVar130._8_4_ = fVar71;
    auVar130._12_4_ = fVar71;
    if ((param_10 & 1) != 0) goto LAB_1408f7706;
    fVar71 = *param_14;
    fVar103 = fVar71;
    fVar87 = fVar71;
    fVar126 = fVar71;
    fStack_17c = (float)local_188._0_4_;
    if ((param_13 & 1) == 0) goto LAB_1408f7841;
LAB_1408f7806:
    puVar16 = (uint *)(param_15 + lVar17);
    if ((uVar22 & 1) != 0) {
      auVar148 = ZEXT416(*puVar16);
    }
    if ((uVar22 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar16[1],0x10);
    }
    if ((uVar22 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar16[2],0x20);
    }
    fVar126 = fVar71;
    if ((uVar22 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar16[3],0x30);
    }
  }
  fVar127 = param_14[1];
  fVar71 = fVar126 + fVar127 * auVar148._0_4_;
  fVar103 = fVar126 + fVar127 * auVar148._4_4_;
  fVar87 = fVar126 + fVar127 * auVar148._8_4_;
  fVar126 = fVar126 + fVar127 * auVar148._12_4_;
LAB_1408f7841:
  local_208 = auVar73._0_4_;
  fStack_204 = auVar73._4_4_;
  fStack_200 = auVar73._8_4_;
  fStack_1fc = auVar73._12_4_;
  fVar79 = auVar76._0_4_;
  fVar89 = local_208 - fVar79;
  fVar86 = auVar76._4_4_;
  fVar93 = fStack_204 - fVar86;
  auVar91._0_8_ = CONCAT44(fVar93,fVar89);
  fVar88 = auVar76._8_4_;
  auVar91._8_4_ = fStack_200 - fVar88;
  fVar94 = auVar76._12_4_;
  auVar91._12_4_ = fStack_1fc - fVar94;
  fVar102 = auVar75._4_4_;
  fVar106 = auVar75._12_4_;
  fVar80 = auVar75._0_4_;
  fVar95 = auVar83._0_4_;
  fVar108 = fVar80 - fVar95;
  fVar96 = auVar83._4_4_;
  fVar111 = fVar102 - fVar96;
  auVar109._0_8_ = CONCAT44(fVar111,fVar108);
  fVar92 = auVar75._8_4_;
  fVar100 = auVar83._8_4_;
  auVar109._8_4_ = fVar92 - fVar100;
  fVar101 = auVar83._12_4_;
  auVar109._12_4_ = fVar106 - fVar101;
  fVar127 = auVar82._0_4_;
  fVar69 = auVar113._0_4_;
  fVar47 = fVar127 - fVar69;
  fVar56 = auVar82._4_4_;
  fVar70 = auVar113._4_4_;
  fVar54 = fVar56 - fVar70;
  auVar68._0_8_ = CONCAT44(fVar54,fVar47);
  fVar58 = auVar82._8_4_;
  fVar66 = auVar82._12_4_;
  fVar77 = auVar113._8_4_;
  auVar68._8_4_ = fVar58 - fVar77;
  fVar78 = auVar113._12_4_;
  auVar68._12_4_ = fVar66 - fVar78;
  auVar62._0_4_ = fVar108 * fVar108 + fVar89 * fVar89;
  auVar62._4_4_ = fVar111 * fVar111 + fVar93 * fVar93;
  auVar62._8_4_ = auVar109._8_4_ * auVar109._8_4_ + auVar91._8_4_ * auVar91._8_4_;
  auVar62._12_4_ = auVar109._12_4_ * auVar109._12_4_ + auVar91._12_4_ * auVar91._12_4_;
  auVar42._0_4_ = fVar47 * fVar47 + auVar62._0_4_;
  auVar42._4_4_ = fVar54 * fVar54 + auVar62._4_4_;
  auVar42._8_4_ = auVar68._8_4_ * auVar68._8_4_ + auVar62._8_4_;
  auVar42._12_4_ = auVar68._12_4_ * auVar68._12_4_ + auVar62._12_4_;
  auVar75 = sqrtps(auVar62,auVar42);
  uVar35 = -(uint)(auVar42._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar22 = -(uint)(auVar42._4_4_ < _UNK_1506895e4);
  uVar38 = -(uint)(auVar42._8_4_ < _UNK_1506895e8);
  uVar40 = -(uint)(auVar42._12_4_ < _UNK_1506895ec);
  auVar43._4_4_ = uVar22;
  auVar43._0_4_ = uVar35;
  auVar43._8_4_ = uVar38;
  auVar43._12_4_ = uVar40;
  auVar84._8_4_ = auVar109._8_4_;
  auVar84._0_8_ = auVar109._0_8_;
  auVar84._12_4_ = auVar109._12_4_;
  auVar76 = divps(auVar84,auVar75);
  auVar115._8_4_ = auVar68._8_4_;
  auVar115._0_8_ = auVar68._0_8_;
  auVar115._12_4_ = auVar68._12_4_;
  auVar82 = divps(auVar115,auVar75);
  auVar98._8_4_ = auVar91._8_4_;
  auVar98._0_8_ = auVar91._0_8_;
  auVar98._12_4_ = auVar91._12_4_;
  auVar73 = divps(auVar98,auVar75);
  auVar73 = blendvps(auVar73,___xmm_3f8000003f8000003f8000003f800000,auVar43);
  auVar122._8_4_ = auVar91._8_4_;
  auVar122._0_8_ = auVar91._0_8_;
  auVar122._12_4_ = auVar91._12_4_;
  bVar33 = (bVar21 & 1) != 0;
  if (bVar33) {
    auVar122 = auVar73;
  }
  auVar110._0_8_ = CONCAT44(~uVar22 & auVar76._4_4_,~uVar35 & auVar76._0_4_);
  auVar110._8_4_ = ~uVar38 & auVar76._8_4_;
  auVar110._12_4_ = ~uVar40 & auVar76._12_4_;
  auVar85._0_8_ = CONCAT44(~uVar22 & auVar82._4_4_,~uVar35 & auVar82._0_4_);
  auVar85._8_4_ = ~uVar38 & auVar82._8_4_;
  auVar85._12_4_ = ~uVar40 & auVar82._12_4_;
  auVar149._8_4_ = auVar109._8_4_;
  auVar149._0_8_ = auVar109._0_8_;
  auVar149._12_4_ = auVar109._12_4_;
  auVar116._8_4_ = auVar68._8_4_;
  auVar116._0_8_ = auVar68._0_8_;
  auVar116._12_4_ = auVar68._12_4_;
  if (bVar33) {
    auVar149._8_4_ = auVar110._8_4_;
    auVar149._0_8_ = auVar110._0_8_;
    auVar149._12_4_ = auVar110._12_4_;
    auVar116._8_4_ = auVar85._8_4_;
    auVar116._0_8_ = auVar85._0_8_;
    auVar116._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar91,auVar122,1);
  }
  else {
    auVar76 = blendps(auVar91,auVar122,1);
  }
  if ((bVar21 & 2) == 0) {
    auVar83 = blendps(auVar109,auVar149,1);
    auVar82 = blendps(auVar68,auVar116,1);
    auVar76 = blendps(auVar76,auVar76,2);
    auVar118 = auVar82;
    auVar124 = auVar83;
  }
  else {
    auVar83 = blendps(auVar109,auVar149,1);
    auVar124._8_4_ = auVar110._8_4_;
    auVar124._0_8_ = auVar110._0_8_;
    auVar124._12_4_ = auVar110._12_4_;
    auVar82 = blendps(auVar68,auVar116,1);
    auVar118._8_4_ = auVar85._8_4_;
    auVar118._0_8_ = auVar85._0_8_;
    auVar118._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar76,auVar73,2);
  }
  if ((bVar21 & 4) == 0) {
    auVar83 = blendps(auVar83,auVar124,2);
    auVar82 = blendps(auVar82,auVar118,2);
    auVar76 = blendps(auVar76,auVar76,4);
    auVar119 = auVar82;
    auVar125 = auVar83;
  }
  else {
    auVar83 = blendps(auVar83,auVar124,2);
    auVar125._8_4_ = auVar110._8_4_;
    auVar125._0_8_ = auVar110._0_8_;
    auVar125._12_4_ = auVar110._12_4_;
    auVar82 = blendps(auVar82,auVar118,2);
    auVar119._8_4_ = auVar85._8_4_;
    auVar119._0_8_ = auVar85._0_8_;
    auVar119._12_4_ = auVar85._12_4_;
    auVar76 = blendps(auVar76,auVar73,4);
  }
  if ((char)bVar21 < '\0') {
    auVar83 = blendps(auVar83,auVar125,4);
  }
  else {
    auVar110 = blendps(auVar83,auVar125,4);
    auVar73 = auVar76;
    auVar83 = auVar110;
  }
  auVar82 = blendps(auVar82,auVar119,4);
  if (-1 < (char)bVar21) {
    auVar85 = auVar82;
  }
  auVar45._4_4_ = -(uint)(0.0 <= (float)(~uVar22 & auVar75._4_4_) - local_198._4_4_);
  auVar45._0_4_ = -(uint)(0.0 <= (float)(~uVar35 & auVar75._0_4_) - local_198._0_4_);
  auVar113 = divps(___xmm_3f8000003f8000003f8000003f800000,_local_198);
  auVar44._4_4_ = -(uint)(local_198._4_4_ < _UNK_1506895d4);
  auVar44._0_4_ = -(uint)(local_198._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar44._8_4_ = -(uint)(local_198._8_4_ < _UNK_1506895d8);
  auVar44._12_4_ = -(uint)(local_198._12_4_ < _UNK_1506895dc);
  auVar113 = blendvps(auVar113,___xmm_3f8000003f8000003f8000003f800000,auVar44);
  auVar45._8_4_ = -(uint)(0.0 <= (float)(~uVar38 & auVar75._8_4_) - local_198._8_4_);
  auVar45._12_4_ = -(uint)(0.0 <= (float)(~uVar40 & auVar75._12_4_) - local_198._12_4_);
  auVar148 = blendvps(auVar130,_local_188,auVar45);
  auVar76 = blendps(auVar76,auVar73,8);
  auVar83 = blendps(auVar83,auVar110,8);
  auVar75 = blendps(auVar82,auVar85,8);
  local_268 = auVar81._0_4_;
  fStack_264 = auVar81._4_4_;
  fStack_260 = auVar81._8_4_;
  fStack_25c = auVar81._12_4_;
  local_1a8 = auVar129._0_4_;
  fStack_1a4 = auVar129._4_4_;
  fStack_1a0 = auVar129._8_4_;
  fStack_19c = auVar129._12_4_;
  auVar51._0_4_ = local_268 + local_1a8;
  auVar51._4_4_ = fStack_264 + fStack_1a4;
  auVar51._8_4_ = fStack_260 + fStack_1a0;
  auVar51._12_4_ = fStack_25c + fStack_19c;
  auVar73 = divps(auVar148,auVar51);
  auVar73 = sqrtps(auVar45,auVar73);
  fVar71 = param_6 * auVar73._0_4_ * (fVar71 + fVar71) * auVar113._0_4_;
  fVar103 = param_6 * auVar73._4_4_ * (fVar103 + fVar103) * auVar113._4_4_;
  fVar87 = param_6 * auVar73._8_4_ * (fVar87 + fVar87) * auVar113._8_4_;
  param_6 = param_6 * auVar73._12_4_ * (fVar126 + fVar126) * auVar113._12_4_;
  local_168 = auVar104._0_4_;
  fStack_164 = auVar104._4_4_;
  fStack_160 = auVar104._8_4_;
  fStack_15c = auVar104._12_4_;
  local_248 = auVar74._0_4_;
  fStack_244 = auVar74._4_4_;
  fStack_240 = auVar74._8_4_;
  fStack_23c = auVar74._12_4_;
  local_1c8 = auVar114._0_4_;
  fStack_1c4 = auVar114._4_4_;
  fStack_1c0 = auVar114._8_4_;
  fStack_1bc = auVar114._12_4_;
  local_178 = auVar72._0_4_;
  fStack_174 = auVar72._4_4_;
  fStack_170 = auVar72._8_4_;
  fStack_16c = auVar72._12_4_;
  local_158 = auVar41._0_4_;
  fStack_154 = auVar41._4_4_;
  fStack_150 = auVar41._8_4_;
  fStack_14c = auVar41._12_4_;
  local_1e8 = auVar147._0_4_;
  fStack_1e4 = auVar147._4_4_;
  fStack_1e0 = auVar147._8_4_;
  fStack_1dc = auVar147._12_4_;
  fVar108 = auVar83._0_4_;
  fVar111 = auVar83._4_4_;
  fVar107 = auVar83._8_4_;
  fVar112 = auVar83._12_4_;
  fVar47 = auVar75._0_4_;
  fVar54 = auVar75._4_4_;
  fVar89 = auVar75._8_4_;
  fVar93 = auVar75._12_4_;
  auVar52._0_4_ = auVar51._0_4_ * fVar71 + (float)__xmm_3f8000003f8000003f8000003f800000;
  auVar52._4_4_ = auVar51._4_4_ * fVar103 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
  auVar52._8_4_ = auVar51._8_4_ * fVar87 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
  auVar52._12_4_ = auVar51._12_4_ * param_6 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
  local_1d8 = auVar50._0_4_;
  fStack_1d4 = auVar50._4_4_;
  fStack_1d0 = auVar50._8_4_;
  fStack_1cc = auVar50._12_4_;
  auVar46._0_4_ =
       ((((fVar127 - local_1c8) - fVar69) + local_1e8) * fVar47 +
       (((fVar80 - local_248) - fVar95) + local_158) * fVar108 +
       (((local_208 - local_168) - fVar79) + local_178) * auVar76._0_4_) *
       (float)((uint)fVar71 ^ __xmm_80000000800000008000000080000000) - local_1d8;
  auVar46._4_4_ =
       ((((fVar56 - fStack_1c4) - fVar70) + fStack_1e4) * fVar54 +
       (((fVar102 - fStack_244) - fVar96) + fStack_154) * fVar111 +
       (((fStack_204 - fStack_164) - fVar86) + fStack_174) * auVar76._4_4_) *
       (float)((uint)fVar103 ^ _UNK_150651574) - fStack_1d4;
  auVar46._8_4_ =
       ((((fVar58 - fStack_1c0) - fVar77) + fStack_1e0) * fVar89 +
       (((fVar92 - fStack_240) - fVar100) + fStack_150) * fVar107 +
       (((fStack_200 - fStack_160) - fVar88) + fStack_170) * auVar76._8_4_) *
       (float)((uint)fVar87 ^ _UNK_150651578) - fStack_1d0;
  auVar46._12_4_ =
       ((((fVar66 - fStack_1bc) - fVar78) + fStack_1dc) * fVar93 +
       (((fVar106 - fStack_23c) - fVar101) + fStack_14c) * fVar112 +
       (((fStack_1fc - fStack_15c) - fVar94) + fStack_16c) * auVar76._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_1cc;
  auVar41 = divps(auVar46,auVar52);
  fVar103 = auVar41._0_4_;
  auVar53._0_4_ = local_1d8 + fVar103;
  fVar71 = auVar41._4_4_;
  auVar53._4_4_ = fStack_1d4 + fVar71;
  fVar87 = auVar41._8_4_;
  auVar53._8_4_ = fStack_1d0 + fVar87;
  fVar126 = auVar41._12_4_;
  auVar53._12_4_ = fStack_1cc + fVar126;
  if ((bVar21 & 1) != 0) {
    *pfVar1 = auVar53._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar53,1);
    *(undefined8 *)(pfVar1 + 1) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar53,2);
    *(undefined8 *)(pfVar1 + 2) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar53,3);
    *(undefined8 *)(pfVar1 + 3) = uVar9;
  }
  fVar121 = auVar76._4_4_ * fVar71;
  fVar120 = auVar76._0_4_ * fVar103;
  fVar132 = auVar76._12_4_ * fVar126;
  fVar128 = auVar76._8_4_ * fVar87;
  auVar117._0_4_ = local_208 + local_268 * fVar120;
  auVar117._4_4_ = fStack_204 + fStack_264 * fVar121;
  auVar117._8_4_ = fStack_200 + fStack_260 * fVar128;
  auVar117._12_4_ = fStack_1fc + fStack_25c * fVar132;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + auVar97._0_4_) = auVar117._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar117,1);
    *(undefined8 *)(param_1 + auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar117,2);
    *(undefined8 *)(param_1 + auVar97._8_4_) = uVar9;
  }
  uVar13 = fStack_25c * fVar112 * fVar126;
  uVar12 = fStack_260 * fVar107 * fVar87;
  uVar11 = fStack_264 * fVar111 * fVar71;
  uVar10 = local_268 * fVar108 * fVar103;
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar117,3);
    *(undefined8 *)(param_1 + auVar97._12_4_) = uVar9;
    auVar150._0_4_ = fVar80 + (float)uVar10;
    auVar150._4_4_ = fVar102 + (float)uVar11;
    auVar150._8_4_ = fVar92 + (float)uVar12;
    auVar150._12_4_ = fVar106 + (float)uVar13;
  }
  else {
    auVar150._0_4_ = fVar80 + (float)uVar10;
    auVar150._4_4_ = fVar102 + (float)uVar11;
    auVar150._8_4_ = fVar92 + (float)uVar12;
    auVar150._12_4_ = fVar106 + (float)uVar13;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar97._0_4_) = auVar150._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar150,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar150,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._8_4_) = uVar9;
  }
  uVar13 = fStack_25c * fVar93 * fVar126;
  uVar12 = fStack_260 * fVar89 * fVar87;
  uVar11 = fStack_264 * fVar54 * fVar71;
  uVar10 = local_268 * fVar47 * fVar103;
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar150,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar97._12_4_) = uVar9;
    auVar137._0_4_ = fVar127 + (float)uVar10;
    auVar137._4_4_ = fVar56 + (float)uVar11;
    auVar137._8_4_ = fVar58 + (float)uVar12;
    auVar137._12_4_ = fVar66 + (float)uVar13;
  }
  else {
    auVar137._0_4_ = fVar127 + (float)uVar10;
    auVar137._4_4_ = fVar56 + (float)uVar11;
    auVar137._8_4_ = fVar58 + (float)uVar12;
    auVar137._12_4_ = fVar66 + (float)uVar13;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar97._0_4_) = auVar137._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar137,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar137,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar137,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar97._12_4_) = uVar9;
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar97._0_4_) = local_268;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar97._12_4_) = uVar9;
  }
  auVar123._0_4_ = fVar79 - fVar120 * local_1a8;
  auVar123._4_4_ = fVar86 - fVar121 * fStack_1a4;
  auVar123._8_4_ = fVar88 - fVar128 * fStack_1a0;
  auVar123._12_4_ = fVar94 - fVar132 * fStack_19c;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + auVar90._0_4_) = auVar123._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar123,1);
    *(undefined8 *)(param_1 + auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar123,2);
    *(undefined8 *)(param_1 + auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar123,3);
    *(undefined8 *)(param_1 + auVar90._12_4_) = uVar9;
    auVar105._0_4_ = fVar95 - fVar108 * fVar103 * local_1a8;
    auVar105._4_4_ = fVar96 - fVar111 * fVar71 * fStack_1a4;
    auVar105._8_4_ = fVar100 - fVar107 * fVar87 * fStack_1a0;
    auVar105._12_4_ = fVar101 - fVar112 * fVar126 * fStack_19c;
  }
  else {
    auVar105._0_4_ = fVar95 - fVar108 * fVar103 * local_1a8;
    auVar105._4_4_ = fVar96 - fVar111 * fVar71 * fStack_1a4;
    auVar105._8_4_ = fVar100 - fVar107 * fVar87 * fStack_1a0;
    auVar105._12_4_ = fVar101 - fVar112 * fVar126 * fStack_19c;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar90._0_4_) = auVar105._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar105,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar105,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar105,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar90._12_4_) = uVar9;
    auVar99._0_4_ = fVar69 - fVar47 * fVar103 * local_1a8;
    auVar99._4_4_ = fVar70 - fVar54 * fVar71 * fStack_1a4;
    auVar99._8_4_ = fVar77 - fVar89 * fVar87 * fStack_1a0;
    auVar99._12_4_ = fVar78 - fVar93 * fVar126 * fStack_19c;
  }
  else {
    auVar99._0_4_ = fVar69 - fVar47 * fVar103 * local_1a8;
    auVar99._4_4_ = fVar70 - fVar54 * fVar71 * fStack_1a4;
    auVar99._8_4_ = fVar77 - fVar89 * fVar87 * fStack_1a0;
    auVar99._12_4_ = fVar78 - fVar93 * fVar126 * fStack_19c;
  }
  if ((bVar21 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar90._0_4_) = auVar99._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar90._12_4_) = uVar9;
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar90._0_4_) = local_1a8;
  }
  if ((bVar21 & 2) != 0) {
    uVar9 = extractps(auVar129,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._4_4_) = uVar9;
  }
  if ((bVar21 & 4) != 0) {
    uVar9 = extractps(auVar129,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._8_4_) = uVar9;
  }
  if ((char)bVar21 < '\0') {
    uVar9 = extractps(auVar129,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar90._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringConstraints_sse4 @ 1408f8160

/* WARNING: Removing unreachable block (ram,0x0001408fa2a6) */
/* WARNING: Removing unreachable block (ram,0x0001408f94a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,float *param_8,longlong param_9,byte param_10,
               float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  uint uVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  byte bVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  ulonglong uVar38;
  uint *puVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  bool bVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  int iVar73;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar84;
  undefined1 auVar81 [16];
  float fVar85;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar86;
  float fVar96;
  float fVar97;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar104;
  undefined1 in_XMM4 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar105;
  undefined1 auVar103 [16];
  float fVar106;
  float fVar114;
  float fVar115;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar116;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar122;
  float fVar123;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  int iVar131;
  float fVar140;
  float fVar141;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar142;
  float fVar146;
  float fVar147;
  float fVar148;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  int iVar154;
  undefined1 auVar149 [16];
  int iVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  uint uVar159;
  float fVar160;
  undefined1 auVar158 [16];
  float fVar161;
  float fVar162;
  float fVar166;
  float fVar168;
  float fVar170;
  undefined1 auVar163 [16];
  float fVar167;
  float fVar169;
  float fVar171;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  float fVar172;
  float fVar175;
  float fVar176;
  undefined1 auVar173 [16];
  float fVar177;
  undefined1 auVar174 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar181;
  float fVar188;
  float fVar190;
  undefined1 unaff_XMM15 [16];
  float fVar192;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar191;
  float fVar193;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 auVar135 [16];
  
  uVar58 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar58 = param_13;
  }
  if ((int)(uVar58 & 0xfffffffc) < 1) {
    uVar31 = 0;
  }
  else {
    uVar31 = 0;
    uVar47 = 0;
    uVar46 = __xmm_80000000800000008000000080000000;
    uVar61 = _UNK_150651574;
    uVar63 = _UNK_150651578;
    uVar159 = _UNK_15065157c;
    do {
      uVar28 = _UNK_15065157c;
      uVar27 = _UNK_150651578;
      uVar26 = _UNK_150651574;
      uVar20 = __xmm_80000000800000008000000080000000;
      uVar38 = uVar47 & 0xffffffff;
      fStack_2fc = *param_8;
      local_308._0_4_ = fStack_2fc;
      local_308._4_4_ = fStack_2fc;
      fStack_300 = fStack_2fc;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar38);
        fVar84 = param_8[1];
        local_308._0_4_ = fStack_2fc + fVar84 * *pfVar1;
        local_308._4_4_ = fStack_2fc + fVar84 * pfVar1[1];
        fStack_300 = fStack_2fc + fVar84 * pfVar1[2];
        fStack_2fc = fStack_2fc + fVar84 * pfVar1[3];
      }
      piVar2 = (int *)(param_2 + uVar47 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar47 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar47 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar47 * 4);
      lVar32 = param_3 + uVar47 * 4;
      fVar85 = *(float *)(lVar32 + 4);
      fVar86 = *(float *)(lVar32 + 8);
      fVar106 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x10 + uVar47 * 4;
      fVar96 = *(float *)(lVar32 + 4);
      fVar114 = *(float *)(lVar32 + 8);
      fVar97 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x20 + uVar47 * 4;
      fVar98 = *(float *)(lVar32 + 4);
      fVar99 = *(float *)(lVar32 + 8);
      fVar104 = *(float *)(lVar32 + 0xc);
      lVar32 = param_3 + 0x30 + uVar47 * 4;
      fVar105 = *(float *)(lVar32 + 4);
      fVar115 = *(float *)(lVar32 + 8);
      fVar116 = *(float *)(lVar32 + 0xc);
      lVar53 = (longlong)(*piVar2 << 4);
      lVar48 = (longlong)(*piVar3 * 0x10);
      lVar34 = (longlong)(*piVar4 << 4);
      lVar43 = (longlong)(*piVar5 << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar48),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar34),0x20);
      auVar180 = insertps(auVar179,*(undefined4 *)(param_1 + lVar43),0x30);
      lVar52 = (longlong)(piVar2[1] << 4);
      lVar35 = (longlong)(piVar3[1] * 0x10);
      lVar32 = (longlong)(piVar4[1] << 4);
      lVar41 = (longlong)(piVar5[1] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar52)),*(undefined4 *)(param_1 + lVar35),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar163 = insertps(auVar179,*(undefined4 *)(param_1 + lVar41),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar52)),
                          *(undefined4 *)(param_1 + 4 + lVar35),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar118 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar41),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar52)),
                          *(undefined4 *)(param_1 + 8 + lVar35),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar149 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar41),0x30);
      lVar40 = (longlong)(piVar2[2] << 4);
      lVar50 = (longlong)(piVar3[2] * 0x10);
      lVar33 = (longlong)(piVar4[2] << 4);
      lVar51 = (longlong)(piVar5[2] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),*(undefined4 *)(param_1 + lVar50),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar33),0x20);
      auVar126 = insertps(auVar179,*(undefined4 *)(param_1 + lVar51),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                          *(undefined4 *)(param_1 + 4 + lVar50),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar33),0x20);
      auVar100 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar51),0x30);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                          *(undefined4 *)(param_1 + 8 + lVar50),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar33),0x20);
      auVar90 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar51),0x30);
      lVar45 = (longlong)(piVar2[3] << 4);
      lVar54 = (longlong)(piVar3[3] * 0x10);
      lVar49 = (longlong)(piVar4[3] << 4);
      lVar36 = (longlong)(piVar5[3] << 4);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar54),
                          0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + lVar49),0x20);
      auVar132 = insertps(auVar179,*(undefined4 *)(param_1 + lVar36),0x30);
      fVar172 = (float)((uint)fVar85 ^ uVar46);
      fVar175 = (float)((uint)fVar96 ^ uVar61);
      fVar176 = (float)((uint)fVar98 ^ uVar63);
      fVar177 = (float)((uint)fVar105 ^ uVar159);
      auVar101 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar48),0x10);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar54),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar49),0x20);
      auVar91 = insertps(auVar179,*(undefined4 *)(param_1 + 4 + lVar36),0x30);
      auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + 4 + lVar34),0x20);
      auVar179 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar54),0x10);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar49),0x20);
      auVar179 = insertps(auVar179,*(undefined4 *)(param_1 + 8 + lVar36),0x30);
      uVar46 = *(uint *)(param_1 + 0xc + lVar52);
      uVar61 = *(uint *)(param_1 + 0xc + lVar35);
      auVar119 = insertps(ZEXT416(uVar46),ZEXT416(uVar61),0x10);
      uVar63 = *(uint *)(param_1 + 0xc + lVar32);
      auVar119 = insertps(auVar119,ZEXT416(uVar63),0x20);
      uVar159 = *(uint *)(param_1 + 0xc + lVar41);
      auVar119 = insertps(auVar119,ZEXT416(uVar159),0x30);
      uVar30 = *(uint *)(param_1 + 0xc + lVar40);
      uVar6 = *(uint *)(param_1 + 0xc + lVar50);
      auVar133 = insertps(ZEXT416(uVar30),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar33);
      auVar133 = insertps(auVar133,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar51);
      auVar133 = insertps(auVar133,ZEXT416(uVar8),0x30);
      fVar117 = auVar119._0_4_;
      fVar122 = auVar119._4_4_;
      fVar123 = auVar119._8_4_;
      fVar124 = auVar119._12_4_;
      fVar130 = auVar133._0_4_;
      fVar140 = auVar133._4_4_;
      fVar141 = auVar133._8_4_;
      fVar162 = auVar133._12_4_;
      auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      auVar119 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar48),0x10);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + 8 + lVar34),0x20);
      auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + lVar45);
      uVar10 = *(uint *)(param_1 + 0xc + lVar54);
      auVar133 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar49);
      auVar133 = insertps(auVar133,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar36);
      auVar133 = insertps(auVar133,ZEXT416(uVar12),0x30);
      fVar167 = auVar133._0_4_;
      fVar169 = auVar133._4_4_;
      fVar171 = auVar133._8_4_;
      fVar160 = auVar133._12_4_;
      uVar13 = *(uint *)(param_1 + 0xc + lVar53);
      uVar14 = *(uint *)(param_1 + 0xc + lVar48);
      auVar133 = insertps(ZEXT416(uVar13),ZEXT416(uVar14),0x10);
      uVar15 = *(uint *)(param_1 + 0xc + lVar34);
      auVar133 = insertps(auVar133,ZEXT416(uVar15),0x20);
      uVar16 = *(uint *)(param_1 + 0xc + lVar43);
      auVar182 = insertps(auVar133,ZEXT416(uVar16),0x30);
      fVar84 = *param_11;
      auVar133._4_4_ = fVar84;
      auVar133._0_4_ = fVar84;
      auVar133._8_4_ = fVar84;
      auVar133._12_4_ = fVar84;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar38);
        fVar189 = param_11[1];
        auVar133._0_4_ = fVar84 + fVar189 * *pfVar1;
        auVar133._4_4_ = fVar84 + fVar189 * pfVar1[1];
        auVar133._8_4_ = fVar84 + fVar189 * pfVar1[2];
        auVar133._12_4_ = fVar84 + fVar189 * pfVar1[3];
      }
      auVar87._0_4_ =
           auVar180._0_4_ -
           ((auVar163._0_4_ * fVar172 - fVar86 * auVar126._0_4_) - fVar106 * auVar132._0_4_);
      auVar87._4_4_ =
           auVar180._4_4_ -
           ((auVar163._4_4_ * fVar175 - fVar114 * auVar126._4_4_) - fVar97 * auVar132._4_4_);
      auVar87._8_4_ =
           auVar180._8_4_ -
           ((auVar163._8_4_ * fVar176 - fVar99 * auVar126._8_4_) - fVar104 * auVar132._8_4_);
      auVar87._12_4_ =
           auVar180._12_4_ -
           ((auVar163._12_4_ * fVar177 - fVar115 * auVar126._12_4_) - fVar116 * auVar132._12_4_);
      auVar156._0_4_ =
           auVar101._0_4_ -
           ((auVar118._0_4_ * fVar172 - fVar86 * auVar100._0_4_) - fVar106 * auVar91._0_4_);
      auVar156._4_4_ =
           auVar101._4_4_ -
           ((auVar118._4_4_ * fVar175 - fVar114 * auVar100._4_4_) - fVar97 * auVar91._4_4_);
      auVar156._8_4_ =
           auVar101._8_4_ -
           ((auVar118._8_4_ * fVar176 - fVar99 * auVar100._8_4_) - fVar104 * auVar91._8_4_);
      auVar156._12_4_ =
           auVar101._12_4_ -
           ((auVar118._12_4_ * fVar177 - fVar115 * auVar100._12_4_) - fVar116 * auVar91._12_4_);
      auVar178._0_4_ =
           auVar119._0_4_ -
           ((auVar149._0_4_ * fVar172 - fVar86 * auVar90._0_4_) - fVar106 * auVar179._0_4_);
      auVar178._4_4_ =
           auVar119._4_4_ -
           ((auVar149._4_4_ * fVar175 - fVar114 * auVar90._4_4_) - fVar97 * auVar179._4_4_);
      auVar178._8_4_ =
           auVar119._8_4_ -
           ((auVar149._8_4_ * fVar176 - fVar99 * auVar90._8_4_) - fVar104 * auVar179._8_4_);
      auVar178._12_4_ =
           auVar119._12_4_ -
           ((auVar149._12_4_ * fVar177 - fVar115 * auVar90._12_4_) - fVar116 * auVar179._12_4_);
      auVar74._0_4_ =
           auVar178._0_4_ * auVar178._0_4_ +
           auVar156._0_4_ * auVar156._0_4_ + auVar87._0_4_ * auVar87._0_4_;
      auVar74._4_4_ =
           auVar178._4_4_ * auVar178._4_4_ +
           auVar156._4_4_ * auVar156._4_4_ + auVar87._4_4_ * auVar87._4_4_;
      auVar74._8_4_ =
           auVar178._8_4_ * auVar178._8_4_ +
           auVar156._8_4_ * auVar156._8_4_ + auVar87._8_4_ * auVar87._8_4_;
      auVar74._12_4_ =
           auVar178._12_4_ * auVar178._12_4_ +
           auVar156._12_4_ * auVar156._12_4_ + auVar87._12_4_ * auVar87._12_4_;
      auVar125 = sqrtps(ZEXT416(uVar10),auVar74);
      uVar57 = -(uint)(auVar74._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar59 = -(uint)(auVar74._4_4_ < _UNK_1506895e4);
      uVar60 = -(uint)(auVar74._8_4_ < _UNK_1506895e8);
      uVar62 = -(uint)(auVar74._12_4_ < _UNK_1506895ec);
      auVar157._4_4_ = uVar59;
      auVar157._0_4_ = uVar57;
      auVar88 = divps(auVar87,auVar125);
      auVar157._8_4_ = uVar60;
      auVar157._12_4_ = uVar62;
      auVar89._4_4_ = _UNK_15076b1f4;
      auVar89._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar89._8_4_ = _UNK_15076b1f8;
      auVar89._12_4_ = _UNK_15076b1fc;
      auVar89 = blendvps(auVar88,auVar89,auVar157);
      pfVar1 = (float *)(param_4 + uVar38);
      fVar72 = (float)(~uVar57 & auVar125._0_4_) - *pfVar1;
      fVar78 = (float)(~uVar59 & auVar125._4_4_) - pfVar1[1];
      fVar79 = (float)(~uVar60 & auVar125._8_4_) - pfVar1[2];
      fVar80 = (float)(~uVar62 & auVar125._12_4_) - pfVar1[3];
      auVar88._4_4_ = -(uint)(0.0 <= fVar78);
      auVar88._0_4_ = -(uint)(0.0 <= fVar72);
      auVar88._8_4_ = -(uint)(0.0 <= fVar79);
      auVar88._12_4_ = -(uint)(0.0 <= fVar80);
      auVar133 = blendvps(auVar133,_local_308,auVar88);
      auVar157 = divps(auVar156,auVar125);
      auVar88 = divps(auVar178,auVar125);
      fVar142 = auVar133._0_4_ * param_6 * param_6;
      fVar146 = auVar133._4_4_ * param_6 * param_6;
      fVar147 = auVar133._8_4_ * param_6 * param_6;
      fVar148 = auVar133._12_4_ * param_6 * param_6;
      fVar181 = auVar182._0_4_;
      fVar188 = auVar182._4_4_;
      fVar190 = auVar182._8_4_;
      fVar192 = auVar182._12_4_;
      pfVar1 = (float *)(param_5 + uVar38);
      fVar84 = *pfVar1;
      fVar189 = pfVar1[1];
      fVar191 = pfVar1[2];
      fVar193 = pfVar1[3];
      auVar143._0_4_ =
           (float)((uint)fVar142 ^ __xmm_80000000800000008000000080000000) * fVar72 - fVar84;
      auVar143._4_4_ = (float)((uint)fVar146 ^ _UNK_150651574) * fVar78 - fVar189;
      auVar143._8_4_ = (float)((uint)fVar147 ^ _UNK_150651578) * fVar79 - fVar191;
      auVar143._12_4_ = (float)((uint)fVar148 ^ _UNK_15065157c) * fVar80 - fVar193;
      auVar173._0_4_ =
           (((fVar172 * fVar117 - fVar86 * fVar130) - fVar106 * fVar167) + fVar181) * fVar142 +
           ___xmm_3f8000003f8000003f8000003f800000;
      auVar173._4_4_ =
           (((fVar175 * fVar122 - fVar114 * fVar140) - fVar97 * fVar169) + fVar188) * fVar146 +
           _UNK_15076b1f4;
      auVar173._8_4_ =
           (((fVar176 * fVar123 - fVar99 * fVar141) - fVar104 * fVar171) + fVar190) * fVar147 +
           _UNK_15076b1f8;
      auVar173._12_4_ =
           (((fVar177 * fVar124 - fVar115 * fVar162) - fVar116 * fVar160) + fVar192) * fVar148 +
           _UNK_15076b1fc;
      auVar133 = divps(auVar143,auVar173);
      fVar72 = auVar133._0_4_;
      fVar172 = auVar89._0_4_ * fVar72;
      fVar78 = auVar133._4_4_;
      fVar175 = auVar89._4_4_ * fVar78;
      fVar79 = auVar133._8_4_;
      fVar176 = auVar89._8_4_ * fVar79;
      fVar80 = auVar133._12_4_;
      fVar177 = auVar89._12_4_ * fVar80;
      auVar182._0_4_ = fVar181 * fVar172 + auVar180._0_4_;
      auVar182._4_4_ = fVar188 * fVar175 + auVar180._4_4_;
      auVar182._8_4_ = fVar190 * fVar176 + auVar180._8_4_;
      auVar182._12_4_ = fVar192 * fVar177 + auVar180._12_4_;
      fVar161 = (float)(~uVar57 & auVar157._0_4_) * fVar72;
      fVar166 = (float)(~uVar59 & auVar157._4_4_) * fVar78;
      fVar168 = (float)(~uVar60 & auVar157._8_4_) * fVar79;
      fVar170 = (float)(~uVar62 & auVar157._12_4_) * fVar80;
      *(float *)(param_1 + lVar53) = auVar182._0_4_;
      uVar17 = extractps(auVar182,1);
      *(undefined8 *)(param_1 + lVar48) = uVar17;
      auVar180._0_4_ = fVar181 * fVar161 + auVar101._0_4_;
      auVar180._4_4_ = fVar188 * fVar166 + auVar101._4_4_;
      auVar180._8_4_ = fVar190 * fVar168 + auVar101._8_4_;
      auVar180._12_4_ = fVar192 * fVar170 + auVar101._12_4_;
      uVar17 = extractps(auVar182,2);
      *(undefined8 *)(param_1 + lVar34) = uVar17;
      uVar17 = extractps(auVar182,3);
      *(undefined8 *)(param_1 + lVar43) = uVar17;
      fVar142 = (float)(~uVar57 & auVar88._0_4_) * fVar72;
      fVar146 = (float)(~uVar59 & auVar88._4_4_) * fVar78;
      fVar147 = (float)(~uVar60 & auVar88._8_4_) * fVar79;
      fVar148 = (float)(~uVar62 & auVar88._12_4_) * fVar80;
      *(float *)(param_1 + 4 + lVar53) = auVar180._0_4_;
      uVar17 = extractps(auVar180,1);
      *(undefined8 *)(param_1 + 4 + lVar48) = uVar17;
      uVar17 = extractps(auVar180,2);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar17;
      unaff_XMM15._0_4_ = fVar181 * fVar142 + auVar119._0_4_;
      unaff_XMM15._4_4_ = fVar188 * fVar146 + auVar119._4_4_;
      unaff_XMM15._8_4_ = fVar190 * fVar147 + auVar119._8_4_;
      unaff_XMM15._12_4_ = fVar192 * fVar148 + auVar119._12_4_;
      uVar17 = extractps(auVar180,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar17;
      *(float *)(param_1 + 8 + lVar53) = unaff_XMM15._0_4_;
      uVar17 = extractps(unaff_XMM15,1);
      *(undefined8 *)(param_1 + 8 + lVar48) = uVar17;
      uVar17 = extractps(unaff_XMM15,2);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar17;
      uVar17 = extractps(unaff_XMM15,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar17;
      *(uint *)(param_1 + 0xc + lVar53) = uVar13;
      *(uint *)(param_1 + 0xc + lVar48) = uVar14;
      *(uint *)(param_1 + 0xc + lVar34) = uVar15;
      *(uint *)(param_1 + 0xc + lVar43) = uVar16;
      auVar125._0_4_ = auVar163._0_4_ + fVar117 * fVar172 * fVar85;
      auVar125._4_4_ = auVar163._4_4_ + fVar122 * fVar175 * fVar96;
      auVar125._8_4_ = auVar163._8_4_ + fVar123 * fVar176 * fVar98;
      auVar125._12_4_ = auVar163._12_4_ + fVar124 * fVar177 * fVar105;
      *(float *)(param_1 + lVar52) = auVar125._0_4_;
      uVar17 = extractps(auVar125,1);
      *(undefined8 *)(param_1 + lVar35) = uVar17;
      auVar163._0_4_ = auVar118._0_4_ + fVar117 * fVar161 * fVar85;
      auVar163._4_4_ = auVar118._4_4_ + fVar122 * fVar166 * fVar96;
      auVar163._8_4_ = auVar118._8_4_ + fVar123 * fVar168 * fVar98;
      auVar163._12_4_ = auVar118._12_4_ + fVar124 * fVar170 * fVar105;
      uVar17 = extractps(auVar125,2);
      *(undefined8 *)(param_1 + lVar32) = uVar17;
      uVar17 = extractps(auVar125,3);
      *(undefined8 *)(param_1 + lVar41) = uVar17;
      *(float *)(param_1 + 4 + lVar52) = auVar163._0_4_;
      uVar17 = extractps(auVar163,1);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar17;
      uVar17 = extractps(auVar163,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar17;
      auVar101._0_4_ = auVar149._0_4_ + fVar117 * fVar142 * fVar85;
      auVar101._4_4_ = auVar149._4_4_ + fVar122 * fVar146 * fVar96;
      auVar101._8_4_ = auVar149._8_4_ + fVar123 * fVar147 * fVar98;
      auVar101._12_4_ = auVar149._12_4_ + fVar124 * fVar148 * fVar105;
      uVar17 = extractps(auVar163,3);
      *(undefined8 *)(param_1 + 4 + lVar41) = uVar17;
      *(float *)(param_1 + 8 + lVar52) = auVar101._0_4_;
      uVar17 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar17;
      uVar17 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar17;
      uVar17 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 8 + lVar41) = uVar17;
      *(uint *)(param_1 + 0xc + lVar52) = uVar46;
      *(uint *)(param_1 + 0xc + lVar35) = uVar61;
      *(uint *)(param_1 + 0xc + lVar32) = uVar63;
      *(uint *)(param_1 + 0xc + lVar41) = uVar159;
      auVar149._0_4_ = auVar126._0_4_ + fVar130 * fVar172 * fVar86;
      auVar149._4_4_ = auVar126._4_4_ + fVar140 * fVar175 * fVar114;
      auVar149._8_4_ = auVar126._8_4_ + fVar141 * fVar176 * fVar99;
      auVar149._12_4_ = auVar126._12_4_ + fVar162 * fVar177 * fVar115;
      *(float *)(param_1 + lVar40) = auVar149._0_4_;
      uVar17 = extractps(auVar149,1);
      *(undefined8 *)(param_1 + lVar50) = uVar17;
      auVar118._0_4_ = auVar100._0_4_ + fVar130 * fVar161 * fVar86;
      auVar118._4_4_ = auVar100._4_4_ + fVar140 * fVar166 * fVar114;
      auVar118._8_4_ = auVar100._8_4_ + fVar141 * fVar168 * fVar99;
      auVar118._12_4_ = auVar100._12_4_ + fVar162 * fVar170 * fVar115;
      uVar17 = extractps(auVar149,2);
      *(undefined8 *)(param_1 + lVar33) = uVar17;
      uVar17 = extractps(auVar149,3);
      *(undefined8 *)(param_1 + lVar51) = uVar17;
      *(float *)(param_1 + 4 + lVar40) = auVar118._0_4_;
      uVar17 = extractps(auVar118,1);
      *(undefined8 *)(param_1 + 4 + lVar50) = uVar17;
      uVar17 = extractps(auVar118,2);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar17;
      auVar100._0_4_ = auVar90._0_4_ + fVar130 * fVar142 * fVar86;
      auVar100._4_4_ = auVar90._4_4_ + fVar140 * fVar146 * fVar114;
      auVar100._8_4_ = auVar90._8_4_ + fVar141 * fVar147 * fVar99;
      auVar100._12_4_ = auVar90._12_4_ + fVar162 * fVar148 * fVar115;
      uVar17 = extractps(auVar118,3);
      *(undefined8 *)(param_1 + 4 + lVar51) = uVar17;
      *(float *)(param_1 + 8 + lVar40) = auVar100._0_4_;
      uVar17 = extractps(auVar100,1);
      *(undefined8 *)(param_1 + 8 + lVar50) = uVar17;
      uVar17 = extractps(auVar100,2);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar17;
      uVar17 = extractps(auVar100,3);
      *(undefined8 *)(param_1 + 8 + lVar51) = uVar17;
      *(uint *)(param_1 + 0xc + lVar40) = uVar30;
      *(uint *)(param_1 + 0xc + lVar50) = uVar6;
      *(uint *)(param_1 + 0xc + lVar33) = uVar7;
      *(uint *)(param_1 + 0xc + lVar51) = uVar8;
      in_XMM4._0_4_ = auVar132._0_4_ + fVar172 * fVar167 * fVar106;
      in_XMM4._4_4_ = auVar132._4_4_ + fVar175 * fVar169 * fVar97;
      in_XMM4._8_4_ = auVar132._8_4_ + fVar176 * fVar171 * fVar104;
      in_XMM4._12_4_ = auVar132._12_4_ + fVar177 * fVar160 * fVar116;
      *(float *)(param_1 + lVar45) = in_XMM4._0_4_;
      uVar17 = extractps(in_XMM4,1);
      *(undefined8 *)(param_1 + lVar54) = uVar17;
      uVar17 = extractps(in_XMM4,2);
      *(undefined8 *)(param_1 + lVar49) = uVar17;
      auVar119._0_4_ = auVar91._0_4_ + fVar161 * fVar167 * fVar106;
      auVar119._4_4_ = auVar91._4_4_ + fVar166 * fVar169 * fVar97;
      auVar119._8_4_ = auVar91._8_4_ + fVar168 * fVar171 * fVar104;
      auVar119._12_4_ = auVar91._12_4_ + fVar170 * fVar160 * fVar116;
      uVar17 = extractps(in_XMM4,3);
      *(undefined8 *)(param_1 + lVar36) = uVar17;
      *(float *)(param_1 + 4 + lVar45) = auVar119._0_4_;
      uVar17 = extractps(auVar119,1);
      *(undefined8 *)(param_1 + 4 + lVar54) = uVar17;
      uVar17 = extractps(auVar119,2);
      *(undefined8 *)(param_1 + 4 + lVar49) = uVar17;
      auVar90._0_4_ = auVar179._0_4_ + fVar142 * fVar167 * fVar106;
      auVar90._4_4_ = auVar179._4_4_ + fVar146 * fVar169 * fVar97;
      auVar90._8_4_ = auVar179._8_4_ + fVar147 * fVar171 * fVar104;
      auVar90._12_4_ = auVar179._12_4_ + fVar148 * fVar160 * fVar116;
      uVar17 = extractps(auVar119,3);
      *(undefined8 *)(param_1 + 4 + lVar36) = uVar17;
      *(float *)(param_1 + 8 + lVar45) = auVar90._0_4_;
      uVar17 = extractps(auVar90,1);
      *(undefined8 *)(param_1 + 8 + lVar54) = uVar17;
      uVar17 = extractps(auVar90,2);
      *(undefined8 *)(param_1 + 8 + lVar49) = uVar17;
      uVar17 = extractps(auVar90,3);
      *(undefined8 *)(param_1 + 8 + lVar36) = uVar17;
      pfVar1 = (float *)(param_5 + uVar38);
      *pfVar1 = fVar72 + fVar84;
      pfVar1[1] = fVar78 + fVar189;
      pfVar1[2] = fVar79 + fVar191;
      pfVar1[3] = fVar80 + fVar193;
      *(uint *)(param_1 + 0xc + lVar45) = uVar9;
      *(uint *)(param_1 + 0xc + lVar54) = uVar10;
      *(uint *)(param_1 + 0xc + lVar49) = uVar11;
      *(uint *)(param_1 + 0xc + lVar36) = uVar12;
      uVar47 = uVar47 + 0x10;
      uVar30 = (int)uVar31 + 4;
      uVar31 = (ulonglong)uVar30;
      uVar46 = uVar20;
      uVar61 = uVar26;
      uVar63 = uVar27;
      uVar159 = uVar28;
    } while ((int)uVar30 < (int)(uVar58 & 0xfffffffc));
  }
  uVar58 = (uint)uVar31;
  if ((int)param_13 <= (int)uVar58) {
    return;
  }
  auVar179._0_4_ =
       -(uint)((int)(uVar58 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar179._4_4_ =
       -(uint)((int)(uVar58 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar179._8_4_ = -(uint)((int)(uVar58 | _UNK_150631e08) < (int)param_13);
  auVar179._12_4_ = -(uint)((int)(uVar58 | _UNK_150631e0c) < (int)param_13);
  lVar32 = uVar31 * 0x10;
  pauVar37 = (undefined1 (*) [16])(param_2 + lVar32);
  uVar46 = movmskps(param_13,auVar179);
  bVar29 = (char)((char)uVar46 << 4) >> 4;
  if (uVar46 == 0xf) {
    auVar90 = *pauVar37;
    iVar154 = *(int *)pauVar37[1];
    auVar91 = pauVar37[2];
    iVar155 = *(int *)pauVar37[3];
    auVar135._0_8_ = auVar90._0_8_;
    auVar135._8_4_ = auVar90._4_4_;
    auVar135._12_4_ = *(undefined4 *)(pauVar37[1] + 4);
    iVar131 = auVar90._0_4_;
    auVar108._0_8_ = CONCAT44(*(undefined4 *)(pauVar37[1] + 8),auVar90._8_4_);
    auVar108._8_4_ = auVar90._12_4_;
    auVar108._12_4_ = *(undefined4 *)(pauVar37[1] + 0xc);
    auVar126._0_8_ = auVar91._0_8_;
    auVar126._8_4_ = auVar91._4_4_;
    auVar126._12_4_ = *(undefined4 *)(pauVar37[3] + 4);
    iVar73 = auVar91._0_4_;
    auVar81._0_8_ = CONCAT44(*(undefined4 *)(pauVar37[3] + 8),auVar91._8_4_);
    auVar81._8_4_ = auVar91._12_4_;
    auVar81._12_4_ = *(undefined4 *)(pauVar37[3] + 0xc);
    auVar134._8_8_ = auVar126._8_8_;
    auVar134._0_8_ = auVar135._8_8_;
    auVar127._8_8_ = auVar81._0_8_;
    auVar127._0_8_ = auVar108._0_8_;
    auVar107._8_8_ = auVar81._8_8_;
    auVar107._0_8_ = auVar108._8_8_;
    lVar33 = param_3 + lVar32;
    lVar34 = param_3 + 0x10 + lVar32;
    lVar35 = param_3 + 0x20 + lVar32;
    lVar32 = param_3 + 0x30 + lVar32;
    auVar18._4_8_ = in_XMM4._8_8_;
    auVar18._0_4_ = *(undefined4 *)(lVar33 + 4);
    auVar102._0_8_ = auVar18._0_8_ << 0x20;
    auVar102._8_4_ = *(undefined4 *)(lVar33 + 4);
    auVar102._12_4_ = *(undefined4 *)(lVar34 + 4);
    auVar132._0_8_ = CONCAT44(*(undefined4 *)(lVar34 + 8),*(undefined4 *)(lVar33 + 8));
    auVar132._8_4_ = *(undefined4 *)(lVar33 + 0xc);
    auVar132._12_4_ = *(undefined4 *)(lVar34 + 0xc);
    auVar19._4_8_ = unaff_XMM15._8_8_;
    auVar19._0_4_ = *(undefined4 *)(lVar35 + 4);
    auVar184._0_8_ = auVar19._0_8_ << 0x20;
    auVar184._8_4_ = *(undefined4 *)(lVar35 + 4);
    auVar184._12_4_ = *(undefined4 *)(lVar32 + 4);
    auVar183._8_8_ = auVar184._8_8_;
    auVar183._0_8_ = auVar102._8_8_;
    auVar121._0_8_ = CONCAT44(*(undefined4 *)(lVar32 + 8),*(undefined4 *)(lVar35 + 8));
    auVar121._8_4_ = *(undefined4 *)(lVar35 + 0xc);
    auVar121._12_4_ = *(undefined4 *)(lVar32 + 0xc);
    auVar91._8_8_ = auVar121._0_8_;
    auVar91._0_8_ = auVar132._0_8_;
    auVar120._8_8_ = auVar121._8_8_;
    auVar120._0_8_ = auVar132._8_8_;
  }
  else {
    auVar75._0_4_ = ___xmm_00000030000000200000001000000000 & auVar179._0_4_;
    auVar75._4_4_ = _UNK_150b511c4 & auVar179._4_4_;
    auVar75._8_4_ = _UNK_150b511c8 & auVar179._8_4_;
    auVar75._12_4_ = _UNK_150b511cc & auVar179._12_4_;
    lVar33 = extractps(auVar75,1);
    lVar34 = extractps(auVar75,2);
    lVar35 = extractps(auVar75,3);
    iVar131 = *(int *)*pauVar37;
    iVar154 = *(int *)(*pauVar37 + lVar33);
    iVar73 = *(int *)(*pauVar37 + lVar34);
    iVar155 = *(int *)(*pauVar37 + lVar35);
    auVar90 = ___xmm_00000034000000240000001400000004 & auVar179;
    auVar134._4_4_ = *(undefined4 *)(*pauVar37 + auVar90._4_4_);
    auVar134._0_4_ = *(undefined4 *)(*pauVar37 + auVar90._0_4_);
    auVar134._12_4_ = *(undefined4 *)(*pauVar37 + auVar90._12_4_);
    auVar134._8_4_ = *(undefined4 *)(*pauVar37 + auVar90._8_4_);
    auVar91 = ___xmm_00000038000000280000001800000008 & auVar179;
    auVar127._4_4_ = *(undefined4 *)(*pauVar37 + auVar91._4_4_);
    auVar127._0_4_ = *(undefined4 *)(*pauVar37 + auVar91._0_4_);
    auVar127._12_4_ = *(undefined4 *)(*pauVar37 + auVar91._12_4_);
    auVar127._8_4_ = *(undefined4 *)(*pauVar37 + auVar91._8_4_);
    auVar100 = ___xmm_0000003c0000002c0000001c0000000c & auVar179;
    auVar107._4_4_ = *(undefined4 *)(*pauVar37 + auVar100._4_4_);
    auVar107._0_4_ = *(undefined4 *)(*pauVar37 + auVar100._0_4_);
    auVar107._12_4_ = *(undefined4 *)(*pauVar37 + auVar100._12_4_);
    auVar107._8_4_ = *(undefined4 *)(*pauVar37 + auVar100._8_4_);
    param_3 = param_3 + lVar32;
    auVar101 = insertps(ZEXT416(*(uint *)((ulonglong)auVar90._0_4_ + param_3)),
                        *(undefined4 *)((ulonglong)auVar90._4_4_ + param_3),0x10);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)auVar90._8_4_ + param_3),0x20);
    auVar183 = insertps(auVar101,*(undefined4 *)((ulonglong)auVar90._12_4_ + param_3),0x30);
    auVar90 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + param_3)),
                       *(undefined4 *)((ulonglong)auVar91._4_4_ + param_3),0x10);
    auVar90 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar91._8_4_ + param_3),0x20);
    auVar91 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar91._12_4_ + param_3),0x30);
    auVar90 = insertps(ZEXT416(*(uint *)((ulonglong)auVar100._0_4_ + param_3)),
                       *(undefined4 *)((ulonglong)auVar100._4_4_ + param_3),0x10);
    auVar90 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar100._8_4_ + param_3),0x20);
    auVar120 = insertps(auVar90,*(undefined4 *)((ulonglong)auVar100._12_4_ + param_3),0x30);
  }
  auVar150._0_4_ = iVar131 << 4;
  auVar150._4_4_ = iVar154 << 4;
  auVar150._8_4_ = iVar73 << 4;
  auVar150._12_4_ = iVar155 << 4;
  auVar100 = auVar179 & auVar150;
  lVar32 = param_1 + auVar100._0_4_;
  auVar119 = ___xmm_00000004000000040000000400000004 & auVar179;
  auVar101 = ___xmm_00000008000000080000000800000008 & auVar179;
  auVar136._0_4_ = auVar134._0_4_ << 4;
  auVar136._4_4_ = auVar134._4_4_ << 4;
  auVar136._8_4_ = auVar134._8_4_ << 4;
  auVar136._12_4_ = auVar134._12_4_ << 4;
  auVar118 = auVar179 & auVar136;
  auVar128._0_4_ = auVar127._0_4_ << 4;
  auVar128._4_4_ = auVar127._4_4_ << 4;
  auVar128._8_4_ = auVar127._8_4_ << 4;
  auVar128._12_4_ = auVar127._12_4_ << 4;
  auVar126 = auVar179 & auVar128;
  lVar44 = (longlong)auVar126._0_4_;
  auVar109._0_4_ = auVar107._0_4_ << 4;
  auVar109._4_4_ = auVar107._4_4_ << 4;
  auVar109._8_4_ = auVar107._8_4_ << 4;
  auVar109._12_4_ = auVar107._12_4_ << 4;
  auVar132 = auVar179 & auVar109;
  lVar55 = (longlong)auVar132._0_4_;
  auVar90 = ZEXT416(*(uint *)(param_1 + auVar100._0_4_));
  lVar33 = param_1 + auVar100._4_4_;
  lVar34 = param_1 + auVar100._8_4_;
  lVar35 = param_1 + auVar100._12_4_;
  uVar31 = (ulonglong)auVar119._4_4_;
  uVar38 = (ulonglong)auVar119._0_4_;
  uVar47 = (ulonglong)auVar101._0_4_;
  lVar36 = param_1 + auVar118._0_4_;
  lVar40 = param_1 + auVar118._4_4_;
  lVar41 = param_1 + auVar118._8_4_;
  lVar43 = param_1 + auVar118._12_4_;
  lVar45 = param_1 + lVar44;
  lVar48 = param_1 + auVar126._4_4_;
  lVar49 = param_1 + auVar126._8_4_;
  lVar50 = param_1 + auVar126._12_4_;
  lVar51 = param_1 + lVar55;
  lVar52 = param_1 + auVar132._4_4_;
  lVar53 = param_1 + auVar132._8_4_;
  lVar54 = param_1 + auVar132._12_4_;
  bVar56 = (bVar29 & 2) != 0;
  if (bVar56) {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._4_4_),0x10);
  }
  uVar42 = (ulonglong)auVar101._4_4_;
  auVar133 = ZEXT416(*(uint *)(uVar38 + lVar32));
  if (bVar56) {
    auVar133 = insertps(auVar133,*(undefined4 *)(uVar31 + lVar33),0x10);
  }
  auVar149 = ZEXT416(*(uint *)(uVar47 + lVar32));
  if (bVar56) {
    auVar149 = insertps(auVar149,*(undefined4 *)(uVar42 + lVar33),0x10);
  }
  _local_368 = ZEXT416(*(uint *)(param_1 + auVar118._0_4_));
  if (bVar56) {
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._4_4_),0x10);
    _local_388 = insertps(ZEXT416(*(uint *)(uVar38 + lVar36)),*(undefined4 *)(uVar31 + lVar40),0x10)
    ;
    auVar180 = insertps(ZEXT416(*(uint *)(uVar47 + lVar36)),*(undefined4 *)(uVar42 + lVar40),0x10);
    auVar163 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                        *(undefined4 *)(param_1 + auVar126._4_4_),0x10);
  }
  else {
    _local_388 = ZEXT416(*(uint *)(uVar38 + lVar36));
    auVar180 = ZEXT416(*(uint *)(uVar47 + lVar36));
    auVar163 = ZEXT416(*(uint *)(param_1 + lVar44));
  }
  auVar182 = ZEXT416(*(uint *)(uVar38 + lVar45));
  uVar61 = auVar119._8_4_;
  uVar159 = auVar119._12_4_;
  uVar63 = auVar101._8_4_;
  uVar20 = auVar101._12_4_;
  if (bVar56) {
    auVar182 = insertps(auVar182,*(undefined4 *)(uVar31 + lVar48),0x10);
    auVar157 = insertps(ZEXT416(*(uint *)(uVar47 + lVar45)),*(undefined4 *)(uVar42 + lVar48),0x10);
    auVar119 = insertps(ZEXT416(*(uint *)(param_1 + lVar55)),
                        *(undefined4 *)(param_1 + auVar132._4_4_),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar38 + lVar51)),*(undefined4 *)(uVar31 + lVar52),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar47 + lVar51)),*(undefined4 *)(uVar42 + lVar52),0x10);
  }
  else {
    auVar157 = ZEXT416(*(uint *)(uVar47 + lVar45));
    auVar119 = ZEXT416(*(uint *)(param_1 + lVar55));
    auVar89 = ZEXT416(*(uint *)(uVar38 + lVar51));
    auVar101 = ZEXT416(*(uint *)(uVar47 + lVar51));
  }
  if ((bVar29 & 4) != 0) {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._8_4_),0x20);
    auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar61 + lVar34),0x20);
    auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar63 + lVar34),0x20);
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._8_4_),0x20);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar61 + lVar41),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar63 + lVar41),0x20);
    auVar163 = insertps(auVar163,*(undefined4 *)(param_1 + auVar126._8_4_),0x20);
    auVar182 = insertps(auVar182,*(undefined4 *)((ulonglong)uVar61 + lVar49),0x20);
    auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)uVar63 + lVar49),0x20);
    auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + auVar132._8_4_),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar61 + lVar53),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar63 + lVar53),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar90 = insertps(auVar90,*(undefined4 *)(param_1 + auVar100._12_4_),0x30);
    auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar159 + lVar35),0x30);
    auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar20 + lVar35),0x30);
    _local_368 = insertps(_local_368,*(undefined4 *)(param_1 + auVar118._12_4_),0x30);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar159 + lVar43),0x30);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar20 + lVar43),0x30);
    auVar163 = insertps(auVar163,*(undefined4 *)(param_1 + auVar126._12_4_),0x30);
  }
  uVar31 = (ulonglong)(auVar179._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
  if ((char)bVar29 < '\0') {
    auVar182 = insertps(auVar182,*(undefined4 *)((ulonglong)uVar159 + lVar50),0x30);
  }
  uVar47 = (ulonglong)(auVar179._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
  if ((char)bVar29 < '\0') {
    auVar157 = insertps(auVar157,*(undefined4 *)((ulonglong)uVar20 + lVar50),0x30);
  }
  bVar56 = (char)bVar29 < '\0';
  uVar38 = (ulonglong)SUB164(auVar179 & ___xmm_0000000c0000000c0000000c0000000c,8);
  if (bVar56) {
    auVar119 = insertps(auVar119,*(undefined4 *)(param_1 + auVar132._12_4_),0x30);
  }
  uVar42 = (ulonglong)SUB164(auVar179 & ___xmm_0000000c0000000c0000000c0000000c,0xc);
  auVar179 = insertps(ZEXT416(*(uint *)(uVar31 + lVar36)),*(undefined4 *)(uVar47 + lVar40),0x10);
  auVar100 = insertps(ZEXT416(*(uint *)(uVar31 + lVar45)),*(undefined4 *)(uVar47 + lVar48),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)(uVar31 + lVar51)),*(undefined4 *)(uVar47 + lVar52),0x10);
  auVar126 = insertps(ZEXT416(*(uint *)(uVar31 + lVar32)),*(undefined4 *)(uVar47 + lVar33),0x10);
  if (bVar56) {
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar159 + lVar54),0x30);
  }
  auVar179 = insertps(auVar179,*(undefined4 *)(uVar38 + lVar41),0x20);
  auVar100 = insertps(auVar100,*(undefined4 *)(uVar38 + lVar49),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)(uVar38 + lVar53),0x20);
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar38 + lVar34),0x20);
  if (bVar56) {
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar20 + lVar54),0x30);
  }
  auVar179 = insertps(auVar179,*(undefined4 *)(uVar42 + lVar43),0x30);
  auVar100 = insertps(auVar100,*(undefined4 *)(uVar42 + lVar50),0x30);
  auVar118 = insertps(auVar118,*(undefined4 *)(uVar42 + lVar54),0x30);
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar42 + lVar35),0x30);
  fVar160 = auVar183._0_4_;
  fVar162 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar160);
  fVar172 = auVar183._4_4_;
  fVar167 = (float)(_UNK_150651574 ^ (uint)fVar172);
  fVar175 = auVar183._8_4_;
  fVar169 = (float)(_UNK_150651578 ^ (uint)fVar175);
  fVar176 = auVar183._12_4_;
  fVar171 = (float)(_UNK_15065157c ^ (uint)fVar176);
  local_378 = auVar180._0_4_;
  fStack_374 = auVar180._4_4_;
  fStack_370 = auVar180._8_4_;
  fStack_36c = auVar180._12_4_;
  fVar99 = auVar91._0_4_;
  fVar104 = auVar91._4_4_;
  fVar105 = auVar91._12_4_;
  local_2e8 = auVar163._0_4_;
  fStack_2e4 = auVar163._4_4_;
  fStack_2e0 = auVar163._8_4_;
  fStack_2dc = auVar163._12_4_;
  fVar84 = auVar91._8_4_;
  local_2d8 = auVar182._0_4_;
  fStack_2d4 = auVar182._4_4_;
  fStack_2d0 = auVar182._8_4_;
  fStack_2cc = auVar182._12_4_;
  fVar177 = auVar157._0_4_;
  fVar189 = auVar157._4_4_;
  fVar191 = auVar157._8_4_;
  fVar193 = auVar157._12_4_;
  fVar117 = auVar120._0_4_;
  fVar122 = auVar120._4_4_;
  fVar123 = auVar120._12_4_;
  fVar85 = auVar120._8_4_;
  fVar124 = auVar89._0_4_;
  fVar130 = auVar89._4_4_;
  fVar140 = auVar89._8_4_;
  fVar141 = auVar89._12_4_;
  fVar86 = auVar101._0_4_;
  auVar82._0_4_ = fVar117 * fVar86;
  fVar96 = auVar101._4_4_;
  auVar82._4_4_ = fVar122 * fVar96;
  fVar97 = auVar101._8_4_;
  auVar82._8_4_ = fVar85 * fVar97;
  fVar98 = auVar101._12_4_;
  auVar82._12_4_ = fVar123 * fVar98;
  fVar106 = (local_378 * fVar162 - fVar99 * fVar177) - auVar82._0_4_;
  fVar114 = (fStack_374 * fVar167 - fVar104 * fVar189) - auVar82._4_4_;
  fVar115 = (fStack_370 * fVar169 - fVar84 * fVar191) - auVar82._8_4_;
  fVar116 = (fStack_36c * fVar171 - fVar105 * fVar193) - auVar82._12_4_;
  lVar32 = (longlong)(int)(uVar58 << 2);
  pfVar1 = (float *)(param_5 + lVar32);
  local_348._0_4_ = *param_8;
  local_348._4_4_ = local_348._0_4_;
  fStack_340 = (float)local_348._0_4_;
  fStack_33c = (float)local_348._0_4_;
  if ((bVar29 & 9) == 9) {
    _local_338 = *(undefined1 (*) [16])(param_4 + lVar32);
    auVar91 = *(undefined1 (*) [16])(param_5 + lVar32);
    if ((param_7 & 1) == 0) {
      fVar72 = *param_11;
      auVar151._4_4_ = fVar72;
      auVar151._0_4_ = fVar72;
      auVar151._8_4_ = fVar72;
      auVar151._12_4_ = fVar72;
    }
    else {
      auVar82 = *(undefined1 (*) [16])(param_9 + lVar32);
LAB_1408f9a47:
      fVar72 = param_8[1];
      local_348._4_4_ = (float)local_348._0_4_ + fVar72 * auVar82._4_4_;
      fStack_340 = (float)local_348._0_4_ + fVar72 * auVar82._8_4_;
      fStack_33c = (float)local_348._0_4_ + fVar72 * auVar82._12_4_;
      fVar78 = *param_11;
      auVar151._4_4_ = fVar78;
      auVar151._0_4_ = fVar78;
      auVar151._8_4_ = fVar78;
      auVar151._12_4_ = fVar78;
      local_348._0_4_ = (float)local_348._0_4_ + fVar72 * auVar82._0_4_;
    }
    if ((param_10 & 1) != 0) {
      if ((bVar29 & 9) == 9) {
        auVar82 = *(undefined1 (*) [16])(param_12 + lVar32);
      }
      else {
LAB_1408f9b81:
        puVar39 = (uint *)(param_12 + lVar32);
        if ((uVar46 & 1) != 0) {
          auVar82 = ZEXT416(*puVar39);
        }
        if ((uVar46 & 2) != 0) {
          auVar82 = insertps(auVar82,puVar39[1],0x10);
        }
        if ((uVar46 & 4) != 0) {
          auVar82 = insertps(auVar82,puVar39[2],0x20);
        }
        if ((uVar46 & 8) != 0) {
          auVar82 = insertps(auVar82,puVar39[3],0x30);
        }
      }
      fVar72 = param_11[1];
      auVar152._0_4_ = auVar151._0_4_ + fVar72 * auVar82._0_4_;
      auVar152._4_4_ = auVar151._4_4_ + fVar72 * auVar82._4_4_;
      auVar152._8_4_ = auVar151._8_4_ + fVar72 * auVar82._8_4_;
      auVar152._12_4_ = auVar151._12_4_ + fVar72 * auVar82._12_4_;
      goto LAB_1408f9bce;
    }
  }
  else {
    puVar39 = (uint *)(param_4 + lVar32);
    _local_338 = auVar150;
    if ((uVar46 & 1) != 0) {
      _local_338 = ZEXT416(*puVar39);
    }
    if ((uVar46 & 2) != 0) {
      _local_338 = insertps(_local_338,puVar39[1],0x10);
    }
    if ((uVar46 & 4) != 0) {
      _local_338 = insertps(_local_338,puVar39[2],0x20);
    }
    if ((uVar46 & 8) != 0) {
      _local_338 = insertps(_local_338,puVar39[3],0x30);
    }
    if ((uVar46 & 1) != 0) {
      auVar91 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar46 & 2) != 0) {
      auVar91 = insertps(auVar91,pfVar1[1],0x10);
    }
    if ((uVar46 & 4) != 0) {
      auVar91 = insertps(auVar91,pfVar1[2],0x20);
    }
    if ((uVar46 & 8) != 0) {
      auVar91 = insertps(auVar91,pfVar1[3],0x30);
    }
    if ((param_7 & 1) != 0) {
      puVar39 = (uint *)(param_9 + lVar32);
      if ((uVar46 & 1) != 0) {
        auVar82 = ZEXT416(*puVar39);
      }
      if ((uVar46 & 2) != 0) {
        auVar82 = insertps(auVar82,puVar39[1],0x10);
      }
      if ((uVar46 & 4) != 0) {
        auVar82 = insertps(auVar82,puVar39[2],0x20);
      }
      if ((uVar46 & 8) != 0) {
        auVar82 = insertps(auVar82,puVar39[3],0x30);
      }
      goto LAB_1408f9a47;
    }
    fVar72 = *param_11;
    auVar151._4_4_ = fVar72;
    auVar151._0_4_ = fVar72;
    auVar151._8_4_ = fVar72;
    auVar151._12_4_ = fVar72;
    if ((param_10 & 1) != 0) goto LAB_1408f9b81;
  }
  auVar152 = auVar151;
LAB_1408f9bce:
  local_398 = auVar149._0_4_;
  fStack_394 = auVar149._4_4_;
  fStack_390 = auVar149._8_4_;
  fStack_38c = auVar149._12_4_;
  local_328 = auVar90._0_4_;
  fStack_324 = auVar90._4_4_;
  fStack_320 = auVar90._8_4_;
  fStack_31c = auVar90._12_4_;
  fVar79 = local_328 -
           (((float)local_368._0_4_ * fVar162 - fVar99 * local_2e8) - fVar117 * auVar119._0_4_);
  fVar80 = fStack_324 -
           (((float)local_368._4_4_ * fVar167 - fVar104 * fStack_2e4) - fVar122 * auVar119._4_4_);
  auVar174._0_8_ = CONCAT44(fVar80,fVar79);
  auVar174._8_4_ =
       fStack_320 - ((fStack_360 * fVar169 - fVar84 * fStack_2e0) - fVar85 * auVar119._8_4_);
  auVar174._12_4_ =
       fStack_31c - ((fStack_35c * fVar171 - fVar105 * fStack_2dc) - fVar123 * auVar119._12_4_);
  local_318 = auVar133._0_4_;
  fStack_314 = auVar133._4_4_;
  fStack_310 = auVar133._8_4_;
  fStack_30c = auVar133._12_4_;
  fVar72 = local_318 - (((float)local_388._0_4_ * fVar162 - fVar99 * local_2d8) - fVar117 * fVar124)
  ;
  fVar78 = fStack_314 -
           (((float)local_388._4_4_ * fVar167 - fVar104 * fStack_2d4) - fVar122 * fVar130);
  auVar158._0_8_ = CONCAT44(fVar78,fVar72);
  auVar158._8_4_ = fStack_310 - ((fStack_380 * fVar169 - fVar84 * fStack_2d0) - fVar85 * fVar140);
  auVar158._12_4_ = fStack_30c - ((fStack_37c * fVar171 - fVar105 * fStack_2cc) - fVar123 * fVar141)
  ;
  fVar106 = local_398 - fVar106;
  fVar114 = fStack_394 - fVar114;
  auVar92._0_8_ = CONCAT44(fVar114,fVar106);
  auVar92._8_4_ = fStack_390 - fVar115;
  auVar92._12_4_ = fStack_38c - fVar116;
  auVar76._0_4_ = fVar106 * fVar106 + fVar72 * fVar72 + fVar79 * fVar79;
  auVar76._4_4_ = fVar114 * fVar114 + fVar78 * fVar78 + fVar80 * fVar80;
  auVar76._8_4_ =
       auVar92._8_4_ * auVar92._8_4_ +
       auVar158._8_4_ * auVar158._8_4_ + auVar174._8_4_ * auVar174._8_4_;
  auVar76._12_4_ =
       auVar92._12_4_ * auVar92._12_4_ +
       auVar158._12_4_ * auVar158._12_4_ + auVar174._12_4_ * auVar174._12_4_;
  auVar132 = sqrtps(auVar120,auVar76);
  uVar58 = -(uint)(auVar76._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar46 = -(uint)(auVar76._4_4_ < _UNK_1506895e4);
  uVar61 = -(uint)(auVar76._8_4_ < _UNK_1506895e8);
  uVar63 = -(uint)(auVar76._12_4_ < _UNK_1506895ec);
  auVar64._4_4_ = uVar46;
  auVar64._0_4_ = uVar58;
  auVar110._8_4_ = auVar158._8_4_;
  auVar110._0_8_ = auVar158._0_8_;
  auVar110._12_4_ = auVar158._12_4_;
  auVar101 = divps(auVar110,auVar132);
  auVar129._8_4_ = auVar92._8_4_;
  auVar129._0_8_ = auVar92._0_8_;
  auVar129._12_4_ = auVar92._12_4_;
  auVar133 = divps(auVar129,auVar132);
  auVar137._8_4_ = auVar174._8_4_;
  auVar137._0_8_ = auVar174._0_8_;
  auVar137._12_4_ = auVar174._12_4_;
  auVar90 = divps(auVar137,auVar132);
  auVar64._8_4_ = uVar61;
  auVar64._12_4_ = uVar63;
  auVar21._4_4_ = _UNK_15076b1f4;
  auVar21._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar21._8_4_ = _UNK_15076b1f8;
  auVar21._12_4_ = _UNK_15076b1fc;
  auVar90 = blendvps(auVar90,auVar21,auVar64);
  auVar185._8_4_ = auVar174._8_4_;
  auVar185._0_8_ = auVar174._0_8_;
  auVar185._12_4_ = auVar174._12_4_;
  bVar56 = (bVar29 & 1) != 0;
  if (bVar56) {
    auVar185 = auVar90;
  }
  auVar144._0_8_ = CONCAT44(~uVar46 & auVar101._4_4_,~uVar58 & auVar101._0_4_);
  auVar144._8_4_ = ~uVar61 & auVar101._8_4_;
  auVar144._12_4_ = ~uVar63 & auVar101._12_4_;
  auVar111._0_8_ = CONCAT44(~uVar46 & auVar133._4_4_,~uVar58 & auVar133._0_4_);
  auVar111._8_4_ = ~uVar61 & auVar133._8_4_;
  auVar111._12_4_ = ~uVar63 & auVar133._12_4_;
  auVar83._8_4_ = auVar158._8_4_;
  auVar83._0_8_ = auVar158._0_8_;
  auVar83._12_4_ = auVar158._12_4_;
  auVar65._8_4_ = auVar92._8_4_;
  auVar65._0_8_ = auVar92._0_8_;
  auVar65._12_4_ = auVar92._12_4_;
  if (bVar56) {
    auVar83._8_4_ = auVar144._8_4_;
    auVar83._0_8_ = auVar144._0_8_;
    auVar83._12_4_ = auVar144._12_4_;
    auVar65._8_4_ = auVar111._8_4_;
    auVar65._0_8_ = auVar111._0_8_;
    auVar65._12_4_ = auVar111._12_4_;
    auVar101 = blendps(auVar174,auVar185,1);
  }
  else {
    auVar101 = blendps(auVar174,auVar185,1);
  }
  if ((bVar29 & 2) == 0) {
    auVar149 = blendps(auVar158,auVar83,1);
    auVar133 = blendps(auVar92,auVar65,1);
    auVar101 = blendps(auVar101,auVar101,2);
    auVar71 = auVar133;
    auVar186 = auVar149;
  }
  else {
    auVar149 = blendps(auVar158,auVar83,1);
    auVar186._8_4_ = auVar144._8_4_;
    auVar186._0_8_ = auVar144._0_8_;
    auVar186._12_4_ = auVar144._12_4_;
    auVar133 = blendps(auVar92,auVar65,1);
    auVar71._8_4_ = auVar111._8_4_;
    auVar71._0_8_ = auVar111._0_8_;
    auVar71._12_4_ = auVar111._12_4_;
    auVar101 = blendps(auVar101,auVar90,2);
  }
  if ((bVar29 & 4) == 0) {
    auVar163 = blendps(auVar149,auVar186,2);
    auVar93 = blendps(auVar133,auVar71,2);
    auVar133 = auVar93;
    auVar149 = auVar101;
    auVar187 = auVar163;
  }
  else {
    auVar163 = blendps(auVar149,auVar186,2);
    auVar187._8_4_ = auVar144._8_4_;
    auVar187._0_8_ = auVar144._0_8_;
    auVar187._12_4_ = auVar144._12_4_;
    auVar133 = blendps(auVar133,auVar71,2);
    auVar93._8_4_ = auVar111._8_4_;
    auVar93._0_8_ = auVar111._0_8_;
    auVar93._12_4_ = auVar111._12_4_;
    auVar149 = auVar90;
  }
  local_3a8 = auVar179._0_4_;
  fStack_3a4 = auVar179._4_4_;
  fStack_3a0 = auVar179._8_4_;
  fStack_39c = auVar179._12_4_;
  local_3c8 = auVar100._0_4_;
  fStack_3c4 = auVar100._4_4_;
  fStack_3c0 = auVar100._8_4_;
  fStack_3bc = auVar100._12_4_;
  auVar101 = blendps(auVar101,auVar149,4);
  bVar56 = -1 < (char)bVar29;
  if (bVar56) {
    auVar90 = auVar101;
  }
  local_2c8 = auVar118._0_4_;
  fStack_2c4 = auVar118._4_4_;
  fStack_2c0 = auVar118._8_4_;
  fStack_2bc = auVar118._12_4_;
  auVar149 = blendps(auVar163,auVar187,4);
  if (bVar56) {
    auVar144 = auVar149;
  }
  auVar133 = blendps(auVar133,auVar93,4);
  if (bVar56) {
    auVar111 = auVar133;
  }
  fVar106 = (float)(~uVar58 & auVar132._0_4_) - (float)local_338._0_4_;
  fVar114 = (float)(~uVar46 & auVar132._4_4_) - (float)local_338._4_4_;
  fStack_330 = (float)(~uVar61 & auVar132._8_4_) - fStack_330;
  fStack_32c = (float)(~uVar63 & auVar132._12_4_) - fStack_32c;
  auVar66._4_4_ = -(uint)(0.0 <= fVar114);
  auVar66._0_4_ = -(uint)(0.0 <= fVar106);
  auVar66._8_4_ = -(uint)(0.0 <= fStack_330);
  auVar66._12_4_ = -(uint)(0.0 <= fStack_32c);
  auVar132 = blendvps(auVar152,_local_348,auVar66);
  fVar115 = auVar132._0_4_ * param_6 * param_6;
  fVar116 = auVar132._4_4_ * param_6 * param_6;
  fVar72 = auVar132._8_4_ * param_6 * param_6;
  param_6 = auVar132._12_4_ * param_6 * param_6;
  fVar78 = auVar126._0_4_;
  fVar79 = auVar126._4_4_;
  fVar80 = auVar126._8_4_;
  fVar142 = auVar126._12_4_;
  auVar153._0_4_ =
       (float)((uint)fVar115 ^ __xmm_80000000800000008000000080000000) * fVar106 - auVar91._0_4_;
  auVar153._4_4_ = (float)((uint)fVar116 ^ _UNK_150651574) * fVar114 - auVar91._4_4_;
  auVar153._8_4_ = (float)((uint)fVar72 ^ _UNK_150651578) * fStack_330 - auVar91._8_4_;
  auVar153._12_4_ = (float)((uint)param_6 ^ _UNK_15065157c) * fStack_32c - auVar91._12_4_;
  auVar164._0_4_ =
       (((fVar162 * local_3a8 - fVar99 * local_3c8) - fVar117 * local_2c8) + fVar78) * fVar115 +
       ___xmm_3f8000003f8000003f8000003f800000;
  auVar164._4_4_ =
       (((fVar167 * fStack_3a4 - fVar104 * fStack_3c4) - fVar122 * fStack_2c4) + fVar79) * fVar116 +
       _UNK_15076b1f4;
  auVar164._8_4_ =
       (((fVar169 * fStack_3a0 - fVar84 * fStack_3c0) - fVar85 * fStack_2c0) + fVar80) * fVar72 +
       _UNK_15076b1f8;
  auVar164._12_4_ =
       (((fVar171 * fStack_39c - fVar105 * fStack_3bc) - fVar123 * fStack_2bc) + fVar142) * param_6
       + _UNK_15076b1fc;
  auVar132 = divps(auVar153,auVar164);
  fVar106 = auVar132._0_4_;
  auVar103._0_4_ = auVar91._0_4_ + fVar106;
  fVar114 = auVar132._4_4_;
  auVar103._4_4_ = auVar91._4_4_ + fVar114;
  fVar115 = auVar132._8_4_;
  auVar103._8_4_ = auVar91._8_4_ + fVar115;
  fVar116 = auVar132._12_4_;
  auVar103._12_4_ = auVar91._12_4_ + fVar116;
  if ((bVar29 & 1) != 0) {
    *pfVar1 = auVar103._0_4_;
  }
  if ((bVar29 & 2) == 0) {
    auVar90 = blendps(auVar101,auVar90,8);
  }
  else {
    uVar17 = extractps(auVar103,1);
    *(undefined8 *)(pfVar1 + 1) = uVar17;
    auVar90 = blendps(auVar101,auVar90,8);
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar103,2);
    *(undefined8 *)(pfVar1 + 2) = uVar17;
  }
  fVar162 = auVar90._0_4_ * fVar106;
  fVar167 = auVar90._4_4_ * fVar114;
  fVar169 = auVar90._8_4_ * fVar115;
  fVar171 = auVar90._12_4_ * fVar116;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar103,3);
    *(undefined8 *)(pfVar1 + 3) = uVar17;
  }
  auVar77._0_4_ = local_328 + fVar78 * fVar162;
  auVar77._4_4_ = fStack_324 + fVar79 * fVar167;
  auVar77._8_4_ = fStack_320 + fVar80 * fVar169;
  auVar77._12_4_ = fStack_31c + fVar142 * fVar171;
  if ((bVar29 & 1) == 0) {
    auVar90 = blendps(auVar149,auVar144,8);
  }
  else {
    *(float *)(param_1 + auVar150._0_4_) = auVar77._0_4_;
    auVar90 = blendps(auVar149,auVar144,8);
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + auVar150._4_4_) = uVar17;
  }
  fVar148 = (float)auVar90._12_4_ * fVar116;
  fVar147 = (float)auVar90._8_4_ * fVar115;
  fVar146 = (float)auVar90._4_4_ * fVar114;
  fVar72 = auVar90._0_4_ * fVar106;
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + auVar150._12_4_) = uVar17;
  }
  local_318 = local_318 + fVar78 * fVar72;
  fStack_314 = fStack_314 + fVar79 * fVar146;
  auVar67._4_4_ = fStack_314;
  auVar67._0_4_ = local_318;
  fStack_310 = fStack_310 + fVar80 * fVar147;
  fStack_30c = fStack_30c + fVar142 * fVar148;
  auVar67._8_4_ = fStack_310;
  auVar67._12_4_ = fStack_30c;
  if ((bVar29 & 1) == 0) {
    auVar90 = blendps(auVar133,auVar111,8);
  }
  else {
    *(float *)(param_1 + 4 + (longlong)auVar150._0_4_) = local_318;
    auVar90 = blendps(auVar133,auVar111,8);
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar67,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._4_4_) = uVar17;
  }
  fVar116 = fVar116 * (float)auVar90._12_4_;
  fVar115 = fVar115 * (float)auVar90._8_4_;
  fVar114 = fVar114 * (float)auVar90._4_4_;
  fVar106 = fVar106 * (float)auVar90._0_4_;
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar67,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._8_4_) = uVar17;
  }
  auVar112._4_4_ = fStack_314;
  auVar112._0_4_ = local_318;
  auVar112._8_4_ = fStack_310;
  auVar112._12_4_ = fStack_30c;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._12_4_) = uVar17;
    auVar138._0_4_ = local_398 + fVar78 * fVar106;
    auVar138._4_4_ = fStack_394 + fVar79 * fVar114;
    auVar138._8_4_ = fStack_390 + fVar80 * fVar115;
    auVar138._12_4_ = fStack_38c + fVar142 * fVar116;
  }
  else {
    auVar138._0_4_ = local_398 + fVar78 * fVar106;
    auVar138._4_4_ = fStack_394 + fVar79 * fVar114;
    auVar138._8_4_ = fStack_390 + fVar80 * fVar115;
    auVar138._12_4_ = fStack_38c + fVar142 * fVar116;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar150._0_4_) = auVar138._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar138,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar138,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar138,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar150._0_4_) = fVar78;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._12_4_) = uVar17;
  }
  auVar165._0_4_ = (float)local_368._0_4_ + local_3a8 * fVar162 * fVar160;
  auVar165._4_4_ = (float)local_368._4_4_ + fStack_3a4 * fVar167 * fVar172;
  auVar165._8_4_ = fStack_360 + fStack_3a0 * fVar169 * fVar175;
  auVar165._12_4_ = fStack_35c + fStack_39c * fVar171 * fVar176;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar136._0_4_) = auVar165._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar165,1);
    *(undefined8 *)(param_1 + auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar165,2);
    *(undefined8 *)(param_1 + auVar136._8_4_) = uVar17;
  }
  uVar25 = fStack_39c * fVar148 * fVar176;
  uVar24 = fStack_3a0 * fVar147 * fVar175;
  uVar23 = fStack_3a4 * fVar146 * fVar172;
  uVar22 = local_3a8 * fVar72 * fVar160;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar165,3);
    *(undefined8 *)(param_1 + auVar136._12_4_) = uVar17;
    auVar94._0_4_ = (float)local_388._0_4_ + (float)uVar22;
    auVar94._4_4_ = (float)local_388._4_4_ + (float)uVar23;
    auVar94._8_4_ = fStack_380 + (float)uVar24;
    auVar94._12_4_ = fStack_37c + (float)uVar25;
  }
  else {
    auVar94._0_4_ = (float)local_388._0_4_ + (float)uVar22;
    auVar94._4_4_ = (float)local_388._4_4_ + (float)uVar23;
    auVar94._8_4_ = fStack_380 + (float)uVar24;
    auVar94._12_4_ = fStack_37c + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar136._0_4_) = auVar94._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._8_4_) = uVar17;
  }
  uVar25 = fVar176 * fStack_39c * fVar116;
  uVar24 = fVar175 * fStack_3a0 * fVar115;
  uVar23 = fVar172 * fStack_3a4 * fVar114;
  uVar22 = fVar160 * local_3a8 * fVar106;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar136._12_4_) = uVar17;
    auVar145._0_4_ = local_378 + (float)uVar22;
    auVar145._4_4_ = fStack_374 + (float)uVar23;
    auVar145._8_4_ = fStack_370 + (float)uVar24;
    auVar145._12_4_ = fStack_36c + (float)uVar25;
  }
  else {
    auVar145._0_4_ = local_378 + (float)uVar22;
    auVar145._4_4_ = fStack_374 + (float)uVar23;
    auVar145._8_4_ = fStack_370 + (float)uVar24;
    auVar145._12_4_ = fStack_36c + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar136._0_4_) = auVar145._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar145,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar145,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar145,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar136._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar136._0_4_) = local_3a8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar179,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar179,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar179,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar136._12_4_) = uVar17;
  }
  auVar139._0_4_ = local_2e8 + local_3c8 * fVar162 * fVar99;
  auVar139._4_4_ = fStack_2e4 + fStack_3c4 * fVar167 * fVar104;
  auVar139._8_4_ = fStack_2e0 + fStack_3c0 * fVar169 * fVar84;
  auVar139._12_4_ = fStack_2dc + fStack_3bc * fVar171 * fVar105;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar128._0_4_) = auVar139._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar139,1);
    *(undefined8 *)(param_1 + auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar139,2);
    *(undefined8 *)(param_1 + auVar128._8_4_) = uVar17;
  }
  uVar25 = fStack_3bc * fVar148 * fVar105;
  uVar24 = fStack_3c0 * fVar147 * fVar84;
  uVar23 = fStack_3c4 * fVar146 * fVar104;
  uVar22 = local_3c8 * fVar72 * fVar99;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar139,3);
    *(undefined8 *)(param_1 + auVar128._12_4_) = uVar17;
    auVar113._0_4_ = local_2d8 + (float)uVar22;
    auVar113._4_4_ = fStack_2d4 + (float)uVar23;
    auVar113._8_4_ = fStack_2d0 + (float)uVar24;
    auVar113._12_4_ = fStack_2cc + (float)uVar25;
  }
  else {
    auVar113._0_4_ = local_2d8 + (float)uVar22;
    auVar113._4_4_ = fStack_2d4 + (float)uVar23;
    auVar113._8_4_ = fStack_2d0 + (float)uVar24;
    auVar113._12_4_ = fStack_2cc + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar128._0_4_) = auVar113._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar113,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar113,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._8_4_) = uVar17;
  }
  uVar25 = fVar105 * fStack_3bc * fVar116;
  uVar24 = fVar84 * fStack_3c0 * fVar115;
  uVar23 = fVar104 * fStack_3c4 * fVar114;
  uVar22 = fVar99 * local_3c8 * fVar106;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar113,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar128._12_4_) = uVar17;
    auVar95._0_4_ = fVar177 + (float)uVar22;
    auVar95._4_4_ = fVar189 + (float)uVar23;
    auVar95._8_4_ = fVar191 + (float)uVar24;
    auVar95._12_4_ = fVar193 + (float)uVar25;
  }
  else {
    auVar95._0_4_ = fVar177 + (float)uVar22;
    auVar95._4_4_ = fVar189 + (float)uVar23;
    auVar95._8_4_ = fVar191 + (float)uVar24;
    auVar95._12_4_ = fVar193 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar128._0_4_) = auVar95._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar128._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar128._0_4_) = local_3c8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar128._12_4_) = uVar17;
  }
  auVar68._0_4_ = auVar119._0_4_ + fVar162 * local_2c8 * fVar117;
  auVar68._4_4_ = auVar119._4_4_ + fVar167 * fStack_2c4 * fVar122;
  auVar68._8_4_ = auVar119._8_4_ + fVar169 * fStack_2c0 * fVar85;
  auVar68._12_4_ = auVar119._12_4_ + fVar171 * fStack_2bc * fVar123;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar109._0_4_) = auVar68._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar68,1);
    *(undefined8 *)(param_1 + auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar68,2);
    *(undefined8 *)(param_1 + auVar109._8_4_) = uVar17;
  }
  uVar25 = fVar148 * fStack_2bc * fVar123;
  uVar24 = fVar147 * fStack_2c0 * fVar85;
  uVar23 = fVar146 * fStack_2c4 * fVar122;
  uVar22 = fVar72 * local_2c8 * fVar117;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar68,3);
    *(undefined8 *)(param_1 + auVar109._12_4_) = uVar17;
    auVar69._0_4_ = fVar124 + (float)uVar22;
    auVar69._4_4_ = fVar130 + (float)uVar23;
    auVar69._8_4_ = fVar140 + (float)uVar24;
    auVar69._12_4_ = fVar141 + (float)uVar25;
  }
  else {
    auVar69._0_4_ = fVar124 + (float)uVar22;
    auVar69._4_4_ = fVar130 + (float)uVar23;
    auVar69._8_4_ = fVar140 + (float)uVar24;
    auVar69._12_4_ = fVar141 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar109._0_4_) = auVar69._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar69,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar69,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._8_4_) = uVar17;
  }
  uVar25 = fVar123 * fVar116 * fStack_2bc;
  uVar24 = fVar85 * fVar115 * fStack_2c0;
  uVar23 = fVar122 * fVar114 * fStack_2c4;
  uVar22 = fVar117 * fVar106 * local_2c8;
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar69,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar109._12_4_) = uVar17;
    auVar70._0_4_ = fVar86 + (float)uVar22;
    auVar70._4_4_ = fVar96 + (float)uVar23;
    auVar70._8_4_ = fVar97 + (float)uVar24;
    auVar70._12_4_ = fVar98 + (float)uVar25;
  }
  else {
    auVar70._0_4_ = fVar86 + (float)uVar22;
    auVar70._4_4_ = fVar96 + (float)uVar23;
    auVar70._8_4_ = fVar97 + (float)uVar24;
    auVar70._12_4_ = fVar98 + (float)uVar25;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar109._0_4_) = auVar70._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar70,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar70,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar70,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar109._12_4_) = uVar17;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar109._0_4_) = local_2c8;
  }
  if ((bVar29 & 2) != 0) {
    uVar17 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._4_4_) = uVar17;
  }
  if ((bVar29 & 4) != 0) {
    uVar17 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._8_4_) = uVar17;
  }
  if ((char)bVar29 < '\0') {
    uVar17 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar109._12_4_) = uVar17;
  }
  return;
}

// ApplyXPBDEmbeddedVertexFaceSpringDampingConstraints_sse4 @ 1408faaa0

/* WARNING: Removing unreachable block (ram,0x0001408fbf39) */
/* WARNING: Removing unreachable block (ram,0x0001408fd738) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedVertexFaceSpringDampingConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,byte param_8,float *param_9,longlong param_10,
               byte param_11,float *param_12,longlong param_13,byte param_14,float *param_15,
               longlong param_16,uint param_17)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  uint *puVar28;
  byte bVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  byte bVar38;
  longlong lVar39;
  longlong lVar40;
  undefined1 (*pauVar41) [16];
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  uint uVar48;
  longlong lVar49;
  longlong lVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  bool bVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  float fVar68;
  float fVar69;
  float fVar81;
  float fVar82;
  undefined1 auVar70 [16];
  float fVar83;
  float fVar84;
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
  float fVar85;
  float fVar86;
  float fVar96;
  float fVar98;
  float fVar100;
  undefined1 auVar87 [16];
  float fVar97;
  float fVar99;
  float fVar101;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar102;
  int iVar103;
  float fVar105;
  float fVar106;
  undefined1 auVar104 [16];
  int iVar112;
  undefined1 auVar107 [16];
  int iVar113;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar114;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar140;
  float fVar141;
  float fVar145;
  float fVar147;
  undefined1 unaff_XMM7 [16];
  float fVar146;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  float fVar153;
  int iVar154;
  float fVar160;
  float fVar161;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar162;
  undefined1 auVar157 [16];
  undefined1 auVar159 [16];
  float fVar168;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  float fVar169;
  float fVar174;
  float fVar175;
  float fVar176;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  float fVar177;
  float fVar185;
  float fVar187;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  float fVar188;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar190;
  float fVar195;
  float fVar196;
  float fVar197;
  float fVar198;
  float fVar199;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  float fVar200;
  float fVar201;
  float fVar205;
  float fVar207;
  undefined1 auVar202 [16];
  float fVar208;
  undefined1 auVar203 [16];
  float fVar206;
  undefined1 auVar204 [16];
  float fVar209;
  float fVar215;
  float fVar216;
  undefined1 unaff_XMM14 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar217;
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  float fVar225;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  float fVar226;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 local_498 [8];
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3b8 [16];
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_388 [8];
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_358 [8];
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  undefined1 local_318 [8];
  float fStack_310;
  float fStack_30c;
  ulonglong local_308;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  float local_288;
  float fStack_284;
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
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar158 [16];
  float fVar186;
  undefined1 auVar194 [16];
  
  uVar62 = param_17 + 3;
  if (-1 < (int)param_17) {
    uVar62 = param_17;
  }
  if ((int)(uVar62 & 0xfffffffc) < 1) {
    uVar33 = 0;
  }
  else {
    uVar33 = 0;
    uVar34 = 0;
    do {
      uVar37 = uVar34 & 0xffffffff;
      fStack_32c = *param_9;
      local_338._0_4_ = fStack_32c;
      local_338._4_4_ = fStack_32c;
      fStack_330 = fStack_32c;
      if ((param_8 & 1) != 0) {
        pfVar1 = (float *)(param_10 + uVar37);
        fVar69 = param_9[1];
        local_338._0_4_ = fStack_32c + fVar69 * *pfVar1;
        local_338._4_4_ = fStack_32c + fVar69 * pfVar1[1];
        fStack_330 = fStack_32c + fVar69 * pfVar1[2];
        fStack_32c = fStack_32c + fVar69 * pfVar1[3];
      }
      fStack_37c = *param_12;
      local_388._0_4_ = fStack_37c;
      local_388._4_4_ = fStack_37c;
      fStack_380 = fStack_37c;
      if ((param_11 & 1) != 0) {
        pfVar1 = (float *)(param_13 + uVar37);
        fVar69 = param_12[1];
        local_388._0_4_ = fStack_37c + fVar69 * *pfVar1;
        local_388._4_4_ = fStack_37c + fVar69 * pfVar1[1];
        fStack_380 = fStack_37c + fVar69 * pfVar1[2];
        fStack_37c = fStack_37c + fVar69 * pfVar1[3];
      }
      piVar2 = (int *)(param_3 + uVar34 * 4);
      piVar3 = (int *)(param_3 + 0x10 + uVar34 * 4);
      piVar4 = (int *)(param_3 + 0x20 + uVar34 * 4);
      piVar5 = (int *)(param_3 + 0x30 + uVar34 * 4);
      lVar31 = param_4 + uVar34 * 4;
      fVar86 = *(float *)(lVar31 + 4);
      fVar97 = *(float *)(lVar31 + 8);
      fVar99 = *(float *)(lVar31 + 0xc);
      auVar210 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar34 * 4);
      fVar83 = auVar210._12_4_;
      lVar31 = param_4 + 0x20 + uVar34 * 4;
      fVar101 = *(float *)(lVar31 + 4);
      fVar177 = *(float *)(lVar31 + 8);
      fVar185 = *(float *)(lVar31 + 0xc);
      lVar31 = param_4 + 0x30 + uVar34 * 4;
      fVar187 = *(float *)(lVar31 + 4);
      fVar188 = *(float *)(lVar31 + 8);
      fVar196 = *(float *)(lVar31 + 0xc);
      fVar225 = auVar210._4_4_;
      fVar226 = auVar210._8_4_;
      lVar30 = (longlong)(piVar2[1] << 4);
      lVar35 = (longlong)(piVar3[1] * 0x10);
      lVar39 = (longlong)(piVar4[1] << 4);
      lVar44 = (longlong)(piVar5[1] << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + lVar35),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar39),0x20);
      auVar211 = insertps(auVar210,*(undefined4 *)(param_1 + lVar44),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar30)),
                          *(undefined4 *)(param_1 + 4 + lVar35),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar202 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar44),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar30)),
                          *(undefined4 *)(param_1 + 8 + lVar35),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar191 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar44),0x30);
      lVar31 = (longlong)(*piVar2 * 3);
      lVar56 = (longlong)(*piVar3 * 3);
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar56 * 4),0x10);
      auVar133 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar56 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar56 * 4),0x10);
      lVar57 = (longlong)(piVar2[2] << 4);
      lVar31 = (longlong)(*piVar4 * 3);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar40 = (longlong)(piVar3[2] * 0x10);
      lVar31 = (longlong)(*piVar5 * 3);
      auVar220 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar134 = insertps(auVar133,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar133 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      lVar32 = (longlong)(piVar4[2] << 4);
      lVar31 = (longlong)(piVar2[1] * 3);
      lVar50 = (longlong)(piVar5[2] << 4);
      lVar56 = (longlong)(piVar3[1] * 3);
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar56 * 4),0x10);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar56 * 4),0x10);
      auVar221 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar56 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar57)),*(undefined4 *)(param_1 + lVar40),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar126 = insertps(auVar210,*(undefined4 *)(param_1 + lVar50),0x30);
      fVar68 = (float)((uint)fVar86 ^ __xmm_80000000800000008000000080000000);
      fVar81 = (float)((uint)fVar225 ^ _UNK_150651574);
      fVar82 = (float)((uint)fVar101 ^ _UNK_150651578);
      fVar84 = (float)((uint)fVar187 ^ _UNK_15065157c);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar57)),
                          *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar115 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar50),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar57)),
                          *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar116 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar50),0x30);
      lVar31 = (longlong)(piVar4[1] * 3);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar221 = insertps(auVar221,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar53 = (longlong)(piVar2[3] << 4);
      lVar52 = (longlong)(piVar3[3] * 0x10);
      lVar56 = (longlong)(piVar4[3] << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar52),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar56),0x20);
      lVar45 = (longlong)(piVar5[3] << 4);
      auVar127 = insertps(auVar210,*(undefined4 *)(param_1 + lVar45),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar56),0x20);
      auVar117 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar45),0x30);
      fVar209 = (auVar211._0_4_ * fVar68 - fVar97 * auVar126._0_4_) - fVar99 * auVar127._0_4_;
      fVar215 = (auVar211._4_4_ * fVar81 - fVar226 * auVar126._4_4_) - fVar83 * auVar127._4_4_;
      fVar216 = (auVar211._8_4_ * fVar82 - fVar177 * auVar126._8_4_) - fVar185 * auVar127._8_4_;
      fVar217 = (auVar211._12_4_ * fVar84 - fVar188 * auVar126._12_4_) - fVar196 * auVar127._12_4_;
      auVar179._4_4_ = fVar83;
      auVar179._0_4_ = fVar99;
      auVar179._8_4_ = fVar185;
      auVar179._12_4_ = fVar196;
      lVar31 = (longlong)(piVar5[1] * 3);
      auVar170 = insertps(auVar219,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar181 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      fVar200 = (auVar202._0_4_ * fVar68 - fVar97 * auVar115._0_4_) - fVar99 * auVar117._0_4_;
      fVar205 = (auVar202._4_4_ * fVar81 - fVar226 * auVar115._4_4_) - fVar83 * auVar117._4_4_;
      fVar207 = (auVar202._8_4_ * fVar82 - fVar177 * auVar115._8_4_) - fVar185 * auVar117._8_4_;
      fVar208 = (auVar202._12_4_ * fVar84 - fVar188 * auVar115._12_4_) - fVar196 * auVar117._12_4_;
      auVar222 = insertps(auVar221,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar56),0x20);
      auVar118 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar45),0x30);
      lVar31 = (longlong)(piVar2[2] * 3);
      lVar58 = (longlong)(piVar3[2] * 3);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + lVar58 * 4),0x10);
      fVar132 = (auVar191._0_4_ * fVar68 - fVar97 * auVar116._0_4_) - fVar99 * auVar118._0_4_;
      fVar136 = (auVar191._4_4_ * fVar81 - fVar226 * auVar116._4_4_) - fVar83 * auVar118._4_4_;
      fVar138 = (auVar191._8_4_ * fVar82 - fVar177 * auVar116._8_4_) - fVar185 * auVar118._8_4_;
      fVar140 = (auVar191._12_4_ * fVar84 - fVar188 * auVar116._12_4_) - fVar196 * auVar118._12_4_;
      auVar219 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar58 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar31 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar58 * 4),0x10);
      uVar48 = *(uint *)(param_1 + 0xc + lVar30);
      uVar65 = *(uint *)(param_1 + 0xc + lVar35);
      auVar221 = insertps(ZEXT416(uVar48),ZEXT416(uVar65),0x10);
      uVar67 = *(uint *)(param_1 + 0xc + lVar39);
      auVar221 = insertps(auVar221,ZEXT416(uVar67),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar44);
      auVar156 = insertps(auVar221,ZEXT416(uVar6),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar57);
      uVar8 = *(uint *)(param_1 + 0xc + lVar40);
      auVar221 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar32);
      auVar221 = insertps(auVar221,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar50);
      auVar221 = insertps(auVar221,ZEXT416(uVar10),0x30);
      fVar153 = auVar156._0_4_;
      fVar160 = auVar156._4_4_;
      fVar161 = auVar156._8_4_;
      fVar162 = auVar156._12_4_;
      fVar190 = auVar221._0_4_;
      fVar130 = auVar221._4_4_;
      fVar148 = auVar221._8_4_;
      fVar151 = auVar221._12_4_;
      lVar31 = (longlong)(piVar4[2] * 3);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar31 = (longlong)(piVar5[2] * 3);
      auVar156 = insertps(auVar180,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar221 = insertps(auVar219,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar219 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      uVar11 = *(uint *)(param_1 + 0xc + lVar53);
      uVar12 = *(uint *)(param_1 + 0xc + lVar52);
      auVar210 = insertps(ZEXT416(uVar11),ZEXT416(uVar12),0x10);
      uVar13 = *(uint *)(param_1 + 0xc + lVar56);
      auVar210 = insertps(auVar210,ZEXT416(uVar13),0x20);
      uVar14 = *(uint *)(param_1 + 0xc + lVar45);
      auVar210 = insertps(auVar210,ZEXT416(uVar14),0x30);
      fVar197 = auVar210._0_4_;
      fVar146 = auVar210._4_4_;
      fVar149 = auVar210._8_4_;
      fVar152 = auVar210._12_4_;
      lVar58 = (longlong)(piVar2[3] * 3);
      lVar31 = (longlong)(piVar3[3] * 3);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + lVar31 * 4),0x10);
      auVar180 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar31 * 4),0x10);
      auVar163 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar58 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar31 * 4),0x10);
      lVar31 = (longlong)(piVar4[3] * 3);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar163 = insertps(auVar163,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      lVar31 = (longlong)(piVar5[3] * 3);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar31 * 4),0x30);
      auVar142 = insertps(auVar180,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x30);
      auVar164 = insertps(auVar163,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x30);
      lVar49 = (longlong)(*piVar2 << 4);
      lVar58 = (longlong)(*piVar3 * 0x10);
      lVar31 = (longlong)(*piVar4 << 4);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar58),
                          0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + lVar31),0x20);
      lVar59 = (longlong)(*piVar5 << 4);
      auVar163 = insertps(auVar180,*(undefined4 *)(param_1 + lVar59),0x30);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar58),0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar192 = insertps(auVar180,*(undefined4 *)(param_1 + 4 + lVar59),0x30);
      auVar180 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                          *(undefined4 *)(param_1 + 8 + lVar58),0x10);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + 8 + lVar59),0x30);
      uVar15 = *(uint *)(param_1 + 0xc + lVar49);
      uVar16 = *(uint *)(param_1 + 0xc + lVar58);
      auVar171 = insertps(ZEXT416(uVar15),ZEXT416(uVar16),0x10);
      uVar17 = *(uint *)(param_1 + 0xc + lVar31);
      auVar171 = insertps(auVar171,ZEXT416(uVar17),0x20);
      uVar18 = *(uint *)(param_1 + 0xc + lVar59);
      auVar171 = insertps(auVar171,ZEXT416(uVar18),0x30);
      fVar69 = *param_15;
      fVar168 = fVar69;
      fVar201 = fVar69;
      fVar206 = fVar69;
      if ((param_14 & 1) != 0) {
        pfVar1 = (float *)(param_16 + uVar37);
        fVar85 = param_15[1];
        fVar168 = fVar69 + fVar85 * pfVar1[1];
        fVar201 = fVar69 + fVar85 * pfVar1[2];
        fVar206 = fVar69 + fVar85 * pfVar1[3];
        fVar69 = fVar69 + fVar85 * *pfVar1;
      }
      fVar131 = auVar163._0_4_;
      fVar135 = auVar163._4_4_;
      fVar137 = auVar163._8_4_;
      fVar139 = auVar163._12_4_;
      auVar218._0_4_ = fVar131 - fVar209;
      auVar218._4_4_ = fVar135 - fVar215;
      auVar218._8_4_ = fVar137 - fVar216;
      auVar218._12_4_ = fVar139 - fVar217;
      fVar189 = auVar192._0_4_;
      fVar195 = auVar192._4_4_;
      fVar198 = auVar192._8_4_;
      fVar199 = auVar192._12_4_;
      auVar107._0_4_ = fVar189 - fVar200;
      auVar107._4_4_ = fVar195 - fVar205;
      auVar107._8_4_ = fVar198 - fVar207;
      auVar107._12_4_ = fVar199 - fVar208;
      fVar102 = auVar180._0_4_;
      fVar105 = auVar180._4_4_;
      fVar106 = auVar180._12_4_;
      auVar178._0_4_ = fVar102 - fVar132;
      auVar178._4_4_ = fVar105 - fVar136;
      fVar186 = auVar180._8_4_;
      auVar178._8_4_ = fVar186 - fVar138;
      auVar178._12_4_ = fVar106 - fVar140;
      auVar180._0_4_ =
           auVar178._0_4_ * auVar178._0_4_ +
           auVar107._0_4_ * auVar107._0_4_ + auVar218._0_4_ * auVar218._0_4_;
      auVar180._4_4_ =
           auVar178._4_4_ * auVar178._4_4_ +
           auVar107._4_4_ * auVar107._4_4_ + auVar218._4_4_ * auVar218._4_4_;
      auVar180._8_4_ =
           auVar178._8_4_ * auVar178._8_4_ +
           auVar107._8_4_ * auVar107._8_4_ + auVar218._8_4_ * auVar218._8_4_;
      auVar180._12_4_ =
           auVar178._12_4_ * auVar178._12_4_ +
           auVar107._12_4_ * auVar107._12_4_ + auVar218._12_4_ * auVar218._12_4_;
      unaff_XMM14 = sqrtps(auVar179,auVar180);
      uVar61 = -(uint)(auVar180._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar63 = -(uint)(auVar180._4_4_ < _UNK_1506895e4);
      uVar64 = -(uint)(auVar180._8_4_ < _UNK_1506895e8);
      uVar66 = -(uint)(auVar180._12_4_ < _UNK_1506895ec);
      auVar163._4_4_ = uVar63;
      auVar163._0_4_ = uVar61;
      auVar163._8_4_ = uVar64;
      auVar163._12_4_ = uVar66;
      auVar180 = divps(auVar218,unaff_XMM14);
      auVar218 = blendvps(auVar180,___xmm_3f8000003f8000003f8000003f800000,auVar163);
      auVar180 = *(undefined1 (*) [16])(param_5 + uVar37);
      auVar70._4_4_ = -(uint)(0.0 <= (float)(~uVar63 & unaff_XMM14._4_4_) - auVar180._4_4_);
      auVar70._0_4_ = -(uint)(0.0 <= (float)(~uVar61 & unaff_XMM14._0_4_) - auVar180._0_4_);
      auVar163 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar180);
      auVar192._4_4_ = -(uint)(auVar180._4_4_ < _UNK_1506895d4);
      auVar192._0_4_ = -(uint)(auVar180._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar192._8_4_ = -(uint)(auVar180._8_4_ < _UNK_1506895d8);
      auVar192._12_4_ = -(uint)(auVar180._12_4_ < _UNK_1506895dc);
      auVar192 = blendvps(auVar163,___xmm_3f8000003f8000003f8000003f800000,auVar192);
      auVar70._8_4_ = -(uint)(0.0 <= (float)(~uVar64 & unaff_XMM14._8_4_) - auVar180._8_4_);
      auVar70._12_4_ = -(uint)(0.0 <= (float)(~uVar66 & unaff_XMM14._12_4_) - auVar180._12_4_);
      auVar180 = blendvps(_local_388,_local_338,auVar70);
      auVar163 = divps(auVar107,unaff_XMM14);
      auVar179 = divps(auVar178,unaff_XMM14);
      fVar114 = (float)(~uVar61 & auVar163._0_4_);
      fVar123 = (float)(~uVar63 & auVar163._4_4_);
      fVar124 = (float)(~uVar64 & auVar163._8_4_);
      fVar125 = (float)(~uVar66 & auVar163._12_4_);
      fVar141 = (float)(~uVar61 & auVar179._0_4_);
      fVar145 = (float)(~uVar63 & auVar179._4_4_);
      fVar147 = (float)(~uVar64 & auVar179._8_4_);
      fVar150 = (float)(~uVar66 & auVar179._12_4_);
      fVar169 = auVar171._0_4_;
      auVar155._0_4_ = ((fVar153 * fVar68 - fVar97 * fVar190) - fVar99 * fVar197) + fVar169;
      fVar174 = auVar171._4_4_;
      auVar155._4_4_ = ((fVar160 * fVar81 - fVar226 * fVar130) - fVar83 * fVar146) + fVar174;
      fVar175 = auVar171._8_4_;
      auVar155._8_4_ = ((fVar161 * fVar82 - fVar177 * fVar148) - fVar185 * fVar149) + fVar175;
      fVar176 = auVar171._12_4_;
      auVar155._12_4_ = ((fVar162 * fVar84 - fVar188 * fVar151) - fVar196 * fVar152) + fVar176;
      auVar180 = divps(auVar180,auVar155);
      auVar180 = sqrtps(auVar180,auVar180);
      local_108 = auVar220._0_4_;
      fStack_104 = auVar220._4_4_;
      fStack_100 = auVar220._8_4_;
      fStack_fc = auVar220._12_4_;
      local_f8 = auVar134._0_4_;
      fStack_f4 = auVar134._4_4_;
      fStack_f0 = auVar134._8_4_;
      fStack_ec = auVar134._12_4_;
      local_238 = auVar133._0_4_;
      fStack_234 = auVar133._4_4_;
      fStack_230 = auVar133._8_4_;
      fStack_22c = auVar133._12_4_;
      fVar85 = auVar180._0_4_ * (fVar69 + fVar69) * auVar192._0_4_ * param_7;
      fVar96 = auVar180._4_4_ * (fVar168 + fVar168) * auVar192._4_4_ * param_7;
      fVar98 = auVar180._8_4_ * (fVar201 + fVar201) * auVar192._8_4_ * param_7;
      fVar100 = auVar180._12_4_ * (fVar206 + fVar206) * auVar192._12_4_ * param_7;
      pfVar1 = (float *)(param_6 + uVar37);
      fVar69 = *pfVar1;
      fVar168 = pfVar1[1];
      fVar201 = pfVar1[2];
      fVar206 = pfVar1[3];
      auVar133._0_4_ =
           ((((fVar102 - local_238) - fVar132) +
            ((auVar222._0_4_ * fVar68 - auVar219._0_4_ * fVar97) - auVar164._0_4_ * fVar99)) *
            fVar141 +
           (((fVar189 - local_f8) - fVar200) +
           ((auVar181._0_4_ * fVar68 - auVar221._0_4_ * fVar97) - auVar142._0_4_ * fVar99)) *
           fVar114 + (((fVar131 - local_108) - fVar209) +
                     ((auVar170._0_4_ * fVar68 - auVar156._0_4_ * fVar97) - auVar210._0_4_ * fVar99)
                     ) * auVar218._0_4_) *
           (float)((uint)fVar85 ^ __xmm_80000000800000008000000080000000) - fVar69;
      auVar133._4_4_ =
           ((((fVar105 - fStack_234) - fVar136) +
            ((auVar222._4_4_ * fVar81 - auVar219._4_4_ * fVar226) - auVar164._4_4_ * fVar83)) *
            fVar145 +
           (((fVar195 - fStack_f4) - fVar205) +
           ((auVar181._4_4_ * fVar81 - auVar221._4_4_ * fVar226) - auVar142._4_4_ * fVar83)) *
           fVar123 + (((fVar135 - fStack_104) - fVar215) +
                     ((auVar170._4_4_ * fVar81 - auVar156._4_4_ * fVar226) - auVar210._4_4_ * fVar83
                     )) * auVar218._4_4_) * (float)((uint)fVar96 ^ _UNK_150651574) - fVar168;
      auVar133._8_4_ =
           ((((fVar186 - fStack_230) - fVar138) +
            ((auVar222._8_4_ * fVar82 - auVar219._8_4_ * fVar177) - auVar164._8_4_ * fVar185)) *
            fVar147 +
           (((fVar198 - fStack_f0) - fVar207) +
           ((auVar181._8_4_ * fVar82 - auVar221._8_4_ * fVar177) - auVar142._8_4_ * fVar185)) *
           fVar124 + (((fVar137 - fStack_100) - fVar216) +
                     ((auVar170._8_4_ * fVar82 - auVar156._8_4_ * fVar177) -
                     auVar210._8_4_ * fVar185)) * auVar218._8_4_) *
           (float)((uint)fVar98 ^ _UNK_150651578) - fVar201;
      auVar133._12_4_ =
           ((((fVar106 - fStack_22c) - fVar140) +
            ((auVar222._12_4_ * fVar84 - auVar219._12_4_ * fVar188) - auVar164._12_4_ * fVar196)) *
            fVar150 +
           (((fVar199 - fStack_ec) - fVar208) +
           ((auVar181._12_4_ * fVar84 - auVar221._12_4_ * fVar188) - auVar142._12_4_ * fVar196)) *
           fVar125 + (((fVar139 - fStack_fc) - fVar217) +
                     ((auVar170._12_4_ * fVar84 - auVar156._12_4_ * fVar188) -
                     auVar210._12_4_ * fVar196)) * auVar218._12_4_) *
           (float)((uint)fVar100 ^ _UNK_15065157c) - fVar206;
      auVar171._0_4_ = auVar155._0_4_ * fVar85 + (float)__xmm_3f8000003f8000003f8000003f800000;
      auVar171._4_4_ = auVar155._4_4_ * fVar96 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
      auVar171._8_4_ = auVar155._8_4_ * fVar98 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
      auVar171._12_4_ = auVar155._12_4_ * fVar100 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
      auVar210 = divps(auVar133,auVar171);
      fVar68 = auVar210._0_4_;
      fVar132 = auVar218._0_4_ * fVar68;
      fVar81 = auVar210._4_4_;
      fVar136 = auVar218._4_4_ * fVar81;
      fVar82 = auVar210._8_4_;
      fVar138 = auVar218._8_4_ * fVar82;
      fVar84 = auVar210._12_4_;
      fVar140 = auVar218._12_4_ * fVar84;
      auVar210._0_4_ = fVar169 * fVar132 + fVar131;
      auVar210._4_4_ = fVar174 * fVar136 + fVar135;
      auVar210._8_4_ = fVar175 * fVar138 + fVar137;
      auVar210._12_4_ = fVar176 * fVar140 + fVar139;
      fVar114 = fVar114 * fVar68;
      fVar123 = fVar123 * fVar81;
      fVar124 = fVar124 * fVar82;
      fVar125 = fVar125 * fVar84;
      *(float *)(param_1 + lVar49) = auVar210._0_4_;
      uVar19 = extractps(auVar210,1);
      *(undefined8 *)(param_1 + lVar58) = uVar19;
      auVar156._0_4_ = fVar169 * fVar114 + fVar189;
      auVar156._4_4_ = fVar174 * fVar123 + fVar195;
      auVar156._8_4_ = fVar175 * fVar124 + fVar198;
      auVar156._12_4_ = fVar176 * fVar125 + fVar199;
      uVar19 = extractps(auVar210,2);
      *(undefined8 *)(param_1 + lVar31) = uVar19;
      uVar19 = extractps(auVar210,3);
      *(undefined8 *)(param_1 + lVar59) = uVar19;
      fVar141 = fVar141 * fVar68;
      fVar145 = fVar145 * fVar81;
      fVar147 = fVar147 * fVar82;
      fVar150 = fVar150 * fVar84;
      *(float *)(param_1 + 4 + lVar49) = auVar156._0_4_;
      uVar19 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 4 + lVar58) = uVar19;
      uVar19 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar19;
      auVar181._0_4_ = fVar169 * fVar141 + fVar102;
      auVar181._4_4_ = fVar174 * fVar145 + fVar105;
      auVar181._8_4_ = fVar175 * fVar147 + fVar186;
      auVar181._12_4_ = fVar176 * fVar150 + fVar106;
      uVar19 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 4 + lVar59) = uVar19;
      *(float *)(param_1 + 8 + lVar49) = auVar181._0_4_;
      uVar19 = extractps(auVar181,1);
      *(undefined8 *)(param_1 + 8 + lVar58) = uVar19;
      uVar19 = extractps(auVar181,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar19;
      uVar19 = extractps(auVar181,3);
      *(undefined8 *)(param_1 + 8 + lVar59) = uVar19;
      *(uint *)(param_1 + 0xc + lVar49) = uVar15;
      *(uint *)(param_1 + 0xc + lVar58) = uVar16;
      *(uint *)(param_1 + 0xc + lVar31) = uVar17;
      *(uint *)(param_1 + 0xc + lVar59) = uVar18;
      auVar164._0_4_ = auVar211._0_4_ + fVar153 * fVar132 * fVar86;
      auVar164._4_4_ = auVar211._4_4_ + fVar160 * fVar136 * fVar225;
      auVar164._8_4_ = auVar211._8_4_ + fVar161 * fVar138 * fVar101;
      auVar164._12_4_ = auVar211._12_4_ + fVar162 * fVar140 * fVar187;
      *(float *)(param_1 + lVar30) = auVar164._0_4_;
      uVar19 = extractps(auVar164,1);
      *(undefined8 *)(param_1 + lVar35) = uVar19;
      auVar134._0_4_ = auVar202._0_4_ + fVar153 * fVar114 * fVar86;
      auVar134._4_4_ = auVar202._4_4_ + fVar160 * fVar123 * fVar225;
      auVar134._8_4_ = auVar202._8_4_ + fVar161 * fVar124 * fVar101;
      auVar134._12_4_ = auVar202._12_4_ + fVar162 * fVar125 * fVar187;
      uVar19 = extractps(auVar164,2);
      *(undefined8 *)(param_1 + lVar39) = uVar19;
      uVar19 = extractps(auVar164,3);
      *(undefined8 *)(param_1 + lVar44) = uVar19;
      *(float *)(param_1 + 4 + lVar30) = auVar134._0_4_;
      uVar19 = extractps(auVar134,1);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar19;
      uVar19 = extractps(auVar134,2);
      *(undefined8 *)(param_1 + 4 + lVar39) = uVar19;
      auVar219._0_4_ = auVar191._0_4_ + fVar153 * fVar141 * fVar86;
      auVar219._4_4_ = auVar191._4_4_ + fVar160 * fVar145 * fVar225;
      auVar219._8_4_ = auVar191._8_4_ + fVar161 * fVar147 * fVar101;
      auVar219._12_4_ = auVar191._12_4_ + fVar162 * fVar150 * fVar187;
      uVar19 = extractps(auVar134,3);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar19;
      *(float *)(param_1 + 8 + lVar30) = auVar219._0_4_;
      uVar19 = extractps(auVar219,1);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar19;
      uVar19 = extractps(auVar219,2);
      *(undefined8 *)(param_1 + 8 + lVar39) = uVar19;
      uVar19 = extractps(auVar219,3);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar19;
      *(uint *)(param_1 + 0xc + lVar30) = uVar48;
      *(uint *)(param_1 + 0xc + lVar35) = uVar65;
      *(uint *)(param_1 + 0xc + lVar39) = uVar67;
      *(uint *)(param_1 + 0xc + lVar44) = uVar6;
      auVar142._0_4_ = auVar126._0_4_ + fVar190 * fVar132 * fVar97;
      auVar142._4_4_ = auVar126._4_4_ + fVar130 * fVar136 * fVar226;
      auVar142._8_4_ = auVar126._8_4_ + fVar148 * fVar138 * fVar177;
      auVar142._12_4_ = auVar126._12_4_ + fVar151 * fVar140 * fVar188;
      *(float *)(param_1 + lVar57) = auVar142._0_4_;
      uVar19 = extractps(auVar142,1);
      *(undefined8 *)(param_1 + lVar40) = uVar19;
      auVar170._0_4_ = auVar115._0_4_ + fVar190 * fVar114 * fVar97;
      auVar170._4_4_ = auVar115._4_4_ + fVar130 * fVar123 * fVar226;
      auVar170._8_4_ = auVar115._8_4_ + fVar148 * fVar124 * fVar177;
      auVar170._12_4_ = auVar115._12_4_ + fVar151 * fVar125 * fVar188;
      uVar19 = extractps(auVar142,2);
      *(undefined8 *)(param_1 + lVar32) = uVar19;
      uVar19 = extractps(auVar142,3);
      *(undefined8 *)(param_1 + lVar50) = uVar19;
      *(float *)(param_1 + 4 + lVar57) = auVar170._0_4_;
      uVar19 = extractps(auVar170,1);
      *(undefined8 *)(param_1 + 4 + lVar40) = uVar19;
      uVar19 = extractps(auVar170,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar19;
      auVar221._0_4_ = auVar116._0_4_ + fVar190 * fVar141 * fVar97;
      auVar221._4_4_ = auVar116._4_4_ + fVar130 * fVar145 * fVar226;
      auVar221._8_4_ = auVar116._8_4_ + fVar148 * fVar147 * fVar177;
      auVar221._12_4_ = auVar116._12_4_ + fVar151 * fVar150 * fVar188;
      uVar19 = extractps(auVar170,3);
      *(undefined8 *)(param_1 + 4 + lVar50) = uVar19;
      *(float *)(param_1 + 8 + lVar57) = auVar221._0_4_;
      uVar19 = extractps(auVar221,1);
      *(undefined8 *)(param_1 + 8 + lVar40) = uVar19;
      uVar19 = extractps(auVar221,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar19;
      uVar19 = extractps(auVar221,3);
      *(undefined8 *)(param_1 + 8 + lVar50) = uVar19;
      *(uint *)(param_1 + 0xc + lVar57) = uVar7;
      *(uint *)(param_1 + 0xc + lVar40) = uVar8;
      *(uint *)(param_1 + 0xc + lVar32) = uVar9;
      *(uint *)(param_1 + 0xc + lVar50) = uVar10;
      auVar126._0_4_ = auVar127._0_4_ + fVar132 * fVar197 * fVar99;
      auVar126._4_4_ = auVar127._4_4_ + fVar136 * fVar146 * fVar83;
      auVar126._8_4_ = auVar127._8_4_ + fVar138 * fVar149 * fVar185;
      auVar126._12_4_ = auVar127._12_4_ + fVar140 * fVar152 * fVar196;
      *(float *)(param_1 + lVar53) = auVar126._0_4_;
      uVar19 = extractps(auVar126,1);
      *(undefined8 *)(param_1 + lVar52) = uVar19;
      uVar19 = extractps(auVar126,2);
      *(undefined8 *)(param_1 + lVar56) = uVar19;
      auVar116._0_4_ = auVar117._0_4_ + fVar114 * fVar197 * fVar99;
      auVar116._4_4_ = auVar117._4_4_ + fVar123 * fVar146 * fVar83;
      auVar116._8_4_ = auVar117._8_4_ + fVar124 * fVar149 * fVar185;
      auVar116._12_4_ = auVar117._12_4_ + fVar125 * fVar152 * fVar196;
      uVar19 = extractps(auVar126,3);
      *(undefined8 *)(param_1 + lVar45) = uVar19;
      *(float *)(param_1 + 4 + lVar53) = auVar116._0_4_;
      uVar19 = extractps(auVar116,1);
      *(undefined8 *)(param_1 + 4 + lVar52) = uVar19;
      unaff_XMM7._0_4_ = fVar141 * fVar197 * fVar99;
      unaff_XMM7._4_4_ = fVar145 * fVar146 * fVar83;
      unaff_XMM7._8_4_ = fVar147 * fVar149 * fVar185;
      unaff_XMM7._12_4_ = fVar150 * fVar152 * fVar196;
      uVar19 = extractps(auVar116,2);
      *(undefined8 *)(param_1 + 4 + lVar56) = uVar19;
      auVar115._0_4_ = auVar118._0_4_ + unaff_XMM7._0_4_;
      auVar115._4_4_ = auVar118._4_4_ + unaff_XMM7._4_4_;
      auVar115._8_4_ = auVar118._8_4_ + unaff_XMM7._8_4_;
      auVar115._12_4_ = auVar118._12_4_ + unaff_XMM7._12_4_;
      uVar19 = extractps(auVar116,3);
      *(undefined8 *)(param_1 + 4 + lVar45) = uVar19;
      *(float *)(param_1 + 8 + lVar53) = auVar115._0_4_;
      uVar19 = extractps(auVar115,1);
      *(undefined8 *)(param_1 + 8 + lVar52) = uVar19;
      uVar19 = extractps(auVar115,2);
      *(undefined8 *)(param_1 + 8 + lVar56) = uVar19;
      uVar19 = extractps(auVar115,3);
      *(undefined8 *)(param_1 + 8 + lVar45) = uVar19;
      pfVar1 = (float *)(param_6 + uVar37);
      *pfVar1 = fVar68 + fVar69;
      pfVar1[1] = fVar81 + fVar168;
      pfVar1[2] = fVar82 + fVar201;
      pfVar1[3] = fVar84 + fVar206;
      *(uint *)(param_1 + 0xc + lVar53) = uVar11;
      *(uint *)(param_1 + 0xc + lVar52) = uVar12;
      *(uint *)(param_1 + 0xc + lVar56) = uVar13;
      *(uint *)(param_1 + 0xc + lVar45) = uVar14;
      uVar34 = uVar34 + 0x10;
      uVar48 = (int)uVar33 + 4;
      uVar33 = (ulonglong)uVar48;
    } while ((int)uVar48 < (int)(uVar62 & 0xfffffffc));
  }
  uVar62 = (uint)uVar33;
  if ((int)param_17 <= (int)uVar62) {
    return;
  }
  auVar117._0_4_ =
       -(uint)((int)(uVar62 | (uint)__xmm_00000003000000020000000100000000) < (int)param_17);
  auVar117._4_4_ =
       -(uint)((int)(uVar62 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_17);
  auVar117._8_4_ = -(uint)((int)(uVar62 | _UNK_150631e08) < (int)param_17);
  auVar117._12_4_ = -(uint)((int)(uVar62 | _UNK_150631e0c) < (int)param_17);
  lVar31 = uVar33 * 0x10;
  pauVar41 = (undefined1 (*) [16])(param_3 + lVar31);
  uVar48 = movmskps(param_17,auVar117);
  bVar29 = (char)((char)uVar48 << 4) >> 4;
  if (uVar48 == 0xf) {
    auVar210 = *pauVar41;
    iVar112 = *(int *)pauVar41[1];
    auVar133 = pauVar41[2];
    iVar113 = *(int *)pauVar41[3];
    auVar158._0_8_ = auVar210._0_8_;
    auVar158._8_4_ = auVar210._4_4_;
    auVar158._12_4_ = *(undefined4 *)(pauVar41[1] + 4);
    iVar154 = auVar210._0_4_;
    auVar118._0_8_ = CONCAT44(*(undefined4 *)(pauVar41[1] + 8),auVar210._8_4_);
    auVar118._8_4_ = auVar210._12_4_;
    auVar118._12_4_ = *(undefined4 *)(pauVar41[1] + 0xc);
    auVar191._0_8_ = auVar133._0_8_;
    auVar191._8_4_ = auVar133._4_4_;
    auVar191._12_4_ = *(undefined4 *)(pauVar41[3] + 4);
    iVar103 = auVar133._0_4_;
    auVar211._0_8_ = CONCAT44(*(undefined4 *)(pauVar41[3] + 8),auVar133._8_4_);
    auVar211._8_4_ = auVar133._12_4_;
    auVar211._12_4_ = *(undefined4 *)(pauVar41[3] + 0xc);
    auVar157._8_8_ = auVar191._8_8_;
    auVar157._0_8_ = auVar158._8_8_;
    auVar202._8_8_ = auVar211._0_8_;
    auVar202._0_8_ = auVar118._0_8_;
    auVar127._8_8_ = auVar211._8_8_;
    auVar127._0_8_ = auVar118._8_8_;
    lVar30 = param_4 + lVar31;
    lVar56 = param_4 + 0x10 + lVar31;
    lVar32 = param_4 + 0x20 + lVar31;
    lVar31 = param_4 + 0x30 + lVar31;
    auVar20._4_8_ = unaff_XMM7._8_8_;
    auVar20._0_4_ = *(undefined4 *)(lVar30 + 4);
    auVar222._0_8_ = auVar20._0_8_ << 0x20;
    auVar222._8_4_ = *(undefined4 *)(lVar30 + 4);
    auVar222._12_4_ = *(undefined4 *)(lVar56 + 4);
    auVar220._0_8_ = CONCAT44(*(undefined4 *)(lVar56 + 8),*(undefined4 *)(lVar30 + 8));
    auVar220._8_4_ = *(undefined4 *)(lVar30 + 0xc);
    auVar220._12_4_ = *(undefined4 *)(lVar56 + 0xc);
    auVar21._4_8_ = unaff_XMM14._8_8_;
    auVar21._0_4_ = *(undefined4 *)(lVar32 + 4);
    auVar213._0_8_ = auVar21._0_8_ << 0x20;
    auVar213._8_4_ = *(undefined4 *)(lVar32 + 4);
    auVar213._12_4_ = *(undefined4 *)(lVar31 + 4);
    auVar212._8_8_ = auVar213._8_8_;
    auVar212._0_8_ = auVar222._8_8_;
    auVar165._0_8_ = CONCAT44(*(undefined4 *)(lVar31 + 8),*(undefined4 *)(lVar32 + 8));
    auVar165._8_4_ = *(undefined4 *)(lVar32 + 0xc);
    auVar165._12_4_ = *(undefined4 *)(lVar31 + 0xc);
    auVar143._8_8_ = auVar165._0_8_;
    auVar143._0_8_ = auVar220._0_8_;
    uStack_290 = auVar165._8_8_;
    local_298 = (undefined1  [8])auVar220._8_8_;
  }
  else {
    auVar87._0_4_ = ___xmm_00000030000000200000001000000000 & auVar117._0_4_;
    auVar87._4_4_ = _UNK_150b511c4 & auVar117._4_4_;
    auVar87._8_4_ = _UNK_150b511c8 & auVar117._8_4_;
    auVar87._12_4_ = _UNK_150b511cc & auVar117._12_4_;
    lVar30 = extractps(auVar87,1);
    lVar56 = extractps(auVar87,2);
    lVar32 = extractps(auVar87,3);
    iVar154 = *(int *)*pauVar41;
    iVar112 = *(int *)(*pauVar41 + lVar30);
    iVar103 = *(int *)(*pauVar41 + lVar56);
    iVar113 = *(int *)(*pauVar41 + lVar32);
    auVar210 = ___xmm_00000034000000240000001400000004 & auVar117;
    auVar157._4_4_ = *(undefined4 *)(*pauVar41 + auVar210._4_4_);
    auVar157._0_4_ = *(undefined4 *)(*pauVar41 + auVar210._0_4_);
    auVar157._12_4_ = *(undefined4 *)(*pauVar41 + auVar210._12_4_);
    auVar157._8_4_ = *(undefined4 *)(*pauVar41 + auVar210._8_4_);
    auVar133 = ___xmm_00000038000000280000001800000008 & auVar117;
    auVar202._4_4_ = *(undefined4 *)(*pauVar41 + auVar133._4_4_);
    auVar202._0_4_ = *(undefined4 *)(*pauVar41 + auVar133._0_4_);
    auVar202._12_4_ = *(undefined4 *)(*pauVar41 + auVar133._12_4_);
    auVar202._8_4_ = *(undefined4 *)(*pauVar41 + auVar133._8_4_);
    auVar219 = ___xmm_0000003c0000002c0000001c0000000c & auVar117;
    auVar127._4_4_ = *(undefined4 *)(*pauVar41 + auVar219._4_4_);
    auVar127._0_4_ = *(undefined4 *)(*pauVar41 + auVar219._0_4_);
    auVar127._12_4_ = *(undefined4 *)(*pauVar41 + auVar219._12_4_);
    auVar127._8_4_ = *(undefined4 *)(*pauVar41 + auVar219._8_4_);
    param_4 = param_4 + lVar31;
    auVar180 = insertps(ZEXT416(*(uint *)((ulonglong)auVar210._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar210._4_4_ + param_4),0x10);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)auVar210._8_4_ + param_4),0x20);
    auVar212 = insertps(auVar180,*(undefined4 *)((ulonglong)auVar210._12_4_ + param_4),0x30);
    auVar210 = insertps(ZEXT416(*(uint *)((ulonglong)auVar133._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar133._4_4_ + param_4),0x10);
    auVar210 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar133._8_4_ + param_4),0x20);
    auVar143 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar133._12_4_ + param_4),0x30);
    auVar210 = insertps(ZEXT416(*(uint *)((ulonglong)auVar219._0_4_ + param_4)),
                        *(undefined4 *)((ulonglong)auVar219._4_4_ + param_4),0x10);
    auVar210 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar219._8_4_ + param_4),0x20);
    _local_298 = insertps(auVar210,*(undefined4 *)((ulonglong)auVar219._12_4_ + param_4),0x30);
  }
  auVar203._0_4_ = iVar154 << 4;
  auVar203._4_4_ = iVar112 << 4;
  auVar203._8_4_ = iVar103 << 4;
  auVar203._12_4_ = iVar113 << 4;
  auVar133 = auVar117 & auVar203;
  lVar31 = param_1 + auVar133._0_4_;
  auVar180 = ___xmm_00000004000000040000000400000004 & auVar117;
  auVar219 = ___xmm_00000008000000080000000800000008 & auVar117;
  auVar193._0_4_ = auVar157._0_4_ << 4;
  auVar193._4_4_ = auVar157._4_4_ << 4;
  auVar193._8_4_ = auVar157._8_4_ << 4;
  auVar193._12_4_ = auVar157._12_4_ << 4;
  auVar221 = auVar117 & auVar193;
  lVar54 = (longlong)auVar221._0_4_;
  auVar166._0_4_ = auVar202._0_4_ << 4;
  auVar166._4_4_ = auVar202._4_4_ << 4;
  auVar166._8_4_ = auVar202._8_4_ << 4;
  auVar166._12_4_ = auVar202._12_4_ << 4;
  auVar115 = auVar117 & auVar166;
  lVar42 = (longlong)auVar115._0_4_;
  auVar182._0_4_ = auVar127._0_4_ << 4;
  auVar182._4_4_ = auVar127._4_4_ << 4;
  auVar182._8_4_ = auVar127._8_4_ << 4;
  auVar182._12_4_ = auVar127._12_4_ << 4;
  auVar116 = auVar117 & auVar182;
  auVar210 = ZEXT416(*(uint *)(param_1 + auVar133._0_4_));
  lVar30 = param_1 + auVar133._4_4_;
  lVar56 = param_1 + auVar133._8_4_;
  lVar32 = param_1 + auVar133._12_4_;
  uVar34 = (ulonglong)auVar180._4_4_;
  uVar37 = (ulonglong)auVar180._0_4_;
  uVar33 = (ulonglong)auVar219._0_4_;
  lVar35 = param_1 + lVar54;
  lVar58 = param_1 + auVar221._4_4_;
  lVar39 = param_1 + auVar221._8_4_;
  lVar40 = param_1 + auVar221._12_4_;
  lVar44 = param_1 + lVar42;
  lVar45 = param_1 + auVar115._4_4_;
  lVar49 = param_1 + auVar115._8_4_;
  lVar50 = param_1 + auVar115._12_4_;
  lVar52 = param_1 + auVar116._0_4_;
  lVar53 = param_1 + auVar116._4_4_;
  lVar57 = param_1 + auVar116._8_4_;
  lVar59 = param_1 + auVar116._12_4_;
  bVar60 = (bVar29 & 2) == 0;
  if (!bVar60) {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._4_4_),0x10);
  }
  uVar43 = (ulonglong)auVar219._4_4_;
  auVar118 = ZEXT416(*(uint *)(uVar37 + lVar31));
  if (!bVar60) {
    auVar118 = insertps(auVar118,*(undefined4 *)(uVar34 + lVar30),0x10);
  }
  _local_498 = ZEXT416(*(uint *)(uVar33 + lVar31));
  if (bVar60) {
    auVar156 = ZEXT416(*(uint *)(param_1 + lVar54));
  }
  else {
    _local_498 = insertps(_local_498,*(undefined4 *)(uVar43 + lVar30),0x10);
    auVar156 = insertps(ZEXT416(*(uint *)(param_1 + lVar54)),
                        *(undefined4 *)(param_1 + auVar221._4_4_),0x10);
  }
  _local_388 = ZEXT416(*(uint *)(uVar37 + lVar35));
  if (bVar60) {
    _local_338 = ZEXT416(*(uint *)(uVar33 + lVar35));
    if (!bVar60) goto LAB_1408fc266;
LAB_1408fbf99:
    auVar126 = ZEXT416(*(uint *)(param_1 + lVar42));
    if (!bVar60) goto LAB_1408fc28f;
LAB_1408fbfad:
    uVar65 = *(uint *)(uVar37 + lVar44);
  }
  else {
    _local_388 = insertps(_local_388,*(undefined4 *)(uVar34 + lVar58),0x10);
    _local_338 = ZEXT416(*(uint *)(uVar33 + lVar35));
    if (bVar60) goto LAB_1408fbf99;
LAB_1408fc266:
    _local_338 = insertps(_local_338,*(undefined4 *)(uVar43 + lVar58),0x10);
    auVar126 = ZEXT416(*(uint *)(param_1 + lVar42));
    if (bVar60) goto LAB_1408fbfad;
LAB_1408fc28f:
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._4_4_),0x10);
    uVar65 = *(uint *)(uVar37 + lVar44);
  }
  _local_3e8 = ZEXT416(uVar65);
  if (!bVar60) {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)(uVar34 + lVar45),0x10);
  }
  _local_3d8 = ZEXT416(*(uint *)(uVar33 + lVar44));
  if (!bVar60) {
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)(uVar43 + lVar45),0x10);
  }
  auVar134 = ZEXT416(*(uint *)(param_1 + auVar116._0_4_));
  uVar65 = auVar180._8_4_;
  uVar6 = auVar180._12_4_;
  uVar67 = auVar219._8_4_;
  uVar7 = auVar219._12_4_;
  if (bVar60) {
    auVar219 = ZEXT416(*(uint *)(uVar37 + lVar52));
    if (!bVar60) goto LAB_1408fc2ec;
LAB_1408fc043:
    uVar8 = *(uint *)(uVar33 + lVar52);
  }
  else {
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._4_4_),0x10);
    auVar219 = ZEXT416(*(uint *)(uVar37 + lVar52));
    if (bVar60) goto LAB_1408fc043;
LAB_1408fc2ec:
    auVar219 = insertps(auVar219,*(undefined4 *)(uVar34 + lVar53),0x10);
    uVar8 = *(uint *)(uVar33 + lVar52);
  }
  auVar180 = ZEXT416(uVar8);
  if (!bVar60) {
    auVar180 = insertps(auVar180,*(undefined4 *)(uVar43 + lVar53),0x10);
  }
  if ((bVar29 & 4) != 0) {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._8_4_),0x20);
    auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar65 + lVar56),0x20);
    _local_498 = insertps(_local_498,*(undefined4 *)((ulonglong)uVar67 + lVar56),0x20);
    auVar156 = insertps(auVar156,*(undefined4 *)(param_1 + auVar221._8_4_),0x20);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar65 + lVar39),0x20);
    _local_338 = insertps(_local_338,*(undefined4 *)((ulonglong)uVar67 + lVar39),0x20);
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._8_4_),0x20);
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar65 + lVar49),0x20);
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)((ulonglong)uVar67 + lVar49),0x20);
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._8_4_),0x20);
    auVar219 = insertps(auVar219,*(undefined4 *)((ulonglong)uVar65 + lVar57),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)((ulonglong)uVar67 + lVar57),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + auVar133._12_4_),0x30);
    auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar6 + lVar32),0x30);
    _local_498 = insertps(_local_498,*(undefined4 *)((ulonglong)uVar7 + lVar32),0x30);
    auVar156 = insertps(auVar156,*(undefined4 *)(param_1 + auVar221._12_4_),0x30);
    _local_388 = insertps(_local_388,*(undefined4 *)((ulonglong)uVar6 + lVar40),0x30);
    _local_338 = insertps(_local_338,*(undefined4 *)((ulonglong)uVar7 + lVar40),0x30);
    auVar126 = insertps(auVar126,*(undefined4 *)(param_1 + auVar115._12_4_),0x30);
  }
  uVar22 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar117._0_4_);
  if ((char)bVar29 < '\0') {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar6 + lVar50),0x30);
  }
  local_308 = (ulonglong)uVar65;
  auVar133 = ___xmm_0000000c0000000c0000000c0000000c & auVar117;
  uVar55 = (ulonglong)uVar7;
  uVar46 = (ulonglong)uVar67;
  uVar36 = (ulonglong)uVar6;
  bVar60 = (char)bVar29 < '\0';
  uVar51 = (ulonglong)auVar133._4_4_;
  if (bVar60) {
    _local_3d8 = insertps(_local_3d8,*(undefined4 *)(uVar55 + lVar50),0x30);
  }
  uVar47 = (ulonglong)auVar133._8_4_;
  if (bVar60) {
    auVar134 = insertps(auVar134,*(undefined4 *)(param_1 + auVar116._12_4_),0x30);
  }
  uVar27 = (ulonglong)auVar133._12_4_;
  auVar133 = insertps(ZEXT416(*(uint *)(uVar22 + lVar35)),*(undefined4 *)(uVar51 + lVar58),0x10);
  auVar221 = insertps(ZEXT416(*(uint *)(uVar22 + lVar44)),*(undefined4 *)(uVar51 + lVar45),0x10);
  auVar116 = insertps(ZEXT416(*(uint *)(uVar22 + lVar52)),*(undefined4 *)(uVar51 + lVar53),0x10);
  auVar115 = insertps(ZEXT416(*(uint *)(uVar22 + lVar31)),*(undefined4 *)(uVar51 + lVar30),0x10);
  if (bVar60) {
    auVar219 = insertps(auVar219,*(undefined4 *)(uVar36 + lVar59),0x30);
  }
  auVar133 = insertps(auVar133,*(undefined4 *)(uVar47 + lVar39),0x20);
  auVar221 = insertps(auVar221,*(undefined4 *)(uVar47 + lVar49),0x20);
  auVar116 = insertps(auVar116,*(undefined4 *)(uVar47 + lVar57),0x20);
  auVar115 = insertps(auVar115,*(undefined4 *)(uVar47 + lVar56),0x20);
  if (bVar60) {
    auVar180 = insertps(auVar180,*(undefined4 *)(uVar55 + lVar59),0x30);
  }
  auVar163 = insertps(auVar133,*(undefined4 *)(uVar27 + lVar40),0x30);
  auVar221 = insertps(auVar221,*(undefined4 *)(uVar27 + lVar50),0x30);
  auVar164 = insertps(auVar116,*(undefined4 *)(uVar27 + lVar59),0x30);
  auVar115 = insertps(auVar115,*(undefined4 *)(uVar27 + lVar32),0x30);
  auVar144._4_4_ = iVar112 * 3;
  auVar144._0_4_ = iVar154 * 3;
  auVar144._8_4_ = iVar103 * 3;
  auVar144._12_4_ = iVar113 * 3;
  auVar144 = auVar144 & auVar117;
  lVar31 = param_2 + (longlong)auVar144._0_4_ * 4;
  lVar30 = param_2 + (longlong)auVar144._4_4_ * 4;
  auVar133 = insertps(ZEXT416(*(uint *)(uVar37 + lVar31)),*(undefined4 *)(uVar34 + lVar30),0x10);
  auVar142 = insertps(ZEXT416(*(uint *)(uVar33 + lVar31)),*(undefined4 *)(uVar43 + lVar30),0x10);
  auVar108._4_4_ = auVar157._4_4_ * 3;
  auVar108._0_4_ = auVar157._0_4_ * 3;
  auVar108._8_4_ = auVar157._8_4_ * 3;
  auVar108._12_4_ = auVar157._12_4_ * 3;
  auVar108 = auVar108 & auVar117;
  lVar31 = param_2 + (longlong)auVar108._0_4_ * 4;
  auVar119._4_4_ = auVar202._4_4_ * 3;
  auVar119._0_4_ = auVar202._0_4_ * 3;
  auVar119._8_4_ = auVar202._8_4_ * 3;
  auVar119._12_4_ = auVar202._12_4_ * 3;
  auVar119 = auVar119 & auVar117;
  lVar30 = param_2 + (longlong)auVar119._0_4_ * 4;
  auVar104._4_4_ = auVar127._4_4_ * 3;
  auVar104._0_4_ = auVar127._0_4_ * 3;
  auVar104._8_4_ = auVar127._8_4_ * 3;
  auVar104._12_4_ = auVar127._12_4_ * 3;
  auVar104 = auVar104 & auVar117;
  lVar56 = param_2 + (longlong)auVar104._0_4_ * 4;
  lVar32 = param_2 + (longlong)auVar108._4_4_ * 4;
  auVar117 = insertps(ZEXT416(*(uint *)(uVar37 + lVar31)),*(undefined4 *)(uVar34 + lVar32),0x10);
  auVar191 = insertps(ZEXT416(*(uint *)(uVar33 + lVar31)),*(undefined4 *)(uVar43 + lVar32),0x10);
  lVar31 = param_2 + (longlong)auVar119._4_4_ * 4;
  auVar171 = insertps(ZEXT416(*(uint *)(uVar37 + lVar30)),*(undefined4 *)(uVar34 + lVar31),0x10);
  auVar170 = insertps(ZEXT416(*(uint *)(uVar33 + lVar30)),*(undefined4 *)(uVar43 + lVar31),0x10);
  lVar31 = param_2 + (longlong)auVar104._4_4_ * 4;
  auVar116 = insertps(ZEXT416(*(uint *)(uVar37 + lVar56)),*(undefined4 *)(uVar34 + lVar31),0x10);
  auVar192 = insertps(ZEXT416(*(uint *)(uVar33 + lVar56)),*(undefined4 *)(uVar43 + lVar31),0x10);
  lVar31 = param_2 + (longlong)auVar144._8_4_ * 4;
  auVar181 = insertps(auVar133,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar133 = insertps(auVar142,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar108._8_4_ * 4;
  auVar127 = insertps(auVar117,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar191 = insertps(auVar191,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar119._8_4_ * 4;
  auVar171 = insertps(auVar171,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar142 = insertps(auVar170,*(undefined4 *)(uVar46 + lVar31),0x20);
  lVar31 = param_2 + (longlong)auVar104._8_4_ * 4;
  auVar116 = insertps(auVar116,*(undefined4 *)(local_308 + lVar31),0x20);
  auVar192 = insertps(auVar192,*(undefined4 *)(uVar46 + lVar31),0x20);
  local_248 = auVar212._0_4_;
  fStack_244 = auVar212._4_4_;
  fStack_240 = auVar212._8_4_;
  fStack_23c = auVar212._12_4_;
  fVar177 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)local_248);
  fVar185 = (float)(_UNK_150651574 ^ (uint)fStack_244);
  fVar187 = (float)(_UNK_150651578 ^ (uint)fStack_240);
  fVar188 = (float)(_UNK_15065157c ^ (uint)fStack_23c);
  local_3f8 = auVar156._0_4_;
  fStack_3f4 = auVar156._4_4_;
  fStack_3f0 = auVar156._8_4_;
  fStack_3ec = auVar156._12_4_;
  fVar196 = auVar143._4_4_;
  fVar168 = auVar143._12_4_;
  local_378 = auVar126._0_4_;
  fStack_374 = auVar126._4_4_;
  fStack_370 = auVar126._8_4_;
  fStack_36c = auVar126._12_4_;
  fVar69 = auVar143._0_4_;
  fVar83 = auVar143._8_4_;
  auVar117 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar144._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar144._4_4_ * 4),0x10);
  auVar117 = insertps(auVar117,*(undefined4 *)(param_2 + (longlong)auVar144._8_4_ * 4),0x20);
  local_2c8 = auVar134._0_4_;
  fStack_2c4 = auVar134._4_4_;
  fStack_2c0 = auVar134._8_4_;
  fStack_2bc = auVar134._12_4_;
  auVar170 = insertps(auVar117,*(undefined4 *)(param_2 + (longlong)auVar144._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar144._12_4_ * 4;
  auVar181 = insertps(auVar181,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar117 = insertps(auVar133,*(undefined4 *)(uVar55 + lVar31),0x30);
  fVar82 = (local_3f8 * fVar177 - fVar69 * local_378) - (float)local_298._0_4_ * local_2c8;
  fVar84 = (fStack_3f4 * fVar185 - fVar196 * fStack_374) - (float)local_298._4_4_ * fStack_2c4;
  fVar225 = (fStack_3f0 * fVar187 - fVar83 * fStack_370) - (float)uStack_290 * fStack_2c0;
  fVar226 = (fStack_3ec * fVar188 - fVar168 * fStack_36c) - uStack_290._4_4_ * fStack_2bc;
  auVar133 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar108._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar108._4_4_ * 4),0x10);
  auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + (longlong)auVar108._8_4_ * 4),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)(param_2 + (longlong)auVar108._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar108._12_4_ * 4;
  auVar126 = insertps(auVar127,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar156 = insertps(auVar191,*(undefined4 *)(uVar55 + lVar31),0x30);
  local_2b8 = auVar219._0_4_;
  fStack_2b4 = auVar219._4_4_;
  fStack_2b0 = auVar219._8_4_;
  fStack_2ac = auVar219._12_4_;
  auVar71._0_4_ = (float)local_298._0_4_ * local_2b8;
  auVar71._4_4_ = (float)local_298._4_4_ * fStack_2b4;
  auVar71._8_4_ = (float)uStack_290 * fStack_2b0;
  auVar71._12_4_ = uStack_290._4_4_ * fStack_2ac;
  fVar86 = ((float)local_388._0_4_ * fVar177 - fVar69 * (float)local_3e8._0_4_) - auVar71._0_4_;
  fVar97 = ((float)local_388._4_4_ * fVar185 - fVar196 * (float)local_3e8._4_4_) - auVar71._4_4_;
  fVar99 = (fStack_380 * fVar187 - fVar83 * fStack_3e0) - auVar71._8_4_;
  fVar101 = (fStack_37c * fVar188 - fVar168 * fStack_3dc) - auVar71._12_4_;
  auVar219 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar119._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar119._4_4_ * 4),0x10);
  auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + (longlong)auVar119._8_4_ * 4),0x20);
  local_348 = auVar180._0_4_;
  fStack_344 = auVar180._4_4_;
  fStack_340 = auVar180._8_4_;
  fStack_33c = auVar180._12_4_;
  auVar219 = insertps(auVar219,*(undefined4 *)(param_2 + (longlong)auVar119._12_4_ * 4),0x30);
  lVar31 = param_2 + (longlong)auVar119._12_4_ * 4;
  auVar134 = insertps(auVar171,*(undefined4 *)(uVar36 + lVar31),0x30);
  auVar127 = insertps(auVar142,*(undefined4 *)(uVar55 + lVar31),0x30);
  fVar201 = ((float)local_338._0_4_ * fVar177 - fVar69 * (float)local_3d8._0_4_) -
            (float)local_298._0_4_ * local_348;
  fVar206 = ((float)local_338._4_4_ * fVar185 - fVar196 * (float)local_3d8._4_4_) -
            (float)local_298._4_4_ * fStack_344;
  fVar68 = (fStack_330 * fVar187 - fVar83 * fStack_3d0) - (float)uStack_290 * fStack_340;
  fVar81 = (fStack_32c * fVar188 - fVar168 * fStack_3cc) - uStack_290._4_4_ * fStack_33c;
  auVar180 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar104._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar104._4_4_ * 4),0x10);
  auVar180 = insertps(auVar180,*(undefined4 *)(param_2 + (longlong)auVar104._8_4_ * 4),0x20);
  auVar142 = insertps(auVar180,*(undefined4 *)(param_2 + (longlong)auVar104._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar104._12_4_ * 4;
  auVar180 = insertps(auVar116,*(undefined4 *)(uVar36 + param_2),0x30);
  auVar116 = insertps(auVar192,*(undefined4 *)(uVar55 + param_2),0x30);
  lVar31 = (longlong)(int)(uVar62 << 2);
  bVar38 = bVar29 & 9;
  pfVar1 = (float *)(param_6 + lVar31);
  local_358._0_4_ = *param_9;
  local_458 = auVar118._0_4_;
  fStack_454 = auVar118._4_4_;
  fStack_450 = auVar118._8_4_;
  fStack_44c = auVar118._12_4_;
  local_358._4_4_ = local_358._0_4_;
  fStack_350 = (float)local_358._0_4_;
  fStack_34c = (float)local_358._0_4_;
  if (bVar38 == 9) {
    local_3b8 = *(undefined1 (*) [16])(param_5 + lVar31);
    _local_2a8 = *(undefined1 (*) [16])(param_6 + lVar31);
    if ((param_8 & 1) == 0) {
      local_318._0_4_ = *param_12;
      if ((param_11 & 1) != 0) goto LAB_1408fcc45;
LAB_1408fcc7a:
      fStack_360 = *param_15;
      local_318._4_4_ = local_318._0_4_;
      fStack_310 = (float)local_318._0_4_;
      fStack_30c = (float)local_318._0_4_;
    }
    else {
      auVar71 = *(undefined1 (*) [16])(param_10 + lVar31);
LAB_1408fcc15:
      fVar132 = param_9[1];
      fVar136 = (float)local_358._0_4_ + fVar132 * auVar71._0_4_;
      local_358._4_4_ = (float)local_358._0_4_ + fVar132 * auVar71._4_4_;
      fStack_350 = (float)local_358._0_4_ + fVar132 * auVar71._8_4_;
      fStack_34c = (float)local_358._0_4_ + fVar132 * auVar71._12_4_;
      local_318._0_4_ = *param_12;
      local_358._0_4_ = fVar136;
      if ((param_11 & 1) == 0) goto LAB_1408fcc7a;
LAB_1408fcc45:
      if (bVar38 == 9) {
        auVar71 = *(undefined1 (*) [16])(param_13 + lVar31);
      }
      else {
LAB_1408fcd8c:
        puVar28 = (uint *)(param_13 + lVar31);
        if ((uVar48 & 1) != 0) {
          auVar71 = ZEXT416(*puVar28);
        }
        if ((uVar48 & 2) != 0) {
          auVar71 = insertps(auVar71,puVar28[1],0x10);
        }
        if ((uVar48 & 4) != 0) {
          auVar71 = insertps(auVar71,puVar28[2],0x20);
        }
        if ((uVar48 & 8) != 0) {
          auVar71 = insertps(auVar71,puVar28[3],0x30);
        }
      }
      fVar132 = param_12[1];
      local_318._4_4_ = (float)local_318._0_4_ + fVar132 * auVar71._4_4_;
      fStack_310 = (float)local_318._0_4_ + fVar132 * auVar71._8_4_;
      fStack_30c = (float)local_318._0_4_ + fVar132 * auVar71._12_4_;
      fStack_360 = *param_15;
      local_318._0_4_ = (float)local_318._0_4_ + fVar132 * auVar71._0_4_;
    }
    if ((param_14 & 1) == 0) {
      fStack_35c = fStack_360;
      local_368 = fStack_360;
      fStack_364 = fStack_360;
      goto LAB_1408fcf5f;
    }
    if (bVar38 != 9) goto LAB_1408fceed;
    auVar71 = *(undefined1 (*) [16])(param_16 + lVar31);
  }
  else {
    puVar28 = (uint *)(param_5 + lVar31);
    local_3b8 = auVar127;
    if ((uVar48 & 1) != 0) {
      local_3b8 = ZEXT416(*puVar28);
    }
    if ((uVar48 & 2) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      local_3b8 = insertps(local_3b8,puVar28[3],0x30);
    }
    _local_2a8 = auVar219;
    if ((uVar48 & 1) != 0) {
      _local_2a8 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar48 & 2) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      _local_2a8 = insertps(_local_2a8,pfVar1[3],0x30);
    }
    if ((param_8 & 1) != 0) {
      puVar28 = (uint *)(param_10 + lVar31);
      if ((uVar48 & 1) != 0) {
        auVar71 = ZEXT416(*puVar28);
      }
      if ((uVar48 & 2) != 0) {
        auVar71 = insertps(auVar71,puVar28[1],0x10);
      }
      if ((uVar48 & 4) != 0) {
        auVar71 = insertps(auVar71,puVar28[2],0x20);
      }
      if ((uVar48 & 8) != 0) {
        auVar71 = insertps(auVar71,puVar28[3],0x30);
      }
      goto LAB_1408fcc15;
    }
    local_318._0_4_ = *param_12;
    if ((param_11 & 1) != 0) goto LAB_1408fcd8c;
    fStack_360 = *param_15;
    local_318._4_4_ = local_318._0_4_;
    fStack_310 = (float)local_318._0_4_;
    fStack_30c = (float)local_318._0_4_;
    if ((param_14 & 1) == 0) {
      fStack_35c = fStack_360;
      local_368 = fStack_360;
      fStack_364 = fStack_360;
      goto LAB_1408fcf5f;
    }
LAB_1408fceed:
    puVar28 = (uint *)(param_16 + lVar31);
    if ((uVar48 & 1) != 0) {
      auVar71 = ZEXT416(*puVar28);
    }
    if ((uVar48 & 2) != 0) {
      auVar71 = insertps(auVar71,puVar28[1],0x10);
    }
    if ((uVar48 & 4) != 0) {
      auVar71 = insertps(auVar71,puVar28[2],0x20);
    }
    if ((uVar48 & 8) != 0) {
      auVar71 = insertps(auVar71,puVar28[3],0x30);
    }
  }
  fVar132 = param_15[1];
  local_368 = fStack_360 + fVar132 * auVar71._0_4_;
  fStack_364 = fStack_360 + fVar132 * auVar71._4_4_;
  fStack_35c = fStack_360 + fVar132 * auVar71._12_4_;
  fStack_360 = fStack_360 + fVar132 * auVar71._8_4_;
LAB_1408fcf5f:
  local_288 = auVar210._0_4_;
  fStack_284 = auVar210._4_4_;
  fStack_280 = auVar210._8_4_;
  fStack_27c = auVar210._12_4_;
  fVar138 = local_288 - fVar82;
  fVar140 = fStack_284 - fVar84;
  auVar167._0_8_ = CONCAT44(fVar140,fVar138);
  auVar167._8_4_ = fStack_280 - fVar225;
  auVar167._12_4_ = fStack_27c - fVar226;
  fVar190 = local_458 - fVar86;
  fVar197 = fStack_454 - fVar97;
  auVar194._0_8_ = CONCAT44(fVar197,fVar190);
  auVar194._8_4_ = fStack_450 - fVar99;
  auVar194._12_4_ = fStack_44c - fVar101;
  fVar132 = (float)local_498._0_4_ - fVar201;
  fVar136 = (float)local_498._4_4_ - fVar206;
  auVar128._0_8_ = CONCAT44(fVar136,fVar132);
  auVar128._8_4_ = fStack_490 - fVar68;
  auVar128._12_4_ = fStack_48c - fVar81;
  auVar72._0_4_ = fVar132 * fVar132 + fVar190 * fVar190 + fVar138 * fVar138;
  auVar72._4_4_ = fVar136 * fVar136 + fVar197 * fVar197 + fVar140 * fVar140;
  auVar72._8_4_ =
       auVar128._8_4_ * auVar128._8_4_ +
       auVar194._8_4_ * auVar194._8_4_ + auVar167._8_4_ * auVar167._8_4_;
  auVar72._12_4_ =
       auVar128._12_4_ * auVar128._12_4_ +
       auVar194._12_4_ * auVar194._12_4_ + auVar167._12_4_ * auVar167._12_4_;
  auVar171 = sqrtps(auVar104,auVar72);
  uVar62 = -(uint)(auVar72._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar48 = -(uint)(auVar72._4_4_ < _UNK_1506895e4);
  uVar65 = -(uint)(auVar72._8_4_ < _UNK_1506895e8);
  uVar67 = -(uint)(auVar72._12_4_ < _UNK_1506895ec);
  auVar73._4_4_ = uVar48;
  auVar73._0_4_ = uVar62;
  auVar73._8_4_ = uVar65;
  auVar73._12_4_ = uVar67;
  auVar88._8_4_ = auVar194._8_4_;
  auVar88._0_8_ = auVar194._0_8_;
  auVar88._12_4_ = auVar194._12_4_;
  auVar118 = divps(auVar88,auVar171);
  auVar109._8_4_ = auVar128._8_4_;
  auVar109._0_8_ = auVar128._0_8_;
  auVar109._12_4_ = auVar128._12_4_;
  auVar191 = divps(auVar109,auVar171);
  auVar159._8_4_ = auVar167._8_4_;
  auVar159._0_8_ = auVar167._0_8_;
  auVar159._12_4_ = auVar167._12_4_;
  auVar210 = divps(auVar159,auVar171);
  auVar210 = blendvps(auVar210,___xmm_3f8000003f8000003f8000003f800000,auVar73);
  auVar120._8_4_ = auVar167._8_4_;
  auVar120._0_8_ = auVar167._0_8_;
  auVar120._12_4_ = auVar167._12_4_;
  bVar60 = (bVar29 & 1) != 0;
  if (bVar60) {
    auVar120 = auVar210;
  }
  auVar183._0_8_ = CONCAT44(~uVar48 & auVar118._4_4_,~uVar62 & auVar118._0_4_);
  auVar183._8_4_ = ~uVar65 & auVar118._8_4_;
  auVar183._12_4_ = ~uVar67 & auVar118._12_4_;
  auVar172._0_8_ = CONCAT44(~uVar48 & auVar191._4_4_,~uVar62 & auVar191._0_4_);
  auVar172._8_4_ = ~uVar65 & auVar191._8_4_;
  auVar172._12_4_ = ~uVar67 & auVar191._12_4_;
  auVar110._8_4_ = auVar194._8_4_;
  auVar110._0_8_ = auVar194._0_8_;
  auVar110._12_4_ = auVar194._12_4_;
  auVar89._8_4_ = auVar128._8_4_;
  auVar89._0_8_ = auVar128._0_8_;
  auVar89._12_4_ = auVar128._12_4_;
  if (bVar60) {
    auVar110._8_4_ = auVar183._8_4_;
    auVar110._0_8_ = auVar183._0_8_;
    auVar110._12_4_ = auVar183._12_4_;
    auVar89._8_4_ = auVar172._8_4_;
    auVar89._0_8_ = auVar172._0_8_;
    auVar89._12_4_ = auVar172._12_4_;
    auVar118 = blendps(auVar167,auVar120,1);
  }
  else {
    auVar118 = blendps(auVar167,auVar120,1);
  }
  if ((bVar29 & 2) == 0) {
    auVar192 = blendps(auVar194,auVar110,1);
    auVar191 = blendps(auVar128,auVar89,1);
    auVar118 = blendps(auVar118,auVar118,2);
    auVar95 = auVar191;
    auVar111 = auVar192;
  }
  else {
    auVar192 = blendps(auVar194,auVar110,1);
    auVar111._8_4_ = auVar183._8_4_;
    auVar111._0_8_ = auVar183._0_8_;
    auVar111._12_4_ = auVar183._12_4_;
    auVar191 = blendps(auVar128,auVar89,1);
    auVar95._8_4_ = auVar172._8_4_;
    auVar95._0_8_ = auVar172._0_8_;
    auVar95._12_4_ = auVar172._12_4_;
    auVar118 = blendps(auVar118,auVar210,2);
  }
  if ((bVar29 & 4) == 0) {
    auVar202 = blendps(auVar192,auVar111,2);
    auVar129 = blendps(auVar191,auVar95,2);
    auVar191 = auVar129;
    auVar192 = auVar118;
    auVar224 = auVar202;
  }
  else {
    auVar202 = blendps(auVar192,auVar111,2);
    auVar224._8_4_ = auVar183._8_4_;
    auVar224._0_8_ = auVar183._0_8_;
    auVar224._12_4_ = auVar183._12_4_;
    auVar191 = blendps(auVar191,auVar95,2);
    auVar129._8_4_ = auVar172._8_4_;
    auVar129._0_8_ = auVar172._0_8_;
    auVar129._12_4_ = auVar172._12_4_;
    auVar192 = auVar210;
  }
  local_478 = auVar163._0_4_;
  fStack_474 = auVar163._4_4_;
  fStack_470 = auVar163._8_4_;
  fStack_46c = auVar163._12_4_;
  local_488 = auVar221._0_4_;
  fStack_484 = auVar221._4_4_;
  fStack_480 = auVar221._8_4_;
  fStack_47c = auVar221._12_4_;
  local_428 = auVar133._0_4_;
  fStack_424 = auVar133._4_4_;
  fStack_420 = auVar133._8_4_;
  fStack_41c = auVar133._12_4_;
  local_448 = auVar126._0_4_;
  fStack_444 = auVar126._4_4_;
  fStack_440 = auVar126._8_4_;
  fStack_43c = auVar126._12_4_;
  local_228 = auVar219._0_4_;
  fStack_224 = auVar219._4_4_;
  fStack_220 = auVar219._8_4_;
  fStack_21c = auVar219._12_4_;
  local_408 = auVar134._0_4_;
  fStack_404 = auVar134._4_4_;
  fStack_400 = auVar134._8_4_;
  fStack_3fc = auVar134._12_4_;
  local_418 = auVar127._0_4_;
  fStack_414 = auVar127._4_4_;
  fStack_410 = auVar127._8_4_;
  fStack_40c = auVar127._12_4_;
  auVar133 = blendps(auVar118,auVar192,4);
  bVar60 = -1 < (char)bVar29;
  if (bVar60) {
    auVar210 = auVar133;
  }
  local_2d8 = auVar164._0_4_;
  fStack_2d4 = auVar164._4_4_;
  fStack_2d0 = auVar164._8_4_;
  fStack_2cc = auVar164._12_4_;
  local_438 = auVar142._0_4_;
  fStack_434 = auVar142._4_4_;
  fStack_430 = auVar142._8_4_;
  fStack_42c = auVar142._12_4_;
  local_258 = auVar180._0_4_;
  fStack_254 = auVar180._4_4_;
  fStack_250 = auVar180._8_4_;
  fStack_24c = auVar180._12_4_;
  local_3a8 = auVar116._0_4_;
  fStack_3a4 = auVar116._4_4_;
  fStack_3a0 = auVar116._8_4_;
  fStack_39c = auVar116._12_4_;
  auVar219 = blendps(auVar202,auVar224,4);
  if (bVar60) {
    auVar183 = auVar219;
  }
  auVar180 = blendps(auVar191,auVar129,4);
  if (bVar60) {
    auVar172 = auVar180;
  }
  local_238 = auVar171._0_4_;
  fStack_234 = auVar171._4_4_;
  fStack_230 = auVar171._8_4_;
  fStack_22c = auVar171._12_4_;
  auVar116 = divps(___xmm_3f8000003f8000003f8000003f800000,local_3b8);
  auVar74._4_4_ = -(uint)(local_3b8._4_4_ < _UNK_1506895d4);
  auVar74._0_4_ = -(uint)(local_3b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar75._4_4_ = -(uint)(0.0 <= (float)(~uVar48 & (uint)fStack_234) - local_3b8._4_4_);
  auVar75._0_4_ = -(uint)(0.0 <= (float)(~uVar62 & (uint)local_238) - local_3b8._0_4_);
  auVar74._8_4_ = -(uint)(local_3b8._8_4_ < _UNK_1506895d8);
  auVar74._12_4_ = -(uint)(local_3b8._12_4_ < _UNK_1506895dc);
  auVar116 = blendvps(auVar116,___xmm_3f8000003f8000003f8000003f800000,auVar74);
  auVar75._8_4_ = -(uint)(0.0 <= (float)(~uVar65 & (uint)fStack_230) - local_3b8._8_4_);
  auVar75._12_4_ = -(uint)(0.0 <= (float)(~uVar67 & (uint)fStack_22c) - local_3b8._12_4_);
  auVar118 = blendvps(_local_318,_local_358,auVar75);
  auVar126 = blendps(auVar133,auVar210,8);
  auVar219 = blendps(auVar219,auVar183,8);
  auVar133 = blendps(auVar180,auVar172,8);
  local_468 = auVar115._0_4_;
  fStack_464 = auVar115._4_4_;
  fStack_460 = auVar115._8_4_;
  fStack_45c = auVar115._12_4_;
  auVar121._0_4_ =
       ((local_478 * fVar177 - fVar69 * local_488) - (float)local_298._0_4_ * local_2d8) + local_468
  ;
  auVar121._4_4_ =
       ((fStack_474 * fVar185 - fVar196 * fStack_484) - (float)local_298._4_4_ * fStack_2d4) +
       fStack_464;
  auVar121._8_4_ =
       ((fStack_470 * fVar187 - fVar83 * fStack_480) - (float)uStack_290 * fStack_2d0) + fStack_460;
  auVar121._12_4_ =
       ((fStack_46c * fVar188 - fVar168 * fStack_47c) - uStack_290._4_4_ * fStack_2cc) + fStack_45c;
  auVar210 = divps(auVar118,auVar121);
  auVar210 = sqrtps(auVar75,auVar210);
  fVar132 = param_7 * auVar210._0_4_ * (local_368 + local_368) * auVar116._0_4_;
  fVar136 = param_7 * auVar210._4_4_ * (fStack_364 + fStack_364) * auVar116._4_4_;
  fVar138 = param_7 * auVar210._8_4_ * (fStack_360 + fStack_360) * auVar116._8_4_;
  param_7 = param_7 * auVar210._12_4_ * (fStack_35c + fStack_35c) * auVar116._12_4_;
  local_268 = auVar170._0_4_;
  fStack_264 = auVar170._4_4_;
  fStack_260 = auVar170._8_4_;
  fStack_25c = auVar170._12_4_;
  local_398 = auVar181._0_4_;
  fStack_394 = auVar181._4_4_;
  fStack_390 = auVar181._8_4_;
  fStack_38c = auVar181._12_4_;
  local_208 = auVar117._0_4_;
  fStack_204 = auVar117._4_4_;
  fStack_200 = auVar117._8_4_;
  fStack_1fc = auVar117._12_4_;
  fVar140 = auVar133._0_4_;
  fVar190 = auVar133._4_4_;
  fVar197 = auVar133._8_4_;
  fVar130 = auVar133._12_4_;
  auVar122._0_4_ = auVar121._0_4_ * fVar132 + (float)__xmm_3f8000003f8000003f8000003f800000;
  auVar122._4_4_ = auVar121._4_4_ * fVar136 + __xmm_3f8000003f8000003f8000003f800000._4_4_;
  auVar122._8_4_ = auVar121._8_4_ * fVar138 + __xmm_3f8000003f8000003f8000003f800000._8_4_;
  auVar122._12_4_ = auVar121._12_4_ * param_7 + __xmm_3f8000003f8000003f8000003f800000._12_4_;
  auVar76._0_4_ =
       (((((float)local_498._0_4_ - local_208) - fVar201) +
        ((auVar156._0_4_ * fVar177 - local_418 * fVar69) - local_3a8 * (float)local_298._0_4_)) *
        fVar140 +
       (((local_458 - local_398) - fVar86) +
       ((local_448 * fVar177 - local_408 * fVar69) - local_258 * (float)local_298._0_4_)) *
       auVar219._0_4_ +
       (((local_288 - local_268) - fVar82) +
       ((local_428 * fVar177 - local_228 * fVar69) - local_438 * (float)local_298._0_4_)) *
       auVar126._0_4_) * (float)((uint)fVar132 ^ __xmm_80000000800000008000000080000000) -
       (float)local_2a8._0_4_;
  auVar76._4_4_ =
       (((((float)local_498._4_4_ - fStack_204) - fVar206) +
        ((auVar156._4_4_ * fVar185 - fStack_414 * fVar196) - fStack_3a4 * (float)local_298._4_4_)) *
        fVar190 +
       (((fStack_454 - fStack_394) - fVar97) +
       ((fStack_444 * fVar185 - fStack_404 * fVar196) - fStack_254 * (float)local_298._4_4_)) *
       auVar219._4_4_ +
       (((fStack_284 - fStack_264) - fVar84) +
       ((fStack_424 * fVar185 - fStack_224 * fVar196) - fStack_434 * (float)local_298._4_4_)) *
       auVar126._4_4_) * (float)((uint)fVar136 ^ _UNK_150651574) - (float)local_2a8._4_4_;
  auVar76._8_4_ =
       ((((fStack_490 - fStack_200) - fVar68) +
        ((auVar156._8_4_ * fVar187 - fStack_410 * fVar83) - fStack_3a0 * (float)uStack_290)) *
        fVar197 +
       (((fStack_450 - fStack_390) - fVar99) +
       ((fStack_440 * fVar187 - fStack_400 * fVar83) - fStack_250 * (float)uStack_290)) *
       auVar219._8_4_ +
       (((fStack_280 - fStack_260) - fVar225) +
       ((fStack_420 * fVar187 - fStack_220 * fVar83) - fStack_430 * (float)uStack_290)) *
       auVar126._8_4_) * (float)((uint)fVar138 ^ _UNK_150651578) - fStack_2a0;
  auVar76._12_4_ =
       ((((fStack_48c - fStack_1fc) - fVar81) +
        ((auVar156._12_4_ * fVar188 - fStack_40c * fVar168) - fStack_39c * uStack_290._4_4_)) *
        fVar130 +
       (((fStack_44c - fStack_38c) - fVar101) +
       ((fStack_43c * fVar188 - fStack_3fc * fVar168) - fStack_24c * uStack_290._4_4_)) *
       auVar219._12_4_ +
       (((fStack_27c - fStack_25c) - fVar226) +
       ((fStack_41c * fVar188 - fStack_21c * fVar168) - fStack_42c * uStack_290._4_4_)) *
       auVar126._12_4_) * (float)((uint)param_7 ^ _UNK_15065157c) - fStack_29c;
  auVar210 = divps(auVar76,auVar122);
  fVar86 = auVar210._0_4_;
  auVar90._0_4_ = (float)local_2a8._0_4_ + fVar86;
  fVar97 = auVar210._4_4_;
  auVar90._4_4_ = (float)local_2a8._4_4_ + fVar97;
  fVar99 = auVar210._8_4_;
  auVar90._8_4_ = fStack_2a0 + fVar99;
  fVar101 = auVar210._12_4_;
  auVar90._12_4_ = fStack_29c + fVar101;
  if ((bVar29 & 1) != 0) {
    *pfVar1 = auVar90._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar90,1);
    *(undefined8 *)(pfVar1 + 1) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar90,2);
    *(undefined8 *)(pfVar1 + 2) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar90,3);
    *(undefined8 *)(pfVar1 + 3) = uVar19;
  }
  fVar185 = auVar126._4_4_ * fVar97;
  fVar177 = auVar126._0_4_ * fVar86;
  fVar188 = auVar126._12_4_ * fVar101;
  fVar187 = auVar126._8_4_ * fVar99;
  local_288 = local_288 + local_468 * fVar177;
  auVar223._0_8_ = CONCAT44(fStack_284 + fStack_464 * fVar185,local_288);
  auVar223._8_4_ = fStack_280 + fStack_460 * fVar187;
  auVar223._12_4_ = fStack_27c + fStack_45c * fVar188;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar203._0_4_) = local_288;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar223,1);
    *(undefined8 *)(param_1 + auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar223,2);
    *(undefined8 *)(param_1 + auVar203._8_4_) = uVar19;
  }
  fVar206 = auVar219._4_4_ * fVar97;
  fVar201 = auVar219._0_4_ * fVar86;
  fVar81 = auVar219._12_4_ * fVar101;
  fVar68 = auVar219._8_4_ * fVar99;
  auVar91._8_4_ = auVar223._8_4_;
  auVar91._0_8_ = auVar223._0_8_;
  auVar91._12_4_ = auVar223._12_4_;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar91,3);
    *(undefined8 *)(param_1 + auVar203._12_4_) = uVar19;
    auVar92._0_4_ = local_458 + local_468 * fVar201;
    auVar92._4_4_ = fStack_454 + fStack_464 * fVar206;
    auVar92._8_4_ = fStack_450 + fStack_460 * fVar68;
    auVar92._12_4_ = fStack_44c + fStack_45c * fVar81;
  }
  else {
    auVar92._0_4_ = local_458 + local_468 * fVar201;
    auVar92._4_4_ = fStack_454 + fStack_464 * fVar206;
    auVar92._8_4_ = fStack_450 + fStack_460 * fVar68;
    auVar92._12_4_ = fStack_44c + fStack_45c * fVar81;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar203._0_4_) = auVar92._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar92,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar92,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar92,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar203._12_4_) = uVar19;
  }
  fVar84 = fVar190 * fVar97;
  fVar82 = fVar140 * fVar86;
  fVar226 = fVar130 * fVar101;
  fVar225 = fVar197 * fVar99;
  fVar86 = (float)local_498._0_4_ + local_468 * fVar140 * fVar86;
  auVar77._4_4_ = (float)local_498._4_4_ + fStack_464 * fVar190 * fVar97;
  auVar77._0_4_ = fVar86;
  auVar77._8_4_ = fStack_490 + fStack_460 * fVar197 * fVar99;
  auVar77._12_4_ = fStack_48c + fStack_45c * fVar130 * fVar101;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)auVar203._0_4_) = fVar86;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar203._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar203._0_4_) = local_468;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar115,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar115,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar115,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar203._12_4_) = uVar19;
  }
  auVar204._0_4_ = local_3f8 + local_478 * fVar177 * local_248;
  auVar204._4_4_ = fStack_3f4 + fStack_474 * fVar185 * fStack_244;
  auVar204._8_4_ = fStack_3f0 + fStack_470 * fVar187 * fStack_240;
  auVar204._12_4_ = fStack_3ec + fStack_46c * fVar188 * fStack_23c;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar193._0_4_) = auVar204._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar204,1);
    *(undefined8 *)(param_1 + auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar204,2);
    *(undefined8 *)(param_1 + auVar193._8_4_) = uVar19;
  }
  uVar26 = fStack_46c * fVar81 * fStack_23c;
  uVar25 = fStack_470 * fVar68 * fStack_240;
  uVar24 = fStack_474 * fVar206 * fStack_244;
  uVar23 = local_478 * fVar201 * local_248;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar204,3);
    *(undefined8 *)(param_1 + auVar193._12_4_) = uVar19;
    auVar93._0_4_ = (float)local_388._0_4_ + (float)uVar23;
    auVar93._4_4_ = (float)local_388._4_4_ + (float)uVar24;
    auVar93._8_4_ = fStack_380 + (float)uVar25;
    auVar93._12_4_ = fStack_37c + (float)uVar26;
  }
  else {
    auVar93._0_4_ = (float)local_388._0_4_ + (float)uVar23;
    auVar93._4_4_ = (float)local_388._4_4_ + (float)uVar24;
    auVar93._8_4_ = fStack_380 + (float)uVar25;
    auVar93._12_4_ = fStack_37c + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar193._0_4_) = auVar93._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar93,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar93,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._8_4_) = uVar19;
  }
  uVar26 = fStack_23c * fStack_46c * fVar226;
  uVar25 = fStack_240 * fStack_470 * fVar225;
  uVar24 = fStack_244 * fStack_474 * fVar84;
  uVar23 = local_248 * local_478 * fVar82;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar93,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar193._12_4_) = uVar19;
    auVar78._0_4_ = (float)local_338._0_4_ + (float)uVar23;
    auVar78._4_4_ = (float)local_338._4_4_ + (float)uVar24;
    auVar78._8_4_ = fStack_330 + (float)uVar25;
    auVar78._12_4_ = fStack_32c + (float)uVar26;
  }
  else {
    auVar78._0_4_ = (float)local_338._0_4_ + (float)uVar23;
    auVar78._4_4_ = (float)local_338._4_4_ + (float)uVar24;
    auVar78._8_4_ = fStack_330 + (float)uVar25;
    auVar78._12_4_ = fStack_32c + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar193._0_4_) = auVar78._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar78,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar78,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar78,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar193._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar193._0_4_) = local_478;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar163,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar163,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar163,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar193._12_4_) = uVar19;
  }
  auVar184._0_4_ = local_378 + local_488 * fVar177 * fVar69;
  auVar184._4_4_ = fStack_374 + fStack_484 * fVar185 * fVar196;
  auVar184._8_4_ = fStack_370 + fStack_480 * fVar187 * fVar83;
  auVar184._12_4_ = fStack_36c + fStack_47c * fVar188 * fVar168;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar166._0_4_) = auVar184._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + auVar166._8_4_) = uVar19;
  }
  uVar26 = fStack_47c * fVar81 * fVar168;
  uVar25 = fStack_480 * fVar68 * fVar83;
  uVar24 = fStack_484 * fVar206 * fVar196;
  uVar23 = local_488 * fVar201 * fVar69;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + auVar166._12_4_) = uVar19;
    auVar173._0_4_ = (float)local_3e8._0_4_ + (float)uVar23;
    auVar173._4_4_ = (float)local_3e8._4_4_ + (float)uVar24;
    auVar173._8_4_ = fStack_3e0 + (float)uVar25;
    auVar173._12_4_ = fStack_3dc + (float)uVar26;
  }
  else {
    auVar173._0_4_ = (float)local_3e8._0_4_ + (float)uVar23;
    auVar173._4_4_ = (float)local_3e8._4_4_ + (float)uVar24;
    auVar173._8_4_ = fStack_3e0 + (float)uVar25;
    auVar173._12_4_ = fStack_3dc + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar166._0_4_) = auVar173._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar173,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar173,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._8_4_) = uVar19;
  }
  uVar26 = fVar168 * fStack_47c * fVar226;
  uVar25 = fVar83 * fStack_480 * fVar225;
  uVar24 = fVar196 * fStack_484 * fVar84;
  uVar23 = fVar69 * local_488 * fVar82;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar173,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar166._12_4_) = uVar19;
    auVar79._0_4_ = (float)local_3d8._0_4_ + (float)uVar23;
    auVar79._4_4_ = (float)local_3d8._4_4_ + (float)uVar24;
    auVar79._8_4_ = fStack_3d0 + (float)uVar25;
    auVar79._12_4_ = fStack_3cc + (float)uVar26;
  }
  else {
    auVar79._0_4_ = (float)local_3d8._0_4_ + (float)uVar23;
    auVar79._4_4_ = (float)local_3d8._4_4_ + (float)uVar24;
    auVar79._8_4_ = fStack_3d0 + (float)uVar25;
    auVar79._12_4_ = fStack_3cc + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar166._0_4_) = auVar79._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar79,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar79,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar79,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar166._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar166._0_4_) = local_488;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar221,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar221,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar221,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar166._12_4_) = uVar19;
  }
  auVar214._0_4_ = local_2c8 + fVar177 * local_2d8 * (float)local_298._0_4_;
  auVar214._4_4_ = fStack_2c4 + fVar185 * fStack_2d4 * (float)local_298._4_4_;
  auVar214._8_4_ = fStack_2c0 + fVar187 * fStack_2d0 * (float)uStack_290;
  auVar214._12_4_ = fStack_2bc + fVar188 * fStack_2cc * uStack_290._4_4_;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar182._0_4_) = auVar214._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar214,1);
    *(undefined8 *)(param_1 + auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar214,2);
    *(undefined8 *)(param_1 + auVar182._8_4_) = uVar19;
  }
  uVar26 = fVar81 * fStack_2cc * uStack_290._4_4_;
  uVar25 = fVar68 * fStack_2d0 * (float)uStack_290;
  uVar24 = fVar206 * fStack_2d4 * (float)local_298._4_4_;
  uVar23 = fVar201 * local_2d8 * (float)local_298._0_4_;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar214,3);
    *(undefined8 *)(param_1 + auVar182._12_4_) = uVar19;
    auVar94._0_4_ = local_2b8 + (float)uVar23;
    auVar94._4_4_ = fStack_2b4 + (float)uVar24;
    auVar94._8_4_ = fStack_2b0 + (float)uVar25;
    auVar94._12_4_ = fStack_2ac + (float)uVar26;
  }
  else {
    auVar94._0_4_ = local_2b8 + (float)uVar23;
    auVar94._4_4_ = fStack_2b4 + (float)uVar24;
    auVar94._8_4_ = fStack_2b0 + (float)uVar25;
    auVar94._12_4_ = fStack_2ac + (float)uVar26;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar182._0_4_) = auVar94._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._8_4_) = uVar19;
  }
  uVar24 = uStack_290._4_4_ * fVar226 * fStack_2cc;
  uVar23 = (float)uStack_290 * fVar225 * fStack_2d0;
  local_298._4_4_ = (float)local_298._4_4_ * fVar84 * fStack_2d4;
  local_298._0_4_ = (float)local_298._0_4_ * fVar82 * local_2d8;
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar182._12_4_) = uVar19;
    auVar80._0_4_ = local_348 + (float)local_298._0_4_;
    auVar80._4_4_ = fStack_344 + (float)local_298._4_4_;
    auVar80._8_4_ = fStack_340 + (float)uVar23;
    auVar80._12_4_ = fStack_33c + (float)uVar24;
  }
  else {
    auVar80._0_4_ = local_348 + (float)local_298._0_4_;
    auVar80._4_4_ = fStack_344 + (float)local_298._4_4_;
    auVar80._8_4_ = fStack_340 + (float)uVar23;
    auVar80._12_4_ = fStack_33c + (float)uVar24;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar182._0_4_) = auVar80._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar80,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar80,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar80,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar182._12_4_) = uVar19;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar182._0_4_) = local_2d8;
  }
  if ((bVar29 & 2) != 0) {
    uVar19 = extractps(auVar164,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._4_4_) = uVar19;
  }
  if ((bVar29 & 4) != 0) {
    uVar19 = extractps(auVar164,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._8_4_) = uVar19;
  }
  if ((char)bVar29 < '\0') {
    uVar19 = extractps(auVar164,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar182._12_4_) = uVar19;
  }
  return;
}

// ApplyXPBDEmbeddedFaceSpringConstraints_sse4 @ 1408fde90

/* WARNING: Removing unreachable block (ram,0x0001408ffa57) */
/* WARNING: Removing unreachable block (ram,0x0001408ffa9c) */
/* WARNING: Removing unreachable block (ram,0x0001408ff99f) */
/* WARNING: Removing unreachable block (ram,0x0001408ffa17) */
/* WARNING: Removing unreachable block (ram,0x000140901095) */
/* WARNING: Removing unreachable block (ram,0x00014090033b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedFaceSpringConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,
               longlong param_5,float param_6,byte param_7,float *param_8,longlong param_9,
               byte param_10,float *param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  byte bVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  uint *puVar38;
  uint uVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  longlong lVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  bool bVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  float fVar91;
  float fVar92;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar93;
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
  float fVar94;
  float fVar95;
  float fVar102;
  float fVar103;
  undefined1 auVar96 [16];
  float fVar104;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar105;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
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
  float fVar127;
  float fVar131;
  float fVar132;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar133;
  float fVar134;
  float fVar141;
  float fVar142;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar143;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar144;
  float fVar145;
  float fVar152;
  float fVar153;
  undefined1 auVar146 [16];
  float fVar154;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar155;
  float fVar161;
  float fVar162;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar170;
  float fVar180;
  float fVar181;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  float fVar182;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  float fVar183;
  float fVar184;
  float fVar187;
  float fVar188;
  float fVar189;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  float fVar190;
  float fVar195;
  float fVar196;
  float fVar197;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  float fVar198;
  float fVar204;
  float fVar206;
  undefined1 auVar199 [16];
  float fVar208;
  undefined1 auVar200 [16];
  float fVar205;
  float fVar207;
  float fVar209;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar210;
  float fVar211;
  float fVar218;
  float fVar219;
  undefined1 auVar212 [16];
  float fVar220;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  float fVar221;
  float fVar222;
  float fVar226;
  float fVar228;
  float fVar229;
  float fVar231;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  float fVar227;
  float fVar230;
  float fVar232;
  float fVar233;
  undefined1 auVar225 [16];
  float fVar234;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined1 local_558 [8];
  float fStack_550;
  float fStack_54c;
  undefined1 local_548 [16];
  undefined1 local_538 [8];
  float fStack_530;
  float fStack_52c;
  undefined1 local_528 [8];
  float fStack_520;
  float fStack_51c;
  undefined1 local_518 [8];
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [8];
  float fStack_500;
  float fStack_4fc;
  undefined1 local_4e8 [8];
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  undefined1 local_4c8 [8];
  float fStack_4c0;
  float fStack_4bc;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  undefined1 local_478 [8];
  float fStack_470;
  float fStack_46c;
  undefined1 local_468 [8];
  float fStack_460;
  float fStack_45c;
  undefined1 local_458 [8];
  float fStack_450;
  float fStack_44c;
  undefined1 local_448 [8];
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [8];
  float fStack_430;
  float fStack_42c;
  undefined1 local_428 [8];
  float fStack_420;
  float fStack_41c;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_398 [32];
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  undefined1 auVar130 [16];
  undefined1 auVar140 [16];
  
  uVar70 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar70 = param_13;
  }
  if ((int)(uVar70 & 0xfffffffc) < 1) {
    uVar40 = 0;
    uVar55 = param_4;
  }
  else {
    lVar50 = 0x14;
    uVar40 = 0;
    uVar55 = 0;
    do {
      uVar36 = uVar55 & 0xffffffff;
      fStack_46c = *param_8;
      local_478._0_4_ = fStack_46c;
      local_478._4_4_ = fStack_46c;
      fStack_470 = fStack_46c;
      if ((param_7 & 1) != 0) {
        pfVar1 = (float *)(param_9 + uVar36);
        fVar163 = param_8[1];
        local_478._0_4_ = fStack_46c + fVar163 * *pfVar1;
        local_478._4_4_ = fStack_46c + fVar163 * pfVar1[1];
        fStack_470 = fStack_46c + fVar163 * pfVar1[2];
        fStack_46c = fStack_46c + fVar163 * pfVar1[3];
      }
      auVar129 = *(undefined1 (*) [16])(param_2 + -0x50 + lVar50 * 4);
      auVar199 = *(undefined1 (*) [16])(param_2 + -0x40 + lVar50 * 4);
      auVar173 = *(undefined1 (*) [16])(param_2 + -0x30 + lVar50 * 4);
      auVar156 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar50 * 4);
      auVar108 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar50 * 4);
      auVar119 = *(undefined1 (*) [16])(param_2 + lVar50 * 4);
      auVar146 = pblendw(auVar173,auVar129,0xf0);
      auVar77 = pblendw(auVar129,auVar199,0xf0);
      auVar78 = pblendw(auVar119,auVar156,0xf0);
      auVar97 = pblendw(auVar156,auVar108,0xf0);
      auVar107 = pblendw(auVar199,auVar173,0xf0);
      auVar128 = pblendw(auVar108,auVar119,0xf0);
      auVar129 = *(undefined1 (*) [16])(param_3 + -0x50 + lVar50 * 4);
      auVar199 = *(undefined1 (*) [16])(param_3 + -0x40 + lVar50 * 4);
      auVar173 = *(undefined1 (*) [16])(param_3 + -0x30 + lVar50 * 4);
      auVar156 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar50 * 4);
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar50 * 4);
      auVar119 = *(undefined1 (*) [16])(param_3 + lVar50 * 4);
      auVar79 = blendps(auVar199,auVar129,3);
      auVar172 = blendps(auVar108,auVar156,3);
      auVar224 = blendps(auVar129,auVar173,3);
      auVar156 = blendps(auVar156,auVar119,3);
      auVar199 = blendps(auVar173,auVar199,3);
      auVar129 = blendps(auVar119,auVar108,3);
      fVar91 = auVar79._4_4_;
      fVar92 = auVar79._8_4_;
      fVar93 = auVar79._12_4_;
      fVar131 = auVar172._0_4_;
      fVar134 = auVar172._4_4_;
      fVar141 = auVar172._8_4_;
      fVar95 = auVar172._12_4_;
      fVar144 = auVar79._0_4_;
      fVar226 = auVar224._4_4_;
      fVar229 = auVar224._8_4_;
      fVar232 = auVar224._12_4_;
      fVar155 = auVar156._0_4_;
      fVar161 = auVar156._4_4_;
      fVar231 = auVar156._8_4_;
      fVar234 = auVar156._12_4_;
      fVar184 = auVar224._0_4_;
      fVar204 = auVar199._4_4_;
      fVar206 = auVar199._8_4_;
      fVar208 = auVar199._12_4_;
      fVar170 = auVar129._0_4_;
      fVar180 = auVar129._4_4_;
      fVar132 = auVar129._8_4_;
      fVar133 = auVar129._12_4_;
      fVar210 = auVar199._0_4_;
      lVar51 = (longlong)(auVar77._0_4_ << 4);
      lVar56 = (longlong)(auVar77._8_4_ * 0x10);
      lVar41 = (longlong)(auVar97._0_4_ << 4);
      lVar34 = (longlong)(auVar97._8_4_ << 4);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + lVar51)),*(undefined4 *)(param_1 + lVar56),
                          0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + lVar41),0x20);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar51)),
                          *(undefined4 *)(param_1 + 4 + lVar56),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar41),0x20);
      auVar166 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar51)),
                          *(undefined4 *)(param_1 + 8 + lVar56),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar41),0x20);
      lVar52 = (longlong)(auVar77._4_4_ << 4);
      lVar57 = (longlong)(auVar77._12_4_ * 0x10);
      lVar42 = (longlong)(auVar97._4_4_ << 4);
      lVar35 = (longlong)(auVar97._12_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar52)),*(undefined4 *)(param_1 + lVar57),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar42),0x20);
      auVar174 = insertps(auVar173,*(undefined4 *)(param_1 + lVar35),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar52)),
                          *(undefined4 *)(param_1 + 4 + lVar57),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar42),0x20);
      _local_4e8 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar35),0x30);
      auVar97 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar52)),
                          *(undefined4 *)(param_1 + 8 + lVar57),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar42),0x20);
      auVar79 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar35),0x30);
      lVar48 = (longlong)(auVar146._8_4_ << 4);
      lVar63 = (longlong)(auVar146._0_4_ * 0x10);
      lVar58 = (longlong)(auVar78._8_4_ << 4);
      lVar43 = (longlong)(auVar78._0_4_ << 4);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + lVar48)),*(undefined4 *)(param_1 + lVar63),
                          0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar58),0x20);
      auVar224 = insertps(auVar199,*(undefined4 *)(param_1 + lVar43),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                          *(undefined4 *)(param_1 + 4 + lVar63),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar58),0x20);
      auVar156 = insertps(auVar199,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                          *(undefined4 *)(param_1 + 8 + lVar63),0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar58),0x20);
      auVar172 = insertps(auVar199,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      lVar49 = (longlong)(auVar146._12_4_ << 4);
      lVar53 = (longlong)(auVar146._4_4_ * 0x10);
      lVar59 = (longlong)(auVar78._12_4_ << 4);
      auVar199 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar53),
                          0x10);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar59),0x20);
      lVar64 = (longlong)(auVar78._4_4_ << 4);
      auVar199 = insertps(auVar199,*(undefined4 *)(param_1 + lVar64),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar53),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar59),0x20);
      auVar78 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar64),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                          *(undefined4 *)(param_1 + 8 + lVar53),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar59),0x20);
      auVar200 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar64),0x30);
      lVar45 = (longlong)(auVar107._0_4_ << 4);
      lVar61 = (longlong)(auVar107._8_4_ * 0x10);
      lVar66 = (longlong)(auVar128._0_4_ << 4);
      lVar44 = (longlong)(auVar128._8_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar61),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar66),0x20);
      auVar108 = insertps(auVar173,*(undefined4 *)(param_1 + lVar44),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar61),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar66),0x20);
      fVar221 = (float)((uint)fVar232 ^ __xmm_80000000800000008000000080000000);
      fVar227 = (float)((uint)fVar226 ^ _UNK_150651574);
      fVar230 = (float)((uint)fVar234 ^ _UNK_150651578);
      fVar233 = (float)((uint)fVar161 ^ _UNK_15065157c);
      auVar119 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar44),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar61),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar66),0x20);
      auVar146 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar44),0x30);
      lVar47 = (longlong)(auVar107._4_4_ << 4);
      lVar65 = (longlong)(auVar107._12_4_ * 0x10);
      lVar46 = (longlong)(auVar128._4_4_ << 4);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + lVar47)),*(undefined4 *)(param_1 + lVar65),
                          0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + lVar46),0x20);
      lVar62 = (longlong)(auVar128._12_4_ << 4);
      auVar107 = insertps(auVar173,*(undefined4 *)(param_1 + lVar62),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar47)),
                          *(undefined4 *)(param_1 + 4 + lVar65),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar46),0x20);
      auVar77 = insertps(auVar173,*(undefined4 *)(param_1 + 4 + lVar62),0x30);
      auVar173 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar47)),
                          *(undefined4 *)(param_1 + 8 + lVar65),0x10);
      auVar173 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar46),0x20);
      auVar128 = insertps(auVar173,*(undefined4 *)(param_1 + 8 + lVar62),0x30);
      uVar39 = *(uint *)(param_1 + 0xc + lVar51);
      uVar73 = *(uint *)(param_1 + 0xc + lVar56);
      auVar173 = insertps(ZEXT416(uVar39),ZEXT416(uVar73),0x10);
      uVar75 = *(uint *)(param_1 + 0xc + lVar41);
      auVar173 = insertps(auVar173,ZEXT416(uVar75),0x20);
      uVar4 = *(uint *)(param_1 + 0xc + lVar34);
      auVar212 = insertps(auVar173,ZEXT416(uVar4),0x30);
      uVar5 = *(uint *)(param_1 + 0xc + lVar52);
      uVar6 = *(uint *)(param_1 + 0xc + lVar57);
      auVar173 = insertps(ZEXT416(uVar5),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar42);
      auVar173 = insertps(auVar173,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar35);
      auVar173 = insertps(auVar173,ZEXT416(uVar8),0x30);
      fVar211 = auVar212._0_4_;
      fVar218 = auVar212._4_4_;
      fVar219 = auVar212._8_4_;
      fVar220 = auVar212._12_4_;
      fVar198 = auVar173._0_4_;
      fVar205 = auVar173._4_4_;
      fVar207 = auVar173._8_4_;
      fVar209 = auVar173._12_4_;
      uVar9 = *(uint *)(param_1 + 0xc + lVar48);
      uVar10 = *(uint *)(param_1 + 0xc + lVar63);
      auVar173 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar58);
      auVar173 = insertps(auVar173,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar43);
      auVar173 = insertps(auVar173,ZEXT416(uVar12),0x30);
      fVar190 = auVar173._0_4_;
      fVar195 = auVar173._4_4_;
      fVar196 = auVar173._8_4_;
      fVar197 = auVar173._12_4_;
      uVar13 = *(uint *)(param_1 + 0xc + lVar49);
      uVar14 = *(uint *)(param_1 + 0xc + lVar53);
      auVar173 = insertps(ZEXT416(uVar13),ZEXT416(uVar14),0x10);
      uVar15 = *(uint *)(param_1 + 0xc + lVar59);
      auVar173 = insertps(auVar173,ZEXT416(uVar15),0x20);
      uVar16 = *(uint *)(param_1 + 0xc + lVar64);
      auVar212 = insertps(auVar173,ZEXT416(uVar16),0x30);
      uVar17 = *(uint *)(param_1 + 0xc + lVar45);
      uVar18 = *(uint *)(param_1 + 0xc + lVar61);
      auVar173 = insertps(ZEXT416(uVar17),ZEXT416(uVar18),0x10);
      uVar19 = *(uint *)(param_1 + 0xc + lVar66);
      auVar173 = insertps(auVar173,ZEXT416(uVar19),0x20);
      uVar20 = *(uint *)(param_1 + 0xc + lVar44);
      auVar173 = insertps(auVar173,ZEXT416(uVar20),0x30);
      fVar222 = auVar212._0_4_;
      fVar228 = auVar212._4_4_;
      fVar162 = auVar212._8_4_;
      fVar127 = auVar212._12_4_;
      fVar145 = auVar173._0_4_;
      fVar152 = auVar173._4_4_;
      fVar153 = auVar173._8_4_;
      fVar154 = auVar173._12_4_;
      uVar21 = *(uint *)(param_1 + 0xc + lVar47);
      uVar22 = *(uint *)(param_1 + 0xc + lVar65);
      auVar173 = insertps(ZEXT416(uVar21),ZEXT416(uVar22),0x10);
      uVar23 = *(uint *)(param_1 + 0xc + lVar46);
      auVar173 = insertps(auVar173,ZEXT416(uVar23),0x20);
      uVar24 = *(uint *)(param_1 + 0xc + lVar62);
      auVar173 = insertps(auVar173,ZEXT416(uVar24),0x30);
      fVar181 = auVar173._0_4_;
      fVar182 = auVar173._4_4_;
      fVar142 = auVar173._8_4_;
      fVar143 = auVar173._12_4_;
      fVar163 = *param_11;
      auVar173._4_4_ = fVar163;
      auVar173._0_4_ = fVar163;
      auVar173._8_4_ = fVar163;
      auVar173._12_4_ = fVar163;
      if ((param_10 & 1) != 0) {
        pfVar1 = (float *)(param_12 + uVar36);
        fVar3 = param_11[1];
        auVar173._0_4_ = fVar163 + fVar3 * *pfVar1;
        auVar173._4_4_ = fVar163 + fVar3 * pfVar1[1];
        auVar173._8_4_ = fVar163 + fVar3 * pfVar1[2];
        auVar173._12_4_ = fVar163 + fVar3 * pfVar1[3];
      }
      auVar164._0_4_ =
           (fVar229 * auVar224._0_4_ + fVar91 * auVar174._0_4_ + fVar144 * auVar129._0_4_) -
           ((auVar199._0_4_ * fVar221 - fVar210 * auVar108._0_4_) - fVar204 * auVar107._0_4_);
      auVar164._4_4_ =
           (fVar184 * auVar224._4_4_ + fVar93 * auVar174._4_4_ + fVar92 * auVar129._4_4_) -
           ((auVar199._4_4_ * fVar227 - fVar206 * auVar108._4_4_) - fVar208 * auVar107._4_4_);
      auVar164._8_4_ =
           (fVar231 * auVar224._8_4_ + fVar134 * auVar174._8_4_ + fVar131 * auVar129._8_4_) -
           ((auVar199._8_4_ * fVar230 - fVar170 * auVar108._8_4_) - fVar180 * auVar107._8_4_);
      auVar164._12_4_ =
           (fVar155 * auVar224._12_4_ + fVar95 * auVar174._12_4_ + fVar141 * auVar129._12_4_) -
           ((auVar199._12_4_ * fVar233 - fVar132 * auVar108._12_4_) - fVar133 * auVar107._12_4_);
      auVar135._0_4_ =
           (fVar229 * auVar156._0_4_ + fVar91 * local_4e8._0_4_ + fVar144 * auVar166._0_4_) -
           ((auVar78._0_4_ * fVar221 - fVar210 * auVar119._0_4_) - fVar204 * auVar77._0_4_);
      auVar135._4_4_ =
           (fVar184 * auVar156._4_4_ + fVar93 * local_4e8._4_4_ + fVar92 * auVar166._4_4_) -
           ((auVar78._4_4_ * fVar227 - fVar206 * auVar119._4_4_) - fVar208 * auVar77._4_4_);
      auVar135._8_4_ =
           (fVar231 * auVar156._8_4_ + fVar134 * local_4e8._8_4_ + fVar131 * auVar166._8_4_) -
           ((auVar78._8_4_ * fVar230 - fVar170 * auVar119._8_4_) - fVar180 * auVar77._8_4_);
      auVar135._12_4_ =
           (fVar155 * auVar156._12_4_ + fVar95 * local_4e8._12_4_ + fVar141 * auVar166._12_4_) -
           ((auVar78._12_4_ * fVar233 - fVar132 * auVar119._12_4_) - fVar133 * auVar77._12_4_);
      auVar171._0_4_ =
           (fVar229 * auVar172._0_4_ + fVar91 * auVar79._0_4_ + fVar144 * auVar97._0_4_) -
           ((auVar200._0_4_ * fVar221 - fVar210 * auVar146._0_4_) - fVar204 * auVar128._0_4_);
      auVar171._4_4_ =
           (fVar184 * auVar172._4_4_ + fVar93 * auVar79._4_4_ + fVar92 * auVar97._4_4_) -
           ((auVar200._4_4_ * fVar227 - fVar206 * auVar146._4_4_) - fVar208 * auVar128._4_4_);
      auVar171._8_4_ =
           (fVar231 * auVar172._8_4_ + fVar134 * auVar79._8_4_ + fVar131 * auVar97._8_4_) -
           ((auVar200._8_4_ * fVar230 - fVar170 * auVar146._8_4_) - fVar180 * auVar128._8_4_);
      auVar171._12_4_ =
           (fVar155 * auVar172._12_4_ + fVar95 * auVar79._12_4_ + fVar141 * auVar97._12_4_) -
           ((auVar200._12_4_ * fVar233 - fVar132 * auVar146._12_4_) - fVar133 * auVar128._12_4_);
      auVar117._0_4_ = auVar135._0_4_ * auVar135._0_4_ + auVar164._0_4_ * auVar164._0_4_;
      auVar117._4_4_ = auVar135._4_4_ * auVar135._4_4_ + auVar164._4_4_ * auVar164._4_4_;
      auVar117._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar164._8_4_ * auVar164._8_4_;
      auVar117._12_4_ = auVar135._12_4_ * auVar135._12_4_ + auVar164._12_4_ * auVar164._12_4_;
      auVar96._0_4_ = auVar171._0_4_ * auVar171._0_4_ + auVar117._0_4_;
      auVar96._4_4_ = auVar171._4_4_ * auVar171._4_4_ + auVar117._4_4_;
      auVar96._8_4_ = auVar171._8_4_ * auVar171._8_4_ + auVar117._8_4_;
      auVar96._12_4_ = auVar171._12_4_ * auVar171._12_4_ + auVar117._12_4_;
      auVar117 = sqrtps(auVar117,auVar96);
      uVar69 = -(uint)(auVar96._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar71 = -(uint)(auVar96._4_4_ < _UNK_1506895e4);
      uVar72 = -(uint)(auVar96._8_4_ < _UNK_1506895e8);
      uVar74 = -(uint)(auVar96._12_4_ < _UNK_1506895ec);
      auVar76._4_4_ = uVar71;
      auVar76._0_4_ = uVar69;
      auVar165 = divps(auVar164,auVar117);
      auVar76._8_4_ = uVar72;
      auVar76._12_4_ = uVar74;
      auVar212._4_4_ = _UNK_15076b1f4;
      auVar212._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar212._8_4_ = _UNK_15076b1f8;
      auVar212._12_4_ = _UNK_15076b1fc;
      auVar212 = blendvps(auVar165,auVar212,auVar76);
      pfVar1 = (float *)(param_4 + uVar36);
      fVar94 = (float)(~uVar69 & auVar117._0_4_) - *pfVar1;
      fVar102 = (float)(~uVar71 & auVar117._4_4_) - pfVar1[1];
      fVar103 = (float)(~uVar72 & auVar117._8_4_) - pfVar1[2];
      fVar104 = (float)(~uVar74 & auVar117._12_4_) - pfVar1[3];
      auVar165._4_4_ = -(uint)(0.0 <= fVar102);
      auVar165._0_4_ = -(uint)(0.0 <= fVar94);
      auVar165._8_4_ = -(uint)(0.0 <= fVar103);
      auVar165._12_4_ = -(uint)(0.0 <= fVar104);
      auVar173 = blendvps(auVar173,_local_478,auVar165);
      fVar105 = auVar173._0_4_ * param_6 * param_6;
      fVar114 = auVar173._4_4_ * param_6 * param_6;
      fVar115 = auVar173._8_4_ * param_6 * param_6;
      fVar116 = auVar173._12_4_ * param_6 * param_6;
      pfVar1 = (float *)(param_5 + uVar36);
      fVar163 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar26 = pfVar1[2];
      fVar27 = pfVar1[3];
      auVar106._0_4_ =
           (float)((uint)fVar105 ^ __xmm_80000000800000008000000080000000) * fVar94 - fVar163;
      auVar106._4_4_ = (float)((uint)fVar114 ^ _UNK_150651574) * fVar102 - fVar3;
      auVar106._8_4_ = (float)((uint)fVar115 ^ _UNK_150651578) * fVar103 - fVar26;
      auVar106._12_4_ = (float)((uint)fVar116 ^ _UNK_15065157c) * fVar104 - fVar27;
      auVar122._0_4_ =
           (fVar229 * fVar190 + fVar91 * fVar198 + fVar144 * fVar211 +
           ((fVar221 * fVar222 - fVar210 * fVar145) - fVar204 * fVar181)) * fVar105 +
           ___xmm_3f8000003f8000003f8000003f800000;
      auVar122._4_4_ =
           (fVar184 * fVar195 + fVar93 * fVar205 + fVar92 * fVar218 +
           ((fVar227 * fVar228 - fVar206 * fVar152) - fVar208 * fVar182)) * fVar114 + _UNK_15076b1f4
      ;
      auVar122._8_4_ =
           (fVar231 * fVar196 + fVar134 * fVar207 + fVar131 * fVar219 +
           ((fVar230 * fVar162 - fVar170 * fVar153) - fVar180 * fVar142)) * fVar115 + _UNK_15076b1f8
      ;
      auVar122._12_4_ =
           (fVar155 * fVar197 + fVar95 * fVar209 + fVar141 * fVar220 +
           ((fVar233 * fVar127 - fVar132 * fVar154) - fVar133 * fVar143)) * fVar116 + _UNK_15076b1fc
      ;
      auVar173 = divps(auVar106,auVar122);
      fVar221 = auVar173._0_4_;
      fVar105 = auVar212._0_4_ * fVar221;
      fVar227 = auVar173._4_4_;
      fVar114 = auVar212._4_4_ * fVar227;
      fVar230 = auVar173._8_4_;
      fVar115 = auVar212._8_4_ * fVar230;
      fVar233 = auVar173._12_4_;
      fVar116 = auVar212._12_4_ * fVar233;
      auVar223._0_4_ = auVar129._0_4_ + fVar211 * fVar105 * fVar144;
      auVar223._4_4_ = auVar129._4_4_ + fVar218 * fVar114 * fVar92;
      auVar223._8_4_ = auVar129._8_4_ + fVar219 * fVar115 * fVar131;
      auVar223._12_4_ = auVar129._12_4_ + fVar220 * fVar116 * fVar141;
      auVar129 = divps(auVar135,auVar117);
      *(float *)(param_1 + lVar51) = auVar223._0_4_;
      uVar25 = extractps(auVar223,1);
      *(undefined8 *)(param_1 + lVar56) = uVar25;
      auVar173 = divps(auVar171,auVar117);
      uVar25 = extractps(auVar223,2);
      *(undefined8 *)(param_1 + lVar41) = uVar25;
      uVar25 = extractps(auVar223,3);
      *(undefined8 *)(param_1 + lVar34) = uVar25;
      fVar94 = (float)(~uVar69 & auVar129._0_4_) * fVar221;
      fVar102 = (float)(~uVar71 & auVar129._4_4_) * fVar227;
      fVar103 = (float)(~uVar72 & auVar129._8_4_) * fVar230;
      fVar104 = (float)(~uVar74 & auVar129._12_4_) * fVar233;
      auVar118._0_4_ = auVar166._0_4_ + fVar211 * fVar94 * fVar144;
      auVar118._4_4_ = auVar166._4_4_ + fVar218 * fVar102 * fVar92;
      auVar118._8_4_ = auVar166._8_4_ + fVar219 * fVar103 * fVar131;
      auVar118._12_4_ = auVar166._12_4_ + fVar220 * fVar104 * fVar141;
      fVar183 = (float)(~uVar69 & auVar173._0_4_) * fVar221;
      fVar187 = (float)(~uVar71 & auVar173._4_4_) * fVar227;
      fVar188 = (float)(~uVar72 & auVar173._8_4_) * fVar230;
      fVar189 = (float)(~uVar74 & auVar173._12_4_) * fVar233;
      *(float *)(param_1 + 4 + lVar51) = auVar118._0_4_;
      uVar25 = extractps(auVar118,1);
      *(undefined8 *)(param_1 + 4 + lVar56) = uVar25;
      uVar25 = extractps(auVar118,2);
      *(undefined8 *)(param_1 + 4 + lVar41) = uVar25;
      auVar129._0_4_ = auVar97._0_4_ + fVar211 * fVar183 * fVar144;
      auVar129._4_4_ = auVar97._4_4_ + fVar218 * fVar187 * fVar92;
      auVar129._8_4_ = auVar97._8_4_ + fVar219 * fVar188 * fVar131;
      auVar129._12_4_ = auVar97._12_4_ + fVar220 * fVar189 * fVar141;
      uVar25 = extractps(auVar118,3);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar25;
      *(float *)(param_1 + 8 + lVar51) = auVar129._0_4_;
      uVar25 = extractps(auVar129,1);
      *(undefined8 *)(param_1 + 8 + lVar56) = uVar25;
      uVar25 = extractps(auVar129,2);
      *(undefined8 *)(param_1 + 8 + lVar41) = uVar25;
      uVar25 = extractps(auVar129,3);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar25;
      *(uint *)(param_1 + 0xc + lVar51) = uVar39;
      *(uint *)(param_1 + 0xc + lVar56) = uVar73;
      *(uint *)(param_1 + 0xc + lVar41) = uVar75;
      *(uint *)(param_1 + 0xc + lVar34) = uVar4;
      auVar136._0_4_ = auVar174._0_4_ + fVar198 * fVar105 * fVar91;
      auVar136._4_4_ = auVar174._4_4_ + fVar205 * fVar114 * fVar93;
      auVar136._8_4_ = auVar174._8_4_ + fVar207 * fVar115 * fVar134;
      auVar136._12_4_ = auVar174._12_4_ + fVar209 * fVar116 * fVar95;
      *(float *)(param_1 + lVar52) = auVar136._0_4_;
      uVar25 = extractps(auVar136,1);
      *(undefined8 *)(param_1 + lVar57) = uVar25;
      auVar166._0_4_ = local_4e8._0_4_ + fVar198 * fVar94 * fVar91;
      auVar166._4_4_ = local_4e8._4_4_ + fVar205 * fVar102 * fVar93;
      auVar166._8_4_ = local_4e8._8_4_ + fVar207 * fVar103 * fVar134;
      auVar166._12_4_ = local_4e8._12_4_ + fVar209 * fVar104 * fVar95;
      uVar25 = extractps(auVar136,2);
      *(undefined8 *)(param_1 + lVar42) = uVar25;
      uVar25 = extractps(auVar136,3);
      *(undefined8 *)(param_1 + lVar35) = uVar25;
      *(float *)(param_1 + 4 + lVar52) = auVar166._0_4_;
      uVar25 = extractps(auVar166,1);
      *(undefined8 *)(param_1 + 4 + lVar57) = uVar25;
      uVar25 = extractps(auVar166,2);
      *(undefined8 *)(param_1 + 4 + lVar42) = uVar25;
      auVar97._0_4_ = auVar79._0_4_ + fVar198 * fVar183 * fVar91;
      auVar97._4_4_ = auVar79._4_4_ + fVar205 * fVar187 * fVar93;
      auVar97._8_4_ = auVar79._8_4_ + fVar207 * fVar188 * fVar134;
      auVar97._12_4_ = auVar79._12_4_ + fVar209 * fVar189 * fVar95;
      uVar25 = extractps(auVar166,3);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar25;
      *(float *)(param_1 + 8 + lVar52) = auVar97._0_4_;
      uVar25 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + 8 + lVar57) = uVar25;
      uVar25 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + 8 + lVar42) = uVar25;
      uVar25 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar25;
      *(uint *)(param_1 + 0xc + lVar52) = uVar5;
      *(uint *)(param_1 + 0xc + lVar57) = uVar6;
      *(uint *)(param_1 + 0xc + lVar42) = uVar7;
      *(uint *)(param_1 + 0xc + lVar35) = uVar8;
      auVar174._0_4_ = auVar224._0_4_ + fVar190 * fVar105 * fVar229;
      auVar174._4_4_ = auVar224._4_4_ + fVar195 * fVar114 * fVar184;
      auVar174._8_4_ = auVar224._8_4_ + fVar196 * fVar115 * fVar231;
      auVar174._12_4_ = auVar224._12_4_ + fVar197 * fVar116 * fVar155;
      *(float *)(param_1 + lVar48) = auVar174._0_4_;
      uVar25 = extractps(auVar174,1);
      *(undefined8 *)(param_1 + lVar63) = uVar25;
      auVar79._0_4_ = auVar156._0_4_ + fVar190 * fVar94 * fVar229;
      auVar79._4_4_ = auVar156._4_4_ + fVar195 * fVar102 * fVar184;
      auVar79._8_4_ = auVar156._8_4_ + fVar196 * fVar103 * fVar231;
      auVar79._12_4_ = auVar156._12_4_ + fVar197 * fVar104 * fVar155;
      uVar25 = extractps(auVar174,2);
      *(undefined8 *)(param_1 + lVar58) = uVar25;
      uVar25 = extractps(auVar174,3);
      *(undefined8 *)(param_1 + lVar43) = uVar25;
      *(float *)(param_1 + 4 + lVar48) = auVar79._0_4_;
      uVar25 = extractps(auVar79,1);
      *(undefined8 *)(param_1 + 4 + lVar63) = uVar25;
      uVar25 = extractps(auVar79,2);
      *(undefined8 *)(param_1 + 4 + lVar58) = uVar25;
      auVar156._0_4_ = auVar172._0_4_ + fVar190 * fVar183 * fVar229;
      auVar156._4_4_ = auVar172._4_4_ + fVar195 * fVar187 * fVar184;
      auVar156._8_4_ = auVar172._8_4_ + fVar196 * fVar188 * fVar231;
      auVar156._12_4_ = auVar172._12_4_ + fVar197 * fVar189 * fVar155;
      uVar25 = extractps(auVar79,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar25;
      *(float *)(param_1 + 8 + lVar48) = auVar156._0_4_;
      uVar25 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 8 + lVar63) = uVar25;
      uVar25 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 8 + lVar58) = uVar25;
      uVar25 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar25;
      *(uint *)(param_1 + 0xc + lVar48) = uVar9;
      *(uint *)(param_1 + 0xc + lVar63) = uVar10;
      *(uint *)(param_1 + 0xc + lVar58) = uVar11;
      *(uint *)(param_1 + 0xc + lVar43) = uVar12;
      auVar137._0_4_ = auVar199._0_4_ + fVar222 * fVar105 * fVar232;
      auVar137._4_4_ = auVar199._4_4_ + fVar228 * fVar114 * fVar226;
      auVar137._8_4_ = auVar199._8_4_ + fVar162 * fVar115 * fVar234;
      auVar137._12_4_ = auVar199._12_4_ + fVar127 * fVar116 * fVar161;
      *(float *)(param_1 + lVar49) = auVar137._0_4_;
      uVar25 = extractps(auVar137,1);
      *(undefined8 *)(param_1 + lVar53) = uVar25;
      auVar172._0_4_ = auVar78._0_4_ + fVar222 * fVar94 * fVar232;
      auVar172._4_4_ = auVar78._4_4_ + fVar228 * fVar102 * fVar226;
      auVar172._8_4_ = auVar78._8_4_ + fVar162 * fVar103 * fVar234;
      auVar172._12_4_ = auVar78._12_4_ + fVar127 * fVar104 * fVar161;
      uVar25 = extractps(auVar137,2);
      *(undefined8 *)(param_1 + lVar59) = uVar25;
      uVar25 = extractps(auVar137,3);
      *(undefined8 *)(param_1 + lVar64) = uVar25;
      *(float *)(param_1 + 4 + lVar49) = auVar172._0_4_;
      uVar25 = extractps(auVar172,1);
      *(undefined8 *)(param_1 + 4 + lVar53) = uVar25;
      uVar25 = extractps(auVar172,2);
      *(undefined8 *)(param_1 + 4 + lVar59) = uVar25;
      auVar199._0_4_ = auVar200._0_4_ + fVar222 * fVar183 * fVar232;
      auVar199._4_4_ = auVar200._4_4_ + fVar228 * fVar187 * fVar226;
      auVar199._8_4_ = auVar200._8_4_ + fVar162 * fVar188 * fVar234;
      auVar199._12_4_ = auVar200._12_4_ + fVar127 * fVar189 * fVar161;
      uVar25 = extractps(auVar172,3);
      *(undefined8 *)(param_1 + 4 + lVar64) = uVar25;
      *(float *)(param_1 + 8 + lVar49) = auVar199._0_4_;
      uVar25 = extractps(auVar199,1);
      *(undefined8 *)(param_1 + 8 + lVar53) = uVar25;
      uVar25 = extractps(auVar199,2);
      *(undefined8 *)(param_1 + 8 + lVar59) = uVar25;
      uVar25 = extractps(auVar199,3);
      *(undefined8 *)(param_1 + 8 + lVar64) = uVar25;
      *(uint *)(param_1 + 0xc + lVar49) = uVar13;
      *(uint *)(param_1 + 0xc + lVar53) = uVar14;
      *(uint *)(param_1 + 0xc + lVar59) = uVar15;
      *(uint *)(param_1 + 0xc + lVar64) = uVar16;
      auVar224._0_4_ = auVar108._0_4_ + fVar145 * fVar105 * fVar210;
      auVar224._4_4_ = auVar108._4_4_ + fVar152 * fVar114 * fVar206;
      auVar224._8_4_ = auVar108._8_4_ + fVar153 * fVar115 * fVar170;
      auVar224._12_4_ = auVar108._12_4_ + fVar154 * fVar116 * fVar132;
      *(float *)(param_1 + lVar45) = auVar224._0_4_;
      uVar25 = extractps(auVar224,1);
      *(undefined8 *)(param_1 + lVar61) = uVar25;
      auVar200._0_4_ = auVar119._0_4_ + fVar145 * fVar94 * fVar210;
      auVar200._4_4_ = auVar119._4_4_ + fVar152 * fVar102 * fVar206;
      auVar200._8_4_ = auVar119._8_4_ + fVar153 * fVar103 * fVar170;
      auVar200._12_4_ = auVar119._12_4_ + fVar154 * fVar104 * fVar132;
      uVar25 = extractps(auVar224,2);
      *(undefined8 *)(param_1 + lVar66) = uVar25;
      uVar25 = extractps(auVar224,3);
      *(undefined8 *)(param_1 + lVar44) = uVar25;
      *(float *)(param_1 + 4 + lVar45) = auVar200._0_4_;
      uVar25 = extractps(auVar200,1);
      *(undefined8 *)(param_1 + 4 + lVar61) = uVar25;
      uVar25 = extractps(auVar200,2);
      *(undefined8 *)(param_1 + 4 + lVar66) = uVar25;
      auVar108._0_4_ = auVar146._0_4_ + fVar145 * fVar183 * fVar210;
      auVar108._4_4_ = auVar146._4_4_ + fVar152 * fVar187 * fVar206;
      auVar108._8_4_ = auVar146._8_4_ + fVar153 * fVar188 * fVar170;
      auVar108._12_4_ = auVar146._12_4_ + fVar154 * fVar189 * fVar132;
      uVar25 = extractps(auVar200,3);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar25;
      *(float *)(param_1 + 8 + lVar45) = auVar108._0_4_;
      uVar25 = extractps(auVar108,1);
      *(undefined8 *)(param_1 + 8 + lVar61) = uVar25;
      uVar25 = extractps(auVar108,2);
      *(undefined8 *)(param_1 + 8 + lVar66) = uVar25;
      uVar25 = extractps(auVar108,3);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar25;
      *(uint *)(param_1 + 0xc + lVar45) = uVar17;
      *(uint *)(param_1 + 0xc + lVar61) = uVar18;
      *(uint *)(param_1 + 0xc + lVar66) = uVar19;
      *(uint *)(param_1 + 0xc + lVar44) = uVar20;
      auVar146._0_4_ = auVar107._0_4_ + fVar105 * fVar181 * fVar204;
      auVar146._4_4_ = auVar107._4_4_ + fVar114 * fVar182 * fVar208;
      auVar146._8_4_ = auVar107._8_4_ + fVar115 * fVar142 * fVar180;
      auVar146._12_4_ = auVar107._12_4_ + fVar116 * fVar143 * fVar133;
      *(float *)(param_1 + lVar47) = auVar146._0_4_;
      uVar25 = extractps(auVar146,1);
      *(undefined8 *)(param_1 + lVar65) = uVar25;
      uVar25 = extractps(auVar146,2);
      *(undefined8 *)(param_1 + lVar46) = uVar25;
      auVar78._0_4_ = auVar77._0_4_ + fVar94 * fVar181 * fVar204;
      auVar78._4_4_ = auVar77._4_4_ + fVar102 * fVar182 * fVar208;
      auVar78._8_4_ = auVar77._8_4_ + fVar103 * fVar142 * fVar180;
      auVar78._12_4_ = auVar77._12_4_ + fVar104 * fVar143 * fVar133;
      uVar25 = extractps(auVar146,3);
      *(undefined8 *)(param_1 + lVar62) = uVar25;
      *(float *)(param_1 + 4 + lVar47) = auVar78._0_4_;
      uVar25 = extractps(auVar78,1);
      *(undefined8 *)(param_1 + 4 + lVar65) = uVar25;
      uVar25 = extractps(auVar78,2);
      *(undefined8 *)(param_1 + 4 + lVar46) = uVar25;
      auVar119._0_4_ = auVar128._0_4_ + fVar183 * fVar181 * fVar204;
      auVar119._4_4_ = auVar128._4_4_ + fVar187 * fVar182 * fVar208;
      auVar119._8_4_ = auVar128._8_4_ + fVar188 * fVar142 * fVar180;
      auVar119._12_4_ = auVar128._12_4_ + fVar189 * fVar143 * fVar133;
      uVar25 = extractps(auVar78,3);
      *(undefined8 *)(param_1 + 4 + lVar62) = uVar25;
      *(float *)(param_1 + 8 + lVar47) = auVar119._0_4_;
      uVar25 = extractps(auVar119,1);
      *(undefined8 *)(param_1 + 8 + lVar65) = uVar25;
      uVar25 = extractps(auVar119,2);
      *(undefined8 *)(param_1 + 8 + lVar46) = uVar25;
      pfVar1 = (float *)(param_5 + uVar36);
      *pfVar1 = fVar221 + fVar163;
      pfVar1[1] = fVar227 + fVar3;
      pfVar1[2] = fVar230 + fVar26;
      pfVar1[3] = fVar233 + fVar27;
      uVar25 = extractps(auVar119,3);
      *(undefined8 *)(param_1 + 8 + lVar62) = uVar25;
      *(uint *)(param_1 + 0xc + lVar47) = uVar21;
      *(uint *)(param_1 + 0xc + lVar65) = uVar22;
      *(uint *)(param_1 + 0xc + lVar46) = uVar23;
      *(uint *)(param_1 + 0xc + lVar62) = uVar24;
      uVar55 = uVar55 + 0x10;
      lVar50 = lVar50 + 0x18;
      uVar39 = (int)uVar40 + 4;
      uVar40 = (ulonglong)uVar39;
    } while ((int)uVar39 < (int)(uVar70 & 0xfffffffc));
  }
  uVar70 = (uint)uVar40;
  if ((int)param_13 <= (int)uVar70) {
    return;
  }
  auVar77._0_4_ =
       -(uint)((int)(uVar70 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar77._4_4_ =
       -(uint)((int)(uVar70 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar77._8_4_ = -(uint)((int)(uVar70 | _UNK_150631e08) < (int)param_13);
  auVar77._12_4_ = -(uint)((int)(uVar70 | _UNK_150631e0c) < (int)param_13);
  pauVar2 = (undefined1 (*) [16])(param_2 + uVar40 * 0x18);
  uVar39 = movmskps((int)uVar55,auVar77);
  bVar33 = (char)((char)uVar39 << 4) >> 4;
  if (uVar39 == 0xf) {
    auVar173 = pblendw(pauVar2[2],*pauVar2,0xf0);
    auVar129 = pblendw(*pauVar2,pauVar2[1],0xf0);
    auVar214._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar214._8_4_ = auVar129._4_4_;
    auVar214._12_4_ = auVar129._12_4_;
    auVar129 = pblendw(pauVar2[5],pauVar2[3],0xf0);
    auVar199 = pblendw(pauVar2[3],pauVar2[4],0xf0);
    auVar123._12_4_ = auVar199._12_4_;
    auVar123._0_8_ = CONCAT44(auVar199._8_4_,auVar199._0_4_);
    auVar123._8_4_ = auVar199._4_4_;
    auVar176._0_8_ = CONCAT44(auVar173._0_4_,auVar173._8_4_);
    auVar176._8_4_ = auVar173._12_4_;
    auVar176._12_4_ = auVar173._4_4_;
    auVar107._0_8_ = CONCAT44(auVar129._0_4_,auVar129._8_4_);
    auVar107._8_4_ = auVar129._12_4_;
    auVar107._12_4_ = auVar129._4_4_;
    auVar129 = pblendw(pauVar2[1],pauVar2[2],0xf0);
    auVar148._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar148._8_4_ = auVar129._4_4_;
    auVar148._12_4_ = auVar129._12_4_;
    auVar129 = pblendw(pauVar2[4],pauVar2[5],0xf0);
    auVar128._0_8_ = CONCAT44(auVar129._8_4_,auVar129._0_4_);
    auVar128._8_4_ = auVar129._4_4_;
    auVar128._12_4_ = auVar129._12_4_;
    auVar138._8_8_ = auVar123._0_8_;
    auVar138._0_8_ = auVar214._0_8_;
    auVar213._8_8_ = auVar123._8_8_;
    auVar213._0_8_ = auVar214._8_8_;
    auVar191._8_8_ = auVar107._0_8_;
    auVar191._0_8_ = auVar176._0_8_;
    auVar175._8_8_ = auVar107._8_8_;
    auVar175._0_8_ = auVar176._8_8_;
    auVar157._8_8_ = auVar128._0_8_;
    auVar157._0_8_ = auVar148._0_8_;
    auVar147._8_8_ = auVar128._8_8_;
    auVar147._0_8_ = auVar148._8_8_;
    auVar129 = *(undefined1 (*) [16])(param_3 + uVar40 * 0x18);
    auVar199 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar40 * 0x18);
    auVar173 = *(undefined1 (*) [16])(param_3 + 0x20 + uVar40 * 0x18);
    auVar156 = *(undefined1 (*) [16])(param_3 + 0x30 + uVar40 * 0x18);
    auVar108 = *(undefined1 (*) [16])(param_3 + 0x40 + uVar40 * 0x18);
    auVar119 = *(undefined1 (*) [16])(param_3 + 0x50 + uVar40 * 0x18);
    auVar79 = blendps(auVar199,auVar129,3);
    auVar78 = blendps(auVar108,auVar156,3);
    auVar97 = blendps(auVar129,auVar173,3);
    auVar129 = blendps(auVar156,auVar119,3);
    auVar173 = blendps(auVar173,auVar199,3);
    auVar199 = blendps(auVar119,auVar108,3);
    local_448._4_4_ = auVar79._8_4_;
    local_448._0_4_ = auVar79._0_4_;
    fStack_440 = (float)auVar78._0_4_;
    fStack_43c = (float)auVar78._8_4_;
    local_378._4_4_ = auVar79._12_4_;
    local_378._0_4_ = auVar79._4_4_;
    fStack_370 = (float)auVar78._4_4_;
    fStack_36c = (float)auVar78._12_4_;
    auVar201._4_4_ = auVar97._4_4_;
    auVar225._4_4_ = auVar97._0_4_;
    auVar225._0_4_ = auVar97._8_4_;
    auVar225._8_4_ = auVar129._8_4_;
    auVar225._12_4_ = auVar129._0_4_;
    auVar201._0_4_ = auVar97._12_4_;
    auVar201._8_4_ = auVar129._12_4_;
    auVar201._12_4_ = auVar129._4_4_;
    auVar185._0_4_ = auVar173._0_4_;
    auVar185._4_4_ = auVar173._8_4_;
    auVar185._8_4_ = auVar199._0_4_;
    auVar185._12_4_ = auVar199._8_4_;
    auVar167._4_4_ = auVar173._12_4_;
    auVar167._0_4_ = auVar173._4_4_;
    auVar167._8_4_ = auVar199._4_4_;
    auVar167._12_4_ = auVar199._12_4_;
  }
  else {
    auVar98._0_4_ = ___xmm_00000048000000300000001800000000 & auVar77._0_4_;
    auVar98._4_4_ = _UNK_150b51284 & auVar77._4_4_;
    auVar98._8_4_ = _UNK_150b51288 & auVar77._8_4_;
    auVar98._12_4_ = _UNK_150b5128c & auVar77._12_4_;
    lVar34 = extractps(auVar98,1);
    lVar35 = extractps(auVar98,2);
    lVar41 = extractps(auVar98,3);
    auVar138._4_4_ = *(undefined4 *)(*pauVar2 + lVar34);
    auVar138._0_4_ = *(undefined4 *)*pauVar2;
    auVar138._12_4_ = *(undefined4 *)(*pauVar2 + lVar41);
    auVar138._8_4_ = *(undefined4 *)(*pauVar2 + lVar35);
    auVar129 = ___xmm_0000004c000000340000001c00000004 & auVar77;
    auVar213._4_4_ = *(undefined4 *)(*pauVar2 + auVar129._4_4_);
    auVar213._0_4_ = *(undefined4 *)(*pauVar2 + auVar129._0_4_);
    auVar213._12_4_ = *(undefined4 *)(*pauVar2 + auVar129._12_4_);
    auVar213._8_4_ = *(undefined4 *)(*pauVar2 + auVar129._8_4_);
    auVar199 = ___xmm_00000050000000380000002000000008 & auVar77;
    auVar191._4_4_ = *(undefined4 *)(*pauVar2 + auVar199._4_4_);
    auVar191._0_4_ = *(undefined4 *)(*pauVar2 + auVar199._0_4_);
    auVar191._12_4_ = *(undefined4 *)(*pauVar2 + auVar199._12_4_);
    auVar191._8_4_ = *(undefined4 *)(*pauVar2 + auVar199._8_4_);
    auVar173 = ___xmm_000000540000003c000000240000000c & auVar77;
    auVar175._4_4_ = *(undefined4 *)(*pauVar2 + auVar173._4_4_);
    auVar175._0_4_ = *(undefined4 *)(*pauVar2 + auVar173._0_4_);
    auVar175._12_4_ = *(undefined4 *)(*pauVar2 + auVar173._12_4_);
    auVar175._8_4_ = *(undefined4 *)(*pauVar2 + auVar173._8_4_);
    auVar156 = ___xmm_00000058000000400000002800000010 & auVar77;
    auVar157._4_4_ = *(undefined4 *)(*pauVar2 + auVar156._4_4_);
    auVar157._0_4_ = *(undefined4 *)(*pauVar2 + auVar156._0_4_);
    auVar157._12_4_ = *(undefined4 *)(*pauVar2 + auVar156._12_4_);
    auVar157._8_4_ = *(undefined4 *)(*pauVar2 + auVar156._8_4_);
    auVar108 = ___xmm_0000005c000000440000002c00000014 & auVar77;
    auVar147._4_4_ = *(undefined4 *)(*pauVar2 + auVar108._4_4_);
    auVar147._0_4_ = *(undefined4 *)(*pauVar2 + auVar108._0_4_);
    auVar147._12_4_ = *(undefined4 *)(*pauVar2 + auVar108._12_4_);
    auVar147._8_4_ = *(undefined4 *)(*pauVar2 + auVar108._8_4_);
    lVar50 = param_3 + uVar40 * 0x18;
    auVar119 = insertps(ZEXT416(*(uint *)(param_3 + uVar40 * 0x18)),*(undefined4 *)(lVar34 + lVar50)
                        ,0x10);
    auVar119 = insertps(auVar119,*(undefined4 *)(lVar35 + lVar50),0x20);
    _local_448 = insertps(auVar119,*(undefined4 *)(lVar41 + lVar50),0x30);
    auVar119 = insertps(ZEXT416(*(uint *)((ulonglong)auVar129._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar129._4_4_ + lVar50),0x10);
    auVar119 = insertps(auVar119,*(undefined4 *)((ulonglong)auVar129._8_4_ + lVar50),0x20);
    _local_378 = insertps(auVar119,*(undefined4 *)((ulonglong)auVar129._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar199._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar199._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar199._8_4_ + lVar50),0x20);
    auVar225 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar199._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar173._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar173._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar173._8_4_ + lVar50),0x20);
    auVar201 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar173._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar156._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar156._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar156._8_4_ + lVar50),0x20);
    auVar185 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar156._12_4_ + lVar50),0x30);
    auVar129 = insertps(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar50)),
                        *(undefined4 *)((ulonglong)auVar108._4_4_ + lVar50),0x10);
    auVar129 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar108._8_4_ + lVar50),0x20);
    auVar167 = insertps(auVar129,*(undefined4 *)((ulonglong)auVar108._12_4_ + lVar50),0x30);
  }
  auVar139._0_4_ = auVar138._0_4_ << 4;
  auVar139._4_4_ = auVar138._4_4_ << 4;
  auVar139._8_4_ = auVar138._8_4_ << 4;
  auVar139._12_4_ = auVar138._12_4_ << 4;
  auVar199 = auVar77 & auVar139;
  lVar50 = param_1 + auVar199._0_4_;
  auVar97 = ___xmm_00000004000000040000000400000004 & auVar77;
  auVar173 = ___xmm_00000008000000080000000800000008 & auVar77;
  auVar215._0_4_ = auVar213._0_4_ << 4;
  auVar215._4_4_ = auVar213._4_4_ << 4;
  auVar215._8_4_ = auVar213._8_4_ << 4;
  auVar215._12_4_ = auVar213._12_4_ << 4;
  auVar156 = auVar77 & auVar215;
  lVar66 = (longlong)auVar156._0_4_;
  auVar192._0_4_ = auVar191._0_4_ << 4;
  auVar192._4_4_ = auVar191._4_4_ << 4;
  auVar192._8_4_ = auVar191._8_4_ << 4;
  auVar192._12_4_ = auVar191._12_4_ << 4;
  auVar108 = auVar77 & auVar192;
  auVar177._0_4_ = auVar175._0_4_ << 4;
  auVar177._4_4_ = auVar175._4_4_ << 4;
  auVar177._8_4_ = auVar175._8_4_ << 4;
  auVar177._12_4_ = auVar175._12_4_ << 4;
  auVar119 = auVar77 & auVar177;
  auVar129 = ZEXT416(*(uint *)(param_1 + auVar199._0_4_));
  auVar158._0_4_ = auVar157._0_4_ << 4;
  auVar158._4_4_ = auVar157._4_4_ << 4;
  auVar158._8_4_ = auVar157._8_4_ << 4;
  auVar158._12_4_ = auVar157._12_4_ << 4;
  auVar78 = auVar77 & auVar158;
  auVar149._0_4_ = auVar147._0_4_ << 4;
  auVar149._4_4_ = auVar147._4_4_ << 4;
  auVar149._8_4_ = auVar147._8_4_ << 4;
  auVar149._12_4_ = auVar147._12_4_ << 4;
  auVar79 = auVar77 & auVar149;
  lVar67 = (longlong)auVar79._0_4_;
  lVar34 = param_1 + auVar199._4_4_;
  lVar35 = param_1 + auVar199._8_4_;
  local_4e8 = (undefined1  [8])lVar35;
  lVar41 = param_1 + auVar199._12_4_;
  uVar36 = (ulonglong)auVar97._4_4_;
  uVar55 = (ulonglong)auVar97._0_4_;
  uVar40 = (ulonglong)auVar173._0_4_;
  lVar42 = param_1 + lVar66;
  lVar43 = param_1 + auVar156._4_4_;
  lVar44 = param_1 + auVar156._8_4_;
  lVar45 = param_1 + auVar156._12_4_;
  lVar46 = param_1 + auVar108._0_4_;
  lVar47 = param_1 + auVar108._4_4_;
  lVar48 = param_1 + auVar108._8_4_;
  lVar49 = param_1 + auVar108._12_4_;
  lVar51 = param_1 + auVar119._0_4_;
  lVar52 = param_1 + auVar119._4_4_;
  lVar53 = param_1 + auVar119._8_4_;
  lVar56 = param_1 + auVar119._12_4_;
  lVar57 = param_1 + auVar78._0_4_;
  lVar58 = param_1 + auVar78._4_4_;
  lVar59 = param_1 + auVar78._8_4_;
  lVar61 = param_1 + auVar78._12_4_;
  lVar62 = param_1 + lVar67;
  lVar63 = param_1 + auVar79._4_4_;
  lVar64 = param_1 + auVar79._8_4_;
  lVar65 = param_1 + auVar79._12_4_;
  bVar68 = (bVar33 & 2) == 0;
  if (!bVar68) {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._4_4_),0x10);
  }
  uVar54 = (ulonglong)auVar173._4_4_;
  _local_508 = ZEXT416(*(uint *)(uVar55 + lVar50));
  if (bVar68) {
    _local_4c8 = ZEXT416(*(uint *)(uVar40 + lVar50));
    auVar107 = ZEXT416(*(uint *)(param_1 + lVar66));
    _local_428 = ZEXT416(*(uint *)(uVar55 + lVar42));
    _local_4b8 = ZEXT416(*(uint *)(uVar40 + lVar42));
  }
  else {
    _local_508 = insertps(_local_508,*(undefined4 *)(uVar36 + lVar34),0x10);
    _local_4c8 = insertps(ZEXT416(*(uint *)(uVar40 + lVar50)),*(undefined4 *)(uVar54 + lVar34),0x10)
    ;
    auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar66)),
                        *(undefined4 *)(param_1 + auVar156._4_4_),0x10);
    _local_428 = insertps(ZEXT416(*(uint *)(uVar55 + lVar42)),*(undefined4 *)(uVar36 + lVar43),0x10)
    ;
    _local_4b8 = insertps(ZEXT416(*(uint *)(uVar40 + lVar42)),*(undefined4 *)(uVar54 + lVar43),0x10)
    ;
  }
  _local_468 = ZEXT416(*(uint *)(param_1 + auVar108._0_4_));
  if (bVar68) {
    _local_418 = ZEXT416(*(uint *)(uVar55 + lVar46));
    _local_408 = ZEXT416(*(uint *)(uVar40 + lVar46));
  }
  else {
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    _local_418 = insertps(ZEXT416(*(uint *)(uVar55 + lVar46)),*(undefined4 *)(uVar36 + lVar47),0x10)
    ;
    _local_408 = insertps(ZEXT416(*(uint *)(uVar40 + lVar46)),*(undefined4 *)(uVar54 + lVar47),0x10)
    ;
  }
  _local_458 = ZEXT416(*(uint *)(param_1 + auVar119._0_4_));
  if (bVar68) {
    _local_4d8 = ZEXT416(*(uint *)(uVar55 + lVar51));
    _local_538 = ZEXT416(*(uint *)(uVar40 + lVar51));
  }
  else {
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._4_4_),0x10);
    _local_4d8 = insertps(ZEXT416(*(uint *)(uVar55 + lVar51)),*(undefined4 *)(uVar36 + lVar52),0x10)
    ;
    _local_538 = insertps(ZEXT416(*(uint *)(uVar40 + lVar51)),*(undefined4 *)(uVar54 + lVar52),0x10)
    ;
  }
  _local_528 = ZEXT416(*(uint *)(param_1 + auVar78._0_4_));
  if (bVar68) {
    _local_518 = ZEXT416(*(uint *)(uVar55 + lVar57));
    _local_558 = ZEXT416(*(uint *)(uVar40 + lVar57));
    auVar128 = ZEXT416(*(uint *)(param_1 + lVar67));
  }
  else {
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._4_4_),0x10);
    _local_518 = insertps(ZEXT416(*(uint *)(uVar55 + lVar57)),*(undefined4 *)(uVar36 + lVar58),0x10)
    ;
    _local_558 = insertps(ZEXT416(*(uint *)(uVar40 + lVar57)),*(undefined4 *)(uVar54 + lVar58),0x10)
    ;
    auVar128 = insertps(ZEXT416(*(uint *)(param_1 + lVar67)),
                        *(undefined4 *)(param_1 + auVar79._4_4_),0x10);
  }
  auVar172 = ZEXT416(*(uint *)(uVar55 + lVar62));
  fVar163 = auVar167._0_4_;
  fVar91 = auVar167._12_4_;
  if (!bVar68) {
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar36 + lVar63),0x10);
  }
  local_548 = ZEXT416(*(uint *)(uVar40 + lVar62));
  if (!bVar68) {
    local_548 = insertps(local_548,*(undefined4 *)(uVar54 + lVar63),0x10);
  }
  uVar55 = (ulonglong)auVar97._8_4_;
  fVar92 = auVar167._8_4_;
  uVar73 = auVar173._8_4_;
  local_488 = auVar185._0_4_;
  fStack_484 = auVar185._4_4_;
  fStack_480 = auVar185._8_4_;
  fStack_47c = auVar185._12_4_;
  if ((bVar33 & 4) != 0) {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._8_4_),0x20);
    _local_508 = insertps(_local_508,*(undefined4 *)(uVar55 + lVar35),0x20);
    _local_4c8 = insertps(_local_4c8,*(undefined4 *)((ulonglong)uVar73 + lVar35),0x20);
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar156._8_4_),0x20);
    _local_428 = insertps(_local_428,*(undefined4 *)(uVar55 + lVar44),0x20);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)((ulonglong)uVar73 + lVar44),0x20);
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    _local_418 = insertps(_local_418,*(undefined4 *)(uVar55 + lVar48),0x20);
    _local_408 = insertps(_local_408,*(undefined4 *)((ulonglong)uVar73 + lVar48),0x20);
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._8_4_),0x20);
    _local_4d8 = insertps(_local_4d8,*(undefined4 *)(uVar55 + lVar53),0x20);
    _local_538 = insertps(_local_538,*(undefined4 *)((ulonglong)uVar73 + lVar53),0x20);
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._8_4_),0x20);
    _local_518 = insertps(_local_518,*(undefined4 *)(uVar55 + lVar59),0x20);
    _local_558 = insertps(_local_558,*(undefined4 *)((ulonglong)uVar73 + lVar59),0x20);
    auVar128 = insertps(auVar128,*(undefined4 *)(param_1 + auVar79._8_4_),0x20);
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar55 + lVar64),0x20);
    local_548 = insertps(local_548,*(undefined4 *)((ulonglong)uVar73 + lVar64),0x20);
  }
  if ((char)bVar33 < '\0') {
    auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + auVar199._12_4_),0x30);
    _local_508 = insertps(_local_508,*(undefined4 *)((ulonglong)auVar97._12_4_ + lVar41),0x30);
    _local_4c8 = insertps(_local_4c8,*(undefined4 *)((ulonglong)auVar173._12_4_ + lVar41),0x30);
  }
  uVar40 = (ulonglong)auVar173._12_4_;
  uVar55 = (ulonglong)auVar97._12_4_;
  bVar68 = (char)bVar33 < '\0';
  if (bVar68) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar156._12_4_),0x30);
    _local_428 = insertps(_local_428,*(undefined4 *)(uVar55 + lVar45),0x30);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(uVar40 + lVar45),0x30);
    _local_468 = insertps(_local_468,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    _local_418 = insertps(_local_418,*(undefined4 *)(uVar55 + lVar49),0x30);
    _local_408 = insertps(_local_408,*(undefined4 *)(uVar40 + lVar49),0x30);
    _local_458 = insertps(_local_458,*(undefined4 *)(param_1 + auVar119._12_4_),0x30);
    _local_4d8 = insertps(_local_4d8,*(undefined4 *)(uVar55 + lVar56),0x30);
    _local_538 = insertps(_local_538,*(undefined4 *)(uVar40 + lVar56),0x30);
    _local_528 = insertps(_local_528,*(undefined4 *)(param_1 + auVar78._12_4_),0x30);
    _local_518 = insertps(_local_518,*(undefined4 *)(uVar55 + lVar61),0x30);
    _local_558 = insertps(_local_558,*(undefined4 *)(uVar40 + lVar61),0x30);
  }
  uVar60 = (ulonglong)(auVar77._4_4_ & __xmm_0000000c0000000c0000000c0000000c._4_4_);
  uVar36 = (ulonglong)(auVar77._0_4_ & (uint)__xmm_0000000c0000000c0000000c0000000c);
  uVar54 = (ulonglong)SUB164(auVar77 & ___xmm_0000000c0000000c0000000c0000000c,8);
  if (bVar68) {
    auVar128 = insertps(auVar128,*(undefined4 *)(param_1 + auVar79._12_4_),0x30);
  }
  uVar37 = (ulonglong)SUB164(auVar77 & ___xmm_0000000c0000000c0000000c0000000c,0xc);
  auVar199 = insertps(ZEXT416(*(uint *)(uVar36 + lVar50)),*(undefined4 *)(uVar60 + lVar34),0x10);
  auVar173 = insertps(ZEXT416(*(uint *)(uVar36 + lVar42)),*(undefined4 *)(uVar60 + lVar43),0x10);
  auVar156 = insertps(ZEXT416(*(uint *)(uVar36 + lVar51)),*(undefined4 *)(uVar60 + lVar52),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar36 + lVar57)),*(undefined4 *)(uVar60 + lVar58),0x10);
  auVar77 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar60 + lVar47),0x10);
  auVar119 = insertps(ZEXT416(*(uint *)(uVar36 + lVar62)),*(undefined4 *)(uVar60 + lVar63),0x10);
  if (bVar68) {
    auVar172 = insertps(auVar172,*(undefined4 *)(uVar55 + lVar65),0x30);
  }
  auVar78 = insertps(auVar199,*(undefined4 *)(uVar54 + lVar35),0x20);
  auVar173 = insertps(auVar173,*(undefined4 *)(uVar54 + lVar44),0x20);
  auVar156 = insertps(auVar156,*(undefined4 *)(uVar54 + lVar53),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar54 + lVar59),0x20);
  auVar77 = insertps(auVar77,*(undefined4 *)(uVar54 + lVar48),0x20);
  auVar199 = insertps(auVar119,*(undefined4 *)(uVar54 + lVar64),0x20);
  if (bVar68) {
    local_548 = insertps(local_548,*(undefined4 *)(uVar40 + lVar65),0x30);
  }
  auVar119 = insertps(auVar78,*(undefined4 *)(uVar37 + lVar41),0x30);
  auVar173 = insertps(auVar173,*(undefined4 *)(uVar37 + lVar45),0x30);
  auVar156 = insertps(auVar156,*(undefined4 *)(uVar37 + lVar56),0x30);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar37 + lVar61),0x30);
  auVar77 = insertps(auVar77,*(undefined4 *)(uVar37 + lVar49),0x30);
  auVar199 = insertps(auVar199,*(undefined4 *)(uVar37 + lVar65),0x30);
  local_478._0_4_ = auVar129._0_4_;
  local_478._4_4_ = auVar129._4_4_;
  fStack_470 = auVar129._8_4_;
  fStack_46c = auVar129._12_4_;
  fVar161 = auVar225._4_4_;
  fVar162 = auVar225._12_4_;
  fVar132 = auVar225._0_4_;
  fVar133 = auVar225._8_4_;
  fVar142 = auVar201._0_4_;
  fVar222 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar142);
  fVar143 = auVar201._4_4_;
  fVar228 = (float)(_UNK_150651574 ^ (uint)fVar143);
  fVar144 = auVar201._8_4_;
  fVar231 = (float)(_UNK_150651578 ^ (uint)fVar144);
  fVar145 = auVar201._12_4_;
  fVar234 = (float)(_UNK_15065157c ^ (uint)fVar145);
  local_3c8 = auVar128._0_4_;
  fStack_3c4 = auVar128._4_4_;
  fStack_3c0 = auVar128._8_4_;
  fStack_3bc = auVar128._12_4_;
  fVar93 = auVar167._4_4_;
  local_3b8 = auVar172._0_4_;
  fStack_3b4 = auVar172._4_4_;
  fStack_3b0 = auVar172._8_4_;
  fStack_3ac = auVar172._12_4_;
  fVar152 = local_548._0_4_;
  local_438._0_4_ = fVar163 * fVar152;
  fVar153 = local_548._4_4_;
  local_438._4_4_ = fVar93 * fVar153;
  fVar154 = local_548._8_4_;
  fStack_430 = fVar92 * fVar154;
  fVar155 = local_548._12_4_;
  fStack_42c = fVar91 * fVar155;
  fVar170 = ((float)local_538._0_4_ * fVar222 - local_488 * (float)local_558._0_4_) -
            (float)local_438._0_4_;
  fVar180 = ((float)local_538._4_4_ * fVar228 - fStack_484 * (float)local_558._4_4_) -
            (float)local_438._4_4_;
  fVar181 = (fStack_530 * fVar231 - fStack_480 * fStack_550) - fStack_430;
  fVar182 = (fStack_52c * fVar234 - fStack_47c * fStack_54c) - fStack_42c;
  lVar50 = (longlong)(int)(uVar70 << 2);
  pfVar1 = (float *)(param_5 + lVar50);
  local_398._0_4_ = *param_8;
  auVar150 = auVar149;
  local_398._4_4_ = local_398._0_4_;
  local_398._8_4_ = local_398._0_4_;
  local_398._12_4_ = local_398._0_4_;
  if ((bVar33 & 9) == 9) {
    _local_438 = *(undefined1 (*) [16])(param_4 + lVar50);
    _local_4e8 = *(undefined1 (*) [16])(param_5 + lVar50);
    if ((param_7 & 1) == 0) {
      fVar127 = *param_11;
      auVar124._4_4_ = fVar127;
      auVar124._0_4_ = fVar127;
      auVar124._8_4_ = fVar127;
      auVar124._12_4_ = fVar127;
      auVar129 = _local_4e8;
    }
    else {
      auVar129 = *(undefined1 (*) [16])(param_9 + lVar50);
LAB_14090076a:
      fVar127 = param_8[1];
      local_398._4_4_ = (float)local_398._0_4_ + fVar127 * auVar129._4_4_;
      local_398._8_4_ = (float)local_398._0_4_ + fVar127 * auVar129._8_4_;
      local_398._12_4_ = (float)local_398._0_4_ + fVar127 * auVar129._12_4_;
      fVar131 = *param_11;
      auVar124._4_4_ = fVar131;
      auVar124._0_4_ = fVar131;
      auVar124._8_4_ = fVar131;
      auVar124._12_4_ = fVar131;
      local_398._0_4_ = (float)local_398._0_4_ + fVar127 * auVar129._0_4_;
    }
    if ((param_10 & 1) == 0) goto LAB_140900801;
    if ((bVar33 & 9) != 9) goto LAB_1409007a4;
    auVar129 = *(undefined1 (*) [16])(param_12 + lVar50);
  }
  else {
    puVar38 = (uint *)(param_4 + lVar50);
    if ((uVar39 & 1) != 0) {
      _local_438 = ZEXT416(*puVar38);
    }
    if ((uVar39 & 2) != 0) {
      _local_438 = insertps(_local_438,puVar38[1],0x10);
    }
    if ((uVar39 & 4) != 0) {
      _local_438 = insertps(_local_438,puVar38[2],0x20);
    }
    if ((uVar39 & 8) != 0) {
      _local_438 = insertps(_local_438,puVar38[3],0x30);
    }
    auVar129 = _local_438;
    if ((uVar39 & 1) != 0) {
      _local_4e8 = ZEXT416((uint)*pfVar1);
      auVar129 = _local_4e8;
    }
    if ((uVar39 & 2) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[1],0x10);
      _local_4e8 = auVar129;
    }
    if ((uVar39 & 4) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[2],0x20);
      _local_4e8 = auVar129;
    }
    if ((uVar39 & 8) != 0) {
      auVar129 = insertps(_local_4e8,pfVar1[3],0x30);
      _local_4e8 = auVar129;
    }
    if ((param_7 & 1) != 0) {
      puVar38 = (uint *)(param_9 + lVar50);
      if ((uVar39 & 1) != 0) {
        auVar129 = ZEXT416(*puVar38);
      }
      if ((uVar39 & 2) != 0) {
        auVar129 = insertps(auVar129,puVar38[1],0x10);
      }
      if ((uVar39 & 4) != 0) {
        auVar129 = insertps(auVar129,puVar38[2],0x20);
      }
      if ((uVar39 & 8) != 0) {
        auVar129 = insertps(auVar129,puVar38[3],0x30);
      }
      goto LAB_14090076a;
    }
    fVar127 = *param_11;
    auVar124._4_4_ = fVar127;
    auVar124._0_4_ = fVar127;
    auVar124._8_4_ = fVar127;
    auVar124._12_4_ = fVar127;
    if ((param_10 & 1) == 0) goto LAB_140900801;
LAB_1409007a4:
    puVar38 = (uint *)(param_12 + lVar50);
    if ((uVar39 & 1) != 0) {
      auVar129 = ZEXT416(*puVar38);
    }
    if ((uVar39 & 2) != 0) {
      auVar129 = insertps(auVar129,puVar38[1],0x10);
    }
    if ((uVar39 & 4) != 0) {
      auVar129 = insertps(auVar129,puVar38[2],0x20);
    }
    if ((uVar39 & 8) != 0) {
      auVar129 = insertps(auVar129,puVar38[3],0x30);
    }
  }
  fVar127 = param_11[1];
  auVar150._0_4_ = fVar127 * auVar129._0_4_;
  auVar150._4_4_ = fVar127 * auVar129._4_4_;
  auVar150._8_4_ = fVar127 * auVar129._8_4_;
  auVar150._12_4_ = fVar127 * auVar129._12_4_;
  auVar125._0_4_ = auVar124._0_4_ + auVar150._0_4_;
  auVar125._4_4_ = auVar124._4_4_ + auVar150._4_4_;
  auVar125._8_4_ = auVar124._8_4_ + auVar150._8_4_;
  auVar125._12_4_ = auVar124._12_4_ + auVar150._12_4_;
  auVar124 = auVar125;
LAB_140900801:
  fVar134 = (fVar132 * (float)local_468._0_4_ +
            (float)local_378._0_4_ * auVar107._0_4_ +
            (float)local_448._0_4_ * (float)local_478._0_4_) -
            (((float)local_458._0_4_ * fVar222 - local_488 * (float)local_528._0_4_) -
            fVar163 * local_3c8);
  fVar141 = (fVar161 * (float)local_468._4_4_ +
            (float)local_378._4_4_ * auVar107._4_4_ +
            (float)local_448._4_4_ * (float)local_478._4_4_) -
            (((float)local_458._4_4_ * fVar228 - fStack_484 * (float)local_528._4_4_) -
            fVar93 * fStack_3c4);
  auVar140._0_8_ = CONCAT44(fVar141,fVar134);
  auVar140._8_4_ =
       (fVar133 * fStack_460 + fStack_370 * auVar107._8_4_ + fStack_440 * fStack_470) -
       ((fStack_450 * fVar231 - fStack_480 * fStack_520) - fVar92 * fStack_3c0);
  auVar140._12_4_ =
       (fVar162 * fStack_45c + fStack_36c * auVar107._12_4_ + fStack_43c * fStack_46c) -
       ((fStack_44c * fVar234 - fStack_47c * fStack_51c) - fVar91 * fStack_3bc);
  fVar127 = (fVar132 * (float)local_418._0_4_ +
            (float)local_378._0_4_ * (float)local_428._0_4_ +
            (float)local_448._0_4_ * (float)local_508._0_4_) -
            (((float)local_4d8._0_4_ * fVar222 - local_488 * (float)local_518._0_4_) -
            fVar163 * local_3b8);
  fVar131 = (fVar161 * (float)local_418._4_4_ +
            (float)local_378._4_4_ * (float)local_428._4_4_ +
            (float)local_448._4_4_ * (float)local_508._4_4_) -
            (((float)local_4d8._4_4_ * fVar228 - fStack_484 * (float)local_518._4_4_) -
            fVar93 * fStack_3b4);
  auVar130._0_8_ = CONCAT44(fVar131,fVar127);
  auVar130._8_4_ =
       (fVar133 * fStack_410 + fStack_370 * fStack_420 + fStack_440 * fStack_500) -
       ((fStack_4d0 * fVar231 - fStack_480 * fStack_510) - fVar92 * fStack_3b0);
  auVar130._12_4_ =
       (fVar162 * fStack_40c + fStack_36c * fStack_41c + fStack_43c * fStack_4fc) -
       ((fStack_4cc * fVar234 - fStack_47c * fStack_50c) - fVar91 * fStack_3ac);
  fVar170 = (fVar132 * (float)local_408._0_4_ +
            (float)local_378._0_4_ * (float)local_4b8._0_4_ +
            (float)local_448._0_4_ * (float)local_4c8._0_4_) - fVar170;
  fVar180 = (fVar161 * (float)local_408._4_4_ +
            (float)local_378._4_4_ * (float)local_4b8._4_4_ +
            (float)local_448._4_4_ * (float)local_4c8._4_4_) - fVar180;
  auVar120._0_8_ = CONCAT44(fVar180,fVar170);
  auVar120._8_4_ =
       (fVar133 * fStack_400 + fStack_370 * fStack_4b0 + fStack_440 * fStack_4c0) - fVar181;
  auVar120._12_4_ =
       (fVar162 * fStack_3fc + fStack_36c * fStack_4ac + fStack_43c * fStack_4bc) - fVar182;
  auVar99._0_4_ = fVar170 * fVar170 + fVar127 * fVar127 + fVar134 * fVar134;
  auVar99._4_4_ = fVar180 * fVar180 + fVar131 * fVar131 + fVar141 * fVar141;
  auVar99._8_4_ =
       auVar120._8_4_ * auVar120._8_4_ +
       auVar130._8_4_ * auVar130._8_4_ + auVar140._8_4_ * auVar140._8_4_;
  auVar99._12_4_ =
       auVar120._12_4_ * auVar120._12_4_ +
       auVar130._12_4_ * auVar130._12_4_ + auVar140._12_4_ * auVar140._12_4_;
  auVar79 = sqrtps(auVar150,auVar99);
  uVar70 = -(uint)(auVar99._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar39 = -(uint)(auVar99._4_4_ < _UNK_1506895e4);
  uVar73 = -(uint)(auVar99._8_4_ < _UNK_1506895e8);
  uVar75 = -(uint)(auVar99._12_4_ < _UNK_1506895ec);
  auVar80._4_4_ = uVar39;
  auVar80._0_4_ = uVar70;
  auVar109._8_4_ = auVar130._8_4_;
  auVar109._0_8_ = auVar130._0_8_;
  auVar109._12_4_ = auVar130._12_4_;
  auVar78 = divps(auVar109,auVar79);
  auVar193._8_4_ = auVar120._8_4_;
  auVar193._0_8_ = auVar120._0_8_;
  auVar193._12_4_ = auVar120._12_4_;
  auVar97 = divps(auVar193,auVar79);
  auVar168._8_4_ = auVar140._8_4_;
  auVar168._0_8_ = auVar140._0_8_;
  auVar168._12_4_ = auVar140._12_4_;
  auVar129 = divps(auVar168,auVar79);
  auVar80._8_4_ = uVar73;
  auVar80._12_4_ = uVar75;
  auVar28._4_4_ = _UNK_15076b1f4;
  auVar28._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar28._8_4_ = _UNK_15076b1f8;
  auVar28._12_4_ = _UNK_15076b1fc;
  auVar129 = blendvps(auVar129,auVar28,auVar80);
  auVar202._8_4_ = auVar140._8_4_;
  auVar202._0_8_ = auVar140._0_8_;
  auVar202._12_4_ = auVar140._12_4_;
  bVar68 = (bVar33 & 1) == 0;
  if (!bVar68) {
    auVar202 = auVar129;
  }
  auVar216._0_8_ = CONCAT44(~uVar39 & auVar78._4_4_,~uVar70 & auVar78._0_4_);
  auVar216._8_4_ = ~uVar73 & auVar78._8_4_;
  auVar216._12_4_ = ~uVar75 & auVar78._12_4_;
  auVar178._0_8_ = CONCAT44(~uVar39 & auVar97._4_4_,~uVar70 & auVar97._0_4_);
  auVar178._8_4_ = ~uVar73 & auVar97._8_4_;
  auVar178._12_4_ = ~uVar75 & auVar97._12_4_;
  auVar110._8_4_ = auVar130._8_4_;
  auVar110._0_8_ = auVar130._0_8_;
  auVar110._12_4_ = auVar130._12_4_;
  auVar81._8_4_ = auVar120._8_4_;
  auVar81._0_8_ = auVar120._0_8_;
  auVar81._12_4_ = auVar120._12_4_;
  if (bVar68) {
    auVar78 = blendps(auVar140,auVar202,1);
  }
  else {
    auVar110._8_4_ = auVar216._8_4_;
    auVar110._0_8_ = auVar216._0_8_;
    auVar110._12_4_ = auVar216._12_4_;
    auVar81._8_4_ = auVar178._8_4_;
    auVar81._0_8_ = auVar178._0_8_;
    auVar81._12_4_ = auVar178._12_4_;
    auVar78 = blendps(auVar140,auVar202,1);
  }
  if ((bVar33 & 2) == 0) {
    auVar128 = blendps(auVar130,auVar110,1);
    auVar97 = blendps(auVar120,auVar81,1);
    auVar78 = blendps(auVar78,auVar78,2);
    auVar90 = auVar97;
    auVar111 = auVar128;
  }
  else {
    auVar128 = blendps(auVar130,auVar110,1);
    auVar111._8_4_ = auVar216._8_4_;
    auVar111._0_8_ = auVar216._0_8_;
    auVar111._12_4_ = auVar216._12_4_;
    auVar97 = blendps(auVar120,auVar81,1);
    auVar90._8_4_ = auVar178._8_4_;
    auVar90._0_8_ = auVar178._0_8_;
    auVar90._12_4_ = auVar178._12_4_;
    auVar78 = blendps(auVar78,auVar129,2);
  }
  if ((bVar33 & 4) == 0) {
    auVar172 = blendps(auVar128,auVar111,2);
    auVar121 = blendps(auVar97,auVar90,2);
    auVar97 = auVar121;
    auVar128 = auVar78;
    auVar203 = auVar172;
  }
  else {
    auVar172 = blendps(auVar128,auVar111,2);
    auVar203._8_4_ = auVar216._8_4_;
    auVar203._0_8_ = auVar216._0_8_;
    auVar203._12_4_ = auVar216._12_4_;
    auVar97 = blendps(auVar97,auVar90,2);
    auVar121._8_4_ = auVar178._8_4_;
    auVar121._0_8_ = auVar178._0_8_;
    auVar121._12_4_ = auVar178._12_4_;
    auVar128 = auVar129;
  }
  local_5a8 = auVar119._0_4_;
  fStack_5a4 = auVar119._4_4_;
  fStack_5a0 = auVar119._8_4_;
  fStack_59c = auVar119._12_4_;
  local_598 = auVar173._0_4_;
  fStack_594 = auVar173._4_4_;
  fStack_590 = auVar173._8_4_;
  fStack_58c = auVar173._12_4_;
  local_578 = auVar156._0_4_;
  fStack_574 = auVar156._4_4_;
  fStack_570 = auVar156._8_4_;
  fStack_56c = auVar156._12_4_;
  local_568 = auVar108._0_4_;
  fStack_564 = auVar108._4_4_;
  fStack_560 = auVar108._8_4_;
  fStack_55c = auVar108._12_4_;
  auVar78 = blendps(auVar78,auVar128,4);
  bVar68 = -1 < (char)bVar33;
  if (bVar68) {
    auVar129 = auVar78;
  }
  local_588 = auVar77._0_4_;
  fStack_584 = auVar77._4_4_;
  fStack_580 = auVar77._8_4_;
  fStack_57c = auVar77._12_4_;
  local_3e8 = auVar199._0_4_;
  fStack_3e4 = auVar199._4_4_;
  fStack_3e0 = auVar199._8_4_;
  fStack_3dc = auVar199._12_4_;
  auVar128 = blendps(auVar172,auVar203,4);
  if (bVar68) {
    auVar216 = auVar128;
  }
  auVar97 = blendps(auVar97,auVar121,4);
  if (bVar68) {
    auVar178 = auVar97;
  }
  local_438._0_4_ = (float)(~uVar70 & auVar79._0_4_) - (float)local_438._0_4_;
  local_438._4_4_ = (float)(~uVar39 & auVar79._4_4_) - (float)local_438._4_4_;
  fStack_430 = (float)(~uVar73 & auVar79._8_4_) - fStack_430;
  fStack_42c = (float)(~uVar75 & auVar79._12_4_) - fStack_42c;
  auVar82._4_4_ = -(uint)(0.0 <= (float)local_438._4_4_);
  auVar82._0_4_ = -(uint)(0.0 <= (float)local_438._0_4_);
  auVar82._8_4_ = -(uint)(0.0 <= fStack_430);
  auVar82._12_4_ = -(uint)(0.0 <= fStack_42c);
  auVar79 = blendvps(auVar124,local_398._0_16_,auVar82);
  fVar170 = auVar79._0_4_ * param_6 * param_6;
  fVar180 = auVar79._4_4_ * param_6 * param_6;
  fVar181 = auVar79._8_4_ * param_6 * param_6;
  param_6 = auVar79._12_4_ * param_6 * param_6;
  auVar126._0_4_ =
       (float)((uint)fVar170 ^ __xmm_80000000800000008000000080000000) * (float)local_438._0_4_ -
       (float)local_4e8._0_4_;
  auVar126._4_4_ =
       (float)((uint)fVar180 ^ _UNK_150651574) * (float)local_438._4_4_ - (float)local_4e8._4_4_;
  auVar126._8_4_ = (float)((uint)fVar181 ^ _UNK_150651578) * fStack_430 - fStack_4e0;
  auVar126._12_4_ = (float)((uint)param_6 ^ _UNK_15065157c) * fStack_42c - fStack_4dc;
  auVar112._0_4_ =
       ((float)local_448._0_4_ * local_5a8 + (float)local_378._0_4_ * local_598 +
        fVar132 * local_588 + ((fVar222 * local_578 - local_488 * local_568) - fVar163 * local_3e8))
       * fVar170 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar112._4_4_ =
       ((float)local_448._4_4_ * fStack_5a4 + (float)local_378._4_4_ * fStack_594 +
        fVar161 * fStack_584 +
       ((fVar228 * fStack_574 - fStack_484 * fStack_564) - fVar93 * fStack_3e4)) * fVar180 +
       _UNK_15076b1f4;
  auVar112._8_4_ =
       (fStack_440 * fStack_5a0 + fStack_370 * fStack_590 + fVar133 * fStack_580 +
       ((fVar231 * fStack_570 - fStack_480 * fStack_560) - fVar92 * fStack_3e0)) * fVar181 +
       _UNK_15076b1f8;
  auVar112._12_4_ =
       (fStack_43c * fStack_59c + fStack_36c * fStack_58c + fVar162 * fStack_57c +
       ((fVar234 * fStack_56c - fStack_47c * fStack_55c) - fVar91 * fStack_3dc)) * param_6 +
       _UNK_15076b1fc;
  auVar79 = divps(auVar126,auVar112);
  fVar170 = auVar79._0_4_;
  auVar83._0_4_ = (float)local_4e8._0_4_ + fVar170;
  fVar180 = auVar79._4_4_;
  auVar83._4_4_ = (float)local_4e8._4_4_ + fVar180;
  fVar181 = auVar79._8_4_;
  auVar83._8_4_ = fStack_4e0 + fVar181;
  fVar182 = auVar79._12_4_;
  auVar83._12_4_ = fStack_4dc + fVar182;
  if ((bVar33 & 1) != 0) {
    *pfVar1 = auVar83._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar83,1);
    *(undefined8 *)(pfVar1 + 1) = uVar25;
  }
  auVar129 = blendps(auVar78,auVar129,8);
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar83,2);
    *(undefined8 *)(pfVar1 + 2) = uVar25;
  }
  fVar222 = auVar129._0_4_ * fVar170;
  fVar228 = auVar129._4_4_ * fVar180;
  fVar231 = auVar129._8_4_ * fVar181;
  fVar234 = auVar129._12_4_ * fVar182;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar83,3);
    *(undefined8 *)(pfVar1 + 3) = uVar25;
  }
  auVar129 = blendps(auVar128,auVar216,8);
  auVar100._0_4_ = (float)local_478._0_4_ + local_5a8 * fVar222 * (float)local_448._0_4_;
  auVar100._4_4_ = (float)local_478._4_4_ + fStack_5a4 * fVar228 * (float)local_448._4_4_;
  auVar100._8_4_ = fStack_470 + fStack_5a0 * fVar231 * fStack_440;
  auVar100._12_4_ = fStack_46c + fStack_59c * fVar234 * fStack_43c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar139._0_4_) = auVar100._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + auVar139._12_4_) = uVar25;
  }
  fVar131 = auVar129._4_4_ * fVar180;
  fVar127 = auVar129._0_4_ * fVar170;
  fVar141 = auVar129._12_4_ * fVar182;
  fVar134 = auVar129._8_4_ * fVar181;
  auVar78 = blendps(auVar97,auVar178,8);
  auVar101._0_4_ =
       (float)local_508._0_4_ + local_5a8 * auVar129._0_4_ * fVar170 * (float)local_448._0_4_;
  auVar101._4_4_ =
       (float)local_508._4_4_ + fStack_5a4 * auVar129._4_4_ * fVar180 * (float)local_448._4_4_;
  auVar101._8_4_ = fStack_500 + fStack_5a0 * auVar129._8_4_ * fVar181 * fStack_440;
  auVar101._12_4_ = fStack_4fc + fStack_59c * auVar129._12_4_ * fVar182 * fStack_43c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 4 + (longlong)auVar139._0_4_) = auVar101._0_4_;
  }
  fVar170 = fVar170 * auVar78._0_4_;
  fVar180 = fVar180 * auVar78._4_4_;
  fVar181 = fVar181 * auVar78._8_4_;
  fVar182 = fVar182 * auVar78._12_4_;
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar101,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar101,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar101,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar139._12_4_) = uVar25;
  }
  fVar95 = (float)local_4c8._0_4_ + (float)local_448._0_4_ * local_5a8 * fVar170;
  auVar84._4_4_ = (float)local_4c8._4_4_ + (float)local_448._4_4_ * fStack_5a4 * fVar180;
  auVar84._0_4_ = fVar95;
  auVar84._8_4_ = fStack_4c0 + fStack_440 * fStack_5a0 * fVar181;
  auVar84._12_4_ = fStack_4bc + fStack_43c * fStack_59c * fVar182;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 8 + (longlong)auVar139._0_4_) = fVar95;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar84,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar84,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar84,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar139._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar139._0_4_) = local_5a8;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar119,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar119,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar119,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar139._12_4_) = uVar25;
  }
  local_4a8._0_4_ = auVar107._0_4_ + local_598 * fVar222 * (float)local_378._0_4_;
  local_4a8._4_4_ = auVar107._4_4_ + fStack_594 * fVar228 * (float)local_378._4_4_;
  fStack_4a0 = auVar107._8_4_ + fStack_590 * fVar231 * fStack_370;
  fStack_49c = auVar107._12_4_ + fStack_58c * fVar234 * fStack_36c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + auVar215._0_4_) = local_4a8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(_local_4a8,1);
    *(undefined8 *)(param_1 + auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(_local_4a8,2);
    *(undefined8 *)(param_1 + auVar215._8_4_) = uVar25;
  }
  uVar32 = fStack_58c * fVar141 * fStack_36c;
  uVar31 = fStack_590 * fVar134 * fStack_370;
  uVar30 = fStack_594 * fVar131 * (float)local_378._4_4_;
  uVar29 = local_598 * fVar127 * (float)local_378._0_4_;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(_local_4a8,3);
    *(undefined8 *)(param_1 + auVar215._12_4_) = uVar25;
    auVar159._0_4_ = (float)local_428._0_4_ + (float)uVar29;
    auVar159._4_4_ = (float)local_428._4_4_ + (float)uVar30;
    auVar159._8_4_ = fStack_420 + (float)uVar31;
    auVar159._12_4_ = fStack_41c + (float)uVar32;
  }
  else {
    auVar159._0_4_ = (float)local_428._0_4_ + (float)uVar29;
    auVar159._4_4_ = (float)local_428._4_4_ + (float)uVar30;
    auVar159._8_4_ = fStack_420 + (float)uVar31;
    auVar159._12_4_ = fStack_41c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar215._0_4_) = auVar159._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar159,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar159,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._8_4_) = uVar25;
  }
  uVar30 = fStack_36c * fStack_58c * fVar182;
  uVar29 = fStack_370 * fStack_590 * fVar181;
  local_378._4_4_ = (float)local_378._4_4_ * fStack_594 * fVar180;
  local_378._0_4_ = (float)local_378._0_4_ * local_598 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar159,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar215._12_4_) = uVar25;
    auVar85._0_4_ = (float)local_4b8._0_4_ + (float)local_378._0_4_;
    auVar85._4_4_ = (float)local_4b8._4_4_ + (float)local_378._4_4_;
    auVar85._8_4_ = fStack_4b0 + (float)uVar29;
    auVar85._12_4_ = fStack_4ac + (float)uVar30;
  }
  else {
    auVar85._0_4_ = (float)local_4b8._0_4_ + (float)local_378._0_4_;
    auVar85._4_4_ = (float)local_4b8._4_4_ + (float)local_378._4_4_;
    auVar85._8_4_ = fStack_4b0 + (float)uVar29;
    auVar85._12_4_ = fStack_4ac + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar215._0_4_) = auVar85._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar215._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar215._0_4_) = local_598;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar173,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar173,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar173,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar215._12_4_) = uVar25;
  }
  auVar160._0_4_ = (float)local_468._0_4_ + local_588 * fVar222 * fVar132;
  auVar160._4_4_ = (float)local_468._4_4_ + fStack_584 * fVar228 * fVar161;
  auVar160._8_4_ = fStack_460 + fStack_580 * fVar231 * fVar133;
  auVar160._12_4_ = fStack_45c + fStack_57c * fVar234 * fVar162;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar192._0_4_) = auVar160._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar160,1);
    *(undefined8 *)(param_1 + auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar160,2);
    *(undefined8 *)(param_1 + auVar192._8_4_) = uVar25;
  }
  uVar32 = fStack_57c * fVar141 * fVar162;
  uVar31 = fStack_580 * fVar134 * fVar133;
  uVar30 = fStack_584 * fVar131 * fVar161;
  uVar29 = local_588 * fVar127 * fVar132;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar160,3);
    *(undefined8 *)(param_1 + auVar192._12_4_) = uVar25;
    auVar194._0_4_ = (float)local_418._0_4_ + (float)uVar29;
    auVar194._4_4_ = (float)local_418._4_4_ + (float)uVar30;
    auVar194._8_4_ = fStack_410 + (float)uVar31;
    auVar194._12_4_ = fStack_40c + (float)uVar32;
  }
  else {
    auVar194._0_4_ = (float)local_418._0_4_ + (float)uVar29;
    auVar194._4_4_ = (float)local_418._4_4_ + (float)uVar30;
    auVar194._8_4_ = fStack_410 + (float)uVar31;
    auVar194._12_4_ = fStack_40c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar192._0_4_) = auVar194._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar194,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar194,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._8_4_) = uVar25;
  }
  uVar32 = fVar162 * fStack_57c * fVar182;
  uVar31 = fVar133 * fStack_580 * fVar181;
  uVar30 = fVar161 * fStack_584 * fVar180;
  uVar29 = fVar132 * local_588 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar194,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar192._12_4_) = uVar25;
    auVar86._0_4_ = (float)local_408._0_4_ + (float)uVar29;
    auVar86._4_4_ = (float)local_408._4_4_ + (float)uVar30;
    auVar86._8_4_ = fStack_400 + (float)uVar31;
    auVar86._12_4_ = fStack_3fc + (float)uVar32;
  }
  else {
    auVar86._0_4_ = (float)local_408._0_4_ + (float)uVar29;
    auVar86._4_4_ = (float)local_408._4_4_ + (float)uVar30;
    auVar86._8_4_ = fStack_400 + (float)uVar31;
    auVar86._12_4_ = fStack_3fc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar192._0_4_) = auVar86._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar86,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar86,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar86,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar192._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar192._0_4_) = local_588;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar192._12_4_) = uVar25;
  }
  auVar217._0_4_ = (float)local_458._0_4_ + local_578 * fVar222 * fVar142;
  auVar217._4_4_ = (float)local_458._4_4_ + fStack_574 * fVar228 * fVar143;
  auVar217._8_4_ = fStack_450 + fStack_570 * fVar231 * fVar144;
  auVar217._12_4_ = fStack_44c + fStack_56c * fVar234 * fVar145;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar177._0_4_) = auVar217._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar217,1);
    *(undefined8 *)(param_1 + auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar217,2);
    *(undefined8 *)(param_1 + auVar177._8_4_) = uVar25;
  }
  uVar32 = fStack_56c * fVar141 * fVar145;
  uVar31 = fStack_570 * fVar134 * fVar144;
  uVar30 = fStack_574 * fVar131 * fVar143;
  uVar29 = local_578 * fVar127 * fVar142;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar217,3);
    *(undefined8 *)(param_1 + auVar177._12_4_) = uVar25;
    auVar186._0_4_ = (float)local_4d8._0_4_ + (float)uVar29;
    auVar186._4_4_ = (float)local_4d8._4_4_ + (float)uVar30;
    auVar186._8_4_ = fStack_4d0 + (float)uVar31;
    auVar186._12_4_ = fStack_4cc + (float)uVar32;
  }
  else {
    auVar186._0_4_ = (float)local_4d8._0_4_ + (float)uVar29;
    auVar186._4_4_ = (float)local_4d8._4_4_ + (float)uVar30;
    auVar186._8_4_ = fStack_4d0 + (float)uVar31;
    auVar186._12_4_ = fStack_4cc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar177._0_4_) = auVar186._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar186,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar186,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._8_4_) = uVar25;
  }
  uVar32 = fVar145 * fStack_56c * fVar182;
  uVar31 = fVar144 * fStack_570 * fVar181;
  uVar30 = fVar143 * fStack_574 * fVar180;
  uVar29 = fVar142 * local_578 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar186,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar177._12_4_) = uVar25;
    auVar179._0_4_ = (float)local_538._0_4_ + (float)uVar29;
    auVar179._4_4_ = (float)local_538._4_4_ + (float)uVar30;
    auVar179._8_4_ = fStack_530 + (float)uVar31;
    auVar179._12_4_ = fStack_52c + (float)uVar32;
  }
  else {
    auVar179._0_4_ = (float)local_538._0_4_ + (float)uVar29;
    auVar179._4_4_ = (float)local_538._4_4_ + (float)uVar30;
    auVar179._8_4_ = fStack_530 + (float)uVar31;
    auVar179._12_4_ = fStack_52c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar177._0_4_) = auVar179._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar179,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar179,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar179,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar177._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar177._0_4_) = local_578;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar156,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar156,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar156,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar177._12_4_) = uVar25;
  }
  auVar169._0_4_ = (float)local_528._0_4_ + local_568 * fVar222 * local_488;
  auVar169._4_4_ = (float)local_528._4_4_ + fStack_564 * fVar228 * fStack_484;
  auVar169._8_4_ = fStack_520 + fStack_560 * fVar231 * fStack_480;
  auVar169._12_4_ = fStack_51c + fStack_55c * fVar234 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar158._0_4_) = auVar169._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar169,1);
    *(undefined8 *)(param_1 + auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar169,2);
    *(undefined8 *)(param_1 + auVar158._8_4_) = uVar25;
  }
  uVar32 = fStack_55c * fVar141 * fStack_47c;
  uVar31 = fStack_560 * fVar134 * fStack_480;
  uVar30 = fStack_564 * fVar131 * fStack_484;
  uVar29 = local_568 * fVar127 * local_488;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar169,3);
    *(undefined8 *)(param_1 + auVar158._12_4_) = uVar25;
    auVar151._0_4_ = (float)local_518._0_4_ + (float)uVar29;
    auVar151._4_4_ = (float)local_518._4_4_ + (float)uVar30;
    auVar151._8_4_ = fStack_510 + (float)uVar31;
    auVar151._12_4_ = fStack_50c + (float)uVar32;
  }
  else {
    auVar151._0_4_ = (float)local_518._0_4_ + (float)uVar29;
    auVar151._4_4_ = (float)local_518._4_4_ + (float)uVar30;
    auVar151._8_4_ = fStack_510 + (float)uVar31;
    auVar151._12_4_ = fStack_50c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar158._0_4_) = auVar151._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar151,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar151,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._8_4_) = uVar25;
  }
  uVar32 = fStack_47c * fStack_55c * fVar182;
  uVar31 = fStack_480 * fStack_560 * fVar181;
  uVar30 = fStack_484 * fStack_564 * fVar180;
  uVar29 = local_488 * local_568 * fVar170;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar151,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar158._12_4_) = uVar25;
    auVar87._0_4_ = (float)local_558._0_4_ + (float)uVar29;
    auVar87._4_4_ = (float)local_558._4_4_ + (float)uVar30;
    auVar87._8_4_ = fStack_550 + (float)uVar31;
    auVar87._12_4_ = fStack_54c + (float)uVar32;
  }
  else {
    auVar87._0_4_ = (float)local_558._0_4_ + (float)uVar29;
    auVar87._4_4_ = (float)local_558._4_4_ + (float)uVar30;
    auVar87._8_4_ = fStack_550 + (float)uVar31;
    auVar87._12_4_ = fStack_54c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar158._0_4_) = auVar87._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar87,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar87,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar87,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar158._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar158._0_4_) = local_568;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar108,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar108,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar108,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar158._12_4_) = uVar25;
  }
  auVar113._0_4_ = local_3c8 + fVar222 * local_3e8 * fVar163;
  auVar113._4_4_ = fStack_3c4 + fVar228 * fStack_3e4 * fVar93;
  auVar113._8_4_ = fStack_3c0 + fVar231 * fStack_3e0 * fVar92;
  auVar113._12_4_ = fStack_3bc + fVar234 * fStack_3dc * fVar91;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar149._0_4_) = auVar113._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar113,1);
    *(undefined8 *)(param_1 + auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar113,2);
    *(undefined8 *)(param_1 + auVar149._8_4_) = uVar25;
  }
  uVar32 = fVar141 * fStack_3dc * fVar91;
  uVar31 = fVar134 * fStack_3e0 * fVar92;
  uVar30 = fVar131 * fStack_3e4 * fVar93;
  uVar29 = fVar127 * local_3e8 * fVar163;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar113,3);
    *(undefined8 *)(param_1 + auVar149._12_4_) = uVar25;
    auVar88._0_4_ = local_3b8 + (float)uVar29;
    auVar88._4_4_ = fStack_3b4 + (float)uVar30;
    auVar88._8_4_ = fStack_3b0 + (float)uVar31;
    auVar88._12_4_ = fStack_3ac + (float)uVar32;
  }
  else {
    auVar88._0_4_ = local_3b8 + (float)uVar29;
    auVar88._4_4_ = fStack_3b4 + (float)uVar30;
    auVar88._8_4_ = fStack_3b0 + (float)uVar31;
    auVar88._12_4_ = fStack_3ac + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar149._0_4_) = auVar88._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._8_4_) = uVar25;
  }
  uVar32 = fVar91 * fVar182 * fStack_3dc;
  uVar31 = fVar92 * fVar181 * fStack_3e0;
  uVar30 = fVar93 * fVar180 * fStack_3e4;
  uVar29 = fVar163 * fVar170 * local_3e8;
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar149._12_4_) = uVar25;
    auVar89._0_4_ = fVar152 + (float)uVar29;
    auVar89._4_4_ = fVar153 + (float)uVar30;
    auVar89._8_4_ = fVar154 + (float)uVar31;
    auVar89._12_4_ = fVar155 + (float)uVar32;
  }
  else {
    auVar89._0_4_ = fVar152 + (float)uVar29;
    auVar89._4_4_ = fVar153 + (float)uVar30;
    auVar89._8_4_ = fVar154 + (float)uVar31;
    auVar89._12_4_ = fVar155 + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar149._0_4_) = auVar89._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar89,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar89,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar89,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar149._12_4_) = uVar25;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar149._0_4_) = local_3e8;
  }
  if ((bVar33 & 2) != 0) {
    uVar25 = extractps(auVar199,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._4_4_) = uVar25;
  }
  if ((bVar33 & 4) != 0) {
    uVar25 = extractps(auVar199,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._8_4_) = uVar25;
  }
  if ((char)bVar33 < '\0') {
    uVar25 = extractps(auVar199,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar149._12_4_) = uVar25;
  }
  return;
}

// ApplyXPBDEmbeddedFaceSpringDampingConstraints_sse4 @ 140901b00

/* WARNING: Removing unreachable block (ram,0x000140903f09) */
/* WARNING: Removing unreachable block (ram,0x000140903f54) */
/* WARNING: Removing unreachable block (ram,0x000140905e6e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDEmbeddedFaceSpringDampingConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,byte param_8,float *param_9,longlong param_10,
               byte param_11,float *param_12,longlong param_13,byte param_14,float *param_15,
               longlong param_16,uint param_17)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  byte bVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint *puVar47;
  longlong lVar48;
  ulonglong uVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  longlong lVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  byte bVar57;
  uint uVar58;
  ulonglong uVar59;
  longlong lVar60;
  longlong lVar61;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  longlong lVar68;
  longlong lVar69;
  longlong lVar70;
  ulonglong uVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  bool bVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  float fVar83;
  float fVar98;
  float fVar100;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar101;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar99;
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
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar121;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar137;
  float fVar141;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar138;
  float fVar139;
  float fVar142;
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar133 [16];
  float fVar140;
  float fVar144;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar150;
  float fVar152;
  float fVar158;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar168;
  float fVar169;
  float fVar170;
  undefined1 auVar153 [16];
  float fVar151;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar171;
  float fVar172;
  float fVar173;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar177;
  float fVar178;
  float fVar179;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  float fVar180;
  float fVar181;
  float fVar187;
  float fVar188;
  float fVar189;
  undefined1 auVar182 [16];
  float fVar190;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  float fVar191;
  float fVar192;
  float fVar193;
  float fVar202;
  float fVar203;
  float fVar204;
  float fVar205;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  float fVar206;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  float fVar207;
  float fVar208;
  float fVar214;
  float fVar215;
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar216;
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  float fVar217;
  float fVar227;
  float fVar228;
  undefined1 auVar218 [16];
  float fVar229;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  float fVar236;
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  float fVar240;
  float fVar241;
  undefined1 auVar237 [16];
  float fVar242;
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  float fVar250;
  float fVar251;
  undefined1 auVar243 [16];
  float fVar252;
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  float fVar257;
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  float fVar264;
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  undefined1 local_6e8 [8];
  float fStack_6e0;
  float fStack_6dc;
  undefined1 local_6d8 [8];
  float fStack_6d0;
  float fStack_6cc;
  undefined1 local_6c8 [8];
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  undefined1 local_678 [8];
  float fStack_670;
  float fStack_66c;
  float local_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_658;
  float fStack_654;
  float fStack_650;
  float fStack_64c;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  float local_638;
  float fStack_634;
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  undefined1 local_618 [8];
  float fStack_610;
  float fStack_60c;
  undefined1 local_608 [16];
  undefined1 local_5f8 [8];
  float fStack_5f0;
  float fStack_5ec;
  float local_5e8;
  float fStack_5e4;
  float fStack_5e0;
  float fStack_5dc;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float local_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  undefined1 local_568 [8];
  float fStack_560;
  float fStack_55c;
  undefined1 local_548 [8];
  float fStack_540;
  float fStack_53c;
  undefined1 local_538 [16];
  undefined1 local_528 [8];
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  undefined1 local_508 [8];
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  undefined1 local_4b8 [8];
  float fStack_4b0;
  float fStack_4ac;
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  undefined1 local_498 [16];
  undefined1 local_488 [8];
  float fStack_480;
  float fStack_47c;
  undefined8 local_478;
  float fStack_470;
  float fStack_46c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 local_418 [8];
  float fStack_410;
  float fStack_40c;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  uint local_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  undefined1 auVar114 [16];
  undefined1 auVar157 [16];
  undefined1 auVar186 [16];
  
  uVar58 = param_17 + 3;
  if (-1 < (int)param_17) {
    uVar58 = param_17;
  }
  uVar58 = uVar58 & 0xfffffffc;
  uVar59 = (ulonglong)uVar58;
  if ((int)uVar58 < 1) {
    uVar49 = 0;
  }
  else {
    uVar59 = 0x14;
    uVar49 = 0;
    uVar67 = 0;
    do {
      uVar66 = uVar67 & 0xffffffff;
      fStack_49c = *param_9;
      local_4a8._0_4_ = fStack_49c;
      local_4a8._4_4_ = fStack_49c;
      fStack_4a0 = fStack_49c;
      if ((param_8 & 1) != 0) {
        pfVar1 = (float *)(param_10 + uVar66);
        fVar264 = param_9[1];
        local_4a8._0_4_ = fStack_49c + fVar264 * *pfVar1;
        local_4a8._4_4_ = fStack_49c + fVar264 * pfVar1[1];
        fStack_4a0 = fStack_49c + fVar264 * pfVar1[2];
        fStack_49c = fStack_49c + fVar264 * pfVar1[3];
      }
      fStack_4fc = *param_12;
      local_508._0_4_ = fStack_4fc;
      local_508._4_4_ = fStack_4fc;
      fStack_500 = fStack_4fc;
      if ((param_11 & 1) != 0) {
        pfVar1 = (float *)(param_13 + uVar66);
        fVar264 = param_12[1];
        local_508._0_4_ = fStack_4fc + fVar264 * *pfVar1;
        local_508._4_4_ = fStack_4fc + fVar264 * pfVar1[1];
        fStack_500 = fStack_4fc + fVar264 * pfVar1[2];
        fStack_4fc = fStack_4fc + fVar264 * pfVar1[3];
      }
      auVar107 = *(undefined1 (*) [16])(param_3 + -0x50 + uVar59 * 4);
      auVar210 = *(undefined1 (*) [16])(param_3 + -0x40 + uVar59 * 4);
      auVar232 = *(undefined1 (*) [16])(param_3 + -0x30 + uVar59 * 4);
      auVar220 = *(undefined1 (*) [16])(param_3 + -0x20 + uVar59 * 4);
      auVar108 = *(undefined1 (*) [16])(param_3 + -0x10 + uVar59 * 4);
      auVar109 = *(undefined1 (*) [16])(param_3 + uVar59 * 4);
      auVar183 = pblendw(auVar232,auVar107,0xf0);
      auVar86 = pblendw(auVar107,auVar210,0xf0);
      auVar87 = pblendw(auVar109,auVar220,0xf0);
      auVar123 = pblendw(auVar220,auVar108,0xf0);
      auVar106 = pblendw(auVar210,auVar232,0xf0);
      auVar131 = pblendw(auVar108,auVar109,0xf0);
      auVar107 = *(undefined1 (*) [16])(param_4 + -0x50 + uVar59 * 4);
      auVar210 = *(undefined1 (*) [16])(param_4 + -0x40 + uVar59 * 4);
      auVar232 = *(undefined1 (*) [16])(param_4 + -0x30 + uVar59 * 4);
      auVar220 = *(undefined1 (*) [16])(param_4 + -0x20 + uVar59 * 4);
      auVar108 = *(undefined1 (*) [16])(param_4 + -0x10 + uVar59 * 4);
      auVar109 = *(undefined1 (*) [16])(param_4 + uVar59 * 4);
      auVar237 = blendps(auVar210,auVar107,3);
      auVar218 = blendps(auVar108,auVar220,3);
      auVar243 = blendps(auVar107,auVar232,3);
      auVar107 = blendps(auVar220,auVar109,3);
      auVar232 = blendps(auVar232,auVar210,3);
      auVar210 = blendps(auVar109,auVar108,3);
      fVar240 = auVar237._4_4_;
      fVar241 = auVar237._8_4_;
      fVar242 = auVar237._12_4_;
      fVar217 = auVar218._0_4_;
      fVar227 = auVar218._4_4_;
      fVar228 = auVar218._8_4_;
      fVar229 = auVar218._12_4_;
      fVar191 = auVar237._0_4_;
      fVar250 = auVar243._4_4_;
      fVar251 = auVar243._8_4_;
      fVar252 = auVar243._12_4_;
      fVar104 = auVar107._0_4_;
      fVar116 = auVar107._4_4_;
      fVar117 = auVar107._8_4_;
      fVar120 = auVar107._12_4_;
      fVar257 = auVar243._0_4_;
      fVar236 = auVar232._12_4_;
      fVar208 = auVar210._0_4_;
      fVar214 = auVar210._4_4_;
      fVar215 = auVar210._8_4_;
      fVar216 = auVar210._12_4_;
      fVar105 = auVar232._0_4_;
      fVar99 = auVar232._4_4_;
      fVar103 = auVar232._8_4_;
      lVar37 = (longlong)(auVar86._0_4_ << 4);
      lVar60 = (longlong)(auVar86._8_4_ * 0x10);
      lVar51 = (longlong)(auVar123._0_4_ << 4);
      lVar34 = (longlong)(auVar123._8_4_ << 4);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar60),
                          0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + lVar51),0x20);
      auVar108 = insertps(auVar107,*(undefined4 *)(param_1 + lVar34),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                          *(undefined4 *)(param_1 + 4 + lVar60),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar51),0x20);
      auVar132 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar34),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                          *(undefined4 *)(param_1 + 8 + lVar60),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 8 + lVar51),0x20);
      auVar244 = insertps(auVar107,*(undefined4 *)(param_1 + 8 + lVar34),0x30);
      lVar61 = (longlong)(auVar86._4_4_ << 4);
      lVar52 = (longlong)(auVar86._12_4_ * 0x10);
      lVar38 = (longlong)(auVar123._4_4_ << 4);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + lVar61)),*(undefined4 *)(param_1 + lVar52),
                          0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + lVar38),0x20);
      lVar68 = (longlong)(auVar123._12_4_ << 4);
      auVar153 = insertps(auVar107,*(undefined4 *)(param_1 + lVar68),0x30);
      auVar107 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar61)),
                          *(undefined4 *)(param_1 + 4 + lVar52),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar38),0x20);
      auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + 4 + lVar68),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar61)),
                          *(undefined4 *)(param_1 + 8 + lVar52),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar38),0x20);
      auVar109 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar68),0x30);
      lVar53 = (longlong)(auVar183._8_4_ << 4);
      lVar45 = (longlong)(auVar183._0_4_ * 0x10);
      lVar39 = (longlong)(auVar87._8_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar53)),*(undefined4 *)(param_1 + lVar45),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar39),0x20);
      lVar62 = (longlong)(auVar87._0_4_ << 4);
      auVar194 = insertps(auVar210,*(undefined4 *)(param_1 + lVar62),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar53)),
                          *(undefined4 *)(param_1 + 4 + lVar45),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar39),0x20);
      auVar218 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar62),0x30);
      fVar127 = fVar251 * auVar194._0_4_ + fVar240 * auVar153._0_4_ + fVar191 * auVar108._0_4_;
      fVar137 = fVar257 * auVar194._4_4_ + fVar242 * auVar153._4_4_ + fVar241 * auVar108._4_4_;
      fVar141 = fVar117 * auVar194._8_4_ + fVar227 * auVar153._8_4_ + fVar217 * auVar108._8_4_;
      fVar145 = fVar104 * auVar194._12_4_ + fVar229 * auVar153._12_4_ + fVar228 * auVar108._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar53)),
                          *(undefined4 *)(param_1 + 8 + lVar45),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar39),0x20);
      auVar184 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar62),0x30);
      lVar69 = (longlong)(auVar183._12_4_ << 4);
      lVar54 = (longlong)(auVar183._4_4_ * 0x10);
      lVar70 = (longlong)(auVar87._12_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar69)),*(undefined4 *)(param_1 + lVar54),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar70),0x20);
      lVar63 = (longlong)(auVar87._4_4_ << 4);
      auVar219 = insertps(auVar210,*(undefined4 *)(param_1 + lVar63),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar69)),
                          *(undefined4 *)(param_1 + 4 + lVar54),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar70),0x20);
      auVar195 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar63),0x30);
      fVar128 = fVar251 * auVar218._0_4_ + fVar240 * auVar107._0_4_ + fVar191 * auVar132._0_4_;
      fVar138 = fVar257 * auVar218._4_4_ + fVar242 * auVar107._4_4_ + fVar241 * auVar132._4_4_;
      fVar142 = fVar117 * auVar218._8_4_ + fVar227 * auVar107._8_4_ + fVar217 * auVar132._8_4_;
      fVar146 = fVar104 * auVar218._12_4_ + fVar229 * auVar107._12_4_ + fVar228 * auVar132._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar69)),
                          *(undefined4 *)(param_1 + 8 + lVar54),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar70),0x20);
      fVar102 = fVar251 * auVar184._0_4_ + fVar240 * auVar109._0_4_ + fVar191 * auVar244._0_4_;
      fVar115 = fVar257 * auVar184._4_4_ + fVar242 * auVar109._4_4_ + fVar241 * auVar244._4_4_;
      fVar119 = fVar117 * auVar184._8_4_ + fVar227 * auVar109._8_4_ + fVar217 * auVar244._8_4_;
      fVar121 = fVar104 * auVar184._12_4_ + fVar229 * auVar109._12_4_ + fVar228 * auVar244._12_4_;
      auVar238 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar63),0x30);
      lVar40 = (longlong)(auVar106._0_4_ << 4);
      lVar44 = (longlong)(auVar106._8_4_ * 0x10);
      lVar72 = (longlong)(auVar131._0_4_ << 4);
      lVar73 = (longlong)(auVar131._8_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar40)),*(undefined4 *)(param_1 + lVar44),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar72),0x20);
      auVar237 = insertps(auVar210,*(undefined4 *)(param_1 + lVar73),0x30);
      auVar124._0_4_ = (float)((uint)fVar252 ^ __xmm_80000000800000008000000080000000);
      auVar124._4_4_ = (float)((uint)fVar250 ^ _UNK_150651574);
      auVar124._8_4_ = (float)((uint)fVar120 ^ _UNK_150651578);
      auVar124._12_4_ = (float)((uint)fVar116 ^ _UNK_15065157c);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar40)),
                          *(undefined4 *)(param_1 + 4 + lVar44),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar72),0x20);
      auVar243 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar73),0x30);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar40)),
                          *(undefined4 *)(param_1 + 8 + lVar44),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar72),0x20);
      auVar110 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar73),0x30);
      lVar48 = (longlong)(auVar106._4_4_ << 4);
      lVar74 = (longlong)(auVar106._12_4_ * 0x10);
      lVar75 = (longlong)(auVar131._4_4_ << 4);
      lVar43 = (longlong)(auVar131._12_4_ << 4);
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + lVar48)),*(undefined4 *)(param_1 + lVar74),
                          0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + lVar75),0x20);
      auVar111 = insertps(auVar210,*(undefined4 *)(param_1 + lVar43),0x30);
      fVar129 = (auVar219._0_4_ * auVar124._0_4_ - fVar105 * auVar237._0_4_) -
                fVar99 * auVar111._0_4_;
      fVar139 = (auVar219._4_4_ * auVar124._4_4_ - fVar103 * auVar237._4_4_) -
                fVar236 * auVar111._4_4_;
      fVar143 = (auVar219._8_4_ * auVar124._8_4_ - fVar208 * auVar237._8_4_) -
                fVar214 * auVar111._8_4_;
      fVar147 = (auVar219._12_4_ * auVar124._12_4_ - fVar215 * auVar237._12_4_) -
                fVar216 * auVar111._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar48)),
                          *(undefined4 *)(param_1 + 4 + lVar74),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar75),0x20);
      auVar112 = insertps(auVar210,*(undefined4 *)(param_1 + 4 + lVar43),0x30);
      fVar192 = (auVar195._0_4_ * auVar124._0_4_ - fVar105 * auVar243._0_4_) -
                fVar99 * auVar112._0_4_;
      fVar202 = (auVar195._4_4_ * auVar124._4_4_ - fVar103 * auVar243._4_4_) -
                fVar236 * auVar112._4_4_;
      fVar204 = (auVar195._8_4_ * auVar124._8_4_ - fVar208 * auVar243._8_4_) -
                fVar214 * auVar112._8_4_;
      fVar206 = (auVar195._12_4_ * auVar124._12_4_ - fVar215 * auVar243._12_4_) -
                fVar216 * auVar112._12_4_;
      auVar210 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar48)),
                          *(undefined4 *)(param_1 + 8 + lVar74),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar75),0x20);
      auVar113 = insertps(auVar210,*(undefined4 *)(param_1 + 8 + lVar43),0x30);
      fVar151 = (auVar238._0_4_ * auVar124._0_4_ - fVar105 * auVar110._0_4_) -
                fVar99 * auVar113._0_4_;
      fVar159 = (auVar238._4_4_ * auVar124._4_4_ - fVar103 * auVar110._4_4_) -
                fVar236 * auVar113._4_4_;
      fVar165 = (auVar238._8_4_ * auVar124._8_4_ - fVar208 * auVar110._8_4_) -
                fVar214 * auVar113._8_4_;
      fVar171 = (auVar238._12_4_ * auVar124._12_4_ - fVar215 * auVar110._12_4_) -
                fVar216 * auVar113._12_4_;
      uVar50 = *(uint *)(param_1 + 0xc + lVar37);
      uVar80 = *(uint *)(param_1 + 0xc + lVar60);
      auVar210 = insertps(ZEXT416(uVar50),ZEXT416(uVar80),0x10);
      uVar82 = *(uint *)(param_1 + 0xc + lVar51);
      auVar210 = insertps(auVar210,ZEXT416(uVar82),0x20);
      uVar3 = *(uint *)(param_1 + 0xc + lVar34);
      auVar232 = insertps(auVar210,ZEXT416(uVar3),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar61);
      uVar5 = *(uint *)(param_1 + 0xc + lVar52);
      auVar210 = insertps(ZEXT416(uVar4),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar38);
      auVar210 = insertps(auVar210,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar68);
      auVar210 = insertps(auVar210,ZEXT416(uVar7),0x30);
      fVar181 = auVar232._0_4_;
      fVar160 = auVar232._4_4_;
      fVar166 = auVar232._8_4_;
      fVar172 = auVar232._12_4_;
      fVar122 = auVar210._0_4_;
      fVar162 = auVar210._4_4_;
      fVar193 = auVar210._8_4_;
      fVar148 = auVar210._12_4_;
      uVar8 = *(uint *)(param_1 + 0xc + lVar53);
      uVar9 = *(uint *)(param_1 + 0xc + lVar45);
      auVar210 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar39);
      auVar210 = insertps(auVar210,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar62);
      auVar210 = insertps(auVar210,ZEXT416(uVar11),0x30);
      fVar130 = auVar210._0_4_;
      fVar163 = auVar210._4_4_;
      fVar203 = auVar210._8_4_;
      fVar149 = auVar210._12_4_;
      uVar12 = *(uint *)(param_1 + 0xc + lVar69);
      uVar13 = *(uint *)(param_1 + 0xc + lVar54);
      auVar210 = insertps(ZEXT416(uVar12),ZEXT416(uVar13),0x10);
      uVar14 = *(uint *)(param_1 + 0xc + lVar70);
      auVar210 = insertps(auVar210,ZEXT416(uVar14),0x20);
      uVar15 = *(uint *)(param_1 + 0xc + lVar63);
      auVar232 = insertps(auVar210,ZEXT416(uVar15),0x30);
      uVar16 = *(uint *)(param_1 + 0xc + lVar40);
      uVar17 = *(uint *)(param_1 + 0xc + lVar44);
      auVar210 = insertps(ZEXT416(uVar16),ZEXT416(uVar17),0x10);
      uVar18 = *(uint *)(param_1 + 0xc + lVar72);
      auVar210 = insertps(auVar210,ZEXT416(uVar18),0x20);
      uVar19 = *(uint *)(param_1 + 0xc + lVar73);
      auVar210 = insertps(auVar210,ZEXT416(uVar19),0x30);
      fVar188 = auVar232._0_4_;
      fVar161 = auVar232._4_4_;
      fVar167 = auVar232._8_4_;
      fVar173 = auVar232._12_4_;
      fVar140 = auVar210._0_4_;
      fVar168 = auVar210._4_4_;
      fVar205 = auVar210._8_4_;
      fVar118 = auVar210._12_4_;
      lVar64 = (longlong)(auVar86._0_4_ * 3);
      lVar35 = (longlong)(auVar86._8_4_ * 3);
      auVar245 = insertps(ZEXT416(*(uint *)(param_2 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + lVar35 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar35 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar64 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar35 * 4),0x10);
      uVar20 = *(uint *)(param_1 + 0xc + lVar48);
      uVar21 = *(uint *)(param_1 + 0xc + lVar74);
      auVar210 = insertps(ZEXT416(uVar20),ZEXT416(uVar21),0x10);
      uVar22 = *(uint *)(param_1 + 0xc + lVar75);
      auVar210 = insertps(auVar210,ZEXT416(uVar22),0x20);
      uVar23 = *(uint *)(param_1 + 0xc + lVar43);
      auVar210 = insertps(auVar210,ZEXT416(uVar23),0x30);
      fVar144 = auVar210._0_4_;
      fVar169 = auVar210._4_4_;
      fVar207 = auVar210._8_4_;
      fVar152 = auVar210._12_4_;
      lVar35 = (longlong)(auVar123._0_4_ * 3);
      auVar245 = insertps(auVar245,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar123._8_4_ * 3);
      auVar246 = insertps(auVar245,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar221 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar196 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar86._4_4_ * 3);
      lVar64 = (longlong)(auVar86._12_4_ * 3);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar123._4_4_ * 3);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar123._12_4_ * 3);
      auVar245 = insertps(auVar232,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar174 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar86 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar183._8_4_ * 3);
      lVar64 = (longlong)(auVar183._0_4_ * 3);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar87._8_4_ * 3);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar87._0_4_ * 3);
      auVar233 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar123 = insertps(auVar210,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar154 = insertps(auVar232,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar183._12_4_ * 3);
      lVar64 = (longlong)(auVar183._4_4_ * 3);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar87._12_4_ * 3);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar87._4_4_ * 3);
      auVar247 = insertps(auVar220,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar222 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar197 = insertps(auVar210,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      lVar35 = (longlong)(auVar106._0_4_ * 3);
      lVar64 = (longlong)(auVar106._8_4_ * 3);
      lVar55 = (longlong)(auVar131._0_4_ * 3);
      lVar65 = (longlong)(auVar131._8_4_ * 3);
      auVar210 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar55 * 4),0x20);
      auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + lVar65 * 4),0x30);
      auVar232 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar55 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 8 + lVar55 * 4),0x20);
      auVar232 = insertps(auVar232,*(undefined4 *)(param_2 + 4 + lVar65 * 4),0x30);
      auVar87 = insertps(auVar220,*(undefined4 *)(param_2 + 8 + lVar65 * 4),0x30);
      lVar35 = (longlong)(auVar106._4_4_ * 3);
      lVar64 = (longlong)(auVar106._12_4_ * 3);
      auVar106 = insertps(ZEXT416(*(uint *)(param_2 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + lVar64 * 4),0x10);
      auVar220 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar64 * 4),0x10);
      auVar183 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar35 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar64 * 4),0x10);
      lVar35 = (longlong)(auVar131._4_4_ * 3);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_2 + lVar35 * 4),0x20);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x20);
      auVar183 = insertps(auVar183,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x20);
      lVar35 = (longlong)(auVar131._12_4_ * 3);
      auVar106 = insertps(auVar106,*(undefined4 *)(param_2 + lVar35 * 4),0x30);
      auVar220 = insertps(auVar220,*(undefined4 *)(param_2 + 4 + lVar35 * 4),0x30);
      auVar131 = insertps(auVar183,*(undefined4 *)(param_2 + 8 + lVar35 * 4),0x30);
      fVar264 = *param_15;
      fVar177 = fVar264;
      fVar178 = fVar264;
      fVar179 = fVar264;
      if ((param_14 & 1) != 0) {
        pfVar1 = (float *)(param_16 + uVar66);
        fVar83 = param_15[1];
        fVar177 = fVar264 + fVar83 * pfVar1[1];
        fVar178 = fVar264 + fVar83 * pfVar1[2];
        fVar179 = fVar264 + fVar83 * pfVar1[3];
        fVar264 = fVar264 + fVar83 * *pfVar1;
      }
      auVar258._0_4_ = fVar127 - fVar129;
      auVar258._4_4_ = fVar137 - fVar139;
      auVar258._8_4_ = fVar141 - fVar143;
      auVar258._12_4_ = fVar145 - fVar147;
      auVar253._0_4_ = fVar128 - fVar192;
      auVar253._4_4_ = fVar138 - fVar202;
      auVar253._8_4_ = fVar142 - fVar204;
      auVar253._12_4_ = fVar146 - fVar206;
      auVar230._0_4_ = fVar102 - fVar151;
      auVar230._4_4_ = fVar115 - fVar159;
      auVar230._8_4_ = fVar119 - fVar165;
      auVar230._12_4_ = fVar121 - fVar171;
      auVar254._0_4_ =
           auVar230._0_4_ * auVar230._0_4_ +
           auVar253._0_4_ * auVar253._0_4_ + auVar258._0_4_ * auVar258._0_4_;
      auVar254._4_4_ =
           auVar230._4_4_ * auVar230._4_4_ +
           auVar253._4_4_ * auVar253._4_4_ + auVar258._4_4_ * auVar258._4_4_;
      auVar254._8_4_ =
           auVar230._8_4_ * auVar230._8_4_ +
           auVar253._8_4_ * auVar253._8_4_ + auVar258._8_4_ * auVar258._8_4_;
      auVar254._12_4_ =
           auVar230._12_4_ * auVar230._12_4_ +
           auVar253._12_4_ * auVar253._12_4_ + auVar258._12_4_ * auVar258._12_4_;
      auVar182 = sqrtps(auVar124,auVar254);
      uVar77 = -(uint)(auVar254._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar78 = -(uint)(auVar254._4_4_ < _UNK_1506895e4);
      uVar79 = -(uint)(auVar254._8_4_ < _UNK_1506895e8);
      uVar81 = -(uint)(auVar254._12_4_ < _UNK_1506895ec);
      auVar260._4_4_ = uVar78;
      auVar260._0_4_ = uVar77;
      auVar260._8_4_ = uVar79;
      auVar260._12_4_ = uVar81;
      auVar259 = divps(auVar258,auVar182);
      auVar183._4_4_ = _UNK_15076b1f4;
      auVar183._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar183._8_4_ = _UNK_15076b1f8;
      auVar183._12_4_ = _UNK_15076b1fc;
      auVar260 = blendvps(auVar259,auVar183,auVar260);
      auVar183 = *(undefined1 (*) [16])(param_5 + uVar66);
      auVar85._4_4_ = -(uint)(0.0 <= (float)(~uVar78 & auVar182._4_4_) - auVar183._4_4_);
      auVar85._0_4_ = -(uint)(0.0 <= (float)(~uVar77 & auVar182._0_4_) - auVar183._0_4_);
      auVar259._4_4_ = _UNK_15076b1f4;
      auVar259._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar259._8_4_ = _UNK_15076b1f8;
      auVar259._12_4_ = _UNK_15076b1fc;
      auVar259 = divps(auVar259,auVar183);
      auVar84._4_4_ = -(uint)(auVar183._4_4_ < _UNK_1506895d4);
      auVar84._0_4_ = -(uint)(auVar183._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar84._8_4_ = -(uint)(auVar183._8_4_ < _UNK_1506895d8);
      auVar84._12_4_ = -(uint)(auVar183._12_4_ < _UNK_1506895dc);
      auVar231._4_4_ = _UNK_15076b1f4;
      auVar231._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar231._8_4_ = _UNK_15076b1f8;
      auVar231._12_4_ = _UNK_15076b1fc;
      auVar259 = blendvps(auVar259,auVar231,auVar84);
      auVar85._8_4_ = -(uint)(0.0 <= (float)(~uVar79 & auVar182._8_4_) - auVar183._8_4_);
      auVar85._12_4_ = -(uint)(0.0 <= (float)(~uVar81 & auVar182._12_4_) - auVar183._12_4_);
      auVar183 = blendvps(_local_508,_local_4a8,auVar85);
      auVar254 = divps(auVar253,auVar182);
      auVar231 = divps(auVar230,auVar182);
      fVar150 = (float)(~uVar77 & auVar254._0_4_);
      fVar158 = (float)(~uVar78 & auVar254._4_4_);
      fVar164 = (float)(~uVar79 & auVar254._8_4_);
      fVar170 = (float)(~uVar81 & auVar254._12_4_);
      fVar180 = (float)(~uVar77 & auVar231._0_4_);
      fVar187 = (float)(~uVar78 & auVar231._4_4_);
      fVar189 = (float)(~uVar79 & auVar231._8_4_);
      fVar190 = (float)(~uVar81 & auVar231._12_4_);
      auVar182._0_4_ =
           fVar251 * fVar130 + fVar240 * fVar122 + fVar191 * fVar181 +
           ((fVar188 * auVar124._0_4_ - fVar105 * fVar140) - fVar99 * fVar144);
      auVar182._4_4_ =
           fVar257 * fVar163 + fVar242 * fVar162 + fVar241 * fVar160 +
           ((fVar161 * auVar124._4_4_ - fVar103 * fVar168) - fVar236 * fVar169);
      auVar182._8_4_ =
           fVar117 * fVar203 + fVar227 * fVar193 + fVar217 * fVar166 +
           ((fVar167 * auVar124._8_4_ - fVar208 * fVar205) - fVar214 * fVar207);
      auVar182._12_4_ =
           fVar104 * fVar149 + fVar229 * fVar148 + fVar228 * fVar172 +
           ((fVar173 * auVar124._12_4_ - fVar215 * fVar118) - fVar216 * fVar152);
      auVar183 = divps(auVar183,auVar182);
      auVar183 = sqrtps(auVar85,auVar183);
      fVar83 = auVar183._0_4_ * (fVar264 + fVar264) * auVar259._0_4_ * param_7;
      fVar98 = auVar183._4_4_ * (fVar177 + fVar177) * auVar259._4_4_ * param_7;
      fVar100 = auVar183._8_4_ * (fVar178 + fVar178) * auVar259._8_4_ * param_7;
      fVar101 = auVar183._12_4_ * (fVar179 + fVar179) * auVar259._12_4_ * param_7;
      pfVar1 = (float *)(param_6 + uVar66);
      fVar264 = *pfVar1;
      fVar177 = pfVar1[1];
      fVar178 = pfVar1[2];
      fVar179 = pfVar1[3];
      auVar209._0_4_ =
           ((((fVar102 -
              (auVar154._0_4_ * fVar251 + auVar86._0_4_ * fVar240 + auVar196._0_4_ * fVar191)) -
             fVar151) +
            ((auVar197._0_4_ * auVar124._0_4_ - auVar87._0_4_ * fVar105) - auVar131._0_4_ * fVar99))
            * fVar180 +
           (((fVar128 -
             (auVar123._0_4_ * fVar251 + auVar174._0_4_ * fVar240 + auVar221._0_4_ * fVar191)) -
            fVar192) +
           ((auVar222._0_4_ * auVar124._0_4_ - auVar232._0_4_ * fVar105) - auVar220._0_4_ * fVar99))
           * fVar150 +
           (((fVar127 -
             (auVar233._0_4_ * fVar251 + auVar245._0_4_ * fVar240 + auVar246._0_4_ * fVar191)) -
            fVar129) +
           ((auVar247._0_4_ * auVar124._0_4_ - auVar210._0_4_ * fVar105) - auVar106._0_4_ * fVar99))
           * auVar260._0_4_) * (float)((uint)fVar83 ^ __xmm_80000000800000008000000080000000) -
           fVar264;
      auVar209._4_4_ =
           ((((fVar115 -
              (auVar154._4_4_ * fVar257 + auVar86._4_4_ * fVar242 + auVar196._4_4_ * fVar241)) -
             fVar159) +
            ((auVar197._4_4_ * auVar124._4_4_ - auVar87._4_4_ * fVar103) - auVar131._4_4_ * fVar236)
            ) * fVar187 +
           (((fVar138 -
             (auVar123._4_4_ * fVar257 + auVar174._4_4_ * fVar242 + auVar221._4_4_ * fVar241)) -
            fVar202) +
           ((auVar222._4_4_ * auVar124._4_4_ - auVar232._4_4_ * fVar103) - auVar220._4_4_ * fVar236)
           ) * fVar158 +
           (((fVar137 -
             (auVar233._4_4_ * fVar257 + auVar245._4_4_ * fVar242 + auVar246._4_4_ * fVar241)) -
            fVar139) +
           ((auVar247._4_4_ * auVar124._4_4_ - auVar210._4_4_ * fVar103) - auVar106._4_4_ * fVar236)
           ) * auVar260._4_4_) * (float)((uint)fVar98 ^ _UNK_150651574) - fVar177;
      auVar209._8_4_ =
           ((((fVar119 -
              (auVar154._8_4_ * fVar117 + auVar86._8_4_ * fVar227 + auVar196._8_4_ * fVar217)) -
             fVar165) +
            ((auVar197._8_4_ * auVar124._8_4_ - auVar87._8_4_ * fVar208) - auVar131._8_4_ * fVar214)
            ) * fVar189 +
           (((fVar142 -
             (auVar123._8_4_ * fVar117 + auVar174._8_4_ * fVar227 + auVar221._8_4_ * fVar217)) -
            fVar204) +
           ((auVar222._8_4_ * auVar124._8_4_ - auVar232._8_4_ * fVar208) - auVar220._8_4_ * fVar214)
           ) * fVar164 +
           (((fVar141 -
             (auVar233._8_4_ * fVar117 + auVar245._8_4_ * fVar227 + auVar246._8_4_ * fVar217)) -
            fVar143) +
           ((auVar247._8_4_ * auVar124._8_4_ - auVar210._8_4_ * fVar208) - auVar106._8_4_ * fVar214)
           ) * auVar260._8_4_) * (float)((uint)fVar100 ^ _UNK_150651578) - fVar178;
      auVar209._12_4_ =
           ((((fVar121 -
              (auVar154._12_4_ * fVar104 + auVar86._12_4_ * fVar229 + auVar196._12_4_ * fVar228)) -
             fVar171) +
            ((auVar197._12_4_ * auVar124._12_4_ - auVar87._12_4_ * fVar215) -
            auVar131._12_4_ * fVar216)) * fVar190 +
           (((fVar146 -
             (auVar123._12_4_ * fVar104 + auVar174._12_4_ * fVar229 + auVar221._12_4_ * fVar228)) -
            fVar206) +
           ((auVar222._12_4_ * auVar124._12_4_ - auVar232._12_4_ * fVar215) -
           auVar220._12_4_ * fVar216)) * fVar170 +
           (((fVar145 -
             (auVar233._12_4_ * fVar104 + auVar245._12_4_ * fVar229 + auVar246._12_4_ * fVar228)) -
            fVar147) +
           ((auVar247._12_4_ * auVar124._12_4_ - auVar210._12_4_ * fVar215) -
           auVar106._12_4_ * fVar216)) * auVar260._12_4_) * (float)((uint)fVar101 ^ _UNK_15065157c)
           - fVar179;
      auVar86._0_4_ = auVar182._0_4_ * fVar83 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar86._4_4_ = auVar182._4_4_ * fVar98 + _UNK_15076b1f4;
      auVar86._8_4_ = auVar182._8_4_ * fVar100 + _UNK_15076b1f8;
      auVar86._12_4_ = auVar182._12_4_ * fVar101 + _UNK_15076b1fc;
      auVar210 = divps(auVar209,auVar86);
      fVar102 = auVar210._0_4_;
      fVar127 = auVar260._0_4_ * fVar102;
      fVar115 = auVar210._4_4_;
      fVar128 = auVar260._4_4_ * fVar115;
      fVar119 = auVar210._8_4_;
      fVar129 = auVar260._8_4_ * fVar119;
      fVar121 = auVar210._12_4_;
      fVar137 = auVar260._12_4_ * fVar121;
      auVar106._0_4_ = auVar108._0_4_ + fVar181 * fVar127 * fVar191;
      auVar106._4_4_ = auVar108._4_4_ + fVar160 * fVar128 * fVar241;
      auVar106._8_4_ = auVar108._8_4_ + fVar166 * fVar129 * fVar217;
      auVar106._12_4_ = auVar108._12_4_ + fVar172 * fVar137 * fVar228;
      *(float *)(param_1 + lVar37) = auVar106._0_4_;
      uVar24 = extractps(auVar106,1);
      *(undefined8 *)(param_1 + lVar60) = uVar24;
      uVar24 = extractps(auVar106,2);
      *(undefined8 *)(param_1 + lVar51) = uVar24;
      uVar24 = extractps(auVar106,3);
      *(undefined8 *)(param_1 + lVar34) = uVar24;
      fVar150 = fVar150 * fVar102;
      fVar158 = fVar158 * fVar115;
      fVar164 = fVar164 * fVar119;
      fVar170 = fVar170 * fVar121;
      auVar123._0_4_ = auVar132._0_4_ + fVar181 * fVar150 * fVar191;
      auVar123._4_4_ = auVar132._4_4_ + fVar160 * fVar158 * fVar241;
      auVar123._8_4_ = auVar132._8_4_ + fVar166 * fVar164 * fVar217;
      auVar123._12_4_ = auVar132._12_4_ + fVar172 * fVar170 * fVar228;
      fVar180 = fVar180 * fVar102;
      fVar187 = fVar187 * fVar115;
      fVar189 = fVar189 * fVar119;
      fVar190 = fVar190 * fVar121;
      *(float *)(param_1 + 4 + lVar37) = auVar123._0_4_;
      uVar24 = extractps(auVar123,1);
      *(undefined8 *)(param_1 + 4 + lVar60) = uVar24;
      uVar24 = extractps(auVar123,2);
      *(undefined8 *)(param_1 + 4 + lVar51) = uVar24;
      auVar210._0_4_ = auVar244._0_4_ + fVar181 * fVar180 * fVar191;
      auVar210._4_4_ = auVar244._4_4_ + fVar160 * fVar187 * fVar241;
      auVar210._8_4_ = auVar244._8_4_ + fVar166 * fVar189 * fVar217;
      auVar210._12_4_ = auVar244._12_4_ + fVar172 * fVar190 * fVar228;
      uVar24 = extractps(auVar123,3);
      *(undefined8 *)(param_1 + 4 + lVar34) = uVar24;
      *(float *)(param_1 + 8 + lVar37) = auVar210._0_4_;
      uVar24 = extractps(auVar210,1);
      *(undefined8 *)(param_1 + 8 + lVar60) = uVar24;
      uVar24 = extractps(auVar210,2);
      *(undefined8 *)(param_1 + 8 + lVar51) = uVar24;
      uVar24 = extractps(auVar210,3);
      *(undefined8 *)(param_1 + 8 + lVar34) = uVar24;
      *(uint *)(param_1 + 0xc + lVar37) = uVar50;
      *(uint *)(param_1 + 0xc + lVar60) = uVar80;
      *(uint *)(param_1 + 0xc + lVar51) = uVar82;
      *(uint *)(param_1 + 0xc + lVar34) = uVar3;
      auVar154._0_4_ = auVar153._0_4_ + fVar122 * fVar127 * fVar240;
      auVar154._4_4_ = auVar153._4_4_ + fVar162 * fVar128 * fVar242;
      auVar154._8_4_ = auVar153._8_4_ + fVar193 * fVar129 * fVar227;
      auVar154._12_4_ = auVar153._12_4_ + fVar148 * fVar137 * fVar229;
      *(float *)(param_1 + lVar61) = auVar154._0_4_;
      uVar24 = extractps(auVar154,1);
      *(undefined8 *)(param_1 + lVar52) = uVar24;
      auVar131._0_4_ = auVar107._0_4_ + fVar122 * fVar150 * fVar240;
      auVar131._4_4_ = auVar107._4_4_ + fVar162 * fVar158 * fVar242;
      auVar131._8_4_ = auVar107._8_4_ + fVar193 * fVar164 * fVar227;
      auVar131._12_4_ = auVar107._12_4_ + fVar148 * fVar170 * fVar229;
      uVar24 = extractps(auVar154,2);
      *(undefined8 *)(param_1 + lVar38) = uVar24;
      uVar24 = extractps(auVar154,3);
      *(undefined8 *)(param_1 + lVar68) = uVar24;
      *(float *)(param_1 + 4 + lVar61) = auVar131._0_4_;
      uVar24 = extractps(auVar131,1);
      *(undefined8 *)(param_1 + 4 + lVar52) = uVar24;
      uVar24 = extractps(auVar131,2);
      *(undefined8 *)(param_1 + 4 + lVar38) = uVar24;
      auVar107._0_4_ = auVar109._0_4_ + fVar122 * fVar180 * fVar240;
      auVar107._4_4_ = auVar109._4_4_ + fVar162 * fVar187 * fVar242;
      auVar107._8_4_ = auVar109._8_4_ + fVar193 * fVar189 * fVar227;
      auVar107._12_4_ = auVar109._12_4_ + fVar148 * fVar190 * fVar229;
      uVar24 = extractps(auVar131,3);
      *(undefined8 *)(param_1 + 4 + lVar68) = uVar24;
      *(float *)(param_1 + 8 + lVar61) = auVar107._0_4_;
      uVar24 = extractps(auVar107,1);
      *(undefined8 *)(param_1 + 8 + lVar52) = uVar24;
      uVar24 = extractps(auVar107,2);
      *(undefined8 *)(param_1 + 8 + lVar38) = uVar24;
      uVar24 = extractps(auVar107,3);
      *(undefined8 *)(param_1 + 8 + lVar68) = uVar24;
      *(uint *)(param_1 + 0xc + lVar61) = uVar4;
      *(uint *)(param_1 + 0xc + lVar52) = uVar5;
      *(uint *)(param_1 + 0xc + lVar38) = uVar6;
      *(uint *)(param_1 + 0xc + lVar68) = uVar7;
      auVar153._0_4_ = auVar194._0_4_ + fVar130 * fVar127 * fVar251;
      auVar153._4_4_ = auVar194._4_4_ + fVar163 * fVar128 * fVar257;
      auVar153._8_4_ = auVar194._8_4_ + fVar203 * fVar129 * fVar117;
      auVar153._12_4_ = auVar194._12_4_ + fVar149 * fVar137 * fVar104;
      *(float *)(param_1 + lVar53) = auVar153._0_4_;
      uVar24 = extractps(auVar153,1);
      *(undefined8 *)(param_1 + lVar45) = uVar24;
      auVar132._0_4_ = auVar218._0_4_ + fVar130 * fVar150 * fVar251;
      auVar132._4_4_ = auVar218._4_4_ + fVar163 * fVar158 * fVar257;
      auVar132._8_4_ = auVar218._8_4_ + fVar203 * fVar164 * fVar117;
      auVar132._12_4_ = auVar218._12_4_ + fVar149 * fVar170 * fVar104;
      uVar24 = extractps(auVar153,2);
      *(undefined8 *)(param_1 + lVar39) = uVar24;
      uVar24 = extractps(auVar153,3);
      *(undefined8 *)(param_1 + lVar62) = uVar24;
      *(float *)(param_1 + 4 + lVar53) = auVar132._0_4_;
      uVar24 = extractps(auVar132,1);
      *(undefined8 *)(param_1 + 4 + lVar45) = uVar24;
      uVar24 = extractps(auVar132,2);
      *(undefined8 *)(param_1 + 4 + lVar39) = uVar24;
      auVar232._0_4_ = auVar184._0_4_ + fVar130 * fVar180 * fVar251;
      auVar232._4_4_ = auVar184._4_4_ + fVar163 * fVar187 * fVar257;
      auVar232._8_4_ = auVar184._8_4_ + fVar203 * fVar189 * fVar117;
      auVar232._12_4_ = auVar184._12_4_ + fVar149 * fVar190 * fVar104;
      uVar24 = extractps(auVar132,3);
      *(undefined8 *)(param_1 + 4 + lVar62) = uVar24;
      *(float *)(param_1 + 8 + lVar53) = auVar232._0_4_;
      uVar24 = extractps(auVar232,1);
      *(undefined8 *)(param_1 + 8 + lVar45) = uVar24;
      uVar24 = extractps(auVar232,2);
      *(undefined8 *)(param_1 + 8 + lVar39) = uVar24;
      uVar24 = extractps(auVar232,3);
      *(undefined8 *)(param_1 + 8 + lVar62) = uVar24;
      *(uint *)(param_1 + 0xc + lVar53) = uVar8;
      *(uint *)(param_1 + 0xc + lVar45) = uVar9;
      *(uint *)(param_1 + 0xc + lVar39) = uVar10;
      *(uint *)(param_1 + 0xc + lVar62) = uVar11;
      auVar174._0_4_ = auVar219._0_4_ + fVar188 * fVar127 * fVar252;
      auVar174._4_4_ = auVar219._4_4_ + fVar161 * fVar128 * fVar250;
      auVar174._8_4_ = auVar219._8_4_ + fVar167 * fVar129 * fVar120;
      auVar174._12_4_ = auVar219._12_4_ + fVar173 * fVar137 * fVar116;
      *(float *)(param_1 + lVar69) = auVar174._0_4_;
      uVar24 = extractps(auVar174,1);
      *(undefined8 *)(param_1 + lVar54) = uVar24;
      auVar218._0_4_ = auVar195._0_4_ + fVar188 * fVar150 * fVar252;
      auVar218._4_4_ = auVar195._4_4_ + fVar161 * fVar158 * fVar250;
      auVar218._8_4_ = auVar195._8_4_ + fVar167 * fVar164 * fVar120;
      auVar218._12_4_ = auVar195._12_4_ + fVar173 * fVar170 * fVar116;
      uVar24 = extractps(auVar174,2);
      *(undefined8 *)(param_1 + lVar70) = uVar24;
      uVar24 = extractps(auVar174,3);
      *(undefined8 *)(param_1 + lVar63) = uVar24;
      *(float *)(param_1 + 4 + lVar69) = auVar218._0_4_;
      uVar24 = extractps(auVar218,1);
      *(undefined8 *)(param_1 + 4 + lVar54) = uVar24;
      uVar24 = extractps(auVar218,2);
      *(undefined8 *)(param_1 + 4 + lVar70) = uVar24;
      auVar220._0_4_ = auVar238._0_4_ + fVar188 * fVar180 * fVar252;
      auVar220._4_4_ = auVar238._4_4_ + fVar161 * fVar187 * fVar250;
      auVar220._8_4_ = auVar238._8_4_ + fVar167 * fVar189 * fVar120;
      auVar220._12_4_ = auVar238._12_4_ + fVar173 * fVar190 * fVar116;
      uVar24 = extractps(auVar218,3);
      *(undefined8 *)(param_1 + 4 + lVar63) = uVar24;
      *(float *)(param_1 + 8 + lVar69) = auVar220._0_4_;
      uVar24 = extractps(auVar220,1);
      *(undefined8 *)(param_1 + 8 + lVar54) = uVar24;
      uVar24 = extractps(auVar220,2);
      *(undefined8 *)(param_1 + 8 + lVar70) = uVar24;
      uVar24 = extractps(auVar220,3);
      *(undefined8 *)(param_1 + 8 + lVar63) = uVar24;
      *(uint *)(param_1 + 0xc + lVar69) = uVar12;
      *(uint *)(param_1 + 0xc + lVar54) = uVar13;
      *(uint *)(param_1 + 0xc + lVar70) = uVar14;
      *(uint *)(param_1 + 0xc + lVar63) = uVar15;
      auVar245._0_4_ = auVar237._0_4_ + fVar140 * fVar127 * fVar105;
      auVar245._4_4_ = auVar237._4_4_ + fVar168 * fVar128 * fVar103;
      auVar245._8_4_ = auVar237._8_4_ + fVar205 * fVar129 * fVar208;
      auVar245._12_4_ = auVar237._12_4_ + fVar118 * fVar137 * fVar215;
      *(float *)(param_1 + lVar40) = auVar245._0_4_;
      uVar24 = extractps(auVar245,1);
      *(undefined8 *)(param_1 + lVar44) = uVar24;
      auVar184._0_4_ = auVar243._0_4_ + fVar140 * fVar150 * fVar105;
      auVar184._4_4_ = auVar243._4_4_ + fVar168 * fVar158 * fVar103;
      auVar184._8_4_ = auVar243._8_4_ + fVar205 * fVar164 * fVar208;
      auVar184._12_4_ = auVar243._12_4_ + fVar118 * fVar170 * fVar215;
      uVar24 = extractps(auVar245,2);
      *(undefined8 *)(param_1 + lVar72) = uVar24;
      uVar24 = extractps(auVar245,3);
      *(undefined8 *)(param_1 + lVar73) = uVar24;
      *(float *)(param_1 + 4 + lVar40) = auVar184._0_4_;
      uVar24 = extractps(auVar184,1);
      *(undefined8 *)(param_1 + 4 + lVar44) = uVar24;
      uVar24 = extractps(auVar184,2);
      *(undefined8 *)(param_1 + 4 + lVar72) = uVar24;
      auVar108._0_4_ = auVar110._0_4_ + fVar140 * fVar180 * fVar105;
      auVar108._4_4_ = auVar110._4_4_ + fVar168 * fVar187 * fVar103;
      auVar108._8_4_ = auVar110._8_4_ + fVar205 * fVar189 * fVar208;
      auVar108._12_4_ = auVar110._12_4_ + fVar118 * fVar190 * fVar215;
      uVar24 = extractps(auVar184,3);
      *(undefined8 *)(param_1 + 4 + lVar73) = uVar24;
      *(float *)(param_1 + 8 + lVar40) = auVar108._0_4_;
      uVar24 = extractps(auVar108,1);
      *(undefined8 *)(param_1 + 8 + lVar44) = uVar24;
      uVar24 = extractps(auVar108,2);
      *(undefined8 *)(param_1 + 8 + lVar72) = uVar24;
      uVar24 = extractps(auVar108,3);
      *(undefined8 *)(param_1 + 8 + lVar73) = uVar24;
      *(uint *)(param_1 + 0xc + lVar40) = uVar16;
      *(uint *)(param_1 + 0xc + lVar44) = uVar17;
      *(uint *)(param_1 + 0xc + lVar72) = uVar18;
      *(uint *)(param_1 + 0xc + lVar73) = uVar19;
      auVar87._0_4_ = auVar111._0_4_ + fVar127 * fVar144 * fVar99;
      auVar87._4_4_ = auVar111._4_4_ + fVar128 * fVar169 * fVar236;
      auVar87._8_4_ = auVar111._8_4_ + fVar129 * fVar207 * fVar214;
      auVar87._12_4_ = auVar111._12_4_ + fVar137 * fVar152 * fVar216;
      *(float *)(param_1 + lVar48) = auVar87._0_4_;
      uVar24 = extractps(auVar87,1);
      *(undefined8 *)(param_1 + lVar74) = uVar24;
      uVar24 = extractps(auVar87,2);
      *(undefined8 *)(param_1 + lVar75) = uVar24;
      auVar237._0_4_ = auVar112._0_4_ + fVar150 * fVar144 * fVar99;
      auVar237._4_4_ = auVar112._4_4_ + fVar158 * fVar169 * fVar236;
      auVar237._8_4_ = auVar112._8_4_ + fVar164 * fVar207 * fVar214;
      auVar237._12_4_ = auVar112._12_4_ + fVar170 * fVar152 * fVar216;
      uVar24 = extractps(auVar87,3);
      *(undefined8 *)(param_1 + lVar43) = uVar24;
      *(float *)(param_1 + 4 + lVar48) = auVar237._0_4_;
      uVar24 = extractps(auVar237,1);
      *(undefined8 *)(param_1 + 4 + lVar74) = uVar24;
      uVar24 = extractps(auVar237,2);
      *(undefined8 *)(param_1 + 4 + lVar75) = uVar24;
      auVar109._0_4_ = auVar113._0_4_ + fVar180 * fVar144 * fVar99;
      auVar109._4_4_ = auVar113._4_4_ + fVar187 * fVar169 * fVar236;
      auVar109._8_4_ = auVar113._8_4_ + fVar189 * fVar207 * fVar214;
      auVar109._12_4_ = auVar113._12_4_ + fVar190 * fVar152 * fVar216;
      uVar24 = extractps(auVar237,3);
      *(undefined8 *)(param_1 + 4 + lVar43) = uVar24;
      *(float *)(param_1 + 8 + lVar48) = auVar109._0_4_;
      uVar24 = extractps(auVar109,1);
      *(undefined8 *)(param_1 + 8 + lVar74) = uVar24;
      uVar24 = extractps(auVar109,2);
      *(undefined8 *)(param_1 + 8 + lVar75) = uVar24;
      pfVar1 = (float *)(param_6 + uVar66);
      *pfVar1 = fVar102 + fVar264;
      pfVar1[1] = fVar115 + fVar177;
      pfVar1[2] = fVar119 + fVar178;
      pfVar1[3] = fVar121 + fVar179;
      uVar24 = extractps(auVar109,3);
      *(undefined8 *)(param_1 + 8 + lVar43) = uVar24;
      *(uint *)(param_1 + 0xc + lVar48) = uVar20;
      *(uint *)(param_1 + 0xc + lVar74) = uVar21;
      *(uint *)(param_1 + 0xc + lVar75) = uVar22;
      *(uint *)(param_1 + 0xc + lVar43) = uVar23;
      uVar67 = uVar67 + 0x10;
      uVar59 = uVar59 + 0x18;
      uVar50 = (int)uVar49 + 4;
      uVar49 = (ulonglong)uVar50;
    } while ((int)uVar50 < (int)uVar58);
  }
  uVar58 = (uint)uVar49;
  if ((int)param_17 <= (int)uVar58) {
    return;
  }
  auVar243._0_4_ =
       -(uint)((int)(uVar58 | (uint)__xmm_00000003000000020000000100000000) < (int)param_17);
  auVar243._4_4_ =
       -(uint)((int)(uVar58 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_17);
  auVar243._8_4_ = -(uint)((int)(uVar58 | _UNK_150631e08) < (int)param_17);
  auVar243._12_4_ = -(uint)((int)(uVar58 | _UNK_150631e0c) < (int)param_17);
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar49 * 0x18);
  uVar50 = movmskps((int)uVar59,auVar243);
  bVar33 = (char)((char)uVar50 << 4) >> 4;
  if (uVar50 == 0xf) {
    auVar232 = pblendw(pauVar2[2],*pauVar2,0xf0);
    auVar107 = pblendw(*pauVar2,pauVar2[1],0xf0);
    auVar233._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar233._8_4_ = auVar107._4_4_;
    auVar233._12_4_ = auVar107._12_4_;
    auVar107 = pblendw(pauVar2[5],pauVar2[3],0xf0);
    auVar210 = pblendw(pauVar2[3],pauVar2[4],0xf0);
    auVar196._0_8_ = CONCAT44(auVar210._8_4_,auVar210._0_4_);
    auVar196._8_4_ = auVar210._4_4_;
    auVar196._12_4_ = auVar210._12_4_;
    auVar112._0_8_ = CONCAT44(auVar232._0_4_,auVar232._8_4_);
    auVar112._8_4_ = auVar232._12_4_;
    auVar112._12_4_ = auVar232._4_4_;
    auVar195._0_8_ = CONCAT44(auVar107._0_4_,auVar107._8_4_);
    auVar195._8_4_ = auVar107._12_4_;
    auVar195._12_4_ = auVar107._4_4_;
    auVar107 = pblendw(pauVar2[1],pauVar2[2],0xf0);
    auVar221._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar221._8_4_ = auVar107._4_4_;
    auVar221._12_4_ = auVar107._12_4_;
    auVar107 = pblendw(pauVar2[4],pauVar2[5],0xf0);
    auVar111._0_8_ = CONCAT44(auVar107._8_4_,auVar107._0_4_);
    auVar111._8_4_ = auVar107._4_4_;
    auVar111._12_4_ = auVar107._12_4_;
    auVar194._8_8_ = auVar196._0_8_;
    auVar194._0_8_ = auVar233._0_8_;
    auVar238._8_8_ = auVar196._8_8_;
    auVar238._0_8_ = auVar233._8_8_;
    auVar110._8_8_ = auVar195._0_8_;
    auVar110._0_8_ = auVar112._0_8_;
    auVar113._8_8_ = auVar195._8_8_;
    auVar113._0_8_ = auVar112._8_8_;
    auVar244._8_8_ = auVar111._0_8_;
    auVar244._0_8_ = auVar221._0_8_;
    auVar222._8_8_ = auVar111._8_8_;
    auVar222._0_8_ = auVar221._8_8_;
    auVar107 = *(undefined1 (*) [16])(param_4 + uVar49 * 0x18);
    auVar210 = *(undefined1 (*) [16])(param_4 + 0x10 + uVar49 * 0x18);
    auVar232 = *(undefined1 (*) [16])(param_4 + 0x20 + uVar49 * 0x18);
    auVar220 = *(undefined1 (*) [16])(param_4 + 0x30 + uVar49 * 0x18);
    auVar108 = *(undefined1 (*) [16])(param_4 + 0x40 + uVar49 * 0x18);
    auVar109 = *(undefined1 (*) [16])(param_4 + 0x50 + uVar49 * 0x18);
    auVar106 = blendps(auVar210,auVar107,3);
    auVar86 = blendps(auVar108,auVar220,3);
    auVar87 = blendps(auVar107,auVar232,3);
    auVar220 = blendps(auVar220,auVar109,3);
    auVar107 = blendps(auVar232,auVar210,3);
    auVar210 = blendps(auVar109,auVar108,3);
    local_488._4_4_ = auVar106._8_4_;
    local_488._0_4_ = auVar106._0_4_;
    fStack_480 = (float)auVar86._0_4_;
    fStack_47c = (float)auVar86._8_4_;
    local_418._4_4_ = auVar106._12_4_;
    local_418._0_4_ = auVar106._4_4_;
    fStack_410 = (float)auVar86._4_4_;
    fStack_40c = (float)auVar86._12_4_;
    auVar197._4_4_ = auVar87._0_4_;
    auVar197._0_4_ = auVar87._8_4_;
    local_328._4_4_ = auVar87._4_4_;
    local_328._0_4_ = auVar87._12_4_;
    fStack_320 = (float)auVar220._12_4_;
    fStack_31c = (float)auVar220._4_4_;
    auVar197._8_4_ = auVar220._8_4_;
    auVar197._12_4_ = auVar220._0_4_;
    auVar219._0_4_ = auVar107._0_4_;
    auVar219._4_4_ = auVar107._8_4_;
    auVar219._8_4_ = auVar210._0_4_;
    auVar219._12_4_ = auVar210._8_4_;
    local_4d8._4_4_ = auVar107._12_4_;
    local_4d8._0_4_ = auVar107._4_4_;
    fStack_4d0 = (float)auVar210._4_4_;
    fStack_4cc = (float)auVar210._12_4_;
  }
  else {
    auVar246._0_4_ = ___xmm_00000048000000300000001800000000 & auVar243._0_4_;
    auVar246._4_4_ = _UNK_150b51284 & auVar243._4_4_;
    auVar246._8_4_ = _UNK_150b51288 & auVar243._8_4_;
    auVar246._12_4_ = _UNK_150b5128c & auVar243._12_4_;
    lVar38 = extractps(auVar246,1);
    lVar35 = extractps(auVar246,2);
    lVar37 = extractps(auVar246,3);
    auVar194._4_4_ = *(undefined4 *)(*pauVar2 + lVar38);
    auVar194._0_4_ = *(undefined4 *)*pauVar2;
    auVar194._12_4_ = *(undefined4 *)(*pauVar2 + lVar37);
    auVar194._8_4_ = *(undefined4 *)(*pauVar2 + lVar35);
    auVar107 = ___xmm_0000004c000000340000001c00000004 & auVar243;
    auVar238._4_4_ = *(undefined4 *)(*pauVar2 + auVar107._4_4_);
    auVar238._0_4_ = *(undefined4 *)(*pauVar2 + auVar107._0_4_);
    auVar238._12_4_ = *(undefined4 *)(*pauVar2 + auVar107._12_4_);
    auVar238._8_4_ = *(undefined4 *)(*pauVar2 + auVar107._8_4_);
    auVar210 = ___xmm_00000050000000380000002000000008 & auVar243;
    auVar110._4_4_ = *(undefined4 *)(*pauVar2 + auVar210._4_4_);
    auVar110._0_4_ = *(undefined4 *)(*pauVar2 + auVar210._0_4_);
    auVar110._12_4_ = *(undefined4 *)(*pauVar2 + auVar210._12_4_);
    auVar110._8_4_ = *(undefined4 *)(*pauVar2 + auVar210._8_4_);
    auVar232 = ___xmm_000000540000003c000000240000000c & auVar243;
    auVar113._4_4_ = *(undefined4 *)(*pauVar2 + auVar232._4_4_);
    auVar113._0_4_ = *(undefined4 *)(*pauVar2 + auVar232._0_4_);
    auVar113._12_4_ = *(undefined4 *)(*pauVar2 + auVar232._12_4_);
    auVar113._8_4_ = *(undefined4 *)(*pauVar2 + auVar232._8_4_);
    auVar220 = ___xmm_00000058000000400000002800000010 & auVar243;
    auVar244._4_4_ = *(undefined4 *)(*pauVar2 + auVar220._4_4_);
    auVar244._0_4_ = *(undefined4 *)(*pauVar2 + auVar220._0_4_);
    auVar244._12_4_ = *(undefined4 *)(*pauVar2 + auVar220._12_4_);
    auVar244._8_4_ = *(undefined4 *)(*pauVar2 + auVar220._8_4_);
    auVar108 = ___xmm_0000005c000000440000002c00000014 & auVar243;
    auVar222._4_4_ = *(undefined4 *)(*pauVar2 + auVar108._4_4_);
    auVar222._0_4_ = *(undefined4 *)(*pauVar2 + auVar108._0_4_);
    auVar222._12_4_ = *(undefined4 *)(*pauVar2 + auVar108._12_4_);
    auVar222._8_4_ = *(undefined4 *)(*pauVar2 + auVar108._8_4_);
    lVar34 = param_4 + uVar49 * 0x18;
    auVar109 = insertps(ZEXT416(*(uint *)(param_4 + uVar49 * 0x18)),*(undefined4 *)(lVar38 + lVar34)
                        ,0x10);
    auVar109 = insertps(auVar109,*(undefined4 *)(lVar35 + lVar34),0x20);
    _local_488 = insertps(auVar109,*(undefined4 *)(lVar37 + lVar34),0x30);
    auVar109 = insertps(ZEXT416(*(uint *)((ulonglong)auVar107._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar107._4_4_ + lVar34),0x10);
    auVar109 = insertps(auVar109,*(undefined4 *)((ulonglong)auVar107._8_4_ + lVar34),0x20);
    _local_418 = insertps(auVar109,*(undefined4 *)((ulonglong)auVar107._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar210._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar210._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar210._8_4_ + lVar34),0x20);
    auVar197 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar210._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar232._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar232._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar232._8_4_ + lVar34),0x20);
    _local_328 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar232._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar220._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar220._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar220._8_4_ + lVar34),0x20);
    auVar219 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar220._12_4_ + lVar34),0x30);
    auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar108._0_4_ + lVar34)),
                        *(undefined4 *)((ulonglong)auVar108._4_4_ + lVar34),0x10);
    auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar108._8_4_ + lVar34),0x20);
    _local_4d8 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar108._12_4_ + lVar34),0x30);
  }
  auVar155._0_4_ = auVar194._0_4_ << 4;
  auVar155._4_4_ = auVar194._4_4_ << 4;
  auVar155._8_4_ = auVar194._8_4_ << 4;
  auVar155._12_4_ = auVar194._12_4_ << 4;
  auVar210 = auVar243 & auVar155;
  lVar34 = param_1 + auVar210._0_4_;
  auVar220 = ___xmm_00000004000000040000000400000004 & auVar243;
  auVar232 = ___xmm_00000008000000080000000800000008 & auVar243;
  auVar198._0_4_ = auVar238._0_4_ << 4;
  auVar198._4_4_ = auVar238._4_4_ << 4;
  auVar198._8_4_ = auVar238._8_4_ << 4;
  auVar198._12_4_ = auVar238._12_4_ << 4;
  auVar108 = auVar243 & auVar198;
  auVar199._0_4_ = auVar110._0_4_ << 4;
  auVar199._4_4_ = auVar110._4_4_ << 4;
  auVar199._8_4_ = auVar110._8_4_ << 4;
  auVar199._12_4_ = auVar110._12_4_ << 4;
  auVar109 = auVar243 & auVar199;
  auVar247._0_4_ = auVar113._0_4_ << 4;
  auVar247._4_4_ = auVar113._4_4_ << 4;
  auVar247._8_4_ = auVar113._8_4_ << 4;
  auVar247._12_4_ = auVar113._12_4_ << 4;
  auVar86 = auVar243 & auVar247;
  auVar107 = ZEXT416(*(uint *)(param_1 + auVar210._0_4_));
  auVar200._0_4_ = auVar244._0_4_ << 4;
  auVar200._4_4_ = auVar244._4_4_ << 4;
  auVar200._8_4_ = auVar244._8_4_ << 4;
  auVar200._12_4_ = auVar244._12_4_ << 4;
  auVar87 = auVar243 & auVar200;
  auVar175._0_4_ = auVar222._0_4_ << 4;
  auVar175._4_4_ = auVar222._4_4_ << 4;
  auVar175._8_4_ = auVar222._8_4_ << 4;
  auVar175._12_4_ = auVar222._12_4_ << 4;
  auVar106 = auVar243 & auVar175;
  lVar72 = (longlong)auVar106._0_4_;
  lVar35 = param_1 + auVar210._4_4_;
  lVar37 = param_1 + auVar210._8_4_;
  lVar38 = param_1 + auVar210._12_4_;
  uVar49 = (ulonglong)auVar220._4_4_;
  uVar59 = (ulonglong)auVar220._0_4_;
  uVar67 = (ulonglong)auVar232._0_4_;
  lVar39 = param_1 + auVar108._0_4_;
  lVar40 = param_1 + auVar108._4_4_;
  lVar64 = param_1 + auVar108._8_4_;
  lVar43 = param_1 + auVar108._12_4_;
  lVar44 = param_1 + auVar109._0_4_;
  lVar45 = param_1 + auVar109._4_4_;
  lVar48 = param_1 + auVar109._8_4_;
  lVar51 = param_1 + auVar109._12_4_;
  lVar52 = param_1 + auVar86._0_4_;
  lVar53 = param_1 + auVar86._4_4_;
  lVar54 = param_1 + auVar86._8_4_;
  lVar55 = param_1 + auVar86._12_4_;
  lVar60 = param_1 + auVar87._0_4_;
  lVar61 = param_1 + auVar87._4_4_;
  lVar62 = param_1 + auVar87._8_4_;
  lVar63 = param_1 + auVar87._12_4_;
  lVar65 = param_1 + lVar72;
  lVar68 = param_1 + auVar106._4_4_;
  lVar69 = param_1 + auVar106._8_4_;
  lVar70 = param_1 + auVar106._12_4_;
  bVar76 = (bVar33 & 2) != 0;
  if (bVar76) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._4_4_),0x10);
  }
  uVar66 = (ulonglong)auVar232._4_4_;
  auVar218 = ZEXT416(*(uint *)(uVar59 + lVar34));
  if (bVar76) {
    auVar218 = insertps(auVar218,*(undefined4 *)(uVar49 + lVar35),0x10);
  }
  auVar237 = ZEXT416(*(uint *)(uVar67 + lVar34));
  if (bVar76) {
    auVar237 = insertps(auVar237,*(undefined4 *)(uVar66 + lVar35),0x10);
  }
  _local_4b8 = ZEXT416(*(uint *)(param_1 + auVar108._0_4_));
  if (bVar76) {
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._4_4_),0x10);
    auVar112 = insertps(ZEXT416(*(uint *)(uVar59 + lVar39)),*(undefined4 *)(uVar49 + lVar40),0x10);
    auVar111 = insertps(ZEXT416(*(uint *)(uVar67 + lVar39)),*(undefined4 *)(uVar66 + lVar40),0x10);
  }
  else {
    auVar112 = ZEXT416(*(uint *)(uVar59 + lVar39));
    auVar111 = ZEXT416(*(uint *)(uVar67 + lVar39));
  }
  _local_508 = ZEXT416(*(uint *)(param_1 + auVar109._0_4_));
  if (bVar76) {
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._4_4_),0x10);
    auVar131 = insertps(ZEXT416(*(uint *)(uVar59 + lVar44)),*(undefined4 *)(uVar49 + lVar45),0x10);
    auVar123 = insertps(ZEXT416(*(uint *)(uVar67 + lVar44)),*(undefined4 *)(uVar66 + lVar45),0x10);
  }
  else {
    auVar131 = ZEXT416(*(uint *)(uVar59 + lVar44));
    auVar123 = ZEXT416(*(uint *)(uVar67 + lVar44));
  }
  auVar132 = ZEXT416(*(uint *)(param_1 + auVar86._0_4_));
  if (bVar76) {
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._4_4_),0x10);
  }
  auVar245 = ZEXT416(*(uint *)(uVar59 + lVar52));
  if (bVar76) {
    auVar245 = insertps(auVar245,*(undefined4 *)(uVar49 + lVar53),0x10);
  }
  auVar183 = ZEXT416(*(uint *)(uVar67 + lVar52));
  if (bVar76) {
    auVar183 = insertps(auVar183,*(undefined4 *)(uVar66 + lVar53),0x10);
  }
  auVar153 = ZEXT416(*(uint *)(param_1 + auVar87._0_4_));
  uVar80 = auVar220._8_4_;
  uVar3 = auVar220._12_4_;
  uVar82 = auVar232._8_4_;
  uVar4 = auVar232._12_4_;
  if (bVar76) {
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._4_4_),0x10);
    auVar232 = insertps(ZEXT416(*(uint *)(uVar59 + lVar60)),*(undefined4 *)(uVar49 + lVar61),0x10);
    _local_678 = insertps(ZEXT416(*(uint *)(uVar67 + lVar60)),*(undefined4 *)(uVar66 + lVar61),0x10)
    ;
    _local_618 = insertps(ZEXT416(*(uint *)(param_1 + lVar72)),
                          *(undefined4 *)(param_1 + auVar106._4_4_),0x10);
    auVar220 = insertps(ZEXT416(*(uint *)(uVar59 + lVar65)),*(undefined4 *)(uVar49 + lVar68),0x10);
    _local_6d8 = insertps(ZEXT416(*(uint *)(uVar67 + lVar65)),*(undefined4 *)(uVar66 + lVar68),0x10)
    ;
  }
  else {
    auVar232 = ZEXT416(*(uint *)(uVar59 + lVar60));
    _local_678 = ZEXT416(*(uint *)(uVar67 + lVar60));
    _local_618 = ZEXT416(*(uint *)(param_1 + lVar72));
    auVar220 = ZEXT416(*(uint *)(uVar59 + lVar65));
    _local_6d8 = ZEXT416(*(uint *)(uVar67 + lVar65));
  }
  if ((bVar33 & 4) != 0) {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._8_4_),0x20);
    auVar218 = insertps(auVar218,*(undefined4 *)((ulonglong)uVar80 + lVar37),0x20);
    auVar237 = insertps(auVar237,*(undefined4 *)((ulonglong)uVar82 + lVar37),0x20);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._8_4_),0x20);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar80 + lVar64),0x20);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)uVar82 + lVar64),0x20);
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._8_4_),0x20);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar80 + lVar48),0x20);
    auVar123 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar82 + lVar48),0x20);
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._8_4_),0x20);
    auVar245 = insertps(auVar245,*(undefined4 *)((ulonglong)uVar80 + lVar54),0x20);
    auVar183 = insertps(auVar183,*(undefined4 *)((ulonglong)uVar82 + lVar54),0x20);
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._8_4_),0x20);
    auVar232 = insertps(auVar232,*(undefined4 *)((ulonglong)uVar80 + lVar62),0x20);
    _local_678 = insertps(_local_678,*(undefined4 *)((ulonglong)uVar82 + lVar62),0x20);
    _local_618 = insertps(_local_618,*(undefined4 *)(param_1 + auVar106._8_4_),0x20);
    auVar220 = insertps(auVar220,*(undefined4 *)((ulonglong)uVar80 + lVar69),0x20);
    _local_6d8 = insertps(_local_6d8,*(undefined4 *)((ulonglong)uVar82 + lVar69),0x20);
  }
  if ((char)bVar33 < '\0') {
    auVar107 = insertps(auVar107,*(undefined4 *)(param_1 + auVar210._12_4_),0x30);
    auVar218 = insertps(auVar218,*(undefined4 *)((ulonglong)uVar3 + lVar38),0x30);
    auVar237 = insertps(auVar237,*(undefined4 *)((ulonglong)uVar4 + lVar38),0x30);
    _local_4b8 = insertps(_local_4b8,*(undefined4 *)(param_1 + auVar108._12_4_),0x30);
    auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)uVar3 + lVar43),0x30);
    auVar111 = insertps(auVar111,*(undefined4 *)((ulonglong)uVar4 + lVar43),0x30);
    _local_508 = insertps(_local_508,*(undefined4 *)(param_1 + auVar109._12_4_),0x30);
    auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar3 + lVar51),0x30);
    auVar123 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar4 + lVar51),0x30);
    auVar132 = insertps(auVar132,*(undefined4 *)(param_1 + auVar86._12_4_),0x30);
    auVar245 = insertps(auVar245,*(undefined4 *)((ulonglong)uVar3 + lVar55),0x30);
    auVar183 = insertps(auVar183,*(undefined4 *)((ulonglong)uVar4 + lVar55),0x30);
    auVar153 = insertps(auVar153,*(undefined4 *)(param_1 + auVar87._12_4_),0x30);
  }
  uVar28 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar243._0_4_);
  if ((char)bVar33 < '\0') {
    auVar232 = insertps(auVar232,*(undefined4 *)((ulonglong)uVar3 + lVar63),0x30);
  }
  uVar27 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar243._4_4_);
  if ((char)bVar33 < '\0') {
    _local_678 = insertps(_local_678,*(undefined4 *)((ulonglong)uVar4 + lVar63),0x30);
  }
  local_478 = (ulonglong)uVar80;
  uVar71 = (ulonglong)uVar3;
  uVar46 = (ulonglong)uVar4;
  uVar41 = (ulonglong)uVar82;
  bVar76 = (char)bVar33 < '\0';
  uVar56 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar243,8);
  if (bVar76) {
    _local_618 = insertps(_local_618,*(undefined4 *)(param_1 + auVar106._12_4_),0x30);
  }
  uVar36 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar243,0xc);
  auVar210 = insertps(ZEXT416(*(uint *)(uVar28 + lVar34)),*(undefined4 *)(uVar27 + lVar35),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar28 + lVar39)),*(undefined4 *)(uVar27 + lVar40),0x10);
  auVar109 = insertps(ZEXT416(*(uint *)(uVar28 + lVar52)),*(undefined4 *)(uVar27 + lVar53),0x10);
  auVar106 = insertps(ZEXT416(*(uint *)(uVar28 + lVar60)),*(undefined4 *)(uVar27 + lVar61),0x10);
  auVar86 = insertps(ZEXT416(*(uint *)(uVar28 + lVar44)),*(undefined4 *)(uVar27 + lVar45),0x10);
  auVar87 = insertps(ZEXT416(*(uint *)(uVar28 + lVar65)),*(undefined4 *)(uVar27 + lVar68),0x10);
  if (bVar76) {
    auVar220 = insertps(auVar220,*(undefined4 *)(uVar71 + lVar70),0x30);
  }
  auVar210 = insertps(auVar210,*(undefined4 *)(uVar56 + lVar37),0x20);
  auVar108 = insertps(auVar108,*(undefined4 *)(uVar56 + lVar64),0x20);
  auVar109 = insertps(auVar109,*(undefined4 *)(uVar56 + lVar54),0x20);
  auVar106 = insertps(auVar106,*(undefined4 *)(uVar56 + lVar62),0x20);
  auVar86 = insertps(auVar86,*(undefined4 *)(uVar56 + lVar48),0x20);
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar56 + lVar69),0x20);
  fVar264 = auVar131._12_4_;
  if (bVar76) {
    _local_6d8 = insertps(_local_6d8,*(undefined4 *)(uVar46 + lVar70),0x30);
  }
  auVar154 = insertps(auVar210,*(undefined4 *)(uVar36 + lVar38),0x30);
  auVar174 = insertps(auVar108,*(undefined4 *)(uVar36 + lVar43),0x30);
  auVar184 = insertps(auVar109,*(undefined4 *)(uVar36 + lVar55),0x30);
  auVar106 = insertps(auVar106,*(undefined4 *)(uVar36 + lVar63),0x30);
  auVar86 = insertps(auVar86,*(undefined4 *)(uVar36 + lVar51),0x30);
  auVar124 = insertps(auVar87,*(undefined4 *)(uVar36 + lVar70),0x30);
  local_6c8._0_4_ = auVar218._0_4_;
  local_6c8._4_4_ = auVar218._4_4_;
  fStack_6c0 = auVar218._8_4_;
  fStack_6bc = auVar218._12_4_;
  local_6e8._0_4_ = auVar112._0_4_;
  local_6e8._4_4_ = auVar112._4_4_;
  fStack_6e0 = auVar112._8_4_;
  fStack_6dc = auVar112._12_4_;
  local_3a8 = auVar111._0_4_;
  fStack_3a4 = auVar111._4_4_;
  fStack_3a0 = auVar111._8_4_;
  fStack_39c = auVar111._12_4_;
  fVar145 = auVar197._4_4_;
  fVar146 = auVar197._12_4_;
  fVar99 = auVar197._0_4_;
  fVar119 = auVar197._8_4_;
  fVar103 = fVar99 * (float)local_508._0_4_ +
            (float)local_418._0_4_ * (float)local_4b8._0_4_ +
            (float)local_488._0_4_ * auVar107._0_4_;
  fVar116 = fVar145 * (float)local_508._4_4_ +
            (float)local_418._4_4_ * (float)local_4b8._4_4_ +
            (float)local_488._4_4_ * auVar107._4_4_;
  fVar120 = fVar119 * fStack_500 + fStack_410 * fStack_4b0 + fStack_480 * auVar107._8_4_;
  fVar128 = fVar146 * fStack_4fc + fStack_40c * fStack_4ac + fStack_47c * auVar107._12_4_;
  fVar147 = auVar131._0_4_;
  fVar148 = auVar131._4_4_;
  fVar149 = auVar131._8_4_;
  fVar104 = fVar99 * fVar147 +
            (float)local_418._0_4_ * (float)local_6e8._0_4_ +
            (float)local_488._0_4_ * (float)local_6c8._0_4_;
  fVar115 = fVar145 * fVar148 +
            (float)local_418._4_4_ * (float)local_6e8._4_4_ +
            (float)local_488._4_4_ * (float)local_6c8._4_4_;
  fVar121 = fVar119 * fVar149 + fStack_410 * fStack_6e0 + fStack_480 * fStack_6c0;
  fVar129 = fVar146 * fVar264 + fStack_40c * fStack_6dc + fStack_47c * fStack_6bc;
  auVar156._4_4_ = auVar194._4_4_ * 3;
  auVar156._0_4_ = auVar194._0_4_ * 3;
  auVar156._8_4_ = auVar194._8_4_ * 3;
  auVar156._12_4_ = auVar194._12_4_ * 3;
  auVar156 = auVar156 & auVar243;
  lVar34 = param_2 + (longlong)auVar156._0_4_ * 4;
  auVar133._4_4_ = auVar238._4_4_ * 3;
  auVar133._0_4_ = auVar238._0_4_ * 3;
  auVar133._8_4_ = auVar238._8_4_ * 3;
  auVar133._12_4_ = auVar238._12_4_ * 3;
  auVar133 = auVar133 & auVar243;
  lVar35 = param_2 + (longlong)auVar133._0_4_ * 4;
  auVar185._4_4_ = auVar110._4_4_ * 3;
  auVar185._0_4_ = auVar110._0_4_ * 3;
  auVar185._8_4_ = auVar110._8_4_ * 3;
  auVar185._12_4_ = auVar110._12_4_ * 3;
  auVar185 = auVar185 & auVar243;
  lVar37 = param_2 + (longlong)auVar185._0_4_ * 4;
  auVar201._4_4_ = auVar113._4_4_ * 3;
  auVar201._0_4_ = auVar113._0_4_ * 3;
  auVar201._8_4_ = auVar113._8_4_ * 3;
  auVar201._12_4_ = auVar113._12_4_ * 3;
  auVar211._4_4_ = auVar244._4_4_ * 3;
  auVar211._0_4_ = auVar244._0_4_ * 3;
  auVar211._8_4_ = auVar244._8_4_ * 3;
  auVar211._12_4_ = auVar244._12_4_ * 3;
  auVar125._4_4_ = auVar222._4_4_ * 3;
  auVar125._0_4_ = auVar222._0_4_ * 3;
  auVar125._8_4_ = auVar222._8_4_ * 3;
  auVar125._12_4_ = auVar222._12_4_ * 3;
  auVar201 = auVar201 & auVar243;
  lVar38 = param_2 + (longlong)auVar201._0_4_ * 4;
  auVar211 = auVar211 & auVar243;
  lVar39 = param_2 + (longlong)auVar211._0_4_ * 4;
  auVar125 = auVar125 & auVar243;
  lVar40 = param_2 + (longlong)auVar125._0_4_ * 4;
  local_4a8._0_4_ = auVar123._0_4_;
  local_4a8._4_4_ = auVar123._4_4_;
  fStack_4a0 = auVar123._8_4_;
  fStack_49c = auVar123._12_4_;
  fVar138 = fVar99 * (float)local_4a8._0_4_ +
            (float)local_418._0_4_ * local_3a8 + (float)local_488._0_4_ * auVar237._0_4_;
  fVar162 = fVar145 * (float)local_4a8._4_4_ +
            (float)local_418._4_4_ * fStack_3a4 + (float)local_488._4_4_ * auVar237._4_4_;
  fVar168 = fVar119 * fStack_4a0 + fStack_410 * fStack_3a0 + fStack_480 * auVar237._8_4_;
  fVar141 = fVar146 * fStack_49c + fStack_40c * fStack_39c + fStack_47c * auVar237._12_4_;
  lVar64 = param_2 + (longlong)auVar156._4_4_ * 4;
  auVar109 = insertps(ZEXT416(*(uint *)(uVar59 + lVar34)),*(undefined4 *)(uVar49 + lVar64),0x10);
  auVar87 = insertps(ZEXT416(*(uint *)(uVar67 + lVar34)),*(undefined4 *)(uVar66 + lVar64),0x10);
  lVar34 = param_2 + (longlong)auVar133._4_4_ * 4;
  auVar131 = insertps(ZEXT416(*(uint *)(uVar59 + lVar35)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar112 = insertps(ZEXT416(*(uint *)(uVar67 + lVar35)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar185._4_4_ * 4;
  auVar195 = insertps(ZEXT416(*(uint *)(uVar59 + lVar37)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar113 = insertps(ZEXT416(*(uint *)(uVar67 + lVar37)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar201._4_4_ * 4;
  auVar218 = insertps(ZEXT416(*(uint *)(uVar59 + lVar38)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar108 = insertps(ZEXT416(*(uint *)(uVar67 + lVar38)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar211._4_4_ * 4;
  auVar210 = insertps(ZEXT416(*(uint *)(uVar59 + lVar39)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar123 = insertps(ZEXT416(*(uint *)(uVar67 + lVar39)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar125._4_4_ * 4;
  auVar243 = insertps(ZEXT416(*(uint *)(uVar59 + lVar40)),*(undefined4 *)(uVar49 + lVar34),0x10);
  auVar111 = insertps(ZEXT416(*(uint *)(uVar67 + lVar40)),*(undefined4 *)(uVar66 + lVar34),0x10);
  lVar34 = param_2 + (longlong)auVar156._8_4_ * 4;
  auVar109 = insertps(auVar109,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar110 = insertps(auVar87,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar133._8_4_ * 4;
  auVar197 = insertps(auVar131,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar194 = insertps(auVar112,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar185._8_4_ * 4;
  auVar221 = insertps(auVar195,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar195 = insertps(auVar113,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar201._8_4_ * 4;
  auVar131 = insertps(auVar218,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar218 = insertps(auVar108,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar211._8_4_ * 4;
  auVar87 = insertps(auVar210,*(undefined4 *)(local_478 + lVar34),0x20);
  auVar196 = insertps(auVar123,*(undefined4 *)(uVar41 + lVar34),0x20);
  lVar34 = param_2 + (longlong)auVar125._8_4_ * 4;
  auVar112 = insertps(auVar243,*(undefined4 *)(local_478 + lVar34),0x20);
  fVar130 = (float)(__xmm_80000000800000008000000080000000 ^ local_328._0_4_);
  fVar140 = (float)(_UNK_150651574 ^ local_328._4_4_);
  fVar144 = (float)(_UNK_150651578 ^ (uint)fStack_320);
  fVar137 = (float)(_UNK_15065157c ^ (uint)fStack_31c);
  local_4f8 = auVar132._0_4_;
  fStack_4f4 = auVar132._4_4_;
  fStack_4f0 = auVar132._8_4_;
  fStack_4ec = auVar132._12_4_;
  local_398 = auVar219._0_4_;
  fStack_394 = auVar219._4_4_;
  fStack_390 = auVar219._8_4_;
  fStack_38c = auVar219._12_4_;
  local_698 = auVar153._0_4_;
  fStack_694 = auVar153._4_4_;
  fStack_690 = auVar153._8_4_;
  fStack_68c = auVar153._12_4_;
  auVar123 = insertps(auVar111,*(undefined4 *)(uVar41 + lVar34),0x20);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar156._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar156._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar156._8_4_ * 4),0x20);
  auVar108 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar156._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar156._12_4_ * 4;
  auVar111 = insertps(auVar109,*(undefined4 *)(uVar71 + lVar34),0x30);
  auVar113 = insertps(auVar110,*(undefined4 *)(uVar46 + lVar34),0x30);
  local_5e8 = auVar245._0_4_;
  fStack_5e4 = auVar245._4_4_;
  fStack_5e0 = auVar245._8_4_;
  fStack_5dc = auVar245._12_4_;
  local_688 = auVar232._0_4_;
  fStack_684 = auVar232._4_4_;
  fStack_680 = auVar232._8_4_;
  fStack_67c = auVar232._12_4_;
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar133._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar133._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar133._8_4_ * 4),0x20);
  local_5d8 = auVar183._0_4_;
  fStack_5d4 = auVar183._4_4_;
  fStack_5d0 = auVar183._8_4_;
  fStack_5cc = auVar183._12_4_;
  auVar232 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar133._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar133._12_4_ * 4;
  auVar197 = insertps(auVar197,*(undefined4 *)(uVar71 + lVar34),0x30);
  auVar132 = insertps(auVar194,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar185._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar185._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar185._8_4_ * 4),0x20);
  auVar109 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar185._12_4_ * 4),0x30);
  fVar177 = local_4d8._0_4_;
  fVar178 = local_4d8._4_4_;
  fVar179 = local_4d8._12_4_;
  fVar143 = local_4d8._8_4_;
  lVar34 = param_2 + (longlong)auVar185._12_4_ * 4;
  auVar110 = insertps(auVar221,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar139 = (local_4f8 * fVar130 - local_398 * local_698) - fVar177 * (float)local_618._0_4_;
  fVar163 = (fStack_4f4 * fVar140 - fStack_394 * fStack_694) - fVar178 * (float)local_618._4_4_;
  fVar169 = (fStack_4f0 * fVar144 - fStack_390 * fStack_690) - fVar143 * fStack_610;
  fVar142 = (fStack_4ec * fVar137 - fStack_38c * fStack_68c) - fVar179 * fStack_60c;
  auVar245 = insertps(auVar195,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar201._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar201._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar201._8_4_ * 4),0x20);
  auVar183 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar201._12_4_ * 4),0x30);
  local_438 = auVar220._0_4_;
  fStack_434 = auVar220._4_4_;
  fStack_430 = auVar220._8_4_;
  fStack_42c = auVar220._12_4_;
  lVar34 = param_2 + (longlong)auVar201._12_4_ * 4;
  auVar131 = insertps(auVar131,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar193 = (local_5e8 * fVar130 - local_398 * local_688) - fVar177 * local_438;
  fVar203 = (fStack_5e4 * fVar140 - fStack_394 * fStack_684) - fVar178 * fStack_434;
  fVar205 = (fStack_5e0 * fVar144 - fStack_390 * fStack_680) - fVar143 * fStack_430;
  fVar207 = (fStack_5dc * fVar137 - fStack_38c * fStack_67c) - fVar179 * fStack_42c;
  auVar218 = insertps(auVar218,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar211._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar211._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar211._8_4_ * 4),0x20);
  auVar243 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar211._12_4_ * 4),0x30);
  lVar34 = param_2 + (longlong)auVar211._12_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar71 + lVar34),0x30);
  fVar102 = (local_5d8 * fVar130 - local_398 * (float)local_678._0_4_) -
            fVar177 * (float)local_6d8._0_4_;
  fVar117 = (fStack_5d4 * fVar140 - fStack_394 * (float)local_678._4_4_) -
            fVar178 * (float)local_6d8._4_4_;
  fVar127 = (fStack_5d0 * fVar144 - fStack_390 * fStack_670) - fVar143 * fStack_6d0;
  fVar122 = (fStack_5cc * fVar137 - fStack_38c * fStack_66c) - fVar179 * fStack_6cc;
  auVar153 = insertps(auVar196,*(undefined4 *)(uVar46 + lVar34),0x30);
  auVar210 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar125._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar125._4_4_ * 4),0x10);
  auVar210 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar125._8_4_ * 4),0x20);
  auVar220 = insertps(auVar210,*(undefined4 *)(param_2 + (longlong)auVar125._12_4_ * 4),0x30);
  param_2 = param_2 + (longlong)auVar125._12_4_ * 4;
  auVar112 = insertps(auVar112,*(undefined4 *)(uVar71 + param_2),0x30);
  auVar123 = insertps(auVar123,*(undefined4 *)(uVar46 + param_2),0x30);
  lVar34 = (longlong)(int)(uVar58 << 2);
  bVar57 = bVar33 & 9;
  pfVar1 = (float *)(param_6 + lVar34);
  local_528._0_4_ = *param_9;
  auVar210 = auVar220;
  fVar105 = (float)local_528._0_4_;
  local_528._4_4_ = local_528._0_4_;
  fStack_520 = (float)local_528._0_4_;
  if (bVar57 == 9) {
    local_538 = *(undefined1 (*) [16])(param_5 + lVar34);
    _local_4d8 = *(undefined1 (*) [16])(param_6 + lVar34);
    if ((param_8 & 1) == 0) {
      local_548._0_4_ = *param_12;
      if ((param_11 & 1) != 0) goto LAB_14090516f;
LAB_140904f30:
      fStack_4dc = *param_15;
      local_548._4_4_ = local_548._0_4_;
      fStack_540 = (float)local_548._0_4_;
      fStack_53c = (float)local_548._0_4_;
      fStack_51c = (float)local_528._0_4_;
    }
    else {
      auVar210 = *(undefined1 (*) [16])(param_10 + lVar34);
LAB_140905149:
      fVar118 = param_9[1];
      fVar105 = (float)local_528._0_4_ + fVar118 * auVar210._0_4_;
      local_528._4_4_ = (float)local_528._0_4_ + fVar118 * auVar210._4_4_;
      fStack_520 = (float)local_528._0_4_ + fVar118 * auVar210._8_4_;
      local_528._0_4_ = (float)local_528._0_4_ + fVar118 * auVar210._12_4_;
      local_548._0_4_ = *param_12;
      if ((param_11 & 1) == 0) goto LAB_140904f30;
LAB_14090516f:
      if (bVar57 != 9) goto LAB_14090517d;
      auVar210 = *(undefined1 (*) [16])(param_13 + lVar34);
LAB_1409051a8:
      fVar118 = param_12[1];
      local_548._4_4_ = (float)local_548._0_4_ + fVar118 * auVar210._4_4_;
      fStack_540 = (float)local_548._0_4_ + fVar118 * auVar210._8_4_;
      fStack_53c = (float)local_548._0_4_ + fVar118 * auVar210._12_4_;
      fStack_4dc = *param_15;
      local_548._0_4_ = (float)local_548._0_4_ + fVar118 * auVar210._0_4_;
      fStack_51c = (float)local_528._0_4_;
    }
    local_528._0_4_ = fVar105;
    if ((param_14 & 1) != 0) {
      if (bVar57 == 9) {
        auVar210 = *(undefined1 (*) [16])(param_16 + lVar34);
      }
      else {
LAB_14090524f:
        puVar47 = (uint *)(param_16 + lVar34);
        if ((uVar50 & 1) != 0) {
          auVar210 = ZEXT416(*puVar47);
        }
        if ((uVar50 & 2) != 0) {
          auVar210 = insertps(auVar210,puVar47[1],0x10);
        }
        if ((uVar50 & 4) != 0) {
          auVar210 = insertps(auVar210,puVar47[2],0x20);
        }
        if ((uVar50 & 8) != 0) {
          auVar210 = insertps(auVar210,puVar47[3],0x30);
        }
      }
      fVar105 = param_15[1];
      fStack_4e4 = fStack_4dc + fVar105 * auVar210._4_4_;
      local_4e8 = fStack_4dc + fVar105 * auVar210._0_4_;
      fStack_4e0 = fStack_4dc + fVar105 * auVar210._8_4_;
      fStack_4dc = fStack_4dc + fVar105 * auVar210._12_4_;
      goto LAB_1409052fe;
    }
  }
  else {
    puVar47 = (uint *)(param_5 + lVar34);
    local_538 = auVar131;
    if ((uVar50 & 1) != 0) {
      local_538 = ZEXT416(*puVar47);
    }
    if ((uVar50 & 2) != 0) {
      local_538 = insertps(local_538,puVar47[1],0x10);
    }
    if ((uVar50 & 4) != 0) {
      local_538 = insertps(local_538,puVar47[2],0x20);
    }
    if ((uVar50 & 8) != 0) {
      local_538 = insertps(local_538,puVar47[3],0x30);
    }
    if ((uVar50 & 1) != 0) {
      _local_4d8 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar50 & 2) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[1],0x10);
    }
    if ((uVar50 & 4) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[2],0x20);
    }
    if ((uVar50 & 8) != 0) {
      _local_4d8 = insertps(_local_4d8,pfVar1[3],0x30);
    }
    if ((param_8 & 1) != 0) {
      puVar47 = (uint *)(param_10 + lVar34);
      if ((uVar50 & 1) != 0) {
        auVar210 = ZEXT416(*puVar47);
      }
      if ((uVar50 & 2) != 0) {
        auVar210 = insertps(auVar210,puVar47[1],0x10);
      }
      if ((uVar50 & 4) != 0) {
        auVar210 = insertps(auVar210,puVar47[2],0x20);
      }
      if ((uVar50 & 8) != 0) {
        auVar210 = insertps(auVar210,puVar47[3],0x30);
      }
      goto LAB_140905149;
    }
    local_548._0_4_ = *param_12;
    if ((param_11 & 1) != 0) {
LAB_14090517d:
      puVar47 = (uint *)(param_13 + lVar34);
      if ((uVar50 & 1) != 0) {
        auVar210 = ZEXT416(*puVar47);
      }
      if ((uVar50 & 2) != 0) {
        auVar210 = insertps(auVar210,puVar47[1],0x10);
      }
      if ((uVar50 & 4) != 0) {
        auVar210 = insertps(auVar210,puVar47[2],0x20);
      }
      if ((uVar50 & 8) != 0) {
        auVar210 = insertps(auVar210,puVar47[3],0x30);
      }
      goto LAB_1409051a8;
    }
    fStack_4dc = *param_15;
    local_548._4_4_ = local_548._0_4_;
    fStack_540 = (float)local_548._0_4_;
    fStack_53c = (float)local_548._0_4_;
    fStack_51c = (float)local_528._0_4_;
    if ((param_14 & 1) != 0) goto LAB_14090524f;
  }
  fStack_4e4 = fStack_4dc;
  local_4e8 = fStack_4dc;
  fStack_4e0 = fStack_4dc;
LAB_1409052fe:
  fVar181 = fVar103 - fVar139;
  fVar188 = fVar116 - fVar163;
  auVar186._0_8_ = CONCAT44(fVar188,fVar181);
  auVar186._8_4_ = fVar120 - fVar169;
  auVar186._12_4_ = fVar128 - fVar142;
  fVar105 = fVar104 - fVar193;
  fVar118 = fVar115 - fVar203;
  auVar114._0_8_ = CONCAT44(fVar118,fVar105);
  auVar114._8_4_ = fVar121 - fVar205;
  auVar114._12_4_ = fVar129 - fVar207;
  fVar152 = fVar138 - fVar102;
  fVar151 = fVar162 - fVar117;
  auVar157._0_8_ = CONCAT44(fVar151,fVar152);
  auVar157._8_4_ = fVar168 - fVar127;
  auVar157._12_4_ = fVar141 - fVar122;
  auVar88._0_4_ = fVar181 * fVar181;
  auVar88._4_4_ = fVar188 * fVar188;
  auVar88._8_4_ = auVar186._8_4_ * auVar186._8_4_;
  auVar88._12_4_ = auVar186._12_4_ * auVar186._12_4_;
  auVar176._0_4_ = fVar152 * fVar152 + fVar105 * fVar105 + auVar88._0_4_;
  auVar176._4_4_ = fVar151 * fVar151 + fVar118 * fVar118 + auVar88._4_4_;
  auVar176._8_4_ = auVar157._8_4_ * auVar157._8_4_ + auVar114._8_4_ * auVar114._8_4_ + auVar88._8_4_
  ;
  auVar176._12_4_ =
       auVar157._12_4_ * auVar157._12_4_ + auVar114._12_4_ * auVar114._12_4_ + auVar88._12_4_;
  auVar194 = sqrtps(auVar88,auVar176);
  uVar58 = -(uint)(auVar176._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar50 = -(uint)(auVar176._4_4_ < _UNK_1506895e4);
  uVar80 = -(uint)(auVar176._8_4_ < _UNK_1506895e8);
  uVar82 = -(uint)(auVar176._12_4_ < _UNK_1506895ec);
  auVar89._4_4_ = uVar50;
  auVar89._0_4_ = uVar58;
  auVar134._8_4_ = auVar114._8_4_;
  auVar134._0_8_ = auVar114._0_8_;
  auVar134._12_4_ = auVar114._12_4_;
  auVar195 = divps(auVar134,auVar194);
  auVar223._8_4_ = auVar157._8_4_;
  auVar223._0_8_ = auVar157._0_8_;
  auVar223._12_4_ = auVar157._12_4_;
  auVar196 = divps(auVar223,auVar194);
  auVar248._8_4_ = auVar186._8_4_;
  auVar248._0_8_ = auVar186._0_8_;
  auVar248._12_4_ = auVar186._12_4_;
  auVar210 = divps(auVar248,auVar194);
  auVar89._8_4_ = uVar80;
  auVar89._12_4_ = uVar82;
  auVar25._4_4_ = _UNK_15076b1f4;
  auVar25._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar25._8_4_ = _UNK_15076b1f8;
  auVar25._12_4_ = _UNK_15076b1fc;
  auVar210 = blendvps(auVar210,auVar25,auVar89);
  auVar234._8_4_ = auVar186._8_4_;
  auVar234._0_8_ = auVar186._0_8_;
  auVar234._12_4_ = auVar186._12_4_;
  bVar76 = (bVar33 & 1) != 0;
  if (bVar76) {
    auVar234 = auVar210;
  }
  local_608._0_8_ = CONCAT44(~uVar50 & auVar195._4_4_,~uVar58 & auVar195._0_4_);
  local_608._8_4_ = ~uVar80 & auVar195._8_4_;
  local_608._12_4_ = ~uVar82 & auVar195._12_4_;
  local_498._4_4_ = ~uVar50 & auVar196._4_4_;
  local_498._0_4_ = ~uVar58 & auVar196._0_4_;
  local_498._8_4_ = ~uVar80 & auVar196._8_4_;
  local_498._12_4_ = ~uVar82 & auVar196._12_4_;
  auVar224._8_4_ = auVar114._8_4_;
  auVar224._0_8_ = auVar114._0_8_;
  auVar224._12_4_ = auVar114._12_4_;
  auVar135._8_4_ = auVar157._8_4_;
  auVar135._0_8_ = auVar157._0_8_;
  auVar135._12_4_ = auVar157._12_4_;
  if (bVar76) {
    auVar224._8_4_ = local_608._8_4_;
    auVar224._0_8_ = local_608._0_8_;
    auVar224._12_4_ = local_608._12_4_;
    auVar135 = local_498;
  }
  auVar195 = blendps(auVar186,auVar234,1);
  local_3f8 = auVar220._0_4_;
  fStack_3f4 = auVar220._4_4_;
  fStack_3f0 = auVar220._8_4_;
  fStack_3ec = auVar220._12_4_;
  if ((bVar33 & 2) == 0) {
    auVar219 = blendps(auVar114,auVar224,1);
    auVar221 = blendps(auVar157,auVar135,1);
    auVar220 = auVar221;
    auVar226 = auVar219;
    auVar196 = auVar195;
  }
  else {
    auVar219 = blendps(auVar114,auVar224,1);
    auVar226._8_4_ = local_608._8_4_;
    auVar226._0_8_ = local_608._0_8_;
    auVar226._12_4_ = local_608._12_4_;
    auVar221 = blendps(auVar157,auVar135,1);
    auVar220 = local_498;
    auVar196 = auVar210;
  }
  auVar196 = blendps(auVar195,auVar196,2);
  bVar76 = (bVar33 & 4) != 0;
  auVar195 = auVar196;
  if (bVar76) {
    auVar195 = auVar210;
  }
  auVar219 = blendps(auVar219,auVar226,2);
  auVar212 = auVar219;
  if (bVar76) {
    auVar212._8_4_ = local_608._8_4_;
    auVar212._0_8_ = local_608._0_8_;
    auVar212._12_4_ = local_608._12_4_;
  }
  auVar221 = blendps(auVar221,auVar220,2);
  auVar220 = auVar221;
  if (bVar76) {
    auVar220 = local_498;
  }
  local_728 = auVar154._0_4_;
  fStack_724 = auVar154._4_4_;
  fStack_720 = auVar154._8_4_;
  fStack_71c = auVar154._12_4_;
  local_6b8 = auVar184._0_4_;
  fStack_6b4 = auVar184._4_4_;
  fStack_6b0 = auVar184._8_4_;
  fStack_6ac = auVar184._12_4_;
  local_668 = auVar183._0_4_;
  fStack_664 = auVar183._4_4_;
  fStack_660 = auVar183._8_4_;
  fStack_65c = auVar183._12_4_;
  local_648 = auVar131._0_4_;
  fStack_644 = auVar131._4_4_;
  fStack_640 = auVar131._8_4_;
  fStack_63c = auVar131._12_4_;
  local_738 = auVar218._0_4_;
  fStack_734 = auVar218._4_4_;
  fStack_730 = auVar218._8_4_;
  fStack_72c = auVar218._12_4_;
  local_718 = auVar174._0_4_;
  fStack_714 = auVar174._4_4_;
  fStack_710 = auVar174._8_4_;
  fStack_70c = auVar174._12_4_;
  auVar218 = blendps(auVar196,auVar195,4);
  local_518 = auVar106._0_4_;
  fStack_514 = auVar106._4_4_;
  fStack_510 = auVar106._8_4_;
  fStack_50c = auVar106._12_4_;
  local_658 = auVar108._0_4_;
  fStack_654 = auVar108._4_4_;
  fStack_650 = auVar108._8_4_;
  fStack_64c = auVar108._12_4_;
  local_628 = auVar111._0_4_;
  fStack_624 = auVar111._4_4_;
  fStack_620 = auVar111._8_4_;
  fStack_61c = auVar111._12_4_;
  local_578 = auVar113._0_4_;
  fStack_574 = auVar113._4_4_;
  fStack_570 = auVar113._8_4_;
  fStack_56c = auVar113._12_4_;
  local_5a8 = auVar232._0_4_;
  fStack_5a4 = auVar232._4_4_;
  fStack_5a0 = auVar232._8_4_;
  fStack_59c = auVar232._12_4_;
  local_3b8 = auVar197._0_4_;
  fStack_3b4 = auVar197._4_4_;
  fStack_3b0 = auVar197._8_4_;
  fStack_3ac = auVar197._12_4_;
  local_478._0_4_ = auVar132._0_4_;
  local_478._4_4_ = auVar132._4_4_;
  fStack_470 = auVar132._8_4_;
  fStack_46c = auVar132._12_4_;
  local_5b8 = auVar243._0_4_;
  fStack_5b4 = auVar243._4_4_;
  fStack_5b0 = auVar243._8_4_;
  fStack_5ac = auVar243._12_4_;
  local_3d8 = auVar153._0_4_;
  fStack_3d4 = auVar153._4_4_;
  fStack_3d0 = auVar153._8_4_;
  fStack_3cc = auVar153._12_4_;
  bVar76 = -1 < (char)bVar33;
  if (bVar76) {
    auVar210 = auVar218;
  }
  local_708 = auVar86._0_4_;
  fStack_704 = auVar86._4_4_;
  fStack_700 = auVar86._8_4_;
  fStack_6fc = auVar86._12_4_;
  auVar232 = blendps(auVar219,auVar212,4);
  local_6a8 = auVar124._0_4_;
  fStack_6a4 = auVar124._4_4_;
  fStack_6a0 = auVar124._8_4_;
  fStack_69c = auVar124._12_4_;
  local_598 = auVar109._0_4_;
  fStack_594 = auVar109._4_4_;
  fStack_590 = auVar109._8_4_;
  fStack_58c = auVar109._12_4_;
  local_638 = auVar110._0_4_;
  fStack_634 = auVar110._4_4_;
  fStack_630 = auVar110._8_4_;
  fStack_62c = auVar110._12_4_;
  local_368 = auVar245._0_4_;
  fStack_364 = auVar245._4_4_;
  fStack_360 = auVar245._8_4_;
  fStack_35c = auVar245._12_4_;
  local_3c8 = auVar112._0_4_;
  fStack_3c4 = auVar112._4_4_;
  fStack_3c0 = auVar112._8_4_;
  fStack_3bc = auVar112._12_4_;
  local_588 = auVar123._0_4_;
  fStack_584 = auVar123._4_4_;
  fStack_580 = auVar123._8_4_;
  fStack_57c = auVar123._12_4_;
  if (bVar76) {
    local_608 = auVar232;
  }
  auVar220 = blendps(auVar221,auVar220,4);
  if (bVar76) {
    local_498 = auVar220;
  }
  local_2b8 = auVar194._0_4_;
  uStack_2b4 = auVar194._4_4_;
  uStack_2b0 = auVar194._8_4_;
  uStack_2ac = auVar194._12_4_;
  auVar91._4_4_ = -(uint)(0.0 <= (float)(~uVar50 & uStack_2b4) - local_538._4_4_);
  auVar91._0_4_ = -(uint)(0.0 <= (float)(~uVar58 & local_2b8) - local_538._0_4_);
  auVar26._4_4_ = _UNK_15076b1f4;
  auVar26._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar26._8_4_ = _UNK_15076b1f8;
  auVar26._12_4_ = _UNK_15076b1fc;
  auVar108 = divps(auVar26,local_538);
  auVar90._4_4_ = -(uint)(local_538._4_4_ < _UNK_1506895d4);
  auVar90._0_4_ = -(uint)(local_538._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar90._8_4_ = -(uint)(local_538._8_4_ < _UNK_1506895d8);
  auVar90._12_4_ = -(uint)(local_538._12_4_ < _UNK_1506895dc);
  auVar243 = blendvps(auVar108,auVar26,auVar90);
  auVar91._8_4_ = -(uint)(0.0 <= (float)(~uVar80 & uStack_2b0) - local_538._8_4_);
  auVar91._12_4_ = -(uint)(0.0 <= (float)(~uVar82 & uStack_2ac) - local_538._12_4_);
  auVar108 = blendvps(_local_548,_local_528,auVar91);
  auVar109 = blendps(auVar218,auVar210,8);
  auVar232 = blendps(auVar232,local_608,8);
  auVar220 = blendps(auVar220,local_498,8);
  auVar261._0_4_ =
       (float)local_488._0_4_ * local_728 + (float)local_418._0_4_ * local_718 + fVar99 * local_708
       + ((local_6b8 * fVar130 - local_398 * local_518) - fVar177 * local_6a8);
  auVar261._4_4_ =
       (float)local_488._4_4_ * fStack_724 + (float)local_418._4_4_ * fStack_714 +
       fVar145 * fStack_704 +
       ((fStack_6b4 * fVar140 - fStack_394 * fStack_514) - fVar178 * fStack_6a4);
  auVar261._8_4_ =
       fStack_480 * fStack_720 + fStack_410 * fStack_710 + fVar119 * fStack_700 +
       ((fStack_6b0 * fVar144 - fStack_390 * fStack_510) - fVar143 * fStack_6a0);
  auVar261._12_4_ =
       fStack_47c * fStack_71c + fStack_40c * fStack_70c + fVar146 * fStack_6fc +
       ((fStack_6ac * fVar137 - fStack_38c * fStack_50c) - fVar179 * fStack_69c);
  auVar210 = divps(auVar108,auVar261);
  auVar210 = sqrtps(auVar91,auVar210);
  fVar181 = param_7 * auVar210._0_4_ * (local_4e8 + local_4e8) * auVar243._0_4_;
  fVar188 = param_7 * auVar210._4_4_ * (fStack_4e4 + fStack_4e4) * auVar243._4_4_;
  fVar159 = param_7 * auVar210._8_4_ * (fStack_4e0 + fStack_4e0) * auVar243._8_4_;
  param_7 = param_7 * auVar210._12_4_ * (fStack_4dc + fStack_4dc) * auVar243._12_4_;
  fVar105 = auVar232._0_4_;
  fVar118 = auVar232._4_4_;
  fVar152 = auVar232._8_4_;
  fVar151 = auVar232._12_4_;
  auVar262._0_4_ = auVar261._0_4_ * fVar181 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar262._4_4_ = auVar261._4_4_ * fVar188 + _UNK_15076b1f4;
  auVar262._8_4_ = auVar261._8_4_ * fVar159 + _UNK_15076b1f8;
  auVar262._12_4_ = auVar261._12_4_ * param_7 + _UNK_15076b1fc;
  auVar255._0_4_ =
       ((((fVar138 -
          (local_578 * (float)local_488._0_4_ + (float)local_478 * (float)local_418._0_4_ +
          local_368 * fVar99)) - fVar102) +
        ((local_738 * fVar130 - local_3d8 * local_398) - local_588 * fVar177)) * auVar220._0_4_ +
       (((fVar104 -
         (local_628 * (float)local_488._0_4_ + local_3b8 * (float)local_418._0_4_ +
         local_638 * fVar99)) - fVar193) +
       ((local_648 * fVar130 - auVar87._0_4_ * local_398) - local_3c8 * fVar177)) * fVar105 +
       (((fVar103 -
         (local_658 * (float)local_488._0_4_ + local_5a8 * (float)local_418._0_4_ +
         local_598 * fVar99)) - fVar139) +
       ((local_668 * fVar130 - local_5b8 * local_398) - local_3f8 * fVar177)) * auVar109._0_4_) *
       (float)((uint)fVar181 ^ __xmm_80000000800000008000000080000000) - (float)local_4d8._0_4_;
  auVar255._4_4_ =
       ((((fVar162 -
          (fStack_574 * (float)local_488._4_4_ + local_478._4_4_ * (float)local_418._4_4_ +
          fStack_364 * fVar145)) - fVar117) +
        ((fStack_734 * fVar140 - fStack_3d4 * fStack_394) - fStack_584 * fVar178)) * auVar220._4_4_
       + (((fVar115 -
           (fStack_624 * (float)local_488._4_4_ + fStack_3b4 * (float)local_418._4_4_ +
           fStack_634 * fVar145)) - fVar203) +
         ((fStack_644 * fVar140 - auVar87._4_4_ * fStack_394) - fStack_3c4 * fVar178)) * fVar118 +
         (((fVar116 -
           (fStack_654 * (float)local_488._4_4_ + fStack_5a4 * (float)local_418._4_4_ +
           fStack_594 * fVar145)) - fVar163) +
         ((fStack_664 * fVar140 - fStack_5b4 * fStack_394) - fStack_3f4 * fVar178)) * auVar109._4_4_
       ) * (float)((uint)fVar188 ^ _UNK_150651574) - (float)local_4d8._4_4_;
  auVar255._8_4_ =
       ((((fVar168 - (fStack_570 * fStack_480 + fStack_470 * fStack_410 + fStack_360 * fVar119)) -
         fVar127) + ((fStack_730 * fVar144 - fStack_3d0 * fStack_390) - fStack_580 * fVar143)) *
        auVar220._8_4_ +
       (((fVar121 - (fStack_620 * fStack_480 + fStack_3b0 * fStack_410 + fStack_630 * fVar119)) -
        fVar205) + ((fStack_640 * fVar144 - auVar87._8_4_ * fStack_390) - fStack_3c0 * fVar143)) *
       fVar152 + (((fVar120 -
                   (fStack_650 * fStack_480 + fStack_5a0 * fStack_410 + fStack_590 * fVar119)) -
                  fVar169) +
                 ((fStack_660 * fVar144 - fStack_5b0 * fStack_390) - fStack_3f0 * fVar143)) *
                 auVar109._8_4_) * (float)((uint)fVar159 ^ _UNK_150651578) - fStack_4d0;
  auVar255._12_4_ =
       ((((fVar141 - (fStack_56c * fStack_47c + fStack_46c * fStack_40c + fStack_35c * fVar146)) -
         fVar122) + ((fStack_72c * fVar137 - fStack_3cc * fStack_38c) - fStack_57c * fVar179)) *
        auVar220._12_4_ +
       (((fVar129 - (fStack_61c * fStack_47c + fStack_3ac * fStack_40c + fStack_62c * fVar146)) -
        fVar207) + ((fStack_63c * fVar137 - auVar87._12_4_ * fStack_38c) - fStack_3bc * fVar179)) *
       fVar151 + (((fVar128 -
                   (fStack_64c * fStack_47c + fStack_59c * fStack_40c + fStack_58c * fVar146)) -
                  fVar142) +
                 ((fStack_65c * fVar137 - fStack_5ac * fStack_38c) - fStack_3ec * fVar179)) *
                 auVar109._12_4_) * (float)((uint)param_7 ^ _UNK_15065157c) - fStack_4cc;
  auVar210 = divps(auVar255,auVar262);
  fVar103 = auVar210._0_4_;
  auVar92._0_4_ = (float)local_4d8._0_4_ + fVar103;
  fVar104 = auVar210._4_4_;
  auVar92._4_4_ = (float)local_4d8._4_4_ + fVar104;
  fVar102 = auVar210._8_4_;
  auVar92._8_4_ = fStack_4d0 + fVar102;
  fVar116 = auVar210._12_4_;
  auVar92._12_4_ = fStack_4cc + fVar116;
  if ((bVar33 & 1) != 0) {
    *pfVar1 = auVar92._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar92,1);
    *(undefined8 *)(pfVar1 + 1) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar92,2);
    *(undefined8 *)(pfVar1 + 2) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar92,3);
    *(undefined8 *)(pfVar1 + 3) = uVar24;
  }
  fVar117 = auVar109._4_4_ * fVar104;
  fVar115 = auVar109._0_4_ * fVar103;
  fVar121 = auVar109._12_4_ * fVar116;
  fVar120 = auVar109._8_4_ * fVar102;
  local_5f8._0_4_ = auVar107._0_4_ + local_728 * fVar115 * (float)local_488._0_4_;
  local_5f8._4_4_ = auVar107._4_4_ + fStack_724 * fVar117 * (float)local_488._4_4_;
  fStack_5f0 = auVar107._8_4_ + fStack_720 * fVar120 * fStack_480;
  fStack_5ec = auVar107._12_4_ + fStack_71c * fVar121 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + auVar155._0_4_) = local_5f8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_5f8,1);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_5f8,2);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_5f8,3);
    *(undefined8 *)(param_1 + (int)uVar42) = uVar24;
  }
  fVar128 = fVar118 * fVar104;
  fVar127 = fVar105 * fVar103;
  fVar122 = fVar151 * fVar116;
  fVar129 = fVar152 * fVar102;
  local_6c8._0_4_ = (float)local_6c8._0_4_ + local_728 * fVar105 * fVar103 * (float)local_488._0_4_;
  local_6c8._4_4_ = (float)local_6c8._4_4_ + fStack_724 * fVar118 * fVar104 * (float)local_488._4_4_
  ;
  fStack_6c0 = fStack_6c0 + fStack_720 * fVar152 * fVar102 * fStack_480;
  fStack_6bc = fStack_6bc + fStack_71c * fVar151 * fVar116 * fStack_47c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)auVar155._0_4_) = local_6c8._0_4_;
  }
  fVar103 = auVar220._0_4_ * fVar103;
  fVar104 = auVar220._4_4_ * fVar104;
  fVar102 = auVar220._8_4_ * fVar102;
  fVar116 = auVar220._12_4_ * fVar116;
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_6c8,1);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_6c8,2);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_6c8,3);
    *(undefined8 *)(param_1 + 4 + (longlong)(int)uVar42) = uVar24;
  }
  local_568._0_4_ = auVar237._0_4_ + (float)local_488._0_4_ * local_728 * fVar103;
  local_568._4_4_ = auVar237._4_4_ + (float)local_488._4_4_ * fStack_724 * fVar104;
  fStack_560 = auVar237._8_4_ + fStack_480 * fStack_720 * fVar102;
  fStack_55c = auVar237._12_4_ + fStack_47c * fStack_71c * fVar116;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 8 + (longlong)auVar155._0_4_) = local_568._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(_local_568,1);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(_local_568,2);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(_local_568,3);
    *(undefined8 *)(param_1 + 8 + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar155._0_4_) = local_728;
  }
  if ((bVar33 & 2) != 0) {
    uVar42 = extractps(auVar155,1);
    uVar24 = extractps(auVar154,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar42 = extractps(auVar155,2);
    uVar24 = extractps(auVar154,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar42 = extractps(auVar155,3);
    uVar24 = extractps(auVar154,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)(int)uVar42) = uVar24;
  }
  auVar239._0_4_ = (float)local_4b8._0_4_ + local_718 * fVar115 * (float)local_418._0_4_;
  auVar239._4_4_ = (float)local_4b8._4_4_ + fStack_714 * fVar117 * (float)local_418._4_4_;
  auVar239._8_4_ = fStack_4b0 + fStack_710 * fVar120 * fStack_410;
  auVar239._12_4_ = fStack_4ac + fStack_70c * fVar121 * fStack_40c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar198._0_4_) = auVar239._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar239,1);
    *(undefined8 *)(param_1 + auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar239,2);
    *(undefined8 *)(param_1 + auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar239,3);
    *(undefined8 *)(param_1 + auVar198._12_4_) = uVar24;
  }
  local_6e8._0_4_ = (float)local_6e8._0_4_ + local_718 * fVar127 * (float)local_418._0_4_;
  local_6e8._4_4_ = (float)local_6e8._4_4_ + fStack_714 * fVar128 * (float)local_418._4_4_;
  fStack_6e0 = fStack_6e0 + fStack_710 * fVar129 * fStack_410;
  fStack_6dc = fStack_6dc + fStack_70c * fVar122 * fStack_40c;
  if ((bVar33 & 1) != 0) {
    *(undefined4 *)(param_1 + 4 + (longlong)auVar198._0_4_) = local_6e8._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(_local_6e8,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(_local_6e8,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._8_4_) = uVar24;
  }
  uVar30 = fStack_40c * fStack_70c * fVar116;
  uVar29 = fStack_410 * fStack_710 * fVar102;
  local_418._4_4_ = (float)local_418._4_4_ * fStack_714 * fVar104;
  local_418._0_4_ = (float)local_418._0_4_ * local_718 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(_local_6e8,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar198._12_4_) = uVar24;
    auVar93._0_4_ = local_3a8 + (float)local_418._0_4_;
    auVar93._4_4_ = fStack_3a4 + (float)local_418._4_4_;
    auVar93._8_4_ = fStack_3a0 + (float)uVar29;
    auVar93._12_4_ = fStack_39c + (float)uVar30;
  }
  else {
    auVar93._0_4_ = local_3a8 + (float)local_418._0_4_;
    auVar93._4_4_ = fStack_3a4 + (float)local_418._4_4_;
    auVar93._8_4_ = fStack_3a0 + (float)uVar29;
    auVar93._12_4_ = fStack_39c + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar198._0_4_) = auVar93._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar93,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar93,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar93,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar198._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar198._0_4_) = local_718;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar174,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar174,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar174,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar198._12_4_) = uVar24;
  }
  auVar256._0_4_ = (float)local_508._0_4_ + local_708 * fVar115 * fVar99;
  auVar256._4_4_ = (float)local_508._4_4_ + fStack_704 * fVar117 * fVar145;
  auVar256._8_4_ = fStack_500 + fStack_700 * fVar120 * fVar119;
  auVar256._12_4_ = fStack_4fc + fStack_6fc * fVar121 * fVar146;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar199._0_4_) = auVar256._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar256,1);
    *(undefined8 *)(param_1 + auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar256,2);
    *(undefined8 *)(param_1 + auVar199._8_4_) = uVar24;
  }
  uVar32 = fStack_6fc * fVar122 * fVar146;
  uVar31 = fStack_700 * fVar129 * fVar119;
  uVar30 = fStack_704 * fVar128 * fVar145;
  uVar29 = local_708 * fVar127 * fVar99;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar256,3);
    *(undefined8 *)(param_1 + auVar199._12_4_) = uVar24;
    auVar263._0_4_ = fVar147 + (float)uVar29;
    auVar263._4_4_ = fVar148 + (float)uVar30;
    auVar263._8_4_ = fVar149 + (float)uVar31;
    auVar263._12_4_ = fVar264 + (float)uVar32;
  }
  else {
    auVar263._0_4_ = fVar147 + (float)uVar29;
    auVar263._4_4_ = fVar148 + (float)uVar30;
    auVar263._8_4_ = fVar149 + (float)uVar31;
    auVar263._12_4_ = fVar264 + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar199._0_4_) = auVar263._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar263,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar263,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._8_4_) = uVar24;
  }
  uVar32 = fVar146 * fStack_6fc * fVar116;
  uVar31 = fVar119 * fStack_700 * fVar102;
  uVar30 = fVar145 * fStack_704 * fVar104;
  uVar29 = fVar99 * local_708 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar263,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar199._12_4_) = uVar24;
    auVar94._0_4_ = (float)local_4a8._0_4_ + (float)uVar29;
    auVar94._4_4_ = (float)local_4a8._4_4_ + (float)uVar30;
    auVar94._8_4_ = fStack_4a0 + (float)uVar31;
    auVar94._12_4_ = fStack_49c + (float)uVar32;
  }
  else {
    auVar94._0_4_ = (float)local_4a8._0_4_ + (float)uVar29;
    auVar94._4_4_ = (float)local_4a8._4_4_ + (float)uVar30;
    auVar94._8_4_ = fStack_4a0 + (float)uVar31;
    auVar94._12_4_ = fStack_49c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar199._0_4_) = auVar94._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar199._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar199._0_4_) = local_708;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar86,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar86,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar86,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar199._12_4_) = uVar24;
  }
  auVar249._0_4_ = local_4f8 + local_6b8 * fVar115 * (float)local_328._0_4_;
  auVar249._4_4_ = fStack_4f4 + fStack_6b4 * fVar117 * (float)local_328._4_4_;
  auVar249._8_4_ = fStack_4f0 + fStack_6b0 * fVar120 * fStack_320;
  auVar249._12_4_ = fStack_4ec + fStack_6ac * fVar121 * fStack_31c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar247._0_4_) = auVar249._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar249,1);
    *(undefined8 *)(param_1 + auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar249,2);
    *(undefined8 *)(param_1 + auVar247._8_4_) = uVar24;
  }
  uVar32 = fStack_6ac * fVar122 * fStack_31c;
  uVar31 = fStack_6b0 * fVar129 * fStack_320;
  uVar30 = fStack_6b4 * fVar128 * (float)local_328._4_4_;
  uVar29 = local_6b8 * fVar127 * (float)local_328._0_4_;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar249,3);
    *(undefined8 *)(param_1 + auVar247._12_4_) = uVar24;
    auVar235._0_4_ = local_5e8 + (float)uVar29;
    auVar235._4_4_ = fStack_5e4 + (float)uVar30;
    auVar235._8_4_ = fStack_5e0 + (float)uVar31;
    auVar235._12_4_ = fStack_5dc + (float)uVar32;
  }
  else {
    auVar235._0_4_ = local_5e8 + (float)uVar29;
    auVar235._4_4_ = fStack_5e4 + (float)uVar30;
    auVar235._8_4_ = fStack_5e0 + (float)uVar31;
    auVar235._12_4_ = fStack_5dc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar247._0_4_) = auVar235._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar235,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar235,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._8_4_) = uVar24;
  }
  uVar30 = fStack_31c * fStack_6ac * fVar116;
  uVar29 = fStack_320 * fStack_6b0 * fVar102;
  local_328._4_4_ = (float)local_328._4_4_ * fStack_6b4 * fVar104;
  local_328._0_4_ = (float)local_328._0_4_ * local_6b8 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar235,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar247._12_4_) = uVar24;
    auVar95._0_4_ = local_5d8 + (float)local_328._0_4_;
    auVar95._4_4_ = fStack_5d4 + (float)local_328._4_4_;
    auVar95._8_4_ = fStack_5d0 + (float)uVar29;
    auVar95._12_4_ = fStack_5cc + (float)uVar30;
  }
  else {
    auVar95._0_4_ = local_5d8 + (float)local_328._0_4_;
    auVar95._4_4_ = fStack_5d4 + (float)local_328._4_4_;
    auVar95._8_4_ = fStack_5d0 + (float)uVar29;
    auVar95._12_4_ = fStack_5cc + (float)uVar30;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar247._0_4_) = auVar95._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar247._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar247._0_4_) = local_6b8;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar247._12_4_) = uVar24;
  }
  auVar225._0_4_ = local_698 + local_518 * fVar115 * local_398;
  auVar225._4_4_ = fStack_694 + fStack_514 * fVar117 * fStack_394;
  auVar225._8_4_ = fStack_690 + fStack_510 * fVar120 * fStack_390;
  auVar225._12_4_ = fStack_68c + fStack_50c * fVar121 * fStack_38c;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar200._0_4_) = auVar225._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar225,1);
    *(undefined8 *)(param_1 + auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar225,2);
    *(undefined8 *)(param_1 + auVar200._8_4_) = uVar24;
  }
  uVar32 = fStack_50c * fVar122 * fStack_38c;
  uVar31 = fStack_510 * fVar129 * fStack_390;
  uVar30 = fStack_514 * fVar128 * fStack_394;
  uVar29 = local_518 * fVar127 * local_398;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar225,3);
    *(undefined8 *)(param_1 + auVar200._12_4_) = uVar24;
    auVar213._0_4_ = local_688 + (float)uVar29;
    auVar213._4_4_ = fStack_684 + (float)uVar30;
    auVar213._8_4_ = fStack_680 + (float)uVar31;
    auVar213._12_4_ = fStack_67c + (float)uVar32;
  }
  else {
    auVar213._0_4_ = local_688 + (float)uVar29;
    auVar213._4_4_ = fStack_684 + (float)uVar30;
    auVar213._8_4_ = fStack_680 + (float)uVar31;
    auVar213._12_4_ = fStack_67c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar200._0_4_) = auVar213._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar213,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar213,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._8_4_) = uVar24;
  }
  uVar32 = fStack_38c * fStack_50c * fVar116;
  uVar31 = fStack_390 * fStack_510 * fVar102;
  uVar30 = fStack_394 * fStack_514 * fVar104;
  uVar29 = local_398 * local_518 * fVar103;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar213,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar200._12_4_) = uVar24;
    auVar136._0_4_ = (float)local_678._0_4_ + (float)uVar29;
    auVar136._4_4_ = (float)local_678._4_4_ + (float)uVar30;
    auVar136._8_4_ = fStack_670 + (float)uVar31;
    auVar136._12_4_ = fStack_66c + (float)uVar32;
  }
  else {
    auVar136._0_4_ = (float)local_678._0_4_ + (float)uVar29;
    auVar136._4_4_ = (float)local_678._4_4_ + (float)uVar30;
    auVar136._8_4_ = fStack_670 + (float)uVar31;
    auVar136._12_4_ = fStack_66c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar200._0_4_) = auVar136._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar136,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar136,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar136,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar200._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar200._0_4_) = local_518;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar106,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar106,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar106,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar200._12_4_) = uVar24;
  }
  auVar126._0_4_ = (float)local_618._0_4_ + fVar115 * local_6a8 * fVar177;
  auVar126._4_4_ = (float)local_618._4_4_ + fVar117 * fStack_6a4 * fVar178;
  auVar126._8_4_ = fStack_610 + fVar120 * fStack_6a0 * fVar143;
  auVar126._12_4_ = fStack_60c + fVar121 * fStack_69c * fVar179;
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + auVar175._0_4_) = auVar126._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + auVar175._8_4_) = uVar24;
  }
  uVar32 = fVar122 * fStack_69c * fVar179;
  uVar31 = fVar129 * fStack_6a0 * fVar143;
  uVar30 = fVar128 * fStack_6a4 * fVar178;
  uVar29 = fVar127 * local_6a8 * fVar177;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + auVar175._12_4_) = uVar24;
    auVar96._0_4_ = local_438 + (float)uVar29;
    auVar96._4_4_ = fStack_434 + (float)uVar30;
    auVar96._8_4_ = fStack_430 + (float)uVar31;
    auVar96._12_4_ = fStack_42c + (float)uVar32;
  }
  else {
    auVar96._0_4_ = local_438 + (float)uVar29;
    auVar96._4_4_ = fStack_434 + (float)uVar30;
    auVar96._8_4_ = fStack_430 + (float)uVar31;
    auVar96._12_4_ = fStack_42c + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar175._0_4_) = auVar96._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._8_4_) = uVar24;
  }
  uVar32 = fVar179 * fVar116 * fStack_69c;
  uVar31 = fVar143 * fVar102 * fStack_6a0;
  uVar30 = fVar178 * fVar104 * fStack_6a4;
  uVar29 = fVar177 * fVar103 * local_6a8;
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar175._12_4_) = uVar24;
    auVar97._0_4_ = (float)local_6d8._0_4_ + (float)uVar29;
    auVar97._4_4_ = (float)local_6d8._4_4_ + (float)uVar30;
    auVar97._8_4_ = fStack_6d0 + (float)uVar31;
    auVar97._12_4_ = fStack_6cc + (float)uVar32;
  }
  else {
    auVar97._0_4_ = (float)local_6d8._0_4_ + (float)uVar29;
    auVar97._4_4_ = (float)local_6d8._4_4_ + (float)uVar30;
    auVar97._8_4_ = fStack_6d0 + (float)uVar31;
    auVar97._12_4_ = fStack_6cc + (float)uVar32;
  }
  if ((bVar33 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar175._0_4_) = auVar97._0_4_;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar97,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar97,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar97,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar175._12_4_) = uVar24;
  }
  if ((bVar33 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar175._0_4_) = local_6a8;
  }
  if ((bVar33 & 2) != 0) {
    uVar24 = extractps(auVar124,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._4_4_) = uVar24;
  }
  if ((bVar33 & 4) != 0) {
    uVar24 = extractps(auVar124,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._8_4_) = uVar24;
  }
  if ((char)bVar33 < '\0') {
    uVar24 = extractps(auVar124,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar175._12_4_) = uVar24;
  }
  return;
}

