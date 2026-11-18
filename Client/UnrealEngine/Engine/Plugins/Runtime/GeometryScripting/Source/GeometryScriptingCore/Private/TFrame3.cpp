// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// ConstrainedAlignAxis @ 14ceb4cb0

void __thiscall
UE::Geometry::TFrame3<double>::ConstrainedAlignAxis
          (TFrame3<double> *this,int param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  TVector<double>_u_0 local_a8 [6];
  
  dVar5 = __real_3ff0000000000000;
  if (param_1 == 0) {
    dVar1 = (this->Rotation).field0_0x0._s_0.Z;
    dVar2 = (this->Rotation).field0_0x0._s_0.Y;
    dVar12 = (this->Rotation).field0_0x0._s_0.X;
    dVar13 = dVar1 + dVar1;
    dVar14 = dVar2 + dVar2;
    dVar3 = (this->Rotation).field0_0x0._s_0.W;
    local_a8[0]._0_8_ = __real_3ff0000000000000 - (dVar13 * dVar1 + dVar14 * dVar2);
    local_a8[0]._8_8_ = dVar3 * dVar13 + dVar12 * dVar14;
    local_a8[0]._16_8_ = dVar12 * dVar13 - dVar3 * dVar14;
  }
  else if (param_1 == 1) {
    dVar1 = (this->Rotation).field0_0x0._s_0.X;
    dVar2 = (this->Rotation).field0_0x0._s_0.Z;
    dVar12 = (this->Rotation).field0_0x0._s_0.Y;
    dVar3 = (this->Rotation).field0_0x0._s_0.W;
    dVar13 = dVar2 + dVar2;
    local_a8[0]._0_8_ = (dVar12 + dVar12) * dVar1 - dVar3 * dVar13;
    local_a8[0]._16_8_ = dVar12 * dVar13 + dVar3 * (dVar1 + dVar1);
    local_a8[0]._8_8_ = __real_3ff0000000000000 - (dVar13 * dVar2 + (dVar1 + dVar1) * dVar1);
  }
  else if (param_1 == 2) {
    dVar1 = (this->Rotation).field0_0x0._s_0.X;
    dVar2 = (this->Rotation).field0_0x0._s_0.Y;
    dVar12 = (this->Rotation).field0_0x0._s_0.Z;
    dVar3 = (this->Rotation).field0_0x0._s_0.W;
    dVar12 = dVar12 + dVar12;
    local_a8[0]._0_8_ = dVar3 * (dVar2 + dVar2) + dVar12 * dVar1;
    local_a8[0]._8_8_ = dVar12 * dVar2 - dVar3 * (dVar1 + dVar1);
    local_a8[0]._16_8_ =
         __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\FrameTypes.h"
                       ,0x88,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a8[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_a8[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_a8[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  VectorUtil::PlaneAngleSignedD<double>((TVector<double> *)&local_a8[0]._s_0,param_2,param_3);
  __libm_sse2_sincos_();
  dVar1 = (this->Rotation).field0_0x0._s_0.W;
  dVar2 = (this->Rotation).field0_0x0._s_0.X;
  dVar12 = (this->Rotation).field0_0x0._s_0.Z;
  dVar3 = (this->Rotation).field0_0x0._s_0.Y;
  dVar15 = extraout_XMM0_Qa * (param_3->field0_0x0)._s_0.X;
  dVar13 = extraout_XMM0_Qa * (param_3->field0_0x0)._s_0.Y;
  dVar14 = extraout_XMM0_Qa * (param_3->field0_0x0)._s_0.Z;
  dVar6 = (dVar1 * dVar15 + dVar2 * extraout_XMM0_Qb + dVar12 * dVar13) - dVar3 * dVar14;
  dVar7 = (dVar1 * dVar13 + dVar3 * extraout_XMM0_Qb + dVar2 * dVar14) - dVar12 * dVar15;
  dVar8 = (dVar1 * dVar14 + dVar12 * extraout_XMM0_Qb + dVar3 * dVar15) - dVar2 * dVar13;
  auVar10._0_8_ = dVar8 * dVar8;
  auVar10._8_8_ = 0;
  dVar1 = ((dVar1 * extraout_XMM0_Qb - dVar2 * dVar15) - dVar3 * dVar13) - dVar12 * dVar14;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar7 * dVar7 + dVar6 * dVar6 + dVar1 * dVar1 + auVar10._0_8_;
  auVar11 = sqrtpd(auVar10,auVar11);
  if (0.0 < auVar11._0_8_) {
    dVar5 = dVar5 / auVar11._0_8_;
    if (0.0 < dVar5) {
      (this->Rotation).field0_0x0._s_0.X = dVar5 * dVar6;
      (this->Rotation).field0_0x0._s_0.Y = dVar5 * dVar7;
      (this->Rotation).field0_0x0._s_0.Z = dVar5 * dVar8;
      (this->Rotation).field0_0x0._s_0.W = dVar5 * dVar1;
    }
  }
  return;
}

