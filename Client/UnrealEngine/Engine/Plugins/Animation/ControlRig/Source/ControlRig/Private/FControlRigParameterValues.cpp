// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 17

// Add<FEulerTransform_&> @ 14a388db0

void __thiscall
UE::MovieScene::FControlRigParameterValues::Add<FEulerTransform_&>
          (FControlRigParameterValues *this,FName param_1,FEulerTransform *param_2)

{
  FControlRigParameterValueHeader *this_00;
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  dVar3 = (param_2->Location).field0_0x0._s_0.X;
  dVar4 = (param_2->Location).field0_0x0._s_0.Y;
  this_00 = this->Headers + 6;
  dVar5 = (param_2->Location).field0_0x0._s_0.Z;
  dVar6 = (param_2->Rotation).Pitch;
  dVar7 = (param_2->Rotation).Yaw;
  dVar8 = (param_2->Rotation).Roll;
  dVar9 = (param_2->Scale).field0_0x0._s_0.X;
  dVar10 = (param_2->Scale).field0_0x0._s_0.Y;
  dVar2 = (param_2->Scale).field0_0x0._s_0.Z;
  iVar11 = FControlRigParameterValueHeader::Add_GetIndex(this_00,param_1);
  if (this_00->Data == (uchar *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = this->Headers[6].Alignment;
    uVar14 = (ulonglong)(this_00->Data + (ulonglong)this->Headers[6].Capacity * 8 + -1 + uVar14) &
             -uVar14;
  }
  uVar12 = FControlRigParameterValueHeader::GetParameterSize(this_00);
  lVar13 = uVar12 * (longlong)iVar11;
  *(double *)(lVar13 + uVar14) = dVar3;
  ((double *)(lVar13 + uVar14))[1] = dVar4;
  pdVar1 = (double *)(lVar13 + 0x10 + uVar14);
  *pdVar1 = dVar5;
  pdVar1[1] = dVar6;
  pdVar1 = (double *)(lVar13 + 0x20 + uVar14);
  *pdVar1 = dVar7;
  pdVar1[1] = dVar8;
  pdVar1 = (double *)(lVar13 + 0x30 + uVar14);
  *pdVar1 = dVar9;
  pdVar1[1] = dVar10;
  *(double *)(lVar13 + 0x40 + uVar14) = dVar2;
  return;
}

// Add<FMovieSceneControlRigSpaceBaseKey_const_&> @ 14a388e90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValues::Add<FMovieSceneControlRigSpaceBaseKey_const_&>
          (FControlRigParameterValues *this,FName param_1,FMovieSceneControlRigSpaceBaseKey *param_2
          )

{
  undefined8 *puVar1;
  uchar *puVar2;
  undefined8 uVar3;
  FName FVar4;
  int iVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  
  uVar3 = *(undefined8 *)param_2;
  FVar4 = (param_2->ControlRigElement).Name;
  iVar5 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers,param_1);
  puVar2 = this->Headers[0].Data;
  if (puVar2 == (uchar *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = this->Headers[0].Alignment;
    uVar7 = (ulonglong)(puVar2 + (ulonglong)this->Headers[0].Capacity * 8 + -1 + uVar7) & -uVar7;
  }
  uVar6 = FControlRigParameterValueHeader::GetParameterSize(this->Headers);
  puVar1 = (undefined8 *)(uVar6 * (longlong)iVar5 + uVar7);
  *puVar1 = uVar3;
  *(FName *)(puVar1 + 1) = FVar4;
  return;
}

// Add<UE::Math::TVector<float>_> @ 14a389000

TVector<float> * __thiscall
UE::MovieScene::FControlRigParameterValues::Add<UE::Math::TVector<float>_>
          (FControlRigParameterValues *this,FName param_1)

{
  FControlRigParameterValueHeader *this_00;
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  this_00 = this->Headers + 5;
  iVar1 = FControlRigParameterValueHeader::Add_GetIndex(this_00,param_1);
  if (this_00->Data == (uchar *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = this->Headers[5].Alignment;
    uVar3 = (ulonglong)(this_00->Data + (ulonglong)this->Headers[5].Capacity * 8 + -1 + uVar3) &
            -uVar3;
  }
  uVar2 = FControlRigParameterValueHeader::GetParameterSize(this_00);
  return (TVector<float> *)(uVar2 * (longlong)iVar1 + uVar3);
}

// FControlRigParameterValues @ 14a3b64e0

FControlRigParameterValues * __thiscall
UE::MovieScene::FControlRigParameterValues::FControlRigParameterValues
          (FControlRigParameterValues *this,EControlRigParameterBufferIndexStability param_1)

{
  FControlRigParameterValueHeader::FControlRigParameterValueHeader(this->Headers,Space,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 1,Parameter_Bool,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 2,Parameter_Enum,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 3,Parameter_Integer,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 4,Parameter_Scalar,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 5,Parameter_Vector,param_1);
  FControlRigParameterValueHeader::FControlRigParameterValueHeader
            (this->Headers + 6,Parameter_Transform,param_1);
  return this;
}

// ~FControlRigParameterValues @ 14a3bc8f0

void __thiscall
UE::MovieScene::FControlRigParameterValues::~FControlRigParameterValues
          (FControlRigParameterValues *this)

{
  FControlRigParameterValueHeader *pFVar1;
  longlong lVar2;
  FControlRigParameterValueHeader *pFVar3;
  
  pFVar3 = this[1].Headers;
  lVar2 = 7;
  do {
    pFVar1 = pFVar3 + -1;
    pFVar3 = pFVar3 + -1;
    lVar2 = lVar2 + -1;
    if (pFVar1->Data != (uchar *)0x0) {
      FMemory::Free(pFVar1->Data);
    }
  } while (lVar2 != 0);
  return;
}

// AddCurrentValue @ 14a3dbf90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValues::AddCurrentValue
          (FControlRigParameterValues *this,UControlRig *param_1,FRigControlElement *param_2)

{
  double *pdVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 uVar6;
  FName FVar7;
  uchar *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  FRigControlValue *pFVar20;
  ulong64 uVar21;
  TVector<float> *pTVar22;
  ulonglong uVar23;
  float fVar24;
  ERigControlValueType local_res18 [16];
  undefined1 local_1e8 [32];
  TVector<double>_u_0 local_1c8;
  undefined1 local_1a8 [24];
  TRotator<double> local_190;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  FRigControlValue local_118;
  
  FVar7.ComparisonIndex.Value = *(uint *)&param_2->field_0x14;
  FVar7.Number = *(uint *)&param_2->field_0x18;
  switch((param_2->Settings).ControlType) {
  case Bool:
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue
                        (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
    uVar6 = *(undefined1 *)&(pFVar20->FloatStorage).Float00;
    iVar19 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 1,FVar7);
    puVar8 = this->Headers[1].Data;
    if (puVar8 == (uchar *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = this->Headers[1].Alignment;
      uVar23 = (ulonglong)(puVar8 + (ulonglong)this->Headers[1].Capacity * 8 + -1 + uVar23) &
               -uVar23;
    }
    uVar21 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 1);
    *(undefined1 *)(uVar21 * (longlong)iVar19 + uVar23) = uVar6;
    break;
  case Float:
  case ScaleFloat:
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue
                        (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
    fVar3 = (pFVar20->FloatStorage).Float00;
    iVar19 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 4,FVar7);
    puVar8 = this->Headers[4].Data;
    if (puVar8 == (uchar *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = this->Headers[4].Alignment;
      uVar23 = (ulonglong)(puVar8 + (ulonglong)this->Headers[4].Capacity * 8 + -1 + uVar23) &
               -uVar23;
    }
    uVar21 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 4);
    *(float *)(uVar21 * (longlong)iVar19 + uVar23) = fVar3;
    break;
  case Integer:
    local_res18[0] = Current;
    if ((param_2->Settings).ControlEnum.field0_0x0.DebugPtr == (UEnum *)0x0) {
      pFVar20 = UControlRig::GetControlValue
                          (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
      fVar3 = (pFVar20->FloatStorage).Float00;
      iVar19 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 3,FVar7);
      puVar8 = this->Headers[3].Data;
      if (puVar8 == (uchar *)0x0) {
        uVar23 = 0;
      }
      else {
        uVar23 = this->Headers[3].Alignment;
        uVar23 = (ulonglong)(puVar8 + (ulonglong)this->Headers[3].Capacity * 8 + -1 + uVar23) &
                 -uVar23;
      }
      uVar21 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 3);
      *(float *)(uVar21 * (longlong)iVar19 + uVar23) = fVar3;
    }
    else {
      pFVar20 = UControlRig::GetControlValue
                          (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
      uVar6 = *(undefined1 *)&(pFVar20->FloatStorage).Float00;
      iVar19 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 2,FVar7);
      puVar8 = this->Headers[2].Data;
      if (puVar8 == (uchar *)0x0) {
        uVar23 = 0;
      }
      else {
        uVar23 = this->Headers[2].Alignment;
        uVar23 = (ulonglong)(puVar8 + (ulonglong)this->Headers[2].Capacity * 8 + -1 + uVar23) &
                 -uVar23;
      }
      uVar21 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 2);
      *(undefined1 *)(uVar21 * (longlong)iVar19 + uVar23) = uVar6;
    }
    break;
  case Vector2D:
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue
                        (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
    uVar2 = (pFVar20->FloatStorage).Float00;
    uVar4 = (pFVar20->FloatStorage).Float01;
    fVar24 = (pFVar20->FloatStorage).Float02;
    fVar3 = (float)uVar2;
    fVar5 = (float)uVar4;
    goto LAB_14a3dc2b6;
  case Position:
  case Scale:
  case Rotator:
    local_1e8._4_8_ = *(undefined8 *)&param_2->field_0x10;
    local_1e8._12_4_ = *(undefined4 *)&param_2->field_0x18;
    auVar13[0xf] = 0;
    auVar13._0_15_ = local_1e8._1_15_;
    local_1e8._0_16_ = auVar13 << 8;
    iVar19 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers,FVar7);
    puVar8 = this->Headers[0].Data;
    if (puVar8 == (uchar *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = this->Headers[0].Alignment;
      uVar23 = (ulonglong)(puVar8 + (ulonglong)this->Headers[0].Capacity * 8 + -1 + uVar23) &
               -uVar23;
    }
    uVar21 = FControlRigParameterValueHeader::GetParameterSize(this->Headers);
    local_res18[0] = Current;
    pdVar1 = (double *)(uVar21 * (longlong)iVar19 + uVar23);
    *pdVar1 = (double)local_1e8._0_8_;
    pdVar1[1] = (double)local_1e8._8_8_;
    pFVar20 = UControlRig::GetControlValue
                        (param_1,(FRigControlValue *)local_1a8,param_2,local_res18);
    fVar3 = (pFVar20->FloatStorage).Float00;
    fVar5 = (pFVar20->FloatStorage).Float01;
    fVar24 = (pFVar20->FloatStorage).Float02;
    if ((param_2->Settings).ControlType == Rotator) {
      UControlRig::GetControlSpecifiedEulerAngle(param_1,(TVector<double> *)local_1e8,param_2,false)
      ;
      fVar3 = (float)(double)local_1e8._0_8_;
      fVar5 = (float)(double)local_1e8._8_8_;
      fVar24 = (float)(double)local_1e8._16_8_;
    }
LAB_14a3dc2b6:
    pTVar22 = Add<UE::Math::TVector<float>_>(this,FVar7);
    *(ulonglong *)&pTVar22->field0_0x0 = CONCAT44(fVar5,fVar3);
    (pTVar22->field0_0x0)._s_0.Z = fVar24;
    break;
  case Transform:
    local_1e8._4_8_ = *(undefined8 *)&param_2->field_0x10;
    local_1e8._12_4_ = *(undefined4 *)&param_2->field_0x18;
    auVar14[0xf] = 0;
    auVar14._0_15_ = local_1e8._1_15_;
    local_1e8._0_16_ = auVar14 << 8;
    Add<FMovieSceneControlRigSpaceBaseKey_const_&>
              (this,FVar7,(FMovieSceneControlRigSpaceBaseKey *)local_1e8);
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue(param_1,&local_118,param_2,local_res18);
    fVar3 = (pFVar20->FloatStorage).Float20;
    fVar5 = (pFVar20->FloatStorage).Float22;
    dVar10 = (double)(pFVar20->FloatStorage).Float03;
    dVar12 = (double)(pFVar20->FloatStorage).Float01;
    dVar9 = (double)(pFVar20->FloatStorage).Float11;
    local_1a8._16_8_ = (undefined8)(pFVar20->FloatStorage).Float12;
    dVar11 = (double)(pFVar20->FloatStorage).Float21;
    local_1a8._8_4_ = SUB84(dVar9,0);
    local_1a8._0_8_ = (double)(pFVar20->FloatStorage).Float10;
    local_1a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_1e8._8_4_ = SUB84(dVar12,0);
    local_1e8._0_8_ = (double)(pFVar20->FloatStorage).Float00;
    local_1e8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    local_1e8._24_4_ = SUB84(dVar10,0);
    local_1e8._16_8_ = (double)(pFVar20->FloatStorage).Float02;
    local_1e8._28_4_ = (int)((ulonglong)dVar10 >> 0x20);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1e8,&local_190);
    unique0x100003e1 = SUB84(dVar11,0);
    local_178 = (double)fVar3;
    unique0x100003e5 = (int)((ulonglong)dVar11 >> 0x20);
    local_168 = (double)fVar5;
    UControlRig::GetControlSpecifiedEulerAngle
              (param_1,(TVector<double> *)&local_1c8._s_0,param_2,false);
    local_190.Pitch = local_1c8._s_0.Y;
    local_190.Yaw = local_1c8._s_0.Z;
    local_190.Roll = local_1c8._s_0.X;
    Add<FEulerTransform_&>(this,FVar7,(FEulerTransform *)local_1a8);
    break;
  case TransformNoScale:
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue(param_1,&local_118,param_2,local_res18);
    uVar18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dVar11 = (double)(pFVar20->FloatStorage).Float01;
    dVar9 = (double)(pFVar20->FloatStorage).Float11;
    local_1a8._8_4_ = SUB84(dVar9,0);
    local_1a8._0_8_ = (double)(pFVar20->FloatStorage).Float10;
    local_1a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dVar9 = (double)(pFVar20->FloatStorage).Float03;
    local_1a8._16_8_ = (undefined8)(pFVar20->FloatStorage).Float12;
    local_1e8._8_4_ = SUB84(dVar11,0);
    local_1e8._0_8_ = (double)(pFVar20->FloatStorage).Float00;
    local_1e8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_1e8._24_4_ = SUB84(dVar9,0);
    local_1e8._16_8_ = (double)(pFVar20->FloatStorage).Float02;
    local_1e8._28_4_ = (int)((ulonglong)dVar9 >> 0x20);
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1e8,&local_190);
    dStack_170 = (double)uVar17;
    local_178 = (double)uVar16;
    local_168 = uVar18;
    goto LAB_14a3dc5ac;
  case EulerTransform:
    local_1e8._4_8_ = *(undefined8 *)&param_2->field_0x10;
    local_1e8._12_4_ = *(undefined4 *)&param_2->field_0x18;
    auVar15[0xf] = 0;
    auVar15._0_15_ = local_1e8._1_15_;
    local_1e8._0_16_ = auVar15 << 8;
    Add<FMovieSceneControlRigSpaceBaseKey_const_&>
              (this,FVar7,(FMovieSceneControlRigSpaceBaseKey *)local_1e8);
    local_res18[0] = Current;
    pFVar20 = UControlRig::GetControlValue(param_1,&local_118,param_2,local_res18);
    local_1a8._8_8_ = (double)(pFVar20->FloatStorage).Float10;
    local_1a8._0_8_ = (double)(pFVar20->FloatStorage).Float03;
    local_1a8._16_8_ = (undefined8)(pFVar20->FloatStorage).Float11;
    local_168 = (undefined8)(pFVar20->FloatStorage).Float20;
    dStack_170 = (double)(pFVar20->FloatStorage).Float13;
    local_178 = (double)(pFVar20->FloatStorage).Float12;
LAB_14a3dc5ac:
    UControlRig::GetControlSpecifiedEulerAngle
              (param_1,(TVector<double> *)&local_1c8._s_0,param_2,false);
    local_190.Pitch = local_1c8._s_0.Y;
    local_190.Yaw = local_1c8._s_0.Z;
    local_190.Roll = local_1c8._s_0.X;
    Add<FEulerTransform_&>(this,FVar7,(FEulerTransform *)local_1a8);
  }
  return;
}

