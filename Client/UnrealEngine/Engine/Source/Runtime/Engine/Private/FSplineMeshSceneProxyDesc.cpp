// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FSplineMeshSceneProxyDesc @ 148711a20

FSplineMeshSceneProxyDesc * __thiscall
FSplineMeshSceneProxyDesc::FSplineMeshSceneProxyDesc
          (FSplineMeshSceneProxyDesc *this,USplineMeshComponent *param_1)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  TConsoleVariableData<bool> *pTVar8;
  bool bVar9;
  longlong lVar10;
  FSplineMeshSceneProxyDesc *pFVar11;
  
  (this->SplineParams).NaniteClusterBoundsScale = 1.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).StartRoll = 0.0;
  (this->SplineParams).EndRoll = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = 0.0;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = 0.0;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y = 0.0;
  uVar7 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->SplineUpDir).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->SplineUpDir).field0_0x0._s_0.Y = (double)uVar7;
  (this->SplineUpDir).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  this->SplineBoundaryMin = 0.0;
  this->SplineBoundaryMax = 0.0;
  this->ForwardAxis = '\0';
  this->bSmoothInterpRollScale = false;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = 0.0;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = 0.0;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->SourceMeshBounds).SphereRadius = 0.0;
  dVar4 = (param_1->SplineParams).StartPos.field0_0x0._s_0.Y;
  (this->SplineParams).StartPos.field0_0x0._s_0.X =
       (param_1->SplineParams).StartPos.field0_0x0._s_0.X;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).StartTangent.field0_0x0._s_0.X;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z =
       (param_1->SplineParams).StartPos.field0_0x0._s_0.Z;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).StartTangent.field0_0x0._s_0.Z;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y =
       (param_1->SplineParams).StartTangent.field0_0x0._s_0.Y;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_1->SplineParams).StartScale.field0_0x0._s_0.Y;
  (this->SplineParams).StartScale.field0_0x0._s_0.X =
       (param_1->SplineParams).StartScale.field0_0x0._s_0.X;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = dVar4;
  fVar5 = (param_1->SplineParams).EndRoll;
  dVar4 = (param_1->SplineParams).StartOffset.field0_0x0._s_0.X;
  (this->SplineParams).StartRoll = (param_1->SplineParams).StartRoll;
  (this->SplineParams).EndRoll = fVar5;
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).EndPos.field0_0x0._s_0.X;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y =
       (param_1->SplineParams).StartOffset.field0_0x0._s_0.Y;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).EndPos.field0_0x0._s_0.Z;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = (param_1->SplineParams).EndPos.field0_0x0._s_0.Y;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_1->SplineParams).EndScale.field0_0x0._s_0.Y;
  (this->SplineParams).EndScale.field0_0x0._s_0.X =
       (param_1->SplineParams).EndScale.field0_0x0._s_0.X;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).EndTangent.field0_0x0._s_0.Y;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X =
       (param_1->SplineParams).EndTangent.field0_0x0._s_0.X;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).EndOffset.field0_0x0._s_0.X;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z =
       (param_1->SplineParams).EndTangent.field0_0x0._s_0.Z;
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = dVar4;
  fVar5 = (param_1->SplineParams).NaniteClusterBoundsScale;
  uVar6 = *(undefined4 *)&(param_1->SplineParams).field_0xac;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y =
       (param_1->SplineParams).EndOffset.field0_0x0._s_0.Y;
  (this->SplineParams).NaniteClusterBoundsScale = fVar5;
  *(undefined4 *)&(this->SplineParams).field_0xac = uVar6;
  dVar4 = (param_1->SplineUpDir).field0_0x0._s_0.Y;
  (this->SplineUpDir).field0_0x0._s_0.X = (param_1->SplineUpDir).field0_0x0._s_0.X;
  (this->SplineUpDir).field0_0x0._s_0.Y = dVar4;
  (this->SplineUpDir).field0_0x0._s_0.Z = (param_1->SplineUpDir).field0_0x0._s_0.Z;
  this->SplineBoundaryMin = param_1->SplineBoundaryMin;
  this->SplineBoundaryMax = param_1->SplineBoundaryMax;
  this->bSmoothInterpRollScale = param_1->bSmoothInterpRollScale;
  (this->ForwardAxis).Value = (param_1->ForwardAxis).Value;
  pUVar1 = (UObject *)param_1->_padding_;
  if (pUVar1 == (UObject *)0x0) {
    return this;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  dVar4 = *(double *)(pUVar1 + 0xf);
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = *(double *)&pUVar1[0xe].field_0x20;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)&pUVar1[0xf].field_0x10;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = *(double *)&pUVar1[0xf].field_0x8;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = dVar4;
  dVar4 = *(double *)&pUVar1[0xf].field_0x20;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = *(double *)&pUVar1[0xf].field_0x18;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
  (this->SourceMeshBounds).SphereRadius = *(double *)(pUVar1 + 0x10);
  pTVar8 = CVarSplineMeshFitToSourceMeshBounds.Ref;
  bVar9 = IsInParallelGameThread();
  if (!bVar9) {
    bVar9 = IsInGameThread();
    lVar10 = 1;
    if (!bVar9) goto LAB_148711c41;
  }
  lVar10 = 0;
LAB_148711c41:
  if (((pTVar8->ShadowedValue[lVar10] != false) &&
      (puVar2 = *(undefined8 **)&pUVar1[6].field_0x8, puVar2 != (undefined8 *)0x0)) &&
     (*(int *)(puVar2 + 1) != 0)) {
    if ((*(int *)(puVar2 + 1) < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FSplineMeshSceneProxyDesc *)(*pcVar3)();
      return pFVar11;
    }
    lVar10 = *(longlong *)*puVar2;
    dVar4 = *(double *)(lVar10 + 0x60);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = *(double *)(lVar10 + 0x58);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = dVar4;
    dVar4 = *(double *)(lVar10 + 0x70);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = *(double *)(lVar10 + 0x68);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = dVar4;
    dVar4 = *(double *)(lVar10 + 0x80);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = *(double *)(lVar10 + 0x78);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    (this->SourceMeshBounds).SphereRadius = *(double *)(lVar10 + 0x88);
  }
  return this;
}

// operator() @ 148718370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FSplineMeshSceneProxyDesc::ComputeDistortedBounds'::__l2::<lambda_1>::operator()
          (void *this,double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  TBox<double> *pTVar3;
  FSplineMeshSceneProxyDesc *pFVar4;
  double dVar5;
  TTransform<double> *pTVar6;
  TMatrix<double> *pTVar7;
  float fVar8;
  double dVar9;
  undefined1 auStackY_1a8 [32];
  TTransform<double> local_178;
  TBox<double> local_118;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((0.0 < param_1) &&
     (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(param_2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    fVar1 = *(float *)((longlong)this + 0x18);
    dVar5 = ((double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000) -
            SQRT(param_1)) * (__real_3fe0000000000000 / param_2);
    dVar9 = (SQRT(param_1) - param_3) * (__real_3fe0000000000000 / param_2);
    if (((double)fVar1 <= dVar9) &&
       (fVar2 = *(float *)((longlong)this + 0x1c), dVar9 <= (double)fVar2)) {
      pTVar3 = *(TBox<double> **)((longlong)this + 0x10);
      pFVar4 = *(FSplineMeshSceneProxyDesc **)this;
      fVar8 = UE::SplineMesh::RealToFloatChecked(dVar9);
      pTVar6 = FSplineMeshSceneProxyDesc::CalcSliceTransformAtSplineOffset
                         (pFVar4,&local_178,fVar8,fVar1,fVar2);
      pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar6,&local_d8);
      UE::Math::TBox<double>::TransformBy(pTVar3,&local_118,pTVar7);
      UE::Math::TBox<double>::operator+=(*(TBox<double> **)((longlong)this + 8),&local_118);
    }
    fVar1 = *(float *)((longlong)this + 0x18);
    if (((double)fVar1 <= dVar5) &&
       (fVar2 = *(float *)((longlong)this + 0x1c), dVar5 <= (double)fVar2)) {
      pTVar3 = *(TBox<double> **)((longlong)this + 0x10);
      pFVar4 = *(FSplineMeshSceneProxyDesc **)this;
      fVar8 = UE::SplineMesh::RealToFloatChecked(dVar5);
      pTVar6 = FSplineMeshSceneProxyDesc::CalcSliceTransformAtSplineOffset
                         (pFVar4,&local_178,fVar8,fVar1,fVar2);
      pTVar7 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar6,&local_d8);
      UE::Math::TBox<double>::TransformBy(pTVar3,&local_118,pTVar7);
      UE::Math::TBox<double>::operator+=(*(TBox<double> **)((longlong)this + 8),&local_118);
    }
  }
  return;
}

// CalcSliceTransform @ 148727a10

