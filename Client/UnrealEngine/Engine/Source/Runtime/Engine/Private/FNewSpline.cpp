// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 76

// AddAttributeValue<float> @ 147a11b60

int __thiscall
FNewSpline::AddAttributeValue<float>(FNewSpline *this,FName param_1,float *param_2,float param_3)

{
  int iVar1;
  TTangentBezierSpline<float> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88;
  TInterval1<float> local_84;
  TTangentBezierControlPoint<float> local_78 [5];
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 == (TTangentBezierSpline<float> *)0x0) {
    return -1;
  }
  local_78[0].Position = *param_2;
  local_78[0].TangentIn = 0.0;
  local_78[0].TangentOut = 0.0;
  local_78[0].TangentMode = Auto;
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
  fVar5 = ToInternalSplineSpace(this,param_3);
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,param_1);
  pcVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  fVar7 = __real_7f7fffff;
  fVar8 = __real_ff7fffff;
  if (pcVar4 != (char *)0x0) {
    pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,&local_84);
    if (*pcVar4 == '\0') {
      fVar7 = (__real_3f800000 - *(float *)(pcVar4 + 4)) * *pfVar3 +
              *(float *)(pcVar4 + 4) * pfVar3[1];
      fVar8 = (__real_3f800000 - *(float *)(pcVar4 + 8)) * *pfVar3 +
              *(float *)(pcVar4 + 8) * pfVar3[1];
    }
    else {
      fVar7 = __real_7f7fffff;
      fVar8 = __real_ff7fffff;
      if (*pcVar4 == '\x01') {
        fVar7 = *(float *)(pcVar4 + 4);
        fVar8 = *(float *)(pcVar4 + 8);
      }
    }
  }
  if (iVar1 == 0) {
    UE::Geometry::Spline::TTangentBezierSpline<float>::AppendPoint(this_00,local_78);
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_,param_1);
    pcVar4 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      pcVar4 = (char *)0x0;
    }
    if (pcVar4 != (char *)0x0) {
      *(float *)(pcVar4 + 4) = fVar5;
      *(float *)(pcVar4 + 8) = fVar5;
      *pcVar4 = '\x01';
    }
  }
  else {
    local_84.Min = fVar7;
    local_84.Max = fVar5;
    if (iVar1 == 1) {
      if (fVar7 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<float>::AppendPoint(this_00,local_78);
        (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
        UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(this_00);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_84,Parent);
        return 1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<float>::PrependPoint(this_00,local_78);
      (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
      UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(this_00);
      local_84.Max = fVar7;
    }
    else {
      fVar6 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::MapParameterToChildSpace
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,param_1,fVar5);
      if (fVar8 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<float>::AppendPoint(this_00,local_78);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
        UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(this_00,iVar1 + -1,fVar6);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_84,Parent);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
        return iVar1 + -1;
      }
      if (fVar7 <= fVar5) {
        iVar1 = (**(code **)(this_00->_padding_ + 0xb0))(&this_00->_padding_,fVar6,&local_88);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::InsertPointAtSegmentParam
                          (this_00,(int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2,local_88,local_78,
                           Centripetal);
        return iVar1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<float>::PrependPoint(this_00,local_78);
      UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(this_00,0,fVar6);
      local_84.Max = fVar8;
    }
    local_84.Min = fVar5;
    UE::Geometry::Spline::
    TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
    SetAttributeChannelRange
              ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                *)this,param_1,&local_84,Parent);
  }
  return 0;
}

// AddAttributeValue<UE::Math::TQuat<double>_> @ 147a11ec0

int __thiscall
FNewSpline::AddAttributeValue<UE::Math::TQuat<double>_>
          (FNewSpline *this,FName param_1,TQuat<double> *param_2,float param_3)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TInterval1<float> local_e8;
  float local_e0 [2];
  TTangentBezierControlPoint<UE::Math::TQuat<double>_> local_d8;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
    return -1;
  }
  local_d8.Position.X = param_2->X;
  local_d8.Position.Y = param_2->Y;
  local_d8.Position.Z = param_2->Z;
  local_d8.Position.W = param_2->W;
  local_d8.TangentIn.X = 0.0;
  local_d8.TangentIn.Y = 0.0;
  local_d8.TangentMode = Auto;
  local_d8.TangentIn.Z = 0.0;
  local_d8.TangentIn.W = 0.0;
  local_d8.TangentOut.X = 0.0;
  local_d8.TangentOut.Y = 0.0;
  local_d8.TangentOut.Z = 0.0;
  local_d8.TangentOut.W = 0.0;
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
                    (this_00);
  fVar5 = ToInternalSplineSpace(this,param_3);
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,param_1);
  pcVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  fVar7 = __real_7f7fffff;
  fVar8 = __real_ff7fffff;
  if (pcVar4 != (char *)0x0) {
    pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,&local_e8);
    if (*pcVar4 == '\0') {
      fVar7 = (__real_3f800000 - *(float *)(pcVar4 + 4)) * *pfVar3 +
              *(float *)(pcVar4 + 4) * pfVar3[1];
      fVar8 = (__real_3f800000 - *(float *)(pcVar4 + 8)) * *pfVar3 +
              *(float *)(pcVar4 + 8) * pfVar3[1];
    }
    else {
      fVar7 = __real_7f7fffff;
      fVar8 = __real_ff7fffff;
      if (*pcVar4 == '\x01') {
        fVar7 = *(float *)(pcVar4 + 4);
        fVar8 = *(float *)(pcVar4 + 8);
      }
    }
  }
  if (iVar1 == 0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
              (this_00,&local_d8);
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_,param_1);
    pcVar4 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      pcVar4 = (char *)0x0;
    }
    if (pcVar4 != (char *)0x0) {
      *(float *)(pcVar4 + 4) = fVar5;
      *(float *)(pcVar4 + 8) = fVar5;
      *pcVar4 = '\x01';
    }
  }
  else {
    local_e8.Min = fVar7;
    local_e8.Max = fVar5;
    if (iVar1 == 1) {
      if (fVar7 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
                  (this_00,&local_d8);
        (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents
                  (this_00);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_e8,Parent);
        return 1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::PrependPoint
                (this_00,&local_d8);
      (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_00);
      local_e8.Max = fVar7;
    }
    else {
      fVar6 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::MapParameterToChildSpace
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,param_1,fVar5);
      if (fVar8 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
                  (this_00,&local_d8);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
                          (this_00);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetParameter
                  (this_00,iVar1 + -1,fVar6);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_e8,Parent);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
                          (this_00);
        return iVar1 + -1;
      }
      if (fVar7 <= fVar5) {
        iVar1 = (**(code **)(this_00->_padding_ + 0xb0))(&this_00->_padding_,fVar6,local_e0);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
                InsertPointAtSegmentParam
                          (this_00,(int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2,local_e0[0],&local_d8,
                           Centripetal);
        return iVar1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::PrependPoint
                (this_00,&local_d8);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::SetParameter
                (this_00,0,fVar6);
      local_e8.Max = fVar8;
    }
    local_e8.Min = fVar5;
    UE::Geometry::Spline::
    TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
    SetAttributeChannelRange
              ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                *)this,param_1,&local_e8,Parent);
  }
  return 0;
}

// AddAttributeValue<UE::Math::TVector<double>_> @ 147a12230

int __thiscall
FNewSpline::AddAttributeValue<UE::Math::TVector<double>_>
          (FNewSpline *this,FName param_1,TVector<double> *param_2,float param_3)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_c8;
  TInterval1<float> local_c4;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    return -1;
  }
  local_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    (this_00);
  fVar5 = ToInternalSplineSpace(this,param_3);
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,param_1);
  pcVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  fVar7 = __real_7f7fffff;
  fVar8 = __real_ff7fffff;
  if (pcVar4 != (char *)0x0) {
    pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,&local_c4);
    if (*pcVar4 == '\0') {
      fVar7 = (__real_3f800000 - *(float *)(pcVar4 + 4)) * *pfVar3 +
              *(float *)(pcVar4 + 4) * pfVar3[1];
      fVar8 = (__real_3f800000 - *(float *)(pcVar4 + 8)) * *pfVar3 +
              *(float *)(pcVar4 + 8) * pfVar3[1];
    }
    else {
      fVar7 = __real_7f7fffff;
      fVar8 = __real_ff7fffff;
      if (*pcVar4 == '\x01') {
        fVar7 = *(float *)(pcVar4 + 4);
        fVar8 = *(float *)(pcVar4 + 8);
      }
    }
  }
  if (iVar1 == 0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
              (this_00,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0);
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_,param_1);
    pcVar4 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      pcVar4 = (char *)0x0;
    }
    if (pcVar4 != (char *)0x0) {
      *(float *)(pcVar4 + 4) = fVar5;
      *(float *)(pcVar4 + 8) = fVar5;
      *pcVar4 = '\x01';
    }
  }
  else {
    local_c4.Min = fVar7;
    local_c4.Max = fVar5;
    if (iVar1 == 1) {
      if (fVar7 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
                  (this_00,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0)
        ;
        (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                  (this_00);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_c4,Parent);
        return 1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
                (this_00,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0);
      (**(code **)(this_00->_padding_ + 0xb8))(&this_00->_padding_,0);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                (this_00);
      local_c4.Max = fVar7;
    }
    else {
      fVar6 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::MapParameterToChildSpace
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,param_1,fVar5);
      if (fVar8 < fVar5) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
                  (this_00,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0)
        ;
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                          (this_00);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter
                  (this_00,iVar1 + -1,fVar6);
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        SetAttributeChannelRange
                  ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *)this,param_1,&local_c4,Parent);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                          (this_00);
        return iVar1 + -1;
      }
      if (fVar7 <= fVar5) {
        iVar1 = (**(code **)(this_00->_padding_ + 0xb0))(&this_00->_padding_,fVar6,&local_c8);
        iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                InsertPointAtSegmentParam
                          (this_00,(int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2,local_c8,
                           (TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0,
                           Centripetal);
        return iVar1;
      }
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
                (this_00,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter
                (this_00,0,fVar6);
      local_c4.Max = fVar8;
    }
    local_c4.Min = fVar5;
    UE::Geometry::Spline::
    TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
    SetAttributeChannelRange
              ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                *)this,param_1,&local_c4,Parent);
  }
  return 0;
}

// GetAttributeParameter<float> @ 147a18d10

float __thiscall
FNewSpline::GetAttributeParameter<float>(FNewSpline *this,FName *param_1,int param_2)

{
  int iVar1;
  TTangentBezierSpline<float> *pTVar2;
  float fVar3;
  float local_res20 [2];
  
  pTVar2 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this,*param_1);
  if (pTVar2 != (TTangentBezierSpline<float> *)0x0) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2 * 4 + -1;
    }
    fVar3 = (float)(**(code **)(pTVar2->_padding_ + 0xa8))(&pTVar2->_padding_,iVar1);
    fVar3 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterFromChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1,fVar3);
    iVar1 = (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,fVar3,local_res20);
    return (float)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + local_res20[0];
  }
  return 0.0;
}

// GetAttributeParameter<UE::Math::TVector<double>_> @ 147a18df0

float __thiscall
FNewSpline::GetAttributeParameter<UE::Math::TVector<double>_>
          (FNewSpline *this,FName *param_1,int param_2)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar2;
  float fVar3;
  float local_res20 [2];
  
  pTVar2 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this,*param_1);
  if (pTVar2 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_2 * 4 + -1;
    }
    fVar3 = (float)(**(code **)(pTVar2->_padding_ + 0xa8))(&pTVar2->_padding_,iVar1);
    fVar3 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterFromChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1,fVar3);
    iVar1 = (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,fVar3,local_res20);
    return (float)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + local_res20[0];
  }
  return 0.0;
}

// GetAttributeValue<float> @ 147a18ed0

float __thiscall FNewSpline::GetAttributeValue<float>(FNewSpline *this,FName *param_1,int param_2)

{
  TTangentBezierSpline<float> *this_00;
  float fVar1;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1);
  if (this_00 != (TTangentBezierSpline<float> *)0x0) {
    fVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetValue(this_00,param_2);
    return fVar1;
  }
  return 0.0;
}

// GetAttributeValue<UE::Math::TQuat<double>_> @ 147a18f60

TQuat<double> * __thiscall
FNewSpline::GetAttributeValue<UE::Math::TQuat<double>_>
          (FNewSpline *this,TQuat<double> *__return_storage_ptr__,FName *param_1,int param_2)

{
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1);
  if (this_00 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
              (this_00,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->X = 0.0;
  __return_storage_ptr__->Y = 0.0;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->W = 0.0;
  return __return_storage_ptr__;
}

// GetAttributeValue<UE::Math::TVector<double>_> @ 147a18fc0

TVector<double> * __thiscall
FNewSpline::GetAttributeValue<UE::Math::TVector<double>_>
          (FNewSpline *this,TVector<double> *__return_storage_ptr__,FName *param_1,int param_2)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1);
  if (this_00 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
              (this_00,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// NumAttributeValues<float> @ 147a1c5f0

int __thiscall FNewSpline::NumAttributeValues<float>(FNewSpline *this,FName param_1)

{
  int iVar1;
  TTangentBezierSpline<float> *this_00;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 != (TTangentBezierSpline<float> *)0x0) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
    return iVar1;
  }
  return 0;
}

// NumAttributeValues<UE::Math::TVector<double>_> @ 147a1c660

int __thiscall
FNewSpline::NumAttributeValues<UE::Math::TVector<double>_>(FNewSpline *this,FName param_1)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      (this_00);
    return iVar1;
  }
  return 0;
}

// RemoveAttributeValue<float> @ 147a1c980

void __thiscall FNewSpline::RemoveAttributeValue<float>(FNewSpline *this,FName param_1,int param_2)

{
  int iVar1;
  TTangentBezierSpline<float> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  FName local_res10 [2];
  float local_res20;
  float fStackX_24;
  
  local_res10[0] = param_1;
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 == (TTangentBezierSpline<float> *)0x0) {
    return;
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
  if (1 < iVar1) {
    if (param_2 == 0) {
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this,(FName)&local_res20);
      fVar4 = GetAttributeParameter<float>(this,local_res10,1);
      local_res20 = ToInternalSplineSpace(this,fVar4);
    }
    else {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
      if (param_2 != iVar1 + -1) goto LAB_147a1ca65;
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this,(FName)&local_res20);
      fVar4 = GetAttributeParameter<float>(this,local_res10,param_2 + -1);
      fStackX_24 = ToInternalSplineSpace(this,fVar4);
    }
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_,param_1);
    puVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(fStackX_24,local_res20);
    }
  }
LAB_147a1ca65:
  UE::Geometry::Spline::TTangentBezierSpline<float>::RemovePoint(this_00,param_2);
  return;
}

// RemoveAttributeValue<UE::Math::TVector<double>_> @ 147a1cbb0

void __thiscall
FNewSpline::RemoveAttributeValue<UE::Math::TVector<double>_>
          (FNewSpline *this,FName param_1,int param_2)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  FName local_res10 [2];
  float local_res20;
  float fStackX_24;
  
  local_res10[0] = param_1;
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    return;
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    (this_00);
  if (1 < iVar1) {
    if (param_2 == 0) {
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this,(FName)&local_res20);
      fVar4 = GetAttributeParameter<UE::Math::TVector<double>_>(this,local_res10,1);
      local_res20 = ToInternalSplineSpace(this,fVar4);
    }
    else {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        (this_00);
      if (param_2 != iVar1 + -1) goto LAB_147a1cc95;
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this,(FName)&local_res20);
      fVar4 = GetAttributeParameter<UE::Math::TVector<double>_>(this,local_res10,param_2 + -1);
      fStackX_24 = ToInternalSplineSpace(this,fVar4);
    }
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_,param_1);
    puVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(fStackX_24,local_res20);
    }
  }
LAB_147a1cc95:
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
            (this_00,param_2);
  return;
}

