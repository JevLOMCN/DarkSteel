// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CalcCubeFaceTransform @ 145498830

TMatrix<double> * __cdecl
`FScene::UpdateSceneCaptureContents'::__l2::FLocal::CalcCubeFaceTransform
          (TMatrix<double> *__return_storage_ptr__,ECubeFace param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  uVar17 = __real_3ff0000000000000;
  uVar27 = (uint)((ulonglong)YAxis.field0_0x0._16_8_ >> 0x20);
  local_e8 = YAxis.field0_0x0._s_0.Z;
  uVar29 = YAxis.field0_0x0._0_4_;
  uVar30 = YAxis.field0_0x0._4_4_;
  uVar31 = YAxis.field0_0x0._8_4_;
  uVar32 = YAxis.field0_0x0._12_4_;
  dVar4 = uStack_d0;
  uVar22 = SUB84(XAxis.field0_0x0._s_0.X,0);
  uVar23 = (undefined4)((ulonglong)XAxis.field0_0x0._0_8_ >> 0x20);
  uVar24 = SUB84(XAxis.field0_0x0._s_0.Y,0);
  uVar25 = (undefined4)((ulonglong)XAxis.field0_0x0._8_8_ >> 0x20);
  uVar26 = SUB84(XAxis.field0_0x0._s_0.Z,0);
  uVar28 = (uint)((ulonglong)XAxis.field0_0x0._16_8_ >> 0x20);
  uVar20 = (uint)__xmm_80000000000000008000000000000000;
  uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar18 = SUB84(ZAxis.field0_0x0._s_0.Z,0);
  uVar19 = (uint)((ulonglong)ZAxis.field0_0x0._16_8_ >> 0x20);
  switch(param_1) {
  case CubeFace_PosX:
    local_d8 = XAxis.field0_0x0._s_0.Y;
    break;
  case CubeFace_NegX:
    uVar24 = uVar24 ^ uVar20;
    uVar25 = uVar25 ^ uVar21;
    uVar22 = uVar22 ^ uVar20;
    uVar23 = uVar23 ^ uVar21;
    local_d8 = (double)CONCAT44(uVar25,uVar24);
    uVar26 = uVar26 ^ uVar20;
    uVar28 = uVar28 ^ uVar21;
    break;
  case CubeFace_PosY:
    local_e8 = (double)CONCAT44(uVar19 ^ uVar21,uVar18 ^ uVar20);
    uVar22 = uVar29;
    uVar23 = uVar30;
    uVar24 = uVar31;
    uVar25 = uVar32;
    uVar26 = SUB84(YAxis.field0_0x0._s_0.Z,0);
    uVar28 = uVar27;
    uVar29 = ZAxis.field0_0x0._0_4_ ^ uVar20;
    uVar30 = ZAxis.field0_0x0._4_4_ ^ uVar21;
    uVar31 = ZAxis.field0_0x0._8_4_ ^ uVar20;
    uVar32 = ZAxis.field0_0x0._12_4_ ^ uVar21;
    local_d8 = YAxis.field0_0x0._8_8_;
    break;
  case CubeFace_NegY:
    local_e8 = ZAxis.field0_0x0._s_0.Z;
    local_d8 = (double)CONCAT44(uVar32 ^ uVar21,uVar31 ^ uVar20);
    uVar22 = uVar29 ^ uVar20;
    uVar23 = uVar30 ^ uVar21;
    uVar24 = uVar31 ^ uVar20;
    uVar25 = uVar32 ^ uVar21;
    uVar26 = SUB84(YAxis.field0_0x0._s_0.Z,0) ^ uVar20;
    uVar28 = uVar27 ^ uVar21;
    uVar29 = ZAxis.field0_0x0._0_4_;
    uVar30 = ZAxis.field0_0x0._4_4_;
    uVar31 = ZAxis.field0_0x0._8_4_;
    uVar32 = ZAxis.field0_0x0._12_4_;
    break;
  case CubeFace_PosZ:
    auVar16._4_4_ = ZAxis.field0_0x0._4_4_;
    auVar16._0_4_ = ZAxis.field0_0x0._0_4_;
    auVar16._8_4_ = ZAxis.field0_0x0._8_4_;
    auVar16._12_4_ = ZAxis.field0_0x0._12_4_;
    local_d8 = auVar16._8_8_;
    uVar22 = ZAxis.field0_0x0._0_4_;
    uVar23 = ZAxis.field0_0x0._4_4_;
    uVar24 = ZAxis.field0_0x0._8_4_;
    uVar25 = ZAxis.field0_0x0._12_4_;
    uVar26 = uVar18;
    uVar28 = uVar19;
    break;
  case CubeFace_NegZ:
    uVar25 = ZAxis.field0_0x0._12_4_ ^ uVar21;
    uVar23 = ZAxis.field0_0x0._4_4_ ^ uVar21;
    local_d8 = (double)CONCAT44(uVar25,ZAxis.field0_0x0._8_4_ ^ uVar20);
    uVar22 = ZAxis.field0_0x0._0_4_ ^ uVar20;
    uVar24 = ZAxis.field0_0x0._8_4_ ^ uVar20;
    uVar26 = uVar18 ^ uVar20;
    uVar28 = uVar19 ^ uVar21;
    break;
  default:
    uVar22 = local_d8._8_4_;
    local_d8 = dVar4;
    uVar23 = uStack_d0._4_4_;
    uVar24 = uVar22;
    uVar25 = uStack_d0._4_4_;
    uVar26 = (uint)local_c8;
    uVar28 = (uint)((ulonglong)local_c8 >> 0x20);
  }
  dVar9 = (double)CONCAT44(uVar25,uVar24) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar13 = (double)CONCAT44(uVar28,uVar26) * (double)CONCAT44(uVar32,uVar31) -
           local_e8 * (double)CONCAT44(uVar25,uVar24);
  dVar14 = local_e8 * (double)CONCAT44(uVar23,uVar22) -
           (double)CONCAT44(uVar28,uVar26) * (double)CONCAT44(uVar30,uVar29);
  dVar15 = (double)CONCAT44(uVar30,uVar29) * (double)CONCAT44(uVar25,uVar24) -
           (double)CONCAT44(uVar32,uVar31) * (double)CONCAT44(uVar23,uVar22);
  dVar12 = dVar14 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar4 = dVar13 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar6 = dVar15 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar5 = (double)CONCAT44(uVar23,uVar22) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar10 = (double)CONCAT44(uVar30,uVar29) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
           + (double)CONCAT44(uVar32,uVar31) *
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y +
           local_e8 * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar7 = (double)CONCAT44(uVar28,uVar26) * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar1._8_4_ = uVar29;
  auVar1._0_8_ = dVar13;
  auVar1._12_4_ = uVar30;
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar1;
  __return_storage_ptr__->M[0][2] = (double)CONCAT44(uVar23,uVar22);
  __return_storage_ptr__->M[0][3] = 0.0;
  auVar2._8_4_ = uVar31;
  auVar2._0_8_ = dVar14;
  auVar2._12_4_ = uVar32;
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar2;
  __return_storage_ptr__->M[1][2] = local_d8;
  __return_storage_ptr__->M[1][3] = 0.0;
  auVar3._8_4_ = SUB84(local_e8,0);
  auVar3._0_8_ = dVar15;
  auVar3._12_4_ = (int)((ulonglong)local_e8 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar3;
  __return_storage_ptr__->M[2][2] = (double)CONCAT44(uVar28,uVar26);
  __return_storage_ptr__->M[2][3] = 0.0;
  auVar11._8_4_ = SUB84(dVar10,0);
  auVar11._0_8_ = dVar12 + dVar4 + dVar6;
  auVar11._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar11;
  auVar8._8_4_ = (int)uVar17;
  auVar8._0_8_ = dVar9 + dVar5 + dVar7;
  auVar8._12_4_ = (int)((ulonglong)uVar17 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar8;
  return __return_storage_ptr__;
}

