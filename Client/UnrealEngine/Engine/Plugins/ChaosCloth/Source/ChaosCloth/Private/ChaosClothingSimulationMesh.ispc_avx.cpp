// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx @ 140cc7ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9,
               undefined1 (*param_10) [16])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
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
  undefined1 in_ZMM2 [64];
  undefined4 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  
  auVar27 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar50 = vpcmpgtd_avx(param_10[1],auVar27);
  auVar27 = vpcmpgtd_avx(*param_10,auVar27);
  auVar27 = vpor_avx(auVar27,auVar50);
  if ((((SUB161(auVar27 >> 0x1f,0) & 1) == 0 && (SUB161(auVar27 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar27 >> 0x5f,0) & 1) == 0) && -1 < auVar27[0xf]) {
    if (0 < (int)param_9) {
      uVar14 = *(undefined8 *)param_8[2];
      uVar15 = *(undefined8 *)(param_8[2] + 8);
      fVar5 = *(float *)(*param_8 + 0xc);
      auVar27._4_4_ = fVar5;
      auVar27._0_4_ = fVar5;
      auVar27._8_4_ = fVar5;
      auVar27._12_4_ = fVar5;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = *(ulonglong *)(*param_8 + 4);
      auVar44 = vinsertps_avx(auVar50,ZEXT416(*(uint *)*param_8),0x20);
      auVar50 = vblendps_avx(auVar44,auVar27,8);
      auVar27 = *param_8;
      uVar16 = *(undefined8 *)param_8[1];
      uVar17 = *(undefined8 *)(param_8[1] + 8);
      auVar22 = vshufps_avx(auVar27,auVar27,0xc9);
      uVar19 = 0;
      lVar18 = param_5;
      do {
        uVar13 = *(uint *)(param_5 + uVar19 * 0x4c);
        auVar63._0_12_ = ZEXT812(0);
        auVar61 = ZEXT1264(auVar63._0_12_);
        auVar63._12_4_ = 0.0;
        auVar65._0_12_ = ZEXT812(0);
        auVar64 = ZEXT1264(auVar65._0_12_);
        auVar65._12_4_ = 0.0;
        if (0 < (int)uVar13) {
          lVar20 = uVar19 * 0xc;
          fVar6 = *(float *)(param_3 + lVar20);
          fVar7 = *(float *)(param_4 + lVar20);
          fVar8 = *(float *)(param_3 + 4 + lVar20);
          fVar9 = *(float *)(param_4 + 4 + lVar20);
          fVar10 = *(float *)(param_3 + 8 + lVar20);
          fVar11 = *(float *)(param_4 + 8 + lVar20);
          uVar21 = 0;
          do {
            lVar20 = (longlong)
                     *(int *)(param_6 + (ulonglong)*(ushort *)(lVar18 + 4 + uVar21 * 2) * 4) * 0x40;
            pfVar1 = (float *)(param_7 + lVar20);
            pfVar2 = (float *)(param_7 + 0x10 + lVar20);
            pfVar3 = (float *)(param_7 + 0x20 + lVar20);
            pfVar4 = (float *)(param_7 + 0x30 + lVar20);
            fVar12 = *(float *)(lVar18 + 0x1c + uVar21 * 4);
            auVar65._0_4_ =
                 auVar64._0_4_ +
                 fVar12 * (fVar10 * *pfVar3 + fVar6 * *pfVar1 + fVar8 * *pfVar2 + *pfVar4);
            auVar65._4_4_ =
                 auVar64._4_4_ +
                 fVar12 * (fVar10 * pfVar3[1] + fVar6 * pfVar1[1] + fVar8 * pfVar2[1] + pfVar4[1]);
            auVar65._8_4_ =
                 auVar64._8_4_ +
                 fVar12 * (fVar10 * pfVar3[2] + fVar6 * pfVar1[2] + fVar8 * pfVar2[2] + pfVar4[2]);
            auVar65._12_4_ =
                 auVar64._12_4_ +
                 fVar12 * (fVar10 * pfVar3[3] + fVar6 * pfVar1[3] + fVar8 * pfVar2[3] + pfVar4[3]);
            auVar64 = ZEXT1664(auVar65);
            auVar63._0_4_ =
                 auVar61._0_4_ + fVar12 * (fVar11 * *pfVar3 + fVar7 * *pfVar1 + fVar9 * *pfVar2);
            auVar63._4_4_ =
                 auVar61._4_4_ +
                 fVar12 * (fVar11 * pfVar3[1] + fVar7 * pfVar1[1] + fVar9 * pfVar2[1]);
            auVar63._8_4_ =
                 auVar61._8_4_ +
                 fVar12 * (fVar11 * pfVar3[2] + fVar7 * pfVar1[2] + fVar9 * pfVar2[2]);
            auVar63._12_4_ =
                 auVar61._12_4_ +
                 fVar12 * (fVar11 * pfVar3[3] + fVar7 * pfVar1[3] + fVar9 * pfVar2[3]);
            auVar61 = ZEXT1664(auVar63);
            uVar21 = uVar21 + 1;
          } while (uVar13 != uVar21);
        }
        lVar20 = uVar19 * 0xc;
        auVar58._0_12_ = ZEXT812(0);
        auVar58._12_4_ = 0;
        auVar65 = vblendps_avx(auVar65,auVar58,8);
        local_f8 = (float)uVar14;
        fStack_f4 = (float)((ulonglong)uVar14 >> 0x20);
        fStack_f0 = (float)uVar15;
        fStack_ec = (float)((ulonglong)uVar15 >> 0x20);
        auVar28._0_4_ = auVar65._0_4_ * local_f8;
        auVar28._4_4_ = auVar65._4_4_ * fStack_f4;
        auVar28._8_4_ = auVar65._8_4_ * fStack_f0;
        auVar28._12_4_ = auVar65._12_4_ * fStack_ec;
        auVar65 = vshufps_avx(auVar28,auVar28,0xc9);
        local_138 = auVar27._0_4_;
        fStack_134 = auVar27._4_4_;
        fStack_130 = auVar27._8_4_;
        fStack_12c = auVar27._12_4_;
        auVar38._0_4_ = auVar65._0_4_ * local_138;
        auVar38._4_4_ = auVar65._4_4_ * fStack_134;
        auVar38._8_4_ = auVar65._8_4_ * fStack_130;
        auVar38._12_4_ = auVar65._12_4_ * fStack_12c;
        local_128 = auVar50._0_4_;
        fStack_124 = auVar50._4_4_;
        fStack_120 = auVar50._8_4_;
        fStack_11c = auVar50._12_4_;
        auVar51._0_4_ = auVar28._0_4_ * local_128;
        auVar51._4_4_ = auVar28._4_4_ * fStack_124;
        auVar51._8_4_ = auVar28._8_4_ * fStack_120;
        auVar51._12_4_ = auVar28._12_4_ * fStack_11c;
        auVar65 = vsubps_avx(auVar38,auVar51);
        auVar39._0_4_ = auVar65._0_4_ + auVar65._0_4_;
        auVar39._4_4_ = auVar65._4_4_ + auVar65._4_4_;
        auVar39._8_4_ = auVar65._8_4_ + auVar65._8_4_;
        auVar39._12_4_ = auVar65._12_4_ + auVar65._12_4_;
        auVar65 = vshufps_avx(auVar39,auVar39,0xc9);
        auVar30 = vshufps_avx(auVar39,auVar39,0xd2);
        auVar40._0_4_ = local_138 * auVar30._0_4_;
        auVar40._4_4_ = fStack_134 * auVar30._4_4_;
        auVar40._8_4_ = fStack_130 * auVar30._8_4_;
        auVar40._12_4_ = fStack_12c * auVar30._12_4_;
        local_118 = auVar44._0_4_;
        fStack_114 = auVar44._4_4_;
        fStack_110 = auVar44._8_4_;
        fStack_10c = auVar44._12_4_;
        auVar52._0_4_ = auVar65._0_4_ * local_118;
        auVar52._4_4_ = auVar65._4_4_ * fStack_114;
        auVar52._8_4_ = auVar65._8_4_ * fStack_110;
        auVar52._12_4_ = auVar65._12_4_ * fStack_10c;
        auVar30 = vsubps_avx(auVar40,auVar52);
        auVar30 = vshufps_avx(auVar30,auVar30,0xc9);
        local_148 = (float)uVar16;
        fStack_144 = (float)((ulonglong)uVar16 >> 0x20);
        fStack_140 = (float)uVar17;
        fStack_13c = (float)((ulonglong)uVar17 >> 0x20);
        auVar29._0_4_ = auVar28._0_4_ + fVar5 * auVar65._0_4_ + auVar30._0_4_ + local_148;
        auVar29._4_4_ = auVar28._4_4_ + fVar5 * auVar65._4_4_ + auVar30._4_4_ + fStack_144;
        auVar29._8_4_ = auVar28._8_4_ + fVar5 * auVar65._8_4_ + auVar30._8_4_ + fStack_140;
        auVar29._12_4_ = auVar28._12_4_ + fVar5 * auVar65._12_4_ + auVar30._12_4_ + fStack_13c;
        *(float *)(param_1 + lVar20) = auVar29._0_4_;
        uVar56 = vextractps_avx(auVar29,1);
        *(undefined4 *)(param_1 + 4 + lVar20) = uVar56;
        uVar56 = vextractps_avx(auVar29,2);
        *(undefined4 *)(param_1 + 8 + lVar20) = uVar56;
        auVar63 = vblendps_avx(auVar63,auVar58,8);
        auVar30._0_4_ = auVar63._0_4_ * local_f8;
        auVar30._4_4_ = auVar63._4_4_ * fStack_f4;
        auVar30._8_4_ = auVar63._8_4_ * fStack_f0;
        auVar30._12_4_ = auVar63._12_4_ * fStack_ec;
        auVar63 = vshufps_avx(auVar30,auVar30,0xc9);
        auVar41._0_4_ = auVar63._0_4_ * local_138;
        auVar41._4_4_ = auVar63._4_4_ * fStack_134;
        auVar41._8_4_ = auVar63._8_4_ * fStack_130;
        auVar41._12_4_ = auVar63._12_4_ * fStack_12c;
        local_158 = auVar22._0_4_;
        fStack_154 = auVar22._4_4_;
        fStack_150 = auVar22._8_4_;
        fStack_14c = auVar22._12_4_;
        auVar53._0_4_ = auVar30._0_4_ * local_158;
        auVar53._4_4_ = auVar30._4_4_ * fStack_154;
        auVar53._8_4_ = auVar30._8_4_ * fStack_150;
        auVar53._12_4_ = auVar30._12_4_ * fStack_14c;
        auVar63 = vsubps_avx(auVar41,auVar53);
        auVar42._0_4_ = auVar63._0_4_ + auVar63._0_4_;
        auVar42._4_4_ = auVar63._4_4_ + auVar63._4_4_;
        auVar42._8_4_ = auVar63._8_4_ + auVar63._8_4_;
        auVar42._12_4_ = auVar63._12_4_ + auVar63._12_4_;
        auVar63 = vshufps_avx(auVar42,auVar42,0xc9);
        auVar65 = vshufps_avx(auVar42,auVar42,0xd2);
        auVar43._0_4_ = local_138 * auVar65._0_4_;
        auVar43._4_4_ = fStack_134 * auVar65._4_4_;
        auVar43._8_4_ = fStack_130 * auVar65._8_4_;
        auVar43._12_4_ = fStack_12c * auVar65._12_4_;
        auVar54._0_4_ = local_158 * auVar63._0_4_;
        auVar54._4_4_ = fStack_154 * auVar63._4_4_;
        auVar54._8_4_ = fStack_150 * auVar63._8_4_;
        auVar54._12_4_ = fStack_14c * auVar63._12_4_;
        auVar65 = vsubps_avx(auVar43,auVar54);
        auVar65 = vshufps_avx(auVar65,auVar65,0xc9);
        auVar55._0_4_ = auVar30._0_4_ + fVar5 * auVar63._0_4_ + auVar65._0_4_;
        auVar55._4_4_ = auVar30._4_4_ + fVar5 * auVar63._4_4_ + auVar65._4_4_;
        auVar55._8_4_ = auVar30._8_4_ + fVar5 * auVar63._8_4_ + auVar65._8_4_;
        auVar55._12_4_ = auVar30._12_4_ + fVar5 * auVar63._12_4_ + auVar65._12_4_;
        auVar31._0_4_ = auVar55._0_4_ * auVar55._0_4_;
        auVar31._4_4_ = auVar55._4_4_ * auVar55._4_4_;
        auVar31._8_4_ = auVar55._8_4_ * auVar55._8_4_;
        auVar31._12_4_ = auVar55._12_4_ * auVar55._12_4_;
        auVar63 = vmovshdup_avx(auVar31);
        auVar65 = vshufpd_avx(auVar31,auVar31,1);
        fVar6 = auVar65._0_4_ + auVar31._0_4_ + auVar63._0_4_;
        auVar63 = vshufps_avx(ZEXT416((uint)SQRT(fVar6)),local_e8,0xe0);
        local_e8 = vinsertps_avx(auVar63,ZEXT416((uint)SQRT(fVar6)),0x20);
        auVar63 = vdivps_avx(auVar55,local_e8);
        uVar56 = 0;
        uVar59 = 0;
        if (__real_00800000 < fVar6) {
          auVar65 = vmovshdup_avx(auVar63);
          uVar56 = auVar65._0_4_;
          auVar65 = vshufpd_avx(auVar63,auVar63,1);
          uVar59 = auVar65._0_4_;
        }
        auVar65 = vblendps_avx(auVar55,in_ZMM12._0_16_,8);
        in_ZMM12 = ZEXT1664(auVar65);
        auVar65 = vblendps_avx(auVar55,in_ZMM13._0_16_,8);
        in_ZMM13 = ZEXT1664(auVar65);
        auVar65 = vblendps_avx(auVar55,in_ZMM10._0_16_,8);
        in_ZMM10 = ZEXT1664(auVar65);
        auVar65 = vcmpss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)__real_00800000),2);
        auVar63 = vblendvps_avx(auVar63,___xmm_3f8000003f8000003f8000003f800000,auVar65);
        *(int *)(param_2 + lVar20) = auVar63._0_4_;
        *(undefined4 *)(param_2 + 4 + lVar20) = uVar56;
        *(undefined4 *)(param_2 + 8 + lVar20) = uVar59;
        uVar19 = uVar19 + 1;
        lVar18 = lVar18 + 0x4c;
      } while (uVar19 != param_9);
    }
  }
  else if (0 < (int)param_9) {
    uVar14 = *(undefined8 *)param_8[2];
    uVar15 = *(undefined8 *)(param_8[2] + 8);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar22._4_4_ = fVar5;
    auVar22._0_4_ = fVar5;
    auVar22._8_4_ = fVar5;
    auVar22._12_4_ = fVar5;
    auVar44._8_8_ = 0;
    auVar44._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)*param_8),0x20);
    auVar50 = vblendps_avx(auVar44,auVar22,8);
    auVar27 = *param_8;
    uVar16 = *(undefined8 *)param_8[1];
    uVar17 = *(undefined8 *)(param_8[1] + 8);
    auVar22 = vshufps_avx(auVar27,auVar27,0xc9);
    uVar19 = 0;
    lVar18 = param_5;
    do {
      uVar13 = *(uint *)(param_5 + uVar19 * 0x4c);
      auVar60._0_12_ = ZEXT812(0);
      auVar61 = ZEXT1264(auVar60._0_12_);
      auVar60._12_4_ = 0.0;
      auVar62._0_12_ = ZEXT812(0);
      auVar64 = ZEXT1264(auVar62._0_12_);
      auVar62._12_4_ = 0.0;
      if (0 < (int)uVar13) {
        lVar20 = uVar19 * 0xc;
        fVar6 = *(float *)(param_3 + lVar20);
        fVar7 = *(float *)(param_4 + lVar20);
        fVar8 = *(float *)(param_3 + 4 + lVar20);
        fVar9 = *(float *)(param_4 + 4 + lVar20);
        fVar10 = *(float *)(param_3 + 8 + lVar20);
        fVar11 = *(float *)(param_4 + 8 + lVar20);
        uVar21 = 0;
        do {
          lVar20 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar18 + 4 + uVar21 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar20);
          pfVar2 = (float *)(param_7 + 0x10 + lVar20);
          pfVar3 = (float *)(param_7 + 0x20 + lVar20);
          pfVar4 = (float *)(param_7 + 0x30 + lVar20);
          fVar12 = *(float *)(lVar18 + 0x1c + uVar21 * 4);
          auVar60._0_4_ =
               auVar61._0_4_ +
               fVar12 * (fVar10 * *pfVar3 + fVar6 * *pfVar1 + fVar8 * *pfVar2 + *pfVar4);
          auVar60._4_4_ =
               auVar61._4_4_ +
               fVar12 * (fVar10 * pfVar3[1] + fVar6 * pfVar1[1] + fVar8 * pfVar2[1] + pfVar4[1]);
          auVar60._8_4_ =
               auVar61._8_4_ +
               fVar12 * (fVar10 * pfVar3[2] + fVar6 * pfVar1[2] + fVar8 * pfVar2[2] + pfVar4[2]);
          auVar60._12_4_ =
               auVar61._12_4_ +
               fVar12 * (fVar10 * pfVar3[3] + fVar6 * pfVar1[3] + fVar8 * pfVar2[3] + pfVar4[3]);
          auVar61 = ZEXT1664(auVar60);
          auVar62._0_4_ =
               auVar64._0_4_ + fVar12 * (fVar11 * *pfVar3 + fVar7 * *pfVar1 + fVar9 * *pfVar2);
          auVar62._4_4_ =
               auVar64._4_4_ + fVar12 * (fVar11 * pfVar3[1] + fVar7 * pfVar1[1] + fVar9 * pfVar2[1])
          ;
          auVar62._8_4_ =
               auVar64._8_4_ + fVar12 * (fVar11 * pfVar3[2] + fVar7 * pfVar1[2] + fVar9 * pfVar2[2])
          ;
          auVar62._12_4_ =
               auVar64._12_4_ +
               fVar12 * (fVar11 * pfVar3[3] + fVar7 * pfVar1[3] + fVar9 * pfVar2[3]);
          auVar64 = ZEXT1664(auVar62);
          uVar21 = uVar21 + 1;
        } while (uVar13 != uVar21);
      }
      lVar20 = uVar19 * 0xc;
      auVar57._0_12_ = ZEXT812(0);
      auVar57._12_4_ = 0;
      auVar63 = vblendps_avx(auVar60,auVar57,8);
      local_f8 = (float)uVar14;
      fStack_f4 = (float)((ulonglong)uVar14 >> 0x20);
      fStack_f0 = (float)uVar15;
      fStack_ec = (float)((ulonglong)uVar15 >> 0x20);
      auVar23._0_4_ = auVar63._0_4_ * local_f8;
      auVar23._4_4_ = auVar63._4_4_ * fStack_f4;
      auVar23._8_4_ = auVar63._8_4_ * fStack_f0;
      auVar23._12_4_ = auVar63._12_4_ * fStack_ec;
      auVar63 = vshufps_avx(auVar23,auVar23,0xc9);
      local_138 = auVar27._0_4_;
      fStack_134 = auVar27._4_4_;
      fStack_130 = auVar27._8_4_;
      fStack_12c = auVar27._12_4_;
      auVar32._0_4_ = auVar63._0_4_ * local_138;
      auVar32._4_4_ = auVar63._4_4_ * fStack_134;
      auVar32._8_4_ = auVar63._8_4_ * fStack_130;
      auVar32._12_4_ = auVar63._12_4_ * fStack_12c;
      local_128 = auVar50._0_4_;
      fStack_124 = auVar50._4_4_;
      fStack_120 = auVar50._8_4_;
      fStack_11c = auVar50._12_4_;
      auVar45._0_4_ = auVar23._0_4_ * local_128;
      auVar45._4_4_ = auVar23._4_4_ * fStack_124;
      auVar45._8_4_ = auVar23._8_4_ * fStack_120;
      auVar45._12_4_ = auVar23._12_4_ * fStack_11c;
      auVar63 = vsubps_avx(auVar32,auVar45);
      auVar33._0_4_ = auVar63._0_4_ + auVar63._0_4_;
      auVar33._4_4_ = auVar63._4_4_ + auVar63._4_4_;
      auVar33._8_4_ = auVar63._8_4_ + auVar63._8_4_;
      auVar33._12_4_ = auVar63._12_4_ + auVar63._12_4_;
      auVar63 = vshufps_avx(auVar33,auVar33,0xc9);
      auVar65 = vshufps_avx(auVar33,auVar33,0xd2);
      auVar34._0_4_ = local_138 * auVar65._0_4_;
      auVar34._4_4_ = fStack_134 * auVar65._4_4_;
      auVar34._8_4_ = fStack_130 * auVar65._8_4_;
      auVar34._12_4_ = fStack_12c * auVar65._12_4_;
      local_118 = auVar44._0_4_;
      fStack_114 = auVar44._4_4_;
      fStack_110 = auVar44._8_4_;
      fStack_10c = auVar44._12_4_;
      auVar46._0_4_ = auVar63._0_4_ * local_118;
      auVar46._4_4_ = auVar63._4_4_ * fStack_114;
      auVar46._8_4_ = auVar63._8_4_ * fStack_110;
      auVar46._12_4_ = auVar63._12_4_ * fStack_10c;
      auVar65 = vsubps_avx(auVar34,auVar46);
      auVar65 = vshufps_avx(auVar65,auVar65,0xc9);
      local_148 = (float)uVar16;
      fStack_144 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_140 = (float)uVar17;
      fStack_13c = (float)((ulonglong)uVar17 >> 0x20);
      auVar24._0_4_ = auVar23._0_4_ + fVar5 * auVar63._0_4_ + auVar65._0_4_ + local_148;
      auVar24._4_4_ = auVar23._4_4_ + fVar5 * auVar63._4_4_ + auVar65._4_4_ + fStack_144;
      auVar24._8_4_ = auVar23._8_4_ + fVar5 * auVar63._8_4_ + auVar65._8_4_ + fStack_140;
      auVar24._12_4_ = auVar23._12_4_ + fVar5 * auVar63._12_4_ + auVar65._12_4_ + fStack_13c;
      *(float *)(param_1 + lVar20) = auVar24._0_4_;
      uVar56 = vextractps_avx(auVar24,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar56;
      uVar56 = vextractps_avx(auVar24,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar56;
      auVar63 = vblendps_avx(auVar62,auVar57,8);
      auVar25._0_4_ = auVar63._0_4_ * local_f8;
      auVar25._4_4_ = auVar63._4_4_ * fStack_f4;
      auVar25._8_4_ = auVar63._8_4_ * fStack_f0;
      auVar25._12_4_ = auVar63._12_4_ * fStack_ec;
      auVar63 = vshufps_avx(auVar25,auVar25,0xc9);
      auVar35._0_4_ = auVar63._0_4_ * local_138;
      auVar35._4_4_ = auVar63._4_4_ * fStack_134;
      auVar35._8_4_ = auVar63._8_4_ * fStack_130;
      auVar35._12_4_ = auVar63._12_4_ * fStack_12c;
      local_158 = auVar22._0_4_;
      fStack_154 = auVar22._4_4_;
      fStack_150 = auVar22._8_4_;
      fStack_14c = auVar22._12_4_;
      auVar47._0_4_ = auVar25._0_4_ * local_158;
      auVar47._4_4_ = auVar25._4_4_ * fStack_154;
      auVar47._8_4_ = auVar25._8_4_ * fStack_150;
      auVar47._12_4_ = auVar25._12_4_ * fStack_14c;
      auVar63 = vsubps_avx(auVar35,auVar47);
      auVar36._0_4_ = auVar63._0_4_ + auVar63._0_4_;
      auVar36._4_4_ = auVar63._4_4_ + auVar63._4_4_;
      auVar36._8_4_ = auVar63._8_4_ + auVar63._8_4_;
      auVar36._12_4_ = auVar63._12_4_ + auVar63._12_4_;
      auVar63 = vshufps_avx(auVar36,auVar36,0xc9);
      auVar65 = vshufps_avx(auVar36,auVar36,0xd2);
      auVar37._0_4_ = local_138 * auVar65._0_4_;
      auVar37._4_4_ = fStack_134 * auVar65._4_4_;
      auVar37._8_4_ = fStack_130 * auVar65._8_4_;
      auVar37._12_4_ = fStack_12c * auVar65._12_4_;
      auVar48._0_4_ = local_158 * auVar63._0_4_;
      auVar48._4_4_ = fStack_154 * auVar63._4_4_;
      auVar48._8_4_ = fStack_150 * auVar63._8_4_;
      auVar48._12_4_ = fStack_14c * auVar63._12_4_;
      auVar65 = vsubps_avx(auVar37,auVar48);
      auVar65 = vshufps_avx(auVar65,auVar65,0xc9);
      auVar49._0_4_ = auVar25._0_4_ + fVar5 * auVar63._0_4_ + auVar65._0_4_;
      auVar49._4_4_ = auVar25._4_4_ + fVar5 * auVar63._4_4_ + auVar65._4_4_;
      auVar49._8_4_ = auVar25._8_4_ + fVar5 * auVar63._8_4_ + auVar65._8_4_;
      auVar49._12_4_ = auVar25._12_4_ + fVar5 * auVar63._12_4_ + auVar65._12_4_;
      auVar26._0_4_ = auVar49._0_4_ * auVar49._0_4_;
      auVar26._4_4_ = auVar49._4_4_ * auVar49._4_4_;
      auVar26._8_4_ = auVar49._8_4_ * auVar49._8_4_;
      auVar26._12_4_ = auVar49._12_4_ * auVar49._12_4_;
      auVar63 = vmovshdup_avx(auVar26);
      auVar65 = vshufpd_avx(auVar26,auVar26,1);
      fVar6 = auVar65._0_4_ + auVar26._0_4_ + auVar63._0_4_;
      auVar63 = vshufps_avx(ZEXT416((uint)SQRT(fVar6)),local_e8,0xe0);
      local_e8 = vinsertps_avx(auVar63,ZEXT416((uint)SQRT(fVar6)),0x20);
      auVar63 = vdivps_avx(auVar49,local_e8);
      uVar56 = 0;
      uVar59 = 0;
      if (__real_00800000 < fVar6) {
        auVar65 = vmovshdup_avx(auVar63);
        uVar56 = auVar65._0_4_;
        auVar65 = vshufpd_avx(auVar63,auVar63,1);
        uVar59 = auVar65._0_4_;
      }
      auVar65 = vblendps_avx(auVar49,in_ZMM12._0_16_,8);
      in_ZMM12 = ZEXT1664(auVar65);
      auVar65 = vblendps_avx(auVar49,in_ZMM13._0_16_,8);
      in_ZMM13 = ZEXT1664(auVar65);
      auVar65 = vblendps_avx(auVar49,in_ZMM10._0_16_,8);
      in_ZMM10 = ZEXT1664(auVar65);
      auVar65 = vcmpss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)__real_00800000),2);
      auVar63 = vblendvps_avx(auVar63,___xmm_3f8000003f8000003f8000003f800000,auVar65);
      *(int *)(param_2 + lVar20) = auVar63._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar20) = uVar56;
      *(undefined4 *)(param_2 + 8 + lVar20) = uVar59;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 0x4c;
    } while (uVar19 != param_9);
  }
  return;
}