// SetAttributeParameter<float> @ 147a1e450

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNewSpline::SetAttributeParameter<float>(FNewSpline *this,FName *param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TTangentBezierSpline<float> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar11;
  float *pfVar12;
  TInterval1<float> TVar13;
  ForAnyElementType FVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
  *pTVar20;
  longlong lVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_res18 [2];
  float local_174;
  undefined1 local_170;
  undefined1 local_16f [7];
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
  *local_140;
  float local_138;
  float local_134;
  float local_130;
  float fStack_12c;
  TInterval1<float> local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  TTangentBezierSpline<float> *local_110;
  FNewSpline *local_108;
  float *local_100;
  FName local_f8;
  TTangentBezierSpline<float> *local_f0;
  uint *local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [144];
  
  local_res18[0] = param_2;
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1);
  if (this_00 == (TTangentBezierSpline<float> *)0x0) {
    local_res18[0] = 0xffffffff;
  }
  else {
    local_174 = ToInternalSplineSpace(this,param_3);
    local_f8 = *param_1;
    local_100 = &local_174;
    local_e8 = local_res18;
    local_110 = this_00;
    local_108 = this;
    local_f0 = this_00;
    iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
    fVar27 = local_174;
    if (iVar7 == 1) {
      pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                        *)&this->_padding_,*param_1);
      puVar15 = &pTVar11->field_0x8;
      if (pTVar11 ==
          (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
           *)0x0) {
        puVar15 = (undefined1 *)0x0;
      }
      if (puVar15 != (undefined1 *)0x0) {
        *(float *)(puVar15 + 4) = fVar27;
        *(float *)(puVar15 + 8) = fVar27;
        *puVar15 = 1;
      }
    }
    else {
      iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
      if (iVar7 == 2) {
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                             *)this,(FName)&local_138);
        pfVar12 = &local_138;
        if (local_res18[0] != 0) {
          pfVar12 = &local_134;
        }
        *pfVar12 = local_174;
        if (local_138 <= local_134) {
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                            *)&this->_padding_,*param_1);
          puVar15 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            puVar15 = (undefined1 *)0x0;
          }
          if (puVar15 != (undefined1 *)0x0) {
            *(ulonglong *)(puVar15 + 4) = CONCAT44(local_134,local_138);
            *puVar15 = 1;
          }
        }
        else {
          fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,0);
          UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter
                    (this_00,1,fVar27 - __real_3f800000);
          local_128.Min = local_134;
          local_128.Max = local_138;
          UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          SetAttributeChannelRange
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this,*param_1,&local_128,Parent);
          local_res18[0] = (uint)(local_res18[0] == 0);
        }
      }
      else {
        if (local_res18[0] == 0) {
          pcVar22 = (char *)0x0;
          iVar17 = 1;
          local_168.Data = (FScriptContainerElement *)0x0;
          local_160 = 0;
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
          uVar9 = 0;
          if (1 < iVar7 + -1) {
            do {
              pcVar25 = pcVar22;
              if (iVar17 != 0) {
                pcVar25 = (char *)(ulonglong)(iVar17 * 4 - 1);
              }
              fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,pcVar25);
              local_148 = UE::Geometry::Spline::
                          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ::MapParameterFromChildSpace
                                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                                      *)this,*param_1,fVar27);
              if (((local_168.Data <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 <
                   local_168.Data + (longlong)local_160._4_4_ * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = (int)local_160;
              if ((int)local_160 == local_160._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_168,(int *)((longlong)&local_160 + 4));
              }
              local_160 = CONCAT44(local_160._4_4_,iVar7 + 1);
              iVar17 = iVar17 + 1;
              *(float *)(local_168.Data + (longlong)iVar7 * 4) = local_148;
              iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
            } while (iVar17 < iVar7 + -1);
          }
          pTVar20 = (TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_;
          local_140 = pTVar20;
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          fVar30 = __real_ff7fffff;
          fVar27 = __real_3f800000;
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          fVar33 = fVar30;
          if (pcVar25 != (char *)0x0) {
            pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_e0);
            if (*pcVar25 == '\0') {
              fVar33 = (fVar27 - *(float *)(pcVar25 + 8)) * *pfVar12 +
                       *(float *)(pcVar25 + 8) * pfVar12[1];
            }
            else if (*pcVar25 == '\x01') {
              fVar33 = *(float *)(pcVar25 + 8);
            }
          }
          fVar28 = GetAttributeParameter<float>(this,param_1,local_res18[0] + 1);
          fVar28 = ToInternalSplineSpace(this,fVar28);
          bVar4 = fVar28 < local_174;
          uVar8 = 0;
          if (fVar28 < local_174) {
            local_res18[0] =
                 `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_2>::operator()
                           (&local_108);
            uVar18 = 1;
            uVar19 = (int)local_160 - 1U;
            if ((int)(local_res18[0] - 1) < (int)((int)local_160 - 1U)) {
              uVar19 = local_res18[0] - 1;
            }
            uVar24 = uVar9;
            if (0 < (int)uVar19) {
              uVar24 = uVar19;
            }
            lVar26 = (longlong)(int)uVar24;
            if (0 < lVar26) {
              lVar21 = 1;
              while( true ) {
                uVar19 = uVar9;
                if ((int)uVar18 < (int)local_160) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                iVar7 = (int)local_160;
                if (uVar19 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar7 = (int)local_160;
                }
                uVar1 = *(undefined4 *)(local_168.Data + lVar21 * 4);
                uVar19 = uVar9;
                if ((int)(uVar18 - 1) < iVar7) {
                  uVar19 = -uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                uVar18 = uVar18 + 1;
                *(undefined4 *)(local_168.Data + lVar21 * 4 + -4) = uVar1;
                lVar21 = lVar21 + 1;
                if (lVar26 < lVar21) break;
              }
            }
            iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
            fVar31 = local_174;
            if (local_res18[0] == iVar7 - 1U) {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)local_160) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_168.Data + lVar26 * 4) = fVar33;
              pTVar20 = local_140;
            }
            else {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)local_160) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_168.Data + lVar26 * 4) = fVar31;
              pTVar20 = local_140;
            }
          }
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
          if (local_res18[0] == iVar7 - 1U) {
            fVar33 = local_174;
          }
          if (!bVar4) {
            fVar28 = local_174;
          }
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          if (pcVar25 != (char *)0x0) {
            *(float *)(pcVar25 + 4) = fVar28;
            *(float *)(pcVar25 + 8) = fVar33;
            *pcVar25 = '\x01';
          }
          fVar28 = __real_7f7fffff;
          fVar33 = __real_3f000000;
          iVar7 = 1;
          pcVar25 = pcVar22;
          do {
            iVar17 = (int)this_00->_padding_;
            uVar9 = uVar8;
            if (iVar17 != 0) {
              if ((iVar17 == 1) || (iVar17 == 2)) {
                local_170 = 0;
                `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>
                ::operator()(&local_170);
              }
              else if (iVar17 != 3) {
                cVar6 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
                if (cVar6 == '\0') {
                  iVar17 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
                  uVar9 = iVar17 + 1;
                }
                else {
                  uVar9 = (**(code **)(this_00->_padding_ + 0x50))();
                }
                goto LAB_147a1eaae;
              }
              uVar9 = 1;
            }
LAB_147a1eaae:
            if ((int)(uVar9 - 1) <= iVar7) {
              FVar14.Data = local_168.Data;
              if (bVar4) {
                `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_1>::operator()(&local_110)
                ;
                FVar14.Data = local_168.Data;
              }
              goto LAB_147a1f2a2;
            }
            uVar9 = uVar8;
            if (iVar7 + -1 < (int)local_160) {
              uVar9 = (uint)-iVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            fVar31 = *(float *)(local_168.Data + (longlong)pcVar25);
            pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                      ::Find(pTVar20,*param_1);
            pcVar16 = &pTVar11->field_0x8;
            if (pTVar11 ==
                (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
              pcVar16 = pcVar22;
            }
            if (pcVar16 == (char *)0x0) {
              fVar31 = 0.0;
            }
            else {
              pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_d8);
              plVar2 = *(longlong **)(pcVar16 + 0x10);
              if ((plVar2 == (longlong *)0x0) ||
                 ((**(code **)(*plVar2 + 0x30))(plVar2,&local_120), local_11c < local_120)) {
                fVar31 = 0.0;
                pTVar20 = local_140;
              }
              else {
                if (*pcVar16 == '\0') {
                  fVar32 = (fVar27 - *(float *)(pcVar16 + 4)) * *pfVar12 +
                           pfVar12[1] * *(float *)(pcVar16 + 4);
                  fVar29 = (fVar27 - *(float *)(pcVar16 + 8)) * *pfVar12 +
                           pfVar12[1] * *(float *)(pcVar16 + 8);
LAB_147a1ebf9:
                  fVar34 = fVar33;
                  if (fVar32 != fVar29) goto LAB_147a1eb8f;
                }
                else {
                  fVar32 = fVar28;
                  fVar29 = fVar30;
                  if (*pcVar16 == '\x01') {
                    fVar32 = *(float *)(pcVar16 + 4);
                    fVar29 = *(float *)(pcVar16 + 8);
                    goto LAB_147a1ebf9;
                  }
LAB_147a1eb8f:
                  fVar34 = (fVar31 - fVar32) / (fVar29 - fVar32);
                }
                fVar31 = (fVar27 - fVar34) * local_120 + local_11c * fVar34;
                pTVar20 = local_140;
              }
            }
            pcVar16 = pcVar22;
            if (iVar7 != 0) {
              pcVar16 = (char *)(ulonglong)(iVar7 * 4 - 1);
            }
            iVar17 = (**(code **)(this_00->_padding_ + 0xa0))(&this_00->_padding_,pcVar16,fVar31);
            if ((int)(iVar17 + 1 + (iVar17 + 1 >> 0x1f & 3U)) >> 2 != iVar7) {
              UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(this_00);
              if ((5 < (byte)UE::Geometry::Spline::LogSpline._0_1_) &&
                 (UE::Logging::Private::BasicLog<6>
                            (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                              ::__l6::LOG_Static,
                             (FLogCategoryBase *)&UE::Geometry::Spline::LogSpline),
                 5 < (byte)UE::Geometry::Spline::LogSpline._0_1_)) {
                UE::Logging::Private::BasicLog<6>
                          (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                            ::__l23::LOG_Static,(FLogCategoryBase *)&UE::Geometry::Spline::LogSpline
                          );
              }
              UE::Geometry::Spline::TBSpline<float,3>::Dump
                        ((TBSpline<float,3> *)&this_00->_padding_);
            }
            iVar7 = iVar7 + 1;
            pcVar25 = pcVar25 + 4;
          } while( true );
        }
        iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
        if (local_res18[0] == iVar7 - 1U) {
          pcVar22 = (char *)0x0;
          local_158.Data = (FScriptContainerElement *)0x0;
          iVar17 = 1;
          local_150 = 0;
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
          uVar9 = 0;
          if (1 < iVar7 + -1) {
            do {
              pcVar25 = pcVar22;
              if (iVar17 != 0) {
                pcVar25 = (char *)(ulonglong)(iVar17 * 4 - 1);
              }
              fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,pcVar25);
              local_144 = UE::Geometry::Spline::
                          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ::MapParameterFromChildSpace
                                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                                      *)this,*param_1,fVar27);
              if (((local_158.Data <= (FScriptContainerElement *)&local_144) &&
                  ((FScriptContainerElement *)&local_144 <
                   local_158.Data + (longlong)local_150._4_4_ * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = (uint)local_150;
              if ((uint)local_150 == local_150._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_158,(int *)((longlong)&local_150 + 4));
              }
              local_150 = CONCAT44(local_150._4_4_,iVar7 + 1);
              iVar17 = iVar17 + 1;
              *(float *)(local_158.Data + (longlong)iVar7 * 4) = local_144;
              iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
            } while (iVar17 < iVar7 + -1);
          }
          TVar13 = UE::Geometry::Spline::
                   TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                   ::GetMappedChildSpace
                             ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                               *)this,(FName)local_d0);
          fVar27 = *(float *)TVar13;
          fVar30 = GetAttributeParameter<float>(this,param_1,local_res18[0] - 1);
          fVar30 = ToInternalSplineSpace(this,fVar30);
          bVar4 = local_174 < fVar30;
          uVar8 = 0;
          if (bVar4) {
            local_res18[0] =
                 `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_2>::operator()
                           (&local_108);
            uVar19 = (uint)local_150 - 2;
            lVar26 = (longlong)(int)uVar19;
            uVar18 = (uint)local_150 - 1;
            if ((int)(local_res18[0] - 1) < (int)((uint)local_150 - 1)) {
              uVar18 = local_res18[0] - 1;
            }
            uVar24 = uVar9;
            if (0 < (int)uVar18) {
              uVar24 = uVar18;
            }
            lVar21 = (longlong)(int)uVar24;
            uVar18 = (uint)local_150;
            fVar33 = local_174;
            for (; local_174 = fVar33, lVar21 <= lVar26; lVar26 = lVar26 + -1) {
              uVar18 = uVar18 - 1;
              uVar10 = uVar9;
              if ((int)uVar19 < (int)(uint)local_150) {
                uVar10 = ~uVar19 >> 0x1f;
              }
              uVar23 = (uint)local_150;
              if (uVar10 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                uVar23 = (uint)local_150;
              }
              uVar1 = *(undefined4 *)(local_158.Data + lVar26 * 4);
              uVar10 = uVar9;
              if ((int)uVar18 < (int)uVar23) {
                uVar10 = ~uVar18 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              uVar19 = uVar19 - 1;
              *(undefined4 *)(local_158.Data + lVar26 * 4 + 4) = uVar1;
              fVar33 = local_174;
            }
            if (local_res18[0] == 0) {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)(uint)local_150) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_158.Data + lVar21 * 4) = fVar27;
            }
            else {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)(uint)local_150) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_158.Data + lVar21 * 4) = fVar33;
            }
          }
          if (local_res18[0] == 0) {
            fVar27 = local_174;
          }
          if (!bVar4) {
            fVar30 = local_174;
          }
          pTVar20 = (TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_;
          local_140 = pTVar20;
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          if (pcVar25 != (char *)0x0) {
            *(float *)(pcVar25 + 4) = fVar27;
            *(float *)(pcVar25 + 8) = fVar30;
            *pcVar25 = '\x01';
          }
          fVar28 = __real_7f7fffff;
          fVar33 = __real_ff7fffff;
          fVar30 = __real_3f000000;
          fVar27 = __real_3f800000;
          iVar7 = 1;
          pcVar25 = pcVar22;
          do {
            iVar17 = (int)this_00->_padding_;
            uVar9 = uVar8;
            if (iVar17 != 0) {
              if ((iVar17 == 1) || (iVar17 == 2)) {
                local_16f[0] = 0;
                `UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints'::__l4::<lambda_1>
                ::operator()(local_16f);
              }
              else if (iVar17 != 3) {
                cVar6 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
                if (cVar6 == '\0') {
                  iVar17 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
                  uVar9 = iVar17 + 1;
                }
                else {
                  uVar9 = (**(code **)(this_00->_padding_ + 0x50))();
                }
                goto LAB_147a1f0b1;
              }
              uVar9 = 1;
            }
LAB_147a1f0b1:
            if ((int)(uVar9 - 1) <= iVar7) {
              FVar14.Data = local_158.Data;
              if (bVar4) {
                `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_1>::operator()(&local_110)
                ;
                FVar14.Data = local_158.Data;
              }
LAB_147a1f2a2:
              uVar9 = local_res18[0];
              if (FVar14.Data == (FScriptContainerElement *)0x0) {
                return local_res18[0];
              }
              FMemory::Free(FVar14.Data);
              return uVar9;
            }
            uVar9 = uVar8;
            if (iVar7 + -1 < (int)(uint)local_150) {
              uVar9 = (uint)-iVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            fVar31 = *(float *)(local_158.Data + (longlong)pcVar25);
            pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                      ::Find(pTVar20,*param_1);
            pcVar16 = &pTVar11->field_0x8;
            if (pTVar11 ==
                (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
              pcVar16 = pcVar22;
            }
            if (pcVar16 == (char *)0x0) {
LAB_147a1f203:
              fVar31 = 0.0;
            }
            else {
              pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_c8);
              plVar2 = *(longlong **)(pcVar16 + 0x10);
              if ((plVar2 == (longlong *)0x0) ||
                 ((**(code **)(*plVar2 + 0x30))(plVar2,&local_118), local_114 < local_118))
              goto LAB_147a1f203;
              if (*pcVar16 == '\0') {
                fVar32 = (fVar27 - *(float *)(pcVar16 + 4)) * *pfVar12 +
                         pfVar12[1] * *(float *)(pcVar16 + 4);
                fVar29 = (fVar27 - *(float *)(pcVar16 + 8)) * *pfVar12 +
                         pfVar12[1] * *(float *)(pcVar16 + 8);
LAB_147a1f1f8:
                fVar34 = fVar30;
                if (fVar32 != fVar29) goto LAB_147a1f192;
              }
              else {
                fVar32 = fVar28;
                fVar29 = fVar33;
                if (*pcVar16 == '\x01') {
                  fVar32 = *(float *)(pcVar16 + 4);
                  fVar29 = *(float *)(pcVar16 + 8);
                  goto LAB_147a1f1f8;
                }
LAB_147a1f192:
                fVar34 = (fVar31 - fVar32) / (fVar29 - fVar32);
              }
              fVar31 = (fVar27 - fVar34) * local_118 + local_114 * fVar34;
            }
            pcVar16 = pcVar22;
            if (iVar7 != 0) {
              pcVar16 = (char *)(ulonglong)(iVar7 * 4 - 1);
            }
            iVar17 = (**(code **)(this_00->_padding_ + 0xa0))(&this_00->_padding_,pcVar16,fVar31);
            if ((int)(iVar17 + 1 + (iVar17 + 1 >> 0x1f & 3U)) >> 2 != iVar7) {
              UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(this_00);
              if ((5 < (byte)UE::Geometry::Spline::LogSpline._0_1_) &&
                 (UE::Logging::Private::BasicLog<6>
                            (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                              ::__l6::LOG_Static,
                             (FLogCategoryBase *)&UE::Geometry::Spline::LogSpline),
                 5 < (byte)UE::Geometry::Spline::LogSpline._0_1_)) {
                UE::Logging::Private::BasicLog<6>
                          (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter(int,float)___ptr64'
                            ::__l23::LOG_Static,(FLogCategoryBase *)&UE::Geometry::Spline::LogSpline
                          );
              }
              UE::Geometry::Spline::TBSpline<float,3>::Dump
                        ((TBSpline<float,3> *)&this_00->_padding_);
            }
            iVar7 = iVar7 + 1;
            pcVar25 = pcVar25 + 4;
            pTVar20 = local_140;
          } while( true );
        }
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                             *)this,(FName)&local_130);
        local_res18[0] =
             `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_2>::operator()(&local_108);
        if (local_res18[0] == 0) {
          local_130 = local_174;
        }
        else {
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
          if (local_res18[0] == iVar7 - 1U) {
            fStack_12c = local_174;
          }
        }
        pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                          *)&this->_padding_,*param_1);
        puVar15 = &pTVar11->field_0x8;
        if (pTVar11 ==
            (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
             *)0x0) {
          puVar15 = (undefined1 *)0x0;
        }
        if (puVar15 != (undefined1 *)0x0) {
          *(ulonglong *)(puVar15 + 4) = CONCAT44(fStack_12c,local_130);
          *puVar15 = 1;
        }
      }
    }
  }
  return local_res18[0];
}

// SetAttributeParameter<UE::Math::TVector<double>_> @ 147a1f3f0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>
          (FNewSpline *this,FName *param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar11;
  float *pfVar12;
  TInterval1<float> TVar13;
  ForAnyElementType FVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
  *pTVar20;
  longlong lVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  char *pcVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint local_res18 [2];
  float local_174;
  undefined1 local_170;
  undefined1 local_16f [7];
  ForAnyElementType local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
  *local_140;
  float local_138;
  float local_134;
  float local_130;
  float fStack_12c;
  TInterval1<float> local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  TTangentBezierSpline<UE::Math::TVector<double>_> *local_110;
  FNewSpline *local_108;
  float *local_100;
  FName local_f8;
  TTangentBezierSpline<UE::Math::TVector<double>_> *local_f0;
  uint *local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [144];
  
  local_res18[0] = param_2;
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,*param_1);
  if (this_00 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    local_res18[0] = 0xffffffff;
  }
  else {
    local_174 = ToInternalSplineSpace(this,param_3);
    local_f8 = *param_1;
    local_100 = &local_174;
    local_e8 = local_res18;
    local_110 = this_00;
    local_108 = this;
    local_f0 = this_00;
    iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      (this_00);
    fVar27 = local_174;
    if (iVar7 == 1) {
      pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                        *)&this->_padding_,*param_1);
      puVar15 = &pTVar11->field_0x8;
      if (pTVar11 ==
          (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
           *)0x0) {
        puVar15 = (undefined1 *)0x0;
      }
      if (puVar15 != (undefined1 *)0x0) {
        *(float *)(puVar15 + 4) = fVar27;
        *(float *)(puVar15 + 8) = fVar27;
        *puVar15 = 1;
      }
    }
    else {
      iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        (this_00);
      if (iVar7 == 2) {
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                             *)this,(FName)&local_138);
        pfVar12 = &local_138;
        if (local_res18[0] != 0) {
          pfVar12 = &local_134;
        }
        *pfVar12 = local_174;
        if (local_138 <= local_134) {
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                            *)&this->_padding_,*param_1);
          puVar15 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            puVar15 = (undefined1 *)0x0;
          }
          if (puVar15 != (undefined1 *)0x0) {
            *(ulonglong *)(puVar15 + 4) = CONCAT44(local_134,local_138);
            *puVar15 = 1;
          }
        }
        else {
          fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,0);
          UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter
                    (this_00,1,fVar27 - __real_3f800000);
          local_128.Min = local_134;
          local_128.Max = local_138;
          UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          SetAttributeChannelRange
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this,*param_1,&local_128,Parent);
          local_res18[0] = (uint)(local_res18[0] == 0);
        }
      }
      else {
        if (local_res18[0] == 0) {
          pcVar22 = (char *)0x0;
          iVar17 = 1;
          local_168.Data = (FScriptContainerElement *)0x0;
          local_160 = 0;
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                  GetNumPoints(this_00);
          uVar9 = 0;
          if (1 < iVar7 + -1) {
            do {
              pcVar25 = pcVar22;
              if (iVar17 != 0) {
                pcVar25 = (char *)(ulonglong)(iVar17 * 4 - 1);
              }
              fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,pcVar25);
              local_148 = UE::Geometry::Spline::
                          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ::MapParameterFromChildSpace
                                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                                      *)this,*param_1,fVar27);
              if (((local_168.Data <= (FScriptContainerElement *)&local_148) &&
                  ((FScriptContainerElement *)&local_148 <
                   local_168.Data + (longlong)local_160._4_4_ * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = (int)local_160;
              if ((int)local_160 == local_160._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_168,(int *)((longlong)&local_160 + 4));
              }
              local_160 = CONCAT44(local_160._4_4_,iVar7 + 1);
              iVar17 = iVar17 + 1;
              *(float *)(local_168.Data + (longlong)iVar7 * 4) = local_148;
              iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                      GetNumPoints(this_00);
            } while (iVar17 < iVar7 + -1);
          }
          pTVar20 = (TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_;
          local_140 = pTVar20;
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          fVar30 = __real_ff7fffff;
          fVar27 = __real_3f800000;
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          fVar33 = fVar30;
          if (pcVar25 != (char *)0x0) {
            pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_e0);
            if (*pcVar25 == '\0') {
              fVar33 = (fVar27 - *(float *)(pcVar25 + 8)) * *pfVar12 +
                       *(float *)(pcVar25 + 8) * pfVar12[1];
            }
            else if (*pcVar25 == '\x01') {
              fVar33 = *(float *)(pcVar25 + 8);
            }
          }
          fVar28 = GetAttributeParameter<UE::Math::TVector<double>_>
                             (this,param_1,local_res18[0] + 1);
          fVar28 = ToInternalSplineSpace(this,fVar28);
          bVar4 = fVar28 < local_174;
          uVar8 = 0;
          if (fVar28 < local_174) {
            local_res18[0] =
                 `FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_2>::
                 operator()(&local_108);
            uVar18 = 1;
            uVar19 = (int)local_160 - 1U;
            if ((int)(local_res18[0] - 1) < (int)((int)local_160 - 1U)) {
              uVar19 = local_res18[0] - 1;
            }
            uVar24 = uVar9;
            if (0 < (int)uVar19) {
              uVar24 = uVar19;
            }
            lVar26 = (longlong)(int)uVar24;
            if (0 < lVar26) {
              lVar21 = 1;
              while( true ) {
                uVar19 = uVar9;
                if ((int)uVar18 < (int)local_160) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                iVar7 = (int)local_160;
                if (uVar19 == 0) {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    iVar7 = (*pcVar3)();
                    return iVar7;
                  }
                  iVar7 = (int)local_160;
                }
                uVar1 = *(undefined4 *)(local_168.Data + lVar21 * 4);
                uVar19 = uVar9;
                if ((int)(uVar18 - 1) < iVar7) {
                  uVar19 = -uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                uVar18 = uVar18 + 1;
                *(undefined4 *)(local_168.Data + lVar21 * 4 + -4) = uVar1;
                lVar21 = lVar21 + 1;
                if (lVar26 < lVar21) break;
              }
            }
            iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                    GetNumPoints(this_00);
            fVar31 = local_174;
            if (local_res18[0] == iVar7 - 1U) {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)local_160) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_168.Data + lVar26 * 4) = fVar33;
              pTVar20 = local_140;
            }
            else {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)local_160) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_168.Data + lVar26 * 4) = fVar31;
              pTVar20 = local_140;
            }
          }
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                  GetNumPoints(this_00);
          if (local_res18[0] == iVar7 - 1U) {
            fVar33 = local_174;
          }
          if (!bVar4) {
            fVar28 = local_174;
          }
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          if (pcVar25 != (char *)0x0) {
            *(float *)(pcVar25 + 4) = fVar28;
            *(float *)(pcVar25 + 8) = fVar33;
            *pcVar25 = '\x01';
          }
          fVar28 = __real_7f7fffff;
          fVar33 = __real_3f000000;
          iVar7 = 1;
          pcVar25 = pcVar22;
          do {
            iVar17 = (int)this_00->_padding_;
            uVar9 = uVar8;
            if (iVar17 != 0) {
              if ((iVar17 == 1) || (iVar17 == 2)) {
                local_170 = 0;
                `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                GetNumPoints'::__l4::<lambda_1>::operator()(&local_170);
              }
              else if (iVar17 != 3) {
                cVar6 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
                if (cVar6 == '\0') {
                  iVar17 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
                  uVar9 = iVar17 + 1;
                }
                else {
                  uVar9 = (**(code **)(this_00->_padding_ + 0x50))();
                }
                goto LAB_147a1fa4e;
              }
              uVar9 = 1;
            }
LAB_147a1fa4e:
            if ((int)(uVar9 - 1) <= iVar7) {
              FVar14.Data = local_168.Data;
              if (bVar4) {
                `FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_1>::
                operator()(&local_110);
                FVar14.Data = local_168.Data;
              }
              goto LAB_147a20242;
            }
            uVar9 = uVar8;
            if (iVar7 + -1 < (int)local_160) {
              uVar9 = (uint)-iVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            fVar31 = *(float *)(local_168.Data + (longlong)pcVar25);
            pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                      ::Find(pTVar20,*param_1);
            pcVar16 = &pTVar11->field_0x8;
            if (pTVar11 ==
                (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
              pcVar16 = pcVar22;
            }
            if (pcVar16 == (char *)0x0) {
              fVar31 = 0.0;
            }
            else {
              pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_d8);
              plVar2 = *(longlong **)(pcVar16 + 0x10);
              if ((plVar2 == (longlong *)0x0) ||
                 ((**(code **)(*plVar2 + 0x30))(plVar2,&local_120), local_11c < local_120)) {
                fVar31 = 0.0;
                pTVar20 = local_140;
              }
              else {
                if (*pcVar16 == '\0') {
                  fVar32 = (fVar27 - *(float *)(pcVar16 + 4)) * *pfVar12 +
                           pfVar12[1] * *(float *)(pcVar16 + 4);
                  fVar29 = (fVar27 - *(float *)(pcVar16 + 8)) * *pfVar12 +
                           pfVar12[1] * *(float *)(pcVar16 + 8);
LAB_147a1fb99:
                  fVar34 = fVar33;
                  if (fVar32 != fVar29) goto LAB_147a1fb2f;
                }
                else {
                  fVar32 = fVar28;
                  fVar29 = fVar30;
                  if (*pcVar16 == '\x01') {
                    fVar32 = *(float *)(pcVar16 + 4);
                    fVar29 = *(float *)(pcVar16 + 8);
                    goto LAB_147a1fb99;
                  }
LAB_147a1fb2f:
                  fVar34 = (fVar31 - fVar32) / (fVar29 - fVar32);
                }
                fVar31 = (fVar27 - fVar34) * local_120 + local_11c * fVar34;
                pTVar20 = local_140;
              }
            }
            pcVar16 = pcVar22;
            if (iVar7 != 0) {
              pcVar16 = (char *)(ulonglong)(iVar7 * 4 - 1);
            }
            iVar17 = (**(code **)(this_00->_padding_ + 0xa0))(&this_00->_padding_,pcVar16,fVar31);
            if ((int)(iVar17 + 1 + (iVar17 + 1 >> 0x1f & 3U)) >> 2 != iVar7) {
              UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                        (this_00);
              if ((5 < (byte)UE::Geometry::Spline::LogSpline._0_1_) &&
                 (UE::Logging::Private::BasicLog<6>
                            (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                              ::__l6::LOG_Static,
                             (FLogCategoryBase *)&UE::Geometry::Spline::LogSpline),
                 5 < (byte)UE::Geometry::Spline::LogSpline._0_1_)) {
                UE::Logging::Private::BasicLog<6>
                          (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                            ::__l23::LOG_Static,(FLogCategoryBase *)&UE::Geometry::Spline::LogSpline
                          );
              }
              UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump
                        ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_);
            }
            iVar7 = iVar7 + 1;
            pcVar25 = pcVar25 + 4;
          } while( true );
        }
        iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                          (this_00);
        if (local_res18[0] == iVar7 - 1U) {
          pcVar22 = (char *)0x0;
          local_158.Data = (FScriptContainerElement *)0x0;
          iVar17 = 1;
          local_150 = 0;
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                  GetNumPoints(this_00);
          uVar9 = 0;
          if (1 < iVar7 + -1) {
            do {
              pcVar25 = pcVar22;
              if (iVar17 != 0) {
                pcVar25 = (char *)(ulonglong)(iVar17 * 4 - 1);
              }
              fVar27 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_,pcVar25);
              local_144 = UE::Geometry::Spline::
                          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ::MapParameterFromChildSpace
                                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                                      *)this,*param_1,fVar27);
              if (((local_158.Data <= (FScriptContainerElement *)&local_144) &&
                  ((FScriptContainerElement *)&local_144 <
                   local_158.Data + (longlong)local_150._4_4_ * 4)) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar4)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              iVar7 = (uint)local_150;
              if ((uint)local_150 == local_150._4_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_158,(int *)((longlong)&local_150 + 4));
              }
              local_150 = CONCAT44(local_150._4_4_,iVar7 + 1);
              iVar17 = iVar17 + 1;
              *(float *)(local_158.Data + (longlong)iVar7 * 4) = local_144;
              iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                      GetNumPoints(this_00);
            } while (iVar17 < iVar7 + -1);
          }
          TVar13 = UE::Geometry::Spline::
                   TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                   ::GetMappedChildSpace
                             ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                               *)this,(FName)local_d0);
          fVar27 = *(float *)TVar13;
          fVar30 = GetAttributeParameter<UE::Math::TVector<double>_>
                             (this,param_1,local_res18[0] - 1);
          fVar30 = ToInternalSplineSpace(this,fVar30);
          bVar4 = local_174 < fVar30;
          uVar8 = 0;
          if (bVar4) {
            local_res18[0] =
                 `FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_2>::
                 operator()(&local_108);
            uVar19 = (uint)local_150 - 2;
            lVar26 = (longlong)(int)uVar19;
            uVar18 = (uint)local_150 - 1;
            if ((int)(local_res18[0] - 1) < (int)((uint)local_150 - 1)) {
              uVar18 = local_res18[0] - 1;
            }
            uVar24 = uVar9;
            if (0 < (int)uVar18) {
              uVar24 = uVar18;
            }
            lVar21 = (longlong)(int)uVar24;
            uVar18 = (uint)local_150;
            fVar33 = local_174;
            for (; local_174 = fVar33, lVar21 <= lVar26; lVar26 = lVar26 + -1) {
              uVar18 = uVar18 - 1;
              uVar10 = uVar9;
              if ((int)uVar19 < (int)(uint)local_150) {
                uVar10 = ~uVar19 >> 0x1f;
              }
              uVar23 = (uint)local_150;
              if (uVar10 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  iVar7 = (*pcVar3)();
                  return iVar7;
                }
                uVar23 = (uint)local_150;
              }
              uVar1 = *(undefined4 *)(local_158.Data + lVar26 * 4);
              uVar10 = uVar9;
              if ((int)uVar18 < (int)uVar23) {
                uVar10 = ~uVar18 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              uVar19 = uVar19 - 1;
              *(undefined4 *)(local_158.Data + lVar26 * 4 + 4) = uVar1;
              fVar33 = local_174;
            }
            if (local_res18[0] == 0) {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)(uint)local_150) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_158.Data + lVar21 * 4) = fVar27;
            }
            else {
              uVar9 = uVar8;
              if ((int)uVar24 < (int)(uint)local_150) {
                uVar9 = ~uVar24 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                iVar7 = (*pcVar3)();
                return iVar7;
              }
              *(float *)(local_158.Data + lVar21 * 4) = fVar33;
            }
          }
          if (local_res18[0] == 0) {
            fVar27 = local_174;
          }
          if (!bVar4) {
            fVar30 = local_174;
          }
          pTVar20 = (TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->_padding_;
          local_140 = pTVar20;
          pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                    ::Find(pTVar20,*param_1);
          pcVar25 = &pTVar11->field_0x8;
          if (pTVar11 ==
              (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
               *)0x0) {
            pcVar25 = pcVar22;
          }
          if (pcVar25 != (char *)0x0) {
            *(float *)(pcVar25 + 4) = fVar27;
            *(float *)(pcVar25 + 8) = fVar30;
            *pcVar25 = '\x01';
          }
          fVar28 = __real_7f7fffff;
          fVar33 = __real_ff7fffff;
          fVar30 = __real_3f000000;
          fVar27 = __real_3f800000;
          iVar7 = 1;
          pcVar25 = pcVar22;
          do {
            iVar17 = (int)this_00->_padding_;
            uVar9 = uVar8;
            if (iVar17 != 0) {
              if ((iVar17 == 1) || (iVar17 == 2)) {
                local_16f[0] = 0;
                `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                GetNumPoints'::__l4::<lambda_1>::operator()(local_16f);
              }
              else if (iVar17 != 3) {
                cVar6 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
                if (cVar6 == '\0') {
                  iVar17 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
                  uVar9 = iVar17 + 1;
                }
                else {
                  uVar9 = (**(code **)(this_00->_padding_ + 0x50))();
                }
                goto LAB_147a20051;
              }
              uVar9 = 1;
            }
