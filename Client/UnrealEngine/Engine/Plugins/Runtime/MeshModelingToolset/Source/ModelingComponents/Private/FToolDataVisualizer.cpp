// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 3

// DrawLine<UE::Math::TVector<double>_> @ 14cab81c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3)

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
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar11 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_2->field0_0x0)._s_0.X;
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_2->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar12,auVar20,2);
  auVar30._8_4_ = SUB84(dVar5,0);
  auVar30._0_8_ = dVar4;
  auVar30._12_4_ = uVar29;
  dVar7 = (param_2->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar9 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar3 = auVar20._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar31._8_8_ = dVar7 * auVar12._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar29;
  auVar12._8_4_ = SUB84(dVar9,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar12 = blendpd(auVar19,auVar12,2);
  dVar1 = auVar20._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar18._0_8_ * dVar7;
  auVar13._8_8_ = auVar12._8_8_ * dVar1 - auVar18._8_8_ * dVar9;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar31,auVar13,2);
  auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  dVar9 = auVar31._8_8_ + auVar31._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar25._8_4_ = SUB84(dVar2,0);
  auVar25._0_8_ = dVar9;
  auVar25._12_4_ = uVar29;
  auVar21._8_4_ = SUB84(dVar2,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = uVar29;
  auVar18 = blendpd(auVar21,auVar32,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar26._8_8_ = auVar32._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar14._8_4_ = SUB84(auVar26._8_8_,0);
  auVar14._0_8_ = auVar26._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  dVar8 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar10 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar22._0_8_ = auVar18._0_8_ * dVar3 - auVar12._0_8_ * auVar32._0_8_;
  auVar22._8_8_ = auVar18._8_8_ * dVar1 - auVar12._8_8_ * auVar32._8_8_;
  dVar2 = dVar2 * dVar11 + dVar5 + auVar22._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar6 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar26,auVar22,2);
  local_88._8_4_ = SUB84(dVar2,0);
  local_88._0_8_ =
       dVar9 * dVar11 + dVar4 + auVar14._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_78 = auVar32._0_8_ * dVar11 + dVar7 + auVar18._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar33._8_4_ = SUB84(dVar6,0);
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar29;
  auVar34._0_8_ = auVar33._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
  auVar34._8_8_ = dVar8 * auVar12._8_8_ - dVar3 * dVar6;
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = uVar29;
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar8;
  auVar18._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar12 = blendpd(auVar15,auVar18,2);
  auVar16._0_8_ = auVar12._0_8_ * dVar3 - auVar19._0_8_ * dVar8;
  auVar16._8_8_ = auVar12._8_8_ * dVar1 - auVar19._8_8_ * dVar10;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar34,auVar16,2);
  dVar9 = auVar34._8_8_ + auVar34._8_8_;
  dVar2 = auVar16._0_8_ + auVar16._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar35._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar35._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar9;
  auVar27._12_4_ = uVar29;
  auVar23._8_4_ = SUB84(dVar2,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar29;
  auVar18 = blendpd(auVar23,auVar35,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar28._8_8_ = auVar35._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar17._8_4_ = SUB84(auVar28._8_8_,0);
  auVar17._0_8_ = auVar28._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar20 = blendpd(auVar12,auVar20,2);
  auVar24._0_8_ = auVar18._0_8_ * dVar3 - auVar20._0_8_ * auVar35._0_8_;
  auVar24._8_8_ = auVar18._8_8_ * dVar1 - auVar20._8_8_ * auVar35._8_8_;
  dVar3 = dVar2 * dVar1 + dVar6 + auVar24._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar20 = blendpd(auVar28,auVar24,2);
  local_68._8_4_ = SUB84(dVar3,0);
  local_68._0_8_ =
       dVar9 * dVar1 + dVar5 + auVar17._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_58 = auVar35._0_8_ * dVar1 + dVar8 + auVar20._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  (**(code **)(this->_padding_ + 8))
            (this,local_68,local_88,auVar24._0_8_,this->LineThickness,this->bDepthTested);
  return;
}

// DrawLine<UE::Math::TVector<double>_> @ 14cb5bf40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::DrawLine<UE::Math::TVector<double>_>
          (FToolDataVisualizer *this,TVector<double> *param_1,TVector<double> *param_2,
          FLinearColor *param_3,float param_4)

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
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  auVar20 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar11 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_2->field0_0x0)._s_0.X;
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_2->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar12,auVar20,2);
  auVar30._8_4_ = SUB84(dVar5,0);
  auVar30._0_8_ = dVar4;
  auVar30._12_4_ = uVar29;
  dVar7 = (param_2->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar9 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar3 = auVar20._0_8_;
  auVar31._0_8_ = auVar30._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
  auVar31._8_8_ = dVar7 * auVar12._8_8_ - dVar3 * dVar5;
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar29;
  auVar12._8_4_ = SUB84(dVar9,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar12 = blendpd(auVar19,auVar12,2);
  dVar1 = auVar20._8_8_;
  auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar18._0_8_ * dVar7;
  auVar13._8_8_ = auVar12._8_8_ * dVar1 - auVar18._8_8_ * dVar9;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar31,auVar13,2);
  auVar32._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar32._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  dVar9 = auVar31._8_8_ + auVar31._8_8_;
  dVar2 = auVar13._0_8_ + auVar13._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar25._8_4_ = SUB84(dVar2,0);
  auVar25._0_8_ = dVar9;
  auVar25._12_4_ = uVar29;
  auVar21._8_4_ = SUB84(dVar2,0);
  auVar21._0_8_ = dVar9;
  auVar21._12_4_ = uVar29;
  auVar18 = blendpd(auVar21,auVar32,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar26._8_8_ = auVar32._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar12 = blendpd(auVar12,auVar20,2);
  auVar14._8_4_ = SUB84(auVar26._8_8_,0);
  auVar14._0_8_ = auVar26._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  dVar8 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar10 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar22._0_8_ = auVar18._0_8_ * dVar3 - auVar12._0_8_ * auVar32._0_8_;
  auVar22._8_8_ = auVar18._8_8_ * dVar1 - auVar12._8_8_ * auVar32._8_8_;
  dVar2 = dVar2 * dVar11 + dVar5 + auVar22._0_8_ +
          (this->TotalTransform).Translation.XY.m128d_f64[1];
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar6 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar29 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar26,auVar22,2);
  local_88._8_4_ = SUB84(dVar2,0);
  local_88._0_8_ =
       dVar9 * dVar11 + dVar4 + auVar14._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_88._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_78 = auVar32._0_8_ * dVar11 + dVar7 + auVar18._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  auVar19 = blendpd(auVar12,auVar20,2);
  auVar33._8_4_ = SUB84(dVar6,0);
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar29;
  auVar34._0_8_ = auVar33._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
  auVar34._8_8_ = dVar8 * auVar12._8_8_ - dVar3 * dVar6;
  auVar15._8_4_ = SUB84(dVar6,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = uVar29;
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar8;
  auVar18._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar12 = blendpd(auVar15,auVar18,2);
  auVar16._0_8_ = auVar12._0_8_ * dVar3 - auVar19._0_8_ * dVar8;
  auVar16._8_8_ = auVar12._8_8_ * dVar1 - auVar19._8_8_ * dVar10;
  auVar12 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18 = blendpd(auVar34,auVar16,2);
  dVar9 = auVar34._8_8_ + auVar34._8_8_;
  dVar2 = auVar16._0_8_ + auVar16._0_8_;
  uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar35._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar35._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar9;
  auVar27._12_4_ = uVar29;
  auVar23._8_4_ = SUB84(dVar2,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar29;
  auVar18 = blendpd(auVar23,auVar35,2);
  auVar28._0_8_ = auVar27._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
  auVar28._8_8_ = auVar35._0_8_ * auVar12._8_8_ - dVar3 * dVar2;
  auVar17._8_4_ = SUB84(auVar28._8_8_,0);
  auVar17._0_8_ = auVar28._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
  auVar20 = blendpd(auVar12,auVar20,2);
  auVar24._0_8_ = auVar18._0_8_ * dVar3 - auVar20._0_8_ * auVar35._0_8_;
  auVar24._8_8_ = auVar18._8_8_ * dVar1 - auVar20._8_8_ * auVar35._8_8_;
  dVar3 = dVar2 * dVar1 + dVar6 + auVar24._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  auVar20 = blendpd(auVar28,auVar24,2);
  local_68._8_4_ = SUB84(dVar3,0);
  local_68._0_8_ =
       dVar9 * dVar1 + dVar5 + auVar17._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_58 = auVar35._0_8_ * dVar1 + dVar8 + auVar20._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  (**(code **)(this->_padding_ + 8))
            (this,local_68,local_88,auVar24._0_8_,param_4,this->bDepthTested);
  return;
}

// DrawPoint<UE::Math::TVector<double>_> @ 14cb5c1d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FToolDataVisualizer::DrawPoint<UE::Math::TVector<double>_>
          (FToolDataVisualizer *this,TVector<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_68 [16];
  double local_58;
  
  auVar16 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.ZW.m128d_f64;
  dVar8 = (this->TotalTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (this->TotalTransform).Scale3D.XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar5 = (this->TotalTransform).Scale3D.XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar18._8_4_ = SUB84(dVar5,0);
  auVar18._0_8_ = dVar4;
  auVar18._12_4_ = uVar17;
  dVar6 = (param_1->field0_0x0)._s_0.Z * (this->TotalTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (this->TotalTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar11 = blendpd(auVar9,auVar16,2);
  dVar3 = auVar16._0_8_;
  auVar19._0_8_ = auVar18._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
  auVar19._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
  auVar20._8_4_ = SUB84(dVar5,0);
  auVar20._0_8_ = dVar4;
  auVar20._12_4_ = uVar17;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar6;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar9 = blendpd(auVar20,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
  auVar10._8_8_ = auVar9._8_8_ * auVar16._8_8_ - auVar11._8_8_ * dVar7;
  auVar9 = *(undefined1 (*) [16])(this->TotalTransform).Rotation.XY.m128d_f64;
  auVar20 = blendpd(auVar19,auVar10,2);
  dVar7 = auVar19._8_8_ + auVar19._8_8_;
  dVar2 = auVar10._0_8_ + auVar10._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar7;
  auVar14._12_4_ = uVar17;
  auVar12._8_4_ = SUB84(dVar2,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = uVar17;
  auVar20 = blendpd(auVar12,auVar21,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
  auVar15._8_8_ = auVar21._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
  auVar11._8_4_ = SUB84(auVar15._8_8_,0);
  auVar11._0_8_ = auVar15._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar9 = blendpd(auVar9,auVar16,2);
  auVar13._0_8_ = auVar20._0_8_ * dVar3 - auVar9._0_8_ * auVar21._0_8_;
  auVar13._8_8_ = auVar20._8_8_ * auVar16._8_8_ - auVar9._8_8_ * auVar21._8_8_;
  auVar16 = blendpd(auVar15,auVar13,2);
  dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_ + (this->TotalTransform).Translation.XY.m128d_f64[1]
  ;
  local_58 = auVar21._0_8_ * dVar8 + dVar6 + auVar16._0_8_ +
             (this->TotalTransform).Translation.ZW.m128d_f64[0];
  local_68._8_4_ = SUB84(dVar3,0);
  local_68._0_8_ =
       dVar7 * dVar8 + dVar4 + auVar11._8_8_ + (this->TotalTransform).Translation.XY.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  pcVar1 = *(code **)(this->_padding_ + 0x18);
  (*pcVar1)(auVar11._8_8_,local_68,&this->PointColor,pcVar1,this->bDepthTested);
  return;
}

