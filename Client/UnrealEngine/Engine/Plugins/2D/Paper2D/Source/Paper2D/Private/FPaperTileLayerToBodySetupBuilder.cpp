// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// ConvertTextureSpaceToPivotSpace @ 14acf2430

TVector2<double> * __thiscall
FPaperTileLayerToBodySetupBuilder::ConvertTextureSpaceToPivotSpace
          (FPaperTileLayerToBodySetupBuilder *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (this->MyTransform).Rotation.ZW.m128d_f64[1];
  auVar6 = *(undefined1 (*) [16])(this->MyTransform).Rotation.XY.m128d_f64;
  auVar8 = *(undefined1 (*) [16])(this->MyTransform).Rotation.ZW.m128d_f64;
  auVar10 = blendpd(auVar6,auVar8,2);
  dVar17 = (this->MyTransform).Scale3D.XY.m128d_f64[0] *
           (dVar1 * PaperAxisX.field0_0x0._s_0.X - dVar2 * PaperAxisY.field0_0x0._s_0.X);
  dVar18 = (this->MyTransform).Scale3D.XY.m128d_f64[1] *
           (dVar1 * PaperAxisX.field0_0x0._s_0.Y - dVar2 * PaperAxisY.field0_0x0._s_0.Y);
  uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
  dVar3 = (dVar1 * PaperAxisX.field0_0x0._s_0.Z - dVar2 * PaperAxisY.field0_0x0._s_0.Z) *
          (this->MyTransform).Scale3D.ZW.m128d_f64[0];
  dVar2 = (this->MyTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar19._8_4_ = SUB84(dVar18,0);
  auVar19._0_8_ = dVar17;
  auVar19._12_4_ = uVar16;
  dVar1 = auVar8._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar17;
  auVar20._8_8_ = dVar3 * auVar6._8_8_ - dVar1 * dVar18;
  auVar21._8_4_ = SUB84(dVar18,0);
  auVar21._0_8_ = dVar17;
  auVar21._12_4_ = uVar16;
  auVar6._8_4_ = SUB84(dVar2,0);
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar6 = blendpd(auVar21,auVar6,2);
  auVar7._0_8_ = auVar6._0_8_ * dVar1 - auVar10._0_8_ * dVar3;
  auVar7._8_8_ = auVar6._8_8_ * auVar8._8_8_ - auVar10._8_8_ * dVar2;
  auVar6 = *(undefined1 (*) [16])(this->MyTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar20,auVar7,2);
  dVar2 = auVar20._8_8_ + auVar20._8_8_;
  dVar9 = auVar7._0_8_ + auVar7._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar2;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar9,0);
  auVar12._0_8_ = dVar2;
  auVar12._12_4_ = uVar16;
  auVar21 = blendpd(auVar6,auVar8,2);
  dVar11 = auVar21._8_8_ * auVar22._8_8_;
  auVar15._0_8_ = auVar14._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar15._8_8_ = auVar22._0_8_ * auVar6._8_8_ - dVar1 * dVar9;
  auVar6 = blendpd(auVar12,auVar22,2);
  auVar13._0_8_ = auVar6._0_8_ * dVar1 - auVar21._0_8_ * auVar22._0_8_;
  auVar13._8_8_ = auVar6._8_8_ * auVar8._8_8_ - dVar11;
  auVar8._8_4_ = SUB84(auVar15._8_8_,0);
  auVar8._0_8_ = auVar15._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  dVar1 = dVar2 * dVar5 + dVar17 + auVar8._8_8_ + (this->MyTransform).Translation.XY.m128d_f64[0];
  dVar2 = dVar9 * dVar5 + dVar18 + auVar13._0_8_ + (this->MyTransform).Translation.XY.m128d_f64[1];
  auVar6 = blendpd(auVar15,auVar13,2);
  auVar4._4_8_ = dVar11;
  auVar4._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar10._0_8_ = auVar4._0_8_ << 0x20;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar17 = auVar22._0_8_ * dVar5 + dVar3 + auVar6._0_8_ +
           (this->MyTransform).Translation.ZW.m128d_f64[0];
  dVar2 = dVar1 * PaperAxisY.field0_0x0._s_0.X;
  dVar18 = dVar17 * PaperAxisY.field0_0x0._s_0.Z;
  dVar9 = auVar10._8_8_ * PaperAxisY.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(dVar1 * PaperAxisX.field0_0x0._s_0.X +
                       auVar10._8_8_ * PaperAxisX.field0_0x0._s_0.Y +
                       dVar17 * PaperAxisX.field0_0x0._s_0.Z +
                      (this->CurrentCellOffset).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)(dVar2 + dVar9 + dVar18 + (this->CurrentCellOffset).field0_0x0._s_0.Y);
  return __return_storage_ptr__;
}