LAB_147a20051:
            if ((int)(uVar9 - 1) <= iVar7) {
              FVar14.Data = local_158.Data;
              if (bVar4) {
                `FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_1>::
                operator()(&local_110);
                FVar14.Data = local_158.Data;
              }
LAB_147a20242:
              uVar9 = local_res18[0];
              if (FVar14.Data == (FScriptContainerElement *)0x0) {
                return local_res18[0];
              }
              FMemory::Free(FVar14.Data);
              return uVar9;
            }
            uVar9 = uVar8;
            if (iVar7 + -1 < (int)(uint)local_150) {
              uVar9 = (uint)-iVar7 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              iVar7 = (*pcVar3)();
              return iVar7;
            }
            fVar31 = *(float *)(local_158.Data + (longlong)pcVar25);
            pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                      ::Find(pTVar20,*param_1);
            pcVar16 = &pTVar11->field_0x8;
            if (pTVar11 ==
                (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
              pcVar16 = pcVar22;
            }
            if (pcVar16 == (char *)0x0) {
LAB_147a201a3:
              fVar31 = 0.0;
            }
            else {
              pfVar12 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_c8);
              plVar2 = *(longlong **)(pcVar16 + 0x10);
              if ((plVar2 == (longlong *)0x0) ||
                 ((**(code **)(*plVar2 + 0x30))(plVar2,&local_118), local_114 < local_118))
              goto LAB_147a201a3;
              if (*pcVar16 == '\0') {
                fVar32 = (fVar27 - *(float *)(pcVar16 + 4)) * *pfVar12 +
                         pfVar12[1] * *(float *)(pcVar16 + 4);
                fVar29 = (fVar27 - *(float *)(pcVar16 + 8)) * *pfVar12 +
                         pfVar12[1] * *(float *)(pcVar16 + 8);
LAB_147a20198:
                fVar34 = fVar30;
                if (fVar32 != fVar29) goto LAB_147a20132;
              }
              else {
                fVar32 = fVar28;
                fVar29 = fVar33;
                if (*pcVar16 == '\x01') {
                  fVar32 = *(float *)(pcVar16 + 4);
                  fVar29 = *(float *)(pcVar16 + 8);
                  goto LAB_147a20198;
                }
LAB_147a20132:
                fVar34 = (fVar31 - fVar32) / (fVar29 - fVar32);
              }
              fVar31 = (fVar27 - fVar34) * local_118 + local_114 * fVar34;
            }
            pcVar16 = pcVar22;
            if (iVar7 != 0) {
              pcVar16 = (char *)(ulonglong)(iVar7 * 4 - 1);
            }
            iVar17 = (**(code **)(this_00->_padding_ + 0xa0))(&this_00->_padding_,pcVar16,fVar31);
            if ((int)(iVar17 + 1 + (iVar17 + 1 >> 0x1f & 3U)) >> 2 != iVar7) {
              UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                        (this_00);
              if ((5 < (byte)UE::Geometry::Spline::LogSpline._0_1_) &&
                 (UE::Logging::Private::BasicLog<6>
                            (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                              ::__l6::LOG_Static,
                             (FLogCategoryBase *)&UE::Geometry::Spline::LogSpline),
                 5 < (byte)UE::Geometry::Spline::LogSpline._0_1_)) {
                UE::Logging::Private::BasicLog<6>
                          (&`public:_int___cdecl_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter(int,float)___ptr64'
                            ::__l23::LOG_Static,(FLogCategoryBase *)&UE::Geometry::Spline::LogSpline
                          );
              }
              UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::Dump
                        ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_);
            }
            iVar7 = iVar7 + 1;
            pcVar25 = pcVar25 + 4;
            pTVar20 = local_140;
          } while( true );
        }
        UE::Geometry::Spline::
        TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
        GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                             *)this,(FName)&local_130);
        local_res18[0] =
             `FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_2>::
             operator()(&local_108);
        if (local_res18[0] == 0) {
          local_130 = local_174;
        }
        else {
          iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                  GetNumPoints(this_00);
          if (local_res18[0] == iVar7 - 1U) {
            fStack_12c = local_174;
          }
        }
        pTVar11 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                          *)&this->_padding_,*param_1);
        puVar15 = &pTVar11->field_0x8;
        if (pTVar11 ==
            (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
             *)0x0) {
          puVar15 = (undefined1 *)0x0;
        }
        if (puVar15 != (undefined1 *)0x0) {
          *(ulonglong *)(puVar15 + 4) = CONCAT44(fStack_12c,local_130);
          *puVar15 = 1;
        }
      }
    }
  }
  return local_res18[0];
}

// SetAttributeValue<float> @ 147a20390

void __thiscall
FNewSpline::SetAttributeValue<float>(FNewSpline *this,FName param_1,float *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TTangentBezierSpline<float> *this_00;
  float fVar5;
  TTangentBezierControlPoint<float> local_48;
  uint local_2c;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 != (TTangentBezierSpline<float> *)0x0) {
    iVar3 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_00);
    if ((param_3 < 0) || (iVar3 <= param_3)) {
      local_48.TangentIn = 0.0;
      local_48.TangentOut = 0.0;
      local_48._12_4_ = local_48._12_4_ & 0xffffff00;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<float>::GetValue(this_00,param_3);
      fVar5 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentIn(this_00,param_3);
      local_48.TangentOut =
           UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentOut(this_00,param_3);
      if (param_3 < (this_00->TangentModes).ArrayNum) {
        uVar4 = 0;
        if (param_3 < (this_00->TangentModes).ArrayNum) {
          uVar4 = (uint)~param_3 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_2c = CONCAT31(local_2c._1_3_,(this_00->TangentModes).AllocatorInstance.Data[param_3]);
      }
      else {
        local_2c = local_2c & 0xffffff00;
      }
      local_48.TangentIn = fVar5;
      local_48._12_4_ = local_2c;
    }
    local_48.Position = *param_2;
    UE::Geometry::Spline::TTangentBezierSpline<float>::ModifyPoint(this_00,param_3,&local_48);
  }
  return;
}

// SetAttributeValue<UE::Math::TQuat<double>_> @ 147a20630

void __thiscall
FNewSpline::SetAttributeValue<UE::Math::TQuat<double>_>
          (FNewSpline *this,FName param_1,TQuat<double> *param_2,int param_3)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TQuat<double> *pTVar9;
  FScriptContainerElement local_108;
  undefined7 uStack_107;
  TTangentBezierControlPoint<UE::Math::TQuat<double>_> local_f8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TQuat<double> local_68;
  TQuat<double> local_48;
  TQuat<double> local_28;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
    iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
                      (this_00);
    if ((param_3 < 0) || (iVar7 <= param_3)) {
      local_f8._96_8_ = local_f8._96_8_ & 0xffffffffffffff00;
      local_f8.TangentIn.X = 0.0;
      local_f8.TangentIn.Y = 0.0;
      local_f8.TangentIn.Z = 0.0;
      local_f8.TangentIn.W = 0.0;
      local_f8.TangentOut.X = 0.0;
      local_f8.TangentOut.Y = 0.0;
      local_f8.TangentOut.Z = 0.0;
      local_f8.TangentOut.W = 0.0;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
                (this_00,&local_68,param_3);
      pTVar9 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetTangentIn
                         (this_00,&local_48,param_3);
      dVar2 = pTVar9->X;
      dVar3 = pTVar9->Y;
      dVar4 = pTVar9->Z;
      dVar5 = pTVar9->W;
      pTVar9 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetTangentOut
                         (this_00,&local_28,param_3);
      local_88 = *(undefined4 *)&pTVar9->X;
      uStack_84 = *(undefined4 *)((longlong)&pTVar9->X + 4);
      uStack_80 = *(undefined4 *)&pTVar9->Y;
      uStack_7c = *(undefined4 *)((longlong)&pTVar9->Y + 4);
      local_78 = *(undefined4 *)&pTVar9->Z;
      uStack_74 = *(undefined4 *)((longlong)&pTVar9->Z + 4);
      uStack_70 = *(undefined4 *)&pTVar9->W;
      uStack_6c = *(undefined4 *)((longlong)&pTVar9->W + 4);
      if (param_3 < (this_00->TangentModes).ArrayNum) {
        uVar8 = 0;
        if (param_3 < (this_00->TangentModes).ArrayNum) {
          uVar8 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_108 = (this_00->TangentModes).AllocatorInstance.Data[param_3];
      }
      else {
        local_108 = (FScriptContainerElement)0x0;
      }
      local_f8._96_8_ = CONCAT71(uStack_107,local_108);
      local_f8.TangentOut.X = (double)CONCAT44(uStack_84,local_88);
      local_f8.TangentOut.Y = (double)CONCAT44(uStack_7c,uStack_80);
      local_f8.TangentOut.Z = (double)CONCAT44(uStack_74,local_78);
      local_f8.TangentOut.W = (double)CONCAT44(uStack_6c,uStack_70);
      local_f8.TangentIn.X = dVar2;
      local_f8.TangentIn.Y = dVar3;
      local_f8.TangentIn.Z = dVar4;
      local_f8.TangentIn.W = dVar5;
    }
    local_f8.Position.X = param_2->X;
    local_f8.Position.Y = param_2->Y;
    local_f8.Position.Z = param_2->Z;
    local_f8.Position.W = param_2->W;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::ModifyPoint
              (this_00,param_3,&local_f8);
  }
  return;
}

// SetAttributeValue<UE::Math::TVector<double>_> @ 147a20840

void __thiscall
FNewSpline::SetAttributeValue<UE::Math::TVector<double>_>
          (FNewSpline *this,FName param_1,TVector<double> *param_2,int param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TVector<double> *pTVar8;
  FScriptContainerElement FStack_c0;
  undefined7 uStack_bf;
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TVector<double> local_58;
  TVector<double> local_40;
  TVector<double> local_28;
  
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,param_1);
  if (this_00 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    iVar6 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      (this_00);
    if ((param_3 < 0) || (iVar6 <= param_3)) {
      dStack_90 = 0.0;
      dStack_a0 = 0.0;
      local_98 = 0.0;
      local_78 = 0.0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                (this_00,&local_58,param_3);
      pTVar8 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                         (this_00,&local_40,param_3);
      dVar3 = (pTVar8->field0_0x0)._s_0.X;
      dVar4 = (pTVar8->field0_0x0)._s_0.Y;
      dVar1 = (pTVar8->field0_0x0)._s_0.Z;
      pTVar8 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                         (this_00,&local_28,param_3);
      local_68 = *(undefined4 *)&pTVar8->field0_0x0;
      uStack_64 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 4);
      uStack_60 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 8);
      uStack_5c = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0xc);
      local_78 = (pTVar8->field0_0x0)._s_0.Z;
      if (param_3 < (this_00->TangentModes).ArrayNum) {
        uVar7 = 0;
        if (param_3 < (this_00->TangentModes).ArrayNum) {
          uVar7 = (uint)~param_3 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FStack_c0 = (this_00->TangentModes).AllocatorInstance.Data[param_3];
      }
      else {
        FStack_c0 = (FScriptContainerElement)0x0;
      }
      uStack_70 = CONCAT71(uStack_bf,FStack_c0);
      local_88 = CONCAT44(uStack_64,local_68);
      uStack_80 = CONCAT44(uStack_5c,uStack_60);
      dStack_a0 = dVar3;
      local_98 = dVar4;
      dStack_90 = dVar1;
    }
    local_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_b8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::ModifyPoint
              (this_00,param_3,
               (TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_b8._s_0);
  }
  return;
}

// FNewSpline @ 147a25110

FNewSpline * __thiscall FNewSpline::FNewSpline(FNewSpline *this,FSplineCurves *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  FNewSpline *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  local_38;
  ulonglong uVar15;
  
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this);
  uVar17 = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  *(undefined8 *)&this->ReparamTable = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
  ;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  (this->ReparamTableNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->ReparamTableNextVersion).Value = 1;
  (this->ReparamTableRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  (this->PositionCurve).field_0x10 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  (this->RotationCurve).field_0x10 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  (this->ScaleCurve).field_0x10 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  (this->LegacyCurvesNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->LegacyCurvesNextVersion).Value = 1;
  this->ReparamStepsPerSegment = 10;
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&RotationAttrName);
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&ScaleAttrName);
  iVar11 = *(int *)&(param_1->Position).field_0x8;
  local_38.ArrayNum = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayMax = 0;
  uVar13 = uVar17;
  uVar15 = uVar17;
  uVar18 = uVar17;
  if (0 < iVar11) {
    while( true ) {
      uVar14 = (uint)uVar15;
      uVar10 = 0;
      if ((int)uVar14 < iVar11) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      uVar9 = (uint)uVar13;
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar9 = local_38.ArrayNum, bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar12 = (FNewSpline *)(*pcVar4)();
        return pFVar12;
      }
      lVar2 = *(longlong *)&param_1->Position;
      if (uVar9 == local_38.ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&local_38.AllocatorInstance,&local_38.ArrayMax);
      }
      local_38.ArrayNum = uVar9 + 1;
      pFVar16 = local_38.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50;
      DefaultConstructItems<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,int>
                (pFVar16,1);
      puVar1 = (undefined8 *)(uVar18 + 8 + lVar2);
      uVar5 = puVar1[1];
      *(undefined8 *)pFVar16 = *puVar1;
      *(undefined8 *)(pFVar16 + 8) = uVar5;
      *(undefined8 *)(pFVar16 + 0x10) = *(undefined8 *)(uVar18 + 0x18 + lVar2);
      puVar1 = (undefined8 *)(uVar18 + 0x20 + lVar2);
      uVar5 = puVar1[1];
      *(undefined8 *)(pFVar16 + 0x18) = *puVar1;
      *(undefined8 *)(pFVar16 + 0x20) = uVar5;
      *(undefined8 *)(pFVar16 + 0x28) = *(undefined8 *)(uVar18 + 0x30 + lVar2);
      puVar1 = (undefined8 *)(uVar18 + 0x38 + lVar2);
      uVar5 = puVar1[1];
      *(undefined8 *)(pFVar16 + 0x30) = *puVar1;
      *(undefined8 *)(pFVar16 + 0x38) = uVar5;
      *(undefined8 *)(pFVar16 + 0x40) = *(undefined8 *)(uVar18 + 0x48 + lVar2);
      switch(*(undefined1 *)(uVar18 + 0x50 + lVar2)) {
      case 0:
        FVar7 = (FScriptContainerElement)0x4;
        break;
      case 1:
        FVar7 = (FScriptContainerElement)0x0;
        break;
      case 2:
        FVar7 = (FScriptContainerElement)0x5;
        break;
      case 3:
        FVar7 = (FScriptContainerElement)0x2;
        break;
      case 4:
        FVar7 = (FScriptContainerElement)0x3;
        break;
      case 5:
        FVar7 = (FScriptContainerElement)0x1;
        break;
      default:
        FVar7 = (FScriptContainerElement)0x6;
      }
      pFVar16[0x48] = FVar7;
      iVar11 = *(int *)&(param_1->Position).field_0x8;
      if (iVar11 <= (int)(uVar14 + 1)) break;
      uVar13 = (ulonglong)(uint)local_38.ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar18 = uVar18 + 0x58;
    }
  }
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_38);
  ResetRotation(this);
  ResetScale(this);
  do {
    iVar11 = (int)this->_padding_;
    uVar10 = 0;
    if (iVar11 != 0) {
      if ((iVar11 == 1) || (iVar11 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar11 != 3) {
        cVar8 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar8 == '\0') {
          iVar11 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          uVar10 = iVar11 + 1;
        }
        else {
          uVar10 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a253e3;
      }
      uVar10 = 1;
    }
LAB_147a253e3:
    uVar14 = (uint)uVar17;
    if ((int)uVar10 <= (int)uVar14) {
      ValidateRotScale(this);
      pcVar4 = *(code **)(this->_padding_ + 0x38);
      if (pcVar4 == SetClosedLoop) {
        SetClosedLoop(this,(bool)(param_1->Position).field_0x10);
      }
      else {
        (*pcVar4)();
      }
      *(undefined1 *)&this->_padding_ = 0;
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
      this->ReparamStepsPerSegment = 10;
      UpdateSpline(this);
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return this;
    }
    uVar10 = 0;
    if ((int)uVar14 < *(int *)&(param_1->Rotation).field_0x8) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FNewSpline *)(*pcVar4)();
      return pFVar12;
    }
    lVar2 = *(longlong *)&param_1->Rotation;
    uVar10 = 0;
    if ((int)uVar14 < *(int *)&(param_1->Scale).field_0x8) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FNewSpline *)(*pcVar4)();
      return pFVar12;
    }
    lVar3 = *(longlong *)&param_1->Scale;
    SetAttributeValue<UE::Math::TQuat<double>_>
              (this,RotationAttrName,(TQuat<double> *)(lVar2 + 0x10 + (longlong)(int)uVar14 * 0x80),
               uVar14);
    SetAttributeValue<UE::Math::TVector<double>_>
              (this,ScaleAttrName,(TVector<double> *)((longlong)(int)uVar14 * 0x58 + lVar3 + 8),
               uVar14);
    uVar17 = (ulonglong)(uVar14 + 1);
  } while( true );
}

// FNewSpline @ 147a25580

FNewSpline * __thiscall FNewSpline::FNewSpline(FNewSpline *this,FNewSpline *param_1)

{
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this);
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  (this->ReparamTableNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
  ;
  *(undefined8 *)&(this->ReparamTableNextVersion).Value = 1;
  (this->ReparamTableRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  (this->PositionCurve).field_0x10 = 0;
  (this->RotationCurve).field_0x10 = 0;
  (this->ScaleCurve).field_0x10 = 0;
  (this->LegacyCurvesNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->LegacyCurvesNextVersion).Value = 1;
  this->ReparamStepsPerSegment = 10;
  operator=(this,param_1);
  ValidateRotScale(this);
  return this;
}

// FNewSpline @ 147a25680

FNewSpline * __thiscall FNewSpline::FNewSpline(FNewSpline *this,FLegacySpline *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FScriptContainerElement FVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  FNewSpline *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 local_res8 [8];
  TArray<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
  local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this);
  uVar13 = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  *(undefined8 *)&this->ReparamTable = 0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
  ;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  (this->ReparamTableNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->ReparamTableNextVersion).Value = 1;
  (this->ReparamTableRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  (this->PositionCurve).field_0x10 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  (this->RotationCurve).field_0x10 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  (this->ScaleCurve).field_0x10 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  (this->LegacyCurvesNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->LegacyCurvesNextVersion).Value = 1;
  this->ReparamStepsPerSegment = 10;
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&RotationAttrName);
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&ScaleAttrName);
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar16 = uVar13;
  uVar17 = uVar13;
  uVar12 = uVar13;
  uVar15 = uVar13;
  if (0 < *(int *)&(param_1->PositionCurve).field_0x8) {
    do {
      iVar9 = (int)uVar16;
      if (iVar9 == (int)uVar17) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x850,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      local_f8.ArrayNum = iVar9 + 1;
      pFVar14 = local_f8.AllocatorInstance.Data + (longlong)iVar9 * 0x50;
      DefaultConstructItems<UE::Geometry::Spline::TTangentBezierControlPoint<UE::Math::TVector<double>_>,int>
                (pFVar14,1);
      iVar9 = (int)uVar12;
      if ((iVar9 < 0) || (*(int *)&(param_1->PositionCurve).field_0x8 <= iVar9)) {
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        local_d8 = 0;
        uVar22 = 0;
        uVar23 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
      }
      else {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FNewSpline *)(*pcVar4)();
          return pFVar11;
        }
        puVar1 = (undefined4 *)(uVar15 + 8 + *(longlong *)&param_1->PositionCurve);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        uVar3 = *(undefined8 *)(uVar15 + 0x18 + *(longlong *)&param_1->PositionCurve);
        uVar22 = (undefined4)uVar3;
        uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      *(undefined4 *)pFVar14 = uVar18;
      *(undefined4 *)(pFVar14 + 4) = uVar19;
      *(undefined4 *)(pFVar14 + 8) = uVar20;
      *(undefined4 *)(pFVar14 + 0xc) = uVar21;
      *(ulonglong *)(pFVar14 + 0x10) = CONCAT44(uVar23,uVar22);
      if ((iVar9 < 0) || (*(int *)&(param_1->PositionCurve).field_0x8 <= iVar9)) {
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        local_c0 = 0;
        uVar22 = 0;
        uVar23 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
      }
      else {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FNewSpline *)(*pcVar4)();
          return pFVar11;
        }
        puVar1 = (undefined4 *)(uVar15 + 0x20 + *(longlong *)&param_1->PositionCurve);
        uVar18 = *puVar1;
        uVar19 = puVar1[1];
        uVar20 = puVar1[2];
        uVar21 = puVar1[3];
        uVar3 = *(undefined8 *)(uVar15 + 0x30 + *(longlong *)&param_1->PositionCurve);
        uVar22 = (undefined4)uVar3;
        uVar23 = (undefined4)((ulonglong)uVar3 >> 0x20);
      }
      *(undefined4 *)(pFVar14 + 0x18) = uVar18;
      *(undefined4 *)(pFVar14 + 0x1c) = uVar19;
      *(undefined4 *)(pFVar14 + 0x20) = uVar20;
      *(undefined4 *)(pFVar14 + 0x24) = uVar21;
      *(ulonglong *)(pFVar14 + 0x28) = CONCAT44(uVar23,uVar22);
      if ((iVar9 < 0) || (*(int *)&(param_1->PositionCurve).field_0x8 <= iVar9)) {
        local_a8 = 0;
        *(undefined8 *)(pFVar14 + 0x30) = 0;
        *(undefined8 *)(pFVar14 + 0x38) = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        *(undefined8 *)(pFVar14 + 0x40) = 0;
        if (-1 < iVar9) goto LAB_147a2597f;
switchD_147a259de_caseD_6:
        FVar7 = (FScriptContainerElement)0x6;
      }
      else {
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FNewSpline *)(*pcVar4)();
          return pFVar11;
        }
        puVar2 = (undefined8 *)(uVar15 + 0x38 + *(longlong *)&param_1->PositionCurve);
        uVar5 = puVar2[1];
        uVar3 = *(undefined8 *)(uVar15 + 0x48 + *(longlong *)&param_1->PositionCurve);
        *(undefined8 *)(pFVar14 + 0x30) = *puVar2;
        *(undefined8 *)(pFVar14 + 0x38) = uVar5;
        *(undefined8 *)(pFVar14 + 0x40) = uVar3;
LAB_147a2597f:
        if (*(int *)&(param_1->PositionCurve).field_0x8 <= iVar9) goto switchD_147a259de_caseD_6;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FNewSpline *)(*pcVar4)();
          return pFVar11;
        }
        switch(*(undefined1 *)(uVar15 + 0x50 + *(longlong *)&param_1->PositionCurve)) {
        case 0:
          FVar7 = (FScriptContainerElement)0x4;
          break;
        case 1:
          FVar7 = (FScriptContainerElement)0x0;
          break;
        case 2:
          FVar7 = (FScriptContainerElement)0x5;
          break;
        case 3:
          FVar7 = (FScriptContainerElement)0x2;
          break;
        case 4:
          FVar7 = (FScriptContainerElement)0x3;
          break;
        case 5:
          FVar7 = (FScriptContainerElement)0x1;
          break;
        default:
          goto switchD_147a259de_caseD_6;
        }
      }
      pFVar14[0x48] = FVar7;
      if (*(int *)&(param_1->PositionCurve).field_0x8 <= (int)(iVar9 + 1U)) break;
      uVar16 = (ulonglong)(uint)local_f8.ArrayNum;
      uVar17 = (ulonglong)(uint)local_f8.ArrayMax;
      uVar12 = (ulonglong)(iVar9 + 1U);
      uVar15 = uVar15 + 0x58;
    } while( true );
  }
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetControlPoints
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_f8);
  ResetRotation(this);
  ResetScale(this);
  uVar16 = uVar13;
  uVar17 = uVar13;
  do {
    iVar9 = (int)this->_padding_;
    iVar10 = 0;
    if (iVar9 != 0) {
      if ((iVar9 == 1) || (iVar9 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar9 != 3) {
        cVar8 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar8 == '\0') {
          iVar9 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          iVar10 = iVar9 + 1;
        }
        else {
          iVar10 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a25a96;
      }
      iVar10 = 1;
    }
LAB_147a25a96:
    iVar9 = (int)uVar13;
    if (iVar10 <= iVar9) {
      ValidateRotScale(this);
      pcVar4 = *(code **)(this->_padding_ + 0x38);
      if (pcVar4 == SetClosedLoop) {
        SetClosedLoop(this,(bool)(param_1->PositionCurve).field_0x10);
      }
      else {
        (*pcVar4)();
      }
      *(undefined1 *)&this->_padding_ = 0;
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
      this->ReparamStepsPerSegment = 10;
      UpdateSpline(this);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return this;
    }
    if ((iVar9 < 0) || (*(int *)&(param_1->RotationCurve).field_0x8 <= iVar9)) {
      local_68.X._0_4_ = 0;
      local_68.X._4_4_ = 0;
      local_68.Y._0_4_ = 0;
      local_68.Y._4_4_ = 0;
      local_68.Z._0_4_ = 0;
      local_68.Z._4_4_ = 0;
      local_68.W._0_4_ = 0;
      local_68.W._4_4_ = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
    }
    else {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FNewSpline *)(*pcVar4)();
        return pFVar11;
      }
      puVar1 = (undefined4 *)(*(longlong *)&param_1->RotationCurve + 0x10 + uVar17);
      local_68.X._0_4_ = *puVar1;
      local_68.X._4_4_ = puVar1[1];
      local_68.Y._0_4_ = puVar1[2];
      local_68.Y._4_4_ = puVar1[3];
      puVar1 = (undefined4 *)(*(longlong *)&param_1->RotationCurve + 0x20 + uVar17);
      local_68.Z._0_4_ = *puVar1;
      local_68.Z._4_4_ = puVar1[1];
      local_68.W._0_4_ = puVar1[2];
      local_68.W._4_4_ = puVar1[3];
    }
    SetAttributeValue<UE::Math::TQuat<double>_>(this,RotationAttrName,&local_68,iVar9);
    if ((iVar9 < 0) || (*(int *)&(param_1->ScaleCurve).field_0x8 <= iVar9)) {
      local_88._0_4_ = 0;
      local_88._4_4_ = 0;
      local_88._8_4_ = 0;
      local_88._12_4_ = 0;
      local_90 = 0;
      uVar18 = 0;
      uVar19 = 0;
      local_a0 = 0;
      uStack_98 = 0;
    }
    else {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FNewSpline *)(*pcVar4)();
        return pFVar11;
      }
      puVar1 = (undefined4 *)(uVar16 + 8 + *(longlong *)&param_1->ScaleCurve);
      local_88._0_4_ = *puVar1;
      local_88._4_4_ = puVar1[1];
      local_88._8_4_ = puVar1[2];
      local_88._12_4_ = puVar1[3];
      uVar3 = *(undefined8 *)(uVar16 + 0x18 + *(longlong *)&param_1->ScaleCurve);
      uVar18 = (undefined4)uVar3;
      uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    local_88._s_0.Z = (double)CONCAT44(uVar19,uVar18);
    SetAttributeValue<UE::Math::TVector<double>_>
              (this,ScaleAttrName,(TVector<double> *)&local_88._s_0,iVar9);
    uVar13 = (ulonglong)(iVar9 + 1);
    uVar17 = uVar17 + 0x80;
    uVar16 = uVar16 + 0x58;
  } while( true );
}

// FNewSpline @ 147a25c70

FNewSpline * __thiscall FNewSpline::FNewSpline(FNewSpline *this)

{
  TTangentBezierSpline<float> local_a8;
  
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this);
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  (this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  (this->ReparamTableNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
  ;
  *(undefined8 *)&(this->ReparamTableNextVersion).Value = 1;
  (this->ReparamTableRWLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  (this->PositionCurve).field_0x10 = 0;
  (this->RotationCurve).field_0x10 = 0;
  (this->ScaleCurve).field_0x10 = 0;
  (this->LegacyCurvesNextVersion).Mutex.State = (atomic<unsigned_char>)0x0;
  *(undefined8 *)&(this->LegacyCurvesNextVersion).Value = 1;
  this->ReparamStepsPerSegment = 10;
  UE::Geometry::Spline::TTangentBezierSpline<float>::TTangentBezierSpline<float>(&local_a8);
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&RotationAttrName);
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this,&ScaleAttrName);
  ValidateRotScale(this);
  if (local_a8.TangentModes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.TangentModes.AllocatorInstance.Data);
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  if ((void *)local_a8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._padding_);
  }
  return this;
}

// ~FNewSpline @ 147a299a0

void __thiscall FNewSpline::~FNewSpline(FNewSpline *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  if (*(void **)&this->ScaleCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->ScaleCurve);
  }
  if (*(void **)&this->RotationCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->RotationCurve);
  }
  if (*(void **)&this->PositionCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->PositionCurve);
  }
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ReparamTableRWLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ReparamTableRWLock);
  }
  if (*(void **)&this->ReparamTable != (void *)0x0) {
    FMemory::Free(*(void **)&this->ReparamTable);
  }
  UE::Geometry::Spline::
  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
  ~TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              *)this);
  return;
}

// operator= @ 147a2b130

FNewSpline * __thiscall FNewSpline::operator=(FNewSpline *this,FNewSpline *param_1)

{
  if (this != param_1) {
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    TArray<enum_UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_>::operator=
              (&this->_padding_,
               (TArray<UE::Geometry::Spline::ETangentMode,TSizedDefaultAllocator<32>_> *)
               &param_1->_padding_);
    *(char *)&this->_padding_ = (char)param_1->_padding_;
    UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::operator=
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
               (TPolyBezierSpline<UE::Math::TVector<double>_> *)&param_1->_padding_);
    if (&this->_padding_ != &param_1->_padding_) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&this->_padding_,(int *)&this->_padding_,
                 (ForElementType<FSetElementId> *)&param_1->_padding_,(int)param_1->_padding_);
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this->_padding_,
                  (TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&param_1->_padding_);
    }
    FInterpCurveVector::operator=(&this->PositionCurve,&param_1->PositionCurve);
    FInterpCurveQuat::operator=(&this->RotationCurve,&param_1->RotationCurve);
    FInterpCurveVector::operator=(&this->ScaleCurve,&param_1->ScaleCurve);
    this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  }
  return this;
}

// operator!= @ 147a2ca70

bool __thiscall FNewSpline::operator!=(FNewSpline *this,FNewSpline *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x98))();
  return cVar1 == '\0';
}

// operator() @ 147a2d240

void __thiscall `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  TTangentBezierSpline<float> *this_00;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  float local_res10;
  float local_res14;
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> local_48 [3];
  
  (**(code **)(**(longlong **)this + 0x30))(*(longlong **)this,&local_res10);
  fVar6 = local_res10 * __real_bf800000;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = *(int *)(*(longlong *)this + 0x40);
  lVar5 = (longlong)local_48[0].ArrayNum;
  _Src = *(void **)(*(longlong *)this + 0x38);
  fVar7 = __real_3f800000 / (local_res14 - local_res10);
  if (local_48[0].ArrayNum == 0) {
    local_48[0].ArrayMax = 0;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_48[0].ArrayNum,0,&local_48[0].AllocatorInstance,local_48[0].ArrayNum,
               &local_48[0].ArrayMax);
    memcpy(local_48[0].AllocatorInstance.Data,_Src,lVar5 << 3);
    iVar3 = local_48[0].ArrayNum;
  }
  pFVar1 = local_48[0].AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar2.Data = local_48[0].AllocatorInstance.Data;
  iVar4 = iVar3;
  while( true ) {
    if (iVar4 != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar2.Data == pFVar1) break;
    *(float *)FVar2.Data = (fVar6 + *(float *)FVar2.Data) * fVar7;
    FVar2.Data = FVar2.Data + 8;
    iVar4 = local_48[0].ArrayNum;
  }
  this_00 = *(TTangentBezierSpline<float> **)this;
  UE::Geometry::Spline::TBSpline<float,3>::SetCustomKnots
            ((TBSpline<float,3> *)&this_00->_padding_,local_48);
  UE::Geometry::Spline::TTangentBezierSpline<float>::UpdateTangents(this_00);
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 147a2d390