// ApplyAndRemove @ 14a3eb480

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValues::ApplyAndRemove
          (FControlRigParameterValues *this,UControlRig *param_1,FName param_2)

{
  FControlRigParameterValueHeader *pFVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  pFVar1 = this[1].Headers;
  for (; this->Headers != pFVar1; this = (FControlRigParameterValues *)((longlong)this + 0x10)) {
    iVar2 = FControlRigParameterValueHeader::Find(this->Headers,param_2);
    if (iVar2 != -1) {
      if (this->Headers[0].Data == (uchar *)0x0) {
        pvVar3 = (void *)0x0;
      }
      else {
        uVar4 = this->Alignment;
        pvVar3 = (void *)((ulonglong)
                          (this->Headers[0].Data +
                          (ulonglong)this->Headers[0].Capacity * 8 + -1 + uVar4) & -uVar4);
      }
      FControlRigParameterValueHeader::Apply(this->Headers,param_1,param_2,iVar2,pvVar3);
      FControlRigParameterValueHeader::RemoveAt(this->Headers,iVar2);
    }
  }
  return;
}

// ApplyTo @ 14a3eb6c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValues::ApplyTo
          (FControlRigParameterValues *this,UControlRig *param_1)

{
  FControlRigParameterValueHeader *this_00;
  FControlRigParameterValues *pFVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uchar *puVar8;
  uchar *puVar9;
  ushort *puVar10;
  uint uVar11;
  uchar *puVar12;
  
  if (this != this + 1) {
    puVar10 = &this->Headers[0].NumElements;
    do {
      puVar8 = (uchar *)0x0;
      uVar2 = *puVar10;
      this_00 = (FControlRigParameterValueHeader *)(puVar10 + -5);
      uVar11 = 0;
      puVar12 = puVar8;
      if (uVar2 != 0) {
        uVar11 = (uint)uVar2;
        puVar12 = this_00->Data;
      }
      puVar9 = puVar8;
      if (this_00->Data != (uchar *)0x0) {
        uVar6 = (ulonglong)((byte)puVar10[1] & 0x7f);
        puVar9 = (uchar *)((ulonglong)(this_00->Data + (ulonglong)puVar10[-1] * 8 + -1 + uVar6) &
                          -uVar6);
      }
      if (uVar2 != 0) {
        do {
          uVar7 = (uint)puVar8;
          uVar5 = 0;
          if ((int)uVar7 < (int)uVar11) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FControlRigParameterValueHeader::Apply
                    (this_00,param_1,*(FName *)(puVar12 + (longlong)(int)uVar7 * 8),uVar7,puVar9);
          puVar8 = (uchar *)(ulonglong)(uVar7 + 1);
        } while ((int)(uVar7 + 1) < (int)(uint)*puVar10);
      }
      pFVar1 = (FControlRigParameterValues *)(puVar10 + 3);
      puVar10 = puVar10 + 8;
    } while (pFVar1 != this + 1);
  }
  return;
}

