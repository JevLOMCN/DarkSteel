// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// IsDone @ 149c80b80

bool __thiscall
PCGSplineSamplerHelpers::FSubdivisionStepSampler::IsDone(FSubdivisionStepSampler *this)

{
  char cVar1;
  
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x510))();
    if (cVar1 != '\0') goto LAB_149c80bb4;
  }
  if (this->NumSegments != 0) {
    return this->NumSegments + 1 <= (int)this->_padding_;
  }
LAB_149c80bb4:
  return this->NumSegments <= (int)this->_padding_;
}

// Step @ 149c924b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PCGSplineSamplerHelpers::FSubdivisionStepSampler::Step
          (FSubdivisionStepSampler *this,FSamplerResult *param_1)

{
  TBox<double> *pTVar1;
  int iVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  TBox<double> *local_130;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TQuat<double> local_e8;
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar5 = (int)this->_padding_;
  if (iVar5 < 1) {
    iVar5 = this->NumSegments;
  }
  iVar5 = iVar5 + -1;
  iVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x4a0))();
  iVar2 = (int)this->_padding_;
  iVar9 = iVar5;
  if (iVar2 != iVar6) {
    iVar9 = iVar2;
  }
  dVar11 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))
                             ((longlong *)this->_padding_,iVar9);
  dVar3 = dVar11 / (double)(this->SubdivisionsPerSegment + 1);
  if (iVar2 != iVar6) {
    dVar11 = (double)this->SubpointIndex * dVar3;
  }
  pTVar1 = &param_1->Box;
  uVar13 = SUB84(dVar11,0);
  local_138 = 0;
  local_130 = pTVar1;
  pdVar8 = (double *)
           (**(code **)(*(longlong *)this->_padding_ + 0x4d0))
                     ((longlong *)this->_padding_,local_c8,iVar9,dVar11);
  dVar12 = pdVar8[1];
  (param_1->LocalTransform).Rotation.XY.m128d_f64[0] = *pdVar8;
  (param_1->LocalTransform).Rotation.XY.m128d_f64[1] = dVar12;
  dVar12 = pdVar8[3];
  (param_1->LocalTransform).Rotation.ZW.m128d_f64[0] = pdVar8[2];
  (param_1->LocalTransform).Rotation.ZW.m128d_f64[1] = dVar12;
  dVar12 = pdVar8[5];
  (param_1->LocalTransform).Translation.XY.m128d_f64[0] = pdVar8[4];
  (param_1->LocalTransform).Translation.XY.m128d_f64[1] = dVar12;
  dVar12 = pdVar8[7];
  (param_1->LocalTransform).Translation.ZW.m128d_f64[0] = pdVar8[6];
  (param_1->LocalTransform).Translation.ZW.m128d_f64[1] = dVar12;
  dVar12 = pdVar8[9];
  (param_1->LocalTransform).Scale3D.XY.m128d_f64[0] = pdVar8[8];
  (param_1->LocalTransform).Scale3D.XY.m128d_f64[1] = dVar12;
  dVar12 = pdVar8[0xb];
  (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0] = pdVar8[10];
  (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
  iVar7 = *(int *)((longlong)&this->_padding_ + 4);
  *(int *)((longlong)&this->_padding_ + 4) = iVar7 + 1;
  param_1->SampleIndex = iVar7;
  cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x510))();
  iVar7 = iVar9;
  if (cVar4 != '\0') {
    iVar7 = (int)this->_padding_;
  }
  param_1->SegmentIndex = iVar7;
  param_1->SubsegmentIndex = this->SubpointIndex;
  fVar10 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x4f0))
                            ((longlong *)this->_padding_,iVar9,uVar13);
  param_1->InputKey = fVar10;
  if ((char)this->_padding_ != '\0') {
    dVar12 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4e0))
                               ((longlong *)this->_padding_,iVar9,uVar13);
    param_1->Curvature = dVar12;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    if (this->SubpointIndex == 0) {
      (**(code **)(*(longlong *)this->_padding_ + 0x500))
                ((longlong *)this->_padding_,(int)this->_padding_,&param_1->ArriveTangent,
                 &param_1->LeaveTangent);
    }
    else {
      local_e8.Z = (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
      local_e8.W = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
      local_e8.X = (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
      local_e8.Y = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
      local_108._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_108._s_0.Y = _UNK_150689518;
      local_108._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&local_e8,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_108._s_0);
      (param_1->ArriveTangent).field0_0x0._s_0.X = local_120._s_0.X;
      (param_1->ArriveTangent).field0_0x0._s_0.Y = local_120._s_0.Y;
      (param_1->LeaveTangent).field0_0x0._s_0.X = local_120._s_0.X;
      (param_1->LeaveTangent).field0_0x0._s_0.Y = local_120._s_0.Y;
      (param_1->ArriveTangent).field0_0x0._s_0.Z = local_120._s_0.Z;
      (param_1->LeaveTangent).field0_0x0._s_0.Z = local_120._s_0.Z;
    }
  }
  if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
    fVar10 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x4e8))
                              ((longlong *)this->_padding_,iVar9,uVar13);
    param_1->Alpha = (double)fVar10;
  }
  if (*(char *)((longlong)&this->_padding_ + 3) != '\0') {
    if (((0 < iVar9) && (iVar2 != iVar6)) && (this->SubpointIndex == 0)) {
      dVar12 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))
                                 ((longlong *)this->_padding_,iVar9 + -1);
      this->_padding_ = (longlong)(dVar12 + (double)this->_padding_);
    }
    param_1->Distance = dVar11 + (double)this->_padding_;
  }
  if (this->SubpointIndex == 0) {
    dVar11 = (double)(**(code **)(*(longlong *)this->_padding_ + 0x4b0))
                               ((longlong *)this->_padding_,iVar5);
    local_130 = (TBox<double> *)0x0;
    local_138 = 0;
    (**(code **)(*(longlong *)this->_padding_ + 0x4d0))
              ((longlong *)this->_padding_,local_c8,iVar5,dVar11);
    local_a8 = local_a8 - (param_1->LocalTransform).Translation.XY.m128d_f64[0];
    local_98 = local_98 - (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
    dStack_a0 = dStack_a0 - (param_1->LocalTransform).Translation.XY.m128d_f64[1];
    dVar3 = dVar3 * __real_3fe0000000000000;
    if (__real_3f1a36e2e0000000 <
        SQRT(dStack_a0 * dStack_a0 + local_a8 * local_a8 + local_98 * local_98)) {
      (pTVar1->Min).field0_0x0._s_0.X =
           (dVar3 / (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]) *
           (pTVar1->Min).field0_0x0._s_0.X;
    }
    else {
      (pTVar1->Min).field0_0x0._s_0.X =
           ((dVar11 * __real_3fe0000000000000) /
           ((double)(this->SubdivisionsPerSegment + 1) * local_88)) *
           (pTVar1->Min).field0_0x0._s_0.X;
    }
  }
  else {
    dVar3 = dVar3 * __real_3fe0000000000000;
    (pTVar1->Min).field0_0x0._s_0.X =
         (dVar3 / (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]) *
         (pTVar1->Min).field0_0x0._s_0.X;
  }
  (param_1->Box).Max.field0_0x0._s_0.X =
       (dVar3 / (param_1->LocalTransform).Scale3D.XY.m128d_f64[0]) *
       (param_1->Box).Max.field0_0x0._s_0.X;
  this->SubpointIndex = this->SubpointIndex + 1;
  if ((this->SubdivisionsPerSegment < this->SubpointIndex) || (iVar2 == iVar6)) {
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    this->SubpointIndex = 0;
  }
  return;
}