void __thiscall
`FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_1>::operator()
          (void *this)

{
  FScriptContainerElement *pFVar1;
  void *_Src;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  float local_res10;
  float local_res14;
  TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> local_48 [3];
  
  (**(code **)(**(longlong **)this + 0x30))(*(longlong **)this,&local_res10);
  fVar6 = local_res10 * __real_bf800000;
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = *(int *)(*(longlong *)this + 0x40);
  lVar5 = (longlong)local_48[0].ArrayNum;
  _Src = *(void **)(*(longlong *)this + 0x38);
  fVar7 = __real_3f800000 / (local_res14 - local_res10);
  if (local_48[0].ArrayNum == 0) {
    local_48[0].ArrayMax = 0;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_48[0].ArrayNum,0,&local_48[0].AllocatorInstance,local_48[0].ArrayNum,
               &local_48[0].ArrayMax);
    memcpy(local_48[0].AllocatorInstance.Data,_Src,lVar5 << 3);
    iVar3 = local_48[0].ArrayNum;
  }
  pFVar1 = local_48[0].AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar2.Data = local_48[0].AllocatorInstance.Data;
  iVar4 = iVar3;
  while( true ) {
    if (iVar4 != iVar3) {
      `TCheckedPointerIterator<UE::Geometry::Spline::FKnot,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar2.Data == pFVar1) break;
    *(float *)FVar2.Data = (fVar6 + *(float *)FVar2.Data) * fVar7;
    FVar2.Data = FVar2.Data + 8;
    iVar4 = local_48[0].ArrayNum;
  }
  this_00 = *(TTangentBezierSpline<UE::Math::TVector<double>_> **)this;
  UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
            ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_,local_48);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(this_00);
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  return;
}

