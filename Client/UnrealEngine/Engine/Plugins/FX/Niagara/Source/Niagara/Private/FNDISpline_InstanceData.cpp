// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 31

// ConvertDistanceToKey<TIntegralConstant<bool,1>_> @ 1491f5ea0

float __thiscall
FNDISpline_InstanceData::ConvertDistanceToKey<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,float param_1)

{
  return param_1;
}

// ConvertDistanceToKey<TIntegralConstant<bool,0>_> @ 1491f5eb0

float __thiscall
FNDISpline_InstanceData::ConvertDistanceToKey<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,float param_1)

{
  float fVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  fVar1 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res8);
  return fVar1;
}

// EvaluateDerivativePosition<TIntegralConstant<bool,1>_> @ 1491fd1e0

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar16 = (this->SplineLUT).MaxIndex;
  fVar17 = (param_1 + param_1) * (this->SplineLUT).InvSplineDistanceStep;
  uVar10 = (int)ROUND(fVar17 - __real_3f000000) >> 1;
  uVar15 = uVar16;
  if ((int)uVar10 < (int)uVar16) {
    uVar15 = uVar10;
  }
  uVar10 = 0;
  if (0 < (int)uVar15) {
    uVar10 = uVar15;
  }
  uVar11 = -((int)ROUND(__real_bf000000 - fVar17) >> 1);
  uVar15 = uVar16;
  if ((int)uVar11 < (int)uVar16) {
    uVar15 = uVar11;
  }
  uVar11 = 0;
  if (0 < (int)uVar15) {
    uVar11 = uVar15;
  }
  if (uVar11 == uVar10) {
    if ((int)uVar11 < (int)uVar16) {
      uVar11 = uVar11 + 1;
    }
    else {
      if ((int)uVar10 < 1) {
        (__return_storage_ptr__->field0_0x0)._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar8;
        (__return_storage_ptr__->field0_0x0)._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        return __return_storage_ptr__;
      }
      uVar10 = uVar10 - 1;
    }
  }
  uVar16 = 0;
  if ((int)uVar11 < (this->SplineLUT).Positions.ArrayNum) {
    uVar16 = ~uVar11 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar7)();
    return pTVar12;
  }
  pFVar5 = (this->SplineLUT).Positions.AllocatorInstance.Data;
  lVar13 = (longlong)(int)uVar11;
  uVar16 = 0;
  if ((int)uVar10 < (this->SplineLUT).Positions.ArrayNum) {
    uVar16 = ~uVar10 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TVector<double> *)(*pcVar7)();
    return pTVar12;
  }
  dVar1 = *(double *)(pFVar5 + lVar13 * 0x18 + 8);
  lVar14 = (longlong)(int)uVar10;
  pFVar6 = (this->SplineLUT).Positions.AllocatorInstance.Data;
  dVar2 = *(double *)(pFVar6 + lVar14 * 0x18 + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)(pFVar5 + lVar13 * 0x18) - *(double *)(pFVar6 + lVar14 * 0x18);
  dVar3 = *(double *)(pFVar5 + lVar13 * 0x18 + 0x10);
  dVar4 = *(double *)(pFVar6 + lVar14 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 - dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar4;
  return __return_storage_ptr__;
}

// EvaluateDerivativePosition<TIntegralConstant<bool,0>_> @ 1491fd3a0

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluateDerivativePosition<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,__return_storage_ptr__,
             param_1,&UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// EvaluateFindNearestPosition<TIntegralConstant<bool,1>_> @ 1491fd3d0

float __thiscall
FNDISpline_InstanceData::EvaluateFindNearestPosition<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  
  uVar6 = 0;
  if (0 < (this->SplineLUT).Positions.ArrayNum) {
    lVar7 = 0;
    fVar9 = __real_7f7fffff;
    uVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SplineLUT).Positions.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar9 = (float)(*pcVar3)();
        return fVar9;
      }
      pFVar2 = (this->SplineLUT).Positions.AllocatorInstance.Data;
      dVar13 = *(double *)(pFVar2 + lVar7 + 8) - (param_1->field0_0x0)._s_0.Y;
      dVar12 = *(double *)(pFVar2 + lVar7) - (param_1->field0_0x0)._s_0.X;
      dVar10 = *(double *)(pFVar2 + lVar7 + 0x10) - (param_1->field0_0x0)._s_0.Z;
      fVar11 = (float)(dVar13 * dVar13 + dVar12 * dVar12 + dVar10 * dVar10);
      uVar5 = uVar6;
      if (fVar9 <= fVar11) {
        uVar5 = uVar8;
        fVar11 = fVar9;
      }
      fVar9 = fVar11;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x18;
      iVar1 = (this->SplineLUT).Positions.ArrayNum;
      uVar8 = uVar5;
    } while ((int)uVar6 < iVar1);
    if (0 < (int)uVar5) {
      return (float)(int)uVar5 / (float)(iVar1 + -1);
    }
  }
  return 0.0;
}

// EvaluateFindNearestPosition<TIntegralConstant<bool,0>_> @ 1491fd510

float __thiscall
FNDISpline_InstanceData::EvaluateFindNearestPosition<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *param_1)

{
  FSplineCurves *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_res8 [2];
  float local_res18 [4];
  
  this_00 = &this->SplineCurves;
  iVar4 = *(int *)&(this->SplineCurves).Position.field_0x8;
  iVar2 = iVar4;
  if ((this->SplineCurves).Position.field_0x10 == '\0') {
    iVar2 = iVar4 + -1;
  }
  if (1 < iVar4) {
    fVar5 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                      ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,param_1,0,local_res8);
    iVar4 = 1;
    if (1 < iVar2) {
      do {
        fVar6 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                          ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,param_1,iVar4,
                           local_res18);
        if (local_res18[0] < local_res8[0]) {
          local_res8[0] = local_res18[0];
          fVar5 = fVar6;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    return fVar5;
  }
  if (iVar4 != 1) {
    return 0.0;
  }
  if ((*(int *)&(this->SplineCurves).Position.field_0x8 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar5 = (float)(*pcVar1)();
    return fVar5;
  }
  return **(float **)&this_00->Position;
}

// EvaluatePosition<TIntegralConstant<bool,1>_> @ 1491fd620

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar21 [16];
  undefined4 in_XMM2_Db;
  double dVar22;
  float fVar23;
  undefined1 auVar20 [16];
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar13 = (this->SplineLUT).MaxIndex;
  fVar23 = param_1 * (this->SplineLUT).InvSplineDistanceStep;
  uVar11 = (int)ROUND((fVar23 + fVar23) - __real_3f000000) >> 1;
  uVar12 = uVar13;
  if ((int)uVar11 < (int)uVar13) {
    uVar12 = uVar11;
  }
  uVar11 = 0;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  auVar21._4_4_ = in_XMM2_Db;
  auVar21._0_4_ = fVar23;
  uVar12 = -((int)ROUND(__real_bf000000 - (fVar23 + fVar23)) >> 1);
  iVar17 = (int)fVar23;
  if ((int)uVar12 < (int)uVar13) {
    uVar13 = uVar12;
  }
  uVar18 = 0;
  if (0 < (int)uVar13) {
    uVar18 = uVar13;
  }
  fVar19 = fVar23;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar23)) {
    auVar21._8_4_ = in_XMM2_Db;
    auVar21._12_4_ = in_XMM2_Db;
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._4_4_ = fVar23;
    auVar20._0_4_ = fVar23;
    uVar13 = movmskps(uVar12,auVar20);
    fVar19 = (float)(int)(iVar17 - (uVar13 & 1));
  }
  if (uVar18 == uVar11) {
    if ((int)uVar11 < 0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      uVar13 = 0;
      if ((int)uVar11 < (this->SplineLUT).Positions.ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TVector<double> *)(*pcVar8)();
          return pTVar14;
        }
      }
      pFVar7 = (this->SplineLUT).Positions.AllocatorInstance.Data;
      pFVar1 = pFVar7 + (longlong)(int)uVar11 * 0x18;
      dVar3 = *(double *)(pFVar1 + 8);
      dVar2 = *(double *)(pFVar7 + (longlong)(int)uVar11 * 0x18 + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar18 < (this->SplineLUT).Positions.ArrayNum) {
      uVar13 = ~uVar18 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar8)();
        return pTVar14;
      }
    }
    pFVar1 = (this->SplineLUT).Positions.AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar18;
    uVar13 = 0;
    if ((int)uVar11 < (this->SplineLUT).Positions.ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar8)();
        return pTVar14;
      }
    }
    dVar2 = *(double *)(pFVar1 + lVar15 * 0x18 + 8);
    dVar22 = (double)(fVar23 - fVar19);
    lVar16 = (longlong)(int)uVar11;
    pFVar7 = (this->SplineLUT).Positions.AllocatorInstance.Data;
    dVar3 = *(double *)(pFVar7 + lVar16 * 0x18 + 8);
    dVar4 = *(double *)(pFVar7 + lVar16 * 0x18 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (*(double *)(pFVar1 + lVar15 * 0x18) - *(double *)(pFVar7 + lVar16 * 0x18)) * dVar22 +
         *(double *)(pFVar7 + lVar16 * 0x18);
    dVar5 = *(double *)(pFVar1 + lVar15 * 0x18 + 0x10);
    dVar6 = *(double *)(pFVar7 + lVar16 * 0x18 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar3) * dVar22 + dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar5 - dVar6) * dVar22 + *(double *)(pFVar7 + lVar16 * 0x18 + 0x10);
  }
  return __return_storage_ptr__;
}

