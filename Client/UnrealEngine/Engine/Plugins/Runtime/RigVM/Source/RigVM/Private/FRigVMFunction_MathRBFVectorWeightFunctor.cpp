// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// operator() @ 14a193540

float __thiscall
FRigVMFunction_MathRBFVectorWeightFunctor::operator()
          (FRigVMFunction_MathRBFVectorWeightFunctor *this,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  ERBFVectorDistanceType EVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  
  EVar2 = this->DistanceType;
  dVar9 = 0.0;
  if (EVar2 == Euclidean) {
    dVar13 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar12 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    dVar9 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    auVar14._0_8_ = dVar13 * dVar13 + dVar12 * dVar12 + dVar9 * dVar9;
    auVar14._8_8_ = 0;
    auVar14 = sqrtpd(ZEXT816(0),auVar14);
    dVar9 = auVar14._0_8_;
  }
  else if (EVar2 == Manhattan) {
    dVar13 = (param_1->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.Y;
    dVar9 = (param_1->field0_0x0)._s_0.X - (param_2->field0_0x0)._s_0.X;
    dVar12 = (param_1->field0_0x0)._s_0.Z - (param_2->field0_0x0)._s_0.Z;
    dVar9 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  else if (EVar2 == ArcLength) {
    dVar9 = (param_2->field0_0x0)._s_0.Z;
    dVar12 = (param_1->field0_0x0)._s_0.X;
    dVar13 = (param_1->field0_0x0)._s_0.Z;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_2->field0_0x0)._s_0.X;
    dVar6 = (param_2->field0_0x0)._s_0.Y;
    dVar11 = dVar1 * dVar1 + dVar12 * dVar12 + dVar13 * dVar13;
    if (dVar11 == __real_3ff0000000000000) {
      uVar15 = (param_1->field0_0x0)._s_0.X;
      uVar3 = (param_1->field0_0x0)._s_0.Y;
      uVar4 = (param_1->field0_0x0)._s_0.Z;
    }
    else {
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar11) {
        dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
        uVar15 = dVar12 * dVar11;
        uVar3 = dVar1 * dVar11;
        uVar4 = dVar13 * dVar11;
      }
    }
    dVar12 = dVar6 * dVar6 + dVar5 * dVar5 + dVar9 * dVar9;
    if (dVar12 == __real_3ff0000000000000) {
      uVar8 = dVar6;
      uVar10 = dVar5;
      uVar16 = (param_2->field0_0x0)._s_0.Z;
    }
    else {
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar12) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
        uVar8 = dVar6 * dVar12;
        uVar10 = dVar5 * dVar12;
        uVar16 = dVar9 * dVar12;
      }
    }
    dVar12 = (double)uVar15 * (double)uVar10 + (double)uVar8 * (double)uVar3 +
             (double)uVar16 * (double)uVar4;
    dVar9 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar12) && (dVar9 = dVar12, __real_3ff0000000000000 <= dVar12))
    {
      dVar9 = __real_3ff0000000000000;
    }
    dVar9 = acos(dVar9);
  }
  fVar7 = SmoothingKernelFunctor::operator()(&this->SmoothingKernel,(float)dVar9);
  return fVar7;
}