// operator() @ 147a2d4e0

int __thiscall `FNewSpline::SetAttributeParameter<float>'::__l5::<lambda_2>::operator()(void *this)

{
  FNewSpline *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this_00 = *(FNewSpline **)this;
  fVar2 = FNewSpline::GetAttributeParameter<float>
                    (this_00,(FName *)((longlong)this + 0x10),**(int **)((longlong)this + 0x20));
  fVar2 = FNewSpline::ToInternalSplineSpace(this_00,fVar2);
  fVar2 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this_00,*(FName *)((longlong)this + 0x10),fVar2);
  fVar3 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    (*(TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       **)this,*(FName *)((longlong)this + 0x10),**(float **)((longlong)this + 8));
  if (fVar3 <= fVar2) {
    fVar4 = fVar2 - __real_3951b717;
    if (fVar3 <= fVar2 - __real_3951b717) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = fVar2 + __real_3951b717;
    if (fVar2 + __real_3951b717 <= fVar3) {
      fVar4 = fVar3;
    }
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::SetParameter
                    (*(TTangentBezierSpline<float> **)((longlong)this + 0x18),
                     **(int **)((longlong)this + 0x20),fVar4);
  return iVar1;
}

// operator() @ 147a2d590

int __thiscall
`FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>'::__l5::<lambda_2>::operator()
          (void *this)

{
  FNewSpline *this_00;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  this_00 = *(FNewSpline **)this;
  fVar2 = FNewSpline::GetAttributeParameter<UE::Math::TVector<double>_>
                    (this_00,(FName *)((longlong)this + 0x10),**(int **)((longlong)this + 0x20));
  fVar2 = FNewSpline::ToInternalSplineSpace(this_00,fVar2);
  fVar2 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this_00,*(FName *)((longlong)this + 0x10),fVar2);
  fVar3 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    (*(TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       **)this,*(FName *)((longlong)this + 0x10),**(float **)((longlong)this + 8));
  if (fVar3 <= fVar2) {
    fVar4 = fVar2 - __real_3951b717;
    if (fVar3 <= fVar2 - __real_3951b717) {
      fVar4 = fVar3;
    }
  }
  else {
    fVar4 = fVar2 + __real_3951b717;
    if (fVar2 + __real_3951b717 <= fVar3) {
      fVar4 = fVar3;
    }
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetParameter
                    (*(TTangentBezierSpline<UE::Math::TVector<double>_> **)((longlong)this + 0x18),
                     **(int **)((longlong)this + 0x20),fVar4);
  return iVar1;
}

// AddPoint @ 147a30b10

void __thiscall FNewSpline::AddPoint(FNewSpline *this,FSplinePoint *param_1)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar2;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  TTangentBezierControlPoint<UE::Math::TVector<double>_> local_78;
  
  ValidateRotScale(this);
  ConvertToTangentBezierControlPoint(this,&local_78,param_1);
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  fVar7 = param_1->InputKey;
  puVar6 = (undefined1 *)0x0;
  iVar5 = (int)ROUND((fVar7 + fVar7) - __real_3f000000) >> 1;
  if ((iVar1 == 0) || (iVar1 <= iVar5)) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_78);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
              (pTVar2,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0);
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    local_88 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
              (this_00,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0);
  }
  else if (iVar5 == 0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_78);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
              (pTVar2,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0);
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    local_88 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::PrependPoint
              (this_00,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0);
  }
  else {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
            InsertPointAtSegmentParam
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,iVar5,
                       fVar7 - (float)iVar5,&local_78,Centripetal);
    puVar4 = puVar6;
    if (iVar1 != 0) {
      puVar4 = (undefined1 *)(ulonglong)(iVar1 * 4 - 1);
    }
    fVar7 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,puVar4);
    fVar8 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,ScaleAttrName,fVar7);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    local_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InsertPointAtGlobalParam
              (pTVar2,fVar8,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0
              );
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    fVar7 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,RotationAttrName,fVar7);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_88 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::InsertPointAtGlobalParam
              (this_00,fVar7,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0)
    ;
  }
  UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
            ((TBSpline<UE::Math::TQuat<double>,3> *)&this_00->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_00);
  MarkLegacyCurvesDirty(this);
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,ScaleAttrName);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0x3f800000;
    *puVar4 = 0;
  }
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,RotationAttrName);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0x3f800000;
    *puVar4 = 0;
  }
  ValidateRotScale(this);
  return;
}

// ConvertIndexToInternalParameter @ 147a3a250

float __thiscall
FNewSpline::ConvertIndexToInternalParameter(FNewSpline *this,int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if (iVar1 < 2) {
    fVar6 = 0.0;
  }
  else {
    iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    iVar1 = iVar2 + -1;
    if (param_1 < iVar2 + -1) {
      iVar1 = param_1;
    }
    iVar5 = 0;
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    if (__real_322bcc77 < (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
      iVar4 = 0;
      iVar1 = iVar3 + -1;
      if (iVar2 + 1 < iVar3 + -1) {
        iVar1 = iVar2 + 1;
      }
      if (iVar2 != 0) {
        iVar4 = iVar2 * 4 + -1;
      }
      fVar6 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,iVar4);
      if (iVar1 != 0) {
        iVar5 = iVar1 * 4 + -1;
      }
      fVar7 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,iVar5);
      fVar6 = (fVar7 - fVar6) * param_2 + fVar6;
    }
    else {
      if (iVar2 != 0) {
        iVar5 = iVar2 * 4 + -1;
      }
      fVar6 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,iVar5);
    }
  }
  return fVar6;
}

// ConvertInternalParameterToNearestPointIndex @ 147a3a360

int __thiscall
FNewSpline::ConvertInternalParameterToNearestPointIndex(FNewSpline *this,float param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if (iVar3 < 2) {
    return 0;
  }
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    iVar3 = (int)this->_padding_;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      if ((iVar3 == 1) || (iVar3 == 2)) {
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar3 != 3) {
        cVar2 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          iVar3 = iVar3 + 1;
        }
        else {
          iVar3 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a3a402;
      }
      iVar3 = 1;
    }
LAB_147a3a402:
    if (iVar3 + -1 <= iVar4) {
      fVar5 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,0);
      if (param_1 < fVar5) {
        return 0;
      }
      iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
      return iVar3 + -1;
    }
    plVar1 = &this->_padding_;
    if (iVar4 == 0) {
      fVar5 = (float)(**(code **)(this->_padding_ + 0xa8))(plVar1,0);
    }
    else {
      fVar5 = (float)(**(code **)(this->_padding_ + 0xa8))(plVar1,iVar4 * 4 + -1);
    }
    iVar3 = iVar4 + 1;
    fVar6 = (float)(**(code **)(*plVar1 + 0xa8))(plVar1);
    if ((fVar5 <= param_1) && (param_1 <= fVar6)) {
      if ((param_1 - fVar5) / (fVar6 - fVar5) <= __real_3f000000) {
        iVar3 = iVar4;
      }
      return iVar3;
    }
  } while( true );
}

// ConvertToTangentBezierControlPoint @ 147a3a840

TTangentBezierControlPoint<UE::Math::TVector<double>_> * __thiscall
FNewSpline::ConvertToTangentBezierControlPoint
          (FNewSpline *this,
          TTangentBezierControlPoint<UE::Math::TVector<double>_> *__return_storage_ptr__,
          FSplinePoint *param_1)

{
  double dVar1;
  EInterpCurveMode EVar2;
  
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->TangentMode = Auto;
  dVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  dVar1 = (param_1->ArriveTangent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->TangentIn).field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z
  ;
  dVar1 = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->TangentOut).field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z
  ;
  EVar2 = ConvertSplinePointTypeToInterpCurveMode((uint)(param_1->Type).Value);
  switch(EVar2) {
  case CIM_Linear:
    __return_storage_ptr__->TangentMode = Linear;
    return __return_storage_ptr__;
  case CIM_CurveAuto:
    __return_storage_ptr__->TangentMode = Auto;
    return __return_storage_ptr__;
  case CIM_Constant:
    __return_storage_ptr__->TangentMode = Constant;
    return __return_storage_ptr__;
  case CIM_CurveUser:
    __return_storage_ptr__->TangentMode = User;
    return __return_storage_ptr__;
  case CIM_CurveBreak:
    __return_storage_ptr__->TangentMode = Broken;
    return __return_storage_ptr__;
  case CIM_CurveAutoClamped:
    __return_storage_ptr__->TangentMode = AutoClamped;
    return __return_storage_ptr__;
  default:
    __return_storage_ptr__->TangentMode = Unknown;
    return __return_storage_ptr__;
  }
}

// EvaluateDerivative @ 147a42990

TVector<double> * __thiscall
FNewSpline::EvaluateDerivative
          (FNewSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float local_res8 [2];
  int local_res10 [2];
  TArrayView<UE::Math::TVector<double>_const_*_const,int> local_48;
  TVector<double> *local_38 [6];
  
  fVar1 = ToInternalSplineSpace(this,param_1);
  (**(code **)(this->_padding_ + 200))(&this->_padding_,local_38,fVar1);
  if (local_38[0] == (TVector<double> *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
    MapGlobalParameterToLocalSegment
              ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,fVar1,local_res10,
               local_res8);
    local_48.DataPtr = local_38;
    local_48.ArrayNum = 4;
    UE::Geometry::Spline::Math::TBezierDerivativeCalculator<UE::Math::TVector<double>,1>::Compute
              (__return_storage_ptr__,&local_48,local_res8[0],__real_3f800000);
  }
  return __return_storage_ptr__;
}

// EvaluatePosition @ 147a42fc0