// EvaluatePosition<TIntegralConstant<bool,0>_> @ 1491fd8b0

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluatePosition<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,__return_storage_ptr__,
             param_1,&UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// EvaluateRotation<TIntegralConstant<bool,1>_> @ 1491fd8e0

TQuat<double> * __thiscall
FNDISpline_InstanceData::EvaluateRotation<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TQuat<double> *pTVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 in_XMM2_Db;
  undefined1 auVar26 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  TQuat<double> local_58 [2];
  
  dVar5 = UE::Math::TQuat<double>::Identity.Y;
  uVar13 = (this->SplineLUT).MaxIndex;
  fVar30 = param_1 * (this->SplineLUT).InvSplineDistanceStep;
  uVar11 = (int)ROUND((fVar30 + fVar30) - __real_3f000000) >> 1;
  uVar12 = uVar13;
  if ((int)uVar11 < (int)uVar13) {
    uVar12 = uVar11;
  }
  uVar11 = 0;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  auVar27._4_4_ = in_XMM2_Db;
  auVar27._0_4_ = fVar30;
  uVar12 = -((int)ROUND(__real_bf000000 - (fVar30 + fVar30)) >> 1);
  iVar15 = (int)fVar30;
  if ((int)uVar12 < (int)uVar13) {
    uVar13 = uVar12;
  }
  uVar16 = 0;
  if (0 < (int)uVar13) {
    uVar16 = uVar13;
  }
  fVar21 = fVar30;
  if ((iVar15 != -0x80000000) && ((float)iVar15 != fVar30)) {
    auVar27._8_4_ = in_XMM2_Db;
    auVar27._12_4_ = in_XMM2_Db;
    auVar28._8_8_ = auVar27._8_8_;
    auVar28._4_4_ = fVar30;
    auVar28._0_4_ = fVar30;
    uVar13 = movmskps(uVar12,auVar28);
    fVar21 = (float)(int)(iVar15 - (uVar13 & 1));
  }
  if (uVar16 == uVar11) {
    if ((int)uVar11 < 0) {
      __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
      __return_storage_ptr__->Y = dVar5;
      dVar5 = UE::Math::TQuat<double>::Identity.W;
      __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
      __return_storage_ptr__->W = dVar5;
    }
    else {
      uVar13 = 0;
      if ((int)uVar11 < (this->SplineLUT).Rotations.ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar3 = (code *)swi(3);
          pTVar14 = (TQuat<double> *)(*pcVar3)();
          return pTVar14;
        }
      }
      pFVar2 = (this->SplineLUT).Rotations.AllocatorInstance.Data;
      pFVar1 = pFVar2 + (longlong)(int)uVar11 * 0x20;
      dVar5 = *(double *)(pFVar1 + 8);
      __return_storage_ptr__->X = *(double *)pFVar1;
      __return_storage_ptr__->Y = dVar5;
      pFVar2 = pFVar2 + (longlong)(int)uVar11 * 0x20 + 0x10;
      dVar5 = *(double *)(pFVar2 + 8);
      __return_storage_ptr__->Z = *(double *)pFVar2;
      __return_storage_ptr__->W = dVar5;
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar16 < (this->SplineLUT).Rotations.ArrayNum) {
      uVar13 = ~uVar16 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TQuat<double> *)(*pcVar3)();
        return pTVar14;
      }
    }
    pFVar1 = (this->SplineLUT).Rotations.AllocatorInstance.Data;
    uVar13 = 0;
    if ((int)uVar11 < (this->SplineLUT).Rotations.ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        pTVar14 = (TQuat<double> *)(*pcVar3)();
        return pTVar14;
      }
    }
    pTVar14 = UE::Math::TQuat<double>::Slerp_NotNormalized
                        (local_58,(TQuat<double> *)
                                  ((this->SplineLUT).Rotations.AllocatorInstance.Data +
                                  (longlong)(int)uVar11 * 0x20),
                         (TQuat<double> *)(pFVar1 + (longlong)(int)uVar16 * 0x20),
                         (double)(fVar30 - fVar21));
    dVar9 = __real_3e45798ee0000000;
    dVar5 = pTVar14->Y;
    __return_storage_ptr__->X = pTVar14->X;
    __return_storage_ptr__->Y = dVar5;
    dVar5 = pTVar14->Z;
    dVar6 = pTVar14->W;
    __return_storage_ptr__->Z = dVar5;
    __return_storage_ptr__->W = dVar6;
    dVar7 = __return_storage_ptr__->X;
    dVar8 = __return_storage_ptr__->Y;
    dVar22 = dVar5 * dVar5 + dVar7 * dVar7;
    dVar25 = dVar6 * dVar6 + dVar8 * dVar8;
    auVar19._8_4_ = SUB84(dVar25,0);
    auVar19._0_8_ = dVar22;
    auVar19._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar20._0_8_ = auVar19._8_8_ + dVar22;
    auVar20._8_8_ = dVar22 + dVar25;
    auVar27 = sqrtpd(in_XMM4,auVar20);
    uVar17 = -(ulonglong)(dVar9 <= auVar20._0_8_);
    uVar18 = -(ulonglong)(dVar9 <= auVar20._8_8_);
    uVar13 = (uint)(uVar17 >> 0x20);
    uVar12 = (uint)(uVar18 >> 0x20);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
    auVar29._0_8_ = uVar17 & (ulonglong)(auVar28._0_8_ * dVar7);
    uVar4 = uVar18 & (ulonglong)(auVar28._8_8_ * dVar8);
    auVar29._8_4_ = (undefined4)uVar4;
    auVar29._12_4_ = (undefined4)(uVar4 >> 0x20);
    auVar23._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar23._4_4_ =
         ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar23._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar23._12_4_ =
         ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
    auVar26._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar26._4_4_ =
         ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar26._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar26._12_4_ =
         ~uVar12 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    __return_storage_ptr__->X = (double)SUB168(auVar29 | auVar23,0);
    __return_storage_ptr__->Y = (double)SUB168(auVar29 | auVar23,8);
    auVar24._0_8_ = (ulonglong)(auVar27._0_8_ * dVar5) & uVar17;
    uVar18 = (ulonglong)(auVar27._8_8_ * dVar6) & uVar18;
    auVar24._8_4_ = (undefined4)uVar18;
    auVar24._12_4_ = (undefined4)(uVar18 >> 0x20);
    __return_storage_ptr__->Z = (double)SUB168(auVar26 | auVar24,0);
    __return_storage_ptr__->W = (double)SUB168(auVar26 | auVar24,8);
  }
  return __return_storage_ptr__;
}

// EvaluateRotation<TIntegralConstant<bool,0>_> @ 1491fdbb0

