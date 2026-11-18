// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 36

// FLegacySpline @ 147a24f10

FLegacySpline * __thiscall FLegacySpline::FLegacySpline(FLegacySpline *this,FSplineCurves *param_1)

{
  FInterpCurveFloat *pFVar1;
  undefined1 *puVar2;
  int iVar3;
  void *_Src;
  
  pFVar1 = &this->ReparamTable;
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x10 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  puVar2 = &(this->ReparamTable).field_0xc;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x10 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x10 = 0;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  FInterpCurveVector::operator=(&this->PositionCurve,&param_1->Position);
  FInterpCurveQuat::operator=(&this->RotationCurve,&param_1->Rotation);
  FInterpCurveVector::operator=(&this->ScaleCurve,&param_1->Scale);
  if (pFVar1 != &param_1->ReparamTable) {
    iVar3 = *(int *)&(param_1->ReparamTable).field_0x8;
    _Src = *(void **)&param_1->ReparamTable;
    *(int *)&(this->ReparamTable).field_0x8 = iVar3;
    if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar3,*(int *)puVar2,(ForAnyElementType *)pFVar1,iVar3,(int *)puVar2);
      if (iVar3 != 0) {
        memcpy(*(void **)pFVar1,_Src,(longlong)iVar3 * 0x14);
      }
    }
  }
  (this->ReparamTable).field_0x10 = (param_1->ReparamTable).field_0x10;
  *(undefined4 *)&(this->ReparamTable).field_0x14 =
       *(undefined4 *)&(param_1->ReparamTable).field_0x14;
  return this;
}

// FLegacySpline @ 147a25020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLegacySpline * __thiscall FLegacySpline::FLegacySpline(FLegacySpline *this,FNewSpline *param_1)

{
  FUpdateSplineParams local_38;
  
  *(undefined8 *)&this->PositionCurve = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x8 = 0;
  *(undefined8 *)&(this->PositionCurve).field_0x10 = 0;
  *(undefined8 *)&this->RotationCurve = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x8 = 0;
  *(undefined8 *)&(this->RotationCurve).field_0x10 = 0;
  *(undefined8 *)&this->ScaleCurve = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x8 = 0;
  *(undefined8 *)&(this->ScaleCurve).field_0x10 = 0;
  *(undefined8 *)&this->ReparamTable = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x8 = 0;
  *(undefined8 *)&(this->ReparamTable).field_0x10 = 0;
  *(undefined4 *)&(this->PositionCurve).field_0x14 = 0;
  *(undefined4 *)&(this->RotationCurve).field_0x14 = 0;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = 0;
  *(undefined4 *)&(this->ReparamTable).field_0x14 = 0;
  FInterpCurveVector::operator=(&this->PositionCurve,&param_1->PositionCurve);
  FInterpCurveQuat::operator=(&this->RotationCurve,&param_1->RotationCurve);
  FInterpCurveVector::operator=(&this->ScaleCurve,&param_1->ScaleCurve);
  local_38.bClosedLoop = (bool)(this->PositionCurve).field_0x10;
  local_38.Scale3D.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_38.Scale3D.field0_0x0._s_0.Y = _UNK_150689688;
  local_38.bStationaryEndpoints = false;
  local_38.Scale3D.field0_0x0._s_0.Z = __real_3ff0000000000000;
  local_38.ReparamStepsPerSegment = 10;
  local_38.bLoopPositionOverride = false;
  local_38.LoopPosition = 0.0;
  UpdateSpline(this,&local_38);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)this,0.0,false);
  return this;
}

// operator= @ 147a2afe0

FLegacySpline * __thiscall FLegacySpline::operator=(FLegacySpline *this,FLegacySpline *param_1)

{
  FInterpCurveQuat *pFVar1;
  FInterpCurveQuat *pFVar2;
  FInterpCurveVector *pFVar3;
  FInterpCurveVector *pFVar4;
  FInterpCurveFloat *pFVar5;
  FInterpCurveFloat *pFVar6;
  
  if (this != param_1) {
    if (*(void **)&this->PositionCurve != (void *)0x0) {
      FMemory::Free(*(void **)&this->PositionCurve);
    }
    *(undefined8 *)&this->PositionCurve = *(undefined8 *)&param_1->PositionCurve;
    *(undefined8 *)&param_1->PositionCurve = 0;
    *(undefined4 *)&(this->PositionCurve).field_0x8 =
         *(undefined4 *)&(param_1->PositionCurve).field_0x8;
    *(undefined4 *)&(this->PositionCurve).field_0xc =
         *(undefined4 *)&(param_1->PositionCurve).field_0xc;
    *(undefined8 *)&(param_1->PositionCurve).field_0x8 = 0;
  }
  pFVar1 = &param_1->RotationCurve;
  pFVar2 = &this->RotationCurve;
  (this->PositionCurve).field_0x10 = (param_1->PositionCurve).field_0x10;
  *(undefined4 *)&(this->PositionCurve).field_0x14 =
       *(undefined4 *)&(param_1->PositionCurve).field_0x14;
  if (pFVar2 != pFVar1) {
    if (*(void **)pFVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar2);
    }
    *(undefined8 *)pFVar2 = *(undefined8 *)pFVar1;
    *(undefined8 *)pFVar1 = 0;
    *(undefined4 *)&(this->RotationCurve).field_0x8 =
         *(undefined4 *)&(param_1->RotationCurve).field_0x8;
    *(undefined4 *)&(this->RotationCurve).field_0xc =
         *(undefined4 *)&(param_1->RotationCurve).field_0xc;
    *(undefined8 *)&(param_1->RotationCurve).field_0x8 = 0;
  }
  (this->RotationCurve).field_0x10 = (param_1->RotationCurve).field_0x10;
  pFVar3 = &param_1->ScaleCurve;
  *(undefined4 *)&(this->RotationCurve).field_0x14 =
       *(undefined4 *)&(param_1->RotationCurve).field_0x14;
  pFVar4 = &this->ScaleCurve;
  if (pFVar4 != pFVar3) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(undefined4 *)&(this->ScaleCurve).field_0x8 = *(undefined4 *)&(param_1->ScaleCurve).field_0x8;
    *(undefined4 *)&(this->ScaleCurve).field_0xc = *(undefined4 *)&(param_1->ScaleCurve).field_0xc;
    *(undefined8 *)&(param_1->ScaleCurve).field_0x8 = 0;
  }
  pFVar6 = &param_1->ReparamTable;
  (this->ScaleCurve).field_0x10 = (param_1->ScaleCurve).field_0x10;
  pFVar5 = &this->ReparamTable;
  *(undefined4 *)&(this->ScaleCurve).field_0x14 = *(undefined4 *)&(param_1->ScaleCurve).field_0x14;
  if (pFVar5 != pFVar6) {
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    *(undefined4 *)&(this->ReparamTable).field_0x8 =
         *(undefined4 *)&(param_1->ReparamTable).field_0x8;
    *(undefined4 *)&(this->ReparamTable).field_0xc =
         *(undefined4 *)&(param_1->ReparamTable).field_0xc;
    *(undefined8 *)&(param_1->ReparamTable).field_0x8 = 0;
  }
  (this->ReparamTable).field_0x10 = (param_1->ReparamTable).field_0x10;
  *(undefined4 *)&(this->ReparamTable).field_0x14 =
       *(undefined4 *)&(param_1->ReparamTable).field_0x14;
  return this;
}

// AddPoint @ 147a30900

