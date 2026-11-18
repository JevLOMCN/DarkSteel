// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx512skx @ 140cc6b50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkinPhysicsMesh___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFClothVertBoneData_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_REFs_5B__c_unFTransform3f_5D_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  
  auVar9 = ___xmm_00000007000000000000000000000000;
  fVar8 = __real_00800000;
  if (0 < (int)param_9) {
    auVar2 = param_8[2];
    uVar1 = *(undefined4 *)(*param_8 + 0xc);
    auVar27._4_4_ = uVar1;
    auVar27._0_4_ = uVar1;
    auVar27._8_4_ = uVar1;
    auVar27._12_4_ = uVar1;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar7 = vinsertps_avx(auVar28,ZEXT416(*(uint *)*param_8),0x20);
    auVar28 = *param_8;
    auVar6 = vblendps_avx(auVar7,auVar27,8);
    auVar3 = param_8[1];
    auVar14 = vshufps_avx512vl(auVar28,auVar28,0xc9);
    uVar11 = 0;
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    auVar15 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    lVar10 = param_5;
    do {
      uVar4 = *(uint *)(param_5 + uVar11 * 0x4c);
      auVar26._0_12_ = ZEXT812(0);
      auVar26._12_4_ = 0;
      auVar25._0_12_ = ZEXT812(0);
      auVar25._12_4_ = 0;
      if (0 < (int)uVar4) {
        lVar12 = uVar11 * 0xc;
        auVar16 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + lVar12)));
        auVar17 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + lVar12)));
        auVar18 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + 4 + lVar12)));
        auVar19 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + 4 + lVar12)));
        auVar20 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + 8 + lVar12)));
        auVar21 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + 8 + lVar12)));
        uVar13 = 0;
        do {
          lVar12 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar10 + 4 + uVar13 * 2) * 4)
                   * 0x40;
          auVar23 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar12);
          auVar24 = *(undefined1 (*) [16])(param_7 + 0x20 + lVar12);
          auVar22 = vmulps_avx512vl(auVar18,auVar23);
          auVar22 = vfmadd231ps_avx512vl(auVar22,auVar16,*(undefined1 (*) [16])(param_7 + lVar12));
          auVar23 = vmulps_avx512vl(auVar19,auVar23);
          auVar23 = vfmadd231ps_avx512vl(auVar23,auVar17,*(undefined1 (*) [16])(param_7 + lVar12));
          auVar22 = vfmadd231ps_avx512vl(auVar22,auVar20,auVar24);
          auVar22 = vaddps_avx512vl(auVar22,*(undefined1 (*) [16])(param_7 + 0x30 + lVar12));
          auVar23 = vfmadd231ps_avx512vl(auVar23,auVar21,auVar24);
          auVar24 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(lVar10 + 0x1c + uVar13 * 4)));
          auVar25 = vfmadd231ps_avx512vl(auVar25,auVar24,auVar22);
          auVar26 = vfmadd231ps_avx512vl(auVar26,auVar24,auVar23);
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
      }
      lVar12 = uVar11 * 0xc;
      auVar25 = vblendps_avx(auVar25,auVar29,8);
      auVar25 = vmulps_avx512vl(auVar25,auVar2);
      auVar16 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar17 = vmulps_avx512vl(auVar25,auVar6);
      auVar16 = vfmsub231ps_avx512vl(auVar17,auVar28,auVar16);
      auVar16 = vaddps_avx512vl(auVar16,auVar16);
      auVar17 = vshufps_avx512vl(auVar16,auVar16,0xc9);
      auVar25 = vfmadd231ps_avx512vl(auVar25,auVar27,auVar17);
      auVar16 = vshufps_avx512vl(auVar16,auVar16,0xd2);
      auVar17 = vmulps_avx512vl(auVar7,auVar17);
      auVar16 = vfmsub231ps_avx512vl(auVar17,auVar28,auVar16);
      auVar16 = vshufps_avx512vl(auVar16,auVar16,0xc9);
      auVar25 = vaddps_avx512vl(auVar25,auVar16);
      auVar25 = vaddps_avx512vl(auVar3,auVar25);
      *(int *)(param_1 + lVar12) = auVar25._0_4_;
      uVar1 = vextractps_avx512f(auVar25,1);
      *(undefined4 *)(param_1 + 4 + lVar12) = uVar1;
      uVar1 = vextractps_avx512f(auVar25,2);
      *(undefined4 *)(param_1 + 8 + lVar12) = uVar1;
      auVar26 = vblendps_avx(auVar26,auVar29,8);
      auVar26 = vmulps_avx512vl(auVar26,auVar2);
      auVar25 = vshufps_avx512vl(auVar26,auVar26,0xc9);
      auVar16 = vmulps_avx512vl(auVar26,auVar14);
      auVar25 = vfmsub231ps_avx512vl(auVar16,auVar28,auVar25);
      auVar25 = vaddps_avx512vl(auVar25,auVar25);
      auVar16 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar27,auVar16);
      auVar25 = vshufps_avx512vl(auVar25,auVar25,0xd2);
      auVar16 = vmulps_avx512vl(auVar14,auVar16);
      auVar25 = vfmsub231ps_avx512vl(auVar16,auVar28,auVar25);
      auVar25 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar25 = vaddps_avx512vl(auVar26,auVar25);
      auVar26 = vblendps_avx(auVar25,in_ZMM8._0_16_,8);
      in_ZMM8 = ZEXT1664(auVar26);
      auVar26 = vblendps_avx(auVar25,in_ZMM9._0_16_,8);
      in_ZMM9 = ZEXT1664(auVar26);
      auVar26 = vmulps_avx512vl(auVar25,auVar25);
      auVar16 = vmovshdup_avx512vl(auVar26);
      auVar17 = vshufpd_avx512vl(auVar26,auVar26,1);
      auVar26 = vaddss_avx512f(auVar26,auVar16);
      auVar26 = vaddss_avx512f(auVar17,auVar26);
      bVar5 = auVar26._0_4_ <= fVar8;
      auVar16._4_12_ = auVar26._4_12_;
      auVar16._0_4_ = SQRT(auVar26._0_4_);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar9,in_ZMM20._0_16_);
      auVar17 = vdivps_avx512vl(auVar25,auVar16);
      auVar18 = vmovshdup_avx512vl(auVar17);
      auVar19 = vshufpd_avx512vl(auVar17,auVar17,1);
      auVar26 = vblendps_avx(auVar25,in_ZMM7._0_16_,8);
      in_ZMM7 = ZEXT1664(auVar26);
      *(uint *)(param_2 + lVar12) = (uint)bVar5 * __real_3f800000 + (uint)!bVar5 * auVar17._0_4_;
      *(uint *)(param_2 + 4 + lVar12) = (uint)bVar5 * auVar15._0_4_ + (uint)!bVar5 * auVar18._0_4_;
      *(uint *)(param_2 + 8 + lVar12) = (uint)bVar5 * auVar15._0_4_ + (uint)!bVar5 * auVar19._0_4_;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x4c;
      in_ZMM20 = ZEXT1664(auVar16);
    } while (uVar11 != param_9);
  }
  return;
}