// CopyFrom @ 14a3fece0

void __thiscall
UE::MovieScene::FControlRigParameterValues::CopyFrom
          (FControlRigParameterValues *this,FControlRigParameterValues *param_1,FName param_2)

{
  uchar *puVar1;
  int iVar2;
  void *pvVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FControlRigParameterValueHeader *this_00;
  
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers,param_2);
  uVar6 = 0;
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers,param_2);
    puVar1 = this->Headers[0].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[0].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[0].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 1,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 1,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 1,param_2);
    puVar1 = this->Headers[1].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[1].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[1].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 1);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 1);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 2,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 2,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 2,param_2);
    puVar1 = this->Headers[2].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[2].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[2].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 2);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 2);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 3,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 3,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 3,param_2);
    puVar1 = this->Headers[3].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[3].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[3].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 3);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 3);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 4,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 4,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 4,param_2);
    puVar1 = this->Headers[4].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[4].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[4].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 4);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 4);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 5,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 5,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this->Headers + 5,param_2);
    puVar1 = this->Headers[5].Data;
    uVar7 = uVar6;
    if (puVar1 != (uchar *)0x0) {
      uVar7 = this->Headers[5].Alignment;
      uVar7 = (ulonglong)(puVar1 + (uVar7 - 1) + (ulonglong)this->Headers[5].Capacity * 8) & -uVar7;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 5);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this->Headers + 5);
    memcpy((void *)(uVar7 + uVar4 * (longlong)iVar2),pvVar3,uVar5);
  }
  this_00 = this->Headers + 6;
  iVar2 = FControlRigParameterValueHeader::Find(param_1->Headers + 6,param_2);
  if (iVar2 != -1) {
    pvVar3 = FControlRigParameterValueHeader::GetParameter(param_1->Headers + 6,iVar2);
    iVar2 = FControlRigParameterValueHeader::Add_GetIndex(this_00,param_2);
    if (this_00->Data != (uchar *)0x0) {
      uVar6 = this->Headers[6].Alignment;
      uVar6 = (ulonglong)(this_00->Data + (uVar6 - 1) + (ulonglong)this->Headers[6].Capacity * 8) &
              -uVar6;
    }
    uVar4 = FControlRigParameterValueHeader::GetParameterSize(this_00);
    uVar5 = FControlRigParameterValueHeader::GetParameterSize(this_00);
    memcpy((void *)((longlong)iVar2 * uVar4 + uVar6),pvVar3,uVar5);
  }
  return;
}

