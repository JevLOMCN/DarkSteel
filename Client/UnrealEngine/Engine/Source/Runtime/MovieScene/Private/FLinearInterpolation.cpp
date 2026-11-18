// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// Derivative @ 1460bc670

FConstantValue * __thiscall
UE::MovieScene::Interpolation::FLinearInterpolation::Derivative
          (FLinearInterpolation *this,FConstantValue *__return_storage_ptr__)

{
  __return_storage_ptr__->Value = this->Coefficient;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  return __return_storage_ptr__;
}

// Evaluate @ 1460c2680

double __thiscall
UE::MovieScene::Interpolation::FLinearInterpolation::Evaluate
          (FLinearInterpolation *this,FFrameTime param_1)

{
  undefined1 in_XMM2 [16];
  undefined1 auVar1 [16];
  float fVar2;
  float fStackX_c;
  
  fStackX_c = param_1.SubFrame;
  auVar1 = roundps(in_XMM2,ZEXT416((uint)(fStackX_c - 0.0)),1);
  fVar2 = (fStackX_c - 0.0) - auVar1._0_4_;
  if (::FFrameTime::MaxSubframe <= fVar2) {
    fVar2 = ::FFrameTime::MaxSubframe;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return ((double)((int)auVar1._0_4_ + (param_1.FrameNumber.Value.Value - (this->Origin).Value)) +
         (double)fVar2) * this->Coefficient + this->Constant;
}

// Integral @ 1460d6bc0

FQuadraticInterpolation * __thiscall
UE::MovieScene::Interpolation::FLinearInterpolation::Integral
          (FLinearInterpolation *this,FQuadraticInterpolation *__return_storage_ptr__,double param_1
          )

{
  double dVar1;
  
  dVar1 = this->Coefficient * __real_3fe0000000000000;
  __return_storage_ptr__->B = this->Constant;
  (__return_storage_ptr__->Origin).Value = (this->Origin).Value;
  __return_storage_ptr__->Constant = param_1;
  __return_storage_ptr__->A = dVar1;
  return __return_storage_ptr__;
}

// Solve @ 1460f8ae0

int __thiscall
UE::MovieScene::Interpolation::FLinearInterpolation::Solve
          (FLinearInterpolation *this,double param_1,TInterpSolutions<FFrameTime,1> param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  FFrameTime local_res8;
  
  if (this->Coefficient != 0.0) {
    dVar11 = (param_1 - this->Constant) / this->Coefficient;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar11;
    auVar9 = roundpd(in_XMM2,auVar5,1);
    dVar7 = auVar9._0_8_;
    dVar8 = dVar7;
    if (__real_41dfffffffc00000 <= dVar7) {
      dVar8 = __real_41dfffffffc00000;
    }
    fVar10 = (float)(dVar11 - dVar7);
    if (dVar8 <= __real_c1e0000000000000) {
      dVar8 = __real_c1e0000000000000;
    }
    if (::FFrameTime::MaxSubframe <= fVar10) {
      fVar10 = ::FFrameTime::MaxSubframe;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= fVar10) {
      fVar10 = ::FFrameTime::MaxSubframe;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = fVar10 + 0.0;
    iVar1 = ((int)ROUND((fVar10 + fVar10) - __real_3f000000) >> 1) + (this->Origin).Value;
    iVar3 = (int)fVar10;
    fVar4 = fVar10;
    if ((iVar3 != -0x80000000) && ((float)iVar3 != fVar10)) {
      auVar6._4_4_ = fVar10;
      auVar6._0_4_ = fVar10;
      auVar6._8_8_ = 0;
      uVar2 = movmskps(iVar1,auVar6);
      fVar4 = (float)(int)(iVar3 - (uVar2 & 1));
    }
    local_res8.SubFrame = fVar10 - fVar4;
    if (::FFrameTime::MaxSubframe <= fVar10 - fVar4) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value = (int)dVar8 + iVar1;
    *param_2.Array = local_res8;
    return 1;
  }
  dVar8 = this->Constant;
  if (param_1 == dVar8) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar8;
    auVar9 = roundpd(in_XMM2,auVar9,1);
    dVar11 = auVar9._0_8_;
    dVar7 = dVar11;
    if (__real_41dfffffffc00000 <= dVar11) {
      dVar7 = __real_41dfffffffc00000;
    }
    if (dVar7 <= __real_c1e0000000000000) {
      dVar7 = __real_c1e0000000000000;
    }
    local_res8.SubFrame = (float)(dVar8 - dVar11);
    if (::FFrameTime::MaxSubframe <= (float)(dVar8 - dVar11)) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    if (::FFrameTime::MaxSubframe <= local_res8.SubFrame) {
      local_res8.SubFrame = ::FFrameTime::MaxSubframe;
    }
    if (local_res8.SubFrame <= 0.0) {
      local_res8.SubFrame = 0.0;
    }
    local_res8.FrameNumber.Value = (int)dVar7;
    *param_2.Array = local_res8;
    return 1;
  }
  return 0;
}

// SolveWithin @ 1460f9a10

int __thiscall
UE::MovieScene::Interpolation::FLinearInterpolation::SolveWithin
          (FLinearInterpolation *this,FFrameTime param_1,FFrameTime param_2,double param_3,
          TInterpSolutions<FFrameTime,1> param_4)

{
  int iVar1;
  FFrameNumber FVar2;
  float fStackX_c;
  float fStackX_24;
  
  if (param_3 == this->Constant) {
    *param_4.Array = param_1;
    return 1;
  }
  iVar1 = Solve(this,param_3,param_4);
  if (iVar1 == 1) {
    FVar2 = (*param_4.Array).FrameNumber;
    fStackX_c = (*param_4.Array).SubFrame;
    if ((param_1.FrameNumber.Value.Value < FVar2.Value) ||
       ((FVar2.Value == param_1.FrameNumber.Value.Value &&
        (fStackX_24 = param_1.SubFrame, fStackX_24 <= fStackX_c)))) {
      if ((FVar2.Value < param_2.FrameNumber.Value.Value) ||
         ((FVar2.Value == param_2.FrameNumber.Value.Value &&
          (fStackX_24 = param_2.SubFrame, fStackX_c < fStackX_24)))) {
        return 1;
      }
    }
  }
  return 0;
}

