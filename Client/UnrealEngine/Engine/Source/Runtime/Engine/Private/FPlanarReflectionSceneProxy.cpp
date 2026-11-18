// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FPlanarReflectionSceneProxy @ 14834aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPlanarReflectionSceneProxy * __thiscall
FPlanarReflectionSceneProxy::FPlanarReflectionSceneProxy
          (FPlanarReflectionSceneProxy *this,UPlanarReflectionComponent *param_1)

{
  double dVar1;
  TIntPoint<int>_u_0 TVar2;
  TIntPoint<int>_u_0 TVar3;
  float fVar4;
  uint uVar5;
  TMatrix<double> *pTVar6;
  FName FVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TMatrix<double> local_c8;
  
  (this->WorldBounds).IsValid = '\0';
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.X = 0.0;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.Y = 0.0;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.Z = 0.0;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.X = 0.0;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.Y = 0.0;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.Z = 0.0;
  this->bIsStereo = false;
  fVar11 = __real_3f800000;
  fVar4 = __real_3727c5ac;
  (this->PlanarReflectionXAxis).field0_0x0._s_0.W = 1.0;
  (this->PlanarReflectionYAxis).field0_0x0._s_0.W = 1.0;
  this->ViewRect[0].field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->ViewRect[0].field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->ViewRect[1].field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->ViewRect[1].field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  this->RenderTarget = (FPlanarReflectionRenderTarget *)0x0;
  fVar9 = param_1->DistanceFromPlaneFadeoutEnd;
  if (param_1->DistanceFromPlaneFadeoutEnd <= 0.0) {
    fVar9 = 0.0;
  }
  fVar8 = param_1->DistanceFromPlaneFadeoutStart;
  if (param_1->DistanceFromPlaneFadeoutStart <= 0.0) {
    fVar8 = 0.0;
  }
  this->DistanceFromPlaneFadeEnd = fVar9;
  fVar10 = fVar9 - fVar8;
  if (fVar9 - fVar8 <= fVar4) {
    fVar10 = fVar4;
  }
  fVar10 = fVar11 / fVar10;
  fVar9 = param_1->NormalDistortionStrength;
  (this->PlanarReflectionParameters).field0_0x0._s_0.X = (double)fVar10;
  uVar5 = __xmm_80000000800000008000000080000000;
  (this->PlanarReflectionParameters).field0_0x0._s_0.Y =
       (double)(float)((uint)(fVar10 * fVar8) ^ __xmm_80000000800000008000000080000000);
  (this->PlanarReflectionParameters).field0_0x0._s_0.Z = (double)fVar9;
  fVar9 = param_1->AngleFromPlaneFadeEnd;
  if (__real_42b3cccd <= param_1->AngleFromPlaneFadeEnd) {
    fVar9 = __real_42b3cccd;
  }
  if (fVar9 <= __real_3dcccccd) {
    fVar9 = __real_3dcccccd;
  }
  fVar8 = cosf(fVar9 * __real_3c8efa36);
  fVar9 = param_1->AngleFromPlaneFadeStart;
  if (__real_42b3cccd <= param_1->AngleFromPlaneFadeStart) {
    fVar9 = __real_42b3cccd;
  }
  if (fVar9 <= __real_3dcccccd) {
    fVar9 = __real_3dcccccd;
  }
  fVar10 = cosf(fVar9 * __real_3c8efa36);
  fVar9 = fVar10 - fVar8;
  if (fVar10 - fVar8 <= fVar4) {
    fVar9 = fVar4;
  }
  fVar11 = fVar11 / fVar9;
  (this->PlanarReflectionParameters2).field0_0x0._s_0.X = (double)fVar11;
  (this->PlanarReflectionParameters2).field0_0x0._s_0.Y =
       (double)(float)((uint)(fVar11 * fVar8) ^ uVar5);
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[0][1];
  this->ProjectionWithExtraFOV[0].M[0][0] = param_1->ProjectionWithExtraFOV[0].M[0][0];
  this->ProjectionWithExtraFOV[0].M[0][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[0][3];
  this->ProjectionWithExtraFOV[0].M[0][2] = param_1->ProjectionWithExtraFOV[0].M[0][2];
  this->ProjectionWithExtraFOV[0].M[0][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[1][1];
  this->ProjectionWithExtraFOV[0].M[1][0] = param_1->ProjectionWithExtraFOV[0].M[1][0];
  this->ProjectionWithExtraFOV[0].M[1][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[1][3];
  this->ProjectionWithExtraFOV[0].M[1][2] = param_1->ProjectionWithExtraFOV[0].M[1][2];
  this->ProjectionWithExtraFOV[0].M[1][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[2][1];
  this->ProjectionWithExtraFOV[0].M[2][0] = param_1->ProjectionWithExtraFOV[0].M[2][0];
  this->ProjectionWithExtraFOV[0].M[2][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[2][3];
  this->ProjectionWithExtraFOV[0].M[2][2] = param_1->ProjectionWithExtraFOV[0].M[2][2];
  this->ProjectionWithExtraFOV[0].M[2][3] = dVar1;
  TVar3 = _UNK_15060db28;
  TVar2 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[3][1];
  this->ProjectionWithExtraFOV[0].M[3][0] = param_1->ProjectionWithExtraFOV[0].M[3][0];
  this->ProjectionWithExtraFOV[0].M[3][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[0].M[3][3];
  this->ProjectionWithExtraFOV[0].M[3][2] = param_1->ProjectionWithExtraFOV[0].M[3][2];
  this->ProjectionWithExtraFOV[0].M[3][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[0][1];
  this->ProjectionWithExtraFOV[1].M[0][0] = param_1->ProjectionWithExtraFOV[1].M[0][0];
  this->ProjectionWithExtraFOV[1].M[0][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[0][3];
  this->ProjectionWithExtraFOV[1].M[0][2] = param_1->ProjectionWithExtraFOV[1].M[0][2];
  this->ProjectionWithExtraFOV[1].M[0][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[1][1];
  this->ProjectionWithExtraFOV[1].M[1][0] = param_1->ProjectionWithExtraFOV[1].M[1][0];
  this->ProjectionWithExtraFOV[1].M[1][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[1][3];
  this->ProjectionWithExtraFOV[1].M[1][2] = param_1->ProjectionWithExtraFOV[1].M[1][2];
  this->ProjectionWithExtraFOV[1].M[1][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[2][1];
  this->ProjectionWithExtraFOV[1].M[2][0] = param_1->ProjectionWithExtraFOV[1].M[2][0];
  this->ProjectionWithExtraFOV[1].M[2][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[2][3];
  this->ProjectionWithExtraFOV[1].M[2][2] = param_1->ProjectionWithExtraFOV[1].M[2][2];
  this->ProjectionWithExtraFOV[1].M[2][3] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[3][1];
  this->ProjectionWithExtraFOV[1].M[3][0] = param_1->ProjectionWithExtraFOV[1].M[3][0];
  this->ProjectionWithExtraFOV[1].M[3][1] = dVar1;
  dVar1 = param_1->ProjectionWithExtraFOV[1].M[3][3];
  this->ProjectionWithExtraFOV[1].M[3][2] = param_1->ProjectionWithExtraFOV[1].M[3][2];
  this->ProjectionWithExtraFOV[1].M[3][3] = dVar1;
  this->ViewRect[0].field0_0x0._s_0.Min.field0_0x0 = TVar2;
  this->ViewRect[0].field0_0x0._s_0.Max.field0_0x0 = TVar3;
  this->ViewRect[1].field0_0x0._s_0.Min.field0_0x0 = TVar2;
  this->ViewRect[1].field0_0x0._s_0.Max.field0_0x0 = TVar3;
  if (*(longlong *)&param_1->field_0xa8 != 0) {
    FVar7 = *(FName *)(*(longlong *)&param_1->field_0xa8 + 0x18);
  }
  this->OwnerName = FVar7;
  pTVar6 = UE::Math::TTransform<double>::ToMatrixWithScale
                     ((TTransform<double> *)&param_1->field_0x1f0,&local_c8);
  UpdateTransform(this,pTVar6);
  this->PlanarReflectionId = param_1->PlanarReflectionId;
  this->PrefilterRoughness = param_1->PrefilterRoughness;
  this->PrefilterRoughnessDistance = param_1->PrefilterRoughnessDistance;
  return this;
}

