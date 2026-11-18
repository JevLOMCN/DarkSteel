// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// ~FTessellationPattern @ 14c7b7b80

void __thiscall
UE::Geometry::FTessellationPattern::~FTessellationPattern(FTessellationPattern *this)

{
  this->_padding_ = (longlong)&___7FTessellationPattern_Geometry_UE__6B_;
  return;
}

// ComputeInnerConcentricTriangle @ 14c7f0ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FTessellationPattern::ComputeInnerConcentricTriangle
          (FTessellationPattern *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,int param_4,TVector<double> *param_5,TVector<double> *param_6,
          TVector<double> *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_208;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  
  uVar11 = __real_bff0000000000000;
  if (-1 < param_4) {
    if (param_4 == 0) {
      dVar4 = (param_1->field0_0x0)._s_0.Y;
      (param_5->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
      (param_5->field0_0x0)._s_0.Y = dVar4;
      (param_5->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      dVar4 = (param_2->field0_0x0)._s_0.Y;
      (param_6->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar4;
      (param_6->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      dVar4 = (param_3->field0_0x0)._s_0.Y;
      (param_7->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar4;
      (param_7->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
      return;
    }
    local_c8 = (param_1->field0_0x0)._s_0.Y;
    if (param_4 == 1) {
      dVar4 = (local_c8 + (param_2->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y) *
              __real_3fd5555555555555;
      dVar20 = ((param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X +
               (param_3->field0_0x0)._s_0.X) * __real_3fd5555555555555;
      dVar18 = ((param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z +
               (param_3->field0_0x0)._s_0.Z) * __real_3fd5555555555555;
      (param_5->field0_0x0)._s_0.X = dVar20;
      (param_5->field0_0x0)._s_0.Y = dVar4;
      (param_5->field0_0x0)._s_0.Z = dVar18;
      (param_6->field0_0x0)._s_0.X = dVar20;
      (param_6->field0_0x0)._s_0.Y = dVar4;
      (param_6->field0_0x0)._s_0.Z = dVar18;
      (param_7->field0_0x0)._s_0.X = dVar20;
      (param_7->field0_0x0)._s_0.Y = dVar4;
      (param_7->field0_0x0)._s_0.Z = dVar18;
      return;
    }
    local_d0 = (param_1->field0_0x0)._s_0.X;
    local_c0 = (param_1->field0_0x0)._s_0.Z;
    local_b8 = (param_2->field0_0x0)._s_0.X;
    local_b0 = (param_2->field0_0x0)._s_0.Y;
    local_148 = __real_3ff0000000000000 / (double)(param_4 + 1);
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    dVar18 = (param_3->field0_0x0)._s_0.Y;
    dVar7 = (local_b8 - local_d0) * local_148;
    dVar8 = (dVar4 - local_c0) * local_148;
    dVar9 = (local_b0 - local_c8) * local_148;
    local_1f8._s_0.X = local_d0 + dVar7;
    dVar22 = (dVar18 - local_c8) * local_148;
    local_1f8._s_0.Y = local_c8 + dVar9;
    local_1f8._s_0.Z = local_c0 + dVar8;
    dVar12 = (double)param_4;
    local_100 = dVar12 * dVar7 + local_d0;
    local_f8 = dVar12 * dVar9 + local_c8;
    local_f0 = dVar12 * dVar8 + local_c0;
    dVar20 = (param_3->field0_0x0)._s_0.X;
    dVar5 = ((param_3->field0_0x0)._s_0.Z - local_c0) * local_148;
    dVar10 = (dVar20 - local_d0) * local_148;
    local_1b8 = local_c0 + dVar5;
    local_1c8 = local_d0 + dVar10;
    local_1c0 = local_c8 + dVar22;
    local_d0 = dVar12 * dVar10 + local_d0;
    local_c8 = dVar12 * dVar22 + local_c8;
    local_138 = (dVar20 - local_b8) * local_148;
    local_140 = (dVar18 - local_b0) * local_148;
    local_c0 = dVar12 * dVar5 + local_c0;
    local_e8 = local_b8 + local_138;
    local_e0 = local_b0 + local_140;
    local_148 = ((param_3->field0_0x0)._s_0.Z - dVar4) * local_148;
    local_d8 = dVar4 + local_148;
    dVar18 = dVar12 * local_148;
    local_b8 = dVar12 * local_138 + local_b8;
    local_b0 = dVar12 * local_140 + local_b0;
    dVar23 = dVar5 * dVar9 - dVar22 * dVar8;
    dVar6 = 0.0;
    dVar20 = dVar10 * dVar8 - dVar5 * dVar7;
    dVar12 = dVar22 * dVar7 - dVar10 * dVar9;
    auVar13._0_8_ = dVar23 * dVar23;
    auVar13._8_8_ = 0;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar20 * dVar20 + auVar13._0_8_ + dVar12 * dVar12;
    auVar14 = sqrtpd(auVar13,auVar14);
    if (auVar14._0_8_ <= 0.0) {
      dVar23 = 0.0;
      dVar20 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar21 = __real_3ff0000000000000 / auVar14._0_8_;
      dVar23 = dVar21 * dVar23;
      dVar20 = dVar21 * dVar20;
      dVar21 = dVar21 * dVar12;
    }
    dVar12 = dVar20 * dVar8 - dVar21 * dVar9;
    local_208 = dVar21 * dVar7 - dVar23 * dVar8;
    dVar7 = dVar23 * dVar9 - dVar20 * dVar7;
    auVar15._0_8_ = dVar12 * dVar12;
    auVar15._8_8_ = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_208 * local_208 + auVar15._0_8_ + dVar7 * dVar7;
    auVar14 = sqrtpd(auVar15,auVar1);
    if (auVar14._0_8_ <= 0.0) {
      local_208 = 0.0;
      dVar7 = 0.0;
      dVar8 = 0.0;
    }
    else {
      dVar8 = __real_3ff0000000000000 / auVar14._0_8_;
      dVar7 = dVar8 * dVar7;
      local_208 = dVar8 * local_208;
      dVar8 = dVar8 * dVar12;
    }
    dVar12 = dVar21 * dVar22 - dVar20 * dVar5;
    dVar5 = dVar23 * dVar5 - dVar21 * dVar10;
    dVar9 = dVar20 * dVar10 - dVar23 * dVar22;
    auVar16._0_8_ = dVar12 * dVar12;
    auVar16._8_8_ = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar5 * dVar5 + auVar16._0_8_ + dVar9 * dVar9;
    auVar14 = sqrtpd(auVar16,auVar2);
    if (auVar14._0_8_ <= 0.0) {
      dVar9 = 0.0;
      dVar5 = 0.0;
      dVar10 = 0.0;
    }
    else {
      dVar10 = __real_3ff0000000000000 / auVar14._0_8_;
      dVar9 = dVar10 * dVar9;
      dVar5 = dVar10 * dVar5;
      dVar10 = dVar10 * dVar12;
    }
    dVar12 = dVar20 * local_148 - dVar21 * local_140;
    dVar22 = dVar21 * local_138 - dVar23 * local_148;
    auVar17._0_8_ = dVar12 * dVar12;
    auVar17._8_8_ = 0;
    dVar20 = dVar23 * local_140 - dVar20 * local_138;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar22 * dVar22 + auVar17._0_8_ + dVar20 * dVar20;
    auVar14 = sqrtpd(auVar17,auVar3);
    if (auVar14._0_8_ <= 0.0) {
      dVar22 = 0.0;
      dVar23 = 0.0;
    }
    else {
      dVar23 = __real_3ff0000000000000 / auVar14._0_8_;
      dVar6 = dVar23 * dVar20;
      dVar22 = dVar23 * dVar22;
      dVar23 = dVar23 * dVar12;
    }
    local_1d8 = local_208;
    local_198 = __real_bff0000000000000;
    local_190 = 0;
    local_1e0 = dVar8;
    local_1d0 = dVar7;
    local_1b0 = dVar10;
    local_1a8 = dVar5;
    local_1a0 = dVar9;
    local_130 = local_1f8._s_0.X;
    local_128 = local_1f8._s_0.Y;
    local_120 = local_1f8._s_0.Z;
    local_118 = local_1c8;
    local_110 = local_1c0;
    local_108 = local_1b8;
    TDistLine3Line3<double>::ComputeResult((TDistLine3Line3<double> *)&local_1f8._s_0);
    dVar12 = _UNK_150689678;
    dVar20 = ___xmm_3fe00000000000003fe0000000000000;
    dVar21 = (dStack_180 + dStack_160) * _UNK_150689678;
    dVar19 = (local_178 + local_158) * ___xmm_3fe00000000000003fe0000000000000;
    (param_5->field0_0x0)._s_0.X = (local_188 + local_168) * ___xmm_3fe00000000000003fe0000000000000
    ;
    (param_5->field0_0x0)._s_0.Y = dVar21;
    (param_5->field0_0x0)._s_0.Z = dVar19;
    local_1f8._s_0.X = local_100;
    local_1d8 = local_208;
    local_1f8._s_0.Y = local_f8;
    local_1f8._s_0.Z = local_f0;
    local_1c0 = local_e0;
    local_198 = uVar11;
    local_1c8 = local_e8;
    local_1b8 = local_d8;
    local_190 = 0;
    local_1e0 = dVar8;
    local_1d0 = dVar7;
    local_1b0 = dVar23;
    local_1a8 = dVar22;
    local_1a0 = dVar6;
    TDistLine3Line3<double>::ComputeResult((TDistLine3Line3<double> *)&local_1f8._s_0);
    (param_6->field0_0x0)._s_0.X = (local_188 + local_168) * dVar20;
    (param_6->field0_0x0)._s_0.Y = (dStack_180 + dStack_160) * dVar12;
    (param_6->field0_0x0)._s_0.Z = (local_178 + local_158) * dVar20;
    local_1f8._s_0.Y = local_c8;
    local_1f8._s_0.X = local_d0;
    local_1c0 = local_b0;
    local_198 = uVar11;
    local_1f8._s_0.Z = local_c0;
    local_1c8 = local_b8;
    local_190 = 0;
    local_1e0 = dVar10;
    local_1d8 = dVar5;
    local_1d0 = dVar9;
    local_1b8 = dVar18 + dVar4;
    local_1b0 = dVar23;
    local_1a8 = dVar22;
    local_1a0 = dVar6;
    TDistLine3Line3<double>::ComputeResult((TDistLine3Line3<double> *)&local_1f8._s_0);
    (param_7->field0_0x0)._s_0.X = (local_188 + local_168) * dVar20;
    (param_7->field0_0x0)._s_0.Y = (dStack_180 + dStack_160) * dVar12;
    (param_7->field0_0x0)._s_0.Z = (local_178 + local_158) * dVar20;
  }
  return;
}