void __thiscall FLegacySpline::AddPoint(FLegacySpline *this,FSplinePoint *param_1)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  EInterpCurveMode EVar7;
  TQuat<double> *pTVar8;
  uint uVar9;
  int iVar10;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_178;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_120;
  FInterpCurvePoint<UE::Math::TQuat<double>_> local_c8;
  TQuat<double> local_48;
  
  iVar10 = 0;
  fVar2 = param_1->InputKey;
  uVar9 = *(uint *)&(this->PositionCurve).field_0x8;
  while( true ) {
    uVar4 = uVar9;
    if ((int)uVar4 < 1) {
      EVar7 = ConvertSplinePointTypeToInterpCurveMode((uint)(param_1->Type).Value);
      local_178.OutVal.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
      local_178.OutVal.field0_0x0._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
      local_178.InVal = param_1->InputKey;
      local_178.OutVal.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
      local_178.InterpMode.Value = (uchar)EVar7;
      local_178.ArriveTangent.field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X;
      local_178.ArriveTangent.field0_0x0._s_0.Y = (param_1->ArriveTangent).field0_0x0._s_0.Y;
      local_178.ArriveTangent.field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z;
      local_178.LeaveTangent.field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X;
      local_178.LeaveTangent.field0_0x0._s_0.Y = (param_1->LeaveTangent).field0_0x0._s_0.Y;
      local_178.LeaveTangent.field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z;
      TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
                ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                  *)this,&local_178,iVar10);
      pTVar8 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_48);
      local_c8.InVal = param_1->InputKey;
      local_c8.OutVal.X = pTVar8->X;
      local_c8.OutVal.Y = pTVar8->Y;
      local_c8.OutVal.Z = pTVar8->Z;
      local_c8.OutVal.W = pTVar8->W;
      local_c8.ArriveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
      local_c8.ArriveTangent.W = UE::Math::TQuat<double>::Identity.W;
      local_c8.LeaveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
      local_c8.LeaveTangent.W = UE::Math::TQuat<double>::Identity.W;
      local_c8.ArriveTangent.X = UE::Math::TQuat<double>::Identity.X;
      local_c8.ArriveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
      local_c8.LeaveTangent.X = UE::Math::TQuat<double>::Identity.X;
      local_c8.LeaveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
      local_c8.InterpMode.Value = '\x01';
      TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Insert
                ((TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *)
                 &this->RotationCurve,&local_c8,iVar10);
      local_120.OutVal.field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
      local_120.OutVal.field0_0x0._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
      local_120.InVal = param_1->InputKey;
      local_120.OutVal.field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
      local_120.InterpMode.Value = '\x01';
      local_120.ArriveTangent.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_120.ArriveTangent.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_120.LeaveTangent.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_120.LeaveTangent.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_120.ArriveTangent.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_120.LeaveTangent.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
                ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                  *)&this->ScaleCurve,&local_120,iVar10);
      return;
    }
    uVar9 = uVar4 >> 1;
    uVar1 = uVar9 + iVar10;
    uVar6 = 0;
    if ((int)uVar1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    if (*(float *)((longlong)(int)uVar1 * 0x58 + *(longlong *)&this->PositionCurve) <= fVar2) {
      iVar10 = uVar1 + 1;
      uVar9 = uVar4 + (-1 - uVar9);
    }
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Evaluate @ 147a427f0

TVector<double> * __thiscall
FLegacySpline::Evaluate(FLegacySpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = 0.0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)this,__return_storage_ptr__,param_1,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// EvaluateDerivative @ 147a42960

TVector<double> * __thiscall
FLegacySpline::EvaluateDerivative
          (FLegacySpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = 0.0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
            ((FInterpCurve<UE::Math::TVector<double>_> *)this,__return_storage_ptr__,param_1,
             (TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// EvaluateRotation @ 147a43050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
FLegacySpline::EvaluateRotation
          (FLegacySpline *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  TQuat<double> local_28;
  
  local_28.Z = ___xmm_3ff00000000000000000000000000000;
  local_28.W = _UNK_15061cbc8;
  local_28.X = 0.0;
  local_28.Y = 0.0;
  FInterpCurve<UE::Math::TQuat<double>_>::Eval
            ((FInterpCurve<UE::Math::TQuat<double>_> *)&this->RotationCurve,__return_storage_ptr__,
             param_1,&local_28);
  return __return_storage_ptr__;
}

// EvaluateScale @ 147a434a0

TVector<double> * __thiscall
FLegacySpline::EvaluateScale
          (FLegacySpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = 0.0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,__return_storage_ptr__,
             param_1,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// FindNearest @ 147a464c0

float __thiscall
FLegacySpline::FindNearest(FLegacySpline *this,TVector<double> *param_1,float *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float afStackX_8 [2];
  float afStackX_20 [2];
  
  iVar5 = *(int *)&(this->PositionCurve).field_0x8;
  iVar3 = iVar5;
  if ((this->PositionCurve).field_0x10 == '\0') {
    iVar3 = iVar5 + -1;
  }
  if (1 < iVar5) {
    fVar6 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                      ((FInterpCurve<UE::Math::TVector<double>_> *)this,param_1,0,afStackX_8);
    iVar5 = 1;
    if (1 < iVar3) {
      do {
        fVar7 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                          ((FInterpCurve<UE::Math::TVector<double>_> *)this,param_1,iVar5,
                           afStackX_20);
        if (afStackX_20[0] < afStackX_8[0]) {
          afStackX_8[0] = afStackX_20[0];
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    *param_2 = afStackX_8[0];
    return fVar6;
  }
  if (iVar5 != 1) {
    return 0.0;
  }
  lVar1 = *(longlong *)&this->PositionCurve;
  dVar10 = (param_1->field0_0x0)._s_0.Y - *(double *)(lVar1 + 0x10);
  dVar8 = (param_1->field0_0x0)._s_0.Z - *(double *)(lVar1 + 0x18);
  dVar9 = (param_1->field0_0x0)._s_0.X - *(double *)(lVar1 + 8);
  *param_2 = (float)(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
  if (*(int *)&(this->PositionCurve).field_0x8 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return **(float **)&this->PositionCurve;
}

// FindNearestOnSegment @ 147a468c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FLegacySpline::FindNearestOnSegment
          (FLegacySpline *this,TVector<double> *param_1,int param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  ForElementType<double> FVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStackY_1f8 [32];
  undefined4 uStack_15c;
  TArrayView<double_const_,int> TStack_158;
  TPolynomialRootSolver<double,5> TStack_148;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  
  if ((param_2 < 0) || (*(int *)&(this->PositionCurve).field_0x8 <= param_2)) {
    return 0.0;
  }
  uStack_e0 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar20 = *(uint *)&(this->PositionCurve).field_0x8;
  uVar22 = 0;
  uVar24 = 0;
  lVar19 = (longlong)param_2;
  cVar7 = (this->PositionCurve).field_0x10;
  uVar14 = uVar20 - 1;
  if ((cVar7 == '\0') || (param_2 != uVar14)) {
    uVar24 = param_2 + 1;
  }
  if (-1 < param_2) {
    uVar21 = uVar14;
    if (cVar7 != '\0') {
      uVar21 = uVar20;
    }
    if (param_2 < (int)uVar21) goto LAB_145fbfa20;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("PtIdx >= 0 && ((bIsLooped && PtIdx < NumPoints) || (!bIsLooped && PtIdx < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x251,L"");
  if (bVar11) {
    pcVar8 = (code *)swi(3);
    fVar26 = (float)(*pcVar8)();
    return fVar26;
  }
LAB_145fbfa20:
  uVar20 = 0;
  if (((this->PositionCurve).field_0x10 == '\0') || (param_2 != uVar14)) {
    uVar14 = uVar20;
    if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar14 = ~uVar24 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    fVar26 = *(float *)((longlong)(int)uVar24 * 0x58 + *(longlong *)&this->PositionCurve);
  }
  else {
    uVar21 = 0;
    if ((int)uVar14 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar21 = ~uVar14 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    fVar26 = *(float *)((longlong)(int)uVar14 * 0x58 + *(longlong *)&this->PositionCurve) +
             *(float *)&(this->PositionCurve).field_0x14;
  }
  uVar21 = (uint)~param_2 >> 0x1f;
  uVar14 = uVar20;
  if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
    uVar14 = uVar21;
  }
  if ((uVar14 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    fVar26 = (float)(*pcVar8)();
    return fVar26;
  }
  iVar15 = *(int *)&(this->PositionCurve).field_0x8;
  lVar23 = lVar19 * 0x58;
  uVar14 = 0;
  if (*(char *)(*(longlong *)&this->PositionCurve + 0x50 + lVar23) == '\x02') {
    uVar12 = uVar14;
    if (param_2 < iVar15) {
      uVar12 = uVar21;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    lVar16 = *(longlong *)&this->PositionCurve;
    dVar31 = *(double *)(lVar16 + 0x10 + lVar23) - (param_1->field0_0x0)._s_0.Y;
    dVar29 = *(double *)(lVar16 + 8 + lVar23) - (param_1->field0_0x0)._s_0.X;
    dVar9 = *(double *)(lVar16 + 0x18 + lVar23) - (param_1->field0_0x0)._s_0.Z;
    if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar14 = ~uVar24 >> 0x1f;
    }
    fVar40 = (float)(dVar31 * dVar31 + dVar29 * dVar29 + dVar9 * dVar9);
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    lVar16 = (longlong)(int)uVar24 * 0x58;
    lVar23 = *(longlong *)&this->PositionCurve;
    dVar31 = *(double *)(lVar16 + 0x10 + lVar23) - (param_1->field0_0x0)._s_0.Y;
    dVar29 = *(double *)(lVar16 + 8 + lVar23) - (param_1->field0_0x0)._s_0.X;
    dVar9 = *(double *)(lVar16 + 0x18 + lVar23) - (param_1->field0_0x0)._s_0.Z;
    fVar28 = (float)(dVar31 * dVar31 + dVar29 * dVar29 + dVar9 * dVar9);
    if (fVar28 <= fVar40) {
      *param_3 = fVar28;
    }
    else {
      *param_3 = fVar40;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      fVar26 = *(float *)(lVar19 * 0x58 + *(longlong *)&this->PositionCurve);
    }
  }
  else {
    uVar12 = uVar20;
    if (param_2 < iVar15) {
      uVar12 = uVar21;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    fVar26 = fVar26 - *(float *)(*(longlong *)&this->PositionCurve + lVar23);
    uVar12 = uVar14;
    if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar12 = uVar21;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      fVar26 = (float)(*pcVar8)();
      return fVar26;
    }
    iVar15 = *(int *)&(this->PositionCurve).field_0x8;
    if (*(char *)(*(longlong *)&this->PositionCurve + 0x50 + lVar23) == '\0') {
      uVar20 = uVar14;
      if (param_2 < iVar15) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar16 = lVar19 * 0x58;
      dVar9 = *(double *)(lVar16 + 8 + lVar23);
      dVar29 = *(double *)(lVar16 + 0x10 + lVar23);
      dVar31 = *(double *)(lVar16 + 0x18 + lVar23);
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      uVar20 = uVar14;
      if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar16 = (longlong)(int)uVar24 * 0x58;
      uVar20 = uVar14;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar18 = *(longlong *)&this->PositionCurve;
      lVar17 = lVar19 * 0x58;
      dVar4 = *(double *)(lVar23 + 0x10 + lVar16);
      dVar5 = *(double *)(lVar23 + 8 + lVar16);
      dVar6 = *(double *)(lVar23 + 0x18 + lVar16);
      dVar33 = *(double *)(lVar17 + 0x10 + lVar18);
      dVar39 = *(double *)(lVar17 + 8 + lVar18);
      dVar34 = *(double *)(lVar17 + 0x18 + lVar18);
      uVar20 = uVar14;
      if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      uVar20 = uVar14;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar18 = *(longlong *)&this->PositionCurve;
      lVar17 = lVar19 * 0x58;
      dVar32 = *(double *)(lVar23 + 0x10 + lVar16) - *(double *)(lVar17 + 0x10 + lVar18);
      dVar10 = *(double *)(lVar23 + 0x18 + lVar16) - *(double *)(lVar17 + 0x18 + lVar18);
      dVar30 = *(double *)(lVar23 + 8 + lVar16) - *(double *)(lVar17 + 8 + lVar18);
      uVar20 = uVar14;
      if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      fVar40 = (float)((uint)((float)((dVar4 - dVar33) * (dVar29 - dVar2) +
                                      (dVar5 - dVar39) * (dVar9 - dVar1) +
                                     (dVar6 - dVar34) * (dVar31 - dVar3)) /
                             (float)(dVar32 * dVar32 + dVar30 * dVar30 + dVar10 * dVar10)) ^
                      __xmm_80000000800000008000000080000000);
      if (__real_3f800000 <= fVar40) {
        fVar40 = __real_3f800000;
      }
      if (fVar40 <= 0.0) {
        fVar40 = 0.0;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar16 = (longlong)(int)uVar24 * 0x58;
      uVar20 = uVar14;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar18 = *(longlong *)&this->PositionCurve;
      lVar17 = lVar19 * 0x58;
      dVar29 = (double)fVar40;
      dVar31 = ((*(double *)(lVar16 + 0x10 + lVar23) - *(double *)(lVar17 + 0x10 + lVar18)) * dVar29
               + *(double *)(lVar17 + 0x10 + lVar18)) - (param_1->field0_0x0)._s_0.Y;
      dVar9 = ((*(double *)(lVar16 + 0x18 + lVar23) - *(double *)(lVar17 + 0x18 + lVar18)) * dVar29
              + *(double *)(lVar17 + 0x18 + lVar18)) - (param_1->field0_0x0)._s_0.Z;
      dVar29 = ((*(double *)(lVar16 + 8 + lVar23) - *(double *)(lVar17 + 8 + lVar18)) * dVar29 +
               *(double *)(lVar17 + 8 + lVar18)) - (param_1->field0_0x0)._s_0.X;
      *param_3 = (float)(dVar31 * dVar31 + dVar29 * dVar29 + dVar9 * dVar9);
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar14 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      fVar26 = fVar40 * fVar26 + *(float *)(lVar19 * 0x58 + *(longlong *)&this->PositionCurve);
    }
    else {
      if (param_2 < iVar15) {
        uVar14 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar16 = lVar19 * 0x58;
      dVar29 = *(double *)(lVar16 + 8 + lVar23) - (param_1->field0_0x0)._s_0.X;
      dVar31 = *(double *)(lVar16 + 0x10 + lVar23) - (param_1->field0_0x0)._s_0.Y;
      dVar9 = *(double *)(lVar16 + 0x18 + lVar23) - (param_1->field0_0x0)._s_0.Z;
      uVar14 = uVar20;
      if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar16 = (longlong)(int)uVar24 * 0x58;
      dVar2 = *(double *)(lVar23 + 8 + lVar16) - (param_1->field0_0x0)._s_0.X;
      dVar3 = *(double *)(lVar23 + 0x10 + lVar16) - (param_1->field0_0x0)._s_0.Y;
      dVar1 = *(double *)(lVar23 + 0x18 + lVar16) - (param_1->field0_0x0)._s_0.Z;
      uVar14 = uVar20;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar14 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      lVar18 = lVar19 * 0x58;
      dVar6 = (double)fVar26;
      dVar4 = dVar6 * *(double *)(lVar18 + 0x38 + lVar23);
      dVar5 = dVar6 * *(double *)(lVar18 + 0x40 + lVar23);
      dVar33 = dVar6 * *(double *)(lVar18 + 0x48 + lVar23);
      uVar14 = uVar20;
      if ((int)uVar24 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar14 = ~uVar24 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      lVar23 = *(longlong *)&this->PositionCurve;
      dVar35 = dVar6 * *(double *)(lVar23 + 0x28 + lVar16);
      dVar37 = dVar6 * *(double *)(lVar23 + 0x20 + lVar16);
      dVar6 = dVar6 * *(double *)(lVar23 + 0x30 + lVar16);
      dVar30 = dVar2 * __real_4008000000000000 -
               (dVar4 + dVar4 + dVar29 * __real_4008000000000000 + dVar37);
      dVar32 = dVar3 * __real_4008000000000000 -
               (dVar5 + dVar5 + dVar31 * __real_4008000000000000 + dVar35);
      dVar10 = dVar1 * __real_4008000000000000 -
               (dVar33 + dVar33 + dVar9 * __real_4008000000000000 + dVar6);
      dVar34 = (dVar29 + dVar29 + dVar4 + dVar37) - (dVar2 + dVar2);
      dVar39 = (dVar5 + dVar35 + dVar31 + dVar31) - (dVar3 + dVar3);
      dVar38 = (dVar9 + dVar6 + dVar33 + dVar9) - (dVar1 + dVar1);
      dStack_e8 = (dVar39 * dVar39 + dVar34 * dVar34 + dVar38 * dVar38) * __real_4008000000000000;
      dStack_f0 = (dVar39 * dVar32 + dVar34 * dVar30 + dVar38 * dVar10) * __real_4014000000000000;
      dVar36 = dVar32 * dVar32 + dVar30 * dVar30;
      dStack_f8 = (dVar5 * dVar39 + dVar4 * dVar34 + dVar33 * dVar38) * __real_4010000000000000 +
                  dVar36 + (dVar10 + dVar10) * dVar10 + dVar36;
      dVar36 = dVar32 * dVar31 + dVar30 * dVar29;
      dStack_100 = (dVar33 * dVar10 + dVar5 * dVar32 + dVar4 * dVar30 +
                   dVar38 * dVar9 + dVar39 * dVar31 + dVar34 * dVar29) * __real_4008000000000000;
      dStack_108 = dVar33 * dVar33 + dVar5 * dVar5 + dVar4 * dVar4 +
                   (dVar9 + dVar9) * dVar10 + dVar36 + dVar36;
      dStack_110 = dVar5 * dVar31 + dVar4 * dVar29 + dVar33 * dVar9;
      fVar28 = (float)(dVar31 * dVar31 + dVar29 * dVar29 + dVar9 * dVar9);
      fVar27 = (float)(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
      fVar40 = 0.0;
      if (fVar27 < fVar28) {
        fVar40 = __real_3f800000;
        fVar28 = fVar27;
      }
      TStack_158.DataPtr = &dStack_110;
      uVar41 = SUB84(__real_3ff0000000000000,0);
      uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      TStack_158._12_4_ = uStack_15c;
      TStack_158.ArrayNum = 6;
      TStack_148.Roots.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      TStack_148.Roots.ArrayNum = 0;
      TStack_148.Roots.ArrayMax = 5;
      UE::Math::TPolynomialRootSolver<double,5>::FindRootsInRange
                (&TStack_148,&TStack_158,0.0,__real_3ff0000000000000,__real_3e45798ee0000000,0x14,
                 __real_3e45798ee0000000);
      uVar25 = uVar22;
      iVar15 = TStack_148.Roots.ArrayNum;
      if (0 < TStack_148.Roots.ArrayNum) {
        do {
          uVar24 = (uint)uVar25;
          uVar14 = uVar20;
          if ((int)uVar24 < iVar15) {
            uVar14 = ~uVar24 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar15 = TStack_148.Roots.ArrayNum, bVar11)) {
            pcVar8 = (code *)swi(3);
            fVar26 = (float)(*pcVar8)();
            return fVar26;
          }
          FVar13 = (ForElementType<double>)&TStack_148;
          if (TStack_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar13 = TStack_148.Roots.AllocatorInstance.SecondaryData;
          }
          dVar39 = *(double *)((longlong)FVar13 + uVar22 * 8);
          dVar32 = dVar39 * dVar39;
          dVar34 = (dVar39 + dVar39) * dVar32;
          dVar10 = dVar32 * __real_4008000000000000 - dVar34;
          dVar30 = (dVar34 - dVar32 * __real_4008000000000000) + (double)CONCAT44(uVar42,uVar41);
          dVar34 = dVar39 * dVar32 - dVar32;
          dVar39 = (dVar39 * dVar32 - dVar39 * (dVar39 + dVar39)) + dVar39;
          dVar36 = dVar2 * dVar10 + dVar37 * dVar34 + dVar4 * dVar39 + dVar30 * dVar29;
          dVar32 = dVar3 * dVar10 + dVar35 * dVar34 + dVar5 * dVar39 + dVar30 * dVar31;
          dVar39 = dVar1 * dVar10 + dVar6 * dVar34 + dVar33 * dVar39 + dVar30 * dVar9;
          fVar27 = (float)(dVar32 * dVar32 + dVar36 * dVar36 + dVar39 * dVar39);
          if (fVar27 < fVar28) {
            uVar14 = uVar20;
            if ((int)uVar24 < iVar15) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar15 = TStack_148.Roots.ArrayNum, bVar11)) {
              pcVar8 = (code *)swi(3);
              fVar26 = (float)(*pcVar8)();
              return fVar26;
            }
            FVar13 = (ForElementType<double>)&TStack_148;
            if (TStack_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar13 = TStack_148.Roots.AllocatorInstance.SecondaryData;
            }
            fVar40 = (float)*(double *)((longlong)FVar13 + uVar22 * 8);
            fVar28 = fVar27;
          }
          uVar41 = SUB84(__real_3ff0000000000000,0);
          uVar42 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar22 = uVar22 + 1;
          uVar25 = (ulonglong)(uVar24 + 1);
        } while ((int)(uVar24 + 1) < iVar15);
      }
      *param_3 = fVar28;
      if (param_2 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        fVar26 = (float)(*pcVar8)();
        return fVar26;
      }
      fVar26 = fVar40 * fVar26 + *(float *)(lVar19 * 0x58 + *(longlong *)&this->PositionCurve);
      if (TStack_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)TStack_148.Roots.AllocatorInstance.SecondaryData);
      }
    }
  }
  return fVar26;
}

// GetDistanceAtParameter @ 147a50440

float __thiscall FLegacySpline::GetDistanceAtParameter(FLegacySpline *this,float param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined7 extraout_var;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_XMM1_Db;
  undefined1 auVar12 [16];
  undefined7 extraout_var_00;
  undefined1 auVar11 [16];
  
  iVar4 = *(int *)&(this->PositionCurve).field_0x8;
  uVar7 = iVar4 - 1;
  uVar8 = 0;
  if ((int)uVar7 < iVar4) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
  }
  iVar6 = *(int *)&(this->ReparamTable).field_0x8;
  iVar4 = iVar6 + -1;
  fVar9 = (param_1 /
          *(float *)((longlong)*(int *)&(this->PositionCurve).field_0x8 * 0x58 + -0x58 +
                    *(longlong *)&this->PositionCurve)) * (float)iVar4;
  uVar8 = (int)ROUND((fVar9 + fVar9) - __real_3f000000) >> 1;
  if (((int)uVar8 < 0) || (iVar6 <= (int)uVar8)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_165379631287891013>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                       ,0xbbb,"LowerKey >= 0 && LowerKey < ReparamTable.Points.Num()");
    iVar4 = (int)CONCAT71(extraout_var,bVar3);
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
  }
  uVar7 = -((int)ROUND(__real_bf000000 - (fVar9 + fVar9)) >> 1);
  if (((int)uVar7 < 0) || (*(int *)&(this->ReparamTable).field_0x8 <= (int)uVar7)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_165379631287891011>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                       ,0xbbd,"UpperKey >= 0 && UpperKey < ReparamTable.Points.Num()");
    iVar4 = (int)CONCAT71(extraout_var_00,bVar3);
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
  }
  auVar12._4_4_ = in_XMM1_Db;
  auVar12._0_4_ = fVar9;
  iVar6 = (int)fVar9;
  fVar10 = fVar9;
  if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar9)) {
    auVar12._8_4_ = in_XMM1_Db;
    auVar12._12_4_ = in_XMM1_Db;
    auVar11._8_8_ = auVar12._8_8_;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar9;
    uVar5 = movmskps(iVar4,auVar11);
    fVar10 = (float)(int)(iVar6 - (uVar5 & 1));
  }
  uVar5 = 0;
  if ((int)uVar7 < *(int *)&(this->ReparamTable).field_0x8) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
  }
  lVar1 = *(longlong *)&this->ReparamTable;
  uVar5 = 0;
  if ((int)uVar8 < *(int *)&(this->ReparamTable).field_0x8) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
  }
  return (*(float *)(lVar1 + (longlong)(int)uVar7 * 0x14) -
         *(float *)(*(longlong *)&this->ReparamTable + (longlong)(int)uVar8 * 0x14)) *
         (fVar9 - fVar10) +
         *(float *)(*(longlong *)&this->ReparamTable + (longlong)(int)uVar8 * 0x14);
}

// GetInTangent @ 147a51040

TVector<double> * __thiscall
FLegacySpline::GetInTangent(FLegacySpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  double local_20 [3];
  
  if ((param_1 < 0) || (*(int *)&(this->PositionCurve).field_0x8 <= param_1)) {
    local_20[2] = 0.0;
    pdVar7 = local_20;
    local_20[0] = 0.0;
    local_20[1] = 0.0;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 0x20 + *(longlong *)&this->PositionCurve);
    pdVar7 = &local_38;
    local_38 = *pdVar1;
    dStack_30 = pdVar1[1];
    local_28 = *(undefined8 *)((longlong)param_1 * 0x58 + 0x30 + *(longlong *)&this->PositionCurve);
  }
  dVar4 = pdVar7[1];
  dVar2 = pdVar7[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetLocation @ 147a527f0

TVector<double> * __thiscall
FLegacySpline::GetLocation(FLegacySpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  double local_20 [3];
  
  if ((param_1 < 0) || (*(int *)&(this->PositionCurve).field_0x8 <= param_1)) {
    local_20[2] = 0.0;
    pdVar7 = local_20;
    local_20[0] = 0.0;
    local_20[1] = 0.0;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 8 + *(longlong *)&this->PositionCurve);
    pdVar7 = &local_38;
    local_38 = *pdVar1;
    dStack_30 = pdVar1[1];
    local_28 = *(undefined8 *)((longlong)param_1 * 0x58 + 0x18 + *(longlong *)&this->PositionCurve);
  }
  dVar4 = pdVar7[1];
  dVar2 = pdVar7[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetNumControlPoints @ 147a53f00

int __thiscall FLegacySpline::GetNumControlPoints(FLegacySpline *this)

{
  return *(int *)&(this->PositionCurve).field_0x8;
}

// GetOutTangent @ 147a54b60

TVector<double> * __thiscall
FLegacySpline::GetOutTangent
          (FLegacySpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  double local_20 [3];
  
  if ((param_1 < 0) || (*(int *)&(this->PositionCurve).field_0x8 <= param_1)) {
    local_20[2] = 0.0;
    pdVar7 = local_20;
    local_20[0] = 0.0;
    local_20[1] = 0.0;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 0x38 + *(longlong *)&this->PositionCurve);
    pdVar7 = &local_38;
    local_38 = *pdVar1;
    dStack_30 = pdVar1[1];
    local_28 = *(undefined8 *)((longlong)param_1 * 0x58 + 0x48 + *(longlong *)&this->PositionCurve);
  }
  dVar4 = pdVar7[1];
  dVar2 = pdVar7[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetParameterAtDistance @ 147a554a0

float __thiscall FLegacySpline::GetParameterAtDistance(FLegacySpline *this,float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = FInterpCurve<float>::Eval((FInterpCurve<float> *)&this->ReparamTable,param_1,local_res8);
  return fVar1;
}

// GetParameterAtIndex @ 147a55660

float __thiscall FLegacySpline::GetParameterAtIndex(FLegacySpline *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    return *(float *)((longlong)param_1 * 0x58 + *(longlong *)&this->PositionCurve);
  }
  return 0.0;
}

// GetPoint @ 147a55ff0

FSplinePoint * __thiscall
FLegacySpline::GetPoint(FLegacySpline *this,FSplinePoint *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  Type TVar8;
  FSplinePoint *pFVar9;
  TRotator<double> *pTVar10;
  uint uVar11;
  longlong lVar12;
  TRotator<double> local_38;
  
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
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    lVar12 = (longlong)param_1 * 0x58;
    uVar11 = (uint)~param_1 >> 0x1f;
    __return_storage_ptr__->InputKey = *(float *)(lVar12 + *(longlong *)&this->PositionCurve);
    uVar6 = 0;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    lVar2 = *(longlong *)&this->PositionCurve;
    pdVar1 = (double *)(lVar12 + 8 + lVar2);
    dVar4 = pdVar1[1];
    (__return_storage_ptr__->Position).field0_0x0._s_0.X = *pdVar1;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = *(double *)(lVar12 + 0x18 + lVar2);
    uVar7 = 0;
    uVar6 = uVar7;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    lVar2 = *(longlong *)&this->PositionCurve;
    pdVar1 = (double *)(lVar12 + 0x20 + lVar2);
    dVar4 = pdVar1[1];
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.X = *pdVar1;
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Z = *(double *)(lVar12 + 0x30 + lVar2);
    uVar6 = uVar7;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    lVar2 = *(longlong *)&this->PositionCurve;
    pdVar1 = (double *)(lVar12 + 0x38 + lVar2);
    dVar4 = pdVar1[1];
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.X = *pdVar1;
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Z = *(double *)(lVar12 + 0x48 + lVar2);
    uVar6 = uVar7;
    if (param_1 < *(int *)&(this->RotationCurve).field_0x8) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    pTVar10 = UE::Math::TQuat<double>::Rotator
                        ((TQuat<double> *)
                         ((longlong)param_1 * 0x80 + *(longlong *)&this->RotationCurve + 0x10),
                         &local_38);
    dVar4 = pTVar10->Yaw;
    (__return_storage_ptr__->Rotation).Pitch = pTVar10->Pitch;
    (__return_storage_ptr__->Rotation).Yaw = dVar4;
    (__return_storage_ptr__->Rotation).Roll = pTVar10->Roll;
    if (param_1 < *(int *)&(this->ScaleCurve).field_0x8) {
      uVar7 = uVar11;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    lVar2 = *(longlong *)&this->ScaleCurve;
    pdVar1 = (double *)(lVar12 + 8 + lVar2);
    dVar4 = pdVar1[1];
    (__return_storage_ptr__->Scale).field0_0x0._s_0.X = *pdVar1;
    (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = *(double *)(lVar12 + 0x18 + lVar2);
    uVar6 = 0;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FSplinePoint *)(*pcVar3)();
        return pFVar9;
      }
    }
    TVar8 = ConvertInterpCurveModeToSplinePointType
                      ((uint)*(byte *)(lVar12 + 0x50 + *(longlong *)&this->PositionCurve));
    (__return_storage_ptr__->Type).Value = (uchar)TVar8;
  }
  return __return_storage_ptr__;
}

// GetRotation @ 147a57b90

TQuat<double> * __thiscall
FLegacySpline::GetRotation(FLegacySpline *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TQuat<double> *pTVar8;
  double *pdVar9;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28 [4];
  
  if ((param_1 < 0) || (*(int *)&(this->RotationCurve).field_0x8 <= param_1)) {
    pdVar9 = local_28;
    local_28[0] = 0.0;
    local_28[1] = 0.0;
    local_28[2] = 0.0;
    local_28[3] = 0.0;
  }
  else {
    if (param_1 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TQuat<double> *)(*pcVar3)();
        return pTVar8;
      }
    }
    pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x10 + *(longlong *)&this->RotationCurve);
    puVar2 = (undefined8 *)((longlong)param_1 * 0x80 + 0x20 + *(longlong *)&this->RotationCurve);
    pdVar9 = &local_48;
    local_48 = *pdVar1;
    dStack_40 = pdVar1[1];
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
  }
  dVar4 = pdVar9[1];
  dVar5 = pdVar9[2];
  dVar6 = pdVar9[3];
  __return_storage_ptr__->X = *pdVar9;
  __return_storage_ptr__->Y = dVar4;
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = dVar6;
  return __return_storage_ptr__;
}

// GetScale @ 147a57e40

TVector<double> * __thiscall
FLegacySpline::GetScale(FLegacySpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TVector<double> *pTVar6;
  double *pdVar7;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  double local_20 [3];
  
  if ((param_1 < 0) || (*(int *)&(this->ScaleCurve).field_0x8 <= param_1)) {
    local_20[2] = 0.0;
    pdVar7 = local_20;
    local_20[0] = 0.0;
    local_20[1] = 0.0;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pdVar1 = (double *)((longlong)param_1 * 0x58 + 8 + *(longlong *)&this->ScaleCurve);
    pdVar7 = &local_38;
    local_38 = *pdVar1;
    dStack_30 = pdVar1[1];
    local_28 = *(undefined8 *)((longlong)param_1 * 0x58 + 0x18 + *(longlong *)&this->ScaleCurve);
  }
  dVar4 = pdVar7[1];
  dVar2 = pdVar7[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetSegmentLength @ 147a58120

float __thiscall
FLegacySpline::GetSegmentLength
          (FLegacySpline *this,int param_1,float param_2,TVector<double> *param_3)

{
  int iVar1;
  float *pfVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  int iVar17;
  bool bVar18;
  FLegendreGaussCoefficient *pFVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  
  iVar8 = *(int *)&(this->PositionCurve).field_0x8;
  iVar1 = iVar8 + -1;
  if (-1 < param_1) {
    iVar17 = iVar1;
    if ((this->PositionCurve).field_0x10 != '\0') {
      iVar17 = iVar8;
    }
    if (param_1 < iVar17) goto LAB_147a581a2;
  }
  bVar18 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((PositionCurve.bIsLooped && Index < NumPoints) || (!PositionCurve.bIsLooped && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                      ,0xbf7,L"");
  if (bVar18) {
    pcVar11 = (code *)swi(3);
    fVar24 = (float)(*pcVar11)();
    return fVar24;
  }
LAB_147a581a2:
  fVar24 = __real_3f800000;
  if (((param_2 < 0.0) || (__real_3f800000 < param_2)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Param >= 0.0f && Param <= 1.0f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                          ,0xbf8,L""), bVar18)) {
    pcVar11 = (code *)swi(3);
    fVar24 = (float)(*pcVar11)();
    return fVar24;
  }
  uVar20 = 0;
  if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar11 = (code *)swi(3);
    fVar24 = (float)(*pcVar11)();
    return fVar24;
  }
  lVar9 = *(longlong *)&this->PositionCurve;
  lVar22 = (longlong)param_1 * 0x58;
  uVar20 = 0;
  if (param_1 != iVar1) {
    uVar20 = param_1 + 1;
  }
  uVar23 = 0;
  if ((int)uVar20 < *(int *)&(this->PositionCurve).field_0x8) {
    uVar23 = ~uVar20 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar11 = (code *)swi(3);
    fVar24 = (float)(*pcVar11)();
    return fVar24;
  }
  cVar7 = *(char *)(lVar22 + 0x50 + lVar9);
  lVar21 = (longlong)(int)uVar20 * 0x58;
  lVar10 = *(longlong *)&this->PositionCurve;
  if (cVar7 == '\0') {
    dVar26 = (*(double *)(lVar21 + 8 + lVar10) - *(double *)(lVar22 + 8 + lVar9)) *
             (param_3->field0_0x0)._s_0.X;
    dVar16 = (*(double *)(lVar21 + 0x10 + lVar10) - *(double *)(lVar22 + 0x10 + lVar9)) *
             (param_3->field0_0x0)._s_0.Y;
    dVar12 = (*(double *)(lVar21 + 0x18 + lVar10) - *(double *)(lVar22 + 0x18 + lVar9)) *
             (param_3->field0_0x0)._s_0.Z;
    auVar29._0_8_ = dVar26 * dVar26;
    auVar29._8_8_ = 0;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = dVar16 * dVar16 + auVar29._0_8_ + dVar12 * dVar12;
    auVar30 = sqrtpd(auVar29,auVar15);
    fVar25 = (float)(auVar30._0_8_ * (double)param_2);
  }
  else if (cVar7 == '\x02') {
    if (param_2 == fVar24) {
      dVar26 = (*(double *)(lVar21 + 8 + lVar10) - *(double *)(lVar22 + 8 + lVar9)) *
               (param_3->field0_0x0)._s_0.X;
      dVar16 = (*(double *)(lVar21 + 0x10 + lVar10) - *(double *)(lVar22 + 0x10 + lVar9)) *
               (param_3->field0_0x0)._s_0.Y;
      dVar12 = (*(double *)(lVar21 + 0x18 + lVar10) - *(double *)(lVar22 + 0x18 + lVar9)) *
               (param_3->field0_0x0)._s_0.Z;
      auVar31._0_8_ = dVar26 * dVar26;
      auVar31._8_8_ = 0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = dVar16 * dVar16 + auVar31._0_8_ + dVar12 * dVar12;
      auVar30 = sqrtpd(auVar31,auVar30);
      fVar25 = (float)auVar30._0_8_;
    }
    else {
      fVar25 = 0.0;
    }
  }
  else {
    dVar12 = *(double *)(lVar21 + 0x20 + lVar10);
    dVar13 = *(double *)(lVar22 + 8 + lVar9) - *(double *)(lVar21 + 8 + lVar10);
    dVar16 = *(double *)(lVar22 + 0x38 + lVar9);
    dVar27 = *(double *)(lVar22 + 0x10 + lVar9) - *(double *)(lVar21 + 0x10 + lVar10);
    dVar32 = *(double *)(lVar22 + 0x18 + lVar9) - *(double *)(lVar21 + 0x18 + lVar10);
    dVar26 = *(double *)(lVar22 + 0x40 + lVar9);
    dVar4 = *(double *)(lVar21 + 0x28 + lVar10);
    dVar5 = *(double *)(lVar22 + 0x48 + lVar9);
    dVar6 = *(double *)(lVar21 + 0x30 + lVar10);
    pdVar3 = (double *)(lVar22 + 0x38 + lVar9);
    pFVar19 = LegendreGaussCoefficients;
    fVar25 = 0.0;
    do {
      dVar28 = (double)((pFVar19->Abscissa + fVar24) * param_2 * __real_3f000000);
      dVar14 = (((dVar32 * __real_4008000000000000 + dVar32 * __real_4008000000000000 +
                 (dVar6 + dVar5) * __real_4008000000000000) * dVar28 +
                (((*(double *)(lVar21 + 0x18 + lVar10) - *(double *)(lVar22 + 0x18 + lVar9)) *
                  __real_4018000000000000 - dVar5 * __real_4010000000000000) - (dVar6 + dVar6))) *
                dVar28 + *(double *)(lVar22 + 0x48 + lVar9)) * (param_3->field0_0x0)._s_0.Z;
      dVar33 = (((dVar13 * __real_4008000000000000 + dVar13 * __real_4008000000000000 +
                 (dVar12 + dVar16) * __real_4008000000000000) * dVar28 +
                (((*(double *)(lVar21 + 8 + lVar10) - *(double *)(lVar22 + 8 + lVar9)) *
                  __real_4018000000000000 - dVar16 * __real_4010000000000000) - (dVar12 + dVar12)))
                * dVar28 + *pdVar3) * (param_3->field0_0x0)._s_0.X;
      dVar28 = (((dVar27 * __real_4008000000000000 + dVar27 * __real_4008000000000000 +
                 (dVar4 + dVar26) * __real_4008000000000000) * dVar28 +
                (((*(double *)(lVar21 + 0x10 + lVar10) - *(double *)(lVar22 + 0x10 + lVar9)) *
                  __real_4018000000000000 - dVar26 * __real_4010000000000000) - (dVar4 + dVar4))) *
                dVar28 + pdVar3[1]) * (param_3->field0_0x0)._s_0.Y;
      pfVar2 = &pFVar19->Weight;
      pFVar19 = pFVar19 + 1;
      fVar25 = (float)(SQRT(dVar28 * dVar28 + dVar33 * dVar33 + dVar14 * dVar14) * (double)*pfVar2 +
                      (double)fVar25);
    } while (pFVar19 !=
             (FLegendreGaussCoefficient *)
             "Index >= 0 && ((PositionCurve.bIsLooped && Index < NumPoints) || (!PositionCurve.bIsLooped && Index < LastPoint))"
            );
    fVar25 = fVar25 * param_2 * __real_3f000000;
  }
  return fVar25;
}

// GetSplineLength @ 147a591f0

float __thiscall FLegacySpline::GetSplineLength(FLegacySpline *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  iVar1 = *(int *)&(this->ReparamTable).field_0x8;
  if (iVar1 < 1) {
    return 0.0;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  return *(float *)(*(longlong *)&this->ReparamTable + -0x14 +
                   (longlong)*(int *)&(this->ReparamTable).field_0x8 * 0x14);
}

// GetSplinePointType @ 147a593d0

EInterpCurveMode __thiscall FLegacySpline::GetSplinePointType(FLegacySpline *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInterpCurveMode EVar3;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    return (EInterpCurveMode)
           *(byte *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&this->PositionCurve);
  }
  return CIM_Unknown;
}

// InsertPoint @ 147a606b0

void __thiscall FLegacySpline::InsertPoint(FLegacySpline *this,FSplinePoint *param_1,int param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  EInterpCurveMode EVar4;
  uint uVar5;
  TQuat<double> *pTVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_198;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_140;
  FInterpCurvePoint<UE::Math::TQuat<double>_> local_e8;
  TQuat<double> local_68 [2];
  
  fVar2 = __real_3f800000;
  if (param_2 == 0) {
    local_140.InVal = 0.0;
  }
  else {
    local_140.InVal = GetParameterAtIndex(this,param_2 + -1);
    local_140.InVal = local_140.InVal + fVar2;
  }
  EVar4 = ConvertSplinePointTypeToInterpCurveMode((uint)(param_1->Type).Value);
  local_198.OutVal.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  local_198.OutVal.field0_0x0._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
  local_198.ArriveTangent.field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X;
  local_198.ArriveTangent.field0_0x0._s_0.Y = (param_1->ArriveTangent).field0_0x0._s_0.Y;
  local_198.InterpMode.Value = (uchar)EVar4;
  local_198.OutVal.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  local_198.ArriveTangent.field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z;
  local_198.LeaveTangent.field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X;
  local_198.LeaveTangent.field0_0x0._s_0.Y = (param_1->LeaveTangent).field0_0x0._s_0.Y;
  local_198.LeaveTangent.field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z;
  local_198.InVal = local_140.InVal;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             this,&local_198,param_2);
  pTVar6 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,local_68);
  local_e8.OutVal.X = pTVar6->X;
  local_e8.OutVal.Y = pTVar6->Y;
  local_e8.OutVal.Z = pTVar6->Z;
  local_e8.OutVal.W = pTVar6->W;
  local_e8.ArriveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.ArriveTangent.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.LeaveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
  local_e8.LeaveTangent.W = UE::Math::TQuat<double>::Identity.W;
  local_e8.ArriveTangent.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.ArriveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.LeaveTangent.X = UE::Math::TQuat<double>::Identity.X;
  local_e8.LeaveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
  local_e8.InterpMode.Value = '\x01';
  local_e8.InVal = local_140.InVal;
  TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->RotationCurve,&local_e8,param_2);
  local_140.OutVal.field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
  local_140.OutVal.field0_0x0._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
  local_140.InterpMode.Value = '\x01';
  local_140.OutVal.field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
  local_140.ArriveTangent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_140.LeaveTangent.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  local_140.ArriveTangent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_140.ArriveTangent.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_140.LeaveTangent.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  local_140.LeaveTangent.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
            ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
             &this->ScaleCurve,&local_140,param_2);
  iVar7 = *(int *)&(this->PositionCurve).field_0x8;
  uVar8 = param_2 + 1;
  if ((int)uVar8 < iVar7) {
    lVar9 = (longlong)(int)uVar8 * 0x58;
    lVar11 = (longlong)(int)uVar8 << 7;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)(lVar9 + *(longlong *)&this->PositionCurve) =
           *(float *)(lVar9 + *(longlong *)&this->PositionCurve) + fVar2;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->RotationCurve).field_0x8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(float *)(lVar11 + *(longlong *)&this->RotationCurve) =
           *(float *)(lVar11 + *(longlong *)&this->RotationCurve) + fVar2;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->ScaleCurve).field_0x8) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x80;
      *(float *)(lVar9 + *(longlong *)&this->ScaleCurve) =
           *(float *)(lVar9 + *(longlong *)&this->ScaleCurve) + fVar2;
      lVar9 = lVar9 + 0x58;
      iVar7 = *(int *)&(this->PositionCurve).field_0x8;
    } while ((int)uVar8 < iVar7);
  }
  return;
}

