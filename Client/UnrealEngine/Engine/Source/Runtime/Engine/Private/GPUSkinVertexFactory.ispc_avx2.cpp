// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_avx2 @ 140a97240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateBoneData_CopyBones___un_3C_s_5B_unFMatrix3x4_5D__3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_CunS_3E_Cuni_avx2
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,uint param_4,
               undefined1 (*param_5) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 in_ZMM1 [64];
  
  auVar10 = ___ymm_0000000000000000000000070000000300000000000000000000000600000002;
  auVar5 = ___ymm_0000000700000003000000000000000000000006000000020000000000000000;
  auVar9 = ___ymm_0000000000000000000000050000000100000000000000000000000400000000;
  auVar8 = ___ymm_0000000500000001000000000000000000000004000000000000000000000000;
  auVar1 = *param_5;
  auVar6 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar6 = auVar6 & ~auVar1;
  if ((((((((SUB321(auVar6 >> 0x1f,0) & 1) == 0 && (SUB321(auVar6 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar6 >> 0x5f,0) & 1) == 0) && SUB321(auVar6 >> 0x7f,0) == '\0') &&
        (SUB321(auVar6 >> 0x9f,0) & 1) == 0) && SUB321(auVar6 >> 0xbf,0) == '\0') &&
      (SUB321(auVar6 >> 0xdf,0) & 1) == 0) && -1 < auVar6[0x1f]) {
    if (0 < (int)param_4) {
      param_1 = param_1 + 1;
      uVar11 = 0;
      auVar13 = CONCAT88(__real_0000000600000002,__real_0000000600000002);
      do {
        lVar12 = (ulonglong)*(ushort *)(param_3 + uVar11 * 2) * 0x40;
        auVar6 = vpermps_avx2(auVar9,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar1 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar12);
        auVar5 = vpermps_avx2(auVar8,auVar1);
        auVar6 = vblendps_avx(auVar6,auVar5,0xcc);
        auVar2 = vunpckhps_avx(*(undefined1 (*) [16])(param_2 + lVar12),
                               *(undefined1 (*) [16])(param_2 + 0x10 + lVar12));
        param_1[-1] = auVar6;
        auVar1 = vpermps_avx2(ZEXT1632(auVar13),auVar1);
        auVar2 = vblendps_avx(auVar1._0_16_,auVar2,3);
        *(undefined1 (*) [16])*param_1 = auVar2;
        uVar11 = uVar11 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar11);
    }
  }
  else if (0 < (int)param_4) {
    auVar13 = auVar1._0_16_;
    if ((((SUB161(auVar13 >> 0x1f,0) & 1) == 0 && (SUB161(auVar13 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar13 >> 0x5f,0) & 1) == 0) && -1 < auVar1[0xf]) {
      uVar11 = 0;
      do {
        lVar12 = (ulonglong)*(ushort *)(param_3 + uVar11 * 2) * 0x40;
        auVar6 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar5 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + 0x20 + lVar12));
        auVar6 = vpermps_avx2(auVar9,auVar6);
        auVar5 = vpermps_avx2(auVar8,auVar5);
        auVar6 = vblendps_avx(auVar6,auVar5,0xcc);
        auVar6 = vmaskmovps_avx(auVar1,auVar6);
        *param_1 = auVar6;
        uVar11 = uVar11 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar11);
    }
    else {
      uVar11 = 0;
      do {
        lVar12 = (ulonglong)*(ushort *)(param_3 + uVar11 * 2) * 0x40;
        auVar3 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar12));
        auVar4 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + 0x20 + lVar12));
        auVar6 = vpermps_avx2(auVar8,auVar4);
        auVar7 = vpermps_avx2(auVar9,auVar3);
        auVar6 = vblendps_avx(auVar7,auVar6,0xcc);
        auVar6 = vmaskmovps_avx(auVar1,auVar6);
        *param_1 = auVar6;
        auVar6 = vpermps_avx2(auVar5,auVar4);
        auVar3 = vpermps_avx2(auVar10,auVar3);
        auVar6 = vblendps_avx(auVar3,auVar6,0xcc);
        auVar6 = vmaskmovps_avx(ZEXT1632(auVar13),auVar6);
        param_1[1] = auVar6;
        uVar11 = uVar11 + 1;
        param_1 = (undefined1 (*) [32])(param_1[1] + 0x10);
      } while (param_4 != uVar11);
    }
  }
  return;
}

// UpdateBoneData_CopyBones_avx2 @ 140a97410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateBoneData_CopyBones_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  
  auVar6 = ___ymm_0000000000000000000000050000000100000000000000000000000400000000;
  auVar5 = ___ymm_0000000500000001000000000000000000000004000000000000000000000000;
  if (0 < (int)param_4) {
    pauVar7 = (undefined1 (*) [16])(param_1 + 0x20);
    uVar8 = 0;
    auVar10 = CONCAT88(__real_0000000600000002,__real_0000000600000002);
    do {
      lVar9 = (ulonglong)*(ushort *)(param_3 + uVar8 * 2) * 0x40;
      auVar3 = vpermps_avx2(auVar6,*(undefined1 (*) [32])(param_2 + lVar9));
      auVar1 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar9);
      auVar4 = vpermps_avx2(auVar5,auVar1);
      auVar3 = vblendps_avx(auVar3,auVar4,0xcc);
      auVar2 = vunpckhps_avx(*(undefined1 (*) [16])(param_2 + lVar9),
                             *(undefined1 (*) [16])(param_2 + 0x10 + lVar9));
      *(undefined1 (*) [32])(pauVar7 + -2) = auVar3;
      auVar1 = vpermps_avx2(ZEXT1632(auVar10),auVar1);
      auVar2 = vblendps_avx(auVar1._0_16_,auVar2,3);
      *pauVar7 = auVar2;
      uVar8 = uVar8 + 1;
      pauVar7 = pauVar7 + 3;
    } while (param_4 != uVar8);
  }
  return;
}

