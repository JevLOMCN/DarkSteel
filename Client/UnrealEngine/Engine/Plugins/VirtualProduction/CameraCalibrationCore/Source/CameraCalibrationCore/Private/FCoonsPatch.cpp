// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// Blend @ 14d6b6790

float __thiscall
LensInterpolationUtils::FCoonsPatch::Blend(FCoonsPatch *this,TVector2<double> *param_1)

{
  FRichCurve *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar9 = this->X0;
  fVar14 = 0.0;
  if (__real_322bcc77 < (float)((uint)(fVar9 - this->X1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    fVar14 = (float)(((param_1->field0_0x0)._s_0.X - (double)fVar9) / (double)(this->X1 - fVar9));
  }
  fVar2 = this->Y0;
  fVar15 = 0.0;
  if (__real_322bcc77 < (float)((uint)(fVar2 - this->Y1) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    fVar15 = (float)(((param_1->field0_0x0)._s_0.Y - (double)fVar2) / (double)(this->Y1 - fVar2));
  }
  pFVar1 = this->X0Curve;
  fVar2 = FRichCurve::Eval(this->Y0Curve,fVar2,0.0);
  fVar3 = FRichCurve::Eval(pFVar1,fVar9,0.0);
  fVar9 = this->Y0;
  pFVar1 = this->Y1Curve;
  fVar4 = FRichCurve::Eval(this->X0Curve,this->X1,0.0);
  fVar5 = FRichCurve::Eval(pFVar1,fVar9,0.0);
  pFVar1 = this->Y0Curve;
  fVar9 = this->Y1;
  fVar6 = FRichCurve::Eval(this->X1Curve,this->X0,0.0);
  fVar7 = FRichCurve::Eval(pFVar1,fVar9,0.0);
  pFVar1 = this->X1Curve;
  fVar9 = this->X1;
  fVar8 = FRichCurve::Eval(this->Y1Curve,this->Y1,0.0);
  fVar9 = FRichCurve::Eval(pFVar1,fVar9,0.0);
  fVar10 = FRichCurve::Eval(this->X1Curve,(float)(param_1->field0_0x0)._s_0.X,0.0);
  fVar11 = FRichCurve::Eval(this->X0Curve,(float)(param_1->field0_0x0)._s_0.X,0.0);
  fVar12 = FRichCurve::Eval(this->Y1Curve,(float)(param_1->field0_0x0)._s_0.Y,0.0);
  fVar13 = FRichCurve::Eval(this->Y0Curve,(float)(param_1->field0_0x0)._s_0.Y,0.0);
  fVar2 = ((fVar4 + fVar5) - (fVar3 + fVar2)) * fVar14 + fVar3 + fVar2;
  return ((fVar12 - fVar13) * fVar14 + fVar13 + (fVar10 - fVar11) * fVar15 + fVar11) -
         (((((fVar8 + fVar9) - (fVar6 + fVar7)) * fVar14 + fVar6 + fVar7) - fVar2) * fVar15 + fVar2)
         * __real_3f000000;
}