// Find @ 14a40a150

FControlRigValueView * __thiscall
UE::MovieScene::FControlRigParameterValues::Find
          (FControlRigParameterValues *this,FControlRigValueView *__return_storage_ptr__,
          FName param_1)

{
  FControlRigParameterValueHeader *pFVar1;
  EControlRigControlType EVar2;
  int iVar3;
  void *pvVar4;
  
  pFVar1 = this[1].Headers;
  while( true ) {
    if (this->Headers == pFVar1) {
      __return_storage_ptr__->Value = (void *)0x0;
      __return_storage_ptr__->Type = Num;
      return __return_storage_ptr__;
    }
    iVar3 = FControlRigParameterValueHeader::Find(this->Headers,param_1);
    if (iVar3 != -1) break;
    this = (FControlRigParameterValues *)((longlong)this + 0x10);
  }
  EVar2 = this->Headers[0].Type;
  pvVar4 = FControlRigParameterValueHeader::GetParameter(this->Headers,iVar3);
  __return_storage_ptr__->Value = pvVar4;
  __return_storage_ptr__->Type = EVar2;
  return __return_storage_ptr__;
}

// FindParameter @ 14a40cc30

FControlRigValueView * __thiscall
UE::MovieScene::FControlRigParameterValues::FindParameter
          (FControlRigParameterValues *this,FControlRigValueView *__return_storage_ptr__,
          FName param_1)

