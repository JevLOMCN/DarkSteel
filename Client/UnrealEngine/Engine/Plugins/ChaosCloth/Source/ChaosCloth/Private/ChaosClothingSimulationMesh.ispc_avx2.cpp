// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx2 @ 140cc71d0

void SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9,
               undefined1 (*param_10) [32])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
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
  undefined1 in_ZMM1 [64];
  float fVar36;
  float fVar45;
  float fVar46;
  undefined1 auVar37 [16];
  float fVar47;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 in_ZMM4 [64];
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar17 = __real_3f800000;
  auVar10 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar10 = auVar10 & ~*param_10;
  if ((((((((SUB321(auVar10 >> 0x1f,0) & 1) == 0 && (SUB321(auVar10 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar10 >> 0x5f,0) & 1) == 0) && SUB321(auVar10 >> 0x7f,0) == '\0') &&
        (SUB321(auVar10 >> 0x9f,0) & 1) == 0) && SUB321(auVar10 >> 0xbf,0) == '\0') &&
      (SUB321(auVar10 >> 0xdf,0) & 1) == 0) && -1 < auVar10[0x1f]) {
    if (0 < (int)param_9) {
      uVar11 = *(undefined8 *)param_8[2];
      uVar12 = *(undefined8 *)(param_8[2] + 8);
      fVar5 = *(float *)(*param_8 + 0xc);
      auVar27._4_4_ = fVar5;
      auVar27._0_4_ = fVar5;
      auVar27._8_4_ = fVar5;
      auVar27._12_4_ = fVar5;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = *(ulonglong *)(*param_8 + 4);
      auVar37 = vinsertps_avx(auVar41,ZEXT416(*(uint *)*param_8),0x20);
      auVar41 = vblendps_avx(auVar37,auVar27,8);
      auVar27 = *param_8;
      uVar13 = *(undefined8 *)param_8[1];
      uVar14 = *(undefined8 *)(param_8[1] + 8);
      auVar22 = vshufps_avx(auVar27,auVar27,0xc9);
      uVar19 = 0;
      lVar18 = param_5;
      do {
        uVar9 = *(uint *)(param_5 + uVar19 * 0x4c);
        auVar54._0_12_ = ZEXT812(0);
        auVar55 = ZEXT1264(auVar54._0_12_);
        auVar54._12_4_ = 0.0;
        auVar56._0_12_ = ZEXT812(0);
        auVar57 = ZEXT1264(auVar56._0_12_);
        auVar56._12_4_ = 0.0;
        if (0 < (int)uVar9) {
          lVar20 = uVar19 * 0xc;
          fVar36 = *(float *)(param_3 + lVar20);
          fVar45 = *(float *)(param_4 + lVar20);
          fVar46 = *(float *)(param_3 + 4 + lVar20);
          fVar47 = *(float *)(param_4 + 4 + lVar20);
          fVar6 = *(float *)(param_3 + 8 + lVar20);
          fVar7 = *(float *)(param_4 + 8 + lVar20);
          uVar21 = 0;
          do {
            lVar20 = (longlong)
                     *(int *)(param_6 + (ulonglong)*(ushort *)(lVar18 + 4 + uVar21 * 2) * 4) * 0x40;
            pfVar1 = (float *)(param_7 + lVar20);
            pfVar2 = (float *)(param_7 + 0x10 + lVar20);
            pfVar3 = (float *)(param_7 + 0x20 + lVar20);
            pfVar4 = (float *)(param_7 + 0x30 + lVar20);
            fVar8 = *(float *)(lVar18 + 0x1c + uVar21 * 4);
            auVar56._0_4_ =
                 fVar8 * (fVar6 * *pfVar3 + fVar36 * *pfVar1 + fVar46 * *pfVar2 + *pfVar4) +
                 auVar57._0_4_;
            auVar56._4_4_ =
                 fVar8 * (fVar6 * pfVar3[1] + fVar36 * pfVar1[1] + fVar46 * pfVar2[1] + pfVar4[1]) +
                 auVar57._4_4_;
            auVar56._8_4_ =
                 fVar8 * (fVar6 * pfVar3[2] + fVar36 * pfVar1[2] + fVar46 * pfVar2[2] + pfVar4[2]) +
                 auVar57._8_4_;
            auVar56._12_4_ =
                 fVar8 * (fVar6 * pfVar3[3] + fVar36 * pfVar1[3] + fVar46 * pfVar2[3] + pfVar4[3]) +
                 auVar57._12_4_;
            auVar57 = ZEXT1664(auVar56);
            auVar54._0_4_ =
                 fVar8 * (fVar7 * *pfVar3 + fVar45 * *pfVar1 + fVar47 * *pfVar2) + auVar55._0_4_;
            auVar54._4_4_ =
                 fVar8 * (fVar7 * pfVar3[1] + fVar45 * pfVar1[1] + fVar47 * pfVar2[1]) +
                 auVar55._4_4_;
            auVar54._8_4_ =
                 fVar8 * (fVar7 * pfVar3[2] + fVar45 * pfVar1[2] + fVar47 * pfVar2[2]) +
                 auVar55._8_4_;
            auVar54._12_4_ =
                 fVar8 * (fVar7 * pfVar3[3] + fVar45 * pfVar1[3] + fVar47 * pfVar2[3]) +
                 auVar55._12_4_;
            auVar55 = ZEXT1664(auVar54);
            uVar21 = uVar21 + 1;
          } while (uVar9 != uVar21);
        }
        lVar20 = uVar19 * 0xc;
        auVar51._0_12_ = ZEXT812(0);
        auVar51._12_4_ = 0;
        auVar56 = vblendps_avx(auVar56,auVar51,8);
        local_e8 = (float)uVar11;
        fStack_e4 = (float)((ulonglong)uVar11 >> 0x20);
        fStack_e0 = (float)uVar12;
        fStack_dc = (float)((ulonglong)uVar12 >> 0x20);
        auVar28._0_4_ = auVar56._0_4_ * local_e8;
        auVar28._4_4_ = auVar56._4_4_ * fStack_e4;
        auVar28._8_4_ = auVar56._8_4_ * fStack_e0;
        auVar28._12_4_ = auVar56._12_4_ * fStack_dc;
        auVar56 = vshufps_avx(auVar28,auVar28,0xc9);
        local_118 = auVar41._0_4_;
        fStack_114 = auVar41._4_4_;
        fStack_110 = auVar41._8_4_;
        fStack_10c = auVar41._12_4_;
        local_158 = auVar27._0_4_;
        fStack_154 = auVar27._4_4_;
        fStack_150 = auVar27._8_4_;
        fStack_14c = auVar27._12_4_;
        fVar36 = local_158 * auVar56._0_4_ - auVar28._0_4_ * local_118;
        fVar45 = fStack_154 * auVar56._4_4_ - auVar28._4_4_ * fStack_114;
        fVar46 = fStack_150 * auVar56._8_4_ - auVar28._8_4_ * fStack_110;
        fVar47 = fStack_14c * auVar56._12_4_ - auVar28._12_4_ * fStack_10c;
        auVar34._0_4_ = fVar36 + fVar36;
        auVar34._4_4_ = fVar45 + fVar45;
        auVar34._8_4_ = fVar46 + fVar46;
        auVar34._12_4_ = fVar47 + fVar47;
        auVar56 = vshufps_avx(auVar34,auVar34,0xc9);
        auVar30 = vshufps_avx(auVar34,auVar34,0xd2);
        local_108 = auVar37._0_4_;
        fStack_104 = auVar37._4_4_;
        fStack_100 = auVar37._8_4_;
        fStack_fc = auVar37._12_4_;
        auVar42._0_4_ = local_158 * auVar30._0_4_ - auVar56._0_4_ * local_108;
        auVar42._4_4_ = fStack_154 * auVar30._4_4_ - auVar56._4_4_ * fStack_104;
        auVar42._8_4_ = fStack_150 * auVar30._8_4_ - auVar56._8_4_ * fStack_100;
        auVar42._12_4_ = fStack_14c * auVar30._12_4_ - auVar56._12_4_ * fStack_fc;
        auVar30 = vshufps_avx(auVar42,auVar42,0xc9);
        local_128 = (float)uVar13;
        fStack_124 = (float)((ulonglong)uVar13 >> 0x20);
        fStack_120 = (float)uVar14;
        fStack_11c = (float)((ulonglong)uVar14 >> 0x20);
        auVar29._0_4_ = fVar5 * auVar56._0_4_ + auVar28._0_4_ + auVar30._0_4_ + local_128;
        auVar29._4_4_ = fVar5 * auVar56._4_4_ + auVar28._4_4_ + auVar30._4_4_ + fStack_124;
        auVar29._8_4_ = fVar5 * auVar56._8_4_ + auVar28._8_4_ + auVar30._8_4_ + fStack_120;
        auVar29._12_4_ = fVar5 * auVar56._12_4_ + auVar28._12_4_ + auVar30._12_4_ + fStack_11c;
        *(float *)(param_1 + lVar20) = auVar29._0_4_;
        uVar49 = vextractps_avx(auVar29,1);
        *(undefined4 *)(param_1 + 4 + lVar20) = uVar49;
        uVar49 = vextractps_avx(auVar29,2);
        *(undefined4 *)(param_1 + 8 + lVar20) = uVar49;
        auVar54 = vblendps_avx(auVar54,auVar51,8);
        auVar30._0_4_ = auVar54._0_4_ * local_e8;
        auVar30._4_4_ = auVar54._4_4_ * fStack_e4;
        auVar30._8_4_ = auVar54._8_4_ * fStack_e0;
        auVar30._12_4_ = auVar54._12_4_ * fStack_dc;
        auVar54 = vshufps_avx(auVar30,auVar30,0xc9);
        local_138 = auVar22._0_4_;
        fStack_134 = auVar22._4_4_;
        fStack_130 = auVar22._8_4_;
        fStack_12c = auVar22._12_4_;
        fVar36 = local_158 * auVar54._0_4_ - auVar30._0_4_ * local_138;
        fVar45 = fStack_154 * auVar54._4_4_ - auVar30._4_4_ * fStack_134;
        fVar46 = fStack_150 * auVar54._8_4_ - auVar30._8_4_ * fStack_130;
        fVar47 = fStack_14c * auVar54._12_4_ - auVar30._12_4_ * fStack_12c;
        auVar35._0_4_ = fVar36 + fVar36;
        auVar35._4_4_ = fVar45 + fVar45;
        auVar35._8_4_ = fVar46 + fVar46;
        auVar35._12_4_ = fVar47 + fVar47;
        auVar54 = vshufps_avx(auVar35,auVar35,0xc9);
        auVar56 = vshufps_avx(auVar35,auVar35,0xd2);
        auVar43._0_4_ = local_158 * auVar56._0_4_ - local_138 * auVar54._0_4_;
        auVar43._4_4_ = fStack_154 * auVar56._4_4_ - fStack_134 * auVar54._4_4_;
        auVar43._8_4_ = fStack_150 * auVar56._8_4_ - fStack_130 * auVar54._8_4_;
        auVar43._12_4_ = fStack_14c * auVar56._12_4_ - fStack_12c * auVar54._12_4_;
        auVar56 = vshufps_avx(auVar43,auVar43,0xc9);
        auVar44._0_4_ = fVar5 * auVar54._0_4_ + auVar30._0_4_ + auVar56._0_4_;
        auVar44._4_4_ = fVar5 * auVar54._4_4_ + auVar30._4_4_ + auVar56._4_4_;
        auVar44._8_4_ = fVar5 * auVar54._8_4_ + auVar30._8_4_ + auVar56._8_4_;
        auVar44._12_4_ = fVar5 * auVar54._12_4_ + auVar30._12_4_ + auVar56._12_4_;
        auVar31._0_4_ = auVar44._0_4_ * auVar44._0_4_;
        auVar31._4_4_ = auVar44._4_4_ * auVar44._4_4_;
        auVar31._8_4_ = auVar44._8_4_ * auVar44._8_4_;
        auVar31._12_4_ = auVar44._12_4_ * auVar44._12_4_;
        auVar54 = vmovshdup_avx(auVar31);
        auVar56 = vshufpd_avx(auVar31,auVar31,1);
        fVar36 = auVar56._0_4_ + auVar31._0_4_ + auVar54._0_4_;
        auVar54 = vshufps_avx(ZEXT416((uint)SQRT(fVar36)),in_ZMM4._0_16_,0xe0);
        auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)SQRT(fVar36)),0x20);
        in_ZMM4 = ZEXT1664(auVar54);
        auVar54 = vdivps_avx(auVar44,auVar54);
        uVar49 = 0;
        uVar52 = 0;
        if (__real_00800000 < fVar36) {
          auVar56 = vmovshdup_avx(auVar54);
          uVar49 = auVar56._0_4_;
          auVar56 = vshufpd_avx(auVar54,auVar54,1);
          uVar52 = auVar56._0_4_;
        }
        auVar56 = vblendps_avx(auVar44,in_ZMM12._0_16_,8);
        in_ZMM12 = ZEXT1664(auVar56);
        auVar56 = vblendps_avx(auVar44,in_ZMM13._0_16_,8);
        in_ZMM13 = ZEXT1664(auVar56);
        auVar56 = vcmpss_avx(ZEXT416((uint)fVar36),ZEXT416((uint)__real_00800000),2);
        auVar16._4_4_ = uVar17;
        auVar16._0_4_ = uVar17;
        auVar16._8_4_ = uVar17;
        auVar16._12_4_ = uVar17;
        auVar54 = vblendvps_avx(auVar54,auVar16,auVar56);
        *(int *)(param_2 + lVar20) = auVar54._0_4_;
        *(undefined4 *)(param_2 + 4 + lVar20) = uVar49;
        *(undefined4 *)(param_2 + 8 + lVar20) = uVar52;
        auVar54 = vblendps_avx(auVar44,in_ZMM10._0_16_,8);
        in_ZMM10 = ZEXT1664(auVar54);
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x4c;
      } while (uVar19 != param_9);
    }
  }
  else if (0 < (int)param_9) {
    uVar11 = *(undefined8 *)param_8[2];
    uVar12 = *(undefined8 *)(param_8[2] + 8);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar22._4_4_ = fVar5;
    auVar22._0_4_ = fVar5;
    auVar22._8_4_ = fVar5;
    auVar22._12_4_ = fVar5;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)*param_8),0x20);
    auVar41 = vblendps_avx(auVar37,auVar22,8);
    auVar27 = *param_8;
    uVar13 = *(undefined8 *)param_8[1];
    uVar14 = *(undefined8 *)(param_8[1] + 8);
    auVar22 = vshufps_avx(auVar27,auVar27,0xc9);
    uVar19 = 0;
    lVar18 = param_5;
    do {
      uVar9 = *(uint *)(param_5 + uVar19 * 0x4c);
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0.0;
      auVar53._0_12_ = ZEXT812(0);
      auVar55 = ZEXT1264(auVar53._0_12_);
      auVar53._12_4_ = 0.0;
      if (0 < (int)uVar9) {
        lVar20 = uVar19 * 0xc;
        fVar36 = *(float *)(param_3 + lVar20);
        fVar45 = *(float *)(param_4 + lVar20);
        fVar46 = *(float *)(param_3 + 4 + lVar20);
        fVar47 = *(float *)(param_4 + 4 + lVar20);
        fVar6 = *(float *)(param_3 + 8 + lVar20);
        fVar7 = *(float *)(param_4 + 8 + lVar20);
        uVar21 = 0;
        auVar54 = auVar48;
        do {
          lVar20 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar18 + 4 + uVar21 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar20);
          pfVar2 = (float *)(param_7 + 0x10 + lVar20);
          pfVar3 = (float *)(param_7 + 0x20 + lVar20);
          pfVar4 = (float *)(param_7 + 0x30 + lVar20);
          fVar8 = *(float *)(lVar18 + 0x1c + uVar21 * 4);
          auVar48._0_4_ =
               fVar8 * (fVar6 * *pfVar3 + fVar36 * *pfVar1 + fVar46 * *pfVar2 + *pfVar4) +
               auVar54._0_4_;
          auVar48._4_4_ =
               fVar8 * (fVar6 * pfVar3[1] + fVar36 * pfVar1[1] + fVar46 * pfVar2[1] + pfVar4[1]) +
               auVar54._4_4_;
          auVar48._8_4_ =
               fVar8 * (fVar6 * pfVar3[2] + fVar36 * pfVar1[2] + fVar46 * pfVar2[2] + pfVar4[2]) +
               auVar54._8_4_;
          auVar48._12_4_ =
               fVar8 * (fVar6 * pfVar3[3] + fVar36 * pfVar1[3] + fVar46 * pfVar2[3] + pfVar4[3]) +
               auVar54._12_4_;
          auVar53._0_4_ =
               fVar8 * (fVar7 * *pfVar3 + fVar45 * *pfVar1 + fVar47 * *pfVar2) + auVar55._0_4_;
          auVar53._4_4_ =
               fVar8 * (fVar7 * pfVar3[1] + fVar45 * pfVar1[1] + fVar47 * pfVar2[1]) + auVar55._4_4_
          ;
          auVar53._8_4_ =
               fVar8 * (fVar7 * pfVar3[2] + fVar45 * pfVar1[2] + fVar47 * pfVar2[2]) + auVar55._8_4_
          ;
          auVar53._12_4_ =
               fVar8 * (fVar7 * pfVar3[3] + fVar45 * pfVar1[3] + fVar47 * pfVar2[3]) +
               auVar55._12_4_;
          auVar55 = ZEXT1664(auVar53);
          uVar21 = uVar21 + 1;
          auVar54 = auVar48;
        } while (uVar9 != uVar21);
      }
      lVar20 = uVar19 * 0xc;
      auVar50._0_12_ = ZEXT812(0);
      auVar50._12_4_ = 0;
      auVar54 = vblendps_avx(auVar48,auVar50,8);
      local_e8 = (float)uVar11;
      fStack_e4 = (float)((ulonglong)uVar11 >> 0x20);
      fStack_e0 = (float)uVar12;
      fStack_dc = (float)((ulonglong)uVar12 >> 0x20);
      auVar23._0_4_ = auVar54._0_4_ * local_e8;
      auVar23._4_4_ = auVar54._4_4_ * fStack_e4;
      auVar23._8_4_ = auVar54._8_4_ * fStack_e0;
      auVar23._12_4_ = auVar54._12_4_ * fStack_dc;
      auVar54 = vshufps_avx(auVar23,auVar23,0xc9);
      local_118 = auVar41._0_4_;
      fStack_114 = auVar41._4_4_;
      fStack_110 = auVar41._8_4_;
      fStack_10c = auVar41._12_4_;
      local_158 = auVar27._0_4_;
      fStack_154 = auVar27._4_4_;
      fStack_150 = auVar27._8_4_;
      fStack_14c = auVar27._12_4_;
      fVar36 = local_158 * auVar54._0_4_ - auVar23._0_4_ * local_118;
      fVar45 = fStack_154 * auVar54._4_4_ - auVar23._4_4_ * fStack_114;
      fVar46 = fStack_150 * auVar54._8_4_ - auVar23._8_4_ * fStack_110;
      fVar47 = fStack_14c * auVar54._12_4_ - auVar23._12_4_ * fStack_10c;
      auVar32._0_4_ = fVar36 + fVar36;
      auVar32._4_4_ = fVar45 + fVar45;
      auVar32._8_4_ = fVar46 + fVar46;
      auVar32._12_4_ = fVar47 + fVar47;
      auVar54 = vshufps_avx(auVar32,auVar32,0xc9);
      auVar56 = vshufps_avx(auVar32,auVar32,0xd2);
      local_108 = auVar37._0_4_;
      fStack_104 = auVar37._4_4_;
      fStack_100 = auVar37._8_4_;
      fStack_fc = auVar37._12_4_;
      auVar38._0_4_ = local_158 * auVar56._0_4_ - auVar54._0_4_ * local_108;
      auVar38._4_4_ = fStack_154 * auVar56._4_4_ - auVar54._4_4_ * fStack_104;
      auVar38._8_4_ = fStack_150 * auVar56._8_4_ - auVar54._8_4_ * fStack_100;
      auVar38._12_4_ = fStack_14c * auVar56._12_4_ - auVar54._12_4_ * fStack_fc;
      auVar56 = vshufps_avx(auVar38,auVar38,0xc9);
      local_128 = (float)uVar13;
      fStack_124 = (float)((ulonglong)uVar13 >> 0x20);
      fStack_120 = (float)uVar14;
      fStack_11c = (float)((ulonglong)uVar14 >> 0x20);
      auVar24._0_4_ = fVar5 * auVar54._0_4_ + auVar23._0_4_ + auVar56._0_4_ + local_128;
      auVar24._4_4_ = fVar5 * auVar54._4_4_ + auVar23._4_4_ + auVar56._4_4_ + fStack_124;
      auVar24._8_4_ = fVar5 * auVar54._8_4_ + auVar23._8_4_ + auVar56._8_4_ + fStack_120;
      auVar24._12_4_ = fVar5 * auVar54._12_4_ + auVar23._12_4_ + auVar56._12_4_ + fStack_11c;
      *(float *)(param_1 + lVar20) = auVar24._0_4_;
      uVar49 = vextractps_avx(auVar24,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar49;
      uVar49 = vextractps_avx(auVar24,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar49;
      auVar54 = vblendps_avx(auVar53,auVar50,8);
      auVar25._0_4_ = auVar54._0_4_ * local_e8;
      auVar25._4_4_ = auVar54._4_4_ * fStack_e4;
      auVar25._8_4_ = auVar54._8_4_ * fStack_e0;
      auVar25._12_4_ = auVar54._12_4_ * fStack_dc;
      auVar54 = vshufps_avx(auVar25,auVar25,0xc9);
      local_138 = auVar22._0_4_;
      fStack_134 = auVar22._4_4_;
      fStack_130 = auVar22._8_4_;
      fStack_12c = auVar22._12_4_;
      fVar36 = local_158 * auVar54._0_4_ - auVar25._0_4_ * local_138;
      fVar45 = fStack_154 * auVar54._4_4_ - auVar25._4_4_ * fStack_134;
      fVar46 = fStack_150 * auVar54._8_4_ - auVar25._8_4_ * fStack_130;
      fVar47 = fStack_14c * auVar54._12_4_ - auVar25._12_4_ * fStack_12c;
      auVar33._0_4_ = fVar36 + fVar36;
      auVar33._4_4_ = fVar45 + fVar45;
      auVar33._8_4_ = fVar46 + fVar46;
      auVar33._12_4_ = fVar47 + fVar47;
      auVar54 = vshufps_avx(auVar33,auVar33,0xc9);
      auVar56 = vshufps_avx(auVar33,auVar33,0xd2);
      auVar39._0_4_ = local_158 * auVar56._0_4_ - local_138 * auVar54._0_4_;
      auVar39._4_4_ = fStack_154 * auVar56._4_4_ - fStack_134 * auVar54._4_4_;
      auVar39._8_4_ = fStack_150 * auVar56._8_4_ - fStack_130 * auVar54._8_4_;
      auVar39._12_4_ = fStack_14c * auVar56._12_4_ - fStack_12c * auVar54._12_4_;
      auVar56 = vshufps_avx(auVar39,auVar39,0xc9);
      auVar40._0_4_ = fVar5 * auVar54._0_4_ + auVar25._0_4_ + auVar56._0_4_;
      auVar40._4_4_ = fVar5 * auVar54._4_4_ + auVar25._4_4_ + auVar56._4_4_;
      auVar40._8_4_ = fVar5 * auVar54._8_4_ + auVar25._8_4_ + auVar56._8_4_;
      auVar40._12_4_ = fVar5 * auVar54._12_4_ + auVar25._12_4_ + auVar56._12_4_;
      auVar26._0_4_ = auVar40._0_4_ * auVar40._0_4_;
      auVar26._4_4_ = auVar40._4_4_ * auVar40._4_4_;
      auVar26._8_4_ = auVar40._8_4_ * auVar40._8_4_;
      auVar26._12_4_ = auVar40._12_4_ * auVar40._12_4_;
      auVar54 = vmovshdup_avx(auVar26);
      auVar56 = vshufpd_avx(auVar26,auVar26,1);
      fVar36 = auVar56._0_4_ + auVar26._0_4_ + auVar54._0_4_;
      auVar54 = vshufps_avx(ZEXT416((uint)SQRT(fVar36)),in_ZMM4._0_16_,0xe0);
      auVar54 = vinsertps_avx(auVar54,ZEXT416((uint)SQRT(fVar36)),0x20);
      in_ZMM4 = ZEXT1664(auVar54);
      auVar54 = vdivps_avx(auVar40,auVar54);
      uVar49 = 0;
      uVar52 = 0;
      if (__real_00800000 < fVar36) {
        auVar56 = vmovshdup_avx(auVar54);
        uVar49 = auVar56._0_4_;
        auVar56 = vshufpd_avx(auVar54,auVar54,1);
        uVar52 = auVar56._0_4_;
      }
      auVar56 = vblendps_avx(auVar40,in_ZMM12._0_16_,8);
      in_ZMM12 = ZEXT1664(auVar56);
      auVar56 = vblendps_avx(auVar40,in_ZMM13._0_16_,8);
      in_ZMM13 = ZEXT1664(auVar56);
      auVar56 = vcmpss_avx(ZEXT416((uint)fVar36),ZEXT416((uint)__real_00800000),2);
      auVar15._4_4_ = uVar17;
      auVar15._0_4_ = uVar17;
      auVar15._8_4_ = uVar17;
      auVar15._12_4_ = uVar17;
      auVar54 = vblendvps_avx(auVar54,auVar15,auVar56);
      *(int *)(param_2 + lVar20) = auVar54._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar20) = uVar49;
      *(undefined4 *)(param_2 + 8 + lVar20) = uVar52;
      auVar54 = vblendps_avx(auVar40,in_ZMM10._0_16_,8);
      in_ZMM10 = ZEXT1664(auVar54);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x4c;
    } while (uVar19 != param_9);
  }
  return;
}

