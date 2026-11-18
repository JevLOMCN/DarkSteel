// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// aesni_cbc_sha256_enc @ 140e0e340

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
aesni_cbc_sha256_enc
          (undefined1 (*param_1) [16],longlong param_2,longlong param_3,undefined1 (*param_4) [16],
          undefined1 (*param_5) [16],uint *param_6,undefined1 (*param_7) [16])

{
  char *pcVar1;
  uint *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar45 [60];
  uint uVar46;
  undefined4 *puVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  ulonglong uVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  int *piVar54;
  undefined1 (*pauVar55) [16];
  uint uVar56;
  longlong lVar57;
  int iVar58;
  undefined1 (*pauVar59) [16];
  undefined1 (*pauVar60) [16];
  uint uVar61;
  undefined1 (*pauVar62) [16];
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  longlong lVar68;
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
  undefined1 in_ZMM1 [64];
  undefined1 auVar92 [64];
  undefined1 auVar93 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar94 [64];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar104 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar112 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 in_ZMM8 [64];
  undefined1 auVar122 [64];
  undefined1 auVar123 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar126 [64];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 in_ZMM11 [64];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auStack_310 [400];
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  
  auVar115 = _DAT_140e0e5c0;
  if (param_1 == (undefined1 (*) [16])0x0) {
    return (undefined4 *)0x1;
  }
  if ((_DAT_15540a9f4 >> 0x3d & 1) != 0) {
    auVar122._16_48_ = in_ZMM1._16_48_;
    auVar126._16_48_ = in_ZMM2._16_48_;
    uVar50 = *(uint *)param_4[0xf];
    param_2 = param_2 - (longlong)param_1;
    uVar48 = *(uint *)*param_4;
    uVar49 = *(uint *)(*param_4 + 4);
    uVar67 = *(uint *)(*param_4 + 8);
    uVar66 = *(uint *)(*param_4 + 0xc);
    auVar112._16_48_ = in_ZMM6._16_48_;
    auVar112._0_16_ = *param_5;
    auVar91 = param_4[1];
    pauVar62 = param_4 + 7;
    auVar126._12_4_ = param_6[2];
    auVar126._8_4_ = param_6[3];
    auVar117._20_4_ = *param_6;
    auVar117._16_4_ = param_6[1];
    auVar117._24_4_ = param_6[3];
    auVar117._28_4_ = param_6[2];
    auVar126._0_8_ = CONCAT44(param_6[6],param_6[7]);
    auVar117._8_4_ = param_6[5];
    auVar117._0_8_ = auVar126._0_8_;
    auVar117._12_4_ = param_6[4];
    auVar122._0_16_ = auVar117._8_16_;
    do {
      auVar97 = pshufb(*param_7,auVar115);
      pauVar59 = param_7 + 3;
      auVar104._0_4_ = K256 + auVar97._0_4_;
      auVar104._4_4_ = DAT_140e0e3c4 + auVar97._4_4_;
      auVar104._8_4_ = DAT_140e0e3c8 + auVar97._8_4_;
      auVar104._12_4_ = DAT_140e0e3cc + auVar97._12_4_;
      auVar95 = pshufb(param_7[1],auVar115);
      auVar102._0_4_ = auVar112._0_4_ ^ *(uint *)*param_1 ^ uVar48;
      auVar102._4_4_ = auVar112._4_4_ ^ *(uint *)(*param_1 + 4) ^ uVar49;
      auVar102._8_4_ = auVar112._8_4_ ^ *(uint *)(*param_1 + 8) ^ uVar67;
      auVar102._12_4_ = auVar112._12_4_ ^ *(uint *)(*param_1 + 0xc) ^ uVar66;
      auVar123 = aesenc(auVar102,auVar91);
      auVar94._16_48_ = auVar126._16_48_;
      auVar103 = sha256rnds2_sha(auVar126._0_16_,auVar122._0_16_,auVar104);
      auVar91._4_4_ = auVar104._12_4_;
      auVar91._0_4_ = auVar104._8_4_;
      auVar91._8_4_ = auVar104._0_4_;
      auVar91._12_4_ = auVar104._0_4_;
      auVar104 = aesenc(auVar123,param_4[2]);
      auVar92._16_48_ = auVar122._16_48_;
      auVar91 = sha256rnds2_sha(auVar122._0_16_,auVar103,auVar91);
      auVar123._0_4_ = DAT_140e0e3e0 + auVar95._0_4_;
      auVar123._4_4_ = DAT_140e0e3e4 + auVar95._4_4_;
      auVar123._8_4_ = DAT_140e0e3e8 + auVar95._8_4_;
      auVar123._12_4_ = DAT_140e0e3ec + auVar95._12_4_;
      auVar101 = pshufb(param_7[2],auVar115);
      param_7 = param_7 + 4;
      auVar114 = aesenc(auVar104,param_4[3]);
      auVar104 = sha256rnds2_sha(auVar103,auVar91,auVar123);
      auVar103._4_4_ = auVar123._12_4_;
      auVar103._0_4_ = auVar123._8_4_;
      auVar103._8_4_ = auVar123._0_4_;
      auVar103._12_4_ = auVar123._0_4_;
      auVar123 = aesenc(auVar114,param_4[4]);
      auVar91 = sha256rnds2_sha(auVar91,auVar104,auVar103);
      auVar114._0_4_ = DAT_140e0e400 + auVar101._0_4_;
      auVar114._4_4_ = DAT_140e0e404 + auVar101._4_4_;
      auVar114._8_4_ = DAT_140e0e408 + auVar101._8_4_;
      auVar114._12_4_ = DAT_140e0e40c + auVar101._12_4_;
      auVar102 = pshufb(*pauVar59,auVar115);
      auVar103 = sha256msg1_sha(auVar97,auVar95);
      auVar123 = aesenc(auVar123,param_4[5]);
      auVar104 = sha256rnds2_sha(auVar104,auVar91,auVar114);
      auVar97._4_4_ = auVar114._12_4_;
      auVar97._0_4_ = auVar114._8_4_;
      auVar97._8_4_ = auVar114._0_4_;
      auVar97._12_4_ = auVar114._0_4_;
      auVar113._0_4_ = auVar103._0_4_ + auVar101._4_4_;
      auVar113._4_4_ = auVar103._4_4_ + auVar101._8_4_;
      auVar113._8_4_ = auVar103._8_4_ + auVar101._12_4_;
      auVar113._12_4_ = auVar103._12_4_ + auVar102._0_4_;
      auVar123 = aesenc(auVar123,param_4[6]);
      auVar91 = sha256rnds2_sha(auVar91,auVar104,auVar97);
      auVar96._0_4_ = DAT_140e0e420 + auVar102._0_4_;
      auVar96._4_4_ = DAT_140e0e424 + auVar102._4_4_;
      auVar96._8_4_ = DAT_140e0e428 + auVar102._8_4_;
      auVar96._12_4_ = DAT_140e0e42c + auVar102._12_4_;
      auVar114 = sha256msg2_sha(auVar113,auVar102);
      auVar97 = sha256msg1_sha(auVar95,auVar101);
      auVar103 = aesenc(auVar123,*pauVar62);
      auVar123 = sha256rnds2_sha(auVar104,auVar91,auVar96);
      auVar95._4_4_ = auVar96._12_4_;
      auVar95._0_4_ = auVar96._8_4_;
      auVar95._8_4_ = auVar96._0_4_;
      auVar95._12_4_ = auVar96._0_4_;
      auVar103 = aesenc(auVar103,param_4[8]);
      auVar127._0_4_ = auVar97._0_4_ + auVar102._4_4_;
      auVar127._4_4_ = auVar97._4_4_ + auVar102._8_4_;
      auVar127._8_4_ = auVar97._8_4_ + auVar102._12_4_;
      auVar127._12_4_ = auVar97._12_4_ + auVar114._0_4_;
      auVar104 = sha256rnds2_sha(auVar91,auVar123,auVar95);
      auVar100._0_4_ = DAT_140e0e440 + auVar114._0_4_;
      auVar100._4_4_ = DAT_140e0e444 + auVar114._4_4_;
      auVar100._8_4_ = DAT_140e0e448 + auVar114._8_4_;
      auVar100._12_4_ = DAT_140e0e44c + auVar114._12_4_;
      auVar97 = sha256msg2_sha(auVar127,auVar114);
      auVar96 = sha256msg1_sha(auVar101,auVar102);
      auVar91 = param_4[10];
      auVar103 = aesenc(auVar103,param_4[9]);
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar100);
      auVar101._4_4_ = auVar100._12_4_;
      auVar101._0_4_ = auVar100._8_4_;
      auVar101._8_4_ = auVar100._0_4_;
      auVar101._12_4_ = auVar100._0_4_;
      auVar130._0_4_ = auVar96._0_4_ + auVar114._4_4_;
      auVar130._4_4_ = auVar96._4_4_ + auVar114._8_4_;
      auVar130._8_4_ = auVar96._8_4_ + auVar114._12_4_;
      auVar130._12_4_ = auVar96._12_4_ + auVar97._0_4_;
      if (10 < uVar50) {
        auVar103 = aesenc(auVar103,auVar91);
        auVar91 = param_4[0xc];
        auVar103 = aesenc(auVar103,param_4[0xb]);
        if (uVar50 != 0xb) {
          auVar103 = aesenc(auVar103,auVar91);
          auVar91 = param_4[0xe];
          auVar103 = aesenc(auVar103,param_4[0xd]);
        }
      }
      auVar103 = aesenclast(auVar103,auVar91);
      auVar91 = param_4[1];
      auVar104 = sha256rnds2_sha(auVar104,auVar123,auVar101);
      uVar65 = *(uint *)param_1[1];
      uVar64 = *(uint *)(param_1[1] + 4);
      uVar56 = *(uint *)(param_1[1] + 8);
      uVar46 = *(uint *)(param_1[1] + 0xc);
      *(undefined1 (*) [16])(param_2 + (longlong)param_1) = auVar103;
      auVar105._0_4_ = auVar103._0_4_ ^ uVar65 ^ uVar48;
      auVar105._4_4_ = auVar103._4_4_ ^ uVar64 ^ uVar49;
      auVar105._8_4_ = auVar103._8_4_ ^ uVar56 ^ uVar67;
      auVar105._12_4_ = auVar103._12_4_ ^ uVar46 ^ uVar66;
      auVar91 = aesenc(auVar105,auVar91);
      auVar69._0_4_ = DAT_140e0e460 + auVar97._0_4_;
      auVar69._4_4_ = DAT_140e0e464 + auVar97._4_4_;
      auVar69._8_4_ = DAT_140e0e468 + auVar97._8_4_;
      auVar69._12_4_ = DAT_140e0e46c + auVar97._12_4_;
      auVar96 = sha256msg2_sha(auVar130,auVar97);
      auVar103 = sha256msg1_sha(auVar102,auVar114);
      auVar91 = aesenc(auVar91,param_4[2]);
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar69);
      auVar70._4_4_ = auVar69._12_4_;
      auVar70._0_4_ = auVar69._8_4_;
      auVar70._8_4_ = auVar69._0_4_;
      auVar70._12_4_ = auVar69._0_4_;
      auVar133._0_4_ = auVar103._0_4_ + auVar97._4_4_;
      auVar133._4_4_ = auVar103._4_4_ + auVar97._8_4_;
      auVar133._8_4_ = auVar103._8_4_ + auVar97._12_4_;
      auVar133._12_4_ = auVar103._12_4_ + auVar96._0_4_;
      auVar103 = aesenc(auVar91,param_4[3]);
      auVar91 = sha256rnds2_sha(auVar104,auVar123,auVar70);
      auVar71._0_4_ = DAT_140e0e480 + auVar96._0_4_;
      auVar71._4_4_ = DAT_140e0e484 + auVar96._4_4_;
      auVar71._8_4_ = DAT_140e0e488 + auVar96._8_4_;
      auVar71._12_4_ = DAT_140e0e48c + auVar96._12_4_;
      auVar95 = sha256msg2_sha(auVar133,auVar96);
      auVar114 = sha256msg1_sha(auVar114,auVar97);
      auVar103 = aesenc(auVar103,param_4[4]);
      auVar104 = sha256rnds2_sha(auVar123,auVar91,auVar71);
      auVar72._4_4_ = auVar71._12_4_;
      auVar72._0_4_ = auVar71._8_4_;
      auVar72._8_4_ = auVar71._0_4_;
      auVar72._12_4_ = auVar71._0_4_;
      auVar124._0_4_ = auVar114._0_4_ + auVar96._4_4_;
      auVar124._4_4_ = auVar114._4_4_ + auVar96._8_4_;
      auVar124._8_4_ = auVar114._8_4_ + auVar96._12_4_;
      auVar124._12_4_ = auVar114._12_4_ + auVar95._0_4_;
      auVar123 = aesenc(auVar103,param_4[5]);
      auVar91 = sha256rnds2_sha(auVar91,auVar104,auVar72);
      auVar73._0_4_ = DAT_140e0e4a0 + auVar95._0_4_;
      auVar73._4_4_ = DAT_140e0e4a4 + auVar95._4_4_;
      auVar73._8_4_ = DAT_140e0e4a8 + auVar95._8_4_;
      auVar73._12_4_ = DAT_140e0e4ac + auVar95._12_4_;
      auVar114 = sha256msg2_sha(auVar124,auVar95);
      auVar97 = sha256msg1_sha(auVar97,auVar96);
      auVar103 = aesenc(auVar123,param_4[6]);
      auVar123 = sha256rnds2_sha(auVar104,auVar91,auVar73);
      auVar74._4_4_ = auVar73._12_4_;
      auVar74._0_4_ = auVar73._8_4_;
      auVar74._8_4_ = auVar73._0_4_;
      auVar74._12_4_ = auVar73._0_4_;
      auVar128._0_4_ = auVar97._0_4_ + auVar95._4_4_;
      auVar128._4_4_ = auVar97._4_4_ + auVar95._8_4_;
      auVar128._8_4_ = auVar97._8_4_ + auVar95._12_4_;
      auVar128._12_4_ = auVar97._12_4_ + auVar114._0_4_;
      auVar103 = aesenc(auVar103,*pauVar62);
      auVar104 = sha256rnds2_sha(auVar91,auVar123,auVar74);
      auVar75._0_4_ = _DAT_140e0e4c0 + auVar114._0_4_;
      auVar75._4_4_ = _UNK_140e0e4c4 + auVar114._4_4_;
      auVar75._8_4_ = _UNK_140e0e4c8 + auVar114._8_4_;
      auVar75._12_4_ = _UNK_140e0e4cc + auVar114._12_4_;
      auVar97 = sha256msg2_sha(auVar128,auVar114);
      auVar91 = sha256msg1_sha(auVar96,auVar95);
      auVar103 = aesenc(auVar103,param_4[8]);
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar75);
      auVar76._4_4_ = auVar75._12_4_;
      auVar76._0_4_ = auVar75._8_4_;
      auVar76._8_4_ = auVar75._0_4_;
      auVar76._12_4_ = auVar75._0_4_;
      auVar131._0_4_ = auVar91._0_4_ + auVar114._4_4_;
      auVar131._4_4_ = auVar91._4_4_ + auVar114._8_4_;
      auVar131._8_4_ = auVar91._8_4_ + auVar114._12_4_;
      auVar131._12_4_ = auVar91._12_4_ + auVar97._0_4_;
      auVar91 = param_4[10];
      auVar103 = aesenc(auVar103,param_4[9]);
      if (10 < uVar50) {
        auVar103 = aesenc(auVar103,auVar91);
        auVar91 = param_4[0xc];
        auVar103 = aesenc(auVar103,param_4[0xb]);
        if (uVar50 != 0xb) {
          auVar103 = aesenc(auVar103,auVar91);
          auVar91 = param_4[0xe];
          auVar103 = aesenc(auVar103,param_4[0xd]);
        }
      }
      auVar103 = aesenclast(auVar103,auVar91);
      auVar91 = param_4[1];
      auVar104 = sha256rnds2_sha(auVar104,auVar123,auVar76);
      uVar65 = *(uint *)param_1[2];
      uVar64 = *(uint *)(param_1[2] + 4);
      uVar56 = *(uint *)(param_1[2] + 8);
      uVar46 = *(uint *)(param_1[2] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x10 + (longlong)param_1) = auVar103;
      auVar106._0_4_ = auVar103._0_4_ ^ uVar65 ^ uVar48;
      auVar106._4_4_ = auVar103._4_4_ ^ uVar64 ^ uVar49;
      auVar106._8_4_ = auVar103._8_4_ ^ uVar56 ^ uVar67;
      auVar106._12_4_ = auVar103._12_4_ ^ uVar46 ^ uVar66;
      auVar91 = aesenc(auVar106,auVar91);
      auVar77._0_4_ = _DAT_140e0e4e0 + auVar97._0_4_;
      auVar77._4_4_ = _UNK_140e0e4e4 + auVar97._4_4_;
      auVar77._8_4_ = _UNK_140e0e4e8 + auVar97._8_4_;
      auVar77._12_4_ = _UNK_140e0e4ec + auVar97._12_4_;
      auVar96 = sha256msg2_sha(auVar131,auVar97);
      auVar103 = sha256msg1_sha(auVar95,auVar114);
      auVar91 = aesenc(auVar91,param_4[2]);
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar77);
      auVar78._4_4_ = auVar77._12_4_;
      auVar78._0_4_ = auVar77._8_4_;
      auVar78._8_4_ = auVar77._0_4_;
      auVar78._12_4_ = auVar77._0_4_;
      auVar134._0_4_ = auVar103._0_4_ + auVar97._4_4_;
      auVar134._4_4_ = auVar103._4_4_ + auVar97._8_4_;
      auVar134._8_4_ = auVar103._8_4_ + auVar97._12_4_;
      auVar134._12_4_ = auVar103._12_4_ + auVar96._0_4_;
      auVar103 = aesenc(auVar91,param_4[3]);
      auVar91 = sha256rnds2_sha(auVar104,auVar123,auVar78);
      auVar79._0_4_ = _DAT_140e0e500 + auVar96._0_4_;
      auVar79._4_4_ = _UNK_140e0e504 + auVar96._4_4_;
      auVar79._8_4_ = _UNK_140e0e508 + auVar96._8_4_;
      auVar79._12_4_ = _UNK_140e0e50c + auVar96._12_4_;
      auVar95 = sha256msg2_sha(auVar134,auVar96);
      auVar114 = sha256msg1_sha(auVar114,auVar97);
      auVar103 = aesenc(auVar103,param_4[4]);
      auVar104 = sha256rnds2_sha(auVar123,auVar91,auVar79);
      auVar80._4_4_ = auVar79._12_4_;
      auVar80._0_4_ = auVar79._8_4_;
      auVar80._8_4_ = auVar79._0_4_;
      auVar80._12_4_ = auVar79._0_4_;
      auVar125._0_4_ = auVar114._0_4_ + auVar96._4_4_;
      auVar125._4_4_ = auVar114._4_4_ + auVar96._8_4_;
      auVar125._8_4_ = auVar114._8_4_ + auVar96._12_4_;
      auVar125._12_4_ = auVar114._12_4_ + auVar95._0_4_;
      auVar123 = aesenc(auVar103,param_4[5]);
      auVar91 = sha256rnds2_sha(auVar91,auVar104,auVar80);
      auVar81._0_4_ = _DAT_140e0e520 + auVar95._0_4_;
      auVar81._4_4_ = _UNK_140e0e524 + auVar95._4_4_;
      auVar81._8_4_ = _UNK_140e0e528 + auVar95._8_4_;
      auVar81._12_4_ = _UNK_140e0e52c + auVar95._12_4_;
      auVar114 = sha256msg2_sha(auVar125,auVar95);
      auVar97 = sha256msg1_sha(auVar97,auVar96);
      auVar103 = aesenc(auVar123,param_4[6]);
      auVar123 = sha256rnds2_sha(auVar104,auVar91,auVar81);
      auVar82._4_4_ = auVar81._12_4_;
      auVar82._0_4_ = auVar81._8_4_;
      auVar82._8_4_ = auVar81._0_4_;
      auVar82._12_4_ = auVar81._0_4_;
      auVar129._0_4_ = auVar97._0_4_ + auVar95._4_4_;
      auVar129._4_4_ = auVar97._4_4_ + auVar95._8_4_;
      auVar129._8_4_ = auVar97._8_4_ + auVar95._12_4_;
      auVar129._12_4_ = auVar97._12_4_ + auVar114._0_4_;
      auVar103 = aesenc(auVar103,*pauVar62);
      auVar104 = sha256rnds2_sha(auVar91,auVar123,auVar82);
      auVar83._0_4_ = _DAT_140e0e540 + auVar114._0_4_;
      auVar83._4_4_ = _UNK_140e0e544 + auVar114._4_4_;
      auVar83._8_4_ = _UNK_140e0e548 + auVar114._8_4_;
      auVar83._12_4_ = _UNK_140e0e54c + auVar114._12_4_;
      auVar97 = sha256msg2_sha(auVar129,auVar114);
      auVar91 = sha256msg1_sha(auVar96,auVar95);
      auVar103 = aesenc(auVar103,param_4[8]);
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar83);
      auVar84._4_4_ = auVar83._12_4_;
      auVar84._0_4_ = auVar83._8_4_;
      auVar84._8_4_ = auVar83._0_4_;
      auVar84._12_4_ = auVar83._0_4_;
      auVar132._0_4_ = auVar91._0_4_ + auVar114._4_4_;
      auVar132._4_4_ = auVar91._4_4_ + auVar114._8_4_;
      auVar132._8_4_ = auVar91._8_4_ + auVar114._12_4_;
      auVar132._12_4_ = auVar91._12_4_ + auVar97._0_4_;
      auVar91 = param_4[10];
      auVar103 = aesenc(auVar103,param_4[9]);
      auVar104 = sha256rnds2_sha(auVar104,auVar123,auVar84);
      auVar85._0_4_ = _DAT_140e0e560 + auVar97._0_4_;
      auVar85._4_4_ = _UNK_140e0e564 + auVar97._4_4_;
      auVar85._8_4_ = _UNK_140e0e568 + auVar97._8_4_;
      auVar85._12_4_ = _UNK_140e0e56c + auVar97._12_4_;
      auVar96 = sha256msg2_sha(auVar132,auVar97);
      auVar114 = sha256msg1_sha(auVar95,auVar114);
      if (10 < uVar50) {
        auVar103 = aesenc(auVar103,auVar91);
        auVar91 = param_4[0xc];
        auVar103 = aesenc(auVar103,param_4[0xb]);
        if (uVar50 != 0xb) {
          auVar103 = aesenc(auVar103,auVar91);
          auVar91 = param_4[0xe];
          auVar103 = aesenc(auVar103,param_4[0xd]);
        }
      }
      auVar103 = aesenclast(auVar103,auVar91);
      auVar91 = param_4[1];
      auVar123 = sha256rnds2_sha(auVar123,auVar104,auVar85);
      auVar86._4_4_ = auVar85._12_4_;
      auVar86._0_4_ = auVar85._8_4_;
      auVar86._8_4_ = auVar85._0_4_;
      auVar86._12_4_ = auVar85._0_4_;
      auVar135._0_4_ = auVar114._0_4_ + auVar97._4_4_;
      auVar135._4_4_ = auVar114._4_4_ + auVar97._8_4_;
      auVar135._8_4_ = auVar114._8_4_ + auVar97._12_4_;
      auVar135._12_4_ = auVar114._12_4_ + auVar96._0_4_;
      uVar65 = *(uint *)param_1[3];
      uVar64 = *(uint *)(param_1[3] + 4);
      uVar56 = *(uint *)(param_1[3] + 8);
      uVar46 = *(uint *)(param_1[3] + 0xc);
      *(undefined1 (*) [16])(param_2 + 0x20 + (longlong)param_1) = auVar103;
      auVar107._0_4_ = auVar103._0_4_ ^ uVar65 ^ uVar48;
      auVar107._4_4_ = auVar103._4_4_ ^ uVar64 ^ uVar49;
      auVar107._8_4_ = auVar103._8_4_ ^ uVar56 ^ uVar67;
      auVar107._12_4_ = auVar103._12_4_ ^ uVar46 ^ uVar66;
      auVar91 = aesenc(auVar107,auVar91);
      auVar103 = aesenc(auVar91,param_4[2]);
      auVar91 = sha256rnds2_sha(auVar104,auVar123,auVar86);
      auVar87._0_4_ = _DAT_140e0e580 + auVar96._0_4_;
      auVar87._4_4_ = _UNK_140e0e584 + auVar96._4_4_;
      auVar87._8_4_ = _UNK_140e0e588 + auVar96._8_4_;
      auVar87._12_4_ = _UNK_140e0e58c + auVar96._12_4_;
      auVar114 = sha256msg2_sha(auVar135,auVar96);
      auVar103 = aesenc(auVar103,param_4[3]);
      auVar104 = sha256rnds2_sha(auVar123,auVar91,auVar87);
      auVar88._4_4_ = auVar87._12_4_;
      auVar88._0_4_ = auVar87._8_4_;
      auVar88._8_4_ = auVar87._0_4_;
      auVar88._12_4_ = auVar87._0_4_;
      auVar123 = aesenc(auVar103,param_4[4]);
      auVar91 = sha256rnds2_sha(auVar91,auVar104,auVar88);
      auVar89._0_4_ = _DAT_140e0e5a0 + auVar114._0_4_;
      auVar89._4_4_ = _UNK_140e0e5a4 + auVar114._4_4_;
      auVar89._8_4_ = _UNK_140e0e5a8 + auVar114._8_4_;
      auVar89._12_4_ = _UNK_140e0e5ac + auVar114._12_4_;
      auVar123 = aesenc(auVar123,param_4[5]);
      auVar103 = aesenc(auVar123,param_4[6]);
      auVar123 = sha256rnds2_sha(auVar104,auVar91,auVar89);
      auVar90._4_4_ = auVar89._12_4_;
      auVar90._0_4_ = auVar89._8_4_;
      auVar90._8_4_ = auVar89._0_4_;
      auVar90._12_4_ = auVar89._0_4_;
      auVar103 = aesenc(auVar103,*pauVar62);
      auVar104 = sha256rnds2_sha(auVar91,auVar123,auVar90);
      auVar91 = aesenc(auVar103,param_4[8]);
      in_ZMM5._0_16_ = param_4[10];
      auVar91 = aesenc(auVar91,param_4[9]);
      if (10 < uVar50) {
        auVar91 = aesenc(auVar91,param_4[10]);
        in_ZMM5._0_16_ = param_4[0xc];
        auVar91 = aesenc(auVar91,param_4[0xb]);
        if (uVar50 != 0xb) {
          auVar91 = aesenc(auVar91,param_4[0xc]);
          in_ZMM5._0_16_ = param_4[0xe];
          auVar91 = aesenc(auVar91,param_4[0xd]);
        }
      }
      auVar112._0_16_ = aesenclast(auVar91,in_ZMM5._0_16_);
      auVar91 = param_4[1];
      auVar94._0_4_ = auVar123._0_4_ + auVar126._0_4_;
      auVar94._4_4_ = auVar123._4_4_ + auVar126._4_4_;
      auVar94._8_4_ = auVar123._8_4_ + auVar126._8_4_;
      auVar94._12_4_ = auVar123._12_4_ + auVar126._12_4_;
      auVar92._0_4_ = auVar104._0_4_ + auVar122._0_4_;
      auVar92._4_4_ = auVar104._4_4_ + auVar122._4_4_;
      auVar92._8_4_ = auVar104._8_4_ + auVar122._8_4_;
      auVar92._12_4_ = auVar104._12_4_ + auVar122._12_4_;
      param_3 = param_3 + -1;
      *(undefined1 (*) [16])(param_2 + 0x30 + (longlong)param_1) = auVar112._0_16_;
      param_1 = param_1 + 4;
      auVar122 = auVar92;
      auVar126 = auVar94;
    } while (param_3 != 0);
    auVar93._4_4_ = auVar94._0_4_;
    auVar93._0_4_ = auVar94._4_4_;
    auVar93._8_4_ = auVar94._12_4_;
    auVar93._12_4_ = auVar94._8_4_;
    auVar111._4_4_ = auVar92._8_4_;
    auVar111._0_4_ = auVar92._12_4_;
    auVar111._8_4_ = auVar92._4_4_;
    auVar111._12_4_ = auVar92._0_4_;
    auVar45._4_56_ = auVar92._8_56_;
    auVar45._0_4_ = auVar92._0_4_;
    auVar115._0_8_ = auVar45._0_8_ << 0x20;
    auVar115._8_4_ = auVar92._12_4_;
    auVar115._12_4_ = auVar92._8_4_;
    auVar111._16_16_ = auVar93;
    *param_5 = auVar112._0_16_;
    *(longlong *)param_6 = auVar115._8_8_;
    *(longlong *)(param_6 + 2) = auVar93._8_8_;
    *(undefined1 (*) [16])(param_6 + 4) = auVar111._8_16_;
    return &DAT_140e0e440;
  }
  if ((_DAT_15540a9f4 & 0x800) != 0) {
    lVar57 = (longlong)param_7 - (longlong)param_1;
    auVar115 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + (longlong)param_1),_DAT_140e0e5c0);
    auVar91 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x10 + (longlong)param_1),_DAT_140e0e5c0);
    auVar104 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x20 + (longlong)param_1),_DAT_140e0e5c0)
    ;
    auVar123 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x30 + (longlong)param_1),_DAT_140e0e5c0)
    ;
    vpalignr_avx(auVar91,auVar115,4);
    vpalignr_avx(auVar123,auVar104,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((uint)(_DAT_15540a9f4 >> 0x20) & 0x128) != 0x128) {
    if ((_DAT_15540a9f4 & 0x10000000) != 0) {
      param_2 = param_2 - (longlong)param_1;
      lVar57 = (longlong)param_7 - (longlong)param_1;
      pauVar62 = param_1 + param_3 * 4;
      auVar115 = *param_5;
      lVar68 = (ulonglong)*(uint *)param_4[0xf] - 9;
      puVar47 = (undefined4 *)(ulonglong)*param_6;
      uVar50 = param_6[1];
      uVar48 = param_6[2];
      uVar49 = param_6[3];
      uVar67 = param_6[4];
      uVar66 = param_6[5];
      uVar65 = param_6[6];
      uVar64 = param_6[7];
      auVar91 = *(undefined1 (*) [16])(&DAT_140e0e5e0 + lVar68 * 8);
      auVar104 = *(undefined1 (*) [16])(&DAT_140e0e5f0 + lVar68 * 8);
      auVar123 = *(undefined1 (*) [16])(&DAT_140e0e600 + lVar68 * 8);
      auVar103 = *param_4;
      do {
        auVar8 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + (longlong)param_1),_DAT_140e0e5c0);
        auVar9 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x10 + (longlong)param_1),
                             _DAT_140e0e5c0);
        auVar10 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x20 + (longlong)param_1),
                              _DAT_140e0e5c0);
        iStack_180 = auVar8._0_4_ + K256;
        iStack_17c = auVar8._4_4_ + DAT_140e0e3c4;
        iStack_178 = auVar8._8_4_ + DAT_140e0e3c8;
        iStack_174 = auVar8._12_4_ + DAT_140e0e3cc;
        auVar11 = vpshufb_avx(*(undefined1 (*) [16])(lVar57 + 0x30 + (longlong)param_1),
                              _DAT_140e0e5c0);
        iStack_170 = auVar9._0_4_ + DAT_140e0e3e0;
        iStack_16c = auVar9._4_4_ + DAT_140e0e3e4;
        iStack_168 = auVar9._8_4_ + DAT_140e0e3e8;
        iStack_164 = auVar9._12_4_ + DAT_140e0e3ec;
        iStack_160 = auVar10._0_4_ + DAT_140e0e400;
        iStack_15c = auVar10._4_4_ + DAT_140e0e404;
        iStack_158 = auVar10._8_4_ + DAT_140e0e408;
        iStack_154 = auVar10._12_4_ + DAT_140e0e40c;
        iStack_150 = auVar11._0_4_ + DAT_140e0e420;
        iStack_14c = auVar11._4_4_ + DAT_140e0e424;
        iStack_148 = auVar11._8_4_ + DAT_140e0e428;
        iStack_144 = auVar11._12_4_ + DAT_140e0e42c;
        uVar56 = uVar50 ^ uVar48;
        piVar54 = &K256;
        do {
          pauVar59 = param_1;
          auVar114 = vpalignr_avx(auVar9,auVar8,4);
          uVar46 = (uint)puVar47;
          auVar97 = vpalignr_avx(auVar11,auVar10,4);
          uVar61 = (uVar67 >> 0xe | uVar67 << 0x12) ^ uVar67;
          auVar100 = vpsrld_avx(auVar114,7);
          uVar63 = (uVar46 >> 9 | uVar46 << 0x17) ^ uVar46;
          uVar61 = (uVar61 >> 5 | uVar61 << 0x1b) ^ uVar67;
          auVar113 = vpsrld_avx(auVar114,3);
          auVar95 = vpslld_avx(auVar114,0xe);
          uVar63 = (uVar63 >> 0xb | uVar63 << 0x15) ^ uVar46;
          iVar58 = uVar64 + iStack_180 + ((uVar66 ^ uVar65) & uVar67 ^ uVar65) +
                   (uVar61 >> 6 | uVar61 << 0x1a);
          auVar114 = vpshufd_avx(auVar11,0xfa);
          uVar49 = uVar49 + iVar58;
          auVar101 = vpsrld_avx(auVar100,0xb);
          uVar64 = (uVar63 >> 2 | uVar63 << 0x1e) + iVar58 + (uVar56 & (uVar46 ^ uVar50) ^ uVar50);
          uVar56 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
          auVar96 = vpslld_avx(auVar95,0xb);
          uVar61 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar49;
          auVar102 = vpsrld_avx(auVar114,10);
          auVar96 = auVar113 ^ auVar100 ^ auVar95 ^ auVar101 ^ auVar96;
          auVar114 = vpsrlq_avx(auVar114,0x11);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar64;
          iVar58 = uVar65 + iStack_17c + ((uVar67 ^ uVar66) & uVar49 ^ uVar66) +
                   (uVar56 >> 6 | uVar56 << 0x1a);
          uVar48 = uVar48 + iVar58;
          auVar95 = vpsrlq_avx(auVar114,2);
          uVar65 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar46 ^ uVar50) & (uVar64 ^ uVar46) ^ uVar46);
          uVar56 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
          auVar114 = vpshufd_avx(auVar102 ^ auVar114 ^ auVar95,0x84);
          uVar61 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
          auVar114 = vpsrldq_avx(auVar114,8);
          auVar95 = aesenc(*pauVar59 ^ auVar103 ^ auVar115,param_4[1]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar48;
          auVar4._0_4_ = auVar8._0_4_ + auVar97._0_4_ + auVar96._0_4_ + auVar114._0_4_;
          auVar4._4_4_ = auVar8._4_4_ + auVar97._4_4_ + auVar96._4_4_ + auVar114._4_4_;
          auVar4._8_4_ = auVar8._8_4_ + auVar97._8_4_ + auVar96._8_4_ + auVar114._8_4_;
          auVar4._12_4_ = auVar8._12_4_ + auVar97._12_4_ + auVar96._12_4_ + auVar114._12_4_;
          auVar115 = vpshufd_avx(auVar4,0x50);
          auVar103 = vpsrld_avx(auVar115,10);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar65;
          iVar58 = uVar66 + iStack_178 + ((uVar49 ^ uVar67) & uVar48 ^ uVar67) +
                   (uVar56 >> 6 | uVar56 << 0x1a);
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar50 = uVar50 + iVar58;
          uVar66 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar64 ^ uVar46) & (uVar65 ^ uVar64) ^ uVar64);
          auVar114 = vpsrlq_avx(auVar115,2);
          uVar56 = (uVar50 >> 0xe | uVar50 * 0x40000) ^ uVar50;
          auVar115 = vpshufd_avx(auVar103 ^ auVar115 ^ auVar114,0xe8);
          uVar61 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
          auVar115 = vpslldq_avx(auVar115,8);
          auVar114 = aesenc(auVar95,param_4[2]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar50;
          iVar58 = uVar67 + iStack_174;
          auVar8._0_4_ = auVar4._0_4_ + auVar115._0_4_;
          auVar8._4_4_ = auVar4._4_4_ + auVar115._4_4_;
          auVar8._8_4_ = auVar4._8_4_ + auVar115._8_4_;
          auVar8._12_4_ = auVar4._12_4_ + auVar115._12_4_;
          iStack_180 = auVar8._0_4_ + piVar54[0x20];
          iStack_17c = auVar8._4_4_ + piVar54[0x21];
          iStack_178 = auVar8._8_4_ + piVar54[0x22];
          iStack_174 = auVar8._12_4_ + piVar54[0x23];
          uVar67 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar66;
          iVar58 = iVar58 + ((uVar48 ^ uVar49) & uVar50 ^ uVar49) + (uVar56 >> 6 | uVar56 << 0x1a);
          uVar46 = uVar46 + iVar58;
          uVar67 = (uVar67 >> 2 | uVar67 << 0x1e) +
                   iVar58 + ((uVar65 ^ uVar64) & (uVar66 ^ uVar65) ^ uVar65);
          auVar115 = vpalignr_avx(auVar10,auVar9,4);
          auVar103 = vpalignr_avx(auVar8,auVar11,4);
          uVar56 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
          auVar96 = vpsrld_avx(auVar115,7);
          uVar61 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
          auVar100 = aesenc(auVar114,param_4[3]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar46;
          auVar101 = vpsrld_avx(auVar115,3);
          auVar97 = vpslld_avx(auVar115,0xe);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar67;
          iVar58 = uVar49 + iStack_170 + ((uVar50 ^ uVar48) & uVar46 ^ uVar48) +
                   (uVar56 >> 6 | uVar56 << 0x1a);
          auVar115 = vpshufd_avx(auVar8,0xfa);
          uVar64 = uVar64 + iVar58;
          auVar95 = vpsrld_avx(auVar96,0xb);
          uVar49 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar66 ^ uVar65) & (uVar67 ^ uVar66) ^ uVar66);
          uVar56 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
          auVar114 = vpslld_avx(auVar97,0xb);
          uVar61 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
          auVar102 = aesenc(auVar100,param_4[4]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar64;
          auVar100 = vpsrld_avx(auVar115,10);
          auVar114 = auVar101 ^ auVar96 ^ auVar97 ^ auVar95 ^ auVar114;
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar49;
          iVar58 = uVar48 + iStack_16c + ((uVar46 ^ uVar50) & uVar64 ^ uVar50) +
                   (uVar56 >> 6 | uVar56 << 0x1a);
          uVar65 = uVar65 + iVar58;
          auVar97 = vpsrlq_avx(auVar115,2);
          uVar48 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar67 ^ uVar66) & (uVar49 ^ uVar67) ^ uVar67);
          uVar56 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
          auVar115 = vpshufd_avx(auVar100 ^ auVar115 ^ auVar97,0x84);
          uVar61 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
          auVar115 = vpsrldq_avx(auVar115,8);
          auVar97 = aesenc(auVar102,param_4[5]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar65;
          auVar5._0_4_ = auVar9._0_4_ + auVar103._0_4_ + auVar114._0_4_ + auVar115._0_4_;
          auVar5._4_4_ = auVar9._4_4_ + auVar103._4_4_ + auVar114._4_4_ + auVar115._4_4_;
          auVar5._8_4_ = auVar9._8_4_ + auVar103._8_4_ + auVar114._8_4_ + auVar115._8_4_;
          auVar5._12_4_ = auVar9._12_4_ + auVar103._12_4_ + auVar114._12_4_ + auVar115._12_4_;
          auVar115 = vpshufd_avx(auVar5,0x50);
          auVar103 = vpsrld_avx(auVar115,10);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar48;
          iVar58 = uVar50 + iStack_168 + ((uVar64 ^ uVar46) & uVar65 ^ uVar46) +
                   (uVar56 >> 6 | uVar56 << 0x1a);
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar66 = uVar66 + iVar58;
          uVar50 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar49 ^ uVar67) & (uVar48 ^ uVar49) ^ uVar49);
          auVar114 = vpsrlq_avx(auVar115,2);
          uVar56 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
          auVar115 = vpshufd_avx(auVar103 ^ auVar115 ^ auVar114,0xe8);
          uVar61 = (uVar50 >> 9 | uVar50 * 0x800000) ^ uVar50;
          auVar115 = vpslldq_avx(auVar115,8);
          auVar114 = aesenc(auVar97,param_4[6]);
          uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar66;
          iVar58 = uVar46 + iStack_164;
          auVar9._0_4_ = auVar5._0_4_ + auVar115._0_4_;
          auVar9._4_4_ = auVar5._4_4_ + auVar115._4_4_;
          auVar9._8_4_ = auVar5._8_4_ + auVar115._8_4_;
          auVar9._12_4_ = auVar5._12_4_ + auVar115._12_4_;
          iStack_170 = auVar9._0_4_ + piVar54[0x28];
          iStack_16c = auVar9._4_4_ + piVar54[0x29];
          iStack_168 = auVar9._8_4_ + piVar54[0x2a];
          iStack_164 = auVar9._12_4_ + piVar54[0x2b];
          uVar46 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar50;
          iVar58 = iVar58 + ((uVar65 ^ uVar64) & uVar66 ^ uVar64) + (uVar56 >> 6 | uVar56 << 0x1a);
          uVar67 = uVar67 + iVar58;
          uVar56 = (uVar46 >> 2 | uVar46 << 0x1e) +
                   iVar58 + ((uVar48 ^ uVar49) & (uVar50 ^ uVar48) ^ uVar48);
          auVar115 = vpalignr_avx(auVar11,auVar10,4);
          auVar103 = vpalignr_avx(auVar9,auVar8,4);
          uVar46 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
          auVar96 = vpsrld_avx(auVar115,7);
          uVar61 = (uVar56 >> 9 | uVar56 * 0x800000) ^ uVar56;
          auVar100 = aesenc(auVar114,param_4[7]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar67;
          auVar101 = vpsrld_avx(auVar115,3);
          auVar97 = vpslld_avx(auVar115,0xe);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar56;
          iVar58 = uVar64 + iStack_160 + ((uVar66 ^ uVar65) & uVar67 ^ uVar65) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          auVar115 = vpshufd_avx(auVar9,0xfa);
          uVar49 = uVar49 + iVar58;
          auVar95 = vpsrld_avx(auVar96,0xb);
          uVar64 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar50 ^ uVar48) & (uVar56 ^ uVar50) ^ uVar50);
          uVar46 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
          auVar114 = vpslld_avx(auVar97,0xb);
          uVar61 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
          auVar102 = aesenc(auVar100,param_4[8]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar49;
          auVar100 = vpsrld_avx(auVar115,10);
          auVar114 = auVar101 ^ auVar96 ^ auVar97 ^ auVar95 ^ auVar114;
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar64;
          iVar58 = uVar65 + iStack_15c + ((uVar67 ^ uVar66) & uVar49 ^ uVar66) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          uVar48 = uVar48 + iVar58;
          auVar97 = vpsrlq_avx(auVar115,2);
          uVar65 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar56 ^ uVar50) & (uVar64 ^ uVar56) ^ uVar56);
          uVar46 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
          auVar115 = vpshufd_avx(auVar100 ^ auVar115 ^ auVar97,0x84);
          uVar61 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
          auVar115 = vpsrldq_avx(auVar115,8);
          auVar97 = aesenc(auVar102,param_4[9]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar48;
          auVar6._0_4_ = auVar10._0_4_ + auVar103._0_4_ + auVar114._0_4_ + auVar115._0_4_;
          auVar6._4_4_ = auVar10._4_4_ + auVar103._4_4_ + auVar114._4_4_ + auVar115._4_4_;
          auVar6._8_4_ = auVar10._8_4_ + auVar103._8_4_ + auVar114._8_4_ + auVar115._8_4_;
          auVar6._12_4_ = auVar10._12_4_ + auVar103._12_4_ + auVar114._12_4_ + auVar115._12_4_;
          auVar115 = vpshufd_avx(auVar6,0x50);
          auVar103 = vpsrld_avx(auVar115,10);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar65;
          iVar58 = uVar66 + iStack_158 + ((uVar49 ^ uVar67) & uVar48 ^ uVar67) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar50 = uVar50 + iVar58;
          uVar66 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar64 ^ uVar56) & (uVar65 ^ uVar64) ^ uVar64);
          auVar114 = vpsrlq_avx(auVar115,2);
          uVar46 = (uVar50 >> 0xe | uVar50 * 0x40000) ^ uVar50;
          auVar115 = vpshufd_avx(auVar103 ^ auVar115 ^ auVar114,0xe8);
          uVar61 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
          auVar115 = vpslldq_avx(auVar115,8);
          auVar114 = aesenclast(auVar97,param_4[10]);
          auVar97 = aesenc(auVar97,param_4[10]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar50;
          iVar58 = uVar67 + iStack_154;
          auVar10._0_4_ = auVar6._0_4_ + auVar115._0_4_;
          auVar10._4_4_ = auVar6._4_4_ + auVar115._4_4_;
          auVar10._8_4_ = auVar6._8_4_ + auVar115._8_4_;
          auVar10._12_4_ = auVar6._12_4_ + auVar115._12_4_;
          iStack_160 = auVar10._0_4_ + piVar54[0x30];
          iStack_15c = auVar10._4_4_ + piVar54[0x31];
          iStack_158 = auVar10._8_4_ + piVar54[0x32];
          iStack_154 = auVar10._12_4_ + piVar54[0x33];
          uVar67 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar66;
          iVar58 = iVar58 + ((uVar48 ^ uVar49) & uVar50 ^ uVar49) + (uVar46 >> 6 | uVar46 << 0x1a);
          uVar56 = uVar56 + iVar58;
          uVar67 = (uVar67 >> 2 | uVar67 << 0x1e) +
                   iVar58 + ((uVar65 ^ uVar64) & (uVar66 ^ uVar65) ^ uVar65);
          auVar115 = vpalignr_avx(auVar8,auVar11,4);
          auVar103 = vpalignr_avx(auVar10,auVar9,4);
          uVar46 = (uVar56 >> 0xe | uVar56 * 0x40000) ^ uVar56;
          auVar95 = vpsrld_avx(auVar115,7);
          uVar61 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
          auVar114 = vpand_avx(auVar114,auVar123);
          auVar101 = aesenc(auVar97,param_4[0xb]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar56;
          auVar102 = vpsrld_avx(auVar115,3);
          auVar96 = vpslld_avx(auVar115,0xe);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar67;
          iVar58 = uVar49 + iStack_150 + ((uVar50 ^ uVar48) & uVar56 ^ uVar48) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          auVar115 = vpshufd_avx(auVar10,0xfa);
          uVar64 = uVar64 + iVar58;
          auVar100 = vpsrld_avx(auVar95,0xb);
          uVar49 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar66 ^ uVar65) & (uVar67 ^ uVar66) ^ uVar66);
          uVar46 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
          auVar97 = vpslld_avx(auVar96,0xb);
          uVar61 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
          auVar127 = aesenclast(auVar101,param_4[0xc]);
          auVar113 = aesenc(auVar101,param_4[0xc]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar64;
          auVar101 = vpsrld_avx(auVar115,10);
          auVar97 = auVar102 ^ auVar95 ^ auVar96 ^ auVar100 ^ auVar97;
          auVar115 = vpsrlq_avx(auVar115,0x11);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar49;
          iVar58 = uVar48 + iStack_14c + ((uVar56 ^ uVar50) & uVar64 ^ uVar50) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          uVar65 = uVar65 + iVar58;
          auVar96 = vpsrlq_avx(auVar115,2);
          uVar48 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar67 ^ uVar66) & (uVar49 ^ uVar67) ^ uVar67);
          uVar46 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
          auVar115 = vpshufd_avx(auVar101 ^ auVar115 ^ auVar96,0x84);
          uVar61 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
          auVar96 = vpsrldq_avx(auVar115,8);
          auVar115 = vpand_avx(auVar127,auVar104);
          auVar95 = aesenc(auVar113,param_4[0xd]);
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar65;
          auVar7._0_4_ = auVar11._0_4_ + auVar103._0_4_ + auVar97._0_4_ + auVar96._0_4_;
          auVar7._4_4_ = auVar11._4_4_ + auVar103._4_4_ + auVar97._4_4_ + auVar96._4_4_;
          auVar7._8_4_ = auVar11._8_4_ + auVar103._8_4_ + auVar97._8_4_ + auVar96._8_4_;
          auVar7._12_4_ = auVar11._12_4_ + auVar103._12_4_ + auVar97._12_4_ + auVar96._12_4_;
          auVar103 = vpshufd_avx(auVar7,0x50);
          auVar97 = vpsrld_avx(auVar103,10);
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar48;
          iVar58 = uVar50 + iStack_148 + ((uVar64 ^ uVar56) & uVar65 ^ uVar56) +
                   (uVar46 >> 6 | uVar46 << 0x1a);
          auVar103 = vpsrlq_avx(auVar103,0x11);
          uVar66 = uVar66 + iVar58;
          uVar50 = (uVar61 >> 2 | uVar61 << 0x1e) +
                   iVar58 + ((uVar49 ^ uVar67) & (uVar48 ^ uVar49) ^ uVar49);
          auVar96 = vpsrlq_avx(auVar103,2);
          uVar46 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
          auVar103 = vpshufd_avx(auVar97 ^ auVar103 ^ auVar96,0xe8);
          uVar61 = (uVar50 >> 9 | uVar50 * 0x800000) ^ uVar50;
          auVar97 = vpslldq_avx(auVar103,8);
          auVar114 = vpor_avx(auVar114,auVar115);
          auVar115 = aesenclast(auVar95,param_4[0xe]);
          auVar103 = *param_4;
          uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar66;
          iVar58 = uVar56 + iStack_144;
          auVar11._0_4_ = auVar7._0_4_ + auVar97._0_4_;
          auVar11._4_4_ = auVar7._4_4_ + auVar97._4_4_;
          auVar11._8_4_ = auVar7._8_4_ + auVar97._8_4_;
          auVar11._12_4_ = auVar7._12_4_ + auVar97._12_4_;
          uVar56 = uVar50 ^ uVar48;
          iStack_150 = auVar11._0_4_ + piVar54[0x38];
          iStack_14c = auVar11._4_4_ + piVar54[0x39];
          iStack_148 = auVar11._8_4_ + piVar54[0x3a];
          iStack_144 = auVar11._12_4_ + piVar54[0x3b];
          uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar50;
          iVar58 = iVar58 + ((uVar65 ^ uVar64) & uVar66 ^ uVar64) + (uVar46 >> 6 | uVar46 << 0x1a);
          uVar67 = uVar67 + iVar58;
          uVar46 = (uVar61 >> 2 | uVar61 << 0x1e) + iVar58 + ((uVar48 ^ uVar49) & uVar56 ^ uVar48);
          puVar47 = (undefined4 *)(ulonglong)uVar46;
          auVar115 = vpand_avx(auVar115,auVar91);
          auVar115 = vpor_avx(auVar114,auVar115);
          *(undefined1 (*) [16])(param_2 + (longlong)pauVar59) = auVar115;
          param_1 = pauVar59 + 1;
          pcVar1 = (char *)((longlong)piVar54 + 0x103);
          piVar54 = piVar54 + 0x20;
        } while (*pcVar1 != '\0');
        uVar61 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
        uVar63 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        uVar61 = (uVar61 >> 5 | uVar61 << 0x1b) ^ uVar67;
        uVar63 = (uVar63 >> 0xb | uVar63 << 0x15) ^ uVar46;
        iVar58 = uVar64 + iStack_180 + ((uVar66 ^ uVar65) & uVar67 ^ uVar65) +
                 (uVar61 >> 6 | uVar61 << 0x1a);
        uVar49 = uVar49 + iVar58;
        uVar64 = (uVar63 >> 2 | uVar63 << 0x1e) + iVar58 + (uVar56 & (uVar46 ^ uVar50) ^ uVar50);
        uVar56 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
        uVar61 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar49;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar64;
        iVar58 = uVar65 + iStack_17c + ((uVar67 ^ uVar66) & uVar49 ^ uVar66) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar48 = uVar48 + iVar58;
        uVar65 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar46 ^ uVar50) & (uVar64 ^ uVar46) ^ uVar46);
        uVar56 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
        uVar61 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
        auVar115 = aesenc(*param_1 ^ auVar103 ^ auVar115,param_4[1]);
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar48;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar65;
        iVar58 = uVar66 + iStack_178 + ((uVar49 ^ uVar67) & uVar48 ^ uVar67) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar50 = uVar50 + iVar58;
        uVar66 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar64 ^ uVar46) & (uVar65 ^ uVar64) ^ uVar64);
        uVar56 = (uVar50 >> 0xe | uVar50 * 0x40000) ^ uVar50;
        uVar61 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        auVar115 = aesenc(auVar115,param_4[2]);
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar50;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar66;
        iVar58 = uVar67 + iStack_174 + ((uVar48 ^ uVar49) & uVar50 ^ uVar49) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar46 = uVar46 + iVar58;
        uVar56 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar65 ^ uVar64) & (uVar66 ^ uVar65) ^ uVar65);
        uVar67 = (uVar46 >> 0xe | uVar46 * 0x40000) ^ uVar46;
        uVar61 = (uVar56 >> 9 | uVar56 * 0x800000) ^ uVar56;
        auVar115 = aesenc(auVar115,param_4[3]);
        uVar67 = (uVar67 >> 5 | uVar67 << 0x1b) ^ uVar46;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar56;
        iVar58 = uVar49 + iStack_170 + ((uVar50 ^ uVar48) & uVar46 ^ uVar48) +
                 (uVar67 >> 6 | uVar67 << 0x1a);
        uVar64 = uVar64 + iVar58;
        uVar49 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar66 ^ uVar65) & (uVar56 ^ uVar66) ^ uVar66);
        uVar67 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar61 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
        auVar115 = aesenc(auVar115,param_4[4]);
        uVar67 = (uVar67 >> 5 | uVar67 << 0x1b) ^ uVar64;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar49;
        iVar58 = uVar48 + iStack_16c + ((uVar46 ^ uVar50) & uVar64 ^ uVar50) +
                 (uVar67 >> 6 | uVar67 << 0x1a);
        uVar65 = uVar65 + iVar58;
        uVar48 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar56 ^ uVar66) & (uVar49 ^ uVar56) ^ uVar56);
        uVar67 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
        uVar61 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar115 = aesenc(auVar115,param_4[5]);
        uVar67 = (uVar67 >> 5 | uVar67 << 0x1b) ^ uVar65;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar48;
        iVar58 = uVar50 + iStack_168 + ((uVar64 ^ uVar46) & uVar65 ^ uVar46) +
                 (uVar67 >> 6 | uVar67 << 0x1a);
        uVar66 = uVar66 + iVar58;
        uVar50 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar49 ^ uVar56) & (uVar48 ^ uVar49) ^ uVar49);
        uVar67 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar61 = (uVar50 >> 9 | uVar50 * 0x800000) ^ uVar50;
        auVar115 = aesenc(auVar115,param_4[6]);
        uVar67 = (uVar67 >> 5 | uVar67 << 0x1b) ^ uVar66;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar50;
        iVar58 = uVar46 + iStack_164 + ((uVar65 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar67 >> 6 | uVar67 << 0x1a);
        uVar56 = uVar56 + iVar58;
        uVar67 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar48 ^ uVar49) & (uVar50 ^ uVar48) ^ uVar48);
        uVar46 = (uVar56 >> 0xe | uVar56 * 0x40000) ^ uVar56;
        uVar61 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
        auVar115 = aesenc(auVar115,param_4[7]);
        uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar56;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar67;
        iVar58 = uVar64 + iStack_160 + ((uVar66 ^ uVar65) & uVar56 ^ uVar65) +
                 (uVar46 >> 6 | uVar46 << 0x1a);
        uVar49 = uVar49 + iVar58;
        uVar64 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar50 ^ uVar48) & (uVar67 ^ uVar50) ^ uVar50);
        uVar46 = (uVar49 >> 0xe | uVar49 * 0x40000) ^ uVar49;
        uVar61 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        auVar115 = aesenc(auVar115,param_4[8]);
        uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar49;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar64;
        iVar58 = uVar65 + iStack_15c + ((uVar56 ^ uVar66) & uVar49 ^ uVar66) +
                 (uVar46 >> 6 | uVar46 << 0x1a);
        uVar48 = uVar48 + iVar58;
        uVar65 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar67 ^ uVar50) & (uVar64 ^ uVar67) ^ uVar67);
        uVar46 = (uVar48 >> 0xe | uVar48 * 0x40000) ^ uVar48;
        uVar61 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
        auVar115 = aesenc(auVar115,param_4[9]);
        uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar48;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar65;
        iVar58 = uVar66 + iStack_158 + ((uVar49 ^ uVar56) & uVar48 ^ uVar56) +
                 (uVar46 >> 6 | uVar46 << 0x1a);
        uVar50 = uVar50 + iVar58;
        uVar66 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar64 ^ uVar67) & (uVar65 ^ uVar64) ^ uVar64);
        uVar46 = (uVar50 >> 0xe | uVar50 * 0x40000) ^ uVar50;
        uVar61 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        auVar114 = aesenclast(auVar115,param_4[10]);
        auVar103 = aesenc(auVar115,param_4[10]);
        uVar46 = (uVar46 >> 5 | uVar46 << 0x1b) ^ uVar50;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar66;
        iVar58 = uVar56 + iStack_154 + ((uVar48 ^ uVar49) & uVar50 ^ uVar49) +
                 (uVar46 >> 6 | uVar46 << 0x1a);
        uVar67 = uVar67 + iVar58;
        uVar46 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar65 ^ uVar64) & (uVar66 ^ uVar65) ^ uVar65);
        uVar56 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
        uVar61 = (uVar46 >> 9 | uVar46 * 0x800000) ^ uVar46;
        auVar115 = vpand_avx(auVar114,auVar123);
        auVar103 = aesenc(auVar103,param_4[0xb]);
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar67;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar46;
        iVar58 = uVar49 + iStack_150 + ((uVar50 ^ uVar48) & uVar67 ^ uVar48) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar64 = uVar64 + iVar58;
        uVar49 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar66 ^ uVar65) & (uVar46 ^ uVar66) ^ uVar66);
        uVar56 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar61 = (uVar49 >> 9 | uVar49 * 0x800000) ^ uVar49;
        auVar97 = aesenclast(auVar103,param_4[0xc]);
        auVar114 = aesenc(auVar103,param_4[0xc]);
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar64;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar49;
        iVar58 = uVar48 + iStack_14c + ((uVar67 ^ uVar50) & uVar64 ^ uVar50) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar65 = uVar65 + iVar58;
        uVar48 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar46 ^ uVar66) & (uVar49 ^ uVar46) ^ uVar46);
        uVar56 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
        uVar61 = (uVar48 >> 9 | uVar48 * 0x800000) ^ uVar48;
        auVar103 = vpand_avx(auVar97,auVar104);
        auVar97 = aesenc(auVar114,param_4[0xd]);
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar65;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar48;
        iVar58 = uVar50 + iStack_148 + ((uVar64 ^ uVar67) & uVar65 ^ uVar67) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        uVar66 = uVar66 + iVar58;
        uVar50 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar49 ^ uVar46) & (uVar48 ^ uVar49) ^ uVar49);
        uVar56 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar61 = (uVar50 >> 9 | uVar50 * 0x800000) ^ uVar50;
        auVar114 = vpor_avx(auVar115,auVar103);
        auVar115 = aesenclast(auVar97,param_4[0xe]);
        auVar103 = *param_4;
        uVar56 = (uVar56 >> 5 | uVar56 << 0x1b) ^ uVar66;
        uVar61 = (uVar61 >> 0xb | uVar61 << 0x15) ^ uVar50;
        iVar58 = uVar67 + iStack_144 + ((uVar65 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar56 >> 6 | uVar56 << 0x1a);
        auVar115 = vpand_avx(auVar115,auVar91);
        auVar115 = vpor_avx(auVar114,auVar115);
        *(undefined1 (*) [16])((longlong)param_1 + param_2) = auVar115;
        param_1 = pauVar59 + 2;
        uVar56 = (uVar61 >> 2 | uVar61 << 0x1e) +
                 iVar58 + ((uVar48 ^ uVar49) & (uVar50 ^ uVar48) ^ uVar48) + *param_6;
        puVar47 = (undefined4 *)(ulonglong)uVar56;
        uVar50 = uVar50 + param_6[1];
        uVar48 = uVar48 + param_6[2];
        uVar49 = uVar49 + param_6[3];
        uVar67 = uVar46 + iVar58 + param_6[4];
        uVar66 = uVar66 + param_6[5];
        uVar65 = uVar65 + param_6[6];
        uVar64 = uVar64 + param_6[7];
        *param_6 = uVar56;
        param_6[1] = uVar50;
        param_6[2] = uVar48;
        param_6[3] = uVar49;
        param_6[4] = uVar67;
        param_6[5] = uVar66;
        param_6[6] = uVar65;
        param_6[7] = uVar64;
      } while (param_1 < pauVar62);
      *param_5 = auVar115;
      return puVar47;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar51 = (ulonglong)auStack_310 & 0xfffffffffffffc00;
  pauVar52 = (undefined1 (*) [16])(uVar51 + 0x1c0);
  param_2 = param_2 - (longlong)param_1;
  lVar68 = (longlong)param_7 - (longlong)param_1;
  *(undefined1 (**) [16])(uVar51 + 0x210) = param_1 + param_3 * 4;
  *(undefined1 (**) [16])(uVar51 + 0x220) = param_5;
  *(uint **)(uVar51 + 0x228) = param_6;
  *(longlong *)(uVar51 + 0x230) = lVar68;
  *(BADSPACEBASE **)(uVar51 + 0x238) = register0x00000020;
  *(undefined1 (*) [16])(uVar51 + 0x240) = in_ZMM6._0_16_;
  *(undefined8 *)(uVar51 + 0x250) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar51 + 600) = unaff_XMM7_Qb;
  *(undefined1 (*) [16])(uVar51 + 0x260) = in_ZMM8._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x270) = in_ZMM9._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x280) = in_ZMM10._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x290) = in_ZMM11._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x2a0) = in_ZMM12._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x2b0) = in_ZMM13._0_16_;
  *(undefined1 (*) [16])(uVar51 + 0x2c0) = in_ZMM14._0_16_;
  *(undefined8 *)(uVar51 + 0x2d0) = unaff_XMM15_Qa;
  *(undefined8 *)(uVar51 + 0x2d8) = unaff_XMM15_Qb;
  pauVar59 = param_4 + 8;
  auVar122 = ZEXT1664(*param_5);
  lVar57 = (ulonglong)*(uint *)param_4[0xf] - 9;
  auVar115 = *(undefined1 (*) [16])(&DAT_140e0e5e0 + lVar57 * 8);
  auVar91 = *(undefined1 (*) [16])(&DAT_140e0e5f0 + lVar57 * 8);
  auVar104 = *(undefined1 (*) [16])(&DAT_140e0e600 + lVar57 * 8);
  pauVar62 = param_1 + 4;
  puVar47 = (undefined4 *)(ulonglong)*param_6;
  uVar48 = param_6[1];
  uVar50 = param_6[2];
  pauVar60 = (undefined1 (*) [16])(lVar68 + (longlong)pauVar62);
  if (pauVar62 == param_1 + param_3 * 4) {
    pauVar60 = (undefined1 (*) [16])(uVar51 + 0x1c0);
  }
  uVar64 = param_6[3];
  uVar65 = param_6[4];
  uVar66 = param_6[5];
  uVar67 = param_6[6];
  uVar49 = param_6[7];
  auVar126 = ZEXT1664(*param_4);
  do {
    auVar99._16_16_ = _UNK_140e0e5d0;
    auVar99._0_16_ = _DAT_140e0e5c0;
    auVar98._16_16_ = ZEXT116(1) * *pauVar60;
    auVar98._0_16_ =
         ZEXT116(0) * *pauVar60 | ZEXT116(1) * *(undefined1 (*) [16])(pauVar62[-4] + lVar68);
    auVar108._16_16_ = ZEXT116(1) * pauVar60[1];
    auVar108._0_16_ =
         ZEXT116(0) * pauVar60[1] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar62[-3] + lVar68);
    auVar118 = vpshufb_avx2(auVar98,auVar99);
    auVar109._16_16_ = ZEXT116(1) * pauVar60[2];
    auVar109._0_16_ =
         ZEXT116(0) * pauVar60[2] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar62[-2] + lVar68);
    auVar119 = vpshufb_avx2(auVar108,auVar99);
    auVar110._16_16_ = ZEXT116(1) * pauVar60[3];
    auVar110._0_16_ =
         ZEXT116(0) * pauVar60[3] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar62[-1] + lVar68);
    auVar120 = vpshufb_avx2(auVar109,auVar99);
    iVar17 = auVar118._4_4_ + DAT_140e0e3c4;
    iVar21 = auVar118._8_4_ + DAT_140e0e3c8;
    iVar25 = auVar118._12_4_ + DAT_140e0e3cc;
    iVar29 = auVar118._16_4_ + DAT_140e0e3d0;
    iVar33 = auVar118._20_4_ + DAT_140e0e3d4;
    iVar37 = auVar118._24_4_ + DAT_140e0e3d8;
    iVar41 = auVar118._28_4_ + DAT_140e0e3dc;
    auVar121 = vpshufb_avx2(auVar110,auVar99);
    iVar58 = auVar119._0_4_ + DAT_140e0e3e0;
    iVar18 = auVar119._4_4_ + DAT_140e0e3e4;
    iVar22 = auVar119._8_4_ + DAT_140e0e3e8;
    iVar26 = auVar119._12_4_ + DAT_140e0e3ec;
    iVar30 = auVar119._16_4_ + DAT_140e0e3f0;
    iVar34 = auVar119._20_4_ + DAT_140e0e3f4;
    iVar38 = auVar119._24_4_ + DAT_140e0e3f8;
    iVar42 = auVar119._28_4_ + DAT_140e0e3fc;
    iVar12 = auVar120._0_4_ + DAT_140e0e400;
    iVar19 = auVar120._4_4_ + DAT_140e0e404;
    iVar23 = auVar120._8_4_ + DAT_140e0e408;
    iVar27 = auVar120._12_4_ + DAT_140e0e40c;
    iVar31 = auVar120._16_4_ + DAT_140e0e410;
    iVar35 = auVar120._20_4_ + DAT_140e0e414;
    iVar39 = auVar120._24_4_ + DAT_140e0e418;
    iVar43 = auVar120._28_4_ + DAT_140e0e41c;
    iVar13 = auVar121._0_4_ + DAT_140e0e420;
    iVar20 = auVar121._4_4_ + DAT_140e0e424;
    iVar24 = auVar121._8_4_ + DAT_140e0e428;
    iVar28 = auVar121._12_4_ + DAT_140e0e42c;
    iVar32 = auVar121._16_4_ + DAT_140e0e430;
    iVar36 = auVar121._20_4_ + DAT_140e0e434;
    iVar40 = auVar121._24_4_ + DAT_140e0e438;
    iVar44 = auVar121._28_4_ + DAT_140e0e43c;
    *(int *)*pauVar52 = auVar118._0_4_ + K256;
    *(int *)(*pauVar52 + 4) = iVar17;
    *(int *)(*pauVar52 + 8) = iVar21;
    *(int *)(*pauVar52 + 0xc) = iVar25;
    *(int *)pauVar52[1] = iVar29;
    *(int *)(pauVar52[1] + 4) = iVar33;
    *(int *)(pauVar52[1] + 8) = iVar37;
    *(int *)(pauVar52[1] + 0xc) = iVar41;
    uVar56 = 0;
    *(int *)pauVar52[2] = iVar58;
    *(int *)(pauVar52[2] + 4) = iVar18;
    *(int *)(pauVar52[2] + 8) = iVar22;
    *(int *)(pauVar52[2] + 0xc) = iVar26;
    *(int *)pauVar52[3] = iVar30;
    *(int *)(pauVar52[3] + 4) = iVar34;
    *(int *)(pauVar52[3] + 8) = iVar38;
    *(int *)(pauVar52[3] + 0xc) = iVar42;
    *(int *)pauVar52[-4] = iVar12;
    *(int *)(pauVar52[-4] + 4) = iVar19;
    *(int *)(pauVar52[-4] + 8) = iVar23;
    *(int *)(pauVar52[-4] + 0xc) = iVar27;
    *(int *)pauVar52[-3] = iVar31;
    *(int *)(pauVar52[-3] + 4) = iVar35;
    *(int *)(pauVar52[-3] + 8) = iVar39;
    *(int *)(pauVar52[-3] + 0xc) = iVar43;
    uVar46 = uVar48 ^ uVar50;
    *(int *)pauVar52[-2] = iVar13;
    *(int *)(pauVar52[-2] + 4) = iVar20;
    *(int *)(pauVar52[-2] + 8) = iVar24;
    *(int *)(pauVar52[-2] + 0xc) = iVar28;
    *(int *)pauVar52[-1] = iVar32;
    *(int *)(pauVar52[-1] + 4) = iVar36;
    *(int *)(pauVar52[-1] + 8) = iVar40;
    *(int *)(pauVar52[-1] + 0xc) = iVar44;
    pauVar52 = pauVar52 + -4;
    piVar54 = &DAT_140e0e440;
    pauVar62 = pauVar62 + -4;
    do {
      pauVar60 = pauVar62;
      pauVar53 = pauVar52;
      auVar117 = vpalignr_avx2(auVar119,auVar118,4);
      auVar111 = vpalignr_avx2(auVar121,auVar120,4);
      uVar56 = (int)puVar47 + uVar56;
      auVar108 = vpsrld_avx2(auVar117,7);
      auVar116 = vpsrld_avx2(auVar117,3);
      iVar58 = uVar49 + *(int *)pauVar53[4] + (uVar66 & uVar65) + (~uVar65 & uVar67) +
               ((uVar65 >> 0x19 | uVar65 << 7) ^ (uVar65 >> 0xb | uVar65 << 0x15) ^
               (uVar65 >> 6 | uVar65 << 0x1a));
      auVar98 = vpslld_avx2(auVar117,0xe);
      uVar64 = uVar64 + iVar58;
      auVar117 = vpshufd_avx2(auVar121,0xfa);
      auVar109 = vpsrld_avx2(auVar108,0xb);
      uVar49 = iVar58 + (uVar46 & (uVar56 ^ uVar48) ^ uVar48) +
               ((uVar56 >> 0xd | uVar56 * 0x80000) ^ (uVar56 >> 0x16 | uVar56 * 0x400) ^
               (uVar56 >> 2 | uVar56 * 0x40000000));
      auVar99 = vpslld_avx2(auVar98,0xb);
      auVar110 = vpsrld_avx2(auVar117,10);
      iVar58 = uVar67 + *(int *)(pauVar53[4] + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      auVar99 = auVar116 ^ auVar108 ^ auVar98 ^ auVar109 ^ auVar99;
      uVar50 = uVar50 + iVar58;
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      auVar98 = vpsrlq_avx2(auVar117,2);
      uVar67 = iVar58 + ((uVar56 ^ uVar48) & (uVar49 ^ uVar56) ^ uVar56) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar117 = vpshufd_avx2(auVar110 ^ auVar117 ^ auVar98,0x84);
      auVar117 = vpsrldq_avx2(auVar117,8);
      iVar58 = uVar66 + *(int *)(pauVar53[4] + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar116._0_4_ = auVar118._0_4_ + auVar111._0_4_ + auVar99._0_4_ + auVar117._0_4_;
      auVar116._4_4_ = auVar118._4_4_ + auVar111._4_4_ + auVar99._4_4_ + auVar117._4_4_;
      auVar116._8_4_ = auVar118._8_4_ + auVar111._8_4_ + auVar99._8_4_ + auVar117._8_4_;
      auVar116._12_4_ = auVar118._12_4_ + auVar111._12_4_ + auVar99._12_4_ + auVar117._12_4_;
      auVar116._16_4_ = auVar118._16_4_ + auVar111._16_4_ + auVar99._16_4_ + auVar117._16_4_;
      auVar116._20_4_ = auVar118._20_4_ + auVar111._20_4_ + auVar99._20_4_ + auVar117._20_4_;
      auVar116._24_4_ = auVar118._24_4_ + auVar111._24_4_ + auVar99._24_4_ + auVar117._24_4_;
      auVar116._28_4_ = auVar118._28_4_ + auVar111._28_4_ + auVar99._28_4_ + auVar117._28_4_;
      uVar48 = uVar48 + iVar58;
      auVar117 = vpshufd_avx2(auVar116,0x50);
      auVar123 = aesenc(*pauVar60 ^ auVar126._0_16_ ^ auVar122._0_16_,param_4[1]);
      auVar111 = vpsrld_avx2(auVar117,10);
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      uVar66 = iVar58 + ((uVar49 ^ uVar56) & (uVar67 ^ uVar49) ^ uVar49) +
               ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
               (uVar67 >> 2 | uVar67 * 0x40000000));
      auVar118 = vpsrlq_avx2(auVar117,2);
      auVar117 = vpshufd_avx2(auVar111 ^ auVar117 ^ auVar118,0xe8);
      iVar58 = uVar65 + *(int *)(pauVar53[4] + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      auVar117 = vpslldq_avx2(auVar117,8);
      uVar56 = uVar56 + iVar58;
      auVar118._0_4_ = auVar116._0_4_ + auVar117._0_4_;
      auVar118._4_4_ = auVar116._4_4_ + auVar117._4_4_;
      auVar118._8_4_ = auVar116._8_4_ + auVar117._8_4_;
      auVar118._12_4_ = auVar116._12_4_ + auVar117._12_4_;
      auVar118._16_4_ = auVar116._16_4_ + auVar117._16_4_;
      auVar118._20_4_ = auVar116._20_4_ + auVar117._20_4_;
      auVar118._24_4_ = auVar116._24_4_ + auVar117._24_4_;
      auVar118._28_4_ = auVar116._28_4_ + auVar117._28_4_;
      auVar103 = aesenc(auVar123,param_4[2]);
      auVar123 = param_4[3];
      iVar12 = piVar54[1];
      iVar13 = piVar54[2];
      iVar17 = piVar54[3];
      iVar18 = piVar54[4];
      iVar19 = piVar54[5];
      iVar20 = piVar54[6];
      iVar21 = piVar54[7];
      *(int *)pauVar53[-4] = auVar118._0_4_ + *piVar54;
      *(int *)(pauVar53[-4] + 4) = auVar118._4_4_ + iVar12;
      *(int *)(pauVar53[-4] + 8) = auVar118._8_4_ + iVar13;
      *(int *)(pauVar53[-4] + 0xc) = auVar118._12_4_ + iVar17;
      *(int *)pauVar53[-3] = auVar118._16_4_ + iVar18;
      *(int *)(pauVar53[-3] + 4) = auVar118._20_4_ + iVar19;
      *(int *)(pauVar53[-3] + 8) = auVar118._24_4_ + iVar20;
      *(int *)(pauVar53[-3] + 0xc) = auVar118._28_4_ + iVar21;
      auVar117 = vpalignr_avx2(auVar120,auVar119,4);
      auVar111 = vpalignr_avx2(auVar118,auVar121,4);
      uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      auVar108 = vpsrld_avx2(auVar117,7);
      auVar116 = vpsrld_avx2(auVar117,3);
      iVar58 = uVar64 + *(int *)pauVar53[6] + (uVar48 & uVar56) + (~uVar56 & uVar50) +
               ((uVar56 >> 0x19 | uVar56 * 0x80) ^ (uVar56 >> 0xb | uVar56 * 0x200000) ^
               (uVar56 >> 6 | uVar56 * 0x4000000));
      auVar98 = vpslld_avx2(auVar117,0xe);
      uVar49 = uVar49 + iVar58;
      auVar123 = aesenc(auVar103,auVar123);
      auVar117 = vpshufd_avx2(auVar118,0xfa);
      auVar109 = vpsrld_avx2(auVar108,0xb);
      uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
               ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
               (uVar65 >> 2 | uVar65 * 0x40000000));
      auVar99 = vpslld_avx2(auVar98,0xb);
      auVar110 = vpsrld_avx2(auVar117,10);
      iVar58 = uVar50 + *(int *)(pauVar53[6] + 4) + (uVar56 & uVar49) + (~uVar49 & uVar48) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar99 = auVar116 ^ auVar108 ^ auVar98 ^ auVar109 ^ auVar99;
      uVar67 = uVar67 + iVar58;
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      auVar123 = aesenc(auVar123,param_4[4]);
      auVar98 = vpsrlq_avx2(auVar117,2);
      uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      auVar117 = vpshufd_avx2(auVar110 ^ auVar117 ^ auVar98,0x84);
      auVar117 = vpsrldq_avx2(auVar117,8);
      iVar58 = uVar48 + *(int *)(pauVar53[6] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar56) +
               ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
               (uVar67 >> 6 | uVar67 * 0x4000000));
      auVar14._0_4_ = auVar119._0_4_ + auVar111._0_4_ + auVar99._0_4_ + auVar117._0_4_;
      auVar14._4_4_ = auVar119._4_4_ + auVar111._4_4_ + auVar99._4_4_ + auVar117._4_4_;
      auVar14._8_4_ = auVar119._8_4_ + auVar111._8_4_ + auVar99._8_4_ + auVar117._8_4_;
      auVar14._12_4_ = auVar119._12_4_ + auVar111._12_4_ + auVar99._12_4_ + auVar117._12_4_;
      auVar14._16_4_ = auVar119._16_4_ + auVar111._16_4_ + auVar99._16_4_ + auVar117._16_4_;
      auVar14._20_4_ = auVar119._20_4_ + auVar111._20_4_ + auVar99._20_4_ + auVar117._20_4_;
      auVar14._24_4_ = auVar119._24_4_ + auVar111._24_4_ + auVar99._24_4_ + auVar117._24_4_;
      auVar14._28_4_ = auVar119._28_4_ + auVar111._28_4_ + auVar99._28_4_ + auVar117._28_4_;
      uVar66 = uVar66 + iVar58;
      auVar117 = vpshufd_avx2(auVar14,0x50);
      auVar123 = aesenc(auVar123,param_4[5]);
      auVar111 = vpsrld_avx2(auVar117,10);
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar119 = vpsrlq_avx2(auVar117,2);
      auVar117 = vpshufd_avx2(auVar111 ^ auVar117 ^ auVar119,0xe8);
      iVar58 = uVar56 + *(int *)(pauVar53[6] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      auVar117 = vpslldq_avx2(auVar117,8);
      uVar65 = uVar65 + iVar58;
      auVar119._0_4_ = auVar14._0_4_ + auVar117._0_4_;
      auVar119._4_4_ = auVar14._4_4_ + auVar117._4_4_;
      auVar119._8_4_ = auVar14._8_4_ + auVar117._8_4_;
      auVar119._12_4_ = auVar14._12_4_ + auVar117._12_4_;
      auVar119._16_4_ = auVar14._16_4_ + auVar117._16_4_;
      auVar119._20_4_ = auVar14._20_4_ + auVar117._20_4_;
      auVar119._24_4_ = auVar14._24_4_ + auVar117._24_4_;
      auVar119._28_4_ = auVar14._28_4_ + auVar117._28_4_;
      auVar103 = aesenc(auVar123,param_4[6]);
      auVar123 = param_4[7];
      iVar12 = piVar54[9];
      iVar13 = piVar54[10];
      iVar17 = piVar54[0xb];
      iVar18 = piVar54[0xc];
      iVar19 = piVar54[0xd];
      iVar20 = piVar54[0xe];
      iVar21 = piVar54[0xf];
      *(int *)pauVar53[-2] = auVar119._0_4_ + piVar54[8];
      *(int *)(pauVar53[-2] + 4) = auVar119._4_4_ + iVar12;
      *(int *)(pauVar53[-2] + 8) = auVar119._8_4_ + iVar13;
      *(int *)(pauVar53[-2] + 0xc) = auVar119._12_4_ + iVar17;
      *(int *)pauVar53[-1] = auVar119._16_4_ + iVar18;
      *(int *)(pauVar53[-1] + 4) = auVar119._20_4_ + iVar19;
      *(int *)(pauVar53[-1] + 8) = auVar119._24_4_ + iVar20;
      *(int *)(pauVar53[-1] + 0xc) = auVar119._28_4_ + iVar21;
      pauVar52 = pauVar53 + -8;
      auVar117 = vpalignr_avx2(auVar121,auVar120,4);
      auVar111 = vpalignr_avx2(auVar119,auVar118,4);
      uVar56 = iVar58 + ((uVar50 ^ uVar64) & (uVar48 ^ uVar50) ^ uVar50) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      auVar108 = vpsrld_avx2(auVar117,7);
      auVar116 = vpsrld_avx2(auVar117,3);
      iVar58 = uVar49 + *(int *)*pauVar53 + (uVar66 & uVar65) + (~uVar65 & uVar67) +
               ((uVar65 >> 0x19 | uVar65 * 0x80) ^ (uVar65 >> 0xb | uVar65 * 0x200000) ^
               (uVar65 >> 6 | uVar65 * 0x4000000));
      auVar98 = vpslld_avx2(auVar117,0xe);
      uVar64 = uVar64 + iVar58;
      auVar123 = aesenc(auVar103,auVar123);
      auVar117 = vpshufd_avx2(auVar119,0xfa);
      auVar109 = vpsrld_avx2(auVar108,0xb);
      uVar49 = iVar58 + ((uVar48 ^ uVar50) & (uVar56 ^ uVar48) ^ uVar48) +
               ((uVar56 >> 0xd | uVar56 * 0x80000) ^ (uVar56 >> 0x16 | uVar56 * 0x400) ^
               (uVar56 >> 2 | uVar56 * 0x40000000));
      auVar99 = vpslld_avx2(auVar98,0xb);
      auVar110 = vpsrld_avx2(auVar117,10);
      iVar58 = uVar67 + *(int *)(*pauVar53 + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      auVar99 = auVar116 ^ auVar108 ^ auVar98 ^ auVar109 ^ auVar99;
      uVar50 = uVar50 + iVar58;
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      auVar123 = aesenc(auVar123,*pauVar59);
      auVar98 = vpsrlq_avx2(auVar117,2);
      uVar67 = iVar58 + ((uVar56 ^ uVar48) & (uVar49 ^ uVar56) ^ uVar56) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar117 = vpshufd_avx2(auVar110 ^ auVar117 ^ auVar98,0x84);
      auVar117 = vpsrldq_avx2(auVar117,8);
      iVar58 = uVar66 + *(int *)(*pauVar53 + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar15._0_4_ = auVar120._0_4_ + auVar111._0_4_ + auVar99._0_4_ + auVar117._0_4_;
      auVar15._4_4_ = auVar120._4_4_ + auVar111._4_4_ + auVar99._4_4_ + auVar117._4_4_;
      auVar15._8_4_ = auVar120._8_4_ + auVar111._8_4_ + auVar99._8_4_ + auVar117._8_4_;
      auVar15._12_4_ = auVar120._12_4_ + auVar111._12_4_ + auVar99._12_4_ + auVar117._12_4_;
      auVar15._16_4_ = auVar120._16_4_ + auVar111._16_4_ + auVar99._16_4_ + auVar117._16_4_;
      auVar15._20_4_ = auVar120._20_4_ + auVar111._20_4_ + auVar99._20_4_ + auVar117._20_4_;
      auVar15._24_4_ = auVar120._24_4_ + auVar111._24_4_ + auVar99._24_4_ + auVar117._24_4_;
      auVar15._28_4_ = auVar120._28_4_ + auVar111._28_4_ + auVar99._28_4_ + auVar117._28_4_;
      uVar48 = uVar48 + iVar58;
      auVar117 = vpshufd_avx2(auVar15,0x50);
      auVar123 = aesenc(auVar123,param_4[9]);
      auVar111 = vpsrld_avx2(auVar117,10);
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      uVar66 = iVar58 + ((uVar49 ^ uVar56) & (uVar67 ^ uVar49) ^ uVar49) +
               ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
               (uVar67 >> 2 | uVar67 * 0x40000000));
      auVar120 = vpsrlq_avx2(auVar117,2);
      auVar117 = vpshufd_avx2(auVar111 ^ auVar117 ^ auVar120,0xe8);
      iVar58 = uVar65 + *(int *)(*pauVar53 + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      auVar117 = vpslldq_avx2(auVar117,8);
      uVar56 = uVar56 + iVar58;
      auVar120._0_4_ = auVar15._0_4_ + auVar117._0_4_;
      auVar120._4_4_ = auVar15._4_4_ + auVar117._4_4_;
      auVar120._8_4_ = auVar15._8_4_ + auVar117._8_4_;
      auVar120._12_4_ = auVar15._12_4_ + auVar117._12_4_;
      auVar120._16_4_ = auVar15._16_4_ + auVar117._16_4_;
      auVar120._20_4_ = auVar15._20_4_ + auVar117._20_4_;
      auVar120._24_4_ = auVar15._24_4_ + auVar117._24_4_;
      auVar120._28_4_ = auVar15._28_4_ + auVar117._28_4_;
      auVar103 = aesenclast(auVar123,param_4[10]);
      auVar114 = aesenc(auVar123,param_4[10]);
      auVar123 = param_4[0xb];
      iVar12 = piVar54[0x11];
      iVar13 = piVar54[0x12];
      iVar17 = piVar54[0x13];
      iVar18 = piVar54[0x14];
      iVar19 = piVar54[0x15];
      iVar20 = piVar54[0x16];
      iVar21 = piVar54[0x17];
      *(int *)*pauVar52 = auVar120._0_4_ + piVar54[0x10];
      *(int *)(pauVar53[-8] + 4) = auVar120._4_4_ + iVar12;
      *(int *)(pauVar53[-8] + 8) = auVar120._8_4_ + iVar13;
      *(int *)(pauVar53[-8] + 0xc) = auVar120._12_4_ + iVar17;
      *(int *)pauVar53[-7] = auVar120._16_4_ + iVar18;
      *(int *)(pauVar53[-7] + 4) = auVar120._20_4_ + iVar19;
      *(int *)(pauVar53[-7] + 8) = auVar120._24_4_ + iVar20;
      *(int *)(pauVar53[-7] + 0xc) = auVar120._28_4_ + iVar21;
      auVar117 = vpalignr_avx2(auVar118,auVar121,4);
      auVar111 = vpalignr_avx2(auVar120,auVar119,4);
      uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      auVar108 = vpsrld_avx2(auVar117,7);
      auVar116 = vpsrld_avx2(auVar117,3);
      iVar58 = uVar64 + *(int *)pauVar53[2] + (uVar48 & uVar56) + (~uVar56 & uVar50) +
               ((uVar56 >> 0x19 | uVar56 * 0x80) ^ (uVar56 >> 0xb | uVar56 * 0x200000) ^
               (uVar56 >> 6 | uVar56 * 0x4000000));
      auVar98 = vpslld_avx2(auVar117,0xe);
      uVar49 = uVar49 + iVar58;
      auVar103 = vpand_avx(auVar103,auVar104);
      auVar123 = aesenc(auVar114,auVar123);
      auVar117 = vpshufd_avx2(auVar120,0xfa);
      auVar109 = vpsrld_avx2(auVar108,0xb);
      uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
               ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
               (uVar65 >> 2 | uVar65 * 0x40000000));
      auVar99 = vpslld_avx2(auVar98,0xb);
      auVar110 = vpsrld_avx2(auVar117,10);
      iVar58 = uVar50 + *(int *)(pauVar53[2] + 4) + (uVar56 & uVar49) + (~uVar49 & uVar48) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar99 = auVar116 ^ auVar108 ^ auVar98 ^ auVar109 ^ auVar99;
      uVar67 = uVar67 + iVar58;
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      auVar97 = aesenclast(auVar123,param_4[0xc]);
      auVar114 = aesenc(auVar123,param_4[0xc]);
      auVar98 = vpsrlq_avx2(auVar117,2);
      uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      auVar117 = vpshufd_avx2(auVar110 ^ auVar117 ^ auVar98,0x84);
      auVar117 = vpsrldq_avx2(auVar117,8);
      iVar58 = uVar48 + *(int *)(pauVar53[2] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar56) +
               ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
               (uVar67 >> 6 | uVar67 * 0x4000000));
      auVar16._0_4_ = auVar121._0_4_ + auVar111._0_4_ + auVar99._0_4_ + auVar117._0_4_;
      auVar16._4_4_ = auVar121._4_4_ + auVar111._4_4_ + auVar99._4_4_ + auVar117._4_4_;
      auVar16._8_4_ = auVar121._8_4_ + auVar111._8_4_ + auVar99._8_4_ + auVar117._8_4_;
      auVar16._12_4_ = auVar121._12_4_ + auVar111._12_4_ + auVar99._12_4_ + auVar117._12_4_;
      auVar16._16_4_ = auVar121._16_4_ + auVar111._16_4_ + auVar99._16_4_ + auVar117._16_4_;
      auVar16._20_4_ = auVar121._20_4_ + auVar111._20_4_ + auVar99._20_4_ + auVar117._20_4_;
      auVar16._24_4_ = auVar121._24_4_ + auVar111._24_4_ + auVar99._24_4_ + auVar117._24_4_;
      auVar16._28_4_ = auVar121._28_4_ + auVar111._28_4_ + auVar99._28_4_ + auVar117._28_4_;
      uVar66 = uVar66 + iVar58;
      auVar117 = vpshufd_avx2(auVar16,0x50);
      auVar123 = vpand_avx(auVar97,auVar91);
      auVar97 = aesenc(auVar114,param_4[0xd]);
      auVar111 = vpsrld_avx2(auVar117,10);
      auVar117 = vpsrlq_avx2(auVar117,0x11);
      uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar121 = vpsrlq_avx2(auVar117,2);
      auVar117 = vpshufd_avx2(auVar111 ^ auVar117 ^ auVar121,0xe8);
      iVar58 = uVar56 + *(int *)(pauVar53[2] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar46 = uVar48 ^ uVar50;
      auVar117 = vpslldq_avx2(auVar117,8);
      uVar65 = uVar65 + iVar58;
      auVar121._0_4_ = auVar16._0_4_ + auVar117._0_4_;
      auVar121._4_4_ = auVar16._4_4_ + auVar117._4_4_;
      auVar121._8_4_ = auVar16._8_4_ + auVar117._8_4_;
      auVar121._12_4_ = auVar16._12_4_ + auVar117._12_4_;
      auVar121._16_4_ = auVar16._16_4_ + auVar117._16_4_;
      auVar121._20_4_ = auVar16._20_4_ + auVar117._20_4_;
      auVar121._24_4_ = auVar16._24_4_ + auVar117._24_4_;
      auVar121._28_4_ = auVar16._28_4_ + auVar117._28_4_;
      auVar114 = vpor_avx(auVar103,auVar123);
      auVar103 = aesenclast(auVar97,param_4[0xe]);
      auVar123 = *param_4;
      auVar126 = ZEXT1664(auVar123);
      iVar12 = piVar54[0x19];
      iVar13 = piVar54[0x1a];
      iVar17 = piVar54[0x1b];
      iVar18 = piVar54[0x1c];
      iVar19 = piVar54[0x1d];
      iVar20 = piVar54[0x1e];
      iVar21 = piVar54[0x1f];
      uVar56 = (uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000);
      uVar61 = iVar58 + ((uVar50 ^ uVar64) & uVar46 ^ uVar50);
      puVar47 = (undefined4 *)(ulonglong)uVar61;
      *(int *)pauVar53[-6] = auVar121._0_4_ + piVar54[0x18];
      *(int *)(pauVar53[-6] + 4) = auVar121._4_4_ + iVar12;
      *(int *)(pauVar53[-6] + 8) = auVar121._8_4_ + iVar13;
      *(int *)(pauVar53[-6] + 0xc) = auVar121._12_4_ + iVar17;
      *(int *)pauVar53[-5] = auVar121._16_4_ + iVar18;
      *(int *)(pauVar53[-5] + 4) = auVar121._20_4_ + iVar19;
      *(int *)(pauVar53[-5] + 8) = auVar121._24_4_ + iVar20;
      *(int *)(pauVar53[-5] + 0xc) = auVar121._28_4_ + iVar21;
      auVar103 = vpand_avx(auVar103,auVar115);
      auVar103 = vpor_avx(auVar114,auVar103);
      auVar122 = ZEXT1664(auVar103);
      *(undefined1 (*) [16])(param_2 + (longlong)pauVar60) = auVar103;
      pauVar62 = pauVar60 + 1;
      pcVar1 = (char *)((longlong)piVar54 + 0x83);
      piVar54 = piVar54 + 0x20;
    } while (*pcVar1 != '\0');
    uVar61 = uVar61 + uVar56;
    iVar58 = uVar49 + *(int *)pauVar53[-4] + (uVar66 & uVar65) + (~uVar65 & uVar67) +
             ((uVar65 >> 0x19 | uVar65 * 0x80) ^ (uVar65 >> 0xb | uVar65 * 0x200000) ^
             (uVar65 >> 6 | uVar65 * 0x4000000));
    uVar64 = uVar64 + iVar58;
    uVar49 = iVar58 + (uVar46 & (uVar61 ^ uVar48) ^ uVar48) +
             ((uVar61 >> 0xd | uVar61 * 0x80000) ^ (uVar61 >> 0x16 | uVar61 * 0x400) ^
             (uVar61 >> 2 | uVar61 * 0x40000000));
    iVar58 = uVar67 + *(int *)(pauVar53[-4] + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
             ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
             (uVar64 >> 6 | uVar64 * 0x4000000));
    uVar50 = uVar50 + iVar58;
    uVar67 = iVar58 + ((uVar61 ^ uVar48) & (uVar49 ^ uVar61) ^ uVar61) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar58 = uVar66 + *(int *)(pauVar53[-4] + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar48 = uVar48 + iVar58;
    auVar123 = aesenc(*pauVar62 ^ auVar123 ^ auVar103,param_4[1]);
    uVar66 = iVar58 + ((uVar49 ^ uVar61) & (uVar67 ^ uVar49) ^ uVar49) +
             ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
             (uVar67 >> 2 | uVar67 * 0x40000000));
    iVar58 = uVar65 + *(int *)(pauVar53[-4] + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    uVar61 = uVar61 + iVar58;
    auVar123 = aesenc(auVar123,param_4[2]);
    uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
             ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
             (uVar66 >> 2 | uVar66 * 0x40000000));
    iVar58 = uVar64 + *(int *)pauVar53[-2] + (uVar48 & uVar61) + (~uVar61 & uVar50) +
             ((uVar61 >> 0x19 | uVar61 * 0x80) ^ (uVar61 >> 0xb | uVar61 * 0x200000) ^
             (uVar61 >> 6 | uVar61 * 0x4000000));
    uVar49 = uVar49 + iVar58;
    auVar123 = aesenc(auVar123,param_4[3]);
    uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
             ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
             (uVar65 >> 2 | uVar65 * 0x40000000));
    iVar58 = uVar50 + *(int *)(pauVar53[-2] + 4) + (uVar61 & uVar49) + (~uVar49 & uVar48) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar67 = uVar67 + iVar58;
    auVar123 = aesenc(auVar123,param_4[4]);
    uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
             ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
             (uVar64 >> 2 | uVar64 * 0x40000000));
    iVar58 = uVar48 + *(int *)(pauVar53[-2] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar61) +
             ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
             (uVar67 >> 6 | uVar67 * 0x4000000));
    uVar66 = uVar66 + iVar58;
    auVar123 = aesenc(auVar123,param_4[5]);
    uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar58 = uVar61 + *(int *)(pauVar53[-2] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
             ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
             (uVar66 >> 6 | uVar66 * 0x4000000));
    uVar65 = uVar65 + iVar58;
    auVar123 = aesenc(auVar123,param_4[6]);
    uVar56 = iVar58 + ((uVar50 ^ uVar64) & (uVar48 ^ uVar50) ^ uVar50) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000));
    iVar58 = uVar49 + *(int *)*pauVar52 + (uVar66 & uVar65) + (~uVar65 & uVar67) +
             ((uVar65 >> 0x19 | uVar65 * 0x80) ^ (uVar65 >> 0xb | uVar65 * 0x200000) ^
             (uVar65 >> 6 | uVar65 * 0x4000000));
    uVar64 = uVar64 + iVar58;
    auVar123 = aesenc(auVar123,param_4[7]);
    uVar49 = iVar58 + ((uVar48 ^ uVar50) & (uVar56 ^ uVar48) ^ uVar48) +
             ((uVar56 >> 0xd | uVar56 * 0x80000) ^ (uVar56 >> 0x16 | uVar56 * 0x400) ^
             (uVar56 >> 2 | uVar56 * 0x40000000));
    iVar58 = uVar67 + *(int *)(pauVar53[-8] + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
             ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
             (uVar64 >> 6 | uVar64 * 0x4000000));
    uVar50 = uVar50 + iVar58;
    auVar123 = aesenc(auVar123,*pauVar59);
    uVar67 = iVar58 + ((uVar56 ^ uVar48) & (uVar49 ^ uVar56) ^ uVar56) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar58 = uVar66 + *(int *)(pauVar53[-8] + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar48 = uVar48 + iVar58;
    auVar123 = aesenc(auVar123,param_4[9]);
    uVar66 = iVar58 + ((uVar49 ^ uVar56) & (uVar67 ^ uVar49) ^ uVar49) +
             ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
             (uVar67 >> 2 | uVar67 * 0x40000000));
    iVar58 = uVar65 + *(int *)(pauVar53[-8] + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    uVar56 = uVar56 + iVar58;
    auVar114 = aesenclast(auVar123,param_4[10]);
    auVar103 = aesenc(auVar123,param_4[10]);
    uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
             ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
             (uVar66 >> 2 | uVar66 * 0x40000000));
    iVar58 = uVar64 + *(int *)pauVar53[-6] + (uVar48 & uVar56) + (~uVar56 & uVar50) +
             ((uVar56 >> 0x19 | uVar56 * 0x80) ^ (uVar56 >> 0xb | uVar56 * 0x200000) ^
             (uVar56 >> 6 | uVar56 * 0x4000000));
    uVar49 = uVar49 + iVar58;
    auVar123 = vpand_avx(auVar114,auVar104);
    auVar103 = aesenc(auVar103,param_4[0xb]);
    uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
             ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
             (uVar65 >> 2 | uVar65 * 0x40000000));
    iVar58 = uVar50 + *(int *)(pauVar53[-6] + 4) + (uVar56 & uVar49) + (~uVar49 & uVar48) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar67 = uVar67 + iVar58;
    auVar97 = aesenclast(auVar103,param_4[0xc]);
    auVar114 = aesenc(auVar103,param_4[0xc]);
    uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
             ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
             (uVar64 >> 2 | uVar64 * 0x40000000));
    iVar58 = uVar48 + *(int *)(pauVar53[-6] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar56) +
             ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
             (uVar67 >> 6 | uVar67 * 0x4000000));
    uVar66 = uVar66 + iVar58;
    auVar103 = vpand_avx(auVar97,auVar91);
    auVar114 = aesenc(auVar114,param_4[0xd]);
    uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar58 = uVar56 + *(int *)(pauVar53[-6] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
             ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
             (uVar66 >> 6 | uVar66 * 0x4000000));
    auVar103 = vpor_avx(auVar123,auVar103);
    auVar123 = aesenclast(auVar114,param_4[0xe]);
    auVar126 = ZEXT1664(*param_4);
    puVar2 = *(uint **)(pauVar53[0x1a] + 8);
    pauVar55 = pauVar53 + 0x14;
    auVar123 = vpand_avx(auVar123,auVar115);
    auVar123 = vpor_avx(auVar103,auVar123);
    auVar122 = ZEXT1664(auVar123);
    *(undefined1 (*) [16])(param_2 + (longlong)pauVar62) = auVar123;
    uVar56 = iVar58 + ((uVar50 ^ uVar64) & (uVar48 ^ uVar50) ^ uVar50) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000)) + *puVar2;
    puVar47 = (undefined4 *)(ulonglong)uVar56;
    uVar48 = uVar48 + puVar2[1];
    uVar50 = uVar50 + puVar2[2];
    uVar64 = uVar64 + puVar2[3];
    uVar65 = uVar65 + iVar58 + puVar2[4];
    uVar66 = uVar66 + puVar2[5];
    uVar67 = uVar67 + puVar2[6];
    uVar49 = uVar49 + puVar2[7];
    *puVar2 = uVar56;
    puVar2[1] = uVar48;
    puVar2[2] = uVar50;
    puVar2[3] = uVar64;
    puVar2[4] = uVar65;
    puVar2[5] = uVar66;
    puVar2[6] = uVar67;
    puVar2[7] = uVar49;
    if (pauVar60 + 2 == *(undefined1 (**) [16])pauVar53[0x19]) break;
    uVar56 = 0;
    uVar46 = uVar48 ^ uVar50;
    pauVar60 = pauVar60 + 2;
    do {
      pauVar62 = pauVar60;
      uVar56 = (int)puVar47 + uVar56;
      iVar58 = uVar49 + *(int *)pauVar55[1] + (uVar66 & uVar65) + (~uVar65 & uVar67) +
               ((uVar65 >> 0x19 | uVar65 << 7) ^ (uVar65 >> 0xb | uVar65 << 0x15) ^
               (uVar65 >> 6 | uVar65 << 0x1a));
      uVar64 = uVar64 + iVar58;
      uVar49 = iVar58 + (uVar46 & (uVar56 ^ uVar48) ^ uVar48) +
               ((uVar56 >> 0xd | uVar56 * 0x80000) ^ (uVar56 >> 0x16 | uVar56 * 0x400) ^
               (uVar56 >> 2 | uVar56 * 0x40000000));
      iVar58 = uVar67 + *(int *)(pauVar55[1] + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar50 = uVar50 + iVar58;
      uVar67 = iVar58 + ((uVar56 ^ uVar48) & (uVar49 ^ uVar56) ^ uVar56) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar58 = uVar66 + *(int *)(pauVar55[1] + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar48 = uVar48 + iVar58;
      auVar123 = aesenc(*pauVar62 ^ auVar126._0_16_ ^ auVar122._0_16_,param_4[1]);
      uVar66 = iVar58 + ((uVar49 ^ uVar56) & (uVar67 ^ uVar49) ^ uVar49) +
               ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
               (uVar67 >> 2 | uVar67 * 0x40000000));
      iVar58 = uVar65 + *(int *)(pauVar55[1] + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar56 = uVar56 + iVar58;
      auVar123 = aesenc(auVar123,param_4[2]);
      uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar58 = uVar64 + *(int *)pauVar55[3] + (uVar48 & uVar56) + (~uVar56 & uVar50) +
               ((uVar56 >> 0x19 | uVar56 * 0x80) ^ (uVar56 >> 0xb | uVar56 * 0x200000) ^
               (uVar56 >> 6 | uVar56 * 0x4000000));
      uVar49 = uVar49 + iVar58;
      auVar123 = aesenc(auVar123,param_4[3]);
      uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
               ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
               (uVar65 >> 2 | uVar65 * 0x40000000));
      iVar58 = uVar50 + *(int *)(pauVar55[3] + 4) + (uVar56 & uVar49) + (~uVar49 & uVar48) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      uVar67 = uVar67 + iVar58;
      auVar123 = aesenc(auVar123,param_4[4]);
      uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar58 = uVar48 + *(int *)(pauVar55[3] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar56) +
               ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
               (uVar67 >> 6 | uVar67 * 0x4000000));
      uVar66 = uVar66 + iVar58;
      auVar123 = aesenc(auVar123,param_4[5]);
      uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar58 = uVar56 + *(int *)(pauVar55[3] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar65 = uVar65 + iVar58;
      auVar123 = aesenc(auVar123,param_4[6]);
      uVar56 = iVar58 + ((uVar50 ^ uVar64) & (uVar48 ^ uVar50) ^ uVar50) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar58 = uVar49 + *(int *)pauVar55[-3] + (uVar66 & uVar65) + (~uVar65 & uVar67) +
               ((uVar65 >> 0x19 | uVar65 * 0x80) ^ (uVar65 >> 0xb | uVar65 * 0x200000) ^
               (uVar65 >> 6 | uVar65 * 0x4000000));
      uVar64 = uVar64 + iVar58;
      auVar123 = aesenc(auVar123,param_4[7]);
      uVar49 = iVar58 + ((uVar48 ^ uVar50) & (uVar56 ^ uVar48) ^ uVar48) +
               ((uVar56 >> 0xd | uVar56 * 0x80000) ^ (uVar56 >> 0x16 | uVar56 * 0x400) ^
               (uVar56 >> 2 | uVar56 * 0x40000000));
      iVar58 = uVar67 + *(int *)(pauVar55[-3] + 4) + (uVar65 & uVar64) + (~uVar64 & uVar66) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar50 = uVar50 + iVar58;
      auVar123 = aesenc(auVar123,*pauVar59);
      uVar67 = iVar58 + ((uVar56 ^ uVar48) & (uVar49 ^ uVar56) ^ uVar56) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar58 = uVar66 + *(int *)(pauVar55[-3] + 8) + (uVar64 & uVar50) + (~uVar50 & uVar65) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar48 = uVar48 + iVar58;
      auVar123 = aesenc(auVar123,param_4[9]);
      uVar66 = iVar58 + ((uVar49 ^ uVar56) & (uVar67 ^ uVar49) ^ uVar49) +
               ((uVar67 >> 0xd | uVar67 * 0x80000) ^ (uVar67 >> 0x16 | uVar67 * 0x400) ^
               (uVar67 >> 2 | uVar67 * 0x40000000));
      iVar58 = uVar65 + *(int *)(pauVar55[-3] + 0xc) + (uVar50 & uVar48) + (~uVar48 & uVar64) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar56 = uVar56 + iVar58;
      auVar114 = aesenclast(auVar123,param_4[10]);
      auVar103 = aesenc(auVar123,param_4[10]);
      uVar65 = iVar58 + ((uVar67 ^ uVar49) & (uVar66 ^ uVar67) ^ uVar67) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar58 = uVar64 + *(int *)pauVar55[-1] + (uVar48 & uVar56) + (~uVar56 & uVar50) +
               ((uVar56 >> 0x19 | uVar56 * 0x80) ^ (uVar56 >> 0xb | uVar56 * 0x200000) ^
               (uVar56 >> 6 | uVar56 * 0x4000000));
      uVar49 = uVar49 + iVar58;
      auVar123 = vpand_avx(auVar114,auVar104);
      auVar103 = aesenc(auVar103,param_4[0xb]);
      uVar64 = iVar58 + ((uVar66 ^ uVar67) & (uVar65 ^ uVar66) ^ uVar66) +
               ((uVar65 >> 0xd | uVar65 * 0x80000) ^ (uVar65 >> 0x16 | uVar65 * 0x400) ^
               (uVar65 >> 2 | uVar65 * 0x40000000));
      iVar58 = uVar50 + *(int *)(pauVar55[-1] + 4) + (uVar56 & uVar49) + (~uVar49 & uVar48) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      uVar67 = uVar67 + iVar58;
      auVar97 = aesenclast(auVar103,param_4[0xc]);
      auVar114 = aesenc(auVar103,param_4[0xc]);
      uVar50 = iVar58 + ((uVar65 ^ uVar66) & (uVar64 ^ uVar65) ^ uVar65) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar58 = uVar48 + *(int *)(pauVar55[-1] + 8) + (uVar49 & uVar67) + (~uVar67 & uVar56) +
               ((uVar67 >> 0x19 | uVar67 * 0x80) ^ (uVar67 >> 0xb | uVar67 * 0x200000) ^
               (uVar67 >> 6 | uVar67 * 0x4000000));
      uVar66 = uVar66 + iVar58;
      auVar103 = vpand_avx(auVar97,auVar91);
      auVar114 = aesenc(auVar114,param_4[0xd]);
      uVar48 = iVar58 + ((uVar64 ^ uVar65) & (uVar50 ^ uVar64) ^ uVar64) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar58 = uVar56 + *(int *)(pauVar55[-1] + 0xc) + (uVar67 & uVar66) + (~uVar66 & uVar49) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar46 = uVar48 ^ uVar50;
      uVar65 = uVar65 + iVar58;
      auVar103 = vpor_avx(auVar123,auVar103);
      auVar123 = aesenclast(auVar114,param_4[0xe]);
      auVar126 = ZEXT1664(*param_4);
      uVar56 = (uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000);
      uVar61 = iVar58 + ((uVar50 ^ uVar64) & uVar46 ^ uVar50);
      puVar47 = (undefined4 *)(ulonglong)uVar61;
      auVar123 = vpand_avx(auVar123,auVar115);
      auVar123 = vpor_avx(auVar103,auVar123);
      auVar122 = ZEXT1664(auVar123);
      pauVar55 = pauVar55 + -8;
      *(undefined1 (*) [16])(param_2 + (longlong)pauVar62) = auVar123;
      pauVar60 = pauVar62 + 1;
    } while (pauVar52 <= pauVar55);
    puVar2 = *(uint **)(pauVar53[0x1a] + 8);
    pauVar62 = pauVar62 + 5;
    lVar68 = *(longlong *)pauVar53[0x1b];
    pauVar52 = pauVar53 + 0x14;
    uVar56 = uVar61 + uVar56 + *puVar2;
    puVar47 = (undefined4 *)(ulonglong)uVar56;
    uVar48 = uVar48 + puVar2[1];
    uVar50 = uVar50 + puVar2[2];
    uVar64 = uVar64 + puVar2[3];
    uVar65 = uVar65 + puVar2[4];
    uVar66 = uVar66 + puVar2[5];
    uVar67 = uVar67 + puVar2[6];
    uVar49 = uVar49 + puVar2[7];
    pauVar55 = *(undefined1 (**) [16])pauVar53[0x19];
    *puVar2 = uVar56;
    pauVar60 = (undefined1 (*) [16])(*pauVar62 + lVar68);
    if (pauVar62 == pauVar55) {
      pauVar60 = pauVar52;
    }
    puVar2[1] = uVar48;
    puVar2[2] = uVar50;
    puVar2[3] = uVar64;
    puVar2[4] = uVar65;
    puVar2[5] = uVar66;
    puVar2[6] = uVar67;
    puVar2[7] = uVar49;
  } while (pauVar62 <= pauVar55);
  **(undefined1 (**) [16])pauVar53[0x1a] = auVar123;
  return puVar47;
}

