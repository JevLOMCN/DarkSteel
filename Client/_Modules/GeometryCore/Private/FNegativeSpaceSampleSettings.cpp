// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ObstacleDistance @ 1433c0a40

double __thiscall
UE::Geometry::FNegativeSpaceSampleSettings::ObstacleDistance
          (FNegativeSpaceSampleSettings *this,TVector<double> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  longlong *plVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 local_68 [16];
  double local_58;
  
  auVar19 = *(undefined1 (*) [16])(this->ResultTransform).Rotation.ZW.m128d_f64;
  dVar4 = (this->ResultTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar5 = (this->ResultTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->ResultTransform).Rotation.XY.m128d_f64;
  auVar21._8_4_ = SUB84(dVar5,0);
  auVar21._0_8_ = dVar4;
  auVar21._12_4_ = uVar20;
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->ResultTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->ResultTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar8 = (this->ResultTransform).Rotation.ZW.m128d_f64[1];
  dVar11 = auVar19._0_8_;
  auVar14 = blendpd(auVar12,auVar19,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar22._8_8_ = dVar6 * auVar12._8_8_ - dVar11 * dVar5;
  auVar23._8_4_ = SUB84(dVar5,0);
  auVar23._0_8_ = dVar4;
  auVar23._12_4_ = uVar20;
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar6;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar12 = blendpd(auVar23,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar11 - auVar14._0_8_ * dVar6;
  auVar13._8_8_ = auVar12._8_8_ * auVar19._8_8_ - auVar14._8_8_ * dVar7;
  auVar12 = *(undefined1 (*) [16])(this->ResultTransform).Rotation.XY.m128d_f64;
  dVar7 = auVar22._8_8_ + auVar22._8_8_;
  dVar3 = auVar13._0_8_ + auVar13._0_8_;
  uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar23 = blendpd(auVar22,auVar13,2);
  auVar17._8_4_ = SUB84(dVar3,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = uVar20;
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar18._0_8_ = auVar17._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar7;
  auVar18._8_8_ = auVar24._0_8_ * auVar12._8_8_ - dVar11 * dVar3;
  auVar23 = blendpd(auVar15,auVar24,2);
  auVar14._8_4_ = SUB84(auVar18._8_8_,0);
  auVar14._0_8_ = auVar18._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar18._8_8_ >> 0x20);
  auVar12 = blendpd(auVar12,auVar19,2);
  auVar16._0_8_ = auVar23._0_8_ * dVar11 - auVar12._0_8_ * auVar24._0_8_;
  auVar16._8_8_ = auVar23._8_8_ * auVar19._8_8_ - auVar12._8_8_ * auVar24._8_8_;
  auVar19 = blendpd(auVar18,auVar16,2);
  dVar11 = dVar3 * dVar8 + dVar5 + auVar16._0_8_ +
           (this->ResultTransform).Translation.XY.m128d_f64[1];
  local_58 = dVar8 * auVar24._0_8_ + dVar6 + auVar19._0_8_ +
             (this->ResultTransform).Translation.ZW.m128d_f64[0];
  local_68._8_4_ = SUB84(dVar11,0);
  local_68._0_8_ =
       dVar7 * dVar8 + dVar4 + auVar14._8_8_ + (this->ResultTransform).Translation.XY.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  Core::Private::Function::CheckCallable(*(void **)&this->OptionalObstacleSDF);
  plVar1 = *(longlong **)&(this->OptionalObstacleSDF).field_0x28;
  pcVar2 = *(code **)&this->OptionalObstacleSDF;
  plVar10 = (longlong *)&(this->OptionalObstacleSDF).field_0x10;
  if (plVar1 != (longlong *)0x0) {
    plVar10 = plVar1;
  }
  uVar9 = (**(code **)(*plVar10 + 8))();
  dVar11 = (double)(*pcVar2)(uVar9,local_68);
  return dVar11 * this->AppliedScaleFactor;
}