// ConvertTextureSpaceToPivotSpaceNoTranslation @ 14acf2650

TVector2<double> * __thiscall
FPaperTileLayerToBodySetupBuilder::ConvertTextureSpaceToPivotSpaceNoTranslation
          (FPaperTileLayerToBodySetupBuilder *this,TVector2<double> *__return_storage_ptr__,
          TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar5 = (this->MyTransform).Rotation.ZW.m128d_f64[1];
  auVar6 = *(undefined1 (*) [16])(this->MyTransform).Rotation.XY.m128d_f64;
  auVar8 = *(undefined1 (*) [16])(this->MyTransform).Rotation.ZW.m128d_f64;
  auVar10 = blendpd(auVar6,auVar8,2);
  dVar17 = (this->MyTransform).Scale3D.XY.m128d_f64[0] *
           (dVar1 * PaperAxisY.field0_0x0._s_0.X + dVar2 * PaperAxisX.field0_0x0._s_0.X);
  dVar18 = (this->MyTransform).Scale3D.XY.m128d_f64[1] *
           (dVar1 * PaperAxisY.field0_0x0._s_0.Y + dVar2 * PaperAxisX.field0_0x0._s_0.Y);
  uVar16 = (undefined4)((ulonglong)dVar18 >> 0x20);
  dVar3 = (dVar1 * PaperAxisY.field0_0x0._s_0.Z + dVar2 * PaperAxisX.field0_0x0._s_0.Z) *
          (this->MyTransform).Scale3D.ZW.m128d_f64[0];
  dVar2 = (this->MyTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar19._8_4_ = SUB84(dVar18,0);
  auVar19._0_8_ = dVar17;
  auVar19._12_4_ = uVar16;
  dVar1 = auVar8._0_8_;
  auVar20._0_8_ = auVar19._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar17;
  auVar20._8_8_ = dVar3 * auVar6._8_8_ - dVar1 * dVar18;
  auVar21._8_4_ = SUB84(dVar18,0);
  auVar21._0_8_ = dVar17;
  auVar21._12_4_ = uVar16;
  auVar6._8_4_ = SUB84(dVar2,0);
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar6 = blendpd(auVar21,auVar6,2);
  auVar7._0_8_ = auVar6._0_8_ * dVar1 - auVar10._0_8_ * dVar3;
  auVar7._8_8_ = auVar6._8_8_ * auVar8._8_8_ - auVar10._8_8_ * dVar2;
  auVar6 = *(undefined1 (*) [16])(this->MyTransform).Rotation.XY.m128d_f64;
  auVar21 = blendpd(auVar20,auVar7,2);
  dVar2 = auVar20._8_8_ + auVar20._8_8_;
  dVar9 = auVar7._0_8_ + auVar7._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar2;
  auVar14._12_4_ = uVar16;
  auVar12._8_4_ = SUB84(dVar9,0);
  auVar12._0_8_ = dVar2;
  auVar12._12_4_ = uVar16;
  auVar21 = blendpd(auVar6,auVar8,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar2;
  auVar15._8_8_ = auVar22._0_8_ * auVar6._8_8_ - dVar1 * dVar9;
  dVar11 = auVar21._8_8_ * auVar22._8_8_;
  auVar6 = blendpd(auVar12,auVar22,2);
  auVar13._0_8_ = auVar6._0_8_ * dVar1 - auVar21._0_8_ * auVar22._0_8_;
  auVar13._8_8_ = auVar6._8_8_ * auVar8._8_8_ - dVar11;
  auVar8._8_4_ = SUB84(auVar15._8_8_,0);
  auVar8._0_8_ = auVar15._0_8_;
  auVar8._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  dVar1 = dVar2 * dVar5 + dVar17 + auVar8._8_8_;
  dVar2 = dVar9 * dVar5 + dVar18 + auVar13._0_8_;
  auVar6 = blendpd(auVar15,auVar13,2);
  auVar4._4_8_ = dVar11;
  auVar4._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
  auVar10._0_8_ = auVar4._0_8_ << 0x20;
  auVar10._8_4_ = SUB84(dVar2,0);
  auVar10._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar17 = auVar22._0_8_ * dVar5 + dVar3 + auVar6._0_8_;
  dVar2 = dVar1 * PaperAxisY.field0_0x0._s_0.X;
  dVar18 = dVar17 * PaperAxisY.field0_0x0._s_0.Z;
  dVar9 = auVar10._8_8_ * PaperAxisY.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(dVar1 * PaperAxisX.field0_0x0._s_0.X +
                       auVar10._8_8_ * PaperAxisX.field0_0x0._s_0.Y +
                      dVar17 * PaperAxisX.field0_0x0._s_0.Z);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)(dVar2 + dVar9 + dVar18);
  return __return_storage_ptr__;
}