// L$SEH_begin_aesni_cbc_sha256_enc_xop @ 140e0e68d

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_cbc_sha256_enc_xop(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong in_stack_00000038;
  
  in_stack_00000038 = in_stack_00000038 - param_1;
  auVar1 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000038 + param_1),_DAT_140e0e5c0);
  auVar2 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000038 + 0x10 + param_1),_DAT_140e0e5c0);
  auVar3 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000038 + 0x20 + param_1),_DAT_140e0e5c0);
  auVar4 = vpshufb_avx(*(undefined1 (*) [16])(in_stack_00000038 + 0x30 + param_1),_DAT_140e0e5c0);
  vpalignr_avx(auVar2,auVar1,4);
  vpalignr_avx(auVar4,auVar3,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// L$SEH_begin_aesni_cbc_sha256_enc_avx @ 140e0f78d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_cbc_sha256_enc_avx
               (undefined1 (*param_1) [16],longlong param_2,longlong param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16],uint *param_6,longlong param_7)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
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
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  
  param_2 = param_2 - (longlong)param_1;
  param_7 = param_7 - (longlong)param_1;
  pauVar8 = param_1 + param_3 * 4;
  auVar32 = *param_5;
  lVar20 = (ulonglong)*(uint *)param_4[0xf] - 9;
  uVar5 = *param_6;
  uVar9 = param_6[1];
  uVar6 = param_6[2];
  uVar7 = param_6[3];
  uVar19 = param_6[4];
  uVar18 = param_6[5];
  uVar17 = param_6[6];
  uVar16 = param_6[7];
  auVar2 = *(undefined1 (*) [16])(&DAT_140e0e5e0 + lVar20 * 8);
  auVar3 = *(undefined1 (*) [16])(&DAT_140e0e5f0 + lVar20 * 8);
  auVar4 = *(undefined1 (*) [16])(&DAT_140e0e600 + lVar20 * 8);
  auVar31 = *param_4;
  do {
    auVar26 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + (longlong)param_1),_DAT_140e0e5c0);
    auVar27 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x10 + (longlong)param_1),_DAT_140e0e5c0)
    ;
    auVar33 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x20 + (longlong)param_1),_DAT_140e0e5c0)
    ;
    local_180 = auVar26._0_4_ + K256;
    iStack_17c = auVar26._4_4_ + DAT_140e0e3c4;
    iStack_178 = auVar26._8_4_ + DAT_140e0e3c8;
    iStack_174 = auVar26._12_4_ + DAT_140e0e3cc;
    auVar28 = vpshufb_avx(*(undefined1 (*) [16])(param_7 + 0x30 + (longlong)param_1),_DAT_140e0e5c0)
    ;
    local_170 = auVar27._0_4_ + DAT_140e0e3e0;
    iStack_16c = auVar27._4_4_ + DAT_140e0e3e4;
    iStack_168 = auVar27._8_4_ + DAT_140e0e3e8;
    iStack_164 = auVar27._12_4_ + DAT_140e0e3ec;
    local_160 = auVar33._0_4_ + DAT_140e0e400;
    iStack_15c = auVar33._4_4_ + DAT_140e0e404;
    iStack_158 = auVar33._8_4_ + DAT_140e0e408;
    iStack_154 = auVar33._12_4_ + DAT_140e0e40c;
    local_150 = auVar28._0_4_ + DAT_140e0e420;
    iStack_14c = auVar28._4_4_ + DAT_140e0e424;
    iStack_148 = auVar28._8_4_ + DAT_140e0e428;
    iStack_144 = auVar28._12_4_ + DAT_140e0e42c;
    uVar11 = uVar9 ^ uVar6;
    piVar10 = &K256;
    do {
      pauVar13 = param_1;
      auVar30 = vpalignr_avx(auVar27,auVar26,4);
      auVar34 = vpalignr_avx(auVar28,auVar33,4);
      uVar14 = (uVar19 >> 0xe | uVar19 << 0x12) ^ uVar19;
      auVar23 = vpsrld_avx(auVar30,7);
      uVar15 = (uVar5 >> 9 | uVar5 << 0x17) ^ uVar5;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar29 = vpsrld_avx(auVar30,3);
      auVar21 = vpslld_avx(auVar30,0xe);
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar5;
      iVar12 = uVar16 + local_180 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar30 = vpshufd_avx(auVar28,0xfa);
      uVar7 = uVar7 + iVar12;
      auVar24 = vpsrld_avx(auVar23,0xb);
      uVar16 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar12 + (uVar11 & (uVar5 ^ uVar9) ^ uVar9);
      uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar22 = vpslld_avx(auVar21,0xb);
      uVar14 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
      auVar25 = vpsrld_avx(auVar30,10);
      auVar22 = auVar29 ^ auVar23 ^ auVar21 ^ auVar24 ^ auVar22;
      auVar30 = vpsrlq_avx(auVar30,0x11);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar16;
      iVar12 = uVar17 + iStack_17c + ((uVar19 ^ uVar18) & uVar7 ^ uVar18) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      uVar6 = uVar6 + iVar12;
      auVar21 = vpsrlq_avx(auVar30,2);
      uVar17 = (uVar14 >> 2 | uVar14 << 0x1e) +
               iVar12 + ((uVar5 ^ uVar9) & (uVar16 ^ uVar5) ^ uVar5);
      uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar30 = vpshufd_avx(auVar25 ^ auVar30 ^ auVar21,0x84);
      uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      auVar30 = vpsrldq_avx(auVar30,8);
      auVar21 = aesenc(*pauVar13 ^ auVar31 ^ auVar32,param_4[1]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
      auVar32._0_4_ = auVar26._0_4_ + auVar34._0_4_ + auVar22._0_4_ + auVar30._0_4_;
      auVar32._4_4_ = auVar26._4_4_ + auVar34._4_4_ + auVar22._4_4_ + auVar30._4_4_;
      auVar32._8_4_ = auVar26._8_4_ + auVar34._8_4_ + auVar22._8_4_ + auVar30._8_4_;
      auVar32._12_4_ = auVar26._12_4_ + auVar34._12_4_ + auVar22._12_4_ + auVar30._12_4_;
      auVar31 = vpshufd_avx(auVar32,0x50);
      auVar26 = vpsrld_avx(auVar31,10);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
      iVar12 = uVar18 + iStack_178 + ((uVar7 ^ uVar19) & uVar6 ^ uVar19) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar9 = uVar9 + iVar12;
      uVar18 = (uVar14 >> 2 | uVar14 << 0x1e) +
               iVar12 + ((uVar16 ^ uVar5) & (uVar17 ^ uVar16) ^ uVar16);
      auVar30 = vpsrlq_avx(auVar31,2);
      uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar31 = vpshufd_avx(auVar26 ^ auVar31 ^ auVar30,0xe8);
      uVar14 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar31 = vpslldq_avx(auVar31,8);
      auVar34 = aesenc(auVar21,param_4[2]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
      iVar12 = uVar19 + iStack_174;
      auVar26._0_4_ = auVar32._0_4_ + auVar31._0_4_;
      auVar26._4_4_ = auVar32._4_4_ + auVar31._4_4_;
      auVar26._8_4_ = auVar32._8_4_ + auVar31._8_4_;
      auVar26._12_4_ = auVar32._12_4_ + auVar31._12_4_;
      local_180 = auVar26._0_4_ + piVar10[0x20];
      iStack_17c = auVar26._4_4_ + piVar10[0x21];
      iStack_178 = auVar26._8_4_ + piVar10[0x22];
      iStack_174 = auVar26._12_4_ + piVar10[0x23];
      uVar19 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar18;
      iVar12 = iVar12 + ((uVar6 ^ uVar7) & uVar9 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a);
      uVar5 = uVar5 + iVar12;
      uVar19 = (uVar19 >> 2 | uVar19 << 0x1e) +
               iVar12 + ((uVar17 ^ uVar16) & (uVar18 ^ uVar17) ^ uVar17);
      auVar32 = vpalignr_avx(auVar33,auVar27,4);
      auVar30 = vpalignr_avx(auVar26,auVar28,4);
      uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar14 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar23 = aesenc(auVar34,param_4[3]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
      auVar24 = vpsrld_avx(auVar32,3);
      auVar31 = vpslld_avx(auVar32,0xe);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar19;
      iVar12 = uVar7 + local_170 + ((uVar9 ^ uVar6) & uVar5 ^ uVar6) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar32 = vpshufd_avx(auVar26,0xfa);
      uVar16 = uVar16 + iVar12;
      auVar21 = vpsrld_avx(auVar22,0xb);
      uVar7 = (uVar14 >> 2 | uVar14 << 0x1e) +
              iVar12 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
      auVar34 = vpslld_avx(auVar31,0xb);
      uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar25 = aesenc(auVar23,param_4[4]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
      auVar23 = vpsrld_avx(auVar32,10);
      auVar34 = auVar24 ^ auVar22 ^ auVar31 ^ auVar21 ^ auVar34;
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
      iVar12 = uVar6 + iStack_16c + ((uVar5 ^ uVar9) & uVar16 ^ uVar9) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      uVar17 = uVar17 + iVar12;
      auVar31 = vpsrlq_avx(auVar32,2);
      uVar6 = (uVar14 >> 2 | uVar14 << 0x1e) +
              iVar12 + ((uVar19 ^ uVar18) & (uVar7 ^ uVar19) ^ uVar19);
      uVar11 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar32 = vpshufd_avx(auVar23 ^ auVar32 ^ auVar31,0x84);
      uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar25,param_4[5]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar17;
      auVar31._0_4_ = auVar27._0_4_ + auVar30._0_4_ + auVar34._0_4_ + auVar32._0_4_;
      auVar31._4_4_ = auVar27._4_4_ + auVar30._4_4_ + auVar34._4_4_ + auVar32._4_4_;
      auVar31._8_4_ = auVar27._8_4_ + auVar30._8_4_ + auVar34._8_4_ + auVar32._8_4_;
      auVar31._12_4_ = auVar27._12_4_ + auVar30._12_4_ + auVar34._12_4_ + auVar32._12_4_;
      auVar32 = vpshufd_avx(auVar31,0x50);
      auVar27 = vpsrld_avx(auVar32,10);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
      iVar12 = uVar9 + iStack_168 + ((uVar16 ^ uVar5) & uVar17 ^ uVar5) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar18 = uVar18 + iVar12;
      uVar9 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar7 ^ uVar19) & (uVar6 ^ uVar7) ^ uVar7)
      ;
      auVar30 = vpsrlq_avx(auVar32,2);
      uVar11 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar32 = vpshufd_avx(auVar27 ^ auVar32 ^ auVar30,0xe8);
      uVar14 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar30 = aesenc(auVar22,param_4[6]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar18;
      iVar12 = uVar5 + iStack_164;
      auVar27._0_4_ = auVar31._0_4_ + auVar32._0_4_;
      auVar27._4_4_ = auVar31._4_4_ + auVar32._4_4_;
      auVar27._8_4_ = auVar31._8_4_ + auVar32._8_4_;
      auVar27._12_4_ = auVar31._12_4_ + auVar32._12_4_;
      local_170 = auVar27._0_4_ + piVar10[0x28];
      iStack_16c = auVar27._4_4_ + piVar10[0x29];
      iStack_168 = auVar27._8_4_ + piVar10[0x2a];
      iStack_164 = auVar27._12_4_ + piVar10[0x2b];
      uVar5 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar9;
      iVar12 = iVar12 + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) + (uVar11 >> 6 | uVar11 << 0x1a);
      uVar19 = uVar19 + iVar12;
      uVar5 = (uVar5 >> 2 | uVar5 << 0x1e) + iVar12 + ((uVar6 ^ uVar7) & (uVar9 ^ uVar6) ^ uVar6);
      auVar32 = vpalignr_avx(auVar28,auVar33,4);
      auVar31 = vpalignr_avx(auVar27,auVar26,4);
      uVar11 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar22 = vpsrld_avx(auVar32,7);
      uVar14 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      auVar23 = aesenc(auVar30,param_4[7]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar19;
      auVar24 = vpsrld_avx(auVar32,3);
      auVar30 = vpslld_avx(auVar32,0xe);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar5;
      iVar12 = uVar16 + local_160 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar32 = vpshufd_avx(auVar27,0xfa);
      uVar7 = uVar7 + iVar12;
      auVar21 = vpsrld_avx(auVar22,0xb);
      uVar16 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar9 ^ uVar6) & (uVar5 ^ uVar9) ^ uVar9)
      ;
      uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
      auVar34 = vpslld_avx(auVar30,0xb);
      uVar14 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
      auVar25 = aesenc(auVar23,param_4[8]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
      auVar23 = vpsrld_avx(auVar32,10);
      auVar34 = auVar24 ^ auVar22 ^ auVar30 ^ auVar21 ^ auVar34;
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar16;
      iVar12 = uVar17 + iStack_15c + ((uVar19 ^ uVar18) & uVar7 ^ uVar18) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      uVar6 = uVar6 + iVar12;
      auVar30 = vpsrlq_avx(auVar32,2);
      uVar17 = (uVar14 >> 2 | uVar14 << 0x1e) +
               iVar12 + ((uVar5 ^ uVar9) & (uVar16 ^ uVar5) ^ uVar5);
      uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar32 = vpshufd_avx(auVar23 ^ auVar32 ^ auVar30,0x84);
      uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      auVar32 = vpsrldq_avx(auVar32,8);
      auVar22 = aesenc(auVar25,param_4[9]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
      auVar30._0_4_ = auVar33._0_4_ + auVar31._0_4_ + auVar34._0_4_ + auVar32._0_4_;
      auVar30._4_4_ = auVar33._4_4_ + auVar31._4_4_ + auVar34._4_4_ + auVar32._4_4_;
      auVar30._8_4_ = auVar33._8_4_ + auVar31._8_4_ + auVar34._8_4_ + auVar32._8_4_;
      auVar30._12_4_ = auVar33._12_4_ + auVar31._12_4_ + auVar34._12_4_ + auVar32._12_4_;
      auVar32 = vpshufd_avx(auVar30,0x50);
      auVar31 = vpsrld_avx(auVar32,10);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
      iVar12 = uVar18 + iStack_158 + ((uVar7 ^ uVar19) & uVar6 ^ uVar19) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar9 = uVar9 + iVar12;
      uVar18 = (uVar14 >> 2 | uVar14 << 0x1e) +
               iVar12 + ((uVar16 ^ uVar5) & (uVar17 ^ uVar16) ^ uVar16);
      auVar33 = vpsrlq_avx(auVar32,2);
      uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar32 = vpshufd_avx(auVar31 ^ auVar32 ^ auVar33,0xe8);
      uVar14 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      auVar32 = vpslldq_avx(auVar32,8);
      auVar23 = aesenclast(auVar22,param_4[10]);
      auVar34 = aesenc(auVar22,param_4[10]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
      iVar12 = uVar19 + iStack_154;
      auVar33._0_4_ = auVar30._0_4_ + auVar32._0_4_;
      auVar33._4_4_ = auVar30._4_4_ + auVar32._4_4_;
      auVar33._8_4_ = auVar30._8_4_ + auVar32._8_4_;
      auVar33._12_4_ = auVar30._12_4_ + auVar32._12_4_;
      local_160 = auVar33._0_4_ + piVar10[0x30];
      iStack_15c = auVar33._4_4_ + piVar10[0x31];
      iStack_158 = auVar33._8_4_ + piVar10[0x32];
      iStack_154 = auVar33._12_4_ + piVar10[0x33];
      uVar19 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar18;
      iVar12 = iVar12 + ((uVar6 ^ uVar7) & uVar9 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a);
      uVar5 = uVar5 + iVar12;
      uVar19 = (uVar19 >> 2 | uVar19 << 0x1e) +
               iVar12 + ((uVar17 ^ uVar16) & (uVar18 ^ uVar17) ^ uVar17);
      auVar32 = vpalignr_avx(auVar26,auVar28,4);
      auVar31 = vpalignr_avx(auVar33,auVar27,4);
      uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      auVar21 = vpsrld_avx(auVar32,7);
      uVar14 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar30 = vpand_avx(auVar23,auVar4);
      auVar24 = aesenc(auVar34,param_4[0xb]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
      auVar25 = vpsrld_avx(auVar32,3);
      auVar34 = vpslld_avx(auVar32,0xe);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar19;
      iVar12 = uVar7 + local_150 + ((uVar9 ^ uVar6) & uVar5 ^ uVar6) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar32 = vpshufd_avx(auVar33,0xfa);
      uVar16 = uVar16 + iVar12;
      auVar23 = vpsrld_avx(auVar21,0xb);
      uVar7 = (uVar14 >> 2 | uVar14 << 0x1e) +
              iVar12 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
      uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
      auVar22 = vpslld_avx(auVar34,0xb);
      uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar35 = aesenclast(auVar24,param_4[0xc]);
      auVar29 = aesenc(auVar24,param_4[0xc]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
      auVar24 = vpsrld_avx(auVar32,10);
      auVar22 = auVar25 ^ auVar21 ^ auVar34 ^ auVar23 ^ auVar22;
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
      iVar12 = uVar6 + iStack_14c + ((uVar5 ^ uVar9) & uVar16 ^ uVar9) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      uVar17 = uVar17 + iVar12;
      auVar34 = vpsrlq_avx(auVar32,2);
      uVar6 = (uVar14 >> 2 | uVar14 << 0x1e) +
              iVar12 + ((uVar19 ^ uVar18) & (uVar7 ^ uVar19) ^ uVar19);
      uVar11 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar32 = vpshufd_avx(auVar24 ^ auVar32 ^ auVar34,0x84);
      uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar21 = vpsrldq_avx(auVar32,8);
      auVar32 = vpand_avx(auVar35,auVar3);
      auVar23 = aesenc(auVar29,param_4[0xd]);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar17;
      auVar34._0_4_ = auVar28._0_4_ + auVar31._0_4_ + auVar22._0_4_ + auVar21._0_4_;
      auVar34._4_4_ = auVar28._4_4_ + auVar31._4_4_ + auVar22._4_4_ + auVar21._4_4_;
      auVar34._8_4_ = auVar28._8_4_ + auVar31._8_4_ + auVar22._8_4_ + auVar21._8_4_;
      auVar34._12_4_ = auVar28._12_4_ + auVar31._12_4_ + auVar22._12_4_ + auVar21._12_4_;
      auVar31 = vpshufd_avx(auVar34,0x50);
      auVar28 = vpsrld_avx(auVar31,10);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
      iVar12 = uVar9 + iStack_148 + ((uVar16 ^ uVar5) & uVar17 ^ uVar5) +
               (uVar11 >> 6 | uVar11 << 0x1a);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar18 = uVar18 + iVar12;
      uVar9 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar7 ^ uVar19) & (uVar6 ^ uVar7) ^ uVar7)
      ;
      auVar22 = vpsrlq_avx(auVar31,2);
      uVar11 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar31 = vpshufd_avx(auVar28 ^ auVar31 ^ auVar22,0xe8);
      uVar15 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      auVar22 = vpslldq_avx(auVar31,8);
      auVar30 = vpor_avx(auVar30,auVar32);
      auVar32 = aesenclast(auVar23,param_4[0xe]);
      auVar31 = *param_4;
      uVar14 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar18;
      iVar12 = uVar5 + iStack_144;
      auVar28._0_4_ = auVar34._0_4_ + auVar22._0_4_;
      auVar28._4_4_ = auVar34._4_4_ + auVar22._4_4_;
      auVar28._8_4_ = auVar34._8_4_ + auVar22._8_4_;
      auVar28._12_4_ = auVar34._12_4_ + auVar22._12_4_;
      uVar11 = uVar9 ^ uVar6;
      local_150 = auVar28._0_4_ + piVar10[0x38];
      iStack_14c = auVar28._4_4_ + piVar10[0x39];
      iStack_148 = auVar28._8_4_ + piVar10[0x3a];
      iStack_144 = auVar28._12_4_ + piVar10[0x3b];
      uVar5 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar9;
      iVar12 = iVar12 + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) + (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar12;
      uVar5 = (uVar5 >> 2 | uVar5 << 0x1e) + iVar12 + ((uVar6 ^ uVar7) & uVar11 ^ uVar6);
      auVar32 = vpand_avx(auVar32,auVar2);
      auVar32 = vpor_avx(auVar30,auVar32);
      *(undefined1 (*) [16])(param_2 + (longlong)pauVar13) = auVar32;
      param_1 = pauVar13 + 1;
      pcVar1 = (char *)((longlong)piVar10 + 0x103);
      piVar10 = piVar10 + 0x20;
    } while (*pcVar1 != '\0');
    uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar15 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar5;
    iVar12 = uVar16 + local_180 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar7 = uVar7 + iVar12;
    uVar16 = (uVar15 >> 2 | uVar15 << 0x1e) + iVar12 + (uVar11 & (uVar5 ^ uVar9) ^ uVar9);
    uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar14 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar16;
    iVar12 = uVar17 + iStack_17c + ((uVar19 ^ uVar18) & uVar7 ^ uVar18) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar6 = uVar6 + iVar12;
    uVar17 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar5 ^ uVar9) & (uVar16 ^ uVar5) ^ uVar5);
    uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    auVar32 = aesenc(*param_1 ^ auVar31 ^ auVar32,param_4[1]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
    iVar12 = uVar18 + iStack_178 + ((uVar7 ^ uVar19) & uVar6 ^ uVar19) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar9 = uVar9 + iVar12;
    uVar18 = (uVar14 >> 2 | uVar14 << 0x1e) +
             iVar12 + ((uVar16 ^ uVar5) & (uVar17 ^ uVar16) ^ uVar16);
    uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar14 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar32 = aesenc(auVar32,param_4[2]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar18;
    iVar12 = uVar19 + iStack_174 + ((uVar6 ^ uVar7) & uVar9 ^ uVar7) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar5 = uVar5 + iVar12;
    uVar19 = (uVar14 >> 2 | uVar14 << 0x1e) +
             iVar12 + ((uVar17 ^ uVar16) & (uVar18 ^ uVar17) ^ uVar17);
    uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar14 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    auVar32 = aesenc(auVar32,param_4[3]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar19;
    iVar12 = uVar7 + local_170 + ((uVar9 ^ uVar6) & uVar5 ^ uVar6) + (uVar11 >> 6 | uVar11 << 0x1a);
    uVar16 = uVar16 + iVar12;
    uVar7 = (uVar14 >> 2 | uVar14 << 0x1e) +
            iVar12 + ((uVar18 ^ uVar17) & (uVar19 ^ uVar18) ^ uVar18);
    uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar32 = aesenc(auVar32,param_4[4]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
    iVar12 = uVar6 + iStack_16c + ((uVar5 ^ uVar9) & uVar16 ^ uVar9) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar17 = uVar17 + iVar12;
    uVar6 = (uVar14 >> 2 | uVar14 << 0x1e) +
            iVar12 + ((uVar19 ^ uVar18) & (uVar7 ^ uVar19) ^ uVar19);
    uVar11 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    auVar32 = aesenc(auVar32,param_4[5]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar17;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
    iVar12 = uVar9 + iStack_168 + ((uVar16 ^ uVar5) & uVar17 ^ uVar5) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar18 = uVar18 + iVar12;
    uVar9 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar7 ^ uVar19) & (uVar6 ^ uVar7) ^ uVar7);
    uVar11 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar14 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    auVar32 = aesenc(auVar32,param_4[6]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar18;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar9;
    iVar12 = uVar5 + iStack_164 + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar19 = uVar19 + iVar12;
    uVar5 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar6 ^ uVar7) & (uVar9 ^ uVar6) ^ uVar6);
    uVar11 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar14 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    auVar32 = aesenc(auVar32,param_4[7]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar19;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar5;
    iVar12 = uVar16 + local_160 + ((uVar18 ^ uVar17) & uVar19 ^ uVar17) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar7 = uVar7 + iVar12;
    uVar16 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar9 ^ uVar6) & (uVar5 ^ uVar9) ^ uVar9);
    uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar14 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    auVar32 = aesenc(auVar32,param_4[8]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar16;
    iVar12 = uVar17 + iStack_15c + ((uVar19 ^ uVar18) & uVar7 ^ uVar18) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar6 = uVar6 + iVar12;
    uVar17 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar5 ^ uVar9) & (uVar16 ^ uVar5) ^ uVar5);
    uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    auVar32 = aesenc(auVar32,param_4[9]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
    iVar12 = uVar18 + iStack_158 + ((uVar7 ^ uVar19) & uVar6 ^ uVar19) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar9 = uVar9 + iVar12;
    uVar18 = (uVar14 >> 2 | uVar14 << 0x1e) +
             iVar12 + ((uVar16 ^ uVar5) & (uVar17 ^ uVar16) ^ uVar16);
    uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar14 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    auVar26 = aesenclast(auVar32,param_4[10]);
    auVar31 = aesenc(auVar32,param_4[10]);
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar18;
    iVar12 = uVar19 + iStack_154 + ((uVar6 ^ uVar7) & uVar9 ^ uVar7) +
             (uVar11 >> 6 | uVar11 << 0x1a);
    uVar5 = uVar5 + iVar12;
    uVar11 = (uVar14 >> 2 | uVar14 << 0x1e) +
             iVar12 + ((uVar17 ^ uVar16) & (uVar18 ^ uVar17) ^ uVar17);
    uVar19 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar14 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    auVar32 = vpand_avx(auVar26,auVar4);
    auVar31 = aesenc(auVar31,param_4[0xb]);
    uVar19 = (uVar19 >> 5 | uVar19 << 0x1b) ^ uVar5;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar11;
    iVar12 = uVar7 + local_150 + ((uVar9 ^ uVar6) & uVar5 ^ uVar6) + (uVar19 >> 6 | uVar19 << 0x1a);
    uVar16 = uVar16 + iVar12;
    uVar7 = (uVar14 >> 2 | uVar14 << 0x1e) +
            iVar12 + ((uVar18 ^ uVar17) & (uVar11 ^ uVar18) ^ uVar18);
    uVar19 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    auVar27 = aesenclast(auVar31,param_4[0xc]);
    auVar26 = aesenc(auVar31,param_4[0xc]);
    uVar19 = (uVar19 >> 5 | uVar19 << 0x1b) ^ uVar16;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
    iVar12 = uVar6 + iStack_14c + ((uVar5 ^ uVar9) & uVar16 ^ uVar9) +
             (uVar19 >> 6 | uVar19 << 0x1a);
    uVar17 = uVar17 + iVar12;
    uVar6 = (uVar14 >> 2 | uVar14 << 0x1e) +
            iVar12 + ((uVar11 ^ uVar18) & (uVar7 ^ uVar11) ^ uVar11);
    uVar19 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    auVar31 = vpand_avx(auVar27,auVar3);
    auVar27 = aesenc(auVar26,param_4[0xd]);
    uVar19 = (uVar19 >> 5 | uVar19 << 0x1b) ^ uVar17;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
    iVar12 = uVar9 + iStack_148 + ((uVar16 ^ uVar5) & uVar17 ^ uVar5) +
             (uVar19 >> 6 | uVar19 << 0x1a);
    uVar18 = uVar18 + iVar12;
    uVar9 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar7 ^ uVar11) & (uVar6 ^ uVar7) ^ uVar7);
    uVar19 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar14 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    auVar26 = vpor_avx(auVar32,auVar31);
    auVar32 = aesenclast(auVar27,param_4[0xe]);
    auVar31 = *param_4;
    uVar19 = (uVar19 >> 5 | uVar19 << 0x1b) ^ uVar18;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar9;
    iVar12 = uVar5 + iStack_144 + ((uVar17 ^ uVar16) & uVar18 ^ uVar16) +
             (uVar19 >> 6 | uVar19 << 0x1a);
    auVar32 = vpand_avx(auVar32,auVar2);
    auVar32 = vpor_avx(auVar26,auVar32);
    *(undefined1 (*) [16])((longlong)param_1 + param_2) = auVar32;
    param_1 = pauVar13 + 2;
    uVar5 = (uVar14 >> 2 | uVar14 << 0x1e) + iVar12 + ((uVar6 ^ uVar7) & (uVar9 ^ uVar6) ^ uVar6) +
            *param_6;
    uVar9 = uVar9 + param_6[1];
    uVar6 = uVar6 + param_6[2];
    uVar7 = uVar7 + param_6[3];
    uVar19 = uVar11 + iVar12 + param_6[4];
    uVar18 = uVar18 + param_6[5];
    uVar17 = uVar17 + param_6[6];
    uVar16 = uVar16 + param_6[7];
    *param_6 = uVar5;
    param_6[1] = uVar9;
    param_6[2] = uVar6;
    param_6[3] = uVar7;
    param_6[4] = uVar19;
    param_6[5] = uVar18;
    param_6[6] = uVar17;
    param_6[7] = uVar16;
  } while (param_1 < pauVar8);
  *param_5 = auVar32;
  return;
}

