// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// FDistanceStepSampler @ 149c4a1d0

FDistanceStepSampler * __thiscall
PCGSplineSamplerHelpers::FDistanceStepSampler::FDistanceStepSampler
          (FDistanceStepSampler *this,UPCGPolyLineData *param_1,FPCGSplineSamplerParams *param_2,
          int param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FDistanceStepSampler *pFVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FStepSampler_PCGSplineSamplerHelpers__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(int *)&this->_padding_ = param_3;
  *(bool *)&this->_padding_ = param_2->bComputeCurvature;
  *(bool *)((longlong)&this->_padding_ + 1) = param_2->bComputeTangents;
  *(bool *)((longlong)&this->_padding_ + 2) = param_2->bComputeAlpha;
  *(bool *)((longlong)&this->_padding_ + 3) = param_2->bComputeDistance;
  if (param_1 == (UPCGPolyLineData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LineData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSplineSampler.cpp"
                       ,399,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDistanceStepSampler *)(*pcVar2)();
      return pFVar6;
    }
  }
  this->CurrentDistance = 0.0;
  this->StartOffset = 0.0;
  this->DistanceIncrement = 0.0;
  this->EndDistance = 0.0;
  this->TotalDistance = 0.0;
  this->MaxRandomOffset = 0.0;
  (this->RandomSource).InitialSeed = 0;
  (this->RandomSource).Seed = 0;
  this->_padding_ = (longlong)&___7FDistanceStepSampler_PCGSplineSamplerHelpers__6B_;
  this->bUseRandomOffset = false;
  this->TotalNumSamples = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->CurrentNumSamples = 0;
  fVar7 = param_2->StartOffset;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  this->StartOffset = (double)fVar7;
  fVar10 = param_2->EndOffset;
  this->CurrentDistance = (double)fVar7;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  dVar8 = (double)(**(code **)(*(longlong *)param_1 + 0x4c8))(param_1);
  this->TotalDistance = dVar8;
  this->EndDistance = dVar8 - (double)fVar10;
  dVar8 = (dVar8 - (double)fVar10) - this->StartOffset;
  if (param_2->Mode == NumberOfSamples) {
    iVar5 = param_2->NumSamples;
  }
  else {
    if ((param_2->Mode != Distance) || (param_2->bFitToCurve == false)) goto LAB_149c4a32c;
    if (param_2->DistanceIncrement <= 0.0) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = dVar8 / (double)param_2->DistanceIncrement;
    }
    iVar5 = (int)dVar9;
  }
  this->TotalNumSamples = iVar5;
LAB_149c4a32c:
  if (this->TotalNumSamples < 1) {
    dVar8 = (double)param_2->DistanceIncrement;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x510))();
    iVar5 = this->TotalNumSamples;
    if ((cVar4 == '\0') && (iVar5 = iVar5 + -1, iVar5 < 1)) {
      iVar5 = 1;
    }
    dVar8 = dVar8 / (double)iVar5;
  }
  this->DistanceIncrement = dVar8;
  dVar9 = (double)param_2->MaxRandomOffsetNormalized;
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  dVar9 = dVar9 * dVar8 * __real_3fe0000000000000;
  this->MaxRandomOffset = dVar9;
  dVar8 = __real_3e45798ee2308c3a;
  dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  this->bUseRandomOffset = __real_3e45798ee2308c3a < dVar9;
  if (dVar8 < dVar9) {
    uVar1 = (uint)this->_padding_;
    (this->RandomSource).InitialSeed = uVar1;
    (this->RandomSource).Seed = uVar1;
  }
  return this;
}

// IsDone @ 149c80b40

bool __thiscall PCGSplineSamplerHelpers::FDistanceStepSampler::IsDone(FDistanceStepSampler *this)

{
  if ((this->CurrentDistance + (double)this->_padding_ <=
       this->EndDistance + __real_3e45798ee2308c3a) &&
     (this->CurrentNumSamples != this->TotalNumSamples)) {
    return false;
  }
  return true;
}

// Step @ 149c92130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PCGSplineSamplerHelpers::FDistanceStepSampler::Step
          (FDistanceStepSampler *this,FSamplerResult *param_1)

