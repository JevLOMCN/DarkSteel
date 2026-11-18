// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_sse4 @ 14093b300

/* WARNING: Removing unreachable block (ram,0x00014093c0eb) */
/* WARNING: Removing unreachable block (ram,0x00014093bb03) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
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
  float fVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar47 [16];
  float fVar52;
  float fVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar56;
  int iVar57;
  float fVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar78 [16];
  float fVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined1 auVar86 [16];
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
  undefined1 unaff_XMM11 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar108;
  undefined1 auVar107 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar115;
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  int iVar72;
  int iVar75;
  int iVar76;
  int iVar77;
  undefined1 auVar106 [16];
  undefined1 auVar118 [16];
  
  uVar25 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar25 = param_7;
  }
  uVar25 = uVar25 & 0xfffffffc;
  if ((int)uVar25 < 1) {
    uVar27 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar40 = param_6 * param_5 * param_5;
    fVar45 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar40);
    fVar51 = (float)(_UNK_150651574 ^ (uint)fVar40);
    fVar53 = (float)(_UNK_150651578 ^ (uint)fVar40);
    fVar54 = (float)(_UNK_15065157c ^ (uint)fVar40);
    uVar27 = 0;
    uVar28 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar28 * 2);
      piVar4 = (int *)(param_2 + 0x10 + uVar28 * 2);
      lVar20 = (longlong)(*piVar1 << 4);
      lVar31 = (longlong)(piVar1[2] * 0x10);
      lVar32 = (longlong)(*piVar4 << 4);
      lVar24 = (longlong)(piVar4[2] << 4);
      lVar29 = (longlong)(piVar1[1] << 4);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar31),
                          0x10);
      auVar47 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      lVar30 = (longlong)(piVar1[3] * 0x10);
      lVar22 = (longlong)(piVar4[1] << 4);
      lVar19 = (longlong)(piVar4[3] << 4);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar103 = insertps(auVar102,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar90 = insertps(auVar102,*(undefined4 *)(param_1 + lVar22),0x20);
      auVar104 = insertps(auVar103,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar103 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar47 = insertps(auVar102,*(undefined4 *)(param_1 + 4 + lVar22),0x20);
      auVar91 = insertps(auVar90,*(undefined4 *)(param_1 + lVar19),0x30);
      auVar73 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar19),0x30);
      auVar47 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar102 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + 8 + lVar22),0x20);
      auVar100 = insertps(auVar102,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      uVar37 = *(uint *)(param_1 + 0xc + lVar20);
      auVar97 = insertps(auVar47,*(undefined4 *)(param_1 + 8 + lVar19),0x30);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar31);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar32);
      auVar110._0_4_ = auVar104._0_4_ - auVar91._0_4_;
      auVar110._4_4_ = auVar104._4_4_ - auVar91._4_4_;
      auVar110._8_4_ = auVar104._8_4_ - auVar91._8_4_;
      auVar110._12_4_ = auVar104._12_4_ - auVar91._12_4_;
      auVar111._0_4_ = auVar103._0_4_ - auVar73._0_4_;
      auVar111._4_4_ = auVar103._4_4_ - auVar73._4_4_;
      auVar111._8_4_ = auVar103._8_4_ - auVar73._8_4_;
      auVar111._12_4_ = auVar103._12_4_ - auVar73._12_4_;
      auVar84._0_4_ = auVar100._0_4_ - auVar97._0_4_;
      auVar84._4_4_ = auVar100._4_4_ - auVar97._4_4_;
      auVar84._8_4_ = auVar100._8_4_ - auVar97._8_4_;
      auVar84._12_4_ = auVar100._12_4_ - auVar97._12_4_;
      auVar78._0_4_ =
           auVar84._0_4_ * auVar84._0_4_ +
           auVar111._0_4_ * auVar111._0_4_ + auVar110._0_4_ * auVar110._0_4_;
      auVar78._4_4_ =
           auVar84._4_4_ * auVar84._4_4_ +
           auVar111._4_4_ * auVar111._4_4_ + auVar110._4_4_ * auVar110._4_4_;
      auVar78._8_4_ =
           auVar84._8_4_ * auVar84._8_4_ +
           auVar111._8_4_ * auVar111._8_4_ + auVar110._8_4_ * auVar110._8_4_;
      auVar78._12_4_ =
           auVar84._12_4_ * auVar84._12_4_ +
           auVar111._12_4_ * auVar111._12_4_ + auVar110._12_4_ * auVar110._12_4_;
      uVar39 = *(uint *)(param_1 + 0xc + lVar24);
      auVar99 = sqrtps(unaff_XMM11,auVar78);
      uVar34 = -(uint)(auVar78._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar78._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar78._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar78._12_4_ < _UNK_1506895ec);
      auVar102._4_4_ = uVar35;
      auVar102._0_4_ = uVar34;
      auVar90 = divps(auVar110,auVar99);
      auVar78 = divps(auVar111,auVar99);
      auVar85 = divps(auVar84,auVar99);
      auVar102._8_4_ = uVar36;
      auVar102._12_4_ = uVar38;
      auVar47._4_4_ = _UNK_15076b1f4;
      auVar47._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar47._8_4_ = _UNK_15076b1f8;
      auVar47._12_4_ = _UNK_15076b1fc;
      auVar111 = blendvps(auVar90,auVar47,auVar102);
      auVar47 = insertps(ZEXT416(uVar37),uVar5,0x10);
      auVar47 = insertps(auVar47,uVar6,0x20);
      uVar23 = uVar28 & 0xffffffff;
      pfVar2 = (float *)(param_3 + uVar23);
      auVar47 = insertps(auVar47,ZEXT416(uVar39),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar29);
      uVar8 = *(uint *)(param_1 + 0xc + lVar30);
      auVar102 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar22);
      auVar102 = insertps(auVar102,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar19);
      unaff_XMM11 = ZEXT416(uVar10);
      auVar102 = insertps(auVar102,unaff_XMM11,0x30);
      fVar46 = auVar47._0_4_;
      fVar52 = auVar47._4_4_;
      fVar55 = auVar47._12_4_;
      fVar117 = auVar102._0_4_;
      fVar122 = auVar102._4_4_;
      fVar44 = auVar47._8_4_;
      fVar87 = auVar102._8_4_;
      fVar88 = auVar102._12_4_;
      auVar90._0_4_ = (fVar46 + fVar117) * fVar40 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar90._4_4_ = (fVar52 + fVar122) * fVar40 + _UNK_15076b1f4;
      auVar90._8_4_ = (fVar44 + fVar87) * fVar40 + _UNK_15076b1f8;
      auVar90._12_4_ = (fVar55 + fVar88) * fVar40 + _UNK_15076b1fc;
      pfVar3 = (float *)(param_4 + uVar23);
      fVar81 = *pfVar3;
      fVar82 = pfVar3[1];
      fVar83 = pfVar3[2];
      fVar89 = pfVar3[3];
      auVar120._0_4_ = ((float)(~uVar34 & auVar99._0_4_) - *pfVar2) * fVar45 - fVar81;
      auVar120._4_4_ = ((float)(~uVar35 & auVar99._4_4_) - pfVar2[1]) * fVar51 - fVar82;
      auVar120._8_4_ = ((float)(~uVar36 & auVar99._8_4_) - pfVar2[2]) * fVar53 - fVar83;
      auVar120._12_4_ = ((float)(~uVar38 & auVar99._12_4_) - pfVar2[3]) * fVar54 - fVar89;
      auVar47 = divps(auVar120,auVar90);
      fVar56 = auVar47._0_4_;
      fVar109 = auVar111._0_4_ * fVar56;
      fVar63 = auVar47._4_4_;
      fVar113 = auVar111._4_4_ * fVar63;
      fVar105 = auVar47._8_4_;
      fVar114 = auVar111._8_4_ * fVar105;
      fVar108 = auVar47._12_4_;
      fVar115 = auVar111._12_4_ * fVar108;
      auVar99._0_4_ = fVar46 * fVar109 + auVar104._0_4_;
      auVar99._4_4_ = fVar52 * fVar113 + auVar104._4_4_;
      auVar99._8_4_ = fVar44 * fVar114 + auVar104._8_4_;
      auVar99._12_4_ = fVar55 * fVar115 + auVar104._12_4_;
      fVar67 = (float)(~uVar34 & auVar78._0_4_) * fVar56;
      fVar69 = (float)(~uVar35 & auVar78._4_4_) * fVar63;
      fVar70 = (float)(~uVar36 & auVar78._8_4_) * fVar105;
      fVar71 = (float)(~uVar38 & auVar78._12_4_) * fVar108;
      *(float *)(param_1 + lVar20) = auVar99._0_4_;
      uVar11 = extractps(auVar99,1);
      *(undefined8 *)(param_1 + lVar31) = uVar11;
      auVar104._0_4_ = fVar46 * fVar67 + auVar103._0_4_;
      auVar104._4_4_ = fVar52 * fVar69 + auVar103._4_4_;
      auVar104._8_4_ = fVar44 * fVar70 + auVar103._8_4_;
      auVar104._12_4_ = fVar55 * fVar71 + auVar103._12_4_;
      uVar11 = extractps(auVar99,2);
      *(undefined8 *)(param_1 + lVar32) = uVar11;
      uVar11 = extractps(auVar99,3);
      *(undefined8 *)(param_1 + lVar24) = uVar11;
      fVar116 = (float)(~uVar34 & auVar85._0_4_) * fVar56;
      fVar121 = (float)(~uVar35 & auVar85._4_4_) * fVar63;
      fVar123 = (float)(~uVar36 & auVar85._8_4_) * fVar105;
      fVar124 = (float)(~uVar38 & auVar85._12_4_) * fVar108;
      *(float *)(param_1 + 4 + lVar20) = auVar104._0_4_;
      uVar11 = extractps(auVar104,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar11;
      uVar11 = extractps(auVar104,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar11;
      auVar103._0_4_ = fVar46 * fVar116 + auVar100._0_4_;
      auVar103._4_4_ = fVar52 * fVar121 + auVar100._4_4_;
      auVar103._8_4_ = fVar44 * fVar123 + auVar100._8_4_;
      auVar103._12_4_ = fVar55 * fVar124 + auVar100._12_4_;
      uVar11 = extractps(auVar104,3);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar11;
      *(float *)(param_1 + 8 + lVar20) = auVar103._0_4_;
      uVar11 = extractps(auVar103,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar11;
      uVar11 = extractps(auVar103,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar11;
      uVar11 = extractps(auVar103,3);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar11;
      *(uint *)(param_1 + 0xc + lVar20) = uVar37;
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      auVar100._0_4_ = auVar91._0_4_ - fVar109 * fVar117;
      auVar100._4_4_ = auVar91._4_4_ - fVar113 * fVar122;
      auVar100._8_4_ = auVar91._8_4_ - fVar114 * fVar87;
      auVar100._12_4_ = auVar91._12_4_ - fVar115 * fVar88;
      *(uint *)(param_1 + 0xc + lVar24) = uVar39;
      *(float *)(param_1 + lVar29) = auVar100._0_4_;
      uVar11 = extractps(auVar100,1);
      *(undefined8 *)(param_1 + lVar30) = uVar11;
      uVar11 = extractps(auVar100,2);
      *(undefined8 *)(param_1 + lVar22) = uVar11;
      auVar85._0_4_ = auVar73._0_4_ - fVar67 * fVar117;
      auVar85._4_4_ = auVar73._4_4_ - fVar69 * fVar122;
      auVar85._8_4_ = auVar73._8_4_ - fVar70 * fVar87;
      auVar85._12_4_ = auVar73._12_4_ - fVar71 * fVar88;
      uVar11 = extractps(auVar100,3);
      *(undefined8 *)(param_1 + lVar19) = uVar11;
      *(float *)(param_1 + 4 + lVar29) = auVar85._0_4_;
      uVar11 = extractps(auVar85,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar11;
      uVar11 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar11;
      auVar73._0_4_ = auVar97._0_4_ - fVar116 * fVar117;
      auVar73._4_4_ = auVar97._4_4_ - fVar121 * fVar122;
      auVar73._8_4_ = auVar97._8_4_ - fVar123 * fVar87;
      auVar73._12_4_ = auVar97._12_4_ - fVar124 * fVar88;
      uVar11 = extractps(auVar85,3);
      *(undefined8 *)(param_1 + 4 + lVar19) = uVar11;
      *(float *)(param_1 + 8 + lVar29) = auVar73._0_4_;
      uVar11 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar11;
      uVar11 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar11;
      uVar11 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 8 + lVar19) = uVar11;
      pfVar2 = (float *)(param_4 + uVar23);
      *pfVar2 = fVar56 + fVar81;
      pfVar2[1] = fVar63 + fVar82;
      pfVar2[2] = fVar105 + fVar83;
      pfVar2[3] = fVar108 + fVar89;
      *(uint *)(param_1 + 0xc + lVar29) = uVar7;
      *(uint *)(param_1 + 0xc + lVar30) = uVar8;
      *(uint *)(param_1 + 0xc + lVar22) = uVar9;
      *(uint *)(param_1 + 0xc + lVar19) = uVar10;
      uVar28 = uVar28 + 0x10;
      uVar27 = uVar27 + 4;
    } while ((int)uVar27 < (int)uVar25);
    if ((int)param_7 <= (int)uVar27) {
      return;
    }
  }
  auVar91._0_4_ =
       -(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar91._4_4_ =
       -(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar91._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_7);
  auVar91._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_7);
  piVar1 = (int *)(param_2 + (ulonglong)uVar27 * 8);
  uVar25 = movmskps(uVar25,auVar91);
  bVar18 = (char)((char)uVar25 << 4) >> 4;
  if (uVar25 == 0xf) {
    iVar72 = *piVar1;
    iVar57 = piVar1[1];
    iVar75 = piVar1[2];
    iVar64 = piVar1[3];
    iVar76 = piVar1[4];
    iVar65 = piVar1[5];
    iVar77 = piVar1[6];
    iVar66 = piVar1[7];
  }
  else {
    auVar97._0_4_ = ___xmm_00000018000000100000000800000000 & auVar91._0_4_;
    auVar97._4_4_ = _UNK_150b51a04 & auVar91._4_4_;
    auVar97._8_4_ = _UNK_150b51a08 & auVar91._8_4_;
    auVar97._12_4_ = _UNK_150b51a0c & auVar91._12_4_;
    lVar20 = extractps(auVar97,1);
    lVar22 = extractps(auVar97,2);
    lVar19 = extractps(auVar97,3);
    iVar72 = *piVar1;
    iVar75 = *(int *)((longlong)piVar1 + lVar20);
    iVar76 = *(int *)((longlong)piVar1 + lVar22);
    iVar77 = *(int *)((longlong)piVar1 + lVar19);
    auVar47 = ___xmm_0000001c000000140000000c00000004 & auVar91;
    iVar57 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._0_4_);
    iVar64 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._4_4_);
    iVar65 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._8_4_);
    iVar66 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._12_4_);
  }
  auVar74._0_4_ = iVar72 << 4;
  auVar74._4_4_ = iVar75 * 0x10;
  auVar74._8_4_ = iVar76 << 4;
  auVar74._12_4_ = iVar77 << 4;
  auVar102 = auVar91 & auVar74;
  lVar19 = param_1 + auVar102._0_4_;
  lVar20 = param_1 + auVar102._4_4_;
  lVar22 = param_1 + auVar102._8_4_;
  lVar24 = param_1 + auVar102._12_4_;
  auVar99 = ___xmm_00000004000000040000000400000004 & auVar91;
  uVar23 = (ulonglong)auVar99._0_4_;
  _local_1a8 = ___xmm_00000008000000080000000800000008 & auVar91;
  uVar28 = (ulonglong)local_1a8._0_4_;
  auVar58._0_4_ = iVar57 << 4;
  auVar58._4_4_ = iVar64 << 4;
  auVar58._8_4_ = iVar65 << 4;
  auVar58._12_4_ = iVar66 << 4;
  auVar90 = auVar91 & auVar58;
  lVar21 = (longlong)auVar90._0_4_;
  auVar47 = ZEXT416(*(uint *)(param_1 + auVar102._0_4_));
  lVar29 = param_1 + lVar21;
  lVar30 = param_1 + auVar90._4_4_;
  lVar31 = param_1 + auVar90._8_4_;
  lVar32 = param_1 + auVar90._12_4_;
  bVar33 = (bVar18 & 2) != 0;
  if (bVar33) {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._4_4_),0x10);
  }
  auVar103 = ZEXT416(*(uint *)(uVar23 + lVar19));
  if (bVar33) {
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._4_4_ + lVar20),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar28 + lVar19)),
                       *(undefined4 *)((ulonglong)local_1a8._4_4_ + lVar20),0x10);
    auVar120 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),
                        *(undefined4 *)(param_1 + auVar90._4_4_),0x10);
    auVar78 = insertps(ZEXT416(*(uint *)(uVar23 + lVar29)),
                       *(undefined4 *)((ulonglong)auVar99._4_4_ + lVar30),0x10);
  }
  else {
    auVar73 = ZEXT416(*(uint *)(uVar28 + lVar19));
    auVar120 = ZEXT416(*(uint *)(param_1 + lVar21));
    auVar78 = ZEXT416(*(uint *)(uVar23 + lVar29));
  }
  auVar85 = ZEXT416(*(uint *)(uVar28 + lVar29));
  if (bVar33) {
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._4_4_ + lVar30),0x10);
  }
  if ((bVar18 & 4) != 0) {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._8_4_),0x20);
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._8_4_ + lVar22),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)local_1a8._8_4_ + lVar22),0x20);
    auVar120 = insertps(auVar120,*(undefined4 *)(param_1 + auVar90._8_4_),0x20);
    auVar78 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar99._8_4_ + lVar31),0x20);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._8_4_ + lVar31),0x20);
  }
  if ((char)bVar18 < '\0') {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._12_4_),0x30);
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._12_4_ + lVar24),0x30);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)local_1a8._12_4_ + lVar24),0x30);
    auVar120 = insertps(auVar120,*(undefined4 *)(param_1 + auVar90._12_4_),0x30);
    auVar78 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar99._12_4_ + lVar32),0x30);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._12_4_ + lVar32),0x30);
  }
  lVar21 = (longlong)(int)(uVar27 << 2);
  pfVar2 = (float *)(param_4 + lVar21);
  if ((~bVar18 & 9) == 0) {
    _local_1a8 = *(undefined1 (*) [16])(param_3 + lVar21);
    auVar102 = *(undefined1 (*) [16])(param_4 + lVar21);
  }
  else {
    puVar26 = (uint *)(param_3 + lVar21);
    if ((uVar25 & 1) != 0) {
      _local_1a8 = ZEXT416(*puVar26);
    }
    if ((uVar25 & 2) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[1],0x10);
    }
    if ((uVar25 & 4) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[2],0x20);
    }
    if ((uVar25 & 8) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[3],0x30);
    }
    auVar102 = auVar47;
    if ((uVar25 & 1) != 0) {
      auVar102 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar25 & 2) != 0) {
      auVar102 = insertps(auVar102,pfVar2[1],0x10);
    }
    if ((uVar25 & 4) != 0) {
      auVar102 = insertps(auVar102,pfVar2[2],0x20);
    }
    if ((uVar25 & 8) != 0) {
      auVar102 = insertps(auVar102,pfVar2[3],0x30);
    }
  }
  local_1b8 = auVar47._0_4_;
  fStack_1b4 = auVar47._4_4_;
  fStack_1b0 = auVar47._8_4_;
  fStack_1ac = auVar47._12_4_;
  fVar89 = auVar120._0_4_;
  fVar69 = local_1b8 - fVar89;
  fVar44 = auVar120._4_4_;
  fVar70 = fStack_1b4 - fVar44;
  auVar112._0_8_ = CONCAT44(fVar70,fVar69);
  fVar46 = auVar120._8_4_;
  auVar112._8_4_ = fStack_1b0 - fVar46;
  fVar52 = auVar120._12_4_;
  auVar112._12_4_ = fStack_1ac - fVar52;
  fVar55 = auVar103._0_4_;
  fVar56 = auVar103._4_4_;
  fVar63 = auVar103._12_4_;
  fVar54 = auVar78._0_4_;
  fVar105 = fVar55 - fVar54;
  fVar81 = auVar78._4_4_;
  fVar108 = fVar56 - fVar81;
  auVar106._0_8_ = CONCAT44(fVar108,fVar105);
  fVar82 = auVar78._8_4_;
  fVar67 = auVar103._8_4_;
  auVar106._8_4_ = fVar67 - fVar82;
  fVar83 = auVar78._12_4_;
  auVar106._12_4_ = fVar63 - fVar83;
  fVar40 = auVar85._0_4_;
  fVar71 = auVar73._0_4_;
  fVar117 = fVar71 - fVar40;
  fVar45 = auVar85._4_4_;
  fVar87 = auVar73._4_4_;
  fVar122 = fVar87 - fVar45;
  auVar118._0_8_ = CONCAT44(fVar122,fVar117);
  fVar51 = auVar85._8_4_;
  fVar88 = auVar73._8_4_;
  fVar109 = auVar73._12_4_;
  auVar118._8_4_ = fVar88 - fVar51;
  fVar53 = auVar85._12_4_;
  auVar118._12_4_ = fVar109 - fVar53;
  auVar41._0_4_ = fVar117 * fVar117 + fVar105 * fVar105 + fVar69 * fVar69;
  auVar41._4_4_ = fVar122 * fVar122 + fVar108 * fVar108 + fVar70 * fVar70;
  auVar41._8_4_ =
       auVar118._8_4_ * auVar118._8_4_ +
       auVar106._8_4_ * auVar106._8_4_ + auVar112._8_4_ * auVar112._8_4_;
  auVar41._12_4_ =
       auVar118._12_4_ * auVar118._12_4_ +
       auVar106._12_4_ * auVar106._12_4_ + auVar112._12_4_ * auVar112._12_4_;
  auVar99 = sqrtps(auVar99,auVar41);
  uVar25 = -(uint)(auVar41._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar27 = -(uint)(auVar41._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar41._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar41._12_4_ < _UNK_1506895ec);
  auVar42._4_4_ = uVar27;
  auVar42._0_4_ = uVar25;
  auVar42._8_4_ = uVar37;
  auVar42._12_4_ = uVar39;
  auVar48._8_4_ = auVar106._8_4_;
  auVar48._0_8_ = auVar106._0_8_;
  auVar48._12_4_ = auVar106._12_4_;
  auVar90 = divps(auVar48,auVar99);
  auVar79._8_4_ = auVar118._8_4_;
  auVar79._0_8_ = auVar118._0_8_;
  auVar79._12_4_ = auVar118._12_4_;
  auVar103 = divps(auVar79,auVar99);
  auVar59._8_4_ = auVar112._8_4_;
  auVar59._0_8_ = auVar112._0_8_;
  auVar59._12_4_ = auVar112._12_4_;
  auVar47 = divps(auVar59,auVar99);
  auVar12._4_4_ = _UNK_15076b1f4;
  auVar12._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar12._8_4_ = _UNK_15076b1f8;
  auVar12._12_4_ = _UNK_15076b1fc;
  auVar47 = blendvps(auVar47,auVar12,auVar42);
  auVar92._8_4_ = auVar112._8_4_;
  auVar92._0_8_ = auVar112._0_8_;
  auVar92._12_4_ = auVar112._12_4_;
  bVar33 = (bVar18 & 1) != 0;
  if (bVar33) {
    auVar92 = auVar47;
  }
  auVar98._0_8_ = CONCAT44(~uVar27 & auVar90._4_4_,~uVar25 & auVar90._0_4_);
  auVar98._8_4_ = ~uVar37 & auVar90._8_4_;
  auVar98._12_4_ = ~uVar39 & auVar90._12_4_;
  auVar101._0_8_ = CONCAT44(~uVar27 & auVar103._4_4_,~uVar25 & auVar103._0_4_);
  auVar101._8_4_ = ~uVar37 & auVar103._8_4_;
  auVar101._12_4_ = ~uVar39 & auVar103._12_4_;
  auVar80._8_4_ = auVar106._8_4_;
  auVar80._0_8_ = auVar106._0_8_;
  auVar80._12_4_ = auVar106._12_4_;
  auVar49._8_4_ = auVar118._8_4_;
  auVar49._0_8_ = auVar118._0_8_;
  auVar49._12_4_ = auVar118._12_4_;
  if (bVar33) {
    auVar80._8_4_ = auVar98._8_4_;
    auVar80._0_8_ = auVar98._0_8_;
    auVar80._12_4_ = auVar98._12_4_;
    auVar49._8_4_ = auVar101._8_4_;
    auVar49._0_8_ = auVar101._0_8_;
    auVar49._12_4_ = auVar101._12_4_;
    auVar90 = blendps(auVar112,auVar92,1);
  }
  else {
    auVar90 = blendps(auVar112,auVar92,1);
  }
  if ((bVar18 & 2) == 0) {
    auVar107 = blendps(auVar106,auVar80,1);
    auVar119 = blendps(auVar118,auVar49,1);
    auVar103 = auVar90;
    auVar78 = auVar107;
    auVar120 = auVar119;
  }
  else {
    auVar78 = blendps(auVar106,auVar80,1);
    auVar107._8_4_ = auVar98._8_4_;
    auVar107._0_8_ = auVar98._0_8_;
    auVar107._12_4_ = auVar98._12_4_;
    auVar120 = blendps(auVar118,auVar49,1);
    auVar119._8_4_ = auVar101._8_4_;
    auVar119._0_8_ = auVar101._0_8_;
    auVar119._12_4_ = auVar101._12_4_;
    auVar103 = auVar47;
  }
  auVar91 = auVar91 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar103 = blendps(auVar90,auVar103,2);
  bVar33 = (bVar18 & 4) != 0;
  auVar90 = auVar103;
  if (bVar33) {
    auVar90 = auVar47;
  }
  auVar78 = blendps(auVar78,auVar107,2);
  auVar95 = auVar78;
  if (bVar33) {
    auVar95._8_4_ = auVar98._8_4_;
    auVar95._0_8_ = auVar98._0_8_;
    auVar95._12_4_ = auVar98._12_4_;
  }
  auVar120 = blendps(auVar120,auVar119,2);
  auVar93 = auVar120;
  if (bVar33) {
    auVar93._8_4_ = auVar101._8_4_;
    auVar93._0_8_ = auVar101._0_8_;
    auVar93._12_4_ = auVar101._12_4_;
  }
  auVar73 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar19)),
                     *(undefined4 *)((ulonglong)auVar91._4_4_ + lVar20),0x10);
  auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar29)),
                     *(undefined4 *)((ulonglong)auVar91._4_4_ + lVar30),0x10);
  auVar90 = blendps(auVar103,auVar90,4);
  bVar33 = -1 < (char)bVar18;
  if (bVar33) {
    auVar47 = auVar90;
  }
  auVar103 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar91._8_4_ + lVar22),0x20);
  auVar73 = insertps(auVar85,*(undefined4 *)((ulonglong)auVar91._8_4_ + lVar31),0x20);
  auVar78 = blendps(auVar78,auVar95,4);
  if (bVar33) {
    auVar98 = auVar78;
  }
  auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar91._12_4_ + lVar24),0x30);
  auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar91._12_4_ + lVar32),0x30);
  auVar120 = blendps(auVar120,auVar93,4);
  if (bVar33) {
    auVar101 = auVar120;
  }
  param_5 = param_6 * param_5 * param_5;
  fVar122 = auVar103._0_4_;
  fVar113 = auVar103._4_4_;
  fVar114 = auVar103._12_4_;
  fVar115 = auVar73._0_4_;
  fVar116 = auVar73._4_4_;
  fVar117 = auVar103._8_4_;
  fVar121 = auVar73._8_4_;
  fVar123 = auVar73._12_4_;
  auVar68._0_4_ =
       (float)(__xmm_80000000800000008000000080000000 ^ (uint)param_5) *
       ((float)(~uVar25 & auVar99._0_4_) - (float)local_1a8._0_4_) - auVar102._0_4_;
  auVar68._4_4_ =
       (float)(_UNK_150651574 ^ (uint)param_5) *
       ((float)(~uVar27 & auVar99._4_4_) - (float)local_1a8._4_4_) - auVar102._4_4_;
  auVar68._8_4_ =
       (float)(_UNK_150651578 ^ (uint)param_5) * ((float)(~uVar37 & auVar99._8_4_) - fStack_1a0) -
       auVar102._8_4_;
  auVar68._12_4_ =
       (float)(_UNK_15065157c ^ (uint)param_5) * ((float)(~uVar39 & auVar99._12_4_) - fStack_19c) -
       auVar102._12_4_;
  auVar50._0_4_ = (fVar122 + fVar115) * param_5 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar50._4_4_ = (fVar113 + fVar116) * param_5 + _UNK_15076b1f4;
  auVar50._8_4_ = (fVar117 + fVar121) * param_5 + _UNK_15076b1f8;
  auVar50._12_4_ = (fVar114 + fVar123) * param_5 + _UNK_15076b1fc;
  auVar99 = divps(auVar68,auVar50);
  fVar105 = auVar99._0_4_;
  auVar86._0_4_ = auVar102._0_4_ + fVar105;
  fVar108 = auVar99._4_4_;
  auVar86._4_4_ = auVar102._4_4_ + fVar108;
  fVar69 = auVar99._8_4_;
  auVar86._8_4_ = auVar102._8_4_ + fVar69;
  fVar70 = auVar99._12_4_;
  auVar86._12_4_ = auVar102._12_4_ + fVar70;
  if ((bVar18 & 1) != 0) {
    *pfVar2 = auVar86._0_4_;
  }
  if ((bVar18 & 2) == 0) {
    auVar47 = blendps(auVar90,auVar47,8);
  }
  else {
    uVar11 = extractps(auVar86,1);
    *(undefined8 *)(pfVar2 + 1) = uVar11;
    auVar47 = blendps(auVar90,auVar47,8);
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar86,2);
    *(undefined8 *)(pfVar2 + 2) = uVar11;
  }
  fVar15 = (float)auVar47._12_4_ * fVar70;
  fVar14 = (float)auVar47._8_4_ * fVar69;
  fVar13 = (float)auVar47._4_4_ * fVar108;
  fVar124 = auVar47._0_4_ * fVar105;
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar86,3);
    *(undefined8 *)(pfVar2 + 3) = uVar11;
  }
  auVar60._0_4_ = local_1b8 + fVar122 * fVar124;
  auVar60._4_4_ = fStack_1b4 + fVar113 * fVar13;
  auVar60._8_4_ = fStack_1b0 + fVar117 * fVar14;
  auVar60._12_4_ = fStack_1ac + fVar114 * fVar15;
  if ((bVar18 & 1) == 0) {
    auVar47 = blendps(auVar78,auVar98,8);
  }
  else {
    *(float *)(param_1 + auVar74._0_4_) = auVar60._0_4_;
    auVar47 = blendps(auVar78,auVar98,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + auVar74._4_4_) = uVar11;
  }
  uVar17 = (float)auVar47._12_4_ * fVar70;
  uVar16 = (float)auVar47._8_4_ * fVar69;
  uVar6 = (float)auVar47._4_4_ * fVar108;
  uVar5 = (float)auVar47._0_4_ * fVar105;
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + auVar74._12_4_) = uVar11;
    auVar96._0_4_ = fVar55 + fVar122 * (float)uVar5;
    auVar96._4_4_ = fVar56 + fVar113 * (float)uVar6;
    auVar96._8_4_ = fVar67 + fVar117 * (float)uVar16;
    auVar96._12_4_ = fVar63 + fVar114 * (float)uVar17;
  }
  else {
    auVar96._0_4_ = fVar55 + fVar122 * (float)uVar5;
    auVar96._4_4_ = fVar56 + fVar113 * (float)uVar6;
    auVar96._8_4_ = fVar67 + fVar117 * (float)uVar16;
    auVar96._12_4_ = fVar63 + fVar114 * (float)uVar17;
  }
  if ((bVar18 & 1) == 0) {
    auVar47 = blendps(auVar120,auVar101,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar74._0_4_) = auVar96._0_4_;
    auVar47 = blendps(auVar120,auVar101,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._4_4_) = uVar11;
  }
  fVar70 = fVar70 * (float)auVar47._12_4_;
  fVar69 = fVar69 * (float)auVar47._8_4_;
  fVar108 = fVar108 * (float)auVar47._4_4_;
  fVar105 = fVar105 * auVar47._0_4_;
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._12_4_) = uVar11;
    auVar61._0_4_ = fVar71 + fVar122 * fVar105;
    auVar61._4_4_ = fVar87 + fVar113 * fVar108;
    auVar61._8_4_ = fVar88 + fVar117 * fVar69;
    auVar61._12_4_ = fVar109 + fVar114 * fVar70;
  }
  else {
    auVar61._0_4_ = fVar71 + fVar122 * fVar105;
    auVar61._4_4_ = fVar87 + fVar113 * fVar108;
    auVar61._8_4_ = fVar88 + fVar117 * fVar69;
    auVar61._12_4_ = fVar109 + fVar114 * fVar70;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar74._0_4_) = auVar61._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar61,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar61,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar61,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._12_4_) = uVar11;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar74._0_4_) = fVar122;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._12_4_) = uVar11;
    auVar94._0_4_ = fVar89 - fVar124 * fVar115;
    auVar94._4_4_ = fVar44 - fVar13 * fVar116;
    auVar94._8_4_ = fVar46 - fVar14 * fVar121;
    auVar94._12_4_ = fVar52 - fVar15 * fVar123;
  }
  else {
    auVar94._0_4_ = fVar89 - fVar124 * fVar115;
    auVar94._4_4_ = fVar44 - fVar13 * fVar116;
    auVar94._8_4_ = fVar46 - fVar14 * fVar121;
    auVar94._12_4_ = fVar52 - fVar15 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + auVar58._0_4_) = auVar94._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + auVar58._12_4_) = uVar11;
    auVar62._0_4_ = fVar54 - (float)uVar5 * fVar115;
    auVar62._4_4_ = fVar81 - (float)uVar6 * fVar116;
    auVar62._8_4_ = fVar82 - (float)uVar16 * fVar121;
    auVar62._12_4_ = fVar83 - (float)uVar17 * fVar123;
  }
  else {
    auVar62._0_4_ = fVar54 - (float)uVar5 * fVar115;
    auVar62._4_4_ = fVar81 - (float)uVar6 * fVar116;
    auVar62._8_4_ = fVar82 - (float)uVar16 * fVar121;
    auVar62._12_4_ = fVar83 - (float)uVar17 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar58._0_4_) = auVar62._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar62,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar62,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar62,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._12_4_) = uVar11;
    auVar43._0_4_ = fVar40 - fVar105 * fVar115;
    auVar43._4_4_ = fVar45 - fVar108 * fVar116;
    auVar43._8_4_ = fVar51 - fVar69 * fVar121;
    auVar43._12_4_ = fVar53 - fVar70 * fVar123;
  }
  else {
    auVar43._0_4_ = fVar40 - fVar105 * fVar115;
    auVar43._4_4_ = fVar45 - fVar108 * fVar116;
    auVar43._8_4_ = fVar51 - fVar69 * fVar121;
    auVar43._12_4_ = fVar53 - fVar70 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar58._0_4_) = auVar43._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar43,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar43,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar43,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._12_4_) = uVar11;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar58._0_4_) = fVar115;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._12_4_) = uVar11;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_sse4 @ 14093c530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,uint param_9)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  int unaff_R13D;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  bool bVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar75;
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar89;
  float fVar90;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar92;
  undefined1 auVar87 [16];
  float fVar91;
  float fVar93;
  undefined1 auVar88 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar102;
  int iVar105;
  int iVar106;
  float fVar107;
  int iVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  int iVar116;
  int iVar120;
  float fVar121;
  int iVar122;
  int iVar123;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar124;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar133;
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar149;
  float fVar150;
  float fVar151;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar152;
  undefined1 auVar147 [16];
  float fVar153;
  float fVar158;
  float fVar159;
  undefined1 auVar154 [16];
  float fVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 local_298 [16];
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_148 [16];
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fVar80;
  float fVar82;
  undefined1 auVar135 [16];
  undefined1 auVar141 [16];
  undefined1 auVar148 [16];
  
  uVar38 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar38 = param_9;
  }
  if ((int)(uVar38 & 0xfffffffc) < 1) {
    uVar18 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar58 = param_6 * param_7 * param_6;
    fVar63 = param_8 + param_8;
    local_1a8._4_4_ = param_7;
    local_1a8._0_4_ = param_7;
    fStack_1a0 = param_7;
    fStack_19c = param_7;
    fVar44 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar58);
    fVar53 = (float)(_UNK_150651574 ^ (uint)fVar58);
    fVar55 = (float)(_UNK_150651578 ^ (uint)fVar58);
    fVar57 = (float)(_UNK_15065157c ^ (uint)fVar58);
    uVar18 = 0;
    uVar29 = 0;
    do {
      piVar1 = (int *)(param_3 + uVar29 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar29 * 2);
      unaff_R13D = piVar3[2] << 4;
      lVar22 = (longlong)(*piVar1 << 4);
      lVar19 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar3 << 4);
      lVar32 = (longlong)unaff_R13D;
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar33 = (longlong)(piVar1[3] * 0x10);
      auVar84 = insertps(ZEXT416(*(uint *)(param_1 + lVar22)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      lVar35 = (longlong)(piVar3[1] << 4);
      lVar31 = (longlong)(piVar3[3] << 4);
      auVar70 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar22)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar77 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar22)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar145 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar33),
                          0x10);
      auVar85 = insertps(auVar84,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar145 = insertps(auVar145,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar84 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar70 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                         *(undefined4 *)(param_1 + 4 + lVar33),0x10);
      auVar146 = insertps(auVar145,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar85 = insertps(auVar85,*(undefined4 *)(param_1 + lVar32),0x30);
      fVar150 = auVar85._12_4_;
      auVar97 = insertps(auVar84,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      unaff_XMM11 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      fVar144 = unaff_XMM11._12_4_;
      auVar84 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                         *(undefined4 *)(param_1 + 8 + lVar33),0x10);
      auVar70 = insertps(auVar77,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar81 = auVar70._12_4_;
      auVar154 = insertps(auVar84,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      lVar25 = (longlong)(*piVar1 * 3);
      lVar24 = (longlong)(piVar1[2] * 3);
      auVar84 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + lVar24 * 4),0x10);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar24 * 4),0x10);
      auVar130 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar25 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar24 * 4),0x10);
      lVar24 = (longlong)(*piVar3 * 3);
      auVar145 = insertps(auVar84,*(undefined4 *)(param_2 + lVar24 * 4),0x20);
      auVar86 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar24 * 4),0x20);
      auVar131 = insertps(auVar130,*(undefined4 *)(param_2 + 8 + lVar24 * 4),0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar22);
      uVar20 = uVar29 & 0xffffffff;
      fVar142 = auVar85._0_4_;
      fVar143 = auVar146._0_4_;
      auVar132._0_4_ = fVar142 - fVar143;
      fVar75 = auVar85._4_4_;
      fVar149 = auVar146._4_4_;
      auVar132._4_4_ = fVar75 - fVar149;
      fVar76 = auVar85._8_4_;
      fVar151 = auVar146._8_4_;
      auVar132._8_4_ = fVar76 - fVar151;
      fVar152 = auVar146._12_4_;
      auVar132._12_4_ = fVar150 - fVar152;
      fVar45 = unaff_XMM11._0_4_;
      fVar134 = auVar97._0_4_;
      auVar130._0_4_ = fVar134 - fVar45;
      fVar54 = unaff_XMM11._4_4_;
      fVar137 = auVar97._4_4_;
      auVar130._4_4_ = fVar137 - fVar54;
      fVar56 = unaff_XMM11._8_4_;
      fVar67 = auVar97._8_4_;
      fVar140 = auVar97._12_4_;
      auVar130._8_4_ = fVar67 - fVar56;
      auVar130._12_4_ = fVar140 - fVar144;
      fVar94 = auVar70._0_4_;
      fVar153 = auVar154._0_4_;
      auVar146._0_4_ = fVar94 - fVar153;
      fVar100 = auVar70._4_4_;
      fVar158 = auVar154._4_4_;
      auVar146._4_4_ = fVar100 - fVar158;
      fVar82 = auVar70._8_4_;
      fVar159 = auVar154._8_4_;
      auVar146._8_4_ = fVar82 - fVar159;
      fVar160 = auVar154._12_4_;
      auVar146._12_4_ = fVar81 - fVar160;
      auVar118._0_4_ = auVar130._0_4_ * auVar130._0_4_ + auVar132._0_4_ * auVar132._0_4_;
      auVar118._4_4_ = auVar130._4_4_ * auVar130._4_4_ + auVar132._4_4_ * auVar132._4_4_;
      auVar118._8_4_ = auVar130._8_4_ * auVar130._8_4_ + auVar132._8_4_ * auVar132._8_4_;
      auVar118._12_4_ = auVar130._12_4_ * auVar130._12_4_ + auVar132._12_4_ * auVar132._12_4_;
      auVar125._0_4_ = auVar146._0_4_ * auVar146._0_4_ + auVar118._0_4_;
      auVar125._4_4_ = auVar146._4_4_ * auVar146._4_4_ + auVar118._4_4_;
      auVar125._8_4_ = auVar146._8_4_ * auVar146._8_4_ + auVar118._8_4_;
      auVar125._12_4_ = auVar146._12_4_ * auVar146._12_4_ + auVar118._12_4_;
      auVar154 = sqrtps(auVar118,auVar125);
      uVar37 = -(uint)(auVar125._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar39 = -(uint)(auVar125._4_4_ < _UNK_1506895e4);
      uVar40 = -(uint)(auVar125._8_4_ < _UNK_1506895e8);
      uVar42 = -(uint)(auVar125._12_4_ < _UNK_1506895ec);
      auVar70._4_4_ = uVar39;
      auVar70._0_4_ = uVar37;
      auVar77 = divps(auVar132,auVar154);
      auVar85 = divps(auVar130,auVar154);
      auVar70._8_4_ = uVar40;
      auVar70._12_4_ = uVar42;
      auVar84._4_4_ = _UNK_15076b1f4;
      auVar84._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar84._8_4_ = _UNK_15076b1f8;
      auVar84._12_4_ = _UNK_15076b1fc;
      auVar97 = blendvps(auVar77,auVar84,auVar70);
      auVar70 = divps(auVar146,auVar154);
      fVar124 = (float)(~uVar37 & auVar85._0_4_);
      fVar127 = (float)(~uVar39 & auVar85._4_4_);
      fVar128 = (float)(~uVar40 & auVar85._8_4_);
      fVar129 = (float)(~uVar42 & auVar85._12_4_);
      fVar133 = (float)(~uVar37 & auVar70._0_4_);
      fVar136 = (float)(~uVar39 & auVar70._4_4_);
      fVar138 = (float)(~uVar40 & auVar70._8_4_);
      fVar139 = (float)(~uVar42 & auVar70._12_4_);
      auVar70 = *(undefined1 (*) [16])(param_4 + uVar20);
      auVar130 = divps(auVar84,auVar70);
      auVar77._4_4_ = -(uint)(auVar70._4_4_ < _UNK_1506895d4);
      auVar77._0_4_ = -(uint)(auVar70._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar77._8_4_ = -(uint)(auVar70._8_4_ < _UNK_1506895d8);
      auVar77._12_4_ = -(uint)(auVar70._12_4_ < _UNK_1506895dc);
      auVar146 = blendvps(auVar130,auVar84,auVar77);
      uVar4 = *(uint *)(param_1 + 0xc + lVar19);
      auVar84 = insertps(ZEXT416(uVar17),ZEXT416(uVar4),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      auVar84 = insertps(auVar84,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar32);
      auVar84 = insertps(auVar84,ZEXT416(uVar6),0x30);
      uVar41 = *(uint *)(param_1 + 0xc + lVar21);
      uVar43 = *(uint *)(param_1 + 0xc + lVar33);
      auVar77 = insertps(ZEXT416(uVar41),ZEXT416(uVar43),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar35);
      auVar77 = insertps(auVar77,ZEXT416(uVar7),0x20);
      lVar24 = (longlong)(piVar3[2] * 3);
      uVar8 = *(uint *)(param_1 + 0xc + lVar31);
      auVar77 = insertps(auVar77,ZEXT416(uVar8),0x30);
      fVar95 = auVar84._0_4_;
      fVar80 = auVar84._4_4_;
      fVar83 = auVar84._12_4_;
      fVar89 = auVar77._0_4_;
      auVar156._0_4_ = fVar95 + fVar89;
      fVar91 = auVar77._4_4_;
      auVar156._4_4_ = fVar80 + fVar91;
      fVar93 = auVar77._8_4_;
      fVar121 = auVar84._8_4_;
      auVar156._8_4_ = fVar121 + fVar93;
      fVar107 = auVar77._12_4_;
      auVar156._12_4_ = fVar83 + fVar107;
      auVar130 = insertps(auVar145,*(undefined4 *)(param_2 + lVar24 * 4),0x30);
      auVar84 = divps(_local_1a8,auVar156);
      auVar145 = sqrtps(auVar85,auVar84);
      auVar86 = insertps(auVar86,*(undefined4 *)(param_2 + 4 + lVar24 * 4),0x30);
      auVar132 = insertps(auVar131,*(undefined4 *)(param_2 + 8 + lVar24 * 4),0x30);
      lVar25 = (longlong)(piVar1[1] * 3);
      lVar24 = (longlong)(piVar1[3] * 3);
      lVar30 = (longlong)(piVar3[1] * 3);
      lVar26 = (longlong)(piVar3[3] * 3);
      auVar84 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + lVar24 * 4),0x10);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_2 + lVar30 * 4),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_2 + lVar26 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar24 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar30 * 4),0x20);
      auVar85 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar26 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar24 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar30 * 4),0x20);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar26 * 4),0x30);
      fVar64 = auVar145._0_4_ * fVar63 * auVar146._0_4_ * param_6;
      fVar66 = auVar145._4_4_ * fVar63 * auVar146._4_4_ * param_6;
      fVar68 = auVar145._8_4_ * fVar63 * auVar146._8_4_ * param_6;
      fVar69 = auVar145._12_4_ * fVar63 * auVar146._12_4_ * param_6;
      pfVar2 = (float *)(param_5 + uVar20);
      fVar90 = *pfVar2;
      fVar92 = pfVar2[1];
      fVar96 = pfVar2[2];
      fVar101 = pfVar2[3];
      auVar131._0_4_ =
           (((float)(~uVar37 & auVar154._0_4_) - auVar70._0_4_) * fVar44 - fVar90) -
           ((((fVar94 - auVar132._0_4_) - fVar153) + auVar77._0_4_) * fVar133 +
           (((fVar134 - auVar86._0_4_) - fVar45) + auVar85._0_4_) * fVar124 +
           (((fVar142 - auVar130._0_4_) - fVar143) + auVar84._0_4_) * auVar97._0_4_) * fVar64;
      auVar131._4_4_ =
           (((float)(~uVar39 & auVar154._4_4_) - auVar70._4_4_) * fVar53 - fVar92) -
           ((((fVar100 - auVar132._4_4_) - fVar158) + auVar77._4_4_) * fVar136 +
           (((fVar137 - auVar86._4_4_) - fVar54) + auVar85._4_4_) * fVar127 +
           (((fVar75 - auVar130._4_4_) - fVar149) + auVar84._4_4_) * auVar97._4_4_) * fVar66;
      auVar131._8_4_ =
           (((float)(~uVar40 & auVar154._8_4_) - auVar70._8_4_) * fVar55 - fVar96) -
           ((((fVar82 - auVar132._8_4_) - fVar159) + auVar77._8_4_) * fVar138 +
           (((fVar67 - auVar86._8_4_) - fVar56) + auVar85._8_4_) * fVar128 +
           (((fVar76 - auVar130._8_4_) - fVar151) + auVar84._8_4_) * auVar97._8_4_) * fVar68;
      auVar131._12_4_ =
           (((float)(~uVar42 & auVar154._12_4_) - auVar70._12_4_) * fVar57 - fVar101) -
           ((((fVar81 - auVar132._12_4_) - fVar160) + auVar77._12_4_) * fVar139 +
           (((fVar140 - auVar86._12_4_) - fVar144) + auVar85._12_4_) * fVar129 +
           (((fVar150 - auVar130._12_4_) - fVar152) + auVar84._12_4_) * auVar97._12_4_) * fVar69;
      auVar86._0_4_ = (fVar64 + fVar58) * auVar156._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar86._4_4_ = (fVar66 + fVar58) * auVar156._4_4_ + _UNK_15076b1f4;
      auVar86._8_4_ = (fVar68 + fVar58) * auVar156._8_4_ + _UNK_15076b1f8;
      auVar86._12_4_ = (fVar69 + fVar58) * auVar156._12_4_ + _UNK_15076b1fc;
      auVar70 = divps(auVar131,auVar86);
      fVar109 = auVar70._0_4_;
      fVar64 = auVar97._0_4_ * fVar109;
      fVar113 = auVar70._4_4_;
      fVar66 = auVar97._4_4_ * fVar113;
      fVar114 = auVar70._8_4_;
      fVar68 = auVar97._8_4_ * fVar114;
      fVar115 = auVar70._12_4_;
      fVar69 = auVar97._12_4_ * fVar115;
      auVar85._0_4_ = fVar95 * fVar64 + fVar142;
      auVar85._4_4_ = fVar80 * fVar66 + fVar75;
      auVar85._8_4_ = fVar121 * fVar68 + fVar76;
      auVar85._12_4_ = fVar83 * fVar69 + fVar150;
      fVar124 = fVar124 * fVar109;
      fVar127 = fVar127 * fVar113;
      fVar128 = fVar128 * fVar114;
      fVar129 = fVar129 * fVar115;
      *(float *)(param_1 + lVar22) = auVar85._0_4_;
      uVar9 = extractps(auVar85,1);
      *(undefined8 *)(param_1 + lVar19) = uVar9;
      auVar97._0_4_ = fVar95 * fVar124 + fVar134;
      auVar97._4_4_ = fVar80 * fVar127 + fVar137;
      auVar97._8_4_ = fVar121 * fVar128 + fVar67;
      auVar97._12_4_ = fVar83 * fVar129 + fVar140;
      uVar9 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + lVar28) = uVar9;
      uVar9 = extractps(auVar85,3);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      fVar133 = fVar133 * fVar109;
      fVar136 = fVar136 * fVar113;
      fVar138 = fVar138 * fVar114;
      fVar139 = fVar139 * fVar115;
      *(float *)(param_1 + 4 + lVar22) = auVar97._0_4_;
      uVar9 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + 4 + lVar19) = uVar9;
      uVar9 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar9;
      auVar154._0_4_ = fVar95 * fVar133 + fVar94;
      auVar154._4_4_ = fVar80 * fVar136 + fVar100;
      auVar154._8_4_ = fVar121 * fVar138 + fVar82;
      auVar154._12_4_ = fVar83 * fVar139 + fVar81;
      uVar9 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      *(float *)(param_1 + 8 + lVar22) = auVar154._0_4_;
      uVar9 = extractps(auVar154,1);
      *(undefined8 *)(param_1 + 8 + lVar19) = uVar9;
      uVar9 = extractps(auVar154,2);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = extractps(auVar154,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      *(uint *)(param_1 + 0xc + lVar22) = uVar17;
      *(uint *)(param_1 + 0xc + lVar19) = uVar4;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      auVar147._0_4_ = fVar143 - fVar64 * fVar89;
      auVar147._4_4_ = fVar149 - fVar66 * fVar91;
      auVar147._8_4_ = fVar151 - fVar68 * fVar93;
      auVar147._12_4_ = fVar152 - fVar69 * fVar107;
      *(uint *)(param_1 + 0xc + lVar32) = uVar6;
      *(float *)(param_1 + lVar21) = auVar147._0_4_;
      uVar9 = extractps(auVar147,1);
      *(undefined8 *)(param_1 + lVar33) = uVar9;
      uVar9 = extractps(auVar147,2);
      *(undefined8 *)(param_1 + lVar35) = uVar9;
      auVar145._0_4_ = fVar45 - fVar124 * fVar89;
      auVar145._4_4_ = fVar54 - fVar127 * fVar91;
      auVar145._8_4_ = fVar56 - fVar128 * fVar93;
      auVar145._12_4_ = fVar144 - fVar129 * fVar107;
      uVar9 = extractps(auVar147,3);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      *(float *)(param_1 + 4 + lVar21) = auVar145._0_4_;
      uVar9 = extractps(auVar145,1);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar9;
      uVar9 = extractps(auVar145,2);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar9;
      auVar155._0_4_ = fVar153 - fVar133 * fVar89;
      auVar155._4_4_ = fVar158 - fVar136 * fVar91;
      auVar155._8_4_ = fVar159 - fVar138 * fVar93;
      auVar155._12_4_ = fVar160 - fVar139 * fVar107;
      uVar9 = extractps(auVar145,3);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      *(float *)(param_1 + 8 + lVar21) = auVar155._0_4_;
      uVar9 = extractps(auVar155,1);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar9;
      uVar9 = extractps(auVar155,2);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar9;
      uVar9 = extractps(auVar155,3);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      pfVar2 = (float *)(param_5 + uVar20);
      *pfVar2 = fVar109 + fVar90;
      pfVar2[1] = fVar113 + fVar92;
      pfVar2[2] = fVar114 + fVar96;
      pfVar2[3] = fVar115 + fVar101;
      *(uint *)(param_1 + 0xc + lVar21) = uVar41;
      *(uint *)(param_1 + 0xc + lVar33) = uVar43;
      *(uint *)(param_1 + 0xc + lVar35) = uVar7;
      *(uint *)(param_1 + 0xc + lVar31) = uVar8;
      uVar29 = uVar29 + 0x10;
      uVar17 = (int)uVar18 + 4;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < (int)(uVar38 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar17) {
      return;
    }
  }
  uVar38 = (uint)uVar18;
  auVar78._0_4_ =
       -(uint)((int)(uVar38 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9);
  auVar78._4_4_ =
       -(uint)((int)(uVar38 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9);
  auVar78._8_4_ = -(uint)((int)(uVar38 | _UNK_150631e08) < (int)param_9);
  auVar78._12_4_ = -(uint)((int)(uVar38 | _UNK_150631e0c) < (int)param_9);
  piVar1 = (int *)(param_3 + uVar18 * 8);
  uVar17 = movmskps(unaff_R13D,auVar78);
  bVar16 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    iVar116 = *piVar1;
    iVar102 = piVar1[1];
    iVar120 = piVar1[2];
    iVar105 = piVar1[3];
    iVar122 = piVar1[4];
    iVar106 = piVar1[5];
    iVar123 = piVar1[6];
    iVar108 = piVar1[7];
  }
  else {
    auVar46._0_4_ = ___xmm_00000018000000100000000800000000 & auVar78._0_4_;
    auVar46._4_4_ = _UNK_150b51a04 & auVar78._4_4_;
    auVar46._8_4_ = _UNK_150b51a08 & auVar78._8_4_;
    auVar46._12_4_ = _UNK_150b51a0c & auVar78._12_4_;
    lVar19 = extractps(auVar46,1);
    lVar21 = extractps(auVar46,2);
    lVar22 = extractps(auVar46,3);
    iVar116 = *piVar1;
    iVar120 = *(int *)((longlong)piVar1 + lVar19);
    iVar122 = *(int *)((longlong)piVar1 + lVar21);
    iVar123 = *(int *)((longlong)piVar1 + lVar22);
    auVar70 = ___xmm_0000001c000000140000000c00000004 & auVar78;
    iVar102 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._0_4_);
    iVar105 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._4_4_);
    iVar106 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._8_4_);
    iVar108 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._12_4_);
  }
  auVar110._0_4_ = iVar116 << 4;
  auVar110._4_4_ = iVar120 << 4;
  auVar110._8_4_ = iVar122 << 4;
  auVar110._12_4_ = iVar123 << 4;
  auVar84 = auVar78 & auVar110;
  lVar19 = param_1 + auVar84._0_4_;
  lVar21 = param_1 + auVar84._4_4_;
  lVar22 = param_1 + auVar84._8_4_;
  lVar24 = param_1 + auVar84._12_4_;
  auVar77 = ___xmm_00000004000000040000000400000004 & auVar78;
  uVar18 = (ulonglong)auVar77._0_4_;
  uVar29 = (ulonglong)auVar77._4_4_;
  local_148 = ___xmm_00000008000000080000000800000008 & auVar78;
  uVar20 = (ulonglong)local_148._0_4_;
  auVar71._0_4_ = iVar102 << 4;
  auVar71._4_4_ = iVar105 << 4;
  auVar71._8_4_ = iVar106 << 4;
  auVar71._12_4_ = iVar108 << 4;
  auVar85 = auVar78 & auVar71;
  lVar31 = (longlong)auVar85._0_4_;
  auVar70 = ZEXT416(*(uint *)(param_1 + auVar84._0_4_));
  lVar25 = param_1 + lVar31;
  lVar26 = param_1 + auVar85._4_4_;
  lVar28 = param_1 + auVar85._8_4_;
  lVar30 = param_1 + auVar85._12_4_;
  bVar36 = (bVar16 & 2) != 0;
  if (bVar36) {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._4_4_),0x10);
  }
  uVar23 = (ulonglong)local_148._4_4_;
  auVar145 = ZEXT416(*(uint *)(uVar18 + lVar19));
  uVar4 = auVar77._8_4_;
  uVar6 = auVar77._12_4_;
  uVar5 = local_148._8_4_;
  if (bVar36) {
    auVar145 = insertps(auVar145,*(undefined4 *)(uVar29 + lVar21),0x10);
    auVar97 = insertps(ZEXT416(*(uint *)(uVar20 + lVar19)),*(undefined4 *)(uVar23 + lVar21),0x10);
    auVar77 = insertps(ZEXT416(*(uint *)(param_1 + lVar31)),*(undefined4 *)(param_1 + auVar85._4_4_)
                       ,0x10);
    auVar86 = insertps(ZEXT416(*(uint *)(uVar18 + lVar25)),*(undefined4 *)(uVar29 + lVar26),0x10);
    auVar130 = insertps(ZEXT416(*(uint *)(uVar20 + lVar25)),*(undefined4 *)(uVar23 + lVar26),0x10);
  }
  else {
    auVar97 = ZEXT416(*(uint *)(uVar20 + lVar19));
    auVar77 = ZEXT416(*(uint *)(param_1 + lVar31));
    auVar86 = ZEXT416(*(uint *)(uVar18 + lVar25));
    auVar130 = ZEXT416(*(uint *)(uVar20 + lVar25));
  }
  if ((bVar16 & 4) != 0) {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._8_4_),0x20);
    auVar145 = insertps(auVar145,*(undefined4 *)((ulonglong)uVar4 + lVar22),0x20);
    auVar97 = insertps(auVar97,*(undefined4 *)((ulonglong)uVar5 + lVar22),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)(param_1 + auVar85._8_4_),0x20);
    auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar4 + lVar28),0x20);
    auVar130 = insertps(auVar130,*(undefined4 *)((ulonglong)uVar5 + lVar28),0x20);
  }
  if ((char)bVar16 < '\0') {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._12_4_),0x30);
    auVar145 = insertps(auVar145,*(undefined4 *)((ulonglong)uVar6 + lVar24),0x30);
    auVar97 = insertps(auVar97,*(undefined4 *)((ulonglong)local_148._12_4_ + lVar24),0x30);
    auVar77 = insertps(auVar77,*(undefined4 *)(param_1 + auVar85._12_4_),0x30);
    auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar6 + lVar30),0x30);
  }
  uVar34 = (ulonglong)local_148._12_4_;
  if ((char)bVar16 < '\0') {
    auVar130 = insertps(auVar130,*(undefined4 *)(uVar34 + lVar30),0x30);
  }
  lVar31 = (longlong)(int)(uVar38 << 2);
  pfVar2 = (float *)(param_5 + lVar31);
  if ((~bVar16 & 9) == 0) {
    local_148 = *(undefined1 (*) [16])(param_4 + lVar31);
    unaff_XMM11 = *(undefined1 (*) [16])(param_5 + lVar31);
  }
  else {
    puVar27 = (uint *)(param_4 + lVar31);
    if ((uVar17 & 1) != 0) {
      local_148 = ZEXT416(*puVar27);
    }
    if ((uVar17 & 2) != 0) {
      local_148 = insertps(local_148,puVar27[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      local_148 = insertps(local_148,puVar27[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      local_148 = insertps(local_148,puVar27[3],0x30);
    }
    if ((uVar17 & 1) != 0) {
      unaff_XMM11 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar17 & 2) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[3],0x30);
    }
  }
  fVar96 = auVar77._0_4_;
  fVar81 = auVar70._0_4_;
  fVar144 = fVar81 - fVar96;
  fVar101 = auVar77._4_4_;
  fVar94 = auVar70._4_4_;
  fVar150 = fVar94 - fVar101;
  auVar148._0_8_ = CONCAT44(fVar150,fVar144);
  fVar45 = auVar77._8_4_;
  fVar95 = auVar70._8_4_;
  fVar100 = auVar70._12_4_;
  auVar148._8_4_ = fVar95 - fVar45;
  fVar54 = auVar77._12_4_;
  auVar148._12_4_ = fVar100 - fVar54;
  fVar58 = auVar86._0_4_;
  fVar68 = auVar145._0_4_;
  fVar140 = fVar68 - fVar58;
  fVar63 = auVar86._4_4_;
  fVar69 = auVar145._4_4_;
  fVar142 = fVar69 - fVar63;
  auVar141._0_8_ = CONCAT44(fVar142,fVar140);
  fVar90 = auVar86._8_4_;
  fVar75 = auVar145._8_4_;
  fVar76 = auVar145._12_4_;
  auVar141._8_4_ = fVar75 - fVar90;
  fVar92 = auVar86._12_4_;
  auVar141._12_4_ = fVar76 - fVar92;
  fVar44 = auVar130._0_4_;
  fVar56 = auVar97._0_4_;
  fVar134 = fVar56 - fVar44;
  fVar53 = auVar130._4_4_;
  fVar64 = auVar97._4_4_;
  fVar137 = fVar64 - fVar53;
  auVar135._0_8_ = CONCAT44(fVar137,fVar134);
  fVar55 = auVar130._8_4_;
  fVar66 = auVar97._8_4_;
  fVar67 = auVar97._12_4_;
  auVar135._8_4_ = fVar66 - fVar55;
  fVar57 = auVar130._12_4_;
  auVar135._12_4_ = fVar67 - fVar57;
  auVar47._0_4_ = fVar144 * fVar144;
  auVar47._4_4_ = fVar150 * fVar150;
  auVar47._8_4_ = auVar148._8_4_ * auVar148._8_4_;
  auVar47._12_4_ = auVar148._12_4_ * auVar148._12_4_;
  auVar65._0_4_ = fVar134 * fVar134 + fVar140 * fVar140 + auVar47._0_4_;
  auVar65._4_4_ = fVar137 * fVar137 + fVar142 * fVar142 + auVar47._4_4_;
  auVar65._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar141._8_4_ * auVar141._8_4_ + auVar47._8_4_;
  auVar65._12_4_ =
       auVar135._12_4_ * auVar135._12_4_ + auVar141._12_4_ * auVar141._12_4_ + auVar47._12_4_;
  auVar84 = sqrtps(auVar47,auVar65);
  uVar38 = -(uint)(auVar65._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar17 = -(uint)(auVar65._4_4_ < _UNK_1506895e4);
  uVar41 = -(uint)(auVar65._8_4_ < _UNK_1506895e8);
  uVar43 = -(uint)(auVar65._12_4_ < _UNK_1506895ec);
  auVar48._4_4_ = uVar17;
  auVar48._0_4_ = uVar38;
  auVar59._8_4_ = auVar141._8_4_;
  auVar59._0_8_ = auVar141._0_8_;
  auVar59._12_4_ = auVar141._12_4_;
  auVar77 = divps(auVar59,auVar84);
  auVar72._8_4_ = auVar135._8_4_;
  auVar72._0_8_ = auVar135._0_8_;
  auVar72._12_4_ = auVar135._12_4_;
  auVar85 = divps(auVar72,auVar84);
  auVar111._8_4_ = auVar148._8_4_;
  auVar111._0_8_ = auVar148._0_8_;
  auVar111._12_4_ = auVar148._12_4_;
  auVar70 = divps(auVar111,auVar84);
  auVar48._8_4_ = uVar41;
  auVar48._12_4_ = uVar43;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar70 = blendvps(auVar70,auVar10,auVar48);
  auVar87._8_4_ = auVar148._8_4_;
  auVar87._0_8_ = auVar148._0_8_;
  auVar87._12_4_ = auVar148._12_4_;
  bVar36 = (bVar16 & 1) != 0;
  if (bVar36) {
    auVar87 = auVar70;
  }
  auVar49._0_8_ = CONCAT44(~uVar17 & auVar77._4_4_,~uVar38 & auVar77._0_4_);
  auVar49._8_4_ = ~uVar41 & auVar77._8_4_;
  auVar49._12_4_ = ~uVar43 & auVar77._12_4_;
  local_298._0_8_ = CONCAT44(~uVar17 & auVar85._4_4_,~uVar38 & auVar85._0_4_);
  local_298._8_4_ = ~uVar41 & auVar85._8_4_;
  local_298._12_4_ = ~uVar43 & auVar85._12_4_;
  auVar60._8_4_ = auVar141._8_4_;
  auVar60._0_8_ = auVar141._0_8_;
  auVar60._12_4_ = auVar141._12_4_;
  auVar73._8_4_ = auVar135._8_4_;
  auVar73._0_8_ = auVar135._0_8_;
  auVar73._12_4_ = auVar135._12_4_;
  if (bVar36) {
    auVar60._8_4_ = auVar49._8_4_;
    auVar60._0_8_ = auVar49._0_8_;
    auVar60._12_4_ = auVar49._12_4_;
    auVar73._8_4_ = local_298._8_4_;
    auVar73._0_8_ = local_298._0_8_;
    auVar73._12_4_ = local_298._12_4_;
  }
  auVar117._4_4_ = iVar120 * 3;
  auVar117._0_4_ = iVar116 * 3;
  auVar117._8_4_ = iVar122 * 3;
  auVar117._12_4_ = iVar123 * 3;
  auVar103._4_4_ = iVar105 * 3;
  auVar103._0_4_ = iVar102 * 3;
  auVar103._8_4_ = iVar106 * 3;
  auVar103._12_4_ = iVar108 * 3;
  auVar85 = blendps(auVar148,auVar87,1);
  bVar36 = (bVar16 & 2) != 0;
  auVar77 = auVar85;
  if (bVar36) {
    auVar77 = auVar70;
  }
  auVar117 = auVar117 & auVar78;
  auVar103 = auVar103 & auVar78;
  auVar145 = blendps(auVar141,auVar60,1);
  auVar61 = auVar145;
  if (bVar36) {
    auVar61._8_4_ = auVar49._8_4_;
    auVar61._0_8_ = auVar49._0_8_;
    auVar61._12_4_ = auVar49._12_4_;
  }
  auVar78 = auVar78 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar97 = blendps(auVar135,auVar73,1);
  auVar98 = auVar97;
  if (bVar36) {
    auVar98._8_4_ = local_298._8_4_;
    auVar98._0_8_ = local_298._0_8_;
    auVar98._12_4_ = local_298._12_4_;
  }
  auVar85 = blendps(auVar85,auVar77,2);
  bVar36 = (bVar16 & 4) != 0;
  auVar77 = auVar85;
  if (bVar36) {
    auVar77 = auVar70;
  }
  lVar31 = param_2 + (longlong)auVar117._0_4_ * 4;
  lVar32 = param_2 + (longlong)auVar103._0_4_ * 4;
  auVar145 = blendps(auVar145,auVar61,2);
  auVar62 = auVar145;
  if (bVar36) {
    auVar62._8_4_ = auVar49._8_4_;
    auVar62._0_8_ = auVar49._0_8_;
    auVar62._12_4_ = auVar49._12_4_;
  }
  lVar33 = param_2 + (longlong)auVar117._4_4_ * 4;
  lVar35 = param_2 + (longlong)auVar103._4_4_ * 4;
  auVar130 = blendps(auVar97,auVar98,2);
  auVar97 = auVar130;
  if (bVar36) {
    auVar97 = local_298;
  }
  auVar156 = insertps(ZEXT416(*(uint *)((ulonglong)auVar78._0_4_ + lVar19)),
                      *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar21),0x10);
  auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar78._0_4_ + lVar25)),
                      *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar26),0x10);
  auVar132 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(uVar29 + lVar33),0x10);
  auVar125 = insertps(ZEXT416(*(uint *)(uVar20 + lVar31)),*(undefined4 *)(uVar23 + lVar33),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)(uVar18 + lVar32)),*(undefined4 *)(uVar29 + lVar35),0x10);
  auVar154 = insertps(ZEXT416(*(uint *)(uVar20 + lVar32)),*(undefined4 *)(uVar23 + lVar35),0x10);
  auVar86 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar117._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar117._4_4_ * 4),0x10);
  lVar19 = param_2 + (longlong)auVar117._8_4_ * 4;
  auVar131 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar103._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar103._4_4_ * 4),0x10);
  lVar21 = param_2 + (longlong)auVar103._8_4_ * 4;
  auVar77 = blendps(auVar85,auVar77,4);
  bVar36 = -1 < (char)bVar16;
  if (bVar36) {
    auVar70 = auVar77;
  }
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar22),0x20);
  auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar28),0x20);
  lVar22 = param_2 + (longlong)auVar117._12_4_ * 4;
  auVar85 = insertps(auVar86,*(undefined4 *)(param_2 + (longlong)auVar117._8_4_ * 4),0x20);
  auVar86 = insertps(auVar132,*(undefined4 *)((ulonglong)uVar4 + lVar19),0x20);
  auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar5 + lVar19),0x20);
  auVar131 = insertps(auVar131,*(undefined4 *)(param_2 + (longlong)auVar103._8_4_ * 4),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar4 + lVar21),0x20);
  lVar19 = param_2 + (longlong)auVar103._12_4_ * 4;
  auVar132 = insertps(auVar154,*(undefined4 *)((ulonglong)uVar5 + lVar21),0x20);
  auVar145 = blendps(auVar145,auVar62,4);
  if (bVar36) {
    auVar49 = auVar145;
  }
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)auVar78._12_4_ + lVar24),0x30);
  auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar78._12_4_ + lVar30),0x30);
  auVar85 = insertps(auVar85,*(undefined4 *)(param_2 + (longlong)auVar117._12_4_ * 4),0x30);
  auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar6 + lVar22),0x30);
  auVar125 = insertps(auVar125,*(undefined4 *)(uVar34 + lVar22),0x30);
  auVar131 = insertps(auVar131,*(undefined4 *)(param_2 + (longlong)auVar103._12_4_ * 4),0x30);
  auVar154 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar6 + lVar19),0x30);
  auVar132 = insertps(auVar132,*(undefined4 *)(uVar34 + lVar19),0x30);
  auVar97 = blendps(auVar130,auVar97,4);
  if (bVar36) {
    local_298 = auVar97;
  }
  auVar130 = blendps(auVar77,auVar70,8);
  auVar145 = blendps(auVar145,auVar49,8);
  auVar77 = blendps(auVar97,local_298,8);
  local_118 = auVar84._0_4_;
  uStack_114 = auVar84._4_4_;
  uStack_110 = auVar84._8_4_;
  uStack_10c = auVar84._12_4_;
  auVar11._4_4_ = _UNK_15076b1f4;
  auVar11._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar11._8_4_ = _UNK_15076b1f8;
  auVar11._12_4_ = _UNK_15076b1fc;
  auVar70 = divps(auVar11,local_148);
  auVar50._4_4_ = -(uint)(local_148._4_4_ < _UNK_1506895d4);
  auVar50._0_4_ = -(uint)(local_148._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar50._8_4_ = -(uint)(local_148._8_4_ < _UNK_1506895d8);
  auVar50._12_4_ = -(uint)(local_148._12_4_ < _UNK_1506895dc);
  auVar84 = blendvps(auVar70,auVar11,auVar50);
  fVar144 = auVar156._0_4_;
  fVar83 = auVar146._0_4_;
  auVar79._0_4_ = fVar144 + fVar83;
  fVar150 = auVar156._4_4_;
  fVar89 = auVar146._4_4_;
  auVar79._4_4_ = fVar150 + fVar89;
  fVar80 = auVar156._8_4_;
  fVar82 = auVar156._12_4_;
  fVar91 = auVar146._8_4_;
  auVar79._8_4_ = fVar80 + fVar91;
  fVar93 = auVar146._12_4_;
  auVar79._12_4_ = fVar82 + fVar93;
  param_8 = param_8 + param_8;
  auVar51._4_4_ = param_7;
  auVar51._0_4_ = param_7;
  auVar51._8_4_ = param_7;
  auVar51._12_4_ = param_7;
  auVar70 = divps(auVar51,auVar79);
  auVar70 = sqrtps(auVar70,auVar70);
  fVar134 = param_6 * param_7 * param_6;
  fVar137 = param_6 * auVar70._0_4_ * param_8 * auVar84._0_4_;
  fVar140 = param_6 * auVar70._4_4_ * param_8 * auVar84._4_4_;
  fVar142 = param_6 * auVar70._8_4_ * param_8 * auVar84._8_4_;
  param_6 = param_6 * auVar70._12_4_ * param_8 * auVar84._12_4_;
  fVar115 = auVar145._0_4_;
  fVar121 = auVar145._4_4_;
  fVar124 = auVar145._8_4_;
  fVar127 = auVar145._12_4_;
  fVar107 = auVar77._0_4_;
  fVar109 = auVar77._4_4_;
  fVar113 = auVar77._8_4_;
  fVar114 = auVar77._12_4_;
  local_108 = unaff_XMM11._0_4_;
  fStack_104 = unaff_XMM11._4_4_;
  fStack_100 = unaff_XMM11._8_4_;
  fStack_fc = unaff_XMM11._12_4_;
  auVar52._0_4_ =
       ((float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar134) *
        ((float)(~uVar38 & local_118) - local_148._0_4_) - local_108) -
       ((((fVar56 - auVar125._0_4_) - fVar44) + auVar132._0_4_) * fVar107 +
       (((fVar68 - auVar86._0_4_) - fVar58) + auVar154._0_4_) * fVar115 +
       (((fVar81 - auVar85._0_4_) - fVar96) + auVar131._0_4_) * auVar130._0_4_) * fVar137;
  auVar52._4_4_ =
       ((float)(_UNK_150651574 ^ (uint)fVar134) * ((float)(~uVar17 & uStack_114) - local_148._4_4_)
       - fStack_104) -
       ((((fVar64 - auVar125._4_4_) - fVar53) + auVar132._4_4_) * fVar109 +
       (((fVar69 - auVar86._4_4_) - fVar63) + auVar154._4_4_) * fVar121 +
       (((fVar94 - auVar85._4_4_) - fVar101) + auVar131._4_4_) * auVar130._4_4_) * fVar140;
  auVar52._8_4_ =
       ((float)(_UNK_150651578 ^ (uint)fVar134) * ((float)(~uVar41 & uStack_110) - local_148._8_4_)
       - fStack_100) -
       ((((fVar66 - auVar125._8_4_) - fVar55) + auVar132._8_4_) * fVar113 +
       (((fVar75 - auVar86._8_4_) - fVar90) + auVar154._8_4_) * fVar124 +
       (((fVar95 - auVar85._8_4_) - fVar45) + auVar131._8_4_) * auVar130._8_4_) * fVar142;
  auVar52._12_4_ =
       ((float)(_UNK_15065157c ^ (uint)fVar134) * ((float)(~uVar43 & uStack_10c) - local_148._12_4_)
       - fStack_fc) -
       ((((fVar67 - auVar125._12_4_) - fVar57) + auVar132._12_4_) * fVar114 +
       (((fVar76 - auVar86._12_4_) - fVar92) + auVar154._12_4_) * fVar127 +
       (((fVar100 - auVar85._12_4_) - fVar54) + auVar131._12_4_) * auVar130._12_4_) * param_6;
  auVar157._0_4_ = (fVar137 + fVar134) * auVar79._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar157._4_4_ = (fVar140 + fVar134) * auVar79._4_4_ + _UNK_15076b1f4;
  auVar157._8_4_ = (fVar142 + fVar134) * auVar79._8_4_ + _UNK_15076b1f8;
  auVar157._12_4_ = (param_6 + fVar134) * auVar79._12_4_ + _UNK_15076b1fc;
  auVar70 = divps(auVar52,auVar157);
  fVar134 = auVar70._0_4_;
  auVar119._0_4_ = local_108 + fVar134;
  fVar137 = auVar70._4_4_;
  auVar119._4_4_ = fStack_104 + fVar137;
  fVar140 = auVar70._8_4_;
  auVar119._8_4_ = fStack_100 + fVar140;
  fVar142 = auVar70._12_4_;
  auVar119._12_4_ = fStack_fc + fVar142;
  if ((bVar16 & 1) != 0) {
    *pfVar2 = auVar119._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar119,1);
    *(undefined8 *)(pfVar2 + 1) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar119,2);
    *(undefined8 *)(pfVar2 + 2) = uVar9;
  }
  fVar128 = auVar130._0_4_ * fVar134;
  fVar129 = auVar130._4_4_ * fVar137;
  fVar133 = auVar130._8_4_ * fVar140;
  fVar136 = auVar130._12_4_ * fVar142;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar119,3);
    *(undefined8 *)(pfVar2 + 3) = uVar9;
  }
  auVar112._0_4_ = fVar81 + fVar144 * fVar128;
  auVar112._4_4_ = fVar94 + fVar150 * fVar129;
  auVar112._8_4_ = fVar95 + fVar80 * fVar133;
  auVar112._12_4_ = fVar100 + fVar82 * fVar136;
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + auVar110._0_4_) = auVar112._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + auVar110._8_4_) = uVar9;
  }
  uVar15 = fVar82 * fVar127 * fVar142;
  uVar14 = fVar80 * fVar124 * fVar140;
  uVar13 = fVar150 * fVar121 * fVar137;
  uVar12 = fVar144 * fVar115 * fVar134;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + auVar110._12_4_) = uVar9;
    auVar104._0_4_ = fVar68 + (float)uVar12;
    auVar104._4_4_ = fVar69 + (float)uVar13;
    auVar104._8_4_ = fVar75 + (float)uVar14;
    auVar104._12_4_ = fVar76 + (float)uVar15;
  }
  else {
    auVar104._0_4_ = fVar68 + (float)uVar12;
    auVar104._4_4_ = fVar69 + (float)uVar13;
    auVar104._8_4_ = fVar75 + (float)uVar14;
    auVar104._12_4_ = fVar76 + (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar110._0_4_) = auVar104._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar104,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar104,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._8_4_) = uVar9;
  }
  uVar15 = fVar82 * fVar114 * fVar142;
  uVar14 = fVar80 * fVar113 * fVar140;
  uVar13 = fVar150 * fVar109 * fVar137;
  uVar12 = fVar144 * fVar107 * fVar134;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar104,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._12_4_) = uVar9;
    auVar99._0_4_ = fVar56 + (float)uVar12;
    auVar99._4_4_ = fVar64 + (float)uVar13;
    auVar99._8_4_ = fVar66 + (float)uVar14;
    auVar99._12_4_ = fVar67 + (float)uVar15;
  }
  else {
    auVar99._0_4_ = fVar56 + (float)uVar12;
    auVar99._4_4_ = fVar64 + (float)uVar13;
    auVar99._8_4_ = fVar66 + (float)uVar14;
    auVar99._12_4_ = fVar67 + (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar110._0_4_) = auVar99._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._12_4_) = uVar9;
  }
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar110._0_4_) = fVar144;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar156,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar156,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar156,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._12_4_) = uVar9;
    auVar88._0_4_ = fVar96 - fVar128 * fVar83;
    auVar88._4_4_ = fVar101 - fVar129 * fVar89;
    auVar88._8_4_ = fVar45 - fVar133 * fVar91;
    auVar88._12_4_ = fVar54 - fVar136 * fVar93;
  }
  else {
    auVar88._0_4_ = fVar96 - fVar128 * fVar83;
    auVar88._4_4_ = fVar101 - fVar129 * fVar89;
    auVar88._8_4_ = fVar45 - fVar133 * fVar91;
    auVar88._12_4_ = fVar54 - fVar136 * fVar93;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + auVar71._0_4_) = auVar88._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + auVar71._8_4_) = uVar9;
  }
  uVar15 = fVar127 * fVar142 * fVar93;
  uVar14 = fVar124 * fVar140 * fVar91;
  uVar13 = fVar121 * fVar137 * fVar89;
  uVar12 = fVar115 * fVar134 * fVar83;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + auVar71._12_4_) = uVar9;
    auVar126._0_4_ = fVar58 - (float)uVar12;
    auVar126._4_4_ = fVar63 - (float)uVar13;
    auVar126._8_4_ = fVar90 - (float)uVar14;
    auVar126._12_4_ = fVar92 - (float)uVar15;
  }
  else {
    auVar126._0_4_ = fVar58 - (float)uVar12;
    auVar126._4_4_ = fVar63 - (float)uVar13;
    auVar126._8_4_ = fVar90 - (float)uVar14;
    auVar126._12_4_ = fVar92 - (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar71._0_4_) = auVar126._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._8_4_) = uVar9;
  }
  uVar15 = fVar114 * fVar142 * fVar93;
  uVar14 = fVar113 * fVar140 * fVar91;
  uVar13 = fVar109 * fVar137 * fVar89;
  uVar12 = fVar107 * fVar134 * fVar83;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._12_4_) = uVar9;
    auVar74._0_4_ = fVar44 - (float)uVar12;
    auVar74._4_4_ = fVar53 - (float)uVar13;
    auVar74._8_4_ = fVar55 - (float)uVar14;
    auVar74._12_4_ = fVar57 - (float)uVar15;
  }
  else {
    auVar74._0_4_ = fVar44 - (float)uVar12;
    auVar74._4_4_ = fVar53 - (float)uVar13;
    auVar74._8_4_ = fVar55 - (float)uVar14;
    auVar74._12_4_ = fVar57 - (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar71._0_4_) = auVar74._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar74,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar74,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar74,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._12_4_) = uVar9;
  }
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar71._0_4_) = fVar83;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar146,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar146,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar146,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_sse4 @ 14093dcd0

/* WARNING: Removing unreachable block (ram,0x00014093e76d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,undefined4 param_7,float param_8,uint param_9)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  longlong lVar27;
  int unaff_R13D;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar51;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar78;
  float fVar79;
  undefined1 auVar73 [16];
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar82;
  int iVar85;
  float fVar86;
  undefined1 auVar83 [16];
  int iVar87;
  int iVar88;
  undefined1 auVar84 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  int iVar92;
  float fVar95;
  int iVar96;
  float fVar97;
  float fVar98;
  int iVar99;
  float fVar100;
  int iVar101;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar106;
  float fVar107;
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar115;
  float fVar118;
  float fVar119;
  undefined1 auVar116 [16];
  float fVar120;
  undefined1 auVar117 [16];
  float fVar121;
  float fVar125;
  float fVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar127;
  undefined1 auVar124 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar131 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar142;
  float fVar147;
  float fVar150;
  undefined1 auVar144 [16];
  float fVar143;
  float fVar148;
  float fVar151;
  undefined1 auVar146 [16];
  undefined1 local_1c8 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_198 [16];
  float fVar108;
  undefined1 auVar132 [16];
  undefined1 auVar145 [16];
  float fVar149;
  
  uVar34 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar34 = param_9;
  }
  param_8 = param_8 + param_8;
  if ((int)(uVar34 & 0xfffffffc) < 1) {
    uVar15 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_198._4_4_ = param_7;
    local_198._0_4_ = param_7;
    local_198._8_4_ = param_7;
    local_198._12_4_ = param_7;
    uVar15 = 0;
    uVar18 = 0;
    do {
      piVar1 = (int *)(param_3 + uVar18 * 2);
      piVar4 = (int *)(param_3 + 0x10 + uVar18 * 2);
      unaff_R13D = piVar4[2] << 4;
      lVar20 = (longlong)(*piVar1 << 4);
      lVar17 = (longlong)(piVar1[2] * 0x10);
      lVar24 = (longlong)(*piVar4 << 4);
      lVar28 = (longlong)unaff_R13D;
      lVar14 = (longlong)(piVar1[1] << 4);
      lVar29 = (longlong)(piVar1[3] * 0x10);
      lVar31 = (longlong)(piVar4[1] << 4);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar17),
                          0x10);
      auVar73 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar17),0x10);
      lVar27 = (longlong)(piVar4[3] << 4);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar17),0x10);
      auVar139 = insertps(auVar138,*(undefined4 *)(param_1 + lVar24),0x20);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + lVar14)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar24),0x20);
      auVar122 = insertps(auVar138,*(undefined4 *)(param_1 + lVar31),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar24),0x20);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar14)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar123 = insertps(auVar122,*(undefined4 *)(param_1 + lVar27),0x30);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar116 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar27),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar14)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar140 = insertps(auVar139,*(undefined4 *)(param_1 + lVar28),0x30);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar139 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar28),0x30);
      fVar133 = auVar139._4_4_;
      fVar80 = auVar139._12_4_;
      auVar73 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar28),0x30);
      fVar129 = auVar73._12_4_;
      auVar110 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar27),0x30);
      lVar22 = (longlong)(*piVar1 * 3);
      lVar25 = (longlong)(piVar1[2] * 3);
      lVar21 = (longlong)(*piVar4 * 3);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + lVar25 * 4),0x10);
      auVar138 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar25 * 4),0x10);
      auVar122 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar25 * 4),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar74 = insertps(auVar138,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar83 = insertps(auVar122,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar22 = (longlong)(piVar1[1] * 3);
      lVar21 = (longlong)(piVar1[3] * 3);
      lVar25 = (longlong)(piVar4[2] * 3);
      auVar89 = insertps(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + lVar21 * 4),0x10);
      auVar138 = insertps(auVar67,*(undefined4 *)(param_2 + lVar25 * 4),0x30);
      auVar122 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar21 * 4),0x10);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_2 + 4 + lVar25 * 4),0x30);
      fVar130 = auVar140._0_4_;
      fVar134 = auVar140._4_4_;
      fVar136 = auVar140._12_4_;
      fVar121 = auVar123._0_4_;
      auVar144._0_4_ = fVar130 - fVar121;
      fVar125 = auVar123._4_4_;
      auVar144._4_4_ = fVar134 - fVar125;
      fVar126 = auVar123._8_4_;
      fVar149 = auVar140._8_4_;
      auVar144._8_4_ = fVar149 - fVar126;
      fVar127 = auVar123._12_4_;
      auVar144._12_4_ = fVar136 - fVar127;
      fVar115 = auVar116._0_4_;
      fVar128 = auVar139._0_4_;
      auVar146._0_4_ = fVar128 - fVar115;
      fVar118 = auVar116._4_4_;
      auVar146._4_4_ = fVar133 - fVar118;
      fVar119 = auVar116._8_4_;
      fVar135 = auVar139._8_4_;
      auVar146._8_4_ = fVar135 - fVar119;
      fVar120 = auVar116._12_4_;
      auVar146._12_4_ = fVar80 - fVar120;
      fVar97 = auVar73._8_4_;
      fVar143 = auVar73._0_4_;
      fVar66 = auVar110._0_4_;
      auVar123._0_4_ = fVar143 - fVar66;
      fVar106 = auVar73._4_4_;
      fVar108 = auVar110._4_4_;
      auVar123._4_4_ = fVar106 - fVar108;
      fVar113 = auVar110._8_4_;
      auVar123._8_4_ = fVar97 - fVar113;
      fVar114 = auVar110._12_4_;
      auVar123._12_4_ = fVar129 - fVar114;
      auVar139._0_4_ = auVar144._0_4_ * auVar144._0_4_;
      auVar139._4_4_ = auVar144._4_4_ * auVar144._4_4_;
      auVar139._8_4_ = auVar144._8_4_ * auVar144._8_4_;
      auVar139._12_4_ = auVar144._12_4_ * auVar144._12_4_;
      auVar116._0_4_ =
           auVar123._0_4_ * auVar123._0_4_ + auVar146._0_4_ * auVar146._0_4_ + auVar139._0_4_;
      auVar116._4_4_ =
           auVar123._4_4_ * auVar123._4_4_ + auVar146._4_4_ * auVar146._4_4_ + auVar139._4_4_;
      auVar116._8_4_ =
           auVar123._8_4_ * auVar123._8_4_ + auVar146._8_4_ * auVar146._8_4_ + auVar139._8_4_;
      auVar116._12_4_ =
           auVar123._12_4_ * auVar123._12_4_ + auVar146._12_4_ * auVar146._12_4_ + auVar139._12_4_;
      auVar67 = sqrtps(auVar139,auVar116);
      auVar110 = divps(auVar144,auVar67);
      auVar139 = divps(auVar146,auVar67);
      auVar74 = divps(auVar123,auVar67);
      uVar33 = -(uint)(auVar116._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar116._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar116._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar116._12_4_ < _UNK_1506895ec);
      auVar67._4_4_ = uVar35;
      auVar67._0_4_ = uVar33;
      auVar67._8_4_ = uVar36;
      auVar67._12_4_ = uVar38;
      auVar73._4_4_ = _UNK_15076b1f4;
      auVar73._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar73._8_4_ = _UNK_15076b1f8;
      auVar73._12_4_ = _UNK_15076b1fc;
      auVar123 = blendvps(auVar110,auVar73,auVar67);
      fVar72 = (float)(~uVar33 & auVar139._0_4_);
      fVar78 = (float)(~uVar35 & auVar139._4_4_);
      fVar79 = (float)(~uVar36 & auVar139._8_4_);
      fVar81 = (float)(~uVar38 & auVar139._12_4_);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar21 * 4),0x10);
      lVar21 = (longlong)(piVar4[1] * 3);
      auVar139 = insertps(auVar89,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar122 = insertps(auVar122,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      auVar89 = insertps(auVar83,*(undefined4 *)(param_2 + 8 + lVar25 * 4),0x30);
      lVar21 = (longlong)(piVar4[3] * 3);
      auVar116 = insertps(auVar139,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar83 = insertps(auVar122,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      fVar91 = (float)(~uVar33 & auVar74._0_4_);
      fVar95 = (float)(~uVar35 & auVar74._4_4_);
      fVar98 = (float)(~uVar36 & auVar74._8_4_);
      fVar100 = (float)(~uVar38 & auVar74._12_4_);
      uVar33 = *(uint *)(param_1 + 0xc + lVar20);
      auVar139 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      uVar16 = uVar18 & 0xffffffff;
      auVar67 = *(undefined1 (*) [16])(param_4 + uVar16);
      auVar74 = divps(auVar73,auVar67);
      auVar122._4_4_ = -(uint)(auVar67._4_4_ < _UNK_1506895d4);
      auVar122._0_4_ = -(uint)(auVar67._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar122._8_4_ = -(uint)(auVar67._8_4_ < _UNK_1506895d8);
      auVar122._12_4_ = -(uint)(auVar67._12_4_ < _UNK_1506895dc);
      auVar73 = blendvps(auVar74,auVar73,auVar122);
      uVar35 = *(uint *)(param_1 + 0xc + lVar17);
      auVar67 = insertps(ZEXT416(uVar33),ZEXT416(uVar35),0x10);
      uVar36 = *(uint *)(param_1 + 0xc + lVar24);
      auVar67 = insertps(auVar67,ZEXT416(uVar36),0x20);
      uVar38 = *(uint *)(param_1 + 0xc + lVar28);
      auVar122 = insertps(auVar67,ZEXT416(uVar38),0x30);
      uVar37 = *(uint *)(param_1 + 0xc + lVar14);
      uVar39 = *(uint *)(param_1 + 0xc + lVar29);
      auVar67 = insertps(ZEXT416(uVar37),ZEXT416(uVar39),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar31);
      auVar67 = insertps(auVar67,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar27);
      auVar67 = insertps(auVar67,ZEXT416(uVar6),0x30);
      fVar148 = auVar122._0_4_;
      fVar107 = auVar122._4_4_;
      fVar109 = auVar122._12_4_;
      fVar40 = auVar67._0_4_;
      auVar74._0_4_ = fVar148 + fVar40;
      fVar48 = auVar67._4_4_;
      auVar74._4_4_ = fVar107 + fVar48;
      fVar49 = auVar67._8_4_;
      fVar86 = auVar122._8_4_;
      auVar74._8_4_ = fVar86 + fVar49;
      fVar50 = auVar67._12_4_;
      auVar74._12_4_ = fVar109 + fVar50;
      auVar67 = divps(local_198,auVar74);
      auVar67 = sqrtps(auVar67,auVar67);
      fVar51 = auVar67._0_4_ * param_8 * auVar73._0_4_ * param_6;
      fVar57 = auVar67._4_4_ * param_8 * auVar73._4_4_ * param_6;
      fVar58 = auVar67._8_4_ * param_8 * auVar73._8_4_ * param_6;
      fVar59 = auVar67._12_4_ * param_8 * auVar73._12_4_ * param_6;
      auVar110._0_4_ = auVar74._0_4_ * fVar51 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar110._4_4_ = auVar74._4_4_ * fVar57 + _UNK_15076b1f4;
      auVar110._8_4_ = auVar74._8_4_ * fVar58 + _UNK_15076b1f8;
      auVar110._12_4_ = auVar74._12_4_ * fVar59 + _UNK_15076b1fc;
      pfVar2 = (float *)(param_5 + uVar16);
      fVar60 = *pfVar2;
      fVar63 = pfVar2[1];
      fVar64 = pfVar2[2];
      fVar65 = pfVar2[3];
      auVar131._0_4_ =
           ((((fVar143 - auVar89._0_4_) - fVar66) + auVar139._0_4_) * fVar91 +
           (((fVar128 - auVar75._0_4_) - fVar115) + auVar83._0_4_) * fVar72 +
           (((fVar130 - auVar138._0_4_) - fVar121) + auVar116._0_4_) * auVar123._0_4_) *
           (float)((uint)fVar51 ^ __xmm_80000000800000008000000080000000) - fVar60;
      auVar131._4_4_ =
           ((((fVar106 - auVar89._4_4_) - fVar108) + auVar139._4_4_) * fVar95 +
           (((fVar133 - auVar75._4_4_) - fVar118) + auVar83._4_4_) * fVar78 +
           (((fVar134 - auVar138._4_4_) - fVar125) + auVar116._4_4_) * auVar123._4_4_) *
           (float)((uint)fVar57 ^ _UNK_150651574) - fVar63;
      auVar131._8_4_ =
           ((((fVar97 - auVar89._8_4_) - fVar113) + auVar139._8_4_) * fVar98 +
           (((fVar135 - auVar75._8_4_) - fVar119) + auVar83._8_4_) * fVar79 +
           (((fVar149 - auVar138._8_4_) - fVar126) + auVar116._8_4_) * auVar123._8_4_) *
           (float)((uint)fVar58 ^ _UNK_150651578) - fVar64;
      auVar131._12_4_ =
           ((((fVar129 - auVar89._12_4_) - fVar114) + auVar139._12_4_) * fVar100 +
           (((fVar80 - auVar75._12_4_) - fVar120) + auVar83._12_4_) * fVar81 +
           (((fVar136 - auVar138._12_4_) - fVar127) + auVar116._12_4_) * auVar123._12_4_) *
           (float)((uint)fVar59 ^ _UNK_15065157c) - fVar65;
      auVar67 = divps(auVar131,auVar110);
      fVar51 = auVar67._0_4_;
      fVar142 = auVar123._0_4_ * fVar51;
      fVar57 = auVar67._4_4_;
      fVar147 = auVar123._4_4_ * fVar57;
      fVar58 = auVar67._8_4_;
      fVar150 = auVar123._8_4_ * fVar58;
      fVar59 = auVar67._12_4_;
      fVar151 = auVar123._12_4_ * fVar59;
      auVar138._0_4_ = fVar148 * fVar142 + fVar130;
      auVar138._4_4_ = fVar107 * fVar147 + fVar134;
      auVar138._8_4_ = fVar86 * fVar150 + fVar149;
      auVar138._12_4_ = fVar109 * fVar151 + fVar136;
      fVar72 = fVar72 * fVar51;
      fVar78 = fVar78 * fVar57;
      fVar79 = fVar79 * fVar58;
      fVar81 = fVar81 * fVar59;
      *(float *)(param_1 + lVar20) = auVar138._0_4_;
      uVar7 = extractps(auVar138,1);
      *(undefined8 *)(param_1 + lVar17) = uVar7;
      auVar83._0_4_ = fVar148 * fVar72 + fVar128;
      auVar83._4_4_ = fVar107 * fVar78 + fVar133;
      auVar83._8_4_ = fVar86 * fVar79 + fVar135;
      auVar83._12_4_ = fVar109 * fVar81 + fVar80;
      uVar7 = extractps(auVar138,2);
      *(undefined8 *)(param_1 + lVar24) = uVar7;
      uVar7 = extractps(auVar138,3);
      *(undefined8 *)(param_1 + lVar28) = uVar7;
      fVar91 = fVar91 * fVar51;
      fVar95 = fVar95 * fVar57;
      fVar98 = fVar98 * fVar58;
      fVar100 = fVar100 * fVar59;
      *(float *)(param_1 + 4 + lVar20) = auVar83._0_4_;
      uVar7 = extractps(auVar83,1);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar7;
      uVar7 = extractps(auVar83,2);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar7;
      auVar75._0_4_ = fVar148 * fVar91 + fVar143;
      auVar75._4_4_ = fVar107 * fVar95 + fVar106;
      auVar75._8_4_ = fVar86 * fVar98 + fVar97;
      auVar75._12_4_ = fVar109 * fVar100 + fVar129;
      uVar7 = extractps(auVar83,3);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar7;
      *(float *)(param_1 + 8 + lVar20) = auVar75._0_4_;
      uVar7 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar7;
      uVar7 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar7;
      uVar7 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar7;
      *(uint *)(param_1 + 0xc + lVar20) = uVar33;
      *(uint *)(param_1 + 0xc + lVar17) = uVar35;
      *(uint *)(param_1 + 0xc + lVar24) = uVar36;
      auVar137._0_4_ = fVar121 - fVar142 * fVar40;
      auVar137._4_4_ = fVar125 - fVar147 * fVar48;
      auVar137._8_4_ = fVar126 - fVar150 * fVar49;
      auVar137._12_4_ = fVar127 - fVar151 * fVar50;
      *(uint *)(param_1 + 0xc + lVar28) = uVar38;
      *(float *)(param_1 + lVar14) = auVar137._0_4_;
      uVar7 = extractps(auVar137,1);
      *(undefined8 *)(param_1 + lVar29) = uVar7;
      uVar7 = extractps(auVar137,2);
      *(undefined8 *)(param_1 + lVar31) = uVar7;
      auVar140._0_4_ = fVar115 - fVar72 * fVar40;
      auVar140._4_4_ = fVar118 - fVar78 * fVar48;
      auVar140._8_4_ = fVar119 - fVar79 * fVar49;
      auVar140._12_4_ = fVar120 - fVar81 * fVar50;
      uVar7 = extractps(auVar137,3);
      *(undefined8 *)(param_1 + lVar27) = uVar7;
      *(float *)(param_1 + 4 + lVar14) = auVar140._0_4_;
      uVar7 = extractps(auVar140,1);
      *(undefined8 *)(param_1 + 4 + lVar29) = uVar7;
      uVar7 = extractps(auVar140,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar7;
      auVar89._0_4_ = fVar66 - fVar91 * fVar40;
      auVar89._4_4_ = fVar108 - fVar95 * fVar48;
      auVar89._8_4_ = fVar113 - fVar98 * fVar49;
      auVar89._12_4_ = fVar114 - fVar100 * fVar50;
      uVar7 = extractps(auVar140,3);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar7;
      *(float *)(param_1 + 8 + lVar14) = auVar89._0_4_;
      uVar7 = extractps(auVar89,1);
      *(undefined8 *)(param_1 + 8 + lVar29) = uVar7;
      uVar7 = extractps(auVar89,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar7;
      uVar7 = extractps(auVar89,3);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar7;
      pfVar2 = (float *)(param_5 + uVar16);
      *pfVar2 = fVar51 + fVar60;
      pfVar2[1] = fVar57 + fVar63;
      pfVar2[2] = fVar58 + fVar64;
      pfVar2[3] = fVar59 + fVar65;
      *(uint *)(param_1 + 0xc + lVar14) = uVar37;
      *(uint *)(param_1 + 0xc + lVar29) = uVar39;
      *(uint *)(param_1 + 0xc + lVar31) = uVar5;
      *(uint *)(param_1 + 0xc + lVar27) = uVar6;
      uVar18 = uVar18 + 0x10;
      uVar33 = (int)uVar15 + 4;
      uVar15 = (ulonglong)uVar33;
    } while ((int)uVar33 < (int)(uVar34 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar33) {
      return;
    }
  }
  uVar34 = (uint)uVar15;
  auVar102._0_4_ =
       -(uint)((int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9);
  auVar102._4_4_ =
       -(uint)((int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9);
  auVar102._8_4_ = -(uint)((int)(uVar34 | _UNK_150631e08) < (int)param_9);
  auVar102._12_4_ = -(uint)((int)(uVar34 | _UNK_150631e0c) < (int)param_9);
  piVar1 = (int *)(param_3 + uVar15 * 8);
  uVar33 = movmskps(unaff_R13D,auVar102);
  bVar26 = (char)((char)uVar33 << 4) >> 4;
  if (uVar33 == 0xf) {
    iVar92 = *piVar1;
    iVar82 = piVar1[1];
    iVar96 = piVar1[2];
    iVar85 = piVar1[3];
    iVar99 = piVar1[4];
    iVar87 = piVar1[5];
    iVar101 = piVar1[6];
    iVar88 = piVar1[7];
  }
  else {
    auVar41._0_4_ = ___xmm_00000018000000100000000800000000 & auVar102._0_4_;
    auVar41._4_4_ = _UNK_150b51a04 & auVar102._4_4_;
    auVar41._8_4_ = _UNK_150b51a08 & auVar102._8_4_;
    auVar41._12_4_ = _UNK_150b51a0c & auVar102._12_4_;
    lVar14 = extractps(auVar41,1);
    lVar17 = extractps(auVar41,2);
    lVar20 = extractps(auVar41,3);
    iVar92 = *piVar1;
    iVar96 = *(int *)((longlong)piVar1 + lVar14);
    iVar99 = *(int *)((longlong)piVar1 + lVar17);
    iVar101 = *(int *)((longlong)piVar1 + lVar20);
    auVar67 = ___xmm_0000001c000000140000000c00000004 & auVar102;
    iVar82 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._0_4_);
    iVar85 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._4_4_);
    iVar87 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._8_4_);
    iVar88 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._12_4_);
  }
  auVar76._0_4_ = iVar92 << 4;
  auVar76._4_4_ = iVar96 << 4;
  auVar76._8_4_ = iVar99 << 4;
  auVar76._12_4_ = iVar101 << 4;
  auVar73 = auVar102 & auVar76;
  lVar14 = param_1 + auVar73._0_4_;
  lVar17 = param_1 + auVar73._4_4_;
  lVar20 = param_1 + auVar73._8_4_;
  lVar21 = param_1 + auVar73._12_4_;
  auVar138 = ___xmm_00000004000000040000000400000004 & auVar102;
  uVar15 = (ulonglong)auVar138._0_4_;
  uVar18 = (ulonglong)auVar138._4_4_;
  local_1c8 = ___xmm_00000008000000080000000800000008 & auVar102;
  uVar16 = (ulonglong)local_1c8._0_4_;
  auVar68._0_4_ = iVar82 << 4;
  auVar68._4_4_ = iVar85 << 4;
  auVar68._8_4_ = iVar87 << 4;
  auVar68._12_4_ = iVar88 << 4;
  auVar122 = auVar102 & auVar68;
  lVar28 = (longlong)auVar122._0_4_;
  auVar67 = ZEXT416(*(uint *)(param_1 + auVar73._0_4_));
  lVar22 = param_1 + lVar28;
  lVar24 = param_1 + auVar122._4_4_;
  lVar25 = param_1 + auVar122._8_4_;
  lVar27 = param_1 + auVar122._12_4_;
  bVar32 = (bVar26 & 2) != 0;
  if (bVar32) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._4_4_),0x10);
  }
  uVar19 = (ulonglong)local_1c8._4_4_;
  auVar139 = ZEXT416(*(uint *)(uVar15 + lVar14));
  if (bVar32) {
    auVar139 = insertps(auVar139,*(undefined4 *)(uVar18 + lVar17),0x10);
  }
  auVar74 = ZEXT416(*(uint *)(uVar16 + lVar14));
  if (bVar32) {
    auVar74 = insertps(auVar74,*(undefined4 *)(uVar19 + lVar17),0x10);
    auVar75 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),
                       *(undefined4 *)(param_1 + auVar122._4_4_),0x10);
    auVar83 = insertps(ZEXT416(*(uint *)(uVar15 + lVar22)),*(undefined4 *)(uVar18 + lVar24),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar16 + lVar22)),*(undefined4 *)(uVar19 + lVar24),0x10);
  }
  else {
    auVar75 = ZEXT416(*(uint *)(param_1 + lVar28));
    auVar83 = ZEXT416(*(uint *)(uVar15 + lVar22));
    auVar89 = ZEXT416(*(uint *)(uVar16 + lVar22));
  }
  uVar30 = (ulonglong)auVar138._8_4_;
  uVar36 = auVar138._12_4_;
  uVar35 = local_1c8._8_4_;
  uVar38 = local_1c8._12_4_;
  if ((bVar26 & 4) != 0) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._8_4_),0x20);
    auVar139 = insertps(auVar139,*(undefined4 *)(uVar30 + lVar20),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)uVar35 + lVar20),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + auVar122._8_4_),0x20);
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar30 + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar35 + lVar25),0x20);
  }
  if ((char)bVar26 < '\0') {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._12_4_),0x30);
    auVar139 = insertps(auVar139,*(undefined4 *)((ulonglong)uVar36 + lVar21),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)uVar38 + lVar21),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + auVar122._12_4_),0x30);
    auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar36 + lVar27),0x30);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar38 + lVar27),0x30);
  }
  lVar28 = (longlong)(int)(uVar34 << 2);
  pfVar2 = (float *)(param_5 + lVar28);
  if ((~bVar26 & 9) == 0) {
    local_1c8 = *(undefined1 (*) [16])(param_4 + lVar28);
    auVar73 = *(undefined1 (*) [16])(param_5 + lVar28);
  }
  else {
    puVar23 = (uint *)(param_4 + lVar28);
    if ((uVar33 & 1) != 0) {
      local_1c8 = ZEXT416(*puVar23);
    }
    if ((uVar33 & 2) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[1],0x10);
    }
    if ((uVar33 & 4) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[2],0x20);
    }
    if ((uVar33 & 8) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[3],0x30);
    }
    auVar73 = local_1c8;
    if ((uVar33 & 1) != 0) {
      auVar73 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar33 & 2) != 0) {
      auVar73 = insertps(auVar73,pfVar2[1],0x10);
    }
    if ((uVar33 & 4) != 0) {
      auVar73 = insertps(auVar73,pfVar2[2],0x20);
    }
    if ((uVar33 & 8) != 0) {
      auVar73 = insertps(auVar73,pfVar2[3],0x30);
    }
  }
  fVar51 = auVar75._0_4_;
  fVar72 = auVar67._0_4_;
  fVar129 = fVar72 - fVar51;
  fVar57 = auVar75._4_4_;
  fVar78 = auVar67._4_4_;
  fVar133 = fVar78 - fVar57;
  auVar132._0_8_ = CONCAT44(fVar133,fVar129);
  fVar58 = auVar75._8_4_;
  fVar79 = auVar67._8_4_;
  fVar80 = auVar67._12_4_;
  auVar132._8_4_ = fVar79 - fVar58;
  fVar59 = auVar75._12_4_;
  auVar132._12_4_ = fVar80 - fVar59;
  fVar40 = auVar83._0_4_;
  fVar100 = auVar139._0_4_;
  fVar143 = fVar100 - fVar40;
  fVar48 = auVar83._4_4_;
  fVar106 = auVar139._4_4_;
  fVar148 = fVar106 - fVar48;
  auVar145._0_8_ = CONCAT44(fVar148,fVar143);
  fVar49 = auVar83._8_4_;
  fVar107 = auVar139._8_4_;
  fVar109 = auVar139._12_4_;
  auVar145._8_4_ = fVar107 - fVar49;
  fVar50 = auVar83._12_4_;
  auVar145._12_4_ = fVar109 - fVar50;
  fVar60 = auVar89._0_4_;
  fVar86 = auVar74._0_4_;
  fVar81 = fVar86 - fVar60;
  fVar63 = auVar89._4_4_;
  fVar95 = auVar74._4_4_;
  fVar91 = fVar95 - fVar63;
  auVar141._0_8_ = CONCAT44(fVar91,fVar81);
  fVar64 = auVar89._8_4_;
  fVar97 = auVar74._8_4_;
  fVar98 = auVar74._12_4_;
  auVar141._8_4_ = fVar97 - fVar64;
  fVar65 = auVar89._12_4_;
  auVar141._12_4_ = fVar98 - fVar65;
  auVar42._0_4_ = fVar81 * fVar81 + fVar143 * fVar143 + fVar129 * fVar129;
  auVar42._4_4_ = fVar91 * fVar91 + fVar148 * fVar148 + fVar133 * fVar133;
  auVar42._8_4_ =
       auVar141._8_4_ * auVar141._8_4_ +
       auVar145._8_4_ * auVar145._8_4_ + auVar132._8_4_ * auVar132._8_4_;
  auVar42._12_4_ =
       auVar141._12_4_ * auVar141._12_4_ +
       auVar145._12_4_ * auVar145._12_4_ + auVar132._12_4_ * auVar132._12_4_;
  auVar67 = sqrtps(auVar68,auVar42);
  uVar34 = -(uint)(auVar42._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar33 = -(uint)(auVar42._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar42._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar42._12_4_ < _UNK_1506895ec);
  auVar43._4_4_ = uVar33;
  auVar43._0_4_ = uVar34;
  auVar43._8_4_ = uVar37;
  auVar43._12_4_ = uVar39;
  auVar52._8_4_ = auVar145._8_4_;
  auVar52._0_8_ = auVar145._0_8_;
  auVar52._12_4_ = auVar145._12_4_;
  auVar138 = divps(auVar52,auVar67);
  auVar61._8_4_ = auVar141._8_4_;
  auVar61._0_8_ = auVar141._0_8_;
  auVar61._12_4_ = auVar141._12_4_;
  auVar122 = divps(auVar61,auVar67);
  auVar111._8_4_ = auVar132._8_4_;
  auVar111._0_8_ = auVar132._0_8_;
  auVar111._12_4_ = auVar132._12_4_;
  auVar67 = divps(auVar111,auVar67);
  auVar8._4_4_ = _UNK_15076b1f4;
  auVar8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar8._8_4_ = _UNK_15076b1f8;
  auVar8._12_4_ = _UNK_15076b1fc;
  auVar67 = blendvps(auVar67,auVar8,auVar43);
  auVar69._8_4_ = auVar132._8_4_;
  auVar69._0_8_ = auVar132._0_8_;
  auVar69._12_4_ = auVar132._12_4_;
  bVar32 = (bVar26 & 1) != 0;
  if (bVar32) {
    auVar69 = auVar67;
  }
  auVar117._0_8_ = CONCAT44(~uVar33 & auVar138._4_4_,~uVar34 & auVar138._0_4_);
  auVar117._8_4_ = ~uVar37 & auVar138._8_4_;
  auVar117._12_4_ = ~uVar39 & auVar138._12_4_;
  auVar44._0_8_ = CONCAT44(~uVar33 & auVar122._4_4_,~uVar34 & auVar122._0_4_);
  auVar44._8_4_ = ~uVar37 & auVar122._8_4_;
  auVar44._12_4_ = ~uVar39 & auVar122._12_4_;
  auVar53._8_4_ = auVar145._8_4_;
  auVar53._0_8_ = auVar145._0_8_;
  auVar53._12_4_ = auVar145._12_4_;
  auVar62._8_4_ = auVar141._8_4_;
  auVar62._0_8_ = auVar141._0_8_;
  auVar62._12_4_ = auVar141._12_4_;
  if (bVar32) {
    auVar53._8_4_ = auVar117._8_4_;
    auVar53._0_8_ = auVar117._0_8_;
    auVar53._12_4_ = auVar117._12_4_;
    auVar62._8_4_ = auVar44._8_4_;
    auVar62._0_8_ = auVar44._0_8_;
    auVar62._12_4_ = auVar44._12_4_;
  }
  auVar93._4_4_ = iVar96 * 3;
  auVar93._0_4_ = iVar92 * 3;
  auVar93._8_4_ = iVar99 * 3;
  auVar93._12_4_ = iVar101 * 3;
  auVar84._4_4_ = iVar85 * 3;
  auVar84._0_4_ = iVar82 * 3;
  auVar84._8_4_ = iVar87 * 3;
  auVar84._12_4_ = iVar88 * 3;
  auVar122 = blendps(auVar132,auVar69,1);
  bVar32 = (bVar26 & 2) != 0;
  auVar138 = auVar122;
  if (bVar32) {
    auVar138 = auVar67;
  }
  auVar93 = auVar93 & auVar102;
  auVar84 = auVar84 & auVar102;
  auVar139 = blendps(auVar145,auVar53,1);
  auVar54 = auVar139;
  if (bVar32) {
    auVar54._8_4_ = auVar117._8_4_;
    auVar54._0_8_ = auVar117._0_8_;
    auVar54._12_4_ = auVar117._12_4_;
  }
  auVar102 = auVar102 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar74 = blendps(auVar141,auVar62,1);
  auVar70 = auVar74;
  if (bVar32) {
    auVar70._8_4_ = auVar44._8_4_;
    auVar70._0_8_ = auVar44._0_8_;
    auVar70._12_4_ = auVar44._12_4_;
  }
  auVar122 = blendps(auVar122,auVar138,2);
  bVar32 = (bVar26 & 4) != 0;
  auVar138 = auVar122;
  if (bVar32) {
    auVar138 = auVar67;
  }
  lVar28 = param_2 + (longlong)auVar93._0_4_ * 4;
  lVar29 = param_2 + (longlong)auVar84._0_4_ * 4;
  auVar139 = blendps(auVar139,auVar54,2);
  auVar55 = auVar139;
  if (bVar32) {
    auVar55._8_4_ = auVar117._8_4_;
    auVar55._0_8_ = auVar117._0_8_;
    auVar55._12_4_ = auVar117._12_4_;
  }
  lVar31 = param_2 + (longlong)auVar93._4_4_ * 4;
  lVar3 = param_2 + (longlong)auVar84._4_4_ * 4;
  auVar74 = blendps(auVar74,auVar70,2);
  auVar71 = auVar74;
  if (bVar32) {
    auVar71._8_4_ = auVar44._8_4_;
    auVar71._0_8_ = auVar44._0_8_;
    auVar71._12_4_ = auVar44._12_4_;
  }
  auVar75 = insertps(ZEXT416(*(uint *)((ulonglong)auVar102._0_4_ + lVar14)),
                     *(undefined4 *)((ulonglong)auVar102._4_4_ + lVar17),0x10);
  auVar137 = insertps(ZEXT416(*(uint *)((ulonglong)auVar102._0_4_ + lVar22)),
                      *(undefined4 *)((ulonglong)auVar102._4_4_ + lVar24),0x10);
  auVar116 = insertps(ZEXT416(*(uint *)(uVar15 + lVar28)),*(undefined4 *)(uVar18 + lVar31),0x10);
  auVar89 = insertps(ZEXT416(*(uint *)(uVar16 + lVar28)),*(undefined4 *)(uVar19 + lVar31),0x10);
  auVar123 = insertps(ZEXT416(*(uint *)(uVar15 + lVar29)),*(undefined4 *)(uVar18 + lVar3),0x10);
  auVar110 = insertps(ZEXT416(*(uint *)(uVar16 + lVar29)),*(undefined4 *)(uVar19 + lVar3),0x10);
  auVar83 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar93._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar93._4_4_ * 4),0x10);
  lVar14 = param_2 + (longlong)auVar93._8_4_ * 4;
  auVar140 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar84._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar84._4_4_ * 4),0x10);
  lVar17 = param_2 + (longlong)auVar84._8_4_ * 4;
  auVar138 = blendps(auVar122,auVar138,4);
  bVar32 = -1 < (char)bVar26;
  if (bVar32) {
    auVar67 = auVar138;
  }
  auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar102._8_4_ + lVar20),0x20);
  auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)auVar102._8_4_ + lVar25),0x20);
  lVar20 = param_2 + (longlong)auVar93._12_4_ * 4;
  auVar122 = insertps(auVar83,*(undefined4 *)(param_2 + (longlong)auVar93._8_4_ * 4),0x20);
  auVar116 = insertps(auVar116,*(undefined4 *)(uVar30 + lVar14),0x20);
  auVar83 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar35 + lVar14),0x20);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_2 + (longlong)auVar84._8_4_ * 4),0x20);
  auVar123 = insertps(auVar123,*(undefined4 *)(uVar30 + lVar17),0x20);
  lVar14 = param_2 + (longlong)auVar84._12_4_ * 4;
  auVar89 = insertps(auVar110,*(undefined4 *)((ulonglong)uVar35 + lVar17),0x20);
  auVar139 = blendps(auVar139,auVar55,4);
  if (bVar32) {
    auVar117 = auVar139;
  }
  auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar102._12_4_ + lVar21),0x30);
  auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)auVar102._12_4_ + lVar27),0x30);
  auVar122 = insertps(auVar122,*(undefined4 *)(param_2 + (longlong)auVar93._12_4_ * 4),0x30);
  auVar110 = insertps(auVar116,*(undefined4 *)((ulonglong)uVar36 + lVar20),0x30);
  auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar38 + lVar20),0x30);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_2 + (longlong)auVar84._12_4_ * 4),0x30);
  auVar116 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar36 + lVar14),0x30);
  auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar38 + lVar14),0x30);
  auVar74 = blendps(auVar74,auVar71,4);
  if (bVar32) {
    auVar44 = auVar74;
  }
  auVar123 = blendps(auVar138,auVar67,8);
  auVar146 = blendps(auVar139,auVar117,8);
  auVar9._4_4_ = _UNK_15076b1f4;
  auVar9._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar9._8_4_ = _UNK_15076b1f8;
  auVar9._12_4_ = _UNK_15076b1fc;
  auVar67 = divps(auVar9,local_1c8);
  auVar45._4_4_ = -(uint)(local_1c8._4_4_ < _UNK_1506895d4);
  auVar45._0_4_ = -(uint)(local_1c8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar139 = blendps(auVar74,auVar44,8);
  auVar45._8_4_ = -(uint)(local_1c8._8_4_ < _UNK_1506895d8);
  auVar45._12_4_ = -(uint)(local_1c8._12_4_ < _UNK_1506895dc);
  auVar138 = blendvps(auVar67,auVar9,auVar45);
  fVar143 = auVar75._0_4_;
  fVar148 = auVar75._4_4_;
  fVar66 = auVar75._12_4_;
  fVar113 = auVar137._0_4_;
  auVar103._0_4_ = fVar143 + fVar113;
  fVar114 = auVar137._4_4_;
  auVar103._4_4_ = fVar148 + fVar114;
  fVar108 = auVar75._8_4_;
  fVar115 = auVar137._8_4_;
  auVar103._8_4_ = fVar108 + fVar115;
  fVar118 = auVar137._12_4_;
  auVar103._12_4_ = fVar66 + fVar118;
  auVar46._4_4_ = param_7;
  auVar46._0_4_ = param_7;
  auVar46._8_4_ = param_7;
  auVar46._12_4_ = param_7;
  auVar67 = divps(auVar46,auVar103);
  auVar67 = sqrtps(auVar67,auVar67);
  fVar129 = param_6 * auVar67._0_4_ * param_8 * auVar138._0_4_;
  fVar133 = param_6 * auVar67._4_4_ * param_8 * auVar138._4_4_;
  fVar81 = param_6 * auVar67._8_4_ * param_8 * auVar138._8_4_;
  param_6 = param_6 * auVar67._12_4_ * param_8 * auVar138._12_4_;
  fVar126 = auVar146._0_4_;
  fVar127 = auVar146._4_4_;
  fVar128 = auVar146._8_4_;
  fVar135 = auVar146._12_4_;
  fVar119 = auVar139._0_4_;
  fVar120 = auVar139._4_4_;
  fVar121 = auVar139._8_4_;
  fVar125 = auVar139._12_4_;
  auVar104._0_4_ = auVar103._0_4_ * fVar129 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar104._4_4_ = auVar103._4_4_ * fVar133 + _UNK_15076b1f4;
  auVar104._8_4_ = auVar103._8_4_ * fVar81 + _UNK_15076b1f8;
  auVar104._12_4_ = auVar103._12_4_ * param_6 + _UNK_15076b1fc;
  local_1b8 = auVar73._0_4_;
  fStack_1b4 = auVar73._4_4_;
  fStack_1b0 = auVar73._8_4_;
  fStack_1ac = auVar73._12_4_;
  auVar47._0_4_ =
       ((((fVar86 - auVar83._0_4_) - fVar60) + auVar89._0_4_) * fVar119 +
       (((fVar100 - auVar110._0_4_) - fVar40) + auVar116._0_4_) * fVar126 +
       (((fVar72 - auVar122._0_4_) - fVar51) + auVar140._0_4_) * auVar123._0_4_) *
       (float)((uint)fVar129 ^ __xmm_80000000800000008000000080000000) - local_1b8;
  auVar47._4_4_ =
       ((((fVar95 - auVar83._4_4_) - fVar63) + auVar89._4_4_) * fVar120 +
       (((fVar106 - auVar110._4_4_) - fVar48) + auVar116._4_4_) * fVar127 +
       (((fVar78 - auVar122._4_4_) - fVar57) + auVar140._4_4_) * auVar123._4_4_) *
       (float)((uint)fVar133 ^ _UNK_150651574) - fStack_1b4;
  auVar47._8_4_ =
       ((((fVar97 - auVar83._8_4_) - fVar64) + auVar89._8_4_) * fVar121 +
       (((fVar107 - auVar110._8_4_) - fVar49) + auVar116._8_4_) * fVar128 +
       (((fVar79 - auVar122._8_4_) - fVar58) + auVar140._8_4_) * auVar123._8_4_) *
       (float)((uint)fVar81 ^ _UNK_150651578) - fStack_1b0;
  auVar47._12_4_ =
       ((((fVar98 - auVar83._12_4_) - fVar65) + auVar89._12_4_) * fVar125 +
       (((fVar109 - auVar110._12_4_) - fVar50) + auVar116._12_4_) * fVar135 +
       (((fVar80 - auVar122._12_4_) - fVar59) + auVar140._12_4_) * auVar123._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_1ac;
  auVar67 = divps(auVar47,auVar104);
  fVar129 = auVar67._0_4_;
  auVar56._0_4_ = local_1b8 + fVar129;
  fVar133 = auVar67._4_4_;
  auVar56._4_4_ = fStack_1b4 + fVar133;
  fVar81 = auVar67._8_4_;
  auVar56._8_4_ = fStack_1b0 + fVar81;
  fVar91 = auVar67._12_4_;
  auVar56._12_4_ = fStack_1ac + fVar91;
  if ((bVar26 & 1) != 0) {
    *pfVar2 = auVar56._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar56,1);
    *(undefined8 *)(pfVar2 + 1) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar56,2);
    *(undefined8 *)(pfVar2 + 2) = uVar7;
  }
  fVar130 = auVar123._0_4_ * fVar129;
  fVar134 = auVar123._4_4_ * fVar133;
  fVar136 = auVar123._8_4_ * fVar81;
  fVar142 = auVar123._12_4_ * fVar91;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar56,3);
    *(undefined8 *)(pfVar2 + 3) = uVar7;
  }
  auVar112._0_4_ = fVar72 + fVar143 * fVar130;
  auVar112._4_4_ = fVar78 + fVar148 * fVar134;
  auVar112._8_4_ = fVar79 + fVar108 * fVar136;
  auVar112._12_4_ = fVar80 + fVar66 * fVar142;
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + auVar76._0_4_) = auVar112._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + auVar76._8_4_) = uVar7;
  }
  uVar13 = fVar66 * fVar135 * fVar91;
  uVar12 = fVar108 * fVar128 * fVar81;
  uVar11 = fVar148 * fVar127 * fVar133;
  uVar10 = fVar143 * fVar126 * fVar129;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + auVar76._12_4_) = uVar7;
    auVar105._0_4_ = fVar100 + (float)uVar10;
    auVar105._4_4_ = fVar106 + (float)uVar11;
    auVar105._8_4_ = fVar107 + (float)uVar12;
    auVar105._12_4_ = fVar109 + (float)uVar13;
  }
  else {
    auVar105._0_4_ = fVar100 + (float)uVar10;
    auVar105._4_4_ = fVar106 + (float)uVar11;
    auVar105._8_4_ = fVar107 + (float)uVar12;
    auVar105._12_4_ = fVar109 + (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar76._0_4_) = auVar105._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar105,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar105,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._8_4_) = uVar7;
  }
  uVar13 = fVar66 * fVar125 * fVar91;
  uVar12 = fVar108 * fVar121 * fVar81;
  uVar11 = fVar148 * fVar120 * fVar133;
  uVar10 = fVar143 * fVar119 * fVar129;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar105,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._12_4_) = uVar7;
    auVar94._0_4_ = fVar86 + (float)uVar10;
    auVar94._4_4_ = fVar95 + (float)uVar11;
    auVar94._8_4_ = fVar97 + (float)uVar12;
    auVar94._12_4_ = fVar98 + (float)uVar13;
  }
  else {
    auVar94._0_4_ = fVar86 + (float)uVar10;
    auVar94._4_4_ = fVar95 + (float)uVar11;
    auVar94._8_4_ = fVar97 + (float)uVar12;
    auVar94._12_4_ = fVar98 + (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar76._0_4_) = auVar94._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._12_4_) = uVar7;
  }
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar76._0_4_) = fVar143;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar75,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar75,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar75,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._12_4_) = uVar7;
    auVar77._0_4_ = fVar51 - fVar130 * fVar113;
    auVar77._4_4_ = fVar57 - fVar134 * fVar114;
    auVar77._8_4_ = fVar58 - fVar136 * fVar115;
    auVar77._12_4_ = fVar59 - fVar142 * fVar118;
  }
  else {
    auVar77._0_4_ = fVar51 - fVar130 * fVar113;
    auVar77._4_4_ = fVar57 - fVar134 * fVar114;
    auVar77._8_4_ = fVar58 - fVar136 * fVar115;
    auVar77._12_4_ = fVar59 - fVar142 * fVar118;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + auVar68._0_4_) = auVar77._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + auVar68._8_4_) = uVar7;
  }
  uVar13 = fVar135 * fVar91 * fVar118;
  uVar12 = fVar128 * fVar81 * fVar115;
  uVar11 = fVar127 * fVar133 * fVar114;
  uVar10 = fVar126 * fVar129 * fVar113;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + auVar68._12_4_) = uVar7;
    auVar90._0_4_ = fVar40 - (float)uVar10;
    auVar90._4_4_ = fVar48 - (float)uVar11;
    auVar90._8_4_ = fVar49 - (float)uVar12;
    auVar90._12_4_ = fVar50 - (float)uVar13;
  }
  else {
    auVar90._0_4_ = fVar40 - (float)uVar10;
    auVar90._4_4_ = fVar48 - (float)uVar11;
    auVar90._8_4_ = fVar49 - (float)uVar12;
    auVar90._12_4_ = fVar50 - (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar68._0_4_) = auVar90._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._8_4_) = uVar7;
  }
  uVar13 = fVar125 * fVar91 * fVar118;
  uVar12 = fVar121 * fVar81 * fVar115;
  uVar11 = fVar120 * fVar133 * fVar114;
  uVar10 = fVar119 * fVar129 * fVar113;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._12_4_) = uVar7;
    auVar124._0_4_ = fVar60 - (float)uVar10;
    auVar124._4_4_ = fVar63 - (float)uVar11;
    auVar124._8_4_ = fVar64 - (float)uVar12;
    auVar124._12_4_ = fVar65 - (float)uVar13;
  }
  else {
    auVar124._0_4_ = fVar60 - (float)uVar10;
    auVar124._4_4_ = fVar63 - (float)uVar11;
    auVar124._8_4_ = fVar64 - (float)uVar12;
    auVar124._12_4_ = fVar65 - (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar68._0_4_) = auVar124._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar124,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar124,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar124,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._12_4_) = uVar7;
  }
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar68._0_4_) = fVar113;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar137,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar137,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar137,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._12_4_) = uVar7;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 14093f3c0

/* WARNING: Removing unreachable block (ram,0x00014093fd2a) */
/* WARNING: Removing unreachable block (ram,0x00014093fcca) */
/* WARNING: Removing unreachable block (ram,0x00014093fc3e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,float param_5,
               longlong param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  int iVar56;
  float fVar57;
  int iVar63;
  int iVar66;
  undefined1 auVar59 [16];
  float fVar64;
  int iVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar107;
  float fVar108;
  undefined1 auVar105 [16];
  float fVar109;
  undefined1 auVar106 [16];
  float fVar110;
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar120 [16];
  float fVar124;
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar126 [16];
  float fVar132;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float fVar58;
  undefined1 auVar60 [16];
  float fVar65;
  int iVar68;
  int iVar72;
  int iVar74;
  int iVar75;
  
  uVar34 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar34 = param_8;
  }
  if ((int)(uVar34 & 0xfffffffc) < 1) {
    uVar22 = 0;
    uVar24 = param_3;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar24 * 2);
      piVar4 = (int *)(param_2 + 0x10 + uVar24 * 2);
      lVar31 = (longlong)(*piVar1 << 4);
      lVar27 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar4 << 4);
      lVar30 = (longlong)(piVar4[2] << 4);
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar18 = (longlong)(piVar1[3] * 0x10);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar31)),*(undefined4 *)(param_1 + lVar27),
                          0x10);
      auVar95 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar31)),
                         *(undefined4 *)(param_1 + 4 + lVar27),0x10);
      lVar26 = (longlong)(piVar4[1] << 4);
      lVar25 = (longlong)(piVar4[3] << 4);
      auVar79 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar31)),
                         *(undefined4 *)(param_1 + 8 + lVar27),0x10);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar18),
                          0x10);
      auVar96 = insertps(auVar95,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar95 = insertps(auVar100,*(undefined4 *)(param_1 + lVar26),0x20);
      auVar102 = insertps(auVar101,*(undefined4 *)(param_1 + lVar30),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                          *(undefined4 *)(param_1 + 4 + lVar18),0x10);
      auVar97 = insertps(auVar96,*(undefined4 *)(param_1 + 4 + lVar30),0x30);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar26),0x20);
      auVar86 = insertps(auVar95,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                          *(undefined4 *)(param_1 + 8 + lVar18),0x10);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_1 + 8 + lVar30),0x30);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar26),0x20);
      auVar79 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      auVar95 = pmovzxbd(auVar79,*(undefined4 *)(param_6 + uVar22));
      auVar100 = insertps(ZEXT416(*(uint *)(param_7 + (ulonglong)(uint)(auVar95._0_4_ << 2))),
                          *(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._4_4_ * 4)),0x10);
      auVar105 = insertps(auVar100,*(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._8_4_ << 2)),
                          0x20);
      auVar112._0_4_ = auVar102._0_4_ - auVar86._0_4_;
      auVar112._4_4_ = auVar102._4_4_ - auVar86._4_4_;
      auVar112._8_4_ = auVar102._8_4_ - auVar86._8_4_;
      auVar112._12_4_ = auVar102._12_4_ - auVar86._12_4_;
      auVar89._0_4_ = auVar97._0_4_ - auVar101._0_4_;
      auVar89._4_4_ = auVar97._4_4_ - auVar101._4_4_;
      auVar89._8_4_ = auVar97._8_4_ - auVar101._8_4_;
      auVar89._12_4_ = auVar97._12_4_ - auVar101._12_4_;
      auVar88._0_4_ = auVar80._0_4_ - auVar79._0_4_;
      auVar88._4_4_ = auVar80._4_4_ - auVar79._4_4_;
      auVar88._8_4_ = auVar80._8_4_ - auVar79._8_4_;
      auVar88._12_4_ = auVar80._12_4_ - auVar79._12_4_;
      auVar69._0_4_ = auVar89._0_4_ * auVar89._0_4_ + auVar112._0_4_ * auVar112._0_4_;
      auVar69._4_4_ = auVar89._4_4_ * auVar89._4_4_ + auVar112._4_4_ * auVar112._4_4_;
      auVar69._8_4_ = auVar89._8_4_ * auVar89._8_4_ + auVar112._8_4_ * auVar112._8_4_;
      auVar69._12_4_ = auVar89._12_4_ * auVar89._12_4_ + auVar112._12_4_ * auVar112._12_4_;
      auVar59._0_4_ = auVar88._0_4_ * auVar88._0_4_ + auVar69._0_4_;
      auVar59._4_4_ = auVar88._4_4_ * auVar88._4_4_ + auVar69._4_4_;
      auVar59._8_4_ = auVar88._8_4_ * auVar88._8_4_ + auVar69._8_4_;
      auVar59._12_4_ = auVar88._12_4_ * auVar88._12_4_ + auVar69._12_4_;
      uVar23 = *(uint *)(param_1 + 0xc + lVar31);
      auVar69 = sqrtps(auVar69,auVar59);
      uVar33 = -(uint)(auVar59._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar59._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar59._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar59._12_4_ < _UNK_1506895ec);
      auVar96._4_4_ = uVar35;
      auVar96._0_4_ = uVar33;
      auVar113 = divps(auVar112,auVar69);
      auVar59 = divps(auVar89,auVar69);
      auVar89 = divps(auVar88,auVar69);
      auVar96._8_4_ = uVar36;
      auVar96._12_4_ = uVar38;
      uVar37 = *(uint *)(param_1 + 0xc + lVar27);
      auVar100._4_4_ = _UNK_15076b1f4;
      auVar100._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar100._8_4_ = _UNK_15076b1f8;
      auVar100._12_4_ = _UNK_15076b1fc;
      auVar113 = blendvps(auVar113,auVar100,auVar96);
      auVar96 = insertps(auVar105,*(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._12_4_ << 2)),
                         0x30);
      uVar39 = *(uint *)(param_1 + 0xc + lVar21);
      uVar20 = uVar24 & 0xffffffff;
      pfVar2 = (float *)(param_3 + uVar20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar18);
      auVar95 = insertps(ZEXT416(uVar23),ZEXT416(uVar37),0x10);
      auVar100 = insertps(ZEXT416(uVar39),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar28);
      auVar95 = insertps(auVar95,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar26);
      auVar100 = insertps(auVar100,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar30);
      auVar95 = insertps(auVar95,ZEXT416(uVar8),0x30);
      fVar104 = auVar96._0_4_ * param_5 * param_5;
      fVar107 = auVar96._4_4_ * param_5 * param_5;
      fVar108 = auVar96._8_4_ * param_5 * param_5;
      fVar109 = auVar96._12_4_ * param_5 * param_5;
      uVar9 = *(uint *)(param_1 + 0xc + lVar25);
      auVar100 = insertps(auVar100,ZEXT416(uVar9),0x30);
      fVar53 = auVar95._0_4_;
      fVar54 = auVar95._4_4_;
      fVar55 = auVar95._12_4_;
      fVar40 = auVar100._0_4_;
      fVar48 = auVar100._4_4_;
      fVar49 = auVar100._8_4_;
      fVar73 = auVar95._8_4_;
      fVar50 = auVar100._12_4_;
      auVar105._0_4_ = (fVar53 + fVar40) * fVar104 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar105._4_4_ = (fVar54 + fVar48) * fVar107 + _UNK_15076b1f4;
      auVar105._8_4_ = (fVar73 + fVar49) * fVar108 + _UNK_15076b1f8;
      auVar105._12_4_ = (fVar55 + fVar50) * fVar109 + _UNK_15076b1fc;
      pfVar3 = (float *)(param_4 + uVar20);
      fVar57 = *pfVar3;
      fVar58 = pfVar3[1];
      fVar65 = pfVar3[2];
      fVar64 = pfVar3[3];
      auVar106._0_4_ =
           (float)((uint)fVar104 ^ __xmm_80000000800000008000000080000000) *
           ((float)(~uVar33 & auVar69._0_4_) - *pfVar2) - fVar57;
      auVar106._4_4_ =
           (float)((uint)fVar107 ^ _UNK_150651574) * ((float)(~uVar35 & auVar69._4_4_) - pfVar2[1])
           - fVar58;
      auVar106._8_4_ =
           (float)((uint)fVar108 ^ _UNK_150651578) * ((float)(~uVar36 & auVar69._8_4_) - pfVar2[2])
           - fVar65;
      auVar106._12_4_ =
           (float)((uint)fVar109 ^ _UNK_15065157c) * ((float)(~uVar38 & auVar69._12_4_) - pfVar2[3])
           - fVar64;
      auVar100 = divps(auVar106,auVar105);
      fVar104 = auVar100._0_4_;
      fVar110 = auVar113._0_4_ * fVar104;
      fVar107 = auVar100._4_4_;
      fVar114 = auVar113._4_4_ * fVar107;
      fVar108 = auVar100._8_4_;
      fVar116 = auVar113._8_4_ * fVar108;
      fVar109 = auVar100._12_4_;
      fVar117 = auVar113._12_4_ * fVar109;
      auVar113._0_4_ = fVar53 * fVar110 + auVar102._0_4_;
      auVar113._4_4_ = fVar54 * fVar114 + auVar102._4_4_;
      auVar113._8_4_ = fVar73 * fVar116 + auVar102._8_4_;
      auVar113._12_4_ = fVar55 * fVar117 + auVar102._12_4_;
      fVar124 = (float)(~uVar33 & auVar59._0_4_) * fVar104;
      fVar127 = (float)(~uVar35 & auVar59._4_4_) * fVar107;
      fVar129 = (float)(~uVar36 & auVar59._8_4_) * fVar108;
      fVar131 = (float)(~uVar38 & auVar59._12_4_) * fVar109;
      *(float *)(param_1 + lVar31) = auVar113._0_4_;
      uVar10 = extractps(auVar113,1);
      *(undefined8 *)(param_1 + lVar27) = uVar10;
      unaff_XMM11._0_4_ = fVar53 * fVar124 + auVar97._0_4_;
      unaff_XMM11._4_4_ = fVar54 * fVar127 + auVar97._4_4_;
      unaff_XMM11._8_4_ = fVar73 * fVar129 + auVar97._8_4_;
      unaff_XMM11._12_4_ = fVar55 * fVar131 + auVar97._12_4_;
      uVar10 = extractps(auVar113,2);
      *(undefined8 *)(param_1 + lVar28) = uVar10;
      uVar10 = extractps(auVar113,3);
      *(undefined8 *)(param_1 + lVar30) = uVar10;
      fVar119 = (float)(~uVar33 & auVar89._0_4_) * fVar104;
      fVar121 = (float)(~uVar35 & auVar89._4_4_) * fVar107;
      fVar122 = (float)(~uVar36 & auVar89._8_4_) * fVar108;
      fVar123 = (float)(~uVar38 & auVar89._12_4_) * fVar109;
      *(float *)(param_1 + 4 + lVar31) = unaff_XMM11._0_4_;
      uVar10 = extractps(unaff_XMM11,1);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar10;
      uVar10 = extractps(unaff_XMM11,2);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar10;
      auVar95._0_4_ = fVar53 * fVar119 + auVar80._0_4_;
      auVar95._4_4_ = fVar54 * fVar121 + auVar80._4_4_;
      auVar95._8_4_ = fVar73 * fVar122 + auVar80._8_4_;
      auVar95._12_4_ = fVar55 * fVar123 + auVar80._12_4_;
      uVar10 = extractps(unaff_XMM11,3);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar10;
      *(float *)(param_1 + 8 + lVar31) = auVar95._0_4_;
      uVar10 = extractps(auVar95,1);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar10;
      uVar10 = extractps(auVar95,2);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar10;
      uVar10 = extractps(auVar95,3);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar10;
      *(uint *)(param_1 + 0xc + lVar31) = uVar23;
      *(uint *)(param_1 + 0xc + lVar27) = uVar37;
      *(uint *)(param_1 + 0xc + lVar28) = uVar6;
      auVar80._0_4_ = fVar110 * fVar40 + auVar86._0_4_;
      auVar80._4_4_ = fVar114 * fVar48 + auVar86._4_4_;
      auVar80._8_4_ = fVar116 * fVar49 + auVar86._8_4_;
      auVar80._12_4_ = fVar117 * fVar50 + auVar86._12_4_;
      *(uint *)(param_1 + 0xc + lVar30) = uVar8;
      *(float *)(param_1 + lVar21) = auVar80._0_4_;
      uVar10 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + lVar18) = uVar10;
      uVar10 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + lVar26) = uVar10;
      auVar86._0_4_ = fVar124 * fVar40 + auVar101._0_4_;
      auVar86._4_4_ = fVar127 * fVar48 + auVar101._4_4_;
      auVar86._8_4_ = fVar129 * fVar49 + auVar101._8_4_;
      auVar86._12_4_ = fVar131 * fVar50 + auVar101._12_4_;
      uVar10 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + lVar25) = uVar10;
      *(float *)(param_1 + 4 + lVar21) = auVar86._0_4_;
      uVar10 = extractps(auVar86,1);
      *(undefined8 *)(param_1 + 4 + lVar18) = uVar10;
      uVar10 = extractps(auVar86,2);
      *(undefined8 *)(param_1 + 4 + lVar26) = uVar10;
      auVar101._0_4_ = fVar119 * fVar40 + auVar79._0_4_;
      auVar101._4_4_ = fVar121 * fVar48 + auVar79._4_4_;
      auVar101._8_4_ = fVar122 * fVar49 + auVar79._8_4_;
      auVar101._12_4_ = fVar123 * fVar50 + auVar79._12_4_;
      uVar10 = extractps(auVar86,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar10;
      *(float *)(param_1 + 8 + lVar21) = auVar101._0_4_;
      uVar10 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 8 + lVar18) = uVar10;
      uVar10 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 8 + lVar26) = uVar10;
      uVar10 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar10;
      pfVar2 = (float *)(param_4 + uVar20);
      *pfVar2 = fVar104 + fVar57;
      pfVar2[1] = fVar107 + fVar58;
      pfVar2[2] = fVar108 + fVar65;
      pfVar2[3] = fVar109 + fVar64;
      *(uint *)(param_1 + 0xc + lVar21) = uVar39;
      *(uint *)(param_1 + 0xc + lVar18) = uVar5;
      *(uint *)(param_1 + 0xc + lVar26) = uVar7;
      *(uint *)(param_1 + 0xc + lVar25) = uVar9;
      uVar22 = uVar22 + 4;
      uVar24 = uVar24 + 0x10;
    } while ((int)uVar22 < (int)(uVar34 & 0xfffffffc));
    if ((int)param_8 <= (int)uVar22) {
      return;
    }
  }
  uVar34 = (uint)uVar22;
  auVar79._0_4_ =
       -(uint)((int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8);
  auVar79._4_4_ =
       -(uint)((int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8);
  auVar79._8_4_ = -(uint)((int)(uVar34 | _UNK_150631e08) < (int)param_8);
  auVar79._12_4_ = -(uint)((int)(uVar34 | _UNK_150631e0c) < (int)param_8);
  uVar22 = uVar22 & 0xffffffff;
  piVar1 = (int *)(param_2 + uVar22 * 8);
  uVar23 = movmskps((int)uVar24,auVar79);
  bVar17 = (char)((char)uVar23 << 4) >> 4;
  if (uVar23 == 0xf) {
    iVar68 = *piVar1;
    iVar56 = piVar1[1];
    iVar72 = piVar1[2];
    iVar63 = piVar1[3];
    iVar74 = piVar1[4];
    iVar66 = piVar1[5];
    iVar75 = piVar1[6];
    iVar67 = piVar1[7];
  }
  else {
    auVar97._0_4_ = ___xmm_00000018000000100000000800000000 & auVar79._0_4_;
    auVar97._4_4_ = _UNK_150b51a04 & auVar79._4_4_;
    auVar97._8_4_ = _UNK_150b51a08 & auVar79._8_4_;
    auVar97._12_4_ = _UNK_150b51a0c & auVar79._12_4_;
    lVar18 = extractps(auVar97,1);
    lVar21 = extractps(auVar97,2);
    lVar25 = extractps(auVar97,3);
    iVar68 = *piVar1;
    iVar72 = *(int *)((longlong)piVar1 + lVar18);
    iVar74 = *(int *)((longlong)piVar1 + lVar21);
    iVar75 = *(int *)((longlong)piVar1 + lVar25);
    auVar100 = ___xmm_0000001c000000140000000c00000004 & auVar79;
    iVar56 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._0_4_);
    iVar63 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._4_4_);
    iVar66 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._8_4_);
    iVar67 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._12_4_);
  }
  auVar70._0_4_ = iVar68 << 4;
  auVar70._4_4_ = iVar72 << 4;
  auVar70._8_4_ = iVar74 << 4;
  auVar70._12_4_ = iVar75 << 4;
  auVar100 = auVar79 & auVar70;
  lVar18 = param_1 + auVar100._0_4_;
  lVar21 = param_1 + auVar100._4_4_;
  lVar25 = param_1 + auVar100._8_4_;
  lVar26 = param_1 + auVar100._12_4_;
  auVar95 = ___xmm_00000004000000040000000400000004 & auVar79;
  uVar20 = (ulonglong)auVar95._0_4_;
  _local_168 = ___xmm_00000008000000080000000800000008 & auVar79;
  uVar24 = (ulonglong)local_168._0_4_;
  auVar102._0_4_ = iVar56 << 4;
  auVar102._4_4_ = iVar63 << 4;
  auVar102._8_4_ = iVar66 << 4;
  auVar102._12_4_ = iVar67 << 4;
  auVar96 = auVar79 & auVar102;
  lVar29 = (longlong)auVar96._0_4_;
  auVar101 = ZEXT416(*(uint *)(param_1 + auVar100._0_4_));
  lVar27 = param_1 + lVar29;
  lVar28 = param_1 + auVar96._4_4_;
  lVar30 = param_1 + auVar96._8_4_;
  lVar31 = auVar96._12_4_ + param_1;
  bVar32 = (bVar17 & 2) != 0;
  if (bVar32) {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._4_4_),0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar20 + lVar18)),
                       *(undefined4 *)((ulonglong)auVar95._4_4_ + lVar21),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar24 + lVar18)),
                       *(undefined4 *)((ulonglong)local_168._4_4_ + lVar21),0x10);
    auVar59 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + auVar96._4_4_)
                       ,0x10);
  }
  else {
    auVar69 = ZEXT416(*(uint *)(uVar20 + lVar18));
    auVar89 = ZEXT416(*(uint *)(uVar24 + lVar18));
    auVar59 = ZEXT416(*(uint *)(param_1 + lVar29));
  }
  auVar105 = ZEXT416(*(uint *)(uVar20 + lVar27));
  if (bVar32) {
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._4_4_ + lVar28),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar24 + lVar27)),
                        *(undefined4 *)((ulonglong)local_168._4_4_ + lVar28),0x10);
  }
  else {
    auVar113 = ZEXT416(*(uint *)(uVar24 + lVar27));
  }
  if ((bVar17 & 4) != 0) {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._8_4_),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar95._8_4_ + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)local_168._8_4_ + lVar25),0x20);
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar96._8_4_),0x20);
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._8_4_ + lVar30),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_168._8_4_ + lVar30),0x20);
  }
  auVar80 = ___xmm_0000000c0000000c0000000c0000000c & auVar79;
  uVar37 = auVar80._0_4_;
  if ((char)bVar17 < '\0') {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._12_4_),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar95._12_4_ + lVar26),0x30);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)local_168._12_4_ + lVar26),0x30);
    uVar39 = *(uint *)((ulonglong)uVar37 + lVar18);
    uVar37 = *(uint *)((ulonglong)uVar37 + lVar27);
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar96._12_4_),0x30);
  }
  else {
    uVar39 = *(uint *)((ulonglong)uVar37 + lVar18);
    uVar37 = *(uint *)((ulonglong)uVar37 + lVar27);
  }
  uVar24 = (ulonglong)auVar80._8_4_;
  auVar96 = insertps(ZEXT416(uVar39),*(undefined4 *)((ulonglong)auVar80._4_4_ + lVar21),0x10);
  auVar100 = insertps(ZEXT416(uVar37),*(undefined4 *)((ulonglong)auVar80._4_4_ + lVar28),0x10);
  if ((char)bVar17 < '\0') {
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._12_4_ + lVar31),0x30);
    auVar95 = insertps(auVar96,*(undefined4 *)(uVar24 + lVar25),0x20);
    auVar100 = insertps(auVar100,*(undefined4 *)(uVar24 + lVar30),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_168._12_4_ + lVar31),0x30);
  }
  else {
    auVar95 = insertps(auVar96,*(undefined4 *)(uVar24 + lVar25),0x20);
    auVar100 = insertps(auVar100,*(undefined4 *)(uVar24 + lVar30),0x20);
  }
  auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)auVar80._12_4_ + lVar26),0x30);
  auVar100 = insertps(auVar100,*(undefined4 *)((ulonglong)auVar80._12_4_ + lVar31),0x30);
  lVar18 = (longlong)(int)(uVar34 << 2);
  pfVar2 = (float *)(param_4 + lVar18);
  if ((~bVar17 & 9) == 0) {
    _local_168 = *(undefined1 (*) [16])(param_3 + lVar18);
    auVar96 = *(undefined1 (*) [16])(param_4 + lVar18);
    auVar81 = ZEXT416(*(uint *)(param_6 + uVar22));
  }
  else {
    puVar19 = (uint *)(param_3 + lVar18);
    if ((uVar23 & 1) != 0) {
      _local_168 = ZEXT416(*puVar19);
    }
    if ((uVar23 & 2) != 0) {
      _local_168 = insertps(_local_168,puVar19[1],0x10);
    }
    if ((uVar23 & 4) != 0) {
      _local_168 = insertps(_local_168,puVar19[2],0x20);
    }
    if ((uVar23 & 8) != 0) {
      _local_168 = insertps(_local_168,puVar19[3],0x30);
    }
    auVar96 = auVar70;
    if ((uVar23 & 1) != 0) {
      auVar96 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar23 & 2) != 0) {
      auVar96 = insertps(auVar96,pfVar2[1],0x10);
    }
    if ((uVar23 & 4) != 0) {
      auVar96 = insertps(auVar96,pfVar2[2],0x20);
    }
    if ((uVar23 & 8) != 0) {
      auVar96 = insertps(auVar96,pfVar2[3],0x30);
    }
    auVar81 = auVar79;
    if ((uVar23 & 1) != 0) {
      auVar81 = ZEXT116(*(byte *)(param_6 + uVar22));
    }
    if ((uVar23 & 2) != 0) {
      auVar47._8_8_ = auVar81._8_8_;
      auVar47._0_8_ =
           auVar81._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_6 + uVar22 + 1) << 8;
      auVar81 = pblendw(auVar81,auVar47,0xfd);
    }
    if ((uVar23 & 4) != 0) {
      bVar11 = auVar81[3];
      auVar80 = pmovzxwd(auVar81,auVar81);
      auVar81._8_8_ = auVar80._8_8_;
      auVar81._0_8_ =
           auVar80._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_6 + uVar22 + 2) << 0x10 |
           (ulonglong)bVar11 << 0x18;
    }
    if ((uVar23 & 8) != 0) {
      bVar11 = auVar81[2];
      auVar80 = pmovzxwd(auVar81,auVar81);
      auVar81._8_8_ = auVar80._8_8_;
      auVar81._0_8_ =
           auVar80._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar11 << 0x10 |
           (ulonglong)*(byte *)(param_6 + uVar22 + 3) << 0x18;
    }
  }
  fVar108 = auVar59._0_4_;
  fVar124 = auVar101._0_4_ - fVar108;
  fVar109 = auVar59._4_4_;
  fVar127 = auVar101._4_4_ - fVar109;
  auVar126._0_8_ = CONCAT44(fVar127,fVar124);
  fVar110 = auVar59._8_4_;
  auVar126._8_4_ = auVar101._8_4_ - fVar110;
  fVar114 = auVar59._12_4_;
  auVar126._12_4_ = auVar101._12_4_ - fVar114;
  fVar55 = auVar105._0_4_;
  fVar116 = auVar69._0_4_;
  fVar117 = fVar116 - fVar55;
  fVar73 = auVar105._4_4_;
  fVar119 = auVar69._4_4_;
  fVar121 = fVar119 - fVar73;
  auVar120._0_8_ = CONCAT44(fVar121,fVar117);
  fVar104 = auVar105._8_4_;
  fVar122 = auVar69._8_4_;
  fVar123 = auVar69._12_4_;
  auVar120._8_4_ = fVar122 - fVar104;
  fVar107 = auVar105._12_4_;
  auVar120._12_4_ = fVar123 - fVar107;
  fVar58 = auVar89._0_4_;
  fVar49 = auVar113._0_4_;
  fVar57 = fVar58 - fVar49;
  fVar65 = auVar89._4_4_;
  fVar50 = auVar113._4_4_;
  fVar64 = fVar65 - fVar50;
  auVar60._0_8_ = CONCAT44(fVar64,fVar57);
  fVar40 = auVar89._8_4_;
  fVar48 = auVar89._12_4_;
  fVar53 = auVar113._8_4_;
  auVar60._8_4_ = fVar40 - fVar53;
  fVar54 = auVar113._12_4_;
  auVar60._12_4_ = fVar48 - fVar54;
  auVar51._0_4_ = fVar57 * fVar57 + fVar117 * fVar117 + fVar124 * fVar124;
  auVar51._4_4_ = fVar64 * fVar64 + fVar121 * fVar121 + fVar127 * fVar127;
  auVar51._8_4_ =
       auVar60._8_4_ * auVar60._8_4_ +
       auVar120._8_4_ * auVar120._8_4_ + auVar126._8_4_ * auVar126._8_4_;
  auVar51._12_4_ =
       auVar60._12_4_ * auVar60._12_4_ +
       auVar120._12_4_ * auVar120._12_4_ + auVar126._12_4_ * auVar126._12_4_;
  auVar105 = sqrtps(unaff_XMM11,auVar51);
  uVar34 = -(uint)(auVar51._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar23 = -(uint)(auVar51._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar51._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar51._12_4_ < _UNK_1506895ec);
  auVar41._4_4_ = uVar23;
  auVar41._0_4_ = uVar34;
  auVar78._8_4_ = auVar120._8_4_;
  auVar78._0_8_ = auVar120._0_8_;
  auVar78._12_4_ = auVar120._12_4_;
  auVar89 = divps(auVar78,auVar105);
  auVar90._8_4_ = auVar60._8_4_;
  auVar90._0_8_ = auVar60._0_8_;
  auVar90._12_4_ = auVar60._12_4_;
  auVar69 = divps(auVar90,auVar105);
  auVar87._8_4_ = auVar126._8_4_;
  auVar87._0_8_ = auVar126._0_8_;
  auVar87._12_4_ = auVar126._12_4_;
  auVar59 = divps(auVar87,auVar105);
  auVar41._8_4_ = uVar37;
  auVar41._12_4_ = uVar39;
  auVar12._4_4_ = _UNK_15076b1f4;
  auVar12._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar12._8_4_ = _UNK_15076b1f8;
  auVar12._12_4_ = _UNK_15076b1fc;
  auVar59 = blendvps(auVar59,auVar12,auVar41);
  auVar98._8_4_ = auVar126._8_4_;
  auVar98._0_8_ = auVar126._0_8_;
  auVar98._12_4_ = auVar126._12_4_;
  bVar32 = (bVar17 & 1) != 0;
  if (bVar32) {
    auVar98 = auVar59;
  }
  auVar76._0_8_ = CONCAT44(~uVar23 & auVar89._4_4_,~uVar34 & auVar89._0_4_);
  auVar76._8_4_ = ~uVar37 & auVar89._8_4_;
  auVar76._12_4_ = ~uVar39 & auVar89._12_4_;
  auVar62._0_8_ = CONCAT44(~uVar23 & auVar69._4_4_,~uVar34 & auVar69._0_4_);
  auVar62._8_4_ = ~uVar37 & auVar69._8_4_;
  auVar62._12_4_ = ~uVar39 & auVar69._12_4_;
  auVar91._8_4_ = auVar120._8_4_;
  auVar91._0_8_ = auVar120._0_8_;
  auVar91._12_4_ = auVar120._12_4_;
  auVar42._8_4_ = auVar60._8_4_;
  auVar42._0_8_ = auVar60._0_8_;
  auVar42._12_4_ = auVar60._12_4_;
  if (bVar32) {
    auVar91._8_4_ = auVar76._8_4_;
    auVar91._0_8_ = auVar76._0_8_;
    auVar91._12_4_ = auVar76._12_4_;
    auVar42._8_4_ = auVar62._8_4_;
    auVar42._0_8_ = auVar62._0_8_;
    auVar42._12_4_ = auVar62._12_4_;
    auVar89 = blendps(auVar126,auVar98,1);
  }
  else {
    auVar89 = blendps(auVar126,auVar98,1);
  }
  if ((bVar17 & 2) == 0) {
    auVar69 = blendps(auVar120,auVar91,1);
    auVar113 = blendps(auVar60,auVar42,1);
    auVar89 = blendps(auVar89,auVar89,2);
    auVar92 = auVar69;
    auVar45 = auVar113;
  }
  else {
    auVar69 = blendps(auVar120,auVar91,1);
    auVar92._8_4_ = auVar76._8_4_;
    auVar92._0_8_ = auVar76._0_8_;
    auVar92._12_4_ = auVar76._12_4_;
    auVar113 = blendps(auVar60,auVar42,1);
    auVar45._8_4_ = auVar62._8_4_;
    auVar45._0_8_ = auVar62._0_8_;
    auVar45._12_4_ = auVar62._12_4_;
    auVar89 = blendps(auVar89,auVar59,2);
  }
  if ((bVar17 & 4) == 0) {
    auVar80 = blendps(auVar69,auVar92,2);
    auVar113 = blendps(auVar113,auVar45,2);
    auVar69 = blendps(auVar89,auVar89,4);
    auVar46 = auVar113;
    auVar93 = auVar80;
  }
  else {
    auVar80 = blendps(auVar69,auVar92,2);
    auVar93._8_4_ = auVar76._8_4_;
    auVar93._0_8_ = auVar76._0_8_;
    auVar93._12_4_ = auVar76._12_4_;
    auVar113 = blendps(auVar113,auVar45,2);
    auVar46._8_4_ = auVar62._8_4_;
    auVar46._0_8_ = auVar62._0_8_;
    auVar46._12_4_ = auVar62._12_4_;
    auVar69 = blendps(auVar89,auVar59,4);
    auVar89 = auVar59;
  }
  if ((char)bVar17 < '\0') {
    auVar80 = blendps(auVar80,auVar93,4);
  }
  else {
    auVar80 = blendps(auVar80,auVar93,4);
    auVar59 = auVar69;
  }
  if ((char)bVar17 < '\0') {
    auVar113 = blendps(auVar113,auVar46,4);
  }
  else {
    auVar62 = blendps(auVar113,auVar46,4);
    auVar76 = auVar80;
    auVar113 = auVar62;
  }
  auVar86 = pmovzxbd(auVar81,auVar81);
  auVar82._0_4_ = auVar86._0_4_ << 2;
  auVar82._4_4_ = auVar86._4_4_ << 2;
  auVar82._8_4_ = auVar86._8_4_ << 2;
  auVar82._12_4_ = auVar86._12_4_ << 2;
  auVar86 = pmovzxdq(auVar89,auVar82);
  auVar83._4_4_ = 0;
  auVar83._0_4_ = auVar82._8_4_;
  auVar83._8_4_ = auVar82._12_4_;
  auVar83._12_4_ = 0;
  auVar89 = pmovsxdq(auVar46,auVar79);
  auVar86 = blendvps(ZEXT816(0),auVar86,auVar89);
  auVar43._4_4_ = auVar79._8_4_;
  auVar43._0_4_ = auVar79._8_4_;
  auVar43._8_4_ = auVar79._12_4_;
  auVar43._12_4_ = auVar79._12_4_;
  auVar89 = blendvps(ZEXT816(0),auVar83,auVar43);
  auVar79 = insertps(ZEXT416(*(uint *)(param_7 + auVar86._0_8_)),
                     *(undefined4 *)(param_7 + auVar86._8_8_),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_7 + auVar89._0_8_),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_7 + auVar89._8_8_),0x30);
  fVar64 = auVar79._0_4_ * param_5 * param_5;
  fVar117 = auVar79._4_4_ * param_5 * param_5;
  fVar121 = auVar79._8_4_ * param_5 * param_5;
  param_5 = auVar79._12_4_ * param_5 * param_5;
  fVar111 = auVar95._0_4_;
  fVar115 = auVar95._4_4_;
  fVar118 = auVar95._12_4_;
  fVar57 = auVar100._12_4_;
  fVar129 = auVar100._0_4_;
  fVar131 = auVar100._4_4_;
  fVar127 = auVar95._8_4_;
  fVar94 = auVar100._8_4_;
  auVar44._0_4_ =
       (float)((uint)fVar64 ^ __xmm_80000000800000008000000080000000) *
       ((float)(~uVar34 & auVar105._0_4_) - (float)local_168._0_4_) - auVar96._0_4_;
  auVar44._4_4_ =
       (float)((uint)fVar117 ^ _UNK_150651574) *
       ((float)(~uVar23 & auVar105._4_4_) - (float)local_168._4_4_) - auVar96._4_4_;
  auVar44._8_4_ =
       (float)((uint)fVar121 ^ _UNK_150651578) * ((float)(~uVar37 & auVar105._8_4_) - fStack_160) -
       auVar96._8_4_;
  auVar44._12_4_ =
       (float)((uint)param_5 ^ _UNK_15065157c) * ((float)(~uVar39 & auVar105._12_4_) - fStack_15c) -
       auVar96._12_4_;
  auVar84._0_4_ = (fVar111 + fVar129) * fVar64 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar84._4_4_ = (fVar115 + fVar131) * fVar117 + _UNK_15076b1f4;
  auVar84._8_4_ = (fVar127 + fVar94) * fVar121 + _UNK_15076b1f8;
  auVar84._12_4_ = (fVar118 + fVar57) * param_5 + _UNK_15076b1fc;
  auVar79 = divps(auVar44,auVar84);
  fVar64 = auVar79._0_4_;
  auVar52._0_4_ = auVar96._0_4_ + fVar64;
  fVar117 = auVar79._4_4_;
  auVar52._4_4_ = auVar96._4_4_ + fVar117;
  fVar121 = auVar79._8_4_;
  auVar52._8_4_ = auVar96._8_4_ + fVar121;
  fVar124 = auVar79._12_4_;
  auVar52._12_4_ = auVar96._12_4_ + fVar124;
  if ((bVar17 & 1) != 0) {
    *pfVar2 = auVar52._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar52,1);
    *(undefined8 *)(pfVar2 + 1) = uVar10;
  }
  auVar79 = blendps(auVar69,auVar59,8);
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar52,2);
    *(undefined8 *)(pfVar2 + 2) = uVar10;
  }
  fVar125 = auVar79._0_4_ * fVar64;
  fVar128 = auVar79._4_4_ * fVar117;
  fVar130 = auVar79._8_4_ * fVar121;
  fVar132 = auVar79._12_4_ * fVar124;
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar52,3);
    *(undefined8 *)(pfVar2 + 3) = uVar10;
  }
  auVar71._0_4_ = auVar101._0_4_ + fVar111 * fVar125;
  auVar71._4_4_ = auVar101._4_4_ + fVar115 * fVar128;
  auVar71._8_4_ = auVar101._8_4_ + fVar127 * fVar130;
  auVar71._12_4_ = auVar101._12_4_ + fVar118 * fVar132;
  if ((bVar17 & 1) == 0) {
    auVar79 = blendps(auVar80,auVar76,8);
  }
  else {
    *(float *)(param_1 + auVar70._0_4_) = auVar71._0_4_;
    auVar79 = blendps(auVar80,auVar76,8);
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + auVar70._4_4_) = uVar10;
  }
  uVar16 = (float)auVar79._12_4_ * fVar124;
  uVar15 = (float)auVar79._8_4_ * fVar121;
  uVar14 = (float)auVar79._4_4_ * fVar117;
  uVar13 = (float)auVar79._0_4_ * fVar64;
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + auVar70._12_4_) = uVar10;
    auVar103._0_4_ = fVar116 + fVar111 * (float)uVar13;
    auVar103._4_4_ = fVar119 + fVar115 * (float)uVar14;
    auVar103._8_4_ = fVar122 + fVar127 * (float)uVar15;
    auVar103._12_4_ = fVar123 + fVar118 * (float)uVar16;
  }
  else {
    auVar103._0_4_ = fVar116 + fVar111 * (float)uVar13;
    auVar103._4_4_ = fVar119 + fVar115 * (float)uVar14;
    auVar103._8_4_ = fVar122 + fVar127 * (float)uVar15;
    auVar103._12_4_ = fVar123 + fVar118 * (float)uVar16;
  }
  if ((bVar17 & 1) == 0) {
    auVar79 = blendps(auVar113,auVar62,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar70._0_4_) = auVar103._0_4_;
    auVar79 = blendps(auVar113,auVar62,8);
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._4_4_) = uVar10;
  }
  fVar124 = fVar124 * (float)auVar79._12_4_;
  fVar121 = fVar121 * (float)auVar79._8_4_;
  fVar117 = fVar117 * (float)auVar79._4_4_;
  fVar64 = fVar64 * auVar79._0_4_;
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._12_4_) = uVar10;
    auVar99._0_4_ = fVar58 + fVar111 * fVar64;
    auVar99._4_4_ = fVar65 + fVar115 * fVar117;
    auVar99._8_4_ = fVar40 + fVar127 * fVar121;
    auVar99._12_4_ = fVar48 + fVar118 * fVar124;
  }
  else {
    auVar99._0_4_ = fVar58 + fVar111 * fVar64;
    auVar99._4_4_ = fVar65 + fVar115 * fVar117;
    auVar99._8_4_ = fVar40 + fVar127 * fVar121;
    auVar99._12_4_ = fVar48 + fVar118 * fVar124;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar70._0_4_) = auVar99._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._12_4_) = uVar10;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar70._0_4_) = fVar111;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._12_4_) = uVar10;
    auVar85._0_4_ = fVar108 + fVar125 * fVar129;
    auVar85._4_4_ = fVar109 + fVar128 * fVar131;
    auVar85._8_4_ = fVar110 + fVar130 * fVar94;
    auVar85._12_4_ = fVar114 + fVar132 * fVar57;
  }
  else {
    auVar85._0_4_ = fVar108 + fVar125 * fVar129;
    auVar85._4_4_ = fVar109 + fVar128 * fVar131;
    auVar85._8_4_ = fVar110 + fVar130 * fVar94;
    auVar85._12_4_ = fVar114 + fVar132 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + auVar102._0_4_) = auVar85._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + auVar102._12_4_) = uVar10;
    auVar61._0_4_ = fVar55 + (float)uVar13 * fVar129;
    auVar61._4_4_ = fVar73 + (float)uVar14 * fVar131;
    auVar61._8_4_ = fVar104 + (float)uVar15 * fVar94;
    auVar61._12_4_ = fVar107 + (float)uVar16 * fVar57;
  }
  else {
    auVar61._0_4_ = fVar55 + (float)uVar13 * fVar129;
    auVar61._4_4_ = fVar73 + (float)uVar14 * fVar131;
    auVar61._8_4_ = fVar104 + (float)uVar15 * fVar94;
    auVar61._12_4_ = fVar107 + (float)uVar16 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar102._0_4_) = auVar61._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar61,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar61,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar61,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._12_4_) = uVar10;
    auVar77._0_4_ = fVar49 + fVar64 * fVar129;
    auVar77._4_4_ = fVar50 + fVar117 * fVar131;
    auVar77._8_4_ = fVar53 + fVar121 * fVar94;
    auVar77._12_4_ = fVar54 + fVar124 * fVar57;
  }
  else {
    auVar77._0_4_ = fVar49 + fVar64 * fVar129;
    auVar77._4_4_ = fVar50 + fVar117 * fVar131;
    auVar77._8_4_ = fVar53 + fVar121 * fVar94;
    auVar77._12_4_ = fVar54 + fVar124 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar102._0_4_) = auVar77._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._12_4_) = uVar10;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar102._0_4_) = fVar129;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._12_4_) = uVar10;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 1409407d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  byte bVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  int unaff_EDI;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  int iVar47;
  int iVar60;
  int iVar61;
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
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar68 [16];
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  int iVar79;
  float fVar84;
  float fVar86;
  undefined1 auVar80 [16];
  float fVar87;
  undefined1 auVar81 [16];
  int iVar85;
  float fVar88;
  int iVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar90 [16];
  float fVar95;
  undefined1 auVar91 [16];
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar97;
  float fVar105;
  float fVar107;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar109;
  undefined1 auVar101 [16];
  float fVar98;
  float fVar106;
  float fVar108;
  float fVar110;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar119;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar124;
  float fVar126;
  undefined1 auVar123 [16];
  float fVar127;
  float fVar128;
  float fVar131;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar133;
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar153;
  int iVar154;
  float fVar157;
  int iVar158;
  float fVar159;
  float fVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_198;
  ulonglong local_128;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fVar125;
  float fVar132;
  undefined1 auVar135 [16];
  float fVar147;
  float fVar152;
  
  uVar30 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar30 = param_13;
  }
  if ((int)(uVar30 & 0xfffffffc) < 1) {
    uVar36 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar36 = 0;
    do {
      uVar26 = 0;
      auVar62 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar62 = ZEXT416(*(uint *)(param_8 + uVar36));
      }
      piVar2 = (int *)(param_3 + uVar24 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar24 * 2);
      if ((param_10 & 1) != 0) {
        uVar26 = (ulonglong)*(uint *)(param_11 + uVar36);
      }
      auVar101._8_8_ = 0;
      auVar101._0_8_ = uVar26;
      lVar25 = (longlong)(*piVar2 << 4);
      lVar32 = (longlong)(piVar2[2] * 0x10);
      lVar27 = (longlong)(*piVar3 << 4);
      lVar37 = (longlong)(piVar3[2] * 0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + lVar25)),*(undefined4 *)(param_1 + lVar32),0x10
                        );
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + lVar27),0x20);
      auVar100 = insertps(auVar99,*(undefined4 *)(param_1 + lVar37),0x30);
      fVar105 = auVar100._4_4_;
      fVar109 = auVar100._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                         *(undefined4 *)(param_1 + 4 + lVar32),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar27),0x20);
      auVar90 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar37),0x30);
      fVar95 = auVar90._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                         *(undefined4 *)(param_1 + 8 + lVar32),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar27),0x20);
      auVar80 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar37),0x30);
      fVar87 = auVar80._12_4_;
      uVar41 = *(uint *)(param_1 + 0xc + lVar25);
      unaff_EDI = piVar2[3] * 0x10;
      lVar29 = (longlong)(piVar2[1] << 4);
      lVar31 = (longlong)unaff_EDI;
      lVar35 = (longlong)(piVar3[1] << 4);
      lVar33 = (longlong)(piVar3[3] * 0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar31),0x10
                        );
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar117 = insertps(auVar99,*(undefined4 *)(param_1 + lVar33),0x30);
      fVar136 = auVar117._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar91 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar33),0x30);
      fVar96 = auVar91._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar81 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar33),0x30);
      fVar88 = auVar81._12_4_;
      auVar62 = pmovsxbd(auVar62,auVar62);
      auVar99 = insertps(ZEXT416(*(uint *)(param_9 + (auVar62._0_4_ << 2))),
                         *(undefined4 *)(param_9 + auVar62._4_4_ * 4),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_9 + (auVar62._8_4_ << 2)),0x20);
      auVar72 = insertps(auVar99,*(undefined4 *)(param_9 + (auVar62._12_4_ << 2)),0x30);
      auVar48 = pmovsxbd(auVar101,auVar101);
      auVar67 = insertps(ZEXT416(*(uint *)(param_12 + (auVar48._0_4_ << 2))),
                         *(undefined4 *)(param_12 + auVar48._4_4_ * 4),0x10);
      uVar26 = uVar24 & 0xffffffff;
      fVar127 = auVar117._0_4_;
      fVar147 = auVar100._0_4_;
      auVar148._0_4_ = fVar147 - fVar127;
      fVar128 = auVar117._4_4_;
      auVar148._4_4_ = fVar105 - fVar128;
      fVar131 = auVar117._8_4_;
      fVar152 = auVar100._8_4_;
      auVar148._8_4_ = fVar152 - fVar131;
      auVar148._12_4_ = fVar109 - fVar136;
      fVar78 = auVar90._0_4_;
      fVar46 = auVar91._0_4_;
      auVar100._0_4_ = fVar78 - fVar46;
      fVar84 = auVar90._4_4_;
      fVar134 = auVar91._4_4_;
      auVar100._4_4_ = fVar84 - fVar134;
      fVar86 = auVar90._8_4_;
      fVar119 = auVar91._8_4_;
      auVar100._8_4_ = fVar86 - fVar119;
      auVar100._12_4_ = fVar95 - fVar96;
      fVar97 = auVar80._0_4_;
      fVar122 = auVar81._0_4_;
      auVar117._0_4_ = fVar97 - fVar122;
      fVar125 = auVar80._4_4_;
      fVar124 = auVar81._4_4_;
      auVar117._4_4_ = fVar125 - fVar124;
      fVar107 = auVar80._8_4_;
      fVar126 = auVar81._8_4_;
      auVar117._8_4_ = fVar107 - fVar126;
      auVar117._12_4_ = fVar87 - fVar88;
      auVar149._0_4_ = auVar100._0_4_ * auVar100._0_4_ + auVar148._0_4_ * auVar148._0_4_;
      auVar149._4_4_ = auVar100._4_4_ * auVar100._4_4_ + auVar148._4_4_ * auVar148._4_4_;
      auVar149._8_4_ = auVar100._8_4_ * auVar100._8_4_ + auVar148._8_4_ * auVar148._8_4_;
      auVar149._12_4_ = auVar100._12_4_ * auVar100._12_4_ + auVar148._12_4_ * auVar148._12_4_;
      auVar150._0_4_ = auVar117._0_4_ * auVar117._0_4_ + auVar149._0_4_;
      auVar150._4_4_ = auVar117._4_4_ * auVar117._4_4_ + auVar149._4_4_;
      auVar150._8_4_ = auVar117._8_4_ * auVar117._8_4_ + auVar149._8_4_;
      auVar150._12_4_ = auVar117._12_4_ * auVar117._12_4_ + auVar149._12_4_;
      auVar91 = sqrtps(auVar149,auVar150);
      uVar39 = -(uint)(auVar150._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar40 = -(uint)(auVar150._4_4_ < _UNK_1506895e4);
      uVar42 = -(uint)(auVar150._8_4_ < _UNK_1506895e8);
      uVar44 = -(uint)(auVar150._12_4_ < _UNK_1506895ec);
      auVar62._4_4_ = uVar40;
      auVar62._0_4_ = uVar39;
      auVar81 = divps(auVar148,auVar91);
      auVar80 = divps(auVar100,auVar91);
      auVar101 = divps(auVar117,auVar91);
      auVar62._8_4_ = uVar42;
      auVar62._12_4_ = uVar44;
      auVar99._4_4_ = _UNK_15076b1f4;
      auVar99._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar99._8_4_ = _UNK_15076b1f8;
      auVar99._12_4_ = _UNK_15076b1fc;
      auVar149 = blendvps(auVar81,auVar99,auVar62);
      fVar140 = (float)(~uVar39 & auVar80._0_4_);
      fVar144 = (float)(~uVar40 & auVar80._4_4_);
      fVar145 = (float)(~uVar42 & auVar80._8_4_);
      fVar146 = (float)(~uVar44 & auVar80._12_4_);
      fVar153 = (float)(~uVar39 & auVar101._0_4_);
      fVar157 = (float)(~uVar40 & auVar101._4_4_);
      fVar159 = (float)(~uVar42 & auVar101._8_4_);
      fVar160 = (float)(~uVar44 & auVar101._12_4_);
      auVar62 = *(undefined1 (*) [16])(param_4 + uVar26);
      auVar81 = divps(auVar99,auVar62);
      auVar80._4_4_ = -(uint)(auVar62._4_4_ < _UNK_1506895d4);
      auVar80._0_4_ = -(uint)(auVar62._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar80._8_4_ = -(uint)(auVar62._8_4_ < _UNK_1506895d8);
      auVar80._12_4_ = -(uint)(auVar62._12_4_ < _UNK_1506895dc);
      auVar80 = blendvps(auVar81,auVar99,auVar80);
      uVar6 = *(uint *)(param_1 + 0xc + lVar32);
      auVar99 = insertps(auVar67,*(undefined4 *)(param_12 + (auVar48._8_4_ << 2)),0x20);
      auVar81 = insertps(auVar99,*(undefined4 *)(param_12 + (auVar48._12_4_ << 2)),0x30);
      auVar99 = insertps(ZEXT416(uVar41),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar27);
      auVar99 = insertps(auVar99,ZEXT416(uVar7),0x20);
      uVar43 = *(uint *)(param_1 + 0xc + lVar37);
      auVar99 = insertps(auVar99,ZEXT416(uVar43),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar29);
      uVar45 = *(uint *)(param_1 + 0xc + lVar31);
      auVar48 = insertps(ZEXT416(uVar8),ZEXT416(uVar45),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar35);
      auVar48 = insertps(auVar48,ZEXT416(uVar9),0x20);
      lVar21 = (longlong)(*piVar2 * 3);
      lVar23 = (longlong)(piVar2[2] * 3);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + lVar23 * 4),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar33);
      auVar48 = insertps(auVar48,ZEXT416(uVar10),0x30);
      fVar120 = auVar99._0_4_;
      fVar121 = auVar99._4_4_;
      fVar77 = auVar99._12_4_;
      fVar133 = auVar48._0_4_;
      auVar129._0_4_ = fVar120 + fVar133;
      fVar139 = auVar48._4_4_;
      auVar129._4_4_ = fVar121 + fVar139;
      fVar132 = auVar99._8_4_;
      fVar137 = auVar48._8_4_;
      auVar129._8_4_ = fVar132 + fVar137;
      fVar138 = auVar48._12_4_;
      auVar129._12_4_ = fVar77 + fVar138;
      auVar99 = divps(auVar72,auVar129);
      auVar100 = sqrtps(auVar101,auVar99);
      auVar99 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar23 * 4),0x10);
      auVar48 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar23 * 4),0x10);
      lVar21 = (longlong)(*piVar3 * 3);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[2] * 3);
      auVar117 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar101 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar90 = insertps(auVar48,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      lVar21 = (longlong)(piVar2[1] * 3);
      lVar23 = (longlong)(piVar2[3] * 3);
      auVar48 = insertps(ZEXT416(*(uint *)(param_2 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + lVar23 * 4),0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar23 * 4),0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar23 * 4),0x10);
      lVar21 = (longlong)(piVar3[1] * 3);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[3] * 3);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      fVar111 = param_6 * auVar72._0_4_ * param_6;
      fVar114 = param_6 * auVar72._4_4_ * param_6;
      fVar115 = param_6 * auVar72._8_4_ * param_6;
      fVar116 = param_6 * auVar72._12_4_ * param_6;
      fVar98 = auVar100._0_4_ * (auVar81._0_4_ + auVar81._0_4_) * auVar80._0_4_ * param_6;
      fVar106 = auVar100._4_4_ * (auVar81._4_4_ + auVar81._4_4_) * auVar80._4_4_ * param_6;
      fVar108 = auVar100._8_4_ * (auVar81._8_4_ + auVar81._8_4_) * auVar80._8_4_ * param_6;
      fVar110 = auVar100._12_4_ * (auVar81._12_4_ + auVar81._12_4_) * auVar80._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar26);
      fVar66 = *pfVar1;
      fVar69 = pfVar1[1];
      fVar70 = pfVar1[2];
      fVar71 = pfVar1[3];
      auVar142._0_4_ =
           ((float)((uint)fVar111 ^ __xmm_80000000800000008000000080000000) *
            ((float)(~uVar39 & auVar91._0_4_) - auVar62._0_4_) - fVar66) -
           ((((fVar97 - auVar90._0_4_) - fVar122) + auVar67._0_4_) * fVar153 +
           (((fVar78 - auVar101._0_4_) - fVar46) + auVar99._0_4_) * fVar140 +
           (((fVar147 - auVar117._0_4_) - fVar127) + auVar48._0_4_) * auVar149._0_4_) * fVar98;
      auVar142._4_4_ =
           ((float)((uint)fVar114 ^ _UNK_150651574) *
            ((float)(~uVar40 & auVar91._4_4_) - auVar62._4_4_) - fVar69) -
           ((((fVar125 - auVar90._4_4_) - fVar124) + auVar67._4_4_) * fVar157 +
           (((fVar84 - auVar101._4_4_) - fVar134) + auVar99._4_4_) * fVar144 +
           (((fVar105 - auVar117._4_4_) - fVar128) + auVar48._4_4_) * auVar149._4_4_) * fVar106;
      auVar142._8_4_ =
           ((float)((uint)fVar115 ^ _UNK_150651578) *
            ((float)(~uVar42 & auVar91._8_4_) - auVar62._8_4_) - fVar70) -
           ((((fVar107 - auVar90._8_4_) - fVar126) + auVar67._8_4_) * fVar159 +
           (((fVar86 - auVar101._8_4_) - fVar119) + auVar99._8_4_) * fVar145 +
           (((fVar152 - auVar117._8_4_) - fVar131) + auVar48._8_4_) * auVar149._8_4_) * fVar108;
      auVar142._12_4_ =
           ((float)((uint)fVar116 ^ _UNK_15065157c) *
            ((float)(~uVar44 & auVar91._12_4_) - auVar62._12_4_) - fVar71) -
           ((((fVar87 - auVar90._12_4_) - fVar88) + auVar67._12_4_) * fVar160 +
           (((fVar95 - auVar101._12_4_) - fVar96) + auVar99._12_4_) * fVar146 +
           (((fVar109 - auVar117._12_4_) - fVar136) + auVar48._12_4_) * auVar149._12_4_) * fVar110;
      auVar118._0_4_ = (fVar98 + fVar111) * auVar129._0_4_ + ___xmm_3f8000003f8000003f8000003f800000
      ;
      auVar118._4_4_ = (fVar106 + fVar114) * auVar129._4_4_ + _UNK_15076b1f4;
      auVar118._8_4_ = (fVar108 + fVar115) * auVar129._8_4_ + _UNK_15076b1f8;
      auVar118._12_4_ = (fVar110 + fVar116) * auVar129._12_4_ + _UNK_15076b1fc;
      auVar62 = divps(auVar142,auVar118);
      fVar98 = auVar62._0_4_;
      fVar111 = auVar149._0_4_ * fVar98;
      fVar106 = auVar62._4_4_;
      fVar114 = auVar149._4_4_ * fVar106;
      fVar108 = auVar62._8_4_;
      fVar115 = auVar149._8_4_ * fVar108;
      fVar110 = auVar62._12_4_;
      fVar116 = auVar149._12_4_ * fVar110;
      auVar48._0_4_ = fVar120 * fVar111 + fVar147;
      auVar48._4_4_ = fVar121 * fVar114 + fVar105;
      auVar48._8_4_ = fVar132 * fVar115 + fVar152;
      auVar48._12_4_ = fVar77 * fVar116 + fVar109;
      fVar140 = fVar140 * fVar98;
      fVar144 = fVar144 * fVar106;
      fVar145 = fVar145 * fVar108;
      fVar146 = fVar146 * fVar110;
      *(float *)(param_1 + lVar25) = auVar48._0_4_;
      uVar13 = extractps(auVar48,1);
      *(undefined8 *)(param_1 + lVar32) = uVar13;
      auVar72._0_4_ = fVar120 * fVar140 + fVar78;
      auVar72._4_4_ = fVar121 * fVar144 + fVar84;
      auVar72._8_4_ = fVar132 * fVar145 + fVar86;
      auVar72._12_4_ = fVar77 * fVar146 + fVar95;
      uVar13 = extractps(auVar48,2);
      *(undefined8 *)(param_1 + lVar27) = uVar13;
      uVar13 = extractps(auVar48,3);
      *(undefined8 *)(param_1 + lVar37) = uVar13;
      fVar153 = fVar153 * fVar98;
      fVar157 = fVar157 * fVar106;
      fVar159 = fVar159 * fVar108;
      fVar160 = fVar160 * fVar110;
      *(float *)(param_1 + 4 + lVar25) = auVar72._0_4_;
      uVar13 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar13;
      uVar13 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar13;
      auVar156._0_4_ = fVar120 * fVar153 + fVar97;
      auVar156._4_4_ = fVar121 * fVar157 + fVar125;
      auVar156._8_4_ = fVar132 * fVar159 + fVar107;
      auVar156._12_4_ = fVar77 * fVar160 + fVar87;
      uVar13 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + 4 + lVar37) = uVar13;
      *(float *)(param_1 + 8 + lVar25) = auVar156._0_4_;
      uVar13 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar13;
      uVar13 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar13;
      uVar13 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 8 + lVar37) = uVar13;
      *(uint *)(param_1 + 0xc + lVar25) = uVar41;
      *(uint *)(param_1 + 0xc + lVar32) = uVar6;
      *(uint *)(param_1 + 0xc + lVar27) = uVar7;
      *(uint *)(param_1 + 0xc + lVar37) = uVar43;
      auVar91._0_4_ = fVar127 - fVar111 * fVar133;
      auVar91._4_4_ = fVar128 - fVar114 * fVar139;
      auVar91._8_4_ = fVar131 - fVar115 * fVar137;
      auVar91._12_4_ = fVar136 - fVar116 * fVar138;
      *(float *)(param_1 + lVar29) = auVar91._0_4_;
      uVar13 = extractps(auVar91,1);
      *(undefined8 *)(param_1 + lVar31) = uVar13;
      uVar13 = extractps(auVar91,2);
      *(undefined8 *)(param_1 + lVar35) = uVar13;
      fVar46 = fVar46 - fVar140 * fVar133;
      auVar81._0_8_ = CONCAT44(fVar134 - fVar144 * fVar139,fVar46);
      auVar81._8_4_ = fVar119 - fVar145 * fVar137;
      auVar81._12_4_ = fVar96 - fVar146 * fVar138;
      uVar13 = extractps(auVar91,3);
      *(undefined8 *)(param_1 + lVar33) = uVar13;
      *(float *)(param_1 + 4 + lVar29) = fVar46;
      uVar13 = extractps(auVar81,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar13;
      uVar13 = extractps(auVar81,2);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar13;
      auVar90._8_4_ = auVar81._8_4_;
      auVar90._0_8_ = auVar81._0_8_;
      auVar90._12_4_ = auVar81._12_4_;
      auVar67._0_4_ = fVar122 - fVar153 * fVar133;
      auVar67._4_4_ = fVar124 - fVar157 * fVar139;
      auVar67._8_4_ = fVar126 - fVar159 * fVar137;
      auVar67._12_4_ = fVar88 - fVar160 * fVar138;
      uVar13 = extractps(auVar90,3);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar13;
      *(float *)(param_1 + 8 + lVar29) = auVar67._0_4_;
      uVar13 = extractps(auVar67,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar13;
      uVar13 = extractps(auVar67,2);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar13;
      uVar13 = extractps(auVar67,3);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar13;
      pfVar1 = (float *)(param_5 + uVar26);
      *pfVar1 = fVar98 + fVar66;
      pfVar1[1] = fVar106 + fVar69;
      pfVar1[2] = fVar108 + fVar70;
      pfVar1[3] = fVar110 + fVar71;
      *(uint *)(param_1 + 0xc + lVar29) = uVar8;
      *(uint *)(param_1 + 0xc + lVar31) = uVar45;
      *(uint *)(param_1 + 0xc + lVar35) = uVar9;
      *(uint *)(param_1 + 0xc + lVar33) = uVar10;
      uVar36 = uVar36 + 4;
      uVar24 = uVar24 + 0x10;
    } while ((int)uVar36 < (int)(uVar30 & 0xfffffffc));
    if ((int)param_13 <= (int)uVar36) {
      return;
    }
  }
  uVar41 = (uint)uVar36;
  auVar141._0_4_ =
       -(uint)((int)(uVar41 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar141._4_4_ =
       -(uint)((int)(uVar41 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar141._8_4_ = -(uint)((int)(uVar41 | _UNK_150631e08) < (int)param_13);
  auVar141._12_4_ = -(uint)((int)(uVar41 | _UNK_150631e0c) < (int)param_13);
  uVar36 = uVar36 & 0xffffffff;
  piVar2 = (int *)(param_3 + uVar36 * 8);
  uVar30 = movmskps(unaff_EDI,auVar141);
  bVar28 = (char)((char)uVar30 << 4) >> 4;
  if (uVar30 == 0xf) {
    iVar154 = *piVar2;
    iVar79 = piVar2[1];
    iVar158 = piVar2[2];
    iVar85 = piVar2[3];
    auVar50 = *(undefined1 (*) [16])(piVar2 + 4);
    iVar89 = auVar50._12_4_;
    iVar47 = auVar50._0_4_;
    iVar60 = auVar50._4_4_;
    iVar61 = auVar50._8_4_;
  }
  else {
    auVar49._0_4_ = ___xmm_00000018000000100000000800000000 & auVar141._0_4_;
    auVar49._4_4_ = _UNK_150b51a04 & auVar141._4_4_;
    auVar49._8_4_ = _UNK_150b51a08 & auVar141._8_4_;
    auVar49._12_4_ = _UNK_150b51a0c & auVar141._12_4_;
    lVar21 = extractps(auVar49,1);
    lVar23 = extractps(auVar49,2);
    lVar25 = extractps(auVar49,3);
    iVar154 = *piVar2;
    iVar158 = *(int *)((longlong)piVar2 + lVar21);
    iVar47 = *(int *)((longlong)piVar2 + lVar23);
    iVar61 = *(int *)((longlong)piVar2 + lVar25);
    auVar50 = ___xmm_0000001c000000140000000c00000004 & auVar141;
    iVar79 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._0_4_);
    iVar85 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._4_4_);
    iVar60 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._8_4_);
    iVar89 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._12_4_);
  }
  auVar104 = ZEXT816(0);
  bVar22 = ~bVar28;
  auVar113 = ZEXT816(0);
  if ((param_7 & 1) != 0) {
    if ((bVar22 & 9) == 0) {
      auVar113 = ZEXT416(*(uint *)(param_8 + uVar36));
    }
    else {
      pbVar11 = (byte *)(param_8 + uVar36);
      if ((uVar30 & 1) != 0) {
        auVar113 = ZEXT116(*pbVar11);
      }
      if ((uVar30 & 2) != 0) {
        auVar50._8_8_ = auVar113._8_8_;
        auVar50._0_8_ = auVar113._0_8_ | (ulonglong)pbVar11[1] << 8;
        auVar113 = pblendw(auVar113,auVar50,0xfd);
      }
      if ((uVar30 & 4) != 0) {
        auVar62 = pmovzxwd(auVar50,auVar113);
        auVar50._8_8_ = auVar62._8_8_;
        auVar50._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar11[2] << 0x10 |
             (ulonglong)auVar113[3] << 0x18;
        auVar113 = auVar50;
      }
      if ((uVar30 & 8) != 0) {
        bVar14 = auVar113[2];
        auVar62 = pmovzxwd(auVar113,auVar113);
        auVar113._8_8_ = auVar62._8_8_;
        auVar113._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar14 << 0x10 |
             (ulonglong)pbVar11[3] << 0x18;
      }
    }
  }
  if ((param_10 & 1) != 0) {
    if ((bVar22 & 9) == 0) {
      auVar104 = ZEXT416(*(uint *)(param_11 + uVar36));
    }
    else {
      pbVar11 = (byte *)(param_11 + uVar36);
      if ((uVar30 & 1) != 0) {
        auVar104 = ZEXT116(*pbVar11);
      }
      if ((uVar30 & 2) != 0) {
        auVar50._8_8_ = auVar104._8_8_;
        auVar50._0_8_ = auVar104._0_8_ | (ulonglong)pbVar11[1] << 8;
        auVar104 = pblendw(auVar104,auVar50,0xfd);
      }
      if ((uVar30 & 4) != 0) {
        bVar14 = auVar104[3];
        auVar62 = pmovzxwd(auVar50,auVar104);
        auVar104._8_8_ = auVar62._8_8_;
        auVar104._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar11[2] << 0x10 |
             (ulonglong)bVar14 << 0x18;
      }
      if ((uVar30 & 8) != 0) {
        bVar14 = auVar104[2];
        auVar62 = pmovzxwd(auVar104,auVar104);
        auVar104._8_8_ = auVar62._8_8_;
        auVar104._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar14 << 0x10 |
             (ulonglong)pbVar11[3] << 0x18;
      }
    }
  }
  auVar92._0_4_ = iVar154 << 4;
  auVar92._4_4_ = iVar158 << 4;
  auVar92._8_4_ = iVar47 << 4;
  auVar92._12_4_ = iVar61 << 4;
  auVar99 = auVar141 & auVar92;
  lVar21 = param_1 + auVar99._0_4_;
  lVar23 = param_1 + auVar99._4_4_;
  lVar25 = param_1 + auVar99._8_4_;
  lVar27 = param_1 + auVar99._12_4_;
  auVar48 = ___xmm_00000004000000040000000400000004 & auVar141;
  uVar36 = (ulonglong)auVar48._0_4_;
  uVar24 = (ulonglong)auVar48._4_4_;
  local_1b8 = ___xmm_00000008000000080000000800000008 & auVar141;
  uVar26 = (ulonglong)local_1b8._0_4_;
  auVar73._0_4_ = iVar79 << 4;
  auVar73._4_4_ = iVar85 << 4;
  auVar73._8_4_ = iVar60 << 4;
  auVar73._12_4_ = iVar89 << 4;
  auVar80 = auVar141 & auVar73;
  lVar35 = (longlong)auVar80._0_4_;
  auVar62 = ZEXT416(*(uint *)(param_1 + auVar99._0_4_));
  lVar29 = param_1 + lVar35;
  lVar31 = param_1 + auVar80._4_4_;
  lVar32 = param_1 + auVar80._8_4_;
  lVar33 = param_1 + auVar80._12_4_;
  bVar38 = (bVar28 & 2) != 0;
  if (bVar38) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._4_4_),0x10);
  }
  uVar34 = (ulonglong)local_1b8._4_4_;
  auVar81 = ZEXT416(*(uint *)(uVar36 + lVar21));
  uVar6 = auVar48._8_4_;
  uVar43 = auVar48._12_4_;
  uVar7 = local_1b8._8_4_;
  uVar8 = local_1b8._12_4_;
  if (bVar38) {
    auVar81 = insertps(auVar81,*(undefined4 *)(uVar24 + lVar23),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar26 + lVar21)),*(undefined4 *)(uVar34 + lVar23),0x10);
    auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar35)),*(undefined4 *)(param_1 + auVar80._4_4_)
                       ,0x10);
    auVar48 = insertps(ZEXT416(*(uint *)(uVar36 + lVar29)),*(undefined4 *)(uVar24 + lVar31),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar26 + lVar29)),*(undefined4 *)(uVar34 + lVar31),0x10);
  }
  else {
    auVar101 = ZEXT416(*(uint *)(uVar26 + lVar21));
    auVar67 = ZEXT416(*(uint *)(param_1 + lVar35));
    auVar48 = ZEXT416(*(uint *)(uVar36 + lVar29));
    auVar72 = ZEXT416(*(uint *)(uVar26 + lVar29));
  }
  if ((bVar28 & 4) != 0) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._8_4_),0x20);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)uVar6 + lVar25),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar7 + lVar25),0x20);
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar80._8_4_),0x20);
    auVar48 = insertps(auVar48,*(undefined4 *)((ulonglong)uVar6 + lVar32),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)uVar7 + lVar32),0x20);
  }
  if ((char)bVar28 < '\0') {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._12_4_),0x30);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)uVar43 + lVar27),0x30);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar8 + lVar27),0x30);
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar80._12_4_),0x30);
    auVar48 = insertps(auVar48,*(undefined4 *)((ulonglong)uVar43 + lVar33),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)uVar8 + lVar33),0x30);
  }
  local_128 = (ulonglong)uVar43;
  lVar35 = (longlong)(int)(uVar41 << 2);
  pfVar1 = (float *)(param_5 + lVar35);
  if ((bVar22 & 9) == 0) {
    local_1b8 = *(undefined1 (*) [16])(param_4 + lVar35);
    auVar99 = *(undefined1 (*) [16])(param_5 + lVar35);
  }
  else {
    puVar12 = (uint *)(param_4 + lVar35);
    if ((uVar30 & 1) != 0) {
      local_1b8 = ZEXT416(*puVar12);
    }
    if ((uVar30 & 2) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[1],0x10);
    }
    if ((uVar30 & 4) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[2],0x20);
    }
    if ((uVar30 & 8) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[3],0x30);
    }
    auVar99 = local_1b8;
    if ((uVar30 & 1) != 0) {
      auVar99 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar30 & 2) != 0) {
      auVar99 = insertps(auVar99,pfVar1[1],0x10);
    }
    if ((uVar30 & 4) != 0) {
      auVar99 = insertps(auVar99,pfVar1[2],0x20);
    }
    if ((uVar30 & 8) != 0) {
      auVar99 = insertps(auVar99,pfVar1[3],0x30);
    }
  }
  fVar87 = auVar67._0_4_;
  fVar116 = auVar62._0_4_;
  fVar134 = fVar116 - fVar87;
  fVar88 = auVar67._4_4_;
  fVar119 = auVar62._4_4_;
  fVar136 = fVar119 - fVar88;
  auVar135._0_8_ = CONCAT44(fVar136,fVar134);
  fVar95 = auVar67._8_4_;
  fVar120 = auVar62._8_4_;
  fVar121 = auVar62._12_4_;
  auVar135._8_4_ = fVar120 - fVar95;
  fVar96 = auVar67._12_4_;
  auVar135._12_4_ = fVar121 - fVar96;
  fVar46 = auVar48._0_4_;
  fVar109 = auVar81._0_4_;
  fVar108 = fVar109 - fVar46;
  fVar78 = auVar48._4_4_;
  fVar110 = auVar81._4_4_;
  fVar111 = fVar110 - fVar78;
  auVar130._0_8_ = CONCAT44(fVar111,fVar108);
  fVar84 = auVar48._8_4_;
  fVar114 = auVar81._8_4_;
  fVar115 = auVar81._12_4_;
  auVar130._8_4_ = fVar114 - fVar84;
  fVar86 = auVar48._12_4_;
  auVar130._12_4_ = fVar115 - fVar86;
  fVar66 = auVar72._0_4_;
  fVar97 = auVar101._0_4_;
  fVar98 = fVar97 - fVar66;
  fVar69 = auVar72._4_4_;
  fVar105 = auVar101._4_4_;
  fVar125 = fVar105 - fVar69;
  auVar123._0_8_ = CONCAT44(fVar125,fVar98);
  fVar70 = auVar72._8_4_;
  fVar106 = auVar101._8_4_;
  fVar107 = auVar101._12_4_;
  auVar123._8_4_ = fVar106 - fVar70;
  fVar71 = auVar72._12_4_;
  auVar123._12_4_ = fVar107 - fVar71;
  auVar51._0_4_ = fVar134 * fVar134;
  auVar51._4_4_ = fVar136 * fVar136;
  auVar51._8_4_ = auVar135._8_4_ * auVar135._8_4_;
  auVar51._12_4_ = auVar135._12_4_ * auVar135._12_4_;
  auVar68._0_4_ = fVar98 * fVar98 + fVar108 * fVar108 + auVar51._0_4_;
  auVar68._4_4_ = fVar125 * fVar125 + fVar111 * fVar111 + auVar51._4_4_;
  auVar68._8_4_ = auVar123._8_4_ * auVar123._8_4_ + auVar130._8_4_ * auVar130._8_4_ + auVar51._8_4_;
  auVar68._12_4_ =
       auVar123._12_4_ * auVar123._12_4_ + auVar130._12_4_ * auVar130._12_4_ + auVar51._12_4_;
  auVar48 = sqrtps(auVar51,auVar68);
  uVar30 = -(uint)(auVar68._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar41 = -(uint)(auVar68._4_4_ < _UNK_1506895e4);
  uVar43 = -(uint)(auVar68._8_4_ < _UNK_1506895e8);
  uVar45 = -(uint)(auVar68._12_4_ < _UNK_1506895ec);
  auVar52._4_4_ = uVar41;
  auVar52._0_4_ = uVar30;
  auVar63._8_4_ = auVar130._8_4_;
  auVar63._0_8_ = auVar130._0_8_;
  auVar63._12_4_ = auVar130._12_4_;
  auVar80 = divps(auVar63,auVar48);
  auVar74._8_4_ = auVar123._8_4_;
  auVar74._0_8_ = auVar123._0_8_;
  auVar74._12_4_ = auVar123._12_4_;
  auVar81 = divps(auVar74,auVar48);
  auVar102._8_4_ = auVar135._8_4_;
  auVar102._0_8_ = auVar135._0_8_;
  auVar102._12_4_ = auVar135._12_4_;
  auVar62 = divps(auVar102,auVar48);
  auVar52._8_4_ = uVar43;
  auVar52._12_4_ = uVar45;
  auVar15._4_4_ = _UNK_15076b1f4;
  auVar15._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar15._8_4_ = _UNK_15076b1f8;
  auVar15._12_4_ = _UNK_15076b1fc;
  auVar62 = blendvps(auVar62,auVar15,auVar52);
  auVar53._8_4_ = auVar135._8_4_;
  auVar53._0_8_ = auVar135._0_8_;
  auVar53._12_4_ = auVar135._12_4_;
  bVar38 = (bVar28 & 1) != 0;
  if (bVar38) {
    auVar53 = auVar62;
  }
  local_1c8._0_8_ = CONCAT44(~uVar41 & auVar80._4_4_,~uVar30 & auVar80._0_4_);
  local_1c8._8_4_ = ~uVar43 & auVar80._8_4_;
  local_1c8._12_4_ = ~uVar45 & auVar80._12_4_;
  local_278._4_4_ = ~uVar41 & auVar81._4_4_;
  local_278._0_4_ = ~uVar30 & auVar81._0_4_;
  local_278._8_4_ = ~uVar43 & auVar81._8_4_;
  local_278._12_4_ = ~uVar45 & auVar81._12_4_;
  auVar64._8_4_ = auVar130._8_4_;
  auVar64._0_8_ = auVar130._0_8_;
  auVar64._12_4_ = auVar130._12_4_;
  auVar75._8_4_ = auVar123._8_4_;
  auVar75._0_8_ = auVar123._0_8_;
  auVar75._12_4_ = auVar123._12_4_;
  if (bVar38) {
    auVar64._8_4_ = local_1c8._8_4_;
    auVar64._0_8_ = local_1c8._0_8_;
    auVar64._12_4_ = local_1c8._12_4_;
    auVar75 = local_278;
  }
  auVar155._4_4_ = iVar158 * 3;
  auVar155._0_4_ = iVar154 * 3;
  auVar155._8_4_ = iVar47 * 3;
  auVar155._12_4_ = iVar61 * 3;
  auVar82._4_4_ = iVar85 * 3;
  auVar82._0_4_ = iVar79 * 3;
  auVar82._8_4_ = iVar60 * 3;
  auVar82._12_4_ = iVar89 * 3;
  auVar81 = blendps(auVar135,auVar53,1);
  bVar38 = (bVar28 & 2) != 0;
  auVar80 = auVar81;
  if (bVar38) {
    auVar80 = auVar62;
  }
  auVar155 = auVar155 & auVar141;
  auVar82 = auVar82 & auVar141;
  auVar67 = blendps(auVar130,auVar64,1);
  auVar54 = auVar67;
  if (bVar38) {
    auVar54._8_4_ = local_1c8._8_4_;
    auVar54._0_8_ = local_1c8._0_8_;
    auVar54._12_4_ = local_1c8._12_4_;
  }
  auVar72 = ___xmm_0000000c0000000c0000000c0000000c & auVar141;
  auVar90 = blendps(auVar123,auVar75,1);
  auVar101 = auVar90;
  if (bVar38) {
    auVar101 = local_278;
  }
  auVar81 = blendps(auVar81,auVar80,2);
  bVar38 = (bVar28 & 4) != 0;
  auVar80 = auVar81;
  if (bVar38) {
    auVar80 = auVar62;
  }
  lVar35 = param_2 + (longlong)auVar155._0_4_ * 4;
  lVar37 = param_2 + (longlong)auVar82._0_4_ * 4;
  auVar67 = blendps(auVar67,auVar54,2);
  auVar55 = auVar67;
  if (bVar38) {
    auVar55._8_4_ = local_1c8._8_4_;
    auVar55._0_8_ = local_1c8._0_8_;
    auVar55._12_4_ = local_1c8._12_4_;
  }
  lVar4 = param_2 + (longlong)auVar155._4_4_ * 4;
  lVar5 = param_2 + (longlong)auVar82._4_4_ * 4;
  auVar90 = blendps(auVar90,auVar101,2);
  auVar101 = auVar90;
  if (bVar38) {
    auVar101 = local_278;
  }
  auVar100 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar21)),
                      *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar23),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar29)),
                      *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar31),0x10);
  auVar150 = insertps(ZEXT416(*(uint *)(uVar36 + lVar35)),*(undefined4 *)(uVar24 + lVar4),0x10);
  auVar117 = insertps(ZEXT416(*(uint *)(uVar26 + lVar35)),*(undefined4 *)(uVar34 + lVar4),0x10);
  auVar156 = insertps(ZEXT416(*(uint *)(uVar36 + lVar37)),*(undefined4 *)(uVar24 + lVar5),0x10);
  auVar91 = insertps(ZEXT416(*(uint *)(uVar26 + lVar37)),*(undefined4 *)(uVar34 + lVar5),0x10);
  auVar149 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar155._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar155._4_4_ * 4),0x10);
  lVar21 = param_2 + (longlong)auVar155._8_4_ * 4;
  auVar142 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar82._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar82._4_4_ * 4),0x10);
  lVar23 = param_2 + (longlong)auVar82._8_4_ * 4;
  auVar80 = blendps(auVar81,auVar80,4);
  bVar38 = -1 < (char)bVar28;
  if (bVar38) {
    auVar62 = auVar80;
  }
  auVar81 = insertps(auVar100,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar25),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar32),0x20);
  lVar25 = param_2 + (longlong)auVar155._12_4_ * 4;
  auVar149 = insertps(auVar149,*(undefined4 *)(param_2 + (longlong)auVar155._8_4_ * 4),0x20);
  auVar150 = insertps(auVar150,*(undefined4 *)((ulonglong)uVar6 + lVar21),0x20);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)uVar7 + lVar21),0x20);
  auVar142 = insertps(auVar142,*(undefined4 *)(param_2 + (longlong)auVar82._8_4_ * 4),0x20);
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)uVar6 + lVar23),0x20);
  lVar21 = param_2 + (longlong)auVar82._12_4_ * 4;
  auVar100 = insertps(auVar91,*(undefined4 *)((ulonglong)uVar7 + lVar23),0x20);
  auVar67 = blendps(auVar67,auVar55,4);
  if (bVar38) {
    local_1c8 = auVar67;
  }
  auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar27),0x30);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar33),0x30);
  auVar149 = insertps(auVar149,*(undefined4 *)(param_2 + (longlong)auVar155._12_4_ * 4),0x30);
  auVar150 = insertps(auVar150,*(undefined4 *)(local_128 + lVar25),0x30);
  auVar91 = insertps(auVar117,*(undefined4 *)((ulonglong)uVar8 + lVar25),0x30);
  auVar117 = insertps(auVar142,*(undefined4 *)(param_2 + (longlong)auVar82._12_4_ * 4),0x30);
  auVar142 = insertps(auVar156,*(undefined4 *)(local_128 + lVar21),0x30);
  auVar72 = insertps(auVar100,*(undefined4 *)((ulonglong)uVar8 + lVar21),0x30);
  auVar101 = blendps(auVar90,auVar101,4);
  if (bVar38) {
    local_278 = auVar101;
  }
  local_268 = auVar113._0_4_;
  auVar90 = pmovsxbd(auVar81,local_268);
  auVar56._0_4_ = auVar90._0_4_ << 2;
  auVar56._4_4_ = auVar90._4_4_ << 2;
  auVar56._8_4_ = auVar90._8_4_ << 2;
  auVar56._12_4_ = auVar90._12_4_ << 2;
  auVar56 = auVar56 & auVar141;
  local_198 = auVar104._0_4_;
  auVar90 = pmovsxbd(auVar56,local_198);
  auVar57._0_4_ = auVar90._0_4_ << 2;
  auVar57._4_4_ = auVar90._4_4_ << 2;
  auVar57._8_4_ = auVar90._8_4_ << 2;
  auVar57._12_4_ = auVar90._12_4_ << 2;
  auVar57 = auVar57 & auVar141;
  auVar90 = insertps(ZEXT416(*(uint *)(param_9 + auVar56._0_4_)),
                     *(undefined4 *)(param_9 + auVar56._4_4_),0x10);
  auVar90 = insertps(auVar90,*(undefined4 *)(param_9 + auVar56._8_4_),0x20);
  auVar90 = insertps(auVar90,*(undefined4 *)(param_9 + auVar56._12_4_),0x30);
  auVar156 = blendps(auVar80,auVar62,8);
  auVar62 = insertps(ZEXT416(*(uint *)(param_12 + auVar57._0_4_)),
                     *(undefined4 *)(param_12 + auVar57._4_4_),0x10);
  auVar62 = insertps(auVar62,*(undefined4 *)(param_12 + auVar57._8_4_),0x20);
  auVar80 = insertps(auVar62,*(undefined4 *)(param_12 + auVar57._12_4_),0x30);
  auVar100 = blendps(auVar67,local_1c8,8);
  auVar67 = blendps(auVar101,local_278,8);
  local_f8 = auVar48._0_4_;
  uStack_f4 = auVar48._4_4_;
  uStack_f0 = auVar48._8_4_;
  uStack_ec = auVar48._12_4_;
  auVar16._4_4_ = _UNK_15076b1f4;
  auVar16._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar16._8_4_ = _UNK_15076b1f8;
  auVar16._12_4_ = _UNK_15076b1fc;
  auVar62 = divps(auVar16,local_1b8);
  auVar58._4_4_ = -(uint)(local_1b8._4_4_ < _UNK_1506895d4);
  auVar58._0_4_ = -(uint)(local_1b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar58._8_4_ = -(uint)(local_1b8._8_4_ < _UNK_1506895d8);
  auVar58._12_4_ = -(uint)(local_1b8._12_4_ < _UNK_1506895dc);
  auVar48 = blendvps(auVar62,auVar16,auVar58);
  local_2e8 = auVar81._0_4_;
  fStack_2e4 = auVar81._4_4_;
  fStack_2e0 = auVar81._8_4_;
  fStack_2dc = auVar81._12_4_;
  local_288 = auVar118._0_4_;
  fStack_284 = auVar118._4_4_;
  fStack_280 = auVar118._8_4_;
  fStack_27c = auVar118._12_4_;
  auVar93._0_4_ = local_2e8 + local_288;
  auVar93._4_4_ = fStack_2e4 + fStack_284;
  auVar93._8_4_ = fStack_2e0 + fStack_280;
  auVar93._12_4_ = fStack_2dc + fStack_27c;
  auVar62 = divps(auVar90,auVar93);
  auVar62 = sqrtps(auVar62,auVar62);
  fVar98 = param_6 * auVar90._0_4_ * param_6;
  fVar125 = param_6 * auVar90._4_4_ * param_6;
  fVar108 = param_6 * auVar90._8_4_ * param_6;
  fVar111 = param_6 * auVar90._12_4_ * param_6;
  fVar134 = auVar62._0_4_ * (auVar80._0_4_ + auVar80._0_4_) * auVar48._0_4_ * param_6;
  fVar136 = auVar62._4_4_ * (auVar80._4_4_ + auVar80._4_4_) * auVar48._4_4_ * param_6;
  fVar77 = auVar62._8_4_ * (auVar80._8_4_ + auVar80._8_4_) * auVar48._8_4_ * param_6;
  param_6 = auVar62._12_4_ * (auVar80._12_4_ + auVar80._12_4_) * auVar48._12_4_ * param_6;
  fVar128 = auVar100._0_4_;
  fVar131 = auVar100._4_4_;
  fVar132 = auVar100._8_4_;
  fVar133 = auVar100._12_4_;
  fVar122 = auVar67._0_4_;
  fVar124 = auVar67._4_4_;
  fVar126 = auVar67._8_4_;
  fVar127 = auVar67._12_4_;
  local_1a8 = auVar99._0_4_;
  fStack_1a4 = auVar99._4_4_;
  fStack_1a0 = auVar99._8_4_;
  fStack_19c = auVar99._12_4_;
  auVar59._0_4_ =
       ((float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar98) *
        ((float)(~uVar30 & local_f8) - local_1b8._0_4_) - local_1a8) -
       ((((fVar97 - auVar91._0_4_) - fVar66) + auVar72._0_4_) * fVar122 +
       (((fVar109 - auVar150._0_4_) - fVar46) + auVar142._0_4_) * fVar128 +
       (((fVar116 - auVar149._0_4_) - fVar87) + auVar117._0_4_) * auVar156._0_4_) * fVar134;
  auVar59._4_4_ =
       ((float)(_UNK_150651574 ^ (uint)fVar125) * ((float)(~uVar41 & uStack_f4) - local_1b8._4_4_) -
       fStack_1a4) -
       ((((fVar105 - auVar91._4_4_) - fVar69) + auVar72._4_4_) * fVar124 +
       (((fVar110 - auVar150._4_4_) - fVar78) + auVar142._4_4_) * fVar131 +
       (((fVar119 - auVar149._4_4_) - fVar88) + auVar117._4_4_) * auVar156._4_4_) * fVar136;
  auVar59._8_4_ =
       ((float)(_UNK_150651578 ^ (uint)fVar108) * ((float)(~uVar43 & uStack_f0) - local_1b8._8_4_) -
       fStack_1a0) -
       ((((fVar106 - auVar91._8_4_) - fVar70) + auVar72._8_4_) * fVar126 +
       (((fVar114 - auVar150._8_4_) - fVar84) + auVar142._8_4_) * fVar132 +
       (((fVar120 - auVar149._8_4_) - fVar95) + auVar117._8_4_) * auVar156._8_4_) * fVar77;
  auVar59._12_4_ =
       ((float)(_UNK_15065157c ^ (uint)fVar111) * ((float)(~uVar45 & uStack_ec) - local_1b8._12_4_)
       - fStack_19c) -
       ((((fVar107 - auVar91._12_4_) - fVar71) + auVar72._12_4_) * fVar127 +
       (((fVar115 - auVar150._12_4_) - fVar86) + auVar142._12_4_) * fVar133 +
       (((fVar121 - auVar149._12_4_) - fVar96) + auVar117._12_4_) * auVar156._12_4_) * param_6;
  auVar76._0_4_ = (fVar134 + fVar98) * auVar93._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar76._4_4_ = (fVar136 + fVar125) * auVar93._4_4_ + _UNK_15076b1f4;
  auVar76._8_4_ = (fVar77 + fVar108) * auVar93._8_4_ + _UNK_15076b1f8;
  auVar76._12_4_ = (param_6 + fVar111) * auVar93._12_4_ + _UNK_15076b1fc;
  auVar62 = divps(auVar59,auVar76);
  fVar98 = auVar62._0_4_;
  auVar65._0_4_ = local_1a8 + fVar98;
  fVar125 = auVar62._4_4_;
  auVar65._4_4_ = fStack_1a4 + fVar125;
  fVar108 = auVar62._8_4_;
  auVar65._8_4_ = fStack_1a0 + fVar108;
  fVar111 = auVar62._12_4_;
  auVar65._12_4_ = fStack_19c + fVar111;
  if ((bVar28 & 1) != 0) {
    *pfVar1 = auVar65._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar65,1);
    *(undefined8 *)(pfVar1 + 1) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar65,2);
    *(undefined8 *)(pfVar1 + 2) = uVar13;
  }
  fVar134 = auVar156._0_4_ * fVar98;
  fVar136 = auVar156._4_4_ * fVar125;
  fVar77 = auVar156._8_4_ * fVar108;
  fVar139 = auVar156._12_4_ * fVar111;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar65,3);
    *(undefined8 *)(pfVar1 + 3) = uVar13;
  }
  auVar103._0_4_ = fVar116 + local_2e8 * fVar134;
  auVar103._4_4_ = fVar119 + fStack_2e4 * fVar136;
  auVar103._8_4_ = fVar120 + fStack_2e0 * fVar77;
  auVar103._12_4_ = fVar121 + fStack_2dc * fVar139;
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + auVar92._0_4_) = auVar103._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + auVar92._8_4_) = uVar13;
  }
  uVar20 = fStack_2dc * fVar133 * fVar111;
  uVar19 = fStack_2e0 * fVar132 * fVar108;
  uVar18 = fStack_2e4 * fVar131 * fVar125;
  uVar17 = local_2e8 * fVar128 * fVar98;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + auVar92._12_4_) = uVar13;
    auVar94._0_4_ = fVar109 + (float)uVar17;
    auVar94._4_4_ = fVar110 + (float)uVar18;
    auVar94._8_4_ = fVar114 + (float)uVar19;
    auVar94._12_4_ = fVar115 + (float)uVar20;
  }
  else {
    auVar94._0_4_ = fVar109 + (float)uVar17;
    auVar94._4_4_ = fVar110 + (float)uVar18;
    auVar94._8_4_ = fVar114 + (float)uVar19;
    auVar94._12_4_ = fVar115 + (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar92._0_4_) = auVar94._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._8_4_) = uVar13;
  }
  uVar20 = fStack_2dc * fVar127 * fVar111;
  uVar19 = fStack_2e0 * fVar126 * fVar108;
  uVar18 = fStack_2e4 * fVar124 * fVar125;
  uVar17 = local_2e8 * fVar122 * fVar98;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._12_4_) = uVar13;
    auVar83._0_4_ = fVar97 + (float)uVar17;
    auVar83._4_4_ = fVar105 + (float)uVar18;
    auVar83._8_4_ = fVar106 + (float)uVar19;
    auVar83._12_4_ = fVar107 + (float)uVar20;
  }
  else {
    auVar83._0_4_ = fVar97 + (float)uVar17;
    auVar83._4_4_ = fVar105 + (float)uVar18;
    auVar83._8_4_ = fVar106 + (float)uVar19;
    auVar83._12_4_ = fVar107 + (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar92._0_4_) = auVar83._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar83,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar83,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar83,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._12_4_) = uVar13;
  }
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar92._0_4_) = local_2e8;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._12_4_) = uVar13;
    auVar151._0_4_ = fVar87 - fVar134 * local_288;
    auVar151._4_4_ = fVar88 - fVar136 * fStack_284;
    auVar151._8_4_ = fVar95 - fVar77 * fStack_280;
    auVar151._12_4_ = fVar96 - fVar139 * fStack_27c;
  }
  else {
    auVar151._0_4_ = fVar87 - fVar134 * local_288;
    auVar151._4_4_ = fVar88 - fVar136 * fStack_284;
    auVar151._8_4_ = fVar95 - fVar77 * fStack_280;
    auVar151._12_4_ = fVar96 - fVar139 * fStack_27c;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + auVar73._0_4_) = auVar151._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar151,1);
    *(undefined8 *)(param_1 + auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar151,2);
    *(undefined8 *)(param_1 + auVar73._8_4_) = uVar13;
  }
  uVar20 = fVar133 * fVar111 * fStack_27c;
  uVar19 = fVar132 * fVar108 * fStack_280;
  uVar18 = fVar131 * fVar125 * fStack_284;
  uVar17 = fVar128 * fVar98 * local_288;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar151,3);
    *(undefined8 *)(param_1 + auVar73._12_4_) = uVar13;
    auVar143._0_4_ = fVar46 - (float)uVar17;
    auVar143._4_4_ = fVar78 - (float)uVar18;
    auVar143._8_4_ = fVar84 - (float)uVar19;
    auVar143._12_4_ = fVar86 - (float)uVar20;
  }
  else {
    auVar143._0_4_ = fVar46 - (float)uVar17;
    auVar143._4_4_ = fVar78 - (float)uVar18;
    auVar143._8_4_ = fVar84 - (float)uVar19;
    auVar143._12_4_ = fVar86 - (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar73._0_4_) = auVar143._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar143,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar143,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar13;
  }
  uVar20 = fVar127 * fVar111 * fStack_27c;
  uVar19 = fVar126 * fVar108 * fStack_280;
  uVar18 = fVar124 * fVar125 * fStack_284;
  uVar17 = fVar122 * fVar98 * local_288;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar143,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar13;
    auVar112._0_4_ = fVar66 - (float)uVar17;
    auVar112._4_4_ = fVar69 - (float)uVar18;
    auVar112._8_4_ = fVar70 - (float)uVar19;
    auVar112._12_4_ = fVar71 - (float)uVar20;
  }
  else {
    auVar112._0_4_ = fVar66 - (float)uVar17;
    auVar112._4_4_ = fVar69 - (float)uVar18;
    auVar112._8_4_ = fVar70 - (float)uVar19;
    auVar112._12_4_ = fVar71 - (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar73._0_4_) = auVar112._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar13;
  }
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = local_288;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar13;
  }
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 140942340

/* WARNING: Removing unreachable block (ram,0x000140942f92) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector2_5D__3E_un_3C_Cunf_3E_un_3C_unf_3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int unaff_R15D;
  longlong lVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar50;
  int iVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar63;
  float fVar64;
  undefined1 auVar58 [16];
  float fVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar72;
  float fVar73;
  undefined1 auVar67 [16];
  float fVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  int iVar76;
  float fVar80;
  float fVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  int iVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  int iVar87;
  undefined1 auVar79 [16];
  float fVar91;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar92;
  float fVar97;
  float fVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  float fVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar130;
  undefined1 auVar127 [16];
  undefined1 auVar129 [16];
  float fVar135;
  undefined1 auVar131 [16];
  float fVar136;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar137;
  float fVar141;
  float fVar142;
  undefined1 auVar138 [16];
  float fVar143;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar144;
  float fVar150;
  float fVar152;
  undefined1 auVar147 [16];
  float fVar145;
  int iVar146;
  int iVar151;
  float fVar153;
  float fVar154;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_288 [16];
  undefined4 local_268;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_f8;
  undefined1 auVar111 [16];
  undefined1 auVar122 [16];
  undefined1 auVar128 [16];
  
  uVar36 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar36 = param_13;
  }
  if ((int)(uVar36 & 0xfffffffc) < 1) {
    uVar17 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar27 = 0;
    uVar17 = 0;
    do {
      uVar28 = 0;
      auVar53 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar53 = ZEXT416(*(uint *)(param_8 + uVar17));
      }
      piVar2 = (int *)(param_3 + uVar27 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar27 * 2);
      if ((param_10 & 1) != 0) {
        uVar28 = (ulonglong)*(uint *)(param_11 + uVar17);
      }
      auVar147._8_8_ = 0;
      auVar147._0_8_ = uVar28;
      unaff_R15D = *piVar2 << 4;
      lVar33 = (longlong)unaff_R15D;
      lVar22 = (longlong)(piVar2[2] * 0x10);
      lVar18 = (longlong)(*piVar3 << 4);
      lVar32 = (longlong)(piVar3[2] * 0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar33)),*(undefined4 *)(param_1 + lVar22),0x10
                        );
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + lVar18),0x20);
      auVar94 = insertps(auVar93,*(undefined4 *)(param_1 + lVar32),0x30);
      fVar123 = auVar94._4_4_;
      fVar126 = auVar94._12_4_;
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                         *(undefined4 *)(param_1 + 4 + lVar22),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar18),0x20);
      auVar88 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                         *(undefined4 *)(param_1 + 8 + lVar22),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar18),0x20);
      auVar77 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar114 = auVar77._12_4_;
      lVar20 = (longlong)(piVar2[1] << 4);
      lVar30 = (longlong)(piVar2[3] * 0x10);
      lVar16 = (longlong)(piVar3[1] << 4);
      lVar24 = (longlong)(piVar3[3] * 0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar30),0x10
                        );
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + lVar16),0x20);
      auVar131 = insertps(auVar93,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar16),0x20);
      auVar138 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar16),0x20);
      auVar78 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      fVar85 = auVar78._12_4_;
      lVar23 = (longlong)(*piVar2 * 3);
      lVar21 = (longlong)(piVar2[2] * 3);
      auVar117 = insertps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),
                          *(undefined4 *)(param_2 + lVar21 * 4),0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar21 * 4),0x10);
      auVar127 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar21 * 4),0x10);
      auVar53 = pmovsxbd(auVar53,auVar53);
      auVar93 = insertps(ZEXT416(*(uint *)(param_9 + (auVar53._0_4_ << 2))),
                         *(undefined4 *)(param_9 + auVar53._4_4_ * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_9 + (auVar53._8_4_ << 2)),0x20);
      auVar58 = insertps(auVar93,*(undefined4 *)(param_9 + (auVar53._12_4_ << 2)),0x30);
      auVar53 = pmovsxbd(auVar147,auVar147);
      auVar93 = insertps(ZEXT416(*(uint *)(param_12 + (auVar53._0_4_ << 2))),
                         *(undefined4 *)(param_12 + auVar53._4_4_ * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_12 + (auVar53._8_4_ << 2)),0x20);
      auVar52 = insertps(auVar93,*(undefined4 *)(param_12 + (auVar53._12_4_ << 2)),0x30);
      uVar28 = uVar27 & 0xffffffff;
      fVar124 = auVar131._0_4_;
      fVar144 = auVar94._0_4_;
      auVar129._0_4_ = fVar144 - fVar124;
      fVar125 = auVar131._4_4_;
      auVar129._4_4_ = fVar123 - fVar125;
      fVar135 = auVar131._8_4_;
      fVar152 = auVar94._8_4_;
      auVar129._8_4_ = fVar152 - fVar135;
      fVar136 = auVar131._12_4_;
      auVar129._12_4_ = fVar126 - fVar136;
      fVar66 = auVar88._0_4_;
      fVar137 = auVar138._0_4_;
      auVar94._0_4_ = fVar66 - fVar137;
      fVar72 = auVar88._4_4_;
      fVar141 = auVar138._4_4_;
      auVar94._4_4_ = fVar72 - fVar141;
      fVar73 = auVar88._8_4_;
      fVar74 = auVar88._12_4_;
      fVar142 = auVar138._8_4_;
      auVar94._8_4_ = fVar73 - fVar142;
      fVar143 = auVar138._12_4_;
      auVar94._12_4_ = fVar74 - fVar143;
      fVar110 = auVar77._0_4_;
      fVar121 = auVar78._0_4_;
      auVar131._0_4_ = fVar110 - fVar121;
      fVar80 = auVar77._4_4_;
      fVar97 = auVar78._4_4_;
      auVar131._4_4_ = fVar80 - fVar97;
      fVar83 = auVar77._8_4_;
      fVar99 = auVar78._8_4_;
      auVar131._8_4_ = fVar83 - fVar99;
      auVar131._12_4_ = fVar114 - fVar85;
      auVar53._0_4_ = auVar129._0_4_ * auVar129._0_4_;
      auVar53._4_4_ = auVar129._4_4_ * auVar129._4_4_;
      auVar53._8_4_ = auVar129._8_4_ * auVar129._8_4_;
      auVar53._12_4_ = auVar129._12_4_ * auVar129._12_4_;
      auVar133._0_4_ =
           auVar131._0_4_ * auVar131._0_4_ + auVar94._0_4_ * auVar94._0_4_ + auVar53._0_4_;
      auVar133._4_4_ =
           auVar131._4_4_ * auVar131._4_4_ + auVar94._4_4_ * auVar94._4_4_ + auVar53._4_4_;
      auVar133._8_4_ =
           auVar131._8_4_ * auVar131._8_4_ + auVar94._8_4_ * auVar94._8_4_ + auVar53._8_4_;
      auVar133._12_4_ =
           auVar131._12_4_ * auVar131._12_4_ + auVar94._12_4_ * auVar94._12_4_ + auVar53._12_4_;
      auVar53 = sqrtps(auVar53,auVar133);
      uVar35 = -(uint)(auVar133._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar37 = -(uint)(auVar133._4_4_ < _UNK_1506895e4);
      uVar38 = -(uint)(auVar133._8_4_ < _UNK_1506895e8);
      uVar40 = -(uint)(auVar133._12_4_ < _UNK_1506895ec);
      auVar77._4_4_ = uVar37;
      auVar77._0_4_ = uVar35;
      auVar147 = divps(auVar129,auVar53);
      auVar78 = divps(auVar94,auVar53);
      auVar94 = divps(auVar131,auVar53);
      auVar77._8_4_ = uVar38;
      auVar77._12_4_ = uVar40;
      auVar93._4_4_ = _UNK_15076b1f4;
      auVar93._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar93._8_4_ = _UNK_15076b1f8;
      auVar93._12_4_ = _UNK_15076b1fc;
      auVar131 = blendvps(auVar147,auVar93,auVar77);
      fVar109 = (float)(~uVar35 & auVar78._0_4_);
      fVar113 = (float)(~uVar37 & auVar78._4_4_);
      fVar115 = (float)(~uVar38 & auVar78._8_4_);
      fVar116 = (float)(~uVar40 & auVar78._12_4_);
      auVar53 = *(undefined1 (*) [16])(param_4 + uVar28);
      fVar105 = (float)(~uVar35 & auVar94._0_4_);
      fVar106 = (float)(~uVar37 & auVar94._4_4_);
      fVar107 = (float)(~uVar38 & auVar94._8_4_);
      fVar108 = (float)(~uVar40 & auVar94._12_4_);
      auVar77 = divps(auVar93,auVar53);
      auVar78._4_4_ = -(uint)(auVar53._4_4_ < _UNK_1506895d4);
      auVar78._0_4_ = -(uint)(auVar53._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar78._8_4_ = -(uint)(auVar53._8_4_ < _UNK_1506895d8);
      auVar78._12_4_ = -(uint)(auVar53._12_4_ < _UNK_1506895dc);
      auVar147 = blendvps(auVar77,auVar93,auVar78);
      uVar35 = *(uint *)(param_1 + 0xc + lVar33);
      uVar37 = *(uint *)(param_1 + 0xc + lVar22);
      auVar53 = insertps(ZEXT416(uVar35),ZEXT416(uVar37),0x10);
      uVar38 = *(uint *)(param_1 + 0xc + lVar18);
      auVar53 = insertps(auVar53,ZEXT416(uVar38),0x20);
      uVar40 = *(uint *)(param_1 + 0xc + lVar32);
      auVar53 = insertps(auVar53,ZEXT416(uVar40),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar20);
      uVar39 = *(uint *)(param_1 + 0xc + lVar30);
      auVar93 = insertps(ZEXT416(uVar4),ZEXT416(uVar39),0x10);
      uVar41 = *(uint *)(param_1 + 0xc + lVar16);
      auVar93 = insertps(auVar93,ZEXT416(uVar41),0x20);
      lVar21 = (longlong)(*piVar3 * 3);
      auVar77 = insertps(auVar117,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar24);
      auVar93 = insertps(auVar93,ZEXT416(uVar5),0x30);
      auVar78 = insertps(auVar67,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      fVar92 = auVar53._0_4_;
      fVar98 = auVar53._4_4_;
      fVar100 = auVar53._12_4_;
      fVar130 = auVar93._0_4_;
      auVar117._0_4_ = fVar92 + fVar130;
      fVar102 = auVar93._4_4_;
      auVar117._4_4_ = fVar98 + fVar102;
      fVar91 = auVar53._8_4_;
      fVar103 = auVar93._8_4_;
      auVar117._8_4_ = fVar91 + fVar103;
      fVar104 = auVar93._12_4_;
      auVar117._12_4_ = fVar100 + fVar104;
      auVar53 = divps(auVar58,auVar117);
      auVar58 = sqrtps(auVar94,auVar53);
      auVar53 = insertps(auVar127,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[2] * 3);
      auVar67 = insertps(auVar77,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar94 = insertps(auVar78,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar53 = insertps(auVar53,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      lVar23 = (longlong)(piVar2[1] * 3);
      lVar26 = (longlong)(piVar2[3] * 3);
      lVar31 = (longlong)(piVar3[1] * 3);
      lVar21 = (longlong)(piVar3[3] * 3);
      auVar93 = insertps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + lVar26 * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar26 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar78 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar26 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      fVar75 = auVar58._0_4_ * (auVar52._0_4_ + auVar52._0_4_) * auVar147._0_4_ * param_6;
      fVar81 = auVar58._4_4_ * (auVar52._4_4_ + auVar52._4_4_) * auVar147._4_4_ * param_6;
      fVar84 = auVar58._8_4_ * (auVar52._8_4_ + auVar52._8_4_) * auVar147._8_4_ * param_6;
      fVar86 = auVar58._12_4_ * (auVar52._12_4_ + auVar52._12_4_) * auVar147._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar28);
      fVar57 = *pfVar1;
      fVar63 = pfVar1[1];
      fVar64 = pfVar1[2];
      fVar65 = pfVar1[3];
      auVar88._0_4_ =
           ((((fVar110 - auVar53._0_4_) - fVar121) + auVar77._0_4_) * fVar105 +
           (((fVar66 - auVar94._0_4_) - fVar137) + auVar78._0_4_) * fVar109 +
           (((fVar144 - auVar67._0_4_) - fVar124) + auVar93._0_4_) * auVar131._0_4_) *
           (float)((uint)fVar75 ^ __xmm_80000000800000008000000080000000) - fVar57;
      auVar88._4_4_ =
           ((((fVar80 - auVar53._4_4_) - fVar97) + auVar77._4_4_) * fVar106 +
           (((fVar72 - auVar94._4_4_) - fVar141) + auVar78._4_4_) * fVar113 +
           (((fVar123 - auVar67._4_4_) - fVar125) + auVar93._4_4_) * auVar131._4_4_) *
           (float)((uint)fVar81 ^ _UNK_150651574) - fVar63;
      auVar88._8_4_ =
           ((((fVar83 - auVar53._8_4_) - fVar99) + auVar77._8_4_) * fVar107 +
           (((fVar73 - auVar94._8_4_) - fVar142) + auVar78._8_4_) * fVar115 +
           (((fVar152 - auVar67._8_4_) - fVar135) + auVar93._8_4_) * auVar131._8_4_) *
           (float)((uint)fVar84 ^ _UNK_150651578) - fVar64;
      auVar88._12_4_ =
           ((((fVar114 - auVar53._12_4_) - fVar85) + auVar77._12_4_) * fVar108 +
           (((fVar74 - auVar94._12_4_) - fVar143) + auVar78._12_4_) * fVar116 +
           (((fVar126 - auVar67._12_4_) - fVar136) + auVar93._12_4_) * auVar131._12_4_) *
           (float)((uint)fVar86 ^ _UNK_15065157c) - fVar65;
      auVar127._0_4_ = auVar117._0_4_ * fVar75 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar127._4_4_ = auVar117._4_4_ * fVar81 + _UNK_15076b1f4;
      auVar127._8_4_ = auVar117._8_4_ * fVar84 + _UNK_15076b1f8;
      auVar127._12_4_ = auVar117._12_4_ * fVar86 + _UNK_15076b1fc;
      auVar53 = divps(auVar88,auVar127);
      fVar75 = auVar53._0_4_;
      fVar145 = auVar131._0_4_ * fVar75;
      fVar81 = auVar53._4_4_;
      fVar150 = auVar131._4_4_ * fVar81;
      fVar84 = auVar53._8_4_;
      fVar153 = auVar131._8_4_ * fVar84;
      fVar86 = auVar53._12_4_;
      fVar154 = auVar131._12_4_ * fVar86;
      auVar52._0_4_ = fVar92 * fVar145 + fVar144;
      auVar52._4_4_ = fVar98 * fVar150 + fVar123;
      auVar52._8_4_ = fVar91 * fVar153 + fVar152;
      auVar52._12_4_ = fVar100 * fVar154 + fVar126;
      fVar109 = fVar109 * fVar75;
      fVar113 = fVar113 * fVar81;
      fVar115 = fVar115 * fVar84;
      fVar116 = fVar116 * fVar86;
      *(float *)(param_1 + lVar33) = auVar52._0_4_;
      uVar8 = extractps(auVar52,1);
      *(undefined8 *)(param_1 + lVar22) = uVar8;
      auVar67._0_4_ = fVar92 * fVar109 + fVar66;
      auVar67._4_4_ = fVar98 * fVar113 + fVar72;
      auVar67._8_4_ = fVar91 * fVar115 + fVar73;
      auVar67._12_4_ = fVar100 * fVar116 + fVar74;
      uVar8 = extractps(auVar52,2);
      *(undefined8 *)(param_1 + lVar18) = uVar8;
      uVar8 = extractps(auVar52,3);
      *(undefined8 *)(param_1 + lVar32) = uVar8;
      fVar105 = fVar105 * fVar75;
      fVar106 = fVar106 * fVar81;
      fVar107 = fVar107 * fVar84;
      fVar108 = fVar108 * fVar86;
      *(float *)(param_1 + 4 + lVar33) = auVar67._0_4_;
      uVar8 = extractps(auVar67,1);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar8;
      uVar8 = extractps(auVar67,2);
      *(undefined8 *)(param_1 + 4 + lVar18) = uVar8;
      auVar138._0_4_ = fVar92 * fVar105 + fVar110;
      auVar138._4_4_ = fVar98 * fVar106 + fVar80;
      auVar138._8_4_ = fVar91 * fVar107 + fVar83;
      auVar138._12_4_ = fVar100 * fVar108 + fVar114;
      uVar8 = extractps(auVar67,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar8;
      *(float *)(param_1 + 8 + lVar33) = auVar138._0_4_;
      uVar8 = extractps(auVar138,1);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar8;
      uVar8 = extractps(auVar138,2);
      *(undefined8 *)(param_1 + 8 + lVar18) = uVar8;
      uVar8 = extractps(auVar138,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar8;
      *(uint *)(param_1 + 0xc + lVar33) = uVar35;
      *(uint *)(param_1 + 0xc + lVar22) = uVar37;
      *(uint *)(param_1 + 0xc + lVar18) = uVar38;
      *(uint *)(param_1 + 0xc + lVar32) = uVar40;
      auVar149._0_4_ = fVar124 - fVar145 * fVar130;
      auVar149._4_4_ = fVar125 - fVar150 * fVar102;
      auVar149._8_4_ = fVar135 - fVar153 * fVar103;
      auVar149._12_4_ = fVar136 - fVar154 * fVar104;
      *(float *)(param_1 + lVar20) = auVar149._0_4_;
      uVar8 = extractps(auVar149,1);
      *(undefined8 *)(param_1 + lVar30) = uVar8;
      uVar8 = extractps(auVar149,2);
      *(undefined8 *)(param_1 + lVar16) = uVar8;
      auVar95._0_4_ = fVar137 - fVar109 * fVar130;
      auVar95._4_4_ = fVar141 - fVar113 * fVar102;
      auVar95._8_4_ = fVar142 - fVar115 * fVar103;
      auVar95._12_4_ = fVar143 - fVar116 * fVar104;
      uVar8 = extractps(auVar149,3);
      *(undefined8 *)(param_1 + lVar24) = uVar8;
      *(float *)(param_1 + 4 + lVar20) = auVar95._0_4_;
      uVar8 = extractps(auVar95,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar8;
      uVar8 = extractps(auVar95,2);
      *(undefined8 *)(param_1 + 4 + lVar16) = uVar8;
      auVar58._0_4_ = fVar121 - fVar105 * fVar130;
      auVar58._4_4_ = fVar97 - fVar106 * fVar102;
      auVar58._8_4_ = fVar99 - fVar107 * fVar103;
      auVar58._12_4_ = fVar85 - fVar108 * fVar104;
      uVar8 = extractps(auVar95,3);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar8;
      *(float *)(param_1 + 8 + lVar20) = auVar58._0_4_;
      uVar8 = extractps(auVar58,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar8;
      uVar8 = extractps(auVar58,2);
      *(undefined8 *)(param_1 + 8 + lVar16) = uVar8;
      uVar8 = extractps(auVar58,3);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar8;
      pfVar1 = (float *)(param_5 + uVar28);
      *pfVar1 = fVar75 + fVar57;
      pfVar1[1] = fVar81 + fVar63;
      pfVar1[2] = fVar84 + fVar64;
      pfVar1[3] = fVar86 + fVar65;
      *(uint *)(param_1 + 0xc + lVar20) = uVar4;
      *(uint *)(param_1 + 0xc + lVar30) = uVar39;
      *(uint *)(param_1 + 0xc + lVar16) = uVar41;
      *(uint *)(param_1 + 0xc + lVar24) = uVar5;
      uVar17 = uVar17 + 4;
      uVar27 = uVar27 + 0x10;
    } while ((int)uVar17 < (int)(uVar36 & 0xfffffffc));
    if ((int)param_13 <= (int)uVar17) {
      return;
    }
  }
  uVar36 = (uint)uVar17;
  auVar132._0_4_ =
       -(uint)((int)(uVar36 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar132._4_4_ =
       -(uint)((int)(uVar36 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar132._8_4_ = -(uint)((int)(uVar36 | _UNK_150631e08) < (int)param_13);
  auVar132._12_4_ = -(uint)((int)(uVar36 | _UNK_150631e0c) < (int)param_13);
  uVar17 = uVar17 & 0xffffffff;
  piVar2 = (int *)(param_3 + uVar17 * 8);
  uVar35 = movmskps(unaff_R15D,auVar132);
  bVar19 = (char)((char)uVar35 << 4) >> 4;
  if (uVar35 == 0xf) {
    iVar146 = *piVar2;
    iVar76 = piVar2[1];
    iVar151 = piVar2[2];
    iVar82 = piVar2[3];
    auVar44 = *(undefined1 (*) [16])(piVar2 + 4);
    iVar87 = auVar44._12_4_;
    iVar42 = auVar44._0_4_;
    iVar50 = auVar44._4_4_;
    iVar51 = auVar44._8_4_;
  }
  else {
    auVar43._0_4_ = ___xmm_00000018000000100000000800000000 & auVar132._0_4_;
    auVar43._4_4_ = _UNK_150b51a04 & auVar132._4_4_;
    auVar43._8_4_ = _UNK_150b51a08 & auVar132._8_4_;
    auVar43._12_4_ = _UNK_150b51a0c & auVar132._12_4_;
    lVar16 = extractps(auVar43,1);
    lVar18 = extractps(auVar43,2);
    lVar20 = extractps(auVar43,3);
    iVar146 = *piVar2;
    iVar151 = *(int *)((longlong)piVar2 + lVar16);
    iVar42 = *(int *)((longlong)piVar2 + lVar18);
    iVar51 = *(int *)((longlong)piVar2 + lVar20);
    auVar44 = ___xmm_0000001c000000140000000c00000004 & auVar132;
    iVar76 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._0_4_);
    iVar82 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._4_4_);
    iVar50 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._8_4_);
    iVar87 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._12_4_);
  }
  auVar96 = ZEXT816(0);
  bVar25 = ~bVar19;
  auVar112 = ZEXT816(0);
  if ((param_7 & 1) != 0) {
    if ((bVar25 & 9) == 0) {
      auVar112 = ZEXT416(*(uint *)(param_8 + uVar17));
    }
    else {
      pbVar6 = (byte *)(param_8 + uVar17);
      if ((uVar35 & 1) != 0) {
        auVar112 = ZEXT116(*pbVar6);
      }
      if ((uVar35 & 2) != 0) {
        auVar44._8_8_ = auVar112._8_8_;
        auVar44._0_8_ = auVar112._0_8_ | (ulonglong)pbVar6[1] << 8;
        auVar112 = pblendw(auVar112,auVar44,0xfd);
      }
      if ((uVar35 & 4) != 0) {
        auVar53 = pmovzxwd(auVar44,auVar112);
        auVar44._8_8_ = auVar53._8_8_;
        auVar44._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar6[2] << 0x10 |
             (ulonglong)auVar112[3] << 0x18;
        auVar112 = auVar44;
      }
      if ((uVar35 & 8) != 0) {
        bVar9 = auVar112[2];
        auVar53 = pmovzxwd(auVar112,auVar112);
        auVar112._8_8_ = auVar53._8_8_;
        auVar112._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
             (ulonglong)pbVar6[3] << 0x18;
      }
    }
  }
  if ((param_10 & 1) != 0) {
    if ((bVar25 & 9) == 0) {
      auVar96 = ZEXT416(*(uint *)(param_11 + uVar17));
    }
    else {
      pbVar6 = (byte *)(param_11 + uVar17);
      if ((uVar35 & 1) != 0) {
        auVar96 = ZEXT116(*pbVar6);
      }
      if ((uVar35 & 2) != 0) {
        auVar44._8_8_ = auVar96._8_8_;
        auVar44._0_8_ = auVar96._0_8_ | (ulonglong)pbVar6[1] << 8;
        auVar96 = pblendw(auVar96,auVar44,0xfd);
      }
      if ((uVar35 & 4) != 0) {
        bVar9 = auVar96[3];
        auVar53 = pmovzxwd(auVar44,auVar96);
        auVar96._8_8_ = auVar53._8_8_;
        auVar96._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar6[2] << 0x10 |
             (ulonglong)bVar9 << 0x18;
      }
      if ((uVar35 & 8) != 0) {
        bVar9 = auVar96[2];
        auVar53 = pmovzxwd(auVar96,auVar96);
        auVar96._8_8_ = auVar53._8_8_;
        auVar96._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
             (ulonglong)pbVar6[3] << 0x18;
      }
    }
  }
  auVar89._0_4_ = iVar146 << 4;
  auVar89._4_4_ = iVar151 << 4;
  auVar89._8_4_ = iVar42 << 4;
  auVar89._12_4_ = iVar51 << 4;
  auVar93 = auVar132 & auVar89;
  lVar16 = param_1 + auVar93._0_4_;
  lVar18 = param_1 + auVar93._4_4_;
  lVar20 = param_1 + auVar93._8_4_;
  lVar21 = param_1 + auVar93._12_4_;
  auVar77 = ___xmm_00000004000000040000000400000004 & auVar132;
  uVar17 = (ulonglong)auVar77._0_4_;
  uVar27 = (ulonglong)auVar77._4_4_;
  local_1b8 = ___xmm_00000008000000080000000800000008 & auVar132;
  uVar28 = (ulonglong)local_1b8._0_4_;
  auVar68._0_4_ = iVar76 << 4;
  auVar68._4_4_ = iVar82 << 4;
  auVar68._8_4_ = iVar50 << 4;
  auVar68._12_4_ = iVar87 << 4;
  auVar78 = auVar132 & auVar68;
  lVar30 = (longlong)auVar78._0_4_;
  auVar53 = ZEXT416(*(uint *)(param_1 + auVar93._0_4_));
  lVar22 = param_1 + lVar30;
  lVar23 = param_1 + auVar78._4_4_;
  lVar24 = param_1 + auVar78._8_4_;
  lVar26 = param_1 + auVar78._12_4_;
  bVar34 = (bVar19 & 2) != 0;
  if (bVar34) {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._4_4_),0x10);
  }
  uVar29 = (ulonglong)local_1b8._4_4_;
  auVar52 = ZEXT416(*(uint *)(uVar17 + lVar16));
  if (bVar34) {
    auVar52 = insertps(auVar52,*(undefined4 *)(uVar27 + lVar18),0x10);
    auVar147 = insertps(ZEXT416(*(uint *)(uVar28 + lVar16)),*(undefined4 *)(uVar29 + lVar18),0x10);
    auVar58 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + auVar78._4_4_)
                       ,0x10);
  }
  else {
    auVar147 = ZEXT416(*(uint *)(uVar28 + lVar16));
    auVar58 = ZEXT416(*(uint *)(param_1 + lVar30));
  }
  auVar67 = ZEXT416(*(uint *)(uVar17 + lVar22));
  uVar37 = auVar77._8_4_;
  uVar40 = auVar77._12_4_;
  uVar38 = local_1b8._8_4_;
  uVar4 = local_1b8._12_4_;
  if (bVar34) {
    auVar67 = insertps(auVar67,*(undefined4 *)(uVar27 + lVar23),0x10);
    auVar77 = insertps(ZEXT416(*(uint *)(uVar28 + lVar22)),*(undefined4 *)(uVar29 + lVar23),0x10);
  }
  else {
    auVar77 = ZEXT416(*(uint *)(uVar28 + lVar22));
  }
  if ((bVar19 & 4) != 0) {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._8_4_),0x20);
    auVar52 = insertps(auVar52,*(undefined4 *)((ulonglong)uVar37 + lVar20),0x20);
    auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar38 + lVar20),0x20);
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar78._8_4_),0x20);
    auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)uVar37 + lVar24),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)uVar38 + lVar24),0x20);
  }
  if ((char)bVar19 < '\0') {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._12_4_),0x30);
    auVar52 = insertps(auVar52,*(undefined4 *)((ulonglong)uVar40 + lVar21),0x30);
    auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar4 + lVar21),0x30);
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar78._12_4_),0x30);
    auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)uVar40 + lVar26),0x30);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)uVar4 + lVar26),0x30);
  }
  lVar30 = (longlong)(int)(uVar36 << 2);
  pfVar1 = (float *)(param_5 + lVar30);
  if ((bVar25 & 9) == 0) {
    local_1b8 = *(undefined1 (*) [16])(param_4 + lVar30);
    auVar93 = *(undefined1 (*) [16])(param_5 + lVar30);
  }
  else {
    puVar7 = (uint *)(param_4 + lVar30);
    if ((uVar35 & 1) != 0) {
      local_1b8 = ZEXT416(*puVar7);
    }
    if ((uVar35 & 2) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[1],0x10);
    }
    if ((uVar35 & 4) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[2],0x20);
    }
    if ((uVar35 & 8) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[3],0x30);
    }
    auVar93 = local_1b8;
    if ((uVar35 & 1) != 0) {
      auVar93 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar35 & 2) != 0) {
      auVar93 = insertps(auVar93,pfVar1[1],0x10);
    }
    if ((uVar35 & 4) != 0) {
      auVar93 = insertps(auVar93,pfVar1[2],0x20);
    }
    if ((uVar35 & 8) != 0) {
      auVar93 = insertps(auVar93,pfVar1[3],0x30);
    }
  }
  fVar66 = auVar58._0_4_;
  fVar100 = auVar53._0_4_;
  fVar126 = fVar100 - fVar66;
  fVar75 = auVar58._4_4_;
  fVar102 = auVar53._4_4_;
  fVar130 = fVar102 - fVar75;
  auVar128._0_8_ = CONCAT44(fVar130,fVar126);
  fVar72 = auVar58._8_4_;
  fVar103 = auVar53._8_4_;
  fVar104 = auVar53._12_4_;
  auVar128._8_4_ = fVar103 - fVar72;
  fVar81 = auVar58._12_4_;
  auVar128._12_4_ = fVar104 - fVar81;
  fVar73 = auVar67._0_4_;
  fVar92 = auVar52._0_4_;
  fVar121 = fVar92 - fVar73;
  fVar84 = auVar67._4_4_;
  fVar97 = auVar52._4_4_;
  fVar123 = fVar97 - fVar84;
  auVar122._0_8_ = CONCAT44(fVar123,fVar121);
  fVar74 = auVar67._8_4_;
  fVar98 = auVar52._8_4_;
  fVar99 = auVar52._12_4_;
  auVar122._8_4_ = fVar98 - fVar74;
  fVar86 = auVar67._12_4_;
  auVar122._12_4_ = fVar99 - fVar86;
  fVar57 = auVar77._0_4_;
  fVar80 = auVar147._0_4_;
  fVar110 = fVar80 - fVar57;
  fVar63 = auVar77._4_4_;
  fVar83 = auVar147._4_4_;
  fVar114 = fVar83 - fVar63;
  auVar111._0_8_ = CONCAT44(fVar114,fVar110);
  fVar64 = auVar77._8_4_;
  fVar85 = auVar147._8_4_;
  fVar91 = auVar147._12_4_;
  auVar111._8_4_ = fVar85 - fVar64;
  fVar65 = auVar77._12_4_;
  auVar111._12_4_ = fVar91 - fVar65;
  auVar45._0_4_ = fVar126 * fVar126;
  auVar45._4_4_ = fVar130 * fVar130;
  auVar45._8_4_ = auVar128._8_4_ * auVar128._8_4_;
  auVar45._12_4_ = auVar128._12_4_ * auVar128._12_4_;
  auVar118._0_4_ = fVar110 * fVar110 + fVar121 * fVar121 + auVar45._0_4_;
  auVar118._4_4_ = fVar114 * fVar114 + fVar123 * fVar123 + auVar45._4_4_;
  auVar118._8_4_ = auVar111._8_4_ * auVar111._8_4_ + auVar122._8_4_ * auVar122._8_4_ + auVar45._8_4_
  ;
  auVar118._12_4_ =
       auVar111._12_4_ * auVar111._12_4_ + auVar122._12_4_ * auVar122._12_4_ + auVar45._12_4_;
  auVar53 = sqrtps(auVar45,auVar118);
  uVar36 = -(uint)(auVar118._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar35 = -(uint)(auVar118._4_4_ < _UNK_1506895e4);
  uVar39 = -(uint)(auVar118._8_4_ < _UNK_1506895e8);
  uVar41 = -(uint)(auVar118._12_4_ < _UNK_1506895ec);
  auVar46._4_4_ = uVar35;
  auVar46._0_4_ = uVar36;
  auVar54._8_4_ = auVar122._8_4_;
  auVar54._0_8_ = auVar122._0_8_;
  auVar54._12_4_ = auVar122._12_4_;
  auVar77 = divps(auVar54,auVar53);
  auVar69._8_4_ = auVar111._8_4_;
  auVar69._0_8_ = auVar111._0_8_;
  auVar69._12_4_ = auVar111._12_4_;
  auVar78 = divps(auVar69,auVar53);
  auVar139._8_4_ = auVar128._8_4_;
  auVar139._0_8_ = auVar128._0_8_;
  auVar139._12_4_ = auVar128._12_4_;
  auVar53 = divps(auVar139,auVar53);
  auVar46._8_4_ = uVar39;
  auVar46._12_4_ = uVar41;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar53 = blendvps(auVar53,auVar10,auVar46);
  auVar47._8_4_ = auVar128._8_4_;
  auVar47._0_8_ = auVar128._0_8_;
  auVar47._12_4_ = auVar128._12_4_;
  bVar34 = (bVar19 & 1) != 0;
  if (bVar34) {
    auVar47 = auVar53;
  }
  local_288._4_4_ = ~uVar35 & auVar77._4_4_;
  local_288._0_4_ = ~uVar36 & auVar77._0_4_;
  local_288._8_4_ = ~uVar39 & auVar77._8_4_;
  local_288._12_4_ = ~uVar41 & auVar77._12_4_;
  auVar119._0_8_ = CONCAT44(~uVar35 & auVar78._4_4_,~uVar36 & auVar78._0_4_);
  auVar119._8_4_ = ~uVar39 & auVar78._8_4_;
  auVar119._12_4_ = ~uVar41 & auVar78._12_4_;
  auVar55._8_4_ = auVar122._8_4_;
  auVar55._0_8_ = auVar122._0_8_;
  auVar55._12_4_ = auVar122._12_4_;
  auVar70._8_4_ = auVar111._8_4_;
  auVar70._0_8_ = auVar111._0_8_;
  auVar70._12_4_ = auVar111._12_4_;
  if (bVar34) {
    auVar70._8_4_ = auVar119._8_4_;
    auVar70._0_8_ = auVar119._0_8_;
    auVar70._12_4_ = auVar119._12_4_;
    auVar55 = local_288;
  }
  auVar148._4_4_ = iVar151 * 3;
  auVar148._0_4_ = iVar146 * 3;
  auVar148._8_4_ = iVar42 * 3;
  auVar148._12_4_ = iVar51 * 3;
  auVar79._4_4_ = iVar82 * 3;
  auVar79._0_4_ = iVar76 * 3;
  auVar79._8_4_ = iVar50 * 3;
  auVar79._12_4_ = iVar87 * 3;
  auVar78 = blendps(auVar128,auVar47,1);
  bVar34 = (bVar19 & 2) != 0;
  auVar77 = auVar78;
  if (bVar34) {
    auVar77 = auVar53;
  }
  auVar148 = auVar148 & auVar132;
  auVar79 = auVar79 & auVar132;
  auVar58 = blendps(auVar122,auVar55,1);
  auVar52 = auVar58;
  if (bVar34) {
    auVar52 = local_288;
  }
  auVar147 = ___xmm_0000000c0000000c0000000c0000000c & auVar132;
  auVar67 = blendps(auVar111,auVar70,1);
  auVar59 = auVar67;
  if (bVar34) {
    auVar59._8_4_ = auVar119._8_4_;
    auVar59._0_8_ = auVar119._0_8_;
    auVar59._12_4_ = auVar119._12_4_;
  }
  auVar78 = blendps(auVar78,auVar77,2);
  bVar34 = (bVar19 & 4) != 0;
  auVar77 = auVar78;
  if (bVar34) {
    auVar77 = auVar53;
  }
  lVar30 = param_2 + (longlong)auVar148._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar79._0_4_ * 4;
  auVar58 = blendps(auVar58,auVar52,2);
  auVar52 = auVar58;
  if (bVar34) {
    auVar52 = local_288;
  }
  lVar32 = param_2 + (longlong)auVar148._4_4_ * 4;
  lVar33 = param_2 + (longlong)auVar79._4_4_ * 4;
  auVar67 = blendps(auVar67,auVar59,2);
  auVar60 = auVar67;
  if (bVar34) {
    auVar60._8_4_ = auVar119._8_4_;
    auVar60._0_8_ = auVar119._0_8_;
    auVar60._12_4_ = auVar119._12_4_;
  }
  auVar138 = insertps(ZEXT416(*(uint *)((ulonglong)auVar147._0_4_ + lVar16)),
                      *(undefined4 *)((ulonglong)auVar147._4_4_ + lVar18),0x10);
  auVar117 = insertps(ZEXT416(*(uint *)((ulonglong)auVar147._0_4_ + lVar22)),
                      *(undefined4 *)((ulonglong)auVar147._4_4_ + lVar23),0x10);
  auVar133 = insertps(ZEXT416(*(uint *)(uVar17 + lVar30)),*(undefined4 *)(uVar27 + lVar32),0x10);
  auVar88 = insertps(ZEXT416(*(uint *)(uVar28 + lVar30)),*(undefined4 *)(uVar29 + lVar32),0x10);
  auVar149 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(uVar27 + lVar33),0x10);
  auVar131 = insertps(ZEXT416(*(uint *)(uVar28 + lVar31)),*(undefined4 *)(uVar29 + lVar33),0x10);
  auVar94 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar148._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar148._4_4_ * 4),0x10);
  lVar16 = param_2 + (longlong)auVar148._8_4_ * 4;
  auVar127 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar79._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar79._4_4_ * 4),0x10);
  lVar18 = param_2 + (longlong)auVar79._8_4_ * 4;
  auVar78 = blendps(auVar78,auVar77,4);
  bVar34 = -1 < (char)bVar19;
  if (bVar34) {
    auVar53 = auVar78;
  }
  auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar147._8_4_ + lVar20),0x20);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)auVar147._8_4_ + lVar24),0x20);
  lVar20 = param_2 + (longlong)auVar148._12_4_ * 4;
  auVar94 = insertps(auVar94,*(undefined4 *)(param_2 + (longlong)auVar148._8_4_ * 4),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar37 + lVar16),0x20);
  auVar88 = insertps(auVar88,*(undefined4 *)((ulonglong)uVar38 + lVar16),0x20);
  auVar127 = insertps(auVar127,*(undefined4 *)(param_2 + (longlong)auVar79._8_4_ * 4),0x20);
  auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar37 + lVar18),0x20);
  lVar16 = param_2 + (longlong)auVar79._12_4_ * 4;
  auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar38 + lVar18),0x20);
  auVar52 = blendps(auVar58,auVar52,4);
  if (bVar34) {
    local_288 = auVar52;
  }
  auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar147._12_4_ + lVar21),0x30);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)auVar147._12_4_ + lVar26),0x30);
  auVar58 = insertps(auVar94,*(undefined4 *)(param_2 + (longlong)auVar148._12_4_ * 4),0x30);
  auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar40 + lVar20),0x30);
  auVar94 = insertps(auVar88,*(undefined4 *)((ulonglong)uVar4 + lVar20),0x30);
  auVar127 = insertps(auVar127,*(undefined4 *)(param_2 + (longlong)auVar79._12_4_ * 4),0x30);
  auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar40 + lVar16),0x30);
  auVar88 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar4 + lVar16),0x30);
  auVar67 = blendps(auVar67,auVar60,4);
  if (bVar34) {
    auVar119 = auVar67;
  }
  local_f8 = auVar112._0_4_;
  auVar147 = pmovsxbd(auVar147,local_f8);
  local_268 = auVar96._0_4_;
  auVar131 = pmovsxbd(auVar77,local_268);
  auVar11._4_4_ = _UNK_15076b1f4;
  auVar11._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar11._8_4_ = _UNK_15076b1f8;
  auVar11._12_4_ = _UNK_15076b1fc;
  auVar77 = divps(auVar11,local_1b8);
  auVar48._4_4_ = -(uint)(local_1b8._4_4_ < _UNK_1506895d4);
  auVar48._0_4_ = -(uint)(local_1b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar48._8_4_ = -(uint)(local_1b8._8_4_ < _UNK_1506895d8);
  auVar48._12_4_ = -(uint)(local_1b8._12_4_ < _UNK_1506895dc);
  auVar95 = blendvps(auVar77,auVar11,auVar48);
  auVar77 = insertps(ZEXT416(*(uint *)(param_9 + (int)(auVar147._0_4_ << 2 & auVar132._0_4_))),
                     *(undefined4 *)(param_9 + (int)(auVar147._4_4_ << 2 & auVar132._4_4_)),0x10);
  auVar77 = insertps(auVar77,*(undefined4 *)(param_9 + (int)(auVar147._8_4_ << 2 & auVar132._8_4_)),
                     0x20);
  auVar129 = blendps(auVar78,auVar53,8);
  auVar53 = insertps(auVar77,*(undefined4 *)
                              (param_9 + (int)(auVar147._12_4_ << 2 & auVar132._12_4_)),0x30);
  auVar52 = blendps(auVar52,local_288,8);
  auVar77 = insertps(ZEXT416(*(uint *)(param_12 + (int)(auVar131._0_4_ << 2 & auVar132._0_4_))),
                     *(undefined4 *)(param_12 + (int)(auVar131._4_4_ << 2 & auVar132._4_4_)),0x10);
  auVar77 = insertps(auVar77,*(undefined4 *)(param_12 + (int)(auVar131._8_4_ << 2 & auVar132._8_4_))
                     ,0x20);
  auVar77 = insertps(auVar77,*(undefined4 *)
                              (param_12 + (int)(auVar131._12_4_ << 2 & auVar132._12_4_)),0x30);
  auVar78 = blendps(auVar67,auVar119,8);
  fVar130 = auVar138._0_4_;
  fVar105 = auVar138._4_4_;
  fVar106 = auVar138._12_4_;
  local_2b8 = auVar117._0_4_;
  fStack_2b4 = auVar117._4_4_;
  fStack_2b0 = auVar117._8_4_;
  fStack_2ac = auVar117._12_4_;
  auVar61._0_4_ = fVar130 + local_2b8;
  auVar61._4_4_ = fVar105 + fStack_2b4;
  fVar126 = auVar138._8_4_;
  auVar61._8_4_ = fVar126 + fStack_2b0;
  auVar61._12_4_ = fVar106 + fStack_2ac;
  auVar53 = divps(auVar53,auVar61);
  auVar53 = sqrtps(auVar53,auVar53);
  fVar110 = param_6 * auVar53._0_4_ * (auVar77._0_4_ + auVar77._0_4_) * auVar95._0_4_;
  fVar114 = param_6 * auVar53._4_4_ * (auVar77._4_4_ + auVar77._4_4_) * auVar95._4_4_;
  fVar121 = param_6 * auVar53._8_4_ * (auVar77._8_4_ + auVar77._8_4_) * auVar95._8_4_;
  param_6 = param_6 * auVar53._12_4_ * (auVar77._12_4_ + auVar77._12_4_) * auVar95._12_4_;
  fVar115 = auVar52._0_4_;
  fVar116 = auVar52._4_4_;
  fVar124 = auVar52._8_4_;
  fVar125 = auVar52._12_4_;
  fVar107 = auVar78._0_4_;
  fVar108 = auVar78._4_4_;
  fVar109 = auVar78._8_4_;
  fVar113 = auVar78._12_4_;
  auVar62._0_4_ = auVar61._0_4_ * fVar110 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar62._4_4_ = auVar61._4_4_ * fVar114 + _UNK_15076b1f4;
  auVar62._8_4_ = auVar61._8_4_ * fVar121 + _UNK_15076b1f8;
  auVar62._12_4_ = auVar61._12_4_ * param_6 + _UNK_15076b1fc;
  local_1a8 = auVar93._0_4_;
  fStack_1a4 = auVar93._4_4_;
  fStack_1a0 = auVar93._8_4_;
  fStack_19c = auVar93._12_4_;
  auVar49._0_4_ =
       ((((fVar80 - auVar94._0_4_) - fVar57) + auVar88._0_4_) * fVar107 +
       (((fVar92 - auVar133._0_4_) - fVar73) + auVar149._0_4_) * fVar115 +
       (((fVar100 - auVar58._0_4_) - fVar66) + auVar127._0_4_) * auVar129._0_4_) *
       (float)((uint)fVar110 ^ __xmm_80000000800000008000000080000000) - local_1a8;
  auVar49._4_4_ =
       ((((fVar83 - auVar94._4_4_) - fVar63) + auVar88._4_4_) * fVar108 +
       (((fVar97 - auVar133._4_4_) - fVar84) + auVar149._4_4_) * fVar116 +
       (((fVar102 - auVar58._4_4_) - fVar75) + auVar127._4_4_) * auVar129._4_4_) *
       (float)((uint)fVar114 ^ _UNK_150651574) - fStack_1a4;
  auVar49._8_4_ =
       ((((fVar85 - auVar94._8_4_) - fVar64) + auVar88._8_4_) * fVar109 +
       (((fVar98 - auVar133._8_4_) - fVar74) + auVar149._8_4_) * fVar124 +
       (((fVar103 - auVar58._8_4_) - fVar72) + auVar127._8_4_) * auVar129._8_4_) *
       (float)((uint)fVar121 ^ _UNK_150651578) - fStack_1a0;
  auVar49._12_4_ =
       ((((fVar91 - auVar94._12_4_) - fVar65) + auVar88._12_4_) * fVar113 +
       (((fVar99 - auVar133._12_4_) - fVar86) + auVar149._12_4_) * fVar125 +
       (((fVar104 - auVar58._12_4_) - fVar81) + auVar127._12_4_) * auVar129._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_19c;
  auVar53 = divps(auVar49,auVar62);
  fVar110 = auVar53._0_4_;
  auVar56._0_4_ = local_1a8 + fVar110;
  fVar114 = auVar53._4_4_;
  auVar56._4_4_ = fStack_1a4 + fVar114;
  fVar121 = auVar53._8_4_;
  auVar56._8_4_ = fStack_1a0 + fVar121;
  fVar123 = auVar53._12_4_;
  auVar56._12_4_ = fStack_19c + fVar123;
  if ((bVar19 & 1) != 0) {
    *pfVar1 = auVar56._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar56,1);
    *(undefined8 *)(pfVar1 + 1) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar56,2);
    *(undefined8 *)(pfVar1 + 2) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar56,3);
    *(undefined8 *)(pfVar1 + 3) = uVar8;
  }
  fVar136 = auVar129._4_4_ * fVar114;
  fVar135 = auVar129._0_4_ * fVar110;
  fVar141 = auVar129._12_4_ * fVar123;
  fVar137 = auVar129._8_4_ * fVar121;
  auVar90._0_4_ = fVar100 + fVar130 * fVar135;
  auVar90._4_4_ = fVar102 + fVar105 * fVar136;
  auVar90._8_4_ = fVar103 + fVar126 * fVar137;
  auVar90._12_4_ = fVar104 + fVar106 * fVar141;
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + auVar89._0_4_) = auVar90._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + auVar89._8_4_) = uVar8;
  }
  uVar15 = fVar106 * fVar125 * fVar123;
  uVar14 = fVar126 * fVar124 * fVar121;
  uVar13 = fVar105 * fVar116 * fVar114;
  uVar12 = fVar130 * fVar115 * fVar110;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + auVar89._12_4_) = uVar8;
    auVar140._0_4_ = fVar92 + (float)uVar12;
    auVar140._4_4_ = fVar97 + (float)uVar13;
    auVar140._8_4_ = fVar98 + (float)uVar14;
    auVar140._12_4_ = fVar99 + (float)uVar15;
  }
  else {
    auVar140._0_4_ = fVar92 + (float)uVar12;
    auVar140._4_4_ = fVar97 + (float)uVar13;
    auVar140._8_4_ = fVar98 + (float)uVar14;
    auVar140._12_4_ = fVar99 + (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar89._0_4_) = auVar140._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._8_4_) = uVar8;
  }
  uVar15 = fVar106 * fVar113 * fVar123;
  uVar14 = fVar126 * fVar109 * fVar121;
  uVar13 = fVar105 * fVar108 * fVar114;
  uVar12 = fVar130 * fVar107 * fVar110;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._12_4_) = uVar8;
    auVar134._0_4_ = fVar80 + (float)uVar12;
    auVar134._4_4_ = fVar83 + (float)uVar13;
    auVar134._8_4_ = fVar85 + (float)uVar14;
    auVar134._12_4_ = fVar91 + (float)uVar15;
  }
  else {
    auVar134._0_4_ = fVar80 + (float)uVar12;
    auVar134._4_4_ = fVar83 + (float)uVar13;
    auVar134._8_4_ = fVar85 + (float)uVar14;
    auVar134._12_4_ = fVar91 + (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar89._0_4_) = auVar134._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar134,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar134,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar134,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._12_4_) = uVar8;
  }
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar89._0_4_) = fVar130;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar138,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar138,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar138,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._12_4_) = uVar8;
    auVar120._0_4_ = fVar66 - fVar135 * local_2b8;
    auVar120._4_4_ = fVar75 - fVar136 * fStack_2b4;
    auVar120._8_4_ = fVar72 - fVar137 * fStack_2b0;
    auVar120._12_4_ = fVar81 - fVar141 * fStack_2ac;
  }
  else {
    auVar120._0_4_ = fVar66 - fVar135 * local_2b8;
    auVar120._4_4_ = fVar75 - fVar136 * fStack_2b4;
    auVar120._8_4_ = fVar72 - fVar137 * fStack_2b0;
    auVar120._12_4_ = fVar81 - fVar141 * fStack_2ac;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + auVar68._0_4_) = auVar120._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar120,1);
    *(undefined8 *)(param_1 + auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar120,2);
    *(undefined8 *)(param_1 + auVar68._8_4_) = uVar8;
  }
  uVar15 = fVar125 * fVar123 * fStack_2ac;
  uVar14 = fVar124 * fVar121 * fStack_2b0;
  uVar13 = fVar116 * fVar114 * fStack_2b4;
  uVar12 = fVar115 * fVar110 * local_2b8;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar120,3);
    *(undefined8 *)(param_1 + auVar68._12_4_) = uVar8;
    auVar101._0_4_ = fVar73 - (float)uVar12;
    auVar101._4_4_ = fVar84 - (float)uVar13;
    auVar101._8_4_ = fVar74 - (float)uVar14;
    auVar101._12_4_ = fVar86 - (float)uVar15;
  }
  else {
    auVar101._0_4_ = fVar73 - (float)uVar12;
    auVar101._4_4_ = fVar84 - (float)uVar13;
    auVar101._8_4_ = fVar74 - (float)uVar14;
    auVar101._12_4_ = fVar86 - (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar68._0_4_) = auVar101._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar101,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar101,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._8_4_) = uVar8;
  }
  uVar15 = fVar113 * fVar123 * fStack_2ac;
  uVar14 = fVar109 * fVar121 * fStack_2b0;
  uVar13 = fVar108 * fVar114 * fStack_2b4;
  uVar12 = fVar107 * fVar110 * local_2b8;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar101,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._12_4_) = uVar8;
    auVar71._0_4_ = fVar57 - (float)uVar12;
    auVar71._4_4_ = fVar63 - (float)uVar13;
    auVar71._8_4_ = fVar64 - (float)uVar14;
    auVar71._12_4_ = fVar65 - (float)uVar15;
  }
  else {
    auVar71._0_4_ = fVar57 - (float)uVar12;
    auVar71._4_4_ = fVar63 - (float)uVar13;
    auVar71._8_4_ = fVar64 - (float)uVar14;
    auVar71._12_4_ = fVar65 - (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar68._0_4_) = auVar71._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._12_4_) = uVar8;
  }
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar68._0_4_) = local_2b8;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar117,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar117,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar117,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._12_4_) = uVar8;
  }
  return;
}

// ApplyXPBDSpringConstraints_sse4 @ 140943de0

/* WARNING: Removing unreachable block (ram,0x000140944bcb) */
/* WARNING: Removing unreachable block (ram,0x0001409445e3) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,uint param_7)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint *puVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
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
  float fVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar47 [16];
  float fVar52;
  float fVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar56;
  int iVar57;
  float fVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar78 [16];
  float fVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined1 auVar86 [16];
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
  undefined1 unaff_XMM11 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar108;
  undefined1 auVar107 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  float fVar115;
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  int iVar72;
  int iVar75;
  int iVar76;
  int iVar77;
  undefined1 auVar106 [16];
  undefined1 auVar118 [16];
  
  uVar25 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar25 = param_7;
  }
  uVar25 = uVar25 & 0xfffffffc;
  if ((int)uVar25 < 1) {
    uVar27 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    fVar40 = param_6 * param_5 * param_5;
    fVar45 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar40);
    fVar51 = (float)(_UNK_150651574 ^ (uint)fVar40);
    fVar53 = (float)(_UNK_150651578 ^ (uint)fVar40);
    fVar54 = (float)(_UNK_15065157c ^ (uint)fVar40);
    uVar27 = 0;
    uVar28 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar28 * 2);
      piVar4 = (int *)(param_2 + 0x10 + uVar28 * 2);
      lVar20 = (longlong)(*piVar1 << 4);
      lVar31 = (longlong)(piVar1[2] * 0x10);
      lVar32 = (longlong)(*piVar4 << 4);
      lVar24 = (longlong)(piVar4[2] << 4);
      lVar29 = (longlong)(piVar1[1] << 4);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar31),
                          0x10);
      auVar47 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      lVar30 = (longlong)(piVar1[3] * 0x10);
      lVar22 = (longlong)(piVar4[1] << 4);
      lVar19 = (longlong)(piVar4[3] << 4);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar103 = insertps(auVar102,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar30),
                          0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar90 = insertps(auVar102,*(undefined4 *)(param_1 + lVar22),0x20);
      auVar104 = insertps(auVar103,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar102 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                          *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar103 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar47 = insertps(auVar102,*(undefined4 *)(param_1 + 4 + lVar22),0x20);
      auVar91 = insertps(auVar90,*(undefined4 *)(param_1 + lVar19),0x30);
      auVar73 = insertps(auVar47,*(undefined4 *)(param_1 + 4 + lVar19),0x30);
      auVar47 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar102 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + 8 + lVar22),0x20);
      auVar100 = insertps(auVar102,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      uVar37 = *(uint *)(param_1 + 0xc + lVar20);
      auVar97 = insertps(auVar47,*(undefined4 *)(param_1 + 8 + lVar19),0x30);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar31);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar32);
      auVar110._0_4_ = auVar104._0_4_ - auVar91._0_4_;
      auVar110._4_4_ = auVar104._4_4_ - auVar91._4_4_;
      auVar110._8_4_ = auVar104._8_4_ - auVar91._8_4_;
      auVar110._12_4_ = auVar104._12_4_ - auVar91._12_4_;
      auVar111._0_4_ = auVar103._0_4_ - auVar73._0_4_;
      auVar111._4_4_ = auVar103._4_4_ - auVar73._4_4_;
      auVar111._8_4_ = auVar103._8_4_ - auVar73._8_4_;
      auVar111._12_4_ = auVar103._12_4_ - auVar73._12_4_;
      auVar84._0_4_ = auVar100._0_4_ - auVar97._0_4_;
      auVar84._4_4_ = auVar100._4_4_ - auVar97._4_4_;
      auVar84._8_4_ = auVar100._8_4_ - auVar97._8_4_;
      auVar84._12_4_ = auVar100._12_4_ - auVar97._12_4_;
      auVar78._0_4_ =
           auVar84._0_4_ * auVar84._0_4_ +
           auVar111._0_4_ * auVar111._0_4_ + auVar110._0_4_ * auVar110._0_4_;
      auVar78._4_4_ =
           auVar84._4_4_ * auVar84._4_4_ +
           auVar111._4_4_ * auVar111._4_4_ + auVar110._4_4_ * auVar110._4_4_;
      auVar78._8_4_ =
           auVar84._8_4_ * auVar84._8_4_ +
           auVar111._8_4_ * auVar111._8_4_ + auVar110._8_4_ * auVar110._8_4_;
      auVar78._12_4_ =
           auVar84._12_4_ * auVar84._12_4_ +
           auVar111._12_4_ * auVar111._12_4_ + auVar110._12_4_ * auVar110._12_4_;
      uVar39 = *(uint *)(param_1 + 0xc + lVar24);
      auVar99 = sqrtps(unaff_XMM11,auVar78);
      uVar34 = -(uint)(auVar78._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar78._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar78._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar78._12_4_ < _UNK_1506895ec);
      auVar102._4_4_ = uVar35;
      auVar102._0_4_ = uVar34;
      auVar90 = divps(auVar110,auVar99);
      auVar78 = divps(auVar111,auVar99);
      auVar85 = divps(auVar84,auVar99);
      auVar102._8_4_ = uVar36;
      auVar102._12_4_ = uVar38;
      auVar47._4_4_ = _UNK_15076b1f4;
      auVar47._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar47._8_4_ = _UNK_15076b1f8;
      auVar47._12_4_ = _UNK_15076b1fc;
      auVar111 = blendvps(auVar90,auVar47,auVar102);
      auVar47 = insertps(ZEXT416(uVar37),uVar5,0x10);
      auVar47 = insertps(auVar47,uVar6,0x20);
      uVar23 = uVar28 & 0xffffffff;
      pfVar2 = (float *)(param_3 + uVar23);
      auVar47 = insertps(auVar47,ZEXT416(uVar39),0x30);
      uVar7 = *(uint *)(param_1 + 0xc + lVar29);
      uVar8 = *(uint *)(param_1 + 0xc + lVar30);
      auVar102 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar22);
      auVar102 = insertps(auVar102,ZEXT416(uVar9),0x20);
      uVar10 = *(uint *)(param_1 + 0xc + lVar19);
      unaff_XMM11 = ZEXT416(uVar10);
      auVar102 = insertps(auVar102,unaff_XMM11,0x30);
      fVar46 = auVar47._0_4_;
      fVar52 = auVar47._4_4_;
      fVar55 = auVar47._12_4_;
      fVar117 = auVar102._0_4_;
      fVar122 = auVar102._4_4_;
      fVar44 = auVar47._8_4_;
      fVar87 = auVar102._8_4_;
      fVar88 = auVar102._12_4_;
      auVar90._0_4_ = (fVar46 + fVar117) * fVar40 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar90._4_4_ = (fVar52 + fVar122) * fVar40 + _UNK_15076b1f4;
      auVar90._8_4_ = (fVar44 + fVar87) * fVar40 + _UNK_15076b1f8;
      auVar90._12_4_ = (fVar55 + fVar88) * fVar40 + _UNK_15076b1fc;
      pfVar3 = (float *)(param_4 + uVar23);
      fVar81 = *pfVar3;
      fVar82 = pfVar3[1];
      fVar83 = pfVar3[2];
      fVar89 = pfVar3[3];
      auVar120._0_4_ = ((float)(~uVar34 & auVar99._0_4_) - *pfVar2) * fVar45 - fVar81;
      auVar120._4_4_ = ((float)(~uVar35 & auVar99._4_4_) - pfVar2[1]) * fVar51 - fVar82;
      auVar120._8_4_ = ((float)(~uVar36 & auVar99._8_4_) - pfVar2[2]) * fVar53 - fVar83;
      auVar120._12_4_ = ((float)(~uVar38 & auVar99._12_4_) - pfVar2[3]) * fVar54 - fVar89;
      auVar47 = divps(auVar120,auVar90);
      fVar56 = auVar47._0_4_;
      fVar109 = auVar111._0_4_ * fVar56;
      fVar63 = auVar47._4_4_;
      fVar113 = auVar111._4_4_ * fVar63;
      fVar105 = auVar47._8_4_;
      fVar114 = auVar111._8_4_ * fVar105;
      fVar108 = auVar47._12_4_;
      fVar115 = auVar111._12_4_ * fVar108;
      auVar99._0_4_ = fVar46 * fVar109 + auVar104._0_4_;
      auVar99._4_4_ = fVar52 * fVar113 + auVar104._4_4_;
      auVar99._8_4_ = fVar44 * fVar114 + auVar104._8_4_;
      auVar99._12_4_ = fVar55 * fVar115 + auVar104._12_4_;
      fVar67 = (float)(~uVar34 & auVar78._0_4_) * fVar56;
      fVar69 = (float)(~uVar35 & auVar78._4_4_) * fVar63;
      fVar70 = (float)(~uVar36 & auVar78._8_4_) * fVar105;
      fVar71 = (float)(~uVar38 & auVar78._12_4_) * fVar108;
      *(float *)(param_1 + lVar20) = auVar99._0_4_;
      uVar11 = extractps(auVar99,1);
      *(undefined8 *)(param_1 + lVar31) = uVar11;
      auVar104._0_4_ = fVar46 * fVar67 + auVar103._0_4_;
      auVar104._4_4_ = fVar52 * fVar69 + auVar103._4_4_;
      auVar104._8_4_ = fVar44 * fVar70 + auVar103._8_4_;
      auVar104._12_4_ = fVar55 * fVar71 + auVar103._12_4_;
      uVar11 = extractps(auVar99,2);
      *(undefined8 *)(param_1 + lVar32) = uVar11;
      uVar11 = extractps(auVar99,3);
      *(undefined8 *)(param_1 + lVar24) = uVar11;
      fVar116 = (float)(~uVar34 & auVar85._0_4_) * fVar56;
      fVar121 = (float)(~uVar35 & auVar85._4_4_) * fVar63;
      fVar123 = (float)(~uVar36 & auVar85._8_4_) * fVar105;
      fVar124 = (float)(~uVar38 & auVar85._12_4_) * fVar108;
      *(float *)(param_1 + 4 + lVar20) = auVar104._0_4_;
      uVar11 = extractps(auVar104,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar11;
      uVar11 = extractps(auVar104,2);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar11;
      auVar103._0_4_ = fVar46 * fVar116 + auVar100._0_4_;
      auVar103._4_4_ = fVar52 * fVar121 + auVar100._4_4_;
      auVar103._8_4_ = fVar44 * fVar123 + auVar100._8_4_;
      auVar103._12_4_ = fVar55 * fVar124 + auVar100._12_4_;
      uVar11 = extractps(auVar104,3);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar11;
      *(float *)(param_1 + 8 + lVar20) = auVar103._0_4_;
      uVar11 = extractps(auVar103,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar11;
      uVar11 = extractps(auVar103,2);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar11;
      uVar11 = extractps(auVar103,3);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar11;
      *(uint *)(param_1 + 0xc + lVar20) = uVar37;
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar32) = uVar6;
      auVar100._0_4_ = auVar91._0_4_ - fVar109 * fVar117;
      auVar100._4_4_ = auVar91._4_4_ - fVar113 * fVar122;
      auVar100._8_4_ = auVar91._8_4_ - fVar114 * fVar87;
      auVar100._12_4_ = auVar91._12_4_ - fVar115 * fVar88;
      *(uint *)(param_1 + 0xc + lVar24) = uVar39;
      *(float *)(param_1 + lVar29) = auVar100._0_4_;
      uVar11 = extractps(auVar100,1);
      *(undefined8 *)(param_1 + lVar30) = uVar11;
      uVar11 = extractps(auVar100,2);
      *(undefined8 *)(param_1 + lVar22) = uVar11;
      auVar85._0_4_ = auVar73._0_4_ - fVar67 * fVar117;
      auVar85._4_4_ = auVar73._4_4_ - fVar69 * fVar122;
      auVar85._8_4_ = auVar73._8_4_ - fVar70 * fVar87;
      auVar85._12_4_ = auVar73._12_4_ - fVar71 * fVar88;
      uVar11 = extractps(auVar100,3);
      *(undefined8 *)(param_1 + lVar19) = uVar11;
      *(float *)(param_1 + 4 + lVar29) = auVar85._0_4_;
      uVar11 = extractps(auVar85,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar11;
      uVar11 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar11;
      auVar73._0_4_ = auVar97._0_4_ - fVar116 * fVar117;
      auVar73._4_4_ = auVar97._4_4_ - fVar121 * fVar122;
      auVar73._8_4_ = auVar97._8_4_ - fVar123 * fVar87;
      auVar73._12_4_ = auVar97._12_4_ - fVar124 * fVar88;
      uVar11 = extractps(auVar85,3);
      *(undefined8 *)(param_1 + 4 + lVar19) = uVar11;
      *(float *)(param_1 + 8 + lVar29) = auVar73._0_4_;
      uVar11 = extractps(auVar73,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar11;
      uVar11 = extractps(auVar73,2);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar11;
      uVar11 = extractps(auVar73,3);
      *(undefined8 *)(param_1 + 8 + lVar19) = uVar11;
      pfVar2 = (float *)(param_4 + uVar23);
      *pfVar2 = fVar56 + fVar81;
      pfVar2[1] = fVar63 + fVar82;
      pfVar2[2] = fVar105 + fVar83;
      pfVar2[3] = fVar108 + fVar89;
      *(uint *)(param_1 + 0xc + lVar29) = uVar7;
      *(uint *)(param_1 + 0xc + lVar30) = uVar8;
      *(uint *)(param_1 + 0xc + lVar22) = uVar9;
      *(uint *)(param_1 + 0xc + lVar19) = uVar10;
      uVar28 = uVar28 + 0x10;
      uVar27 = uVar27 + 4;
    } while ((int)uVar27 < (int)uVar25);
    if ((int)param_7 <= (int)uVar27) {
      return;
    }
  }
  auVar91._0_4_ =
       -(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar91._4_4_ =
       -(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar91._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_7);
  auVar91._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_7);
  piVar1 = (int *)(param_2 + (ulonglong)uVar27 * 8);
  uVar25 = movmskps(uVar25,auVar91);
  bVar18 = (char)((char)uVar25 << 4) >> 4;
  if (uVar25 == 0xf) {
    iVar72 = *piVar1;
    iVar57 = piVar1[1];
    iVar75 = piVar1[2];
    iVar64 = piVar1[3];
    iVar76 = piVar1[4];
    iVar65 = piVar1[5];
    iVar77 = piVar1[6];
    iVar66 = piVar1[7];
  }
  else {
    auVar97._0_4_ = ___xmm_00000018000000100000000800000000 & auVar91._0_4_;
    auVar97._4_4_ = _UNK_150b51a04 & auVar91._4_4_;
    auVar97._8_4_ = _UNK_150b51a08 & auVar91._8_4_;
    auVar97._12_4_ = _UNK_150b51a0c & auVar91._12_4_;
    lVar20 = extractps(auVar97,1);
    lVar22 = extractps(auVar97,2);
    lVar19 = extractps(auVar97,3);
    iVar72 = *piVar1;
    iVar75 = *(int *)((longlong)piVar1 + lVar20);
    iVar76 = *(int *)((longlong)piVar1 + lVar22);
    iVar77 = *(int *)((longlong)piVar1 + lVar19);
    auVar47 = ___xmm_0000001c000000140000000c00000004 & auVar91;
    iVar57 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._0_4_);
    iVar64 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._4_4_);
    iVar65 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._8_4_);
    iVar66 = *(int *)((longlong)piVar1 + (ulonglong)auVar47._12_4_);
  }
  auVar74._0_4_ = iVar72 << 4;
  auVar74._4_4_ = iVar75 * 0x10;
  auVar74._8_4_ = iVar76 << 4;
  auVar74._12_4_ = iVar77 << 4;
  auVar102 = auVar91 & auVar74;
  lVar19 = param_1 + auVar102._0_4_;
  lVar20 = param_1 + auVar102._4_4_;
  lVar22 = param_1 + auVar102._8_4_;
  lVar24 = param_1 + auVar102._12_4_;
  auVar99 = ___xmm_00000004000000040000000400000004 & auVar91;
  uVar23 = (ulonglong)auVar99._0_4_;
  _local_1a8 = ___xmm_00000008000000080000000800000008 & auVar91;
  uVar28 = (ulonglong)local_1a8._0_4_;
  auVar58._0_4_ = iVar57 << 4;
  auVar58._4_4_ = iVar64 << 4;
  auVar58._8_4_ = iVar65 << 4;
  auVar58._12_4_ = iVar66 << 4;
  auVar90 = auVar91 & auVar58;
  lVar21 = (longlong)auVar90._0_4_;
  auVar47 = ZEXT416(*(uint *)(param_1 + auVar102._0_4_));
  lVar29 = param_1 + lVar21;
  lVar30 = param_1 + auVar90._4_4_;
  lVar31 = param_1 + auVar90._8_4_;
  lVar32 = param_1 + auVar90._12_4_;
  bVar33 = (bVar18 & 2) != 0;
  if (bVar33) {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._4_4_),0x10);
  }
  auVar103 = ZEXT416(*(uint *)(uVar23 + lVar19));
  if (bVar33) {
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._4_4_ + lVar20),0x10);
    auVar73 = insertps(ZEXT416(*(uint *)(uVar28 + lVar19)),
                       *(undefined4 *)((ulonglong)local_1a8._4_4_ + lVar20),0x10);
    auVar120 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),
                        *(undefined4 *)(param_1 + auVar90._4_4_),0x10);
    auVar78 = insertps(ZEXT416(*(uint *)(uVar23 + lVar29)),
                       *(undefined4 *)((ulonglong)auVar99._4_4_ + lVar30),0x10);
  }
  else {
    auVar73 = ZEXT416(*(uint *)(uVar28 + lVar19));
    auVar120 = ZEXT416(*(uint *)(param_1 + lVar21));
    auVar78 = ZEXT416(*(uint *)(uVar23 + lVar29));
  }
  auVar85 = ZEXT416(*(uint *)(uVar28 + lVar29));
  if (bVar33) {
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._4_4_ + lVar30),0x10);
  }
  if ((bVar18 & 4) != 0) {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._8_4_),0x20);
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._8_4_ + lVar22),0x20);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)local_1a8._8_4_ + lVar22),0x20);
    auVar120 = insertps(auVar120,*(undefined4 *)(param_1 + auVar90._8_4_),0x20);
    auVar78 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar99._8_4_ + lVar31),0x20);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._8_4_ + lVar31),0x20);
  }
  if ((char)bVar18 < '\0') {
    auVar47 = insertps(auVar47,*(undefined4 *)(param_1 + auVar102._12_4_),0x30);
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar99._12_4_ + lVar24),0x30);
    auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)local_1a8._12_4_ + lVar24),0x30);
    auVar120 = insertps(auVar120,*(undefined4 *)(param_1 + auVar90._12_4_),0x30);
    auVar78 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar99._12_4_ + lVar32),0x30);
    auVar85 = insertps(auVar85,*(undefined4 *)((ulonglong)local_1a8._12_4_ + lVar32),0x30);
  }
  lVar21 = (longlong)(int)(uVar27 << 2);
  pfVar2 = (float *)(param_4 + lVar21);
  if ((~bVar18 & 9) == 0) {
    _local_1a8 = *(undefined1 (*) [16])(param_3 + lVar21);
    auVar102 = *(undefined1 (*) [16])(param_4 + lVar21);
  }
  else {
    puVar26 = (uint *)(param_3 + lVar21);
    if ((uVar25 & 1) != 0) {
      _local_1a8 = ZEXT416(*puVar26);
    }
    if ((uVar25 & 2) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[1],0x10);
    }
    if ((uVar25 & 4) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[2],0x20);
    }
    if ((uVar25 & 8) != 0) {
      _local_1a8 = insertps(_local_1a8,puVar26[3],0x30);
    }
    auVar102 = auVar47;
    if ((uVar25 & 1) != 0) {
      auVar102 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar25 & 2) != 0) {
      auVar102 = insertps(auVar102,pfVar2[1],0x10);
    }
    if ((uVar25 & 4) != 0) {
      auVar102 = insertps(auVar102,pfVar2[2],0x20);
    }
    if ((uVar25 & 8) != 0) {
      auVar102 = insertps(auVar102,pfVar2[3],0x30);
    }
  }
  local_1b8 = auVar47._0_4_;
  fStack_1b4 = auVar47._4_4_;
  fStack_1b0 = auVar47._8_4_;
  fStack_1ac = auVar47._12_4_;
  fVar89 = auVar120._0_4_;
  fVar69 = local_1b8 - fVar89;
  fVar44 = auVar120._4_4_;
  fVar70 = fStack_1b4 - fVar44;
  auVar112._0_8_ = CONCAT44(fVar70,fVar69);
  fVar46 = auVar120._8_4_;
  auVar112._8_4_ = fStack_1b0 - fVar46;
  fVar52 = auVar120._12_4_;
  auVar112._12_4_ = fStack_1ac - fVar52;
  fVar55 = auVar103._0_4_;
  fVar56 = auVar103._4_4_;
  fVar63 = auVar103._12_4_;
  fVar54 = auVar78._0_4_;
  fVar105 = fVar55 - fVar54;
  fVar81 = auVar78._4_4_;
  fVar108 = fVar56 - fVar81;
  auVar106._0_8_ = CONCAT44(fVar108,fVar105);
  fVar82 = auVar78._8_4_;
  fVar67 = auVar103._8_4_;
  auVar106._8_4_ = fVar67 - fVar82;
  fVar83 = auVar78._12_4_;
  auVar106._12_4_ = fVar63 - fVar83;
  fVar40 = auVar85._0_4_;
  fVar71 = auVar73._0_4_;
  fVar117 = fVar71 - fVar40;
  fVar45 = auVar85._4_4_;
  fVar87 = auVar73._4_4_;
  fVar122 = fVar87 - fVar45;
  auVar118._0_8_ = CONCAT44(fVar122,fVar117);
  fVar51 = auVar85._8_4_;
  fVar88 = auVar73._8_4_;
  fVar109 = auVar73._12_4_;
  auVar118._8_4_ = fVar88 - fVar51;
  fVar53 = auVar85._12_4_;
  auVar118._12_4_ = fVar109 - fVar53;
  auVar41._0_4_ = fVar117 * fVar117 + fVar105 * fVar105 + fVar69 * fVar69;
  auVar41._4_4_ = fVar122 * fVar122 + fVar108 * fVar108 + fVar70 * fVar70;
  auVar41._8_4_ =
       auVar118._8_4_ * auVar118._8_4_ +
       auVar106._8_4_ * auVar106._8_4_ + auVar112._8_4_ * auVar112._8_4_;
  auVar41._12_4_ =
       auVar118._12_4_ * auVar118._12_4_ +
       auVar106._12_4_ * auVar106._12_4_ + auVar112._12_4_ * auVar112._12_4_;
  auVar99 = sqrtps(auVar99,auVar41);
  uVar25 = -(uint)(auVar41._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar27 = -(uint)(auVar41._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar41._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar41._12_4_ < _UNK_1506895ec);
  auVar42._4_4_ = uVar27;
  auVar42._0_4_ = uVar25;
  auVar42._8_4_ = uVar37;
  auVar42._12_4_ = uVar39;
  auVar48._8_4_ = auVar106._8_4_;
  auVar48._0_8_ = auVar106._0_8_;
  auVar48._12_4_ = auVar106._12_4_;
  auVar90 = divps(auVar48,auVar99);
  auVar79._8_4_ = auVar118._8_4_;
  auVar79._0_8_ = auVar118._0_8_;
  auVar79._12_4_ = auVar118._12_4_;
  auVar103 = divps(auVar79,auVar99);
  auVar59._8_4_ = auVar112._8_4_;
  auVar59._0_8_ = auVar112._0_8_;
  auVar59._12_4_ = auVar112._12_4_;
  auVar47 = divps(auVar59,auVar99);
  auVar12._4_4_ = _UNK_15076b1f4;
  auVar12._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar12._8_4_ = _UNK_15076b1f8;
  auVar12._12_4_ = _UNK_15076b1fc;
  auVar47 = blendvps(auVar47,auVar12,auVar42);
  auVar92._8_4_ = auVar112._8_4_;
  auVar92._0_8_ = auVar112._0_8_;
  auVar92._12_4_ = auVar112._12_4_;
  bVar33 = (bVar18 & 1) != 0;
  if (bVar33) {
    auVar92 = auVar47;
  }
  auVar98._0_8_ = CONCAT44(~uVar27 & auVar90._4_4_,~uVar25 & auVar90._0_4_);
  auVar98._8_4_ = ~uVar37 & auVar90._8_4_;
  auVar98._12_4_ = ~uVar39 & auVar90._12_4_;
  auVar101._0_8_ = CONCAT44(~uVar27 & auVar103._4_4_,~uVar25 & auVar103._0_4_);
  auVar101._8_4_ = ~uVar37 & auVar103._8_4_;
  auVar101._12_4_ = ~uVar39 & auVar103._12_4_;
  auVar80._8_4_ = auVar106._8_4_;
  auVar80._0_8_ = auVar106._0_8_;
  auVar80._12_4_ = auVar106._12_4_;
  auVar49._8_4_ = auVar118._8_4_;
  auVar49._0_8_ = auVar118._0_8_;
  auVar49._12_4_ = auVar118._12_4_;
  if (bVar33) {
    auVar80._8_4_ = auVar98._8_4_;
    auVar80._0_8_ = auVar98._0_8_;
    auVar80._12_4_ = auVar98._12_4_;
    auVar49._8_4_ = auVar101._8_4_;
    auVar49._0_8_ = auVar101._0_8_;
    auVar49._12_4_ = auVar101._12_4_;
    auVar90 = blendps(auVar112,auVar92,1);
  }
  else {
    auVar90 = blendps(auVar112,auVar92,1);
  }
  if ((bVar18 & 2) == 0) {
    auVar107 = blendps(auVar106,auVar80,1);
    auVar119 = blendps(auVar118,auVar49,1);
    auVar103 = auVar90;
    auVar78 = auVar107;
    auVar120 = auVar119;
  }
  else {
    auVar78 = blendps(auVar106,auVar80,1);
    auVar107._8_4_ = auVar98._8_4_;
    auVar107._0_8_ = auVar98._0_8_;
    auVar107._12_4_ = auVar98._12_4_;
    auVar120 = blendps(auVar118,auVar49,1);
    auVar119._8_4_ = auVar101._8_4_;
    auVar119._0_8_ = auVar101._0_8_;
    auVar119._12_4_ = auVar101._12_4_;
    auVar103 = auVar47;
  }
  auVar91 = auVar91 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar103 = blendps(auVar90,auVar103,2);
  bVar33 = (bVar18 & 4) != 0;
  auVar90 = auVar103;
  if (bVar33) {
    auVar90 = auVar47;
  }
  auVar78 = blendps(auVar78,auVar107,2);
  auVar95 = auVar78;
  if (bVar33) {
    auVar95._8_4_ = auVar98._8_4_;
    auVar95._0_8_ = auVar98._0_8_;
    auVar95._12_4_ = auVar98._12_4_;
  }
  auVar120 = blendps(auVar120,auVar119,2);
  auVar93 = auVar120;
  if (bVar33) {
    auVar93._8_4_ = auVar101._8_4_;
    auVar93._0_8_ = auVar101._0_8_;
    auVar93._12_4_ = auVar101._12_4_;
  }
  auVar73 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar19)),
                     *(undefined4 *)((ulonglong)auVar91._4_4_ + lVar20),0x10);
  auVar85 = insertps(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar29)),
                     *(undefined4 *)((ulonglong)auVar91._4_4_ + lVar30),0x10);
  auVar90 = blendps(auVar103,auVar90,4);
  bVar33 = -1 < (char)bVar18;
  if (bVar33) {
    auVar47 = auVar90;
  }
  auVar103 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar91._8_4_ + lVar22),0x20);
  auVar73 = insertps(auVar85,*(undefined4 *)((ulonglong)auVar91._8_4_ + lVar31),0x20);
  auVar78 = blendps(auVar78,auVar95,4);
  if (bVar33) {
    auVar98 = auVar78;
  }
  auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar91._12_4_ + lVar24),0x30);
  auVar73 = insertps(auVar73,*(undefined4 *)((ulonglong)auVar91._12_4_ + lVar32),0x30);
  auVar120 = blendps(auVar120,auVar93,4);
  if (bVar33) {
    auVar101 = auVar120;
  }
  param_5 = param_6 * param_5 * param_5;
  fVar122 = auVar103._0_4_;
  fVar113 = auVar103._4_4_;
  fVar114 = auVar103._12_4_;
  fVar115 = auVar73._0_4_;
  fVar116 = auVar73._4_4_;
  fVar117 = auVar103._8_4_;
  fVar121 = auVar73._8_4_;
  fVar123 = auVar73._12_4_;
  auVar68._0_4_ =
       (float)(__xmm_80000000800000008000000080000000 ^ (uint)param_5) *
       ((float)(~uVar25 & auVar99._0_4_) - (float)local_1a8._0_4_) - auVar102._0_4_;
  auVar68._4_4_ =
       (float)(_UNK_150651574 ^ (uint)param_5) *
       ((float)(~uVar27 & auVar99._4_4_) - (float)local_1a8._4_4_) - auVar102._4_4_;
  auVar68._8_4_ =
       (float)(_UNK_150651578 ^ (uint)param_5) * ((float)(~uVar37 & auVar99._8_4_) - fStack_1a0) -
       auVar102._8_4_;
  auVar68._12_4_ =
       (float)(_UNK_15065157c ^ (uint)param_5) * ((float)(~uVar39 & auVar99._12_4_) - fStack_19c) -
       auVar102._12_4_;
  auVar50._0_4_ = (fVar122 + fVar115) * param_5 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar50._4_4_ = (fVar113 + fVar116) * param_5 + _UNK_15076b1f4;
  auVar50._8_4_ = (fVar117 + fVar121) * param_5 + _UNK_15076b1f8;
  auVar50._12_4_ = (fVar114 + fVar123) * param_5 + _UNK_15076b1fc;
  auVar99 = divps(auVar68,auVar50);
  fVar105 = auVar99._0_4_;
  auVar86._0_4_ = auVar102._0_4_ + fVar105;
  fVar108 = auVar99._4_4_;
  auVar86._4_4_ = auVar102._4_4_ + fVar108;
  fVar69 = auVar99._8_4_;
  auVar86._8_4_ = auVar102._8_4_ + fVar69;
  fVar70 = auVar99._12_4_;
  auVar86._12_4_ = auVar102._12_4_ + fVar70;
  if ((bVar18 & 1) != 0) {
    *pfVar2 = auVar86._0_4_;
  }
  if ((bVar18 & 2) == 0) {
    auVar47 = blendps(auVar90,auVar47,8);
  }
  else {
    uVar11 = extractps(auVar86,1);
    *(undefined8 *)(pfVar2 + 1) = uVar11;
    auVar47 = blendps(auVar90,auVar47,8);
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar86,2);
    *(undefined8 *)(pfVar2 + 2) = uVar11;
  }
  fVar15 = (float)auVar47._12_4_ * fVar70;
  fVar14 = (float)auVar47._8_4_ * fVar69;
  fVar13 = (float)auVar47._4_4_ * fVar108;
  fVar124 = auVar47._0_4_ * fVar105;
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar86,3);
    *(undefined8 *)(pfVar2 + 3) = uVar11;
  }
  auVar60._0_4_ = local_1b8 + fVar122 * fVar124;
  auVar60._4_4_ = fStack_1b4 + fVar113 * fVar13;
  auVar60._8_4_ = fStack_1b0 + fVar117 * fVar14;
  auVar60._12_4_ = fStack_1ac + fVar114 * fVar15;
  if ((bVar18 & 1) == 0) {
    auVar47 = blendps(auVar78,auVar98,8);
  }
  else {
    *(float *)(param_1 + auVar74._0_4_) = auVar60._0_4_;
    auVar47 = blendps(auVar78,auVar98,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar60,1);
    *(undefined8 *)(param_1 + auVar74._4_4_) = uVar11;
  }
  uVar17 = (float)auVar47._12_4_ * fVar70;
  uVar16 = (float)auVar47._8_4_ * fVar69;
  uVar6 = (float)auVar47._4_4_ * fVar108;
  uVar5 = (float)auVar47._0_4_ * fVar105;
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar60,2);
    *(undefined8 *)(param_1 + auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar60,3);
    *(undefined8 *)(param_1 + auVar74._12_4_) = uVar11;
    auVar96._0_4_ = fVar55 + fVar122 * (float)uVar5;
    auVar96._4_4_ = fVar56 + fVar113 * (float)uVar6;
    auVar96._8_4_ = fVar67 + fVar117 * (float)uVar16;
    auVar96._12_4_ = fVar63 + fVar114 * (float)uVar17;
  }
  else {
    auVar96._0_4_ = fVar55 + fVar122 * (float)uVar5;
    auVar96._4_4_ = fVar56 + fVar113 * (float)uVar6;
    auVar96._8_4_ = fVar67 + fVar117 * (float)uVar16;
    auVar96._12_4_ = fVar63 + fVar114 * (float)uVar17;
  }
  if ((bVar18 & 1) == 0) {
    auVar47 = blendps(auVar120,auVar101,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar74._0_4_) = auVar96._0_4_;
    auVar47 = blendps(auVar120,auVar101,8);
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar96,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._4_4_) = uVar11;
  }
  fVar70 = fVar70 * (float)auVar47._12_4_;
  fVar69 = fVar69 * (float)auVar47._8_4_;
  fVar108 = fVar108 * (float)auVar47._4_4_;
  fVar105 = fVar105 * auVar47._0_4_;
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar96,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar96,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar74._12_4_) = uVar11;
    auVar61._0_4_ = fVar71 + fVar122 * fVar105;
    auVar61._4_4_ = fVar87 + fVar113 * fVar108;
    auVar61._8_4_ = fVar88 + fVar117 * fVar69;
    auVar61._12_4_ = fVar109 + fVar114 * fVar70;
  }
  else {
    auVar61._0_4_ = fVar71 + fVar122 * fVar105;
    auVar61._4_4_ = fVar87 + fVar113 * fVar108;
    auVar61._8_4_ = fVar88 + fVar117 * fVar69;
    auVar61._12_4_ = fVar109 + fVar114 * fVar70;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar74._0_4_) = auVar61._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar61,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar61,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar61,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar74._12_4_) = uVar11;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar74._0_4_) = fVar122;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar74._12_4_) = uVar11;
    auVar94._0_4_ = fVar89 - fVar124 * fVar115;
    auVar94._4_4_ = fVar44 - fVar13 * fVar116;
    auVar94._8_4_ = fVar46 - fVar14 * fVar121;
    auVar94._12_4_ = fVar52 - fVar15 * fVar123;
  }
  else {
    auVar94._0_4_ = fVar89 - fVar124 * fVar115;
    auVar94._4_4_ = fVar44 - fVar13 * fVar116;
    auVar94._8_4_ = fVar46 - fVar14 * fVar121;
    auVar94._12_4_ = fVar52 - fVar15 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + auVar58._0_4_) = auVar94._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + auVar58._12_4_) = uVar11;
    auVar62._0_4_ = fVar54 - (float)uVar5 * fVar115;
    auVar62._4_4_ = fVar81 - (float)uVar6 * fVar116;
    auVar62._8_4_ = fVar82 - (float)uVar16 * fVar121;
    auVar62._12_4_ = fVar83 - (float)uVar17 * fVar123;
  }
  else {
    auVar62._0_4_ = fVar54 - (float)uVar5 * fVar115;
    auVar62._4_4_ = fVar81 - (float)uVar6 * fVar116;
    auVar62._8_4_ = fVar82 - (float)uVar16 * fVar121;
    auVar62._12_4_ = fVar83 - (float)uVar17 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar58._0_4_) = auVar62._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar62,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar62,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar62,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar58._12_4_) = uVar11;
    auVar43._0_4_ = fVar40 - fVar105 * fVar115;
    auVar43._4_4_ = fVar45 - fVar108 * fVar116;
    auVar43._8_4_ = fVar51 - fVar69 * fVar121;
    auVar43._12_4_ = fVar53 - fVar70 * fVar123;
  }
  else {
    auVar43._0_4_ = fVar40 - fVar105 * fVar115;
    auVar43._4_4_ = fVar45 - fVar108 * fVar116;
    auVar43._8_4_ = fVar51 - fVar69 * fVar121;
    auVar43._12_4_ = fVar53 - fVar70 * fVar123;
  }
  if ((bVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar58._0_4_) = auVar43._0_4_;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar43,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar43,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar43,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar58._12_4_) = uVar11;
  }
  if ((bVar18 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar58._0_4_) = fVar115;
  }
  if ((bVar18 & 2) != 0) {
    uVar11 = extractps(auVar73,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._4_4_) = uVar11;
  }
  if ((bVar18 & 4) != 0) {
    uVar11 = extractps(auVar73,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._8_4_) = uVar11;
  }
  if ((char)bVar18 < '\0') {
    uVar11 = extractps(auVar73,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar58._12_4_) = uVar11;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDamping_sse4 @ 140945010

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDamping_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,float param_8,uint param_9)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  int unaff_R13D;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  bool bVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  float fVar75;
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar77 [16];
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar89;
  float fVar90;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar92;
  undefined1 auVar87 [16];
  float fVar91;
  float fVar93;
  undefined1 auVar88 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar102;
  int iVar105;
  int iVar106;
  float fVar107;
  int iVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar109;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  int iVar116;
  int iVar120;
  float fVar121;
  int iVar122;
  int iVar123;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar124;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar133;
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar149;
  float fVar150;
  float fVar151;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  float fVar152;
  undefined1 auVar147 [16];
  float fVar153;
  float fVar158;
  float fVar159;
  undefined1 auVar154 [16];
  float fVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 local_298 [16];
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 local_148 [16];
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fVar80;
  float fVar82;
  undefined1 auVar135 [16];
  undefined1 auVar141 [16];
  undefined1 auVar148 [16];
  
  uVar38 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar38 = param_9;
  }
  if ((int)(uVar38 & 0xfffffffc) < 1) {
    uVar18 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    fVar58 = param_6 * param_7 * param_6;
    fVar63 = param_8 + param_8;
    local_1a8._4_4_ = param_7;
    local_1a8._0_4_ = param_7;
    fStack_1a0 = param_7;
    fStack_19c = param_7;
    fVar44 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar58);
    fVar53 = (float)(_UNK_150651574 ^ (uint)fVar58);
    fVar55 = (float)(_UNK_150651578 ^ (uint)fVar58);
    fVar57 = (float)(_UNK_15065157c ^ (uint)fVar58);
    uVar18 = 0;
    uVar29 = 0;
    do {
      piVar1 = (int *)(param_3 + uVar29 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar29 * 2);
      unaff_R13D = piVar3[2] << 4;
      lVar22 = (longlong)(*piVar1 << 4);
      lVar19 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar3 << 4);
      lVar32 = (longlong)unaff_R13D;
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar33 = (longlong)(piVar1[3] * 0x10);
      auVar84 = insertps(ZEXT416(*(uint *)(param_1 + lVar22)),*(undefined4 *)(param_1 + lVar19),0x10
                        );
      lVar35 = (longlong)(piVar3[1] << 4);
      lVar31 = (longlong)(piVar3[3] << 4);
      auVar70 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar22)),
                         *(undefined4 *)(param_1 + 4 + lVar19),0x10);
      auVar77 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar22)),
                         *(undefined4 *)(param_1 + 8 + lVar19),0x10);
      auVar145 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar33),
                          0x10);
      auVar85 = insertps(auVar84,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar145 = insertps(auVar145,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar84 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar70 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                         *(undefined4 *)(param_1 + 4 + lVar33),0x10);
      auVar146 = insertps(auVar145,*(undefined4 *)(param_1 + lVar31),0x30);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar85 = insertps(auVar85,*(undefined4 *)(param_1 + lVar32),0x30);
      fVar150 = auVar85._12_4_;
      auVar97 = insertps(auVar84,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      unaff_XMM11 = insertps(auVar70,*(undefined4 *)(param_1 + 4 + lVar31),0x30);
      fVar144 = unaff_XMM11._12_4_;
      auVar84 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                         *(undefined4 *)(param_1 + 8 + lVar33),0x10);
      auVar70 = insertps(auVar77,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar81 = auVar70._12_4_;
      auVar154 = insertps(auVar84,*(undefined4 *)(param_1 + 8 + lVar31),0x30);
      lVar25 = (longlong)(*piVar1 * 3);
      lVar24 = (longlong)(piVar1[2] * 3);
      auVar84 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + lVar24 * 4),0x10);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar24 * 4),0x10);
      auVar130 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar25 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar24 * 4),0x10);
      lVar24 = (longlong)(*piVar3 * 3);
      auVar145 = insertps(auVar84,*(undefined4 *)(param_2 + lVar24 * 4),0x20);
      auVar86 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar24 * 4),0x20);
      auVar131 = insertps(auVar130,*(undefined4 *)(param_2 + 8 + lVar24 * 4),0x20);
      uVar17 = *(uint *)(param_1 + 0xc + lVar22);
      uVar20 = uVar29 & 0xffffffff;
      fVar142 = auVar85._0_4_;
      fVar143 = auVar146._0_4_;
      auVar132._0_4_ = fVar142 - fVar143;
      fVar75 = auVar85._4_4_;
      fVar149 = auVar146._4_4_;
      auVar132._4_4_ = fVar75 - fVar149;
      fVar76 = auVar85._8_4_;
      fVar151 = auVar146._8_4_;
      auVar132._8_4_ = fVar76 - fVar151;
      fVar152 = auVar146._12_4_;
      auVar132._12_4_ = fVar150 - fVar152;
      fVar45 = unaff_XMM11._0_4_;
      fVar134 = auVar97._0_4_;
      auVar130._0_4_ = fVar134 - fVar45;
      fVar54 = unaff_XMM11._4_4_;
      fVar137 = auVar97._4_4_;
      auVar130._4_4_ = fVar137 - fVar54;
      fVar56 = unaff_XMM11._8_4_;
      fVar67 = auVar97._8_4_;
      fVar140 = auVar97._12_4_;
      auVar130._8_4_ = fVar67 - fVar56;
      auVar130._12_4_ = fVar140 - fVar144;
      fVar94 = auVar70._0_4_;
      fVar153 = auVar154._0_4_;
      auVar146._0_4_ = fVar94 - fVar153;
      fVar100 = auVar70._4_4_;
      fVar158 = auVar154._4_4_;
      auVar146._4_4_ = fVar100 - fVar158;
      fVar82 = auVar70._8_4_;
      fVar159 = auVar154._8_4_;
      auVar146._8_4_ = fVar82 - fVar159;
      fVar160 = auVar154._12_4_;
      auVar146._12_4_ = fVar81 - fVar160;
      auVar118._0_4_ = auVar130._0_4_ * auVar130._0_4_ + auVar132._0_4_ * auVar132._0_4_;
      auVar118._4_4_ = auVar130._4_4_ * auVar130._4_4_ + auVar132._4_4_ * auVar132._4_4_;
      auVar118._8_4_ = auVar130._8_4_ * auVar130._8_4_ + auVar132._8_4_ * auVar132._8_4_;
      auVar118._12_4_ = auVar130._12_4_ * auVar130._12_4_ + auVar132._12_4_ * auVar132._12_4_;
      auVar125._0_4_ = auVar146._0_4_ * auVar146._0_4_ + auVar118._0_4_;
      auVar125._4_4_ = auVar146._4_4_ * auVar146._4_4_ + auVar118._4_4_;
      auVar125._8_4_ = auVar146._8_4_ * auVar146._8_4_ + auVar118._8_4_;
      auVar125._12_4_ = auVar146._12_4_ * auVar146._12_4_ + auVar118._12_4_;
      auVar154 = sqrtps(auVar118,auVar125);
      uVar37 = -(uint)(auVar125._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar39 = -(uint)(auVar125._4_4_ < _UNK_1506895e4);
      uVar40 = -(uint)(auVar125._8_4_ < _UNK_1506895e8);
      uVar42 = -(uint)(auVar125._12_4_ < _UNK_1506895ec);
      auVar70._4_4_ = uVar39;
      auVar70._0_4_ = uVar37;
      auVar77 = divps(auVar132,auVar154);
      auVar85 = divps(auVar130,auVar154);
      auVar70._8_4_ = uVar40;
      auVar70._12_4_ = uVar42;
      auVar84._4_4_ = _UNK_15076b1f4;
      auVar84._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar84._8_4_ = _UNK_15076b1f8;
      auVar84._12_4_ = _UNK_15076b1fc;
      auVar97 = blendvps(auVar77,auVar84,auVar70);
      auVar70 = divps(auVar146,auVar154);
      fVar124 = (float)(~uVar37 & auVar85._0_4_);
      fVar127 = (float)(~uVar39 & auVar85._4_4_);
      fVar128 = (float)(~uVar40 & auVar85._8_4_);
      fVar129 = (float)(~uVar42 & auVar85._12_4_);
      fVar133 = (float)(~uVar37 & auVar70._0_4_);
      fVar136 = (float)(~uVar39 & auVar70._4_4_);
      fVar138 = (float)(~uVar40 & auVar70._8_4_);
      fVar139 = (float)(~uVar42 & auVar70._12_4_);
      auVar70 = *(undefined1 (*) [16])(param_4 + uVar20);
      auVar130 = divps(auVar84,auVar70);
      auVar77._4_4_ = -(uint)(auVar70._4_4_ < _UNK_1506895d4);
      auVar77._0_4_ = -(uint)(auVar70._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar77._8_4_ = -(uint)(auVar70._8_4_ < _UNK_1506895d8);
      auVar77._12_4_ = -(uint)(auVar70._12_4_ < _UNK_1506895dc);
      auVar146 = blendvps(auVar130,auVar84,auVar77);
      uVar4 = *(uint *)(param_1 + 0xc + lVar19);
      auVar84 = insertps(ZEXT416(uVar17),ZEXT416(uVar4),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar28);
      auVar84 = insertps(auVar84,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar32);
      auVar84 = insertps(auVar84,ZEXT416(uVar6),0x30);
      uVar41 = *(uint *)(param_1 + 0xc + lVar21);
      uVar43 = *(uint *)(param_1 + 0xc + lVar33);
      auVar77 = insertps(ZEXT416(uVar41),ZEXT416(uVar43),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar35);
      auVar77 = insertps(auVar77,ZEXT416(uVar7),0x20);
      lVar24 = (longlong)(piVar3[2] * 3);
      uVar8 = *(uint *)(param_1 + 0xc + lVar31);
      auVar77 = insertps(auVar77,ZEXT416(uVar8),0x30);
      fVar95 = auVar84._0_4_;
      fVar80 = auVar84._4_4_;
      fVar83 = auVar84._12_4_;
      fVar89 = auVar77._0_4_;
      auVar156._0_4_ = fVar95 + fVar89;
      fVar91 = auVar77._4_4_;
      auVar156._4_4_ = fVar80 + fVar91;
      fVar93 = auVar77._8_4_;
      fVar121 = auVar84._8_4_;
      auVar156._8_4_ = fVar121 + fVar93;
      fVar107 = auVar77._12_4_;
      auVar156._12_4_ = fVar83 + fVar107;
      auVar130 = insertps(auVar145,*(undefined4 *)(param_2 + lVar24 * 4),0x30);
      auVar84 = divps(_local_1a8,auVar156);
      auVar145 = sqrtps(auVar85,auVar84);
      auVar86 = insertps(auVar86,*(undefined4 *)(param_2 + 4 + lVar24 * 4),0x30);
      auVar132 = insertps(auVar131,*(undefined4 *)(param_2 + 8 + lVar24 * 4),0x30);
      lVar25 = (longlong)(piVar1[1] * 3);
      lVar24 = (longlong)(piVar1[3] * 3);
      lVar30 = (longlong)(piVar3[1] * 3);
      lVar26 = (longlong)(piVar3[3] * 3);
      auVar84 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + lVar24 * 4),0x10);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_2 + lVar30 * 4),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_2 + lVar26 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar24 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar30 * 4),0x20);
      auVar85 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar26 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar25 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar24 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar30 * 4),0x20);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar26 * 4),0x30);
      fVar64 = auVar145._0_4_ * fVar63 * auVar146._0_4_ * param_6;
      fVar66 = auVar145._4_4_ * fVar63 * auVar146._4_4_ * param_6;
      fVar68 = auVar145._8_4_ * fVar63 * auVar146._8_4_ * param_6;
      fVar69 = auVar145._12_4_ * fVar63 * auVar146._12_4_ * param_6;
      pfVar2 = (float *)(param_5 + uVar20);
      fVar90 = *pfVar2;
      fVar92 = pfVar2[1];
      fVar96 = pfVar2[2];
      fVar101 = pfVar2[3];
      auVar131._0_4_ =
           (((float)(~uVar37 & auVar154._0_4_) - auVar70._0_4_) * fVar44 - fVar90) -
           ((((fVar94 - auVar132._0_4_) - fVar153) + auVar77._0_4_) * fVar133 +
           (((fVar134 - auVar86._0_4_) - fVar45) + auVar85._0_4_) * fVar124 +
           (((fVar142 - auVar130._0_4_) - fVar143) + auVar84._0_4_) * auVar97._0_4_) * fVar64;
      auVar131._4_4_ =
           (((float)(~uVar39 & auVar154._4_4_) - auVar70._4_4_) * fVar53 - fVar92) -
           ((((fVar100 - auVar132._4_4_) - fVar158) + auVar77._4_4_) * fVar136 +
           (((fVar137 - auVar86._4_4_) - fVar54) + auVar85._4_4_) * fVar127 +
           (((fVar75 - auVar130._4_4_) - fVar149) + auVar84._4_4_) * auVar97._4_4_) * fVar66;
      auVar131._8_4_ =
           (((float)(~uVar40 & auVar154._8_4_) - auVar70._8_4_) * fVar55 - fVar96) -
           ((((fVar82 - auVar132._8_4_) - fVar159) + auVar77._8_4_) * fVar138 +
           (((fVar67 - auVar86._8_4_) - fVar56) + auVar85._8_4_) * fVar128 +
           (((fVar76 - auVar130._8_4_) - fVar151) + auVar84._8_4_) * auVar97._8_4_) * fVar68;
      auVar131._12_4_ =
           (((float)(~uVar42 & auVar154._12_4_) - auVar70._12_4_) * fVar57 - fVar101) -
           ((((fVar81 - auVar132._12_4_) - fVar160) + auVar77._12_4_) * fVar139 +
           (((fVar140 - auVar86._12_4_) - fVar144) + auVar85._12_4_) * fVar129 +
           (((fVar150 - auVar130._12_4_) - fVar152) + auVar84._12_4_) * auVar97._12_4_) * fVar69;
      auVar86._0_4_ = (fVar64 + fVar58) * auVar156._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
      auVar86._4_4_ = (fVar66 + fVar58) * auVar156._4_4_ + _UNK_15076b1f4;
      auVar86._8_4_ = (fVar68 + fVar58) * auVar156._8_4_ + _UNK_15076b1f8;
      auVar86._12_4_ = (fVar69 + fVar58) * auVar156._12_4_ + _UNK_15076b1fc;
      auVar70 = divps(auVar131,auVar86);
      fVar109 = auVar70._0_4_;
      fVar64 = auVar97._0_4_ * fVar109;
      fVar113 = auVar70._4_4_;
      fVar66 = auVar97._4_4_ * fVar113;
      fVar114 = auVar70._8_4_;
      fVar68 = auVar97._8_4_ * fVar114;
      fVar115 = auVar70._12_4_;
      fVar69 = auVar97._12_4_ * fVar115;
      auVar85._0_4_ = fVar95 * fVar64 + fVar142;
      auVar85._4_4_ = fVar80 * fVar66 + fVar75;
      auVar85._8_4_ = fVar121 * fVar68 + fVar76;
      auVar85._12_4_ = fVar83 * fVar69 + fVar150;
      fVar124 = fVar124 * fVar109;
      fVar127 = fVar127 * fVar113;
      fVar128 = fVar128 * fVar114;
      fVar129 = fVar129 * fVar115;
      *(float *)(param_1 + lVar22) = auVar85._0_4_;
      uVar9 = extractps(auVar85,1);
      *(undefined8 *)(param_1 + lVar19) = uVar9;
      auVar97._0_4_ = fVar95 * fVar124 + fVar134;
      auVar97._4_4_ = fVar80 * fVar127 + fVar137;
      auVar97._8_4_ = fVar121 * fVar128 + fVar67;
      auVar97._12_4_ = fVar83 * fVar129 + fVar140;
      uVar9 = extractps(auVar85,2);
      *(undefined8 *)(param_1 + lVar28) = uVar9;
      uVar9 = extractps(auVar85,3);
      *(undefined8 *)(param_1 + lVar32) = uVar9;
      fVar133 = fVar133 * fVar109;
      fVar136 = fVar136 * fVar113;
      fVar138 = fVar138 * fVar114;
      fVar139 = fVar139 * fVar115;
      *(float *)(param_1 + 4 + lVar22) = auVar97._0_4_;
      uVar9 = extractps(auVar97,1);
      *(undefined8 *)(param_1 + 4 + lVar19) = uVar9;
      uVar9 = extractps(auVar97,2);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar9;
      auVar154._0_4_ = fVar95 * fVar133 + fVar94;
      auVar154._4_4_ = fVar80 * fVar136 + fVar100;
      auVar154._8_4_ = fVar121 * fVar138 + fVar82;
      auVar154._12_4_ = fVar83 * fVar139 + fVar81;
      uVar9 = extractps(auVar97,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar9;
      *(float *)(param_1 + 8 + lVar22) = auVar154._0_4_;
      uVar9 = extractps(auVar154,1);
      *(undefined8 *)(param_1 + 8 + lVar19) = uVar9;
      uVar9 = extractps(auVar154,2);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = extractps(auVar154,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar9;
      *(uint *)(param_1 + 0xc + lVar22) = uVar17;
      *(uint *)(param_1 + 0xc + lVar19) = uVar4;
      *(uint *)(param_1 + 0xc + lVar28) = uVar5;
      auVar147._0_4_ = fVar143 - fVar64 * fVar89;
      auVar147._4_4_ = fVar149 - fVar66 * fVar91;
      auVar147._8_4_ = fVar151 - fVar68 * fVar93;
      auVar147._12_4_ = fVar152 - fVar69 * fVar107;
      *(uint *)(param_1 + 0xc + lVar32) = uVar6;
      *(float *)(param_1 + lVar21) = auVar147._0_4_;
      uVar9 = extractps(auVar147,1);
      *(undefined8 *)(param_1 + lVar33) = uVar9;
      uVar9 = extractps(auVar147,2);
      *(undefined8 *)(param_1 + lVar35) = uVar9;
      auVar145._0_4_ = fVar45 - fVar124 * fVar89;
      auVar145._4_4_ = fVar54 - fVar127 * fVar91;
      auVar145._8_4_ = fVar56 - fVar128 * fVar93;
      auVar145._12_4_ = fVar144 - fVar129 * fVar107;
      uVar9 = extractps(auVar147,3);
      *(undefined8 *)(param_1 + lVar31) = uVar9;
      *(float *)(param_1 + 4 + lVar21) = auVar145._0_4_;
      uVar9 = extractps(auVar145,1);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar9;
      uVar9 = extractps(auVar145,2);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar9;
      auVar155._0_4_ = fVar153 - fVar133 * fVar89;
      auVar155._4_4_ = fVar158 - fVar136 * fVar91;
      auVar155._8_4_ = fVar159 - fVar138 * fVar93;
      auVar155._12_4_ = fVar160 - fVar139 * fVar107;
      uVar9 = extractps(auVar145,3);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar9;
      *(float *)(param_1 + 8 + lVar21) = auVar155._0_4_;
      uVar9 = extractps(auVar155,1);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar9;
      uVar9 = extractps(auVar155,2);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar9;
      uVar9 = extractps(auVar155,3);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar9;
      pfVar2 = (float *)(param_5 + uVar20);
      *pfVar2 = fVar109 + fVar90;
      pfVar2[1] = fVar113 + fVar92;
      pfVar2[2] = fVar114 + fVar96;
      pfVar2[3] = fVar115 + fVar101;
      *(uint *)(param_1 + 0xc + lVar21) = uVar41;
      *(uint *)(param_1 + 0xc + lVar33) = uVar43;
      *(uint *)(param_1 + 0xc + lVar35) = uVar7;
      *(uint *)(param_1 + 0xc + lVar31) = uVar8;
      uVar29 = uVar29 + 0x10;
      uVar17 = (int)uVar18 + 4;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 < (int)(uVar38 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar17) {
      return;
    }
  }
  uVar38 = (uint)uVar18;
  auVar78._0_4_ =
       -(uint)((int)(uVar38 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9);
  auVar78._4_4_ =
       -(uint)((int)(uVar38 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9);
  auVar78._8_4_ = -(uint)((int)(uVar38 | _UNK_150631e08) < (int)param_9);
  auVar78._12_4_ = -(uint)((int)(uVar38 | _UNK_150631e0c) < (int)param_9);
  piVar1 = (int *)(param_3 + uVar18 * 8);
  uVar17 = movmskps(unaff_R13D,auVar78);
  bVar16 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    iVar116 = *piVar1;
    iVar102 = piVar1[1];
    iVar120 = piVar1[2];
    iVar105 = piVar1[3];
    iVar122 = piVar1[4];
    iVar106 = piVar1[5];
    iVar123 = piVar1[6];
    iVar108 = piVar1[7];
  }
  else {
    auVar46._0_4_ = ___xmm_00000018000000100000000800000000 & auVar78._0_4_;
    auVar46._4_4_ = _UNK_150b51a04 & auVar78._4_4_;
    auVar46._8_4_ = _UNK_150b51a08 & auVar78._8_4_;
    auVar46._12_4_ = _UNK_150b51a0c & auVar78._12_4_;
    lVar19 = extractps(auVar46,1);
    lVar21 = extractps(auVar46,2);
    lVar22 = extractps(auVar46,3);
    iVar116 = *piVar1;
    iVar120 = *(int *)((longlong)piVar1 + lVar19);
    iVar122 = *(int *)((longlong)piVar1 + lVar21);
    iVar123 = *(int *)((longlong)piVar1 + lVar22);
    auVar70 = ___xmm_0000001c000000140000000c00000004 & auVar78;
    iVar102 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._0_4_);
    iVar105 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._4_4_);
    iVar106 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._8_4_);
    iVar108 = *(int *)((longlong)piVar1 + (ulonglong)auVar70._12_4_);
  }
  auVar110._0_4_ = iVar116 << 4;
  auVar110._4_4_ = iVar120 << 4;
  auVar110._8_4_ = iVar122 << 4;
  auVar110._12_4_ = iVar123 << 4;
  auVar84 = auVar78 & auVar110;
  lVar19 = param_1 + auVar84._0_4_;
  lVar21 = param_1 + auVar84._4_4_;
  lVar22 = param_1 + auVar84._8_4_;
  lVar24 = param_1 + auVar84._12_4_;
  auVar77 = ___xmm_00000004000000040000000400000004 & auVar78;
  uVar18 = (ulonglong)auVar77._0_4_;
  uVar29 = (ulonglong)auVar77._4_4_;
  local_148 = ___xmm_00000008000000080000000800000008 & auVar78;
  uVar20 = (ulonglong)local_148._0_4_;
  auVar71._0_4_ = iVar102 << 4;
  auVar71._4_4_ = iVar105 << 4;
  auVar71._8_4_ = iVar106 << 4;
  auVar71._12_4_ = iVar108 << 4;
  auVar85 = auVar78 & auVar71;
  lVar31 = (longlong)auVar85._0_4_;
  auVar70 = ZEXT416(*(uint *)(param_1 + auVar84._0_4_));
  lVar25 = param_1 + lVar31;
  lVar26 = param_1 + auVar85._4_4_;
  lVar28 = param_1 + auVar85._8_4_;
  lVar30 = param_1 + auVar85._12_4_;
  bVar36 = (bVar16 & 2) != 0;
  if (bVar36) {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._4_4_),0x10);
  }
  uVar23 = (ulonglong)local_148._4_4_;
  auVar145 = ZEXT416(*(uint *)(uVar18 + lVar19));
  uVar4 = auVar77._8_4_;
  uVar6 = auVar77._12_4_;
  uVar5 = local_148._8_4_;
  if (bVar36) {
    auVar145 = insertps(auVar145,*(undefined4 *)(uVar29 + lVar21),0x10);
    auVar97 = insertps(ZEXT416(*(uint *)(uVar20 + lVar19)),*(undefined4 *)(uVar23 + lVar21),0x10);
    auVar77 = insertps(ZEXT416(*(uint *)(param_1 + lVar31)),*(undefined4 *)(param_1 + auVar85._4_4_)
                       ,0x10);
    auVar86 = insertps(ZEXT416(*(uint *)(uVar18 + lVar25)),*(undefined4 *)(uVar29 + lVar26),0x10);
    auVar130 = insertps(ZEXT416(*(uint *)(uVar20 + lVar25)),*(undefined4 *)(uVar23 + lVar26),0x10);
  }
  else {
    auVar97 = ZEXT416(*(uint *)(uVar20 + lVar19));
    auVar77 = ZEXT416(*(uint *)(param_1 + lVar31));
    auVar86 = ZEXT416(*(uint *)(uVar18 + lVar25));
    auVar130 = ZEXT416(*(uint *)(uVar20 + lVar25));
  }
  if ((bVar16 & 4) != 0) {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._8_4_),0x20);
    auVar145 = insertps(auVar145,*(undefined4 *)((ulonglong)uVar4 + lVar22),0x20);
    auVar97 = insertps(auVar97,*(undefined4 *)((ulonglong)uVar5 + lVar22),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)(param_1 + auVar85._8_4_),0x20);
    auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar4 + lVar28),0x20);
    auVar130 = insertps(auVar130,*(undefined4 *)((ulonglong)uVar5 + lVar28),0x20);
  }
  if ((char)bVar16 < '\0') {
    auVar70 = insertps(auVar70,*(undefined4 *)(param_1 + auVar84._12_4_),0x30);
    auVar145 = insertps(auVar145,*(undefined4 *)((ulonglong)uVar6 + lVar24),0x30);
    auVar97 = insertps(auVar97,*(undefined4 *)((ulonglong)local_148._12_4_ + lVar24),0x30);
    auVar77 = insertps(auVar77,*(undefined4 *)(param_1 + auVar85._12_4_),0x30);
    auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar6 + lVar30),0x30);
  }
  uVar34 = (ulonglong)local_148._12_4_;
  if ((char)bVar16 < '\0') {
    auVar130 = insertps(auVar130,*(undefined4 *)(uVar34 + lVar30),0x30);
  }
  lVar31 = (longlong)(int)(uVar38 << 2);
  pfVar2 = (float *)(param_5 + lVar31);
  if ((~bVar16 & 9) == 0) {
    local_148 = *(undefined1 (*) [16])(param_4 + lVar31);
    unaff_XMM11 = *(undefined1 (*) [16])(param_5 + lVar31);
  }
  else {
    puVar27 = (uint *)(param_4 + lVar31);
    if ((uVar17 & 1) != 0) {
      local_148 = ZEXT416(*puVar27);
    }
    if ((uVar17 & 2) != 0) {
      local_148 = insertps(local_148,puVar27[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      local_148 = insertps(local_148,puVar27[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      local_148 = insertps(local_148,puVar27[3],0x30);
    }
    if ((uVar17 & 1) != 0) {
      unaff_XMM11 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar17 & 2) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      unaff_XMM11 = insertps(unaff_XMM11,pfVar2[3],0x30);
    }
  }
  fVar96 = auVar77._0_4_;
  fVar81 = auVar70._0_4_;
  fVar144 = fVar81 - fVar96;
  fVar101 = auVar77._4_4_;
  fVar94 = auVar70._4_4_;
  fVar150 = fVar94 - fVar101;
  auVar148._0_8_ = CONCAT44(fVar150,fVar144);
  fVar45 = auVar77._8_4_;
  fVar95 = auVar70._8_4_;
  fVar100 = auVar70._12_4_;
  auVar148._8_4_ = fVar95 - fVar45;
  fVar54 = auVar77._12_4_;
  auVar148._12_4_ = fVar100 - fVar54;
  fVar58 = auVar86._0_4_;
  fVar68 = auVar145._0_4_;
  fVar140 = fVar68 - fVar58;
  fVar63 = auVar86._4_4_;
  fVar69 = auVar145._4_4_;
  fVar142 = fVar69 - fVar63;
  auVar141._0_8_ = CONCAT44(fVar142,fVar140);
  fVar90 = auVar86._8_4_;
  fVar75 = auVar145._8_4_;
  fVar76 = auVar145._12_4_;
  auVar141._8_4_ = fVar75 - fVar90;
  fVar92 = auVar86._12_4_;
  auVar141._12_4_ = fVar76 - fVar92;
  fVar44 = auVar130._0_4_;
  fVar56 = auVar97._0_4_;
  fVar134 = fVar56 - fVar44;
  fVar53 = auVar130._4_4_;
  fVar64 = auVar97._4_4_;
  fVar137 = fVar64 - fVar53;
  auVar135._0_8_ = CONCAT44(fVar137,fVar134);
  fVar55 = auVar130._8_4_;
  fVar66 = auVar97._8_4_;
  fVar67 = auVar97._12_4_;
  auVar135._8_4_ = fVar66 - fVar55;
  fVar57 = auVar130._12_4_;
  auVar135._12_4_ = fVar67 - fVar57;
  auVar47._0_4_ = fVar144 * fVar144;
  auVar47._4_4_ = fVar150 * fVar150;
  auVar47._8_4_ = auVar148._8_4_ * auVar148._8_4_;
  auVar47._12_4_ = auVar148._12_4_ * auVar148._12_4_;
  auVar65._0_4_ = fVar134 * fVar134 + fVar140 * fVar140 + auVar47._0_4_;
  auVar65._4_4_ = fVar137 * fVar137 + fVar142 * fVar142 + auVar47._4_4_;
  auVar65._8_4_ = auVar135._8_4_ * auVar135._8_4_ + auVar141._8_4_ * auVar141._8_4_ + auVar47._8_4_;
  auVar65._12_4_ =
       auVar135._12_4_ * auVar135._12_4_ + auVar141._12_4_ * auVar141._12_4_ + auVar47._12_4_;
  auVar84 = sqrtps(auVar47,auVar65);
  uVar38 = -(uint)(auVar65._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar17 = -(uint)(auVar65._4_4_ < _UNK_1506895e4);
  uVar41 = -(uint)(auVar65._8_4_ < _UNK_1506895e8);
  uVar43 = -(uint)(auVar65._12_4_ < _UNK_1506895ec);
  auVar48._4_4_ = uVar17;
  auVar48._0_4_ = uVar38;
  auVar59._8_4_ = auVar141._8_4_;
  auVar59._0_8_ = auVar141._0_8_;
  auVar59._12_4_ = auVar141._12_4_;
  auVar77 = divps(auVar59,auVar84);
  auVar72._8_4_ = auVar135._8_4_;
  auVar72._0_8_ = auVar135._0_8_;
  auVar72._12_4_ = auVar135._12_4_;
  auVar85 = divps(auVar72,auVar84);
  auVar111._8_4_ = auVar148._8_4_;
  auVar111._0_8_ = auVar148._0_8_;
  auVar111._12_4_ = auVar148._12_4_;
  auVar70 = divps(auVar111,auVar84);
  auVar48._8_4_ = uVar41;
  auVar48._12_4_ = uVar43;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar70 = blendvps(auVar70,auVar10,auVar48);
  auVar87._8_4_ = auVar148._8_4_;
  auVar87._0_8_ = auVar148._0_8_;
  auVar87._12_4_ = auVar148._12_4_;
  bVar36 = (bVar16 & 1) != 0;
  if (bVar36) {
    auVar87 = auVar70;
  }
  auVar49._0_8_ = CONCAT44(~uVar17 & auVar77._4_4_,~uVar38 & auVar77._0_4_);
  auVar49._8_4_ = ~uVar41 & auVar77._8_4_;
  auVar49._12_4_ = ~uVar43 & auVar77._12_4_;
  local_298._0_8_ = CONCAT44(~uVar17 & auVar85._4_4_,~uVar38 & auVar85._0_4_);
  local_298._8_4_ = ~uVar41 & auVar85._8_4_;
  local_298._12_4_ = ~uVar43 & auVar85._12_4_;
  auVar60._8_4_ = auVar141._8_4_;
  auVar60._0_8_ = auVar141._0_8_;
  auVar60._12_4_ = auVar141._12_4_;
  auVar73._8_4_ = auVar135._8_4_;
  auVar73._0_8_ = auVar135._0_8_;
  auVar73._12_4_ = auVar135._12_4_;
  if (bVar36) {
    auVar60._8_4_ = auVar49._8_4_;
    auVar60._0_8_ = auVar49._0_8_;
    auVar60._12_4_ = auVar49._12_4_;
    auVar73._8_4_ = local_298._8_4_;
    auVar73._0_8_ = local_298._0_8_;
    auVar73._12_4_ = local_298._12_4_;
  }
  auVar117._4_4_ = iVar120 * 3;
  auVar117._0_4_ = iVar116 * 3;
  auVar117._8_4_ = iVar122 * 3;
  auVar117._12_4_ = iVar123 * 3;
  auVar103._4_4_ = iVar105 * 3;
  auVar103._0_4_ = iVar102 * 3;
  auVar103._8_4_ = iVar106 * 3;
  auVar103._12_4_ = iVar108 * 3;
  auVar85 = blendps(auVar148,auVar87,1);
  bVar36 = (bVar16 & 2) != 0;
  auVar77 = auVar85;
  if (bVar36) {
    auVar77 = auVar70;
  }
  auVar117 = auVar117 & auVar78;
  auVar103 = auVar103 & auVar78;
  auVar145 = blendps(auVar141,auVar60,1);
  auVar61 = auVar145;
  if (bVar36) {
    auVar61._8_4_ = auVar49._8_4_;
    auVar61._0_8_ = auVar49._0_8_;
    auVar61._12_4_ = auVar49._12_4_;
  }
  auVar78 = auVar78 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar97 = blendps(auVar135,auVar73,1);
  auVar98 = auVar97;
  if (bVar36) {
    auVar98._8_4_ = local_298._8_4_;
    auVar98._0_8_ = local_298._0_8_;
    auVar98._12_4_ = local_298._12_4_;
  }
  auVar85 = blendps(auVar85,auVar77,2);
  bVar36 = (bVar16 & 4) != 0;
  auVar77 = auVar85;
  if (bVar36) {
    auVar77 = auVar70;
  }
  lVar31 = param_2 + (longlong)auVar117._0_4_ * 4;
  lVar32 = param_2 + (longlong)auVar103._0_4_ * 4;
  auVar145 = blendps(auVar145,auVar61,2);
  auVar62 = auVar145;
  if (bVar36) {
    auVar62._8_4_ = auVar49._8_4_;
    auVar62._0_8_ = auVar49._0_8_;
    auVar62._12_4_ = auVar49._12_4_;
  }
  lVar33 = param_2 + (longlong)auVar117._4_4_ * 4;
  lVar35 = param_2 + (longlong)auVar103._4_4_ * 4;
  auVar130 = blendps(auVar97,auVar98,2);
  auVar97 = auVar130;
  if (bVar36) {
    auVar97 = local_298;
  }
  auVar156 = insertps(ZEXT416(*(uint *)((ulonglong)auVar78._0_4_ + lVar19)),
                      *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar21),0x10);
  auVar146 = insertps(ZEXT416(*(uint *)((ulonglong)auVar78._0_4_ + lVar25)),
                      *(undefined4 *)((ulonglong)auVar78._4_4_ + lVar26),0x10);
  auVar132 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(uVar29 + lVar33),0x10);
  auVar125 = insertps(ZEXT416(*(uint *)(uVar20 + lVar31)),*(undefined4 *)(uVar23 + lVar33),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)(uVar18 + lVar32)),*(undefined4 *)(uVar29 + lVar35),0x10);
  auVar154 = insertps(ZEXT416(*(uint *)(uVar20 + lVar32)),*(undefined4 *)(uVar23 + lVar35),0x10);
  auVar86 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar117._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar117._4_4_ * 4),0x10);
  lVar19 = param_2 + (longlong)auVar117._8_4_ * 4;
  auVar131 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar103._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar103._4_4_ * 4),0x10);
  lVar21 = param_2 + (longlong)auVar103._8_4_ * 4;
  auVar77 = blendps(auVar85,auVar77,4);
  bVar36 = -1 < (char)bVar16;
  if (bVar36) {
    auVar70 = auVar77;
  }
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar22),0x20);
  auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar78._8_4_ + lVar28),0x20);
  lVar22 = param_2 + (longlong)auVar117._12_4_ * 4;
  auVar85 = insertps(auVar86,*(undefined4 *)(param_2 + (longlong)auVar117._8_4_ * 4),0x20);
  auVar86 = insertps(auVar132,*(undefined4 *)((ulonglong)uVar4 + lVar19),0x20);
  auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar5 + lVar19),0x20);
  auVar131 = insertps(auVar131,*(undefined4 *)(param_2 + (longlong)auVar103._8_4_ * 4),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar4 + lVar21),0x20);
  lVar19 = param_2 + (longlong)auVar103._12_4_ * 4;
  auVar132 = insertps(auVar154,*(undefined4 *)((ulonglong)uVar5 + lVar21),0x20);
  auVar145 = blendps(auVar145,auVar62,4);
  if (bVar36) {
    auVar49 = auVar145;
  }
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)auVar78._12_4_ + lVar24),0x30);
  auVar146 = insertps(auVar146,*(undefined4 *)((ulonglong)auVar78._12_4_ + lVar30),0x30);
  auVar85 = insertps(auVar85,*(undefined4 *)(param_2 + (longlong)auVar117._12_4_ * 4),0x30);
  auVar86 = insertps(auVar86,*(undefined4 *)((ulonglong)uVar6 + lVar22),0x30);
  auVar125 = insertps(auVar125,*(undefined4 *)(uVar34 + lVar22),0x30);
  auVar131 = insertps(auVar131,*(undefined4 *)(param_2 + (longlong)auVar103._12_4_ * 4),0x30);
  auVar154 = insertps(auVar118,*(undefined4 *)((ulonglong)uVar6 + lVar19),0x30);
  auVar132 = insertps(auVar132,*(undefined4 *)(uVar34 + lVar19),0x30);
  auVar97 = blendps(auVar130,auVar97,4);
  if (bVar36) {
    local_298 = auVar97;
  }
  auVar130 = blendps(auVar77,auVar70,8);
  auVar145 = blendps(auVar145,auVar49,8);
  auVar77 = blendps(auVar97,local_298,8);
  local_118 = auVar84._0_4_;
  uStack_114 = auVar84._4_4_;
  uStack_110 = auVar84._8_4_;
  uStack_10c = auVar84._12_4_;
  auVar11._4_4_ = _UNK_15076b1f4;
  auVar11._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar11._8_4_ = _UNK_15076b1f8;
  auVar11._12_4_ = _UNK_15076b1fc;
  auVar70 = divps(auVar11,local_148);
  auVar50._4_4_ = -(uint)(local_148._4_4_ < _UNK_1506895d4);
  auVar50._0_4_ = -(uint)(local_148._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar50._8_4_ = -(uint)(local_148._8_4_ < _UNK_1506895d8);
  auVar50._12_4_ = -(uint)(local_148._12_4_ < _UNK_1506895dc);
  auVar84 = blendvps(auVar70,auVar11,auVar50);
  fVar144 = auVar156._0_4_;
  fVar83 = auVar146._0_4_;
  auVar79._0_4_ = fVar144 + fVar83;
  fVar150 = auVar156._4_4_;
  fVar89 = auVar146._4_4_;
  auVar79._4_4_ = fVar150 + fVar89;
  fVar80 = auVar156._8_4_;
  fVar82 = auVar156._12_4_;
  fVar91 = auVar146._8_4_;
  auVar79._8_4_ = fVar80 + fVar91;
  fVar93 = auVar146._12_4_;
  auVar79._12_4_ = fVar82 + fVar93;
  param_8 = param_8 + param_8;
  auVar51._4_4_ = param_7;
  auVar51._0_4_ = param_7;
  auVar51._8_4_ = param_7;
  auVar51._12_4_ = param_7;
  auVar70 = divps(auVar51,auVar79);
  auVar70 = sqrtps(auVar70,auVar70);
  fVar134 = param_6 * param_7 * param_6;
  fVar137 = param_6 * auVar70._0_4_ * param_8 * auVar84._0_4_;
  fVar140 = param_6 * auVar70._4_4_ * param_8 * auVar84._4_4_;
  fVar142 = param_6 * auVar70._8_4_ * param_8 * auVar84._8_4_;
  param_6 = param_6 * auVar70._12_4_ * param_8 * auVar84._12_4_;
  fVar115 = auVar145._0_4_;
  fVar121 = auVar145._4_4_;
  fVar124 = auVar145._8_4_;
  fVar127 = auVar145._12_4_;
  fVar107 = auVar77._0_4_;
  fVar109 = auVar77._4_4_;
  fVar113 = auVar77._8_4_;
  fVar114 = auVar77._12_4_;
  local_108 = unaff_XMM11._0_4_;
  fStack_104 = unaff_XMM11._4_4_;
  fStack_100 = unaff_XMM11._8_4_;
  fStack_fc = unaff_XMM11._12_4_;
  auVar52._0_4_ =
       ((float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar134) *
        ((float)(~uVar38 & local_118) - local_148._0_4_) - local_108) -
       ((((fVar56 - auVar125._0_4_) - fVar44) + auVar132._0_4_) * fVar107 +
       (((fVar68 - auVar86._0_4_) - fVar58) + auVar154._0_4_) * fVar115 +
       (((fVar81 - auVar85._0_4_) - fVar96) + auVar131._0_4_) * auVar130._0_4_) * fVar137;
  auVar52._4_4_ =
       ((float)(_UNK_150651574 ^ (uint)fVar134) * ((float)(~uVar17 & uStack_114) - local_148._4_4_)
       - fStack_104) -
       ((((fVar64 - auVar125._4_4_) - fVar53) + auVar132._4_4_) * fVar109 +
       (((fVar69 - auVar86._4_4_) - fVar63) + auVar154._4_4_) * fVar121 +
       (((fVar94 - auVar85._4_4_) - fVar101) + auVar131._4_4_) * auVar130._4_4_) * fVar140;
  auVar52._8_4_ =
       ((float)(_UNK_150651578 ^ (uint)fVar134) * ((float)(~uVar41 & uStack_110) - local_148._8_4_)
       - fStack_100) -
       ((((fVar66 - auVar125._8_4_) - fVar55) + auVar132._8_4_) * fVar113 +
       (((fVar75 - auVar86._8_4_) - fVar90) + auVar154._8_4_) * fVar124 +
       (((fVar95 - auVar85._8_4_) - fVar45) + auVar131._8_4_) * auVar130._8_4_) * fVar142;
  auVar52._12_4_ =
       ((float)(_UNK_15065157c ^ (uint)fVar134) * ((float)(~uVar43 & uStack_10c) - local_148._12_4_)
       - fStack_fc) -
       ((((fVar67 - auVar125._12_4_) - fVar57) + auVar132._12_4_) * fVar114 +
       (((fVar76 - auVar86._12_4_) - fVar92) + auVar154._12_4_) * fVar127 +
       (((fVar100 - auVar85._12_4_) - fVar54) + auVar131._12_4_) * auVar130._12_4_) * param_6;
  auVar157._0_4_ = (fVar137 + fVar134) * auVar79._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar157._4_4_ = (fVar140 + fVar134) * auVar79._4_4_ + _UNK_15076b1f4;
  auVar157._8_4_ = (fVar142 + fVar134) * auVar79._8_4_ + _UNK_15076b1f8;
  auVar157._12_4_ = (param_6 + fVar134) * auVar79._12_4_ + _UNK_15076b1fc;
  auVar70 = divps(auVar52,auVar157);
  fVar134 = auVar70._0_4_;
  auVar119._0_4_ = local_108 + fVar134;
  fVar137 = auVar70._4_4_;
  auVar119._4_4_ = fStack_104 + fVar137;
  fVar140 = auVar70._8_4_;
  auVar119._8_4_ = fStack_100 + fVar140;
  fVar142 = auVar70._12_4_;
  auVar119._12_4_ = fStack_fc + fVar142;
  if ((bVar16 & 1) != 0) {
    *pfVar2 = auVar119._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar119,1);
    *(undefined8 *)(pfVar2 + 1) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar119,2);
    *(undefined8 *)(pfVar2 + 2) = uVar9;
  }
  fVar128 = auVar130._0_4_ * fVar134;
  fVar129 = auVar130._4_4_ * fVar137;
  fVar133 = auVar130._8_4_ * fVar140;
  fVar136 = auVar130._12_4_ * fVar142;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar119,3);
    *(undefined8 *)(pfVar2 + 3) = uVar9;
  }
  auVar112._0_4_ = fVar81 + fVar144 * fVar128;
  auVar112._4_4_ = fVar94 + fVar150 * fVar129;
  auVar112._8_4_ = fVar95 + fVar80 * fVar133;
  auVar112._12_4_ = fVar100 + fVar82 * fVar136;
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + auVar110._0_4_) = auVar112._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + auVar110._8_4_) = uVar9;
  }
  uVar15 = fVar82 * fVar127 * fVar142;
  uVar14 = fVar80 * fVar124 * fVar140;
  uVar13 = fVar150 * fVar121 * fVar137;
  uVar12 = fVar144 * fVar115 * fVar134;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + auVar110._12_4_) = uVar9;
    auVar104._0_4_ = fVar68 + (float)uVar12;
    auVar104._4_4_ = fVar69 + (float)uVar13;
    auVar104._8_4_ = fVar75 + (float)uVar14;
    auVar104._12_4_ = fVar76 + (float)uVar15;
  }
  else {
    auVar104._0_4_ = fVar68 + (float)uVar12;
    auVar104._4_4_ = fVar69 + (float)uVar13;
    auVar104._8_4_ = fVar75 + (float)uVar14;
    auVar104._12_4_ = fVar76 + (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar110._0_4_) = auVar104._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar104,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar104,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._8_4_) = uVar9;
  }
  uVar15 = fVar82 * fVar114 * fVar142;
  uVar14 = fVar80 * fVar113 * fVar140;
  uVar13 = fVar150 * fVar109 * fVar137;
  uVar12 = fVar144 * fVar107 * fVar134;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar104,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar110._12_4_) = uVar9;
    auVar99._0_4_ = fVar56 + (float)uVar12;
    auVar99._4_4_ = fVar64 + (float)uVar13;
    auVar99._8_4_ = fVar66 + (float)uVar14;
    auVar99._12_4_ = fVar67 + (float)uVar15;
  }
  else {
    auVar99._0_4_ = fVar56 + (float)uVar12;
    auVar99._4_4_ = fVar64 + (float)uVar13;
    auVar99._8_4_ = fVar66 + (float)uVar14;
    auVar99._12_4_ = fVar67 + (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar110._0_4_) = auVar99._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar110._12_4_) = uVar9;
  }
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar110._0_4_) = fVar144;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar156,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar156,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar156,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar110._12_4_) = uVar9;
    auVar88._0_4_ = fVar96 - fVar128 * fVar83;
    auVar88._4_4_ = fVar101 - fVar129 * fVar89;
    auVar88._8_4_ = fVar45 - fVar133 * fVar91;
    auVar88._12_4_ = fVar54 - fVar136 * fVar93;
  }
  else {
    auVar88._0_4_ = fVar96 - fVar128 * fVar83;
    auVar88._4_4_ = fVar101 - fVar129 * fVar89;
    auVar88._8_4_ = fVar45 - fVar133 * fVar91;
    auVar88._12_4_ = fVar54 - fVar136 * fVar93;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + auVar71._0_4_) = auVar88._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + auVar71._8_4_) = uVar9;
  }
  uVar15 = fVar127 * fVar142 * fVar93;
  uVar14 = fVar124 * fVar140 * fVar91;
  uVar13 = fVar121 * fVar137 * fVar89;
  uVar12 = fVar115 * fVar134 * fVar83;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + auVar71._12_4_) = uVar9;
    auVar126._0_4_ = fVar58 - (float)uVar12;
    auVar126._4_4_ = fVar63 - (float)uVar13;
    auVar126._8_4_ = fVar90 - (float)uVar14;
    auVar126._12_4_ = fVar92 - (float)uVar15;
  }
  else {
    auVar126._0_4_ = fVar58 - (float)uVar12;
    auVar126._4_4_ = fVar63 - (float)uVar13;
    auVar126._8_4_ = fVar90 - (float)uVar14;
    auVar126._12_4_ = fVar92 - (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar71._0_4_) = auVar126._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar126,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar126,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._8_4_) = uVar9;
  }
  uVar15 = fVar114 * fVar142 * fVar93;
  uVar14 = fVar113 * fVar140 * fVar91;
  uVar13 = fVar109 * fVar137 * fVar89;
  uVar12 = fVar107 * fVar134 * fVar83;
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar126,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar71._12_4_) = uVar9;
    auVar74._0_4_ = fVar44 - (float)uVar12;
    auVar74._4_4_ = fVar53 - (float)uVar13;
    auVar74._8_4_ = fVar55 - (float)uVar14;
    auVar74._12_4_ = fVar57 - (float)uVar15;
  }
  else {
    auVar74._0_4_ = fVar44 - (float)uVar12;
    auVar74._4_4_ = fVar53 - (float)uVar13;
    auVar74._8_4_ = fVar55 - (float)uVar14;
    auVar74._12_4_ = fVar57 - (float)uVar15;
  }
  if ((bVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar71._0_4_) = auVar74._0_4_;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar74,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar74,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar74,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar71._12_4_) = uVar9;
  }
  if ((bVar16 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar71._0_4_) = fVar83;
  }
  if ((bVar16 & 2) != 0) {
    uVar9 = extractps(auVar146,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._4_4_) = uVar9;
  }
  if ((bVar16 & 4) != 0) {
    uVar9 = extractps(auVar146,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._8_4_) = uVar9;
  }
  if ((char)bVar16 < '\0') {
    uVar9 = extractps(auVar146,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar71._12_4_) = uVar9;
  }
  return;
}

// ApplyXPBDSpringDampingConstraints_sse4 @ 1409467b0

/* WARNING: Removing unreachable block (ram,0x00014094724d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,undefined4 param_7,float param_8,uint param_9)

{
  int *piVar1;
  float *pfVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  byte bVar26;
  longlong lVar27;
  int unaff_R13D;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar51;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar78;
  float fVar79;
  undefined1 auVar73 [16];
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  int iVar82;
  int iVar85;
  float fVar86;
  undefined1 auVar83 [16];
  int iVar87;
  int iVar88;
  undefined1 auVar84 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  int iVar92;
  float fVar95;
  int iVar96;
  float fVar97;
  float fVar98;
  int iVar99;
  float fVar100;
  int iVar101;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar106;
  float fVar107;
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar115;
  float fVar118;
  float fVar119;
  undefined1 auVar116 [16];
  float fVar120;
  undefined1 auVar117 [16];
  float fVar121;
  float fVar125;
  float fVar126;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar127;
  undefined1 auVar124 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar131 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar142;
  float fVar147;
  float fVar150;
  undefined1 auVar144 [16];
  float fVar143;
  float fVar148;
  float fVar151;
  undefined1 auVar146 [16];
  undefined1 local_1c8 [16];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_198 [16];
  float fVar108;
  undefined1 auVar132 [16];
  undefined1 auVar145 [16];
  float fVar149;
  
  uVar34 = param_9 + 3;
  if (-1 < (int)param_9) {
    uVar34 = param_9;
  }
  param_8 = param_8 + param_8;
  if ((int)(uVar34 & 0xfffffffc) < 1) {
    uVar15 = 0;
    if ((int)param_9 < 1) {
      return;
    }
  }
  else {
    local_198._4_4_ = param_7;
    local_198._0_4_ = param_7;
    local_198._8_4_ = param_7;
    local_198._12_4_ = param_7;
    uVar15 = 0;
    uVar18 = 0;
    do {
      piVar1 = (int *)(param_3 + uVar18 * 2);
      piVar4 = (int *)(param_3 + 0x10 + uVar18 * 2);
      unaff_R13D = piVar4[2] << 4;
      lVar20 = (longlong)(*piVar1 << 4);
      lVar17 = (longlong)(piVar1[2] * 0x10);
      lVar24 = (longlong)(*piVar4 << 4);
      lVar28 = (longlong)unaff_R13D;
      lVar14 = (longlong)(piVar1[1] << 4);
      lVar29 = (longlong)(piVar1[3] * 0x10);
      lVar31 = (longlong)(piVar4[1] << 4);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar17),
                          0x10);
      auVar73 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar17),0x10);
      lVar27 = (longlong)(piVar4[3] << 4);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar17),0x10);
      auVar139 = insertps(auVar138,*(undefined4 *)(param_1 + lVar24),0x20);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + lVar14)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar24),0x20);
      auVar122 = insertps(auVar138,*(undefined4 *)(param_1 + lVar31),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar24),0x20);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar14)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar123 = insertps(auVar122,*(undefined4 *)(param_1 + lVar27),0x30);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar31),0x20);
      auVar116 = insertps(auVar138,*(undefined4 *)(param_1 + 4 + lVar27),0x30);
      auVar138 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar14)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar140 = insertps(auVar139,*(undefined4 *)(param_1 + lVar28),0x30);
      auVar138 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar31),0x20);
      auVar139 = insertps(auVar73,*(undefined4 *)(param_1 + 4 + lVar28),0x30);
      fVar133 = auVar139._4_4_;
      fVar80 = auVar139._12_4_;
      auVar73 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar28),0x30);
      fVar129 = auVar73._12_4_;
      auVar110 = insertps(auVar138,*(undefined4 *)(param_1 + 8 + lVar27),0x30);
      lVar22 = (longlong)(*piVar1 * 3);
      lVar25 = (longlong)(piVar1[2] * 3);
      lVar21 = (longlong)(*piVar4 * 3);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + lVar25 * 4),0x10);
      auVar138 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar25 * 4),0x10);
      auVar122 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar25 * 4),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar74 = insertps(auVar138,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar83 = insertps(auVar122,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar22 = (longlong)(piVar1[1] * 3);
      lVar21 = (longlong)(piVar1[3] * 3);
      lVar25 = (longlong)(piVar4[2] * 3);
      auVar89 = insertps(ZEXT416(*(uint *)(param_2 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + lVar21 * 4),0x10);
      auVar138 = insertps(auVar67,*(undefined4 *)(param_2 + lVar25 * 4),0x30);
      auVar122 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar22 * 4)),
                          *(undefined4 *)(param_2 + 4 + lVar21 * 4),0x10);
      auVar75 = insertps(auVar74,*(undefined4 *)(param_2 + 4 + lVar25 * 4),0x30);
      fVar130 = auVar140._0_4_;
      fVar134 = auVar140._4_4_;
      fVar136 = auVar140._12_4_;
      fVar121 = auVar123._0_4_;
      auVar144._0_4_ = fVar130 - fVar121;
      fVar125 = auVar123._4_4_;
      auVar144._4_4_ = fVar134 - fVar125;
      fVar126 = auVar123._8_4_;
      fVar149 = auVar140._8_4_;
      auVar144._8_4_ = fVar149 - fVar126;
      fVar127 = auVar123._12_4_;
      auVar144._12_4_ = fVar136 - fVar127;
      fVar115 = auVar116._0_4_;
      fVar128 = auVar139._0_4_;
      auVar146._0_4_ = fVar128 - fVar115;
      fVar118 = auVar116._4_4_;
      auVar146._4_4_ = fVar133 - fVar118;
      fVar119 = auVar116._8_4_;
      fVar135 = auVar139._8_4_;
      auVar146._8_4_ = fVar135 - fVar119;
      fVar120 = auVar116._12_4_;
      auVar146._12_4_ = fVar80 - fVar120;
      fVar97 = auVar73._8_4_;
      fVar143 = auVar73._0_4_;
      fVar66 = auVar110._0_4_;
      auVar123._0_4_ = fVar143 - fVar66;
      fVar106 = auVar73._4_4_;
      fVar108 = auVar110._4_4_;
      auVar123._4_4_ = fVar106 - fVar108;
      fVar113 = auVar110._8_4_;
      auVar123._8_4_ = fVar97 - fVar113;
      fVar114 = auVar110._12_4_;
      auVar123._12_4_ = fVar129 - fVar114;
      auVar139._0_4_ = auVar144._0_4_ * auVar144._0_4_;
      auVar139._4_4_ = auVar144._4_4_ * auVar144._4_4_;
      auVar139._8_4_ = auVar144._8_4_ * auVar144._8_4_;
      auVar139._12_4_ = auVar144._12_4_ * auVar144._12_4_;
      auVar116._0_4_ =
           auVar123._0_4_ * auVar123._0_4_ + auVar146._0_4_ * auVar146._0_4_ + auVar139._0_4_;
      auVar116._4_4_ =
           auVar123._4_4_ * auVar123._4_4_ + auVar146._4_4_ * auVar146._4_4_ + auVar139._4_4_;
      auVar116._8_4_ =
           auVar123._8_4_ * auVar123._8_4_ + auVar146._8_4_ * auVar146._8_4_ + auVar139._8_4_;
      auVar116._12_4_ =
           auVar123._12_4_ * auVar123._12_4_ + auVar146._12_4_ * auVar146._12_4_ + auVar139._12_4_;
      auVar67 = sqrtps(auVar139,auVar116);
      auVar110 = divps(auVar144,auVar67);
      auVar139 = divps(auVar146,auVar67);
      auVar74 = divps(auVar123,auVar67);
      uVar33 = -(uint)(auVar116._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar116._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar116._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar116._12_4_ < _UNK_1506895ec);
      auVar67._4_4_ = uVar35;
      auVar67._0_4_ = uVar33;
      auVar67._8_4_ = uVar36;
      auVar67._12_4_ = uVar38;
      auVar73._4_4_ = _UNK_15076b1f4;
      auVar73._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar73._8_4_ = _UNK_15076b1f8;
      auVar73._12_4_ = _UNK_15076b1fc;
      auVar123 = blendvps(auVar110,auVar73,auVar67);
      fVar72 = (float)(~uVar33 & auVar139._0_4_);
      fVar78 = (float)(~uVar35 & auVar139._4_4_);
      fVar79 = (float)(~uVar36 & auVar139._8_4_);
      fVar81 = (float)(~uVar38 & auVar139._12_4_);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar22 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar21 * 4),0x10);
      lVar21 = (longlong)(piVar4[1] * 3);
      auVar139 = insertps(auVar89,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar122 = insertps(auVar122,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      auVar89 = insertps(auVar83,*(undefined4 *)(param_2 + 8 + lVar25 * 4),0x30);
      lVar21 = (longlong)(piVar4[3] * 3);
      auVar116 = insertps(auVar139,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar83 = insertps(auVar122,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      fVar91 = (float)(~uVar33 & auVar74._0_4_);
      fVar95 = (float)(~uVar35 & auVar74._4_4_);
      fVar98 = (float)(~uVar36 & auVar74._8_4_);
      fVar100 = (float)(~uVar38 & auVar74._12_4_);
      uVar33 = *(uint *)(param_1 + 0xc + lVar20);
      auVar139 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      uVar16 = uVar18 & 0xffffffff;
      auVar67 = *(undefined1 (*) [16])(param_4 + uVar16);
      auVar74 = divps(auVar73,auVar67);
      auVar122._4_4_ = -(uint)(auVar67._4_4_ < _UNK_1506895d4);
      auVar122._0_4_ = -(uint)(auVar67._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar122._8_4_ = -(uint)(auVar67._8_4_ < _UNK_1506895d8);
      auVar122._12_4_ = -(uint)(auVar67._12_4_ < _UNK_1506895dc);
      auVar73 = blendvps(auVar74,auVar73,auVar122);
      uVar35 = *(uint *)(param_1 + 0xc + lVar17);
      auVar67 = insertps(ZEXT416(uVar33),ZEXT416(uVar35),0x10);
      uVar36 = *(uint *)(param_1 + 0xc + lVar24);
      auVar67 = insertps(auVar67,ZEXT416(uVar36),0x20);
      uVar38 = *(uint *)(param_1 + 0xc + lVar28);
      auVar122 = insertps(auVar67,ZEXT416(uVar38),0x30);
      uVar37 = *(uint *)(param_1 + 0xc + lVar14);
      uVar39 = *(uint *)(param_1 + 0xc + lVar29);
      auVar67 = insertps(ZEXT416(uVar37),ZEXT416(uVar39),0x10);
      uVar5 = *(uint *)(param_1 + 0xc + lVar31);
      auVar67 = insertps(auVar67,ZEXT416(uVar5),0x20);
      uVar6 = *(uint *)(param_1 + 0xc + lVar27);
      auVar67 = insertps(auVar67,ZEXT416(uVar6),0x30);
      fVar148 = auVar122._0_4_;
      fVar107 = auVar122._4_4_;
      fVar109 = auVar122._12_4_;
      fVar40 = auVar67._0_4_;
      auVar74._0_4_ = fVar148 + fVar40;
      fVar48 = auVar67._4_4_;
      auVar74._4_4_ = fVar107 + fVar48;
      fVar49 = auVar67._8_4_;
      fVar86 = auVar122._8_4_;
      auVar74._8_4_ = fVar86 + fVar49;
      fVar50 = auVar67._12_4_;
      auVar74._12_4_ = fVar109 + fVar50;
      auVar67 = divps(local_198,auVar74);
      auVar67 = sqrtps(auVar67,auVar67);
      fVar51 = auVar67._0_4_ * param_8 * auVar73._0_4_ * param_6;
      fVar57 = auVar67._4_4_ * param_8 * auVar73._4_4_ * param_6;
      fVar58 = auVar67._8_4_ * param_8 * auVar73._8_4_ * param_6;
      fVar59 = auVar67._12_4_ * param_8 * auVar73._12_4_ * param_6;
      auVar110._0_4_ = auVar74._0_4_ * fVar51 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar110._4_4_ = auVar74._4_4_ * fVar57 + _UNK_15076b1f4;
      auVar110._8_4_ = auVar74._8_4_ * fVar58 + _UNK_15076b1f8;
      auVar110._12_4_ = auVar74._12_4_ * fVar59 + _UNK_15076b1fc;
      pfVar2 = (float *)(param_5 + uVar16);
      fVar60 = *pfVar2;
      fVar63 = pfVar2[1];
      fVar64 = pfVar2[2];
      fVar65 = pfVar2[3];
      auVar131._0_4_ =
           ((((fVar143 - auVar89._0_4_) - fVar66) + auVar139._0_4_) * fVar91 +
           (((fVar128 - auVar75._0_4_) - fVar115) + auVar83._0_4_) * fVar72 +
           (((fVar130 - auVar138._0_4_) - fVar121) + auVar116._0_4_) * auVar123._0_4_) *
           (float)((uint)fVar51 ^ __xmm_80000000800000008000000080000000) - fVar60;
      auVar131._4_4_ =
           ((((fVar106 - auVar89._4_4_) - fVar108) + auVar139._4_4_) * fVar95 +
           (((fVar133 - auVar75._4_4_) - fVar118) + auVar83._4_4_) * fVar78 +
           (((fVar134 - auVar138._4_4_) - fVar125) + auVar116._4_4_) * auVar123._4_4_) *
           (float)((uint)fVar57 ^ _UNK_150651574) - fVar63;
      auVar131._8_4_ =
           ((((fVar97 - auVar89._8_4_) - fVar113) + auVar139._8_4_) * fVar98 +
           (((fVar135 - auVar75._8_4_) - fVar119) + auVar83._8_4_) * fVar79 +
           (((fVar149 - auVar138._8_4_) - fVar126) + auVar116._8_4_) * auVar123._8_4_) *
           (float)((uint)fVar58 ^ _UNK_150651578) - fVar64;
      auVar131._12_4_ =
           ((((fVar129 - auVar89._12_4_) - fVar114) + auVar139._12_4_) * fVar100 +
           (((fVar80 - auVar75._12_4_) - fVar120) + auVar83._12_4_) * fVar81 +
           (((fVar136 - auVar138._12_4_) - fVar127) + auVar116._12_4_) * auVar123._12_4_) *
           (float)((uint)fVar59 ^ _UNK_15065157c) - fVar65;
      auVar67 = divps(auVar131,auVar110);
      fVar51 = auVar67._0_4_;
      fVar142 = auVar123._0_4_ * fVar51;
      fVar57 = auVar67._4_4_;
      fVar147 = auVar123._4_4_ * fVar57;
      fVar58 = auVar67._8_4_;
      fVar150 = auVar123._8_4_ * fVar58;
      fVar59 = auVar67._12_4_;
      fVar151 = auVar123._12_4_ * fVar59;
      auVar138._0_4_ = fVar148 * fVar142 + fVar130;
      auVar138._4_4_ = fVar107 * fVar147 + fVar134;
      auVar138._8_4_ = fVar86 * fVar150 + fVar149;
      auVar138._12_4_ = fVar109 * fVar151 + fVar136;
      fVar72 = fVar72 * fVar51;
      fVar78 = fVar78 * fVar57;
      fVar79 = fVar79 * fVar58;
      fVar81 = fVar81 * fVar59;
      *(float *)(param_1 + lVar20) = auVar138._0_4_;
      uVar7 = extractps(auVar138,1);
      *(undefined8 *)(param_1 + lVar17) = uVar7;
      auVar83._0_4_ = fVar148 * fVar72 + fVar128;
      auVar83._4_4_ = fVar107 * fVar78 + fVar133;
      auVar83._8_4_ = fVar86 * fVar79 + fVar135;
      auVar83._12_4_ = fVar109 * fVar81 + fVar80;
      uVar7 = extractps(auVar138,2);
      *(undefined8 *)(param_1 + lVar24) = uVar7;
      uVar7 = extractps(auVar138,3);
      *(undefined8 *)(param_1 + lVar28) = uVar7;
      fVar91 = fVar91 * fVar51;
      fVar95 = fVar95 * fVar57;
      fVar98 = fVar98 * fVar58;
      fVar100 = fVar100 * fVar59;
      *(float *)(param_1 + 4 + lVar20) = auVar83._0_4_;
      uVar7 = extractps(auVar83,1);
      *(undefined8 *)(param_1 + 4 + lVar17) = uVar7;
      uVar7 = extractps(auVar83,2);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar7;
      auVar75._0_4_ = fVar148 * fVar91 + fVar143;
      auVar75._4_4_ = fVar107 * fVar95 + fVar106;
      auVar75._8_4_ = fVar86 * fVar98 + fVar97;
      auVar75._12_4_ = fVar109 * fVar100 + fVar129;
      uVar7 = extractps(auVar83,3);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar7;
      *(float *)(param_1 + 8 + lVar20) = auVar75._0_4_;
      uVar7 = extractps(auVar75,1);
      *(undefined8 *)(param_1 + 8 + lVar17) = uVar7;
      uVar7 = extractps(auVar75,2);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar7;
      uVar7 = extractps(auVar75,3);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar7;
      *(uint *)(param_1 + 0xc + lVar20) = uVar33;
      *(uint *)(param_1 + 0xc + lVar17) = uVar35;
      *(uint *)(param_1 + 0xc + lVar24) = uVar36;
      auVar137._0_4_ = fVar121 - fVar142 * fVar40;
      auVar137._4_4_ = fVar125 - fVar147 * fVar48;
      auVar137._8_4_ = fVar126 - fVar150 * fVar49;
      auVar137._12_4_ = fVar127 - fVar151 * fVar50;
      *(uint *)(param_1 + 0xc + lVar28) = uVar38;
      *(float *)(param_1 + lVar14) = auVar137._0_4_;
      uVar7 = extractps(auVar137,1);
      *(undefined8 *)(param_1 + lVar29) = uVar7;
      uVar7 = extractps(auVar137,2);
      *(undefined8 *)(param_1 + lVar31) = uVar7;
      auVar140._0_4_ = fVar115 - fVar72 * fVar40;
      auVar140._4_4_ = fVar118 - fVar78 * fVar48;
      auVar140._8_4_ = fVar119 - fVar79 * fVar49;
      auVar140._12_4_ = fVar120 - fVar81 * fVar50;
      uVar7 = extractps(auVar137,3);
      *(undefined8 *)(param_1 + lVar27) = uVar7;
      *(float *)(param_1 + 4 + lVar14) = auVar140._0_4_;
      uVar7 = extractps(auVar140,1);
      *(undefined8 *)(param_1 + 4 + lVar29) = uVar7;
      uVar7 = extractps(auVar140,2);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar7;
      auVar89._0_4_ = fVar66 - fVar91 * fVar40;
      auVar89._4_4_ = fVar108 - fVar95 * fVar48;
      auVar89._8_4_ = fVar113 - fVar98 * fVar49;
      auVar89._12_4_ = fVar114 - fVar100 * fVar50;
      uVar7 = extractps(auVar140,3);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar7;
      *(float *)(param_1 + 8 + lVar14) = auVar89._0_4_;
      uVar7 = extractps(auVar89,1);
      *(undefined8 *)(param_1 + 8 + lVar29) = uVar7;
      uVar7 = extractps(auVar89,2);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar7;
      uVar7 = extractps(auVar89,3);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar7;
      pfVar2 = (float *)(param_5 + uVar16);
      *pfVar2 = fVar51 + fVar60;
      pfVar2[1] = fVar57 + fVar63;
      pfVar2[2] = fVar58 + fVar64;
      pfVar2[3] = fVar59 + fVar65;
      *(uint *)(param_1 + 0xc + lVar14) = uVar37;
      *(uint *)(param_1 + 0xc + lVar29) = uVar39;
      *(uint *)(param_1 + 0xc + lVar31) = uVar5;
      *(uint *)(param_1 + 0xc + lVar27) = uVar6;
      uVar18 = uVar18 + 0x10;
      uVar33 = (int)uVar15 + 4;
      uVar15 = (ulonglong)uVar33;
    } while ((int)uVar33 < (int)(uVar34 & 0xfffffffc));
    if ((int)param_9 <= (int)uVar33) {
      return;
    }
  }
  uVar34 = (uint)uVar15;
  auVar102._0_4_ =
       -(uint)((int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_9);
  auVar102._4_4_ =
       -(uint)((int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_9);
  auVar102._8_4_ = -(uint)((int)(uVar34 | _UNK_150631e08) < (int)param_9);
  auVar102._12_4_ = -(uint)((int)(uVar34 | _UNK_150631e0c) < (int)param_9);
  piVar1 = (int *)(param_3 + uVar15 * 8);
  uVar33 = movmskps(unaff_R13D,auVar102);
  bVar26 = (char)((char)uVar33 << 4) >> 4;
  if (uVar33 == 0xf) {
    iVar92 = *piVar1;
    iVar82 = piVar1[1];
    iVar96 = piVar1[2];
    iVar85 = piVar1[3];
    iVar99 = piVar1[4];
    iVar87 = piVar1[5];
    iVar101 = piVar1[6];
    iVar88 = piVar1[7];
  }
  else {
    auVar41._0_4_ = ___xmm_00000018000000100000000800000000 & auVar102._0_4_;
    auVar41._4_4_ = _UNK_150b51a04 & auVar102._4_4_;
    auVar41._8_4_ = _UNK_150b51a08 & auVar102._8_4_;
    auVar41._12_4_ = _UNK_150b51a0c & auVar102._12_4_;
    lVar14 = extractps(auVar41,1);
    lVar17 = extractps(auVar41,2);
    lVar20 = extractps(auVar41,3);
    iVar92 = *piVar1;
    iVar96 = *(int *)((longlong)piVar1 + lVar14);
    iVar99 = *(int *)((longlong)piVar1 + lVar17);
    iVar101 = *(int *)((longlong)piVar1 + lVar20);
    auVar67 = ___xmm_0000001c000000140000000c00000004 & auVar102;
    iVar82 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._0_4_);
    iVar85 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._4_4_);
    iVar87 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._8_4_);
    iVar88 = *(int *)((longlong)piVar1 + (ulonglong)auVar67._12_4_);
  }
  auVar76._0_4_ = iVar92 << 4;
  auVar76._4_4_ = iVar96 << 4;
  auVar76._8_4_ = iVar99 << 4;
  auVar76._12_4_ = iVar101 << 4;
  auVar73 = auVar102 & auVar76;
  lVar14 = param_1 + auVar73._0_4_;
  lVar17 = param_1 + auVar73._4_4_;
  lVar20 = param_1 + auVar73._8_4_;
  lVar21 = param_1 + auVar73._12_4_;
  auVar138 = ___xmm_00000004000000040000000400000004 & auVar102;
  uVar15 = (ulonglong)auVar138._0_4_;
  uVar18 = (ulonglong)auVar138._4_4_;
  local_1c8 = ___xmm_00000008000000080000000800000008 & auVar102;
  uVar16 = (ulonglong)local_1c8._0_4_;
  auVar68._0_4_ = iVar82 << 4;
  auVar68._4_4_ = iVar85 << 4;
  auVar68._8_4_ = iVar87 << 4;
  auVar68._12_4_ = iVar88 << 4;
  auVar122 = auVar102 & auVar68;
  lVar28 = (longlong)auVar122._0_4_;
  auVar67 = ZEXT416(*(uint *)(param_1 + auVar73._0_4_));
  lVar22 = param_1 + lVar28;
  lVar24 = param_1 + auVar122._4_4_;
  lVar25 = param_1 + auVar122._8_4_;
  lVar27 = param_1 + auVar122._12_4_;
  bVar32 = (bVar26 & 2) != 0;
  if (bVar32) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._4_4_),0x10);
  }
  uVar19 = (ulonglong)local_1c8._4_4_;
  auVar139 = ZEXT416(*(uint *)(uVar15 + lVar14));
  if (bVar32) {
    auVar139 = insertps(auVar139,*(undefined4 *)(uVar18 + lVar17),0x10);
  }
  auVar74 = ZEXT416(*(uint *)(uVar16 + lVar14));
  if (bVar32) {
    auVar74 = insertps(auVar74,*(undefined4 *)(uVar19 + lVar17),0x10);
    auVar75 = insertps(ZEXT416(*(uint *)(param_1 + lVar28)),
                       *(undefined4 *)(param_1 + auVar122._4_4_),0x10);
    auVar83 = insertps(ZEXT416(*(uint *)(uVar15 + lVar22)),*(undefined4 *)(uVar18 + lVar24),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar16 + lVar22)),*(undefined4 *)(uVar19 + lVar24),0x10);
  }
  else {
    auVar75 = ZEXT416(*(uint *)(param_1 + lVar28));
    auVar83 = ZEXT416(*(uint *)(uVar15 + lVar22));
    auVar89 = ZEXT416(*(uint *)(uVar16 + lVar22));
  }
  uVar30 = (ulonglong)auVar138._8_4_;
  uVar36 = auVar138._12_4_;
  uVar35 = local_1c8._8_4_;
  uVar38 = local_1c8._12_4_;
  if ((bVar26 & 4) != 0) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._8_4_),0x20);
    auVar139 = insertps(auVar139,*(undefined4 *)(uVar30 + lVar20),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)uVar35 + lVar20),0x20);
    auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + auVar122._8_4_),0x20);
    auVar83 = insertps(auVar83,*(undefined4 *)(uVar30 + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar35 + lVar25),0x20);
  }
  if ((char)bVar26 < '\0') {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar73._12_4_),0x30);
    auVar139 = insertps(auVar139,*(undefined4 *)((ulonglong)uVar36 + lVar21),0x30);
    auVar74 = insertps(auVar74,*(undefined4 *)((ulonglong)uVar38 + lVar21),0x30);
    auVar75 = insertps(auVar75,*(undefined4 *)(param_1 + auVar122._12_4_),0x30);
    auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar36 + lVar27),0x30);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar38 + lVar27),0x30);
  }
  lVar28 = (longlong)(int)(uVar34 << 2);
  pfVar2 = (float *)(param_5 + lVar28);
  if ((~bVar26 & 9) == 0) {
    local_1c8 = *(undefined1 (*) [16])(param_4 + lVar28);
    auVar73 = *(undefined1 (*) [16])(param_5 + lVar28);
  }
  else {
    puVar23 = (uint *)(param_4 + lVar28);
    if ((uVar33 & 1) != 0) {
      local_1c8 = ZEXT416(*puVar23);
    }
    if ((uVar33 & 2) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[1],0x10);
    }
    if ((uVar33 & 4) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[2],0x20);
    }
    if ((uVar33 & 8) != 0) {
      local_1c8 = insertps(local_1c8,puVar23[3],0x30);
    }
    auVar73 = local_1c8;
    if ((uVar33 & 1) != 0) {
      auVar73 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar33 & 2) != 0) {
      auVar73 = insertps(auVar73,pfVar2[1],0x10);
    }
    if ((uVar33 & 4) != 0) {
      auVar73 = insertps(auVar73,pfVar2[2],0x20);
    }
    if ((uVar33 & 8) != 0) {
      auVar73 = insertps(auVar73,pfVar2[3],0x30);
    }
  }
  fVar51 = auVar75._0_4_;
  fVar72 = auVar67._0_4_;
  fVar129 = fVar72 - fVar51;
  fVar57 = auVar75._4_4_;
  fVar78 = auVar67._4_4_;
  fVar133 = fVar78 - fVar57;
  auVar132._0_8_ = CONCAT44(fVar133,fVar129);
  fVar58 = auVar75._8_4_;
  fVar79 = auVar67._8_4_;
  fVar80 = auVar67._12_4_;
  auVar132._8_4_ = fVar79 - fVar58;
  fVar59 = auVar75._12_4_;
  auVar132._12_4_ = fVar80 - fVar59;
  fVar40 = auVar83._0_4_;
  fVar100 = auVar139._0_4_;
  fVar143 = fVar100 - fVar40;
  fVar48 = auVar83._4_4_;
  fVar106 = auVar139._4_4_;
  fVar148 = fVar106 - fVar48;
  auVar145._0_8_ = CONCAT44(fVar148,fVar143);
  fVar49 = auVar83._8_4_;
  fVar107 = auVar139._8_4_;
  fVar109 = auVar139._12_4_;
  auVar145._8_4_ = fVar107 - fVar49;
  fVar50 = auVar83._12_4_;
  auVar145._12_4_ = fVar109 - fVar50;
  fVar60 = auVar89._0_4_;
  fVar86 = auVar74._0_4_;
  fVar81 = fVar86 - fVar60;
  fVar63 = auVar89._4_4_;
  fVar95 = auVar74._4_4_;
  fVar91 = fVar95 - fVar63;
  auVar141._0_8_ = CONCAT44(fVar91,fVar81);
  fVar64 = auVar89._8_4_;
  fVar97 = auVar74._8_4_;
  fVar98 = auVar74._12_4_;
  auVar141._8_4_ = fVar97 - fVar64;
  fVar65 = auVar89._12_4_;
  auVar141._12_4_ = fVar98 - fVar65;
  auVar42._0_4_ = fVar81 * fVar81 + fVar143 * fVar143 + fVar129 * fVar129;
  auVar42._4_4_ = fVar91 * fVar91 + fVar148 * fVar148 + fVar133 * fVar133;
  auVar42._8_4_ =
       auVar141._8_4_ * auVar141._8_4_ +
       auVar145._8_4_ * auVar145._8_4_ + auVar132._8_4_ * auVar132._8_4_;
  auVar42._12_4_ =
       auVar141._12_4_ * auVar141._12_4_ +
       auVar145._12_4_ * auVar145._12_4_ + auVar132._12_4_ * auVar132._12_4_;
  auVar67 = sqrtps(auVar68,auVar42);
  uVar34 = -(uint)(auVar42._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar33 = -(uint)(auVar42._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar42._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar42._12_4_ < _UNK_1506895ec);
  auVar43._4_4_ = uVar33;
  auVar43._0_4_ = uVar34;
  auVar43._8_4_ = uVar37;
  auVar43._12_4_ = uVar39;
  auVar52._8_4_ = auVar145._8_4_;
  auVar52._0_8_ = auVar145._0_8_;
  auVar52._12_4_ = auVar145._12_4_;
  auVar138 = divps(auVar52,auVar67);
  auVar61._8_4_ = auVar141._8_4_;
  auVar61._0_8_ = auVar141._0_8_;
  auVar61._12_4_ = auVar141._12_4_;
  auVar122 = divps(auVar61,auVar67);
  auVar111._8_4_ = auVar132._8_4_;
  auVar111._0_8_ = auVar132._0_8_;
  auVar111._12_4_ = auVar132._12_4_;
  auVar67 = divps(auVar111,auVar67);
  auVar8._4_4_ = _UNK_15076b1f4;
  auVar8._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar8._8_4_ = _UNK_15076b1f8;
  auVar8._12_4_ = _UNK_15076b1fc;
  auVar67 = blendvps(auVar67,auVar8,auVar43);
  auVar69._8_4_ = auVar132._8_4_;
  auVar69._0_8_ = auVar132._0_8_;
  auVar69._12_4_ = auVar132._12_4_;
  bVar32 = (bVar26 & 1) != 0;
  if (bVar32) {
    auVar69 = auVar67;
  }
  auVar117._0_8_ = CONCAT44(~uVar33 & auVar138._4_4_,~uVar34 & auVar138._0_4_);
  auVar117._8_4_ = ~uVar37 & auVar138._8_4_;
  auVar117._12_4_ = ~uVar39 & auVar138._12_4_;
  auVar44._0_8_ = CONCAT44(~uVar33 & auVar122._4_4_,~uVar34 & auVar122._0_4_);
  auVar44._8_4_ = ~uVar37 & auVar122._8_4_;
  auVar44._12_4_ = ~uVar39 & auVar122._12_4_;
  auVar53._8_4_ = auVar145._8_4_;
  auVar53._0_8_ = auVar145._0_8_;
  auVar53._12_4_ = auVar145._12_4_;
  auVar62._8_4_ = auVar141._8_4_;
  auVar62._0_8_ = auVar141._0_8_;
  auVar62._12_4_ = auVar141._12_4_;
  if (bVar32) {
    auVar53._8_4_ = auVar117._8_4_;
    auVar53._0_8_ = auVar117._0_8_;
    auVar53._12_4_ = auVar117._12_4_;
    auVar62._8_4_ = auVar44._8_4_;
    auVar62._0_8_ = auVar44._0_8_;
    auVar62._12_4_ = auVar44._12_4_;
  }
  auVar93._4_4_ = iVar96 * 3;
  auVar93._0_4_ = iVar92 * 3;
  auVar93._8_4_ = iVar99 * 3;
  auVar93._12_4_ = iVar101 * 3;
  auVar84._4_4_ = iVar85 * 3;
  auVar84._0_4_ = iVar82 * 3;
  auVar84._8_4_ = iVar87 * 3;
  auVar84._12_4_ = iVar88 * 3;
  auVar122 = blendps(auVar132,auVar69,1);
  bVar32 = (bVar26 & 2) != 0;
  auVar138 = auVar122;
  if (bVar32) {
    auVar138 = auVar67;
  }
  auVar93 = auVar93 & auVar102;
  auVar84 = auVar84 & auVar102;
  auVar139 = blendps(auVar145,auVar53,1);
  auVar54 = auVar139;
  if (bVar32) {
    auVar54._8_4_ = auVar117._8_4_;
    auVar54._0_8_ = auVar117._0_8_;
    auVar54._12_4_ = auVar117._12_4_;
  }
  auVar102 = auVar102 & ___xmm_0000000c0000000c0000000c0000000c;
  auVar74 = blendps(auVar141,auVar62,1);
  auVar70 = auVar74;
  if (bVar32) {
    auVar70._8_4_ = auVar44._8_4_;
    auVar70._0_8_ = auVar44._0_8_;
    auVar70._12_4_ = auVar44._12_4_;
  }
  auVar122 = blendps(auVar122,auVar138,2);
  bVar32 = (bVar26 & 4) != 0;
  auVar138 = auVar122;
  if (bVar32) {
    auVar138 = auVar67;
  }
  lVar28 = param_2 + (longlong)auVar93._0_4_ * 4;
  lVar29 = param_2 + (longlong)auVar84._0_4_ * 4;
  auVar139 = blendps(auVar139,auVar54,2);
  auVar55 = auVar139;
  if (bVar32) {
    auVar55._8_4_ = auVar117._8_4_;
    auVar55._0_8_ = auVar117._0_8_;
    auVar55._12_4_ = auVar117._12_4_;
  }
  lVar31 = param_2 + (longlong)auVar93._4_4_ * 4;
  lVar3 = param_2 + (longlong)auVar84._4_4_ * 4;
  auVar74 = blendps(auVar74,auVar70,2);
  auVar71 = auVar74;
  if (bVar32) {
    auVar71._8_4_ = auVar44._8_4_;
    auVar71._0_8_ = auVar44._0_8_;
    auVar71._12_4_ = auVar44._12_4_;
  }
  auVar75 = insertps(ZEXT416(*(uint *)((ulonglong)auVar102._0_4_ + lVar14)),
                     *(undefined4 *)((ulonglong)auVar102._4_4_ + lVar17),0x10);
  auVar137 = insertps(ZEXT416(*(uint *)((ulonglong)auVar102._0_4_ + lVar22)),
                      *(undefined4 *)((ulonglong)auVar102._4_4_ + lVar24),0x10);
  auVar116 = insertps(ZEXT416(*(uint *)(uVar15 + lVar28)),*(undefined4 *)(uVar18 + lVar31),0x10);
  auVar89 = insertps(ZEXT416(*(uint *)(uVar16 + lVar28)),*(undefined4 *)(uVar19 + lVar31),0x10);
  auVar123 = insertps(ZEXT416(*(uint *)(uVar15 + lVar29)),*(undefined4 *)(uVar18 + lVar3),0x10);
  auVar110 = insertps(ZEXT416(*(uint *)(uVar16 + lVar29)),*(undefined4 *)(uVar19 + lVar3),0x10);
  auVar83 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar93._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar93._4_4_ * 4),0x10);
  lVar14 = param_2 + (longlong)auVar93._8_4_ * 4;
  auVar140 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar84._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar84._4_4_ * 4),0x10);
  lVar17 = param_2 + (longlong)auVar84._8_4_ * 4;
  auVar138 = blendps(auVar122,auVar138,4);
  bVar32 = -1 < (char)bVar26;
  if (bVar32) {
    auVar67 = auVar138;
  }
  auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar102._8_4_ + lVar20),0x20);
  auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)auVar102._8_4_ + lVar25),0x20);
  lVar20 = param_2 + (longlong)auVar93._12_4_ * 4;
  auVar122 = insertps(auVar83,*(undefined4 *)(param_2 + (longlong)auVar93._8_4_ * 4),0x20);
  auVar116 = insertps(auVar116,*(undefined4 *)(uVar30 + lVar14),0x20);
  auVar83 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar35 + lVar14),0x20);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_2 + (longlong)auVar84._8_4_ * 4),0x20);
  auVar123 = insertps(auVar123,*(undefined4 *)(uVar30 + lVar17),0x20);
  lVar14 = param_2 + (longlong)auVar84._12_4_ * 4;
  auVar89 = insertps(auVar110,*(undefined4 *)((ulonglong)uVar35 + lVar17),0x20);
  auVar139 = blendps(auVar139,auVar55,4);
  if (bVar32) {
    auVar117 = auVar139;
  }
  auVar75 = insertps(auVar75,*(undefined4 *)((ulonglong)auVar102._12_4_ + lVar21),0x30);
  auVar137 = insertps(auVar137,*(undefined4 *)((ulonglong)auVar102._12_4_ + lVar27),0x30);
  auVar122 = insertps(auVar122,*(undefined4 *)(param_2 + (longlong)auVar93._12_4_ * 4),0x30);
  auVar110 = insertps(auVar116,*(undefined4 *)((ulonglong)uVar36 + lVar20),0x30);
  auVar83 = insertps(auVar83,*(undefined4 *)((ulonglong)uVar38 + lVar20),0x30);
  auVar140 = insertps(auVar140,*(undefined4 *)(param_2 + (longlong)auVar84._12_4_ * 4),0x30);
  auVar116 = insertps(auVar123,*(undefined4 *)((ulonglong)uVar36 + lVar14),0x30);
  auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)uVar38 + lVar14),0x30);
  auVar74 = blendps(auVar74,auVar71,4);
  if (bVar32) {
    auVar44 = auVar74;
  }
  auVar123 = blendps(auVar138,auVar67,8);
  auVar146 = blendps(auVar139,auVar117,8);
  auVar9._4_4_ = _UNK_15076b1f4;
  auVar9._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar9._8_4_ = _UNK_15076b1f8;
  auVar9._12_4_ = _UNK_15076b1fc;
  auVar67 = divps(auVar9,local_1c8);
  auVar45._4_4_ = -(uint)(local_1c8._4_4_ < _UNK_1506895d4);
  auVar45._0_4_ = -(uint)(local_1c8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar139 = blendps(auVar74,auVar44,8);
  auVar45._8_4_ = -(uint)(local_1c8._8_4_ < _UNK_1506895d8);
  auVar45._12_4_ = -(uint)(local_1c8._12_4_ < _UNK_1506895dc);
  auVar138 = blendvps(auVar67,auVar9,auVar45);
  fVar143 = auVar75._0_4_;
  fVar148 = auVar75._4_4_;
  fVar66 = auVar75._12_4_;
  fVar113 = auVar137._0_4_;
  auVar103._0_4_ = fVar143 + fVar113;
  fVar114 = auVar137._4_4_;
  auVar103._4_4_ = fVar148 + fVar114;
  fVar108 = auVar75._8_4_;
  fVar115 = auVar137._8_4_;
  auVar103._8_4_ = fVar108 + fVar115;
  fVar118 = auVar137._12_4_;
  auVar103._12_4_ = fVar66 + fVar118;
  auVar46._4_4_ = param_7;
  auVar46._0_4_ = param_7;
  auVar46._8_4_ = param_7;
  auVar46._12_4_ = param_7;
  auVar67 = divps(auVar46,auVar103);
  auVar67 = sqrtps(auVar67,auVar67);
  fVar129 = param_6 * auVar67._0_4_ * param_8 * auVar138._0_4_;
  fVar133 = param_6 * auVar67._4_4_ * param_8 * auVar138._4_4_;
  fVar81 = param_6 * auVar67._8_4_ * param_8 * auVar138._8_4_;
  param_6 = param_6 * auVar67._12_4_ * param_8 * auVar138._12_4_;
  fVar126 = auVar146._0_4_;
  fVar127 = auVar146._4_4_;
  fVar128 = auVar146._8_4_;
  fVar135 = auVar146._12_4_;
  fVar119 = auVar139._0_4_;
  fVar120 = auVar139._4_4_;
  fVar121 = auVar139._8_4_;
  fVar125 = auVar139._12_4_;
  auVar104._0_4_ = auVar103._0_4_ * fVar129 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar104._4_4_ = auVar103._4_4_ * fVar133 + _UNK_15076b1f4;
  auVar104._8_4_ = auVar103._8_4_ * fVar81 + _UNK_15076b1f8;
  auVar104._12_4_ = auVar103._12_4_ * param_6 + _UNK_15076b1fc;
  local_1b8 = auVar73._0_4_;
  fStack_1b4 = auVar73._4_4_;
  fStack_1b0 = auVar73._8_4_;
  fStack_1ac = auVar73._12_4_;
  auVar47._0_4_ =
       ((((fVar86 - auVar83._0_4_) - fVar60) + auVar89._0_4_) * fVar119 +
       (((fVar100 - auVar110._0_4_) - fVar40) + auVar116._0_4_) * fVar126 +
       (((fVar72 - auVar122._0_4_) - fVar51) + auVar140._0_4_) * auVar123._0_4_) *
       (float)((uint)fVar129 ^ __xmm_80000000800000008000000080000000) - local_1b8;
  auVar47._4_4_ =
       ((((fVar95 - auVar83._4_4_) - fVar63) + auVar89._4_4_) * fVar120 +
       (((fVar106 - auVar110._4_4_) - fVar48) + auVar116._4_4_) * fVar127 +
       (((fVar78 - auVar122._4_4_) - fVar57) + auVar140._4_4_) * auVar123._4_4_) *
       (float)((uint)fVar133 ^ _UNK_150651574) - fStack_1b4;
  auVar47._8_4_ =
       ((((fVar97 - auVar83._8_4_) - fVar64) + auVar89._8_4_) * fVar121 +
       (((fVar107 - auVar110._8_4_) - fVar49) + auVar116._8_4_) * fVar128 +
       (((fVar79 - auVar122._8_4_) - fVar58) + auVar140._8_4_) * auVar123._8_4_) *
       (float)((uint)fVar81 ^ _UNK_150651578) - fStack_1b0;
  auVar47._12_4_ =
       ((((fVar98 - auVar83._12_4_) - fVar65) + auVar89._12_4_) * fVar125 +
       (((fVar109 - auVar110._12_4_) - fVar50) + auVar116._12_4_) * fVar135 +
       (((fVar80 - auVar122._12_4_) - fVar59) + auVar140._12_4_) * auVar123._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_1ac;
  auVar67 = divps(auVar47,auVar104);
  fVar129 = auVar67._0_4_;
  auVar56._0_4_ = local_1b8 + fVar129;
  fVar133 = auVar67._4_4_;
  auVar56._4_4_ = fStack_1b4 + fVar133;
  fVar81 = auVar67._8_4_;
  auVar56._8_4_ = fStack_1b0 + fVar81;
  fVar91 = auVar67._12_4_;
  auVar56._12_4_ = fStack_1ac + fVar91;
  if ((bVar26 & 1) != 0) {
    *pfVar2 = auVar56._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar56,1);
    *(undefined8 *)(pfVar2 + 1) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar56,2);
    *(undefined8 *)(pfVar2 + 2) = uVar7;
  }
  fVar130 = auVar123._0_4_ * fVar129;
  fVar134 = auVar123._4_4_ * fVar133;
  fVar136 = auVar123._8_4_ * fVar81;
  fVar142 = auVar123._12_4_ * fVar91;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar56,3);
    *(undefined8 *)(pfVar2 + 3) = uVar7;
  }
  auVar112._0_4_ = fVar72 + fVar143 * fVar130;
  auVar112._4_4_ = fVar78 + fVar148 * fVar134;
  auVar112._8_4_ = fVar79 + fVar108 * fVar136;
  auVar112._12_4_ = fVar80 + fVar66 * fVar142;
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + auVar76._0_4_) = auVar112._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + auVar76._8_4_) = uVar7;
  }
  uVar13 = fVar66 * fVar135 * fVar91;
  uVar12 = fVar108 * fVar128 * fVar81;
  uVar11 = fVar148 * fVar127 * fVar133;
  uVar10 = fVar143 * fVar126 * fVar129;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + auVar76._12_4_) = uVar7;
    auVar105._0_4_ = fVar100 + (float)uVar10;
    auVar105._4_4_ = fVar106 + (float)uVar11;
    auVar105._8_4_ = fVar107 + (float)uVar12;
    auVar105._12_4_ = fVar109 + (float)uVar13;
  }
  else {
    auVar105._0_4_ = fVar100 + (float)uVar10;
    auVar105._4_4_ = fVar106 + (float)uVar11;
    auVar105._8_4_ = fVar107 + (float)uVar12;
    auVar105._12_4_ = fVar109 + (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar76._0_4_) = auVar105._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar105,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar105,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._8_4_) = uVar7;
  }
  uVar13 = fVar66 * fVar125 * fVar91;
  uVar12 = fVar108 * fVar121 * fVar81;
  uVar11 = fVar148 * fVar120 * fVar133;
  uVar10 = fVar143 * fVar119 * fVar129;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar105,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar76._12_4_) = uVar7;
    auVar94._0_4_ = fVar86 + (float)uVar10;
    auVar94._4_4_ = fVar95 + (float)uVar11;
    auVar94._8_4_ = fVar97 + (float)uVar12;
    auVar94._12_4_ = fVar98 + (float)uVar13;
  }
  else {
    auVar94._0_4_ = fVar86 + (float)uVar10;
    auVar94._4_4_ = fVar95 + (float)uVar11;
    auVar94._8_4_ = fVar97 + (float)uVar12;
    auVar94._12_4_ = fVar98 + (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar76._0_4_) = auVar94._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar76._12_4_) = uVar7;
  }
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar76._0_4_) = fVar143;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar75,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar75,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar75,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar76._12_4_) = uVar7;
    auVar77._0_4_ = fVar51 - fVar130 * fVar113;
    auVar77._4_4_ = fVar57 - fVar134 * fVar114;
    auVar77._8_4_ = fVar58 - fVar136 * fVar115;
    auVar77._12_4_ = fVar59 - fVar142 * fVar118;
  }
  else {
    auVar77._0_4_ = fVar51 - fVar130 * fVar113;
    auVar77._4_4_ = fVar57 - fVar134 * fVar114;
    auVar77._8_4_ = fVar58 - fVar136 * fVar115;
    auVar77._12_4_ = fVar59 - fVar142 * fVar118;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + auVar68._0_4_) = auVar77._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + auVar68._8_4_) = uVar7;
  }
  uVar13 = fVar135 * fVar91 * fVar118;
  uVar12 = fVar128 * fVar81 * fVar115;
  uVar11 = fVar127 * fVar133 * fVar114;
  uVar10 = fVar126 * fVar129 * fVar113;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + auVar68._12_4_) = uVar7;
    auVar90._0_4_ = fVar40 - (float)uVar10;
    auVar90._4_4_ = fVar48 - (float)uVar11;
    auVar90._8_4_ = fVar49 - (float)uVar12;
    auVar90._12_4_ = fVar50 - (float)uVar13;
  }
  else {
    auVar90._0_4_ = fVar40 - (float)uVar10;
    auVar90._4_4_ = fVar48 - (float)uVar11;
    auVar90._8_4_ = fVar49 - (float)uVar12;
    auVar90._12_4_ = fVar50 - (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar68._0_4_) = auVar90._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._8_4_) = uVar7;
  }
  uVar13 = fVar125 * fVar91 * fVar118;
  uVar12 = fVar121 * fVar81 * fVar115;
  uVar11 = fVar120 * fVar133 * fVar114;
  uVar10 = fVar119 * fVar129 * fVar113;
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._12_4_) = uVar7;
    auVar124._0_4_ = fVar60 - (float)uVar10;
    auVar124._4_4_ = fVar63 - (float)uVar11;
    auVar124._8_4_ = fVar64 - (float)uVar12;
    auVar124._12_4_ = fVar65 - (float)uVar13;
  }
  else {
    auVar124._0_4_ = fVar60 - (float)uVar10;
    auVar124._4_4_ = fVar63 - (float)uVar11;
    auVar124._8_4_ = fVar64 - (float)uVar12;
    auVar124._12_4_ = fVar65 - (float)uVar13;
  }
  if ((bVar26 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar68._0_4_) = auVar124._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar124,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar124,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar124,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._12_4_) = uVar7;
  }
  if ((bVar26 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar68._0_4_) = fVar113;
  }
  if ((bVar26 & 2) != 0) {
    uVar7 = extractps(auVar137,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._4_4_) = uVar7;
  }
  if ((bVar26 & 4) != 0) {
    uVar7 = extractps(auVar137,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._8_4_) = uVar7;
  }
  if ((char)bVar26 < '\0') {
    uVar7 = extractps(auVar137,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._12_4_) = uVar7;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithWeightMaps_sse4 @ 140947ea0

/* WARNING: Removing unreachable block (ram,0x00014094880a) */
/* WARNING: Removing unreachable block (ram,0x0001409487aa) */
/* WARNING: Removing unreachable block (ram,0x00014094871e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithWeightMaps_sse4
               (longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,float param_5,
               longlong param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  byte bVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  int iVar56;
  float fVar57;
  int iVar63;
  int iVar66;
  undefined1 auVar59 [16];
  float fVar64;
  int iVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar107;
  float fVar108;
  undefined1 auVar105 [16];
  float fVar109;
  undefined1 auVar106 [16];
  float fVar110;
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar120 [16];
  float fVar124;
  float fVar125;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  undefined1 auVar126 [16];
  float fVar132;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float fVar58;
  undefined1 auVar60 [16];
  float fVar65;
  int iVar68;
  int iVar72;
  int iVar74;
  int iVar75;
  
  uVar34 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar34 = param_8;
  }
  if ((int)(uVar34 & 0xfffffffc) < 1) {
    uVar22 = 0;
    uVar24 = param_3;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar24 * 2);
      piVar4 = (int *)(param_2 + 0x10 + uVar24 * 2);
      lVar31 = (longlong)(*piVar1 << 4);
      lVar27 = (longlong)(piVar1[2] * 0x10);
      lVar28 = (longlong)(*piVar4 << 4);
      lVar30 = (longlong)(piVar4[2] << 4);
      lVar21 = (longlong)(piVar1[1] << 4);
      lVar18 = (longlong)(piVar1[3] * 0x10);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar31)),*(undefined4 *)(param_1 + lVar27),
                          0x10);
      auVar95 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar31)),
                         *(undefined4 *)(param_1 + 4 + lVar27),0x10);
      lVar26 = (longlong)(piVar4[1] << 4);
      lVar25 = (longlong)(piVar4[3] << 4);
      auVar79 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar31)),
                         *(undefined4 *)(param_1 + 8 + lVar27),0x10);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + lVar28),0x20);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + lVar21)),*(undefined4 *)(param_1 + lVar18),
                          0x10);
      auVar96 = insertps(auVar95,*(undefined4 *)(param_1 + 4 + lVar28),0x20);
      auVar95 = insertps(auVar100,*(undefined4 *)(param_1 + lVar26),0x20);
      auVar102 = insertps(auVar101,*(undefined4 *)(param_1 + lVar30),0x30);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                          *(undefined4 *)(param_1 + 4 + lVar18),0x10);
      auVar97 = insertps(auVar96,*(undefined4 *)(param_1 + 4 + lVar30),0x30);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar26),0x20);
      auVar86 = insertps(auVar95,*(undefined4 *)(param_1 + lVar25),0x30);
      auVar101 = insertps(auVar100,*(undefined4 *)(param_1 + 4 + lVar25),0x30);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_1 + 8 + lVar28),0x20);
      auVar100 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                          *(undefined4 *)(param_1 + 8 + lVar18),0x10);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_1 + 8 + lVar30),0x30);
      auVar100 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar26),0x20);
      auVar79 = insertps(auVar100,*(undefined4 *)(param_1 + 8 + lVar25),0x30);
      auVar95 = pmovzxbd(auVar79,*(undefined4 *)(param_6 + uVar22));
      auVar100 = insertps(ZEXT416(*(uint *)(param_7 + (ulonglong)(uint)(auVar95._0_4_ << 2))),
                          *(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._4_4_ * 4)),0x10);
      auVar105 = insertps(auVar100,*(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._8_4_ << 2)),
                          0x20);
      auVar112._0_4_ = auVar102._0_4_ - auVar86._0_4_;
      auVar112._4_4_ = auVar102._4_4_ - auVar86._4_4_;
      auVar112._8_4_ = auVar102._8_4_ - auVar86._8_4_;
      auVar112._12_4_ = auVar102._12_4_ - auVar86._12_4_;
      auVar89._0_4_ = auVar97._0_4_ - auVar101._0_4_;
      auVar89._4_4_ = auVar97._4_4_ - auVar101._4_4_;
      auVar89._8_4_ = auVar97._8_4_ - auVar101._8_4_;
      auVar89._12_4_ = auVar97._12_4_ - auVar101._12_4_;
      auVar88._0_4_ = auVar80._0_4_ - auVar79._0_4_;
      auVar88._4_4_ = auVar80._4_4_ - auVar79._4_4_;
      auVar88._8_4_ = auVar80._8_4_ - auVar79._8_4_;
      auVar88._12_4_ = auVar80._12_4_ - auVar79._12_4_;
      auVar69._0_4_ = auVar89._0_4_ * auVar89._0_4_ + auVar112._0_4_ * auVar112._0_4_;
      auVar69._4_4_ = auVar89._4_4_ * auVar89._4_4_ + auVar112._4_4_ * auVar112._4_4_;
      auVar69._8_4_ = auVar89._8_4_ * auVar89._8_4_ + auVar112._8_4_ * auVar112._8_4_;
      auVar69._12_4_ = auVar89._12_4_ * auVar89._12_4_ + auVar112._12_4_ * auVar112._12_4_;
      auVar59._0_4_ = auVar88._0_4_ * auVar88._0_4_ + auVar69._0_4_;
      auVar59._4_4_ = auVar88._4_4_ * auVar88._4_4_ + auVar69._4_4_;
      auVar59._8_4_ = auVar88._8_4_ * auVar88._8_4_ + auVar69._8_4_;
      auVar59._12_4_ = auVar88._12_4_ * auVar88._12_4_ + auVar69._12_4_;
      uVar23 = *(uint *)(param_1 + 0xc + lVar31);
      auVar69 = sqrtps(auVar69,auVar59);
      uVar33 = -(uint)(auVar59._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar35 = -(uint)(auVar59._4_4_ < _UNK_1506895e4);
      uVar36 = -(uint)(auVar59._8_4_ < _UNK_1506895e8);
      uVar38 = -(uint)(auVar59._12_4_ < _UNK_1506895ec);
      auVar96._4_4_ = uVar35;
      auVar96._0_4_ = uVar33;
      auVar113 = divps(auVar112,auVar69);
      auVar59 = divps(auVar89,auVar69);
      auVar89 = divps(auVar88,auVar69);
      auVar96._8_4_ = uVar36;
      auVar96._12_4_ = uVar38;
      uVar37 = *(uint *)(param_1 + 0xc + lVar27);
      auVar100._4_4_ = _UNK_15076b1f4;
      auVar100._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar100._8_4_ = _UNK_15076b1f8;
      auVar100._12_4_ = _UNK_15076b1fc;
      auVar113 = blendvps(auVar113,auVar100,auVar96);
      auVar96 = insertps(auVar105,*(undefined4 *)(param_7 + (ulonglong)(uint)(auVar95._12_4_ << 2)),
                         0x30);
      uVar39 = *(uint *)(param_1 + 0xc + lVar21);
      uVar20 = uVar24 & 0xffffffff;
      pfVar2 = (float *)(param_3 + uVar20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar18);
      auVar95 = insertps(ZEXT416(uVar23),ZEXT416(uVar37),0x10);
      auVar100 = insertps(ZEXT416(uVar39),ZEXT416(uVar5),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar28);
      auVar95 = insertps(auVar95,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar26);
      auVar100 = insertps(auVar100,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar30);
      auVar95 = insertps(auVar95,ZEXT416(uVar8),0x30);
      fVar104 = auVar96._0_4_ * param_5 * param_5;
      fVar107 = auVar96._4_4_ * param_5 * param_5;
      fVar108 = auVar96._8_4_ * param_5 * param_5;
      fVar109 = auVar96._12_4_ * param_5 * param_5;
      uVar9 = *(uint *)(param_1 + 0xc + lVar25);
      auVar100 = insertps(auVar100,ZEXT416(uVar9),0x30);
      fVar53 = auVar95._0_4_;
      fVar54 = auVar95._4_4_;
      fVar55 = auVar95._12_4_;
      fVar40 = auVar100._0_4_;
      fVar48 = auVar100._4_4_;
      fVar49 = auVar100._8_4_;
      fVar73 = auVar95._8_4_;
      fVar50 = auVar100._12_4_;
      auVar105._0_4_ = (fVar53 + fVar40) * fVar104 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar105._4_4_ = (fVar54 + fVar48) * fVar107 + _UNK_15076b1f4;
      auVar105._8_4_ = (fVar73 + fVar49) * fVar108 + _UNK_15076b1f8;
      auVar105._12_4_ = (fVar55 + fVar50) * fVar109 + _UNK_15076b1fc;
      pfVar3 = (float *)(param_4 + uVar20);
      fVar57 = *pfVar3;
      fVar58 = pfVar3[1];
      fVar65 = pfVar3[2];
      fVar64 = pfVar3[3];
      auVar106._0_4_ =
           (float)((uint)fVar104 ^ __xmm_80000000800000008000000080000000) *
           ((float)(~uVar33 & auVar69._0_4_) - *pfVar2) - fVar57;
      auVar106._4_4_ =
           (float)((uint)fVar107 ^ _UNK_150651574) * ((float)(~uVar35 & auVar69._4_4_) - pfVar2[1])
           - fVar58;
      auVar106._8_4_ =
           (float)((uint)fVar108 ^ _UNK_150651578) * ((float)(~uVar36 & auVar69._8_4_) - pfVar2[2])
           - fVar65;
      auVar106._12_4_ =
           (float)((uint)fVar109 ^ _UNK_15065157c) * ((float)(~uVar38 & auVar69._12_4_) - pfVar2[3])
           - fVar64;
      auVar100 = divps(auVar106,auVar105);
      fVar104 = auVar100._0_4_;
      fVar110 = auVar113._0_4_ * fVar104;
      fVar107 = auVar100._4_4_;
      fVar114 = auVar113._4_4_ * fVar107;
      fVar108 = auVar100._8_4_;
      fVar116 = auVar113._8_4_ * fVar108;
      fVar109 = auVar100._12_4_;
      fVar117 = auVar113._12_4_ * fVar109;
      auVar113._0_4_ = fVar53 * fVar110 + auVar102._0_4_;
      auVar113._4_4_ = fVar54 * fVar114 + auVar102._4_4_;
      auVar113._8_4_ = fVar73 * fVar116 + auVar102._8_4_;
      auVar113._12_4_ = fVar55 * fVar117 + auVar102._12_4_;
      fVar124 = (float)(~uVar33 & auVar59._0_4_) * fVar104;
      fVar127 = (float)(~uVar35 & auVar59._4_4_) * fVar107;
      fVar129 = (float)(~uVar36 & auVar59._8_4_) * fVar108;
      fVar131 = (float)(~uVar38 & auVar59._12_4_) * fVar109;
      *(float *)(param_1 + lVar31) = auVar113._0_4_;
      uVar10 = extractps(auVar113,1);
      *(undefined8 *)(param_1 + lVar27) = uVar10;
      unaff_XMM11._0_4_ = fVar53 * fVar124 + auVar97._0_4_;
      unaff_XMM11._4_4_ = fVar54 * fVar127 + auVar97._4_4_;
      unaff_XMM11._8_4_ = fVar73 * fVar129 + auVar97._8_4_;
      unaff_XMM11._12_4_ = fVar55 * fVar131 + auVar97._12_4_;
      uVar10 = extractps(auVar113,2);
      *(undefined8 *)(param_1 + lVar28) = uVar10;
      uVar10 = extractps(auVar113,3);
      *(undefined8 *)(param_1 + lVar30) = uVar10;
      fVar119 = (float)(~uVar33 & auVar89._0_4_) * fVar104;
      fVar121 = (float)(~uVar35 & auVar89._4_4_) * fVar107;
      fVar122 = (float)(~uVar36 & auVar89._8_4_) * fVar108;
      fVar123 = (float)(~uVar38 & auVar89._12_4_) * fVar109;
      *(float *)(param_1 + 4 + lVar31) = unaff_XMM11._0_4_;
      uVar10 = extractps(unaff_XMM11,1);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar10;
      uVar10 = extractps(unaff_XMM11,2);
      *(undefined8 *)(param_1 + 4 + lVar28) = uVar10;
      auVar95._0_4_ = fVar53 * fVar119 + auVar80._0_4_;
      auVar95._4_4_ = fVar54 * fVar121 + auVar80._4_4_;
      auVar95._8_4_ = fVar73 * fVar122 + auVar80._8_4_;
      auVar95._12_4_ = fVar55 * fVar123 + auVar80._12_4_;
      uVar10 = extractps(unaff_XMM11,3);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar10;
      *(float *)(param_1 + 8 + lVar31) = auVar95._0_4_;
      uVar10 = extractps(auVar95,1);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar10;
      uVar10 = extractps(auVar95,2);
      *(undefined8 *)(param_1 + 8 + lVar28) = uVar10;
      uVar10 = extractps(auVar95,3);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar10;
      *(uint *)(param_1 + 0xc + lVar31) = uVar23;
      *(uint *)(param_1 + 0xc + lVar27) = uVar37;
      *(uint *)(param_1 + 0xc + lVar28) = uVar6;
      auVar80._0_4_ = fVar110 * fVar40 + auVar86._0_4_;
      auVar80._4_4_ = fVar114 * fVar48 + auVar86._4_4_;
      auVar80._8_4_ = fVar116 * fVar49 + auVar86._8_4_;
      auVar80._12_4_ = fVar117 * fVar50 + auVar86._12_4_;
      *(uint *)(param_1 + 0xc + lVar30) = uVar8;
      *(float *)(param_1 + lVar21) = auVar80._0_4_;
      uVar10 = extractps(auVar80,1);
      *(undefined8 *)(param_1 + lVar18) = uVar10;
      uVar10 = extractps(auVar80,2);
      *(undefined8 *)(param_1 + lVar26) = uVar10;
      auVar86._0_4_ = fVar124 * fVar40 + auVar101._0_4_;
      auVar86._4_4_ = fVar127 * fVar48 + auVar101._4_4_;
      auVar86._8_4_ = fVar129 * fVar49 + auVar101._8_4_;
      auVar86._12_4_ = fVar131 * fVar50 + auVar101._12_4_;
      uVar10 = extractps(auVar80,3);
      *(undefined8 *)(param_1 + lVar25) = uVar10;
      *(float *)(param_1 + 4 + lVar21) = auVar86._0_4_;
      uVar10 = extractps(auVar86,1);
      *(undefined8 *)(param_1 + 4 + lVar18) = uVar10;
      uVar10 = extractps(auVar86,2);
      *(undefined8 *)(param_1 + 4 + lVar26) = uVar10;
      auVar101._0_4_ = fVar119 * fVar40 + auVar79._0_4_;
      auVar101._4_4_ = fVar121 * fVar48 + auVar79._4_4_;
      auVar101._8_4_ = fVar122 * fVar49 + auVar79._8_4_;
      auVar101._12_4_ = fVar123 * fVar50 + auVar79._12_4_;
      uVar10 = extractps(auVar86,3);
      *(undefined8 *)(param_1 + 4 + lVar25) = uVar10;
      *(float *)(param_1 + 8 + lVar21) = auVar101._0_4_;
      uVar10 = extractps(auVar101,1);
      *(undefined8 *)(param_1 + 8 + lVar18) = uVar10;
      uVar10 = extractps(auVar101,2);
      *(undefined8 *)(param_1 + 8 + lVar26) = uVar10;
      uVar10 = extractps(auVar101,3);
      *(undefined8 *)(param_1 + 8 + lVar25) = uVar10;
      pfVar2 = (float *)(param_4 + uVar20);
      *pfVar2 = fVar104 + fVar57;
      pfVar2[1] = fVar107 + fVar58;
      pfVar2[2] = fVar108 + fVar65;
      pfVar2[3] = fVar109 + fVar64;
      *(uint *)(param_1 + 0xc + lVar21) = uVar39;
      *(uint *)(param_1 + 0xc + lVar18) = uVar5;
      *(uint *)(param_1 + 0xc + lVar26) = uVar7;
      *(uint *)(param_1 + 0xc + lVar25) = uVar9;
      uVar22 = uVar22 + 4;
      uVar24 = uVar24 + 0x10;
    } while ((int)uVar22 < (int)(uVar34 & 0xfffffffc));
    if ((int)param_8 <= (int)uVar22) {
      return;
    }
  }
  uVar34 = (uint)uVar22;
  auVar79._0_4_ =
       -(uint)((int)(uVar34 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8);
  auVar79._4_4_ =
       -(uint)((int)(uVar34 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8);
  auVar79._8_4_ = -(uint)((int)(uVar34 | _UNK_150631e08) < (int)param_8);
  auVar79._12_4_ = -(uint)((int)(uVar34 | _UNK_150631e0c) < (int)param_8);
  uVar22 = uVar22 & 0xffffffff;
  piVar1 = (int *)(param_2 + uVar22 * 8);
  uVar23 = movmskps((int)uVar24,auVar79);
  bVar17 = (char)((char)uVar23 << 4) >> 4;
  if (uVar23 == 0xf) {
    iVar68 = *piVar1;
    iVar56 = piVar1[1];
    iVar72 = piVar1[2];
    iVar63 = piVar1[3];
    iVar74 = piVar1[4];
    iVar66 = piVar1[5];
    iVar75 = piVar1[6];
    iVar67 = piVar1[7];
  }
  else {
    auVar97._0_4_ = ___xmm_00000018000000100000000800000000 & auVar79._0_4_;
    auVar97._4_4_ = _UNK_150b51a04 & auVar79._4_4_;
    auVar97._8_4_ = _UNK_150b51a08 & auVar79._8_4_;
    auVar97._12_4_ = _UNK_150b51a0c & auVar79._12_4_;
    lVar18 = extractps(auVar97,1);
    lVar21 = extractps(auVar97,2);
    lVar25 = extractps(auVar97,3);
    iVar68 = *piVar1;
    iVar72 = *(int *)((longlong)piVar1 + lVar18);
    iVar74 = *(int *)((longlong)piVar1 + lVar21);
    iVar75 = *(int *)((longlong)piVar1 + lVar25);
    auVar100 = ___xmm_0000001c000000140000000c00000004 & auVar79;
    iVar56 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._0_4_);
    iVar63 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._4_4_);
    iVar66 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._8_4_);
    iVar67 = *(int *)((longlong)piVar1 + (ulonglong)auVar100._12_4_);
  }
  auVar70._0_4_ = iVar68 << 4;
  auVar70._4_4_ = iVar72 << 4;
  auVar70._8_4_ = iVar74 << 4;
  auVar70._12_4_ = iVar75 << 4;
  auVar100 = auVar79 & auVar70;
  lVar18 = param_1 + auVar100._0_4_;
  lVar21 = param_1 + auVar100._4_4_;
  lVar25 = param_1 + auVar100._8_4_;
  lVar26 = param_1 + auVar100._12_4_;
  auVar95 = ___xmm_00000004000000040000000400000004 & auVar79;
  uVar20 = (ulonglong)auVar95._0_4_;
  _local_168 = ___xmm_00000008000000080000000800000008 & auVar79;
  uVar24 = (ulonglong)local_168._0_4_;
  auVar102._0_4_ = iVar56 << 4;
  auVar102._4_4_ = iVar63 << 4;
  auVar102._8_4_ = iVar66 << 4;
  auVar102._12_4_ = iVar67 << 4;
  auVar96 = auVar79 & auVar102;
  lVar29 = (longlong)auVar96._0_4_;
  auVar101 = ZEXT416(*(uint *)(param_1 + auVar100._0_4_));
  lVar27 = param_1 + lVar29;
  lVar28 = param_1 + auVar96._4_4_;
  lVar30 = param_1 + auVar96._8_4_;
  lVar31 = auVar96._12_4_ + param_1;
  bVar32 = (bVar17 & 2) != 0;
  if (bVar32) {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._4_4_),0x10);
    auVar69 = insertps(ZEXT416(*(uint *)(uVar20 + lVar18)),
                       *(undefined4 *)((ulonglong)auVar95._4_4_ + lVar21),0x10);
    auVar89 = insertps(ZEXT416(*(uint *)(uVar24 + lVar18)),
                       *(undefined4 *)((ulonglong)local_168._4_4_ + lVar21),0x10);
    auVar59 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + auVar96._4_4_)
                       ,0x10);
  }
  else {
    auVar69 = ZEXT416(*(uint *)(uVar20 + lVar18));
    auVar89 = ZEXT416(*(uint *)(uVar24 + lVar18));
    auVar59 = ZEXT416(*(uint *)(param_1 + lVar29));
  }
  auVar105 = ZEXT416(*(uint *)(uVar20 + lVar27));
  if (bVar32) {
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._4_4_ + lVar28),0x10);
    auVar113 = insertps(ZEXT416(*(uint *)(uVar24 + lVar27)),
                        *(undefined4 *)((ulonglong)local_168._4_4_ + lVar28),0x10);
  }
  else {
    auVar113 = ZEXT416(*(uint *)(uVar24 + lVar27));
  }
  if ((bVar17 & 4) != 0) {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._8_4_),0x20);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar95._8_4_ + lVar25),0x20);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)local_168._8_4_ + lVar25),0x20);
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar96._8_4_),0x20);
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._8_4_ + lVar30),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_168._8_4_ + lVar30),0x20);
  }
  auVar80 = ___xmm_0000000c0000000c0000000c0000000c & auVar79;
  uVar37 = auVar80._0_4_;
  if ((char)bVar17 < '\0') {
    auVar101 = insertps(auVar101,*(undefined4 *)(param_1 + auVar100._12_4_),0x30);
    auVar69 = insertps(auVar69,*(undefined4 *)((ulonglong)auVar95._12_4_ + lVar26),0x30);
    auVar89 = insertps(auVar89,*(undefined4 *)((ulonglong)local_168._12_4_ + lVar26),0x30);
    uVar39 = *(uint *)((ulonglong)uVar37 + lVar18);
    uVar37 = *(uint *)((ulonglong)uVar37 + lVar27);
    auVar59 = insertps(auVar59,*(undefined4 *)(param_1 + auVar96._12_4_),0x30);
  }
  else {
    uVar39 = *(uint *)((ulonglong)uVar37 + lVar18);
    uVar37 = *(uint *)((ulonglong)uVar37 + lVar27);
  }
  uVar24 = (ulonglong)auVar80._8_4_;
  auVar96 = insertps(ZEXT416(uVar39),*(undefined4 *)((ulonglong)auVar80._4_4_ + lVar21),0x10);
  auVar100 = insertps(ZEXT416(uVar37),*(undefined4 *)((ulonglong)auVar80._4_4_ + lVar28),0x10);
  if ((char)bVar17 < '\0') {
    auVar105 = insertps(auVar105,*(undefined4 *)((ulonglong)auVar95._12_4_ + lVar31),0x30);
    auVar95 = insertps(auVar96,*(undefined4 *)(uVar24 + lVar25),0x20);
    auVar100 = insertps(auVar100,*(undefined4 *)(uVar24 + lVar30),0x20);
    auVar113 = insertps(auVar113,*(undefined4 *)((ulonglong)local_168._12_4_ + lVar31),0x30);
  }
  else {
    auVar95 = insertps(auVar96,*(undefined4 *)(uVar24 + lVar25),0x20);
    auVar100 = insertps(auVar100,*(undefined4 *)(uVar24 + lVar30),0x20);
  }
  auVar95 = insertps(auVar95,*(undefined4 *)((ulonglong)auVar80._12_4_ + lVar26),0x30);
  auVar100 = insertps(auVar100,*(undefined4 *)((ulonglong)auVar80._12_4_ + lVar31),0x30);
  lVar18 = (longlong)(int)(uVar34 << 2);
  pfVar2 = (float *)(param_4 + lVar18);
  if ((~bVar17 & 9) == 0) {
    _local_168 = *(undefined1 (*) [16])(param_3 + lVar18);
    auVar96 = *(undefined1 (*) [16])(param_4 + lVar18);
    auVar81 = ZEXT416(*(uint *)(param_6 + uVar22));
  }
  else {
    puVar19 = (uint *)(param_3 + lVar18);
    if ((uVar23 & 1) != 0) {
      _local_168 = ZEXT416(*puVar19);
    }
    if ((uVar23 & 2) != 0) {
      _local_168 = insertps(_local_168,puVar19[1],0x10);
    }
    if ((uVar23 & 4) != 0) {
      _local_168 = insertps(_local_168,puVar19[2],0x20);
    }
    if ((uVar23 & 8) != 0) {
      _local_168 = insertps(_local_168,puVar19[3],0x30);
    }
    auVar96 = auVar70;
    if ((uVar23 & 1) != 0) {
      auVar96 = ZEXT416((uint)*pfVar2);
    }
    if ((uVar23 & 2) != 0) {
      auVar96 = insertps(auVar96,pfVar2[1],0x10);
    }
    if ((uVar23 & 4) != 0) {
      auVar96 = insertps(auVar96,pfVar2[2],0x20);
    }
    if ((uVar23 & 8) != 0) {
      auVar96 = insertps(auVar96,pfVar2[3],0x30);
    }
    auVar81 = auVar79;
    if ((uVar23 & 1) != 0) {
      auVar81 = ZEXT116(*(byte *)(param_6 + uVar22));
    }
    if ((uVar23 & 2) != 0) {
      auVar47._8_8_ = auVar81._8_8_;
      auVar47._0_8_ =
           auVar81._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_6 + uVar22 + 1) << 8;
      auVar81 = pblendw(auVar81,auVar47,0xfd);
    }
    if ((uVar23 & 4) != 0) {
      bVar11 = auVar81[3];
      auVar80 = pmovzxwd(auVar81,auVar81);
      auVar81._8_8_ = auVar80._8_8_;
      auVar81._0_8_ =
           auVar80._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_6 + uVar22 + 2) << 0x10 |
           (ulonglong)bVar11 << 0x18;
    }
    if ((uVar23 & 8) != 0) {
      bVar11 = auVar81[2];
      auVar80 = pmovzxwd(auVar81,auVar81);
      auVar81._8_8_ = auVar80._8_8_;
      auVar81._0_8_ =
           auVar80._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar11 << 0x10 |
           (ulonglong)*(byte *)(param_6 + uVar22 + 3) << 0x18;
    }
  }
  fVar108 = auVar59._0_4_;
  fVar124 = auVar101._0_4_ - fVar108;
  fVar109 = auVar59._4_4_;
  fVar127 = auVar101._4_4_ - fVar109;
  auVar126._0_8_ = CONCAT44(fVar127,fVar124);
  fVar110 = auVar59._8_4_;
  auVar126._8_4_ = auVar101._8_4_ - fVar110;
  fVar114 = auVar59._12_4_;
  auVar126._12_4_ = auVar101._12_4_ - fVar114;
  fVar55 = auVar105._0_4_;
  fVar116 = auVar69._0_4_;
  fVar117 = fVar116 - fVar55;
  fVar73 = auVar105._4_4_;
  fVar119 = auVar69._4_4_;
  fVar121 = fVar119 - fVar73;
  auVar120._0_8_ = CONCAT44(fVar121,fVar117);
  fVar104 = auVar105._8_4_;
  fVar122 = auVar69._8_4_;
  fVar123 = auVar69._12_4_;
  auVar120._8_4_ = fVar122 - fVar104;
  fVar107 = auVar105._12_4_;
  auVar120._12_4_ = fVar123 - fVar107;
  fVar58 = auVar89._0_4_;
  fVar49 = auVar113._0_4_;
  fVar57 = fVar58 - fVar49;
  fVar65 = auVar89._4_4_;
  fVar50 = auVar113._4_4_;
  fVar64 = fVar65 - fVar50;
  auVar60._0_8_ = CONCAT44(fVar64,fVar57);
  fVar40 = auVar89._8_4_;
  fVar48 = auVar89._12_4_;
  fVar53 = auVar113._8_4_;
  auVar60._8_4_ = fVar40 - fVar53;
  fVar54 = auVar113._12_4_;
  auVar60._12_4_ = fVar48 - fVar54;
  auVar51._0_4_ = fVar57 * fVar57 + fVar117 * fVar117 + fVar124 * fVar124;
  auVar51._4_4_ = fVar64 * fVar64 + fVar121 * fVar121 + fVar127 * fVar127;
  auVar51._8_4_ =
       auVar60._8_4_ * auVar60._8_4_ +
       auVar120._8_4_ * auVar120._8_4_ + auVar126._8_4_ * auVar126._8_4_;
  auVar51._12_4_ =
       auVar60._12_4_ * auVar60._12_4_ +
       auVar120._12_4_ * auVar120._12_4_ + auVar126._12_4_ * auVar126._12_4_;
  auVar105 = sqrtps(unaff_XMM11,auVar51);
  uVar34 = -(uint)(auVar51._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar23 = -(uint)(auVar51._4_4_ < _UNK_1506895e4);
  uVar37 = -(uint)(auVar51._8_4_ < _UNK_1506895e8);
  uVar39 = -(uint)(auVar51._12_4_ < _UNK_1506895ec);
  auVar41._4_4_ = uVar23;
  auVar41._0_4_ = uVar34;
  auVar78._8_4_ = auVar120._8_4_;
  auVar78._0_8_ = auVar120._0_8_;
  auVar78._12_4_ = auVar120._12_4_;
  auVar89 = divps(auVar78,auVar105);
  auVar90._8_4_ = auVar60._8_4_;
  auVar90._0_8_ = auVar60._0_8_;
  auVar90._12_4_ = auVar60._12_4_;
  auVar69 = divps(auVar90,auVar105);
  auVar87._8_4_ = auVar126._8_4_;
  auVar87._0_8_ = auVar126._0_8_;
  auVar87._12_4_ = auVar126._12_4_;
  auVar59 = divps(auVar87,auVar105);
  auVar41._8_4_ = uVar37;
  auVar41._12_4_ = uVar39;
  auVar12._4_4_ = _UNK_15076b1f4;
  auVar12._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar12._8_4_ = _UNK_15076b1f8;
  auVar12._12_4_ = _UNK_15076b1fc;
  auVar59 = blendvps(auVar59,auVar12,auVar41);
  auVar98._8_4_ = auVar126._8_4_;
  auVar98._0_8_ = auVar126._0_8_;
  auVar98._12_4_ = auVar126._12_4_;
  bVar32 = (bVar17 & 1) != 0;
  if (bVar32) {
    auVar98 = auVar59;
  }
  auVar76._0_8_ = CONCAT44(~uVar23 & auVar89._4_4_,~uVar34 & auVar89._0_4_);
  auVar76._8_4_ = ~uVar37 & auVar89._8_4_;
  auVar76._12_4_ = ~uVar39 & auVar89._12_4_;
  auVar62._0_8_ = CONCAT44(~uVar23 & auVar69._4_4_,~uVar34 & auVar69._0_4_);
  auVar62._8_4_ = ~uVar37 & auVar69._8_4_;
  auVar62._12_4_ = ~uVar39 & auVar69._12_4_;
  auVar91._8_4_ = auVar120._8_4_;
  auVar91._0_8_ = auVar120._0_8_;
  auVar91._12_4_ = auVar120._12_4_;
  auVar42._8_4_ = auVar60._8_4_;
  auVar42._0_8_ = auVar60._0_8_;
  auVar42._12_4_ = auVar60._12_4_;
  if (bVar32) {
    auVar91._8_4_ = auVar76._8_4_;
    auVar91._0_8_ = auVar76._0_8_;
    auVar91._12_4_ = auVar76._12_4_;
    auVar42._8_4_ = auVar62._8_4_;
    auVar42._0_8_ = auVar62._0_8_;
    auVar42._12_4_ = auVar62._12_4_;
    auVar89 = blendps(auVar126,auVar98,1);
  }
  else {
    auVar89 = blendps(auVar126,auVar98,1);
  }
  if ((bVar17 & 2) == 0) {
    auVar69 = blendps(auVar120,auVar91,1);
    auVar113 = blendps(auVar60,auVar42,1);
    auVar89 = blendps(auVar89,auVar89,2);
    auVar92 = auVar69;
    auVar45 = auVar113;
  }
  else {
    auVar69 = blendps(auVar120,auVar91,1);
    auVar92._8_4_ = auVar76._8_4_;
    auVar92._0_8_ = auVar76._0_8_;
    auVar92._12_4_ = auVar76._12_4_;
    auVar113 = blendps(auVar60,auVar42,1);
    auVar45._8_4_ = auVar62._8_4_;
    auVar45._0_8_ = auVar62._0_8_;
    auVar45._12_4_ = auVar62._12_4_;
    auVar89 = blendps(auVar89,auVar59,2);
  }
  if ((bVar17 & 4) == 0) {
    auVar80 = blendps(auVar69,auVar92,2);
    auVar113 = blendps(auVar113,auVar45,2);
    auVar69 = blendps(auVar89,auVar89,4);
    auVar46 = auVar113;
    auVar93 = auVar80;
  }
  else {
    auVar80 = blendps(auVar69,auVar92,2);
    auVar93._8_4_ = auVar76._8_4_;
    auVar93._0_8_ = auVar76._0_8_;
    auVar93._12_4_ = auVar76._12_4_;
    auVar113 = blendps(auVar113,auVar45,2);
    auVar46._8_4_ = auVar62._8_4_;
    auVar46._0_8_ = auVar62._0_8_;
    auVar46._12_4_ = auVar62._12_4_;
    auVar69 = blendps(auVar89,auVar59,4);
    auVar89 = auVar59;
  }
  if ((char)bVar17 < '\0') {
    auVar80 = blendps(auVar80,auVar93,4);
  }
  else {
    auVar80 = blendps(auVar80,auVar93,4);
    auVar59 = auVar69;
  }
  if ((char)bVar17 < '\0') {
    auVar113 = blendps(auVar113,auVar46,4);
  }
  else {
    auVar62 = blendps(auVar113,auVar46,4);
    auVar76 = auVar80;
    auVar113 = auVar62;
  }
  auVar86 = pmovzxbd(auVar81,auVar81);
  auVar82._0_4_ = auVar86._0_4_ << 2;
  auVar82._4_4_ = auVar86._4_4_ << 2;
  auVar82._8_4_ = auVar86._8_4_ << 2;
  auVar82._12_4_ = auVar86._12_4_ << 2;
  auVar86 = pmovzxdq(auVar89,auVar82);
  auVar83._4_4_ = 0;
  auVar83._0_4_ = auVar82._8_4_;
  auVar83._8_4_ = auVar82._12_4_;
  auVar83._12_4_ = 0;
  auVar89 = pmovsxdq(auVar46,auVar79);
  auVar86 = blendvps(ZEXT816(0),auVar86,auVar89);
  auVar43._4_4_ = auVar79._8_4_;
  auVar43._0_4_ = auVar79._8_4_;
  auVar43._8_4_ = auVar79._12_4_;
  auVar43._12_4_ = auVar79._12_4_;
  auVar89 = blendvps(ZEXT816(0),auVar83,auVar43);
  auVar79 = insertps(ZEXT416(*(uint *)(param_7 + auVar86._0_8_)),
                     *(undefined4 *)(param_7 + auVar86._8_8_),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_7 + auVar89._0_8_),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_7 + auVar89._8_8_),0x30);
  fVar64 = auVar79._0_4_ * param_5 * param_5;
  fVar117 = auVar79._4_4_ * param_5 * param_5;
  fVar121 = auVar79._8_4_ * param_5 * param_5;
  param_5 = auVar79._12_4_ * param_5 * param_5;
  fVar111 = auVar95._0_4_;
  fVar115 = auVar95._4_4_;
  fVar118 = auVar95._12_4_;
  fVar57 = auVar100._12_4_;
  fVar129 = auVar100._0_4_;
  fVar131 = auVar100._4_4_;
  fVar127 = auVar95._8_4_;
  fVar94 = auVar100._8_4_;
  auVar44._0_4_ =
       (float)((uint)fVar64 ^ __xmm_80000000800000008000000080000000) *
       ((float)(~uVar34 & auVar105._0_4_) - (float)local_168._0_4_) - auVar96._0_4_;
  auVar44._4_4_ =
       (float)((uint)fVar117 ^ _UNK_150651574) *
       ((float)(~uVar23 & auVar105._4_4_) - (float)local_168._4_4_) - auVar96._4_4_;
  auVar44._8_4_ =
       (float)((uint)fVar121 ^ _UNK_150651578) * ((float)(~uVar37 & auVar105._8_4_) - fStack_160) -
       auVar96._8_4_;
  auVar44._12_4_ =
       (float)((uint)param_5 ^ _UNK_15065157c) * ((float)(~uVar39 & auVar105._12_4_) - fStack_15c) -
       auVar96._12_4_;
  auVar84._0_4_ = (fVar111 + fVar129) * fVar64 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar84._4_4_ = (fVar115 + fVar131) * fVar117 + _UNK_15076b1f4;
  auVar84._8_4_ = (fVar127 + fVar94) * fVar121 + _UNK_15076b1f8;
  auVar84._12_4_ = (fVar118 + fVar57) * param_5 + _UNK_15076b1fc;
  auVar79 = divps(auVar44,auVar84);
  fVar64 = auVar79._0_4_;
  auVar52._0_4_ = auVar96._0_4_ + fVar64;
  fVar117 = auVar79._4_4_;
  auVar52._4_4_ = auVar96._4_4_ + fVar117;
  fVar121 = auVar79._8_4_;
  auVar52._8_4_ = auVar96._8_4_ + fVar121;
  fVar124 = auVar79._12_4_;
  auVar52._12_4_ = auVar96._12_4_ + fVar124;
  if ((bVar17 & 1) != 0) {
    *pfVar2 = auVar52._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar52,1);
    *(undefined8 *)(pfVar2 + 1) = uVar10;
  }
  auVar79 = blendps(auVar69,auVar59,8);
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar52,2);
    *(undefined8 *)(pfVar2 + 2) = uVar10;
  }
  fVar125 = auVar79._0_4_ * fVar64;
  fVar128 = auVar79._4_4_ * fVar117;
  fVar130 = auVar79._8_4_ * fVar121;
  fVar132 = auVar79._12_4_ * fVar124;
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar52,3);
    *(undefined8 *)(pfVar2 + 3) = uVar10;
  }
  auVar71._0_4_ = auVar101._0_4_ + fVar111 * fVar125;
  auVar71._4_4_ = auVar101._4_4_ + fVar115 * fVar128;
  auVar71._8_4_ = auVar101._8_4_ + fVar127 * fVar130;
  auVar71._12_4_ = auVar101._12_4_ + fVar118 * fVar132;
  if ((bVar17 & 1) == 0) {
    auVar79 = blendps(auVar80,auVar76,8);
  }
  else {
    *(float *)(param_1 + auVar70._0_4_) = auVar71._0_4_;
    auVar79 = blendps(auVar80,auVar76,8);
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + auVar70._4_4_) = uVar10;
  }
  uVar16 = (float)auVar79._12_4_ * fVar124;
  uVar15 = (float)auVar79._8_4_ * fVar121;
  uVar14 = (float)auVar79._4_4_ * fVar117;
  uVar13 = (float)auVar79._0_4_ * fVar64;
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + auVar70._12_4_) = uVar10;
    auVar103._0_4_ = fVar116 + fVar111 * (float)uVar13;
    auVar103._4_4_ = fVar119 + fVar115 * (float)uVar14;
    auVar103._8_4_ = fVar122 + fVar127 * (float)uVar15;
    auVar103._12_4_ = fVar123 + fVar118 * (float)uVar16;
  }
  else {
    auVar103._0_4_ = fVar116 + fVar111 * (float)uVar13;
    auVar103._4_4_ = fVar119 + fVar115 * (float)uVar14;
    auVar103._8_4_ = fVar122 + fVar127 * (float)uVar15;
    auVar103._12_4_ = fVar123 + fVar118 * (float)uVar16;
  }
  if ((bVar17 & 1) == 0) {
    auVar79 = blendps(auVar113,auVar62,8);
  }
  else {
    *(int *)(param_1 + 4 + (longlong)auVar70._0_4_) = auVar103._0_4_;
    auVar79 = blendps(auVar113,auVar62,8);
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._4_4_) = uVar10;
  }
  fVar124 = fVar124 * (float)auVar79._12_4_;
  fVar121 = fVar121 * (float)auVar79._8_4_;
  fVar117 = fVar117 * (float)auVar79._4_4_;
  fVar64 = fVar64 * auVar79._0_4_;
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar70._12_4_) = uVar10;
    auVar99._0_4_ = fVar58 + fVar111 * fVar64;
    auVar99._4_4_ = fVar65 + fVar115 * fVar117;
    auVar99._8_4_ = fVar40 + fVar127 * fVar121;
    auVar99._12_4_ = fVar48 + fVar118 * fVar124;
  }
  else {
    auVar99._0_4_ = fVar58 + fVar111 * fVar64;
    auVar99._4_4_ = fVar65 + fVar115 * fVar117;
    auVar99._8_4_ = fVar40 + fVar127 * fVar121;
    auVar99._12_4_ = fVar48 + fVar118 * fVar124;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar70._0_4_) = auVar99._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar99,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar99,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar99,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar70._12_4_) = uVar10;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar70._0_4_) = fVar111;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar95,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar95,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar95,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar70._12_4_) = uVar10;
    auVar85._0_4_ = fVar108 + fVar125 * fVar129;
    auVar85._4_4_ = fVar109 + fVar128 * fVar131;
    auVar85._8_4_ = fVar110 + fVar130 * fVar94;
    auVar85._12_4_ = fVar114 + fVar132 * fVar57;
  }
  else {
    auVar85._0_4_ = fVar108 + fVar125 * fVar129;
    auVar85._4_4_ = fVar109 + fVar128 * fVar131;
    auVar85._8_4_ = fVar110 + fVar130 * fVar94;
    auVar85._12_4_ = fVar114 + fVar132 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + auVar102._0_4_) = auVar85._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar85,1);
    *(undefined8 *)(param_1 + auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar85,2);
    *(undefined8 *)(param_1 + auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar85,3);
    *(undefined8 *)(param_1 + auVar102._12_4_) = uVar10;
    auVar61._0_4_ = fVar55 + (float)uVar13 * fVar129;
    auVar61._4_4_ = fVar73 + (float)uVar14 * fVar131;
    auVar61._8_4_ = fVar104 + (float)uVar15 * fVar94;
    auVar61._12_4_ = fVar107 + (float)uVar16 * fVar57;
  }
  else {
    auVar61._0_4_ = fVar55 + (float)uVar13 * fVar129;
    auVar61._4_4_ = fVar73 + (float)uVar14 * fVar131;
    auVar61._8_4_ = fVar104 + (float)uVar15 * fVar94;
    auVar61._12_4_ = fVar107 + (float)uVar16 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar102._0_4_) = auVar61._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar61,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar61,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar61,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar102._12_4_) = uVar10;
    auVar77._0_4_ = fVar49 + fVar64 * fVar129;
    auVar77._4_4_ = fVar50 + fVar117 * fVar131;
    auVar77._8_4_ = fVar53 + fVar121 * fVar94;
    auVar77._12_4_ = fVar54 + fVar124 * fVar57;
  }
  else {
    auVar77._0_4_ = fVar49 + fVar64 * fVar129;
    auVar77._4_4_ = fVar50 + fVar117 * fVar131;
    auVar77._8_4_ = fVar53 + fVar121 * fVar94;
    auVar77._12_4_ = fVar54 + fVar124 * fVar57;
  }
  if ((bVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar102._0_4_) = auVar77._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar77,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar77,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar77,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar102._12_4_) = uVar10;
  }
  if ((bVar17 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar102._0_4_) = fVar129;
  }
  if ((bVar17 & 2) != 0) {
    uVar10 = extractps(auVar100,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._4_4_) = uVar10;
  }
  if ((bVar17 & 4) != 0) {
    uVar10 = extractps(auVar100,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._8_4_) = uVar10;
  }
  if ((char)bVar17 < '\0') {
    uVar10 = extractps(auVar100,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar102._12_4_) = uVar10;
  }
  return;
}

// ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_sse4 @ 1409492b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringConstraintsWithDampingAndWeightMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  byte bVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  byte bVar28;
  longlong lVar29;
  int unaff_EDI;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  int iVar47;
  int iVar60;
  int iVar61;
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
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar68 [16];
  float fVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  int iVar79;
  float fVar84;
  float fVar86;
  undefined1 auVar80 [16];
  float fVar87;
  undefined1 auVar81 [16];
  int iVar85;
  float fVar88;
  int iVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar90 [16];
  float fVar95;
  undefined1 auVar91 [16];
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar97;
  float fVar105;
  float fVar107;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar109;
  undefined1 auVar101 [16];
  float fVar98;
  float fVar106;
  float fVar108;
  float fVar110;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar111;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar119;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar124;
  float fVar126;
  undefined1 auVar123 [16];
  float fVar127;
  float fVar128;
  float fVar131;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar133;
  float fVar134;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar144;
  float fVar145;
  float fVar146;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar153;
  int iVar154;
  float fVar157;
  int iVar158;
  float fVar159;
  float fVar160;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_198;
  ulonglong local_128;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fVar125;
  float fVar132;
  undefined1 auVar135 [16];
  float fVar147;
  float fVar152;
  
  uVar30 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar30 = param_13;
  }
  if ((int)(uVar30 & 0xfffffffc) < 1) {
    uVar36 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar36 = 0;
    do {
      uVar26 = 0;
      auVar62 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar62 = ZEXT416(*(uint *)(param_8 + uVar36));
      }
      piVar2 = (int *)(param_3 + uVar24 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar24 * 2);
      if ((param_10 & 1) != 0) {
        uVar26 = (ulonglong)*(uint *)(param_11 + uVar36);
      }
      auVar101._8_8_ = 0;
      auVar101._0_8_ = uVar26;
      lVar25 = (longlong)(*piVar2 << 4);
      lVar32 = (longlong)(piVar2[2] * 0x10);
      lVar27 = (longlong)(*piVar3 << 4);
      lVar37 = (longlong)(piVar3[2] * 0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + lVar25)),*(undefined4 *)(param_1 + lVar32),0x10
                        );
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + lVar27),0x20);
      auVar100 = insertps(auVar99,*(undefined4 *)(param_1 + lVar37),0x30);
      fVar105 = auVar100._4_4_;
      fVar109 = auVar100._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                         *(undefined4 *)(param_1 + 4 + lVar32),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar27),0x20);
      auVar90 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar37),0x30);
      fVar95 = auVar90._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                         *(undefined4 *)(param_1 + 8 + lVar32),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar27),0x20);
      auVar80 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar37),0x30);
      fVar87 = auVar80._12_4_;
      uVar41 = *(uint *)(param_1 + 0xc + lVar25);
      unaff_EDI = piVar2[3] * 0x10;
      lVar29 = (longlong)(piVar2[1] << 4);
      lVar31 = (longlong)unaff_EDI;
      lVar35 = (longlong)(piVar3[1] << 4);
      lVar33 = (longlong)(piVar3[3] * 0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + lVar29)),*(undefined4 *)(param_1 + lVar31),0x10
                        );
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar117 = insertps(auVar99,*(undefined4 *)(param_1 + lVar33),0x30);
      fVar136 = auVar117._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                         *(undefined4 *)(param_1 + 4 + lVar31),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar91 = insertps(auVar99,*(undefined4 *)(param_1 + 4 + lVar33),0x30);
      fVar96 = auVar91._12_4_;
      auVar99 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                         *(undefined4 *)(param_1 + 8 + lVar31),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar81 = insertps(auVar99,*(undefined4 *)(param_1 + 8 + lVar33),0x30);
      fVar88 = auVar81._12_4_;
      auVar62 = pmovsxbd(auVar62,auVar62);
      auVar99 = insertps(ZEXT416(*(uint *)(param_9 + (auVar62._0_4_ << 2))),
                         *(undefined4 *)(param_9 + auVar62._4_4_ * 4),0x10);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_9 + (auVar62._8_4_ << 2)),0x20);
      auVar72 = insertps(auVar99,*(undefined4 *)(param_9 + (auVar62._12_4_ << 2)),0x30);
      auVar48 = pmovsxbd(auVar101,auVar101);
      auVar67 = insertps(ZEXT416(*(uint *)(param_12 + (auVar48._0_4_ << 2))),
                         *(undefined4 *)(param_12 + auVar48._4_4_ * 4),0x10);
      uVar26 = uVar24 & 0xffffffff;
      fVar127 = auVar117._0_4_;
      fVar147 = auVar100._0_4_;
      auVar148._0_4_ = fVar147 - fVar127;
      fVar128 = auVar117._4_4_;
      auVar148._4_4_ = fVar105 - fVar128;
      fVar131 = auVar117._8_4_;
      fVar152 = auVar100._8_4_;
      auVar148._8_4_ = fVar152 - fVar131;
      auVar148._12_4_ = fVar109 - fVar136;
      fVar78 = auVar90._0_4_;
      fVar46 = auVar91._0_4_;
      auVar100._0_4_ = fVar78 - fVar46;
      fVar84 = auVar90._4_4_;
      fVar134 = auVar91._4_4_;
      auVar100._4_4_ = fVar84 - fVar134;
      fVar86 = auVar90._8_4_;
      fVar119 = auVar91._8_4_;
      auVar100._8_4_ = fVar86 - fVar119;
      auVar100._12_4_ = fVar95 - fVar96;
      fVar97 = auVar80._0_4_;
      fVar122 = auVar81._0_4_;
      auVar117._0_4_ = fVar97 - fVar122;
      fVar125 = auVar80._4_4_;
      fVar124 = auVar81._4_4_;
      auVar117._4_4_ = fVar125 - fVar124;
      fVar107 = auVar80._8_4_;
      fVar126 = auVar81._8_4_;
      auVar117._8_4_ = fVar107 - fVar126;
      auVar117._12_4_ = fVar87 - fVar88;
      auVar149._0_4_ = auVar100._0_4_ * auVar100._0_4_ + auVar148._0_4_ * auVar148._0_4_;
      auVar149._4_4_ = auVar100._4_4_ * auVar100._4_4_ + auVar148._4_4_ * auVar148._4_4_;
      auVar149._8_4_ = auVar100._8_4_ * auVar100._8_4_ + auVar148._8_4_ * auVar148._8_4_;
      auVar149._12_4_ = auVar100._12_4_ * auVar100._12_4_ + auVar148._12_4_ * auVar148._12_4_;
      auVar150._0_4_ = auVar117._0_4_ * auVar117._0_4_ + auVar149._0_4_;
      auVar150._4_4_ = auVar117._4_4_ * auVar117._4_4_ + auVar149._4_4_;
      auVar150._8_4_ = auVar117._8_4_ * auVar117._8_4_ + auVar149._8_4_;
      auVar150._12_4_ = auVar117._12_4_ * auVar117._12_4_ + auVar149._12_4_;
      auVar91 = sqrtps(auVar149,auVar150);
      uVar39 = -(uint)(auVar150._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar40 = -(uint)(auVar150._4_4_ < _UNK_1506895e4);
      uVar42 = -(uint)(auVar150._8_4_ < _UNK_1506895e8);
      uVar44 = -(uint)(auVar150._12_4_ < _UNK_1506895ec);
      auVar62._4_4_ = uVar40;
      auVar62._0_4_ = uVar39;
      auVar81 = divps(auVar148,auVar91);
      auVar80 = divps(auVar100,auVar91);
      auVar101 = divps(auVar117,auVar91);
      auVar62._8_4_ = uVar42;
      auVar62._12_4_ = uVar44;
      auVar99._4_4_ = _UNK_15076b1f4;
      auVar99._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar99._8_4_ = _UNK_15076b1f8;
      auVar99._12_4_ = _UNK_15076b1fc;
      auVar149 = blendvps(auVar81,auVar99,auVar62);
      fVar140 = (float)(~uVar39 & auVar80._0_4_);
      fVar144 = (float)(~uVar40 & auVar80._4_4_);
      fVar145 = (float)(~uVar42 & auVar80._8_4_);
      fVar146 = (float)(~uVar44 & auVar80._12_4_);
      fVar153 = (float)(~uVar39 & auVar101._0_4_);
      fVar157 = (float)(~uVar40 & auVar101._4_4_);
      fVar159 = (float)(~uVar42 & auVar101._8_4_);
      fVar160 = (float)(~uVar44 & auVar101._12_4_);
      auVar62 = *(undefined1 (*) [16])(param_4 + uVar26);
      auVar81 = divps(auVar99,auVar62);
      auVar80._4_4_ = -(uint)(auVar62._4_4_ < _UNK_1506895d4);
      auVar80._0_4_ = -(uint)(auVar62._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar80._8_4_ = -(uint)(auVar62._8_4_ < _UNK_1506895d8);
      auVar80._12_4_ = -(uint)(auVar62._12_4_ < _UNK_1506895dc);
      auVar80 = blendvps(auVar81,auVar99,auVar80);
      uVar6 = *(uint *)(param_1 + 0xc + lVar32);
      auVar99 = insertps(auVar67,*(undefined4 *)(param_12 + (auVar48._8_4_ << 2)),0x20);
      auVar81 = insertps(auVar99,*(undefined4 *)(param_12 + (auVar48._12_4_ << 2)),0x30);
      auVar99 = insertps(ZEXT416(uVar41),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar27);
      auVar99 = insertps(auVar99,ZEXT416(uVar7),0x20);
      uVar43 = *(uint *)(param_1 + 0xc + lVar37);
      auVar99 = insertps(auVar99,ZEXT416(uVar43),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar29);
      uVar45 = *(uint *)(param_1 + 0xc + lVar31);
      auVar48 = insertps(ZEXT416(uVar8),ZEXT416(uVar45),0x10);
      uVar9 = *(uint *)(param_1 + 0xc + lVar35);
      auVar48 = insertps(auVar48,ZEXT416(uVar9),0x20);
      lVar21 = (longlong)(*piVar2 * 3);
      lVar23 = (longlong)(piVar2[2] * 3);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + lVar23 * 4),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar33);
      auVar48 = insertps(auVar48,ZEXT416(uVar10),0x30);
      fVar120 = auVar99._0_4_;
      fVar121 = auVar99._4_4_;
      fVar77 = auVar99._12_4_;
      fVar133 = auVar48._0_4_;
      auVar129._0_4_ = fVar120 + fVar133;
      fVar139 = auVar48._4_4_;
      auVar129._4_4_ = fVar121 + fVar139;
      fVar132 = auVar99._8_4_;
      fVar137 = auVar48._8_4_;
      auVar129._8_4_ = fVar132 + fVar137;
      fVar138 = auVar48._12_4_;
      auVar129._12_4_ = fVar77 + fVar138;
      auVar99 = divps(auVar72,auVar129);
      auVar100 = sqrtps(auVar101,auVar99);
      auVar99 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar23 * 4),0x10);
      auVar48 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar23 * 4),0x10);
      lVar21 = (longlong)(*piVar3 * 3);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[2] * 3);
      auVar117 = insertps(auVar67,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar101 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar90 = insertps(auVar48,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      lVar21 = (longlong)(piVar2[1] * 3);
      lVar23 = (longlong)(piVar2[3] * 3);
      auVar48 = insertps(ZEXT416(*(uint *)(param_2 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + lVar23 * 4),0x10);
      auVar99 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar23 * 4),0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar23 * 4),0x10);
      lVar21 = (longlong)(piVar3[1] * 3);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[3] * 3);
      auVar48 = insertps(auVar48,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar99 = insertps(auVar99,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      fVar111 = param_6 * auVar72._0_4_ * param_6;
      fVar114 = param_6 * auVar72._4_4_ * param_6;
      fVar115 = param_6 * auVar72._8_4_ * param_6;
      fVar116 = param_6 * auVar72._12_4_ * param_6;
      fVar98 = auVar100._0_4_ * (auVar81._0_4_ + auVar81._0_4_) * auVar80._0_4_ * param_6;
      fVar106 = auVar100._4_4_ * (auVar81._4_4_ + auVar81._4_4_) * auVar80._4_4_ * param_6;
      fVar108 = auVar100._8_4_ * (auVar81._8_4_ + auVar81._8_4_) * auVar80._8_4_ * param_6;
      fVar110 = auVar100._12_4_ * (auVar81._12_4_ + auVar81._12_4_) * auVar80._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar26);
      fVar66 = *pfVar1;
      fVar69 = pfVar1[1];
      fVar70 = pfVar1[2];
      fVar71 = pfVar1[3];
      auVar142._0_4_ =
           ((float)((uint)fVar111 ^ __xmm_80000000800000008000000080000000) *
            ((float)(~uVar39 & auVar91._0_4_) - auVar62._0_4_) - fVar66) -
           ((((fVar97 - auVar90._0_4_) - fVar122) + auVar67._0_4_) * fVar153 +
           (((fVar78 - auVar101._0_4_) - fVar46) + auVar99._0_4_) * fVar140 +
           (((fVar147 - auVar117._0_4_) - fVar127) + auVar48._0_4_) * auVar149._0_4_) * fVar98;
      auVar142._4_4_ =
           ((float)((uint)fVar114 ^ _UNK_150651574) *
            ((float)(~uVar40 & auVar91._4_4_) - auVar62._4_4_) - fVar69) -
           ((((fVar125 - auVar90._4_4_) - fVar124) + auVar67._4_4_) * fVar157 +
           (((fVar84 - auVar101._4_4_) - fVar134) + auVar99._4_4_) * fVar144 +
           (((fVar105 - auVar117._4_4_) - fVar128) + auVar48._4_4_) * auVar149._4_4_) * fVar106;
      auVar142._8_4_ =
           ((float)((uint)fVar115 ^ _UNK_150651578) *
            ((float)(~uVar42 & auVar91._8_4_) - auVar62._8_4_) - fVar70) -
           ((((fVar107 - auVar90._8_4_) - fVar126) + auVar67._8_4_) * fVar159 +
           (((fVar86 - auVar101._8_4_) - fVar119) + auVar99._8_4_) * fVar145 +
           (((fVar152 - auVar117._8_4_) - fVar131) + auVar48._8_4_) * auVar149._8_4_) * fVar108;
      auVar142._12_4_ =
           ((float)((uint)fVar116 ^ _UNK_15065157c) *
            ((float)(~uVar44 & auVar91._12_4_) - auVar62._12_4_) - fVar71) -
           ((((fVar87 - auVar90._12_4_) - fVar88) + auVar67._12_4_) * fVar160 +
           (((fVar95 - auVar101._12_4_) - fVar96) + auVar99._12_4_) * fVar146 +
           (((fVar109 - auVar117._12_4_) - fVar136) + auVar48._12_4_) * auVar149._12_4_) * fVar110;
      auVar118._0_4_ = (fVar98 + fVar111) * auVar129._0_4_ + ___xmm_3f8000003f8000003f8000003f800000
      ;
      auVar118._4_4_ = (fVar106 + fVar114) * auVar129._4_4_ + _UNK_15076b1f4;
      auVar118._8_4_ = (fVar108 + fVar115) * auVar129._8_4_ + _UNK_15076b1f8;
      auVar118._12_4_ = (fVar110 + fVar116) * auVar129._12_4_ + _UNK_15076b1fc;
      auVar62 = divps(auVar142,auVar118);
      fVar98 = auVar62._0_4_;
      fVar111 = auVar149._0_4_ * fVar98;
      fVar106 = auVar62._4_4_;
      fVar114 = auVar149._4_4_ * fVar106;
      fVar108 = auVar62._8_4_;
      fVar115 = auVar149._8_4_ * fVar108;
      fVar110 = auVar62._12_4_;
      fVar116 = auVar149._12_4_ * fVar110;
      auVar48._0_4_ = fVar120 * fVar111 + fVar147;
      auVar48._4_4_ = fVar121 * fVar114 + fVar105;
      auVar48._8_4_ = fVar132 * fVar115 + fVar152;
      auVar48._12_4_ = fVar77 * fVar116 + fVar109;
      fVar140 = fVar140 * fVar98;
      fVar144 = fVar144 * fVar106;
      fVar145 = fVar145 * fVar108;
      fVar146 = fVar146 * fVar110;
      *(float *)(param_1 + lVar25) = auVar48._0_4_;
      uVar13 = extractps(auVar48,1);
      *(undefined8 *)(param_1 + lVar32) = uVar13;
      auVar72._0_4_ = fVar120 * fVar140 + fVar78;
      auVar72._4_4_ = fVar121 * fVar144 + fVar84;
      auVar72._8_4_ = fVar132 * fVar145 + fVar86;
      auVar72._12_4_ = fVar77 * fVar146 + fVar95;
      uVar13 = extractps(auVar48,2);
      *(undefined8 *)(param_1 + lVar27) = uVar13;
      uVar13 = extractps(auVar48,3);
      *(undefined8 *)(param_1 + lVar37) = uVar13;
      fVar153 = fVar153 * fVar98;
      fVar157 = fVar157 * fVar106;
      fVar159 = fVar159 * fVar108;
      fVar160 = fVar160 * fVar110;
      *(float *)(param_1 + 4 + lVar25) = auVar72._0_4_;
      uVar13 = extractps(auVar72,1);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar13;
      uVar13 = extractps(auVar72,2);
      *(undefined8 *)(param_1 + 4 + lVar27) = uVar13;
      auVar156._0_4_ = fVar120 * fVar153 + fVar97;
      auVar156._4_4_ = fVar121 * fVar157 + fVar125;
      auVar156._8_4_ = fVar132 * fVar159 + fVar107;
      auVar156._12_4_ = fVar77 * fVar160 + fVar87;
      uVar13 = extractps(auVar72,3);
      *(undefined8 *)(param_1 + 4 + lVar37) = uVar13;
      *(float *)(param_1 + 8 + lVar25) = auVar156._0_4_;
      uVar13 = extractps(auVar156,1);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar13;
      uVar13 = extractps(auVar156,2);
      *(undefined8 *)(param_1 + 8 + lVar27) = uVar13;
      uVar13 = extractps(auVar156,3);
      *(undefined8 *)(param_1 + 8 + lVar37) = uVar13;
      *(uint *)(param_1 + 0xc + lVar25) = uVar41;
      *(uint *)(param_1 + 0xc + lVar32) = uVar6;
      *(uint *)(param_1 + 0xc + lVar27) = uVar7;
      *(uint *)(param_1 + 0xc + lVar37) = uVar43;
      auVar91._0_4_ = fVar127 - fVar111 * fVar133;
      auVar91._4_4_ = fVar128 - fVar114 * fVar139;
      auVar91._8_4_ = fVar131 - fVar115 * fVar137;
      auVar91._12_4_ = fVar136 - fVar116 * fVar138;
      *(float *)(param_1 + lVar29) = auVar91._0_4_;
      uVar13 = extractps(auVar91,1);
      *(undefined8 *)(param_1 + lVar31) = uVar13;
      uVar13 = extractps(auVar91,2);
      *(undefined8 *)(param_1 + lVar35) = uVar13;
      fVar46 = fVar46 - fVar140 * fVar133;
      auVar81._0_8_ = CONCAT44(fVar134 - fVar144 * fVar139,fVar46);
      auVar81._8_4_ = fVar119 - fVar145 * fVar137;
      auVar81._12_4_ = fVar96 - fVar146 * fVar138;
      uVar13 = extractps(auVar91,3);
      *(undefined8 *)(param_1 + lVar33) = uVar13;
      *(float *)(param_1 + 4 + lVar29) = fVar46;
      uVar13 = extractps(auVar81,1);
      *(undefined8 *)(param_1 + 4 + lVar31) = uVar13;
      uVar13 = extractps(auVar81,2);
      *(undefined8 *)(param_1 + 4 + lVar35) = uVar13;
      auVar90._8_4_ = auVar81._8_4_;
      auVar90._0_8_ = auVar81._0_8_;
      auVar90._12_4_ = auVar81._12_4_;
      auVar67._0_4_ = fVar122 - fVar153 * fVar133;
      auVar67._4_4_ = fVar124 - fVar157 * fVar139;
      auVar67._8_4_ = fVar126 - fVar159 * fVar137;
      auVar67._12_4_ = fVar88 - fVar160 * fVar138;
      uVar13 = extractps(auVar90,3);
      *(undefined8 *)(param_1 + 4 + lVar33) = uVar13;
      *(float *)(param_1 + 8 + lVar29) = auVar67._0_4_;
      uVar13 = extractps(auVar67,1);
      *(undefined8 *)(param_1 + 8 + lVar31) = uVar13;
      uVar13 = extractps(auVar67,2);
      *(undefined8 *)(param_1 + 8 + lVar35) = uVar13;
      uVar13 = extractps(auVar67,3);
      *(undefined8 *)(param_1 + 8 + lVar33) = uVar13;
      pfVar1 = (float *)(param_5 + uVar26);
      *pfVar1 = fVar98 + fVar66;
      pfVar1[1] = fVar106 + fVar69;
      pfVar1[2] = fVar108 + fVar70;
      pfVar1[3] = fVar110 + fVar71;
      *(uint *)(param_1 + 0xc + lVar29) = uVar8;
      *(uint *)(param_1 + 0xc + lVar31) = uVar45;
      *(uint *)(param_1 + 0xc + lVar35) = uVar9;
      *(uint *)(param_1 + 0xc + lVar33) = uVar10;
      uVar36 = uVar36 + 4;
      uVar24 = uVar24 + 0x10;
    } while ((int)uVar36 < (int)(uVar30 & 0xfffffffc));
    if ((int)param_13 <= (int)uVar36) {
      return;
    }
  }
  uVar41 = (uint)uVar36;
  auVar141._0_4_ =
       -(uint)((int)(uVar41 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar141._4_4_ =
       -(uint)((int)(uVar41 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar141._8_4_ = -(uint)((int)(uVar41 | _UNK_150631e08) < (int)param_13);
  auVar141._12_4_ = -(uint)((int)(uVar41 | _UNK_150631e0c) < (int)param_13);
  uVar36 = uVar36 & 0xffffffff;
  piVar2 = (int *)(param_3 + uVar36 * 8);
  uVar30 = movmskps(unaff_EDI,auVar141);
  bVar28 = (char)((char)uVar30 << 4) >> 4;
  if (uVar30 == 0xf) {
    iVar154 = *piVar2;
    iVar79 = piVar2[1];
    iVar158 = piVar2[2];
    iVar85 = piVar2[3];
    auVar50 = *(undefined1 (*) [16])(piVar2 + 4);
    iVar89 = auVar50._12_4_;
    iVar47 = auVar50._0_4_;
    iVar60 = auVar50._4_4_;
    iVar61 = auVar50._8_4_;
  }
  else {
    auVar49._0_4_ = ___xmm_00000018000000100000000800000000 & auVar141._0_4_;
    auVar49._4_4_ = _UNK_150b51a04 & auVar141._4_4_;
    auVar49._8_4_ = _UNK_150b51a08 & auVar141._8_4_;
    auVar49._12_4_ = _UNK_150b51a0c & auVar141._12_4_;
    lVar21 = extractps(auVar49,1);
    lVar23 = extractps(auVar49,2);
    lVar25 = extractps(auVar49,3);
    iVar154 = *piVar2;
    iVar158 = *(int *)((longlong)piVar2 + lVar21);
    iVar47 = *(int *)((longlong)piVar2 + lVar23);
    iVar61 = *(int *)((longlong)piVar2 + lVar25);
    auVar50 = ___xmm_0000001c000000140000000c00000004 & auVar141;
    iVar79 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._0_4_);
    iVar85 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._4_4_);
    iVar60 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._8_4_);
    iVar89 = *(int *)((longlong)piVar2 + (ulonglong)auVar50._12_4_);
  }
  auVar104 = ZEXT816(0);
  bVar22 = ~bVar28;
  auVar113 = ZEXT816(0);
  if ((param_7 & 1) != 0) {
    if ((bVar22 & 9) == 0) {
      auVar113 = ZEXT416(*(uint *)(param_8 + uVar36));
    }
    else {
      pbVar11 = (byte *)(param_8 + uVar36);
      if ((uVar30 & 1) != 0) {
        auVar113 = ZEXT116(*pbVar11);
      }
      if ((uVar30 & 2) != 0) {
        auVar50._8_8_ = auVar113._8_8_;
        auVar50._0_8_ = auVar113._0_8_ | (ulonglong)pbVar11[1] << 8;
        auVar113 = pblendw(auVar113,auVar50,0xfd);
      }
      if ((uVar30 & 4) != 0) {
        auVar62 = pmovzxwd(auVar50,auVar113);
        auVar50._8_8_ = auVar62._8_8_;
        auVar50._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar11[2] << 0x10 |
             (ulonglong)auVar113[3] << 0x18;
        auVar113 = auVar50;
      }
      if ((uVar30 & 8) != 0) {
        bVar14 = auVar113[2];
        auVar62 = pmovzxwd(auVar113,auVar113);
        auVar113._8_8_ = auVar62._8_8_;
        auVar113._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar14 << 0x10 |
             (ulonglong)pbVar11[3] << 0x18;
      }
    }
  }
  if ((param_10 & 1) != 0) {
    if ((bVar22 & 9) == 0) {
      auVar104 = ZEXT416(*(uint *)(param_11 + uVar36));
    }
    else {
      pbVar11 = (byte *)(param_11 + uVar36);
      if ((uVar30 & 1) != 0) {
        auVar104 = ZEXT116(*pbVar11);
      }
      if ((uVar30 & 2) != 0) {
        auVar50._8_8_ = auVar104._8_8_;
        auVar50._0_8_ = auVar104._0_8_ | (ulonglong)pbVar11[1] << 8;
        auVar104 = pblendw(auVar104,auVar50,0xfd);
      }
      if ((uVar30 & 4) != 0) {
        bVar14 = auVar104[3];
        auVar62 = pmovzxwd(auVar50,auVar104);
        auVar104._8_8_ = auVar62._8_8_;
        auVar104._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar11[2] << 0x10 |
             (ulonglong)bVar14 << 0x18;
      }
      if ((uVar30 & 8) != 0) {
        bVar14 = auVar104[2];
        auVar62 = pmovzxwd(auVar104,auVar104);
        auVar104._8_8_ = auVar62._8_8_;
        auVar104._0_8_ =
             auVar62._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar14 << 0x10 |
             (ulonglong)pbVar11[3] << 0x18;
      }
    }
  }
  auVar92._0_4_ = iVar154 << 4;
  auVar92._4_4_ = iVar158 << 4;
  auVar92._8_4_ = iVar47 << 4;
  auVar92._12_4_ = iVar61 << 4;
  auVar99 = auVar141 & auVar92;
  lVar21 = param_1 + auVar99._0_4_;
  lVar23 = param_1 + auVar99._4_4_;
  lVar25 = param_1 + auVar99._8_4_;
  lVar27 = param_1 + auVar99._12_4_;
  auVar48 = ___xmm_00000004000000040000000400000004 & auVar141;
  uVar36 = (ulonglong)auVar48._0_4_;
  uVar24 = (ulonglong)auVar48._4_4_;
  local_1b8 = ___xmm_00000008000000080000000800000008 & auVar141;
  uVar26 = (ulonglong)local_1b8._0_4_;
  auVar73._0_4_ = iVar79 << 4;
  auVar73._4_4_ = iVar85 << 4;
  auVar73._8_4_ = iVar60 << 4;
  auVar73._12_4_ = iVar89 << 4;
  auVar80 = auVar141 & auVar73;
  lVar35 = (longlong)auVar80._0_4_;
  auVar62 = ZEXT416(*(uint *)(param_1 + auVar99._0_4_));
  lVar29 = param_1 + lVar35;
  lVar31 = param_1 + auVar80._4_4_;
  lVar32 = param_1 + auVar80._8_4_;
  lVar33 = param_1 + auVar80._12_4_;
  bVar38 = (bVar28 & 2) != 0;
  if (bVar38) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._4_4_),0x10);
  }
  uVar34 = (ulonglong)local_1b8._4_4_;
  auVar81 = ZEXT416(*(uint *)(uVar36 + lVar21));
  uVar6 = auVar48._8_4_;
  uVar43 = auVar48._12_4_;
  uVar7 = local_1b8._8_4_;
  uVar8 = local_1b8._12_4_;
  if (bVar38) {
    auVar81 = insertps(auVar81,*(undefined4 *)(uVar24 + lVar23),0x10);
    auVar101 = insertps(ZEXT416(*(uint *)(uVar26 + lVar21)),*(undefined4 *)(uVar34 + lVar23),0x10);
    auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar35)),*(undefined4 *)(param_1 + auVar80._4_4_)
                       ,0x10);
    auVar48 = insertps(ZEXT416(*(uint *)(uVar36 + lVar29)),*(undefined4 *)(uVar24 + lVar31),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar26 + lVar29)),*(undefined4 *)(uVar34 + lVar31),0x10);
  }
  else {
    auVar101 = ZEXT416(*(uint *)(uVar26 + lVar21));
    auVar67 = ZEXT416(*(uint *)(param_1 + lVar35));
    auVar48 = ZEXT416(*(uint *)(uVar36 + lVar29));
    auVar72 = ZEXT416(*(uint *)(uVar26 + lVar29));
  }
  if ((bVar28 & 4) != 0) {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._8_4_),0x20);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)uVar6 + lVar25),0x20);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar7 + lVar25),0x20);
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar80._8_4_),0x20);
    auVar48 = insertps(auVar48,*(undefined4 *)((ulonglong)uVar6 + lVar32),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)uVar7 + lVar32),0x20);
  }
  if ((char)bVar28 < '\0') {
    auVar62 = insertps(auVar62,*(undefined4 *)(param_1 + auVar99._12_4_),0x30);
    auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)uVar43 + lVar27),0x30);
    auVar101 = insertps(auVar101,*(undefined4 *)((ulonglong)uVar8 + lVar27),0x30);
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar80._12_4_),0x30);
    auVar48 = insertps(auVar48,*(undefined4 *)((ulonglong)uVar43 + lVar33),0x30);
    auVar72 = insertps(auVar72,*(undefined4 *)((ulonglong)uVar8 + lVar33),0x30);
  }
  local_128 = (ulonglong)uVar43;
  lVar35 = (longlong)(int)(uVar41 << 2);
  pfVar1 = (float *)(param_5 + lVar35);
  if ((bVar22 & 9) == 0) {
    local_1b8 = *(undefined1 (*) [16])(param_4 + lVar35);
    auVar99 = *(undefined1 (*) [16])(param_5 + lVar35);
  }
  else {
    puVar12 = (uint *)(param_4 + lVar35);
    if ((uVar30 & 1) != 0) {
      local_1b8 = ZEXT416(*puVar12);
    }
    if ((uVar30 & 2) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[1],0x10);
    }
    if ((uVar30 & 4) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[2],0x20);
    }
    if ((uVar30 & 8) != 0) {
      local_1b8 = insertps(local_1b8,puVar12[3],0x30);
    }
    auVar99 = local_1b8;
    if ((uVar30 & 1) != 0) {
      auVar99 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar30 & 2) != 0) {
      auVar99 = insertps(auVar99,pfVar1[1],0x10);
    }
    if ((uVar30 & 4) != 0) {
      auVar99 = insertps(auVar99,pfVar1[2],0x20);
    }
    if ((uVar30 & 8) != 0) {
      auVar99 = insertps(auVar99,pfVar1[3],0x30);
    }
  }
  fVar87 = auVar67._0_4_;
  fVar116 = auVar62._0_4_;
  fVar134 = fVar116 - fVar87;
  fVar88 = auVar67._4_4_;
  fVar119 = auVar62._4_4_;
  fVar136 = fVar119 - fVar88;
  auVar135._0_8_ = CONCAT44(fVar136,fVar134);
  fVar95 = auVar67._8_4_;
  fVar120 = auVar62._8_4_;
  fVar121 = auVar62._12_4_;
  auVar135._8_4_ = fVar120 - fVar95;
  fVar96 = auVar67._12_4_;
  auVar135._12_4_ = fVar121 - fVar96;
  fVar46 = auVar48._0_4_;
  fVar109 = auVar81._0_4_;
  fVar108 = fVar109 - fVar46;
  fVar78 = auVar48._4_4_;
  fVar110 = auVar81._4_4_;
  fVar111 = fVar110 - fVar78;
  auVar130._0_8_ = CONCAT44(fVar111,fVar108);
  fVar84 = auVar48._8_4_;
  fVar114 = auVar81._8_4_;
  fVar115 = auVar81._12_4_;
  auVar130._8_4_ = fVar114 - fVar84;
  fVar86 = auVar48._12_4_;
  auVar130._12_4_ = fVar115 - fVar86;
  fVar66 = auVar72._0_4_;
  fVar97 = auVar101._0_4_;
  fVar98 = fVar97 - fVar66;
  fVar69 = auVar72._4_4_;
  fVar105 = auVar101._4_4_;
  fVar125 = fVar105 - fVar69;
  auVar123._0_8_ = CONCAT44(fVar125,fVar98);
  fVar70 = auVar72._8_4_;
  fVar106 = auVar101._8_4_;
  fVar107 = auVar101._12_4_;
  auVar123._8_4_ = fVar106 - fVar70;
  fVar71 = auVar72._12_4_;
  auVar123._12_4_ = fVar107 - fVar71;
  auVar51._0_4_ = fVar134 * fVar134;
  auVar51._4_4_ = fVar136 * fVar136;
  auVar51._8_4_ = auVar135._8_4_ * auVar135._8_4_;
  auVar51._12_4_ = auVar135._12_4_ * auVar135._12_4_;
  auVar68._0_4_ = fVar98 * fVar98 + fVar108 * fVar108 + auVar51._0_4_;
  auVar68._4_4_ = fVar125 * fVar125 + fVar111 * fVar111 + auVar51._4_4_;
  auVar68._8_4_ = auVar123._8_4_ * auVar123._8_4_ + auVar130._8_4_ * auVar130._8_4_ + auVar51._8_4_;
  auVar68._12_4_ =
       auVar123._12_4_ * auVar123._12_4_ + auVar130._12_4_ * auVar130._12_4_ + auVar51._12_4_;
  auVar48 = sqrtps(auVar51,auVar68);
  uVar30 = -(uint)(auVar68._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar41 = -(uint)(auVar68._4_4_ < _UNK_1506895e4);
  uVar43 = -(uint)(auVar68._8_4_ < _UNK_1506895e8);
  uVar45 = -(uint)(auVar68._12_4_ < _UNK_1506895ec);
  auVar52._4_4_ = uVar41;
  auVar52._0_4_ = uVar30;
  auVar63._8_4_ = auVar130._8_4_;
  auVar63._0_8_ = auVar130._0_8_;
  auVar63._12_4_ = auVar130._12_4_;
  auVar80 = divps(auVar63,auVar48);
  auVar74._8_4_ = auVar123._8_4_;
  auVar74._0_8_ = auVar123._0_8_;
  auVar74._12_4_ = auVar123._12_4_;
  auVar81 = divps(auVar74,auVar48);
  auVar102._8_4_ = auVar135._8_4_;
  auVar102._0_8_ = auVar135._0_8_;
  auVar102._12_4_ = auVar135._12_4_;
  auVar62 = divps(auVar102,auVar48);
  auVar52._8_4_ = uVar43;
  auVar52._12_4_ = uVar45;
  auVar15._4_4_ = _UNK_15076b1f4;
  auVar15._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar15._8_4_ = _UNK_15076b1f8;
  auVar15._12_4_ = _UNK_15076b1fc;
  auVar62 = blendvps(auVar62,auVar15,auVar52);
  auVar53._8_4_ = auVar135._8_4_;
  auVar53._0_8_ = auVar135._0_8_;
  auVar53._12_4_ = auVar135._12_4_;
  bVar38 = (bVar28 & 1) != 0;
  if (bVar38) {
    auVar53 = auVar62;
  }
  local_1c8._0_8_ = CONCAT44(~uVar41 & auVar80._4_4_,~uVar30 & auVar80._0_4_);
  local_1c8._8_4_ = ~uVar43 & auVar80._8_4_;
  local_1c8._12_4_ = ~uVar45 & auVar80._12_4_;
  local_278._4_4_ = ~uVar41 & auVar81._4_4_;
  local_278._0_4_ = ~uVar30 & auVar81._0_4_;
  local_278._8_4_ = ~uVar43 & auVar81._8_4_;
  local_278._12_4_ = ~uVar45 & auVar81._12_4_;
  auVar64._8_4_ = auVar130._8_4_;
  auVar64._0_8_ = auVar130._0_8_;
  auVar64._12_4_ = auVar130._12_4_;
  auVar75._8_4_ = auVar123._8_4_;
  auVar75._0_8_ = auVar123._0_8_;
  auVar75._12_4_ = auVar123._12_4_;
  if (bVar38) {
    auVar64._8_4_ = local_1c8._8_4_;
    auVar64._0_8_ = local_1c8._0_8_;
    auVar64._12_4_ = local_1c8._12_4_;
    auVar75 = local_278;
  }
  auVar155._4_4_ = iVar158 * 3;
  auVar155._0_4_ = iVar154 * 3;
  auVar155._8_4_ = iVar47 * 3;
  auVar155._12_4_ = iVar61 * 3;
  auVar82._4_4_ = iVar85 * 3;
  auVar82._0_4_ = iVar79 * 3;
  auVar82._8_4_ = iVar60 * 3;
  auVar82._12_4_ = iVar89 * 3;
  auVar81 = blendps(auVar135,auVar53,1);
  bVar38 = (bVar28 & 2) != 0;
  auVar80 = auVar81;
  if (bVar38) {
    auVar80 = auVar62;
  }
  auVar155 = auVar155 & auVar141;
  auVar82 = auVar82 & auVar141;
  auVar67 = blendps(auVar130,auVar64,1);
  auVar54 = auVar67;
  if (bVar38) {
    auVar54._8_4_ = local_1c8._8_4_;
    auVar54._0_8_ = local_1c8._0_8_;
    auVar54._12_4_ = local_1c8._12_4_;
  }
  auVar72 = ___xmm_0000000c0000000c0000000c0000000c & auVar141;
  auVar90 = blendps(auVar123,auVar75,1);
  auVar101 = auVar90;
  if (bVar38) {
    auVar101 = local_278;
  }
  auVar81 = blendps(auVar81,auVar80,2);
  bVar38 = (bVar28 & 4) != 0;
  auVar80 = auVar81;
  if (bVar38) {
    auVar80 = auVar62;
  }
  lVar35 = param_2 + (longlong)auVar155._0_4_ * 4;
  lVar37 = param_2 + (longlong)auVar82._0_4_ * 4;
  auVar67 = blendps(auVar67,auVar54,2);
  auVar55 = auVar67;
  if (bVar38) {
    auVar55._8_4_ = local_1c8._8_4_;
    auVar55._0_8_ = local_1c8._0_8_;
    auVar55._12_4_ = local_1c8._12_4_;
  }
  lVar4 = param_2 + (longlong)auVar155._4_4_ * 4;
  lVar5 = param_2 + (longlong)auVar82._4_4_ * 4;
  auVar90 = blendps(auVar90,auVar101,2);
  auVar101 = auVar90;
  if (bVar38) {
    auVar101 = local_278;
  }
  auVar100 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar21)),
                      *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar23),0x10);
  auVar118 = insertps(ZEXT416(*(uint *)((ulonglong)auVar72._0_4_ + lVar29)),
                      *(undefined4 *)((ulonglong)auVar72._4_4_ + lVar31),0x10);
  auVar150 = insertps(ZEXT416(*(uint *)(uVar36 + lVar35)),*(undefined4 *)(uVar24 + lVar4),0x10);
  auVar117 = insertps(ZEXT416(*(uint *)(uVar26 + lVar35)),*(undefined4 *)(uVar34 + lVar4),0x10);
  auVar156 = insertps(ZEXT416(*(uint *)(uVar36 + lVar37)),*(undefined4 *)(uVar24 + lVar5),0x10);
  auVar91 = insertps(ZEXT416(*(uint *)(uVar26 + lVar37)),*(undefined4 *)(uVar34 + lVar5),0x10);
  auVar149 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar155._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar155._4_4_ * 4),0x10);
  lVar21 = param_2 + (longlong)auVar155._8_4_ * 4;
  auVar142 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar82._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar82._4_4_ * 4),0x10);
  lVar23 = param_2 + (longlong)auVar82._8_4_ * 4;
  auVar80 = blendps(auVar81,auVar80,4);
  bVar38 = -1 < (char)bVar28;
  if (bVar38) {
    auVar62 = auVar80;
  }
  auVar81 = insertps(auVar100,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar25),0x20);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)auVar72._8_4_ + lVar32),0x20);
  lVar25 = param_2 + (longlong)auVar155._12_4_ * 4;
  auVar149 = insertps(auVar149,*(undefined4 *)(param_2 + (longlong)auVar155._8_4_ * 4),0x20);
  auVar150 = insertps(auVar150,*(undefined4 *)((ulonglong)uVar6 + lVar21),0x20);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)uVar7 + lVar21),0x20);
  auVar142 = insertps(auVar142,*(undefined4 *)(param_2 + (longlong)auVar82._8_4_ * 4),0x20);
  auVar156 = insertps(auVar156,*(undefined4 *)((ulonglong)uVar6 + lVar23),0x20);
  lVar21 = param_2 + (longlong)auVar82._12_4_ * 4;
  auVar100 = insertps(auVar91,*(undefined4 *)((ulonglong)uVar7 + lVar23),0x20);
  auVar67 = blendps(auVar67,auVar55,4);
  if (bVar38) {
    local_1c8 = auVar67;
  }
  auVar81 = insertps(auVar81,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar27),0x30);
  auVar118 = insertps(auVar118,*(undefined4 *)((ulonglong)auVar72._12_4_ + lVar33),0x30);
  auVar149 = insertps(auVar149,*(undefined4 *)(param_2 + (longlong)auVar155._12_4_ * 4),0x30);
  auVar150 = insertps(auVar150,*(undefined4 *)(local_128 + lVar25),0x30);
  auVar91 = insertps(auVar117,*(undefined4 *)((ulonglong)uVar8 + lVar25),0x30);
  auVar117 = insertps(auVar142,*(undefined4 *)(param_2 + (longlong)auVar82._12_4_ * 4),0x30);
  auVar142 = insertps(auVar156,*(undefined4 *)(local_128 + lVar21),0x30);
  auVar72 = insertps(auVar100,*(undefined4 *)((ulonglong)uVar8 + lVar21),0x30);
  auVar101 = blendps(auVar90,auVar101,4);
  if (bVar38) {
    local_278 = auVar101;
  }
  local_268 = auVar113._0_4_;
  auVar90 = pmovsxbd(auVar81,local_268);
  auVar56._0_4_ = auVar90._0_4_ << 2;
  auVar56._4_4_ = auVar90._4_4_ << 2;
  auVar56._8_4_ = auVar90._8_4_ << 2;
  auVar56._12_4_ = auVar90._12_4_ << 2;
  auVar56 = auVar56 & auVar141;
  local_198 = auVar104._0_4_;
  auVar90 = pmovsxbd(auVar56,local_198);
  auVar57._0_4_ = auVar90._0_4_ << 2;
  auVar57._4_4_ = auVar90._4_4_ << 2;
  auVar57._8_4_ = auVar90._8_4_ << 2;
  auVar57._12_4_ = auVar90._12_4_ << 2;
  auVar57 = auVar57 & auVar141;
  auVar90 = insertps(ZEXT416(*(uint *)(param_9 + auVar56._0_4_)),
                     *(undefined4 *)(param_9 + auVar56._4_4_),0x10);
  auVar90 = insertps(auVar90,*(undefined4 *)(param_9 + auVar56._8_4_),0x20);
  auVar90 = insertps(auVar90,*(undefined4 *)(param_9 + auVar56._12_4_),0x30);
  auVar156 = blendps(auVar80,auVar62,8);
  auVar62 = insertps(ZEXT416(*(uint *)(param_12 + auVar57._0_4_)),
                     *(undefined4 *)(param_12 + auVar57._4_4_),0x10);
  auVar62 = insertps(auVar62,*(undefined4 *)(param_12 + auVar57._8_4_),0x20);
  auVar80 = insertps(auVar62,*(undefined4 *)(param_12 + auVar57._12_4_),0x30);
  auVar100 = blendps(auVar67,local_1c8,8);
  auVar67 = blendps(auVar101,local_278,8);
  local_f8 = auVar48._0_4_;
  uStack_f4 = auVar48._4_4_;
  uStack_f0 = auVar48._8_4_;
  uStack_ec = auVar48._12_4_;
  auVar16._4_4_ = _UNK_15076b1f4;
  auVar16._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar16._8_4_ = _UNK_15076b1f8;
  auVar16._12_4_ = _UNK_15076b1fc;
  auVar62 = divps(auVar16,local_1b8);
  auVar58._4_4_ = -(uint)(local_1b8._4_4_ < _UNK_1506895d4);
  auVar58._0_4_ = -(uint)(local_1b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar58._8_4_ = -(uint)(local_1b8._8_4_ < _UNK_1506895d8);
  auVar58._12_4_ = -(uint)(local_1b8._12_4_ < _UNK_1506895dc);
  auVar48 = blendvps(auVar62,auVar16,auVar58);
  local_2e8 = auVar81._0_4_;
  fStack_2e4 = auVar81._4_4_;
  fStack_2e0 = auVar81._8_4_;
  fStack_2dc = auVar81._12_4_;
  local_288 = auVar118._0_4_;
  fStack_284 = auVar118._4_4_;
  fStack_280 = auVar118._8_4_;
  fStack_27c = auVar118._12_4_;
  auVar93._0_4_ = local_2e8 + local_288;
  auVar93._4_4_ = fStack_2e4 + fStack_284;
  auVar93._8_4_ = fStack_2e0 + fStack_280;
  auVar93._12_4_ = fStack_2dc + fStack_27c;
  auVar62 = divps(auVar90,auVar93);
  auVar62 = sqrtps(auVar62,auVar62);
  fVar98 = param_6 * auVar90._0_4_ * param_6;
  fVar125 = param_6 * auVar90._4_4_ * param_6;
  fVar108 = param_6 * auVar90._8_4_ * param_6;
  fVar111 = param_6 * auVar90._12_4_ * param_6;
  fVar134 = auVar62._0_4_ * (auVar80._0_4_ + auVar80._0_4_) * auVar48._0_4_ * param_6;
  fVar136 = auVar62._4_4_ * (auVar80._4_4_ + auVar80._4_4_) * auVar48._4_4_ * param_6;
  fVar77 = auVar62._8_4_ * (auVar80._8_4_ + auVar80._8_4_) * auVar48._8_4_ * param_6;
  param_6 = auVar62._12_4_ * (auVar80._12_4_ + auVar80._12_4_) * auVar48._12_4_ * param_6;
  fVar128 = auVar100._0_4_;
  fVar131 = auVar100._4_4_;
  fVar132 = auVar100._8_4_;
  fVar133 = auVar100._12_4_;
  fVar122 = auVar67._0_4_;
  fVar124 = auVar67._4_4_;
  fVar126 = auVar67._8_4_;
  fVar127 = auVar67._12_4_;
  local_1a8 = auVar99._0_4_;
  fStack_1a4 = auVar99._4_4_;
  fStack_1a0 = auVar99._8_4_;
  fStack_19c = auVar99._12_4_;
  auVar59._0_4_ =
       ((float)(__xmm_80000000800000008000000080000000 ^ (uint)fVar98) *
        ((float)(~uVar30 & local_f8) - local_1b8._0_4_) - local_1a8) -
       ((((fVar97 - auVar91._0_4_) - fVar66) + auVar72._0_4_) * fVar122 +
       (((fVar109 - auVar150._0_4_) - fVar46) + auVar142._0_4_) * fVar128 +
       (((fVar116 - auVar149._0_4_) - fVar87) + auVar117._0_4_) * auVar156._0_4_) * fVar134;
  auVar59._4_4_ =
       ((float)(_UNK_150651574 ^ (uint)fVar125) * ((float)(~uVar41 & uStack_f4) - local_1b8._4_4_) -
       fStack_1a4) -
       ((((fVar105 - auVar91._4_4_) - fVar69) + auVar72._4_4_) * fVar124 +
       (((fVar110 - auVar150._4_4_) - fVar78) + auVar142._4_4_) * fVar131 +
       (((fVar119 - auVar149._4_4_) - fVar88) + auVar117._4_4_) * auVar156._4_4_) * fVar136;
  auVar59._8_4_ =
       ((float)(_UNK_150651578 ^ (uint)fVar108) * ((float)(~uVar43 & uStack_f0) - local_1b8._8_4_) -
       fStack_1a0) -
       ((((fVar106 - auVar91._8_4_) - fVar70) + auVar72._8_4_) * fVar126 +
       (((fVar114 - auVar150._8_4_) - fVar84) + auVar142._8_4_) * fVar132 +
       (((fVar120 - auVar149._8_4_) - fVar95) + auVar117._8_4_) * auVar156._8_4_) * fVar77;
  auVar59._12_4_ =
       ((float)(_UNK_15065157c ^ (uint)fVar111) * ((float)(~uVar45 & uStack_ec) - local_1b8._12_4_)
       - fStack_19c) -
       ((((fVar107 - auVar91._12_4_) - fVar71) + auVar72._12_4_) * fVar127 +
       (((fVar115 - auVar150._12_4_) - fVar86) + auVar142._12_4_) * fVar133 +
       (((fVar121 - auVar149._12_4_) - fVar96) + auVar117._12_4_) * auVar156._12_4_) * param_6;
  auVar76._0_4_ = (fVar134 + fVar98) * auVar93._0_4_ + ___xmm_3f8000003f8000003f8000003f800000;
  auVar76._4_4_ = (fVar136 + fVar125) * auVar93._4_4_ + _UNK_15076b1f4;
  auVar76._8_4_ = (fVar77 + fVar108) * auVar93._8_4_ + _UNK_15076b1f8;
  auVar76._12_4_ = (param_6 + fVar111) * auVar93._12_4_ + _UNK_15076b1fc;
  auVar62 = divps(auVar59,auVar76);
  fVar98 = auVar62._0_4_;
  auVar65._0_4_ = local_1a8 + fVar98;
  fVar125 = auVar62._4_4_;
  auVar65._4_4_ = fStack_1a4 + fVar125;
  fVar108 = auVar62._8_4_;
  auVar65._8_4_ = fStack_1a0 + fVar108;
  fVar111 = auVar62._12_4_;
  auVar65._12_4_ = fStack_19c + fVar111;
  if ((bVar28 & 1) != 0) {
    *pfVar1 = auVar65._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar65,1);
    *(undefined8 *)(pfVar1 + 1) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar65,2);
    *(undefined8 *)(pfVar1 + 2) = uVar13;
  }
  fVar134 = auVar156._0_4_ * fVar98;
  fVar136 = auVar156._4_4_ * fVar125;
  fVar77 = auVar156._8_4_ * fVar108;
  fVar139 = auVar156._12_4_ * fVar111;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar65,3);
    *(undefined8 *)(pfVar1 + 3) = uVar13;
  }
  auVar103._0_4_ = fVar116 + local_2e8 * fVar134;
  auVar103._4_4_ = fVar119 + fStack_2e4 * fVar136;
  auVar103._8_4_ = fVar120 + fStack_2e0 * fVar77;
  auVar103._12_4_ = fVar121 + fStack_2dc * fVar139;
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + auVar92._0_4_) = auVar103._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar103,1);
    *(undefined8 *)(param_1 + auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar103,2);
    *(undefined8 *)(param_1 + auVar92._8_4_) = uVar13;
  }
  uVar20 = fStack_2dc * fVar133 * fVar111;
  uVar19 = fStack_2e0 * fVar132 * fVar108;
  uVar18 = fStack_2e4 * fVar131 * fVar125;
  uVar17 = local_2e8 * fVar128 * fVar98;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar103,3);
    *(undefined8 *)(param_1 + auVar92._12_4_) = uVar13;
    auVar94._0_4_ = fVar109 + (float)uVar17;
    auVar94._4_4_ = fVar110 + (float)uVar18;
    auVar94._8_4_ = fVar114 + (float)uVar19;
    auVar94._12_4_ = fVar115 + (float)uVar20;
  }
  else {
    auVar94._0_4_ = fVar109 + (float)uVar17;
    auVar94._4_4_ = fVar110 + (float)uVar18;
    auVar94._8_4_ = fVar114 + (float)uVar19;
    auVar94._12_4_ = fVar115 + (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar92._0_4_) = auVar94._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar94,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar94,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._8_4_) = uVar13;
  }
  uVar20 = fStack_2dc * fVar127 * fVar111;
  uVar19 = fStack_2e0 * fVar126 * fVar108;
  uVar18 = fStack_2e4 * fVar124 * fVar125;
  uVar17 = local_2e8 * fVar122 * fVar98;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar94,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar92._12_4_) = uVar13;
    auVar83._0_4_ = fVar97 + (float)uVar17;
    auVar83._4_4_ = fVar105 + (float)uVar18;
    auVar83._8_4_ = fVar106 + (float)uVar19;
    auVar83._12_4_ = fVar107 + (float)uVar20;
  }
  else {
    auVar83._0_4_ = fVar97 + (float)uVar17;
    auVar83._4_4_ = fVar105 + (float)uVar18;
    auVar83._8_4_ = fVar106 + (float)uVar19;
    auVar83._12_4_ = fVar107 + (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar92._0_4_) = auVar83._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar83,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar83,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar83,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar92._12_4_) = uVar13;
  }
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar92._0_4_) = local_2e8;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar81,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar81,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar81,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar92._12_4_) = uVar13;
    auVar151._0_4_ = fVar87 - fVar134 * local_288;
    auVar151._4_4_ = fVar88 - fVar136 * fStack_284;
    auVar151._8_4_ = fVar95 - fVar77 * fStack_280;
    auVar151._12_4_ = fVar96 - fVar139 * fStack_27c;
  }
  else {
    auVar151._0_4_ = fVar87 - fVar134 * local_288;
    auVar151._4_4_ = fVar88 - fVar136 * fStack_284;
    auVar151._8_4_ = fVar95 - fVar77 * fStack_280;
    auVar151._12_4_ = fVar96 - fVar139 * fStack_27c;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + auVar73._0_4_) = auVar151._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar151,1);
    *(undefined8 *)(param_1 + auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar151,2);
    *(undefined8 *)(param_1 + auVar73._8_4_) = uVar13;
  }
  uVar20 = fVar133 * fVar111 * fStack_27c;
  uVar19 = fVar132 * fVar108 * fStack_280;
  uVar18 = fVar131 * fVar125 * fStack_284;
  uVar17 = fVar128 * fVar98 * local_288;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar151,3);
    *(undefined8 *)(param_1 + auVar73._12_4_) = uVar13;
    auVar143._0_4_ = fVar46 - (float)uVar17;
    auVar143._4_4_ = fVar78 - (float)uVar18;
    auVar143._8_4_ = fVar84 - (float)uVar19;
    auVar143._12_4_ = fVar86 - (float)uVar20;
  }
  else {
    auVar143._0_4_ = fVar46 - (float)uVar17;
    auVar143._4_4_ = fVar78 - (float)uVar18;
    auVar143._8_4_ = fVar84 - (float)uVar19;
    auVar143._12_4_ = fVar86 - (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar73._0_4_) = auVar143._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar143,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar143,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._8_4_) = uVar13;
  }
  uVar20 = fVar127 * fVar111 * fStack_27c;
  uVar19 = fVar126 * fVar108 * fStack_280;
  uVar18 = fVar124 * fVar125 * fStack_284;
  uVar17 = fVar122 * fVar98 * local_288;
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar143,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar73._12_4_) = uVar13;
    auVar112._0_4_ = fVar66 - (float)uVar17;
    auVar112._4_4_ = fVar69 - (float)uVar18;
    auVar112._8_4_ = fVar70 - (float)uVar19;
    auVar112._12_4_ = fVar71 - (float)uVar20;
  }
  else {
    auVar112._0_4_ = fVar66 - (float)uVar17;
    auVar112._4_4_ = fVar69 - (float)uVar18;
    auVar112._8_4_ = fVar70 - (float)uVar19;
    auVar112._12_4_ = fVar71 - (float)uVar20;
  }
  if ((bVar28 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar73._0_4_) = auVar112._0_4_;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar112,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar112,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar112,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar73._12_4_) = uVar13;
  }
  if ((bVar28 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar73._0_4_) = local_288;
  }
  if ((bVar28 & 2) != 0) {
    uVar13 = extractps(auVar118,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._4_4_) = uVar13;
  }
  if ((bVar28 & 4) != 0) {
    uVar13 = extractps(auVar118,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._8_4_) = uVar13;
  }
  if ((char)bVar28 < '\0') {
    uVar13 = extractps(auVar118,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar73._12_4_) = uVar13;
  }
  return;
}

// ApplyXPBDSpringDampingConstraintsWithWeightMaps_sse4 @ 14094ae20

/* WARNING: Removing unreachable block (ram,0x00014094ba72) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyXPBDSpringDampingConstraintsWithWeightMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,byte param_7,longlong param_8,longlong param_9,byte param_10,
               longlong param_11,longlong param_12,uint param_13)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined8 uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  int unaff_R15D;
  longlong lVar33;
  bool bVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  int iVar42;
  int iVar50;
  int iVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar63;
  float fVar64;
  undefined1 auVar58 [16];
  float fVar65;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar72;
  float fVar73;
  undefined1 auVar67 [16];
  float fVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  int iVar76;
  float fVar80;
  float fVar83;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  int iVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  int iVar87;
  undefined1 auVar79 [16];
  float fVar91;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar92;
  float fVar97;
  float fVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar98;
  float fVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar130;
  undefined1 auVar127 [16];
  undefined1 auVar129 [16];
  float fVar135;
  undefined1 auVar131 [16];
  float fVar136;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar137;
  float fVar141;
  float fVar142;
  undefined1 auVar138 [16];
  float fVar143;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  float fVar144;
  float fVar150;
  float fVar152;
  undefined1 auVar147 [16];
  float fVar145;
  int iVar146;
  int iVar151;
  float fVar153;
  float fVar154;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_288 [16];
  undefined4 local_268;
  undefined1 local_1b8 [16];
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 local_f8;
  undefined1 auVar111 [16];
  undefined1 auVar122 [16];
  undefined1 auVar128 [16];
  
  uVar36 = param_13 + 3;
  if (-1 < (int)param_13) {
    uVar36 = param_13;
  }
  if ((int)(uVar36 & 0xfffffffc) < 1) {
    uVar17 = 0;
    if ((int)param_13 < 1) {
      return;
    }
  }
  else {
    uVar27 = 0;
    uVar17 = 0;
    do {
      uVar28 = 0;
      auVar53 = (undefined1  [16])0x0;
      if ((param_7 & 1) != 0) {
        auVar53 = ZEXT416(*(uint *)(param_8 + uVar17));
      }
      piVar2 = (int *)(param_3 + uVar27 * 2);
      piVar3 = (int *)(param_3 + 0x10 + uVar27 * 2);
      if ((param_10 & 1) != 0) {
        uVar28 = (ulonglong)*(uint *)(param_11 + uVar17);
      }
      auVar147._8_8_ = 0;
      auVar147._0_8_ = uVar28;
      unaff_R15D = *piVar2 << 4;
      lVar33 = (longlong)unaff_R15D;
      lVar22 = (longlong)(piVar2[2] * 0x10);
      lVar18 = (longlong)(*piVar3 << 4);
      lVar32 = (longlong)(piVar3[2] * 0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar33)),*(undefined4 *)(param_1 + lVar22),0x10
                        );
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + lVar18),0x20);
      auVar94 = insertps(auVar93,*(undefined4 *)(param_1 + lVar32),0x30);
      fVar123 = auVar94._4_4_;
      fVar126 = auVar94._12_4_;
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                         *(undefined4 *)(param_1 + 4 + lVar22),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar18),0x20);
      auVar88 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar32),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                         *(undefined4 *)(param_1 + 8 + lVar22),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar18),0x20);
      auVar77 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar32),0x30);
      fVar114 = auVar77._12_4_;
      lVar20 = (longlong)(piVar2[1] << 4);
      lVar30 = (longlong)(piVar2[3] * 0x10);
      lVar16 = (longlong)(piVar3[1] << 4);
      lVar24 = (longlong)(piVar3[3] * 0x10);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + lVar20)),*(undefined4 *)(param_1 + lVar30),0x10
                        );
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + lVar16),0x20);
      auVar131 = insertps(auVar93,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                         *(undefined4 *)(param_1 + 4 + lVar30),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar16),0x20);
      auVar138 = insertps(auVar93,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar93 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                         *(undefined4 *)(param_1 + 8 + lVar30),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar16),0x20);
      auVar78 = insertps(auVar93,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      fVar85 = auVar78._12_4_;
      lVar23 = (longlong)(*piVar2 * 3);
      lVar21 = (longlong)(piVar2[2] * 3);
      auVar117 = insertps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),
                          *(undefined4 *)(param_2 + lVar21 * 4),0x10);
      auVar67 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar21 * 4),0x10);
      auVar127 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),
                          *(undefined4 *)(param_2 + 8 + lVar21 * 4),0x10);
      auVar53 = pmovsxbd(auVar53,auVar53);
      auVar93 = insertps(ZEXT416(*(uint *)(param_9 + (auVar53._0_4_ << 2))),
                         *(undefined4 *)(param_9 + auVar53._4_4_ * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_9 + (auVar53._8_4_ << 2)),0x20);
      auVar58 = insertps(auVar93,*(undefined4 *)(param_9 + (auVar53._12_4_ << 2)),0x30);
      auVar53 = pmovsxbd(auVar147,auVar147);
      auVar93 = insertps(ZEXT416(*(uint *)(param_12 + (auVar53._0_4_ << 2))),
                         *(undefined4 *)(param_12 + auVar53._4_4_ * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_12 + (auVar53._8_4_ << 2)),0x20);
      auVar52 = insertps(auVar93,*(undefined4 *)(param_12 + (auVar53._12_4_ << 2)),0x30);
      uVar28 = uVar27 & 0xffffffff;
      fVar124 = auVar131._0_4_;
      fVar144 = auVar94._0_4_;
      auVar129._0_4_ = fVar144 - fVar124;
      fVar125 = auVar131._4_4_;
      auVar129._4_4_ = fVar123 - fVar125;
      fVar135 = auVar131._8_4_;
      fVar152 = auVar94._8_4_;
      auVar129._8_4_ = fVar152 - fVar135;
      fVar136 = auVar131._12_4_;
      auVar129._12_4_ = fVar126 - fVar136;
      fVar66 = auVar88._0_4_;
      fVar137 = auVar138._0_4_;
      auVar94._0_4_ = fVar66 - fVar137;
      fVar72 = auVar88._4_4_;
      fVar141 = auVar138._4_4_;
      auVar94._4_4_ = fVar72 - fVar141;
      fVar73 = auVar88._8_4_;
      fVar74 = auVar88._12_4_;
      fVar142 = auVar138._8_4_;
      auVar94._8_4_ = fVar73 - fVar142;
      fVar143 = auVar138._12_4_;
      auVar94._12_4_ = fVar74 - fVar143;
      fVar110 = auVar77._0_4_;
      fVar121 = auVar78._0_4_;
      auVar131._0_4_ = fVar110 - fVar121;
      fVar80 = auVar77._4_4_;
      fVar97 = auVar78._4_4_;
      auVar131._4_4_ = fVar80 - fVar97;
      fVar83 = auVar77._8_4_;
      fVar99 = auVar78._8_4_;
      auVar131._8_4_ = fVar83 - fVar99;
      auVar131._12_4_ = fVar114 - fVar85;
      auVar53._0_4_ = auVar129._0_4_ * auVar129._0_4_;
      auVar53._4_4_ = auVar129._4_4_ * auVar129._4_4_;
      auVar53._8_4_ = auVar129._8_4_ * auVar129._8_4_;
      auVar53._12_4_ = auVar129._12_4_ * auVar129._12_4_;
      auVar133._0_4_ =
           auVar131._0_4_ * auVar131._0_4_ + auVar94._0_4_ * auVar94._0_4_ + auVar53._0_4_;
      auVar133._4_4_ =
           auVar131._4_4_ * auVar131._4_4_ + auVar94._4_4_ * auVar94._4_4_ + auVar53._4_4_;
      auVar133._8_4_ =
           auVar131._8_4_ * auVar131._8_4_ + auVar94._8_4_ * auVar94._8_4_ + auVar53._8_4_;
      auVar133._12_4_ =
           auVar131._12_4_ * auVar131._12_4_ + auVar94._12_4_ * auVar94._12_4_ + auVar53._12_4_;
      auVar53 = sqrtps(auVar53,auVar133);
      uVar35 = -(uint)(auVar133._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
      uVar37 = -(uint)(auVar133._4_4_ < _UNK_1506895e4);
      uVar38 = -(uint)(auVar133._8_4_ < _UNK_1506895e8);
      uVar40 = -(uint)(auVar133._12_4_ < _UNK_1506895ec);
      auVar77._4_4_ = uVar37;
      auVar77._0_4_ = uVar35;
      auVar147 = divps(auVar129,auVar53);
      auVar78 = divps(auVar94,auVar53);
      auVar94 = divps(auVar131,auVar53);
      auVar77._8_4_ = uVar38;
      auVar77._12_4_ = uVar40;
      auVar93._4_4_ = _UNK_15076b1f4;
      auVar93._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
      auVar93._8_4_ = _UNK_15076b1f8;
      auVar93._12_4_ = _UNK_15076b1fc;
      auVar131 = blendvps(auVar147,auVar93,auVar77);
      fVar109 = (float)(~uVar35 & auVar78._0_4_);
      fVar113 = (float)(~uVar37 & auVar78._4_4_);
      fVar115 = (float)(~uVar38 & auVar78._8_4_);
      fVar116 = (float)(~uVar40 & auVar78._12_4_);
      auVar53 = *(undefined1 (*) [16])(param_4 + uVar28);
      fVar105 = (float)(~uVar35 & auVar94._0_4_);
      fVar106 = (float)(~uVar37 & auVar94._4_4_);
      fVar107 = (float)(~uVar38 & auVar94._8_4_);
      fVar108 = (float)(~uVar40 & auVar94._12_4_);
      auVar77 = divps(auVar93,auVar53);
      auVar78._4_4_ = -(uint)(auVar53._4_4_ < _UNK_1506895d4);
      auVar78._0_4_ = -(uint)(auVar53._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
      auVar78._8_4_ = -(uint)(auVar53._8_4_ < _UNK_1506895d8);
      auVar78._12_4_ = -(uint)(auVar53._12_4_ < _UNK_1506895dc);
      auVar147 = blendvps(auVar77,auVar93,auVar78);
      uVar35 = *(uint *)(param_1 + 0xc + lVar33);
      uVar37 = *(uint *)(param_1 + 0xc + lVar22);
      auVar53 = insertps(ZEXT416(uVar35),ZEXT416(uVar37),0x10);
      uVar38 = *(uint *)(param_1 + 0xc + lVar18);
      auVar53 = insertps(auVar53,ZEXT416(uVar38),0x20);
      uVar40 = *(uint *)(param_1 + 0xc + lVar32);
      auVar53 = insertps(auVar53,ZEXT416(uVar40),0x30);
      uVar4 = *(uint *)(param_1 + 0xc + lVar20);
      uVar39 = *(uint *)(param_1 + 0xc + lVar30);
      auVar93 = insertps(ZEXT416(uVar4),ZEXT416(uVar39),0x10);
      uVar41 = *(uint *)(param_1 + 0xc + lVar16);
      auVar93 = insertps(auVar93,ZEXT416(uVar41),0x20);
      lVar21 = (longlong)(*piVar3 * 3);
      auVar77 = insertps(auVar117,*(undefined4 *)(param_2 + lVar21 * 4),0x20);
      uVar5 = *(uint *)(param_1 + 0xc + lVar24);
      auVar93 = insertps(auVar93,ZEXT416(uVar5),0x30);
      auVar78 = insertps(auVar67,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x20);
      fVar92 = auVar53._0_4_;
      fVar98 = auVar53._4_4_;
      fVar100 = auVar53._12_4_;
      fVar130 = auVar93._0_4_;
      auVar117._0_4_ = fVar92 + fVar130;
      fVar102 = auVar93._4_4_;
      auVar117._4_4_ = fVar98 + fVar102;
      fVar91 = auVar53._8_4_;
      fVar103 = auVar93._8_4_;
      auVar117._8_4_ = fVar91 + fVar103;
      fVar104 = auVar93._12_4_;
      auVar117._12_4_ = fVar100 + fVar104;
      auVar53 = divps(auVar58,auVar117);
      auVar58 = sqrtps(auVar94,auVar53);
      auVar53 = insertps(auVar127,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x20);
      lVar21 = (longlong)(piVar3[2] * 3);
      auVar67 = insertps(auVar77,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar94 = insertps(auVar78,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar53 = insertps(auVar53,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      lVar23 = (longlong)(piVar2[1] * 3);
      lVar26 = (longlong)(piVar2[3] * 3);
      lVar31 = (longlong)(piVar3[1] * 3);
      lVar21 = (longlong)(piVar3[3] * 3);
      auVar93 = insertps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + lVar26 * 4),0x10);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_2 + lVar31 * 4),0x20);
      auVar93 = insertps(auVar93,*(undefined4 *)(param_2 + lVar21 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 4 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 4 + lVar26 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar31 * 4),0x20);
      auVar78 = insertps(auVar77,*(undefined4 *)(param_2 + 4 + lVar21 * 4),0x30);
      auVar77 = insertps(ZEXT416(*(uint *)(param_2 + 8 + lVar23 * 4)),
                         *(undefined4 *)(param_2 + 8 + lVar26 * 4),0x10);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar31 * 4),0x20);
      auVar77 = insertps(auVar77,*(undefined4 *)(param_2 + 8 + lVar21 * 4),0x30);
      fVar75 = auVar58._0_4_ * (auVar52._0_4_ + auVar52._0_4_) * auVar147._0_4_ * param_6;
      fVar81 = auVar58._4_4_ * (auVar52._4_4_ + auVar52._4_4_) * auVar147._4_4_ * param_6;
      fVar84 = auVar58._8_4_ * (auVar52._8_4_ + auVar52._8_4_) * auVar147._8_4_ * param_6;
      fVar86 = auVar58._12_4_ * (auVar52._12_4_ + auVar52._12_4_) * auVar147._12_4_ * param_6;
      pfVar1 = (float *)(param_5 + uVar28);
      fVar57 = *pfVar1;
      fVar63 = pfVar1[1];
      fVar64 = pfVar1[2];
      fVar65 = pfVar1[3];
      auVar88._0_4_ =
           ((((fVar110 - auVar53._0_4_) - fVar121) + auVar77._0_4_) * fVar105 +
           (((fVar66 - auVar94._0_4_) - fVar137) + auVar78._0_4_) * fVar109 +
           (((fVar144 - auVar67._0_4_) - fVar124) + auVar93._0_4_) * auVar131._0_4_) *
           (float)((uint)fVar75 ^ __xmm_80000000800000008000000080000000) - fVar57;
      auVar88._4_4_ =
           ((((fVar80 - auVar53._4_4_) - fVar97) + auVar77._4_4_) * fVar106 +
           (((fVar72 - auVar94._4_4_) - fVar141) + auVar78._4_4_) * fVar113 +
           (((fVar123 - auVar67._4_4_) - fVar125) + auVar93._4_4_) * auVar131._4_4_) *
           (float)((uint)fVar81 ^ _UNK_150651574) - fVar63;
      auVar88._8_4_ =
           ((((fVar83 - auVar53._8_4_) - fVar99) + auVar77._8_4_) * fVar107 +
           (((fVar73 - auVar94._8_4_) - fVar142) + auVar78._8_4_) * fVar115 +
           (((fVar152 - auVar67._8_4_) - fVar135) + auVar93._8_4_) * auVar131._8_4_) *
           (float)((uint)fVar84 ^ _UNK_150651578) - fVar64;
      auVar88._12_4_ =
           ((((fVar114 - auVar53._12_4_) - fVar85) + auVar77._12_4_) * fVar108 +
           (((fVar74 - auVar94._12_4_) - fVar143) + auVar78._12_4_) * fVar116 +
           (((fVar126 - auVar67._12_4_) - fVar136) + auVar93._12_4_) * auVar131._12_4_) *
           (float)((uint)fVar86 ^ _UNK_15065157c) - fVar65;
      auVar127._0_4_ = auVar117._0_4_ * fVar75 + ___xmm_3f8000003f8000003f8000003f800000;
      auVar127._4_4_ = auVar117._4_4_ * fVar81 + _UNK_15076b1f4;
      auVar127._8_4_ = auVar117._8_4_ * fVar84 + _UNK_15076b1f8;
      auVar127._12_4_ = auVar117._12_4_ * fVar86 + _UNK_15076b1fc;
      auVar53 = divps(auVar88,auVar127);
      fVar75 = auVar53._0_4_;
      fVar145 = auVar131._0_4_ * fVar75;
      fVar81 = auVar53._4_4_;
      fVar150 = auVar131._4_4_ * fVar81;
      fVar84 = auVar53._8_4_;
      fVar153 = auVar131._8_4_ * fVar84;
      fVar86 = auVar53._12_4_;
      fVar154 = auVar131._12_4_ * fVar86;
      auVar52._0_4_ = fVar92 * fVar145 + fVar144;
      auVar52._4_4_ = fVar98 * fVar150 + fVar123;
      auVar52._8_4_ = fVar91 * fVar153 + fVar152;
      auVar52._12_4_ = fVar100 * fVar154 + fVar126;
      fVar109 = fVar109 * fVar75;
      fVar113 = fVar113 * fVar81;
      fVar115 = fVar115 * fVar84;
      fVar116 = fVar116 * fVar86;
      *(float *)(param_1 + lVar33) = auVar52._0_4_;
      uVar8 = extractps(auVar52,1);
      *(undefined8 *)(param_1 + lVar22) = uVar8;
      auVar67._0_4_ = fVar92 * fVar109 + fVar66;
      auVar67._4_4_ = fVar98 * fVar113 + fVar72;
      auVar67._8_4_ = fVar91 * fVar115 + fVar73;
      auVar67._12_4_ = fVar100 * fVar116 + fVar74;
      uVar8 = extractps(auVar52,2);
      *(undefined8 *)(param_1 + lVar18) = uVar8;
      uVar8 = extractps(auVar52,3);
      *(undefined8 *)(param_1 + lVar32) = uVar8;
      fVar105 = fVar105 * fVar75;
      fVar106 = fVar106 * fVar81;
      fVar107 = fVar107 * fVar84;
      fVar108 = fVar108 * fVar86;
      *(float *)(param_1 + 4 + lVar33) = auVar67._0_4_;
      uVar8 = extractps(auVar67,1);
      *(undefined8 *)(param_1 + 4 + lVar22) = uVar8;
      uVar8 = extractps(auVar67,2);
      *(undefined8 *)(param_1 + 4 + lVar18) = uVar8;
      auVar138._0_4_ = fVar92 * fVar105 + fVar110;
      auVar138._4_4_ = fVar98 * fVar106 + fVar80;
      auVar138._8_4_ = fVar91 * fVar107 + fVar83;
      auVar138._12_4_ = fVar100 * fVar108 + fVar114;
      uVar8 = extractps(auVar67,3);
      *(undefined8 *)(param_1 + 4 + lVar32) = uVar8;
      *(float *)(param_1 + 8 + lVar33) = auVar138._0_4_;
      uVar8 = extractps(auVar138,1);
      *(undefined8 *)(param_1 + 8 + lVar22) = uVar8;
      uVar8 = extractps(auVar138,2);
      *(undefined8 *)(param_1 + 8 + lVar18) = uVar8;
      uVar8 = extractps(auVar138,3);
      *(undefined8 *)(param_1 + 8 + lVar32) = uVar8;
      *(uint *)(param_1 + 0xc + lVar33) = uVar35;
      *(uint *)(param_1 + 0xc + lVar22) = uVar37;
      *(uint *)(param_1 + 0xc + lVar18) = uVar38;
      *(uint *)(param_1 + 0xc + lVar32) = uVar40;
      auVar149._0_4_ = fVar124 - fVar145 * fVar130;
      auVar149._4_4_ = fVar125 - fVar150 * fVar102;
      auVar149._8_4_ = fVar135 - fVar153 * fVar103;
      auVar149._12_4_ = fVar136 - fVar154 * fVar104;
      *(float *)(param_1 + lVar20) = auVar149._0_4_;
      uVar8 = extractps(auVar149,1);
      *(undefined8 *)(param_1 + lVar30) = uVar8;
      uVar8 = extractps(auVar149,2);
      *(undefined8 *)(param_1 + lVar16) = uVar8;
      auVar95._0_4_ = fVar137 - fVar109 * fVar130;
      auVar95._4_4_ = fVar141 - fVar113 * fVar102;
      auVar95._8_4_ = fVar142 - fVar115 * fVar103;
      auVar95._12_4_ = fVar143 - fVar116 * fVar104;
      uVar8 = extractps(auVar149,3);
      *(undefined8 *)(param_1 + lVar24) = uVar8;
      *(float *)(param_1 + 4 + lVar20) = auVar95._0_4_;
      uVar8 = extractps(auVar95,1);
      *(undefined8 *)(param_1 + 4 + lVar30) = uVar8;
      uVar8 = extractps(auVar95,2);
      *(undefined8 *)(param_1 + 4 + lVar16) = uVar8;
      auVar58._0_4_ = fVar121 - fVar105 * fVar130;
      auVar58._4_4_ = fVar97 - fVar106 * fVar102;
      auVar58._8_4_ = fVar99 - fVar107 * fVar103;
      auVar58._12_4_ = fVar85 - fVar108 * fVar104;
      uVar8 = extractps(auVar95,3);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar8;
      *(float *)(param_1 + 8 + lVar20) = auVar58._0_4_;
      uVar8 = extractps(auVar58,1);
      *(undefined8 *)(param_1 + 8 + lVar30) = uVar8;
      uVar8 = extractps(auVar58,2);
      *(undefined8 *)(param_1 + 8 + lVar16) = uVar8;
      uVar8 = extractps(auVar58,3);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar8;
      pfVar1 = (float *)(param_5 + uVar28);
      *pfVar1 = fVar75 + fVar57;
      pfVar1[1] = fVar81 + fVar63;
      pfVar1[2] = fVar84 + fVar64;
      pfVar1[3] = fVar86 + fVar65;
      *(uint *)(param_1 + 0xc + lVar20) = uVar4;
      *(uint *)(param_1 + 0xc + lVar30) = uVar39;
      *(uint *)(param_1 + 0xc + lVar16) = uVar41;
      *(uint *)(param_1 + 0xc + lVar24) = uVar5;
      uVar17 = uVar17 + 4;
      uVar27 = uVar27 + 0x10;
    } while ((int)uVar17 < (int)(uVar36 & 0xfffffffc));
    if ((int)param_13 <= (int)uVar17) {
      return;
    }
  }
  uVar36 = (uint)uVar17;
  auVar132._0_4_ =
       -(uint)((int)(uVar36 | (uint)__xmm_00000003000000020000000100000000) < (int)param_13);
  auVar132._4_4_ =
       -(uint)((int)(uVar36 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_13);
  auVar132._8_4_ = -(uint)((int)(uVar36 | _UNK_150631e08) < (int)param_13);
  auVar132._12_4_ = -(uint)((int)(uVar36 | _UNK_150631e0c) < (int)param_13);
  uVar17 = uVar17 & 0xffffffff;
  piVar2 = (int *)(param_3 + uVar17 * 8);
  uVar35 = movmskps(unaff_R15D,auVar132);
  bVar19 = (char)((char)uVar35 << 4) >> 4;
  if (uVar35 == 0xf) {
    iVar146 = *piVar2;
    iVar76 = piVar2[1];
    iVar151 = piVar2[2];
    iVar82 = piVar2[3];
    auVar44 = *(undefined1 (*) [16])(piVar2 + 4);
    iVar87 = auVar44._12_4_;
    iVar42 = auVar44._0_4_;
    iVar50 = auVar44._4_4_;
    iVar51 = auVar44._8_4_;
  }
  else {
    auVar43._0_4_ = ___xmm_00000018000000100000000800000000 & auVar132._0_4_;
    auVar43._4_4_ = _UNK_150b51a04 & auVar132._4_4_;
    auVar43._8_4_ = _UNK_150b51a08 & auVar132._8_4_;
    auVar43._12_4_ = _UNK_150b51a0c & auVar132._12_4_;
    lVar16 = extractps(auVar43,1);
    lVar18 = extractps(auVar43,2);
    lVar20 = extractps(auVar43,3);
    iVar146 = *piVar2;
    iVar151 = *(int *)((longlong)piVar2 + lVar16);
    iVar42 = *(int *)((longlong)piVar2 + lVar18);
    iVar51 = *(int *)((longlong)piVar2 + lVar20);
    auVar44 = ___xmm_0000001c000000140000000c00000004 & auVar132;
    iVar76 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._0_4_);
    iVar82 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._4_4_);
    iVar50 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._8_4_);
    iVar87 = *(int *)((longlong)piVar2 + (ulonglong)auVar44._12_4_);
  }
  auVar96 = ZEXT816(0);
  bVar25 = ~bVar19;
  auVar112 = ZEXT816(0);
  if ((param_7 & 1) != 0) {
    if ((bVar25 & 9) == 0) {
      auVar112 = ZEXT416(*(uint *)(param_8 + uVar17));
    }
    else {
      pbVar6 = (byte *)(param_8 + uVar17);
      if ((uVar35 & 1) != 0) {
        auVar112 = ZEXT116(*pbVar6);
      }
      if ((uVar35 & 2) != 0) {
        auVar44._8_8_ = auVar112._8_8_;
        auVar44._0_8_ = auVar112._0_8_ | (ulonglong)pbVar6[1] << 8;
        auVar112 = pblendw(auVar112,auVar44,0xfd);
      }
      if ((uVar35 & 4) != 0) {
        auVar53 = pmovzxwd(auVar44,auVar112);
        auVar44._8_8_ = auVar53._8_8_;
        auVar44._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar6[2] << 0x10 |
             (ulonglong)auVar112[3] << 0x18;
        auVar112 = auVar44;
      }
      if ((uVar35 & 8) != 0) {
        bVar9 = auVar112[2];
        auVar53 = pmovzxwd(auVar112,auVar112);
        auVar112._8_8_ = auVar53._8_8_;
        auVar112._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
             (ulonglong)pbVar6[3] << 0x18;
      }
    }
  }
  if ((param_10 & 1) != 0) {
    if ((bVar25 & 9) == 0) {
      auVar96 = ZEXT416(*(uint *)(param_11 + uVar17));
    }
    else {
      pbVar6 = (byte *)(param_11 + uVar17);
      if ((uVar35 & 1) != 0) {
        auVar96 = ZEXT116(*pbVar6);
      }
      if ((uVar35 & 2) != 0) {
        auVar44._8_8_ = auVar96._8_8_;
        auVar44._0_8_ = auVar96._0_8_ | (ulonglong)pbVar6[1] << 8;
        auVar96 = pblendw(auVar96,auVar44,0xfd);
      }
      if ((uVar35 & 4) != 0) {
        bVar9 = auVar96[3];
        auVar53 = pmovzxwd(auVar44,auVar96);
        auVar96._8_8_ = auVar53._8_8_;
        auVar96._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar6[2] << 0x10 |
             (ulonglong)bVar9 << 0x18;
      }
      if ((uVar35 & 8) != 0) {
        bVar9 = auVar96[2];
        auVar53 = pmovzxwd(auVar96,auVar96);
        auVar96._8_8_ = auVar53._8_8_;
        auVar96._0_8_ =
             auVar53._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
             (ulonglong)pbVar6[3] << 0x18;
      }
    }
  }
  auVar89._0_4_ = iVar146 << 4;
  auVar89._4_4_ = iVar151 << 4;
  auVar89._8_4_ = iVar42 << 4;
  auVar89._12_4_ = iVar51 << 4;
  auVar93 = auVar132 & auVar89;
  lVar16 = param_1 + auVar93._0_4_;
  lVar18 = param_1 + auVar93._4_4_;
  lVar20 = param_1 + auVar93._8_4_;
  lVar21 = param_1 + auVar93._12_4_;
  auVar77 = ___xmm_00000004000000040000000400000004 & auVar132;
  uVar17 = (ulonglong)auVar77._0_4_;
  uVar27 = (ulonglong)auVar77._4_4_;
  local_1b8 = ___xmm_00000008000000080000000800000008 & auVar132;
  uVar28 = (ulonglong)local_1b8._0_4_;
  auVar68._0_4_ = iVar76 << 4;
  auVar68._4_4_ = iVar82 << 4;
  auVar68._8_4_ = iVar50 << 4;
  auVar68._12_4_ = iVar87 << 4;
  auVar78 = auVar132 & auVar68;
  lVar30 = (longlong)auVar78._0_4_;
  auVar53 = ZEXT416(*(uint *)(param_1 + auVar93._0_4_));
  lVar22 = param_1 + lVar30;
  lVar23 = param_1 + auVar78._4_4_;
  lVar24 = param_1 + auVar78._8_4_;
  lVar26 = param_1 + auVar78._12_4_;
  bVar34 = (bVar19 & 2) != 0;
  if (bVar34) {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._4_4_),0x10);
  }
  uVar29 = (ulonglong)local_1b8._4_4_;
  auVar52 = ZEXT416(*(uint *)(uVar17 + lVar16));
  if (bVar34) {
    auVar52 = insertps(auVar52,*(undefined4 *)(uVar27 + lVar18),0x10);
    auVar147 = insertps(ZEXT416(*(uint *)(uVar28 + lVar16)),*(undefined4 *)(uVar29 + lVar18),0x10);
    auVar58 = insertps(ZEXT416(*(uint *)(param_1 + lVar30)),*(undefined4 *)(param_1 + auVar78._4_4_)
                       ,0x10);
  }
  else {
    auVar147 = ZEXT416(*(uint *)(uVar28 + lVar16));
    auVar58 = ZEXT416(*(uint *)(param_1 + lVar30));
  }
  auVar67 = ZEXT416(*(uint *)(uVar17 + lVar22));
  uVar37 = auVar77._8_4_;
  uVar40 = auVar77._12_4_;
  uVar38 = local_1b8._8_4_;
  uVar4 = local_1b8._12_4_;
  if (bVar34) {
    auVar67 = insertps(auVar67,*(undefined4 *)(uVar27 + lVar23),0x10);
    auVar77 = insertps(ZEXT416(*(uint *)(uVar28 + lVar22)),*(undefined4 *)(uVar29 + lVar23),0x10);
  }
  else {
    auVar77 = ZEXT416(*(uint *)(uVar28 + lVar22));
  }
  if ((bVar19 & 4) != 0) {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._8_4_),0x20);
    auVar52 = insertps(auVar52,*(undefined4 *)((ulonglong)uVar37 + lVar20),0x20);
    auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar38 + lVar20),0x20);
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar78._8_4_),0x20);
    auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)uVar37 + lVar24),0x20);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)uVar38 + lVar24),0x20);
  }
  if ((char)bVar19 < '\0') {
    auVar53 = insertps(auVar53,*(undefined4 *)(param_1 + auVar93._12_4_),0x30);
    auVar52 = insertps(auVar52,*(undefined4 *)((ulonglong)uVar40 + lVar21),0x30);
    auVar147 = insertps(auVar147,*(undefined4 *)((ulonglong)uVar4 + lVar21),0x30);
    auVar58 = insertps(auVar58,*(undefined4 *)(param_1 + auVar78._12_4_),0x30);
    auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)uVar40 + lVar26),0x30);
    auVar77 = insertps(auVar77,*(undefined4 *)((ulonglong)uVar4 + lVar26),0x30);
  }
  lVar30 = (longlong)(int)(uVar36 << 2);
  pfVar1 = (float *)(param_5 + lVar30);
  if ((bVar25 & 9) == 0) {
    local_1b8 = *(undefined1 (*) [16])(param_4 + lVar30);
    auVar93 = *(undefined1 (*) [16])(param_5 + lVar30);
  }
  else {
    puVar7 = (uint *)(param_4 + lVar30);
    if ((uVar35 & 1) != 0) {
      local_1b8 = ZEXT416(*puVar7);
    }
    if ((uVar35 & 2) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[1],0x10);
    }
    if ((uVar35 & 4) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[2],0x20);
    }
    if ((uVar35 & 8) != 0) {
      local_1b8 = insertps(local_1b8,puVar7[3],0x30);
    }
    auVar93 = local_1b8;
    if ((uVar35 & 1) != 0) {
      auVar93 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar35 & 2) != 0) {
      auVar93 = insertps(auVar93,pfVar1[1],0x10);
    }
    if ((uVar35 & 4) != 0) {
      auVar93 = insertps(auVar93,pfVar1[2],0x20);
    }
    if ((uVar35 & 8) != 0) {
      auVar93 = insertps(auVar93,pfVar1[3],0x30);
    }
  }
  fVar66 = auVar58._0_4_;
  fVar100 = auVar53._0_4_;
  fVar126 = fVar100 - fVar66;
  fVar75 = auVar58._4_4_;
  fVar102 = auVar53._4_4_;
  fVar130 = fVar102 - fVar75;
  auVar128._0_8_ = CONCAT44(fVar130,fVar126);
  fVar72 = auVar58._8_4_;
  fVar103 = auVar53._8_4_;
  fVar104 = auVar53._12_4_;
  auVar128._8_4_ = fVar103 - fVar72;
  fVar81 = auVar58._12_4_;
  auVar128._12_4_ = fVar104 - fVar81;
  fVar73 = auVar67._0_4_;
  fVar92 = auVar52._0_4_;
  fVar121 = fVar92 - fVar73;
  fVar84 = auVar67._4_4_;
  fVar97 = auVar52._4_4_;
  fVar123 = fVar97 - fVar84;
  auVar122._0_8_ = CONCAT44(fVar123,fVar121);
  fVar74 = auVar67._8_4_;
  fVar98 = auVar52._8_4_;
  fVar99 = auVar52._12_4_;
  auVar122._8_4_ = fVar98 - fVar74;
  fVar86 = auVar67._12_4_;
  auVar122._12_4_ = fVar99 - fVar86;
  fVar57 = auVar77._0_4_;
  fVar80 = auVar147._0_4_;
  fVar110 = fVar80 - fVar57;
  fVar63 = auVar77._4_4_;
  fVar83 = auVar147._4_4_;
  fVar114 = fVar83 - fVar63;
  auVar111._0_8_ = CONCAT44(fVar114,fVar110);
  fVar64 = auVar77._8_4_;
  fVar85 = auVar147._8_4_;
  fVar91 = auVar147._12_4_;
  auVar111._8_4_ = fVar85 - fVar64;
  fVar65 = auVar77._12_4_;
  auVar111._12_4_ = fVar91 - fVar65;
  auVar45._0_4_ = fVar126 * fVar126;
  auVar45._4_4_ = fVar130 * fVar130;
  auVar45._8_4_ = auVar128._8_4_ * auVar128._8_4_;
  auVar45._12_4_ = auVar128._12_4_ * auVar128._12_4_;
  auVar118._0_4_ = fVar110 * fVar110 + fVar121 * fVar121 + auVar45._0_4_;
  auVar118._4_4_ = fVar114 * fVar114 + fVar123 * fVar123 + auVar45._4_4_;
  auVar118._8_4_ = auVar111._8_4_ * auVar111._8_4_ + auVar122._8_4_ * auVar122._8_4_ + auVar45._8_4_
  ;
  auVar118._12_4_ =
       auVar111._12_4_ * auVar111._12_4_ + auVar122._12_4_ * auVar122._12_4_ + auVar45._12_4_;
  auVar53 = sqrtps(auVar45,auVar118);
  uVar36 = -(uint)(auVar118._0_4_ < ___xmm_38d1b71738d1b71738d1b71738d1b717);
  uVar35 = -(uint)(auVar118._4_4_ < _UNK_1506895e4);
  uVar39 = -(uint)(auVar118._8_4_ < _UNK_1506895e8);
  uVar41 = -(uint)(auVar118._12_4_ < _UNK_1506895ec);
  auVar46._4_4_ = uVar35;
  auVar46._0_4_ = uVar36;
  auVar54._8_4_ = auVar122._8_4_;
  auVar54._0_8_ = auVar122._0_8_;
  auVar54._12_4_ = auVar122._12_4_;
  auVar77 = divps(auVar54,auVar53);
  auVar69._8_4_ = auVar111._8_4_;
  auVar69._0_8_ = auVar111._0_8_;
  auVar69._12_4_ = auVar111._12_4_;
  auVar78 = divps(auVar69,auVar53);
  auVar139._8_4_ = auVar128._8_4_;
  auVar139._0_8_ = auVar128._0_8_;
  auVar139._12_4_ = auVar128._12_4_;
  auVar53 = divps(auVar139,auVar53);
  auVar46._8_4_ = uVar39;
  auVar46._12_4_ = uVar41;
  auVar10._4_4_ = _UNK_15076b1f4;
  auVar10._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar10._8_4_ = _UNK_15076b1f8;
  auVar10._12_4_ = _UNK_15076b1fc;
  auVar53 = blendvps(auVar53,auVar10,auVar46);
  auVar47._8_4_ = auVar128._8_4_;
  auVar47._0_8_ = auVar128._0_8_;
  auVar47._12_4_ = auVar128._12_4_;
  bVar34 = (bVar19 & 1) != 0;
  if (bVar34) {
    auVar47 = auVar53;
  }
  local_288._4_4_ = ~uVar35 & auVar77._4_4_;
  local_288._0_4_ = ~uVar36 & auVar77._0_4_;
  local_288._8_4_ = ~uVar39 & auVar77._8_4_;
  local_288._12_4_ = ~uVar41 & auVar77._12_4_;
  auVar119._0_8_ = CONCAT44(~uVar35 & auVar78._4_4_,~uVar36 & auVar78._0_4_);
  auVar119._8_4_ = ~uVar39 & auVar78._8_4_;
  auVar119._12_4_ = ~uVar41 & auVar78._12_4_;
  auVar55._8_4_ = auVar122._8_4_;
  auVar55._0_8_ = auVar122._0_8_;
  auVar55._12_4_ = auVar122._12_4_;
  auVar70._8_4_ = auVar111._8_4_;
  auVar70._0_8_ = auVar111._0_8_;
  auVar70._12_4_ = auVar111._12_4_;
  if (bVar34) {
    auVar70._8_4_ = auVar119._8_4_;
    auVar70._0_8_ = auVar119._0_8_;
    auVar70._12_4_ = auVar119._12_4_;
    auVar55 = local_288;
  }
  auVar148._4_4_ = iVar151 * 3;
  auVar148._0_4_ = iVar146 * 3;
  auVar148._8_4_ = iVar42 * 3;
  auVar148._12_4_ = iVar51 * 3;
  auVar79._4_4_ = iVar82 * 3;
  auVar79._0_4_ = iVar76 * 3;
  auVar79._8_4_ = iVar50 * 3;
  auVar79._12_4_ = iVar87 * 3;
  auVar78 = blendps(auVar128,auVar47,1);
  bVar34 = (bVar19 & 2) != 0;
  auVar77 = auVar78;
  if (bVar34) {
    auVar77 = auVar53;
  }
  auVar148 = auVar148 & auVar132;
  auVar79 = auVar79 & auVar132;
  auVar58 = blendps(auVar122,auVar55,1);
  auVar52 = auVar58;
  if (bVar34) {
    auVar52 = local_288;
  }
  auVar147 = ___xmm_0000000c0000000c0000000c0000000c & auVar132;
  auVar67 = blendps(auVar111,auVar70,1);
  auVar59 = auVar67;
  if (bVar34) {
    auVar59._8_4_ = auVar119._8_4_;
    auVar59._0_8_ = auVar119._0_8_;
    auVar59._12_4_ = auVar119._12_4_;
  }
  auVar78 = blendps(auVar78,auVar77,2);
  bVar34 = (bVar19 & 4) != 0;
  auVar77 = auVar78;
  if (bVar34) {
    auVar77 = auVar53;
  }
  lVar30 = param_2 + (longlong)auVar148._0_4_ * 4;
  lVar31 = param_2 + (longlong)auVar79._0_4_ * 4;
  auVar58 = blendps(auVar58,auVar52,2);
  auVar52 = auVar58;
  if (bVar34) {
    auVar52 = local_288;
  }
  lVar32 = param_2 + (longlong)auVar148._4_4_ * 4;
  lVar33 = param_2 + (longlong)auVar79._4_4_ * 4;
  auVar67 = blendps(auVar67,auVar59,2);
  auVar60 = auVar67;
  if (bVar34) {
    auVar60._8_4_ = auVar119._8_4_;
    auVar60._0_8_ = auVar119._0_8_;
    auVar60._12_4_ = auVar119._12_4_;
  }
  auVar138 = insertps(ZEXT416(*(uint *)((ulonglong)auVar147._0_4_ + lVar16)),
                      *(undefined4 *)((ulonglong)auVar147._4_4_ + lVar18),0x10);
  auVar117 = insertps(ZEXT416(*(uint *)((ulonglong)auVar147._0_4_ + lVar22)),
                      *(undefined4 *)((ulonglong)auVar147._4_4_ + lVar23),0x10);
  auVar133 = insertps(ZEXT416(*(uint *)(uVar17 + lVar30)),*(undefined4 *)(uVar27 + lVar32),0x10);
  auVar88 = insertps(ZEXT416(*(uint *)(uVar28 + lVar30)),*(undefined4 *)(uVar29 + lVar32),0x10);
  auVar149 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(uVar27 + lVar33),0x10);
  auVar131 = insertps(ZEXT416(*(uint *)(uVar28 + lVar31)),*(undefined4 *)(uVar29 + lVar33),0x10);
  auVar94 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar148._0_4_ * 4)),
                     *(undefined4 *)(param_2 + (longlong)auVar148._4_4_ * 4),0x10);
  lVar16 = param_2 + (longlong)auVar148._8_4_ * 4;
  auVar127 = insertps(ZEXT416(*(uint *)(param_2 + (longlong)auVar79._0_4_ * 4)),
                      *(undefined4 *)(param_2 + (longlong)auVar79._4_4_ * 4),0x10);
  lVar18 = param_2 + (longlong)auVar79._8_4_ * 4;
  auVar78 = blendps(auVar78,auVar77,4);
  bVar34 = -1 < (char)bVar19;
  if (bVar34) {
    auVar53 = auVar78;
  }
  auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar147._8_4_ + lVar20),0x20);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)auVar147._8_4_ + lVar24),0x20);
  lVar20 = param_2 + (longlong)auVar148._12_4_ * 4;
  auVar94 = insertps(auVar94,*(undefined4 *)(param_2 + (longlong)auVar148._8_4_ * 4),0x20);
  auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar37 + lVar16),0x20);
  auVar88 = insertps(auVar88,*(undefined4 *)((ulonglong)uVar38 + lVar16),0x20);
  auVar127 = insertps(auVar127,*(undefined4 *)(param_2 + (longlong)auVar79._8_4_ * 4),0x20);
  auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar37 + lVar18),0x20);
  lVar16 = param_2 + (longlong)auVar79._12_4_ * 4;
  auVar131 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar38 + lVar18),0x20);
  auVar52 = blendps(auVar58,auVar52,4);
  if (bVar34) {
    local_288 = auVar52;
  }
  auVar138 = insertps(auVar138,*(undefined4 *)((ulonglong)auVar147._12_4_ + lVar21),0x30);
  auVar117 = insertps(auVar117,*(undefined4 *)((ulonglong)auVar147._12_4_ + lVar26),0x30);
  auVar58 = insertps(auVar94,*(undefined4 *)(param_2 + (longlong)auVar148._12_4_ * 4),0x30);
  auVar133 = insertps(auVar133,*(undefined4 *)((ulonglong)uVar40 + lVar20),0x30);
  auVar94 = insertps(auVar88,*(undefined4 *)((ulonglong)uVar4 + lVar20),0x30);
  auVar127 = insertps(auVar127,*(undefined4 *)(param_2 + (longlong)auVar79._12_4_ * 4),0x30);
  auVar149 = insertps(auVar149,*(undefined4 *)((ulonglong)uVar40 + lVar16),0x30);
  auVar88 = insertps(auVar131,*(undefined4 *)((ulonglong)uVar4 + lVar16),0x30);
  auVar67 = blendps(auVar67,auVar60,4);
  if (bVar34) {
    auVar119 = auVar67;
  }
  local_f8 = auVar112._0_4_;
  auVar147 = pmovsxbd(auVar147,local_f8);
  local_268 = auVar96._0_4_;
  auVar131 = pmovsxbd(auVar77,local_268);
  auVar11._4_4_ = _UNK_15076b1f4;
  auVar11._0_4_ = ___xmm_3f8000003f8000003f8000003f800000;
  auVar11._8_4_ = _UNK_15076b1f8;
  auVar11._12_4_ = _UNK_15076b1fc;
  auVar77 = divps(auVar11,local_1b8);
  auVar48._4_4_ = -(uint)(local_1b8._4_4_ < _UNK_1506895d4);
  auVar48._0_4_ = -(uint)(local_1b8._0_4_ < ___xmm_322bcc77322bcc77322bcc77322bcc77);
  auVar48._8_4_ = -(uint)(local_1b8._8_4_ < _UNK_1506895d8);
  auVar48._12_4_ = -(uint)(local_1b8._12_4_ < _UNK_1506895dc);
  auVar95 = blendvps(auVar77,auVar11,auVar48);
  auVar77 = insertps(ZEXT416(*(uint *)(param_9 + (int)(auVar147._0_4_ << 2 & auVar132._0_4_))),
                     *(undefined4 *)(param_9 + (int)(auVar147._4_4_ << 2 & auVar132._4_4_)),0x10);
  auVar77 = insertps(auVar77,*(undefined4 *)(param_9 + (int)(auVar147._8_4_ << 2 & auVar132._8_4_)),
                     0x20);
  auVar129 = blendps(auVar78,auVar53,8);
  auVar53 = insertps(auVar77,*(undefined4 *)
                              (param_9 + (int)(auVar147._12_4_ << 2 & auVar132._12_4_)),0x30);
  auVar52 = blendps(auVar52,local_288,8);
  auVar77 = insertps(ZEXT416(*(uint *)(param_12 + (int)(auVar131._0_4_ << 2 & auVar132._0_4_))),
                     *(undefined4 *)(param_12 + (int)(auVar131._4_4_ << 2 & auVar132._4_4_)),0x10);
  auVar77 = insertps(auVar77,*(undefined4 *)(param_12 + (int)(auVar131._8_4_ << 2 & auVar132._8_4_))
                     ,0x20);
  auVar77 = insertps(auVar77,*(undefined4 *)
                              (param_12 + (int)(auVar131._12_4_ << 2 & auVar132._12_4_)),0x30);
  auVar78 = blendps(auVar67,auVar119,8);
  fVar130 = auVar138._0_4_;
  fVar105 = auVar138._4_4_;
  fVar106 = auVar138._12_4_;
  local_2b8 = auVar117._0_4_;
  fStack_2b4 = auVar117._4_4_;
  fStack_2b0 = auVar117._8_4_;
  fStack_2ac = auVar117._12_4_;
  auVar61._0_4_ = fVar130 + local_2b8;
  auVar61._4_4_ = fVar105 + fStack_2b4;
  fVar126 = auVar138._8_4_;
  auVar61._8_4_ = fVar126 + fStack_2b0;
  auVar61._12_4_ = fVar106 + fStack_2ac;
  auVar53 = divps(auVar53,auVar61);
  auVar53 = sqrtps(auVar53,auVar53);
  fVar110 = param_6 * auVar53._0_4_ * (auVar77._0_4_ + auVar77._0_4_) * auVar95._0_4_;
  fVar114 = param_6 * auVar53._4_4_ * (auVar77._4_4_ + auVar77._4_4_) * auVar95._4_4_;
  fVar121 = param_6 * auVar53._8_4_ * (auVar77._8_4_ + auVar77._8_4_) * auVar95._8_4_;
  param_6 = param_6 * auVar53._12_4_ * (auVar77._12_4_ + auVar77._12_4_) * auVar95._12_4_;
  fVar115 = auVar52._0_4_;
  fVar116 = auVar52._4_4_;
  fVar124 = auVar52._8_4_;
  fVar125 = auVar52._12_4_;
  fVar107 = auVar78._0_4_;
  fVar108 = auVar78._4_4_;
  fVar109 = auVar78._8_4_;
  fVar113 = auVar78._12_4_;
  auVar62._0_4_ = auVar61._0_4_ * fVar110 + ___xmm_3f8000003f8000003f8000003f800000;
  auVar62._4_4_ = auVar61._4_4_ * fVar114 + _UNK_15076b1f4;
  auVar62._8_4_ = auVar61._8_4_ * fVar121 + _UNK_15076b1f8;
  auVar62._12_4_ = auVar61._12_4_ * param_6 + _UNK_15076b1fc;
  local_1a8 = auVar93._0_4_;
  fStack_1a4 = auVar93._4_4_;
  fStack_1a0 = auVar93._8_4_;
  fStack_19c = auVar93._12_4_;
  auVar49._0_4_ =
       ((((fVar80 - auVar94._0_4_) - fVar57) + auVar88._0_4_) * fVar107 +
       (((fVar92 - auVar133._0_4_) - fVar73) + auVar149._0_4_) * fVar115 +
       (((fVar100 - auVar58._0_4_) - fVar66) + auVar127._0_4_) * auVar129._0_4_) *
       (float)((uint)fVar110 ^ __xmm_80000000800000008000000080000000) - local_1a8;
  auVar49._4_4_ =
       ((((fVar83 - auVar94._4_4_) - fVar63) + auVar88._4_4_) * fVar108 +
       (((fVar97 - auVar133._4_4_) - fVar84) + auVar149._4_4_) * fVar116 +
       (((fVar102 - auVar58._4_4_) - fVar75) + auVar127._4_4_) * auVar129._4_4_) *
       (float)((uint)fVar114 ^ _UNK_150651574) - fStack_1a4;
  auVar49._8_4_ =
       ((((fVar85 - auVar94._8_4_) - fVar64) + auVar88._8_4_) * fVar109 +
       (((fVar98 - auVar133._8_4_) - fVar74) + auVar149._8_4_) * fVar124 +
       (((fVar103 - auVar58._8_4_) - fVar72) + auVar127._8_4_) * auVar129._8_4_) *
       (float)((uint)fVar121 ^ _UNK_150651578) - fStack_1a0;
  auVar49._12_4_ =
       ((((fVar91 - auVar94._12_4_) - fVar65) + auVar88._12_4_) * fVar113 +
       (((fVar99 - auVar133._12_4_) - fVar86) + auVar149._12_4_) * fVar125 +
       (((fVar104 - auVar58._12_4_) - fVar81) + auVar127._12_4_) * auVar129._12_4_) *
       (float)((uint)param_6 ^ _UNK_15065157c) - fStack_19c;
  auVar53 = divps(auVar49,auVar62);
  fVar110 = auVar53._0_4_;
  auVar56._0_4_ = local_1a8 + fVar110;
  fVar114 = auVar53._4_4_;
  auVar56._4_4_ = fStack_1a4 + fVar114;
  fVar121 = auVar53._8_4_;
  auVar56._8_4_ = fStack_1a0 + fVar121;
  fVar123 = auVar53._12_4_;
  auVar56._12_4_ = fStack_19c + fVar123;
  if ((bVar19 & 1) != 0) {
    *pfVar1 = auVar56._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar56,1);
    *(undefined8 *)(pfVar1 + 1) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar56,2);
    *(undefined8 *)(pfVar1 + 2) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar56,3);
    *(undefined8 *)(pfVar1 + 3) = uVar8;
  }
  fVar136 = auVar129._4_4_ * fVar114;
  fVar135 = auVar129._0_4_ * fVar110;
  fVar141 = auVar129._12_4_ * fVar123;
  fVar137 = auVar129._8_4_ * fVar121;
  auVar90._0_4_ = fVar100 + fVar130 * fVar135;
  auVar90._4_4_ = fVar102 + fVar105 * fVar136;
  auVar90._8_4_ = fVar103 + fVar126 * fVar137;
  auVar90._12_4_ = fVar104 + fVar106 * fVar141;
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + auVar89._0_4_) = auVar90._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar90,1);
    *(undefined8 *)(param_1 + auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar90,2);
    *(undefined8 *)(param_1 + auVar89._8_4_) = uVar8;
  }
  uVar15 = fVar106 * fVar125 * fVar123;
  uVar14 = fVar126 * fVar124 * fVar121;
  uVar13 = fVar105 * fVar116 * fVar114;
  uVar12 = fVar130 * fVar115 * fVar110;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar90,3);
    *(undefined8 *)(param_1 + auVar89._12_4_) = uVar8;
    auVar140._0_4_ = fVar92 + (float)uVar12;
    auVar140._4_4_ = fVar97 + (float)uVar13;
    auVar140._8_4_ = fVar98 + (float)uVar14;
    auVar140._12_4_ = fVar99 + (float)uVar15;
  }
  else {
    auVar140._0_4_ = fVar92 + (float)uVar12;
    auVar140._4_4_ = fVar97 + (float)uVar13;
    auVar140._8_4_ = fVar98 + (float)uVar14;
    auVar140._12_4_ = fVar99 + (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar89._0_4_) = auVar140._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar140,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar140,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._8_4_) = uVar8;
  }
  uVar15 = fVar106 * fVar113 * fVar123;
  uVar14 = fVar126 * fVar109 * fVar121;
  uVar13 = fVar105 * fVar108 * fVar114;
  uVar12 = fVar130 * fVar107 * fVar110;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar140,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar89._12_4_) = uVar8;
    auVar134._0_4_ = fVar80 + (float)uVar12;
    auVar134._4_4_ = fVar83 + (float)uVar13;
    auVar134._8_4_ = fVar85 + (float)uVar14;
    auVar134._12_4_ = fVar91 + (float)uVar15;
  }
  else {
    auVar134._0_4_ = fVar80 + (float)uVar12;
    auVar134._4_4_ = fVar83 + (float)uVar13;
    auVar134._8_4_ = fVar85 + (float)uVar14;
    auVar134._12_4_ = fVar91 + (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar89._0_4_) = auVar134._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar134,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar134,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar134,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar89._12_4_) = uVar8;
  }
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar89._0_4_) = fVar130;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar138,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar138,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar138,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar89._12_4_) = uVar8;
    auVar120._0_4_ = fVar66 - fVar135 * local_2b8;
    auVar120._4_4_ = fVar75 - fVar136 * fStack_2b4;
    auVar120._8_4_ = fVar72 - fVar137 * fStack_2b0;
    auVar120._12_4_ = fVar81 - fVar141 * fStack_2ac;
  }
  else {
    auVar120._0_4_ = fVar66 - fVar135 * local_2b8;
    auVar120._4_4_ = fVar75 - fVar136 * fStack_2b4;
    auVar120._8_4_ = fVar72 - fVar137 * fStack_2b0;
    auVar120._12_4_ = fVar81 - fVar141 * fStack_2ac;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + auVar68._0_4_) = auVar120._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar120,1);
    *(undefined8 *)(param_1 + auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar120,2);
    *(undefined8 *)(param_1 + auVar68._8_4_) = uVar8;
  }
  uVar15 = fVar125 * fVar123 * fStack_2ac;
  uVar14 = fVar124 * fVar121 * fStack_2b0;
  uVar13 = fVar116 * fVar114 * fStack_2b4;
  uVar12 = fVar115 * fVar110 * local_2b8;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar120,3);
    *(undefined8 *)(param_1 + auVar68._12_4_) = uVar8;
    auVar101._0_4_ = fVar73 - (float)uVar12;
    auVar101._4_4_ = fVar84 - (float)uVar13;
    auVar101._8_4_ = fVar74 - (float)uVar14;
    auVar101._12_4_ = fVar86 - (float)uVar15;
  }
  else {
    auVar101._0_4_ = fVar73 - (float)uVar12;
    auVar101._4_4_ = fVar84 - (float)uVar13;
    auVar101._8_4_ = fVar74 - (float)uVar14;
    auVar101._12_4_ = fVar86 - (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar68._0_4_) = auVar101._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar101,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar101,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._8_4_) = uVar8;
  }
  uVar15 = fVar113 * fVar123 * fStack_2ac;
  uVar14 = fVar109 * fVar121 * fStack_2b0;
  uVar13 = fVar108 * fVar114 * fStack_2b4;
  uVar12 = fVar107 * fVar110 * local_2b8;
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar101,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar68._12_4_) = uVar8;
    auVar71._0_4_ = fVar57 - (float)uVar12;
    auVar71._4_4_ = fVar63 - (float)uVar13;
    auVar71._8_4_ = fVar64 - (float)uVar14;
    auVar71._12_4_ = fVar65 - (float)uVar15;
  }
  else {
    auVar71._0_4_ = fVar57 - (float)uVar12;
    auVar71._4_4_ = fVar63 - (float)uVar13;
    auVar71._8_4_ = fVar64 - (float)uVar14;
    auVar71._12_4_ = fVar65 - (float)uVar15;
  }
  if ((bVar19 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar68._0_4_) = auVar71._0_4_;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar71,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar71,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar71,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar68._12_4_) = uVar8;
  }
  if ((bVar19 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar68._0_4_) = local_2b8;
  }
  if ((bVar19 & 2) != 0) {
    uVar8 = extractps(auVar117,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._4_4_) = uVar8;
  }
  if ((bVar19 & 4) != 0) {
    uVar8 = extractps(auVar117,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._8_4_) = uVar8;
  }
  if ((char)bVar19 < '\0') {
    uVar8 = extractps(auVar117,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar68._12_4_) = uVar8;
  }
  return;
}

