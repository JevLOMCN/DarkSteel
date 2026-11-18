// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_avx @ 140a974a0

void UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_avx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,uint param_4,
               undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  auVar12 = *param_5;
  auVar7 = auVar12._0_16_;
  auVar2 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar3 = vpcmpgtd_avx(auVar12._16_16_,auVar2);
  auVar2 = vpcmpgtd_avx(auVar7,auVar2);
  auVar2 = vpor_avx(auVar2,auVar3);
  if ((((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf]) {
    if (0 < (int)param_4) {
      param_1 = param_1 + 1;
      uVar5 = 0;
      do {
        lVar6 = (ulonglong)*(ushort *)(param_3 + uVar5 * 2) * 0x40;
        auVar2 = *(undefined1 (*) [16])(param_2 + lVar6);
        auVar3 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar6);
        auVar7 = *(undefined1 (*) [16])(param_2 + 0x20 + lVar6);
        auVar1 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar6);
        auVar10._16_16_ = auVar3;
        auVar10._0_16_ = auVar2;
        auVar12._16_16_ = auVar7;
        auVar12._0_16_ = auVar1;
        auVar12 = vshufps_avx(auVar12,auVar12,0x14);
        auVar11._8_8_ = auVar7._0_8_;
        auVar11._0_8_ = auVar7._0_8_;
        auVar11._16_8_ = auVar1._0_8_;
        auVar11._24_8_ = auVar1._0_8_;
        auVar12 = vblendps_avx(auVar11,auVar12,0x48);
        auVar13._16_16_ = auVar2;
        auVar13._0_16_ = auVar3;
        auVar11 = vshufps_avx(auVar13,auVar13,0xe1);
        auVar11 = vblendps_avx(auVar10,auVar11,0x12);
        auVar12 = vblendps_avx(auVar11,auVar12,0xcc);
        *(undefined1 (*) [16])(param_1[-1] + 0x10) = auVar12._16_16_;
        *(undefined1 (*) [16])param_1[-1] = auVar12._0_16_;
        auVar3 = vunpckhps_avx(auVar2,auVar3);
        auVar2 = vinsertps_avx(auVar7,auVar1,0xb3);
        auVar2 = vblendps_avx(auVar2,auVar3,3);
        *(undefined1 (*) [16])*param_1 = auVar2;
        uVar5 = uVar5 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar5);
    }
  }
  else if (0 < (int)param_4) {
    if ((((SUB161(auVar7 >> 0x1f,0) & 1) == 0 && (SUB161(auVar7 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar7 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
      uVar5 = 0;
      do {
        lVar6 = (ulonglong)*(ushort *)(param_3 + uVar5 * 2) * 0x40;
        auVar13 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + lVar6));
        auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + 0x20 + lVar6));
        auVar8._8_8_ = auVar11._0_8_;
        auVar8._0_8_ = auVar11._0_8_;
        auVar8._16_8_ = auVar11._16_8_;
        auVar8._24_8_ = auVar11._16_8_;
        auVar11 = vperm2f128_avx(auVar11,auVar11,1);
        auVar11 = vshufps_avx(auVar11,auVar11,0x14);
        auVar11 = vblendps_avx(auVar8,auVar11,0x48);
        auVar10 = vperm2f128_avx(auVar13,auVar13,1);
        auVar10 = vshufps_avx(auVar10,auVar10,0xe1);
        auVar10 = vblendps_avx(auVar13,auVar10,0x12);
        auVar11 = vblendps_avx(auVar10,auVar11,0xcc);
        auVar11 = vmaskmovps_avx(auVar12,auVar11);
        *param_1 = auVar11;
        uVar5 = uVar5 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar5);
    }
    else {
      uVar5 = 0;
      do {
        lVar6 = (ulonglong)*(ushort *)(param_3 + uVar5 * 2) * 0x40;
        auVar13 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + lVar6));
        auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + 0x20 + lVar6));
        auVar9._8_8_ = auVar8._0_8_;
        auVar9._0_8_ = auVar8._0_8_;
        auVar9._16_8_ = auVar8._16_8_;
        auVar9._24_8_ = auVar8._16_8_;
        auVar4 = vperm2f128_avx(auVar8,auVar8,1);
        auVar11 = vshufps_avx(auVar4,auVar4,0x14);
        auVar11 = vblendps_avx(auVar9,auVar11,0x48);
        auVar9 = vperm2f128_avx(auVar13,auVar13,1);
        auVar10 = vshufps_avx(auVar9,auVar9,0xe1);
        auVar10 = vblendps_avx(auVar13,auVar10,0x12);
        auVar11 = vblendps_avx(auVar10,auVar11,0xcc);
        auVar11 = vmaskmovps_avx(auVar12,auVar11);
        *param_1 = auVar11;
        auVar11 = vshufps_avx(auVar4,auVar4,0xb4);
        auVar11 = vblendps_avx(auVar8,auVar11,0x48);
        auVar10 = vshufpd_avx(auVar13,auVar13,5);
        auVar13 = vshufps_avx(auVar9,auVar9,0xeb);
        auVar10 = vblendps_avx(auVar10,auVar13,0x12);
        auVar11 = vblendps_avx(auVar10,auVar11,0xcc);
        auVar11 = vmaskmovps_avx(ZEXT1632(auVar7),auVar11);
        param_1[1] = auVar11;
        uVar5 = uVar5 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar5);
    }
  }
  return;
}

// UpdateBoneData_CopyBones_avx @ 140a976b0

void UpdateBoneData_CopyBones_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  if (0 < (int)param_4) {
    pauVar5 = (undefined1 (*) [16])(param_1 + 0x20);
    uVar6 = 0;
    do {
      lVar7 = (ulonglong)*(ushort *)(param_3 + uVar6 * 2) * 0x40;
      auVar1 = *(undefined1 (*) [16])(param_2 + lVar7);
      auVar2 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar7);
      auVar3 = *(undefined1 (*) [16])(param_2 + 0x20 + lVar7);
      auVar4 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar7);
      auVar8._16_16_ = auVar2;
      auVar8._0_16_ = auVar1;
      auVar10._16_16_ = auVar3;
      auVar10._0_16_ = auVar4;
      auVar10 = vshufps_avx(auVar10,auVar10,0x14);
      auVar9._8_8_ = auVar3._0_8_;
      auVar9._0_8_ = auVar3._0_8_;
      auVar9._16_8_ = auVar4._0_8_;
      auVar9._24_8_ = auVar4._0_8_;
      auVar10 = vblendps_avx(auVar9,auVar10,0x48);
      auVar11._16_16_ = auVar1;
      auVar11._0_16_ = auVar2;
      auVar9 = vshufps_avx(auVar11,auVar11,0xe1);
      auVar9 = vblendps_avx(auVar8,auVar9,0x12);
      auVar10 = vblendps_avx(auVar9,auVar10,0xcc);
      pauVar5[-1] = auVar10._16_16_;
      pauVar5[-2] = auVar10._0_16_;
      auVar2 = vunpckhps_avx(auVar1,auVar2);
      auVar1 = vinsertps_avx(auVar3,auVar4,0xb3);
      auVar1 = vblendps_avx(auVar1,auVar2,3);
      *pauVar5 = auVar1;
      uVar6 = uVar6 + 1;
      pauVar5 = pauVar5 + 3;
    } while (param_4 != uVar6);
  }
  return;
}

