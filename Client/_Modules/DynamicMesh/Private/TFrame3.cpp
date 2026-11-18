// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// Rotate @ 14c75f9c0

void __thiscall
UE::Geometry::TFrame3<double>::Rotate(TFrame3<double> *this,TQuaternion<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  dVar1 = (this->Rotation).field0_0x0._s_0.X;
  dVar10 = (param_1->field0_0x0)._s_0.W;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (this->Rotation).field0_0x0._s_0.Y;
  dVar5 = (this->Rotation).field0_0x0._s_0.Z;
  dVar6 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (this->Rotation).field0_0x0._s_0.W;
  dVar8 = (dVar1 * dVar10 + dVar7 * dVar3 + dVar5 * dVar2) - dVar4 * dVar6;
  dVar9 = (dVar4 * dVar10 + dVar7 * dVar2 + dVar1 * dVar6) - dVar5 * dVar3;
  auVar11._0_8_ = dVar1 * dVar3;
  auVar11._8_8_ = 0;
  dVar3 = (dVar5 * dVar10 + dVar7 * dVar6 + dVar4 * dVar3) - dVar1 * dVar2;
  dVar1 = ((dVar7 * dVar10 - auVar11._0_8_) - dVar4 * dVar2) - dVar5 * dVar6;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1 * dVar1 + dVar3 * dVar3 + dVar9 * dVar9 + dVar8 * dVar8;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (0.0 < auVar12._0_8_) {
    dVar10 = __real_3ff0000000000000 / auVar12._0_8_;
    if (0.0 < dVar10) {
      (this->Rotation).field0_0x0._s_0.X = dVar10 * dVar8;
      (this->Rotation).field0_0x0._s_0.Y = dVar10 * dVar9;
      (this->Rotation).field0_0x0._s_0.Z = dVar10 * dVar3;
      (this->Rotation).field0_0x0._s_0.W = dVar10 * dVar1;
    }
  }
  return;
}

// ConstrainedAlignPerpAxes @ 14c7f5ce0