// RemovePoint @ 147a7b8d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FLegacySpline::RemovePoint(FLegacySpline *this,int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  void *_Dst;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((-1 < param_1) &&
     (uVar8 = (ulonglong)param_1, param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               this,param_1,Default);
    uVar5 = 0;
    if (param_1 < *(int *)&(this->RotationCurve).field_0x8) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = uVar8 * 0x80;
    _Dst = (void *)(*(longlong *)&this->RotationCurve + lVar11);
    iVar6 = *(int *)&(this->RotationCurve).field_0x8 + ~param_1;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x80),(longlong)iVar6 << 7);
    }
    puVar1 = &(this->RotationCurve).field_0x8;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,(ForAnyElementType *)&this->RotationCurve,
               *(int *)&(this->RotationCurve).field_0x8,(int *)&(this->RotationCurve).field_0xc);
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &this->ScaleCurve,param_1,Default);
    fVar3 = __real_3f800000;
    iVar6 = *(int *)&(this->PositionCurve).field_0x8;
    if (param_1 < iVar6) {
      lVar9 = uVar8 * 0x58;
      do {
        uVar7 = (uint)uVar8;
        uVar10 = ~uVar7 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)(lVar9 + *(longlong *)&this->PositionCurve) =
             *(float *)(lVar9 + *(longlong *)&this->PositionCurve) - fVar3;
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&(this->RotationCurve).field_0x8) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)(*(longlong *)&this->RotationCurve + lVar11) =
             *(float *)(*(longlong *)&this->RotationCurve + lVar11) - fVar3;
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&(this->ScaleCurve).field_0x8) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        lVar11 = lVar11 + 0x80;
        *(float *)(*(longlong *)&this->ScaleCurve + lVar9) =
             *(float *)(*(longlong *)&this->ScaleCurve + lVar9) - fVar3;
        lVar9 = lVar9 + 0x58;
        iVar6 = *(int *)&(this->PositionCurve).field_0x8;
      } while ((int)(uVar7 + 1) < iVar6);
    }
  }
  return;
}

