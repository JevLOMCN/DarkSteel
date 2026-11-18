// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// FViewMatrices @ 14850f680

FViewMatrices * __thiscall
FViewMatrices::FViewMatrices(FViewMatrices *this,FMinimalInitializer *param_1)

{
  FViewMatrices(this);
  Init(this,param_1);
  return this;
}

// FViewMatrices @ 14850f6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FViewMatrices * __thiscall
FViewMatrices::FViewMatrices(FViewMatrices *this,FSceneViewInitOptions *param_1)

{
  undefined1 auStack_188 [32];
  FMinimalInitializer local_168;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  FViewMatrices(this);
  local_168.ViewRotationMatrix.M[0][0] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[0][1] = (double)param_1->_padding_;
  local_168.ConstrainedViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
  local_168.ViewRotationMatrix.M[0][2] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[0][3] = (double)param_1->_padding_;
  local_168.ConstrainedViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
  local_168.ViewRotationMatrix.M[1][0] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[1][1] = (double)param_1->_padding_;
  local_168.StereoPass = param_1->StereoPass;
  local_168.ViewRotationMatrix.M[2][0] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[2][1] = (double)param_1->_padding_;
  local_168.FirstPersonParams.bUseParameters = (param_1->FirstPersonParams).bUseParameters;
  local_168.FirstPersonParams._9_3_ = *(undefined3 *)&(param_1->FirstPersonParams).field_0x9;
  local_168.ViewRotationMatrix.M[1][2] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[1][3] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[3][0] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[3][1] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[2][2] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[2][3] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[0][0] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[0][1] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[3][2] = (double)param_1->_padding_;
  local_168.ViewRotationMatrix.M[3][3] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[1][0] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[1][1] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[0][2] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[0][3] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[2][0] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[2][1] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[1][2] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[1][3] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[3][0] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[3][1] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[2][2] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[2][3] = (double)param_1->_padding_;
  local_168.ViewOrigin.field0_0x0._s_0.X = (double)param_1->_padding_;
  local_168.ViewOrigin.field0_0x0._s_0.Y = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[3][2] = (double)param_1->_padding_;
  local_168.ProjectionMatrix.M[3][3] = (double)param_1->_padding_;
  local_168.CameraToViewTarget.field0_0x0._s_0.X = (double)param_1->_padding_;
  local_168.CameraToViewTarget.field0_0x0._s_0.Y = (double)param_1->_padding_;
  local_168.ViewOrigin.field0_0x0._s_0.Z = (double)param_1->_padding_;
  local_168.FirstPersonParams.FOVCorrectionFactor = (param_1->FirstPersonParams).FOVCorrectionFactor
  ;
  local_168.FirstPersonParams.Scale = (param_1->FirstPersonParams).Scale;
  local_168.CameraToViewTarget.field0_0x0._s_0.Z = (double)param_1->_padding_;
  Init(this,&local_168);
  return this;
}

// GetFirstPersonHalfFieldOfViewPerAxis @ 14852a730

TVector2<float> __thiscall FViewMatrices::GetFirstPersonHalfFieldOfViewPerAxis(FViewMatrices *this)

{
  double *pdVar1;
  double dVar2;
  TVector2<float>_u_0 TVar3;
  TVector2<float>_u_0 in_RDX;
  float fVar4;
  float fVar5;
  
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    *(TVector2<float>_u_0 *)in_RDX =
         (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    return (TVector2<float>)in_RDX;
  }
  dVar2 = (this->InvProjectionMatrix).M[1][1];
  fVar5 = __real_3f800000;
  if ((this->FirstPersonParams).bUseParameters != false) {
    fVar5 = (this->FirstPersonParams).FOVCorrectionFactor;
  }
  fVar5 = __real_3f800000 / fVar5;
  fVar4 = atanf(fVar5 * (float)(this->InvProjectionMatrix).M[0][0]);
  fVar5 = atanf(fVar5 * (float)dVar2);
  TVar3._s_0.Y = fVar5;
  TVar3._s_0.X = fVar4;
  *(TVector2<float>_u_0 *)in_RDX = TVar3;
  return (TVector2<float>)in_RDX;
}

// GetFirstPersonTanAndInvTanHalfFOV @ 14852a7f0

TVector4<float> * __thiscall
FViewMatrices::GetFirstPersonTanAndInvTanHalfFOV
          (FViewMatrices *this,TVector4<float> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.W = 1.0;
    return __return_storage_ptr__;
  }
  dVar2 = (this->ProjectionMatrix).M[0][0];
  dVar3 = (this->ProjectionMatrix).M[1][1];
  dVar4 = (this->InvProjectionMatrix).M[1][1];
  fVar6 = __real_3f800000;
  if ((this->FirstPersonParams).bUseParameters != false) {
    fVar6 = (this->FirstPersonParams).FOVCorrectionFactor;
  }
  fVar5 = __real_3f800000 / fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = fVar5 * (float)(this->InvProjectionMatrix).M[0][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * (float)dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)dVar2 * fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.W = (float)dVar3 * fVar6;
  return __return_storage_ptr__;
}

// HackOverrideViewMatrixForShadows @ 14852f3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FViewMatrices::HackOverrideViewMatrixForShadows(FViewMatrices *this,TMatrix<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  TMatrix<double> *pTVar3;
  undefined1 auStack_138 [32];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_118.M[0][1] = _UNK_150689518;
  local_118.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  dVar2 = param_1->M[0][1];
  (this->OverriddenTranslatedViewMatrix).M[0][0] = param_1->M[0][0];
  (this->OverriddenTranslatedViewMatrix).M[0][1] = dVar2;
  dVar2 = param_1->M[0][3];
  (this->OverriddenTranslatedViewMatrix).M[0][2] = param_1->M[0][2];
  (this->OverriddenTranslatedViewMatrix).M[0][3] = dVar2;
  dVar2 = param_1->M[1][1];
  (this->OverriddenTranslatedViewMatrix).M[1][0] = param_1->M[1][0];
  (this->OverriddenTranslatedViewMatrix).M[1][1] = dVar2;
  dVar2 = param_1->M[1][3];
  (this->OverriddenTranslatedViewMatrix).M[1][2] = param_1->M[1][2];
  (this->OverriddenTranslatedViewMatrix).M[1][3] = dVar2;
  dVar2 = param_1->M[2][1];
  (this->OverriddenTranslatedViewMatrix).M[2][0] = param_1->M[2][0];
  (this->OverriddenTranslatedViewMatrix).M[2][1] = dVar2;
  dVar2 = param_1->M[2][3];
  (this->OverriddenTranslatedViewMatrix).M[2][2] = param_1->M[2][2];
  (this->OverriddenTranslatedViewMatrix).M[2][3] = dVar2;
  dVar2 = param_1->M[3][1];
  (this->OverriddenTranslatedViewMatrix).M[3][0] = param_1->M[3][0];
  (this->OverriddenTranslatedViewMatrix).M[3][1] = dVar2;
  dVar2 = param_1->M[3][3];
  (this->OverriddenTranslatedViewMatrix).M[3][2] = param_1->M[3][2];
  (this->OverriddenTranslatedViewMatrix).M[3][3] = dVar2;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_118.M[1][1] = _UNK_15061cbc8;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  uVar1 = *(undefined8 *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x10);
  local_118.M[2][2] = local_118.M[0][0];
  local_118.M[2][3] = local_118.M[0][1];
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
  VectorMatrixMultiply(&local_98,&local_118,param_1);
  (this->ViewMatrix).M[0][0] = local_98.M[0][0];
  (this->ViewMatrix).M[0][1] = local_98.M[0][1];
  (this->ViewMatrix).M[0][2] = local_98.M[0][2];
  (this->ViewMatrix).M[0][3] = local_98.M[0][3];
  (this->ViewMatrix).M[1][0] = local_98.M[1][0];
  (this->ViewMatrix).M[1][1] = local_98.M[1][1];
  (this->ViewMatrix).M[1][2] = local_98.M[1][2];
  (this->ViewMatrix).M[1][3] = local_98.M[1][3];
  (this->ViewMatrix).M[2][0] = local_98.M[2][0];
  (this->ViewMatrix).M[2][1] = local_98.M[2][1];
  (this->ViewMatrix).M[2][2] = local_98.M[2][2];
  (this->ViewMatrix).M[2][3] = local_98.M[2][3];
  (this->ViewMatrix).M[3][0] = local_98.M[3][0];
  (this->ViewMatrix).M[3][1] = local_98.M[3][1];
  (this->ViewMatrix).M[3][2] = local_98.M[3][2];
  (this->ViewMatrix).M[3][3] = local_98.M[3][3];
  pTVar3 = UE::Math::TMatrix<double>::Inverse(&this->ViewMatrix,&local_98);
  dVar2 = pTVar3->M[0][1];
  (this->InvViewMatrix).M[0][0] = pTVar3->M[0][0];
  (this->InvViewMatrix).M[0][1] = dVar2;
  dVar2 = pTVar3->M[0][3];
  (this->InvViewMatrix).M[0][2] = pTVar3->M[0][2];
  (this->InvViewMatrix).M[0][3] = dVar2;
  dVar2 = pTVar3->M[1][1];
  (this->InvViewMatrix).M[1][0] = pTVar3->M[1][0];
  (this->InvViewMatrix).M[1][1] = dVar2;
  dVar2 = pTVar3->M[1][3];
  (this->InvViewMatrix).M[1][2] = pTVar3->M[1][2];
  (this->InvViewMatrix).M[1][3] = dVar2;
  dVar2 = pTVar3->M[2][1];
  (this->InvViewMatrix).M[2][0] = pTVar3->M[2][0];
  (this->InvViewMatrix).M[2][1] = dVar2;
  dVar2 = pTVar3->M[2][3];
  (this->InvViewMatrix).M[2][2] = pTVar3->M[2][2];
  (this->InvViewMatrix).M[2][3] = dVar2;
  dVar2 = pTVar3->M[3][1];
  (this->InvViewMatrix).M[3][0] = pTVar3->M[3][0];
  (this->InvViewMatrix).M[3][1] = dVar2;
  dVar2 = pTVar3->M[3][3];
  (this->InvViewMatrix).M[3][2] = pTVar3->M[3][2];
  (this->InvViewMatrix).M[3][3] = dVar2;
  pTVar3 = UE::Math::TMatrix<double>::Inverse(&this->OverriddenTranslatedViewMatrix,&local_98);
  dVar2 = pTVar3->M[0][1];
  (this->OverriddenInvTranslatedViewMatrix).M[0][0] = pTVar3->M[0][0];
  (this->OverriddenInvTranslatedViewMatrix).M[0][1] = dVar2;
  dVar2 = pTVar3->M[0][3];
  (this->OverriddenInvTranslatedViewMatrix).M[0][2] = pTVar3->M[0][2];
  (this->OverriddenInvTranslatedViewMatrix).M[0][3] = dVar2;
  dVar2 = pTVar3->M[1][1];
  (this->OverriddenInvTranslatedViewMatrix).M[1][0] = pTVar3->M[1][0];
  (this->OverriddenInvTranslatedViewMatrix).M[1][1] = dVar2;
  dVar2 = pTVar3->M[1][3];
  (this->OverriddenInvTranslatedViewMatrix).M[1][2] = pTVar3->M[1][2];
  (this->OverriddenInvTranslatedViewMatrix).M[1][3] = dVar2;
  dVar2 = pTVar3->M[2][1];
  (this->OverriddenInvTranslatedViewMatrix).M[2][0] = pTVar3->M[2][0];
  (this->OverriddenInvTranslatedViewMatrix).M[2][1] = dVar2;
  dVar2 = pTVar3->M[2][3];
  (this->OverriddenInvTranslatedViewMatrix).M[2][2] = pTVar3->M[2][2];
  (this->OverriddenInvTranslatedViewMatrix).M[2][3] = dVar2;
  dVar2 = pTVar3->M[3][1];
  (this->OverriddenInvTranslatedViewMatrix).M[3][0] = pTVar3->M[3][0];
  (this->OverriddenInvTranslatedViewMatrix).M[3][1] = dVar2;
  dVar2 = pTVar3->M[3][3];
  (this->OverriddenInvTranslatedViewMatrix).M[3][2] = pTVar3->M[3][2];
  (this->OverriddenInvTranslatedViewMatrix).M[3][3] = dVar2;
  return;
}

// Init @ 1485300c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FViewMatrices::Init(FViewMatrices *this,FMinimalInitializer *param_1)

