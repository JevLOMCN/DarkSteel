// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 1

// operator() @ 14a1933a0

float __thiscall
FRigVMFunction_MathRBFQuatWeightFunctor::operator()
          (FRigVMFunction_MathRBFQuatWeightFunctor *this,TQuat<double> *param_1,
          TQuat<double> *param_2)

{
  ERBFQuatDistanceType EVar1;
  TVector<double> *pTVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> local_78;
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  EVar1 = this->DistanceType;
  dVar4 = 0.0;
  if (EVar1 == Euclidean) {
    dVar4 = param_1->Z - param_2->Z;
    dVar5 = param_1->W - param_2->W;
    dVar6 = param_1->X - param_2->X;
    dVar7 = param_1->Y - param_2->Y;
    dVar4 = SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6 + dVar7 * dVar7);
  }
  else if (EVar1 == ArcLength) {
    dVar4 = RBFDistanceMetric::ArcLength(param_1,param_2);
  }
  else if (EVar1 == SwingAngle) {
    pTVar2 = this->TwistAxis;
    UE::Math::TQuat<double>::ToSwingTwist(param_1,pTVar2,&local_58,&local_38);
    UE::Math::TQuat<double>::ToSwingTwist(param_2,pTVar2,&local_78,&local_38);
    dVar4 = local_78.W * local_58.W + local_78.Z * local_58.Z +
            local_78.Y * local_58.Y + local_78.X * local_58.X;
    dVar5 = (dVar4 + dVar4) * dVar4 - __real_3ff0000000000000;
    dVar4 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar5) && (dVar4 = dVar5, __real_3ff0000000000000 <= dVar5)) {
      dVar4 = __real_3ff0000000000000;
    }
    dVar4 = acos(dVar4);
  }
  else if (EVar1 == TwistAngle) {
    pTVar2 = this->TwistAxis;
    dVar4 = UE::Math::TQuat<double>::GetTwistAngle(param_1,pTVar2);
    dVar5 = UE::Math::TQuat<double>::GetTwistAngle(param_2,pTVar2);
    dVar4 = (double)CONCAT44((uint)((ulonglong)(dVar4 - dVar5) >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4 - dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  fVar3 = SmoothingKernelFunctor::operator()(&this->SmoothingKernel,(float)dVar4);
  return fVar3;
}