// SkinPhysicsMesh_avx512skx @ 140cc6e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SkinPhysicsMesh_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,undefined1 (*param_8) [16],uint param_9)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  
  auVar9 = ___xmm_00000007000000000000000000000000;
  fVar8 = __real_00800000;
  if (0 < (int)param_9) {
    auVar2 = param_8[2];
    uVar1 = *(undefined4 *)(*param_8 + 0xc);
    auVar27._4_4_ = uVar1;
    auVar27._0_4_ = uVar1;
    auVar27._8_4_ = uVar1;
    auVar27._12_4_ = uVar1;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(*param_8 + 4);
    auVar7 = vinsertps_avx(auVar28,ZEXT416(*(uint *)*param_8),0x20);
    auVar28 = *param_8;
    auVar6 = vblendps_avx(auVar7,auVar27,8);
    auVar3 = param_8[1];
    auVar14 = vshufps_avx512vl(auVar28,auVar28,0xc9);
    uVar11 = 0;
    auVar29._0_12_ = ZEXT812(0);
    auVar29._12_4_ = 0;
    auVar15 = vxorps_avx512vl(in_ZMM19._0_16_,in_ZMM19._0_16_);
    lVar10 = param_5;
    do {
      uVar4 = *(uint *)(param_5 + uVar11 * 0x4c);
      auVar26._0_12_ = ZEXT812(0);
      auVar26._12_4_ = 0;
      auVar25._0_12_ = ZEXT812(0);
      auVar25._12_4_ = 0;
      if (0 < (int)uVar4) {
        lVar12 = uVar11 * 0xc;
        auVar16 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + lVar12)));
        auVar17 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + lVar12)));
        auVar18 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + 4 + lVar12)));
        auVar19 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + 4 + lVar12)));
        auVar20 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_3 + 8 + lVar12)));
        auVar21 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(param_4 + 8 + lVar12)));
        uVar13 = 0;
        do {
          lVar12 = (longlong)*(int *)(param_6 + (ulonglong)*(ushort *)(lVar10 + 4 + uVar13 * 2) * 4)
                   * 0x40;
          auVar23 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar12);
          auVar24 = *(undefined1 (*) [16])(param_7 + 0x20 + lVar12);
          auVar22 = vmulps_avx512vl(auVar18,auVar23);
          auVar22 = vfmadd231ps_avx512vl(auVar22,auVar16,*(undefined1 (*) [16])(param_7 + lVar12));
          auVar23 = vmulps_avx512vl(auVar19,auVar23);
          auVar23 = vfmadd231ps_avx512vl(auVar23,auVar17,*(undefined1 (*) [16])(param_7 + lVar12));
          auVar22 = vfmadd231ps_avx512vl(auVar22,auVar20,auVar24);
          auVar22 = vaddps_avx512vl(auVar22,*(undefined1 (*) [16])(param_7 + 0x30 + lVar12));
          auVar23 = vfmadd231ps_avx512vl(auVar23,auVar21,auVar24);
          auVar24 = vbroadcastss_avx512vl(ZEXT416(*(uint *)(lVar10 + 0x1c + uVar13 * 4)));
          auVar25 = vfmadd231ps_avx512vl(auVar25,auVar24,auVar22);
          auVar26 = vfmadd231ps_avx512vl(auVar26,auVar24,auVar23);
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
      }
      lVar12 = uVar11 * 0xc;
      auVar25 = vblendps_avx(auVar25,auVar29,8);
      auVar25 = vmulps_avx512vl(auVar25,auVar2);
      auVar16 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar17 = vmulps_avx512vl(auVar25,auVar6);
      auVar16 = vfmsub231ps_avx512vl(auVar17,auVar28,auVar16);
      auVar16 = vaddps_avx512vl(auVar16,auVar16);
      auVar17 = vshufps_avx512vl(auVar16,auVar16,0xc9);
      auVar25 = vfmadd231ps_avx512vl(auVar25,auVar27,auVar17);
      auVar16 = vshufps_avx512vl(auVar16,auVar16,0xd2);
      auVar17 = vmulps_avx512vl(auVar7,auVar17);
      auVar16 = vfmsub231ps_avx512vl(auVar17,auVar28,auVar16);
      auVar16 = vshufps_avx512vl(auVar16,auVar16,0xc9);
      auVar25 = vaddps_avx512vl(auVar25,auVar16);
      auVar25 = vaddps_avx512vl(auVar3,auVar25);
      *(int *)(param_1 + lVar12) = auVar25._0_4_;
      uVar1 = vextractps_avx512f(auVar25,1);
      *(undefined4 *)(param_1 + 4 + lVar12) = uVar1;
      uVar1 = vextractps_avx512f(auVar25,2);
      *(undefined4 *)(param_1 + 8 + lVar12) = uVar1;
      auVar26 = vblendps_avx(auVar26,auVar29,8);
      auVar26 = vmulps_avx512vl(auVar26,auVar2);
      auVar25 = vshufps_avx512vl(auVar26,auVar26,0xc9);
      auVar16 = vmulps_avx512vl(auVar26,auVar14);
      auVar25 = vfmsub231ps_avx512vl(auVar16,auVar28,auVar25);
      auVar25 = vaddps_avx512vl(auVar25,auVar25);
      auVar16 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar26 = vfmadd231ps_avx512vl(auVar26,auVar27,auVar16);
      auVar25 = vshufps_avx512vl(auVar25,auVar25,0xd2);
      auVar16 = vmulps_avx512vl(auVar14,auVar16);
      auVar25 = vfmsub231ps_avx512vl(auVar16,auVar28,auVar25);
      auVar25 = vshufps_avx512vl(auVar25,auVar25,0xc9);
      auVar25 = vaddps_avx512vl(auVar26,auVar25);
      auVar26 = vblendps_avx(auVar25,in_ZMM8._0_16_,8);
      in_ZMM8 = ZEXT1664(auVar26);
      auVar26 = vblendps_avx(auVar25,in_ZMM9._0_16_,8);
      in_ZMM9 = ZEXT1664(auVar26);
      auVar26 = vmulps_avx512vl(auVar25,auVar25);
      auVar16 = vmovshdup_avx512vl(auVar26);
      auVar17 = vshufpd_avx512vl(auVar26,auVar26,1);
      auVar26 = vaddss_avx512f(auVar26,auVar16);
      auVar26 = vaddss_avx512f(auVar17,auVar26);
      bVar5 = auVar26._0_4_ <= fVar8;
      auVar16._4_12_ = auVar26._4_12_;
      auVar16._0_4_ = SQRT(auVar26._0_4_);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar9,in_ZMM20._0_16_);
      auVar17 = vdivps_avx512vl(auVar25,auVar16);
      auVar18 = vmovshdup_avx512vl(auVar17);
      auVar19 = vshufpd_avx512vl(auVar17,auVar17,1);
      auVar26 = vblendps_avx(auVar25,in_ZMM7._0_16_,8);
      in_ZMM7 = ZEXT1664(auVar26);
      *(uint *)(param_2 + lVar12) = (uint)bVar5 * __real_3f800000 + (uint)!bVar5 * auVar17._0_4_;
      *(uint *)(param_2 + 4 + lVar12) = (uint)bVar5 * auVar15._0_4_ + (uint)!bVar5 * auVar18._0_4_;
      *(uint *)(param_2 + 8 + lVar12) = (uint)bVar5 * auVar15._0_4_ + (uint)!bVar5 * auVar19._0_4_;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x4c;
      in_ZMM20 = ZEXT1664(auVar16);
    } while (uVar11 != param_9);
  }
  return;
}