// SkinPhysicsMesh_avx @ 140cc8220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkinPhysicsMesh_avx(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                        longlong param_5,longlong param_6,longlong param_7,
                        undefined1 (*param_8) [16],uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
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
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  
  if (0 < (int)param_9) {
    uVar16 = *(undefined8 *)param_8[2];
    uVar17 = *(undefined8 *)(param_8[2] + 8);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar24._4_4_ = fVar5;
    auVar24._0_4_ = fVar5;
    auVar24._8_4_ = fVar5;
    auVar24._12_4_ = fVar5;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar14 = vinsertps_avx(auVar35,ZEXT416(*(uint *)*param_8),0x20);
    auVar35 = vblendps_avx(auVar14,auVar24,8);
    auVar24 = *param_8;
    uVar18 = *(undefined8 *)param_8[1];
    uVar19 = *(undefined8 *)(param_8[1] + 8);
    auVar15 = vshufps_avx(auVar24,auVar24,0xc9);
    uVar21 = 0;
    lVar20 = param_5;
    do {
      uVar13 = *(uint *)(param_5 + uVar21 * 0x4c);
      auVar44._0_12_ = ZEXT812(0);
      auVar45 = ZEXT1264(auVar44._0_12_);
      auVar44._12_4_ = 0.0;
      auVar46._0_12_ = ZEXT812(0);
      auVar47 = ZEXT1264(auVar46._0_12_);
      auVar46._12_4_ = 0.0;
      if (0 < (int)uVar13) {
        lVar22 = uVar21 * 0xc;
        fVar6 = *(float *)(param_3 + lVar22);
        fVar7 = *(float *)(param_4 + lVar22);
        fVar8 = *(float *)(param_3 + 4 + lVar22);
        fVar9 = *(float *)(param_4 + 4 + lVar22);
        fVar10 = *(float *)(param_3 + 8 + lVar22);
        fVar11 = *(float *)(param_4 + 8 + lVar22);
        uVar23 = 0;
        do {
          lVar22 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar20 + 4 + uVar23 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar22);
          pfVar2 = (float *)(param_7 + 0x10 + lVar22);
          pfVar3 = (float *)(param_7 + 0x20 + lVar22);
          pfVar4 = (float *)(param_7 + 0x30 + lVar22);
          fVar12 = *(float *)(lVar20 + 0x1c + uVar23 * 4);
          auVar46._0_4_ =
               auVar47._0_4_ +
               fVar12 * (fVar10 * *pfVar3 + fVar6 * *pfVar1 + fVar8 * *pfVar2 + *pfVar4);
          auVar46._4_4_ =
               auVar47._4_4_ +
               fVar12 * (fVar10 * pfVar3[1] + fVar6 * pfVar1[1] + fVar8 * pfVar2[1] + pfVar4[1]);
          auVar46._8_4_ =
               auVar47._8_4_ +
               fVar12 * (fVar10 * pfVar3[2] + fVar6 * pfVar1[2] + fVar8 * pfVar2[2] + pfVar4[2]);
          auVar46._12_4_ =
               auVar47._12_4_ +
               fVar12 * (fVar10 * pfVar3[3] + fVar6 * pfVar1[3] + fVar8 * pfVar2[3] + pfVar4[3]);
          auVar47 = ZEXT1664(auVar46);
          auVar44._0_4_ =
               auVar45._0_4_ + fVar12 * (fVar11 * *pfVar3 + fVar7 * *pfVar1 + fVar9 * *pfVar2);
          auVar44._4_4_ =
               auVar45._4_4_ + fVar12 * (fVar11 * pfVar3[1] + fVar7 * pfVar1[1] + fVar9 * pfVar2[1])
          ;
          auVar44._8_4_ =
               auVar45._8_4_ + fVar12 * (fVar11 * pfVar3[2] + fVar7 * pfVar1[2] + fVar9 * pfVar2[2])
          ;
          auVar44._12_4_ =
               auVar45._12_4_ +
               fVar12 * (fVar11 * pfVar3[3] + fVar7 * pfVar1[3] + fVar9 * pfVar2[3]);
          auVar45 = ZEXT1664(auVar44);
          uVar23 = uVar23 + 1;
        } while (uVar13 != uVar23);
      }
      lVar22 = uVar21 * 0xc;
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      auVar46 = vblendps_avx(auVar46,auVar42,8);
      local_f8 = (float)uVar16;
      fStack_f4 = (float)((ulonglong)uVar16 >> 0x20);
      fStack_f0 = (float)uVar17;
      fStack_ec = (float)((ulonglong)uVar17 >> 0x20);
      auVar25._0_4_ = auVar46._0_4_ * local_f8;
      auVar25._4_4_ = auVar46._4_4_ * fStack_f4;
      auVar25._8_4_ = auVar46._8_4_ * fStack_f0;
      auVar25._12_4_ = auVar46._12_4_ * fStack_ec;
      auVar46 = vshufps_avx(auVar25,auVar25,0xc9);
      local_138 = auVar24._0_4_;
      fStack_134 = auVar24._4_4_;
      fStack_130 = auVar24._8_4_;
      fStack_12c = auVar24._12_4_;
      auVar29._0_4_ = auVar46._0_4_ * local_138;
      auVar29._4_4_ = auVar46._4_4_ * fStack_134;
      auVar29._8_4_ = auVar46._8_4_ * fStack_130;
      auVar29._12_4_ = auVar46._12_4_ * fStack_12c;
      local_128 = auVar35._0_4_;
      fStack_124 = auVar35._4_4_;
      fStack_120 = auVar35._8_4_;
      fStack_11c = auVar35._12_4_;
      auVar36._0_4_ = auVar25._0_4_ * local_128;
      auVar36._4_4_ = auVar25._4_4_ * fStack_124;
      auVar36._8_4_ = auVar25._8_4_ * fStack_120;
      auVar36._12_4_ = auVar25._12_4_ * fStack_11c;
      auVar46 = vsubps_avx(auVar29,auVar36);
      auVar30._0_4_ = auVar46._0_4_ + auVar46._0_4_;
      auVar30._4_4_ = auVar46._4_4_ + auVar46._4_4_;
      auVar30._8_4_ = auVar46._8_4_ + auVar46._8_4_;
      auVar30._12_4_ = auVar46._12_4_ + auVar46._12_4_;
      auVar46 = vshufps_avx(auVar30,auVar30,0xc9);
      auVar27 = vshufps_avx(auVar30,auVar30,0xd2);
      auVar31._0_4_ = local_138 * auVar27._0_4_;
      auVar31._4_4_ = fStack_134 * auVar27._4_4_;
      auVar31._8_4_ = fStack_130 * auVar27._8_4_;
      auVar31._12_4_ = fStack_12c * auVar27._12_4_;
      local_118 = auVar14._0_4_;
      fStack_114 = auVar14._4_4_;
      fStack_110 = auVar14._8_4_;
      fStack_10c = auVar14._12_4_;
      auVar37._0_4_ = auVar46._0_4_ * local_118;
      auVar37._4_4_ = auVar46._4_4_ * fStack_114;
      auVar37._8_4_ = auVar46._8_4_ * fStack_110;
      auVar37._12_4_ = auVar46._12_4_ * fStack_10c;
      auVar27 = vsubps_avx(auVar31,auVar37);
      auVar27 = vshufps_avx(auVar27,auVar27,0xc9);
      local_148 = (float)uVar18;
      fStack_144 = (float)((ulonglong)uVar18 >> 0x20);
      fStack_140 = (float)uVar19;
      fStack_13c = (float)((ulonglong)uVar19 >> 0x20);
      auVar26._0_4_ = auVar25._0_4_ + fVar5 * auVar46._0_4_ + auVar27._0_4_ + local_148;
      auVar26._4_4_ = auVar25._4_4_ + fVar5 * auVar46._4_4_ + auVar27._4_4_ + fStack_144;
      auVar26._8_4_ = auVar25._8_4_ + fVar5 * auVar46._8_4_ + auVar27._8_4_ + fStack_140;
      auVar26._12_4_ = auVar25._12_4_ + fVar5 * auVar46._12_4_ + auVar27._12_4_ + fStack_13c;
      *(float *)(param_1 + lVar22) = auVar26._0_4_;
      uVar41 = vextractps_avx(auVar26,1);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar41;
      uVar41 = vextractps_avx(auVar26,2);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar41;
      auVar44 = vblendps_avx(auVar44,auVar42,8);
      auVar27._0_4_ = auVar44._0_4_ * local_f8;
      auVar27._4_4_ = auVar44._4_4_ * fStack_f4;
      auVar27._8_4_ = auVar44._8_4_ * fStack_f0;
      auVar27._12_4_ = auVar44._12_4_ * fStack_ec;
      auVar44 = vshufps_avx(auVar27,auVar27,0xc9);
      auVar32._0_4_ = auVar44._0_4_ * local_138;
      auVar32._4_4_ = auVar44._4_4_ * fStack_134;
      auVar32._8_4_ = auVar44._8_4_ * fStack_130;
      auVar32._12_4_ = auVar44._12_4_ * fStack_12c;
      local_158 = auVar15._0_4_;
      fStack_154 = auVar15._4_4_;
      fStack_150 = auVar15._8_4_;
      fStack_14c = auVar15._12_4_;
      auVar38._0_4_ = auVar27._0_4_ * local_158;
      auVar38._4_4_ = auVar27._4_4_ * fStack_154;
      auVar38._8_4_ = auVar27._8_4_ * fStack_150;
      auVar38._12_4_ = auVar27._12_4_ * fStack_14c;
      auVar44 = vsubps_avx(auVar32,auVar38);
      auVar33._0_4_ = auVar44._0_4_ + auVar44._0_4_;
      auVar33._4_4_ = auVar44._4_4_ + auVar44._4_4_;
      auVar33._8_4_ = auVar44._8_4_ + auVar44._8_4_;
      auVar33._12_4_ = auVar44._12_4_ + auVar44._12_4_;
      auVar44 = vshufps_avx(auVar33,auVar33,0xc9);
      auVar46 = vshufps_avx(auVar33,auVar33,0xd2);
      auVar34._0_4_ = local_138 * auVar46._0_4_;
      auVar34._4_4_ = fStack_134 * auVar46._4_4_;
      auVar34._8_4_ = fStack_130 * auVar46._8_4_;
      auVar34._12_4_ = fStack_12c * auVar46._12_4_;
      auVar39._0_4_ = local_158 * auVar44._0_4_;
      auVar39._4_4_ = fStack_154 * auVar44._4_4_;
      auVar39._8_4_ = fStack_150 * auVar44._8_4_;
      auVar39._12_4_ = fStack_14c * auVar44._12_4_;
      auVar46 = vsubps_avx(auVar34,auVar39);
      auVar46 = vshufps_avx(auVar46,auVar46,0xc9);
      auVar40._0_4_ = auVar27._0_4_ + fVar5 * auVar44._0_4_ + auVar46._0_4_;
      auVar40._4_4_ = auVar27._4_4_ + fVar5 * auVar44._4_4_ + auVar46._4_4_;
      auVar40._8_4_ = auVar27._8_4_ + fVar5 * auVar44._8_4_ + auVar46._8_4_;
      auVar40._12_4_ = auVar27._12_4_ + fVar5 * auVar44._12_4_ + auVar46._12_4_;
      auVar28._0_4_ = auVar40._0_4_ * auVar40._0_4_;
      auVar28._4_4_ = auVar40._4_4_ * auVar40._4_4_;
      auVar28._8_4_ = auVar40._8_4_ * auVar40._8_4_;
      auVar28._12_4_ = auVar40._12_4_ * auVar40._12_4_;
      auVar44 = vmovshdup_avx(auVar28);
      auVar46 = vshufpd_avx(auVar28,auVar28,1);
      fVar6 = auVar46._0_4_ + auVar28._0_4_ + auVar44._0_4_;
      auVar44 = vshufps_avx(ZEXT416((uint)SQRT(fVar6)),local_e8,0xe0);
      local_e8 = vinsertps_avx(auVar44,ZEXT416((uint)SQRT(fVar6)),0x20);
      auVar44 = vdivps_avx(auVar40,local_e8);
      uVar41 = 0;
      uVar43 = 0;
      if (__real_00800000 < fVar6) {
        auVar46 = vmovshdup_avx(auVar44);
        uVar41 = auVar46._0_4_;
        auVar46 = vshufpd_avx(auVar44,auVar44,1);
        uVar43 = auVar46._0_4_;
      }
      auVar46 = vblendps_avx(auVar40,in_ZMM12._0_16_,8);
      in_ZMM12 = ZEXT1664(auVar46);
      auVar46 = vblendps_avx(auVar40,in_ZMM13._0_16_,8);
      in_ZMM13 = ZEXT1664(auVar46);
      auVar46 = vblendps_avx(auVar40,in_ZMM10._0_16_,8);
      in_ZMM10 = ZEXT1664(auVar46);
      auVar46 = vcmpss_avx(ZEXT416((uint)fVar6),ZEXT416((uint)__real_00800000),2);
      auVar44 = vblendvps_avx(auVar44,___xmm_3f8000003f8000003f8000003f800000,auVar46);
      *(int *)(param_2 + lVar22) = auVar44._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar22) = uVar41;
      *(undefined4 *)(param_2 + 8 + lVar22) = uVar43;
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0x4c;
    } while (uVar21 != param_9);
  }
  return;
}

