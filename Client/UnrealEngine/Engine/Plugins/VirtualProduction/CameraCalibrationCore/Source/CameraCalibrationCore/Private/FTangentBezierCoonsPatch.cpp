// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 2

// FTangentBezierCoonsPatch @ 14d6a9750

FTangentBezierCoonsPatch * __thiscall
LensInterpolationUtils::FTangentBezierCoonsPatch::FTangentBezierCoonsPatch
          (FTangentBezierCoonsPatch *this,float param_1,float param_2,float param_3,float param_4,
          float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_5;
  fVar2 = *param_6;
  this->Corners[0].X = param_1;
  this->Corners[0].TangentX = fVar1;
  this->Corners[0].TangentY = fVar2;
  this->Corners[0].Y = param_3;
  this->Corners[0].Value = 0.0;
  fVar1 = param_5[1];
  this->Corners[1].TangentY = param_6[1];
  this->Corners[1].TangentX = fVar1;
  this->Corners[1].X = param_2;
  this->Corners[1].Y = param_3;
  this->Corners[1].Value = 0.0;
  fVar1 = param_5[2];
  fVar2 = param_6[2];
  this->Corners[2].Y = param_4;
  this->Corners[2].TangentX = fVar1;
  this->Corners[2].TangentY = fVar2;
  this->Corners[2].X = param_2;
  this->Corners[2].Value = 0.0;
  fVar1 = param_5[3];
  fVar2 = param_6[3];
  this->Corners[3].X = param_1;
  this->Corners[3].TangentX = fVar1;
  this->Corners[3].TangentY = fVar2;
  this->Corners[3].Y = param_4;
  this->Corners[3].Value = 0.0;
  return this;
}

// Blend @ 14d6b6a20

float __thiscall
LensInterpolationUtils::FTangentBezierCoonsPatch::Blend
          (FTangentBezierCoonsPatch *this,TVector2<double> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FTangentBezierCurve local_108;
  FTangentBezierCurve local_f0;
  FTangentBezierCurve local_d8;
  FTangentBezierCurve local_c0 [7];
  
  local_108.X0 = this->Corners[0].X;
  local_108.X1 = this->Corners[1].X;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (__real_322bcc77 <
      (float)((uint)(local_108.X0 - local_108.X1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar11 = (float)((dVar3 - (double)local_108.X0) / (double)(local_108.X1 - local_108.X0));
  }
  local_f0.X0 = this->Corners[0].Y;
  local_f0.X1 = this->Corners[3].Y;
  if (__real_322bcc77 <
      (float)((uint)(local_f0.X0 - local_f0.X1) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar10 = (float)(((param_1->field0_0x0)._s_0.Y - (double)local_f0.X0) /
                    (double)(local_f0.X1 - local_f0.X0));
  }
  local_108.Tangent1 = this->Corners[1].TangentX;
  local_108.Tangent0 = this->Corners[0].TangentX;
  fVar9 = this->Corners[0].Value;
  fVar6 = this->Corners[1].Value;
  fVar1 = this->Corners[3].Value;
  fVar2 = this->Corners[2].Value;
  local_c0[0].X1 = this->Corners[2].X;
  local_c0[0].X0 = this->Corners[3].X;
  local_c0[0].Tangent1 = this->Corners[2].TangentX;
  local_c0[0].Tangent0 = this->Corners[3].TangentX;
  local_f0.Tangent1 = this->Corners[3].TangentY;
  local_f0.Tangent0 = this->Corners[0].TangentY;
  local_d8.X1 = this->Corners[2].Y;
  local_d8.X0 = this->Corners[1].Y;
  local_d8.Tangent1 = this->Corners[2].TangentY;
  fVar8 = (float)dVar3;
  local_d8.Tangent0 = this->Corners[1].TangentY;
  local_108.Y0 = fVar9;
  local_108.Y1 = fVar6;
  local_f0.Y0 = fVar9;
  local_f0.Y1 = fVar1;
  local_d8.Y0 = fVar6;
  local_d8.Y1 = fVar2;
  local_c0[0].Y0 = fVar1;
  local_c0[0].Y1 = fVar2;
  fVar4 = FTangentBezierCurve::Eval(&local_108,fVar8);
  fVar7 = (float)(param_1->field0_0x0)._s_0.Y;
  fVar5 = FTangentBezierCurve::Eval(&local_f0,fVar7);
  fVar9 = (fVar6 - fVar9) * fVar11 + fVar9;
  fVar6 = FTangentBezierCurve::Eval(&local_d8,fVar7);
  fVar7 = FTangentBezierCurve::Eval(local_c0,fVar8);
  return ((fVar6 - fVar5) * fVar11 + fVar5 + (fVar7 - fVar4) * fVar10 + fVar4) -
         ((((fVar2 - fVar1) * fVar11 + fVar1) - fVar9) * fVar10 + fVar9);
}