// Reset @ 147a831e0

void __thiscall FLegacySpline::Reset(FLegacySpline *this)

{
  *(undefined4 *)&(this->PositionCurve).field_0x8 = 0;
  if (*(int *)&(this->PositionCurve).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)this,0,(int *)&(this->PositionCurve).field_0xc);
  }
  *(undefined4 *)&(this->RotationCurve).field_0x8 = 0;
  if (*(int *)&(this->RotationCurve).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x80,0x10,0,(ForAnyElementType *)&this->RotationCurve,0,
               (int *)&(this->RotationCurve).field_0xc);
  }
  *(undefined4 *)&(this->ScaleCurve).field_0x8 = 0;
  if (*(int *)&(this->ScaleCurve).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)&this->ScaleCurve,0,
               (int *)&(this->ScaleCurve).field_0xc);
  }
  return;
}

// ResetRotation @ 147a83910

void __thiscall FLegacySpline::ResetRotation(FLegacySpline *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = *(uint *)&(this->PositionCurve).field_0x8;
  if (-1 < (int)uVar3) {
    puVar1 = &(this->RotationCurve).field_0xc;
    *(undefined4 *)&(this->RotationCurve).field_0x8 = 0;
    if (*(int *)&(this->RotationCurve).field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar3,(ForAnyElementType *)&this->RotationCurve,0,(int *)puVar1);
    }
    iVar8 = *(int *)&(this->RotationCurve).field_0x8;
    if (iVar8 < *(int *)&(this->PositionCurve).field_0x8) {
      do {
        iVar6 = *(int *)&(this->RotationCurve).field_0x8;
        if (iVar6 == *(int *)puVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,(ForAnyElementType *)&this->RotationCurve,(int *)puVar1);
        }
        *(int *)&(this->RotationCurve).field_0x8 = iVar6 + 1;
        iVar9 = iVar8 + 1;
        lVar4 = *(longlong *)&this->RotationCurve;
        lVar7 = (longlong)iVar6 * 0x80;
        *(float *)(lVar7 + lVar4) = (float)iVar8;
        dVar5 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar7 + 0x10 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar5;
        dVar5 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar7 + 0x20 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar5;
        dVar5 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar7 + 0x30 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar5;
        dVar5 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar7 + 0x40 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar5;
        dVar5 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar7 + 0x50 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar5;
        dVar5 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar7 + 0x60 + lVar4);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar5;
        *(undefined1 *)(lVar7 + 0x70 + lVar4) = 1;
        iVar8 = iVar9;
      } while (iVar9 < *(int *)&(this->PositionCurve).field_0x8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ResetScale @ 147a83d00

void __thiscall FLegacySpline::ResetScale(FLegacySpline *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = *(uint *)&(this->PositionCurve).field_0x8;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  puVar1 = &(this->ScaleCurve).field_0xc;
  *(undefined4 *)&(this->ScaleCurve).field_0x8 = 0;
  if (*(int *)&(this->ScaleCurve).field_0xc < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar3,(ForAnyElementType *)&this->ScaleCurve,0,(int *)puVar1);
  }
  iVar8 = *(int *)&(this->ScaleCurve).field_0x8;
  if (iVar8 < *(int *)&(this->PositionCurve).field_0x8) {
    do {
      iVar6 = *(int *)&(this->ScaleCurve).field_0x8;
      if (iVar6 == *(int *)puVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x858,(ForAnyElementType *)&this->ScaleCurve,(int *)puVar1);
      }
      *(int *)&(this->ScaleCurve).field_0x8 = iVar6 + 1;
      iVar9 = iVar8 + 1;
      lVar7 = (longlong)iVar6 * 0x58;
      lVar4 = *(longlong *)&this->ScaleCurve;
      *(float *)(lVar7 + lVar4) = (float)iVar8;
      *(undefined8 *)(lVar7 + 8 + lVar4) = 0x3ff0000000000000;
      *(undefined8 *)(lVar7 + 0x10 + lVar4) = 0x3ff0000000000000;
      *(undefined8 *)(lVar7 + 0x18 + lVar4) = 0x3ff0000000000000;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar2 = (double *)(lVar7 + 0x20 + lVar4);
      *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar2[1] = (double)uVar5;
      *(double *)(lVar7 + 0x30 + lVar4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pdVar2 = (double *)(lVar7 + 0x38 + lVar4);
      *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pdVar2[1] = (double)uVar5;
      *(double *)(lVar7 + 0x48 + lVar4) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined1 *)(lVar7 + 0x50 + lVar4) = 1;
      iVar8 = iVar9;
    } while (iVar9 < *(int *)&(this->PositionCurve).field_0x8);
  }
  return;
}