void __thiscall
UE::Geometry::TFrame3<double>::ConstrainedAlignPerpAxes
          (TFrame3<double> *this,int param_1,int param_2,int param_3,TVector<double> *param_4,
          TVector<double> *param_5,double param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TVector<double> *pTVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  TVector<double>_u_0 local_c8;
  double local_b0 [2];
  TVector<double>_u_0 local_a0;
  TQuaternion<double>_u_0 local_88;
  TVector<double> local_68;
  TVector<double> local_50;
  TVector<double> local_38 [2];
  
  if (((param_1 == param_2) || (param_1 == param_3)) || (param_2 == param_3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PerpAxis1 != PerpAxis2 && PerpAxis1 != NormalAxis && PerpAxis2 != NormalAxis"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                       ,0x1a5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  GetAxis(this,(TVector<double> *)&local_c8._s_0,param_3);
  dVar5 = local_c8._s_0.Y * (param_4->field0_0x0)._s_0.Y +
          local_c8._s_0.X * (param_4->field0_0x0)._s_0.X +
          local_c8._s_0.Z * (param_4->field0_0x0)._s_0.Z;
  if (param_6 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    param_4 = param_5;
  }
  pTVar4 = GetAxis(this,&local_50,param_2);
  dVar5 = (pTVar4->field0_0x0)._s_0.Y * (param_4->field0_0x0)._s_0.Y +
          (param_4->field0_0x0)._s_0.X * (pTVar4->field0_0x0)._s_0.X +
          (pTVar4->field0_0x0)._s_0.Z * (param_4->field0_0x0)._s_0.Z;
  pTVar4 = GetAxis(this,local_38,param_1);
  local_b0[1] = dVar5;
  uVar7 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_b0[0] = (param_4->field0_0x0)._s_0.Y * (pTVar4->field0_0x0)._s_0.Y +
                (param_4->field0_0x0)._s_0.X * (pTVar4->field0_0x0)._s_0.X +
                (param_4->field0_0x0)._s_0.Z * (pTVar4->field0_0x0)._s_0.Z;
  dVar5 = (double)CONCAT44((uint)((ulonglong)local_b0[0] >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_b0[0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  bVar2 = dVar5 < (double)CONCAT44(uVar8,uVar7) || dVar5 == (double)CONCAT44(uVar8,uVar7);
  iVar3 = 1;
  if (local_b0[bVar2] <= 0.0 && local_b0[bVar2] != 0.0) {
    iVar3 = -1;
  }
  dVar6 = (double)iVar3;
  dVar5 = (param_4->field0_0x0)._s_0.Y * dVar6;
  local_a0._s_0.Z = dVar6 * (param_4->field0_0x0)._s_0.Z;
  local_a0._8_4_ = SUB84(dVar5,0);
  local_a0._0_8_ = (param_4->field0_0x0)._s_0.X * dVar6;
  local_a0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  GetAxis(this,&local_68,(uint)bVar2);
  VectorUtil::PlaneAngleSignedD<double>
            (&local_68,(TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_c8._s_0);
  __libm_sse2_sincos_();
  local_88._s_0.Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_c8._s_0.Y;
  local_88._s_0.X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_c8._s_0.X;
  local_88._s_0.Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_c8._s_0.Z;
  Rotate(this,(TQuaternion<double> *)&local_88._s_0);
  return;
}

// Transform @ 14c91f590

void __thiscall
UE::Geometry::TFrame3<double>::Transform(TFrame3<double> *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  TQuaternion<double>_u_0 local_68 [3];
  
  auVar2 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar3 = (param_1->Scale3D).XY.m128d_f64[0] * (this->Origin).field0_0x0._s_0.X;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] * (this->Origin).field0_0x0._s_0.Y;
  uVar14 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar7 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar9 = blendpd(auVar7,auVar2,2);
  auVar17._8_4_ = SUB84(dVar4,0);
  auVar17._0_8_ = dVar3;
  auVar17._12_4_ = uVar14;
  dVar5 = (this->Origin).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = auVar2._0_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar3;
  auVar18._8_8_ = dVar5 * auVar7._8_8_ - dVar1 * dVar4;
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = uVar14;
  auVar7._8_4_ = SUB84(dVar12,0);
  auVar7._0_8_ = dVar5;
  auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar7 = blendpd(auVar19,auVar7,2);
  auVar8._0_8_ = auVar7._0_8_ * dVar1 - auVar9._0_8_ * dVar5;
  auVar8._8_8_ = auVar7._8_8_ * auVar2._8_8_ - auVar9._8_8_ * dVar12;
  auVar7 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar19 = blendpd(auVar18,auVar8,2);
  dVar12 = auVar18._8_8_ + auVar18._8_8_;
  dVar13 = auVar8._0_8_ + auVar8._0_8_;
  auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar15._8_4_ = SUB84(dVar13,0);
  auVar15._0_8_ = dVar12;
  uVar14 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar15._12_4_ = uVar14;
  auVar10._8_4_ = SUB84(dVar13,0);
  auVar10._0_8_ = dVar12;
  auVar10._12_4_ = uVar14;
  auVar19 = blendpd(auVar7,auVar2,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar7._0_8_ - auVar7._8_8_ * dVar12;
  auVar16._8_8_ = auVar20._0_8_ * auVar7._8_8_ - dVar1 * dVar13;
  auVar7 = blendpd(auVar10,auVar20,2);
  auVar9._8_4_ = SUB84(auVar16._8_8_,0);
  auVar9._0_8_ = auVar16._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar11._0_8_ = auVar7._0_8_ * dVar1 - auVar19._0_8_ * auVar20._0_8_;
  auVar11._8_8_ = auVar7._8_8_ * auVar2._8_8_ - auVar19._8_8_ * auVar20._8_8_;
  auVar7 = blendpd(auVar16,auVar11,2);
  dVar4 = dVar6 * dVar13 + dVar4 + auVar11._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar6 * dVar12 + dVar3 + auVar9._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(this->Origin).field0_0x0 = auVar2;
  (this->Origin).field0_0x0._s_0.Z = dVar6 * auVar20._0_8_ + dVar5 + auVar7._0_8_ + dVar1;
  local_68[0]._0_16_ = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  local_68[0]._16_8_ = (param_1->Rotation).ZW.m128d_f64[0];
  local_68[0]._24_8_ = (param_1->Rotation).ZW.m128d_f64[1];
  Rotate(this,(TQuaternion<double> *)&local_68[0]._s_0);
  return;
}