{
  TBox<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  undefined4 uVar15;
  double dVar14;
  undefined4 uVar16;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  TBox<double> *local_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TQuat<double> local_d8;
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  iVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x4a0))();
  if (iVar6 <= (int)this->_padding_) {
    *(int *)&this->_padding_ = iVar6 + -1;
    dVar11 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))();
    this->CurrentDistance = dVar11;
    lVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x508))
                       ((longlong *)this->_padding_,(int)this->_padding_);
    this->_padding_ = lVar12;
  }
  if (this->bUseRandomOffset == false) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = this->MaxRandomOffset;
    uVar7 = (this->RandomSource).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomSource).Seed = uVar7;
    dVar11 = (dVar11 + dVar11) * (double)((float)(uVar7 >> 9 | 0x3f800000) - __real_3f800000) -
             dVar11;
  }
  dVar11 = dVar11 + this->CurrentDistance;
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x510))();
  if (cVar5 == '\0') {
    if ((double)this->_padding_ + dVar11 < this->StartOffset) {
      dVar11 = this->StartOffset - (double)this->_padding_;
    }
  }
  cVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x510))();
  if (cVar5 == '\0') {
    if (this->EndDistance <= (double)this->_padding_ + dVar11) {
      dVar11 = this->EndDistance - (double)this->_padding_;
    }
  }
  uVar16 = SUB84(dVar11,0);
  dVar13 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))
                             ((longlong *)this->_padding_,(int)this->_padding_);
  pTVar1 = &param_1->Box;
  uVar9 = SUB84(dVar13,0);
  uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
  local_128 = 0;
  local_120 = pTVar1;
  pdVar8 = (double *)
           (**(code **)(*(longlong *)this->_padding_ + 0x4d0))
                     ((longlong *)this->_padding_,local_b8,(int)this->_padding_,uVar16);
  dVar14 = pdVar8[1];
  (param_1->LocalTransform).Rotation.XY.m128d_f64[0] = *pdVar8;
  (param_1->LocalTransform).Rotation.XY.m128d_f64[1] = dVar14;
  dVar14 = pdVar8[3];
  (param_1->LocalTransform).Rotation.ZW.m128d_f64[0] = pdVar8[2];
  (param_1->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar14;
  dVar14 = pdVar8[5];
  (param_1->LocalTransform).Translation.XY.m128d_f64[0] = pdVar8[4];
  (param_1->LocalTransform).Translation.XY.m128d_f64[1] = dVar14;
  dVar14 = pdVar8[7];
  (param_1->LocalTransform).Translation.ZW.m128d_f64[0] = pdVar8[6];
  (param_1->LocalTransform).Translation.ZW.m128d_f64[1] = dVar14;
  dVar14 = pdVar8[9];
  (param_1->LocalTransform).Scale3D.XY.m128d_f64[0] = pdVar8[8];
  (param_1->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar14;
  uVar2 = *(undefined4 *)((longlong)pdVar8 + 0x54);
  uVar3 = *(undefined4 *)(pdVar8 + 0xb);
  uVar4 = *(undefined4 *)((longlong)pdVar8 + 0x5c);
  *(undefined4 *)(param_1->LocalTransform).Scale3D.ZW.m128d_f64 = *(undefined4 *)(pdVar8 + 10);
  *(undefined4 *)((longlong)(param_1->LocalTransform).Scale3D.ZW.m128d_f64 + 4) = uVar2;
  *(undefined4 *)((param_1->LocalTransform).Scale3D.ZW.m128d_f64 + 1) = uVar3;
  *(undefined4 *)((longlong)(param_1->LocalTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar4;
  iVar6 = *(int *)((longlong)&this->_padding_ + 4);
  *(int *)((longlong)&this->_padding_ + 4) = iVar6 + 1;
  param_1->SampleIndex = iVar6;
  param_1->SegmentIndex = (int)this->_padding_;
  fVar10 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x4f0))
                            ((longlong *)this->_padding_,(int)this->_padding_,uVar16);
  param_1->InputKey = fVar10;
  (pTVar1->Min).field0_0x0._s_0.X =
       ((pTVar1->Min).field0_0x0._s_0.X / (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]) *
       this->DistanceIncrement * __real_3fe0000000000000;
  local_118._s_0.Z = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0];
  (param_1->Box).Max.field0_0x0._s_0.X =
       ((param_1->Box).Max.field0_0x0._s_0.X / (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]) *
       this->DistanceIncrement * __real_3fe0000000000000;
  if ((char)this->_padding_ != '\0') {
    dVar14 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4e0))
                               ((longlong *)this->_padding_,(int)this->_padding_,uVar16);
    param_1->Curvature = dVar14;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    local_d8.Z = (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
    local_d8.W = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
    local_d8.X = (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
    local_d8.Y = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
    local_f8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_f8._s_0.Y = _UNK_150689518;
    local_f8._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&local_d8,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_f8._s_0);
    (param_1->ArriveTangent).field0_0x0._s_0.X = local_118._s_0.X;
    (param_1->ArriveTangent).field0_0x0._s_0.Y = local_118._s_0.Y;
    (param_1->LeaveTangent).field0_0x0._s_0.X = local_118._s_0.X;
    (param_1->LeaveTangent).field0_0x0._s_0.Y = local_118._s_0.Y;
    (param_1->ArriveTangent).field0_0x0._s_0.Z = local_118._s_0.Z;
    (param_1->LeaveTangent).field0_0x0._s_0.Z = local_118._s_0.Z;
  }
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    fVar10 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x4e8))
                              ((longlong *)this->_padding_,(int)this->_padding_,uVar16);
    param_1->Alpha = (double)fVar10;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    param_1->Distance = dVar11 + (double)this->_padding_;
  }
  dVar11 = this->DistanceIncrement + this->CurrentDistance;
  this->CurrentNumSamples = this->CurrentNumSamples + 1;
  this->CurrentDistance = dVar11;
  if (dVar13 < dVar11) {
    do {
      *(int *)&this->_padding_ = (int)this->_padding_ + 1;
      this->CurrentDistance = dVar11 - (double)CONCAT44(uVar15,uVar9);
      this->_padding_ = (longlong)((double)CONCAT44(uVar15,uVar9) + (double)this->_padding_);
      cVar5 = (**(code **)(this->_padding_ + 8))(this);
      if (cVar5 != '\0') {
        return;
      }
      if ((double)CONCAT44(uVar15,uVar9) < 0.0 || (double)CONCAT44(uVar15,uVar9) == 0.0) {
        return;
      }
      dVar14 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))
                                 ((longlong *)this->_padding_,(int)this->_padding_);
      uVar9 = SUB84(dVar14,0);
      uVar15 = (undefined4)((ulonglong)dVar14 >> 0x20);
      dVar11 = this->CurrentDistance;
    } while (dVar14 < dVar11);
  }
  return;
}