TTransform<double> * __thiscall
FSplineMeshSceneProxyDesc::CalcSliceTransform
          (FSplineMeshSceneProxyDesc *this,TTransform<double> *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  fVar1 = ComputeRatioAlongSpline(this,param_1);
  local_res20[0] = 0.0;
  local_res10[0] = 1.0;
  ComputeVisualMeshSplineTRange(this,local_res20,local_res10);
  CalcSliceTransformAtSplineOffset(this,__return_storage_ptr__,fVar1,local_res20[0],local_res10[0]);
  return __return_storage_ptr__;
}

// CalcSliceTransformAtSplineOffset @ 148727a90

TTransform<double> * __thiscall
FSplineMeshSceneProxyDesc::CalcSliceTransformAtSplineOffset
          (FSplineMeshSceneProxyDesc *this,TTransform<double> *__return_storage_ptr__,float param_1,
          float param_2,float param_3)

{
  uchar uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  bool bVar13;
  TVector<float> *pTVar14;
  TTransform<double> *pTVar15;
  float fVar16;
  FSplineMeshSceneProxyDesc *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float extraout_XMM0_Da;
  undefined4 uVar22;
  float extraout_XMM0_Db;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  TVector<float>_u_0 local_3b0;
  float local_3a0;
  float fStack_39c;
  float local_398;
  TVector<double>_u_0 local_390;
  TVector<float>_u_0 local_378;
  float local_368;
  float fStack_364;
  float local_360;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_310;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2b0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<float> local_250;
  TVector<float> local_244;
  TVector<float> local_238;
  TVector<float> local_22c [7];
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118 [2];
  
  fVar21 = __real_3f800000;
  fVar34 = param_1;
  if (((this->bSmoothInterpRollScale != false) && (fVar34 = 0.0, 0.0 <= param_1)) &&
     (fVar34 = __real_3f800000, param_1 < __real_3f800000)) {
    fVar34 = (__real_40400000 - (param_1 + param_1)) * param_1 * param_1;
  }
  fVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (param_2 <= param_1) {
    if (param_1 <= param_3) {
      pFVar17 = this;
      pTVar14 = SplineEvalPos(&local_238,&this->SplineParams,param_1);
      local_3b0._0_8_ = *(undefined8 *)&pTVar14->field0_0x0;
      local_3b0._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      pTVar14 = SplineEvalTangent(local_22c,&pFVar17->SplineParams,param_1);
      fVar32 = (pTVar14->field0_0x0)._s_0.X;
      fVar27 = (pTVar14->field0_0x0)._s_0.Y;
      fVar28 = (pTVar14->field0_0x0)._s_0.Z;
      fVar35 = fVar27 * fVar27 + fVar32 * fVar32 + fVar28 * fVar28;
      if (fVar35 == fVar21) {
        uVar18 = (float)*(undefined8 *)&pTVar14->field0_0x0;
        uVar22 = (float)((ulonglong)*(undefined8 *)&pTVar14->field0_0x0 >> 0x20);
        fVar16 = (pTVar14->field0_0x0)._s_0.Z;
      }
      else {
        uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
        fVar16 = fVar26;
        if (__real_322bcc77 <= fVar35) {
          fVar35 = fVar21 / SQRT(fVar35);
          uVar18 = fVar35 * fVar32;
          uVar22 = fVar35 * fVar27;
          fVar16 = fVar35 * fVar28;
        }
      }
      local_390._s_0.X = (double)CONCAT44(uVar22,uVar18);
      uVar29 = local_3b0._s_0.X;
      uVar30 = local_3b0._s_0.Y;
      uVar33 = local_3b0._s_0.Z;
      goto LAB_148727d50;
    }
    pFVar17 = this;
    SplineEvalTangent((TVector<float> *)&local_378._s_0,&this->SplineParams,param_3);
    pTVar14 = SplineEvalPos(&local_244,&pFVar17->SplineParams,param_3);
    param_2 = param_3;
  }
  else {
    pFVar17 = this;
    SplineEvalTangent((TVector<float> *)&local_3b0._s_0,&this->SplineParams,param_2);
    pTVar14 = SplineEvalPos(&local_250,&pFVar17->SplineParams,param_2);
    local_378._s_0.X = local_3b0._s_0.X;
    local_378._s_0.Y = local_3b0._s_0.Y;
    local_378._s_0.Z = local_3b0._s_0.Z;
  }
  fVar32 = param_1 - param_2;
  uVar30 = fVar32 * local_378._s_0.Y + (pTVar14->field0_0x0)._s_0.Y;
  uVar29 = fVar32 * local_378._s_0.X + (pTVar14->field0_0x0)._s_0.X;
  uVar33 = fVar32 * local_378._s_0.Z + (pTVar14->field0_0x0)._s_0.Z;
  fVar32 = local_378._s_0.X * local_378._s_0.X + local_378._s_0.Y * local_378._s_0.Y +
           local_378._s_0.Z * local_378._s_0.Z;
  uVar18 = local_378._s_0.X;
  uVar22 = local_378._s_0.Y;
  fVar16 = local_378._s_0.Z;
  if ((fVar32 != fVar21) &&
     (uVar18 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, fVar16 = fVar26,
     __real_322bcc77 <= fVar32)) {
    fVar32 = fVar21 / SQRT(fVar32);
    uVar18 = fVar32 * local_378._s_0.X;
    uVar22 = fVar32 * local_378._s_0.Y;
    fVar16 = fVar32 * local_378._s_0.Z;
  }
LAB_148727d50:
  fVar27 = (float)(this->SplineUpDir).field0_0x0._s_0.X;
  fVar32 = (float)(this->SplineUpDir).field0_0x0._s_0.Z;
  fVar28 = (float)(this->SplineUpDir).field0_0x0._s_0.Y;
  fVar35 = fVar16 * fVar28 - (float)uVar22 * fVar32;
  fVar37 = (float)uVar18 * fVar32 - fVar16 * fVar27;
  local_360 = (float)uVar22 * fVar27 - (float)uVar18 * fVar28;
  fVar27 = fVar37 * fVar37 + fVar35 * fVar35 + local_360 * local_360;
  uVar23 = fVar35;
  uVar39 = fVar37;
  fVar32 = local_360;
  if ((fVar27 != fVar21) &&
     (uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar39 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, fVar32 = fVar26,
     __real_322bcc77 <= fVar27)) {
    fVar32 = fVar21 / SQRT(fVar27);
    uVar23 = fVar32 * fVar35;
    uVar39 = fVar32 * fVar37;
    fVar32 = fVar32 * local_360;
  }
  _local_368 = CONCAT44(fVar37,fVar35);
  fVar28 = fVar32 * (float)uVar22 - (float)uVar39 * fVar16;
  fVar35 = (float)uVar23 * fVar16 - fVar32 * (float)uVar18;
  local_398 = (float)uVar39 * (float)uVar18 - (float)uVar23 * (float)uVar22;
  fVar27 = fVar35 * fVar35 + fVar28 * fVar28 + local_398 * local_398;
  if (fVar27 == fVar21) {
    local_390._s_0.X = (double)CONCAT44(fVar35,fVar28);
    uVar20 = fVar35;
    uVar19 = fVar28;
    fVar26 = local_398;
  }
  else if (__real_322bcc77 <= fVar27) {
    fVar21 = fVar21 / SQRT(fVar27);
    uVar19 = fVar21 * fVar28;
    uVar20 = fVar21 * fVar35;
    fVar26 = fVar21 * local_398;
  }
  else {
    local_390._s_0.X =
         (double)CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                          UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    uVar20 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar19 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  }
  _local_3a0 = CONCAT44(fVar35,fVar28);
  fVar27 = (float)(this->SplineParams).StartOffset.field0_0x0._s_0.Y;
  fVar21 = (float)(this->SplineParams).StartOffset.field0_0x0._s_0.X;
  fVar27 = ((float)(this->SplineParams).EndOffset.field0_0x0._s_0.Y - fVar27) * fVar34 + fVar27;
  fVar21 = ((float)(this->SplineParams).EndOffset.field0_0x0._s_0.X - fVar21) * fVar34 + fVar21;
  fVar28 = (float)uVar23 * fVar21 + (float)uVar29 + (float)uVar19 * fVar27;
  fVar35 = (float)uVar39 * fVar21 + (float)uVar30 + (float)uVar20 * fVar27;
  fVar37 = fVar32 * fVar21 + (float)uVar33 + fVar26 * fVar27;
  __libm_sse2_sincosf_();
  fVar31 = (float)uVar23 * extraout_XMM0_Db - (float)uVar19 * extraout_XMM0_Da;
  fVar38 = (float)uVar19 * extraout_XMM0_Db + (float)uVar23 * extraout_XMM0_Da;
  fVar24 = (float)uVar39 * extraout_XMM0_Db - (float)uVar20 * extraout_XMM0_Da;
  fVar36 = (float)uVar20 * extraout_XMM0_Db + (float)uVar39 * extraout_XMM0_Da;
  fVar25 = fVar32 * extraout_XMM0_Db - fVar26 * extraout_XMM0_Da;
  fVar27 = (float)(this->SplineParams).StartScale.field0_0x0._s_0.X;
  fVar32 = fVar26 * extraout_XMM0_Db + fVar32 * extraout_XMM0_Da;
  fVar26 = (float)(this->SplineParams).StartScale.field0_0x0._s_0.Y;
  fVar27 = ((float)(this->SplineParams).EndScale.field0_0x0._s_0.X - fVar27) * fVar34 + fVar27;
  fVar26 = ((float)(this->SplineParams).EndScale.field0_0x0._s_0.Y - fVar26) * fVar34 + fVar26;
  fVar21 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar34 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar34,0);
  auVar4._0_8_ = (double)fVar21;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar21 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar34 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar34,0);
  auVar6._0_8_ = (double)fVar21;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar21 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar34 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar34,0);
  auVar8._0_8_ = (double)fVar21;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar34 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  uVar1 = (this->ForwardAxis).Value;
  if (uVar1 == '\0') {
    local_2b0._s_0.X = (double)fVar28;
    local_2b0._s_0.Y = (double)fVar35;
    local_2b0._s_0.Z = (double)fVar37;
    local_298._s_0.Y = (double)fVar36;
    local_298._s_0.X = (double)fVar38;
    local_298._s_0.Z = (double)fVar32;
    local_280._s_0.X = (double)fVar31;
    local_280._s_0.Y = (double)fVar24;
    local_280._s_0.Z = (double)fVar25;
    local_268._s_0.X = (double)(float)uVar18;
    local_268._s_0.Z = (double)fVar16;
    local_268._s_0.Y = (double)(float)uVar22;
    pTVar15 = UE::Math::TTransform<double>::TTransform<double>
                        (local_118,(TVector<double> *)&local_268._s_0,
                         (TVector<double> *)&local_280._s_0,(TVector<double> *)&local_298._s_0,
                         (TVector<double> *)&local_2b0._s_0);
    dVar11 = (pTVar15->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar15->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar15->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar15->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
    uVar22 = __real_3ff0000000000000._4_4_;
    uVar18 = (undefined4)__real_3ff0000000000000;
    dVar11 = (pTVar15->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar15->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    *(undefined4 *)(__return_storage_ptr__->Scale3D).XY.m128d_f64 = uVar18;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).XY.m128d_f64 + 4) = uVar22;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar27;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar26;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else if (uVar1 == '\x01') {
    local_310._s_0.X = (double)fVar28;
    local_310._s_0.Y = (double)fVar35;
    local_310._s_0.Z = (double)fVar37;
    local_2f8._s_0.X = (double)fVar31;
    local_2f8._s_0.Y = (double)fVar24;
    local_2f8._s_0.Z = (double)fVar25;
    local_2e0._s_0.Y = (double)(float)uVar22;
    local_2e0._s_0.X = (double)(float)uVar18;
    local_2e0._s_0.Z = (double)fVar16;
    local_2c8._s_0.X = (double)fVar38;
    local_2c8._s_0.Z = (double)fVar32;
    local_2c8._s_0.Y = (double)fVar36;
    pTVar15 = UE::Math::TTransform<double>::TTransform<double>
                        (&local_178,(TVector<double> *)&local_2c8._s_0,
                         (TVector<double> *)&local_2e0._s_0,(TVector<double> *)&local_2f8._s_0,
                         (TVector<double> *)&local_310._s_0);
    uVar22 = __real_3ff0000000000000._4_4_;
    uVar18 = (undefined4)__real_3ff0000000000000;
    dVar11 = (pTVar15->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar15->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar15->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar15->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Translation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar15->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    auVar10._8_4_ = uVar18;
    auVar10._0_8_ = (double)fVar26;
    auVar10._12_4_ = uVar22;
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar10;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar27;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else if (uVar1 == '\x02') {
    local_390._s_0.X = (double)fVar28;
    local_390._s_0.Y = (double)fVar35;
    local_390._s_0.Z = (double)fVar37;
    local_358._s_0.X = (double)(float)uVar18;
    local_358._s_0.Y = (double)(float)uVar22;
    local_358._s_0.Z = (double)fVar16;
    local_340._s_0.Y = (double)fVar36;
    local_340._s_0.X = (double)fVar38;
    local_340._s_0.Z = (double)fVar32;
    local_328._s_0.X = (double)fVar31;
    local_328._s_0.Y = (double)fVar24;
    local_328._s_0.Z = (double)fVar25;
    pTVar15 = UE::Math::TTransform<double>::TTransform<double>
                        (&local_1d8,(TVector<double> *)&local_328._s_0,
                         (TVector<double> *)&local_340._s_0,(TVector<double> *)&local_358._s_0,
                         (TVector<double> *)&local_390._s_0);
    dVar11 = (pTVar15->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar15->Rotation).XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Rotation).ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar15->Rotation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Translation).XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar15->Translation).XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar15->Translation).ZW.m128d_f64[1];
    dVar12 = (double)CONCAT44(__real_3ff0000000000000._4_4_,(undefined4)__real_3ff0000000000000);
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar15->Translation).ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar11;
    auVar9._8_4_ = SUB84((double)fVar26,0);
    auVar9._0_8_ = (double)fVar27;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar26 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar9;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar12;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  }
  else {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SplineMeshSceneProxyDesc.cpp"
                        ,0x1af,L"");
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      pTVar15 = (TTransform<double> *)(*pcVar2)();
      return pTVar15;
    }
  }
  return __return_storage_ptr__;
}