{
  double *pdVar1;
  TMatrix<double> *pTVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  double dVar7;
  double dVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  TMatrix<double> *pTVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  undefined4 uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 unaff_XMM11_Qb;
  double dVar34;
  undefined1 auStack_be8 [32];
  double *local_bc8;
  double local_bc0;
  double local_bb8;
  double local_bb0;
  double local_ba8;
  double local_ba0;
  double dStack_b98;
  double *local_b90;
  double local_b88;
  double dStack_b80;
  TVector<double> local_b78 [6];
  TMatrix<double> local_ad8;
  undefined1 local_a58 [12];
  undefined4 uStack_a4c;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  TMatrix<double> local_9d8;
  TMatrix<double> local_958;
  TMatrix<double> local_8d8;
  TMatrix<double> local_858;
  TMatrix<double> local_7d8;
  TMatrix<double> local_758;
  TMatrix<double> local_6d8;
  TMatrix<double> local_658;
  TMatrix<double> local_5d8;
  TMatrix<double> local_558;
  TMatrix<double> local_4d8;
  TMatrix<double> local_458;
  TMatrix<double> local_3d8;
  TMatrix<double> local_358;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  dVar7 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_be8;
  _local_a58 = *(undefined1 (*) [16])(param_1->ViewRotationMatrix).M[0];
  local_a38 = (param_1->ViewRotationMatrix).M[1][0];
  uStack_a30 = (param_1->ViewRotationMatrix).M[1][1];
  local_a18 = (param_1->ViewRotationMatrix).M[2][0];
  uStack_a10 = (param_1->ViewRotationMatrix).M[2][1];
  local_a48 = (param_1->ViewRotationMatrix).M[0][2];
  uStack_a40 = (param_1->ViewRotationMatrix).M[0][3];
  local_a28 = (param_1->ViewRotationMatrix).M[1][2];
  uStack_a20 = (param_1->ViewRotationMatrix).M[1][3];
  local_9f8 = (param_1->ViewRotationMatrix).M[3][0];
  uStack_9f0 = (param_1->ViewRotationMatrix).M[3][1];
  local_a08 = (param_1->ViewRotationMatrix).M[2][2];
  uStack_a00 = (param_1->ViewRotationMatrix).M[2][3];
  local_9e8 = (param_1->ViewRotationMatrix).M[3][2];
  uStack_9e0 = (param_1->ViewRotationMatrix).M[3][3];
  auVar5._4_8_ = unaff_XMM11_Qb;
  auVar5._0_4_ = local_a58._4_4_;
  auVar19._0_8_ = auVar5._0_8_ << 0x20;
  auVar19._8_4_ = local_a58._8_4_;
  auVar19._12_4_ = local_a58._12_4_;
  uVar14 = SUB84(__real_3ff0000000000000,0);
  uVar21 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar34 = auVar19._8_8_;
  dVar17 = local_a58._0_8_;
  local_bc0 = 0.0;
  local_bb8 = dVar17 * dVar17 + dVar34 * dVar34 + local_a48 * local_a48;
  dVar22 = local_a38 * local_a38 + uStack_a30 * uStack_a30 + local_a28 * local_a28;
  dVar23 = local_a18 * local_a18 + uStack_a10 * uStack_a10 + local_a08 * local_a08;
  if (local_bb8 <= __real_3e45798ee0000000) {
    local_bb8 = 0.0;
  }
  else {
    local_bb8 = SQRT(local_bb8);
    dVar16 = __real_3ff0000000000000 / local_bb8;
    local_a48 = local_a48 * dVar16;
    stack0xfffffffffffff5b0 = dVar34 * dVar16;
    local_a58._0_8_ = dVar17 * dVar16;
  }
  local_bb0 = 0.0;
  if (__real_3e45798ee0000000 < dVar22) {
    local_bb0 = SQRT(dVar22);
    dVar17 = __real_3ff0000000000000 / local_bb0;
    local_a38 = local_a38 * dVar17;
    uStack_a30 = uStack_a30 * dVar17;
    local_a28 = local_a28 * dVar17;
  }
  local_ba8 = 0.0;
  if (__real_3e45798ee0000000 < dVar23) {
    local_ba8 = SQRT(dVar23);
    dVar17 = __real_3ff0000000000000 / local_ba8;
    local_a18 = local_a18 * dVar17;
    uStack_a10 = uStack_a10 * dVar17;
    local_a08 = local_a08 * dVar17;
  }
  auVar18._0_8_ =
       (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z - local_ba8) *
       (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z - local_ba8);
  auVar18._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y - local_bb0) *
                 (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y - local_bb0) +
                 (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X - local_bb8) *
                 (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X - local_bb8) +
                 auVar18._0_8_;
  auVar19 = sqrtpd(auVar18,auVar3);
  if (__real_3f1a36e2e0000000 <= auVar19._0_8_) {
    local_bc8 = &local_bb8;
    `FViewMatrices::Init'::__l2::<lambda_1>::operator()(&local_bc8);
  }
  dVar8 = _UNK_150689518;
  dVar16 = ___xmm_00000000000000003ff0000000000000;
  dVar34 = _UNK_15061cbc8;
  dVar22 = ___xmm_3ff00000000000000000000000000000;
  local_7d8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_7d8.M[0][1] = _UNK_150689518;
  local_7d8.M[0][2] = 0.0;
  local_7d8.M[0][3] = 0.0;
  local_b88 = ___xmm_3ff00000000000000000000000000000;
  dStack_b80 = _UNK_15061cbc8;
  local_7d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_7d8.M[1][1] = _UNK_15061cbc8;
  local_7d8.M[1][2] = 0.0;
  local_7d8.M[1][3] = 0.0;
  local_7d8.M[2][0] = 0.0;
  local_7d8.M[2][1] = 0.0;
  local_7d8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_7d8.M[2][3] = _UNK_150689518;
  local_7d8.M[3][0] = 0.0;
  local_7d8.M[3][1] = 0.0;
  local_7d8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_7d8.M[3][3] = _UNK_15061cbc8;
  local_758.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_758.M[0][1] = _UNK_150689518;
  local_758.M[0][2] = 0.0;
  local_758.M[0][3] = 0.0;
  local_758.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_758.M[1][1] = _UNK_15061cbc8;
  local_758.M[1][2] = 0.0;
  local_758.M[1][3] = 0.0;
  local_758.M[2][0] = 0.0;
  local_758.M[2][1] = 0.0;
  local_758.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_758.M[2][3] = _UNK_150689518;
  local_758.M[3][0] = 0.0;
  local_758.M[3][1] = 0.0;
  local_758.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_758.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_1d8,&param_1->ProjectionMatrix,&local_7d8);
  VectorMatrixMultiply(&local_6d8,&local_1d8,&local_758);
  pTVar2 = &this->InvProjectionMatrix;
  (this->ProjectionMatrix).M[0][0] = local_6d8.M[0][0];
  (this->ProjectionMatrix).M[0][1] = local_6d8.M[0][1];
  (this->ProjectionMatrix).M[0][2] = local_6d8.M[0][2];
  (this->ProjectionMatrix).M[0][3] = local_6d8.M[0][3];
  (this->ProjectionMatrix).M[1][0] = local_6d8.M[1][0];
  (this->ProjectionMatrix).M[1][1] = local_6d8.M[1][1];
  (this->ProjectionMatrix).M[1][2] = local_6d8.M[1][2];
  (this->ProjectionMatrix).M[1][3] = local_6d8.M[1][3];
  (this->ProjectionMatrix).M[2][0] = local_6d8.M[2][0];
  (this->ProjectionMatrix).M[2][1] = local_6d8.M[2][1];
  (this->ProjectionMatrix).M[2][2] = local_6d8.M[2][2];
  (this->ProjectionMatrix).M[2][3] = local_6d8.M[2][3];
  (this->ProjectionMatrix).M[3][0] = local_6d8.M[3][0];
  (this->ProjectionMatrix).M[3][1] = local_6d8.M[3][1];
  (this->ProjectionMatrix).M[3][2] = local_6d8.M[3][2];
  (this->ProjectionMatrix).M[3][3] = local_6d8.M[3][3];
  pTVar11 = InvertProjectionMatrix(&local_ad8,&this->ProjectionMatrix);
  dVar17 = pTVar11->M[0][1];
  pTVar2->M[0][0] = pTVar11->M[0][0];
  (this->InvProjectionMatrix).M[0][1] = dVar17;
  dVar17 = pTVar11->M[0][3];
  (this->InvProjectionMatrix).M[0][2] = pTVar11->M[0][2];
  (this->InvProjectionMatrix).M[0][3] = dVar17;
  dVar17 = pTVar11->M[1][1];
  (this->InvProjectionMatrix).M[1][0] = pTVar11->M[1][0];
  (this->InvProjectionMatrix).M[1][1] = dVar17;
  dVar17 = pTVar11->M[1][3];
  (this->InvProjectionMatrix).M[1][2] = pTVar11->M[1][2];
  (this->InvProjectionMatrix).M[1][3] = dVar17;
  dVar17 = pTVar11->M[2][1];
  (this->InvProjectionMatrix).M[2][0] = pTVar11->M[2][0];
  (this->InvProjectionMatrix).M[2][1] = dVar17;
  dVar17 = pTVar11->M[2][3];
  (this->InvProjectionMatrix).M[2][2] = pTVar11->M[2][2];
  (this->InvProjectionMatrix).M[2][3] = dVar17;
  dVar17 = pTVar11->M[3][1];
  (this->InvProjectionMatrix).M[3][0] = pTVar11->M[3][0];
  (this->InvProjectionMatrix).M[3][1] = dVar17;
  dVar17 = pTVar11->M[3][3];
  (this->InvProjectionMatrix).M[3][2] = pTVar11->M[3][2];
  (this->InvProjectionMatrix).M[3][3] = dVar17;
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  dVar17 = (this->ProjectionMatrix).M[3][2];
  dVar23 = (this->ProjectionMatrix).M[2][2];
  if (dVar7 < *pdVar1 || dVar7 == *pdVar1) {
    uVar26 = 0;
    uVar28 = 0;
  }
  else {
    uVar26 = uVar14;
    uVar28 = uVar21;
    uVar14 = 0;
    uVar21 = 0;
  }
  (this->ScreenToClipMatrix).M[0][0] = dVar16;
  (this->ScreenToClipMatrix).M[0][1] = dVar8;
  (this->ScreenToClipMatrix).M[0][2] = 0.0;
  (this->ScreenToClipMatrix).M[0][3] = 0.0;
  (this->ScreenToClipMatrix).M[1][0] = dVar22;
  (this->ScreenToClipMatrix).M[1][1] = dVar34;
  (this->ScreenToClipMatrix).M[1][2] = 0.0;
  (this->ScreenToClipMatrix).M[1][3] = 0.0;
  (this->ScreenToClipMatrix).M[2][0] = 0.0;
  (this->ScreenToClipMatrix).M[2][1] = 0.0;
  (this->ScreenToClipMatrix).M[2][2] = dVar23;
  (this->ScreenToClipMatrix).M[2][3] = (double)CONCAT44(uVar28,uVar26);
  (this->ScreenToClipMatrix).M[3][0] = 0.0;
  (this->ScreenToClipMatrix).M[3][1] = 0.0;
  (this->ScreenToClipMatrix).M[3][2] = dVar17;
  (this->ScreenToClipMatrix).M[3][3] = (double)CONCAT44(uVar21,uVar14);
  local_858.M[3][2] = *(double *)((longlong)&(param_1->ViewOrigin).field0_0x0 + 0x10);
  dVar17 = *(double *)&(param_1->ViewOrigin).field0_0x0;
  local_858.M[3][1] = *(double *)((longlong)&(param_1->ViewOrigin).field0_0x0 + 8);
  local_ba0 = dVar17;
  dStack_b98 = local_858.M[3][1];
  local_b90 = (double *)local_858.M[3][2];
  if (((0.0 < (double)CONCAT44((uint)((ulonglong)local_9f8 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_9f8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      || (0.0 < (double)CONCAT44((uint)((ulonglong)uStack_9f0 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(uStack_9f0,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
         )) || (0.0 < (double)CONCAT44((uint)((ulonglong)local_9e8 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(local_9e8,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    local_bc8 = (double *)local_858.M[3][2];
    pTVar12 = UE::Math::TMatrix<double>::InverseTransformPosition
                        ((TMatrix<double> *)local_a58,local_b78,
                         &UE::Math::TVector<double>::ZeroVector);
    auVar6._4_8_ = extraout_XMM0_Qb;
    auVar6._0_4_ = local_9e8._4_4_;
    auVar20._0_8_ = auVar6._0_8_ << 0x20;
    auVar20._8_4_ = (undefined4)uStack_9e0;
    auVar20._12_4_ = uStack_9e0._4_4_;
    uStack_9e0 = auVar20._8_8_;
    dVar17 = local_ba0 + (pTVar12->field0_0x0)._s_0.X;
    local_858.M[3][1] = dStack_b98 + (pTVar12->field0_0x0)._s_0.Y;
    local_858.M[3][2] = (double)local_b90 + (pTVar12->field0_0x0)._s_0.Z;
    local_9f8 = 0.0;
    uStack_9f0 = 0.0;
    local_9e8 = 0.0;
  }
  uVar33 = (uint)((ulonglong)local_858.M[3][1] >> 0x20);
  uVar32 = SUB84(local_858.M[3][1],0);
  local_8d8.M[3][3] = dVar7;
  uVar30 = SUB84(dVar17,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar31 = (uint)((ulonglong)dVar17 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_8d8.M[0][0] = dVar16;
  local_8d8.M[0][1] = dVar8;
  local_8d8.M[3][0] = (double)CONCAT44(uVar31,uVar30);
  uVar27 = uVar32 ^ (uint)__xmm_80000000000000008000000000000000;
  uVar29 = uVar33 ^ __xmm_80000000000000008000000000000000._4_4_;
  local_8d8.M[1][0] = dVar22;
  local_8d8.M[1][1] = dVar34;
  local_8d8.M[3][1] = (double)CONCAT44(uVar29,uVar27);
  uVar24 = SUB84(local_858.M[3][2],0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)local_858.M[3][2] >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  local_8d8.M[2][2] = dVar16;
  local_8d8.M[2][3] = dVar8;
  local_8d8.M[3][2] = (double)CONCAT44(uVar25,uVar24);
  local_8d8.M[0][2] = 0.0;
  local_8d8.M[0][3] = 0.0;
  local_8d8.M[1][2] = 0.0;
  local_8d8.M[1][3] = 0.0;
  local_8d8.M[2][0] = 0.0;
  local_8d8.M[2][1] = 0.0;
  local_bc8 = (double *)local_858.M[3][2];
  VectorMatrixMultiply(&local_658,&local_8d8,(TMatrix<double> *)local_a58);
  (this->ViewMatrix).M[0][0] = local_658.M[0][0];
  (this->ViewMatrix).M[0][1] = local_658.M[0][1];
  (this->ViewMatrix).M[0][2] = local_658.M[0][2];
  (this->ViewMatrix).M[0][3] = local_658.M[0][3];
  (this->ViewMatrix).M[1][0] = local_658.M[1][0];
  (this->ViewMatrix).M[1][1] = local_658.M[1][1];
  (this->ViewMatrix).M[1][2] = local_658.M[1][2];
  (this->ViewMatrix).M[1][3] = local_658.M[1][3];
  (this->ViewMatrix).M[2][0] = local_658.M[2][0];
  (this->ViewMatrix).M[2][1] = local_658.M[2][1];
  (this->ViewMatrix).M[2][2] = local_658.M[2][2];
  (this->ViewMatrix).M[2][3] = local_658.M[2][3];
  (this->ViewMatrix).M[3][0] = local_658.M[3][0];
  (this->ViewMatrix).M[3][1] = local_658.M[3][1];
  (this->ViewMatrix).M[3][2] = local_658.M[3][2];
  (this->ViewMatrix).M[3][3] = local_658.M[3][3];
  dVar23 = (param_1->ViewRotationMatrix).M[0][1];
  (this->HMDViewMatrixNoRoll).M[0][0] = (param_1->ViewRotationMatrix).M[0][0];
  (this->HMDViewMatrixNoRoll).M[0][1] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[0][3];
  (this->HMDViewMatrixNoRoll).M[0][2] = (param_1->ViewRotationMatrix).M[0][2];
  (this->HMDViewMatrixNoRoll).M[0][3] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[1][1];
  (this->HMDViewMatrixNoRoll).M[1][0] = (param_1->ViewRotationMatrix).M[1][0];
  (this->HMDViewMatrixNoRoll).M[1][1] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[1][3];
  (this->HMDViewMatrixNoRoll).M[1][2] = (param_1->ViewRotationMatrix).M[1][2];
  (this->HMDViewMatrixNoRoll).M[1][3] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[2][1];
  (this->HMDViewMatrixNoRoll).M[2][0] = (param_1->ViewRotationMatrix).M[2][0];
  (this->HMDViewMatrixNoRoll).M[2][1] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[2][3];
  (this->HMDViewMatrixNoRoll).M[2][2] = (param_1->ViewRotationMatrix).M[2][2];
  (this->HMDViewMatrixNoRoll).M[2][3] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[3][1];
  (this->HMDViewMatrixNoRoll).M[3][0] = (param_1->ViewRotationMatrix).M[3][0];
  (this->HMDViewMatrixNoRoll).M[3][1] = dVar23;
  dVar23 = (param_1->ViewRotationMatrix).M[3][3];
  (this->HMDViewMatrixNoRoll).M[3][2] = (param_1->ViewRotationMatrix).M[3][2];
  (this->HMDViewMatrixNoRoll).M[3][3] = dVar23;
  VectorMatrixMultiply(&local_5d8,&this->ViewMatrix,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_5d8.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_5d8.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] = local_5d8.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = local_5d8.M[0][3];
  (this->ViewProjectionMatrix).M[1][0] = local_5d8.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_5d8.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] = local_5d8.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = local_5d8.M[1][3];
  (this->ViewProjectionMatrix).M[2][0] = local_5d8.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = local_5d8.M[2][1];
  (this->ViewProjectionMatrix).M[2][2] = local_5d8.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_5d8.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] = local_5d8.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = local_5d8.M[3][1];
  local_9d8.M[0][0] = (double)local_a58._0_8_;
  (this->ViewProjectionMatrix).M[3][2] = local_5d8.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_5d8.M[3][3];
  local_9d8.M[0][2] = local_a18;
  local_9d8.M[0][1] = local_a38;
  local_9d8.M[0][3] = local_9f8;
  local_9d8.M[1][1] = uStack_a30;
  local_9d8.M[1][0] = stack0xfffffffffffff5b0;
  local_9d8.M[1][3] = uStack_9f0;
  local_9d8.M[1][2] = uStack_a10;
  local_9d8.M[2][1] = local_a28;
  local_9d8.M[2][0] = local_a48;
  local_9d8.M[2][3] = local_9e8;
  local_9d8.M[2][2] = local_a08;
  local_9d8.M[3][1] = uStack_a20;
  local_9d8.M[3][0] = uStack_a40;
  local_9d8.M[3][3] = uStack_9e0;
  local_9d8.M[3][2] = uStack_a00;
  local_858.M[2][0] = 0.0;
  local_858.M[2][1] = 0.0;
  local_858.M[3][3] = dVar7;
  local_858.M[0][0] = dVar16;
  local_858.M[0][1] = dVar8;
  local_858.M[0][2] = 0.0;
  local_858.M[0][3] = 0.0;
  local_858.M[1][0] = dVar22;
  local_858.M[1][1] = dVar34;
  local_858.M[1][2] = 0.0;
  local_858.M[1][3] = 0.0;
  local_858.M[2][2] = dVar16;
  local_858.M[2][3] = dVar8;
  local_858.M[3][0] = dVar17;
  VectorMatrixMultiply(&local_558,&local_9d8,&local_858);
  (this->InvViewMatrix).M[0][0] = local_558.M[0][0];
  (this->InvViewMatrix).M[0][1] = local_558.M[0][1];
  (this->InvViewMatrix).M[0][2] = local_558.M[0][2];
  (this->InvViewMatrix).M[0][3] = local_558.M[0][3];
  (this->InvViewMatrix).M[1][0] = local_558.M[1][0];
  (this->InvViewMatrix).M[1][1] = local_558.M[1][1];
  (this->InvViewMatrix).M[1][2] = local_558.M[1][2];
  (this->InvViewMatrix).M[1][3] = local_558.M[1][3];
  (this->InvViewMatrix).M[2][0] = local_558.M[2][0];
  (this->InvViewMatrix).M[2][1] = local_558.M[2][1];
  (this->InvViewMatrix).M[2][2] = local_558.M[2][2];
  (this->InvViewMatrix).M[2][3] = local_558.M[2][3];
  (this->InvViewMatrix).M[3][0] = local_558.M[3][0];
  (this->InvViewMatrix).M[3][1] = local_558.M[3][1];
  (this->InvViewMatrix).M[3][2] = local_558.M[3][2];
  (this->InvViewMatrix).M[3][3] = local_558.M[3][3];
  VectorMatrixMultiply(&local_4d8,pTVar2,&this->InvViewMatrix);
  (this->InvViewProjectionMatrix).M[0][0] = local_4d8.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_4d8.M[0][1];
  (this->InvViewProjectionMatrix).M[0][2] = local_4d8.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = local_4d8.M[0][3];
  (this->InvViewProjectionMatrix).M[1][0] = local_4d8.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_4d8.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] = local_4d8.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = local_4d8.M[1][3];
  (this->InvViewProjectionMatrix).M[2][0] = local_4d8.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = local_4d8.M[2][1];
  (this->InvViewProjectionMatrix).M[2][2] = local_4d8.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_4d8.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] = local_4d8.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = local_4d8.M[3][1];
  auVar4._8_4_ = uVar32;
  auVar4._0_8_ = dVar17;
  auVar4._12_4_ = uVar33;
  *(undefined1 (*) [16])&(this->ViewOrigin).field0_0x0 = auVar4;
  (this->ViewOrigin).field0_0x0._s_0.Z = (double)local_bc8;
  (this->InvViewProjectionMatrix).M[3][2] = local_4d8.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_4d8.M[3][3];
  (this->PreViewTranslation).field0_0x0._s_0.X = (double)CONCAT44(uVar31,uVar30);
  (this->PreViewTranslation).field0_0x0._s_0.Y = (double)CONCAT44(uVar29,uVar27);
  (this->PreViewTranslation).field0_0x0._s_0.Z = (double)CONCAT44(uVar25,uVar24);
  uVar14 = *(undefined4 *)((longlong)&(param_1->CameraToViewTarget).field0_0x0 + 8);
  uVar21 = *(undefined4 *)((longlong)&(param_1->CameraToViewTarget).field0_0x0 + 0xc);
  local_358.M[0][0]._0_4_ = local_a58._0_4_;
  local_358.M[0][0]._4_4_ = local_a58._4_4_;
  local_358.M[1][0]._0_4_ = local_a58._8_4_;
  local_358.M[1][0]._4_4_ = uStack_a4c;
  (this->CameraToViewTarget).field0_0x0._s_0.X = (param_1->CameraToViewTarget).field0_0x0._s_0.X;
  *(undefined4 *)((longlong)&(this->CameraToViewTarget).field0_0x0 + 8) = uVar14;
  *(undefined4 *)((longlong)&(this->CameraToViewTarget).field0_0x0 + 0xc) = uVar21;
  dVar17 = (param_1->CameraToViewTarget).field0_0x0._s_0.Z;
  *(undefined4 *)(this->TranslatedViewMatrix).M[0] = local_a58._0_4_;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[0] + 4) = local_a58._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[0] + 1) = local_a58._8_4_;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[0] + 0xc) = uStack_a4c;
  (this->TranslatedViewMatrix).M[0][2] = local_a48;
  *(undefined4 *)((this->TranslatedViewMatrix).M[0] + 3) = (undefined4)uStack_a40;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[0] + 0x1c) = uStack_a40._4_4_;
  *(undefined4 *)(this->TranslatedViewMatrix).M[1] = (undefined4)local_a38;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[1] + 4) = local_a38._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[1] + 1) = (undefined4)uStack_a30;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[1] + 0xc) = uStack_a30._4_4_;
  (this->CameraToViewTarget).field0_0x0._s_0.Z = dVar17;
  *(undefined4 *)((this->TranslatedViewMatrix).M[1] + 2) = (undefined4)local_a28;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[1] + 0x14) = local_a28._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[1] + 3) = (undefined4)uStack_a20;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[1] + 0x1c) = uStack_a20._4_4_;
  *(undefined4 *)(this->TranslatedViewMatrix).M[2] = (undefined4)local_a18;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 4) = local_a18._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 1) = (undefined4)uStack_a10;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0xc) = uStack_a10._4_4_;
  local_458.M[1][0]._0_4_ = (undefined4)local_a38;
  local_458.M[1][0]._4_4_ = local_a38._4_4_;
  local_458.M[1][1]._0_4_ = (undefined4)uStack_a30;
  local_458.M[1][1]._4_4_ = uStack_a30._4_4_;
  local_458.M[0][2] = local_a48;
  local_458.M[0][3]._0_4_ = (undefined4)uStack_a40;
  local_458.M[0][3]._4_4_ = uStack_a40._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 2) = (undefined4)local_a08;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0x14) = local_a08._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 3) = (undefined4)uStack_a00;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0x1c) = uStack_a00._4_4_;
  local_458.M[0][0]._0_4_ = local_a58._0_4_;
  local_458.M[0][0]._4_4_ = local_a58._4_4_;
  local_458.M[0][1]._0_4_ = local_a58._8_4_;
  local_458.M[0][1]._4_4_ = uStack_a4c;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[0] = local_a58._0_4_;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 4) = local_a58._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 1) = (undefined4)local_a38;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0xc) = local_a38._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 2) = (undefined4)local_a18;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0x14) = local_a18._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 3) = (undefined4)local_9f8;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0x1c) = local_9f8._4_4_;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[1] = local_a58._8_4_;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 4) = uStack_a4c;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 1) = (undefined4)uStack_a30;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0xc) = uStack_a30._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 2) = (undefined4)uStack_a10;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x14) = uStack_a10._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 3) = (undefined4)uStack_9f0;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x1c) = uStack_9f0._4_4_;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[2] = (undefined4)local_a48;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 4) = local_a48._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 1) = (undefined4)local_a28;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0xc) = local_a28._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 2) = (undefined4)local_a08;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x14) = local_a08._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 3) = (undefined4)local_9e8;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x1c) = local_9e8._4_4_;
  local_458.M[1][2]._0_4_ = (undefined4)local_a28;
  local_458.M[1][2]._4_4_ = local_a28._4_4_;
  local_458.M[1][3]._0_4_ = (undefined4)uStack_a20;
  local_458.M[1][3]._4_4_ = uStack_a20._4_4_;
  *(undefined4 *)(this->TranslatedViewMatrix).M[3] = (undefined4)local_9f8;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[3] + 4) = local_9f8._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[3] + 1) = (undefined4)uStack_9f0;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[3] + 0xc) = uStack_9f0._4_4_;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[3] = (undefined4)uStack_a40;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 4) = uStack_a40._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 1) = (undefined4)uStack_a20;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0xc) = uStack_a20._4_4_;
  local_358.M[3][2]._0_4_ = (undefined4)uStack_a00;
  local_358.M[3][2]._4_4_ = uStack_a00._4_4_;
  local_358.M[3][3]._0_4_ = (undefined4)uStack_9e0;
  local_358.M[3][3]._4_4_ = uStack_9e0._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 2) = (undefined4)uStack_a00;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x14) = uStack_a00._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 3) = (undefined4)uStack_9e0;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x1c) = uStack_9e0._4_4_;
  local_458.M[2][0]._0_4_ = (undefined4)local_a18;
  local_458.M[2][0]._4_4_ = local_a18._4_4_;
  local_458.M[2][1]._0_4_ = (undefined4)uStack_a10;
  local_458.M[2][1]._4_4_ = uStack_a10._4_4_;
  local_458.M[2][2]._0_4_ = (undefined4)local_a08;
  local_458.M[2][2]._4_4_ = local_a08._4_4_;
  local_458.M[2][3]._0_4_ = (undefined4)uStack_a00;
  local_458.M[2][3]._4_4_ = uStack_a00._4_4_;
  local_458.M[3][0]._0_4_ = (undefined4)local_9f8;
  local_458.M[3][0]._4_4_ = local_9f8._4_4_;
  local_458.M[3][1]._0_4_ = (undefined4)uStack_9f0;
  local_458.M[3][1]._4_4_ = uStack_9f0._4_4_;
  local_458.M[3][2]._0_4_ = (undefined4)local_9e8;
  local_458.M[3][2]._4_4_ = local_9e8._4_4_;
  local_458.M[3][3]._0_4_ = (undefined4)uStack_9e0;
  local_458.M[3][3]._4_4_ = uStack_9e0._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[3] + 2) = (undefined4)local_9e8;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[3] + 0x14) = local_9e8._4_4_;
  *(undefined4 *)((this->TranslatedViewMatrix).M[3] + 3) = (undefined4)uStack_9e0;
  *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[3] + 0x1c) = uStack_9e0._4_4_;
  local_358.M[0][1]._0_4_ = (undefined4)local_a38;
  local_358.M[0][1]._4_4_ = local_a38._4_4_;
  local_358.M[0][2]._0_4_ = (undefined4)local_a18;
  local_358.M[0][2]._4_4_ = local_a18._4_4_;
  local_358.M[0][3]._0_4_ = (undefined4)local_9f8;
  local_358.M[0][3]._4_4_ = local_9f8._4_4_;
  local_358.M[1][1]._0_4_ = (undefined4)uStack_a30;
  local_358.M[1][1]._4_4_ = uStack_a30._4_4_;
  local_358.M[1][2]._0_4_ = (undefined4)uStack_a10;
  local_358.M[1][2]._4_4_ = uStack_a10._4_4_;
  local_358.M[1][3]._0_4_ = (undefined4)uStack_9f0;
  local_358.M[1][3]._4_4_ = uStack_9f0._4_4_;
  local_358.M[2][0]._0_4_ = (undefined4)local_a48;
  local_358.M[2][0]._4_4_ = local_a48._4_4_;
  local_358.M[2][1]._0_4_ = (undefined4)local_a28;
  local_358.M[2][1]._4_4_ = local_a28._4_4_;
  local_358.M[2][2]._0_4_ = (undefined4)local_a08;
  local_358.M[2][2]._4_4_ = local_a08._4_4_;
  local_358.M[2][3]._0_4_ = (undefined4)local_9e8;
  local_358.M[2][3]._4_4_ = local_9e8._4_4_;
  local_358.M[3][0]._0_4_ = (undefined4)uStack_a40;
  local_358.M[3][0]._4_4_ = uStack_a40._4_4_;
  local_358.M[3][1]._0_4_ = (undefined4)uStack_a20;
  local_358.M[3][1]._4_4_ = uStack_a20._4_4_;
  (this->OverriddenTranslatedViewMatrix).M[0][0] = (double)local_a58._0_8_;
  (this->OverriddenTranslatedViewMatrix).M[0][1] = stack0xfffffffffffff5b0;
  (this->OverriddenTranslatedViewMatrix).M[0][2] = local_a48;
  (this->OverriddenTranslatedViewMatrix).M[0][3] = uStack_a40;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[0] = local_358.M[0][0]._0_4_;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 4) =
       local_358.M[0][0]._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[0] + 1) = (undefined4)local_a38;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 0xc) = local_a38._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[0] + 2) = (undefined4)local_a18;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 0x14) = local_a18._4_4_
  ;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[0] + 3) = (undefined4)local_9f8;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 0x1c) = local_9f8._4_4_
  ;
  (this->OverriddenTranslatedViewMatrix).M[1][0] = local_a38;
  (this->OverriddenTranslatedViewMatrix).M[1][1] = uStack_a30;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[1] = local_358.M[1][0]._0_4_;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 4) =
       local_358.M[1][0]._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 1) = (undefined4)uStack_a30;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0xc) = uStack_a30._4_4_
  ;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[1] + 2) = (undefined4)local_a28;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[1] + 0x14) = local_a28._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[1] + 3) = (undefined4)uStack_a20;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[1] + 0x1c) = uStack_a20._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 2) = (undefined4)uStack_a10;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x14) =
       uStack_a10._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 3) = (undefined4)uStack_9f0;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x1c) =
       uStack_9f0._4_4_;
  *(undefined4 *)(this->OverriddenTranslatedViewMatrix).M[2] = (undefined4)local_a18;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 4) = local_a18._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 1) = (undefined4)uStack_a10;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0xc) = uStack_a10._4_4_;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[2] = (undefined4)local_a48;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 4) = local_a48._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 1) = (undefined4)local_a28;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0xc) = local_a28._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 2) = (undefined4)local_a08;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0x14) = local_a08._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 3) = (undefined4)uStack_a00;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0x1c) = uStack_a00._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 2) = (undefined4)local_a08;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x14) = local_a08._4_4_
  ;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 3) = (undefined4)local_9e8;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x1c) = local_9e8._4_4_
  ;
  *(undefined4 *)(this->OverriddenTranslatedViewMatrix).M[3] = (undefined4)local_9f8;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[3] + 4) = local_9f8._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[3] + 1) = (undefined4)uStack_9f0;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[3] + 0xc) = uStack_9f0._4_4_;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[3] = (undefined4)uStack_a40;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 4) = uStack_a40._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 1) = (undefined4)uStack_a20;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0xc) = uStack_a20._4_4_
  ;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[3] + 2) = (undefined4)local_9e8;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[3] + 0x14) = local_9e8._4_4_;
  *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[3] + 3) = (undefined4)uStack_9e0;
  *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[3] + 0x1c) = uStack_9e0._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 2) = (undefined4)uStack_a00;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x14) =
       uStack_a00._4_4_;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 3) = (undefined4)uStack_9e0;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x1c) =
       uStack_9e0._4_4_;
  VectorMatrixMultiply(&local_3d8,&local_458,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_3d8.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_3d8.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] = local_3d8.M[0][2];
  (this->TranslatedViewProjectionMatrix).M[0][3] = local_3d8.M[0][3];
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_3d8.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_3d8.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] = local_3d8.M[1][2];
  (this->TranslatedViewProjectionMatrix).M[1][3] = local_3d8.M[1][3];
  (this->TranslatedViewProjectionMatrix).M[2][0] = local_3d8.M[2][0];
  (this->TranslatedViewProjectionMatrix).M[2][1] = local_3d8.M[2][1];
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_3d8.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_3d8.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] = local_3d8.M[3][0];
  (this->TranslatedViewProjectionMatrix).M[3][1] = local_3d8.M[3][1];
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_3d8.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_3d8.M[3][3];
  VectorMatrixMultiply(&local_2d8,pTVar2,&local_358);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_2d8.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_2d8.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = local_2d8.M[0][2];
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = local_2d8.M[0][3];
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_2d8.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_2d8.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = local_2d8.M[1][2];
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = local_2d8.M[1][3];
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = local_2d8.M[2][0];
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = local_2d8.M[2][1];
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_2d8.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_2d8.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = local_2d8.M[3][0];
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = local_2d8.M[3][1];
  dVar17 = __real_3ff0000000000000;
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_2d8.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_2d8.M[3][3];
  if (param_1->StereoPass == eSSP_FULL) {
    uVar14 = SUB84(dVar17,0);
    uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
  }
  else {
    uVar14 = (undefined4)__real_4000000000000000;
    uVar21 = (undefined4)((ulonglong)__real_4000000000000000 >> 0x20);
  }
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  if (dVar17 < *pdVar1 || dVar17 == *pdVar1) {
    (this->ProjectionScale).field0_0x0._s_0.X = (double)CONCAT44(uVar21,uVar14);
    (this->ProjectionScale).field0_0x0._s_0.Y = 1.0;
    pTVar9 = CVarOrthoCalculateDepthThicknessScaling.Ref;
    bVar10 = IsInParallelGameThread();
    if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
      lVar13 = 0;
    }
    else {
      lVar13 = 4;
    }
    if (*(int *)((longlong)pTVar9->ShadowedValue + lVar13) != 0) {
      dVar17 = (this->InvProjectionMatrix).M[2][2];
      dVar23 = log((double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      ;
      uVar14 = SUB84(local_bc0,0);
      uVar21 = (undefined4)((ulonglong)local_bc0 >> 0x20);
      dVar17 = dVar23 * __real_3fdbcb7b1526e50d;
      if (__real_4022000000000000 <= dVar23 * __real_3fdbcb7b1526e50d) {
        dVar17 = __real_4022000000000000;
      }
      if (dVar17 <= local_bc0) {
        dVar17 = local_bc0;
      }
      fVar15 = powf(__real_41200000,
                    (float)(int)(char)(int)(double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^
                                                            __xmm_80000000000000008000000000000000.
                                                            _4_4_,SUB84(dVar17,0) ^
                                                                  (uint)
                                                  __xmm_80000000000000008000000000000000));
      this->PerProjectionDepthThicknessScale = fVar15;
      goto LAB_148530f15;
    }
    this->PerProjectionDepthThicknessScale = GOrthographicDepthThicknessScale;
  }
  else {
    dVar17 = (this->ProjectionMatrix).M[0][0];
    (this->ProjectionScale).field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
         (double)CONCAT44(uVar21,uVar14);
    dVar17 = (this->ProjectionMatrix).M[1][1];
    (this->ProjectionScale).field0_0x0._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    this->PerProjectionDepthThicknessScale = 1.0;
  }
  uVar14 = SUB84(local_bc0,0);
  uVar21 = (undefined4)((ulonglong)local_bc0 >> 0x20);
LAB_148530f15:
  dVar17 = (double)((float)(*(int *)((longlong)&(param_1->ConstrainedViewRect).field0_0x0 + 0xc) -
                           *(int *)((longlong)&(param_1->ConstrainedViewRect).field0_0x0 + 4)) *
                   __real_3f000000) * (this->ProjectionScale).field0_0x0._s_0.Y;
  dVar23 = (double)((float)(*(int *)((longlong)&(param_1->ConstrainedViewRect).field0_0x0 + 8) -
                           *(int *)&(param_1->ConstrainedViewRect).field0_0x0) * __real_3f000000) *
           (this->ProjectionScale).field0_0x0._s_0.X;
  if (dVar17 <= dVar23) {
    dVar17 = dVar23;
  }
  this->ScreenScale = (float)dVar17;
  fVar15 = (param_1->FirstPersonParams).Scale;
  (this->FirstPersonParams).FOVCorrectionFactor = (param_1->FirstPersonParams).FOVCorrectionFactor;
  (this->FirstPersonParams).Scale = fVar15;
  uVar26 = *(undefined4 *)&(param_1->FirstPersonParams).bUseParameters;
  *(undefined4 *)&(this->FirstPersonParams).bUseParameters = uVar26;
  if ((char)uVar26 != '\0') {
    local_958.M[0][1] = (double)CONCAT44(uVar21,uVar14);
    local_958.M[2][2] = (double)(this->FirstPersonParams).Scale;
    local_958.M[1][0] = (double)CONCAT44(uVar21,uVar14);
    local_958.M[0][0] = (double)(this->FirstPersonParams).FOVCorrectionFactor * local_958.M[2][2];
    local_958.M[2][3] = (double)CONCAT44(uVar21,uVar14);
    local_958.M[0][2] = 0.0;
    local_958.M[0][3] = 0.0;
    local_958.M[2][0] = 0.0;
    local_958.M[2][1] = 0.0;
    local_958.M[3][2] = local_b88;
    local_958.M[3][3] = dStack_b80;
    local_958.M[1][2] = 0.0;
    local_958.M[1][3] = 0.0;
    local_958.M[3][0] = 0.0;
    local_958.M[3][1] = 0.0;
    local_958.M[1][1] = local_958.M[0][0];
    VectorMatrixMultiply(&local_158,&this->TranslatedViewMatrix,&local_958);
    VectorMatrixMultiply(&local_258,&local_158,&this->InvTranslatedViewMatrix);
    (this->FirstPersonTransform).M[0][0] = local_258.M[0][0];
    (this->FirstPersonTransform).M[0][1] = local_258.M[0][1];
    (this->FirstPersonTransform).M[0][2] = local_258.M[0][2];
    (this->FirstPersonTransform).M[0][3] = local_258.M[0][3];
    (this->FirstPersonTransform).M[1][0] = local_258.M[1][0];
    (this->FirstPersonTransform).M[1][1] = local_258.M[1][1];
    (this->FirstPersonTransform).M[1][2] = local_258.M[1][2];
    (this->FirstPersonTransform).M[1][3] = local_258.M[1][3];
    (this->FirstPersonTransform).M[2][0] = local_258.M[2][0];
    (this->FirstPersonTransform).M[2][1] = local_258.M[2][1];
    (this->FirstPersonTransform).M[2][2] = local_258.M[2][2];
    (this->FirstPersonTransform).M[2][3] = local_258.M[2][3];
    (this->FirstPersonTransform).M[3][0] = local_258.M[3][0];
    (this->FirstPersonTransform).M[3][1] = local_258.M[3][1];
    (this->FirstPersonTransform).M[3][2] = local_258.M[3][2];
    (this->FirstPersonTransform).M[3][3] = local_258.M[3][3];
  }
  return;
}

// ScreenToClipProjectionMatrix @ 1485420d0

TMatrix<double> * __thiscall
FViewMatrices::ScreenToClipProjectionMatrix
          (FViewMatrices *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->ProjectionMatrix).M[3][3];
  __return_storage_ptr__->M[0][0] = 1.0;
  dVar2 = (this->ProjectionMatrix).M[3][2];
  dVar3 = (this->ProjectionMatrix).M[2][2];
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = 1.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = dVar3;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = dVar2;
  if (dVar1 < __real_3ff0000000000000) {
    __return_storage_ptr__->M[3][3] = 0.0;
    __return_storage_ptr__->M[2][3] = 1.0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// UpdatePlanarReflectionViewMatrix @ 14854c060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FViewMatrices::UpdatePlanarReflectionViewMatrix
          (FViewMatrices *this,FSceneView *param_1,TMirrorMatrix<double> *param_2)

{
  double (*padVar1) [4];
  TMatrix<double> *pTVar2;
  TMatrix<double> *pTVar3;
  TMatrix<double> *pTVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  TVector<double> *pTVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  TVector<double>_u_0 local_2f8;
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_328;
  VectorMatrixMultiply(&local_158,(TMatrix<double> *)param_2,&(param_1->ViewMatrices).ViewMatrix);
  pTVar2 = &this->HMDViewMatrixNoRoll;
  pTVar2->M[0][0] = local_158.M[0][0];
  (this->HMDViewMatrixNoRoll).M[0][1] = local_158.M[0][1];
  (this->HMDViewMatrixNoRoll).M[0][2] = local_158.M[0][2];
  (this->HMDViewMatrixNoRoll).M[0][3] = local_158.M[0][3];
  (this->HMDViewMatrixNoRoll).M[1][0] = local_158.M[1][0];
  (this->HMDViewMatrixNoRoll).M[1][1] = local_158.M[1][1];
  (this->HMDViewMatrixNoRoll).M[1][2] = local_158.M[1][2];
  (this->HMDViewMatrixNoRoll).M[1][3] = local_158.M[1][3];
  (this->HMDViewMatrixNoRoll).M[2][0] = local_158.M[2][0];
  (this->HMDViewMatrixNoRoll).M[2][1] = local_158.M[2][1];
  local_2d8.M[3][0] = local_158.M[3][0];
  local_2d8.M[3][1] = local_158.M[3][1];
  (this->HMDViewMatrixNoRoll).M[2][2] = local_158.M[2][2];
  (this->HMDViewMatrixNoRoll).M[2][3] = local_158.M[2][3];
  (this->HMDViewMatrixNoRoll).M[3][0] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][1] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][2] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][3] = local_158.M[3][3];
  local_2d8.M[3][2] = 0.0;
  local_2d8.M[3][3] = local_158.M[3][3];
  pTVar29 = UE::Math::TMatrix<double>::InverseTransformPosition
                      (&local_158,(TVector<double> *)&local_2f8._s_0,
                       &UE::Math::TVector<double>::ZeroVector);
  uVar28 = _UNK_15066df7c;
  uVar27 = _UNK_15066df78;
  uVar26 = __xmm_80000000000000008000000000000000._4_4_;
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  dVar6 = (pTVar29->field0_0x0)._s_0.Y;
  (this->ViewOrigin).field0_0x0._s_0.X = (pTVar29->field0_0x0)._s_0.X;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar6;
  (this->ViewOrigin).field0_0x0._s_0.Z = (pTVar29->field0_0x0)._s_0.Z;
  uVar5 = *(undefined8 *)&(this->ViewOrigin).field0_0x0;
  uVar12 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 8);
  uVar30 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0xc);
  uVar31 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x10);
  uVar32 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x14);
  (this->PreViewTranslation).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ uVar26,(uint)uVar5 ^ uVar25);
  uVar30 = uVar30 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar31 = uVar31 ^ _UNK_15066df78;
  uVar32 = uVar32 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 8) =
       uVar12 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0xc) = uVar30;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0x10) = uVar31;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0x14) = uVar32;
  dVar9 = _UNK_150689518;
  dVar8 = ___xmm_00000000000000003ff0000000000000;
  dVar7 = __real_3ff0000000000000;
  local_258.M[0][2] = 0.0;
  local_258.M[0][3] = 0.0;
  local_258.M[1][2] = 0.0;
  local_258.M[1][3] = 0.0;
  local_258.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_258.M[1][1] = _UNK_15061cbc8;
  local_258.M[3][3] = __real_3ff0000000000000;
  local_258.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 4) ^ uVar26,
                        *(uint *)&(this->ViewOrigin).field0_0x0 ^ uVar25);
  local_258.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0xc) ^ uVar28,
                        *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 8) ^ uVar27);
  uVar5 = *(undefined8 *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x10);
  local_258.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_258.M[0][1] = _UNK_150689518;
  local_258.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) ^ uVar26,(uint)uVar5 ^ uVar25);
  local_258.M[2][0] = 0.0;
  local_258.M[2][1] = 0.0;
  local_258.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_258.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_1d8,&local_258,pTVar2);
  pTVar3 = &this->ViewMatrix;
  pTVar3->M[0][0] = local_1d8.M[0][0];
  (this->ViewMatrix).M[0][1] = local_1d8.M[0][1];
  (this->ViewMatrix).M[0][2] = local_1d8.M[0][2];
  (this->ViewMatrix).M[0][3] = local_1d8.M[0][3];
  (this->ViewMatrix).M[1][0] = local_1d8.M[1][0];
  (this->ViewMatrix).M[1][1] = local_1d8.M[1][1];
  (this->ViewMatrix).M[1][2] = local_1d8.M[1][2];
  (this->ViewMatrix).M[1][3] = local_1d8.M[1][3];
  (this->ViewMatrix).M[2][0] = local_1d8.M[2][0];
  (this->ViewMatrix).M[2][1] = local_1d8.M[2][1];
  (this->ViewMatrix).M[2][2] = local_1d8.M[2][2];
  (this->ViewMatrix).M[2][3] = local_1d8.M[2][3];
  (this->ViewMatrix).M[3][0] = local_1d8.M[3][0];
  (this->ViewMatrix).M[3][1] = local_1d8.M[3][1];
  (this->ViewMatrix).M[3][2] = local_1d8.M[3][2];
  (this->ViewMatrix).M[3][3] = local_1d8.M[3][3];
  local_258.M[2][0] = (this->ViewMatrix).M[0][2];
  local_258.M[3][0] = (this->ViewMatrix).M[0][3];
  local_258.M[0][1] = (this->ViewMatrix).M[1][0];
  local_258.M[1][1] = (this->ViewMatrix).M[1][1];
  local_258.M[2][1] = (this->ViewMatrix).M[1][2];
  local_258.M[3][1] = (this->ViewMatrix).M[1][3];
  local_258.M[0][2] = (this->ViewMatrix).M[2][0];
  local_258.M[1][2] = (this->ViewMatrix).M[2][1];
  local_1d8.M[0][2] = 0.0;
  local_1d8.M[0][3] = 0.0;
  local_1d8.M[1][2] = 0.0;
  local_1d8.M[1][3] = 0.0;
  local_1d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1d8.M[1][1] = _UNK_15061cbc8;
  local_1d8.M[2][0] = 0.0;
  local_1d8.M[2][1] = 0.0;
  local_258.M[0][0] = pTVar3->M[0][0];
  local_258.M[1][0] = (this->ViewMatrix).M[0][1];
  local_1d8.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)(this->ViewMatrix).M[3] + 4) ^ uVar26,
                        *(uint *)(this->ViewMatrix).M[3] ^ uVar25);
  local_1d8.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)(this->ViewMatrix).M[3] + 0xc) ^ uVar28,
                        *(uint *)((this->ViewMatrix).M[3] + 1) ^ uVar27);
  dVar6 = (this->ViewMatrix).M[3][2];
  local_258.M[2][2] = (this->ViewMatrix).M[2][2];
  local_258.M[3][2] = (this->ViewMatrix).M[2][3];
  local_1d8.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar26,SUB84(dVar6,0) ^ uVar25);
  local_258.M[3][3] = (this->ViewMatrix).M[3][3];
  local_1d8.M[3][3] = dVar7;
  local_258.M[0][3] = 0.0;
  local_258.M[1][3] = 0.0;
  local_258.M[2][3] = 0.0;
  local_1d8.M[0][0] = dVar8;
  local_1d8.M[0][1] = dVar9;
  local_1d8.M[2][2] = dVar8;
  local_1d8.M[2][3] = dVar9;
  VectorMatrixMultiply(&local_2d8,&local_1d8,&local_258);
  pTVar4 = &this->InvViewMatrix;
  pTVar4->M[0][0] = local_2d8.M[0][0];
  (this->InvViewMatrix).M[0][1] = local_2d8.M[0][1];
  (this->InvViewMatrix).M[0][2] = local_2d8.M[0][2];
  (this->InvViewMatrix).M[0][3] = local_2d8.M[0][3];
  (this->InvViewMatrix).M[1][0] = local_2d8.M[1][0];
  (this->InvViewMatrix).M[1][1] = local_2d8.M[1][1];
  (this->InvViewMatrix).M[1][2] = local_2d8.M[1][2];
  (this->InvViewMatrix).M[1][3] = local_2d8.M[1][3];
  (this->InvViewMatrix).M[2][0] = local_2d8.M[2][0];
  (this->InvViewMatrix).M[2][1] = local_2d8.M[2][1];
  (this->InvViewMatrix).M[2][2] = local_2d8.M[2][2];
  (this->InvViewMatrix).M[2][3] = local_2d8.M[2][3];
  (this->InvViewMatrix).M[3][0] = local_2d8.M[3][0];
  (this->InvViewMatrix).M[3][1] = local_2d8.M[3][1];
  (this->InvViewMatrix).M[3][2] = local_2d8.M[3][2];
  (this->InvViewMatrix).M[3][3] = local_2d8.M[3][3];
  local_258.M[0][0] = pTVar2->M[0][0];
  local_258.M[0][1] = (this->HMDViewMatrixNoRoll).M[1][0];
  local_258.M[0][2] = (this->HMDViewMatrixNoRoll).M[2][0];
  local_258.M[0][3] = (this->HMDViewMatrixNoRoll).M[3][0];
  local_258.M[1][0] = (this->HMDViewMatrixNoRoll).M[0][1];
  local_258.M[1][1] = (this->HMDViewMatrixNoRoll).M[1][1];
  local_258.M[1][2] = (this->HMDViewMatrixNoRoll).M[2][1];
  local_258.M[1][3] = (this->HMDViewMatrixNoRoll).M[3][1];
  local_258.M[2][0] = (this->HMDViewMatrixNoRoll).M[0][2];
  local_258.M[2][2] = (this->HMDViewMatrixNoRoll).M[2][2];
  local_258.M[2][1] = (this->HMDViewMatrixNoRoll).M[1][2];
  local_258.M[3][0] = (this->HMDViewMatrixNoRoll).M[0][3];
  local_258.M[2][3] = (this->HMDViewMatrixNoRoll).M[3][2];
  local_258.M[3][2] = (this->HMDViewMatrixNoRoll).M[2][3];
  local_258.M[3][1] = (this->HMDViewMatrixNoRoll).M[1][3];
  local_258.M[3][3] = (this->HMDViewMatrixNoRoll).M[3][3];
  local_1d8.M[0][2] = 0.0;
  local_1d8.M[0][3] = 0.0;
  local_1d8.M[1][2] = 0.0;
  local_1d8.M[1][3] = 0.0;
  local_1d8.M[3][0] = (this->ViewOrigin).field0_0x0._s_0.X;
  local_1d8.M[3][1] = (this->ViewOrigin).field0_0x0._s_0.Y;
  local_1d8.M[3][2] = (this->ViewOrigin).field0_0x0._s_0.Z;
  local_1d8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1d8.M[1][1] = _UNK_15061cbc8;
  local_1d8.M[3][3] = dVar7;
  local_1d8.M[0][0] = dVar8;
  local_1d8.M[0][1] = dVar9;
  local_1d8.M[2][0] = 0.0;
  local_1d8.M[2][1] = 0.0;
  local_1d8.M[2][2] = dVar8;
  local_1d8.M[2][3] = dVar9;
  VectorMatrixMultiply(&local_2d8,&local_258,&local_1d8);
  pTVar4->M[0][0] = local_2d8.M[0][0];
  (this->InvViewMatrix).M[0][1] = local_2d8.M[0][1];
  (this->InvViewMatrix).M[0][2] = local_2d8.M[0][2];
  (this->InvViewMatrix).M[0][3] = local_2d8.M[0][3];
  (this->InvViewMatrix).M[1][0] = local_2d8.M[1][0];
  (this->InvViewMatrix).M[1][1] = local_2d8.M[1][1];
  (this->InvViewMatrix).M[1][2] = local_2d8.M[1][2];
  (this->InvViewMatrix).M[1][3] = local_2d8.M[1][3];
  (this->InvViewMatrix).M[2][0] = local_2d8.M[2][0];
  (this->InvViewMatrix).M[2][1] = local_2d8.M[2][1];
  (this->InvViewMatrix).M[2][2] = local_2d8.M[2][2];
  (this->InvViewMatrix).M[2][3] = local_2d8.M[2][3];
  (this->InvViewMatrix).M[3][0] = local_2d8.M[3][0];
  (this->InvViewMatrix).M[3][1] = local_2d8.M[3][1];
  (this->InvViewMatrix).M[3][2] = local_2d8.M[3][2];
  (this->InvViewMatrix).M[3][3] = local_2d8.M[3][3];
  VectorMatrixMultiply(&local_2d8,pTVar3,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_2d8.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_2d8.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] = local_2d8.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = local_2d8.M[0][3];
  (this->ViewProjectionMatrix).M[1][0] = local_2d8.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_2d8.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] = local_2d8.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = local_2d8.M[1][3];
  (this->ViewProjectionMatrix).M[2][0] = local_2d8.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = local_2d8.M[2][1];
  (this->ViewProjectionMatrix).M[2][2] = local_2d8.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_2d8.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] = local_2d8.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = local_2d8.M[3][1];
  (this->ViewProjectionMatrix).M[3][2] = local_2d8.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_2d8.M[3][3];
  VectorMatrixMultiply(&local_2d8,&this->InvProjectionMatrix,pTVar4);
  (this->InvViewProjectionMatrix).M[0][0] = local_2d8.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_2d8.M[0][1];
  pTVar3 = &this->TranslatedViewMatrix;
  (this->InvViewProjectionMatrix).M[0][2] = local_2d8.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = local_2d8.M[0][3];
  (this->InvViewProjectionMatrix).M[1][0] = local_2d8.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_2d8.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] = local_2d8.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = local_2d8.M[1][3];
  (this->InvViewProjectionMatrix).M[2][0] = local_2d8.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = local_2d8.M[2][1];
  (this->InvViewProjectionMatrix).M[2][2] = local_2d8.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_2d8.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] = local_2d8.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = local_2d8.M[3][1];
  dVar6 = pTVar2->M[0][0];
  dVar7 = (this->HMDViewMatrixNoRoll).M[0][1];
  (this->InvViewProjectionMatrix).M[3][2] = local_2d8.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_2d8.M[3][3];
  pTVar3->M[0][0] = dVar6;
  (this->TranslatedViewMatrix).M[0][1] = dVar7;
  dVar6 = (this->HMDViewMatrixNoRoll).M[0][3];
  dVar7 = (this->HMDViewMatrixNoRoll).M[1][0];
  dVar8 = (this->HMDViewMatrixNoRoll).M[1][1];
  (this->TranslatedViewMatrix).M[0][2] = (this->HMDViewMatrixNoRoll).M[0][2];
  (this->TranslatedViewMatrix).M[0][3] = dVar6;
  dVar6 = (this->HMDViewMatrixNoRoll).M[1][2];
  dVar9 = (this->HMDViewMatrixNoRoll).M[1][3];
  (this->TranslatedViewMatrix).M[1][0] = dVar7;
  (this->TranslatedViewMatrix).M[1][1] = dVar8;
  dVar7 = (this->HMDViewMatrixNoRoll).M[2][0];
  dVar8 = (this->HMDViewMatrixNoRoll).M[2][1];
  (this->TranslatedViewMatrix).M[1][2] = dVar6;
  (this->TranslatedViewMatrix).M[1][3] = dVar9;
  dVar6 = (this->HMDViewMatrixNoRoll).M[2][2];
  dVar9 = (this->HMDViewMatrixNoRoll).M[2][3];
  (this->TranslatedViewMatrix).M[2][0] = dVar7;
  (this->TranslatedViewMatrix).M[2][1] = dVar8;
  dVar7 = (this->HMDViewMatrixNoRoll).M[3][0];
  dVar8 = (this->HMDViewMatrixNoRoll).M[3][1];
  (this->TranslatedViewMatrix).M[2][2] = dVar6;
  (this->TranslatedViewMatrix).M[2][3] = dVar9;
  dVar6 = (this->HMDViewMatrixNoRoll).M[3][2];
  dVar9 = (this->HMDViewMatrixNoRoll).M[3][3];
  (this->TranslatedViewMatrix).M[3][0] = dVar7;
  (this->TranslatedViewMatrix).M[3][1] = dVar8;
  (this->TranslatedViewMatrix).M[3][2] = dVar6;
  (this->TranslatedViewMatrix).M[3][3] = dVar9;
  dVar6 = (this->TranslatedViewMatrix).M[0][1];
  dVar7 = (this->TranslatedViewMatrix).M[0][2];
  dVar8 = (this->TranslatedViewMatrix).M[0][3];
  (this->OverriddenTranslatedViewMatrix).M[0][0] = pTVar3->M[0][0];
  (this->OverriddenTranslatedViewMatrix).M[0][1] = dVar6;
  dVar6 = (this->TranslatedViewMatrix).M[1][0];
  dVar9 = (this->TranslatedViewMatrix).M[1][1];
  (this->OverriddenTranslatedViewMatrix).M[0][2] = dVar7;
  (this->OverriddenTranslatedViewMatrix).M[0][3] = dVar8;
  dVar7 = (this->TranslatedViewMatrix).M[1][2];
  dVar8 = (this->TranslatedViewMatrix).M[1][3];
  (this->OverriddenTranslatedViewMatrix).M[1][0] = dVar6;
  (this->OverriddenTranslatedViewMatrix).M[1][1] = dVar9;
  dVar6 = (this->TranslatedViewMatrix).M[2][0];
  dVar9 = (this->TranslatedViewMatrix).M[2][1];
  (this->OverriddenTranslatedViewMatrix).M[1][2] = dVar7;
  (this->OverriddenTranslatedViewMatrix).M[1][3] = dVar8;
  dVar7 = (this->TranslatedViewMatrix).M[2][2];
  dVar8 = (this->TranslatedViewMatrix).M[2][3];
  (this->OverriddenTranslatedViewMatrix).M[2][0] = dVar6;
  (this->OverriddenTranslatedViewMatrix).M[2][1] = dVar9;
  dVar6 = (this->TranslatedViewMatrix).M[3][0];
  dVar9 = (this->TranslatedViewMatrix).M[3][1];
  (this->OverriddenTranslatedViewMatrix).M[2][2] = dVar7;
  (this->OverriddenTranslatedViewMatrix).M[2][3] = dVar8;
  dVar7 = (this->TranslatedViewMatrix).M[3][2];
  dVar8 = (this->TranslatedViewMatrix).M[3][3];
  (this->OverriddenTranslatedViewMatrix).M[3][0] = dVar6;
  (this->OverriddenTranslatedViewMatrix).M[3][1] = dVar9;
  (this->OverriddenTranslatedViewMatrix).M[3][2] = dVar7;
  (this->OverriddenTranslatedViewMatrix).M[3][3] = dVar8;
  dVar6 = (this->HMDViewMatrixNoRoll).M[1][0];
  dVar7 = (this->HMDViewMatrixNoRoll).M[3][0];
  local_2f8._8_4_ = SUB84(dVar7,0);
  local_2f8._12_4_ = (undefined4)((ulonglong)dVar7 >> 0x20);
  uVar21 = *(undefined4 *)((this->HMDViewMatrixNoRoll).M[0] + 1);
  uVar22 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[0] + 0xc);
  dVar8 = (this->HMDViewMatrixNoRoll).M[1][1];
  local_308 = *(undefined4 *)pTVar2->M[0];
  uStack_304 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[0] + 4);
  dVar23 = pTVar2->M[0][0];
  padVar1 = (this->HMDViewMatrixNoRoll).M + 2;
  local_2f8._0_4_ = *(undefined4 *)*padVar1;
  local_2f8._4_4_ = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[2] + 4);
  dVar24 = (*padVar1)[0];
  uVar19 = *(undefined4 *)((this->HMDViewMatrixNoRoll).M[2] + 1);
  uVar20 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[2] + 0xc);
  dVar9 = (this->HMDViewMatrixNoRoll).M[3][1];
  uVar33 = SUB84(dVar9,0);
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar17 = *(undefined4 *)((this->HMDViewMatrixNoRoll).M[0] + 2);
  uVar18 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[0] + 0x14);
  dVar9 = (this->HMDViewMatrixNoRoll).M[1][2];
  uVar35 = SUB84(dVar9,0);
  uVar36 = (undefined4)((ulonglong)dVar9 >> 0x20);
  uVar15 = *(undefined4 *)((this->HMDViewMatrixNoRoll).M[2] + 2);
  uVar16 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[2] + 0x14);
  dVar9 = (this->HMDViewMatrixNoRoll).M[3][2];
  uVar37 = SUB84(dVar9,0);
  uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar9 = (this->HMDViewMatrixNoRoll).M[0][3];
  dVar10 = (this->HMDViewMatrixNoRoll).M[1][3];
  uVar13 = *(undefined4 *)((this->HMDViewMatrixNoRoll).M[2] + 3);
  uVar14 = *(undefined4 *)((longlong)(this->HMDViewMatrixNoRoll).M[2] + 0x1c);
  dVar11 = (this->HMDViewMatrixNoRoll).M[3][3];
  uVar41 = SUB84(dVar11,0);
  uVar42 = (undefined4)((ulonglong)dVar11 >> 0x20);
  uStack_300 = SUB84(dVar6,0);
  uStack_2fc = (undefined4)((ulonglong)dVar6 >> 0x20);
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[0] = local_308;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 4) = uStack_304;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 1) = uStack_300;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0xc) = uStack_2fc;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 2) = local_2f8._0_4_;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0x14) = local_2f8._4_4_;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[0] + 3) = local_2f8._8_4_;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0x1c) = local_2f8._12_4_;
  uVar39 = SUB84(dVar8,0);
  uVar40 = (undefined4)((ulonglong)dVar8 >> 0x20);
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[1] = uVar21;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 4) = uVar22;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 1) = uVar39;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0xc) = uVar40;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 2) = uVar19;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x14) = uVar20;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 3) = uVar33;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x1c) = uVar34;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[2] = uVar17;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 4) = uVar18;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 1) = uVar35;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0xc) = uVar36;
  (this->OverriddenInvTranslatedViewMatrix).M[0][0] = dVar23;
  (this->OverriddenInvTranslatedViewMatrix).M[0][1] = dVar6;
  (this->OverriddenInvTranslatedViewMatrix).M[0][2] = dVar24;
  (this->OverriddenInvTranslatedViewMatrix).M[0][3] = dVar7;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[1] = uVar21;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 4) = uVar22;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 1) = uVar39;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0xc) = uVar40;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 2) = uVar19;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x14) = uVar20;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 3) = uVar33;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x1c) = uVar34;
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[2] = uVar17;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 4) = uVar18;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 1) = uVar35;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0xc) = uVar36;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 2) = uVar15;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x14) = uVar16;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 3) = uVar37;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x1c) = uVar38;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 2) = uVar15;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x14) = uVar16;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 3) = uVar37;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x1c) = uVar38;
  (this->OverriddenInvTranslatedViewMatrix).M[3][0] = dVar9;
  (this->OverriddenInvTranslatedViewMatrix).M[3][1] = dVar10;
  (this->InvTranslatedViewMatrix).M[3][0] = dVar9;
  (this->InvTranslatedViewMatrix).M[3][1] = dVar10;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 2) = uVar13;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x14) = uVar14;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 3) = uVar41;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x1c) = uVar42;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 2) = uVar13;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x14) = uVar14;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 3) = uVar41;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x1c) = uVar42;
  VectorMatrixMultiply(&local_2d8,pTVar3,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_2d8.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_2d8.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] = local_2d8.M[0][2];
  (this->TranslatedViewProjectionMatrix).M[0][3] = local_2d8.M[0][3];
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_2d8.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_2d8.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] = local_2d8.M[1][2];
  (this->TranslatedViewProjectionMatrix).M[1][3] = local_2d8.M[1][3];
  (this->TranslatedViewProjectionMatrix).M[2][0] = local_2d8.M[2][0];
  (this->TranslatedViewProjectionMatrix).M[2][1] = local_2d8.M[2][1];
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_2d8.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_2d8.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] = local_2d8.M[3][0];
  (this->TranslatedViewProjectionMatrix).M[3][1] = local_2d8.M[3][1];
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_2d8.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_2d8.M[3][3];
  VectorMatrixMultiply(&local_2d8,&this->InvProjectionMatrix,&this->InvTranslatedViewMatrix);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_2d8.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_2d8.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = local_2d8.M[0][2];
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = local_2d8.M[0][3];
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_2d8.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_2d8.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = local_2d8.M[1][2];
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = local_2d8.M[1][3];
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = local_2d8.M[2][0];
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = local_2d8.M[2][1];
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_2d8.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_2d8.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = local_2d8.M[3][0];
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = local_2d8.M[3][1];
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_2d8.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_2d8.M[3][3];
  return;
}

// UpdateViewMatrix @ 14854cc40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FViewMatrices::UpdateViewMatrix
          (FViewMatrices *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  TMatrix<double> *pTVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  TInverseRotationMatrix<double> *pTVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auStack_388 [32];
  TRotator<double> local_368;
  TMatrix<double> local_348;
  TMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  dVar5 = _UNK_150689518;
  dVar4 = ___xmm_00000000000000003ff0000000000000;
  local_148.M[2][1] = _UNK_15061cbc8;
  local_148.M[2][0] = ___xmm_3ff00000000000000000000000000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_388;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  (this->ViewOrigin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ViewOrigin).field0_0x0._s_0.Y = dVar3;
  (this->ViewOrigin).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_148.M[0][0] = 0.0;
  local_148.M[0][1] = 0.0;
  local_148.M[3][0] = 0.0;
  local_148.M[3][1] = 0.0;
  local_148.M[0][2] = dVar4;
  local_148.M[0][3] = dVar5;
  local_148.M[1][0] = dVar4;
  local_148.M[1][1] = dVar5;
  local_148.M[1][2] = 0.0;
  local_148.M[1][3] = 0.0;
  local_148.M[2][2] = 0.0;
  local_148.M[2][3] = 0.0;
  local_148.M[3][2] = local_148.M[2][0];
  local_148.M[3][3] = local_148.M[2][1];
  pTVar26 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      ((TInverseRotationMatrix<double> *)&local_2c8,param_2);
  VectorMatrixMultiply(&local_248,(TMatrix<double> *)pTVar26,&local_148);
  uVar25 = __xmm_80000000000000008000000000000000._4_4_;
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  dVar3 = __real_3ff0000000000000;
  local_348.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_348.M[1][1] = _UNK_15061cbc8;
  local_348.M[0][2] = 0.0;
  local_348.M[0][3] = 0.0;
  local_348.M[1][2] = 0.0;
  local_348.M[1][3] = 0.0;
  local_348.M[3][3] = __real_3ff0000000000000;
  local_348.M[0][0] = dVar4;
  local_348.M[0][1] = dVar5;
  local_348.M[3][0] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 4) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000
                       );
  local_348.M[3][1] =
       (double)CONCAT44(*(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c,
                        *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78);
  uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_348.M[2][0] = 0.0;
  local_348.M[2][1] = 0.0;
  local_348.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar2 ^ (uint)__xmm_80000000000000008000000000000000);
  local_348.M[2][2] = dVar4;
  local_348.M[2][3] = dVar5;
  VectorMatrixMultiply(&local_1c8,&local_348,&local_248);
  (this->ViewMatrix).M[0][0] = local_1c8.M[0][0];
  (this->ViewMatrix).M[0][1] = local_1c8.M[0][1];
  (this->ViewMatrix).M[0][2] = local_1c8.M[0][2];
  (this->ViewMatrix).M[0][3] = local_1c8.M[0][3];
  (this->ViewMatrix).M[1][0] = local_1c8.M[1][0];
  (this->ViewMatrix).M[1][1] = local_1c8.M[1][1];
  (this->ViewMatrix).M[1][2] = local_1c8.M[1][2];
  (this->ViewMatrix).M[1][3] = local_1c8.M[1][3];
  (this->ViewMatrix).M[2][0] = local_1c8.M[2][0];
  (this->ViewMatrix).M[2][1] = local_1c8.M[2][1];
  (this->ViewMatrix).M[2][2] = local_1c8.M[2][2];
  (this->ViewMatrix).M[2][3] = local_1c8.M[2][3];
  (this->ViewMatrix).M[3][0] = local_1c8.M[3][0];
  (this->ViewMatrix).M[3][1] = local_1c8.M[3][1];
  (this->ViewMatrix).M[3][2] = local_1c8.M[3][2];
  (this->ViewMatrix).M[3][3] = local_1c8.M[3][3];
  local_368.Pitch = param_2->Pitch;
  local_368.Yaw = param_2->Yaw;
  local_368.Roll = 0.0;
  pTVar26 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      ((TInverseRotationMatrix<double> *)&local_2c8,&local_368);
  VectorMatrixMultiply(&local_348,(TMatrix<double> *)pTVar26,&local_148);
  (this->HMDViewMatrixNoRoll).M[0][0] = local_348.M[0][0];
  (this->HMDViewMatrixNoRoll).M[0][1] = local_348.M[0][1];
  (this->HMDViewMatrixNoRoll).M[0][2] = local_348.M[0][2];
  (this->HMDViewMatrixNoRoll).M[0][3] = local_348.M[0][3];
  (this->HMDViewMatrixNoRoll).M[1][0] = local_348.M[1][0];
  (this->HMDViewMatrixNoRoll).M[1][1] = local_348.M[1][1];
  (this->HMDViewMatrixNoRoll).M[1][2] = local_348.M[1][2];
  (this->HMDViewMatrixNoRoll).M[1][3] = local_348.M[1][3];
  (this->HMDViewMatrixNoRoll).M[2][0] = local_348.M[2][0];
  (this->HMDViewMatrixNoRoll).M[2][1] = local_348.M[2][1];
  (this->HMDViewMatrixNoRoll).M[2][2] = local_348.M[2][2];
  (this->HMDViewMatrixNoRoll).M[2][3] = local_348.M[2][3];
  (this->HMDViewMatrixNoRoll).M[3][0] = local_348.M[3][0];
  (this->HMDViewMatrixNoRoll).M[3][1] = local_348.M[3][1];
  (this->HMDViewMatrixNoRoll).M[3][2] = local_348.M[3][2];
  (this->HMDViewMatrixNoRoll).M[3][3] = local_348.M[3][3];
  VectorMatrixMultiply(&local_348,&this->ViewMatrix,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_348.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_348.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] = local_348.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = local_348.M[0][3];
  (this->ViewProjectionMatrix).M[1][0] = local_348.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_348.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] = local_348.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = local_348.M[1][3];
  (this->ViewProjectionMatrix).M[2][0] = local_348.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = local_348.M[2][1];
  (this->ViewProjectionMatrix).M[2][2] = local_348.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_348.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] = local_348.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = local_348.M[3][1];
  (this->ViewProjectionMatrix).M[3][2] = local_348.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_348.M[3][3];
  local_1c8.M[0][0] = local_248.M[0][0];
  local_1c8.M[0][2] = local_248.M[2][0];
  local_1c8.M[0][1] = local_248.M[1][0];
  local_1c8.M[1][0] = local_248.M[0][1];
  local_1c8.M[0][3] = local_248.M[3][0];
  local_1c8.M[1][2] = local_248.M[2][1];
  local_1c8.M[1][1] = local_248.M[1][1];
  local_1c8.M[2][0] = local_248.M[0][2];
  local_1c8.M[1][3] = local_248.M[3][1];
  local_1c8.M[2][2] = local_248.M[2][2];
  local_1c8.M[2][1] = local_248.M[1][2];
  local_1c8.M[3][0] = local_248.M[0][3];
  local_1c8.M[2][3] = local_248.M[3][2];
  local_1c8.M[3][2] = local_248.M[2][3];
  local_1c8.M[3][1] = local_248.M[1][3];
  local_348.M[0][2] = 0.0;
  local_348.M[0][3] = 0.0;
  local_348.M[1][2] = 0.0;
  local_348.M[1][3] = 0.0;
  local_348.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_348.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_1c8.M[3][3] = local_248.M[3][3];
  local_348.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_348.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_348.M[1][1] = _UNK_15061cbc8;
  local_348.M[3][3] = dVar3;
  local_348.M[0][0] = dVar4;
  local_348.M[0][1] = dVar5;
  local_348.M[2][0] = 0.0;
  local_348.M[2][1] = 0.0;
  local_348.M[2][2] = dVar4;
  local_348.M[2][3] = dVar5;
  VectorMatrixMultiply(&local_2c8,&local_1c8,&local_348);
  (this->InvViewMatrix).M[0][0] = local_2c8.M[0][0];
  (this->InvViewMatrix).M[0][1] = local_2c8.M[0][1];
  (this->InvViewMatrix).M[0][2] = local_2c8.M[0][2];
  (this->InvViewMatrix).M[0][3] = local_2c8.M[0][3];
  (this->InvViewMatrix).M[1][0] = local_2c8.M[1][0];
  (this->InvViewMatrix).M[1][1] = local_2c8.M[1][1];
  (this->InvViewMatrix).M[1][2] = local_2c8.M[1][2];
  (this->InvViewMatrix).M[1][3] = local_2c8.M[1][3];
  (this->InvViewMatrix).M[2][0] = local_2c8.M[2][0];
  (this->InvViewMatrix).M[2][1] = local_2c8.M[2][1];
  (this->InvViewMatrix).M[2][2] = local_2c8.M[2][2];
  (this->InvViewMatrix).M[2][3] = local_2c8.M[2][3];
  (this->InvViewMatrix).M[3][0] = local_2c8.M[3][0];
  (this->InvViewMatrix).M[3][1] = local_2c8.M[3][1];
  (this->InvViewMatrix).M[3][2] = local_2c8.M[3][2];
  (this->InvViewMatrix).M[3][3] = local_2c8.M[3][3];
  VectorMatrixMultiply(&local_2c8,&this->InvProjectionMatrix,&this->InvViewMatrix);
  pTVar1 = &this->TranslatedViewMatrix;
  (this->InvViewProjectionMatrix).M[0][0] = local_2c8.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_2c8.M[0][1];
  (this->InvViewProjectionMatrix).M[0][2] = local_2c8.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = local_2c8.M[0][3];
  (this->InvViewProjectionMatrix).M[1][0] = local_2c8.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_2c8.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] = local_2c8.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = local_2c8.M[1][3];
  (this->InvViewProjectionMatrix).M[2][0] = local_2c8.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = local_2c8.M[2][1];
  (this->InvViewProjectionMatrix).M[2][2] = local_2c8.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_2c8.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] = local_2c8.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = local_2c8.M[3][1];
  (this->InvViewProjectionMatrix).M[3][2] = local_2c8.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_2c8.M[3][3];
  uVar2 = *(undefined8 *)&(this->ViewOrigin).field0_0x0;
  uVar14 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 8);
  uVar27 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0xc);
  uVar28 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x10);
  uVar29 = *(uint *)((longlong)&(this->ViewOrigin).field0_0x0 + 0x14);
  (this->PreViewTranslation).field0_0x0._s_0.X =
       (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar25,(uint)uVar2 ^ uVar24);
  uVar27 = uVar27 ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar28 = uVar28 ^ _UNK_15066df78;
  uVar29 = uVar29 ^ _UNK_15066df7c;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 8) =
       uVar14 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0xc) = uVar27;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0x10) = uVar28;
  *(uint *)((longlong)&(this->PreViewTranslation).field0_0x0 + 0x14) = uVar29;
  pTVar1->M[0][0] = local_248.M[0][0];
  (this->TranslatedViewMatrix).M[0][1] = local_248.M[0][1];
  (this->TranslatedViewMatrix).M[0][2] = local_248.M[0][2];
  (this->TranslatedViewMatrix).M[0][3] = local_248.M[0][3];
  (this->TranslatedViewMatrix).M[1][0] = local_248.M[1][0];
  (this->TranslatedViewMatrix).M[1][1] = local_248.M[1][1];
  (this->TranslatedViewMatrix).M[1][2] = local_248.M[1][2];
  (this->TranslatedViewMatrix).M[1][3] = local_248.M[1][3];
  (this->TranslatedViewMatrix).M[2][0] = local_248.M[2][0];
  (this->TranslatedViewMatrix).M[2][1] = local_248.M[2][1];
  (this->TranslatedViewMatrix).M[2][2] = local_248.M[2][2];
  (this->TranslatedViewMatrix).M[2][3] = local_248.M[2][3];
  (this->TranslatedViewMatrix).M[3][0] = local_248.M[3][0];
  (this->TranslatedViewMatrix).M[3][1] = local_248.M[3][1];
  (this->TranslatedViewMatrix).M[3][2] = local_248.M[3][2];
  (this->TranslatedViewMatrix).M[3][3] = local_248.M[3][3];
  dVar3 = (this->TranslatedViewMatrix).M[1][0];
  uVar15 = *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[0] + 4);
  dVar4 = (this->TranslatedViewMatrix).M[2][0];
  dVar5 = (this->TranslatedViewMatrix).M[3][0];
  dVar6 = (this->TranslatedViewMatrix).M[0][1];
  dVar7 = (this->TranslatedViewMatrix).M[1][1];
  uVar16 = *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 1);
  uVar17 = *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0xc);
  dVar8 = (this->TranslatedViewMatrix).M[3][1];
  dVar9 = (this->TranslatedViewMatrix).M[0][2];
  dVar10 = (this->TranslatedViewMatrix).M[1][2];
  uVar18 = *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 2);
  uVar19 = *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0x14);
  dVar11 = (this->TranslatedViewMatrix).M[3][2];
  uVar20 = *(undefined4 *)((this->TranslatedViewMatrix).M[0] + 3);
  uVar21 = *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[0] + 0x1c);
  dVar12 = (this->TranslatedViewMatrix).M[1][3];
  uVar22 = *(undefined4 *)((this->TranslatedViewMatrix).M[2] + 3);
  uVar23 = *(undefined4 *)((longlong)(this->TranslatedViewMatrix).M[2] + 0x1c);
  dVar13 = (this->TranslatedViewMatrix).M[3][3];
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[0] = *(undefined4 *)pTVar1->M[0];
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 4) = uVar15;
  *(int *)((this->InvTranslatedViewMatrix).M[0] + 1) = SUB84(dVar3,0);
  *(int *)((longlong)(this->InvTranslatedViewMatrix).M[0] + 0xc) = (int)((ulonglong)dVar3 >> 0x20);
  (this->InvTranslatedViewMatrix).M[0][2] = dVar4;
  (this->InvTranslatedViewMatrix).M[0][3] = dVar5;
  (this->OverriddenTranslatedViewMatrix).M[0][0] = local_248.M[0][0];
  (this->OverriddenTranslatedViewMatrix).M[0][1] = local_248.M[0][1];
  (this->OverriddenTranslatedViewMatrix).M[0][2] = local_248.M[0][2];
  (this->OverriddenTranslatedViewMatrix).M[0][3] = local_248.M[0][3];
  (this->OverriddenTranslatedViewMatrix).M[1][0] = local_248.M[1][0];
  (this->OverriddenTranslatedViewMatrix).M[1][1] = local_248.M[1][1];
  (this->OverriddenTranslatedViewMatrix).M[1][2] = local_248.M[1][2];
  (this->OverriddenTranslatedViewMatrix).M[1][3] = local_248.M[1][3];
  (this->OverriddenTranslatedViewMatrix).M[2][0] = local_248.M[2][0];
  (this->OverriddenTranslatedViewMatrix).M[2][1] = local_248.M[2][1];
  (this->InvTranslatedViewMatrix).M[1][0] = dVar6;
  (this->InvTranslatedViewMatrix).M[1][1] = dVar7;
  (this->OverriddenTranslatedViewMatrix).M[2][2] = local_248.M[2][2];
  (this->OverriddenTranslatedViewMatrix).M[2][3] = local_248.M[2][3];
  (this->OverriddenTranslatedViewMatrix).M[3][0] = local_248.M[3][0];
  (this->OverriddenTranslatedViewMatrix).M[3][1] = local_248.M[3][1];
  (this->OverriddenTranslatedViewMatrix).M[3][2] = local_248.M[3][2];
  (this->OverriddenTranslatedViewMatrix).M[3][3] = local_248.M[3][3];
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[1] + 2) = uVar16;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x14) = uVar17;
  *(int *)((this->InvTranslatedViewMatrix).M[1] + 3) = SUB84(dVar8,0);
  *(int *)((longlong)(this->InvTranslatedViewMatrix).M[1] + 0x1c) = (int)((ulonglong)dVar8 >> 0x20);
  (this->InvTranslatedViewMatrix).M[2][0] = dVar9;
  (this->InvTranslatedViewMatrix).M[2][1] = dVar10;
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[2] + 2) = uVar18;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x14) = uVar19;
  *(int *)((this->InvTranslatedViewMatrix).M[2] + 3) = SUB84(dVar11,0);
  *(int *)((longlong)(this->InvTranslatedViewMatrix).M[2] + 0x1c) = (int)((ulonglong)dVar11 >> 0x20)
  ;
  *(undefined4 *)(this->InvTranslatedViewMatrix).M[3] = uVar20;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 4) = uVar21;
  *(int *)((this->InvTranslatedViewMatrix).M[3] + 1) = SUB84(dVar12,0);
  *(int *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0xc) = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined4 *)((this->InvTranslatedViewMatrix).M[3] + 2) = uVar22;
  *(undefined4 *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x14) = uVar23;
  *(int *)((this->InvTranslatedViewMatrix).M[3] + 3) = SUB84(dVar13,0);
  *(int *)((longlong)(this->InvTranslatedViewMatrix).M[3] + 0x1c) = (int)((ulonglong)dVar13 >> 0x20)
  ;
  dVar3 = (this->OverriddenTranslatedViewMatrix).M[1][0];
  uVar15 = *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[0] + 4);
  dVar4 = (this->OverriddenTranslatedViewMatrix).M[2][0];
  dVar5 = (this->OverriddenTranslatedViewMatrix).M[3][0];
  dVar6 = (this->OverriddenTranslatedViewMatrix).M[0][1];
  dVar7 = (this->OverriddenTranslatedViewMatrix).M[1][1];
  uVar16 = *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 1);
  uVar17 = *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0xc);
  dVar8 = (this->OverriddenTranslatedViewMatrix).M[3][1];
  dVar9 = (this->OverriddenTranslatedViewMatrix).M[0][2];
  dVar10 = (this->OverriddenTranslatedViewMatrix).M[1][2];
  uVar18 = *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 2);
  uVar19 = *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0x14);
  dVar11 = (this->OverriddenTranslatedViewMatrix).M[3][2];
  uVar20 = *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[0] + 3);
  uVar21 = *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[0] + 0x1c);
  dVar12 = (this->OverriddenTranslatedViewMatrix).M[1][3];
  uVar22 = *(undefined4 *)((this->OverriddenTranslatedViewMatrix).M[2] + 3);
  uVar23 = *(undefined4 *)((longlong)(this->OverriddenTranslatedViewMatrix).M[2] + 0x1c);
  dVar13 = (this->OverriddenTranslatedViewMatrix).M[3][3];
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[0] =
       *(undefined4 *)(this->OverriddenTranslatedViewMatrix).M[0];
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 4) = uVar15;
  *(int *)((this->OverriddenInvTranslatedViewMatrix).M[0] + 1) = SUB84(dVar3,0);
  *(int *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[0] + 0xc) =
       (int)((ulonglong)dVar3 >> 0x20);
  (this->OverriddenInvTranslatedViewMatrix).M[0][2] = dVar4;
  (this->OverriddenInvTranslatedViewMatrix).M[0][3] = dVar5;
  (this->OverriddenInvTranslatedViewMatrix).M[1][0] = dVar6;
  (this->OverriddenInvTranslatedViewMatrix).M[1][1] = dVar7;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 2) = uVar16;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x14) = uVar17;
  *(int *)((this->OverriddenInvTranslatedViewMatrix).M[1] + 3) = SUB84(dVar8,0);
  *(int *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[1] + 0x1c) =
       (int)((ulonglong)dVar8 >> 0x20);
  (this->OverriddenInvTranslatedViewMatrix).M[2][0] = dVar9;
  (this->OverriddenInvTranslatedViewMatrix).M[2][1] = dVar10;
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 2) = uVar18;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x14) = uVar19;
  *(int *)((this->OverriddenInvTranslatedViewMatrix).M[2] + 3) = SUB84(dVar11,0);
  *(int *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[2] + 0x1c) =
       (int)((ulonglong)dVar11 >> 0x20);
  *(undefined4 *)(this->OverriddenInvTranslatedViewMatrix).M[3] = uVar20;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 4) = uVar21;
  *(int *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 1) = SUB84(dVar12,0);
  *(int *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0xc) =
       (int)((ulonglong)dVar12 >> 0x20);
  *(undefined4 *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 2) = uVar22;
  *(undefined4 *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x14) = uVar23;
  *(int *)((this->OverriddenInvTranslatedViewMatrix).M[3] + 3) = SUB84(dVar13,0);
  *(int *)((longlong)(this->OverriddenInvTranslatedViewMatrix).M[3] + 0x1c) =
       (int)((ulonglong)dVar13 >> 0x20);
  VectorMatrixMultiply(&local_2c8,pTVar1,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_2c8.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_2c8.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] = local_2c8.M[0][2];
  (this->TranslatedViewProjectionMatrix).M[0][3] = local_2c8.M[0][3];
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_2c8.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_2c8.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] = local_2c8.M[1][2];
  (this->TranslatedViewProjectionMatrix).M[1][3] = local_2c8.M[1][3];
  (this->TranslatedViewProjectionMatrix).M[2][0] = local_2c8.M[2][0];
  (this->TranslatedViewProjectionMatrix).M[2][1] = local_2c8.M[2][1];
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_2c8.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_2c8.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] = local_2c8.M[3][0];
  (this->TranslatedViewProjectionMatrix).M[3][1] = local_2c8.M[3][1];
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_2c8.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_2c8.M[3][3];
  VectorMatrixMultiply(&local_2c8,&this->InvProjectionMatrix,&this->InvTranslatedViewMatrix);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_2c8.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_2c8.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = local_2c8.M[0][2];
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = local_2c8.M[0][3];
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_2c8.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_2c8.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = local_2c8.M[1][2];
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = local_2c8.M[1][3];
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = local_2c8.M[2][0];
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = local_2c8.M[2][1];
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_2c8.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_2c8.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = local_2c8.M[3][0];
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = local_2c8.M[3][1];
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_2c8.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_2c8.M[3][3];
  return;
}

// operator() @ 15052d500

bool __thiscall `FViewMatrices::Init'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8888498745365234322>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8888498745365234322>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