TVector<double> * __thiscall
FNewSpline::EvaluatePosition(FNewSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  TVector<double>_u_0 local_38 [2];
  
  if (UE::Spline::GUseLegacyPositionEvaluation) {
    RebuildLegacyCurves(this);
    local_38[0]._s_0.Z = 0.0;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    FInterpCurve<UE::Math::TVector<double>_>::Eval
              ((FInterpCurve<UE::Math::TVector<double>_> *)&this->PositionCurve,
               __return_storage_ptr__,param_1,(TVector<double> *)&local_38[0]._s_0);
    return __return_storage_ptr__;
  }
  fVar1 = ToInternalSplineSpace(this,param_1);
  UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
            ((TSplineInterface<UE::Math::TVector<double>_> *)this,__return_storage_ptr__,fVar1);
  return __return_storage_ptr__;
}

// EvaluateRotation @ 147a43090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
FNewSpline::EvaluateRotation(FNewSpline *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  EOutOfBoundsHandlingMode EVar1;
  code *pcVar2;
  TSplineInterface<UE::Math::TQuat<double>_> *pTVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_res20;
  float local_res24;
  TQuat<double> local_38;
  
  if (UE::Spline::GUseLegacyRotationEvaluation) {
    RebuildLegacyCurves(this);
    local_38.Z = ___xmm_3ff00000000000000000000000000000;
    local_38.W = _UNK_15061cbc8;
    local_38.X = 0.0;
    local_38.Y = 0.0;
    FInterpCurve<UE::Math::TQuat<double>_>::Eval
              ((FInterpCurve<UE::Math::TQuat<double>_> *)&this->RotationCurve,__return_storage_ptr__
               ,param_1,&local_38);
    return __return_storage_ptr__;
  }
  fVar5 = ToInternalSplineSpace(this,param_1);
  pTVar3 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetAttributeChannel<UE::Math::TQuat<double>_>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this,RotationAttrName);
  if (pTVar3 == (TSplineInterface<UE::Math::TQuat<double>_> *)0x0) {
LAB_147a431fb:
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  fVar5 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this,RotationAttrName,fVar5);
  pfVar4 = (float *)(**(code **)(pTVar3->_padding_ + 0x30))(pTVar3,&local_res20);
  if (pfVar4[1] <= *pfVar4 && *pfVar4 != pfVar4[1]) goto LAB_147a431fb;
  pcVar2 = *(code **)(pTVar3->_padding_ + 0x90);
  (**(code **)(pTVar3->_padding_ + 0x30))(pTVar3,&local_res20);
  if (local_res20 <= fVar5) {
    fVar6 = fVar5;
    if (fVar5 <= local_res24) goto LAB_147a431de;
    EVar1 = pTVar3->PostInfinityMode;
    if (EVar1 == Zero) goto LAB_147a431af;
    if (EVar1 == Constant) {
      (*pcVar2)(local_res24,__return_storage_ptr__,local_res24);
      return __return_storage_ptr__;
    }
  }
  else {
    EVar1 = pTVar3->PreInfinityMode;
    if (EVar1 == Zero) {
LAB_147a431af:
      (*pcVar2)(pTVar3,__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    fVar6 = local_res20;
    if (EVar1 == Constant) goto LAB_147a431de;
  }
  fVar6 = fVar5;
  if (EVar1 == Cycle) {
    fVar5 = FGenericPlatformMath::Fmod(fVar5 - local_res20,local_res24 - local_res20);
    (*pcVar2)(pTVar3,__return_storage_ptr__,fVar5 + local_res20);
    return __return_storage_ptr__;
  }
LAB_147a431de:
  (*pcVar2)(pTVar3,__return_storage_ptr__,fVar6);
  return __return_storage_ptr__;
}

// EvaluateScale @ 147a434e0

TVector<double> * __thiscall
FNewSpline::EvaluateScale(FNewSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  TSplineInterface<UE::Math::TVector<double>_> *this_00;
  float fVar1;
  TVector<double>_u_0 local_38 [2];
  
  if (UE::Spline::GUseLegacyScaleEvaluation) {
    RebuildLegacyCurves(this);
    local_38[0]._s_0.Z = 0.0;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    FInterpCurve<UE::Math::TVector<double>_>::Eval
              ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,__return_storage_ptr__,
               param_1,(TVector<double> *)&local_38[0]._s_0);
    return __return_storage_ptr__;
  }
  fVar1 = ToInternalSplineSpace(this,param_1);
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetAttributeChannel<UE::Math::TVector<double>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,ScaleAttrName);
  if (this_00 == (TSplineInterface<UE::Math::TVector<double>_> *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else {
    fVar1 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,ScaleAttrName,fVar1);
    UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
              (this_00,__return_storage_ptr__,fVar1);
  }
  return __return_storage_ptr__;
}

// FindNearest @ 147a464d0

float __thiscall FNewSpline::FindNearest(FNewSpline *this,TVector<double> *param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float local_res20 [2];
  
  if (UE::Spline::GFallbackFindNearest) {
    fVar2 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&this->PositionCurve,param_1,
                       param_2);
    return fVar2;
  }
  uVar3 = (**(code **)(this->_padding_ + 0x68))(&this->_padding_);
  iVar1 = (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,uVar3,local_res20);
  return (float)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + local_res20[0];
}

// FindNearestOnSegment @ 147a468e0

float __thiscall
FNewSpline::FindNearestOnSegment
          (FNewSpline *this,TVector<double> *param_1,int param_2,float *param_3)

{
  longlong *this_00;
  int iVar1;
  float fVar2;
  float local_18 [4];
  
  if (!UE::Spline::GFallbackFindNearest) {
    this_00 = &this->_padding_;
    fVar2 = UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
            FindNearestOnSegment
                      ((TPolyBezierSpline<UE::Math::TVector<double>_> *)this_00,param_1,param_2,
                       param_3);
    iVar1 = (**(code **)(*this_00 + 0xb0))(this_00,fVar2,local_18);
    return (float)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + local_18[0];
  }
  if ((-1 < param_2) && (param_2 < *(int *)&(this->PositionCurve).field_0x8)) {
    fVar2 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                      ((FInterpCurve<UE::Math::TVector<double>_> *)&this->PositionCurve,param_1,
                       param_2,param_3);
    return fVar2;
  }
  return 0.0;
}

// FromInternalSplineSpace @ 147a49cd0

float __thiscall FNewSpline::FromInternalSplineSpace(FNewSpline *this,float param_1)

{
  int iVar1;
  undefined8 in_RDX;
  float local_res8 [8];
  
  iVar1 = (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,in_RDX,local_res8);
  return (float)((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) + local_res8[0];
}

// FromNormalizedSpace @ 147a49d10

float __thiscall FNewSpline::FromNormalizedSpace(FNewSpline *this,float param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x50))();
  return (float)iVar1 * param_1;
}

// GetDistanceAtParameter @ 147a50690

float __thiscall FNewSpline::GetDistanceAtParameter(FNewSpline *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  iVar7 = (**(code **)(this->_padding_ + 0x50))();
  fVar15 = __real_7f7fffff;
  fVar13 = __real_ff7fffff;
  if (iVar7 != 0) {
    iVar7 = (**(code **)(this->_padding_ + 0x50))(this);
    fVar15 = 0.0;
    fVar13 = (float)iVar7;
  }
  if ((param_1 < fVar15) || (fVar13 < param_1)) {
    return 0.0;
  }
  UpdateReparamTable(this);
  AcquireSRWLockShared((PSRWLOCK)&this->ReparamTableRWLock);
  iVar8 = (**(code **)(this->_padding_ + 0x50))(this);
  iVar10 = *(int *)&(this->ReparamTable).field_0x8;
  iVar7 = iVar10 + -1;
  fVar15 = (float)iVar7 * (param_1 / (float)iVar8);
  uVar11 = (int)ROUND((fVar15 + fVar15) - __real_3f000000) >> 1;
  if (((int)uVar11 < 0) || (iVar10 <= (int)uVar11)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_165379631287891604>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                       ,0x96c,"LowerKey >= 0 && LowerKey < ReparamTable.Points.Num()");
    iVar7 = (int)CONCAT71(extraout_var,bVar6);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar15 = (float)(*pcVar5)();
      return fVar15;
    }
  }
  uVar12 = -((int)ROUND(__real_bf000000 - (fVar15 + fVar15)) >> 1);
  if (((int)uVar12 < 0) || (*(int *)&(this->ReparamTable).field_0x8 <= (int)uVar12)) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_165379631287891602>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                       ,0x96e,"UpperKey >= 0 && UpperKey < ReparamTable.Points.Num()");
    iVar7 = (int)CONCAT71(extraout_var_00,bVar6);
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar15 = (float)(*pcVar5)();
      return fVar15;
    }
  }
  iVar10 = (int)fVar15;
  fVar13 = fVar15;
  if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar15)) {
    auVar14._4_4_ = fVar15;
    auVar14._0_4_ = fVar15;
    auVar14._8_8_ = 0;
    uVar9 = movmskps(iVar7,auVar14);
    fVar13 = (float)(int)(iVar10 - (uVar9 & 1));
  }
  uVar9 = 0;
  if ((int)uVar12 < *(int *)&(this->ReparamTable).field_0x8) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar15 = (float)(*pcVar5)();
    return fVar15;
  }
  lVar4 = *(longlong *)&this->ReparamTable;
  uVar9 = 0;
  if ((int)uVar11 < *(int *)&(this->ReparamTable).field_0x8) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar15 = (float)(*pcVar5)();
    return fVar15;
  }
  fVar1 = *(float *)(lVar4 + (longlong)(int)uVar12 * 0x14);
  fVar2 = *(float *)(*(longlong *)&this->ReparamTable + (longlong)(int)uVar11 * 0x14);
  fVar3 = *(float *)(*(longlong *)&this->ReparamTable + (longlong)(int)uVar11 * 0x14);
  ReleaseSRWLockShared((PSRWLOCK)&this->ReparamTableRWLock);
  return (fVar1 - fVar2) * (fVar15 - fVar13) + fVar3;
}

// GetInTangent @ 147a51100

TVector<double> * __thiscall
FNewSpline::GetInTangent(FNewSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar1) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                 __return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetLocation @ 147a528b0

TVector<double> * __thiscall
FNewSpline::GetLocation(FNewSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar1) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                 __return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetOutTangent @ 147a54c20

TVector<double> * __thiscall
FNewSpline::GetOutTangent(FNewSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar1) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                 __return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetParameterAtDistance @ 147a554d0

float __thiscall FNewSpline::GetParameterAtDistance(FNewSpline *this,float param_1)

{
  float fVar1;
  float local_res8 [2];
  
  UpdateReparamTable(this);
  AcquireSRWLockShared((PSRWLOCK)&this->ReparamTableRWLock);
  local_res8[0] = 0.0;
  fVar1 = FInterpCurve<float>::Eval((FInterpCurve<float> *)&this->ReparamTable,param_1,local_res8);
  ReleaseSRWLockShared((PSRWLOCK)&this->ReparamTableRWLock);
  return fVar1;
}

// GetParameterAtIndex @ 147a556e0

float __thiscall FNewSpline::GetParameterAtIndex(FNewSpline *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float local_res10 [2];
  
  if (param_1 < 0) {
    return 0.0;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x40))();
  if ((cVar1 == '\0') &&
     (iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     iVar2 <= param_1)) {
    return 0.0;
  }
  cVar1 = (**(code **)(this->_padding_ + 0x40))(this);
  if ((cVar1 != '\0') &&
     (iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     iVar2 < param_1)) {
    return 0.0;
  }
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 * 4 + -1;
  }
  uVar3 = (**(code **)(this->_padding_ + 0xa8))(&this->_padding_,iVar2);
  iVar2 = (**(code **)(this->_padding_ + 0xb0))(&this->_padding_,uVar3,local_res10);
  return (float)((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) + local_res10[0];
}

// GetPoint @ 147a562e0

FSplinePoint * __thiscall
FNewSpline::GetPoint(FNewSpline *this,FSplinePoint *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  EInterpCurveMode EVar5;
  Type TVar6;
  TVector<double> *pTVar7;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TRotator<double> *pTVar8;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  FSplinePoint *pFVar9;
  uint uVar10;
  float fVar11;
  TVector<double>_u_0 local_a8;
  TQuat<double> local_88;
  TVector<double> local_68;
  TVector<double> local_50;
  TVector<double> local_38;
  TRotator<double> local_20;
  
  __return_storage_ptr__->InputKey = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.X = 1.0;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = 1.0;
  (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = 1.0;
  (__return_storage_ptr__->Type).Value = '\x01';
  if (-1 < param_1) {
    iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar4) {
      fVar11 = GetParameterAtIndex(this,param_1);
      __return_storage_ptr__->InputKey = fVar11;
      pTVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                         ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                          &local_68,param_1);
      dVar2 = (pTVar7->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->Position).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar2;
      (__return_storage_ptr__->Position).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      pTVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                         ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                          &local_50,param_1);
      dVar2 = (pTVar7->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Y = dVar2;
      (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      pTVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                         ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                          &local_38,param_1);
      dVar2 = (pTVar7->field0_0x0)._s_0.Y;
      (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Y = dVar2;
      (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,RotationAttrName);
      if (this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
        local_88.X = 0.0;
        local_88.Y = 0.0;
        local_88.Z = 0.0;
        local_88.W = 0.0;
      }
      else {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
                  (this_00,&local_88,param_1);
      }
      pTVar8 = UE::Math::TQuat<double>::Rotator(&local_88,&local_20);
      dVar2 = pTVar8->Yaw;
      (__return_storage_ptr__->Rotation).Pitch = pTVar8->Pitch;
      (__return_storage_ptr__->Rotation).Yaw = dVar2;
      (__return_storage_ptr__->Rotation).Roll = pTVar8->Roll;
      this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,ScaleAttrName);
      if (this_01 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
        local_a8._0_4_ = 0;
        local_a8._4_4_ = 0;
        local_a8._8_4_ = 0;
        local_a8._12_4_ = 0;
        local_a8._s_0.X = 0.0;
        local_a8._s_0.Y = 0.0;
        local_a8._s_0.Z = 0.0;
      }
      else {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                  (this_01,(TVector<double> *)&local_a8._s_0,param_1);
      }
      *(undefined4 *)&(__return_storage_ptr__->Scale).field0_0x0 = local_a8._0_4_;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 4) = local_a8._4_4_;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 8) = local_a8._8_4_;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Scale).field0_0x0 + 0xc) = local_a8._12_4_
      ;
      (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = local_a8._s_0.Z;
      uVar10 = 0;
      if (param_1 < (int)this->_padding_) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          pFVar9 = (FSplinePoint *)(*pcVar1)();
          return pFVar9;
        }
      }
      EVar5 = ConvertTangentModeToInterpCurveMode
                        (*(ETangentMode *)((longlong)param_1 + this->_padding_));
      TVar6 = ConvertInterpCurveModeToSplinePointType(EVar5);
      (__return_storage_ptr__->Type).Value = (uchar)TVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetRotation @ 147a57c50

TQuat<double> * __thiscall
FNewSpline::GetRotation(FNewSpline *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  int iVar2;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  
  if (-1 < param_1) {
    iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar2) {
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,RotationAttrName);
      if (this_00 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
                  (this_00,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      __return_storage_ptr__->X = 0.0;
      __return_storage_ptr__->Y = 0.0;
      __return_storage_ptr__->Z = 0.0;
      __return_storage_ptr__->W = 0.0;
      return __return_storage_ptr__;
    }
  }
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar1;
  return __return_storage_ptr__;
}

// GetScale @ 147a57f00

TVector<double> * __thiscall
FNewSpline::GetScale(FNewSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  int iVar2;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  
  if (-1 < param_1) {
    iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar2) {
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,ScaleAttrName);
      if (this_00 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                  (this_00,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
  }
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetSegmentLength @ 147a586a0

float __thiscall
FNewSpline::GetSegmentLength(FNewSpline *this,int param_1,float param_2,TVector<double> *param_3)

{
  float *pfVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FLegendreGaussCoefficient *pFVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e0 [7];
  
  iVar6 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if (-1 < param_1) {
    cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
    if ((cVar4 != '\0') && (param_1 < iVar6)) goto LAB_147a5874a;
    cVar4 = (**(code **)(this->_padding_ + 0x40))(this);
    if ((cVar4 == '\0') && (param_1 < iVar6 + -1)) goto LAB_147a5874a;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >= 0 && ((IsClosedLoop() && Index < NumPoints) || (!IsClosedLoop() && Index < LastPoint))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                     ,0x798,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    fVar10 = (float)(*pcVar2)();
    return fVar10;
  }
LAB_147a5874a:
  fVar10 = __real_3f800000;
  fVar16 = 0.0;
  if ((param_2 < 0.0) || (__real_3f800000 < param_2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Param >= 0.0f && Param <= 1.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                       ,0x799,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      fVar10 = (float)(*pcVar2)();
      return fVar10;
    }
  }
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_108._s_0,param_1);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_120._s_0,param_1);
  iVar8 = 0;
  if (param_1 != iVar6 + -1) {
    iVar8 = param_1 + 1;
  }
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_138._s_0,iVar8);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
             (TVector<double> *)&local_e0[0]._s_0,iVar8);
  uVar9 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      fVar10 = (float)(*pcVar2)();
      return fVar10;
    }
  }
  dVar12 = (param_3->field0_0x0)._s_0.X;
  if (*(char *)((longlong)param_1 + this->_padding_) == '\x04') {
    dVar12 = (local_138._s_0.X - local_108._s_0.X) * dVar12;
    dVar3 = (local_138._s_0.Y - local_108._s_0.Y) * (param_3->field0_0x0)._s_0.Y;
    dVar11 = (local_138._s_0.Z - local_108._s_0.Z) * (param_3->field0_0x0)._s_0.Z;
    auVar14._0_8_ = dVar12 * dVar12;
    auVar14._8_8_ = 0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar3 * dVar3 + auVar14._0_8_ + dVar11 * dVar11;
    auVar15 = sqrtpd(auVar14,auVar15);
    fVar16 = (float)(auVar15._0_8_ * (double)param_2);
  }
  else {
    pFVar7 = LegendreGaussCoefficients;
    do {
      dVar13 = (double)((pFVar7->Abscissa + fVar10) * param_2 * __real_3f000000);
      dVar3 = ((((local_108._s_0.Y - local_138._s_0.Y) * __real_4008000000000000 +
                 (local_108._s_0.Y - local_138._s_0.Y) * __real_4008000000000000 +
                 local_120._s_0.Y * __real_4008000000000000 +
                (double)local_e0[0]._8_8_ * __real_4008000000000000) * dVar13 +
               (((local_138._s_0.Y - local_108._s_0.Y) * __real_4018000000000000 -
                local_120._s_0.Y * __real_4010000000000000) -
               ((double)local_e0[0]._8_8_ + (double)local_e0[0]._8_8_))) * dVar13 + local_120._s_0.Y
              ) * (param_3->field0_0x0)._s_0.Y;
      dVar11 = ((((local_108._s_0.Z - local_138._s_0.Z) * __real_4008000000000000 +
                  (local_108._s_0.Z - local_138._s_0.Z) * __real_4008000000000000 +
                  local_120._s_0.Z * __real_4008000000000000 +
                 (double)local_e0[0]._16_8_ * __real_4008000000000000) * dVar13 +
                (((local_138._s_0.Z - local_108._s_0.Z) * __real_4018000000000000 -
                 local_120._s_0.Z * __real_4010000000000000) -
                ((double)local_e0[0]._16_8_ + (double)local_e0[0]._16_8_))) * dVar13 +
               local_120._s_0.Z) * (param_3->field0_0x0)._s_0.Z;
      dVar13 = ((((local_108._s_0.X - local_138._s_0.X) * __real_4008000000000000 +
                  (local_108._s_0.X - local_138._s_0.X) * __real_4008000000000000 +
                  local_120._s_0.X * __real_4008000000000000 +
                 (double)local_e0[0]._0_8_ * __real_4008000000000000) * dVar13 +
                (((local_138._s_0.X - local_108._s_0.X) * __real_4018000000000000 -
                 local_120._s_0.X * __real_4010000000000000) -
                ((double)local_e0[0]._0_8_ + (double)local_e0[0]._0_8_))) * dVar13 +
               local_120._s_0.X) * dVar12;
      pfVar1 = &pFVar7->Weight;
      pFVar7 = pFVar7 + 1;
      fVar16 = (float)(SQRT(dVar3 * dVar3 + dVar13 * dVar13 + dVar11 * dVar11) * (double)*pfVar1 +
                      (double)fVar16);
    } while (pFVar7 != (FLegendreGaussCoefficient *)
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
            );
    fVar16 = fVar16 * param_2 * __real_3f000000;
  }
  return fVar16;
}