// Serialize @ 147a87f50

bool __thiscall FLegacySpline::Serialize(FLegacySpline *this,FArchive *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  ::operator<<(param_1,(FInterpCurve<UE::Math::TVector<double>_> *)this);
  TArrayPrivateFriend::
  Serialize<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>
                      *)&this->RotationCurve);
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    ::operator<<(param_1,(bool *)&(this->RotationCurve).field_0x10);
    puVar1 = &(this->RotationCurve).field_0x14;
    puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
      }
    }
    else {
      *(undefined4 *)puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
  }
  ::operator<<(param_1,(FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve);
  TArrayPrivateFriend::Serialize<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_> *)
                     &this->ReparamTable);
  if (0x1c3 < *(int *)&param_1->field_0x40) {
    ::operator<<(param_1,(bool *)&(this->ReparamTable).field_0x10);
    puVar1 = &(this->ReparamTable).field_0x14;
    puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
    if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
      *(undefined4 *)puVar1 = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      return true;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      return true;
    }
    FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  }
  return true;
}

// SetInTangent @ 147a8ef10

void __thiscall
FLegacySpline::SetInTangent(FLegacySpline *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    lVar3 = *(longlong *)&this->PositionCurve;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    lVar8 = (longlong)param_1 * 0x58;
    pdVar1 = (double *)(lVar8 + 0x20 + lVar3);
    *pdVar1 = (param_2->field0_0x0)._s_0.X;
    pdVar1[1] = dVar5;
    *(double *)(lVar8 + 0x30 + lVar3) = dVar2;
    uVar7 = 0;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined1 *)(lVar8 + 0x50 + *(longlong *)&this->PositionCurve) = 3;
  }
  return;
}