{
  EControlRigControlType EVar1;
  FControlRigParameterValueHeader *this_00;
  int iVar2;
  void *pvVar3;
  
  this_00 = this->Headers;
  do {
    this_00 = this_00 + 1;
    if (this_00 == this[1].Headers) {
      __return_storage_ptr__->Value = (void *)0x0;
      __return_storage_ptr__->Type = Num;
      return __return_storage_ptr__;
    }
    iVar2 = FControlRigParameterValueHeader::Find(this_00,param_1);
  } while (iVar2 == -1);
  EVar1 = this_00->Type;
  pvVar3 = FControlRigParameterValueHeader::GetParameter(this_00,iVar2);
  __return_storage_ptr__->Value = pvVar3;
  __return_storage_ptr__->Type = EVar1;
  return __return_storage_ptr__;
}

// GetHeader @ 14a414c40

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValues::GetHeader
          (FControlRigParameterValues *this,EControlRigControlType param_1)

{
  return this->Headers + param_1;
}

// GetHeader @ 14a414c60

FControlRigParameterValueHeader * __thiscall
UE::MovieScene::FControlRigParameterValues::GetHeader
          (FControlRigParameterValues *this,EControlRigControlType param_1)

{
  return this->Headers + param_1;
}

// InitializeParameters @ 14a423290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FControlRigParameterValues::InitializeParameters
          (FControlRigParameterValues *this,UControlRig *param_1,
          FPreAnimatedControlRigParameterStorage *param_2)