// L$SEH_begin_aesni_cbc_sha256_enc_avx2 @ 140e109cd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_cbc_sha256_enc_avx2
               (longlong param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [16],
               undefined1 (*param_5) [16],int *param_6,longlong param_7)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  undefined1 (*pauVar42) [16];
  uint uVar43;
  ulonglong uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  int *piVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined1 (*pauVar53) [16];
  undefined1 (*pauVar54) [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar67 [64];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar71 [64];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar72 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auStack_310 [736];
  
  uVar44 = (ulonglong)auStack_310 & 0xfffffffffffffc00;
  pauVar45 = (undefined1 (*) [16])(uVar44 + 0x1c0);
  param_2 = param_2 - param_1;
  param_7 = param_7 - param_1;
  pauVar42 = (undefined1 (*) [16])(param_3 * 0x40 + param_1);
  *(undefined1 (**) [16])(uVar44 + 0x210) = pauVar42;
  *(undefined1 (**) [16])(uVar44 + 0x220) = param_5;
  *(int **)(uVar44 + 0x228) = param_6;
  *(longlong *)(uVar44 + 0x230) = param_7;
  *(BADSPACEBASE **)(uVar44 + 0x238) = register0x00000020;
  *(undefined8 *)(uVar44 + 0x240) = unaff_XMM6_Qa;
  *(undefined8 *)(uVar44 + 0x248) = unaff_XMM6_Qb;
  *(undefined8 *)(uVar44 + 0x250) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar44 + 600) = unaff_XMM7_Qb;
  *(undefined8 *)(uVar44 + 0x260) = unaff_XMM8_Qa;
  *(undefined8 *)(uVar44 + 0x268) = unaff_XMM8_Qb;
  *(undefined8 *)(uVar44 + 0x270) = unaff_XMM9_Qa;
  *(undefined8 *)(uVar44 + 0x278) = unaff_XMM9_Qb;
  *(undefined8 *)(uVar44 + 0x280) = unaff_XMM10_Qa;
  *(undefined8 *)(uVar44 + 0x288) = unaff_XMM10_Qb;
  *(undefined8 *)(uVar44 + 0x290) = unaff_XMM11_Qa;
  *(undefined8 *)(uVar44 + 0x298) = unaff_XMM11_Qb;
  *(undefined8 *)(uVar44 + 0x2a0) = unaff_XMM12_Qa;
  *(undefined8 *)(uVar44 + 0x2a8) = unaff_XMM12_Qb;
  *(undefined8 *)(uVar44 + 0x2b0) = unaff_XMM13_Qa;
  *(undefined8 *)(uVar44 + 0x2b8) = unaff_XMM13_Qb;
  *(undefined8 *)(uVar44 + 0x2c0) = unaff_XMM14_Qa;
  *(undefined8 *)(uVar44 + 0x2c8) = unaff_XMM14_Qb;
  *(undefined8 *)(uVar44 + 0x2d0) = unaff_XMM15_Qa;
  *(undefined8 *)(uVar44 + 0x2d8) = unaff_XMM15_Qb;
  pauVar3 = param_4 + 8;
  auVar67 = ZEXT1664(*param_5);
  lVar1 = (ulonglong)*(uint *)param_4[0xf] - 9;
  auVar4 = *(undefined1 (*) [16])(&DAT_140e0e5e0 + lVar1 * 8);
  auVar5 = *(undefined1 (*) [16])(&DAT_140e0e5f0 + lVar1 * 8);
  auVar6 = *(undefined1 (*) [16])(&DAT_140e0e600 + lVar1 * 8);
  pauVar54 = (undefined1 (*) [16])(param_1 + 0x40);
  iVar38 = *param_6;
  uVar43 = param_6[1];
  uVar40 = param_6[2];
  pauVar53 = (undefined1 (*) [16])(param_7 + (longlong)pauVar54);
  if (pauVar54 == pauVar42) {
    pauVar53 = (undefined1 (*) [16])(uVar44 + 0x1c0);
  }
  uVar41 = param_6[3];
  uVar49 = param_6[4];
  uVar50 = param_6[5];
  uVar51 = param_6[6];
  uVar52 = param_6[7];
  auVar71 = ZEXT1664(*param_4);
  do {
    auVar61._16_16_ = ZEXT116(1) * *pauVar53;
    auVar61._0_16_ =
         ZEXT116(0) * *pauVar53 | ZEXT116(1) * *(undefined1 (*) [16])(pauVar54[-4] + param_7);
    auVar63._16_16_ = ZEXT116(1) * pauVar53[1];
    auVar63._0_16_ =
         ZEXT116(0) * pauVar53[1] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar54[-3] + param_7);
    auVar62 = vpshufb_avx2(auVar61,_DAT_140e0e5c0);
    auVar56._16_16_ = ZEXT116(1) * pauVar53[2];
    auVar56._0_16_ =
         ZEXT116(0) * pauVar53[2] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar54[-2] + param_7);
    auVar64 = vpshufb_avx2(auVar63,_DAT_140e0e5c0);
    auVar55._16_16_ = ZEXT116(1) * pauVar53[3];
    auVar55._0_16_ =
         ZEXT116(0) * pauVar53[3] | ZEXT116(1) * *(undefined1 (*) [16])(pauVar54[-1] + param_7);
    auVar65 = vpshufb_avx2(auVar56,_DAT_140e0e5c0);
    iVar9 = auVar62._4_4_ + DAT_140e0e3c4;
    iVar13 = auVar62._8_4_ + DAT_140e0e3c8;
    iVar17 = auVar62._12_4_ + DAT_140e0e3cc;
    iVar21 = auVar62._16_4_ + DAT_140e0e3d0;
    iVar25 = auVar62._20_4_ + DAT_140e0e3d4;
    iVar29 = auVar62._24_4_ + DAT_140e0e3d8;
    iVar33 = auVar62._28_4_ + DAT_140e0e3dc;
    auVar66 = vpshufb_avx2(auVar55,_DAT_140e0e5c0);
    iVar39 = auVar64._0_4_ + DAT_140e0e3e0;
    iVar10 = auVar64._4_4_ + DAT_140e0e3e4;
    iVar14 = auVar64._8_4_ + DAT_140e0e3e8;
    iVar18 = auVar64._12_4_ + DAT_140e0e3ec;
    iVar22 = auVar64._16_4_ + DAT_140e0e3f0;
    iVar26 = auVar64._20_4_ + DAT_140e0e3f4;
    iVar30 = auVar64._24_4_ + DAT_140e0e3f8;
    iVar34 = auVar64._28_4_ + DAT_140e0e3fc;
    iVar7 = auVar65._0_4_ + DAT_140e0e400;
    iVar11 = auVar65._4_4_ + DAT_140e0e404;
    iVar15 = auVar65._8_4_ + DAT_140e0e408;
    iVar19 = auVar65._12_4_ + DAT_140e0e40c;
    iVar23 = auVar65._16_4_ + DAT_140e0e410;
    iVar27 = auVar65._20_4_ + DAT_140e0e414;
    iVar31 = auVar65._24_4_ + DAT_140e0e418;
    iVar35 = auVar65._28_4_ + DAT_140e0e41c;
    iVar8 = auVar66._0_4_ + DAT_140e0e420;
    iVar12 = auVar66._4_4_ + DAT_140e0e424;
    iVar16 = auVar66._8_4_ + DAT_140e0e428;
    iVar20 = auVar66._12_4_ + DAT_140e0e42c;
    iVar24 = auVar66._16_4_ + DAT_140e0e430;
    iVar28 = auVar66._20_4_ + DAT_140e0e434;
    iVar32 = auVar66._24_4_ + DAT_140e0e438;
    iVar36 = auVar66._28_4_ + DAT_140e0e43c;
    *(int *)*pauVar45 = auVar62._0_4_ + K256;
    *(int *)(*pauVar45 + 4) = iVar9;
    *(int *)(*pauVar45 + 8) = iVar13;
    *(int *)(*pauVar45 + 0xc) = iVar17;
    *(int *)pauVar45[1] = iVar21;
    *(int *)(pauVar45[1] + 4) = iVar25;
    *(int *)(pauVar45[1] + 8) = iVar29;
    *(int *)(pauVar45[1] + 0xc) = iVar33;
    uVar37 = 0;
    *(int *)pauVar45[2] = iVar39;
    *(int *)(pauVar45[2] + 4) = iVar10;
    *(int *)(pauVar45[2] + 8) = iVar14;
    *(int *)(pauVar45[2] + 0xc) = iVar18;
    *(int *)pauVar45[3] = iVar22;
    *(int *)(pauVar45[3] + 4) = iVar26;
    *(int *)(pauVar45[3] + 8) = iVar30;
    *(int *)(pauVar45[3] + 0xc) = iVar34;
    *(int *)pauVar45[-4] = iVar7;
    *(int *)(pauVar45[-4] + 4) = iVar11;
    *(int *)(pauVar45[-4] + 8) = iVar15;
    *(int *)(pauVar45[-4] + 0xc) = iVar19;
    *(int *)pauVar45[-3] = iVar23;
    *(int *)(pauVar45[-3] + 4) = iVar27;
    *(int *)(pauVar45[-3] + 8) = iVar31;
    *(int *)(pauVar45[-3] + 0xc) = iVar35;
    uVar48 = uVar43 ^ uVar40;
    *(int *)pauVar45[-2] = iVar8;
    *(int *)(pauVar45[-2] + 4) = iVar12;
    *(int *)(pauVar45[-2] + 8) = iVar16;
    *(int *)(pauVar45[-2] + 0xc) = iVar20;
    *(int *)pauVar45[-1] = iVar24;
    *(int *)(pauVar45[-1] + 4) = iVar28;
    *(int *)(pauVar45[-1] + 8) = iVar32;
    *(int *)(pauVar45[-1] + 0xc) = iVar36;
    pauVar45 = pauVar45 + -4;
    piVar47 = &DAT_140e0e440;
    pauVar54 = pauVar54 + -4;
    do {
      pauVar53 = pauVar54;
      pauVar46 = pauVar45;
      auVar61 = vpalignr_avx2(auVar64,auVar62,4);
      auVar63 = vpalignr_avx2(auVar66,auVar65,4);
      uVar37 = iVar38 + uVar37;
      auVar57 = vpsrld_avx2(auVar61,7);
      auVar60 = vpsrld_avx2(auVar61,3);
      iVar38 = uVar52 + *(int *)pauVar46[4] + (uVar50 & uVar49) + (~uVar49 & uVar51) +
               ((uVar49 >> 0x19 | uVar49 << 7) ^ (uVar49 >> 0xb | uVar49 << 0x15) ^
               (uVar49 >> 6 | uVar49 << 0x1a));
      auVar55 = vpslld_avx2(auVar61,0xe);
      uVar41 = uVar41 + iVar38;
      auVar61 = vpshufd_avx2(auVar66,0xfa);
      auVar58 = vpsrld_avx2(auVar57,0xb);
      uVar52 = iVar38 + (uVar48 & (uVar37 ^ uVar43) ^ uVar43) +
               ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
               (uVar37 >> 2 | uVar37 * 0x40000000));
      auVar56 = vpslld_avx2(auVar55,0xb);
      auVar59 = vpsrld_avx2(auVar61,10);
      iVar38 = uVar51 + *(int *)(pauVar46[4] + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
               ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
               (uVar41 >> 6 | uVar41 * 0x4000000));
      auVar56 = auVar60 ^ auVar57 ^ auVar55 ^ auVar58 ^ auVar56;
      uVar40 = uVar40 + iVar38;
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar55 = vpsrlq_avx2(auVar61,2);
      uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
               ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
               (uVar52 >> 2 | uVar52 * 0x40000000));
      auVar61 = vpshufd_avx2(auVar59 ^ auVar61 ^ auVar55,0x84);
      auVar61 = vpsrldq_avx2(auVar61,8);
      iVar38 = uVar50 + *(int *)(pauVar46[4] + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      auVar57._0_4_ = auVar62._0_4_ + auVar63._0_4_ + auVar56._0_4_ + auVar61._0_4_;
      auVar57._4_4_ = auVar62._4_4_ + auVar63._4_4_ + auVar56._4_4_ + auVar61._4_4_;
      auVar57._8_4_ = auVar62._8_4_ + auVar63._8_4_ + auVar56._8_4_ + auVar61._8_4_;
      auVar57._12_4_ = auVar62._12_4_ + auVar63._12_4_ + auVar56._12_4_ + auVar61._12_4_;
      auVar57._16_4_ = auVar62._16_4_ + auVar63._16_4_ + auVar56._16_4_ + auVar61._16_4_;
      auVar57._20_4_ = auVar62._20_4_ + auVar63._20_4_ + auVar56._20_4_ + auVar61._20_4_;
      auVar57._24_4_ = auVar62._24_4_ + auVar63._24_4_ + auVar56._24_4_ + auVar61._24_4_;
      auVar57._28_4_ = auVar62._28_4_ + auVar63._28_4_ + auVar56._28_4_ + auVar61._28_4_;
      uVar43 = uVar43 + iVar38;
      auVar62 = vpshufd_avx2(auVar57,0x50);
      auVar68 = aesenc(*pauVar53 ^ auVar71._0_16_ ^ auVar67._0_16_,param_4[1]);
      auVar61 = vpsrld_avx2(auVar62,10);
      auVar62 = vpsrlq_avx2(auVar62,0x11);
      uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
               (uVar51 >> 2 | uVar51 * 0x40000000));
      auVar63 = vpsrlq_avx2(auVar62,2);
      auVar62 = vpshufd_avx2(auVar61 ^ auVar62 ^ auVar63,0xe8);
      iVar38 = uVar49 + *(int *)(pauVar46[4] + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
               ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
               (uVar43 >> 6 | uVar43 * 0x4000000));
      auVar61 = vpslldq_avx2(auVar62,8);
      uVar37 = uVar37 + iVar38;
      auVar62._0_4_ = auVar57._0_4_ + auVar61._0_4_;
      auVar62._4_4_ = auVar57._4_4_ + auVar61._4_4_;
      auVar62._8_4_ = auVar57._8_4_ + auVar61._8_4_;
      auVar62._12_4_ = auVar57._12_4_ + auVar61._12_4_;
      auVar62._16_4_ = auVar57._16_4_ + auVar61._16_4_;
      auVar62._20_4_ = auVar57._20_4_ + auVar61._20_4_;
      auVar62._24_4_ = auVar57._24_4_ + auVar61._24_4_;
      auVar62._28_4_ = auVar57._28_4_ + auVar61._28_4_;
      auVar69 = aesenc(auVar68,param_4[2]);
      auVar68 = param_4[3];
      iVar39 = piVar47[1];
      iVar7 = piVar47[2];
      iVar8 = piVar47[3];
      iVar9 = piVar47[4];
      iVar10 = piVar47[5];
      iVar11 = piVar47[6];
      iVar12 = piVar47[7];
      *(int *)pauVar46[-4] = auVar62._0_4_ + *piVar47;
      *(int *)(pauVar46[-4] + 4) = auVar62._4_4_ + iVar39;
      *(int *)(pauVar46[-4] + 8) = auVar62._8_4_ + iVar7;
      *(int *)(pauVar46[-4] + 0xc) = auVar62._12_4_ + iVar8;
      *(int *)pauVar46[-3] = auVar62._16_4_ + iVar9;
      *(int *)(pauVar46[-3] + 4) = auVar62._20_4_ + iVar10;
      *(int *)(pauVar46[-3] + 8) = auVar62._24_4_ + iVar11;
      *(int *)(pauVar46[-3] + 0xc) = auVar62._28_4_ + iVar12;
      auVar61 = vpalignr_avx2(auVar65,auVar64,4);
      auVar63 = vpalignr_avx2(auVar62,auVar66,4);
      uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar57 = vpsrld_avx2(auVar61,7);
      auVar60 = vpsrld_avx2(auVar61,3);
      iVar38 = uVar41 + *(int *)pauVar46[6] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
               ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
               (uVar37 >> 6 | uVar37 * 0x4000000));
      auVar55 = vpslld_avx2(auVar61,0xe);
      uVar52 = uVar52 + iVar38;
      auVar68 = aesenc(auVar69,auVar68);
      auVar61 = vpshufd_avx2(auVar62,0xfa);
      auVar58 = vpsrld_avx2(auVar57,0xb);
      uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar56 = vpslld_avx2(auVar55,0xb);
      auVar59 = vpsrld_avx2(auVar61,10);
      iVar38 = uVar40 + *(int *)(pauVar46[6] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
               ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
               (uVar52 >> 6 | uVar52 * 0x4000000));
      auVar56 = auVar60 ^ auVar57 ^ auVar55 ^ auVar58 ^ auVar56;
      uVar51 = uVar51 + iVar38;
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar68 = aesenc(auVar68,param_4[4]);
      auVar55 = vpsrlq_avx2(auVar61,2);
      uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
               ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
               (uVar41 >> 2 | uVar41 * 0x40000000));
      auVar61 = vpshufd_avx2(auVar59 ^ auVar61 ^ auVar55,0x84);
      auVar61 = vpsrldq_avx2(auVar61,8);
      iVar38 = uVar43 + *(int *)(pauVar46[6] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
               ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
               (uVar51 >> 6 | uVar51 * 0x4000000));
      auVar58._0_4_ = auVar64._0_4_ + auVar63._0_4_ + auVar56._0_4_ + auVar61._0_4_;
      auVar58._4_4_ = auVar64._4_4_ + auVar63._4_4_ + auVar56._4_4_ + auVar61._4_4_;
      auVar58._8_4_ = auVar64._8_4_ + auVar63._8_4_ + auVar56._8_4_ + auVar61._8_4_;
      auVar58._12_4_ = auVar64._12_4_ + auVar63._12_4_ + auVar56._12_4_ + auVar61._12_4_;
      auVar58._16_4_ = auVar64._16_4_ + auVar63._16_4_ + auVar56._16_4_ + auVar61._16_4_;
      auVar58._20_4_ = auVar64._20_4_ + auVar63._20_4_ + auVar56._20_4_ + auVar61._20_4_;
      auVar58._24_4_ = auVar64._24_4_ + auVar63._24_4_ + auVar56._24_4_ + auVar61._24_4_;
      auVar58._28_4_ = auVar64._28_4_ + auVar63._28_4_ + auVar56._28_4_ + auVar61._28_4_;
      uVar50 = uVar50 + iVar38;
      auVar64 = vpshufd_avx2(auVar58,0x50);
      auVar68 = aesenc(auVar68,param_4[5]);
      auVar61 = vpsrld_avx2(auVar64,10);
      auVar64 = vpsrlq_avx2(auVar64,0x11);
      uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      auVar63 = vpsrlq_avx2(auVar64,2);
      auVar64 = vpshufd_avx2(auVar61 ^ auVar64 ^ auVar63,0xe8);
      iVar38 = uVar37 + *(int *)(pauVar46[6] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar61 = vpslldq_avx2(auVar64,8);
      uVar49 = uVar49 + iVar38;
      auVar64._0_4_ = auVar58._0_4_ + auVar61._0_4_;
      auVar64._4_4_ = auVar58._4_4_ + auVar61._4_4_;
      auVar64._8_4_ = auVar58._8_4_ + auVar61._8_4_;
      auVar64._12_4_ = auVar58._12_4_ + auVar61._12_4_;
      auVar64._16_4_ = auVar58._16_4_ + auVar61._16_4_;
      auVar64._20_4_ = auVar58._20_4_ + auVar61._20_4_;
      auVar64._24_4_ = auVar58._24_4_ + auVar61._24_4_;
      auVar64._28_4_ = auVar58._28_4_ + auVar61._28_4_;
      auVar69 = aesenc(auVar68,param_4[6]);
      auVar68 = param_4[7];
      iVar39 = piVar47[9];
      iVar7 = piVar47[10];
      iVar8 = piVar47[0xb];
      iVar9 = piVar47[0xc];
      iVar10 = piVar47[0xd];
      iVar11 = piVar47[0xe];
      iVar12 = piVar47[0xf];
      *(int *)pauVar46[-2] = auVar64._0_4_ + piVar47[8];
      *(int *)(pauVar46[-2] + 4) = auVar64._4_4_ + iVar39;
      *(int *)(pauVar46[-2] + 8) = auVar64._8_4_ + iVar7;
      *(int *)(pauVar46[-2] + 0xc) = auVar64._12_4_ + iVar8;
      *(int *)pauVar46[-1] = auVar64._16_4_ + iVar9;
      *(int *)(pauVar46[-1] + 4) = auVar64._20_4_ + iVar10;
      *(int *)(pauVar46[-1] + 8) = auVar64._24_4_ + iVar11;
      *(int *)(pauVar46[-1] + 0xc) = auVar64._28_4_ + iVar12;
      pauVar45 = pauVar46 + -8;
      auVar61 = vpalignr_avx2(auVar66,auVar65,4);
      auVar63 = vpalignr_avx2(auVar64,auVar62,4);
      uVar37 = iVar38 + ((uVar40 ^ uVar41) & (uVar43 ^ uVar40) ^ uVar40) +
               ((uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
               (uVar43 >> 2 | uVar43 * 0x40000000));
      auVar57 = vpsrld_avx2(auVar61,7);
      auVar60 = vpsrld_avx2(auVar61,3);
      iVar38 = uVar52 + *(int *)*pauVar46 + (uVar50 & uVar49) + (~uVar49 & uVar51) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar55 = vpslld_avx2(auVar61,0xe);
      uVar41 = uVar41 + iVar38;
      auVar68 = aesenc(auVar69,auVar68);
      auVar61 = vpshufd_avx2(auVar64,0xfa);
      auVar58 = vpsrld_avx2(auVar57,0xb);
      uVar52 = iVar38 + ((uVar43 ^ uVar40) & (uVar37 ^ uVar43) ^ uVar43) +
               ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
               (uVar37 >> 2 | uVar37 * 0x40000000));
      auVar56 = vpslld_avx2(auVar55,0xb);
      auVar59 = vpsrld_avx2(auVar61,10);
      iVar38 = uVar51 + *(int *)(*pauVar46 + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
               ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
               (uVar41 >> 6 | uVar41 * 0x4000000));
      auVar56 = auVar60 ^ auVar57 ^ auVar55 ^ auVar58 ^ auVar56;
      uVar40 = uVar40 + iVar38;
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar68 = aesenc(auVar68,*pauVar3);
      auVar55 = vpsrlq_avx2(auVar61,2);
      uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
               ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
               (uVar52 >> 2 | uVar52 * 0x40000000));
      auVar61 = vpshufd_avx2(auVar59 ^ auVar61 ^ auVar55,0x84);
      auVar61 = vpsrldq_avx2(auVar61,8);
      iVar38 = uVar50 + *(int *)(*pauVar46 + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      auVar59._0_4_ = auVar65._0_4_ + auVar63._0_4_ + auVar56._0_4_ + auVar61._0_4_;
      auVar59._4_4_ = auVar65._4_4_ + auVar63._4_4_ + auVar56._4_4_ + auVar61._4_4_;
      auVar59._8_4_ = auVar65._8_4_ + auVar63._8_4_ + auVar56._8_4_ + auVar61._8_4_;
      auVar59._12_4_ = auVar65._12_4_ + auVar63._12_4_ + auVar56._12_4_ + auVar61._12_4_;
      auVar59._16_4_ = auVar65._16_4_ + auVar63._16_4_ + auVar56._16_4_ + auVar61._16_4_;
      auVar59._20_4_ = auVar65._20_4_ + auVar63._20_4_ + auVar56._20_4_ + auVar61._20_4_;
      auVar59._24_4_ = auVar65._24_4_ + auVar63._24_4_ + auVar56._24_4_ + auVar61._24_4_;
      auVar59._28_4_ = auVar65._28_4_ + auVar63._28_4_ + auVar56._28_4_ + auVar61._28_4_;
      uVar43 = uVar43 + iVar38;
      auVar65 = vpshufd_avx2(auVar59,0x50);
      auVar68 = aesenc(auVar68,param_4[9]);
      auVar61 = vpsrld_avx2(auVar65,10);
      auVar65 = vpsrlq_avx2(auVar65,0x11);
      uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
               (uVar51 >> 2 | uVar51 * 0x40000000));
      auVar63 = vpsrlq_avx2(auVar65,2);
      auVar65 = vpshufd_avx2(auVar61 ^ auVar65 ^ auVar63,0xe8);
      iVar38 = uVar49 + *(int *)(*pauVar46 + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
               ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
               (uVar43 >> 6 | uVar43 * 0x4000000));
      auVar61 = vpslldq_avx2(auVar65,8);
      uVar37 = uVar37 + iVar38;
      auVar65._0_4_ = auVar59._0_4_ + auVar61._0_4_;
      auVar65._4_4_ = auVar59._4_4_ + auVar61._4_4_;
      auVar65._8_4_ = auVar59._8_4_ + auVar61._8_4_;
      auVar65._12_4_ = auVar59._12_4_ + auVar61._12_4_;
      auVar65._16_4_ = auVar59._16_4_ + auVar61._16_4_;
      auVar65._20_4_ = auVar59._20_4_ + auVar61._20_4_;
      auVar65._24_4_ = auVar59._24_4_ + auVar61._24_4_;
      auVar65._28_4_ = auVar59._28_4_ + auVar61._28_4_;
      auVar69 = aesenclast(auVar68,param_4[10]);
      auVar70 = aesenc(auVar68,param_4[10]);
      auVar68 = param_4[0xb];
      iVar39 = piVar47[0x11];
      iVar7 = piVar47[0x12];
      iVar8 = piVar47[0x13];
      iVar9 = piVar47[0x14];
      iVar10 = piVar47[0x15];
      iVar11 = piVar47[0x16];
      iVar12 = piVar47[0x17];
      *(int *)*pauVar45 = auVar65._0_4_ + piVar47[0x10];
      *(int *)(pauVar46[-8] + 4) = auVar65._4_4_ + iVar39;
      *(int *)(pauVar46[-8] + 8) = auVar65._8_4_ + iVar7;
      *(int *)(pauVar46[-8] + 0xc) = auVar65._12_4_ + iVar8;
      *(int *)pauVar46[-7] = auVar65._16_4_ + iVar9;
      *(int *)(pauVar46[-7] + 4) = auVar65._20_4_ + iVar10;
      *(int *)(pauVar46[-7] + 8) = auVar65._24_4_ + iVar11;
      *(int *)(pauVar46[-7] + 0xc) = auVar65._28_4_ + iVar12;
      auVar61 = vpalignr_avx2(auVar62,auVar66,4);
      auVar63 = vpalignr_avx2(auVar65,auVar64,4);
      uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar57 = vpsrld_avx2(auVar61,7);
      auVar60 = vpsrld_avx2(auVar61,3);
      iVar38 = uVar41 + *(int *)pauVar46[2] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
               ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
               (uVar37 >> 6 | uVar37 * 0x4000000));
      auVar55 = vpslld_avx2(auVar61,0xe);
      uVar52 = uVar52 + iVar38;
      auVar69 = vpand_avx(auVar69,auVar6);
      auVar68 = aesenc(auVar70,auVar68);
      auVar61 = vpshufd_avx2(auVar65,0xfa);
      auVar58 = vpsrld_avx2(auVar57,0xb);
      uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar56 = vpslld_avx2(auVar55,0xb);
      auVar59 = vpsrld_avx2(auVar61,10);
      iVar38 = uVar40 + *(int *)(pauVar46[2] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
               ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
               (uVar52 >> 6 | uVar52 * 0x4000000));
      auVar56 = auVar60 ^ auVar57 ^ auVar55 ^ auVar58 ^ auVar56;
      uVar51 = uVar51 + iVar38;
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar72 = aesenclast(auVar68,param_4[0xc]);
      auVar70 = aesenc(auVar68,param_4[0xc]);
      auVar55 = vpsrlq_avx2(auVar61,2);
      uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
               ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
               (uVar41 >> 2 | uVar41 * 0x40000000));
      auVar61 = vpshufd_avx2(auVar59 ^ auVar61 ^ auVar55,0x84);
      auVar61 = vpsrldq_avx2(auVar61,8);
      iVar38 = uVar43 + *(int *)(pauVar46[2] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
               ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
               (uVar51 >> 6 | uVar51 * 0x4000000));
      auVar60._0_4_ = auVar66._0_4_ + auVar63._0_4_ + auVar56._0_4_ + auVar61._0_4_;
      auVar60._4_4_ = auVar66._4_4_ + auVar63._4_4_ + auVar56._4_4_ + auVar61._4_4_;
      auVar60._8_4_ = auVar66._8_4_ + auVar63._8_4_ + auVar56._8_4_ + auVar61._8_4_;
      auVar60._12_4_ = auVar66._12_4_ + auVar63._12_4_ + auVar56._12_4_ + auVar61._12_4_;
      auVar60._16_4_ = auVar66._16_4_ + auVar63._16_4_ + auVar56._16_4_ + auVar61._16_4_;
      auVar60._20_4_ = auVar66._20_4_ + auVar63._20_4_ + auVar56._20_4_ + auVar61._20_4_;
      auVar60._24_4_ = auVar66._24_4_ + auVar63._24_4_ + auVar56._24_4_ + auVar61._24_4_;
      auVar60._28_4_ = auVar66._28_4_ + auVar63._28_4_ + auVar56._28_4_ + auVar61._28_4_;
      uVar50 = uVar50 + iVar38;
      auVar66 = vpshufd_avx2(auVar60,0x50);
      auVar68 = vpand_avx(auVar72,auVar5);
      auVar72 = aesenc(auVar70,param_4[0xd]);
      auVar61 = vpsrld_avx2(auVar66,10);
      auVar66 = vpsrlq_avx2(auVar66,0x11);
      uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      auVar63 = vpsrlq_avx2(auVar66,2);
      auVar66 = vpshufd_avx2(auVar61 ^ auVar66 ^ auVar63,0xe8);
      iVar38 = uVar37 + *(int *)(pauVar46[2] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar48 = uVar43 ^ uVar40;
      auVar61 = vpslldq_avx2(auVar66,8);
      uVar49 = uVar49 + iVar38;
      auVar66._0_4_ = auVar60._0_4_ + auVar61._0_4_;
      auVar66._4_4_ = auVar60._4_4_ + auVar61._4_4_;
      auVar66._8_4_ = auVar60._8_4_ + auVar61._8_4_;
      auVar66._12_4_ = auVar60._12_4_ + auVar61._12_4_;
      auVar66._16_4_ = auVar60._16_4_ + auVar61._16_4_;
      auVar66._20_4_ = auVar60._20_4_ + auVar61._20_4_;
      auVar66._24_4_ = auVar60._24_4_ + auVar61._24_4_;
      auVar66._28_4_ = auVar60._28_4_ + auVar61._28_4_;
      auVar70 = vpor_avx(auVar69,auVar68);
      auVar69 = aesenclast(auVar72,param_4[0xe]);
      auVar68 = *param_4;
      auVar71 = ZEXT1664(auVar68);
      iVar39 = piVar47[0x19];
      iVar7 = piVar47[0x1a];
      iVar8 = piVar47[0x1b];
      iVar9 = piVar47[0x1c];
      iVar10 = piVar47[0x1d];
      iVar11 = piVar47[0x1e];
      iVar12 = piVar47[0x1f];
      uVar37 = (uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
               (uVar43 >> 2 | uVar43 * 0x40000000);
      iVar38 = iVar38 + ((uVar40 ^ uVar41) & uVar48 ^ uVar40);
      *(int *)pauVar46[-6] = auVar66._0_4_ + piVar47[0x18];
      *(int *)(pauVar46[-6] + 4) = auVar66._4_4_ + iVar39;
      *(int *)(pauVar46[-6] + 8) = auVar66._8_4_ + iVar7;
      *(int *)(pauVar46[-6] + 0xc) = auVar66._12_4_ + iVar8;
      *(int *)pauVar46[-5] = auVar66._16_4_ + iVar9;
      *(int *)(pauVar46[-5] + 4) = auVar66._20_4_ + iVar10;
      *(int *)(pauVar46[-5] + 8) = auVar66._24_4_ + iVar11;
      *(int *)(pauVar46[-5] + 0xc) = auVar66._28_4_ + iVar12;
      auVar69 = vpand_avx(auVar69,auVar4);
      auVar69 = vpor_avx(auVar70,auVar69);
      auVar67 = ZEXT1664(auVar69);
      *(undefined1 (*) [16])(param_2 + (longlong)pauVar53) = auVar69;
      pauVar54 = pauVar53 + 1;
      pcVar2 = (char *)((longlong)piVar47 + 0x83);
      piVar47 = piVar47 + 0x20;
    } while (*pcVar2 != '\0');
    uVar37 = iVar38 + uVar37;
    iVar38 = uVar52 + *(int *)pauVar46[-4] + (uVar50 & uVar49) + (~uVar49 & uVar51) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar41 = uVar41 + iVar38;
    uVar52 = iVar38 + (uVar48 & (uVar37 ^ uVar43) ^ uVar43) +
             ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
             (uVar37 >> 2 | uVar37 * 0x40000000));
    iVar38 = uVar51 + *(int *)(pauVar46[-4] + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
             ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
             (uVar41 >> 6 | uVar41 * 0x4000000));
    uVar40 = uVar40 + iVar38;
    uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
             ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
             (uVar52 >> 2 | uVar52 * 0x40000000));
    iVar38 = uVar50 + *(int *)(pauVar46[-4] + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar43 = uVar43 + iVar38;
    auVar68 = aesenc(*pauVar54 ^ auVar68 ^ auVar69,param_4[1]);
    uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
             ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
             (uVar51 >> 2 | uVar51 * 0x40000000));
    iVar38 = uVar49 + *(int *)(pauVar46[-4] + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
             ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
             (uVar43 >> 6 | uVar43 * 0x4000000));
    uVar37 = uVar37 + iVar38;
    auVar68 = aesenc(auVar68,param_4[2]);
    uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar38 = uVar41 + *(int *)pauVar46[-2] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
             ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
             (uVar37 >> 6 | uVar37 * 0x4000000));
    uVar52 = uVar52 + iVar38;
    auVar68 = aesenc(auVar68,param_4[3]);
    uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar38 = uVar40 + *(int *)(pauVar46[-2] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
             ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
             (uVar52 >> 6 | uVar52 * 0x4000000));
    uVar51 = uVar51 + iVar38;
    auVar68 = aesenc(auVar68,param_4[4]);
    uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
             ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
             (uVar41 >> 2 | uVar41 * 0x40000000));
    iVar38 = uVar43 + *(int *)(pauVar46[-2] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
             ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
             (uVar51 >> 6 | uVar51 * 0x4000000));
    uVar50 = uVar50 + iVar38;
    auVar68 = aesenc(auVar68,param_4[5]);
    uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar38 = uVar37 + *(int *)(pauVar46[-2] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar49 = uVar49 + iVar38;
    auVar68 = aesenc(auVar68,param_4[6]);
    uVar37 = iVar38 + ((uVar40 ^ uVar41) & (uVar43 ^ uVar40) ^ uVar40) +
             ((uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
             (uVar43 >> 2 | uVar43 * 0x40000000));
    iVar38 = uVar52 + *(int *)*pauVar45 + (uVar50 & uVar49) + (~uVar49 & uVar51) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar41 = uVar41 + iVar38;
    auVar68 = aesenc(auVar68,param_4[7]);
    uVar52 = iVar38 + ((uVar43 ^ uVar40) & (uVar37 ^ uVar43) ^ uVar43) +
             ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
             (uVar37 >> 2 | uVar37 * 0x40000000));
    iVar38 = uVar51 + *(int *)(pauVar46[-8] + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
             ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
             (uVar41 >> 6 | uVar41 * 0x4000000));
    uVar40 = uVar40 + iVar38;
    auVar68 = aesenc(auVar68,*pauVar3);
    uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
             ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
             (uVar52 >> 2 | uVar52 * 0x40000000));
    iVar38 = uVar50 + *(int *)(pauVar46[-8] + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar43 = uVar43 + iVar38;
    auVar68 = aesenc(auVar68,param_4[9]);
    uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
             ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
             (uVar51 >> 2 | uVar51 * 0x40000000));
    iVar38 = uVar49 + *(int *)(pauVar46[-8] + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
             ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
             (uVar43 >> 6 | uVar43 * 0x4000000));
    uVar37 = uVar37 + iVar38;
    auVar70 = aesenclast(auVar68,param_4[10]);
    auVar69 = aesenc(auVar68,param_4[10]);
    uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar38 = uVar41 + *(int *)pauVar46[-6] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
             ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
             (uVar37 >> 6 | uVar37 * 0x4000000));
    uVar52 = uVar52 + iVar38;
    auVar68 = vpand_avx(auVar70,auVar6);
    auVar69 = aesenc(auVar69,param_4[0xb]);
    uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar38 = uVar40 + *(int *)(pauVar46[-6] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
             ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
             (uVar52 >> 6 | uVar52 * 0x4000000));
    uVar51 = uVar51 + iVar38;
    auVar72 = aesenclast(auVar69,param_4[0xc]);
    auVar70 = aesenc(auVar69,param_4[0xc]);
    uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
             ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
             (uVar41 >> 2 | uVar41 * 0x40000000));
    iVar38 = uVar43 + *(int *)(pauVar46[-6] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
             ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
             (uVar51 >> 6 | uVar51 * 0x4000000));
    uVar50 = uVar50 + iVar38;
    auVar69 = vpand_avx(auVar72,auVar5);
    auVar70 = aesenc(auVar70,param_4[0xd]);
    uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar38 = uVar37 + *(int *)(pauVar46[-6] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    auVar69 = vpor_avx(auVar68,auVar69);
    auVar68 = aesenclast(auVar70,param_4[0xe]);
    auVar71 = ZEXT1664(*param_4);
    piVar47 = *(int **)(pauVar46[0x1a] + 8);
    pauVar42 = pauVar46 + 0x14;
    auVar68 = vpand_avx(auVar68,auVar4);
    auVar68 = vpor_avx(auVar69,auVar68);
    auVar67 = ZEXT1664(auVar68);
    *(undefined1 (*) [16])(param_2 + (longlong)pauVar54) = auVar68;
    iVar39 = iVar38 + ((uVar40 ^ uVar41) & (uVar43 ^ uVar40) ^ uVar40) +
             ((uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
             (uVar43 >> 2 | uVar43 * 0x40000000)) + *piVar47;
    uVar43 = uVar43 + piVar47[1];
    uVar40 = uVar40 + piVar47[2];
    uVar41 = uVar41 + piVar47[3];
    uVar49 = uVar49 + iVar38 + piVar47[4];
    uVar50 = uVar50 + piVar47[5];
    uVar51 = uVar51 + piVar47[6];
    uVar52 = uVar52 + piVar47[7];
    *piVar47 = iVar39;
    piVar47[1] = uVar43;
    piVar47[2] = uVar40;
    piVar47[3] = uVar41;
    piVar47[4] = uVar49;
    piVar47[5] = uVar50;
    piVar47[6] = uVar51;
    piVar47[7] = uVar52;
    if (pauVar53 + 2 == *(undefined1 (**) [16])pauVar46[0x19]) break;
    uVar37 = 0;
    uVar48 = uVar43 ^ uVar40;
    pauVar53 = pauVar53 + 2;
    do {
      pauVar54 = pauVar53;
      uVar37 = iVar39 + uVar37;
      iVar38 = uVar52 + *(int *)pauVar42[1] + (uVar50 & uVar49) + (~uVar49 & uVar51) +
               ((uVar49 >> 0x19 | uVar49 << 7) ^ (uVar49 >> 0xb | uVar49 << 0x15) ^
               (uVar49 >> 6 | uVar49 << 0x1a));
      uVar41 = uVar41 + iVar38;
      uVar52 = iVar38 + (uVar48 & (uVar37 ^ uVar43) ^ uVar43) +
               ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
               (uVar37 >> 2 | uVar37 * 0x40000000));
      iVar38 = uVar51 + *(int *)(pauVar42[1] + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
               ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
               (uVar41 >> 6 | uVar41 * 0x4000000));
      uVar40 = uVar40 + iVar38;
      uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
               ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
               (uVar52 >> 2 | uVar52 * 0x40000000));
      iVar38 = uVar50 + *(int *)(pauVar42[1] + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      uVar43 = uVar43 + iVar38;
      auVar68 = aesenc(*pauVar54 ^ auVar71._0_16_ ^ auVar67._0_16_,param_4[1]);
      uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
               (uVar51 >> 2 | uVar51 * 0x40000000));
      iVar38 = uVar49 + *(int *)(pauVar42[1] + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
               ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
               (uVar43 >> 6 | uVar43 * 0x4000000));
      uVar37 = uVar37 + iVar38;
      auVar68 = aesenc(auVar68,param_4[2]);
      uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar38 = uVar41 + *(int *)pauVar42[3] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
               ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
               (uVar37 >> 6 | uVar37 * 0x4000000));
      uVar52 = uVar52 + iVar38;
      auVar68 = aesenc(auVar68,param_4[3]);
      uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar38 = uVar40 + *(int *)(pauVar42[3] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
               ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
               (uVar52 >> 6 | uVar52 * 0x4000000));
      uVar51 = uVar51 + iVar38;
      auVar68 = aesenc(auVar68,param_4[4]);
      uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
               ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
               (uVar41 >> 2 | uVar41 * 0x40000000));
      iVar38 = uVar43 + *(int *)(pauVar42[3] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
               ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
               (uVar51 >> 6 | uVar51 * 0x4000000));
      uVar50 = uVar50 + iVar38;
      auVar68 = aesenc(auVar68,param_4[5]);
      uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      iVar38 = uVar37 + *(int *)(pauVar42[3] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar49 = uVar49 + iVar38;
      auVar68 = aesenc(auVar68,param_4[6]);
      uVar37 = iVar38 + ((uVar40 ^ uVar41) & (uVar43 ^ uVar40) ^ uVar40) +
               ((uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
               (uVar43 >> 2 | uVar43 * 0x40000000));
      iVar38 = uVar52 + *(int *)pauVar42[-3] + (uVar50 & uVar49) + (~uVar49 & uVar51) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      uVar41 = uVar41 + iVar38;
      auVar68 = aesenc(auVar68,param_4[7]);
      uVar52 = iVar38 + ((uVar43 ^ uVar40) & (uVar37 ^ uVar43) ^ uVar43) +
               ((uVar37 >> 0xd | uVar37 * 0x80000) ^ (uVar37 >> 0x16 | uVar37 * 0x400) ^
               (uVar37 >> 2 | uVar37 * 0x40000000));
      iVar38 = uVar51 + *(int *)(pauVar42[-3] + 4) + (uVar49 & uVar41) + (~uVar41 & uVar50) +
               ((uVar41 >> 0x19 | uVar41 * 0x80) ^ (uVar41 >> 0xb | uVar41 * 0x200000) ^
               (uVar41 >> 6 | uVar41 * 0x4000000));
      uVar40 = uVar40 + iVar38;
      auVar68 = aesenc(auVar68,*pauVar3);
      uVar51 = iVar38 + ((uVar37 ^ uVar43) & (uVar52 ^ uVar37) ^ uVar37) +
               ((uVar52 >> 0xd | uVar52 * 0x80000) ^ (uVar52 >> 0x16 | uVar52 * 0x400) ^
               (uVar52 >> 2 | uVar52 * 0x40000000));
      iVar38 = uVar50 + *(int *)(pauVar42[-3] + 8) + (uVar41 & uVar40) + (~uVar40 & uVar49) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      uVar43 = uVar43 + iVar38;
      auVar68 = aesenc(auVar68,param_4[9]);
      uVar50 = iVar38 + ((uVar52 ^ uVar37) & (uVar51 ^ uVar52) ^ uVar52) +
               ((uVar51 >> 0xd | uVar51 * 0x80000) ^ (uVar51 >> 0x16 | uVar51 * 0x400) ^
               (uVar51 >> 2 | uVar51 * 0x40000000));
      iVar38 = uVar49 + *(int *)(pauVar42[-3] + 0xc) + (uVar40 & uVar43) + (~uVar43 & uVar41) +
               ((uVar43 >> 0x19 | uVar43 * 0x80) ^ (uVar43 >> 0xb | uVar43 * 0x200000) ^
               (uVar43 >> 6 | uVar43 * 0x4000000));
      uVar37 = uVar37 + iVar38;
      auVar70 = aesenclast(auVar68,param_4[10]);
      auVar69 = aesenc(auVar68,param_4[10]);
      uVar49 = iVar38 + ((uVar51 ^ uVar52) & (uVar50 ^ uVar51) ^ uVar51) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar38 = uVar41 + *(int *)pauVar42[-1] + (uVar43 & uVar37) + (~uVar37 & uVar40) +
               ((uVar37 >> 0x19 | uVar37 * 0x80) ^ (uVar37 >> 0xb | uVar37 * 0x200000) ^
               (uVar37 >> 6 | uVar37 * 0x4000000));
      uVar52 = uVar52 + iVar38;
      auVar68 = vpand_avx(auVar70,auVar6);
      auVar69 = aesenc(auVar69,param_4[0xb]);
      uVar41 = iVar38 + ((uVar50 ^ uVar51) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar38 = uVar40 + *(int *)(pauVar42[-1] + 4) + (uVar37 & uVar52) + (~uVar52 & uVar43) +
               ((uVar52 >> 0x19 | uVar52 * 0x80) ^ (uVar52 >> 0xb | uVar52 * 0x200000) ^
               (uVar52 >> 6 | uVar52 * 0x4000000));
      uVar51 = uVar51 + iVar38;
      auVar72 = aesenclast(auVar69,param_4[0xc]);
      auVar70 = aesenc(auVar69,param_4[0xc]);
      uVar40 = iVar38 + ((uVar49 ^ uVar50) & (uVar41 ^ uVar49) ^ uVar49) +
               ((uVar41 >> 0xd | uVar41 * 0x80000) ^ (uVar41 >> 0x16 | uVar41 * 0x400) ^
               (uVar41 >> 2 | uVar41 * 0x40000000));
      iVar38 = uVar43 + *(int *)(pauVar42[-1] + 8) + (uVar52 & uVar51) + (~uVar51 & uVar37) +
               ((uVar51 >> 0x19 | uVar51 * 0x80) ^ (uVar51 >> 0xb | uVar51 * 0x200000) ^
               (uVar51 >> 6 | uVar51 * 0x4000000));
      uVar50 = uVar50 + iVar38;
      auVar69 = vpand_avx(auVar72,auVar5);
      auVar70 = aesenc(auVar70,param_4[0xd]);
      uVar43 = iVar38 + ((uVar41 ^ uVar49) & (uVar40 ^ uVar41) ^ uVar41) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      iVar39 = uVar37 + *(int *)(pauVar42[-1] + 0xc) + (uVar51 & uVar50) + (~uVar50 & uVar52) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar48 = uVar43 ^ uVar40;
      uVar49 = uVar49 + iVar39;
      auVar69 = vpor_avx(auVar68,auVar69);
      auVar68 = aesenclast(auVar70,param_4[0xe]);
      auVar71 = ZEXT1664(*param_4);
      uVar37 = (uVar43 >> 0xd | uVar43 * 0x80000) ^ (uVar43 >> 0x16 | uVar43 * 0x400) ^
               (uVar43 >> 2 | uVar43 * 0x40000000);
      iVar39 = iVar39 + ((uVar40 ^ uVar41) & uVar48 ^ uVar40);
      auVar68 = vpand_avx(auVar68,auVar4);
      auVar68 = vpor_avx(auVar69,auVar68);
      auVar67 = ZEXT1664(auVar68);
      pauVar42 = pauVar42 + -8;
      *(undefined1 (*) [16])(param_2 + (longlong)pauVar54) = auVar68;
      pauVar53 = pauVar54 + 1;
    } while (pauVar45 <= pauVar42);
    piVar47 = *(int **)(pauVar46[0x1a] + 8);
    pauVar54 = pauVar54 + 5;
    param_7 = *(longlong *)pauVar46[0x1b];
    pauVar45 = pauVar46 + 0x14;
    iVar38 = iVar39 + uVar37 + *piVar47;
    uVar43 = uVar43 + piVar47[1];
    uVar40 = uVar40 + piVar47[2];
    uVar41 = uVar41 + piVar47[3];
    uVar49 = uVar49 + piVar47[4];
    uVar50 = uVar50 + piVar47[5];
    uVar51 = uVar51 + piVar47[6];
    uVar52 = uVar52 + piVar47[7];
    pauVar42 = *(undefined1 (**) [16])pauVar46[0x19];
    *piVar47 = iVar38;
    pauVar53 = (undefined1 (*) [16])(*pauVar54 + param_7);
    if (pauVar54 == pauVar42) {
      pauVar53 = pauVar45;
    }
    piVar47[1] = uVar43;
    piVar47[2] = uVar40;
    piVar47[3] = uVar41;
    piVar47[4] = uVar49;
    piVar47[5] = uVar50;
    piVar47[6] = uVar51;
    piVar47[7] = uVar52;
  } while (pauVar54 <= pauVar42);
  **(undefined1 (**) [16])pauVar46[0x1a] = auVar68;
  return;
}

