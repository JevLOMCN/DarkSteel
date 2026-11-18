// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FNavLinkDrawing @ 146dd3b90

FNavLinkDrawing * __thiscall
FNavLinkRenderingProxy::FNavLinkDrawing::FNavLinkDrawing
          (FNavLinkDrawing *this,TTransform<double> *param_1,FNavigationLink *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  auVar26 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_1->Scale3D).XY.m128d_f64[0] * (param_2->Left).field0_0x0._s_0.X;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] * (param_2->Left).field0_0x0._s_0.Y;
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar28._8_4_ = SUB84(dVar4,0);
  auVar28._0_8_ = dVar3;
  auVar28._12_4_ = uVar27;
  dVar5 = (param_2->Left).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar17 = blendpd(auVar11,auVar26,2);
  dVar2 = auVar26._0_8_;
  auVar29._0_8_ = auVar28._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar3;
  auVar29._8_8_ = dVar5 * auVar11._8_8_ - dVar2 * dVar4;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar27;
  auVar30._8_4_ = SUB84(dVar6,0);
  auVar30._0_8_ = dVar5;
  auVar30._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar11 = blendpd(auVar10,auVar30,2);
  auVar12._0_8_ = auVar11._0_8_ * dVar2 - auVar17._0_8_ * dVar5;
  auVar12._8_8_ = auVar11._8_8_ * auVar26._8_8_ - auVar17._8_8_ * dVar6;
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar30 = blendpd(auVar29,auVar12,2);
  auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  dVar6 = auVar29._8_8_ + auVar29._8_8_;
  dVar1 = auVar12._0_8_ + auVar12._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar22._8_4_ = SUB84(dVar1,0);
  auVar22._0_8_ = dVar6;
  auVar22._12_4_ = uVar27;
  auVar18._8_4_ = SUB84(dVar1,0);
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar27;
  auVar17 = blendpd(auVar18,auVar31,2);
  auVar30 = blendpd(auVar11,auVar26,2);
  auVar23._0_8_ = auVar22._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar6;
  auVar23._8_8_ = auVar31._0_8_ * auVar11._8_8_ - dVar2 * dVar1;
  dVar9 = (param_1->Translation).ZW.m128d_f64[0];
  auVar13._8_4_ = SUB84(auVar23._8_8_,0);
  auVar13._0_8_ = auVar23._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar23._8_8_ >> 0x20);
  auVar19._0_8_ = auVar17._0_8_ * dVar2 - auVar30._0_8_ * auVar31._0_8_;
  auVar19._8_8_ = auVar17._8_8_ * auVar26._8_8_ - auVar30._8_8_ * auVar31._8_8_;
  auVar11 = blendpd(auVar23,auVar19,2);
  dVar2 = dVar1 * dVar8 + dVar4 + auVar19._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar26._8_4_ = SUB84(dVar2,0);
  auVar26._0_8_ = dVar6 * dVar8 + dVar3 + auVar13._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar26._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->Left).field0_0x0 = auVar26;
  (this->Left).field0_0x0._s_0.Z = auVar31._0_8_ * dVar8 + dVar5 + auVar11._0_8_ + dVar9;
  auVar26 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar5 = (param_2->Right).field0_0x0._s_0.Z * (param_1->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_1->Scale3D).XY.m128d_f64[0] * (param_2->Right).field0_0x0._s_0.X;
  dVar4 = (param_1->Scale3D).XY.m128d_f64[1] * (param_2->Right).field0_0x0._s_0.Y;
  uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar32._8_4_ = SUB84(dVar4,0);
  auVar32._0_8_ = dVar3;
  auVar32._12_4_ = uVar27;
  dVar2 = auVar26._0_8_;
  auVar30 = blendpd(auVar11,auVar26,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar3;
  auVar33._8_8_ = dVar5 * auVar11._8_8_ - dVar2 * dVar4;
  auVar14._8_4_ = SUB84(dVar4,0);
  auVar14._0_8_ = dVar3;
  auVar14._12_4_ = uVar27;
  auVar17._8_4_ = SUB84(dVar6,0);
  auVar17._0_8_ = dVar5;
  auVar17._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar11 = blendpd(auVar14,auVar17,2);
  auVar15._0_8_ = auVar11._0_8_ * dVar2 - auVar30._0_8_ * dVar5;
  auVar15._8_8_ = auVar11._8_8_ * auVar26._8_8_ - auVar30._8_8_ * dVar6;
  auVar11 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar30 = blendpd(auVar33,auVar15,2);
  dVar6 = auVar33._8_8_ + auVar33._8_8_;
  dVar1 = auVar15._0_8_ + auVar15._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar1 >> 0x20);
  auVar34._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar34._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar24._8_4_ = SUB84(dVar1,0);
  auVar24._0_8_ = dVar6;
  auVar24._12_4_ = uVar27;
  auVar20._8_4_ = SUB84(dVar1,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar27;
  auVar30 = blendpd(auVar20,auVar34,2);
  auVar25._0_8_ = auVar24._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar6;
  auVar25._8_8_ = auVar34._0_8_ * auVar11._8_8_ - dVar2 * dVar1;
  auVar11 = blendpd(auVar11,auVar26,2);
  dVar9 = (param_1->Translation).ZW.m128d_f64[0];
  auVar16._8_4_ = SUB84(auVar25._8_8_,0);
  auVar16._0_8_ = auVar25._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar21._0_8_ = auVar30._0_8_ * dVar2 - auVar11._0_8_ * auVar34._0_8_;
  auVar21._8_8_ = auVar30._8_8_ * auVar26._8_8_ - auVar11._8_8_ * auVar34._8_8_;
  auVar26 = blendpd(auVar25,auVar21,2);
  dVar2 = dVar1 * dVar8 + dVar4 + auVar21._0_8_ + (param_1->Translation).XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar2,0);
  auVar11._0_8_ = dVar6 * dVar8 + dVar3 + auVar16._8_8_ + (param_1->Translation).XY.m128d_f64[0];
  auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&(this->Right).field0_0x0 = auVar11;
  (this->Right).field0_0x0._s_0.Z = auVar34._0_8_ * dVar8 + dVar5 + auVar26._0_8_ + dVar9;
  this->Direction = (uint)(byte)param_2->_padding_;
  FNavigationLinkBase::GetAreaClass((FNavigationLinkBase *)param_2);
  UNavArea::GetColor((UClass *)&this->Color);
  this->SnapRadius = *(float *)&param_2->_padding_;
  fVar7 = __real_bf800000;
  if ((param_2->_padding_ & 0x100) != 0) {
    fVar7 = *(float *)((longlong)&param_2->_padding_ + 4);
  }
  this->SnapHeight = fVar7;
  this->SupportedAgentsBits = (uint)param_2->_padding_;
  return this;
}

