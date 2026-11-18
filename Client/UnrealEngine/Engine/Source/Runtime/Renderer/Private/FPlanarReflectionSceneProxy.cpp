// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// UpdateTransform @ 1450faad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPlanarReflectionSceneProxy::UpdateTransform
          (FPlanarReflectionSceneProxy *this,TMatrix<double> *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  uint uVar20;
  double dVar21;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar22;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_238 [48];
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_168;
  undefined1 auStack_160 [16];
  double dStack_150;
  undefined1 local_148;
  undefined7 uStack_147;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  dVar10 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_238;
  dVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dVar34 = param_1->M[1][1];
  dVar4 = param_1->M[1][2];
  dVar5 = param_1->M[0][1];
  dVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
  auVar35._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar35._0_8_ = dVar11;
  auVar35._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  auVar12._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  auVar12._0_8_ = dVar22;
  auVar12._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  auVar25._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  auVar25._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auVar25._12_4_ = (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20)
  ;
  dVar23 = param_1->M[2][1];
  dVar21 = param_1->M[3][1] * __real_3ff0000000000000;
  dVar24 = param_1->M[2][2] * UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar6 = param_1->M[0][2];
  dVar9 = param_1->M[3][2];
  (this->PlanarReflectionOrigin).field0_0x0._s_0.X =
       dVar11 * param_1->M[1][0] + dVar22 * param_1->M[0][0] +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * param_1->M[2][0] +
       param_1->M[3][0] * __real_3ff0000000000000;
  (this->PlanarReflectionOrigin).field0_0x0._s_0.Y =
       auVar35._8_8_ * dVar34 + auVar12._8_8_ * dVar5 + auVar25._8_8_ * dVar23 + dVar21;
  (this->PlanarReflectionOrigin).field0_0x0._s_0.Z =
       dVar4 * dVar11 + dVar6 * dVar22 + dVar24 + dVar10 * dVar9;
  dVar31 = (double)__xmm_00000000000000003ff0000000000000;
  dVar38 = __xmm_00000000000000003ff0000000000000._8_8_;
  uVar32 = (undefined4)__xmm_00000000000000003ff0000000000000;
  auVar26._8_4_ = uVar32;
  auVar26._0_8_ = dVar31;
  uVar33 = __xmm_00000000000000003ff0000000000000._4_4_;
  auVar26._12_4_ = uVar33;
  dVar4 = param_1->M[2][3];
  auVar1 = *(undefined1 (*) [16])&(this->PlanarReflectionOrigin).field0_0x0;
  dVar22 = param_1->M[1][0] * 0.0 + param_1->M[0][0] * 0.0 + dVar31 * param_1->M[2][0] +
           param_1->M[3][0] * dVar38;
  dVar34 = param_1->M[1][1] * 0.0 + param_1->M[0][1] * 0.0 + auVar26._8_8_ * param_1->M[2][1] +
           param_1->M[3][1] * dVar38;
  local_208 = (this->PlanarReflectionOrigin).field0_0x0._s_0.Z;
  dVar11 = param_1->M[1][2] * 0.0 + param_1->M[0][2] * 0.0 + param_1->M[2][2] * dVar31 +
           dVar38 * param_1->M[3][2];
  (this->ReflectionPlane)._padding_ = (longlong)dVar22;
  auVar7._4_8_ = dVar4 * dVar31;
  auVar7._0_4_ = auVar1._4_4_;
  auVar27._0_8_ = auVar7._0_8_ << 0x20;
  auVar27._8_4_ = auVar1._8_4_;
  auVar27._12_4_ = auVar1._12_4_;
  (this->ReflectionPlane)._padding_ = (longlong)dVar34;
  (this->ReflectionPlane)._padding_ = (longlong)dVar11;
  (this->ReflectionPlane).W = auVar27._8_8_ * dVar34 + auVar1._0_8_ * dVar22 + local_208 * dVar11;
  dVar10 = _UNK_15061cbc8;
  dVar9 = ___xmm_3ff00000000000000000000000000000;
  dVar5 = __real_3ff0000000000000;
  dStack_150 = (double)this->DistanceFromPlaneFadeEnd;
  uVar20 = (uint)((ulonglong)dStack_150 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_168 = (double)CONCAT44(uVar20,SUB84(dStack_150,0) ^
                                      (uint)__xmm_80000000000000008000000000000000);
  dVar11 = (___xmm_409f400000000000409f400000000000 + ___xmm_c09f400000000000c09f400000000000) *
           ___xmm_3fe00000000000003fe0000000000000;
  dVar22 = (_UNK_150f23fa8 + _UNK_150f23fb8) * _UNK_150689678;
  dVar34 = (dStack_150 + local_168) * ___xmm_3fe00000000000003fe0000000000000;
  dVar36 = (___xmm_409f400000000000409f400000000000 - ___xmm_c09f400000000000c09f400000000000) *
           ___xmm_3fe00000000000003fe0000000000000;
  dVar37 = (_UNK_150f23fa8 - _UNK_150f23fb8) * _UNK_150689678;
  dVar23 = (dStack_150 - local_168) * ___xmm_3fe00000000000003fe0000000000000;
  auVar28._8_4_ = SUB84(dVar34,0);
  auVar28._0_8_ = dVar34;
  auVar28._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar13._8_4_ = SUB84(dVar11,0);
  auVar13._0_8_ = dVar11;
  auVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar6 = dVar22 * param_1->M[1][2] + dVar11 * param_1->M[0][2] + dVar34 * param_1->M[2][2] +
          param_1->M[3][2];
  auVar29._8_4_ = SUB84(dVar23,0);
  auVar29._0_8_ = dVar23;
  auVar29._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar21 = dVar23 * param_1->M[2][0];
  dVar24 = auVar29._8_8_ * param_1->M[2][1];
  dVar23 = dVar23 * param_1->M[2][2];
  dVar34 = dVar22 * param_1->M[1][0] + dVar11 * param_1->M[0][0] + dVar34 * param_1->M[2][0] +
           param_1->M[3][0];
  dVar4 = dVar22 * param_1->M[1][1] + auVar13._8_8_ * param_1->M[0][1] +
          auVar28._8_8_ * param_1->M[2][1] + param_1->M[3][1];
  auVar30._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar21,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar30._8_4_ = SUB84(dVar24,0) & _UNK_15061cc88;
  auVar30._12_4_ = (uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c;
  auVar14._8_4_ = SUB84(dVar36,0);
  auVar14._0_8_ = dVar36;
  auVar14._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  dVar11 = dVar36 * param_1->M[0][0];
  dVar22 = auVar14._8_8_ * param_1->M[0][1];
  dVar36 = dVar36 * param_1->M[0][2];
  auVar15._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar15._8_4_ = SUB84(dVar22,0) & _UNK_15061cc88;
  auVar15._12_4_ = (uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c;
  dVar11 = dVar37 * param_1->M[1][0];
  dVar22 = dVar37 * param_1->M[1][1];
  dVar37 = dVar37 * param_1->M[1][2];
  dVar11 = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           auVar15._0_8_ + auVar30._0_8_;
  dVar22 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                            SUB84(dVar22,0) & _UNK_15061cc88) + auVar15._8_8_ + auVar30._8_8_;
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar34;
  auVar16._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar21 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
           (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar23 = auVar16._8_8_ - dVar22;
  (this->WorldBounds).Min.field0_0x0._s_0.X = dVar34 - dVar11;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar23;
  local_148 = 1;
  dVar11 = dVar11 + dVar34;
  dVar22 = dVar22 + dVar4;
  auVar1._8_4_ = SUB84(dVar22,0);
  auVar1._0_8_ = dVar11;
  auVar1._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auStack_160._0_4_ = SUB84(dVar11,0);
  auStack_160._4_4_ = (undefined4)((ulonglong)dVar11 >> 0x20);
  auVar8._4_8_ = dVar23;
  auVar8._0_4_ = uVar20;
  auVar17._0_8_ = auVar8._0_8_ << 0x20;
  auVar17._8_4_ = auStack_160._0_4_;
  auVar17._12_4_ = auStack_160._4_4_;
  auStack_160._8_8_ = auVar1._8_8_;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = dVar6 - dVar21;
  (this->WorldBounds).Max.field0_0x0._s_0.X = auVar17._8_8_;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = (double)auStack_160._8_8_;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar21 + dVar6;
  (this->WorldBounds).IsValid = 1;
  (this->WorldBounds).Pad[0] = (char)uStack_147;
  (this->WorldBounds).Pad[1] = (char)((uint7)uStack_147 >> 8);
  (this->WorldBounds).Pad[2] = (char)((uint7)uStack_147 >> 0x10);
  (this->WorldBounds).Pad[3] = (char)((uint7)uStack_147 >> 0x18);
  (this->WorldBounds).Pad[4] = (char)((uint7)uStack_147 >> 0x20);
  (this->WorldBounds).Pad[5] = (char)((uint7)uStack_147 >> 0x28);
  (this->WorldBounds).Pad[6] = (char)((uint7)uStack_147 >> 0x30);
  auVar18._8_4_ = uVar32;
  auVar18._0_8_ = dVar31;
  auVar18._12_4_ = uVar33;
  dVar34 = dVar38 * param_1->M[1][0] + dVar31 * param_1->M[0][0] + param_1->M[2][0] * 0.0 +
           param_1->M[3][0] * 0.0;
  dVar4 = dVar38 * param_1->M[1][1] + auVar18._8_8_ * param_1->M[0][1] + param_1->M[2][1] * 0.0 +
          param_1->M[3][1] * 0.0;
  dVar23 = dVar38 * param_1->M[1][2] + dVar31 * param_1->M[0][2] + param_1->M[2][2] * 0.0 +
           param_1->M[3][2] * 0.0;
  dVar11 = SQRT(dVar4 * dVar4 + dVar34 * dVar34 + dVar23 * dVar23);
  dVar22 = dVar11 * __real_409f400000000000;
  if (dVar11 <= __real_3ee4f8b580000000) {
    dVar11 = __real_3ee4f8b580000000;
  }
  dVar11 = dVar5 / dVar11;
  auVar2._8_4_ = SUB84(dVar4 * dVar11,0);
  auVar2._0_8_ = dVar34 * dVar11;
  auVar2._12_4_ = (int)((ulonglong)(dVar4 * dVar11) >> 0x20);
  *(undefined1 (*) [16])&(this->PlanarReflectionXAxis).field0_0x0 = auVar2;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.Z = dVar23 * dVar11;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.W = dVar22;
  auVar19._8_4_ = SUB84(dVar9,0);
  auVar19._0_8_ = dVar9;
  auVar19._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar34 = dVar10 * param_1->M[1][0] + dVar9 * param_1->M[0][0] + param_1->M[2][0] * 0.0 +
           param_1->M[3][0] * 0.0;
  dVar4 = dVar10 * param_1->M[1][1] + auVar19._8_8_ * param_1->M[0][1] + param_1->M[2][1] * 0.0 +
          param_1->M[3][1] * 0.0;
  dVar23 = dVar10 * param_1->M[1][2] + dVar9 * param_1->M[0][2] + param_1->M[2][2] * 0.0 +
           param_1->M[3][2] * 0.0;
  dVar11 = SQRT(dVar4 * dVar4 + dVar34 * dVar34 + dVar23 * dVar23);
  dVar22 = dVar11 * __real_409f400000000000;
  if (dVar11 <= __real_3ee4f8b580000000) {
    dVar11 = __real_3ee4f8b580000000;
  }
  dVar5 = dVar5 / dVar11;
  auVar3._8_4_ = SUB84(dVar4 * dVar5,0);
  auVar3._0_8_ = dVar34 * dVar5;
  auVar3._12_4_ = (int)((ulonglong)(dVar4 * dVar5) >> 0x20);
  *(undefined1 (*) [16])&(this->PlanarReflectionYAxis).field0_0x0 = auVar3;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.Z = dVar23 * dVar5;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.W = dVar22;
  auStack_160 = auVar1;
  UE::Math::TMirrorMatrix<double>::TMirrorMatrix<double>
            ((TMirrorMatrix<double> *)&local_1f8,&this->ReflectionPlane);
  local_138.M[0][3] = 0.0;
  local_138.M[0][0] = local_1d0 * local_1a8 - local_1b0 * local_1c8;
  local_138.M[0][1] = local_1b8 * local_1c8 - local_1d8 * local_1a8;
  local_138.M[0][2] = local_1d8 * local_1b0 - local_1b8 * local_1d0;
  local_138.M[1][0] = local_1e8 * local_1b0 - local_1f0 * local_1a8;
  local_138.M[1][3] = 0.0;
  local_138.M[2][3] = 0.0;
  local_138.M[1][1] = local_1f8 * local_1a8 - local_1e8 * local_1b8;
  local_138.M[1][2] = local_1f0 * local_1b8 - local_1f8 * local_1b0;
  local_138.M[2][0] = local_1f0 * local_1c8 - local_1e8 * local_1d0;
  local_138.M[2][1] = local_1e8 * local_1d8 - local_1f8 * local_1c8;
  local_138.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_138.M[3][3] = _UNK_15061cbc8;
  local_138.M[2][2] = local_1f8 * local_1d0 - local_1f0 * local_1d8;
  local_138.M[3][0] = 0.0;
  local_138.M[3][1] = 0.0;
  FMatrix3x4::SetMatrix(&this->InverseTransposeMirrorMatrix,&local_138);
  return;
}