// CalculateShaderParams @ 148728740

FSplineMeshShaderParams * __thiscall
FSplineMeshSceneProxyDesc::CalculateShaderParams
          (FSplineMeshSceneProxyDesc *this,FSplineMeshShaderParams *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  byte bVar5;
  code *pcVar6;
  TVector2<float>_u_0 TVar7;
  TVector2<float>_u_0 TVar8;
  TVector2<float>_u_0 TVar9;
  TVector2<float>_u_0 TVar10;
  TVector2<float>_u_0 TVar11;
  undefined4 uVar12;
  bool bVar13;
  FSplineMeshShaderParams *pFVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<double>_u_0 local_98 [4];
  
  dVar1 = (this->SplineParams).StartPos.field0_0x0._s_0.Y;
  dVar2 = (this->SplineParams).StartPos.field0_0x0._s_0.Z;
  (__return_storage_ptr__->StartPos).field0_0x0._s_0.X =
       (float)(this->SplineParams).StartPos.field0_0x0._s_0.X;
  (__return_storage_ptr__->StartPos).field0_0x0._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->StartPos).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (this->SplineParams).EndPos.field0_0x0._s_0.Y;
  dVar2 = (this->SplineParams).EndPos.field0_0x0._s_0.Z;
  (__return_storage_ptr__->EndPos).field0_0x0._s_0.X =
       (float)(this->SplineParams).EndPos.field0_0x0._s_0.X;
  (__return_storage_ptr__->EndPos).field0_0x0._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->EndPos).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
  dVar2 = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->StartTangent).field0_0x0._s_0.X =
       (float)(this->SplineParams).StartTangent.field0_0x0._s_0.X;
  (__return_storage_ptr__->StartTangent).field0_0x0._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->StartTangent).field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = (this->SplineParams).EndTangent.field0_0x0._s_0.Y;
  dVar2 = (this->SplineParams).EndTangent.field0_0x0._s_0.Z;
  (__return_storage_ptr__->EndTangent).field0_0x0._s_0.X =
       (float)(this->SplineParams).EndTangent.field0_0x0._s_0.X;
  (__return_storage_ptr__->EndTangent).field0_0x0._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->EndTangent).field0_0x0._s_0.Z = (float)dVar2;
  TVar7._s_0.Y = (float)(this->SplineParams).StartScale.field0_0x0._s_0.Y;
  TVar7._s_0.X = (float)(this->SplineParams).StartScale.field0_0x0._s_0.X;
  (__return_storage_ptr__->StartScale).field0_0x0 = TVar7;
  TVar8._s_0.Y = (float)(this->SplineParams).EndScale.field0_0x0._s_0.Y;
  TVar8._s_0.X = (float)(this->SplineParams).EndScale.field0_0x0._s_0.X;
  (__return_storage_ptr__->EndScale).field0_0x0 = TVar8;
  TVar9._s_0.Y = (float)(this->SplineParams).StartOffset.field0_0x0._s_0.Y;
  TVar9._s_0.X = (float)(this->SplineParams).StartOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->StartOffset).field0_0x0 = TVar9;
  TVar10._s_0.Y = (float)(this->SplineParams).EndOffset.field0_0x0._s_0.Y;
  TVar10._s_0.X = (float)(this->SplineParams).EndOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->EndOffset).field0_0x0 = TVar10;
  __return_storage_ptr__->StartRoll = (this->SplineParams).StartRoll;
  __return_storage_ptr__->EndRoll = (this->SplineParams).EndRoll;
  __return_storage_ptr__->NaniteClusterBoundsScale = (this->SplineParams).NaniteClusterBoundsScale;
  __return_storage_ptr__->bSmoothInterpRollScale = this->bSmoothInterpRollScale;
  dVar1 = (this->SplineUpDir).field0_0x0._s_0.Y;
  dVar2 = (this->SplineUpDir).field0_0x0._s_0.Z;
  (__return_storage_ptr__->SplineUpDir).field0_0x0._s_0.X =
       (float)(this->SplineUpDir).field0_0x0._s_0.X;
  (__return_storage_ptr__->SplineUpDir).field0_0x0._s_0.Y = (float)dVar1;
  (__return_storage_ptr__->SplineUpDir).field0_0x0._s_0.Z = (float)dVar2;
  (__return_storage_ptr__->TextureCoord).field0_0x0 =
       (TIntVector2<unsigned_int>_u_0)0xffffffffffffffff;
  bVar5 = (this->ForwardAxis).Value;
  *(undefined8 *)&(__return_storage_ptr__->MeshY).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  uVar12 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = (bVar5 + 1) % 3;
  uVar17 = (bVar5 + 2) % 3;
  (__return_storage_ptr__->MeshY).field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = *(undefined8 *)&(__return_storage_ptr__->MeshY).field0_0x0;
  *(undefined8 *)&(__return_storage_ptr__->MeshX).field0_0x0 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MeshDir).field0_0x0 = uVar3;
  (__return_storage_ptr__->MeshX).field0_0x0._s_0.Z = (float)uVar12;
  (__return_storage_ptr__->MeshDir).field0_0x0._s_0.Z = (float)uVar12;
  bVar5 = (this->ForwardAxis).Value;
  if (2 < bVar5) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FSplineMeshShaderParams *)(*pcVar6)();
      return pFVar14;
    }
  }
  (__return_storage_ptr__->MeshDir).field0_0x0.XYZ[bVar5] = 1.0;
  if (2 < uVar16) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FSplineMeshShaderParams *)(*pcVar6)();
      return pFVar14;
    }
  }
  (__return_storage_ptr__->MeshX).field0_0x0.XYZ[(int)uVar16] = 1.0;
  if (2 < uVar17) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FSplineMeshShaderParams *)(*pcVar6)();
      return pFVar14;
    }
  }
  (__return_storage_ptr__->MeshY).field0_0x0.XYZ[(int)uVar17] = 1.0;
  __return_storage_ptr__->MeshZScale = 1.0;
  __return_storage_ptr__->MeshZOffset = 0.0;
  if (0.0 < (this->SourceMeshBounds).SphereRadius) {
    fVar25 = (__return_storage_ptr__->MeshX).field0_0x0._s_0.X +
             (__return_storage_ptr__->MeshY).field0_0x0._s_0.X;
    fVar24 = (__return_storage_ptr__->MeshY).field0_0x0._s_0.Y +
             (__return_storage_ptr__->MeshX).field0_0x0._s_0.Y;
    fVar26 = (__return_storage_ptr__->MeshY).field0_0x0._s_0.Z +
             (__return_storage_ptr__->MeshX).field0_0x0._s_0.Z;
    dVar1 = (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X;
    dVar2 = (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y;
    dVar4 = (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z;
    fVar23 = __real_3f800000 / SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar26 * fVar26);
    local_98[0]._8_8_ = (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y - dVar2;
    local_98[0]._0_8_ = (this->SourceMeshBounds).Origin.field0_0x0._s_0.X - dVar1;
    local_98[0]._16_8_ = (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z - dVar4;
    pdVar15 = USplineMeshComponent::GetAxisValueRef
                        ((TVector<double> *)&local_98[0]._s_0,(uint)(this->ForwardAxis).Value);
    fVar19 = UE::SplineMesh::RealToFloatChecked(*pdVar15);
    pdVar15 = USplineMeshComponent::GetAxisValueRef
                        (&(this->SourceMeshBounds).BoxExtent,(uint)(this->ForwardAxis).Value);
    fVar20 = UE::SplineMesh::RealToFloatChecked(*pdVar15 + *pdVar15);
    uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar27 = 0.0;
    fVar22 = __real_3f800000;
    if (0.0 < fVar20) {
      fVar22 = __real_3f800000 / fVar20;
    }
    if (__real_322bcc77 <
        (float)((uint)(this->SplineBoundaryMin - this->SplineBoundaryMax) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar21 = this->SplineBoundaryMax - this->SplineBoundaryMin;
      fVar20 = __real_3f800000 / fVar21;
      __return_storage_ptr__->MeshZScale = fVar20;
      fVar21 = fVar21 * fVar22 * __real_427c0000;
      __return_storage_ptr__->MeshZOffset =
           (float)((uint)(fVar20 * this->SplineBoundaryMin) ^ __xmm_80000000800000008000000080000000
                  );
      __return_storage_ptr__->SplineDistToTexelScale = fVar21;
      fVar20 = (this->SplineBoundaryMin - fVar19) * fVar22 * __real_427c0000;
    }
    else {
      __return_storage_ptr__->MeshZScale = fVar22;
      fVar20 = 0.0;
      __return_storage_ptr__->SplineDistToTexelScale = 63.0;
      __return_storage_ptr__->MeshZOffset =
           (float)((uint)(fVar22 * fVar19) ^ __xmm_80000000800000008000000080000000);
    }
    __return_storage_ptr__->SplineDistToTexelOffset = fVar20;
    fVar19 = 0.0;
    SplineEvalPos((TVector<float> *)&local_b8._s_0,&this->SplineParams,0.0);
    fVar22 = __real_3c820821;
    lVar18 = 0x3f;
    do {
      SplineEvalPos((TVector<float> *)&local_a8._s_0,&this->SplineParams,fVar19);
      fVar19 = fVar19 + fVar22;
      fVar27 = fVar27 + SQRT((local_a8._s_0.Y - local_b8._s_0.Y) *
                             (local_a8._s_0.Y - local_b8._s_0.Y) +
                             (local_a8._s_0.X - local_b8._s_0.X) *
                             (local_a8._s_0.X - local_b8._s_0.X) +
                             (local_a8._s_0.Z - local_b8._s_0.Z) *
                             (local_a8._s_0.Z - local_b8._s_0.Z));
      lVar18 = lVar18 + -1;
      local_b8._0_8_ = local_a8._0_8_;
      local_b8._s_0.Z = local_a8._s_0.Z;
    } while (lVar18 != 0);
    fVar19 = (float)((uint)(__return_storage_ptr__->EndScale).field0_0x0._s_0.X & uVar16);
    fVar20 = (float)((uint)(__return_storage_ptr__->StartScale).field0_0x0._s_0.X & uVar16);
    fVar22 = (float)((uint)(__return_storage_ptr__->StartScale).field0_0x0._s_0.Y & uVar16);
    if (fVar22 <= fVar20) {
      fVar22 = fVar20;
    }
    fVar21 = (float)((uint)(__return_storage_ptr__->EndScale).field0_0x0._s_0.Y & uVar16);
    if (fVar21 <= fVar19) {
      fVar21 = fVar19;
    }
    fVar19 = (fVar20 + fVar19) * __real_3f000000;
    if (fVar22 <= fVar21) {
      fVar22 = fVar21;
    }
    fVar20 = ((float)((uint)(__return_storage_ptr__->EndScale).field0_0x0._s_0.Y & uVar16) +
             (float)((uint)(__return_storage_ptr__->StartScale).field0_0x0._s_0.Y & uVar16)) *
             __real_3f000000;
    fVar23 = (fVar22 * (fVar23 * fVar24 * (float)dVar2 + fVar23 * fVar25 * (float)dVar1 +
                       fVar23 * fVar26 * (float)dVar4) *
              (float)((uint)(__return_storage_ptr__->StartRoll - __return_storage_ptr__->EndRoll) &
                     uVar16) + fVar27) * __return_storage_ptr__->MeshZScale;
    fVar22 = fVar19;
    if (fVar23 <= fVar19) {
      fVar22 = fVar23;
    }
    if (fVar19 <= fVar23) {
      fVar19 = fVar23;
    }
    if (fVar20 <= fVar22) {
      fVar22 = fVar20;
    }
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    TVar11._s_0.Y = fVar19;
    TVar11._s_0.X = fVar22;
    (__return_storage_ptr__->MeshDeformScaleMinMax).field0_0x0 = TVar11;
  }
  return __return_storage_ptr__;
}

// ComputeDistortedBounds @ 14872bad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBox<double> * __thiscall
FSplineMeshSceneProxyDesc::ComputeDistortedBounds
          (FSplineMeshSceneProxyDesc *this,TBox<double> *__return_storage_ptr__,
          TTransform<double> *param_1,TBoxSphereBounds<double,double> *param_2,
          TBoxSphereBounds<double,double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  bool bVar19;
  TBox<double> *pTVar20;
  TTransform<double> *pTVar21;
  TMatrix<double> *pTVar22;
  double *pdVar23;
  TBoxSphereBounds<double,double> *pTVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_6f8 [32];
  float local_6c8;
  float local_6c4;
  double local_6c0;
  double local_6b8;
  double local_6b0;
  FSplineMeshSceneProxyDesc *local_6a8;
  double *local_6a0;
  TVector<double>_u_0 *local_698;
  float local_690;
  float local_68c;
  TVector<double>_u_0 local_688 [2];
  undefined4 local_658;
  undefined4 uStack_654;
  double dStack_650;
  undefined7 uStack_63f;
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  TMatrix<double> local_4b8;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  undefined8 local_408;
  TVector<double>_u_0 local_400;
  double dStack_3e8;
  double local_3e0;
  double dStack_3d8;
  char local_3d0;
  undefined7 uStack_3cf;
  TVector<double>_u_0 local_3c8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  char local_398;
  undefined7 uStack_397;
  TVector<double>_u_0 local_390;
  double dStack_378;
  double local_370;
  double dStack_368;
  char local_360;
  undefined7 uStack_35f;
  TVector<double>_u_0 local_358;
  double dStack_340;
  double local_338;
  double dStack_330;
  char local_328;
  undefined7 uStack_327;
  TVector<double>_u_0 local_320;
  double local_308;
  double local_300;
  double local_2f8;
  undefined1 local_2f0;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  local_6c4 = 0.0;
  local_6c8 = 1.0;
  ComputeVisualMeshSplineTRange(this,&local_6c4,&local_6c8);
  bVar9 = (this->ForwardAxis).Value;
  pTVar24 = param_2;
  if (param_3 != (TBoxSphereBounds<double,double> *)0x0) {
    pTVar24 = param_3;
  }
  uVar35 = SUB84(__real_3ff0000000000000,0);
  uVar36 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar25 = uVar35;
  uVar27 = uVar36;
  if (bVar9 == 0) {
    uVar33 = 0.0;
  }
  else {
    uVar33 = __real_3ff0000000000000;
    if (bVar9 == 1) {
      uVar25 = 0;
      uVar27 = 0;
    }
    else if (bVar9 == 2) {
      uVar35 = 0;
      uVar36 = 0;
    }
    else {
      bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                          ,0x22e,L"");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        pTVar20 = (TBox<double> *)(*pcVar10)();
        return pTVar20;
      }
      uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
      uVar27 = (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
      uVar35 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar36 = (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
  }
  fVar18 = local_6c4;
  fVar17 = local_6c8;
  local_2f0 = 1;
  dVar13 = (double)CONCAT44(uVar36,uVar35) * (pTVar24->Origin).field0_0x0._s_0.Z;
  local_2f8 = (double)CONCAT44(uVar36,uVar35) * (pTVar24->BoxExtent).field0_0x0._s_0.Z;
  dVar28 = (double)CONCAT44(uVar27,uVar25) * (pTVar24->Origin).field0_0x0._s_0.Y;
  local_300 = (double)CONCAT44(uVar27,uVar25) * (pTVar24->BoxExtent).field0_0x0._s_0.Y;
  dVar31 = (double)uVar33 * (pTVar24->Origin).field0_0x0._s_0.X;
  local_408 = 0;
  local_308 = (double)uVar33 * (pTVar24->BoxExtent).field0_0x0._s_0.X;
  local_320._s_0.Y = dVar28 - local_300;
  local_300 = local_300 + dVar28;
  local_320._s_0.X = dVar31 - local_308;
  local_308 = local_308 + dVar31;
  local_320._s_0.Z = dVar13 - local_2f8;
  local_2f8 = local_2f8 + dVar13;
  local_428 = 0.0;
  dStack_420 = 0.0;
  local_438 = 0.0;
  dStack_430 = 0.0;
  local_418 = 0.0;
  dStack_410 = 0.0;
  pTVar21 = CalcSliceTransformAtSplineOffset(this,&local_638,local_6c4,local_6c4,local_6c8);
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar21,&local_2e8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_320._s_0,(TBox<double> *)&local_400._s_0,pTVar22);
  if ((char)local_408 == '\0') {
    if (local_3d0 != '\0') {
      local_438 = local_400._s_0.X;
      dStack_430 = local_400._s_0.Y;
      local_428 = local_400._s_0.Z;
      dStack_420 = dStack_3e8;
      local_408 = CONCAT71(uStack_3cf,local_3d0);
      local_418 = local_3e0;
      dStack_410 = dStack_3d8;
    }
  }
  else if (local_3d0 != '\0') {
    uVar25 = SUB84(local_438,0);
    uVar27 = (undefined4)((ulonglong)local_438 >> 0x20);
    if (local_400._s_0.X <= local_438) {
      uVar25 = SUB84(local_400._s_0.X,0);
      uVar27 = (undefined4)((ulonglong)local_400._0_8_ >> 0x20);
    }
    if (local_400._s_0.Y <= dStack_430) {
      dStack_430 = local_400._s_0.Y;
    }
    local_438 = (double)CONCAT44(uVar27,uVar25);
    uVar25 = SUB84(local_428,0);
    uVar27 = (undefined4)((ulonglong)local_428 >> 0x20);
    if (local_400._s_0.Z <= local_428) {
      uVar25 = SUB84(local_400._s_0.Z,0);
      uVar27 = (undefined4)((ulonglong)local_400._16_8_ >> 0x20);
    }
    if (dStack_420 <= dStack_3e8) {
      dStack_420 = dStack_3e8;
    }
    local_428 = (double)CONCAT44(uVar27,uVar25);
    uVar25 = SUB84(local_418,0);
    uVar27 = (undefined4)((ulonglong)local_418 >> 0x20);
    if (local_418 <= local_3e0) {
      uVar25 = SUB84(local_3e0,0);
      uVar27 = (undefined4)((ulonglong)local_3e0 >> 0x20);
    }
    if (dStack_410 <= dStack_3d8) {
      dStack_410 = dStack_3d8;
    }
    local_418 = (double)CONCAT44(uVar27,uVar25);
  }
  pTVar21 = CalcSliceTransformAtSplineOffset(this,&local_5d8,fVar17,fVar18,fVar17);
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar21,&local_268);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_320._s_0,(TBox<double> *)&local_3c8._s_0,pTVar22);
  fVar18 = local_6c4;
  fVar17 = local_6c8;
  dVar13 = __real_4010000000000000;
  if ((char)local_408 == '\0') {
    if (local_398 != '\0') {
      local_438 = local_3c8._s_0.X;
      dStack_430 = local_3c8._s_0.Y;
      local_428 = local_3c8._s_0.Z;
      dStack_420 = dStack_3b0;
      local_408 = CONCAT71(uStack_397,local_398);
      local_418 = local_3a8;
      dStack_410 = dStack_3a0;
    }
  }
  else if (local_398 != '\0') {
    uVar25 = SUB84(local_3c8._s_0.X,0);
    uVar27 = (undefined4)((ulonglong)local_3c8._0_8_ >> 0x20);
    if (local_438 <= local_3c8._s_0.X) {
      uVar25 = SUB84(local_438,0);
      uVar27 = (undefined4)((ulonglong)local_438 >> 0x20);
    }
    if (dStack_430 <= local_3c8._s_0.Y) {
      local_3c8._s_0.Y = dStack_430;
    }
    local_438 = (double)CONCAT44(uVar27,uVar25);
    uVar25 = SUB84(local_3c8._s_0.Z,0);
    uVar27 = (undefined4)((ulonglong)local_3c8._16_8_ >> 0x20);
    if (local_428 <= local_3c8._s_0.Z) {
      uVar25 = SUB84(local_428,0);
      uVar27 = (undefined4)((ulonglong)local_428 >> 0x20);
    }
    if (dStack_3b0 <= dStack_420) {
      dStack_3b0 = dStack_420;
    }
    local_428 = (double)CONCAT44(uVar27,uVar25);
    uVar25 = SUB84(local_3a8,0);
    uVar27 = (undefined4)((ulonglong)local_3a8 >> 0x20);
    if (local_3a8 <= local_418) {
      uVar25 = SUB84(local_418,0);
      uVar27 = (undefined4)((ulonglong)local_418 >> 0x20);
    }
    if (dStack_3a0 <= dStack_410) {
      dStack_3a0 = dStack_410;
    }
    local_418 = (double)CONCAT44(uVar27,uVar25);
    dStack_430 = local_3c8._s_0.Y;
    dStack_420 = dStack_3b0;
    dStack_410 = dStack_3a0;
  }
  local_6a0 = &local_438;
  dVar28 = (this->SplineParams).StartTangent.field0_0x0._s_0.X;
  dVar31 = (this->SplineParams).EndTangent.field0_0x0._s_0.Y;
  dVar1 = (this->SplineParams).StartPos.field0_0x0._s_0.Y;
  dVar2 = (this->SplineParams).EndTangent.field0_0x0._s_0.Z;
  dVar3 = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
  dVar4 = (this->SplineParams).EndTangent.field0_0x0._s_0.X;
  dVar5 = (this->SplineParams).StartPos.field0_0x0._s_0.X;
  dVar6 = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
  dVar7 = (this->SplineParams).StartPos.field0_0x0._s_0.Z;
  local_6b8 = (this->SplineParams).EndPos.field0_0x0._s_0.Z * __real_4018000000000000;
  local_698 = &local_320;
  local_6c0 = (this->SplineParams).EndPos.field0_0x0._s_0.Y * __real_4018000000000000;
  local_6b0 = (this->SplineParams).EndPos.field0_0x0._s_0.X * __real_4018000000000000;
  dVar15 = ((dVar4 + dVar28) * __real_4008000000000000 + dVar5 * __real_4018000000000000) -
           local_6b0;
  dVar16 = ((dVar31 + dVar6) * __real_4008000000000000 + dVar1 * __real_4018000000000000) -
           local_6c0;
  dVar8 = (this->SplineParams).StartTangent.field0_0x0._s_0.Z;
  local_68c = local_6c8;
  dVar28 = local_6b0 -
           (dVar5 * __real_4018000000000000 + dVar28 * __real_4010000000000000 + dVar4 + dVar4);
  dVar5 = (this->SplineParams).StartTangent.field0_0x0._s_0.Y;
  local_690 = local_6c4;
  dVar4 = ((dVar2 + dVar3) * __real_4008000000000000 + dVar7 * __real_4018000000000000) - local_6b8;
  local_6c0 = local_6c0 -
              (dVar1 * __real_4018000000000000 + dVar6 * __real_4010000000000000 + dVar31 + dVar31);
  dVar31 = local_6b8 -
           (dVar7 * __real_4018000000000000 + dVar3 * __real_4010000000000000 + dVar2 + dVar2);
  local_6a8 = this;
  `FSplineMeshSceneProxyDesc::ComputeDistortedBounds'::__l2::<lambda_1>::operator()
            (&local_6a8,
             dVar28 * dVar28 -
             dVar15 * __real_4010000000000000 * (this->SplineParams).StartTangent.field0_0x0._s_0.X,
             dVar15,dVar28);
  `FSplineMeshSceneProxyDesc::ComputeDistortedBounds'::__l2::<lambda_1>::operator()
            (&local_6a8,local_6c0 * local_6c0 - dVar16 * dVar13 * dVar5,dVar16,local_6c0);
  local_688[0]._16_8_ = dVar8;
  `FSplineMeshSceneProxyDesc::ComputeDistortedBounds'::__l2::<lambda_1>::operator()
            (&local_6a8,dVar31 * dVar31 - dVar4 * dVar13 * dVar8,dVar4,dVar31);
  if ((param_3 != (TBoxSphereBounds<double,double> *)0x0) && (param_3 != param_2)) {
    local_688[0]._0_8_ =
         (pTVar24->Origin).field0_0x0._s_0.X - (pTVar24->BoxExtent).field0_0x0._s_0.X;
    local_688[0]._8_8_ =
         (pTVar24->Origin).field0_0x0._s_0.Y - (pTVar24->BoxExtent).field0_0x0._s_0.Y;
    local_688[0]._16_8_ =
         (pTVar24->Origin).field0_0x0._s_0.Z - (pTVar24->BoxExtent).field0_0x0._s_0.Z;
    pdVar23 = USplineMeshComponent::GetAxisValueRef
                        ((TVector<double> *)&local_688[0]._s_0,(uint)bVar9);
    dVar13 = *pdVar23;
    dVar28 = (pTVar24->BoxExtent).field0_0x0._s_0.Z + (pTVar24->Origin).field0_0x0._s_0.Z;
    dVar31 = (pTVar24->BoxExtent).field0_0x0._s_0.X + (pTVar24->Origin).field0_0x0._s_0.X;
    if ((bVar9 != X) &&
       (((dVar31 = (pTVar24->BoxExtent).field0_0x0._s_0.Y + (pTVar24->Origin).field0_0x0._s_0.Y,
         bVar9 != 1 && (dVar31 = dVar28, bVar9 != 2)) &&
        (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                             ,0x1ed,L""), bVar19)))) {
      pcVar10 = (code *)swi(3);
      pTVar20 = (TBox<double> *)(*pcVar10)();
      return pTVar20;
    }
    fVar26 = UE::SplineMesh::RealToFloatChecked(dVar13);
    fVar26 = ComputeRatioAlongSpline(this,fVar26);
    if (fVar26 < fVar18) {
      pTVar21 = CalcSliceTransformAtSplineOffset(this,&local_578,fVar26,fVar18,fVar17);
      pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar21,&local_1e8);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_320._s_0,(TBox<double> *)&local_390._s_0,pTVar22);
      if ((char)local_408 == '\0') {
        if (local_360 != '\0') {
          local_438 = local_390._s_0.X;
          dStack_430 = local_390._s_0.Y;
          local_428 = local_390._s_0.Z;
          dStack_420 = dStack_378;
          local_408 = CONCAT71(uStack_35f,local_360);
          local_418 = local_370;
          dStack_410 = dStack_368;
        }
      }
      else if (local_360 != '\0') {
        uVar25 = SUB84(local_390._s_0.X,0);
        uVar27 = (undefined4)((ulonglong)local_390._0_8_ >> 0x20);
        if (local_438 <= local_390._s_0.X) {
          uVar25 = SUB84(local_438,0);
          uVar27 = (undefined4)((ulonglong)local_438 >> 0x20);
        }
        if (dStack_430 <= local_390._s_0.Y) {
          local_390._s_0.Y = dStack_430;
        }
        local_438 = (double)CONCAT44(uVar27,uVar25);
        uVar25 = SUB84(local_390._s_0.Z,0);
        uVar27 = (undefined4)((ulonglong)local_390._16_8_ >> 0x20);
        if (local_428 <= local_390._s_0.Z) {
          uVar25 = SUB84(local_428,0);
          uVar27 = (undefined4)((ulonglong)local_428 >> 0x20);
        }
        if (dStack_378 <= dStack_420) {
          dStack_378 = dStack_420;
        }
        local_428 = (double)CONCAT44(uVar27,uVar25);
        uVar25 = SUB84(local_370,0);
        uVar27 = (undefined4)((ulonglong)local_370 >> 0x20);
        if (local_370 <= local_418) {
          uVar25 = SUB84(local_418,0);
          uVar27 = (undefined4)((ulonglong)local_418 >> 0x20);
        }
        if (dStack_368 <= dStack_410) {
          dStack_368 = dStack_410;
        }
        local_418 = (double)CONCAT44(uVar27,uVar25);
        dStack_430 = local_390._s_0.Y;
        dStack_420 = dStack_378;
        dStack_410 = dStack_368;
      }
    }
    fVar26 = UE::SplineMesh::RealToFloatChecked(dVar31);
    fVar26 = ComputeRatioAlongSpline(this,fVar26);
    if (fVar17 < fVar26) {
      pTVar21 = CalcSliceTransformAtSplineOffset(this,&local_518,fVar26,fVar18,fVar17);
      pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar21,&local_168);
      UE::Math::TBox<double>::TransformBy
                ((TBox<double> *)&local_320._s_0,(TBox<double> *)&local_358._s_0,pTVar22);
      if ((char)local_408 == '\0') {
        if (local_328 != '\0') {
          local_438 = local_358._s_0.X;
          dStack_430 = local_358._s_0.Y;
          local_428 = local_358._s_0.Z;
          dStack_420 = dStack_340;
          local_408 = CONCAT71(uStack_327,local_328);
          local_418 = local_338;
          dStack_410 = dStack_330;
        }
      }
      else if (local_328 != '\0') {
        uVar25 = SUB84(local_358._s_0.X,0);
        uVar27 = (undefined4)((ulonglong)local_358._0_8_ >> 0x20);
        if (local_438 <= local_358._s_0.X) {
          uVar25 = SUB84(local_438,0);
          uVar27 = (undefined4)((ulonglong)local_438 >> 0x20);
        }
        if (dStack_430 <= local_358._s_0.Y) {
          local_358._s_0.Y = dStack_430;
        }
        local_438 = (double)CONCAT44(uVar27,uVar25);
        uVar25 = SUB84(local_358._s_0.Z,0);
        uVar27 = (undefined4)((ulonglong)local_358._16_8_ >> 0x20);
        if (local_428 <= local_358._s_0.Z) {
          uVar25 = SUB84(local_428,0);
          uVar27 = (undefined4)((ulonglong)local_428 >> 0x20);
        }
        if (dStack_340 <= dStack_420) {
          dStack_340 = dStack_420;
        }
        local_428 = (double)CONCAT44(uVar27,uVar25);
        uVar25 = SUB84(local_338,0);
        uVar27 = (undefined4)((ulonglong)local_338 >> 0x20);
        if (local_338 <= local_418) {
          uVar25 = SUB84(local_418,0);
          uVar27 = (undefined4)((ulonglong)local_418 >> 0x20);
        }
        if (dStack_330 <= dStack_410) {
          dStack_330 = dStack_410;
        }
        local_418 = (double)CONCAT44(uVar27,uVar25);
        dStack_430 = local_358._s_0.Y;
        dStack_420 = dStack_340;
        dStack_410 = dStack_330;
      }
    }
  }
  pTVar22 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_4b8);
  if ((char)local_408 == '\0') {
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
  }
  else {
    dVar13 = pTVar22->M[0][0];
    dVar1 = pTVar22->M[0][1];
    dVar8 = pTVar22->M[1][0];
    dVar15 = pTVar22->M[1][1];
    dVar34 = pTVar22->M[0][2];
    dVar16 = pTVar22->M[1][2];
    dVar4 = pTVar22->M[2][0];
    dVar5 = pTVar22->M[2][1];
    dVar6 = pTVar22->M[2][2];
    dVar29 = (dStack_420 + local_438) * ___xmm_3fe00000000000003fe0000000000000;
    dVar30 = (local_418 + dStack_430) * _UNK_150689678;
    dVar2 = (dStack_420 - local_438) * ___xmm_3fe00000000000003fe0000000000000;
    dVar3 = (local_418 - dStack_430) * _UNK_150689678;
    dVar32 = (dStack_410 + local_428) * ___xmm_3fe00000000000003fe0000000000000;
    dVar7 = (dStack_410 - local_428) * ___xmm_3fe00000000000003fe0000000000000;
    dVar28 = dVar8 * dVar30 + dVar13 * dVar29 + dVar4 * dVar32 + pTVar22->M[3][0];
    dVar31 = dVar15 * dVar30 + dVar1 * dVar29 + dVar5 * dVar32 + pTVar22->M[3][1];
    dVar13 = dVar13 * dVar2;
    dVar1 = dVar1 * dVar2;
    dVar2 = dVar34 * dVar2;
    dVar34 = dVar16 * dVar30 + dVar34 * dVar29 + dVar6 * dVar32 + pTVar22->M[3][2];
    dVar8 = dVar8 * dVar3;
    dVar15 = dVar15 * dVar3;
    dVar16 = dVar16 * dVar3;
    dVar4 = dVar4 * dVar7;
    dVar5 = dVar5 * dVar7;
    dVar6 = dVar6 * dVar7;
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar1 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar15,0) & _UNK_15061cc88) +
            (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar1,0) & _UNK_15061cc88) +
            (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar5,0) & _UNK_15061cc88);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
            (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar13 = dVar31 - dVar1;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._0_8_ = dVar28 - dVar3;
    auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar11;
    dVar3 = dVar3 + dVar28;
    dVar1 = dVar1 + dVar31;
    auVar14._8_4_ = SUB84(dVar1,0);
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_658 = SUB84(dVar3,0);
    uStack_654 = (undefined4)((ulonglong)dVar3 >> 0x20);
    dStack_650 = auVar14._8_8_;
    auVar12._8_4_ = local_658;
    auVar12._0_8_ = dVar34 - dVar2;
    auVar12._12_4_ = uStack_654;
    *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10) = auVar12;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dStack_650;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2 + dVar34;
    __return_storage_ptr__->IsValid = 1;
    __return_storage_ptr__->Pad[0] = (char)uStack_63f;
    __return_storage_ptr__->Pad[1] = (char)((uint7)uStack_63f >> 8);
    __return_storage_ptr__->Pad[2] = (char)((uint7)uStack_63f >> 0x10);
    __return_storage_ptr__->Pad[3] = (char)((uint7)uStack_63f >> 0x18);
    __return_storage_ptr__->Pad[4] = (char)((uint7)uStack_63f >> 0x20);
    __return_storage_ptr__->Pad[5] = (char)((uint7)uStack_63f >> 0x28);
    __return_storage_ptr__->Pad[6] = (char)((uint7)uStack_63f >> 0x30);
  }
  return __return_storage_ptr__;
}

// ComputeRatioAlongSpline @ 14872cab0

float __thiscall
FSplineMeshSceneProxyDesc::ComputeRatioAlongSpline(FSplineMeshSceneProxyDesc *this,float param_1)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  double *pdVar4;
  double *pdVar5;
  float fVar6;
  double dVar7;
  
  fVar6 = this->SplineBoundaryMin;
  if ((float)((uint)(fVar6 - this->SplineBoundaryMax) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    fVar6 = 0.0;
    if (0.0 < (this->SourceMeshBounds).SphereRadius) {
      bVar3 = (this->ForwardAxis).Value;
      pdVar4 = USplineMeshComponent::GetAxisValueRef(&(this->SourceMeshBounds).Origin,(uint)bVar3);
      pdVar5 = USplineMeshComponent::GetAxisValueRef
                         (&(this->SourceMeshBounds).BoxExtent,(uint)bVar3);
      dVar1 = *pdVar4;
      dVar2 = *pdVar5;
      pdVar4 = USplineMeshComponent::GetAxisValueRef
                         (&(this->SourceMeshBounds).BoxExtent,(uint)(this->ForwardAxis).Value);
      fVar6 = 0.0;
      dVar7 = *pdVar4 + *pdVar4;
      if (__real_3e45798ee0000000 < dVar7) {
        fVar6 = UE::SplineMesh::RealToFloatChecked(((double)param_1 - (dVar1 - dVar2)) / dVar7);
      }
    }
    return fVar6;
  }
  return (param_1 - fVar6) / (this->SplineBoundaryMax - fVar6);
}

// ComputeVisualMeshSplineTRange @ 14872cbc0

void __thiscall
FSplineMeshSceneProxyDesc::ComputeVisualMeshSplineTRange
          (FSplineMeshSceneProxyDesc *this,float *param_1,float *param_2)

{
  float fVar1;
  uchar uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = 0.0;
  *param_2 = 1.0;
  if (__real_322bcc77 <
      (float)((uint)(this->SplineBoundaryMin - this->SplineBoundaryMax) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    uVar2 = (this->ForwardAxis).Value;
    dVar4 = (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z -
            (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z;
    dVar5 = (this->SourceMeshBounds).Origin.field0_0x0._s_0.X -
            (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X;
    if ((((uVar2 != '\0') &&
         (dVar5 = (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y -
                  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y, uVar2 != '\x01')) &&
        (dVar5 = dVar4, uVar2 != '\x02')) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                           ,0x1ed,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar7 = UE::SplineMesh::RealToFloatChecked(dVar5);
    dVar4 = (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z +
            (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z;
    dVar5 = (this->SourceMeshBounds).Origin.field0_0x0._s_0.X +
            (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X;
    if (((uVar2 != '\0') &&
        (dVar5 = (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y +
                 (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y, uVar2 != '\x01')) &&
       ((dVar5 = dVar4, uVar2 != '\x02' &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\SplineMeshComponent.h"
                            ,0x1ed,L""), bVar6)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar8 = UE::SplineMesh::RealToFloatChecked(dVar5);
    fVar1 = this->SplineBoundaryMin;
    fVar9 = __real_3f800000 / (this->SplineBoundaryMax - fVar1);
    fVar7 = (fVar7 - fVar1) * fVar9;
    fVar9 = (fVar8 - fVar1) * fVar9;
    if (fVar7 <= __real_c0800000) {
      fVar7 = __real_c0800000;
    }
    if (__real_40800000 <= fVar9) {
      fVar9 = __real_40800000;
    }
    *param_1 = fVar7;
    *param_2 = fVar9;
  }
  return;
}

// InitRayTracingProxyVertexFactory @ 148747170

void __cdecl
FSplineMeshSceneProxyDesc::InitRayTracingProxyVertexFactory
          (UStaticMesh *param_1,Type param_2,int param_3,FColorVertexBuffer *param_4)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  FStaticMeshRayTracingProxy *pFVar3;
  FStaticMeshVertexBuffers *pFVar4;
  TArray<FStaticMeshVertexFactories,TSizedDefaultAllocator<32>_> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  if (param_1 != (UStaticMesh *)0x0) {
    pFVar2 = (param_1->RenderData).Ptr;
    pFVar3 = pFVar2->RayTracingProxy;
    if (pFVar3->bUsingRenderingLODs == false) {
      iVar1 = param_1->LightMapCoordinateIndex;
      uVar8 = 0;
      if (param_3 < (pFVar3->LODs).Array.ArrayNum) {
        uVar8 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = *(FStaticMeshVertexBuffers **)
                (*(longlong *)((pFVar3->LODs).Array.AllocatorInstance.Data + (longlong)param_3 * 8)
                + 0x18);
      pTVar5 = pFVar2->RayTracingProxy->LODVertexFactories;
      uVar8 = 0;
      if (param_3 < pTVar5->ArrayNum) {
        uVar8 = (uint)~param_3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      InitSplineVertexFactory_Internal
                ((FStaticMeshVertexFactories *)
                 ((pTVar5->AllocatorInstance).Data + (longlong)param_3 * 0x470),pFVar4,iVar1,param_2
                 ,param_4);
    }
  }
  return;
}

// InitVertexFactory @ 148748c40

void __cdecl
FSplineMeshSceneProxyDesc::InitVertexFactory
          (UStaticMesh *param_1,Type param_2,int param_3,FColorVertexBuffer *param_4)

{
  int iVar1;
  FStaticMeshRenderData *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  if (param_1 != (UStaticMesh *)0x0) {
    iVar1 = param_1->LightMapCoordinateIndex;
    pFVar2 = (param_1->RenderData).Ptr;
    uVar6 = 0;
    if (param_3 < (pFVar2->LODResources).Array.ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)
             ((pFVar2->LODResources).Array.AllocatorInstance.Data + (longlong)param_3 * 8);
    uVar6 = 0;
    if (param_3 < (pFVar2->LODVertexFactories).ArrayNum) {
      uVar6 = (uint)~param_3 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    InitSplineVertexFactory_Internal
              ((FStaticMeshVertexFactories *)
               ((pFVar2->LODVertexFactories).AllocatorInstance.Data + (longlong)param_3 * 0x470),
               (FStaticMeshVertexBuffers *)(lVar3 + 0xd0),iVar1,param_2,param_4);
  }
  return;
}

// InitializeFrom @ 14874a280

void __thiscall
FSplineMeshSceneProxyDesc::InitializeFrom
          (FSplineMeshSceneProxyDesc *this,USplineMeshComponent *param_1)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  TConsoleVariableData<bool> *pTVar7;
  bool bVar8;
  longlong lVar9;
  
  dVar4 = (param_1->SplineParams).StartPos.field0_0x0._s_0.Y;
  (this->SplineParams).StartPos.field0_0x0._s_0.X =
       (param_1->SplineParams).StartPos.field0_0x0._s_0.X;
  (this->SplineParams).StartPos.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).StartTangent.field0_0x0._s_0.X;
  (this->SplineParams).StartPos.field0_0x0._s_0.Z =
       (param_1->SplineParams).StartPos.field0_0x0._s_0.Z;
  (this->SplineParams).StartTangent.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).StartTangent.field0_0x0._s_0.Z;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Y =
       (param_1->SplineParams).StartTangent.field0_0x0._s_0.Y;
  (this->SplineParams).StartTangent.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_1->SplineParams).StartScale.field0_0x0._s_0.Y;
  (this->SplineParams).StartScale.field0_0x0._s_0.X =
       (param_1->SplineParams).StartScale.field0_0x0._s_0.X;
  (this->SplineParams).StartScale.field0_0x0._s_0.Y = dVar4;
  fVar5 = (param_1->SplineParams).EndRoll;
  dVar4 = (param_1->SplineParams).StartOffset.field0_0x0._s_0.X;
  (this->SplineParams).StartRoll = (param_1->SplineParams).StartRoll;
  (this->SplineParams).EndRoll = fVar5;
  (this->SplineParams).StartOffset.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).EndPos.field0_0x0._s_0.X;
  (this->SplineParams).StartOffset.field0_0x0._s_0.Y =
       (param_1->SplineParams).StartOffset.field0_0x0._s_0.Y;
  (this->SplineParams).EndPos.field0_0x0._s_0.X = dVar4;
  dVar4 = (param_1->SplineParams).EndPos.field0_0x0._s_0.Z;
  (this->SplineParams).EndPos.field0_0x0._s_0.Y = (param_1->SplineParams).EndPos.field0_0x0._s_0.Y;
  (this->SplineParams).EndPos.field0_0x0._s_0.Z = dVar4;
  dVar4 = (param_1->SplineParams).EndScale.field0_0x0._s_0.Y;
  (this->SplineParams).EndScale.field0_0x0._s_0.X =
       (param_1->SplineParams).EndScale.field0_0x0._s_0.X;
  (this->SplineParams).EndScale.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).EndTangent.field0_0x0._s_0.Y;
  (this->SplineParams).EndTangent.field0_0x0._s_0.X =
       (param_1->SplineParams).EndTangent.field0_0x0._s_0.X;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Y = dVar4;
  dVar4 = (param_1->SplineParams).EndOffset.field0_0x0._s_0.X;
  (this->SplineParams).EndTangent.field0_0x0._s_0.Z =
       (param_1->SplineParams).EndTangent.field0_0x0._s_0.Z;
  (this->SplineParams).EndOffset.field0_0x0._s_0.X = dVar4;
  fVar5 = (param_1->SplineParams).NaniteClusterBoundsScale;
  uVar6 = *(undefined4 *)&(param_1->SplineParams).field_0xac;
  (this->SplineParams).EndOffset.field0_0x0._s_0.Y =
       (param_1->SplineParams).EndOffset.field0_0x0._s_0.Y;
  (this->SplineParams).NaniteClusterBoundsScale = fVar5;
  *(undefined4 *)&(this->SplineParams).field_0xac = uVar6;
  dVar4 = (param_1->SplineUpDir).field0_0x0._s_0.Y;
  (this->SplineUpDir).field0_0x0._s_0.X = (param_1->SplineUpDir).field0_0x0._s_0.X;
  (this->SplineUpDir).field0_0x0._s_0.Y = dVar4;
  (this->SplineUpDir).field0_0x0._s_0.Z = (param_1->SplineUpDir).field0_0x0._s_0.Z;
  this->SplineBoundaryMin = param_1->SplineBoundaryMin;
  this->SplineBoundaryMax = param_1->SplineBoundaryMax;
  this->bSmoothInterpRollScale = param_1->bSmoothInterpRollScale;
  (this->ForwardAxis).Value = (param_1->ForwardAxis).Value;
  pUVar1 = (UObject *)param_1->_padding_;
  if (pUVar1 == (UObject *)0x0) {
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  dVar4 = *(double *)(pUVar1 + 0xf);
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = *(double *)&pUVar1[0xe].field_0x20;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)&pUVar1[0xf].field_0x10;
  (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = *(double *)&pUVar1[0xf].field_0x8;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = dVar4;
  dVar4 = *(double *)&pUVar1[0xf].field_0x20;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = *(double *)&pUVar1[0xf].field_0x18;
  (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
  (this->SourceMeshBounds).SphereRadius = *(double *)(pUVar1 + 0x10);
  pTVar7 = CVarSplineMeshFitToSourceMeshBounds.Ref;
  bVar8 = IsInParallelGameThread();
  if ((bVar8) || (bVar8 = IsInGameThread(), bVar8)) {
    lVar9 = 0;
  }
  else {
    lVar9 = 1;
  }
  if (((pTVar7->ShadowedValue[lVar9] != false) &&
      (puVar2 = *(undefined8 **)&pUVar1[6].field_0x8, puVar2 != (undefined8 *)0x0)) &&
     (*(int *)(puVar2 + 1) != 0)) {
    if ((*(int *)(puVar2 + 1) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar9 = *(longlong *)*puVar2;
    dVar4 = *(double *)(lVar9 + 0x60);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.X = *(double *)(lVar9 + 0x58);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.Y = dVar4;
    dVar4 = *(double *)(lVar9 + 0x70);
    (this->SourceMeshBounds).Origin.field0_0x0._s_0.Z = *(double *)(lVar9 + 0x68);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.X = dVar4;
    dVar4 = *(double *)(lVar9 + 0x80);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Y = *(double *)(lVar9 + 0x78);
    (this->SourceMeshBounds).BoxExtent.field0_0x0._s_0.Z = dVar4;
    (this->SourceMeshBounds).SphereRadius = *(double *)(lVar9 + 0x88);
  }
  return;
}