// SetLocation @ 147a90090

void __thiscall FLegacySpline::SetLocation(FLegacySpline *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    uVar5 = *(undefined4 *)&param_2->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    if ((param_1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)&this->PositionCurve;
    puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar3);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3) = dVar2;
  }
  return;
}

// SetOutTangent @ 147a90f30

void __thiscall
FLegacySpline::SetOutTangent(FLegacySpline *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->PositionCurve).field_0x8)) {
    lVar3 = *(longlong *)&this->PositionCurve;
    dVar5 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    lVar8 = (longlong)param_1 * 0x58;
    pdVar1 = (double *)(lVar8 + 0x38 + lVar3);
    *pdVar1 = (param_2->field0_0x0)._s_0.X;
    pdVar1[1] = dVar5;
    *(double *)(lVar8 + 0x48 + lVar3) = dVar2;
    uVar7 = 0;
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined1 *)(lVar8 + 0x50 + *(longlong *)&this->PositionCurve) = 3;
  }
  return;
}

// SetRotation @ 147a923c0

void __thiscall FLegacySpline::SetRotation(FLegacySpline *this,int param_1,TQuat<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->RotationCurve).field_0x8)) {
    uVar5 = *(undefined4 *)&param_2->X;
    uVar6 = *(undefined4 *)((longlong)&param_2->X + 4);
    uVar7 = *(undefined4 *)&param_2->Y;
    uVar8 = *(undefined4 *)((longlong)&param_2->Y + 4);
    dVar9 = param_2->Z;
    dVar10 = param_2->W;
    uVar12 = 0;
    if (param_1 < *(int *)&(this->RotationCurve).field_0x8) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)&this->RotationCurve;
    puVar1 = (undefined4 *)((longlong)param_1 * 0x80 + 0x10 + lVar3);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    pdVar2 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar3);
    *pdVar2 = dVar9;
    pdVar2[1] = dVar10;
  }
  return;
}