// L$SEH_begin_aesni_cbc_sha256_enc_shaext @ 140e124ed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_cbc_sha256_enc_shaext
               (uint *param_1,longlong param_2,longlong param_3,uint *param_4,
               undefined1 (*param_5) [16],undefined8 *param_6,undefined1 (*param_7) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong in_RAX;
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
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  
  *(undefined8 *)(in_RAX + -0xa8) = unaff_XMM6_Qa;
  *(undefined8 *)(in_RAX + -0xa0) = unaff_XMM6_Qb;
  *(undefined8 *)(in_RAX + -0x98) = unaff_XMM7_Qa;
  *(undefined8 *)(in_RAX + -0x90) = unaff_XMM7_Qb;
  *(undefined8 *)(in_RAX + -0x88) = unaff_XMM8_Qa;
  *(undefined8 *)(in_RAX + -0x80) = unaff_XMM8_Qb;
  *(undefined8 *)(in_RAX + -0x78) = unaff_XMM9_Qa;
  *(undefined8 *)(in_RAX + -0x70) = unaff_XMM9_Qb;
  *(undefined8 *)(in_RAX + -0x68) = unaff_XMM10_Qa;
  *(undefined8 *)(in_RAX + -0x60) = unaff_XMM10_Qb;
  *(undefined8 *)(in_RAX + -0x58) = unaff_XMM11_Qa;
  *(undefined8 *)(in_RAX + -0x50) = unaff_XMM11_Qb;
  *(undefined8 *)(in_RAX + -0x48) = unaff_XMM12_Qa;
  *(undefined8 *)(in_RAX + -0x40) = unaff_XMM12_Qb;
  *(undefined8 *)(in_RAX + -0x38) = unaff_XMM13_Qa;
  *(undefined8 *)(in_RAX + -0x30) = unaff_XMM13_Qb;
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM14_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM14_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM14_Dd;
  *(undefined4 *)(in_RAX + -0x18) = unaff_XMM15_Da;
  *(undefined4 *)(in_RAX + -0x14) = unaff_XMM15_Db;
  *(undefined4 *)(in_RAX + -0x10) = unaff_XMM15_Dc;
  *(undefined4 *)(in_RAX + -0xc) = unaff_XMM15_Dd;
  auVar40 = _DAT_140e0e5c0;
  uVar3 = param_4[0x3c];
  param_2 = param_2 - (longlong)param_1;
  uVar11 = *param_4;
  uVar12 = param_4[1];
  uVar13 = param_4[2];
  uVar14 = param_4[3];
  auVar48 = *param_5;
  uVar44 = param_4[4];
  uVar45 = param_4[5];
  uVar46 = param_4[6];
  uVar47 = param_4[7];
  pauVar1 = (undefined1 (*) [16])(param_4 + 0x1c);
  auVar41._12_4_ = *(undefined4 *)(param_6 + 1);
  auVar41._8_4_ = *(undefined4 *)((longlong)param_6 + 0xc);
  auVar4._20_4_ = *(undefined4 *)param_6;
  auVar4._16_4_ = *(undefined4 *)((longlong)param_6 + 4);
  auVar4._24_4_ = *(undefined4 *)((longlong)param_6 + 0xc);
  auVar4._28_4_ = *(undefined4 *)(param_6 + 1);
  auVar41._0_8_ = CONCAT44(*(undefined4 *)(param_6 + 3),*(undefined4 *)((longlong)param_6 + 0x1c));
  auVar4._8_4_ = *(undefined4 *)((longlong)param_6 + 0x14);
  auVar4._0_8_ = auVar41._0_8_;
  auVar4._12_4_ = *(undefined4 *)(param_6 + 2);
  auVar38 = auVar4._8_16_;
  do {
    auVar54 = pshufb(*param_7,auVar40);
    pauVar2 = param_7 + 3;
    auVar49._0_4_ = K256 + auVar54._0_4_;
    auVar49._4_4_ = DAT_140e0e3c4 + auVar54._4_4_;
    auVar49._8_4_ = DAT_140e0e3c8 + auVar54._8_4_;
    auVar49._12_4_ = DAT_140e0e3cc + auVar54._12_4_;
    auVar59 = pshufb(param_7[1],auVar40);
    auVar68._0_4_ = auVar48._0_4_ ^ *param_1 ^ uVar11;
    auVar68._4_4_ = auVar48._4_4_ ^ param_1[1] ^ uVar12;
    auVar68._8_4_ = auVar48._8_4_ ^ param_1[2] ^ uVar13;
    auVar68._12_4_ = auVar48._12_4_ ^ param_1[3] ^ uVar14;
    auVar48._4_4_ = uVar45;
    auVar48._0_4_ = uVar44;
    auVar48._8_4_ = uVar46;
    auVar48._12_4_ = uVar47;
    auVar48 = aesenc(auVar68,auVar48);
    auVar42 = sha256rnds2_sha(auVar41,auVar38,auVar49);
    auVar50._4_4_ = auVar49._12_4_;
    auVar50._0_4_ = auVar49._8_4_;
    auVar50._8_4_ = auVar49._0_4_;
    auVar50._12_4_ = auVar49._0_4_;
    auVar49 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar48 = sha256rnds2_sha(auVar38,auVar42,auVar50);
    auVar55._0_4_ = DAT_140e0e3e0 + auVar59._0_4_;
    auVar55._4_4_ = DAT_140e0e3e4 + auVar59._4_4_;
    auVar55._8_4_ = DAT_140e0e3e8 + auVar59._8_4_;
    auVar55._12_4_ = DAT_140e0e3ec + auVar59._12_4_;
    auVar64 = pshufb(param_7[2],auVar40);
    param_7 = param_7 + 4;
    auVar50 = aesenc(auVar49,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar49 = sha256rnds2_sha(auVar42,auVar48,auVar55);
    auVar42._4_4_ = auVar55._12_4_;
    auVar42._0_4_ = auVar55._8_4_;
    auVar42._8_4_ = auVar55._0_4_;
    auVar42._12_4_ = auVar55._0_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar42);
    auVar60._0_4_ = DAT_140e0e400 + auVar64._0_4_;
    auVar60._4_4_ = DAT_140e0e404 + auVar64._4_4_;
    auVar60._8_4_ = DAT_140e0e408 + auVar64._8_4_;
    auVar60._12_4_ = DAT_140e0e40c + auVar64._12_4_;
    auVar68 = pshufb(*pauVar2,auVar40);
    auVar55 = sha256msg1_sha(auVar54,auVar59);
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar49 = sha256rnds2_sha(auVar49,auVar48,auVar60);
    auVar54._4_4_ = auVar60._12_4_;
    auVar54._0_4_ = auVar60._8_4_;
    auVar54._8_4_ = auVar60._0_4_;
    auVar54._12_4_ = auVar60._0_4_;
    auVar56._0_4_ = auVar55._0_4_ + auVar64._4_4_;
    auVar56._4_4_ = auVar55._4_4_ + auVar64._8_4_;
    auVar56._8_4_ = auVar55._8_4_ + auVar64._12_4_;
    auVar56._12_4_ = auVar55._12_4_ + auVar68._0_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar54);
    auVar70._0_4_ = DAT_140e0e420 + auVar68._0_4_;
    auVar70._4_4_ = DAT_140e0e424 + auVar68._4_4_;
    auVar70._8_4_ = DAT_140e0e428 + auVar68._8_4_;
    auVar70._12_4_ = DAT_140e0e42c + auVar68._12_4_;
    auVar42 = sha256msg2_sha(auVar56,auVar68);
    auVar60 = sha256msg1_sha(auVar59,auVar64);
    auVar55 = aesenc(auVar50,*pauVar1);
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar70);
    auVar59._4_4_ = auVar70._12_4_;
    auVar59._0_4_ = auVar70._8_4_;
    auVar59._8_4_ = auVar70._0_4_;
    auVar59._12_4_ = auVar70._0_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar61._0_4_ = auVar60._0_4_ + auVar68._4_4_;
    auVar61._4_4_ = auVar60._4_4_ + auVar68._8_4_;
    auVar61._8_4_ = auVar60._8_4_ + auVar68._12_4_;
    auVar61._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar59);
    auVar15._0_4_ = DAT_140e0e440 + auVar42._0_4_;
    auVar15._4_4_ = DAT_140e0e444 + auVar42._4_4_;
    auVar15._8_4_ = DAT_140e0e448 + auVar42._8_4_;
    auVar15._12_4_ = DAT_140e0e44c + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar61,auVar42);
    auVar54 = sha256msg1_sha(auVar64,auVar68);
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar15);
    auVar64._4_4_ = auVar15._12_4_;
    auVar64._0_4_ = auVar15._8_4_;
    auVar64._8_4_ = auVar15._0_4_;
    auVar64._12_4_ = auVar15._0_4_;
    auVar65._0_4_ = auVar54._0_4_ + auVar42._4_4_;
    auVar65._4_4_ = auVar54._4_4_ + auVar42._8_4_;
    auVar65._8_4_ = auVar54._8_4_ + auVar42._12_4_;
    auVar65._12_4_ = auVar54._12_4_ + auVar60._0_4_;
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar6._4_4_ = uVar45;
    auVar6._0_4_ = uVar44;
    auVar6._8_4_ = uVar46;
    auVar6._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar6);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar64);
    uVar44 = param_1[4];
    uVar45 = param_1[5];
    uVar46 = param_1[6];
    uVar47 = param_1[7];
    *(undefined1 (*) [16])(param_2 + (longlong)param_1) = auVar55;
    auVar51._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar51._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar51._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar51._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar51,auVar48);
    auVar16._0_4_ = DAT_140e0e460 + auVar60._0_4_;
    auVar16._4_4_ = DAT_140e0e464 + auVar60._4_4_;
    auVar16._8_4_ = DAT_140e0e468 + auVar60._8_4_;
    auVar16._12_4_ = DAT_140e0e46c + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar65,auVar60);
    auVar55 = sha256msg1_sha(auVar68,auVar42);
    auVar48 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar16);
    auVar17._4_4_ = auVar16._12_4_;
    auVar17._0_4_ = auVar16._8_4_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._12_4_ = auVar16._0_4_;
    auVar69._0_4_ = auVar55._0_4_ + auVar60._4_4_;
    auVar69._4_4_ = auVar55._4_4_ + auVar60._8_4_;
    auVar69._8_4_ = auVar55._8_4_ + auVar60._12_4_;
    auVar69._12_4_ = auVar55._12_4_ + auVar54._0_4_;
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar17);
    auVar18._0_4_ = DAT_140e0e480 + auVar54._0_4_;
    auVar18._4_4_ = DAT_140e0e484 + auVar54._4_4_;
    auVar18._8_4_ = DAT_140e0e488 + auVar54._8_4_;
    auVar18._12_4_ = DAT_140e0e48c + auVar54._12_4_;
    auVar70 = sha256msg2_sha(auVar69,auVar54);
    auVar42 = sha256msg1_sha(auVar42,auVar60);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar18);
    auVar19._4_4_ = auVar18._12_4_;
    auVar19._0_4_ = auVar18._8_4_;
    auVar19._8_4_ = auVar18._0_4_;
    auVar19._12_4_ = auVar18._0_4_;
    auVar57._0_4_ = auVar42._0_4_ + auVar54._4_4_;
    auVar57._4_4_ = auVar42._4_4_ + auVar54._8_4_;
    auVar57._8_4_ = auVar42._8_4_ + auVar54._12_4_;
    auVar57._12_4_ = auVar42._12_4_ + auVar70._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar19);
    auVar20._0_4_ = DAT_140e0e4a0 + auVar70._0_4_;
    auVar20._4_4_ = DAT_140e0e4a4 + auVar70._4_4_;
    auVar20._8_4_ = DAT_140e0e4a8 + auVar70._8_4_;
    auVar20._12_4_ = DAT_140e0e4ac + auVar70._12_4_;
    auVar42 = sha256msg2_sha(auVar57,auVar70);
    auVar60 = sha256msg1_sha(auVar60,auVar54);
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar20);
    auVar21._4_4_ = auVar20._12_4_;
    auVar21._0_4_ = auVar20._8_4_;
    auVar21._8_4_ = auVar20._0_4_;
    auVar21._12_4_ = auVar20._0_4_;
    auVar62._0_4_ = auVar60._0_4_ + auVar70._4_4_;
    auVar62._4_4_ = auVar60._4_4_ + auVar70._8_4_;
    auVar62._8_4_ = auVar60._8_4_ + auVar70._12_4_;
    auVar62._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar21);
    auVar22._0_4_ = _DAT_140e0e4c0 + auVar42._0_4_;
    auVar22._4_4_ = _UNK_140e0e4c4 + auVar42._4_4_;
    auVar22._8_4_ = _UNK_140e0e4c8 + auVar42._8_4_;
    auVar22._12_4_ = _UNK_140e0e4cc + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar62,auVar42);
    auVar48 = sha256msg1_sha(auVar54,auVar70);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar22);
    auVar23._4_4_ = auVar22._12_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._0_4_;
    auVar23._12_4_ = auVar22._0_4_;
    auVar66._0_4_ = auVar48._0_4_ + auVar42._4_4_;
    auVar66._4_4_ = auVar48._4_4_ + auVar42._8_4_;
    auVar66._8_4_ = auVar48._8_4_ + auVar42._12_4_;
    auVar66._12_4_ = auVar48._12_4_ + auVar60._0_4_;
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar7._4_4_ = uVar45;
    auVar7._0_4_ = uVar44;
    auVar7._8_4_ = uVar46;
    auVar7._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar7);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar23);
    uVar44 = param_1[8];
    uVar45 = param_1[9];
    uVar46 = param_1[10];
    uVar47 = param_1[0xb];
    *(undefined1 (*) [16])(param_2 + 0x10 + (longlong)param_1) = auVar55;
    auVar52._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar52._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar52._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar52._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar52,auVar48);
    auVar24._0_4_ = _DAT_140e0e4e0 + auVar60._0_4_;
    auVar24._4_4_ = _UNK_140e0e4e4 + auVar60._4_4_;
    auVar24._8_4_ = _UNK_140e0e4e8 + auVar60._8_4_;
    auVar24._12_4_ = _UNK_140e0e4ec + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar66,auVar60);
    auVar55 = sha256msg1_sha(auVar70,auVar42);
    auVar48 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar24);
    auVar25._4_4_ = auVar24._12_4_;
    auVar25._0_4_ = auVar24._8_4_;
    auVar25._8_4_ = auVar24._0_4_;
    auVar25._12_4_ = auVar24._0_4_;
    auVar71._0_4_ = auVar55._0_4_ + auVar60._4_4_;
    auVar71._4_4_ = auVar55._4_4_ + auVar60._8_4_;
    auVar71._8_4_ = auVar55._8_4_ + auVar60._12_4_;
    auVar71._12_4_ = auVar55._12_4_ + auVar54._0_4_;
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar25);
    auVar26._0_4_ = _DAT_140e0e500 + auVar54._0_4_;
    auVar26._4_4_ = _UNK_140e0e504 + auVar54._4_4_;
    auVar26._8_4_ = _UNK_140e0e508 + auVar54._8_4_;
    auVar26._12_4_ = _UNK_140e0e50c + auVar54._12_4_;
    auVar70 = sha256msg2_sha(auVar71,auVar54);
    auVar42 = sha256msg1_sha(auVar42,auVar60);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar26);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._0_4_ = auVar26._8_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._0_4_;
    auVar58._0_4_ = auVar42._0_4_ + auVar54._4_4_;
    auVar58._4_4_ = auVar42._4_4_ + auVar54._8_4_;
    auVar58._8_4_ = auVar42._8_4_ + auVar54._12_4_;
    auVar58._12_4_ = auVar42._12_4_ + auVar70._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar27);
    auVar28._0_4_ = _DAT_140e0e520 + auVar70._0_4_;
    auVar28._4_4_ = _UNK_140e0e524 + auVar70._4_4_;
    auVar28._8_4_ = _UNK_140e0e528 + auVar70._8_4_;
    auVar28._12_4_ = _UNK_140e0e52c + auVar70._12_4_;
    auVar42 = sha256msg2_sha(auVar58,auVar70);
    auVar60 = sha256msg1_sha(auVar60,auVar54);
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar28);
    auVar29._4_4_ = auVar28._12_4_;
    auVar29._0_4_ = auVar28._8_4_;
    auVar29._8_4_ = auVar28._0_4_;
    auVar29._12_4_ = auVar28._0_4_;
    auVar63._0_4_ = auVar60._0_4_ + auVar70._4_4_;
    auVar63._4_4_ = auVar60._4_4_ + auVar70._8_4_;
    auVar63._8_4_ = auVar60._8_4_ + auVar70._12_4_;
    auVar63._12_4_ = auVar60._12_4_ + auVar42._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar29);
    auVar30._0_4_ = _DAT_140e0e540 + auVar42._0_4_;
    auVar30._4_4_ = _UNK_140e0e544 + auVar42._4_4_;
    auVar30._8_4_ = _UNK_140e0e548 + auVar42._8_4_;
    auVar30._12_4_ = _UNK_140e0e54c + auVar42._12_4_;
    auVar60 = sha256msg2_sha(auVar63,auVar42);
    auVar48 = sha256msg1_sha(auVar54,auVar70);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar30);
    auVar31._4_4_ = auVar30._12_4_;
    auVar31._0_4_ = auVar30._8_4_;
    auVar31._8_4_ = auVar30._0_4_;
    auVar31._12_4_ = auVar30._0_4_;
    auVar67._0_4_ = auVar48._0_4_ + auVar42._4_4_;
    auVar67._4_4_ = auVar48._4_4_ + auVar42._8_4_;
    auVar67._8_4_ = auVar48._8_4_ + auVar42._12_4_;
    auVar67._12_4_ = auVar48._12_4_ + auVar60._0_4_;
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    auVar49 = sha256rnds2_sha(auVar49,auVar50,auVar31);
    auVar32._0_4_ = _DAT_140e0e560 + auVar60._0_4_;
    auVar32._4_4_ = _UNK_140e0e564 + auVar60._4_4_;
    auVar32._8_4_ = _UNK_140e0e568 + auVar60._8_4_;
    auVar32._12_4_ = _UNK_140e0e56c + auVar60._12_4_;
    auVar54 = sha256msg2_sha(auVar67,auVar60);
    auVar42 = sha256msg1_sha(auVar70,auVar42);
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar8._4_4_ = uVar45;
    auVar8._0_4_ = uVar44;
    auVar8._8_4_ = uVar46;
    auVar8._12_4_ = uVar47;
    auVar55 = aesenclast(auVar55,auVar8);
    auVar48 = *(undefined1 (*) [16])(param_4 + 4);
    auVar50 = sha256rnds2_sha(auVar50,auVar49,auVar32);
    auVar33._4_4_ = auVar32._12_4_;
    auVar33._0_4_ = auVar32._8_4_;
    auVar33._8_4_ = auVar32._0_4_;
    auVar33._12_4_ = auVar32._0_4_;
    auVar72._0_4_ = auVar42._0_4_ + auVar60._4_4_;
    auVar72._4_4_ = auVar42._4_4_ + auVar60._8_4_;
    auVar72._8_4_ = auVar42._8_4_ + auVar60._12_4_;
    auVar72._12_4_ = auVar42._12_4_ + auVar54._0_4_;
    uVar44 = param_1[0xc];
    uVar45 = param_1[0xd];
    uVar46 = param_1[0xe];
    uVar47 = param_1[0xf];
    *(undefined1 (*) [16])(param_2 + 0x20 + (longlong)param_1) = auVar55;
    auVar53._0_4_ = auVar55._0_4_ ^ uVar44 ^ uVar11;
    auVar53._4_4_ = auVar55._4_4_ ^ uVar45 ^ uVar12;
    auVar53._8_4_ = auVar55._8_4_ ^ uVar46 ^ uVar13;
    auVar53._12_4_ = auVar55._12_4_ ^ uVar47 ^ uVar14;
    auVar48 = aesenc(auVar53,auVar48);
    auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 8));
    auVar48 = sha256rnds2_sha(auVar49,auVar50,auVar33);
    auVar34._0_4_ = _DAT_140e0e580 + auVar54._0_4_;
    auVar34._4_4_ = _UNK_140e0e584 + auVar54._4_4_;
    auVar34._8_4_ = _UNK_140e0e588 + auVar54._8_4_;
    auVar34._12_4_ = _UNK_140e0e58c + auVar54._12_4_;
    auVar42 = sha256msg2_sha(auVar72,auVar54);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0xc));
    auVar49 = sha256rnds2_sha(auVar50,auVar48,auVar34);
    auVar35._4_4_ = auVar34._12_4_;
    auVar35._0_4_ = auVar34._8_4_;
    auVar35._8_4_ = auVar34._0_4_;
    auVar35._12_4_ = auVar34._0_4_;
    auVar50 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x10));
    auVar48 = sha256rnds2_sha(auVar48,auVar49,auVar35);
    auVar36._0_4_ = _DAT_140e0e5a0 + auVar42._0_4_;
    auVar36._4_4_ = _UNK_140e0e5a4 + auVar42._4_4_;
    auVar36._8_4_ = _UNK_140e0e5a8 + auVar42._8_4_;
    auVar36._12_4_ = _UNK_140e0e5ac + auVar42._12_4_;
    auVar50 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x14));
    auVar55 = aesenc(auVar50,*(undefined1 (*) [16])(param_4 + 0x18));
    auVar50 = sha256rnds2_sha(auVar49,auVar48,auVar36);
    auVar37._4_4_ = auVar36._12_4_;
    auVar37._0_4_ = auVar36._8_4_;
    auVar37._8_4_ = auVar36._0_4_;
    auVar37._12_4_ = auVar36._0_4_;
    auVar55 = aesenc(auVar55,*pauVar1);
    auVar49 = sha256rnds2_sha(auVar48,auVar50,auVar37);
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x20));
    auVar48 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar44 = auVar48._0_4_;
    uVar45 = auVar48._4_4_;
    uVar46 = auVar48._8_4_;
    uVar47 = auVar48._12_4_;
    auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x24));
    if (10 < uVar3) {
      auVar55 = aesenc(auVar55,auVar48);
      auVar48 = *(undefined1 (*) [16])(param_4 + 0x30);
      uVar44 = auVar48._0_4_;
      uVar45 = auVar48._4_4_;
      uVar46 = auVar48._8_4_;
      uVar47 = auVar48._12_4_;
      auVar55 = aesenc(auVar55,*(undefined1 (*) [16])(param_4 + 0x2c));
      if (uVar3 != 0xb) {
        auVar48 = aesenc(auVar55,auVar48);
        uVar44 = param_4[0x38];
        uVar45 = param_4[0x39];
        uVar46 = param_4[0x3a];
        uVar47 = param_4[0x3b];
        auVar55 = aesenc(auVar48,*(undefined1 (*) [16])(param_4 + 0x34));
      }
    }
    auVar9._4_4_ = uVar45;
    auVar9._0_4_ = uVar44;
    auVar9._8_4_ = uVar46;
    auVar9._12_4_ = uVar47;
    auVar48 = aesenclast(auVar55,auVar9);
    uVar44 = param_4[4];
    uVar45 = param_4[5];
    uVar46 = param_4[6];
    uVar47 = param_4[7];
    auVar43._0_4_ = auVar50._0_4_ + auVar41._0_4_;
    auVar43._4_4_ = auVar50._4_4_ + auVar41._4_4_;
    auVar43._8_4_ = auVar50._8_4_ + auVar41._8_4_;
    auVar43._12_4_ = auVar50._12_4_ + auVar41._12_4_;
    auVar39._0_4_ = auVar49._0_4_ + auVar38._0_4_;
    auVar39._4_4_ = auVar49._4_4_ + auVar38._4_4_;
    auVar39._8_4_ = auVar49._8_4_ + auVar38._8_4_;
    auVar39._12_4_ = auVar49._12_4_ + auVar38._12_4_;
    param_3 = param_3 + -1;
    *(undefined1 (*) [16])(param_2 + 0x30 + (longlong)param_1) = auVar48;
    param_1 = param_1 + 0x10;
    auVar38 = auVar39;
    auVar41 = auVar43;
  } while (param_3 != 0);
  auVar38._4_4_ = auVar43._0_4_;
  auVar38._0_4_ = auVar43._4_4_;
  auVar38._8_4_ = auVar43._12_4_;
  auVar38._12_4_ = auVar43._8_4_;
  auVar5._4_4_ = auVar39._8_4_;
  auVar5._0_4_ = auVar39._12_4_;
  auVar5._8_4_ = auVar39._4_4_;
  auVar5._12_4_ = auVar39._0_4_;
  auVar10._4_8_ = auVar39._8_8_;
  auVar10._0_4_ = auVar39._0_4_;
  auVar40._0_8_ = auVar10._0_8_ << 0x20;
  auVar40._8_4_ = auVar39._12_4_;
  auVar40._12_4_ = auVar39._8_4_;
  auVar5._16_16_ = auVar38;
  *param_5 = auVar48;
  *param_6 = auVar40._8_8_;
  param_6[1] = auVar38._8_8_;
  *(undefined1 (*) [16])(param_6 + 2) = auVar5._8_16_;
  return;
}