// GetSegmentSpace @ 147a58fd0

TInterval1<float> __thiscall FNewSpline::GetSegmentSpace(FNewSpline *this)

{
  int iVar1;
  TInterval1<float> in_RDX;
  float fVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(this->_padding_ + 0x50))();
  uVar3 = __real_7f7fffff;
  fVar2 = __real_ff7fffff;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(this->_padding_ + 0x50))(this);
    uVar3 = 0;
    fVar2 = (float)iVar1;
  }
  *(undefined4 *)in_RDX = uVar3;
  *(float *)((longlong)in_RDX + 4) = fVar2;
  return in_RDX;
}

// GetSplineLength @ 147a59280

float __thiscall FNewSpline::GetSplineLength(FNewSpline *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(this->_padding_ + 0x50))();
  fVar2 = GetDistanceAtParameter(this,(float)iVar1);
  return fVar2;
}

// GetSplinePointType @ 147a59460

EInterpCurveMode __thiscall FNewSpline::GetSplinePointType(FNewSpline *this,int param_1)

{
  ETangentMode EVar1;
  int iVar2;
  EInterpCurveMode EVar3;
  
  if (-1 < param_1) {
    iVar2 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar2) {
      EVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentMode
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                         param_1);
      EVar3 = ConvertTangentModeToInterpCurveMode(EVar1);
      return EVar3;
    }
  }
  return CIM_Unknown;
}

// InsertPoint @ 147a609a0

void __thiscall FNewSpline::InsertPoint(FNewSpline *this,FSplinePoint *param_1,int param_2)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar2;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  float fVar7;
  float fVar8;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  TTangentBezierControlPoint<UE::Math::TVector<double>_> local_78;
  
  ValidateRotScale(this);
  ConvertToTangentBezierControlPoint(this,&local_78,param_1);
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  puVar6 = (undefined1 *)0x0;
  if ((iVar1 == 0) || (iVar1 <= param_2)) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_78);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::AppendPoint
              (pTVar2,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0);
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    local_88 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::AppendPoint
              (this_00,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0);
  }
  else if (param_2 == 0) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,&local_78);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::PrependPoint
              (pTVar2,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0);
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    local_88 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::PrependPoint
              (this_00,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0);
  }
  else {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_2 < iVar1) {
      iVar1 = param_2;
    }
    iVar5 = 0;
    if (0 < iVar1) {
      iVar5 = iVar1;
    }
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
            InsertPointAtPosition
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,iVar5,
                       &local_78);
    puVar4 = puVar6;
    if (iVar1 != 0) {
      puVar4 = (undefined1 *)(ulonglong)(iVar1 * 4 - 1);
    }
    fVar7 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,puVar4);
    fVar8 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,ScaleAttrName,fVar7);
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this,ScaleAttrName);
    local_e8._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    local_e8._s_0.Y = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uStack_c0 = 0;
    local_e8._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    local_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::InsertPointAtGlobalParam
              (pTVar2,fVar8,(TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_e8._s_0
              );
    UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
              ((TBSpline<UE::Math::TVector<double>,3> *)&pTVar2->_padding_,
               (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(pTVar2);
    fVar7 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,RotationAttrName,fVar7);
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    local_e8._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_e8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_e8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_d0 = UE::Math::TQuat<double>::Identity.W;
    uStack_c8 = 0;
    uStack_c0 = 0;
    local_88 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::InsertPointAtGlobalParam
              (this_00,fVar7,(TTangentBezierControlPoint<UE::Math::TQuat<double>_> *)&local_e8._s_0)
    ;
  }
  UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
            ((TBSpline<UE::Math::TQuat<double>,3> *)&this_00->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_00);
  MarkLegacyCurvesDirty(this);
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,ScaleAttrName);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0x3f800000;
    *puVar4 = 0;
  }
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,RotationAttrName);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)(puVar4 + 8) = 0x3f800000;
    *puVar4 = 0;
  }
  ValidateRotScale(this);
  return;
}

// MarkLegacyCurvesDirty @ 147a64fc0

void __thiscall FNewSpline::MarkLegacyCurvesDirty(FNewSpline *this)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  if (UE::Spline::GImmediatelyUpdateLegacyCurves) {
    RebuildLegacyCurves(this);
    return;
  }
  this_00 = &this->LegacyCurvesNextVersion;
  LOCK();
  bVar3 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  puVar1 = &(this->LegacyCurvesNextVersion).Value;
  *puVar1 = *puVar1 + 1;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) == 0) {
    return;
  }
  UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  return;
}

// MarkReparamTableDirty @ 147a65030

void __thiscall FNewSpline::MarkReparamTableDirty(FNewSpline *this)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  this_00 = &this->ReparamTableNextVersion;
  LOCK();
  bVar3 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  puVar1 = &(this->ReparamTableNextVersion).Value;
  *puVar1 = *puVar1 + 1;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) == 0) {
    return;
  }
  UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  return;
}

// RebuildLegacyCurves @ 147a6f5b0

void __thiscall FNewSpline::RebuildLegacyCurves(FNewSpline *this)

{
  FChangeStamp *pFVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  atomic<unsigned_char> aVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *piVar13;
  undefined1 uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  TVector<double> *pTVar19;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  ulonglong local_res20;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  int *local_d0;
  TQuat<double> local_c8;
  undefined8 local_98;
  
  pFVar1 = &this->LegacyCurvesNextVersion;
  LOCK();
  bVar25 = (pFVar1->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar25) {
    (pFVar1->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar25) {
    UE::FMutex::LockSlow(&pFVar1->Mutex);
  }
  uVar16 = (this->LegacyCurvesNextVersion).Value;
  LOCK();
  aVar5 = (pFVar1->Mutex).State;
  (pFVar1->Mutex).State = (atomic<unsigned_char>)((char)(pFVar1->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar5 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&pFVar1->Mutex);
  }
  if ((uVar16 == this->LegacyCurvesVersion) && (UE::Spline::GImmediatelyUpdateLegacyCurves == false)
     ) {
    return;
  }
  uVar16 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                     ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  local_d0 = (int *)&(this->PositionCurve).field_0xc;
  uVar21 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x8 = 0;
  if (*local_d0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar16,(ForAnyElementType *)&this->PositionCurve,0,local_d0);
  }
  uVar16 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                     ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  puVar2 = &(this->RotationCurve).field_0xc;
  *(undefined4 *)&(this->RotationCurve).field_0x8 = 0;
  if (*(int *)puVar2 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,uVar16,(ForAnyElementType *)&this->RotationCurve,0,(int *)puVar2);
  }
  uVar16 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                     ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  puVar2 = &(this->ScaleCurve).field_0xc;
  *(undefined4 *)&(this->ScaleCurve).field_0x8 = 0;
  if (*(int *)puVar2 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar16,(ForAnyElementType *)&this->ScaleCurve,0,(int *)puVar2);
  }
  uVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0x3f800000;
  (this->PositionCurve).field_0x10 = uVar14;
  uVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  (this->RotationCurve).field_0x10 = uVar14;
  uVar14 = (**(code **)(this->_padding_ + 0x40))(this);
  piVar13 = local_d0;
  dVar12 = __real_4008000000000000;
  (this->ScaleCurve).field_0x10 = uVar14;
  uVar23 = uVar21;
  uVar24 = uVar21;
  do {
    iVar17 = (int)this->_padding_;
    iVar18 = (int)uVar21;
    uVar16 = 0;
    local_res18 = iVar18;
    local_res20 = uVar24;
    if (iVar17 != 0) {
      if ((iVar17 == 1) || (iVar17 == 2)) {
        local_res8[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar17 != 3) {
        cVar15 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar15 == '\0') {
          iVar17 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          uVar16 = iVar17 + 1;
        }
        else {
          uVar16 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a6f7ec;
      }
      uVar16 = 1;
    }
LAB_147a6f7ec:
    uVar22 = (uint)uVar23;
    if ((int)uVar16 <= (int)uVar22) {
      pFVar1 = &this->LegacyCurvesNextVersion;
      LOCK();
      bVar25 = (pFVar1->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar25) {
        (pFVar1->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar25) {
        UE::FMutex::LockSlow(&pFVar1->Mutex);
      }
      uVar16 = (this->LegacyCurvesNextVersion).Value;
      LOCK();
      aVar5 = (pFVar1->Mutex).State;
      (pFVar1->Mutex).State = (atomic<unsigned_char>)((char)(pFVar1->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&pFVar1->Mutex);
      }
      this->LegacyCurvesVersion = uVar16;
      return;
    }
    uVar16 = 0;
    if ((int)uVar22 < (int)this->_padding_) {
      uVar16 = ~uVar22 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    switch(*(undefined1 *)(this->_padding_ + uVar24)) {
    case 0:
      uVar14 = 1;
      break;
    case 1:
      uVar14 = 5;
      break;
    case 2:
      uVar14 = 3;
      break;
    case 3:
      uVar14 = 4;
      break;
    case 4:
      uVar14 = 0;
      break;
    case 5:
      uVar14 = 2;
      break;
    default:
      uVar14 = 6;
    }
    iVar17 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                       ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (iVar17 < 2) {
LAB_147a6f93b:
      local_100._s_0.X = 0.0;
      local_100._s_0.Y = 0.0;
      local_100._s_0.Z = 0.0;
    }
    else if ((uVar22 == iVar17 - 1U) &&
            (cVar15 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_), cVar15 == '\0')) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                 (TVector<double> *)&local_100._s_0,uVar22);
    }
    else {
      if ((int)this->_padding_ <= iVar18 + 1) goto LAB_147a6f93b;
      pTVar19 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,local_res18);
      dVar10 = (pTVar19->field0_0x0)._s_0.X;
      dVar11 = (pTVar19->field0_0x0)._s_0.Y;
      dVar6 = (pTVar19->field0_0x0)._s_0.Z;
      pTVar19 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar18 + 1);
      local_100._s_0.X = ((pTVar19->field0_0x0)._s_0.X - dVar10) * dVar12;
      local_100._s_0.Y = ((pTVar19->field0_0x0)._s_0.Y - dVar11) * dVar12;
      local_100._s_0.Z = ((pTVar19->field0_0x0)._s_0.Z - dVar6) * dVar12;
      local_e8._s_0.Z = dVar6;
    }
    iVar17 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                       ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (iVar17 < 2) {
LAB_147a6fa15:
      local_118._s_0.X = 0.0;
      local_118._s_0.Y = 0.0;
      local_118._s_0.Z = 0.0;
    }
    else if (uVar22 == 0) {
      cVar15 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
      if (cVar15 == '\0') {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                   (TVector<double> *)&local_118._s_0,0);
      }
      else {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                   (TVector<double> *)&local_118._s_0,iVar17);
      }
    }
    else {
      iVar17 = uVar22 * 4 + -1;
      if ((int)this->_padding_ <= iVar17) goto LAB_147a6fa15;
      pTVar19 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar17);
      dVar10 = (pTVar19->field0_0x0)._s_0.X;
      dVar11 = (pTVar19->field0_0x0)._s_0.Y;
      dVar6 = (pTVar19->field0_0x0)._s_0.Z;
      pTVar19 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,uVar22 * 4 + -2
                          );
      local_e8._s_0.Z = (pTVar19->field0_0x0)._s_0.Z;
      local_118._s_0.X = (dVar10 - (pTVar19->field0_0x0)._s_0.X) * dVar12;
      local_118._s_0.Y = (dVar11 - (pTVar19->field0_0x0)._s_0.Y) * dVar12;
      local_118._s_0.Z = (dVar6 - local_e8._s_0.Z) * dVar12;
    }
    iVar17 = (int)this->_padding_;
    if (((iVar17 == 0) || ((int)uVar22 < 0)) || (iVar17 == 0)) {
LAB_147a6faab:
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      local_98 = 0;
      uVar30 = 0;
      uVar31 = 0;
    }
    else {
      if ((iVar17 == 1) || (iVar17 == 2)) {
        local_res10[0] = 0;
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res10);
LAB_147a6fa75:
        iVar18 = 1;
      }
      else {
        if (iVar17 == 3) goto LAB_147a6fa75;
        cVar15 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar15 == '\0') {
          iVar18 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          iVar18 = iVar18 + 1;
        }
        else {
          iVar18 = (**(code **)(this->_padding_ + 0x50))();
        }
      }
      if (iVar18 <= (int)uVar22) goto LAB_147a6faab;
      if (iVar17 == 1) {
        if (uVar22 != 0) goto LAB_147a6faab;
LAB_147a6fa87:
        iVar18 = 0;
      }
      else {
        if (uVar22 == 0) goto LAB_147a6fa87;
        iVar18 = uVar22 * 4 + -1;
        if (iVar17 <= iVar18) goto LAB_147a6faab;
      }
      pTVar19 = UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::GetValue
                          ((TBSpline<UE::Math::TVector<double>,3> *)&this->_padding_,iVar18);
      uVar26 = *(undefined4 *)&pTVar19->field0_0x0;
      uVar27 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 4);
      uVar28 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 8);
      uVar29 = *(undefined4 *)((longlong)&pTVar19->field0_0x0 + 0xc);
      uVar7 = *(undefined8 *)((longlong)&pTVar19->field0_0x0 + 0x10);
      uVar30 = (undefined4)uVar7;
      uVar31 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    iVar17 = *(int *)&(this->PositionCurve).field_0x8;
    if (iVar17 == *piVar13) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,(ForAnyElementType *)&this->PositionCurve,piVar13);
    }
    *(int *)&(this->PositionCurve).field_0x8 = iVar17 + 1;
    lVar20 = (longlong)iVar17 * 0x58;
    fVar32 = (float)(int)uVar22;
    lVar8 = *(longlong *)&this->PositionCurve;
    puVar3 = (undefined4 *)(lVar20 + 8 + lVar8);
    *puVar3 = uVar26;
    puVar3[1] = uVar27;
    puVar3[2] = uVar28;
    puVar3[3] = uVar29;
    *(ulonglong *)(lVar20 + 0x18 + lVar8) = CONCAT44(uVar31,uVar30);
    *(float *)(lVar20 + lVar8) = fVar32;
    pdVar4 = (double *)(lVar20 + 0x20 + lVar8);
    *pdVar4 = local_118._s_0.X;
    pdVar4[1] = local_118._s_0.Y;
    *(double *)(lVar20 + 0x30 + lVar8) = local_118._s_0.Z;
    pdVar4 = (double *)(lVar20 + 0x38 + lVar8);
    *pdVar4 = local_100._s_0.X;
    pdVar4[1] = local_100._s_0.Y;
    *(double *)(lVar20 + 0x48 + lVar8) = local_100._s_0.Z;
    *(undefined1 *)(lVar20 + 0x50 + lVar8) = uVar14;
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    if (this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
      local_c8.X = 0.0;
      local_c8.Y = 0.0;
      local_c8.Z = 0.0;
      local_c8.W = 0.0;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
                (this_00,&local_c8,uVar22);
    }
    FInterpCurve<UE::Math::TQuat<double>_>::AddPoint
              ((FInterpCurve<UE::Math::TQuat<double>_> *)&this->RotationCurve,fVar32,&local_c8);
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,ScaleAttrName);
    if (this_01 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
      local_e8._s_0.X = 0.0;
      local_e8._s_0.Y = 0.0;
      local_e8._s_0.Z = 0.0;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                (this_01,(TVector<double> *)&local_e8._s_0,uVar22);
    }
    FInterpCurve<UE::Math::TVector<double>_>::AddPoint
              ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,fVar32,
               (TVector<double> *)&local_e8._s_0);
    uVar23 = (ulonglong)(uVar22 + 1);
    uVar24 = local_res20 + 1;
    uVar21 = (ulonglong)(local_res18 + 4);
  } while( true );
}

// RemovePoint @ 147a7bb30

void __thiscall FNewSpline::RemovePoint(FNewSpline *this,int param_1)

{
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_01;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  undefined1 *puVar3;
  
  ValidateRotScale(this);
  if (-1 < param_1) {
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_1 < iVar1) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1);
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,ScaleAttrName);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
                (this_00,param_1);
      UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
                ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_,
                 (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_
                );
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                (this_00);
      this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,RotationAttrName);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::RemovePoint
                (this_01,param_1);
      UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
                ((TBSpline<UE::Math::TQuat<double>,3> *)&this_01->_padding_,
                 (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_
                );
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_01);
      MarkLegacyCurvesDirty(this);
    }
  }
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,ScaleAttrName);
  puVar3 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    *puVar3 = 0;
  }
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,RotationAttrName);
  puVar3 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar3 + 4) = 0;
    *(undefined4 *)(puVar3 + 8) = 0x3f800000;
    *puVar3 = 0;
  }
  ValidateRotScale(this);
  return;
}

// Reset @ 147a83290

void __thiscall FNewSpline::Reset(FNewSpline *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ForAnyElementType local_18 [2];
  
  (**(code **)(this->_padding_ + 8))();
  if ((ForAnyElementType *)&this->_padding_ != local_18) {
    iVar3 = *(int *)((longlong)&this->_padding_ + 4);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,iVar3,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  puVar2 = &(this->PositionCurve).field_0xc;
  *(undefined4 *)&(this->PositionCurve).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->PositionCurve,0,(int *)puVar2);
  }
  puVar2 = &(this->RotationCurve).field_0xc;
  *(undefined4 *)&(this->RotationCurve).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&this->RotationCurve,0,(int *)puVar2);
  }
  puVar2 = &(this->ScaleCurve).field_0xc;
  *(undefined4 *)&(this->ScaleCurve).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->ScaleCurve,0,(int *)puVar2);
  }
  return;
}

// ResetRotation @ 147a83a30

