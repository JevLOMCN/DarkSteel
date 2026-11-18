// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_sse4 @ 140cc85d0

void SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9,
               undefined1 (*param_10) [16])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 unaff_EBX;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  
  iVar21 = movmskps(unaff_EBX,*param_10);
  if (iVar21 == 0xf) {
    if (0 < (int)param_9) {
      uVar17 = *(undefined8 *)param_8[2];
      uVar18 = *(undefined8 *)(param_8[2] + 8);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *(ulonglong *)(*param_8 + 4);
      auVar27 = insertps(auVar29,*(undefined4 *)*param_8,0x20);
      fVar5 = *(float *)(*param_8 + 0xc);
      auVar28 = insertps(auVar27,ZEXT416((uint)fVar5),0x30);
      auVar29 = *param_8;
      fVar8 = auVar29._12_4_;
      uVar19 = *(undefined8 *)param_8[1];
      uVar20 = *(undefined8 *)(param_8[1] + 8);
      fVar26 = auVar29._0_4_;
      uVar23 = 0;
      lVar22 = param_5;
      do {
        uVar6 = *(uint *)(param_5 + uVar23 * 0x4c);
        auVar48 = ZEXT816(0);
        auVar42 = ZEXT816(0);
        if (0 < (int)uVar6) {
          lVar24 = uVar23 * 0xc;
          fVar30 = *(float *)(param_3 + lVar24);
          fVar31 = *(float *)(param_3 + 4 + lVar24);
          fVar32 = *(float *)(param_3 + 8 + lVar24);
          fVar33 = *(float *)(param_4 + lVar24);
          fVar40 = *(float *)(param_4 + 4 + lVar24);
          fVar44 = *(float *)(param_4 + 8 + lVar24);
          uVar25 = 0;
          auVar43 = auVar42;
          auVar49 = auVar48;
          do {
            lVar24 = (longlong)
                     *(int *)(param_6 + (ulonglong)*(ushort *)(lVar22 + 4 + uVar25 * 2) * 4) * 0x40;
            pfVar1 = (float *)(param_7 + lVar24);
            pfVar2 = (float *)(param_7 + 0x10 + lVar24);
            pfVar3 = (float *)(param_7 + 0x20 + lVar24);
            pfVar4 = (float *)(param_7 + 0x30 + lVar24);
            fVar45 = *(float *)(lVar22 + 0x1c + uVar25 * 4);
            auVar42._0_4_ =
                 auVar43._0_4_ +
                 (fVar32 * *pfVar3 + fVar31 * *pfVar2 + fVar30 * *pfVar1 + *pfVar4) * fVar45;
            auVar42._4_4_ =
                 auVar43._4_4_ +
                 (fVar32 * pfVar3[1] + fVar31 * pfVar2[1] + fVar30 * pfVar1[1] + pfVar4[1]) * fVar45
            ;
            auVar42._8_4_ =
                 auVar43._8_4_ +
                 (fVar32 * pfVar3[2] + fVar31 * pfVar2[2] + fVar30 * pfVar1[2] + pfVar4[2]) * fVar45
            ;
            auVar42._12_4_ =
                 auVar43._12_4_ +
                 (fVar32 * pfVar3[3] + fVar31 * pfVar2[3] + fVar30 * pfVar1[3] + pfVar4[3]) * fVar45
            ;
            auVar48._0_4_ =
                 auVar49._0_4_ + fVar45 * (*pfVar3 * fVar44 + *pfVar2 * fVar40 + *pfVar1 * fVar33);
            auVar48._4_4_ =
                 auVar49._4_4_ +
                 fVar45 * (pfVar3[1] * fVar44 + pfVar2[1] * fVar40 + pfVar1[1] * fVar33);
            auVar48._8_4_ =
                 auVar49._8_4_ +
                 fVar45 * (pfVar3[2] * fVar44 + pfVar2[2] * fVar40 + pfVar1[2] * fVar33);
            auVar48._12_4_ =
                 auVar49._12_4_ +
                 fVar45 * (pfVar3[3] * fVar44 + pfVar2[3] * fVar40 + pfVar1[3] * fVar33);
            uVar25 = uVar25 + 1;
            auVar43 = auVar42;
            auVar49 = auVar48;
          } while (uVar6 != uVar25);
        }
        lVar24 = uVar23 * 0xc;
        auVar42 = blendps(auVar42,ZEXT816(0),8);
        local_f8 = (float)uVar17;
        fStack_f4 = (float)((ulonglong)uVar17 >> 0x20);
        fStack_f0 = (float)uVar18;
        fStack_ec = (float)((ulonglong)uVar18 >> 0x20);
        fVar40 = auVar42._0_4_ * local_f8;
        fVar44 = auVar42._4_4_ * fStack_f4;
        fVar45 = auVar42._8_4_ * fStack_f0;
        fVar46 = auVar42._12_4_ * fStack_ec;
        fStack_134 = auVar29._4_4_;
        fStack_130 = auVar29._8_4_;
        local_128 = auVar28._0_4_;
        fStack_124 = auVar28._4_4_;
        fStack_120 = auVar28._8_4_;
        fStack_11c = auVar28._12_4_;
        fVar30 = fVar44 * fVar26 - fVar40 * local_128;
        fVar31 = fVar45 * fStack_134 - fVar44 * fStack_124;
        fVar32 = fVar40 * fStack_130 - fVar45 * fStack_120;
        fVar33 = fVar46 * fVar8 - fVar46 * fStack_11c;
        fVar30 = fVar30 + fVar30;
        fVar31 = fVar31 + fVar31;
        fVar32 = fVar32 + fVar32;
        fVar33 = fVar33 + fVar33;
        local_108 = auVar27._0_4_;
        fStack_104 = auVar27._4_4_;
        fStack_100 = auVar27._8_4_;
        fStack_fc = auVar27._12_4_;
        local_148 = (float)uVar19;
        fStack_144 = (float)((ulonglong)uVar19 >> 0x20);
        fStack_140 = (float)uVar20;
        fStack_13c = (float)((ulonglong)uVar20 >> 0x20);
        local_148 = (fVar30 * fStack_134 - fVar32 * fStack_104) + fVar5 * fVar31 + fVar40 +
                    local_148;
        fStack_144 = (fVar31 * fStack_130 - fVar30 * fStack_100) + fVar5 * fVar32 + fVar44 +
                     fStack_144;
        fStack_140 = (fVar32 * fVar26 - fVar31 * local_108) + fVar5 * fVar30 + fVar45 + fStack_140;
        fStack_13c = (fVar33 * fVar8 - fVar33 * fStack_fc) + fVar5 * fVar33 + fVar46 + fStack_13c;
        *(float *)(param_1 + lVar24) = local_148;
        auVar43._4_4_ = fStack_144;
        auVar43._0_4_ = local_148;
        auVar43._8_4_ = fStack_140;
        auVar43._12_4_ = fStack_13c;
        uVar7 = extractps(auVar43,1);
        *(undefined8 *)(param_1 + 4 + lVar24) = uVar7;
        auVar49._4_4_ = fStack_144;
        auVar49._0_4_ = local_148;
        auVar49._8_4_ = fStack_140;
        auVar49._12_4_ = fStack_13c;
        uVar7 = extractps(auVar49,2);
        *(undefined8 *)(param_1 + 8 + lVar24) = uVar7;
        auVar42 = blendps(auVar48,ZEXT816(0),8);
        local_f8 = auVar42._0_4_ * local_f8;
        fStack_f4 = auVar42._4_4_ * fStack_f4;
        fStack_f0 = auVar42._8_4_ * fStack_f0;
        fStack_ec = auVar42._12_4_ * fStack_ec;
        fVar30 = fStack_f4 * fVar26 - local_f8 * fStack_134;
        fVar32 = fStack_f0 * fStack_134 - fStack_f4 * fStack_130;
        fVar40 = local_f8 * fStack_130 - fStack_f0 * fVar26;
        fVar44 = fStack_ec * fVar8 - fStack_ec * fVar8;
        fVar30 = fVar30 + fVar30;
        fVar32 = fVar32 + fVar32;
        fVar40 = fVar40 + fVar40;
        fVar44 = fVar44 + fVar44;
        fVar31 = (fVar30 * fStack_134 - fVar40 * fStack_130) + fVar8 * fVar32 + local_f8;
        fVar33 = (fVar32 * fStack_130 - fVar30 * fVar26) + fVar8 * fVar40 + fStack_f4;
        fVar32 = (fVar40 * fVar26 - fVar32 * fStack_134) + fVar8 * fVar30 + fStack_f0;
        fVar40 = (fVar44 * fVar8 - fVar44 * fVar8) + fVar8 * fVar44 + fStack_ec;
        fVar44 = fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32;
        fVar30 = SQRT(fVar44);
        auVar35._4_4_ = fVar30;
        auVar35._0_4_ = fVar30;
        auVar35._8_4_ = local_e8._8_4_;
        auVar35._12_4_ = local_e8._12_4_;
        local_e8 = insertps(auVar35,ZEXT416((uint)fVar30),0x20);
        auVar39._4_4_ = fVar33;
        auVar39._0_4_ = fVar31;
        auVar39._8_4_ = fVar32;
        auVar39._12_4_ = fVar40;
        auVar42 = divps(auVar39,local_e8);
        uVar36 = 0;
        uVar37 = 0;
        if (__real_00800000 < fVar44) {
          uVar36 = auVar42._4_4_;
          uVar37 = auVar42._8_4_;
        }
        auVar14._4_4_ = fVar33;
        auVar14._0_4_ = fVar31;
        auVar14._8_4_ = fVar32;
        auVar14._12_4_ = fVar40;
        unaff_XMM13 = blendps(unaff_XMM13,auVar14,7);
        auVar15._4_4_ = fVar33;
        auVar15._0_4_ = fVar31;
        auVar15._8_4_ = fVar32;
        auVar15._12_4_ = fVar40;
        unaff_XMM14 = blendps(unaff_XMM14,auVar15,7);
        auVar16._4_4_ = fVar33;
        auVar16._0_4_ = fVar31;
        auVar16._8_4_ = fVar32;
        auVar16._12_4_ = fVar40;
        unaff_XMM11 = blendps(unaff_XMM11,auVar16,7);
        *(uint *)(param_2 + lVar24) =
             -(uint)(fVar44 <= __real_00800000) & __real_3f800000 |
             ~-(uint)(fVar44 <= __real_00800000) & auVar42._0_4_;
        *(undefined4 *)(param_2 + 4 + lVar24) = uVar36;
        *(undefined4 *)(param_2 + 8 + lVar24) = uVar37;
        uVar23 = uVar23 + 1;
        lVar22 = lVar22 + 0x4c;
      } while (uVar23 != param_9);
    }
  }
  else if (0 < (int)param_9) {
    uVar17 = *(undefined8 *)param_8[2];
    uVar18 = *(undefined8 *)(param_8[2] + 8);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar27 = insertps(auVar27,*(undefined4 *)*param_8,0x20);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar28 = insertps(auVar27,ZEXT416((uint)fVar5),0x30);
    auVar29 = *param_8;
    fVar8 = auVar29._12_4_;
    uVar19 = *(undefined8 *)param_8[1];
    uVar20 = *(undefined8 *)(param_8[1] + 8);
    fVar26 = auVar29._0_4_;
    uVar23 = 0;
    lVar22 = param_5;
    do {
      uVar6 = *(uint *)(param_5 + uVar23 * 0x4c);
      auVar41 = ZEXT816(0);
      auVar47 = ZEXT816(0);
      if (0 < (int)uVar6) {
        lVar24 = uVar23 * 0xc;
        fVar30 = *(float *)(param_3 + lVar24);
        fVar31 = *(float *)(param_3 + 4 + lVar24);
        fVar32 = *(float *)(param_3 + 8 + lVar24);
        fVar33 = *(float *)(param_4 + lVar24);
        fVar40 = *(float *)(param_4 + 4 + lVar24);
        fVar44 = *(float *)(param_4 + 8 + lVar24);
        uVar25 = 0;
        auVar42 = auVar41;
        auVar48 = auVar47;
        do {
          lVar24 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar22 + 4 + uVar25 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar24);
          pfVar2 = (float *)(param_7 + 0x10 + lVar24);
          pfVar3 = (float *)(param_7 + 0x20 + lVar24);
          pfVar4 = (float *)(param_7 + 0x30 + lVar24);
          fVar45 = *(float *)(lVar22 + 0x1c + uVar25 * 4);
          auVar41._0_4_ =
               auVar42._0_4_ +
               (fVar32 * *pfVar3 + fVar31 * *pfVar2 + fVar30 * *pfVar1 + *pfVar4) * fVar45;
          auVar41._4_4_ =
               auVar42._4_4_ +
               (fVar32 * pfVar3[1] + fVar31 * pfVar2[1] + fVar30 * pfVar1[1] + pfVar4[1]) * fVar45;
          auVar41._8_4_ =
               auVar42._8_4_ +
               (fVar32 * pfVar3[2] + fVar31 * pfVar2[2] + fVar30 * pfVar1[2] + pfVar4[2]) * fVar45;
          auVar41._12_4_ =
               auVar42._12_4_ +
               (fVar32 * pfVar3[3] + fVar31 * pfVar2[3] + fVar30 * pfVar1[3] + pfVar4[3]) * fVar45;
          auVar47._0_4_ =
               auVar48._0_4_ + fVar45 * (*pfVar3 * fVar44 + *pfVar2 * fVar40 + *pfVar1 * fVar33);
          auVar47._4_4_ =
               auVar48._4_4_ +
               fVar45 * (pfVar3[1] * fVar44 + pfVar2[1] * fVar40 + pfVar1[1] * fVar33);
          auVar47._8_4_ =
               auVar48._8_4_ +
               fVar45 * (pfVar3[2] * fVar44 + pfVar2[2] * fVar40 + pfVar1[2] * fVar33);
          auVar47._12_4_ =
               auVar48._12_4_ +
               fVar45 * (pfVar3[3] * fVar44 + pfVar2[3] * fVar40 + pfVar1[3] * fVar33);
          uVar25 = uVar25 + 1;
          auVar42 = auVar41;
          auVar48 = auVar47;
        } while (uVar6 != uVar25);
      }
      lVar24 = uVar23 * 0xc;
      auVar42 = blendps(auVar41,ZEXT816(0),8);
      local_f8 = (float)uVar17;
      fStack_f4 = (float)((ulonglong)uVar17 >> 0x20);
      fStack_f0 = (float)uVar18;
      fStack_ec = (float)((ulonglong)uVar18 >> 0x20);
      fVar40 = auVar42._0_4_ * local_f8;
      fVar44 = auVar42._4_4_ * fStack_f4;
      fVar45 = auVar42._8_4_ * fStack_f0;
      fVar46 = auVar42._12_4_ * fStack_ec;
      fStack_134 = auVar29._4_4_;
      fStack_130 = auVar29._8_4_;
      local_128 = auVar28._0_4_;
      fStack_124 = auVar28._4_4_;
      fStack_120 = auVar28._8_4_;
      fStack_11c = auVar28._12_4_;
      fVar30 = fVar44 * fVar26 - fVar40 * local_128;
      fVar31 = fVar45 * fStack_134 - fVar44 * fStack_124;
      fVar32 = fVar40 * fStack_130 - fVar45 * fStack_120;
      fVar33 = fVar46 * fVar8 - fVar46 * fStack_11c;
      fVar30 = fVar30 + fVar30;
      fVar31 = fVar31 + fVar31;
      fVar32 = fVar32 + fVar32;
      fVar33 = fVar33 + fVar33;
      local_108 = auVar27._0_4_;
      fStack_104 = auVar27._4_4_;
      fStack_100 = auVar27._8_4_;
      fStack_fc = auVar27._12_4_;
      local_148 = (float)uVar19;
      fStack_144 = (float)((ulonglong)uVar19 >> 0x20);
      fStack_140 = (float)uVar20;
      fStack_13c = (float)((ulonglong)uVar20 >> 0x20);
      local_148 = (fVar30 * fStack_134 - fVar32 * fStack_104) + fVar5 * fVar31 + fVar40 + local_148;
      fStack_144 = (fVar31 * fStack_130 - fVar30 * fStack_100) + fVar5 * fVar32 + fVar44 +
                   fStack_144;
      fStack_140 = (fVar32 * fVar26 - fVar31 * local_108) + fVar5 * fVar30 + fVar45 + fStack_140;
      fStack_13c = (fVar33 * fVar8 - fVar33 * fStack_fc) + fVar5 * fVar33 + fVar46 + fStack_13c;
      *(float *)(param_1 + lVar24) = local_148;
      auVar9._4_4_ = fStack_144;
      auVar9._0_4_ = local_148;
      auVar9._8_4_ = fStack_140;
      auVar9._12_4_ = fStack_13c;
      uVar7 = extractps(auVar9,1);
      *(undefined8 *)(param_1 + 4 + lVar24) = uVar7;
      auVar10._4_4_ = fStack_144;
      auVar10._0_4_ = local_148;
      auVar10._8_4_ = fStack_140;
      auVar10._12_4_ = fStack_13c;
      uVar7 = extractps(auVar10,2);
      *(undefined8 *)(param_1 + 8 + lVar24) = uVar7;
      auVar42 = blendps(auVar47,ZEXT816(0),8);
      local_f8 = auVar42._0_4_ * local_f8;
      fStack_f4 = auVar42._4_4_ * fStack_f4;
      fStack_f0 = auVar42._8_4_ * fStack_f0;
      fStack_ec = auVar42._12_4_ * fStack_ec;
      fVar30 = fStack_f4 * fVar26 - local_f8 * fStack_134;
      fVar32 = fStack_f0 * fStack_134 - fStack_f4 * fStack_130;
      fVar40 = local_f8 * fStack_130 - fStack_f0 * fVar26;
      fVar44 = fStack_ec * fVar8 - fStack_ec * fVar8;
      fVar30 = fVar30 + fVar30;
      fVar32 = fVar32 + fVar32;
      fVar40 = fVar40 + fVar40;
      fVar44 = fVar44 + fVar44;
      fVar31 = (fVar30 * fStack_134 - fVar40 * fStack_130) + fVar8 * fVar32 + local_f8;
      fVar33 = (fVar32 * fStack_130 - fVar30 * fVar26) + fVar8 * fVar40 + fStack_f4;
      fVar32 = (fVar40 * fVar26 - fVar32 * fStack_134) + fVar8 * fVar30 + fStack_f0;
      fVar40 = (fVar44 * fVar8 - fVar44 * fVar8) + fVar8 * fVar44 + fStack_ec;
      fVar44 = fVar33 * fVar33 + fVar31 * fVar31 + fVar32 * fVar32;
      fVar30 = SQRT(fVar44);
      auVar34._4_4_ = fVar30;
      auVar34._0_4_ = fVar30;
      auVar34._8_4_ = local_e8._8_4_;
      auVar34._12_4_ = local_e8._12_4_;
      local_e8 = insertps(auVar34,ZEXT416((uint)fVar30),0x20);
      auVar38._4_4_ = fVar33;
      auVar38._0_4_ = fVar31;
      auVar38._8_4_ = fVar32;
      auVar38._12_4_ = fVar40;
      auVar42 = divps(auVar38,local_e8);
      uVar36 = 0;
      uVar37 = 0;
      if (__real_00800000 < fVar44) {
        uVar36 = auVar42._4_4_;
        uVar37 = auVar42._8_4_;
      }
      auVar11._4_4_ = fVar33;
      auVar11._0_4_ = fVar31;
      auVar11._8_4_ = fVar32;
      auVar11._12_4_ = fVar40;
      unaff_XMM13 = blendps(unaff_XMM13,auVar11,7);
      auVar12._4_4_ = fVar33;
      auVar12._0_4_ = fVar31;
      auVar12._8_4_ = fVar32;
      auVar12._12_4_ = fVar40;
      unaff_XMM14 = blendps(unaff_XMM14,auVar12,7);
      auVar13._4_4_ = fVar33;
      auVar13._0_4_ = fVar31;
      auVar13._8_4_ = fVar32;
      auVar13._12_4_ = fVar40;
      unaff_XMM11 = blendps(unaff_XMM11,auVar13,7);
      *(uint *)(param_2 + lVar24) =
           -(uint)(fVar44 <= __real_00800000) & __real_3f800000 |
           ~-(uint)(fVar44 <= __real_00800000) & auVar42._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar24) = uVar36;
      *(undefined4 *)(param_2 + 8 + lVar24) = uVar37;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x4c;
    } while (uVar23 != param_9);
  }
  return;
}

