// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// Eval @ 14d6c15b0

float __thiscall
LensInterpolationUtils::FTangentBezierCurve::Eval(FTangentBezierCurve *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = this->X0;
  fVar3 = this->Y0;
  if (__real_322bcc77 < (float)((uint)(fVar1 - this->X1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    fVar2 = this->Y1;
    fVar5 = this->X1 - fVar1;
    fVar4 = (fVar2 - fVar3) * (__real_3f800000 / fVar5);
    fVar3 = UE::Curves::BezierInterp<float>
                      (fVar3,fVar4 * this->Tangent0 * fVar5 * __real_3eaaaaab + fVar3,
                       fVar2 - fVar4 * this->Tangent1 * fVar5 * __real_3eaaaaab,fVar2,
                       (param_1 - fVar1) * (__real_3f800000 / fVar5));
  }
  return fVar3;
}