TQuat<double> * __thiscall
FNDISpline_InstanceData::EvaluateRotation<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TQuat<double> *pTVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  TQuat<double> local_48 [2];
  
  pTVar8 = FInterpCurve<UE::Math::TQuat<double>_>::Eval
                     ((FInterpCurve<UE::Math::TQuat<double>_> *)&(this->SplineCurves).Rotation,
                      local_48,param_1,&UE::Math::TQuat<double>::Identity);
  dVar7 = __real_3e45798ee0000000;
  dVar1 = pTVar8->Y;
  __return_storage_ptr__->X = pTVar8->X;
  __return_storage_ptr__->Y = dVar1;
  dVar3 = pTVar8->Z;
  dVar4 = pTVar8->W;
  __return_storage_ptr__->Z = dVar3;
  __return_storage_ptr__->W = dVar4;
  dVar5 = __return_storage_ptr__->X;
  dVar6 = __return_storage_ptr__->Y;
  dVar11 = dVar3 * dVar3 + dVar5 * dVar5;
  dVar13 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar1 = dVar13 + dVar11;
  dVar11 = dVar11 + dVar13;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = sqrtpd(in_XMM4,auVar15);
  uVar9 = -(ulonglong)(dVar7 <= dVar1);
  uVar10 = -(ulonglong)(dVar7 <= dVar11);
  uVar18 = (uint)(uVar9 >> 0x20);
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  auVar17._0_8_ = uVar9 & (ulonglong)(auVar16._0_8_ * dVar5);
  uVar2 = uVar10 & (ulonglong)(auVar16._8_8_ * dVar6);
  auVar17._8_4_ = (undefined4)uVar2;
  auVar17._12_4_ = (undefined4)(uVar2 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
  auVar14._0_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar14._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar14._8_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar14._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar12._0_8_ = (ulonglong)(auVar15._0_8_ * dVar3) & uVar9;
  uVar10 = (ulonglong)(auVar15._8_8_ * dVar4) & uVar10;
  auVar12._8_4_ = (undefined4)uVar10;
  auVar12._12_4_ = (undefined4)(uVar10 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar17 | auVar16,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar17 | auVar16,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar14 | auVar12,0);
  __return_storage_ptr__->W = (double)SUB168(auVar14 | auVar12,8);
  return __return_storage_ptr__;
}

// EvaluateScale<TIntegralConstant<bool,1>_> @ 1491fdc90

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluateScale<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar21 [16];
  undefined4 in_XMM2_Db;
  double dVar22;
  float fVar23;
  undefined1 auVar20 [16];
  
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar13 = (this->SplineLUT).MaxIndex;
  fVar23 = param_1 * (this->SplineLUT).InvSplineDistanceStep;
  uVar11 = (int)ROUND((fVar23 + fVar23) - __real_3f000000) >> 1;
  uVar12 = uVar13;
  if ((int)uVar11 < (int)uVar13) {
    uVar12 = uVar11;
  }
  uVar11 = 0;
  if (0 < (int)uVar12) {
    uVar11 = uVar12;
  }
  auVar21._4_4_ = in_XMM2_Db;
  auVar21._0_4_ = fVar23;
  uVar12 = -((int)ROUND(__real_bf000000 - (fVar23 + fVar23)) >> 1);
  iVar17 = (int)fVar23;
  if ((int)uVar12 < (int)uVar13) {
    uVar13 = uVar12;
  }
  uVar18 = 0;
  if (0 < (int)uVar13) {
    uVar18 = uVar13;
  }
  fVar19 = fVar23;
  if ((iVar17 != -0x80000000) && ((float)iVar17 != fVar23)) {
    auVar21._8_4_ = in_XMM2_Db;
    auVar21._12_4_ = in_XMM2_Db;
    auVar20._8_8_ = auVar21._8_8_;
    auVar20._4_4_ = fVar23;
    auVar20._0_4_ = fVar23;
    uVar13 = movmskps(uVar12,auVar20);
    fVar19 = (float)(int)(iVar17 - (uVar13 & 1));
  }
  if (uVar18 == uVar11) {
    if ((int)uVar11 < 0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    }
    else {
      uVar13 = 0;
      if ((int)uVar11 < (this->SplineLUT).Scales.ArrayNum) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          pTVar14 = (TVector<double> *)(*pcVar8)();
          return pTVar14;
        }
      }
      pFVar7 = (this->SplineLUT).Scales.AllocatorInstance.Data;
      pFVar1 = pFVar7 + (longlong)(int)uVar11 * 0x18;
      dVar3 = *(double *)(pFVar1 + 8);
      dVar2 = *(double *)(pFVar7 + (longlong)(int)uVar11 * 0x18 + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
    }
  }
  else {
    uVar13 = 0;
    if ((int)uVar18 < (this->SplineLUT).Scales.ArrayNum) {
      uVar13 = ~uVar18 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar8)();
        return pTVar14;
      }
    }
    pFVar1 = (this->SplineLUT).Scales.AllocatorInstance.Data;
    lVar15 = (longlong)(int)uVar18;
    uVar13 = 0;
    if ((int)uVar11 < (this->SplineLUT).Scales.ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        pTVar14 = (TVector<double> *)(*pcVar8)();
        return pTVar14;
      }
    }
    dVar2 = *(double *)(pFVar1 + lVar15 * 0x18 + 8);
    dVar22 = (double)(fVar23 - fVar19);
    lVar16 = (longlong)(int)uVar11;
    pFVar7 = (this->SplineLUT).Scales.AllocatorInstance.Data;
    dVar3 = *(double *)(pFVar7 + lVar16 * 0x18 + 8);
    dVar4 = *(double *)(pFVar7 + lVar16 * 0x18 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (*(double *)(pFVar1 + lVar15 * 0x18) - *(double *)(pFVar7 + lVar16 * 0x18)) * dVar22 +
         *(double *)(pFVar7 + lVar16 * 0x18);
    dVar5 = *(double *)(pFVar1 + lVar15 * 0x18 + 0x10);
    dVar6 = *(double *)(pFVar7 + lVar16 * 0x18 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar3) * dVar22 + dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar5 - dVar6) * dVar22 + *(double *)(pFVar7 + lVar16 * 0x18 + 0x10);
  }
  return __return_storage_ptr__;
}

// EvaluateScale<TIntegralConstant<bool,0>_> @ 1491fdf20

TVector<double> * __thiscall
FNDISpline_InstanceData::EvaluateScale<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&(this->SplineCurves).Scale,
             __return_storage_ptr__,param_1,&UE::Math::TVector<double>::ZeroVector);
  return __return_storage_ptr__;
}

// FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,1>_> @ 1491fe5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FNDISpline_InstanceData::FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  dVar18 = (this->ComponentTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar24 = (this->ComponentTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar28 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar4 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar17 = (param_1->field0_0x0)._s_0.Z - (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  auVar29._8_4_ = SUB84(dVar24,0);
  auVar29._0_8_ = dVar18;
  auVar29._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar26._8_4_ = SUB84(dVar4,0);
  auVar26._0_8_ = dVar28;
  auVar26._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar30 = blendpd(auVar29,auVar26,2);
  dVar7 = (param_1->field0_0x0)._s_0.X - (this->ComponentTransform).Translation.XY.m128d_f64[0];
  dVar8 = (param_1->field0_0x0)._s_0.Y - (this->ComponentTransform).Translation.XY.m128d_f64[1];
  uVar36 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar40._8_4_ = SUB84(dVar8,0);
  auVar40._0_8_ = dVar7;
  auVar40._12_4_ = uVar36;
  auVar19._8_4_ = SUB84(dVar28,0);
  auVar19._0_8_ = dVar24;
  auVar19._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
  auVar25._8_4_ = SUB84(dVar8,0);
  auVar25._0_8_ = dVar7;
  auVar25._12_4_ = uVar36;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar17;
  auVar26 = blendpd(auVar25,auVar34,2);
  auVar41._0_8_ = auVar40._8_8_ * dVar18 - dVar24 * dVar7;
  auVar41._8_8_ = dVar17 * dVar24 - auVar19._8_8_ * dVar8;
  auVar27._0_8_ = auVar26._0_8_ * dVar28 - auVar30._0_8_ * dVar17;
  auVar27._8_8_ = auVar26._8_8_ * dVar4 - auVar30._8_8_ * 0.0;
  dVar5 = auVar41._8_8_ + auVar41._8_8_;
  dVar6 = auVar27._0_8_ + auVar27._0_8_;
  uVar36 = SUB84(dVar6,0);
  uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar26 = blendpd(auVar41,auVar27,2);
  auVar38._8_4_ = uVar36;
  auVar38._0_8_ = dVar5;
  auVar38._12_4_ = uVar37;
  auVar20._8_4_ = uVar36;
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar37;
  auVar33._8_4_ = uVar36;
  auVar33._0_8_ = dVar5;
  auVar33._12_4_ = uVar37;
  auVar42._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar42._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  auVar26 = *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.XY.m128d_f64;
  auVar39._0_8_ = auVar38._8_8_ * dVar18 - dVar5 * dVar24;
  auVar39._8_8_ = auVar42._0_8_ * dVar24 - auVar20._8_8_ * dVar28;
  auVar34 = blendpd(auVar33,auVar42,2);
  auVar21._8_4_ = SUB84(auVar42._8_8_,0);
  auVar21._0_8_ = auVar42._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  auVar35._0_8_ = auVar34._0_8_ * dVar28 - auVar42._0_8_ * auVar30._0_8_;
  auVar35._8_8_ = auVar34._8_8_ * dVar4 - auVar21._8_8_ * auVar30._8_8_;
  auVar34 = *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.ZW.m128d_f64;
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar31._0_8_ =
       (double)CONCAT44(auVar26._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar26._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar26._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar26._12_4_ & _UNK_15061cc8c;
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
  lVar14 = -(ulonglong)(auVar31._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar15 = -(ulonglong)(auVar31._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar22._8_4_ = SUB84(auVar39._8_8_,0);
  auVar22._0_8_ = auVar39._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar32._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar26._4_4_,
                        ~(uint)lVar14 & auVar26._0_4_);
  auVar32._8_4_ = ~(uint)lVar15 & auVar26._8_4_;
  auVar32._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar26._12_4_;
  uVar11 = 0;
  auVar30._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar30._0_8_ = auVar34._0_8_;
  auVar30._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  auVar34 = blendpd(auVar39,auVar35,2);
  if (0 < (this->SplineLUT).Positions.ArrayNum) {
    lVar14 = 0;
    fVar16 = __real_7f7fffff;
    uVar12 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (this->SplineLUT).Positions.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        fVar16 = (float)(*pcVar3)();
        return fVar16;
      }
      pFVar2 = (this->SplineLUT).Positions.AllocatorInstance.Data;
      dVar28 = *(double *)(pFVar2 + lVar14 + 8) -
               auVar32._8_8_ * (dVar6 * dVar4 + dVar8 + auVar35._0_8_);
      dVar24 = *(double *)(pFVar2 + lVar14) -
               auVar32._0_8_ * (dVar5 * dVar4 + dVar7 + auVar22._8_8_);
      dVar18 = *(double *)(pFVar2 + lVar14 + 0x10) -
               (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar26._4_4_,
                                ~(uint)lVar13 & auVar26._0_4_) *
               (auVar42._0_8_ * dVar4 + dVar17 + auVar34._0_8_);
      fVar23 = (float)(dVar28 * dVar28 + dVar24 * dVar24 + dVar18 * dVar18);
      uVar10 = uVar11;
      if (fVar16 <= fVar23) {
        uVar10 = uVar12;
        fVar23 = fVar16;
      }
      fVar16 = fVar23;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x18;
      iVar1 = (this->SplineLUT).Positions.ArrayNum;
      uVar12 = uVar10;
    } while ((int)uVar11 < iVar1);
    if (0 < (int)uVar10) {
      return (float)(int)uVar10 / (float)(iVar1 + -1);
    }
  }
  return 0.0;
}

// FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,0>_> @ 1491fe910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FNDISpline_InstanceData::FindInputKeyClosestToWorldLocation<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *param_1)

