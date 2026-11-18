// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ComputeViewProjectionMatrix @ 147eb45f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
FSceneViewProjectionData::ComputeViewProjectionMatrix
          (FSceneViewProjectionData *this,TMatrix<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  uVar1 = *(undefined8 *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x10);
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[0][1] = _UNK_150689518;
  local_118.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_118.M[2][3] = _UNK_150689518;
  local_118.M[3][0]._0_4_ =
       *(uint *)&(this->ViewOrigin).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  local_118.M[3][0]._4_4_ =
       *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 4) ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_118.M[3][1]._0_4_ = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 8) ^ _UNK_15066df78
  ;
  local_118.M[3][1]._4_4_ =
       *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_118.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_118.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_98,&local_118,&this->ViewRotationMatrix);
  VectorMatrixMultiply(__return_storage_ptr__,&local_98,&this->ProjectionMatrix);
  return __return_storage_ptr__;
}

// UpdateOrthoPlanes @ 14854bb80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
FSceneViewProjectionData::UpdateOrthoPlanes
          (FSceneViewProjectionData *this,FMinimalViewInfo *param_1)

{
  bool bVar1;
  
  if (param_1->bUpdateOrthoPlanes != false) {
    bVar1 = UpdateOrthoPlanes(this,&param_1->OrthoNearClipPlane,&param_1->OrthoFarClipPlane,
                              param_1->OrthoWidth * __real_3f000000,
                              param_1->bUseCameraHeightAsViewTarget);
    return bVar1;
  }
  return false;
}

// UpdateOrthoPlanes @ 14854bbd0

bool __thiscall
FSceneViewProjectionData::UpdateOrthoPlanes(FSceneViewProjectionData *this,bool param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  float local_res18 [2];
  
  pTVar5 = CVarAllowOrthoNearPlaneCorrection.Ref;
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  if (*pdVar1 <= __real_3ff0000000000000 && __real_3ff0000000000000 != *pdVar1) {
    return false;
  }
  bVar6 = IsInParallelGameThread();
  if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 1;
  }
  fVar4 = __real_3f800000;
  if (((pTVar5->ShadowedValue[lVar7] != false) &&
      (dVar2 = (this->ProjectionMatrix).M[2][2], dVar2 != 0.0)) &&
     (dVar3 = (this->ProjectionMatrix).M[2][3], dVar2 != dVar3)) {
    local_res18[0] =
         (float)((double)(float)((this->ProjectionMatrix).M[3][3] - (this->ProjectionMatrix).M[3][2]
                                ) / (dVar2 - dVar3));
    local_res8[0] = local_res18[0] - __real_3f800000 / (float)dVar2;
    if ((local_res8[0] - local_res18[0] != 0.0) &&
       (fVar8 = (float)(this->ProjectionMatrix).M[0][0], fVar8 != 0.0)) {
      UpdateOrthoPlanes(this,local_res18,local_res8,__real_3f800000 / fVar8,param_1);
      fVar9 = (float)((uint)local_res18[0] ^ __xmm_80000000800000008000000080000000);
      fVar8 = fVar4 / (local_res8[0] - local_res18[0]);
      (this->ProjectionMatrix).M[2][2] =
           (double)(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
      (this->ProjectionMatrix).M[3][2] = (double)(fVar4 - fVar9 * fVar8);
      return true;
    }
  }
  return false;
}

// UpdateOrthoPlanes @ 14854bd60

bool __cdecl
FSceneViewProjectionData::UpdateOrthoPlanes
          (FSceneViewProjectionData *param_1,float *param_2,float *param_3,float param_4,
          bool param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TConsoleVariableData<bool> *pTVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  float fVar20;
  
  pTVar8 = CVarAllowOrthoNearPlaneCorrection.Ref;
  if (param_1 != (FSceneViewProjectionData *)0x0) {
    bVar10 = IsInParallelGameThread();
    lVar12 = 1;
    if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
      lVar11 = 0;
    }
    else {
      lVar11 = 1;
    }
    pTVar9 = CVarOrthoCameraHeightAsViewTarget.Ref;
    if (pTVar8->ShadowedValue[lVar11] != false) {
      dVar19 = (param_1->ViewRotationMatrix).M[2][2];
      dVar13 = (param_1->ViewRotationMatrix).M[0][2];
      dVar3 = (param_1->ViewRotationMatrix).M[1][2];
      dVar15 = dVar3 * dVar3 + dVar13 * dVar13 + dVar19 * dVar19;
      if (__real_3e45798ee0000000 < dVar15) {
        dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
        dVar13 = dVar13 * dVar15;
        dVar3 = dVar3 * dVar15;
        dVar19 = dVar19 * dVar15;
      }
      dVar15 = (param_1->CameraToViewTarget).field0_0x0._s_0.X;
      dVar4 = (param_1->CameraToViewTarget).field0_0x0._s_0.Y;
      dVar16 = (param_1->CameraToViewTarget).field0_0x0._s_0.Z;
      fVar1 = *param_2;
      fVar2 = *param_3;
      auVar17._0_8_ = dVar4 * dVar4 + dVar15 * dVar15 + dVar16 * dVar16;
      auVar17._8_8_ = 0;
      auVar17 = sqrtpd(auVar17,auVar17);
      if (auVar17._0_8_ <= 0.0) {
        fVar20 = 0.0;
        bVar10 = IsInParallelGameThread();
        if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
          lVar12 = 0;
        }
        if ((pTVar9->ShadowedValue[lVar12] != false) && (param_5)) {
          dVar15 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
          if ((double)param_4 <= dVar15) {
            dVar15 = (double)param_4;
          }
          fVar20 = (float)(double)CONCAT44((uint)((ulonglong)(dVar15 * dVar19) >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(dVar15 * dVar19,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        }
        dVar16 = (double)(fVar20 + *param_2);
        dVar15 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
        dVar4 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
        (param_1->ViewOrigin).field0_0x0._s_0.X =
             dVar16 * dVar13 + (param_1->ViewOrigin).field0_0x0._s_0.X;
        (param_1->ViewOrigin).field0_0x0._s_0.Y = dVar16 * dVar3 + dVar15;
        (param_1->ViewOrigin).field0_0x0._s_0.Z = dVar16 * dVar19 + dVar4;
      }
      else {
        dVar5 = (param_1->ViewOrigin).field0_0x0._s_0.X;
        dVar6 = (param_1->ViewOrigin).field0_0x0._s_0.Y;
        dVar7 = (param_1->ViewOrigin).field0_0x0._s_0.Z;
        dVar18 = (double)fVar1;
        dVar14 = dVar18 * dVar13 + dVar15 + dVar5;
        dVar13 = dVar18 * dVar3 + dVar4 + dVar6;
        dVar19 = dVar18 * dVar19 + dVar16 + dVar7;
        (param_1->ViewOrigin).field0_0x0._s_0.X = dVar14;
        (param_1->ViewOrigin).field0_0x0._s_0.Y = dVar13;
        (param_1->ViewOrigin).field0_0x0._s_0.Z = dVar19;
        (param_1->CameraToViewTarget).field0_0x0._s_0.X = (dVar5 + dVar15) - dVar14;
        (param_1->CameraToViewTarget).field0_0x0._s_0.Y = (dVar6 + dVar4) - dVar13;
        (param_1->CameraToViewTarget).field0_0x0._s_0.Z = (dVar7 + dVar16) - dVar19;
      }
      fVar20 = GDefaultUpdateOrthoNearPlane;
      *param_2 = GDefaultUpdateOrthoNearPlane;
      *param_3 = fVar20 + (fVar2 - fVar1);
      return true;
    }
  }
  return false;
}