// SkinPhysicsMesh_avx2 @ 140cc7800

void SkinPhysicsMesh_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined4 uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_ZMM4 [64];
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  uVar17 = __real_3f800000;
  if (0 < (int)param_9) {
    uVar12 = *(undefined8 *)param_8[2];
    uVar13 = *(undefined8 *)(param_8[2] + 8);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar22._4_4_ = fVar5;
    auVar22._0_4_ = fVar5;
    auVar22._8_4_ = fVar5;
    auVar22._12_4_ = fVar5;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar10 = vinsertps_avx(auVar30,ZEXT416(*(uint *)*param_8),0x20);
    auVar30 = vblendps_avx(auVar10,auVar22,8);
    auVar22 = *param_8;
    uVar14 = *(undefined8 *)param_8[1];
    uVar15 = *(undefined8 *)(param_8[1] + 8);
    auVar11 = vshufps_avx(auVar22,auVar22,0xc9);
    uVar19 = 0;
    lVar18 = param_5;
    do {
      uVar9 = *(uint *)(param_5 + uVar19 * 0x4c);
      auVar40._0_12_ = ZEXT812(0);
      auVar41 = ZEXT1264(auVar40._0_12_);
      auVar40._12_4_ = 0.0;
      auVar42._0_12_ = ZEXT812(0);
      auVar43 = ZEXT1264(auVar42._0_12_);
      auVar42._12_4_ = 0.0;
      if (0 < (int)uVar9) {
        lVar20 = uVar19 * 0xc;
        fVar29 = *(float *)(param_3 + lVar20);
        fVar34 = *(float *)(param_4 + lVar20);
        fVar35 = *(float *)(param_3 + 4 + lVar20);
        fVar36 = *(float *)(param_4 + 4 + lVar20);
        fVar6 = *(float *)(param_3 + 8 + lVar20);
        fVar7 = *(float *)(param_4 + 8 + lVar20);
        uVar21 = 0;
        do {
          lVar20 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar18 + 4 + uVar21 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar20);
          pfVar2 = (float *)(param_7 + 0x10 + lVar20);
          pfVar3 = (float *)(param_7 + 0x20 + lVar20);
          pfVar4 = (float *)(param_7 + 0x30 + lVar20);
          fVar8 = *(float *)(lVar18 + 0x1c + uVar21 * 4);
          auVar42._0_4_ =
               fVar8 * (fVar6 * *pfVar3 + fVar29 * *pfVar1 + fVar35 * *pfVar2 + *pfVar4) +
               auVar43._0_4_;
          auVar42._4_4_ =
               fVar8 * (fVar6 * pfVar3[1] + fVar29 * pfVar1[1] + fVar35 * pfVar2[1] + pfVar4[1]) +
               auVar43._4_4_;
          auVar42._8_4_ =
               fVar8 * (fVar6 * pfVar3[2] + fVar29 * pfVar1[2] + fVar35 * pfVar2[2] + pfVar4[2]) +
               auVar43._8_4_;
          auVar42._12_4_ =
               fVar8 * (fVar6 * pfVar3[3] + fVar29 * pfVar1[3] + fVar35 * pfVar2[3] + pfVar4[3]) +
               auVar43._12_4_;
          auVar43 = ZEXT1664(auVar42);
          auVar40._0_4_ =
               fVar8 * (fVar7 * *pfVar3 + fVar34 * *pfVar1 + fVar36 * *pfVar2) + auVar41._0_4_;
          auVar40._4_4_ =
               fVar8 * (fVar7 * pfVar3[1] + fVar34 * pfVar1[1] + fVar36 * pfVar2[1]) + auVar41._4_4_
          ;
          auVar40._8_4_ =
               fVar8 * (fVar7 * pfVar3[2] + fVar34 * pfVar1[2] + fVar36 * pfVar2[2]) + auVar41._8_4_
          ;
          auVar40._12_4_ =
               fVar8 * (fVar7 * pfVar3[3] + fVar34 * pfVar1[3] + fVar36 * pfVar2[3]) +
               auVar41._12_4_;
          auVar41 = ZEXT1664(auVar40);
          uVar21 = uVar21 + 1;
        } while (uVar9 != uVar21);
      }
      lVar20 = uVar19 * 0xc;
      auVar38._0_12_ = ZEXT812(0);
      auVar38._12_4_ = 0;
      auVar42 = vblendps_avx(auVar42,auVar38,8);
      local_e8 = (float)uVar12;
      fStack_e4 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_e0 = (float)uVar13;
      fStack_dc = (float)((ulonglong)uVar13 >> 0x20);
      auVar23._0_4_ = auVar42._0_4_ * local_e8;
      auVar23._4_4_ = auVar42._4_4_ * fStack_e4;
      auVar23._8_4_ = auVar42._8_4_ * fStack_e0;
      auVar23._12_4_ = auVar42._12_4_ * fStack_dc;
      auVar42 = vshufps_avx(auVar23,auVar23,0xc9);
      local_118 = auVar30._0_4_;
      fStack_114 = auVar30._4_4_;
      fStack_110 = auVar30._8_4_;
      fStack_10c = auVar30._12_4_;
      local_158 = auVar22._0_4_;
      fStack_154 = auVar22._4_4_;
      fStack_150 = auVar22._8_4_;
      fStack_14c = auVar22._12_4_;
      fVar29 = local_158 * auVar42._0_4_ - auVar23._0_4_ * local_118;
      fVar34 = fStack_154 * auVar42._4_4_ - auVar23._4_4_ * fStack_114;
      fVar35 = fStack_150 * auVar42._8_4_ - auVar23._8_4_ * fStack_110;
      fVar36 = fStack_14c * auVar42._12_4_ - auVar23._12_4_ * fStack_10c;
      auVar27._0_4_ = fVar29 + fVar29;
      auVar27._4_4_ = fVar34 + fVar34;
      auVar27._8_4_ = fVar35 + fVar35;
      auVar27._12_4_ = fVar36 + fVar36;
      auVar42 = vshufps_avx(auVar27,auVar27,0xc9);
      auVar25 = vshufps_avx(auVar27,auVar27,0xd2);
      local_108 = auVar10._0_4_;
      fStack_104 = auVar10._4_4_;
      fStack_100 = auVar10._8_4_;
      fStack_fc = auVar10._12_4_;
      auVar31._0_4_ = local_158 * auVar25._0_4_ - auVar42._0_4_ * local_108;
      auVar31._4_4_ = fStack_154 * auVar25._4_4_ - auVar42._4_4_ * fStack_104;
      auVar31._8_4_ = fStack_150 * auVar25._8_4_ - auVar42._8_4_ * fStack_100;
      auVar31._12_4_ = fStack_14c * auVar25._12_4_ - auVar42._12_4_ * fStack_fc;
      auVar25 = vshufps_avx(auVar31,auVar31,0xc9);
      local_128 = (float)uVar14;
      fStack_124 = (float)((ulonglong)uVar14 >> 0x20);
      fStack_120 = (float)uVar15;
      fStack_11c = (float)((ulonglong)uVar15 >> 0x20);
      auVar24._0_4_ = fVar5 * auVar42._0_4_ + auVar23._0_4_ + auVar25._0_4_ + local_128;
      auVar24._4_4_ = fVar5 * auVar42._4_4_ + auVar23._4_4_ + auVar25._4_4_ + fStack_124;
      auVar24._8_4_ = fVar5 * auVar42._8_4_ + auVar23._8_4_ + auVar25._8_4_ + fStack_120;
      auVar24._12_4_ = fVar5 * auVar42._12_4_ + auVar23._12_4_ + auVar25._12_4_ + fStack_11c;
      *(float *)(param_1 + lVar20) = auVar24._0_4_;
      uVar37 = vextractps_avx(auVar24,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar37;
      uVar37 = vextractps_avx(auVar24,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar37;
      auVar40 = vblendps_avx(auVar40,auVar38,8);
      auVar25._0_4_ = auVar40._0_4_ * local_e8;
      auVar25._4_4_ = auVar40._4_4_ * fStack_e4;
      auVar25._8_4_ = auVar40._8_4_ * fStack_e0;
      auVar25._12_4_ = auVar40._12_4_ * fStack_dc;
      auVar40 = vshufps_avx(auVar25,auVar25,0xc9);
      local_138 = auVar11._0_4_;
      fStack_134 = auVar11._4_4_;
      fStack_130 = auVar11._8_4_;
      fStack_12c = auVar11._12_4_;
      fVar29 = local_158 * auVar40._0_4_ - auVar25._0_4_ * local_138;
      fVar34 = fStack_154 * auVar40._4_4_ - auVar25._4_4_ * fStack_134;
      fVar35 = fStack_150 * auVar40._8_4_ - auVar25._8_4_ * fStack_130;
      fVar36 = fStack_14c * auVar40._12_4_ - auVar25._12_4_ * fStack_12c;
      auVar28._0_4_ = fVar29 + fVar29;
      auVar28._4_4_ = fVar34 + fVar34;
      auVar28._8_4_ = fVar35 + fVar35;
      auVar28._12_4_ = fVar36 + fVar36;
      auVar40 = vshufps_avx(auVar28,auVar28,0xc9);
      auVar42 = vshufps_avx(auVar28,auVar28,0xd2);
      auVar32._0_4_ = local_158 * auVar42._0_4_ - local_138 * auVar40._0_4_;
      auVar32._4_4_ = fStack_154 * auVar42._4_4_ - fStack_134 * auVar40._4_4_;
      auVar32._8_4_ = fStack_150 * auVar42._8_4_ - fStack_130 * auVar40._8_4_;
      auVar32._12_4_ = fStack_14c * auVar42._12_4_ - fStack_12c * auVar40._12_4_;
      auVar42 = vshufps_avx(auVar32,auVar32,0xc9);
      auVar33._0_4_ = fVar5 * auVar40._0_4_ + auVar25._0_4_ + auVar42._0_4_;
      auVar33._4_4_ = fVar5 * auVar40._4_4_ + auVar25._4_4_ + auVar42._4_4_;
      auVar33._8_4_ = fVar5 * auVar40._8_4_ + auVar25._8_4_ + auVar42._8_4_;
      auVar33._12_4_ = fVar5 * auVar40._12_4_ + auVar25._12_4_ + auVar42._12_4_;
      auVar26._0_4_ = auVar33._0_4_ * auVar33._0_4_;
      auVar26._4_4_ = auVar33._4_4_ * auVar33._4_4_;
      auVar26._8_4_ = auVar33._8_4_ * auVar33._8_4_;
      auVar26._12_4_ = auVar33._12_4_ * auVar33._12_4_;
      auVar40 = vmovshdup_avx(auVar26);
      auVar42 = vshufpd_avx(auVar26,auVar26,1);
      fVar29 = auVar42._0_4_ + auVar26._0_4_ + auVar40._0_4_;
      auVar40 = vshufps_avx(ZEXT416((uint)SQRT(fVar29)),in_ZMM4._0_16_,0xe0);
      auVar40 = vinsertps_avx(auVar40,ZEXT416((uint)SQRT(fVar29)),0x20);
      in_ZMM4 = ZEXT1664(auVar40);
      auVar40 = vdivps_avx(auVar33,auVar40);
      uVar37 = 0;
      uVar39 = 0;
      if (__real_00800000 < fVar29) {
        auVar42 = vmovshdup_avx(auVar40);
        uVar37 = auVar42._0_4_;
        auVar42 = vshufpd_avx(auVar40,auVar40,1);
        uVar39 = auVar42._0_4_;
      }
      auVar42 = vblendps_avx(auVar33,in_ZMM12._0_16_,8);
      in_ZMM12 = ZEXT1664(auVar42);
      auVar42 = vblendps_avx(auVar33,in_ZMM13._0_16_,8);
      in_ZMM13 = ZEXT1664(auVar42);
      auVar42 = vcmpss_avx(ZEXT416((uint)fVar29),ZEXT416((uint)__real_00800000),2);
      auVar16._4_4_ = uVar17;
      auVar16._0_4_ = uVar17;
      auVar16._8_4_ = uVar17;
      auVar16._12_4_ = uVar17;
      auVar40 = vblendvps_avx(auVar40,auVar16,auVar42);
      *(int *)(param_2 + lVar20) = auVar40._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar20) = uVar37;
      *(undefined4 *)(param_2 + 8 + lVar20) = uVar39;
      auVar40 = vblendps_avx(auVar33,in_ZMM10._0_16_,8);
      in_ZMM10 = ZEXT1664(auVar40);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x4c;
    } while (uVar19 != param_9);
  }
  return;
}