{
  FSplineCurves *this_00;
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float local_e8;
  float local_e4 [3];
  TVector<double>_u_0 local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  dVar2 = (this->ComponentTransform).Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = (this->ComponentTransform).Rotation.XY.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar4 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar18 = (param_1->field0_0x0)._s_0.Z - (this->ComponentTransform).Translation.ZW.m128d_f64[0];
  auVar26._8_4_ = SUB84(dVar3,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar24._8_4_ = SUB84(dVar5,0);
  auVar24._0_8_ = dVar4;
  auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar27 = blendpd(auVar26,auVar24,2);
  dVar8 = (param_1->field0_0x0)._s_0.X - (this->ComponentTransform).Translation.XY.m128d_f64[0];
  dVar9 = (param_1->field0_0x0)._s_0.Y - (this->ComponentTransform).Translation.XY.m128d_f64[1];
  uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar37._8_4_ = SUB84(dVar9,0);
  auVar37._0_8_ = dVar8;
  auVar37._12_4_ = uVar33;
  auVar19._8_4_ = SUB84(dVar4,0);
  auVar19._0_8_ = dVar3;
  auVar19._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar23._8_4_ = SUB84(dVar9,0);
  auVar23._0_8_ = dVar8;
  auVar23._12_4_ = uVar33;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = dVar18;
  auVar24 = blendpd(auVar23,auVar31,2);
  auVar38._0_8_ = auVar37._8_8_ * dVar2 - dVar3 * dVar8;
  auVar38._8_8_ = dVar18 * dVar3 - auVar19._8_8_ * dVar9;
  auVar25._0_8_ = auVar24._0_8_ * dVar4 - auVar27._0_8_ * dVar18;
  auVar25._8_8_ = auVar24._8_8_ * dVar5 - auVar27._8_8_ * 0.0;
  dVar6 = auVar38._8_8_ + auVar38._8_8_;
  dVar7 = auVar25._0_8_ + auVar25._0_8_;
  uVar33 = SUB84(dVar7,0);
  uVar34 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar24 = blendpd(auVar38,auVar25,2);
  auVar35._8_4_ = uVar33;
  auVar35._0_8_ = dVar6;
  auVar35._12_4_ = uVar34;
  auVar20._8_4_ = uVar33;
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar34;
  auVar30._8_4_ = uVar33;
  auVar30._0_8_ = dVar6;
  auVar30._12_4_ = uVar34;
  auVar39._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar39._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar24 = *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.XY.m128d_f64;
  auVar36._0_8_ = auVar35._8_8_ * dVar2 - dVar6 * dVar3;
  auVar36._8_8_ = auVar39._0_8_ * dVar3 - auVar20._8_8_ * dVar4;
  auVar31 = blendpd(auVar30,auVar39,2);
  auVar21._8_4_ = SUB84(auVar39._8_8_,0);
  auVar21._0_8_ = auVar39._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ * dVar4 - auVar39._0_8_ * auVar27._0_8_;
  auVar32._8_8_ = auVar31._8_8_ * dVar5 - auVar21._8_8_ * auVar27._8_8_;
  auVar31 = *(undefined1 (*) [16])(this->ComponentTransform).Scale3D.ZW.m128d_f64;
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar31._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar31._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar28._0_8_ =
       (double)CONCAT44(auVar24._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar24._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar28._8_4_ = auVar24._8_4_ & _UNK_15061cc88;
  auVar28._12_4_ = auVar24._12_4_ & _UNK_15061cc8c;
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
  lVar14 = -(ulonglong)(auVar28._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar15 = -(ulonglong)(auVar28._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar22._8_4_ = SUB84(auVar36._8_8_,0);
  auVar22._0_8_ = auVar36._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar29._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar24._4_4_,
                        ~(uint)lVar14 & auVar24._0_4_);
  auVar29._8_4_ = ~(uint)lVar15 & auVar24._8_4_;
  auVar29._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar24._12_4_;
  local_d8._s_0.X = auVar29._0_8_ * (dVar6 * dVar5 + dVar8 + auVar22._8_8_);
  local_d8._s_0.Y = auVar29._8_8_ * (dVar7 * dVar5 + dVar9 + auVar32._0_8_);
  this_00 = &this->SplineCurves;
  iVar12 = *(int *)&(this->SplineCurves).Position.field_0x8;
  auVar27._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar27._0_8_ = auVar31._0_8_;
  auVar27._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  iVar10 = iVar12;
  if ((this->SplineCurves).Position.field_0x10 == '\0') {
    iVar10 = iVar12 + -1;
  }
  auVar31 = blendpd(auVar36,auVar32,2);
  local_d8._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar24._4_4_,
                        ~(uint)lVar13 & auVar24._0_4_) *
       (auVar39._0_8_ * dVar5 + dVar18 + auVar31._0_8_);
  local_b8 = local_d8._s_0.X;
  dStack_b0 = local_d8._s_0.Y;
  local_a8 = local_d8._s_0.Z;
  if (iVar12 < 2) {
    if (iVar12 == 1) {
      if ((*(int *)&(this->SplineCurves).Position.field_0x8 < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar1 = (code *)swi(3);
        fVar16 = (float)(*pcVar1)();
        return fVar16;
      }
      fVar16 = **(float **)&this_00->Position;
    }
    else {
      fVar16 = 0.0;
    }
  }
  else {
    fVar16 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                       ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,
                        (TVector<double> *)&local_d8._s_0,0,&local_e8);
    iVar12 = 1;
    if (1 < iVar10) {
      do {
        fVar17 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                           ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,
                            (TVector<double> *)&local_d8._s_0,iVar12,local_e4);
        if (local_e4[0] < local_e8) {
          fVar16 = fVar17;
          local_e8 = local_e4[0];
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar10);
    }
  }
  return fVar16;
}

// GetDirectionAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 1491ff040

TVector<double> * __thiscall
FNDISpline_InstanceData::GetDirectionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double> *this_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double> local_68 [4];
  
  this_00 = EvaluateDerivativePosition<TIntegralConstant<bool,1>_>(this,local_68,param_1);
  UE::Math::TVector<double>::GetSafeNormal
            (this_00,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  dVar9 = __real_3e45798ee0000000;
  if (param_2 == World) {
    auVar1 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar11 = blendpd(auVar10,auVar1,2);
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar17;
    dVar3 = auVar1._0_8_;
    auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
    auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = uVar17;
    auVar10._8_4_ = SUB84(dVar7,0);
    auVar10._0_8_ = dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar10 = blendpd(auVar20,auVar10,2);
    auVar13._0_8_ = auVar10._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
    auVar13._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar20 = blendpd(auVar19,auVar13,2);
    dVar7 = auVar19._8_8_ + auVar19._8_8_;
    dVar2 = auVar13._0_8_ + auVar13._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    auVar15._8_4_ = SUB84(dVar2,0);
    auVar15._0_8_ = dVar7;
    auVar15._12_4_ = uVar17;
    auVar12._8_4_ = SUB84(dVar2,0);
    auVar12._0_8_ = dVar7;
    auVar12._12_4_ = uVar17;
    auVar13 = blendpd(auVar12,auVar21,2);
    auVar20 = blendpd(auVar10,auVar1,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
    auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar3 * dVar2;
    auVar11._8_4_ = SUB84(auVar16._8_8_,0);
    auVar11._0_8_ = auVar16._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar14._0_8_ = auVar13._0_8_ * dVar3 - auVar20._0_8_ * auVar21._0_8_;
    auVar14._8_8_ = auVar13._8_8_ * auVar1._8_8_ - auVar20._8_8_ * auVar21._8_8_;
    auVar10 = blendpd(auVar16,auVar14,2);
    dVar3 = dVar2 * dVar8 + dVar5 + auVar14._0_8_;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_;
    UE::Math::TVector<double>::Normalize(__return_storage_ptr__,dVar9);
  }
  return __return_storage_ptr__;
}

// GetDirectionAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 1491ff1e0

TVector<double> * __thiscall
FNDISpline_InstanceData::GetDirectionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_res20 [2];
  TVector<double> local_68 [4];
  
  local_res20[0] = 0.0;
  fVar10 = FInterpCurve<float>::Eval
                     ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res20)
  ;
  FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,local_68,fVar10,
             &UE::Math::TVector<double>::ZeroVector);
  UE::Math::TVector<double>::GetSafeNormal
            (local_68,__return_storage_ptr__,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  dVar9 = __real_3e45798ee0000000;
  if (param_2 == World) {
    auVar1 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar11 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar12 = blendpd(auVar11,auVar1,2);
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = uVar18;
    dVar3 = auVar1._0_8_;
    auVar20._0_8_ = auVar19._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar4;
    auVar20._8_8_ = dVar6 * auVar11._8_8_ - dVar3 * dVar5;
    auVar21._8_4_ = SUB84(dVar5,0);
    auVar21._0_8_ = dVar4;
    auVar21._12_4_ = uVar18;
    auVar11._8_4_ = SUB84(dVar7,0);
    auVar11._0_8_ = dVar6;
    auVar11._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar11 = blendpd(auVar21,auVar11,2);
    auVar14._0_8_ = auVar11._0_8_ * dVar3 - auVar12._0_8_ * dVar6;
    auVar14._8_8_ = auVar11._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar7;
    auVar11 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar21 = blendpd(auVar20,auVar14,2);
    dVar7 = auVar20._8_8_ + auVar20._8_8_;
    dVar2 = auVar14._0_8_ + auVar14._0_8_;
    uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar22._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar22._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar16._8_4_ = SUB84(dVar2,0);
    auVar16._0_8_ = dVar7;
    auVar16._12_4_ = uVar18;
    auVar13._8_4_ = SUB84(dVar2,0);
    auVar13._0_8_ = dVar7;
    auVar13._12_4_ = uVar18;
    auVar14 = blendpd(auVar13,auVar22,2);
    auVar21 = blendpd(auVar11,auVar1,2);
    auVar17._0_8_ = auVar16._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar7;
    auVar17._8_8_ = auVar22._0_8_ * auVar11._8_8_ - dVar3 * dVar2;
    auVar12._8_4_ = SUB84(auVar17._8_8_,0);
    auVar12._0_8_ = auVar17._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
    auVar15._0_8_ = auVar14._0_8_ * dVar3 - auVar21._0_8_ * auVar22._0_8_;
    auVar15._8_8_ = auVar14._8_8_ * auVar1._8_8_ - auVar21._8_8_ * auVar22._8_8_;
    auVar11 = blendpd(auVar17,auVar15,2);
    dVar3 = dVar2 * dVar8 + dVar5 + auVar15._0_8_;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar22._0_8_ * dVar8 + dVar6 + auVar11._0_8_;
    UE::Math::TVector<double>::Normalize(__return_storage_ptr__,dVar9);
  }
  return __return_storage_ptr__;
}

// GetFinalKeyTime<TIntegralConstant<bool,1>_> @ 1491ff3c0

float __thiscall
FNDISpline_InstanceData::GetFinalKeyTime<TIntegralConstant<bool,1>_>(FNDISpline_InstanceData *this)

{
  return __real_3f800000;
}

// GetFinalKeyTime<TIntegralConstant<bool,0>_> @ 1491ff3d0

float __thiscall
FNDISpline_InstanceData::GetFinalKeyTime<TIntegralConstant<bool,0>_>(FNDISpline_InstanceData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  iVar1 = *(int *)&(this->SplineCurves).Position.field_0x8;
  if (iVar1 < 1) {
    return __real_3f800000;
  }
  uVar5 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar5 < iVar1) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return *(float *)((longlong)(int)uVar5 * 0x58 + *(longlong *)&(this->SplineCurves).Position);
}

// GetLocationAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 1491ff470

TVector<double> * __thiscall
FNDISpline_InstanceData::GetLocationAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  EvaluatePosition<TIntegralConstant<bool,1>_>(this,__return_storage_ptr__,param_1);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar9 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar11 = blendpd(auVar9,auVar2,2);
    auVar17._8_4_ = SUB84(dVar5,0);
    auVar17._0_8_ = dVar4;
    auVar17._12_4_ = uVar16;
    dVar1 = auVar2._0_8_;
    auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
    auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar1 * dVar5;
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = uVar16;
    auVar9._8_4_ = SUB84(dVar7,0);
    auVar9._0_8_ = dVar6;
    auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar9 = blendpd(auVar19,auVar9,2);
    auVar10._0_8_ = auVar9._0_8_ * dVar1 - auVar11._0_8_ * dVar6;
    auVar10._8_8_ = auVar9._8_8_ * auVar2._8_8_ - auVar11._8_8_ * dVar7;
    auVar9 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar19 = blendpd(auVar18,auVar10,2);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    dVar7 = auVar18._8_8_ + auVar18._8_8_;
    dVar3 = auVar10._0_8_ + auVar10._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar14._8_4_ = SUB84(dVar3,0);
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = uVar16;
    auVar12._8_4_ = SUB84(dVar3,0);
    auVar12._0_8_ = dVar7;
    auVar12._12_4_ = uVar16;
    auVar19 = blendpd(auVar12,auVar20,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
    auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar1 * dVar3;
    auVar11._8_4_ = SUB84(auVar15._8_8_,0);
    auVar11._0_8_ = auVar15._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar9 = blendpd(auVar9,auVar2,2);
    auVar13._0_8_ = auVar19._0_8_ * dVar1 - auVar9._0_8_ * auVar20._0_8_;
    auVar13._8_8_ = auVar19._8_8_ * auVar2._8_8_ - auVar9._8_8_ * auVar20._8_8_;
    auVar9 = blendpd(auVar15,auVar13,2);
    dVar1 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    dVar3 = dVar3 * dVar8 + dVar5 + auVar13._0_8_ +
            (this->ComponentTransform).Translation.XY.m128d_f64[1];
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_ +
                   (this->ComponentTransform).Translation.XY.m128d_f64[0];
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_ + dVar1;
  }
  return __return_storage_ptr__;
}

// GetLocationAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 1491ff600

TVector<double> * __thiscall
FNDISpline_InstanceData::GetLocationAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  fVar9 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res20);
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,__return_storage_ptr__,
             fVar9,&UE::Math::TVector<double>::ZeroVector);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar12 = blendpd(auVar10,auVar2,2);
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar17;
    dVar1 = auVar2._0_8_;
    auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
    auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar1 * dVar5;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = uVar17;
    auVar10._8_4_ = SUB84(dVar7,0);
    auVar10._0_8_ = dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar10 = blendpd(auVar20,auVar10,2);
    auVar11._0_8_ = auVar10._0_8_ * dVar1 - auVar12._0_8_ * dVar6;
    auVar11._8_8_ = auVar10._8_8_ * auVar2._8_8_ - auVar12._8_8_ * dVar7;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar20 = blendpd(auVar19,auVar11,2);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    dVar7 = auVar19._8_8_ + auVar19._8_8_;
    dVar3 = auVar11._0_8_ + auVar11._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar15._8_4_ = SUB84(dVar3,0);
    auVar15._0_8_ = dVar7;
    auVar15._12_4_ = uVar17;
    auVar13._8_4_ = SUB84(dVar3,0);
    auVar13._0_8_ = dVar7;
    auVar13._12_4_ = uVar17;
    auVar20 = blendpd(auVar13,auVar21,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
    auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar1 * dVar3;
    auVar12._8_4_ = SUB84(auVar16._8_8_,0);
    auVar12._0_8_ = auVar16._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar10 = blendpd(auVar10,auVar2,2);
    auVar14._0_8_ = auVar20._0_8_ * dVar1 - auVar10._0_8_ * auVar21._0_8_;
    auVar14._8_8_ = auVar20._8_8_ * auVar2._8_8_ - auVar10._8_8_ * auVar21._8_8_;
    auVar10 = blendpd(auVar16,auVar14,2);
    dVar1 = (this->ComponentTransform).Translation.ZW.m128d_f64[0];
    dVar3 = dVar3 * dVar8 + dVar5 + auVar14._0_8_ +
            (this->ComponentTransform).Translation.XY.m128d_f64[1];
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_ +
                   (this->ComponentTransform).Translation.XY.m128d_f64[0];
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_ + dVar1;
  }
  return __return_storage_ptr__;
}

// GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 1491ff810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TQuat<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TVector<double> *pTVar12;
  TMatrix<double> *this_00;
  double dVar13;
  double dVar14;
  undefined1 auStack_1a8 [32];
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TQuat<double> local_148;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  EvaluateRotation<TIntegralConstant<bool,1>_>(this,&local_148,param_1);
  pTVar12 = EvaluatePosition<TIntegralConstant<bool,1>_>
                      (this,(TVector<double> *)&local_168._s_0,param_1);
  dVar1 = (pTVar12->field0_0x0)._s_0.X;
  dVar2 = (pTVar12->field0_0x0)._s_0.Y;
  dVar3 = (pTVar12->field0_0x0)._s_0.Z;
  dVar13 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar13 == __real_3ff0000000000000) {
    local_188._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_188._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
    local_188._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
  else if (__real_3e45798ee0000000 <= dVar13) {
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    local_188._s_0.X = dVar1 * dVar13;
    local_188._s_0.Y = dVar2 * dVar13;
    local_188._s_0.Z = dVar3 * dVar13;
  }
  else {
    local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar13 = (this->DefaultUpVector).field0_0x0._s_0.X;
  dVar6 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  dVar1 = (this->DefaultUpVector).field0_0x0._s_0.Z;
  dVar3 = dVar1 * local_148.Y - dVar6 * local_148.Z;
  dVar3 = dVar3 + dVar3;
  dVar2 = local_148.Z * dVar13 - dVar1 * local_148.X;
  dVar2 = dVar2 + dVar2;
  dVar14 = dVar6 * local_148.X - local_148.Y * dVar13;
  dVar14 = dVar14 + dVar14;
  local_168._s_0.X = (local_148.Y * dVar14 - local_148.Z * dVar2) + local_148.W * dVar3 + dVar13;
  local_168._s_0.Y = (local_148.Z * dVar3 - local_148.X * dVar14) + local_148.W * dVar2 + dVar6;
  local_168._s_0.Z = (local_148.X * dVar2 - local_148.Y * dVar3) + local_148.W * dVar14 + dVar1;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_118,(TVector<double> *)&local_188._s_0,
                       (TVector<double> *)&local_168._s_0);
  UE::Math::TMatrix<double>::ToQuat(this_00,__return_storage_ptr__);
  if (param_2 == World) {
    dVar13 = __return_storage_ptr__->Z;
    dVar6 = __return_storage_ptr__->W;
    dVar14 = __return_storage_ptr__->X;
    dVar7 = __return_storage_ptr__->Y;
    dVar8 = (this->ComponentTransform).Rotation.XY.m128d_f64[0];
    dVar9 = (this->ComponentTransform).Rotation.XY.m128d_f64[1];
    dVar10 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar11 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar1 = dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar11 * dVar14 +
            dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar2 = dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar11 * dVar7 +
            dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar3 = dVar8 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar11 * dVar13 +
            dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar13 = dVar8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar11 * dVar6 +
             dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar4._8_4_ = SUB84(dVar2,0);
    auVar4._0_8_ = dVar1;
    auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    __return_storage_ptr__->X = dVar1;
    __return_storage_ptr__->Y = (double)auVar4._8_8_;
    auVar5._8_4_ = SUB84(dVar13,0);
    auVar5._0_8_ = dVar3;
    auVar5._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    __return_storage_ptr__->Z = dVar3;
    __return_storage_ptr__->W = (double)auVar5._8_8_;
  }
  return __return_storage_ptr__;
}

// GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 1491ffb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
FNDISpline_InstanceData::GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TQuat<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TQuat<double> *pTVar11;
  TMatrix<double> *this_00;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  double dVar15;
  double dVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  uint uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_178 [32];
  float local_158 [2];
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_158[0] = 0.0;
  fVar14 = FInterpCurve<float>::Eval
                     ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_158);
  pTVar11 = FInterpCurve<UE::Math::TQuat<double>_>::Eval
                      ((FInterpCurve<UE::Math::TQuat<double>_> *)&(this->SplineCurves).Rotation,
                       (TQuat<double> *)&local_138._s_0,fVar14,&UE::Math::TQuat<double>::Identity);
  dVar9 = __real_3e45798ee0000000;
  dVar2 = pTVar11->X;
  dVar3 = pTVar11->Y;
  dVar5 = pTVar11->Z;
  dVar8 = pTVar11->W;
  dVar15 = dVar5 * dVar5 + dVar2 * dVar2;
  dVar19 = dVar8 * dVar8 + dVar3 * dVar3;
  dVar20 = dVar19 + dVar15;
  dVar15 = dVar15 + dVar19;
  auVar26._8_4_ = SUB84(dVar15,0);
  auVar26._0_8_ = dVar20;
  auVar26._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar21 = sqrtpd(in_XMM3,auVar26);
  uVar12 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
  uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar21);
  uVar23 = (uint)(uVar12 >> 0x20);
  uVar24 = (uint)(uVar13 >> 0x20);
  auVar27._0_8_ = uVar12 & (ulonglong)(auVar26._0_8_ * dVar2);
  uVar7 = uVar13 & (ulonglong)(auVar26._8_8_ * dVar3);
  auVar27._8_4_ = (undefined4)uVar7;
  auVar27._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar21);
  auVar29._0_4_ = ~(uint)uVar12 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar29._4_4_ =
       ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar29._12_4_ =
       ~uVar24 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar17._0_8_ = (ulonglong)(auVar26._0_8_ * dVar5) & uVar12;
  uVar13 = (ulonglong)(auVar26._8_8_ * dVar8) & uVar13;
  auVar17._8_4_ = (undefined4)uVar13;
  auVar17._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar29 = auVar29 | auVar17;
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,
             (TVector<double> *)&local_150._s_0,fVar14,&UE::Math::TVector<double>::ZeroVector);
  dVar20 = local_150._s_0.Y * local_150._s_0.Y + local_150._s_0.X * local_150._s_0.X +
           local_150._s_0.Z * local_150._s_0.Z;
  if (dVar20 != __real_3ff0000000000000) {
    if (dVar9 <= dVar20) {
      auVar21._0_8_ = __real_3ff0000000000000 / SQRT(dVar20);
      auVar21._8_8_ = 0;
      local_150._s_0.X = local_150._s_0.X * auVar21._0_8_;
      local_150._s_0.Y = local_150._s_0.Y * auVar21._0_8_;
      local_150._s_0.Z = local_150._s_0.Z * auVar21._0_8_;
    }
    else {
      local_150._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_150._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_150._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  dVar8 = (this->DefaultUpVector).field0_0x0._s_0.X;
  dVar9 = (this->DefaultUpVector).field0_0x0._s_0.Y;
  dVar20 = (this->DefaultUpVector).field0_0x0._s_0.Z;
  dVar28 = auVar29._0_8_;
  dVar25 = SUB168(auVar27 | auVar16,0);
  auVar6._4_8_ = auVar21._8_8_;
  auVar6._0_4_ = auVar29._4_4_;
  auVar22._0_8_ = auVar6._0_8_ << 0x20;
  auVar22._8_4_ = auVar29._8_4_;
  auVar22._12_4_ = auVar29._12_4_;
  dVar3 = SUB168(auVar27 | auVar16,8);
  dVar19 = auVar22._8_8_;
  dVar5 = dVar20 * dVar3 - dVar9 * dVar28;
  dVar5 = dVar5 + dVar5;
  dVar2 = dVar8 * dVar28 - dVar20 * dVar25;
  dVar2 = dVar2 + dVar2;
  dVar15 = dVar9 * dVar25 - dVar8 * dVar3;
  dVar15 = dVar15 + dVar15;
  local_138._s_0.X = (dVar15 * dVar3 - dVar2 * dVar28) + dVar5 * dVar19 + dVar8;
  local_138._s_0.Y = (dVar5 * dVar28 - dVar15 * dVar25) + dVar2 * dVar19 + dVar9;
  local_138._s_0.Z = (dVar2 * dVar25 - dVar5 * dVar3) + dVar15 * dVar19 + dVar20;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_118,(TVector<double> *)&local_150._s_0,
                       (TVector<double> *)&local_138._s_0);
  UE::Math::TMatrix<double>::ToQuat(this_00,__return_storage_ptr__);
  if (param_2 == World) {
    dVar8 = __return_storage_ptr__->Z;
    dVar9 = __return_storage_ptr__->W;
    dVar19 = __return_storage_ptr__->X;
    dVar25 = __return_storage_ptr__->Y;
    auVar26 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar28 = (this->ComponentTransform).Rotation.ZW.m128d_f64[0];
    dVar10 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar2 = auVar26._0_8_;
    dVar3 = auVar26._8_8_;
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = dVar3;
    auVar18._12_4_ = auVar26._12_4_;
    dVar20 = dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar10 * dVar19 +
             dVar3 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar28 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar15 = dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar10 * dVar25 +
             auVar18._8_8_ * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar28 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar5 = dVar2 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar10 * dVar8 +
            dVar3 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar28 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar2 = dVar2 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar10 * dVar9 +
            dVar3 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar28 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar1._8_4_ = SUB84(dVar15,0);
    auVar1._0_8_ = dVar20;
    auVar1._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    __return_storage_ptr__->X = dVar20;
    __return_storage_ptr__->Y = (double)auVar1._8_8_;
    auVar4._8_4_ = SUB84(dVar2,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    __return_storage_ptr__->Z = dVar5;
    __return_storage_ptr__->W = (double)auVar4._8_8_;
  }
  return __return_storage_ptr__;
}

// GetRightVectorAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 1491fff70

TVector<double> * __thiscall
FNDISpline_InstanceData::GetRightVectorAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar7 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar3 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  }
  return __return_storage_ptr__;
}

// GetRightVectorAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 149200110

TVector<double> * __thiscall
FNDISpline_InstanceData::GetRightVectorAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar7 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar3 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  }
  return __return_storage_ptr__;
}

// GetSplineLength<TIntegralConstant<bool,1>_> @ 1492002b0

float __thiscall
FNDISpline_InstanceData::GetSplineLength<TIntegralConstant<bool,1>_>(FNDISpline_InstanceData *this)

{
  return (this->SplineLUT).SplineLength;
}

// GetSplineLength<TIntegralConstant<bool,0>_> @ 1492002c0

float __thiscall
FNDISpline_InstanceData::GetSplineLength<TIntegralConstant<bool,0>_>(FNDISpline_InstanceData *this)

{
  float fVar1;
  
  fVar1 = FSplineCurves::GetSplineLength(&this->SplineCurves);
  return fVar1;
}

// GetTangentAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 1492002e0

TVector<double> * __thiscall
FNDISpline_InstanceData::GetTangentAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  EvaluateDerivativePosition<TIntegralConstant<bool,1>_>(this,__return_storage_ptr__,param_1);
  if (param_2 == World) {
    auVar1 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar9 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar11 = blendpd(auVar9,auVar1,2);
    auVar17._8_4_ = SUB84(dVar5,0);
    auVar17._0_8_ = dVar4;
    auVar17._12_4_ = uVar16;
    dVar3 = auVar1._0_8_;
    auVar18._0_8_ = auVar17._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar4;
    auVar18._8_8_ = dVar6 * auVar9._8_8_ - dVar3 * dVar5;
    auVar19._8_4_ = SUB84(dVar5,0);
    auVar19._0_8_ = dVar4;
    auVar19._12_4_ = uVar16;
    auVar9._8_4_ = SUB84(dVar7,0);
    auVar9._0_8_ = dVar6;
    auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar9 = blendpd(auVar19,auVar9,2);
    auVar10._0_8_ = auVar9._0_8_ * dVar3 - auVar11._0_8_ * dVar6;
    auVar10._8_8_ = auVar9._8_8_ * auVar1._8_8_ - auVar11._8_8_ * dVar7;
    auVar9 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar19 = blendpd(auVar18,auVar10,2);
    auVar20._0_8_ = auVar19._0_8_ + auVar19._0_8_;
    auVar20._8_8_ = auVar19._8_8_ + auVar19._8_8_;
    dVar7 = auVar18._8_8_ + auVar18._8_8_;
    dVar2 = auVar10._0_8_ + auVar10._0_8_;
    uVar16 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar14._8_4_ = SUB84(dVar2,0);
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = uVar16;
    auVar12._8_4_ = SUB84(dVar2,0);
    auVar12._0_8_ = dVar7;
    auVar12._12_4_ = uVar16;
    auVar19 = blendpd(auVar12,auVar20,2);
    auVar15._0_8_ = auVar14._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar7;
    auVar15._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar3 * dVar2;
    auVar11._8_4_ = SUB84(auVar15._8_8_,0);
    auVar11._0_8_ = auVar15._0_8_;
    auVar11._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar9 = blendpd(auVar9,auVar1,2);
    auVar13._0_8_ = auVar19._0_8_ * dVar3 - auVar9._0_8_ * auVar20._0_8_;
    auVar13._8_8_ = auVar19._8_8_ * auVar1._8_8_ - auVar9._8_8_ * auVar20._8_8_;
    auVar9 = blendpd(auVar15,auVar13,2);
    dVar3 = dVar2 * dVar8 + dVar5 + auVar13._0_8_;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar11._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar20._0_8_ * dVar8 + dVar6 + auVar9._0_8_;
  }
  return __return_storage_ptr__;
}

// GetTangentAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 149200460

TVector<double> * __thiscall
FNDISpline_InstanceData::GetTangentAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  fVar9 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&(this->SplineCurves).ReparamTable,param_1,local_res20);
  FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
            ((FInterpCurve<UE::Math::TVector<double>_> *)&this->SplineCurves,__return_storage_ptr__,
             fVar9,&UE::Math::TVector<double>::ZeroVector);
  if (param_2 == World) {
    auVar1 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar8 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    dVar4 = (__return_storage_ptr__->field0_0x0)._s_0.X *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[0];
    dVar5 = (__return_storage_ptr__->field0_0x0)._s_0.Y *
            (this->ComponentTransform).Scale3D.XY.m128d_f64[1];
    uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
    dVar6 = (__return_storage_ptr__->field0_0x0)._s_0.Z *
            (this->ComponentTransform).Scale3D.ZW.m128d_f64[0];
    dVar7 = (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar12 = blendpd(auVar10,auVar1,2);
    auVar18._8_4_ = SUB84(dVar5,0);
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = uVar17;
    dVar3 = auVar1._0_8_;
    auVar19._0_8_ = auVar18._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar4;
    auVar19._8_8_ = dVar6 * auVar10._8_8_ - dVar3 * dVar5;
    auVar20._8_4_ = SUB84(dVar5,0);
    auVar20._0_8_ = dVar4;
    auVar20._12_4_ = uVar17;
    auVar10._8_4_ = SUB84(dVar7,0);
    auVar10._0_8_ = dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar10 = blendpd(auVar20,auVar10,2);
    auVar11._0_8_ = auVar10._0_8_ * dVar3 - auVar12._0_8_ * dVar6;
    auVar11._8_8_ = auVar10._8_8_ * auVar1._8_8_ - auVar12._8_8_ * dVar7;
    auVar10 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar20 = blendpd(auVar19,auVar11,2);
    auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    dVar7 = auVar19._8_8_ + auVar19._8_8_;
    dVar2 = auVar11._0_8_ + auVar11._0_8_;
    uVar17 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar15._8_4_ = SUB84(dVar2,0);
    auVar15._0_8_ = dVar7;
    auVar15._12_4_ = uVar17;
    auVar13._8_4_ = SUB84(dVar2,0);
    auVar13._0_8_ = dVar7;
    auVar13._12_4_ = uVar17;
    auVar20 = blendpd(auVar13,auVar21,2);
    auVar16._0_8_ = auVar15._8_8_ * auVar10._0_8_ - auVar10._8_8_ * dVar7;
    auVar16._8_8_ = auVar21._0_8_ * auVar10._8_8_ - dVar3 * dVar2;
    auVar12._8_4_ = SUB84(auVar16._8_8_,0);
    auVar12._0_8_ = auVar16._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
    auVar10 = blendpd(auVar10,auVar1,2);
    auVar14._0_8_ = auVar20._0_8_ * dVar3 - auVar10._0_8_ * auVar21._0_8_;
    auVar14._8_8_ = auVar20._8_8_ * auVar1._8_8_ - auVar10._8_8_ * auVar21._8_8_;
    auVar10 = blendpd(auVar16,auVar14,2);
    dVar3 = dVar2 * dVar8 + dVar5 + auVar14._0_8_;
    auVar1._8_4_ = SUB84(dVar3,0);
    auVar1._0_8_ = dVar7 * dVar8 + dVar4 + auVar12._8_8_;
    auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar21._0_8_ * dVar8 + dVar6 + auVar10._0_8_;
  }
  return __return_storage_ptr__;
}

// GetUpVectorAtDistanceAlongSpline<TIntegralConstant<bool,1>_> @ 149200cd0

TVector<double> * __thiscall
FNDISpline_InstanceData::GetUpVectorAtDistanceAlongSpline<TIntegralConstant<bool,1>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,1>_>(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar7 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar3 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  }
  return __return_storage_ptr__;
}

// GetUpVectorAtDistanceAlongSpline<TIntegralConstant<bool,0>_> @ 149200e70

TVector<double> * __thiscall
FNDISpline_InstanceData::GetUpVectorAtDistanceAlongSpline<TIntegralConstant<bool,0>_>
          (FNDISpline_InstanceData *this,TVector<double> *__return_storage_ptr__,float param_1,
          Type param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [3];
  
  GetQuaternionAtDistanceAlongSpline<TIntegralConstant<bool,0>_>(this,local_68,param_1,Local);
  local_88._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_88._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_88._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (local_68,__return_storage_ptr__,(TVector<double> *)&local_88._s_0);
  if (param_2 == World) {
    auVar2 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.ZW.m128d_f64;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    dVar7 = (this->ComponentTransform).Rotation.ZW.m128d_f64[1];
    auVar3 = *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0;
    dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
    dVar18 = auVar3._8_8_;
    dVar6 = auVar2._0_8_;
    auVar9 = blendpd(auVar8,auVar2,2);
    auVar16._0_8_ = dVar18 * auVar8._0_8_ - auVar8._8_8_ * auVar3._0_8_;
    auVar16._8_8_ = dVar1 * auVar8._8_8_ - dVar6 * dVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar1;
    auVar8 = blendpd(auVar3,auVar8,2);
    auVar11._0_8_ = auVar8._0_8_ * dVar6 - auVar9._0_8_ * dVar1;
    auVar11._8_8_ = auVar8._8_8_ * auVar2._8_8_ - auVar9._8_8_ * 0.0;
    auVar8 = *(undefined1 (*) [16])(this->ComponentTransform).Rotation.XY.m128d_f64;
    auVar9 = blendpd(auVar16,auVar11,2);
    auVar17._0_8_ = auVar9._0_8_ + auVar9._0_8_;
    auVar17._8_8_ = auVar9._8_8_ + auVar9._8_8_;
    dVar4 = auVar16._8_8_ + auVar16._8_8_;
    dVar5 = auVar11._0_8_ + auVar11._0_8_;
    uVar15 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar13._8_4_ = SUB84(dVar5,0);
    auVar13._0_8_ = dVar4;
    auVar13._12_4_ = uVar15;
    auVar10._8_4_ = SUB84(dVar5,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = uVar15;
    auVar11 = blendpd(auVar10,auVar17,2);
    auVar14._0_8_ = auVar13._8_8_ * auVar8._0_8_ - auVar8._8_8_ * dVar4;
    auVar14._8_8_ = auVar17._0_8_ * auVar8._8_8_ - dVar6 * dVar5;
    auVar9._8_4_ = SUB84(auVar14._8_8_,0);
    auVar9._0_8_ = auVar14._0_8_;
    auVar9._12_4_ = (int)((ulonglong)auVar14._8_8_ >> 0x20);
    auVar8 = blendpd(auVar8,auVar2,2);
    auVar12._0_8_ = auVar11._0_8_ * dVar6 - auVar8._0_8_ * auVar17._0_8_;
    auVar12._8_8_ = auVar11._8_8_ * auVar2._8_8_ - auVar8._8_8_ * auVar17._8_8_;
    auVar8 = blendpd(auVar14,auVar12,2);
    dVar6 = dVar5 * dVar7 + dVar18 + auVar12._0_8_;
    auVar2._8_4_ = SUB84(dVar6,0);
    auVar2._0_8_ = dVar4 * dVar7 + auVar3._0_8_ + auVar9._8_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = auVar17._0_8_ * dVar7 + dVar1 + auVar8._0_8_;
  }
  return __return_storage_ptr__;
}

// IsValid @ 149242e60

bool __thiscall FNDISpline_InstanceData::IsValid(FNDISpline_InstanceData *this)

{
  int iVar1;
  FUObjectItem *pFVar2;
  
  if (((this->Component).WeakPtr.ObjectSerialNumber != 0) &&
     (iVar1 = (this->Component).WeakPtr.ObjectIndex, -1 < iVar1)) {
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,iVar1);
    if ((pFVar2 != (FUObjectItem *)0x0) &&
       ((pFVar2->SerialNumber == (this->Component).WeakPtr.ObjectSerialNumber &&
        (((pFVar2->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) == 0)))) {
      return true;
    }
  }
  return false;
}