// SkinPhysicsMesh_sse4 @ 140cc8ca0

void SkinPhysicsMesh_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 unaff_XMM11 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  
  if (0 < (int)param_9) {
    uVar12 = *(undefined8 *)param_8[2];
    uVar13 = *(undefined8 *)(param_8[2] + 8);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar22 = insertps(auVar21,*(undefined4 *)*param_8,0x20);
    fVar5 = *(float *)(*param_8 + 0xc);
    auVar23 = insertps(auVar22,ZEXT416((uint)fVar5),0x30);
    auVar21 = *param_8;
    fVar8 = auVar21._12_4_;
    uVar14 = *(undefined8 *)param_8[1];
    uVar15 = *(undefined8 *)(param_8[1] + 8);
    fVar20 = auVar21._0_4_;
    uVar17 = 0;
    lVar16 = param_5;
    do {
      uVar6 = *(uint *)(param_5 + uVar17 * 0x4c);
      auVar38 = ZEXT816(0);
      auVar34 = ZEXT816(0);
      if (0 < (int)uVar6) {
        lVar18 = uVar17 * 0xc;
        fVar24 = *(float *)(param_3 + lVar18);
        fVar25 = *(float *)(param_3 + 4 + lVar18);
        fVar26 = *(float *)(param_3 + 8 + lVar18);
        fVar27 = *(float *)(param_4 + lVar18);
        fVar32 = *(float *)(param_4 + 4 + lVar18);
        fVar35 = *(float *)(param_4 + 8 + lVar18);
        uVar19 = 0;
        auVar33 = auVar34;
        auVar39 = auVar38;
        do {
          lVar18 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar16 + 4 + uVar19 * 2) * 4)
                   * 0x40;
          pfVar1 = (float *)(param_7 + lVar18);
          pfVar2 = (float *)(param_7 + 0x10 + lVar18);
          pfVar3 = (float *)(param_7 + 0x20 + lVar18);
          pfVar4 = (float *)(param_7 + 0x30 + lVar18);
          fVar36 = *(float *)(lVar16 + 0x1c + uVar19 * 4);
          auVar34._0_4_ =
               auVar33._0_4_ +
               (fVar26 * *pfVar3 + fVar25 * *pfVar2 + fVar24 * *pfVar1 + *pfVar4) * fVar36;
          auVar34._4_4_ =
               auVar33._4_4_ +
               (fVar26 * pfVar3[1] + fVar25 * pfVar2[1] + fVar24 * pfVar1[1] + pfVar4[1]) * fVar36;
          auVar34._8_4_ =
               auVar33._8_4_ +
               (fVar26 * pfVar3[2] + fVar25 * pfVar2[2] + fVar24 * pfVar1[2] + pfVar4[2]) * fVar36;
          auVar34._12_4_ =
               auVar33._12_4_ +
               (fVar26 * pfVar3[3] + fVar25 * pfVar2[3] + fVar24 * pfVar1[3] + pfVar4[3]) * fVar36;
          auVar38._0_4_ =
               auVar39._0_4_ + fVar36 * (*pfVar3 * fVar35 + *pfVar2 * fVar32 + *pfVar1 * fVar27);
          auVar38._4_4_ =
               auVar39._4_4_ +
               fVar36 * (pfVar3[1] * fVar35 + pfVar2[1] * fVar32 + pfVar1[1] * fVar27);
          auVar38._8_4_ =
               auVar39._8_4_ +
               fVar36 * (pfVar3[2] * fVar35 + pfVar2[2] * fVar32 + pfVar1[2] * fVar27);
          auVar38._12_4_ =
               auVar39._12_4_ +
               fVar36 * (pfVar3[3] * fVar35 + pfVar2[3] * fVar32 + pfVar1[3] * fVar27);
          uVar19 = uVar19 + 1;
          auVar33 = auVar34;
          auVar39 = auVar38;
        } while (uVar6 != uVar19);
      }
      lVar18 = uVar17 * 0xc;
      auVar34 = blendps(auVar34,ZEXT816(0),8);
      local_f8 = (float)uVar12;
      fStack_f4 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_f0 = (float)uVar13;
      fStack_ec = (float)((ulonglong)uVar13 >> 0x20);
      fVar32 = auVar34._0_4_ * local_f8;
      fVar35 = auVar34._4_4_ * fStack_f4;
      fVar36 = auVar34._8_4_ * fStack_f0;
      fVar37 = auVar34._12_4_ * fStack_ec;
      fStack_134 = auVar21._4_4_;
      fStack_130 = auVar21._8_4_;
      local_128 = auVar23._0_4_;
      fStack_124 = auVar23._4_4_;
      fStack_120 = auVar23._8_4_;
      fStack_11c = auVar23._12_4_;
      fVar24 = fVar35 * fVar20 - fVar32 * local_128;
      fVar25 = fVar36 * fStack_134 - fVar35 * fStack_124;
      fVar26 = fVar32 * fStack_130 - fVar36 * fStack_120;
      fVar27 = fVar37 * fVar8 - fVar37 * fStack_11c;
      fVar24 = fVar24 + fVar24;
      fVar25 = fVar25 + fVar25;
      fVar26 = fVar26 + fVar26;
      fVar27 = fVar27 + fVar27;
      local_108 = auVar22._0_4_;
      fStack_104 = auVar22._4_4_;
      fStack_100 = auVar22._8_4_;
      fStack_fc = auVar22._12_4_;
      local_148 = (float)uVar14;
      fStack_144 = (float)((ulonglong)uVar14 >> 0x20);
      fStack_140 = (float)uVar15;
      fStack_13c = (float)((ulonglong)uVar15 >> 0x20);
      local_148 = (fVar24 * fStack_134 - fVar26 * fStack_104) + fVar5 * fVar25 + fVar32 + local_148;
      fStack_144 = (fVar25 * fStack_130 - fVar24 * fStack_100) + fVar5 * fVar26 + fVar35 +
                   fStack_144;
      fStack_140 = (fVar26 * fVar20 - fVar25 * local_108) + fVar5 * fVar24 + fVar36 + fStack_140;
      fStack_13c = (fVar27 * fVar8 - fVar27 * fStack_fc) + fVar5 * fVar27 + fVar37 + fStack_13c;
      *(float *)(param_1 + lVar18) = local_148;
      auVar33._4_4_ = fStack_144;
      auVar33._0_4_ = local_148;
      auVar33._8_4_ = fStack_140;
      auVar33._12_4_ = fStack_13c;
      uVar7 = extractps(auVar33,1);
      *(undefined8 *)(param_1 + 4 + lVar18) = uVar7;
      auVar39._4_4_ = fStack_144;
      auVar39._0_4_ = local_148;
      auVar39._8_4_ = fStack_140;
      auVar39._12_4_ = fStack_13c;
      uVar7 = extractps(auVar39,2);
      *(undefined8 *)(param_1 + 8 + lVar18) = uVar7;
      auVar34 = blendps(auVar38,ZEXT816(0),8);
      local_f8 = auVar34._0_4_ * local_f8;
      fStack_f4 = auVar34._4_4_ * fStack_f4;
      fStack_f0 = auVar34._8_4_ * fStack_f0;
      fStack_ec = auVar34._12_4_ * fStack_ec;
      fVar24 = fStack_f4 * fVar20 - local_f8 * fStack_134;
      fVar26 = fStack_f0 * fStack_134 - fStack_f4 * fStack_130;
      fVar32 = local_f8 * fStack_130 - fStack_f0 * fVar20;
      fVar35 = fStack_ec * fVar8 - fStack_ec * fVar8;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar32 = fVar32 + fVar32;
      fVar35 = fVar35 + fVar35;
      fVar25 = (fVar24 * fStack_134 - fVar32 * fStack_130) + fVar8 * fVar26 + local_f8;
      fVar27 = (fVar26 * fStack_130 - fVar24 * fVar20) + fVar8 * fVar32 + fStack_f4;
      fVar26 = (fVar32 * fVar20 - fVar26 * fStack_134) + fVar8 * fVar24 + fStack_f0;
      fVar32 = (fVar35 * fVar8 - fVar35 * fVar8) + fVar8 * fVar35 + fStack_ec;
      fVar35 = fVar27 * fVar27 + fVar25 * fVar25 + fVar26 * fVar26;
      fVar24 = SQRT(fVar35);
      auVar28._4_4_ = fVar24;
      auVar28._0_4_ = fVar24;
      auVar28._8_4_ = local_e8._8_4_;
      auVar28._12_4_ = local_e8._12_4_;
      local_e8 = insertps(auVar28,ZEXT416((uint)fVar24),0x20);
      auVar31._4_4_ = fVar27;
      auVar31._0_4_ = fVar25;
      auVar31._8_4_ = fVar26;
      auVar31._12_4_ = fVar32;
      auVar34 = divps(auVar31,local_e8);
      uVar29 = 0;
      uVar30 = 0;
      if (__real_00800000 < fVar35) {
        uVar29 = auVar34._4_4_;
        uVar30 = auVar34._8_4_;
      }
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar25;
      auVar9._8_4_ = fVar26;
      auVar9._12_4_ = fVar32;
      unaff_XMM13 = blendps(unaff_XMM13,auVar9,7);
      auVar10._4_4_ = fVar27;
      auVar10._0_4_ = fVar25;
      auVar10._8_4_ = fVar26;
      auVar10._12_4_ = fVar32;
      unaff_XMM14 = blendps(unaff_XMM14,auVar10,7);
      auVar11._4_4_ = fVar27;
      auVar11._0_4_ = fVar25;
      auVar11._8_4_ = fVar26;
      auVar11._12_4_ = fVar32;
      unaff_XMM11 = blendps(unaff_XMM11,auVar11,7);
      *(uint *)(param_2 + lVar18) =
           -(uint)(fVar35 <= __real_00800000) & __real_3f800000 |
           ~-(uint)(fVar35 <= __real_00800000) & auVar34._0_4_;
      *(undefined4 *)(param_2 + 4 + lVar18) = uVar29;
      *(undefined4 *)(param_2 + 8 + lVar18) = uVar30;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x4c;
    } while (uVar17 != param_9);
  }
  return;
}