void __thiscall FNewSpline::ResetRotation(FNewSpline *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar4;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,RotationAttrName);
  puVar6 = (undefined1 *)0x0;
  puVar5 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar5 = puVar6;
  }
  if (puVar5 != (undefined1 *)0x0) {
    (**(code **)(**(longlong **)(puVar5 + 0x10) + 8))();
  }
  puVar5 = puVar6;
  do {
    iVar3 = (int)this->_padding_;
    iVar2 = 0;
    if (iVar3 != 0) {
      if ((iVar3 == 1) || (iVar3 == 2)) {
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar3 != 3) {
        cVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar1 == '\0') {
          iVar3 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          iVar2 = iVar3 + 1;
        }
        else {
          iVar2 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a83ac5;
      }
      iVar2 = 1;
    }
LAB_147a83ac5:
    iVar3 = (int)puVar5;
    if (iVar2 <= iVar3) {
      pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                       *)&this->_padding_,RotationAttrName);
      puVar5 = &pTVar4->field_0x8;
      if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                     *)0x0) {
        puVar5 = puVar6;
      }
      if (puVar5 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar5 + 4) = 0;
        *(undefined4 *)(puVar5 + 8) = 0x3f800000;
        *puVar5 = 0;
      }
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,RotationAttrName);
      UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
                ((TBSpline<UE::Math::TQuat<double>,3> *)&this_00->_padding_,
                 (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_
                );
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_00);
      return;
    }
    AddAttributeValue<UE::Math::TQuat<double>_>
              (this,RotationAttrName,&UE::Math::TQuat<double>::Identity,(float)iVar3);
    puVar5 = (undefined1 *)(ulonglong)(iVar3 + 1);
  } while( true );
}

// ResetScale @ 147a83e20

void __thiscall FNewSpline::ResetScale(FNewSpline *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar4;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  
  pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->_padding_,ScaleAttrName);
  puVar6 = (undefined1 *)0x0;
  puVar5 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar5 = puVar6;
  }
  if (puVar5 != (undefined1 *)0x0) {
    (**(code **)(**(longlong **)(puVar5 + 0x10) + 8))();
  }
  puVar5 = puVar6;
  do {
    iVar3 = (int)this->_padding_;
    iVar2 = 0;
    if (iVar3 != 0) {
      if ((iVar3 == 1) || (iVar3 == 2)) {
        `UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints'::__l4
        ::<lambda_1>::operator()(local_res8);
      }
      else if (iVar3 != 3) {
        cVar1 = (**(code **)(this->_padding_ + 0x40))(&this->_padding_);
        if (cVar1 == '\0') {
          iVar3 = (**(code **)(this->_padding_ + 0x50))(&this->_padding_);
          iVar2 = iVar3 + 1;
        }
        else {
          iVar2 = (**(code **)(this->_padding_ + 0x50))();
        }
        goto LAB_147a83eb5;
      }
      iVar2 = 1;
    }
LAB_147a83eb5:
    iVar3 = (int)puVar5;
    if (iVar2 <= iVar3) {
      pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                       *)&this->_padding_,ScaleAttrName);
      puVar5 = &pTVar4->field_0x8;
      if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                     *)0x0) {
        puVar5 = puVar6;
      }
      if (puVar5 != (undefined1 *)0x0) {
        *(undefined4 *)(puVar5 + 4) = 0;
        *(undefined4 *)(puVar5 + 8) = 0x3f800000;
        *puVar5 = 0;
      }
      this_00 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,ScaleAttrName);
      UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
                ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_,
                 (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_
                );
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                (this_00);
      return;
    }
    AddAttributeValue<UE::Math::TVector<double>_>
              (this,ScaleAttrName,&UE::Math::TVector<double>::OneVector,(float)iVar3);
    puVar5 = (undefined1 *)(ulonglong)(iVar3 + 1);
  } while( true );
}

// Serialize @ 147a88100

bool __thiscall FNewSpline::Serialize(FNewSpline *this,FArchive *param_1)

{
  longlong *this_00;
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  
  bVar3 = UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  this_00 = &this->_padding_;
  if (bVar3) {
    cVar4 = (**(code **)(*this_00 + 0x60))(this_00,param_1);
    if (cVar4 != '\0') {
      TSetPrivateFriend::
      Serialize<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                (param_1,(TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                          *)&this->_padding_);
    }
  }
  piVar1 = &this->ReparamStepsPerSegment;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    (**(code **)(this->_padding_ + 0xb8))(&this->_padding_,2);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)this_00);
    RebuildLegacyCurves(this);
  }
  return true;
}

// SetClosedLoop @ 147a8bc90

void __thiscall FNewSpline::SetClosedLoop(FNewSpline *this,bool param_1)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_00;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_01;
  undefined7 in_register_00000011;
  
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,CONCAT71(in_register_00000011,param_1));
  this_00 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,ScaleAttrName);
  (**(code **)(this_00->_padding_ + 0x38))(this_00,param_1);
  UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
            ((TBSpline<UE::Math::TVector<double>,3> *)&this_00->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents(this_00);
  this_01 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this,RotationAttrName);
  (**(code **)(this_01->_padding_ + 0x38))(this_01,param_1);
  UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
            ((TBSpline<UE::Math::TQuat<double>,3> *)&this_01->_padding_,
             (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)&this->_padding_);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents(this_01);
  UpdateSpline(this);
  return;
}

// SetInTangent @ 147a8efb0

void __thiscall FNewSpline::SetInTangent(FNewSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  bool bVar4;
  
  if ((-1 < param_1) &&
     (iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar3)) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,User);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentIn
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,param_2)
    ;
    this_00 = &this->ReparamTableNextVersion;
    LOCK();
    bVar4 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&this_00->Mutex);
    }
    puVar1 = &(this->ReparamTableNextVersion).Value;
    *puVar1 = *puVar1 + 1;
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// SetLocation @ 147a90130

void __thiscall FNewSpline::SetLocation(FNewSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  TVector<double> *pTVar4;
  TVector<double> *pTVar5;
  bool bVar6;
  TVector<double>_u_0 local_98;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ETangentMode local_50;
  TVector<double> local_48;
  TVector<double> local_30;
  
  if ((-1 < param_1) &&
     (iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar3)) {
    pTVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                       ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                        &local_48,param_1);
    pTVar5 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                       ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                        &local_30,param_1);
    local_50 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
               GetTangentMode((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                              param_1);
    local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_80 = (pTVar4->field0_0x0)._s_0.X;
    dStack_78 = (pTVar4->field0_0x0)._s_0.Y;
    local_70 = (pTVar4->field0_0x0)._s_0.Z;
    local_68 = (pTVar5->field0_0x0)._s_0.X;
    dStack_60 = (pTVar5->field0_0x0)._s_0.Y;
    local_58 = (pTVar5->field0_0x0)._s_0.Z;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::ModifyPoint
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,
               (TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_98._s_0);
    this_00 = &this->ReparamTableNextVersion;
    LOCK();
    bVar6 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      UE::FMutex::LockSlow(&this_00->Mutex);
    }
    puVar1 = &(this->ReparamTableNextVersion).Value;
    *puVar1 = *puVar1 + 1;
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// SetOutTangent @ 147a90fd0

void __thiscall FNewSpline::SetOutTangent(FNewSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  int iVar3;
  bool bVar4;
  
  if ((-1 < param_1) &&
     (iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar3)) {
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,User);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentOut
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,param_2)
    ;
    this_00 = &this->ReparamTableNextVersion;
    LOCK();
    bVar4 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar4) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar4) {
      UE::FMutex::LockSlow(&this_00->Mutex);
    }
    puVar1 = &(this->ReparamTableNextVersion).Value;
    *puVar1 = *puVar1 + 1;
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// SetRotation @ 147a92470

void __thiscall FNewSpline::SetRotation(FNewSpline *this,int param_1,TQuat<double> *param_2)

{
  int iVar1;
  
  if ((-1 < param_1) &&
     (iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar1)) {
    ValidateRotScale(this);
    SetAttributeValue<UE::Math::TQuat<double>_>(this,RotationAttrName,param_2,param_1);
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// SetScale @ 147a926d0

void __thiscall FNewSpline::SetScale(FNewSpline *this,int param_1,TVector<double> *param_2)

{
  int iVar1;
  
  if ((-1 < param_1) &&
     (iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar1)) {
    ValidateRotScale(this);
    SetAttributeValue<UE::Math::TVector<double>_>(this,ScaleAttrName,param_2,param_1);
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// SetSplinePointType @ 147a92900

void __thiscall
FNewSpline::SetSplinePointType(FNewSpline *this,int param_1,EInterpCurveMode param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  ETangentMode EVar3;
  int iVar4;
  bool bVar5;
  
  if ((-1 < param_1) &&
     (iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_),
     param_1 < iVar4)) {
    EVar3 = ConvertInterpCurveModeToTangentMode(param_2);
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,param_1,EVar3);
    this_00 = &this->ReparamTableNextVersion;
    LOCK();
    bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar5) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar5) {
      UE::FMutex::LockSlow(&this_00->Mutex);
    }
    puVar1 = &(this->ReparamTableNextVersion).Value;
    *puVar1 = *puVar1 + 1;
    LOCK();
    aVar2 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// ToInternalSplineSpace @ 147a98bd0

float __thiscall FNewSpline::ToInternalSplineSpace(FNewSpline *this,float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  undefined1 local_res8 [32];
  
  iVar2 = (**(code **)(this->_padding_ + 0x50))();
  fVar5 = (float)iVar2;
  if (param_1 <= (float)iVar2) {
    fVar5 = param_1;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  iVar3 = (int)ROUND((fVar5 + fVar5) - __real_3f000000) >> 1;
  iVar1 = iVar2 + -1;
  if (iVar3 < iVar2 + -1) {
    iVar1 = iVar3;
  }
  pfVar4 = (float *)(**(code **)(this->_padding_ + 0x58))(this,local_res8);
  return (fVar5 - (float)iVar1) * pfVar4[1] + (__real_3f800000 - (fVar5 - (float)iVar1)) * *pfVar4;
}

// ToNormalizedSpace @ 147a98c70

float __thiscall FNewSpline::ToNormalizedSpace(FNewSpline *this,float param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x50))();
  return param_1 / (float)iVar1;
}

// UpdatePointAttributes @ 147a9cc40

void __thiscall
FNewSpline::UpdatePointAttributes(FNewSpline *this,FSplinePoint *param_1,int param_2)

{
  int iVar1;
  TQuat<double> *pTVar2;
  TQuat<double> local_28;
  
  if (-1 < param_2) {
    pTVar2 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_28);
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_2 < iVar1) {
      ValidateRotScale(this);
      SetAttributeValue<UE::Math::TQuat<double>_>(this,RotationAttrName,pTVar2,param_2);
      MarkLegacyCurvesDirty(this);
    }
    iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    if (param_2 < iVar1) {
      ValidateRotScale(this);
      SetAttributeValue<UE::Math::TVector<double>_>(this,ScaleAttrName,&param_1->Scale,param_2);
      MarkLegacyCurvesDirty(this);
    }
    MarkLegacyCurvesDirty(this);
  }
  return;
}

// UpdateReparamTable @ 147a9d7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FNewSpline::UpdateReparamTable(FNewSpline *this)

{
  FChangeStamp *this_00;
  FInterpCurveFloat *this_01;
  atomic<unsigned_char> aVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TVector<double>_u_0 local_b8 [5];
  
  iVar7 = (**(code **)(this->_padding_ + 0x50))();
  this_00 = &this->ReparamTableNextVersion;
  LOCK();
  bVar14 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar14) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar14) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  uVar8 = (this->ReparamTableNextVersion).Value;
  LOCK();
  aVar1 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  if (((uVar8 != this->ReparamTableVersion) && (this->ReparamStepsPerSegment != 0)) && (iVar7 != 0))
  {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ReparamTableRWLock);
    LOCK();
    bVar14 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar14) {
      (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar14) {
      UE::FMutex::LockSlow(&this_00->Mutex);
    }
    uVar8 = (this->ReparamTableNextVersion).Value;
    LOCK();
    aVar1 = (this_00->Mutex).State;
    (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(&this_00->Mutex);
    }
    if (uVar8 != this->ReparamTableVersion) {
      uVar8 = FChangeStamp::GetValue(this_00);
      this_01 = &this->ReparamTable;
      TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>::Reset
                ((TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> *)this_01,
                 iVar7 * this->ReparamStepsPerSegment + 1);
      dVar6 = _UNK_150689688;
      dVar5 = ___xmm_3ff00000000000003ff0000000000000;
      fVar4 = __real_3f800000;
      dVar3 = __real_3ff0000000000000;
      fVar17 = 0.0;
      iVar13 = 0;
      if (0 < iVar7) {
        do {
          iVar9 = *(int *)&(this->ReparamTable).field_0x8;
          if (iVar9 == *(int *)&(this->ReparamTable).field_0xc) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x414,(ForAnyElementType *)this_01,
                               (int *)&(this->ReparamTable).field_0xc);
          }
          *(int *)&(this->ReparamTable).field_0x8 = iVar9 + 1;
          iVar12 = 1;
          lVar11 = (longlong)iVar9;
          lVar2 = *(longlong *)&this_01->field_0x0;
          *(float *)(lVar2 + lVar11 * 0x14) = fVar17;
          *(float *)(lVar2 + 4 + lVar11 * 0x14) = (float)iVar13;
          *(undefined8 *)(lVar2 + 8 + lVar11 * 0x14) = 0;
          *(undefined1 *)(lVar2 + 0x10 + lVar11 * 0x14) = 0;
          iVar9 = this->ReparamStepsPerSegment;
          if (1 < iVar9) {
            do {
              fVar16 = (float)iVar12;
              local_b8[0]._s_0.Z = dVar3;
              local_b8[0]._s_0.X = dVar5;
              local_b8[0]._s_0.Y = dVar6;
              fVar15 = GetSegmentLength(this,iVar13,fVar16 / (float)iVar9,
                                        (TVector<double> *)&local_b8[0]._s_0);
              iVar10 = *(int *)&(this->ReparamTable).field_0x8;
              if (iVar10 == *(int *)&(this->ReparamTable).field_0xc) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x414,(ForAnyElementType *)this_01,
                                    (int *)&(this->ReparamTable).field_0xc);
              }
              *(int *)&(this->ReparamTable).field_0x8 = iVar10 + 1;
              iVar12 = iVar12 + 1;
              lVar11 = (longlong)iVar10;
              lVar2 = *(longlong *)&this_01->field_0x0;
              *(float *)(lVar2 + lVar11 * 0x14) = fVar15 + fVar17;
              *(float *)(lVar2 + 4 + lVar11 * 0x14) = fVar16 / (float)iVar9 + (float)iVar13;
              *(undefined8 *)(lVar2 + 8 + lVar11 * 0x14) = 0;
              *(undefined1 *)(lVar2 + 0x10 + lVar11 * 0x14) = 0;
              iVar9 = this->ReparamStepsPerSegment;
            } while (iVar12 < iVar9);
          }
          local_b8[0]._s_0.Z = dVar3;
          local_b8[0]._s_0.X = dVar5;
          local_b8[0]._s_0.Y = dVar6;
          fVar15 = GetSegmentLength(this,iVar13,fVar4,(TVector<double> *)&local_b8[0]._s_0);
          iVar13 = iVar13 + 1;
          fVar17 = fVar17 + fVar15;
        } while (iVar13 < iVar7);
      }
      iVar13 = *(int *)&(this->ReparamTable).field_0x8;
      if (iVar13 == *(int *)&(this->ReparamTable).field_0xc) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,(ForAnyElementType *)this_01,
                            (int *)&(this->ReparamTable).field_0xc);
      }
      lVar11 = (longlong)iVar13;
      *(int *)&(this->ReparamTable).field_0x8 = iVar13 + 1;
      lVar2 = *(longlong *)&this_01->field_0x0;
      *(float *)(lVar2 + lVar11 * 0x14) = fVar17;
      *(float *)(lVar2 + 4 + lVar11 * 0x14) = (float)iVar7;
      *(undefined8 *)(lVar2 + 8 + lVar11 * 0x14) = 0;
      *(undefined1 *)(lVar2 + 0x10 + lVar11 * 0x14) = 0;
      this->ReparamTableVersion = uVar8;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ReparamTableRWLock);
  }
  return;
}

// UpdateSpline @ 147a9e0e0

void __thiscall FNewSpline::UpdateSpline(FNewSpline *this,FUpdateSplineParams *param_1)

{
  (**(code **)(this->_padding_ + 0x38))(this,param_1->bClosedLoop);
  *(bool *)&this->_padding_ = param_1->bStationaryEndpoints;
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  this->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
  UpdateSpline(this);
  return;
}

// UpdateSpline @ 147a9e130

void __thiscall FNewSpline::UpdateSpline(FNewSpline *this)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  (**(code **)(this->_padding_ + 0xb8))(&this->_padding_,2);
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  this_00 = &this->ReparamTableNextVersion;
  LOCK();
  bVar3 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(&this_00->Mutex);
  }
  puVar1 = &(this->ReparamTableNextVersion).Value;
  *puVar1 = *puVar1 + 1;
  LOCK();
  aVar2 = (this_00->Mutex).State;
  (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  RebuildLegacyCurves(this);
  return;
}

// ValidateRotScale @ 147a9fc80

void __thiscall FNewSpline::ValidateRotScale(FNewSpline *this)

{
  code *pcVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_00;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (UE::Spline::GValidateRotScale) {
    this_00 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,RotationAttrName);
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this,ScaleAttrName);
    if ((this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) ||
       (this_01 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_165379631287891301>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                         ,0xa9b,"RotSpline && ScaleSpline");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (this_00 == (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
        return;
      }
      if (this_01 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
        return;
      }
    }
    iVar5 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
    iVar6 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetNumPoints
                      (this_00);
    iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      (this_01);
    if (((iVar5 != iVar6) || (iVar6 != iVar7)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_165379631287891293>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                           ,0xaa3,
                           "NumControlPoints == NumRotPoints && NumRotPoints == NumScalePoints"),
       bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar2 = __real_38d1b717;
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        iVar7 = 0;
        if (iVar6 != 0) {
          iVar7 = iVar6 * 4 + -1;
        }
        fVar8 = (float)(**(code **)(this->_padding_ + 0xa8))(&this->_padding_,iVar7);
        fVar9 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::MapParameterToChildSpace
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,RotationAttrName,fVar8);
        fVar10 = (float)(**(code **)(this_00->_padding_ + 0xa8))(&this_00->_padding_);
        if ((fVar2 < (float)((uint)(fVar9 - fVar10) & uVar3)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_165379631287891284>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                               ,0xaac,
                               "FMath::IsNearlyEqual(ExpectedRotParam, ActualRotParam, (1.e-4f))"),
           bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar8 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::MapParameterToChildSpace
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this,ScaleAttrName,fVar8);
        fVar9 = (float)(**(code **)(this_01->_padding_ + 0xa8))(&this_01->_padding_);
        if ((fVar2 < (float)((uint)(fVar8 - fVar9) & uVar3)) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_165379631287891280>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                               ,0xab0,
                               "FMath::IsNearlyEqual(ExpectedScaleParam, ActualScaleParam, (1.e-4f))"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  return;
}