{
  ushort *puVar1;
  undefined1 *this_00;
  byte *pbVar2;
  ushort uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  FPreAnimatedBufferPairs *this_01;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *pTVar10;
  FPreAnimatedParameterKey *pFVar11;
  FRigControlElement *pFVar12;
  int iVar13;
  ulonglong uVar14;
  atomic<int> *paVar15;
  longlong lVar16;
  FName *pFVar17;
  int local_res10;
  int local_res20;
  int local_c8;
  FPreAnimatedStorageIndex local_c0 [2];
  FWeakObjectPtr local_b8;
  FPreAnimatedStorageIndex local_b0 [2];
  FName local_a8;
  TSharedPtr<UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedBufferPairs,1>
  local_a0;
  UControlRig *local_90;
  FName *local_88;
  FControlRigParameterValues *local_80;
  undefined1 local_78 [16];
  FPreAnimatedParameterKey local_68;
  
  if ((param_1 == (UControlRig *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Rig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigParameterBuffer.cpp"
                         ,0x228,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_res10 = 0;
  local_res20 = 0;
  local_c8 = 0;
  if (param_1 != (UControlRig *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_b8.ObjectIndex = 0;
    local_b8.ObjectSerialNumber = 0;
    local_90 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_90);
    local_c8 = local_b8.ObjectSerialNumber;
    local_res20 = local_b8.ObjectIndex;
  }
  iVar13 = 0;
  local_80 = this + 1;
  if (this != local_80) {
    do {
      uVar3 = this->Headers[0].NumElements;
      if (uVar3 != 0) {
        pFVar17 = (FName *)((FControlRigParameterValueHeader *)&this->Headers[0].Data)->Data;
        uVar14 = 0;
        if (uVar3 != 0) {
          uVar14 = (ulonglong)uVar3;
        }
        local_88 = pFVar17 + uVar14;
        if (pFVar17 != local_88) {
          do {
            FVar4 = *pFVar17;
            local_78._0_4_ = local_res20;
            local_78._4_4_ = local_c8;
            local_78._8_8_ = FVar4;
            pTVar10 = TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex>,TDefaultMapHashableKeyFuncs<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex,0>,FDefaultSetAllocator>
                              *)&param_2->field_0x18,(TTuple<FObjectKey,FName> *)local_78);
            if (pTVar10 !=
                (TTuple<TTuple<FObjectKey,FName>,UE::MovieScene::FPreAnimatedStorageIndex> *)0x0) {
              iVar13 = *(int *)&pTVar10->field_0x10;
              if ((iVar13 != -1) &&
                 (lVar16 = (longlong)iVar13 * 0x38, local_b0[0].Value = iVar13,
                 (*(byte *)(lVar16 + 0x30 + *(longlong *)&param_2->field_0x68) & 3) != 1)) {
                this_00 = &param_2->field_0xa0;
                pFVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                          ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                  *)this_00,local_b0);
                if (pFVar11 == (FPreAnimatedParameterKey *)0x0) {
                  local_a8 = FVar4;
                  if ((param_1 == (UControlRig *)0x0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Rig",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Sequencer\\MovieSceneControlRigSystem.cpp"
                                         ,0x2ed,L""), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    uVar9 = (*pcVar6)();
                    return (bool)uVar9;
                  }
                  FPreAnimatedControlRigParameterTraits::GetBuffers
                            ((FPreAnimatedControlRigParameterTraits *)&param_2->field_0xc8,&local_a0
                             ,param_1);
                  pFVar12 = (FRigControlElement *)
                            (**(code **)(param_1->_padding_ + 0x3c8))(param_1,&local_a8);
                  this_01 = local_a0.Object;
                  if (pFVar12 != (FRigControlElement *)0x0) {
                    if ((local_a0.Object == (FPreAnimatedBufferPairs *)0x0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    AddCurrentValue(&this_01->Transient,param_1,pFVar12);
                  }
                  FVar7.ReferenceController = local_a0.SharedReferenceCount.ReferenceController;
                  if (local_a0.SharedReferenceCount.ReferenceController ==
                      (TReferenceControllerBase<1> *)0x0) {
                    paVar15 = (atomic<int> *)&DAT_00000008;
                  }
                  else {
                    paVar15 = &(local_a0.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount;
                    LOCK();
                    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
                    UNLOCK();
                  }
                  local_68.Buffer.Object = this_01;
                  local_68.Buffer.SharedReferenceCount.ReferenceController =
                       local_a0.SharedReferenceCount.ReferenceController;
                  if (local_a0.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
                    UNLOCK();
                  }
                  local_68.ParameterName = local_a8;
                  local_68.bPersistent = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_a0.SharedReferenceCount.ReferenceController);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar7.ReferenceController);
                  lVar5 = *(longlong *)&param_2->field_0x68;
                  local_c0[0].Value = iVar13;
                  if ((*(byte *)(lVar5 + 0x30 + lVar16) & 1) == 0) {
LAB_14a423562:
                    FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey::operator=
                              ((FPreAnimatedParameterKey *)(lVar5 + 0x10 + lVar16),&local_68);
                    pbVar2 = (byte *)(lVar5 + 0x30 + lVar16);
                    *pbVar2 = *pbVar2 | 1;
                  }
                  else {
                    pFVar11 = TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                              ::Find((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                      *)this_00,local_c0);
                    if ((pFVar11 != (FPreAnimatedParameterKey *)0x0) &&
                       (bVar8 = Assert::Private::ExecCheckImplInternal
                                          (&bGEnsureHasExecuted<3111672766223352226>,false,
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PreAnimatedState\\MovieScenePreAnimatedStateStorage.h"
                                           ,0x1a2,
                                           "!CachedData.bInitialized || !TransientPreAnimatedStorage.Contains(StorageIndex)"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      uVar9 = (*pcVar6)();
                      return (bool)uVar9;
                    }
                    if ((*(byte *)(lVar5 + 0x30 + lVar16) & 1) == 0) goto LAB_14a423562;
                    TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                    ::
                    Emplace<UE::MovieScene::FPreAnimatedStorageIndex_const_&,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey>
                              ((TSortedMap<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedControlRigParameterTraits::FPreAnimatedParameterKey,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FPreAnimatedStorageIndex_const_&>_>
                                *)this_00,local_c0,&local_68);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_68.Buffer.SharedReferenceCount.ReferenceController);
                }
              }
            }
            pFVar17 = pFVar17 + 1;
          } while (pFVar17 != local_88);
        }
      }
      puVar1 = &this->Headers[0].NumElements;
      this = (FControlRigParameterValues *)((longlong)this + 0x10);
      iVar13 = local_res10 + (uint)*puVar1;
      local_res10 = iVar13;
    } while (this != local_80);
  }
  return iVar13 != 0;
}

// OptimizeForLookup @ 14a431970

void __thiscall
UE::MovieScene::FControlRigParameterValues::OptimizeForLookup(FControlRigParameterValues *this)

{
  FControlRigParameterValueHeader *pFVar1;
  
  pFVar1 = this[1].Headers;
  for (; this->Headers != pFVar1; this = (FControlRigParameterValues *)((longlong)this + 0x10)) {
    if ((bool)this->bStableIndices) {
      this->Headers[0].Alignment = this->Alignment;
      this->Headers[0].bStableIndices = '\0';
      FControlRigParameterValueHeader::Resort(this->Headers);
    }
  }
  return;
}

// PopulateFrom @ 14a4338d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FControlRigParameterValues::PopulateFrom
          (FControlRigParameterValues *this,UControlRig *param_1)

{
  FControlRigParameterValueHeader *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 *local_28 [2];
  
  (**(code **)(param_1->_padding_ + 0x3c0))(param_1,local_28);
  iVar3 = (int)local_28[1];
  puVar2 = local_28[0] + iVar3;
  puVar4 = local_28[0];
  while( true ) {
    if ((int)local_28[1] != iVar3) {
      `TCheckedPointerIterator<FRigControlElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar4 == puVar2) break;
    AddCurrentValue(this,param_1,(FRigControlElement *)*puVar4);
    puVar4 = puVar4 + 1;
  }
  if (local_28[0] != (undefined8 *)0x0) {
    FMemory::Free(local_28[0]);
  }
  pFVar1 = this[1].Headers;
  for (; this->Headers != pFVar1; this = (FControlRigParameterValues *)((longlong)this + 0x10)) {
    FControlRigParameterValueHeader::Resort(this->Headers);
  }
  return;
}

// Reset @ 14a44fdc0

void __thiscall UE::MovieScene::FControlRigParameterValues::Reset(FControlRigParameterValues *this)

{
  FControlRigParameterValues *pFVar1;
  
  pFVar1 = this + 1;
  for (; this != pFVar1; this = (FControlRigParameterValues *)((longlong)this + 0x10)) {
    this->Headers[0].NumElements = 0;
  }
  return;
}