// SetScale @ 147a92620

void __thiscall FLegacySpline::SetScale(FLegacySpline *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->ScaleCurve).field_0x8)) {
    uVar5 = *(undefined4 *)&param_2->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    uVar10 = 0;
    if (param_1 < *(int *)&(this->ScaleCurve).field_0x8) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)&this->ScaleCurve;
    puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar3);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar3) = dVar2;
  }
  return;
}

// SetSplinePointType @ 147a92880

void __thiscall
FLegacySpline::SetSplinePointType(FLegacySpline *this,int param_1,EInterpCurveMode param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (-1 < param_1) {
    if (param_1 < *(int *)&(this->PositionCurve).field_0x8) {
      if ((param_1 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(char *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&this->PositionCurve) = (char)param_2
      ;
    }
  }
  return;
}

// UpdateSpline @ 147a9db10

void __thiscall FLegacySpline::UpdateSpline(FLegacySpline *this,FUpdateSplineParams *param_1)

{
  undefined1 *puVar1;
  float *pfVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  iVar8 = *(int *)&(this->PositionCurve).field_0x8;
  if (((*(int *)&(this->RotationCurve).field_0x8 != iVar8) ||
      (*(int *)&(this->ScaleCurve).field_0x8 != iVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("RotationCurve.Points.Num() == NumPoints && ScaleCurve.Points.Num() == NumPoints"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                         ,0xc66,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = 1;
  if (1 < (longlong)iVar8) {
    lVar15 = (longlong)iVar8 + -1;
    lVar14 = 0x58;
    do {
      uVar7 = 0;
      if ((int)uVar11 < *(int *)&(this->PositionCurve).field_0x8) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&this->PositionCurve;
      uVar7 = 0;
      if ((int)(uVar11 - 1) < *(int *)&(this->PositionCurve).field_0x8) {
        uVar7 = -uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar3 = *(float *)(lVar14 + lVar4);
      pfVar2 = (float *)(lVar14 + -0x58 + *(longlong *)&this->PositionCurve);
      if ((fVar3 < *pfVar2 || fVar3 == *pfVar2) &&
         (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_165379631287890836>,true,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\Spline.cpp"
                             ,0xc6c,
                             "PositionCurve.Points[Index - 1].InVal < PositionCurve.Points[Index].InVal"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x58;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  fVar3 = __real_3f800000;
  if (param_1->bClosedLoop == false) {
    (this->ScaleCurve).field_0x10 = 0;
    (this->PositionCurve).field_0x10 = 0;
    (this->RotationCurve).field_0x10 = 0;
    goto LAB_147a9de91;
  }
  iVar13 = *(int *)&(this->PositionCurve).field_0x8;
  if (iVar13 < 1) {
    fVar18 = 0.0;
  }
  else {
    uVar11 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar11 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = *(int *)&(this->PositionCurve).field_0x8;
    fVar18 = *(float *)((longlong)iVar13 * 0x58 + -0x58 + *(longlong *)&this->PositionCurve);
  }
  if (param_1->bLoopPositionOverride == false) {
    fVar18 = fVar18 + fVar3;
  }
  else {
    fVar18 = param_1->LoopPosition;
  }
  if (iVar13 == 0) {
LAB_147a9dd47:
    (this->PositionCurve).field_0x10 = 0;
  }
  else {
    uVar11 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar11 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar16 = *(float *)((longlong)*(int *)&(this->PositionCurve).field_0x8 * 0x58 + -0x58 +
                       *(longlong *)&this->PositionCurve);
    if (fVar18 <= fVar16) goto LAB_147a9dd47;
    (this->PositionCurve).field_0x10 = 1;
    *(float *)&(this->PositionCurve).field_0x14 = fVar18 - fVar16;
  }
  iVar13 = *(int *)&(this->RotationCurve).field_0x8;
  if (iVar13 != 0) {
    uVar11 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar11 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar16 = *(float *)((longlong)*(int *)&(this->RotationCurve).field_0x8 * 0x80 + -0x80 +
                       *(longlong *)&(this->RotationCurve).field_0x0);
    if (fVar16 < fVar18) {
      (this->RotationCurve).field_0x10 = 1;
      *(float *)&(this->RotationCurve).field_0x14 = fVar18 - fVar16;
      FInterpCurve<UE::Math::TVector<double>_>::SetLoopKey
                ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,fVar18);
      goto LAB_147a9de91;
    }
  }
  (this->RotationCurve).field_0x10 = 0;
  FInterpCurve<UE::Math::TVector<double>_>::SetLoopKey
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,fVar18);
LAB_147a9de91:
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)this,0.0,param_1->bStationaryEndpoints);
  FInterpCurve<UE::Math::TQuat<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TQuat<double>_> *)&this->RotationCurve,0.0,
             param_1->bStationaryEndpoints);
  FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->ScaleCurve,0.0,
             param_1->bStationaryEndpoints);
  if (((this->PositionCurve).field_0x10 == '\0') && (iVar8 = iVar8 + -1, iVar8 < 0)) {
    iVar8 = 0;
  }
  uVar11 = iVar8 * param_1->ReparamStepsPerSegment + 1;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  puVar1 = &(this->ReparamTable).field_0xc;
  *(undefined4 *)&(this->ReparamTable).field_0x8 = 0;
  if (*(int *)&(this->ReparamTable).field_0xc < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar11,(ForAnyElementType *)&this->ReparamTable,0,(int *)puVar1);
  }
  fVar18 = 0.0;
  iVar13 = 0;
  if (0 < iVar8) {
    do {
      iVar9 = param_1->ReparamStepsPerSegment;
      iVar12 = 0;
      if (0 < iVar9) {
        do {
          fVar16 = (float)iVar12;
          if (iVar12 == 0) {
            fVar17 = 0.0;
          }
          else {
            fVar17 = GetSegmentLength(this,iVar13,fVar16 / (float)iVar9,&param_1->Scale3D);
          }
          iVar10 = *(int *)&(this->ReparamTable).field_0x8;
          if (iVar10 == *(int *)puVar1) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,(ForAnyElementType *)&this->ReparamTable,(int *)puVar1);
          }
          iVar12 = iVar12 + 1;
          *(int *)&(this->ReparamTable).field_0x8 = iVar10 + 1;
          lVar14 = (longlong)iVar10;
          lVar15 = *(longlong *)&this->ReparamTable;
          *(float *)(lVar15 + lVar14 * 0x14) = fVar17 + fVar18;
          *(float *)(lVar15 + 4 + lVar14 * 0x14) = (float)iVar13 + fVar16 / (float)iVar9;
          *(undefined8 *)(lVar15 + 8 + lVar14 * 0x14) = 0;
          *(undefined1 *)(lVar15 + 0x10 + lVar14 * 0x14) = 0;
          iVar9 = param_1->ReparamStepsPerSegment;
        } while (iVar12 < iVar9);
      }
      fVar16 = GetSegmentLength(this,iVar13,fVar3,&param_1->Scale3D);
      iVar13 = iVar13 + 1;
      fVar18 = fVar18 + fVar16;
    } while (iVar13 < iVar8);
  }
  iVar13 = *(int *)&(this->ReparamTable).field_0x8;
  if (iVar13 == *(int *)puVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x414,(ForAnyElementType *)&this->ReparamTable,(int *)puVar1);
  }
  *(int *)&(this->ReparamTable).field_0x8 = iVar13 + 1;
  lVar14 = (longlong)iVar13;
  lVar15 = *(longlong *)&this->ReparamTable;
  *(float *)(lVar15 + lVar14 * 0x14) = fVar18;
  *(float *)(lVar15 + 4 + lVar14 * 0x14) = (float)iVar8;
  *(undefined8 *)(lVar15 + 8 + lVar14 * 0x14) = 0;
  *(undefined1 *)(lVar15 + 0x10 + lVar14 * 0x14) = 0;
  return;
}

