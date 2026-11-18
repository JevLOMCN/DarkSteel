// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FDynamicMeshEmitterData @ 1481c74d0

FDynamicMeshEmitterData * __thiscall
FDynamicMeshEmitterData::FDynamicMeshEmitterData
          (FDynamicMeshEmitterData *this,UParticleModuleRequired *param_1)

{
  undefined1 *puVar1;
  
  FDynamicEmitterDataBase::FDynamicEmitterDataBase((FDynamicEmitterDataBase *)this,param_1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  this->_padding_ = (longlong)&___7FDynamicMeshEmitterData__6B_;
  this->_padding_ = 0;
  FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  (this->Source)._padding_ = (longlong)&___7FDynamicMeshEmitterReplayData__6B_;
  (this->Source).SubUVInterpMethod = 0;
  (this->Source).SubUVDataOffset = 0;
  (this->Source).SubImages_Horizontal = 0;
  (this->Source).SubImages_Vertical = 0;
  (this->Source).bScaleUV = false;
  (this->Source).MeshRotationOffset = 0;
  (this->Source).MeshMotionBlurOffset = 0;
  (this->Source).MeshAlignment = '\0';
  (this->Source).bMeshRotationActive = false;
  (this->Source).LockedAxis.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&(this->Source).LockedAxis.field0_0x0 = 0x3f800000;
  (this->MeshMaterials).AllocatorInstance.SecondaryData =
       (ForElementType<FMaterialRenderProxy_*>)0x0;
  this->StaticMesh = (UStaticMesh *)0x0;
  this->LastFramePreRendered = -1;
  (this->MeshMaterials).ArrayNum = 0;
  (this->MeshMaterials).ArrayMax = 2;
  this->bApplyPreRotation = 0;
  this->bFaceCameraDirectionRatherThanPosition = 0;
  this->bApplyParticleRotationAsSpin = 0;
  this->bUseCameraFacing = 0;
  this->bUseMeshLockedAxis = 0;
  this->CameraFacingOption = '\0';
  this->LastCalculatedMeshLOD = 0;
  this->EmitterInstance = (FParticleMeshEmitterInstance *)0x0;
  this->MeshTypeDataOffset = 0xffffffff;
  return this;
}

// ~FDynamicMeshEmitterData @ 1481c90e0

void __thiscall FDynamicMeshEmitterData::~FDynamicMeshEmitterData(FDynamicMeshEmitterData *this)

{
  ForElementType<FMaterialRenderProxy_*> FVar1;
  
  this->_padding_ = (longlong)&___7FDynamicMeshEmitterData__6B_;
  FVar1 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source);
  this->_padding_ = (longlong)&___7FDynamicEmitterDataBase__6B_;
  return;
}

// CalculateParticleTransform @ 1481d6b40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FDynamicMeshEmitterData::CalculateParticleTransform
          (FDynamicMeshEmitterData *this,TMatrix<double> *param_1,TVector<double> *param_2,
          float param_3,TVector<float> *param_4,TVector<float> *param_5,TVector<float> *param_6,
          TVector<float> *param_7,TVector<double> *param_8,TVector<float> *param_9,
          TVector<double> *param_10,TVector<float> *param_11,TMatrix<double> *param_12)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  byte bVar5;
  uchar uVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [16];
  bool bVar13;
  TQuat<double> *pTVar14;
  TMatrix<double> *pTVar15;
  TVector<double> *pTVar16;
  TRotator<double> *pTVar17;
  TQuatRotationMatrix<double> *pTVar18;
  TVector<float>_u_0 *pTVar19;
  TVector<float> *pTVar20;
  double dVar21;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined1 auVar22 [16];
  double dVar35;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double extraout_XMM0_Qb_00;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  double dVar48;
  uint uVar49;
  uint uVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStack_1568 [32];
  double local_1548;
  double dStack_1540;
  undefined8 local_1538;
  TVector<double>_u_0 local_1530;
  double local_1518;
  double dStack_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  double local_14f8;
  double dStack_14f0;
  undefined1 local_14e8 [32];
  undefined1 local_14c8 [16];
  double local_14b8;
  double dStack_14b0;
  undefined1 local_14a8 [20];
  undefined4 uStack_1494;
  undefined4 uStack_1490;
  undefined4 uStack_148c;
  TRotator<double> local_1488;
  undefined8 local_1468;
  undefined8 uStack_1460;
  TVector<double>_u_0 local_1458;
  TVector<float>_u_0 local_1438 [2];
  double local_1418;
  TVector<double>_u_0 local_1410;
  TVector<double>_u_0 local_13f8;
  TVector<double>_u_0 local_13e0;
  TVector<double>_u_0 local_13c8;
  TVector<float> local_13a8;
  TVector<double>_u_0 local_1398;
  TVector<double>_u_0 local_1380;
  TVector<double>_u_0 local_1368;
  TVector<double>_u_0 local_1350;
  TVector<double>_u_0 local_1338;
  TQuat<double> local_1318;
  TVector<double>_u_0 local_12f8;
  TVector<double>_u_0 local_12e0;
  TVector<double>_u_0 local_12c8;
  TVector<double>_u_0 local_12b0;
  TVector<double>_u_0 local_1298;
  TRotator<double> local_1278;
  TRotator<double> local_1260;
  TVector<double>_u_0 local_1248;
  TVector<double>_u_0 local_1230;
  double local_1218;
  double local_1210;
  TVector<double>_u_0 local_1208;
  TQuat<double> local_11e8 [2];
  undefined1 local_11a8 [16];
  undefined1 local_1198 [16];
  undefined1 local_1188 [16];
  double local_1178;
  double dStack_1170;
  TQuat<double> local_1168;
  TQuat<double> local_1148;
  TRotator<double> local_1128 [6];
  double local_1088;
  double dStack_1080;
  undefined1 local_1078 [16];
  undefined1 local_1068 [16];
  double local_1058;
  double dStack_1050;
  undefined1 local_1048 [16];
  double local_1038;
  double dStack_1030;
  undefined1 local_1028 [16];
  double local_1018;
  double dStack_1010;
  undefined1 local_fe8 [16];
  double local_fd8;
  double dStack_fd0;
  TQuat<double> local_fc8;
  TRotator<double> local_fa8;
  TVector<double> local_f90;
  TVector<double> local_f78;
  TQuat<double> local_f58;
  TQuat<double> local_f38;
  TQuat<double> local_f18;
  TQuat<double> local_ef8;
  TQuat<double> local_ed8;
  TQuat<double> local_eb8;
  TQuat<double> local_e98;
  TQuat<double> local_e78;
  TMatrix<double> local_e58;
  TMatrix<double> local_dd8;
  TQuatRotationMatrix<double> local_d58;
  TQuatRotationMatrix<double> local_cd8;
  TQuatRotationMatrix<double> local_c58;
  TRotationMatrix<double> local_bd8;
  TMatrix<double> local_b58;
  undefined1 local_ad8 [16];
  double local_ac8;
  double dStack_ac0;
  double local_ab8;
  double dStack_ab0;
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double dStack_a90;
  undefined1 local_a88 [16];
  double local_a78;
  double dStack_a70;
  double local_a68;
  double dStack_a60;
  undefined1 local_a58 [16];
  double local_a48;
  double dStack_a40;
  double local_a38;
  double dStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  double dStack_a10;
  undefined1 local_a08 [16];
  double local_9f8;
  double local_9f0;
  double local_9e8;
  double local_9e0;
  TMatrix<double> local_9d8;
  undefined1 local_958 [16];
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  undefined1 local_908 [16];
  double local_8f8;
  double local_8f0;
  double local_8e8;
  double local_8e0;
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
  TQuatRotationMatrix<double> local_1d8;
  TQuatRotationMatrix<double> local_158;
  ulonglong local_d8;
  
  auVar12 = ___xmm_00000000000000003ff0000000000000;
  dVar55 = _UNK_15061cbc8;
  dVar51 = ___xmm_3ff00000000000000000000000000000;
  dVar36 = __real_3ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1568;
  local_14f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_14f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1418 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this->CameraFacingOption != '\0') {
    switch(this->CameraFacingOption) {
    case '\x01':
    case '\x05':
    case '\t':
      local_1418 = __real_3ff0000000000000;
      local_14f8 = 0.0;
      dStack_14f0 = 0.0;
      break;
    case '\x02':
    case '\x06':
    case '\n':
      local_14f8 = 0.0;
      dStack_14f0 = 0.0;
      local_1418 = __real_bff0000000000000;
      break;
    case '\x03':
    case '\a':
    case '\v':
      local_14f8 = ___xmm_3ff00000000000000000000000000000;
      dStack_14f0 = _UNK_15061cbc8;
      local_1418 = 0.0;
      break;
    case '\x04':
    case '\b':
    case '\f':
      local_14f8 = ___xmm_bff00000000000000000000000000000;
      dStack_14f0 = _UNK_1508ffb28;
      local_1418 = 0.0;
    }
  }
  dVar48 = (double)__xmm_00000000000000003ff0000000000000;
  pTVar20 = &(this->Source).LockedAxis;
  local_1468 = UE::Math::TQuat<double>::Identity.X;
  uStack_1460 = UE::Math::TQuat<double>::Identity.Y;
  local_1508 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                                UE::Math::TQuat<double>::Identity.Z._0_4_);
  uStack_1500 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                                 UE::Math::TQuat<double>::Identity.W._0_4_);
  uVar43 = UE::Math::TQuat<double>::Identity.Z._0_4_;
  uVar45 = UE::Math::TQuat<double>::Identity.Z._4_4_;
  uVar59 = UE::Math::TQuat<double>::Identity.W._0_4_;
  uVar60 = UE::Math::TQuat<double>::Identity.W._4_4_;
  local_14a8._0_8_ = UE::Math::TQuat<double>::Identity.X;
  local_14a8._8_8_ = UE::Math::TQuat<double>::Identity.Y;
  if (this->bUseMeshLockedAxis != 0) {
    local_1398._s_0.Z = (double)(this->Source).LockedAxis.field0_0x0._s_0.Z;
    local_1398._s_0.Y = (double)(this->Source).LockedAxis.field0_0x0._s_0.Y;
    local_1398._s_0.X = (double)(pTVar20->field0_0x0)._s_0.X;
    local_1208._s_0.Z = 0.0;
    local_1208._0_16_ = ___xmm_00000000000000003ff0000000000000;
    pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                        (&local_f58,(TVector<double> *)&local_1208._s_0,
                         (TVector<double> *)&local_1398._s_0);
    local_14a8._0_8_ = pTVar14->X;
    local_14a8._8_8_ = pTVar14->Y;
    uVar43 = *(undefined4 *)&pTVar14->Z;
    uVar45 = *(undefined4 *)((longlong)&pTVar14->Z + 4);
    local_1508 = pTVar14->Z;
    uVar59 = *(undefined4 *)&pTVar14->W;
    uVar60 = *(undefined4 *)((longlong)&pTVar14->W + 4);
    uStack_1500 = pTVar14->W;
  }
  dVar56 = UE::Math::TMatrix<double>::Identity.M[0][1];
  param_12->M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  param_12->M[0][1] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[0][3];
  param_12->M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  param_12->M[0][3] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[1][1];
  param_12->M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  param_12->M[1][1] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[1][3];
  param_12->M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  param_12->M[1][3] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[2][1];
  param_12->M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  param_12->M[2][1] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[2][3];
  param_12->M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  param_12->M[2][3] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[3][1];
  param_12->M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  param_12->M[3][1] = dVar56;
  dVar56 = UE::Math::TMatrix<double>::Identity.M[3][3];
  param_12->M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  param_12->M[3][3] = dVar56;
  dVar8 = __real_3e45798ee0000000;
  dVar56 = __real_3ff0000000000000;
  local_ad8 = *(undefined1 (*) [16])param_1->M[0];
  local_a48 = 0.0;
  dStack_a40 = 0.0;
  local_a28 = 0.0;
  dStack_a20 = 0.0;
  local_9d8.M[0][2] = 0.0;
  local_9d8.M[0][3] = 0.0;
  local_9d8.M[2][0] = 0.0;
  local_9d8.M[2][1] = 0.0;
  local_a18 = 0.0;
  dStack_a10 = 0.0;
  local_9d8.M[1][2] = 0.0;
  local_9d8.M[1][3] = 0.0;
  local_9d8.M[3][0] = 0.0;
  local_9d8.M[3][1] = 0.0;
  local_14b8 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.Z._4_4_,
                                UE::Math::TQuat<double>::Identity.Z._0_4_);
  dStack_14b0 = (double)CONCAT44(UE::Math::TQuat<double>::Identity.W._4_4_,
                                 UE::Math::TQuat<double>::Identity.W._0_4_);
  local_14c8._8_8_ = UE::Math::TQuat<double>::Identity.Y;
  local_14c8._0_8_ = UE::Math::TQuat<double>::Identity.X;
  local_9e0 = dVar36;
  local_ac8 = param_1->M[0][2];
  dStack_ac0 = param_1->M[0][3];
  local_9d8.M[0][1] = 0.0;
  local_9d8.M[1][0] = 0.0;
  local_9d8.M[2][3] = 0.0;
  local_a58 = auVar12;
  local_a38 = dVar51;
  dStack_a30 = dVar55;
  local_a08 = auVar12;
  local_9d8.M[3][2] = dVar51;
  local_9d8.M[3][3] = dVar55;
  local_1518 = (param_2->field0_0x0)._s_0.Y + (param_8->field0_0x0)._s_0.Y;
  local_9e8 = (param_2->field0_0x0)._s_0.Z + (param_8->field0_0x0)._s_0.Z;
  dStack_1510 = 0.0;
  local_9f8 = (param_8->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
  local_9d8.M[0][0] = (double)((param_5->field0_0x0)._s_0.X * *(float *)&(this->Source)._padding_);
  local_9d8.M[1][1] =
       (double)(*(float *)((longlong)&(this->Source)._padding_ + 4) * (param_5->field0_0x0)._s_0.Y);
  local_b58.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_b58.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_9d8.M[2][2] = (double)(*(float *)&(this->Source)._padding_ * (param_5->field0_0x0)._s_0.Z);
  local_b58.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_b58.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_b58.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_b58.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_b58.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_b58.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_b58.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_b58.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  local_b58.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_b58.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_b58.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_b58.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_b58.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_b58.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  local_a88 = *(undefined1 (*) [16])(param_1->M[2] + 2);
  local_ab8 = param_1->M[1][0];
  dStack_ab0 = param_1->M[1][1];
  local_aa8 = param_1->M[1][2];
  dStack_aa0 = param_1->M[1][3];
  dVar36 = param_1->M[2][0];
  dVar51 = param_1->M[2][1];
  local_a68 = param_1->M[3][2];
  dStack_a60 = param_1->M[3][3];
  local_a78 = param_1->M[3][0];
  dStack_a70 = param_1->M[3][1];
  uStack_1494 = uVar45;
  local_14a8._16_4_ = uVar43;
  uStack_1490 = uVar59;
  uStack_148c = uVar60;
  dVar58 = local_ad8._8_8_;
  dVar55 = local_ad8._0_8_;
  local_9f0 = local_1518;
  local_1468 = (double)local_14a8._0_8_;
  uStack_1460 = (double)local_14a8._8_8_;
  local_a98 = dVar36;
  dStack_a90 = dVar51;
  if (this->bUseCameraFacing == 0) {
    if (this->bUseMeshLockedAxis == 0) {
      if (*(char *)((longlong)&(this->Source)._padding_ + 6) == '\x05') {
        uVar43 = SUB84(__real_3ff0000000000000,0);
        uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        if (*(char *)((longlong)&(this->Source)._padding_ + 4) != '\0') {
          local_ad8 = auVar12;
          dVar58 = dVar58 * local_9f8;
          local_a88 = auVar12;
          local_ac8 = local_ac8 * local_9f8;
          local_9f8 = local_ab8 * local_1518 + dVar55 * local_9f8 + dVar36 * local_9e8 +
                      param_1->M[3][0] * __real_3ff0000000000000;
          local_9f0 = dStack_ab0 * local_1518 + dVar58 + dVar51 * local_9e8 +
                      param_1->M[3][1] * __real_3ff0000000000000;
          local_9e8 = local_aa8 * local_1518 + local_ac8 + param_1->M[2][2] * local_9e8 +
                      param_1->M[3][2] * __real_3ff0000000000000;
          local_ac8 = 0.0;
          dStack_ac0 = 0.0;
          local_ab8 = ___xmm_3ff00000000000000000000000000000;
          dStack_ab0 = _UNK_15061cbc8;
          local_aa8 = 0.0;
          dStack_aa0 = 0.0;
          local_a98 = 0.0;
          dStack_a90 = 0.0;
          local_a78 = 0.0;
          dStack_a70 = 0.0;
          local_a68 = ___xmm_3ff00000000000000000000000000000;
          dStack_a60 = _UNK_15061cbc8;
        }
        pTVar20 = &(this->Source).LockedAxis;
        local_1538 = (param_10->field0_0x0)._s_0.Z - local_9e8;
        dStack_1540 = (param_10->field0_0x0)._s_0.Y - local_9f0;
        local_1548 = (param_10->field0_0x0)._s_0.X - local_9f8;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_1548,__real_3e45798ee0000000)
        ;
        dVar36 = __real_3fe0000000000000;
        if (dStack_1540 * dStack_1540 + local_1548 * local_1548 +
            (double)local_1538 * (double)local_1538 < __real_3fe0000000000000) {
          local_1538 = 0.0;
          _local_1548 = auVar12;
        }
        local_1410._s_0.Z = 0.0;
        local_12b0._s_0.X = 0.0;
        local_12b0._s_0.Y = 0.0;
        local_12b0._s_0.Z = dVar56;
        local_1410._0_16_ = auVar12;
        uVar6 = (this->Source).MeshAlignment;
        if (uVar6 == '\x02') {
          local_1350._s_0.Z = (double)(this->Source).LockedAxis.field0_0x0._s_0.Z;
          local_1350._s_0.Y = (double)(this->Source).LockedAxis.field0_0x0._s_0.Y;
          local_1350._s_0.X = (double)(pTVar20->field0_0x0)._s_0.X;
          UE::Math::TQuat<double>::FindBetweenNormals
                    (local_11e8,(TVector<double> *)&local_12b0._s_0,
                     (TVector<double> *)&local_1350._s_0);
          fVar7 = (pTVar20->field0_0x0)._s_0.X;
          fVar2 = (this->Source).LockedAxis.field0_0x0._s_0.Y;
          fVar3 = (this->Source).LockedAxis.field0_0x0._s_0.Z;
          fVar47 = (float)((double)fVar7 * local_1548 + (double)fVar2 * dStack_1540 +
                          (double)fVar3 * (double)local_1538);
          local_13e0._s_0.X = local_1548 - (double)(fVar7 * fVar47);
          local_13e0._s_0.Y = dStack_1540 - (double)(fVar2 * fVar47);
          local_13e0._s_0.Z = (double)local_1538 - (double)(fVar3 * fVar47);
          UE::Math::TVector<double>::Normalize((TVector<double> *)&local_13e0._s_0,dVar8);
          local_1298._s_0.X = local_1410._s_0.X;
          local_1298._s_0.Y = local_1410._s_0.Y;
          local_1298._s_0.Z = local_1410._s_0.Z;
          pTVar16 = UE::Math::TQuat<double>::RotateVector
                              (local_11e8,&local_f90,(TVector<double> *)&local_1298._s_0);
          UE::Math::TQuat<double>::FindBetweenNormals
                    (&local_1148,pTVar16,(TVector<double> *)&local_13e0._s_0);
          dVar48 = local_1148.W;
          auVar32._8_4_ = local_1148.W._0_4_;
          auVar32._0_8_ = dVar48;
          auVar32._12_4_ = local_1148.W._4_4_;
          dVar55 = local_1148.Z;
          auVar33._8_4_ = local_1148.Z._0_4_;
          auVar33._0_8_ = dVar55;
          auVar33._12_4_ = local_1148.Z._4_4_;
          dVar36 = local_1148.X * local_11e8[0].Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar32._8_8_ * local_11e8[0].Y +
                   local_11e8[0].W * local_1148.Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar33._8_8_ * local_11e8[0].X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar51 = local_1148.X * local_11e8[0].X *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   local_11e8[0].W * dVar48 +
                   local_1148.Y * local_11e8[0].Y *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar55 * local_11e8[0].Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_11a8._8_4_ = SUB84(dVar36,0);
          local_11a8._0_8_ =
               local_1148.X * local_11e8[0].W *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar48 * local_11e8[0].X +
               local_11e8[0].Z * local_1148.Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar55 * local_11e8[0].Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_11a8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          local_1198._8_4_ = SUB84(dVar51,0);
          local_1198._0_8_ =
               local_1148.X * local_11e8[0].Y *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_11e8[0].Z * dVar48 +
               local_1148.Y * local_11e8[0].X *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar55 * local_11e8[0].W *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_1198._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          pTVar18 = UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
                              (&local_d58,(TQuat<double> *)local_11a8);
        }
        else {
          if (uVar6 != '\x01') {
            pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                                (&local_e98,(TVector<double> *)&local_1410._s_0,
                                 (TVector<double> *)&local_1548);
            UE::Math::TRotator<double>::TRotator<double>(&local_1260,pTVar14);
            local_1260.Roll = 0.0;
            __libm_sse2_sincos_();
            local_1318.X = extraout_XMM0_Qa_01 * local_1548;
            local_1318.Y = extraout_XMM0_Qa_01 * dStack_1540;
            local_1318.Z = extraout_XMM0_Qa_01 * (double)local_1538;
            pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_1260,&local_e78);
            UE::Math::TQuat<double>::operator*(&local_1318,&local_fc8,pTVar14);
            pTVar18 = UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
                                (&local_c58,&local_fc8);
            local_b58.M[0][0] = *(double *)pTVar18;
            local_b58.M[0][1] = *(double *)&pTVar18->field_0x8;
            local_b58.M[0][2] = *(double *)&pTVar18->field_0x10;
            local_b58.M[0][3] = *(double *)&pTVar18->field_0x18;
            local_b58.M[1][0] = *(double *)&pTVar18->field_0x20;
            local_b58.M[1][1] = *(double *)&pTVar18->field_0x28;
            local_b58.M[1][2] = *(double *)&pTVar18->field_0x30;
            local_b58.M[1][3] = *(double *)&pTVar18->field_0x38;
            local_b58.M[2][0] = *(double *)&pTVar18->field_0x40;
            local_b58.M[2][1] = *(double *)&pTVar18->field_0x48;
            local_b58.M[2][2] = *(double *)&pTVar18->field_0x50;
            local_b58.M[2][3] = *(double *)&pTVar18->field_0x58;
            local_b58.M[3][0] = *(double *)&pTVar18->field_0x60;
            local_b58.M[3][1] = *(double *)&pTVar18->field_0x68;
            local_b58.M[3][2] = *(double *)&pTVar18->field_0x70;
            local_b58.M[3][3] = *(double *)&pTVar18->field_0x78;
            goto LAB_1481d84bc;
          }
          pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                              (&local_ed8,(TVector<double> *)&local_1410._s_0,
                               (TVector<double> *)&local_1548);
          UE::Math::TRotator<double>::TRotator<double>(&local_1278,pTVar14);
          local_14e8._4_4_ = local_1548._12_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
          local_14e8._0_4_ = local_1548._8_4_ ^ (uint)__xmm_80000000000000008000000000000000;
          local_14e8._8_8_ = local_1548;
          local_1278.Roll = 0.0;
          local_14e8._16_8_ = 0.0;
          UE::Math::TVector<double>::Normalize((TVector<double> *)local_14e8,dVar8);
          uVar59 = (undefined4)local_14e8._16_8_;
          uVar60 = SUB84(local_14e8._16_8_,4);
          uVar43 = local_14e8._8_4_;
          uVar45 = local_14e8._12_4_;
          dVar51 = (double)local_14e8._0_8_;
          if ((double)local_14e8._8_8_ * (double)local_14e8._8_8_ +
              (double)local_14e8._0_8_ * (double)local_14e8._0_8_ +
              (double)local_14e8._16_8_ * (double)local_14e8._16_8_ < dVar36) {
            uVar59 = 0;
            uVar60 = 0;
            local_14e8._16_8_ = 0.0;
            local_14e8._0_16_ = auVar12;
            uVar43 = auVar12._8_4_;
            uVar45 = auVar12._12_4_;
            dVar51 = dVar48;
          }
          __libm_sse2_sincos_();
          dVar51 = extraout_XMM0_Qa_00 * dVar51;
          dVar55 = extraout_XMM0_Qa_00 * (double)CONCAT44(uVar60,uVar59);
          dVar57 = extraout_XMM0_Qa_00 * (double)CONCAT44(uVar45,uVar43);
          pTVar14 = UE::Math::TRotator<double>::Quaternion(&local_1278,&local_eb8);
          dVar48 = pTVar14->Z;
          dVar56 = pTVar14->W;
          dVar8 = pTVar14->X;
          dVar58 = pTVar14->Y;
          auVar34._8_4_ = SUB84(dVar55,0);
          auVar34._0_8_ = dVar55;
          auVar34._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
          dVar36 = dVar51 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                   + dVar58 * extraout_XMM0_Qb_00 +
                   dVar56 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                   + auVar34._8_8_ * dVar8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_1178 = dVar51 * dVar58 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       dVar48 * extraout_XMM0_Qb_00 +
                       dVar8 * dVar57 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       dVar55 * dVar56 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dStack_1170 = dVar51 * dVar8 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                        dVar56 * extraout_XMM0_Qb_00 +
                        dVar58 * dVar57 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                        dVar55 * dVar48 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_1188._8_4_ = SUB84(dVar36,0);
          local_1188._0_8_ =
               dVar51 * dVar56 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar8 * extraout_XMM0_Qb_00 +
               dVar48 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar55 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_1188._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          pTVar18 = UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
                              (&local_cd8,(TQuat<double> *)local_1188);
        }
      }
      else {
        local_1338._s_0.X = (double)(param_3 * __real_42652ee0);
        local_1338._s_0.Y = local_1338._s_0.X;
        local_1338._s_0.Z = local_1338._s_0.X;
        UE::Math::TRotator<double>::MakeFromEuler(&local_1488,(TVector<double> *)&local_1338._s_0);
        local_1248._s_0.X = (double)(float)*(undefined8 *)&param_7->field0_0x0;
        local_1248._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)&param_7->field0_0x0 >> 0x20);
        local_1248._s_0.Z = (double)(param_7->field0_0x0)._s_0.Z;
        pTVar17 = UE::Math::TRotator<double>::MakeFromEuler
                            (&local_fa8,(TVector<double> *)&local_1248._s_0);
        local_1488.Pitch = local_1488.Pitch + pTVar17->Pitch;
        local_1488.Yaw = local_1488.Yaw + pTVar17->Yaw;
        local_1488.Roll = local_1488.Roll + pTVar17->Roll;
        pTVar18 = (TQuatRotationMatrix<double> *)
                  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_bd8,&local_1488)
        ;
      }
      local_b58.M[0][0] = *(double *)pTVar18;
      local_b58.M[0][1] = *(double *)&pTVar18->field_0x8;
      local_b58.M[0][2] = *(double *)&pTVar18->field_0x10;
      local_b58.M[0][3] = *(double *)&pTVar18->field_0x18;
      local_b58.M[1][0] = *(double *)&pTVar18->field_0x20;
      local_b58.M[1][1] = *(double *)&pTVar18->field_0x28;
      local_b58.M[1][2] = *(double *)&pTVar18->field_0x30;
      local_b58.M[1][3] = *(double *)&pTVar18->field_0x38;
      local_b58.M[2][0] = *(double *)&pTVar18->field_0x40;
      local_b58.M[2][1] = *(double *)&pTVar18->field_0x48;
      local_b58.M[2][2] = *(double *)&pTVar18->field_0x50;
      local_b58.M[2][3] = *(double *)&pTVar18->field_0x58;
      local_b58.M[3][0] = *(double *)&pTVar18->field_0x60;
      local_b58.M[3][1] = *(double *)&pTVar18->field_0x68;
      local_b58.M[3][2] = *(double *)&pTVar18->field_0x70;
      local_b58.M[3][3] = *(double *)&pTVar18->field_0x78;
    }
    else {
      __libm_sse2_sincos_();
      dVar36 = (double)(this->Source).LockedAxis.field0_0x0._s_0.Y * extraout_XMM0_Qa;
      dVar48 = (double)(pTVar20->field0_0x0)._s_0.X * extraout_XMM0_Qa;
      dVar56 = (double)(this->Source).LockedAxis.field0_0x0._s_0.Z * extraout_XMM0_Qa;
      auVar42._8_4_ = SUB84(dVar36,0);
      auVar42._0_8_ = dVar36;
      auVar42._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar31._8_4_ = SUB84(dVar56,0);
      auVar31._0_8_ = dVar56;
      auVar31._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
      dVar51 = dVar48 * (double)CONCAT44(uVar60,uVar59) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_1468 * extraout_XMM0_Qb +
               dVar36 * (double)CONCAT44(uVar45,uVar43) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar56 * uStack_1460 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar55 = dVar48 * (double)CONCAT44(uVar45,uVar43) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               uStack_1460 * extraout_XMM0_Qb +
               auVar42._8_8_ * (double)CONCAT44(uVar60,uVar59) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar31._8_8_ * local_1468 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar44 = SUB84(dVar55,0);
      uVar46 = (undefined4)((ulonglong)dVar55 >> 0x20);
      local_14b8 = dVar48 * uStack_1460 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                   (double)CONCAT44(uVar45,uVar43) * extraout_XMM0_Qb +
                   dVar36 * local_1468 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   dVar56 * (double)CONCAT44(uVar60,uVar59) *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dStack_14b0 = dVar48 * local_1468 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                    (double)CONCAT44(uVar60,uVar59) * extraout_XMM0_Qb +
                    dVar36 * uStack_1460 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar56 * (double)CONCAT44(uVar45,uVar43) *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_fe8._8_4_ = uVar44;
      local_fe8._0_8_ = dVar51;
      local_fe8._12_4_ = uVar46;
      local_14c8._8_4_ = uVar44;
      local_14c8._0_8_ = dVar51;
      local_14c8._12_4_ = uVar46;
      local_fd8 = local_14b8;
      dStack_fd0 = dStack_14b0;
    }
  }
  else {
    dVar21 = (double)(float)*(undefined8 *)&param_4->field0_0x0;
    local_1530._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)&param_4->field0_0x0 >> 0x20);
    local_1530._s_0.Z = (double)(param_4->field0_0x0)._s_0.Z;
    dVar56 = local_9e8;
    dVar57 = local_9f8;
    local_1530._s_0.X = dVar21;
    dVar35 = local_1518;
    if (*(char *)((longlong)&(this->Source)._padding_ + 4) != '\0') {
      dVar57 = local_ab8 * local_1518 + dVar55 * local_9f8 + dVar36 * local_9e8 +
               param_1->M[3][0] * __real_3ff0000000000000;
      dStack_1510 = dStack_ab0 * local_1518 + dVar58 * local_9f8 + dVar51 * local_9e8 +
                    param_1->M[3][1] * __real_3ff0000000000000;
      dVar56 = param_1->M[1][2] * local_1518 + param_1->M[0][2] * local_9f8 +
               param_1->M[2][2] * local_9e8 + param_1->M[3][2] * __real_3ff0000000000000;
      auVar11._4_8_ = param_1->M[3][3] * __real_3ff0000000000000;
      auVar11._0_4_ = (int)((ulonglong)dVar57 >> 0x20);
      auVar22._0_8_ = auVar11._0_8_ << 0x20;
      auVar22._8_4_ = SUB84(dStack_1510,0);
      auVar22._12_4_ = (int)((ulonglong)dStack_1510 >> 0x20);
      dVar35 = auVar22._8_8_;
      if (4 < this->CameraFacingOption) {
        if (this->CameraFacingOption < 9) goto LAB_1481d72c7;
        if ((((double)CONCAT44(local_ad8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               local_ad8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3e45798ee0000000) &&
            ((double)CONCAT44(local_ad8._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              local_ad8._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             __real_3e45798ee0000000)) &&
           ((double)CONCAT44(*(uint *)((longlong)param_1->M[0] + 0x14) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             *(uint *)(param_1->M[0] + 2) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3e45798ee0000000)) {
          local_1380._s_0.Z = param_1->M[1][2];
          local_1518 = dVar35;
          local_1380._s_0.X = local_ab8;
          local_1380._s_0.Y = dStack_ab0;
          bVar13 = UE::Math::TVector<double>::IsNearlyZero
                             ((TVector<double> *)&local_1380._s_0,__real_3e45798ee0000000);
          dVar35 = local_1518;
          if (bVar13) {
            local_1368._s_0.Z = param_1->M[2][2];
            local_1368._s_0.X = dVar36;
            local_1368._s_0.Y = dVar51;
            bVar13 = UE::Math::TVector<double>::IsNearlyZero
                               ((TVector<double> *)&local_1368._s_0,dVar8);
            dVar35 = local_1518;
            if (bVar13) {
              UE::Math::TMatrix<double>::ErrorEnsure
                        (
                        L"TMatrix<T>::InverseFast(), trying to invert a NIL matrix, this results in NaNs! Use Inverse() instead."
                        );
              dVar35 = local_1518;
            }
          }
        }
        local_1518 = dVar35;
        bVar13 = FMath::MatrixInverse(&local_4d8,(TMatrix<double> *)local_ad8);
        if (!bVar13) {
          UE::Math::TMatrix<double>::ErrorEnsure
                    (
                    L"TMatrix<T>::InverseFast(), trying to invert a non-invertible matrix, this results in NaNs! Use Inverse() instead."
                    );
        }
        pTVar15 = UE::Math::TMatrix<double>::GetTransposed(&local_4d8,&local_e58);
        auVar37._8_4_ = SUB84(local_1530._s_0.Z,0);
        auVar37._0_8_ = local_1530._s_0.Z;
        auVar37._12_4_ = (int)((ulonglong)local_1530._16_8_ >> 0x20);
        dVar36 = pTVar15->M[1][2] * local_1530._s_0.Y;
        dVar21 = pTVar15->M[1][0] * local_1530._s_0.Y + pTVar15->M[0][0] * local_1530._s_0.X +
                 local_1530._s_0.Z * pTVar15->M[2][0] + pTVar15->M[3][0] * 0.0;
        local_1530._s_0.Y =
             pTVar15->M[1][1] * local_1530._s_0.Y + pTVar15->M[0][1] * local_1530._s_0.X +
             auVar37._8_8_ * pTVar15->M[2][1] + pTVar15->M[3][1] * 0.0;
        local_1530._s_0.Z =
             dVar36 + pTVar15->M[0][2] * local_1530._s_0.X + pTVar15->M[2][2] * local_1530._s_0.Z +
             pTVar15->M[3][2] * 0.0;
        dVar35 = local_1518;
      }
      local_1518 = dVar35;
      local_ac8 = 0.0;
      dStack_ac0 = 0.0;
      local_aa8 = 0.0;
      dStack_aa0 = 0.0;
      local_a78 = 0.0;
      dStack_a70 = 0.0;
      local_ad8 = auVar12;
      local_ab8 = ___xmm_3ff00000000000000000000000000000;
      dStack_ab0 = _UNK_15061cbc8;
      local_a98 = 0.0;
      dStack_a90 = 0.0;
      local_a88 = auVar12;
      local_a68 = ___xmm_3ff00000000000000000000000000000;
      dStack_a60 = _UNK_15061cbc8;
      local_1530._s_0.X = dVar21;
      dVar35 = local_1518;
      local_9f8 = dVar57;
      local_9f0 = local_1518;
      local_9e8 = dVar56;
    }
LAB_1481d72c7:
    local_1518 = dVar35;
    dVar36 = local_1530._s_0.Y * local_1530._s_0.Y + local_1530._s_0.X * local_1530._s_0.X +
             local_1530._s_0.Z * local_1530._s_0.Z;
    if (dVar8 < dVar36) {
      local_1218 = __real_3ff0000000000000 / SQRT(dVar36);
      local_1530._s_0.Z = local_1530._s_0.Z * local_1218;
      local_1530._s_0.X = local_1530._s_0.X * local_1218;
      local_1530._s_0.Y = local_1530._s_0.Y * local_1218;
    }
    if (this->bFaceCameraDirectionRatherThanPosition == 0) {
      local_1538 = (param_10->field0_0x0)._s_0.Z - dVar56;
      dVar57 = (param_10->field0_0x0)._s_0.X - dVar57;
      dVar36 = (param_10->field0_0x0)._s_0.Y - local_1518;
    }
    else {
      dVar57 = (double)(float)((uint)(param_11->field0_0x0)._s_0.X ^
                              __xmm_80000000800000008000000080000000);
      dVar36 = (double)(float)((uint)(param_11->field0_0x0)._s_0.Y ^
                              __xmm_80000000800000008000000080000000);
      local_1538 = (undefined8)
                   (float)((uint)(param_11->field0_0x0)._s_0.Z ^
                          __xmm_80000000800000008000000080000000);
    }
    dVar51 = dVar57 * dVar57 + dVar36 * dVar36 + (double)local_1538 * (double)local_1538;
    if (__real_3e45798ee0000000 < dVar51) {
      local_1210 = __real_3ff0000000000000 / SQRT(dVar51);
      local_1538 = (double)local_1538 * local_1210;
      dVar57 = dVar57 * local_1210;
      dVar36 = dVar36 * local_1210;
    }
    if (dVar57 * dVar57 + dVar36 * dVar36 + (double)local_1538 * (double)local_1538 <
        __real_3fe0000000000000) {
      local_1538 = 0.0;
      dVar36 = auVar12._8_8_;
      dVar57 = dVar48;
    }
    uVar4 = local_1538;
    unique0x10000542 = SUB84(dVar36,0);
    local_1548 = dVar57;
    unique0x10000546 = (int)((ulonglong)dVar36 >> 0x20);
    bVar5 = this->CameraFacingOption;
    bVar13 = true;
    if (bVar5 == 0) {
      local_12c8._s_0.Z = 0.0;
      local_12c8._0_16_ = auVar12;
      pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                          (&local_ef8,(TVector<double> *)&local_12c8._s_0,
                           (TVector<double> *)&local_1548);
      dVar8 = pTVar14->X;
      dVar58 = pTVar14->Y;
      dVar57 = pTVar14->Z;
      dVar35 = pTVar14->W;
      unique0x1000491c = pTVar14->Z;
      unique0x10004924 = pTVar14->W;
      local_14a8._0_8_ = dVar8;
      local_14a8._8_8_ = dVar58;
      __libm_sse2_sincos_();
      dVar36 = extraout_XMM0_01._0_8_;
      dVar51 = dVar36 * dStack_1540;
      dVar56 = dVar36 * local_1548;
      dVar21 = extraout_XMM0_01._8_8_;
      dVar36 = dVar36 * (double)local_1538;
      auVar29._8_4_ = extraout_XMM0_01._8_4_;
      auVar29._0_8_ = dVar21;
      auVar29._12_4_ = extraout_XMM0_01._12_4_;
      auVar41._8_4_ = SUB84(dVar51,0);
      auVar41._0_8_ = dVar51;
      auVar41._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
      auVar30._8_4_ = SUB84(dVar36,0);
      auVar30._0_8_ = dVar36;
      auVar30._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar55 = dVar56 * dVar35 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar21 * dVar8 +
               dVar51 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar36 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar48 = dVar56 * dVar57 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar29._8_8_ * dVar58 +
               auVar41._8_8_ * dVar35 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar30._8_8_ * dVar8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar43 = SUB84(dVar48,0);
      uVar45 = (undefined4)((ulonglong)dVar48 >> 0x20);
      local_14b8 = dVar56 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar21 * dVar57 +
                   dVar51 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + dVar36 * dVar35 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dStack_14b0 = dVar56 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                    + dVar21 * dVar35 +
                    dVar51 * dVar58 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    dVar36 * dVar57 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_1028._8_4_ = uVar43;
      local_1028._0_8_ = dVar55;
      local_1028._12_4_ = uVar45;
      local_14c8._8_4_ = uVar43;
      local_14c8._0_8_ = dVar55;
      local_14c8._12_4_ = uVar45;
      local_1018 = local_14b8;
      dStack_1010 = dStack_14b0;
    }
    else {
      if ((byte)(bVar5 - 9) < 4) {
        if ((((double)CONCAT44((uint)((ulonglong)local_1530._0_8_ >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(local_1530._s_0.X,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              __real_3f1a36e2e0000000) &&
            (uVar49 = SUB84(local_1530._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar50 = (uint)((ulonglong)local_1530._8_8_ >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            (double)CONCAT44(uVar50,uVar49) < __real_3f1a36e2e0000000 ||
            (double)CONCAT44(uVar50,uVar49) == __real_3f1a36e2e0000000)) &&
           (uVar49 = SUB84(local_1530._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar50 = (uint)((ulonglong)local_1530._16_8_ >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           (double)CONCAT44(uVar50,uVar49) < __real_3f1a36e2e0000000 ||
           (double)CONCAT44(uVar50,uVar49) == __real_3f1a36e2e0000000)) {
          bVar13 = false;
        }
        local_12f8._s_0.Z = 0.0;
        local_12f8._0_16_ = auVar12;
        pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_f38,(TVector<double> *)&local_12f8._s_0,
                             (TVector<double> *)&local_1530._s_0);
        local_14a8._0_8_ = pTVar14->X;
        local_14a8._8_8_ = pTVar14->Y;
        unique0x100048ec = pTVar14->Z;
        unique0x100048f4 = pTVar14->W;
        uVar43 = *(undefined4 *)&pTVar14->X;
        uVar45 = *(undefined4 *)((longlong)&pTVar14->X + 4);
        uVar59 = *(undefined4 *)&pTVar14->Y;
        uVar60 = *(undefined4 *)((longlong)&pTVar14->Y + 4);
        dVar57 = local_1548;
        uVar9 = local_1530._s_0.X;
        uVar10 = local_1530._s_0.Y;
        dVar36 = dStack_1540;
        local_13f8._s_0.Z = (double)local_1538;
        dVar51 = pTVar14->Z;
        dVar55 = pTVar14->W;
        local_1518 = local_1530._s_0.Z;
        local_1458._s_0.Z = (double)local_1538;
      }
      else if (bVar5 < 5) {
        local_12e0._s_0.Z = 0.0;
        local_12e0._0_16_ = auVar12;
        pTVar14 = UE::Math::TQuat<double>::FindBetweenNormals
                            (&local_f18,(TVector<double> *)&local_12e0._s_0,
                             (TVector<double> *)&local_1548);
        local_14a8._0_8_ = pTVar14->X;
        local_14a8._8_8_ = pTVar14->Y;
        unique0x1000490c = pTVar14->Z;
        unique0x10004914 = pTVar14->W;
        local_1518 = (double)local_1538;
        local_1458._s_0.Z = (double)local_1538;
        uVar43 = *(undefined4 *)&pTVar14->X;
        uVar45 = *(undefined4 *)((longlong)&pTVar14->X + 4);
        uVar59 = *(undefined4 *)&pTVar14->Y;
        uVar60 = *(undefined4 *)((longlong)&pTVar14->Y + 4);
        dVar57 = 0.0;
        uVar9 = local_1548;
        uVar10 = dStack_1540;
        dVar36 = 0.0;
        local_13f8._s_0.Z = __real_3ff0000000000000;
        dVar51 = pTVar14->Z;
        dVar55 = pTVar14->W;
      }
      else {
        local_1518 = (double)(this->Source).LockedAxis.field0_0x0._s_0.Z;
        uVar9 = (undefined8)(this->Source).LockedAxis.field0_0x0._s_0.X;
        uVar10 = (undefined8)(this->Source).LockedAxis.field0_0x0._s_0.Y;
        if (*(char *)((longlong)&(this->Source)._padding_ + 4) == '\0') {
          uVar43 = (undefined4)local_1468;
          uVar45 = local_1468._4_4_;
          uVar59 = (undefined4)uStack_1460;
          uVar60 = uStack_1460._4_4_;
          local_13f8._s_0.Z = (double)local_1538;
          dVar51 = local_1508;
          dVar55 = uStack_1500;
          local_1458._s_0.Z = (double)local_1538;
        }
        else {
          pTVar15 = UE::Math::TMatrix<double>::GetTransposed
                              ((TMatrix<double> *)local_ad8,&local_dd8);
          dVar51 = pTVar15->M[0][1] * dVar57;
          auVar38._8_4_ = (int)uVar4;
          auVar38._0_8_ = uVar4;
          auVar38._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
          local_13f8._s_0.Z =
               pTVar15->M[0][2] * dVar57 + pTVar15->M[1][2] * dVar36 +
               pTVar15->M[2][2] * (double)uVar4 + pTVar15->M[3][2] * 0.0;
          uVar43 = (undefined4)local_1468;
          uVar45 = local_1468._4_4_;
          uVar59 = (undefined4)uStack_1460;
          uVar60 = uStack_1460._4_4_;
          dVar57 = dVar36 * pTVar15->M[1][0] + pTVar15->M[0][0] * dVar57 +
                   (double)uVar4 * pTVar15->M[2][0] + pTVar15->M[3][0] * 0.0;
          dVar36 = dVar36 * pTVar15->M[1][1] + dVar51 + auVar38._8_8_ * pTVar15->M[2][1] +
                   pTVar15->M[3][1] * 0.0;
          dVar51 = local_1508;
          dVar55 = uStack_1500;
        }
      }
      dVar48 = (double)uVar10 * dVar36 + (double)uVar9 * dVar57 + local_1518 * local_13f8._s_0.Z;
      local_13f8._s_0.X = dVar57 - (double)uVar9 * dVar48;
      local_13f8._s_0.Z = local_13f8._s_0.Z - local_1518 * dVar48;
      local_13f8._s_0.Y = dVar36 - (double)uVar10 * dVar48;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_13f8._s_0,__real_3e45798ee0000000);
      local_1458._s_0.X = local_14f8;
      local_1458._s_0.Y = dStack_14f0;
      local_1458._s_0.Z = local_1418;
      pTVar16 = UE::Math::TQuat<double>::RotateVector
                          ((TQuat<double> *)local_14a8,&local_f78,
                           (TVector<double> *)&local_1458._s_0);
      UE::Math::TQuat<double>::FindBetweenNormals
                (&local_1168,pTVar16,(TVector<double> *)&local_13f8._s_0);
      dVar36 = local_1168.X;
      auVar52._8_4_ = local_1168.X._0_4_;
      auVar52._0_8_ = dVar36;
      auVar52._12_4_ = local_1168.X._4_4_;
      dVar8 = local_1168.W;
      dVar48 = local_1168.Y;
      dVar56 = local_1168.Z;
      auVar23._8_4_ = local_1168.W._0_4_;
      auVar23._0_8_ = dVar8;
      auVar23._12_4_ = local_1168.W._4_4_;
      auVar24._8_4_ = local_1168.Z._0_4_;
      auVar24._0_8_ = dVar56;
      auVar24._12_4_ = local_1168.Z._4_4_;
      local_1508 = dVar36 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar8 * (double)CONCAT44(uVar45,uVar43) +
                   dVar51 * dVar48 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar56 * (double)CONCAT44(uVar60,uVar59) *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      uStack_1500 = auVar52._8_8_ * dVar51 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    auVar23._8_8_ * (double)CONCAT44(uVar60,uVar59) +
                    dVar55 * dVar48 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar24._8_8_ * (double)CONCAT44(uVar45,uVar43) *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar58 = dVar36 * (double)CONCAT44(uVar60,uVar59) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar51 * dVar8 +
               dVar48 * (double)CONCAT44(uVar45,uVar43) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar56 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar36 = dVar36 * (double)CONCAT44(uVar45,uVar43) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar55 * dVar8 +
               dVar48 * (double)CONCAT44(uVar60,uVar59) *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar56 * dVar51 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar43 = SUB84(dVar36,0);
      uVar45 = (undefined4)((ulonglong)dVar36 >> 0x20);
      local_1078._8_4_ = uVar43;
      local_1078._0_8_ = dVar58;
      local_1078._12_4_ = uVar45;
      uStack_1490 = uVar43;
      unique0x100022be = dVar58;
      uStack_148c = uVar45;
      local_14a8._0_8_ = local_1508;
      local_14a8._8_8_ = uStack_1500;
      local_1088 = local_1508;
      dStack_1080 = uStack_1500;
      if (this->bApplyParticleRotationAsSpin == 0) {
        __libm_sse2_sincos_();
        dVar56 = extraout_XMM0_00._0_8_;
        dVar8 = dVar56 * local_1548;
        dVar51 = dVar56 * dStack_1540;
        dVar57 = extraout_XMM0_00._8_8_;
        dVar56 = dVar56 * (double)local_1538;
        auVar54._8_4_ = uVar43;
        auVar54._0_8_ = dVar58;
        auVar54._12_4_ = uVar45;
        auVar27._8_4_ = extraout_XMM0_00._8_4_;
        auVar27._0_8_ = dVar57;
        auVar27._12_4_ = extraout_XMM0_00._12_4_;
        auVar40._8_4_ = SUB84(dVar51,0);
        auVar40._0_8_ = dVar51;
        auVar40._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        auVar28._8_4_ = SUB84(dVar56,0);
        auVar28._0_8_ = dVar56;
        auVar28._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
        dVar55 = dVar8 * auVar54._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar57 * local_1508 +
                 dVar51 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar56 * uStack_1500 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar48 = dVar8 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar27._8_8_ * uStack_1500 +
                 auVar40._8_8_ * dVar36 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar28._8_8_ * local_1508 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar43 = SUB84(dVar48,0);
        uVar45 = (undefined4)((ulonglong)dVar48 >> 0x20);
        local_14b8 = dVar8 * uStack_1500 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar57 * dVar58 +
                     dVar51 * local_1508 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar56 * auVar54._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dStack_14b0 = dVar8 * local_1508 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar57 * dVar36 +
                      dVar51 * uStack_1500 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar56 * dVar58 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_1048._8_4_ = uVar43;
        local_1048._0_8_ = dVar55;
        local_1048._12_4_ = uVar45;
        local_14c8._8_4_ = uVar43;
        local_14c8._0_8_ = dVar55;
        local_14c8._12_4_ = uVar45;
        local_1038 = local_14b8;
        dStack_1030 = dStack_14b0;
      }
      else if (bVar13) {
        __libm_sse2_sincos_();
        dVar56 = extraout_XMM0._0_8_;
        dVar8 = dVar56 * (double)uVar9;
        dVar51 = dVar56 * (double)uVar10;
        dVar57 = extraout_XMM0._8_8_;
        dVar56 = dVar56 * local_1518;
        auVar53._8_4_ = uVar43;
        auVar53._0_8_ = dVar58;
        auVar53._12_4_ = uVar45;
        auVar25._8_4_ = extraout_XMM0._8_4_;
        auVar25._0_8_ = dVar57;
        auVar25._12_4_ = extraout_XMM0._12_4_;
        auVar39._8_4_ = SUB84(dVar51,0);
        auVar39._0_8_ = dVar51;
        auVar39._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
        auVar26._8_4_ = SUB84(dVar56,0);
        auVar26._0_8_ = dVar56;
        auVar26._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
        dVar55 = dVar8 * auVar53._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar57 * local_1508 +
                 dVar51 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar56 * uStack_1500 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar48 = dVar8 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar25._8_8_ * uStack_1500 +
                 auVar39._8_8_ * dVar36 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar26._8_8_ * local_1508 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar43 = SUB84(dVar48,0);
        uVar45 = (undefined4)((ulonglong)dVar48 >> 0x20);
        local_14b8 = dVar8 * uStack_1500 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar57 * dVar58 +
                     dVar51 * local_1508 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar56 * auVar53._8_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dStack_14b0 = dVar8 * local_1508 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar57 * dVar36 +
                      dVar51 * uStack_1500 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar56 * dVar58 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_1068._8_4_ = uVar43;
        local_1068._0_8_ = dVar55;
        local_1068._12_4_ = uVar45;
        local_14c8._8_4_ = uVar43;
        local_14c8._0_8_ = dVar55;
        local_14c8._12_4_ = uVar45;
        local_1058 = local_14b8;
        dStack_1050 = dStack_14b0;
      }
    }
  }
  uVar43 = SUB84(__real_3ff0000000000000,0);
  uVar45 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
LAB_1481d84bc:
  if (this->bApplyPreRotation == 0) {
    if (this->bUseMeshLockedAxis == 0 && this->bUseCameraFacing == 0) {
      VectorMatrixMultiply(&local_658,&local_9d8,&local_b58);
      VectorMatrixMultiply(&local_7d8,&local_658,(TMatrix<double> *)local_a58);
      param_12->M[0][0] = local_7d8.M[0][0];
      param_12->M[0][1] = local_7d8.M[0][1];
      param_12->M[0][2] = local_7d8.M[0][2];
      param_12->M[0][3] = local_7d8.M[0][3];
      param_12->M[1][0] = local_7d8.M[1][0];
      param_12->M[1][1] = local_7d8.M[1][1];
      param_12->M[1][2] = local_7d8.M[1][2];
      param_12->M[1][3] = local_7d8.M[1][3];
      param_12->M[2][0] = local_7d8.M[2][0];
      param_12->M[2][1] = local_7d8.M[2][1];
      param_12->M[2][2] = local_7d8.M[2][2];
      param_12->M[2][3] = local_7d8.M[2][3];
      local_8d8.M[3][0] = local_7d8.M[3][0];
      local_8d8.M[3][1] = local_7d8.M[3][1];
      local_8d8.M[3][2] = local_7d8.M[3][2];
      local_8d8.M[3][3] = local_7d8.M[3][3];
    }
    else {
      pTVar18 = UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
                          (&local_158,(TQuat<double> *)local_14c8);
      VectorMatrixMultiply(&local_5d8,&local_9d8,(TMatrix<double> *)pTVar18);
      VectorMatrixMultiply(&local_558,&local_5d8,&local_b58);
      VectorMatrixMultiply(&local_758,&local_558,(TMatrix<double> *)local_a58);
      param_12->M[0][0] = local_758.M[0][0];
      param_12->M[0][1] = local_758.M[0][1];
      param_12->M[0][2] = local_758.M[0][2];
      param_12->M[0][3] = local_758.M[0][3];
      param_12->M[1][0] = local_758.M[1][0];
      param_12->M[1][1] = local_758.M[1][1];
      param_12->M[1][2] = local_758.M[1][2];
      param_12->M[1][3] = local_758.M[1][3];
      param_12->M[2][0] = local_758.M[2][0];
      param_12->M[2][1] = local_758.M[2][1];
      param_12->M[2][2] = local_758.M[2][2];
      param_12->M[2][3] = local_758.M[2][3];
      local_8d8.M[3][0] = local_758.M[3][0];
      local_8d8.M[3][1] = local_758.M[3][1];
      local_8d8.M[3][2] = local_758.M[3][2];
      local_8d8.M[3][3] = local_758.M[3][3];
    }
  }
  else {
    local_1230._s_0.X = (double)(float)*(undefined8 *)&param_6->field0_0x0;
    local_1230._s_0.Y = (double)(float)((ulonglong)*(undefined8 *)&param_6->field0_0x0 >> 0x20);
    local_1230._s_0.Z = (double)(param_6->field0_0x0)._s_0.Z;
    UE::Math::TRotator<double>::MakeFromEuler(local_1128,(TVector<double> *)&local_1230._s_0);
    UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
              ((TRotationMatrix<double> *)&local_6d8,local_1128);
    if (this->bUseMeshLockedAxis == 0 && this->bUseCameraFacing == 0) {
      VectorMatrixMultiply(&local_458,&local_6d8,&local_9d8);
      VectorMatrixMultiply(&local_3d8,&local_458,&local_b58);
      VectorMatrixMultiply(&local_8d8,&local_3d8,(TMatrix<double> *)local_a58);
      param_12->M[0][0] = local_8d8.M[0][0];
      param_12->M[0][1] = local_8d8.M[0][1];
      param_12->M[0][2] = local_8d8.M[0][2];
      param_12->M[0][3] = local_8d8.M[0][3];
      param_12->M[1][0] = local_8d8.M[1][0];
      param_12->M[1][1] = local_8d8.M[1][1];
      param_12->M[1][2] = local_8d8.M[1][2];
      param_12->M[1][3] = local_8d8.M[1][3];
      param_12->M[2][0] = local_8d8.M[2][0];
      param_12->M[2][1] = local_8d8.M[2][1];
      param_12->M[2][2] = local_8d8.M[2][2];
      param_12->M[2][3] = local_8d8.M[2][3];
    }
    else {
      VectorMatrixMultiply(&local_358,&local_6d8,&local_9d8);
      pTVar18 = UE::Math::TQuatRotationMatrix<double>::TQuatRotationMatrix<double>
                          (&local_1d8,(TQuat<double> *)local_14c8);
      VectorMatrixMultiply(&local_2d8,&local_358,(TMatrix<double> *)pTVar18);
      VectorMatrixMultiply(&local_258,&local_2d8,&local_b58);
      VectorMatrixMultiply(&local_858,&local_258,(TMatrix<double> *)local_a58);
      param_12->M[0][0] = local_858.M[0][0];
      param_12->M[0][1] = local_858.M[0][1];
      param_12->M[0][2] = local_858.M[0][2];
      param_12->M[0][3] = local_858.M[0][3];
      param_12->M[1][0] = local_858.M[1][0];
      param_12->M[1][1] = local_858.M[1][1];
      param_12->M[1][2] = local_858.M[1][2];
      param_12->M[1][3] = local_858.M[1][3];
      param_12->M[2][0] = local_858.M[2][0];
      param_12->M[2][1] = local_858.M[2][1];
      param_12->M[2][2] = local_858.M[2][2];
      param_12->M[2][3] = local_858.M[2][3];
      local_8d8.M[3][0] = local_858.M[3][0];
      local_8d8.M[3][1] = local_858.M[3][1];
      local_8d8.M[3][2] = local_858.M[3][2];
      local_8d8.M[3][3] = local_858.M[3][3];
    }
  }
  param_12->M[3][0] = local_8d8.M[3][0];
  param_12->M[3][1] = local_8d8.M[3][1];
  param_12->M[3][2] = local_8d8.M[3][2];
  param_12->M[3][3] = local_8d8.M[3][3];
  dVar36 = (double)(param_9->field0_0x0)._s_0.X;
  local_8f0 = (double)(param_9->field0_0x0)._s_0.Y;
  local_8e8 = (double)(param_9->field0_0x0)._s_0.Z;
  local_8f8 = dVar36;
  if (*(char *)((longlong)&(this->Source)._padding_ + 4) == '\0') {
    dVar51 = local_aa8 * local_8f0;
    local_8f8 = local_ab8 * local_8f0 + (double)local_ad8._0_8_ * dVar36 + local_a98 * local_8e8 +
                local_a78 * 0.0;
    local_8f0 = dStack_ab0 * local_8f0 + (double)local_ad8._8_8_ * dVar36 + dStack_a90 * local_8e8 +
                dStack_a70 * 0.0;
    local_8e8 = dVar51 + local_ac8 * dVar36 + (double)local_a88._0_8_ * local_8e8 + local_a68 * 0.0;
  }
  local_938 = ___xmm_3ff00000000000000000000000000000;
  dStack_930 = _UNK_15061cbc8;
  local_918 = 0.0;
  dStack_910 = 0.0;
  local_8e0 = (double)CONCAT44(uVar45,uVar43);
  local_958 = auVar12;
  local_948 = 0.0;
  dStack_940 = 0.0;
  local_928 = 0.0;
  dStack_920 = 0.0;
  local_908 = auVar12;
  VectorMatrixMultiply(param_12,param_12,(TMatrix<double> *)local_958);
  if ((*(char *)((longlong)&(this->Source)._padding_ + 4) == '\0') ||
     (VectorMatrixMultiply(param_12,param_12,(TMatrix<double> *)local_ad8),
     *(char *)((longlong)&(this->Source)._padding_ + 4) == '\0')) {
    local_1438[0]._0_8_ = *(undefined8 *)((longlong)&(this->Source)._padding_ + 4);
    local_1438[0]._s_0.Z = *(float *)((longlong)&(this->Source)._padding_ + 4);
    pTVar19 = local_1438;
  }
  else {
    local_13c8._s_0.X = param_1->M[3][0];
    local_13c8._s_0.Y = param_1->M[3][1];
    local_13c8._s_0.Z = param_1->M[3][2];
    pTVar19 = &TLargeWorldRenderScalar<double>::GetTileFor
                         (&local_13a8,(TVector<double> *)&local_13c8._s_0)->field0_0x0;
  }
  dVar51 = __real_4140000000000000;
  uVar4 = *(undefined8 *)&(pTVar19->_s_0).X;
  fVar7 = (pTVar19->_s_0).Z;
  param_12->M[3][0] = param_12->M[3][0] - (double)(float)uVar4 * __real_4140000000000000;
  dVar36 = param_12->M[3][2];
  param_12->M[3][1] = param_12->M[3][1] - (double)(float)((ulonglong)uVar4 >> 0x20) * dVar51;
  param_12->M[3][2] = dVar36 - (double)fVar7 * dVar51;
  return;
}

// GatherSimpleLights @ 1481f40e0

void __thiscall
FDynamicMeshEmitterData::GatherSimpleLights
          (FDynamicMeshEmitterData *this,FParticleSystemSceneProxy *param_1,
          FSceneViewFamily *param_2,FSimpleLightArray *param_3)

{
  GatherParticleLightData
            ((FDynamicSpriteEmitterReplayDataBase *)&this->Source,
             (TMatrix<double> *)&param_1->field_0x110,param_2,param_3);
  return;
}

// GetDynamicMeshElementsEmitter @ 1481f74f0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FDynamicMeshEmitterData::GetDynamicMeshElementsEmitter
          (FDynamicMeshEmitterData *this,FParticleSystemSceneProxy *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,int param_4,FMeshElementCollector *param_5)

{
  FMeshParticleVertexFactory *this_00;
  longlong *plVar1;
  char cVar2;
  EShaderPlatform EVar3;
  FStaticMeshLODResources *this_01;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  FRHIResource *this_02;
  FRHIResource *pFVar5;
  ForElementType<FMaterialRenderProxy_*> FVar6;
  FStaticMeshSectionArray *pFVar7;
  FAdditionalStaticMeshIndexBuffers *pFVar8;
  FName FVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  Type TVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ESceneDepthPriorityGroup EVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_MeshRenderingTime> FVar22;
  FRHICommandListBase *pFVar23;
  FStaticMeshRenderData *pFVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar26;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  FShaderParametersMetadata *pFVar28;
  TRefCountPtr<FRHIUniformBuffer> TVar29;
  FGlobalDynamicVertexBuffer *this_03;
  FGlobalDynamicVertexBufferAllocation *pFVar30;
  uchar *puVar31;
  TStatId TVar32;
  FRHIUniformBuffer *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_MeshParticlePolys> FVar34;
  FThreadStats *this_04;
  FThreadStatsPool *this_05;
  FPrimitiveDrawInterface *pFVar35;
  uint uVar36;
  int iVar37;
  ForElementType<FMaterialRenderProxy_*> FVar38;
  longlong lVar39;
  ForElementType<FMeshBatchElement> FVar40;
  float *pfVar41;
  ForElementType<FMeshBatchElement> FVar42;
  FStaticMeshSectionArray *pFVar43;
  uchar *puVar44;
  FVertexBuffer *pFVar45;
  undefined1 auStackY_338 [32];
  int local_2d4;
  longlong local_2c8;
  uint local_2c0;
  FName local_298;
  longlong local_290;
  FColor_u_0 local_280 [2];
  FName local_278;
  byte local_270;
  FName local_268;
  FName local_260;
  FName local_250;
  FStaticMeshSectionArray *local_248;
  longlong local_240;
  FName local_238;
  FRHIResource *local_230;
  FName local_228 [8];
  FStatMessage local_1e8;
  undefined1 local_1d8 [8];
  longlong lStack_1d0;
  int local_1c8;
  int local_1c4;
  uint local_1c0;
  uint local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  FSourceLocation local_198;
  FGlobalDynamicVertexBufferAllocation local_178;
  FName local_158;
  FName local_150;
  longlong local_148;
  FString local_140;
  FString local_130 [2];
  undefined8 local_110;
  FGlobalDynamicVertexBufferAllocation local_108;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_338;
  FVar22 = StatPtr_STAT_MeshRenderingTime;
  if (StatPtr_STAT_MeshRenderingTime == (FThreadSafeStaticStat<FStat_STAT_MeshRenderingTime>)0x0) {
    pFVar21 = ::FName::FName(&local_150,"STAT_MeshRenderingTime");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_MeshRenderingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshRenderingTime,*pFVar21,
                        L"Mesh Render Time RT","STATGROUP_Particles","STATCAT_Advanced",L"Particles"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar11 = false;
  bVar12 = false;
  local_260.ComparisonIndex.Value = 0;
  local_260.Number = 0;
  local_298 = *(FName *)FVar22;
  bVar13 = false;
  bVar14 = false;
  if ((local_298.ComparisonIndex.Value.Value == 0) && (local_298.Number == 0)) {
LAB_1481f7685:
    bVar12 = bVar14;
    bVar11 = bVar13;
    bVar13 = false;
    local_298 = local_260;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_280[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_280[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar12 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = local_298.ComparisonIndex.Value.Value;
        local_268.Number = local_298.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x492);
        bVar11 = true;
        bVar12 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f7685;
    FThreadStats::AddMessage(local_298,CycleScopeStart);
    bVar13 = true;
  }
  if (((this->_padding_ & 2) == 0) || (GFXCascadeMeshRenderingEnabled == false)) goto LAB_1481f878e;
  cVar2 = (char)(this->Source)._padding_;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      pcVar10 = *(code **)(this->_padding_ + 0x60);
      pFVar35 = FMeshElementCollector::GetPDI(param_5,param_4);
      (*pcVar10)(this,param_1,pFVar35,param_2);
    }
    else if (cVar2 == '\x02') {
      pcVar10 = *(code **)(this->_padding_ + 0x60);
      pFVar35 = FMeshElementCollector::GetPDI(param_5,param_4);
      (*pcVar10)(this,param_1,pFVar35,param_2);
    }
    goto LAB_1481f878e;
  }
  pFVar23 = (FRHICommandListBase *)FMeshElementCollector::GetRHICommandList(param_5);
  TVar16 = FSceneViewFamily::GetFeatureLevel(param_3);
  uVar17 = (uint)(this->Source)._padding_;
  EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)TVar16];
  local_2c0 = *(uint *)((longlong)&(this->Source)._padding_ + 4);
  if ((-1 < (int)uVar17) && ((int)uVar17 < (int)local_2c0)) {
    local_2c0 = uVar17;
  }
  uVar17 = (**(code **)(this->_padding_ + 0x40))(this,TVar16);
  iVar18 = (**(code **)(this->_padding_ + 0x48))(this);
  if ((this->StaticMesh == (UStaticMesh *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StaticMesh != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                          ,0x4a9,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar19 = GetMeshLODIndexFromProxy(this,param_1);
  pFVar24 = UStaticMesh::GetRenderData(this->StaticMesh);
  uVar36 = 0;
  if ((int)uVar19 < (pFVar24->LODResources).Array.ArrayNum) {
    uVar36 = ~uVar19 >> 0x1f;
  }
  if ((uVar36 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_01 = *(FStaticMeshLODResources **)
             ((pFVar24->LODResources).Array.AllocatorInstance.Data + (longlong)(int)uVar19 * 8);
  paVar4 = &param_5->OneFrameResources->Next;
  aVar25 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x2e8,8);
  *(undefined8 *)((longlong)aVar25 + 8) = 0;
  *(undefined ***)aVar25 =
       &
       ___7__TObject_VFDynamicMeshEmitterCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar26.Next = *paVar4;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar25 + 8) = TVar26.Next;
    LOCK();
    aVar27 = *paVar4;
    bVar14 = TVar26.Next == aVar27;
    if (bVar14) {
      *paVar4 = aVar25;
      aVar27 = TVar26.Next;
    }
    UNLOCK();
    TVar26.Next = aVar27;
  } while (!bVar14);
  this_00 = (FMeshParticleVertexFactory *)((longlong)aVar25 + 0x18);
  *(undefined ***)((longlong)aVar25 + 0x10) = &___7FDynamicMeshEmitterCollectorResources__6B_;
  FVertexFactory::FVertexFactory((FVertexFactory *)this_00,TVar16);
  this_00->_padding_ = (longlong)&___7FMeshParticleVertexFactory__6B_;
  FMeshParticleVertexFactory::FDataType::FDataType((FDataType *)((longlong)aVar25 + 0x160));
  *(undefined ***)((longlong)aVar25 + 0x2b0) = &___7FDynamicReadBuffer__6B_;
  *(undefined8 *)((longlong)aVar25 + 0x2b8) = 0;
  plVar1 = (longlong *)((longlong)aVar25 + 0x2e0);
  *(undefined8 *)((longlong)aVar25 + 0x2c0) = 0;
  *(undefined4 *)((longlong)aVar25 + 0x2c8) = 0;
  *(undefined8 *)((longlong)aVar25 + 0x2d0) = 0;
  *plVar1 = 0;
  SetupVertexFactory(this,pFVar23,this_00,this_01,uVar19);
  lVar39 = this->_padding_;
  if ((*(int *)((longlong)aVar25 + 0x30) != -1) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2785838680084840296>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshParticleVertexFactory.h"
                          ,0x98,"!IsInitialized()"), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  *(uint *)((longlong)aVar25 + 0x29c) = uVar17;
  iVar37 = 0;
  if ((lVar39 & 1) != 0) {
    iVar37 = iVar18;
  }
  *(int *)((longlong)aVar25 + 0x2a0) = iVar37;
  (**(code **)(this_00->_padding_ + 0x18))(this_00,pFVar23);
  local_240 = (**(code **)(this->_padding_ + 0x50))();
  if (local_240 == 0) {
    local_1d8 = (undefined1  [8])___xmm_00000000000000003f8000003f800000;
    lStack_1d0 = _UNK_150dcddc8;
LAB_1481f7960:
    local_1c8 = 0;
  }
  else {
    lStack_1d0 = 0;
    local_1d8._4_4_ = __real_3f800000 / (float)*(int *)(local_240 + 0xb8);
    local_1d8._0_4_ = __real_3f800000 / (float)*(int *)(local_240 + 0xb4);
    if (*(int *)(local_240 + 0xb0) < 1) goto LAB_1481f7960;
    local_1c8 = 1;
  }
  local_1a8 = *(undefined8 *)((longlong)&(this->Source)._padding_ + 4);
  local_1c4 = 1 - local_1c8;
  local_1c0 = (uint)((this->Source).MeshMotionBlurOffset != 0);
  local_1b8 = (uint)*(byte *)((longlong)&(this->Source)._padding_ + 4);
  local_1a0 = *(undefined4 *)((longlong)&(this->Source)._padding_ + 4);
  local_19c = 0x3f800000;
  if ((*(byte *)((this->Source)._padding_ + 0x28) & 2) == 0) {
    local_19c = 0;
  }
  pFVar28 = FMeshParticleUniformParameters::GetStructMetadata();
  if (((pFVar28->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar14)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  TVar29 = RHICreateUniformBuffer
                     (&local_230,(FRHIUniformBufferLayout *)local_1d8,
                      (EUniformBufferUsage)(pFVar28->Layout).Reference,2);
  this_02 = (FRHIResource *)(TVar29.Reference)->_padding_;
  if (this_02 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_02);
    pFVar28 = FMeshParticleUniformParameters::GetStructMetadata();
    if (((pFVar28->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar14)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((FName)(pFVar28->Layout).Reference != this_02[2].OwnerName) {
      pFVar28 = FMeshParticleUniformParameters::GetStructMetadata();
      if (((pFVar28->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      if (bVar14) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  if (local_230 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_230);
  }
  if (plVar1 != &local_148) {
    pFVar5 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)this_02;
    this_02 = pFVar5;
  }
  if (this_02 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_02);
  }
  *(longlong *)((longlong)aVar25 + 0x2a8) = *plVar1;
  if ((int)TVar16 < 3) {
LAB_1481f7c1b:
    bVar14 = false;
  }
  else {
    if ((this->Source).MeshMotionBlurOffset == 0) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].bContainsValidPlatformInfo == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xc1,L""), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].Language != LANGUAGE_OpenGL) {
        if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].bContainsValidPlatformInfo == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid(Platform)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                ,0xbb,L""), bVar14)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].Language != LANGUAGE_Metal) {
          if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].bContainsValidPlatformInfo == 0)
             && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid(Platform)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                     ,0x238,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar3].
              bRequiresGeneratePrevTransformBuffer == 0) goto LAB_1481f7c1b;
        }
      }
    }
    bVar14 = true;
  }
  bVar15 = FSceneView::IsInstancedStereoPass(param_2);
  uVar19 = bVar15 + 1;
  this_03 = FMeshElementCollector::GetDynamicVertexBuffer(param_5);
  FGlobalDynamicVertexBuffer::Allocate(this_03,&local_178,uVar19 * uVar17 * local_2c0);
  puVar31 = (uchar *)0x0;
  puVar44 = (uchar *)0x0;
  pFVar45 = (FVertexBuffer *)0x0;
  uVar36 = 0;
  if ((this->_padding_ & 1) != 0) {
    pFVar30 = FGlobalDynamicVertexBuffer::Allocate(this_03,&local_108,uVar19 * iVar18 * local_2c0);
    local_110 = *(undefined8 *)&pFVar30->VertexOffset;
    puVar44 = pFVar30->Buffer;
    pFVar45 = pFVar30->VertexBuffer;
    bVar15 = FGlobalDynamicVertexBuffer::IsRenderAlarmLoggingEnabled(this_03);
    if ((bVar15) && (2 < (byte)LogParticles._0_1_)) {
      local_228[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x230;
      local_228[0].Number = *(uint *)&param_1->field_0x234;
      ::FName::ToString(local_228,local_130);
      local_250.ComparisonIndex.Value = *(uint *)&param_1->field_0x238;
      local_250.Number = *(uint *)&param_1->field_0x23c;
      ::FName::ToString(&local_250,&local_140);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_130[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130[0].Data.AllocatorInstance.Data);
      }
    }
    uVar36 = (uint)local_110;
  }
  if (((bVar14) &&
      (puVar31 = FMeshParticleVertexFactory::LockPreviousTransformBuffer(this_00,pFVar23,local_2c0),
      puVar31 != (uchar *)0x0)) && ((this->Source).MeshMotionBlurOffset == 0)) {
    TVar32 = FThreadSafeStaticStatInner<FStat_STAT_ParticlePackingTime,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ParticlePackingTime,1> *)
                        &StatPtr_STAT_ParticlePackingTime);
    local_198.Impl._Line = 0x4e6;
    local_198.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
    ;
    local_198.Impl._Column = 5;
    local_198.Impl._Function =
         "void __cdecl FDynamicMeshEmitterData::GetDynamicMeshElementsEmitter(const class FParticleSystemSceneProxy *,const class FSceneView *,const class FSceneViewFamily &,int,class FMeshElementCollector &) const"
    ;
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_278,*(TStatIdData **)&(TVar32.StatIdPtr)->Name,
               CycleStat|ClearEveryFrame,false,&local_198);
    iVar18 = (int)(this->Source)._padding_;
    iVar37 = *(int *)((longlong)&(this->Source)._padding_ + 4);
    if ((-1 < iVar18) && (iVar18 < iVar37)) {
      iVar37 = iVar18;
    }
    lVar39 = (longlong)(iVar37 + -1);
    if (-1 < iVar37 + -1) {
      pfVar41 = (float *)(puVar31 + 0x20);
      do {
        local_e8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
        local_e8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
        local_e8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
        local_e8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
        local_e8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
        local_e8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
        local_e8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
        local_e8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
        local_e8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
        local_e8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
        local_e8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
        local_e8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
        local_e8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
        local_e8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
        local_e8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
        local_e8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
        GetParticleTransform
                  (this,(FBaseParticle *)
                        ((longlong)
                         (int)((uint)*(ushort *)((this->Source)._padding_ + lVar39 * 2) *
                              (int)(this->Source)._padding_) + (this->Source)._padding_),param_1,
                   param_2,&local_e8);
        lVar39 = lVar39 + -1;
        pfVar41[-8] = (float)local_e8.M[0][0];
        pfVar41[-7] = (float)local_e8.M[1][0];
        pfVar41[-6] = (float)local_e8.M[2][0];
        pfVar41[-5] = (float)local_e8.M[3][0];
        pfVar41[-4] = (float)local_e8.M[0][1];
        pfVar41[-3] = (float)local_e8.M[1][1];
        pfVar41[-2] = (float)local_e8.M[2][1];
        pfVar41[-1] = (float)local_e8.M[3][1];
        *pfVar41 = (float)local_e8.M[0][2];
        pfVar41[1] = (float)local_e8.M[1][2];
        pfVar41[2] = (float)local_e8.M[2][2];
        pfVar41[3] = (float)local_e8.M[3][2];
        pfVar41 = pfVar41 + 0xc;
      } while (-1 < lVar39);
    }
    puVar31 = (uchar *)0x0;
    if ((local_270 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_270 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_270 & 4) != 0) {
      FThreadStats::AddMessage(local_278,CycleScopeEnd);
    }
    local_270 = 0;
  }
  if ((local_178.Buffer != (uchar *)0x0) &&
     (((this->_padding_ & 1) == 0 || (puVar44 != (uchar *)0x0)))) {
    GetInstanceData(this,local_178.Buffer,puVar44,puVar31,param_1,param_2,uVar19);
  }
  if (bVar14) {
    FMeshParticleVertexFactory::UnlockPreviousTransformBuffer(this_00,pFVar23);
  }
  FMeshParticleVertexFactory::SetInstanceBuffer
            (this_00,local_178.VertexBuffer,local_178.VertexOffset,uVar17);
  uVar17 = (**(code **)(this->_padding_ + 0x48))(this);
  FMeshParticleVertexFactory::SetDynamicParameterBuffer(this_00,pFVar45,uVar36,uVar17);
  FParticleSystemSceneProxy::UpdateWorldSpacePrimitiveUniformBuffer(param_1,pFVar23);
  *(undefined8 *)((longlong)aVar25 + 0x2d8) = 0;
  bVar14 = AllowDebugViewmodes();
  if ((!bVar14) || (bVar14 = true, (param_2->Family->EngineShowFlags).Wireframe == 0)) {
    bVar14 = false;
  }
  uVar17 = 0;
  local_2d4 = 0;
  if (0 < *(int *)&(this_01->Sections).field_0x28) {
    local_248 = &this_01->Sections;
    local_290 = 0;
    local_2c8 = 0;
    do {
      lVar39 = 0;
      if ((int)uVar17 < (this->MeshMaterials).ArrayNum) {
        if (((int)uVar17 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar6 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
        FVar38 = (ForElementType<FMaterialRenderProxy_*>)&this->MeshMaterials;
        if (FVar6 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
          FVar38 = FVar6;
        }
        if (*(longlong *)(local_290 + (longlong)FVar38) != 0) {
          uVar36 = 0;
          if ((int)uVar17 < (this->MeshMaterials).ArrayNum) {
            uVar36 = ~uVar17 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar6 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
          FVar38 = (ForElementType<FMaterialRenderProxy_*>)&this->MeshMaterials;
          if (FVar6 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
            FVar38 = FVar6;
          }
          lVar39 = *(longlong *)((longlong)FVar38 + local_290);
        }
      }
      pFVar43 = local_248;
      uVar36 = 0;
      if ((int)uVar17 < *(int *)&local_248->field_0x28) {
        uVar36 = ~uVar17 >> 0x1f;
      }
      if ((uVar36 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar7 = *(FStaticMeshSectionArray **)&pFVar43->field_0x20;
      if (pFVar7 != (FStaticMeshSectionArray *)0x0) {
        pFVar43 = pFVar7;
      }
      if (*(int *)(&pFVar43->field_0x8 + local_2c8) == 0) {
        if (2 < (byte)LogParticles._0_1_) {
          GetMeshLODIndexFromProxy(this,param_1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
      }
      else if (lVar39 == 0) {
        if (2 < (byte)LogParticles._0_1_) {
          GetMeshLODIndexFromProxy(this,param_1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
      }
      else {
        local_2d4 = local_2d4 + *(int *)(&pFVar43->field_0x8 + local_2c8);
        iVar18 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                 ::Add(&param_5->MeshBatchStorage,1);
        uVar36 = iVar18 / 0x49;
        uVar19 = 0;
        if ((int)uVar36 < (param_5->MeshBatchStorage).Chunks.Array.ArrayNum) {
          uVar19 = ~uVar36 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar40 = (ForElementType<FMeshBatchElement>)
                 ((longlong)
                  (param_5->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar36] +
                 (ulonglong)(uint)(iVar18 % 0x49) * 0xe0);
        *(FMeshParticleVertexFactory **)((longlong)FVar40 + 0xa8) = this_00;
        *(FLightCacheInterface **)((longlong)FVar40 + 0xb8) = (FLightCacheInterface *)0x0;
        uVar36 = ((uint)(byte)param_1->field_0x78 ^ *(uint *)((longlong)FVar40 + 0xd4)) & 1 ^
                 *(uint *)((longlong)FVar40 + 0xd4);
        *(uint *)((longlong)FVar40 + 0xd4) = uVar36;
        *(uint *)((longlong)FVar40 + 0xd4) =
             ((uint)(byte)param_1->field_0x298 * 2 ^ uVar36) & 4 ^ uVar36;
        EVar20 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                           ((FPrimitiveSceneProxy *)param_1,param_2);
        *(ESceneDepthPriorityGroup *)((longlong)FVar40 + 0xd4) =
             (EVar20 << 10 ^ *(uint *)((longlong)FVar40 + 0xd4)) & 0x1c00 ^
             *(uint *)((longlong)FVar40 + 0xd4);
        if ((*(int *)((longlong)FVar40 + 0xa0) < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        FVar42 = FVar40;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar40 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar42 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar40 + 0x98);
        }
        if ((local_240 == 0) || (*(char *)(local_240 + 0xbc) != '\0')) {
          pFVar33 = *(FRHIUniformBuffer **)&param_1->field_0x258;
        }
        else {
          pFVar33 = FParticleSystemSceneProxy::GetWorldSpacePrimitiveUniformBuffer(param_1);
        }
        *(FRHIUniformBuffer **)FVar42 = pFVar33;
        *(undefined4 *)((longlong)FVar42 + 0x58) = *(undefined4 *)(&pFVar43->field_0x4 + local_2c8);
        *(undefined4 *)((longlong)FVar42 + 0x68) = *(undefined4 *)(&pFVar43->field_0xc + local_2c8);
        *(undefined4 *)((longlong)FVar42 + 0x6c) = *(undefined4 *)(&pFVar43->field_0x10 + local_2c8)
        ;
        *(uint *)((longlong)FVar42 + 0x60) = local_2c0;
        if (bVar14) {
          if ((this_01->AdditionalIndexBuffers == (FAdditionalStaticMeshIndexBuffers *)0x0) ||
             ((int)(this_01->AdditionalIndexBuffers->WireframeIndexBuffer)._padding_ == -1)) {
            *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) & 0xfffffc7f;
            *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) | 0x40;
            *(longlong *)((longlong)FVar40 + 0xb0) = lVar39;
            *(undefined4 *)((longlong)FVar42 + 0x58) = 0;
            *(FRawStaticIndexBuffer **)((longlong)FVar42 + 0x18) = &this_01->IndexBuffer;
            iVar18 = (this_01->IndexBuffer).CachedNumIndices;
            if (iVar18 < 0) {
              iVar18 = (int)(this_01->IndexBuffer).IndexStorage._padding_;
              if ((this_01->IndexBuffer).b32Bit != false) {
                iVar18 = (iVar18 >> 0x1f & 3U) + iVar18;
                iVar37 = iVar18 >> 2;
                iVar18 = iVar37 / 3 + (iVar18 >> 0x1f) +
                         (int)(((longlong)iVar37 / 3 + ((longlong)iVar37 >> 0x3f) & 0xffffffffU) >>
                              0x1f);
                goto LAB_1481f857c;
              }
              iVar18 = iVar18 / 2;
            }
            iVar18 = iVar18 / 3 + (iVar18 >> 0x1f) +
                     (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
          }
          else {
            *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) & 0xfffffd7f;
            *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) | 0x100;
            *(FColoredMaterialRenderProxy **)((longlong)FVar40 + 0xb0) =
                 param_1->DeselectedWireframeMaterialInstance;
            *(undefined4 *)((longlong)FVar42 + 0x58) = 0;
            *(FRawStaticIndexBuffer **)((longlong)FVar42 + 0x18) =
                 &this_01->AdditionalIndexBuffers->WireframeIndexBuffer;
            pFVar8 = this_01->AdditionalIndexBuffers;
            iVar18 = (pFVar8->WireframeIndexBuffer).CachedNumIndices;
            if (iVar18 < 0) {
              iVar18 = (int)(pFVar8->WireframeIndexBuffer).IndexStorage._padding_;
              if ((pFVar8->WireframeIndexBuffer).b32Bit != false) {
                iVar18 = ((int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2) / 2;
                goto LAB_1481f857c;
              }
              iVar18 = iVar18 / 2;
            }
            iVar18 = iVar18 / 2;
          }
        }
        else {
          *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) & 0xfffffc7f;
          *(longlong *)((longlong)FVar40 + 0xb0) = lVar39;
          *(FRawStaticIndexBuffer **)((longlong)FVar42 + 0x18) = &this_01->IndexBuffer;
          *(undefined4 *)((longlong)FVar42 + 0x58) =
               *(undefined4 *)(&pFVar43->field_0x4 + local_2c8);
          iVar18 = *(int *)(&pFVar43->field_0x8 + local_2c8);
        }
LAB_1481f857c:
        *(int *)((longlong)FVar42 + 0x5c) = iVar18;
        *(uint *)((longlong)FVar40 + 0xd4) = *(uint *)((longlong)FVar40 + 0xd4) | 0x2000;
        *(uint *)((longlong)FVar40 + 0xd4) =
             -(uint)((param_1->field_0x79 & 6) != 0) & 0x4000 |
             *(uint *)((longlong)FVar40 + 0xd4) & 0xffffbfff;
        *(char *)((longlong)FVar40 + 0xd9) = (char)param_1->VisualizeLODIndex;
        FMeshElementCollector::AddMesh(param_5,param_4,(FMeshBatch *)FVar40);
        iVar18 = FStaticMeshLODResources::GetNumTriangles(this_01);
        iVar18 = iVar18 * local_2c0;
        if ((iVar18 != 0) && (FThreadStats::bPrimaryEnable != false)) {
          FVar34 = StatPtr_STAT_MeshParticlePolys;
          if (StatPtr_STAT_MeshParticlePolys ==
              (FThreadSafeStaticStat<FStat_STAT_MeshParticlePolys>)0x0) {
            pFVar21 = ::FName::FName(&local_158,"STAT_MeshParticlePolys");
            FVar34 = (FThreadSafeStaticStat<FStat_STAT_MeshParticlePolys>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshParticlePolys,
                                *pFVar21,L"Mesh Particle Polys","STATGROUP_Particles",
                                "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar9 = *(FName *)FVar34;
          if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_04 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_04 == (FThreadStats *)0x0) {
              this_05 = FThreadStatsPool::Get();
              this_04 = FThreadStatsPool::GetFromPool(this_05);
            }
            local_1e8.NameAndInfo.Number = FVar9.Number & 0xffffafff | 0xa000;
            local_238 = FVar9;
            local_1e8.StatData.Pad = (uchar  [8])(longlong)iVar18;
            local_1e8.NameAndInfo.Index.Value = FVar9.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_04,&local_1e8);
            FStatsTrace::Add(&local_238,(longlong)iVar18);
            if (this_04->ScopeCount == 0) {
              FThreadStats::Flush(this_04,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_04,false,false);
            }
          }
        }
      }
      local_2c8 = local_2c8 + 0x1c;
      local_290 = local_290 + 8;
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)&(this_01->Sections).field_0x28);
    if (local_2d4 != 0) goto LAB_1481f878e;
  }
  if (2 < (byte)LogParticles._0_1_) {
    GetMeshLODIndexFromProxy(this,param_1);
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_WARNING__partic_151a3b158,
               (FLogCategoryBase *)&LogParticles);
  }
LAB_1481f878e:
  if (this->bUseStaticMeshLODs != false) {
    iVar18 = *(int *)((longlong)&this->_padding_ + 4);
    if (iVar18 < (param_1->MeshEmitterLODIndices).ArrayNum) {
      iVar37 = this->LastCalculatedMeshLOD;
      if ((iVar18 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(int *)((param_1->MeshEmitterLODIndices).AllocatorInstance.Data + (longlong)iVar18 * 4) =
           iVar37;
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(local_298,CycleScopeEnd);
  }
  return;
}

// GetDynamicParameterVertexStride @ 1481fa410

int __thiscall
FDynamicMeshEmitterData::GetDynamicParameterVertexStride(FDynamicMeshEmitterData *this)

{
  return 0x10;
}

// GetDynamicVertexStride @ 1481fa480

int __thiscall
FDynamicMeshEmitterData::GetDynamicVertexStride(FDynamicMeshEmitterData *this,Type param_1)

{
  return 0x60;
}

// GetInstanceData @ 1481faf20

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

void __thiscall
FDynamicMeshEmitterData::GetInstanceData
          (FDynamicMeshEmitterData *this,void *param_1,void *param_2,void *param_3,
          FParticleSystemSceneProxy *param_4,FSceneView *param_5,uint param_6)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  FColor_u_0 FVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  schar sVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime> FVar27;
  FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT_CNC> FVar28;
  FCachedSystemScalabilityCVars *pFVar29;
  TBoxSphereBounds<double,double> *pTVar30;
  FStaticMeshRenderData *pFVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  void *pvVar37;
  FName FVar38;
  FBaseParticle *pFVar39;
  undefined8 *puVar40;
  FNameEntryId FVar41;
  undefined8 *puVar42;
  float *pfVar43;
  FName FVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  float fVar47;
  double dVar48;
  undefined8 uVar49;
  undefined1 auStackY_3f8 [32];
  FColor_u_0 local_394 [3];
  undefined1 local_388 [16];
  double local_378;
  FName local_368;
  FParticleSystemSceneProxy *local_360;
  undefined1 local_358 [16];
  FColor_u_0 local_348;
  float local_344;
  int local_340;
  FSceneView *local_338;
  void *local_330;
  longlong lStack_328;
  void *local_320;
  longlong local_318;
  FName local_310;
  FName local_308;
  undefined1 local_2f8 [16];
  FName local_2e8;
  FName local_2d8;
  ulonglong local_2c8;
  TVector4<double>_u_0 local_2b8;
  TVector<double>_u_0 local_298;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined2 local_208;
  undefined2 uStack_206;
  undefined2 uStack_204;
  undefined2 uStack_202;
  float fStack_200;
  float fStack_1fc;
  TMatrix<double> local_1f8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  local_360 = param_4;
  local_338 = param_5;
  FVar27 = StatPtr_STAT_ParticlePackingTime;
  local_330 = param_2;
  local_320 = param_3;
  if (StatPtr_STAT_ParticlePackingTime == (FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime>)0x0
     ) {
    pFVar26 = ::FName::FName((FName *)local_2f8,"STAT_ParticlePackingTime");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_ParticlePackingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlePackingTime,*pFVar26,
                        L"Particle Packing Time RT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar44 = *(FName *)FVar27;
  bVar17 = false;
  bVar19 = false;
  local_2e8.ComparisonIndex.Value = 0;
  local_2e8.Number = 0;
  bVar22 = false;
  bVar16 = false;
  FVar41 = FVar44.ComparisonIndex.Value;
  uVar35 = FVar44.Number;
  if ((FVar41.Value == 0) && (uVar35 == 0)) {
LAB_1481fb0a8:
    bVar19 = bVar16;
    bVar17 = bVar22;
    bVar22 = false;
    local_308 = local_2e8;
    FVar44 = local_2e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_348.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_348._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar17 = false;
      bVar19 = true;
      bVar22 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_368.ComparisonIndex.Value = FVar41.Value;
        local_368.Number = uVar35;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_368,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x754);
        bVar17 = true;
        bVar19 = true;
        bVar22 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481fb0a8;
    local_368.ComparisonIndex.Value = FVar41.Value;
    local_368.Number = uVar35;
    local_308 = FVar44;
    FThreadStats::AddMessage(FVar44,CycleScopeStart);
    bVar22 = true;
  }
  FVar28 = StatPtr_STAT_ParticlesOverview_RT_CNC;
  if (StatPtr_STAT_ParticlesOverview_RT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT_CNC>)0x0) {
    pFVar26 = ::FName::FName((FName *)local_388,"STAT_ParticlesOverview_RT_CNC");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParticlesOverview_RT_CNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticlesOverview_RT_CNC,*pFVar26
                        ,L"RT Concurrent Total","STATGROUP_ParticlesOverview","STATCAT_Advanced",
                        L"ParticlesOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar28;
  bVar16 = false;
  bVar18 = false;
  local_2d8.ComparisonIndex.Value = 0;
  local_2d8.Number = 0;
  bVar21 = false;
  bVar23 = false;
  if ((FVar38.ComparisonIndex.Value.Value != 0) || (FVar38.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_394[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_394[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar16 = false;
      bVar18 = true;
      bVar21 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_358._0_4_ = FVar38.ComparisonIndex.Value;
        local_358._4_4_ = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)local_358,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                   ,0x755);
        bVar16 = true;
        bVar18 = true;
        bVar21 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_358._0_4_ = FVar38.ComparisonIndex.Value;
      local_358._4_4_ = FVar38.Number;
      local_310 = FVar38;
      FThreadStats::AddMessage(FVar38,CycleScopeStart);
      bVar21 = true;
      goto LAB_1481fb1df;
    }
  }
  bVar18 = bVar23;
  bVar16 = bVar21;
  bVar21 = false;
  local_310 = local_2d8;
  FVar38 = local_2d8;
LAB_1481fb1df:
  local_340 = (this->Source).SubImages_Horizontal;
  iVar33 = *(int *)((longlong)&(this->Source)._padding_ + 4);
  iVar25 = (int)(this->Source)._padding_;
  if ((-1 < iVar25) && (iVar25 < iVar33)) {
    iVar33 = iVar25;
  }
  this->LastCalculatedMeshLOD = 8;
  local_394[0].Bits = ((uint)this->_padding_ & 1) << 4;
  pFVar29 = GetCachedScalabilityCVars();
  FVar20 = local_394[0];
  local_298._s_0.X = (double)*(undefined8 *)pFVar29;
  local_298._s_0.Y = (double)*(undefined8 *)&pFVar29->CookOutUnusedDetailModeComponents;
  local_298._s_0.Z = (double)*(undefined8 *)&pFVar29->MaxShadowResolution;
  uStack_280._0_4_ = pFVar29->ViewDistanceScale;
  uStack_280._4_4_ = pFVar29->ViewDistanceScaleSquared;
  local_268._0_4_ = pFVar29->FieldOfViewMinAngle;
  local_268._4_4_ = pFVar29->FieldOfViewMinAngleScale;
  uStack_260._0_4_ = pFVar29->FieldOfViewMaxAngle;
  uStack_260._4_4_ = pFVar29->FieldOfViewMaxAngleScale;
  local_344 = __real_3f800000;
  if (pFVar29->StaticMeshLODDistanceScale != 0.0) {
    local_344 = __real_3f800000 / pFVar29->StaticMeshLODDistanceScale;
  }
  local_344 = local_344 * this->LODSizeScale;
  local_318 = (longlong)(iVar33 + -1);
  if (-1 < iVar33 + -1) {
    local_2c8 = (ulonglong)(param_6 * 0x60);
    pfVar43 = (float *)((longlong)local_320 + 0x18);
    pvVar37 = local_330;
    do {
      pFVar39 = (FBaseParticle *)
                ((longlong)
                 (int)((uint)*(ushort *)((this->Source)._padding_ + local_318 * 2) *
                      (int)(this->Source)._padding_) + (this->Source)._padding_);
      local_258 = *(undefined8 *)&(pFVar39->Color).field0_0x0;
      uStack_250 = *(undefined8 *)((longlong)&(pFVar39->Color).field0_0x0 + 8);
      local_1f8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_1f8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_1f8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_1f8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_1f8.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_1f8.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_1f8.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_1f8.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_1f8.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_1f8.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_1f8.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_1f8.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_1f8.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_1f8.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
      local_1f8.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_1f8.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      GetParticleTransform(this,pFVar39,local_360,local_338,&local_1f8);
      fStack_244 = (float)local_1f8.M[1][0];
      local_248 = (float)local_1f8.M[0][0];
      fStack_23c = (float)local_1f8.M[3][0];
      fStack_240 = (float)local_1f8.M[2][0];
      fStack_234 = (float)local_1f8.M[1][1];
      fStack_22c = (float)local_1f8.M[3][1];
      local_238 = (float)local_1f8.M[0][1];
      fStack_230 = (float)local_1f8.M[2][1];
      fStack_224 = (float)local_1f8.M[1][2];
      local_228 = (float)local_1f8.M[0][2];
      fStack_21c = (float)local_1f8.M[3][2];
      fStack_220 = (float)local_1f8.M[2][2];
      if (this->bUseStaticMeshLODs != false) {
        dVar13 = (pFVar39->Location).field0_0x0._s_0.X;
        local_358._0_8_ = (pFVar39->Location).field0_0x0._s_0.Y;
        local_378 = (pFVar39->Location).field0_0x0._s_0.Z;
        if (*(char *)((longlong)&(this->Source)._padding_ + 4) == '\0') {
          local_2f8._8_8_ = 0;
          local_2f8._0_8_ = local_378;
          local_358._8_8_ = 0;
          local_388._8_8_ = 0;
          local_388._0_8_ = dVar13;
        }
        else {
          dVar8 = *(double *)&local_360->field_0x130 * (double)local_358._0_8_;
          dVar9 = *(double *)&local_360->field_0x138 * (double)local_358._0_8_;
          auVar5._8_4_ = SUB84(dVar9,0);
          auVar5._0_8_ = dVar8;
          auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_388._8_8_ = auVar5._8_8_;
          dVar8 = dVar8 + dVar13 * *(double *)&local_360->field_0x110;
          dVar9 = (double)local_388._8_8_ + dVar13 * *(double *)&local_360->field_0x118;
          auVar6._8_4_ = SUB84(dVar9,0);
          auVar6._0_8_ = dVar8;
          auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_388._8_8_ = auVar6._8_8_;
          dVar8 = dVar8 + *(double *)&local_360->field_0x150 * local_378;
          dVar9 = (double)local_388._8_8_ + *(double *)&local_360->field_0x158 * local_378;
          auVar10._8_4_ = SUB84(dVar9,0);
          auVar10._0_8_ = dVar8;
          auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          local_388._8_8_ = auVar10._8_8_;
          dVar9 = (double)local_388._8_8_ +
                  *(double *)&local_360->field_0x178 * __real_3ff0000000000000;
          uVar45 = SUB84(dVar9,0);
          uVar46 = (undefined4)((ulonglong)dVar9 >> 0x20);
          local_388._8_4_ = uVar45;
          local_388._0_8_ = dVar8 + *(double *)&local_360->field_0x170 * __real_3ff0000000000000;
          local_388._12_4_ = uVar46;
          dVar8 = *(double *)&local_360->field_0x140 * (double)local_358._0_8_;
          local_358._0_8_ = *(double *)&local_360->field_0x148 * (double)local_358._0_8_;
          auVar7._8_4_ = (int)local_358._0_8_;
          auVar7._0_8_ = dVar8;
          auVar7._12_4_ = (int)((ulonglong)local_358._0_8_ >> 0x20);
          local_2f8._8_8_ = auVar7._8_8_;
          dVar9 = (double)local_2f8._8_8_ + *(double *)&local_360->field_0x128 * dVar13 +
                  *(double *)&local_360->field_0x168 * local_378 +
                  *(double *)&local_360->field_0x188 * __real_3ff0000000000000;
          local_358._8_4_ = uVar45;
          local_358._0_8_ = local_388._8_8_;
          local_358._12_4_ = uVar46;
          local_2f8._8_4_ = SUB84(dVar9,0);
          local_2f8._0_8_ =
               dVar8 + *(double *)&local_360->field_0x120 * dVar13 +
               *(double *)&local_360->field_0x160 * local_378 +
               *(double *)&local_360->field_0x180 * __real_3ff0000000000000;
          local_2f8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        }
        dVar13 = local_1f8.M[0][1] * local_1f8.M[0][1] + local_1f8.M[0][0] * local_1f8.M[0][0] +
                 local_1f8.M[0][2] * local_1f8.M[0][2];
        if (dVar13 <= __real_3e45798ee0000000) {
          dVar13 = 0.0;
        }
        dVar8 = local_1f8.M[1][1] * local_1f8.M[1][1] + local_1f8.M[1][0] * local_1f8.M[1][0] +
                local_1f8.M[1][2] * local_1f8.M[1][2];
        if (dVar8 <= __real_3e45798ee0000000) {
          dVar8 = 0.0;
        }
        dVar9 = local_1f8.M[2][1] * local_1f8.M[2][1] + local_1f8.M[2][0] * local_1f8.M[2][0] +
                local_1f8.M[2][2] * local_1f8.M[2][2];
        if (dVar9 <= __real_3e45798ee0000000) {
          dVar9 = 0.0;
        }
        pTVar30 = UStaticMesh::GetBounds
                            (this->StaticMesh,(TBoxSphereBounds<double,double> *)&local_298._s_0);
        local_2b8._s_0.Y = (double)local_358._0_8_;
        local_2b8._s_0.Z = (double)local_2f8._0_8_;
        dVar13 = SQRT(dVar8 + dVar13 + dVar9) * pTVar30->SphereRadius * __real_3fe0000000000000;
        local_2b8._s_0.W = __real_3ff0000000000000;
        local_2b8._s_0.X = (double)local_388._0_8_;
        pFVar31 = UStaticMesh::GetRenderData(this->StaticMesh);
        sVar24 = ComputeStaticMeshLOD
                           (pFVar31,(TVector4<double> *)&local_2b8._s_0,(float)dVar13,local_338,0,
                            local_344);
        iVar25 = UStaticMesh::GetNumLODs(this->StaticMesh);
        iVar33 = iVar25 + -1;
        if ((int)sVar24 < iVar25 + -1) {
          iVar33 = (int)sVar24;
        }
        iVar25 = this->LastCalculatedMeshLOD;
        if (iVar33 < this->LastCalculatedMeshLOD) {
          iVar25 = iVar33;
        }
        this->LastCalculatedMeshLOD = iVar25;
      }
      if (local_320 != (void *)0x0) {
        if ((this->Source).MeshMotionBlurOffset == 0) {
          *(ulonglong *)(pfVar43 + -6) = CONCAT44(fStack_244,local_248);
          *(ulonglong *)(pfVar43 + -4) = CONCAT44(fStack_23c,fStack_240);
          *(ulonglong *)(pfVar43 + 2) = CONCAT44(fStack_224,local_228);
          *(ulonglong *)(pfVar43 + 4) = CONCAT44(fStack_21c,fStack_220);
          *(ulonglong *)(pfVar43 + -2) = CONCAT44(fStack_234,local_238);
          *(ulonglong *)pfVar43 = CONCAT44(fStack_22c,fStack_230);
        }
        else {
          local_178.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
          local_178.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
          local_178.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
          local_178.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
          local_178.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
          local_178.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
          local_178.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
          local_178.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
          local_178.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
          local_178.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
          local_178.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
          local_178.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
          local_178.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
          local_178.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
          local_178.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
          local_178.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
          GetParticlePrevTransform(this,pFVar39,local_360,local_338,&local_178);
          pfVar43[-6] = (float)local_178.M[0][0];
          pfVar43[-5] = (float)local_178.M[1][0];
          pfVar43[-4] = (float)local_178.M[2][0];
          pfVar43[-3] = (float)local_178.M[3][0];
          pfVar43[-2] = (float)local_178.M[0][1];
          pfVar43[-1] = (float)local_178.M[1][1];
          *pfVar43 = (float)local_178.M[2][1];
          pfVar43[1] = (float)local_178.M[3][1];
          pfVar43[2] = (float)local_178.M[0][2];
          pfVar43[3] = (float)local_178.M[1][2];
          pfVar43[4] = (float)local_178.M[2][2];
          pfVar43[5] = (float)local_178.M[3][2];
        }
        pfVar43 = pfVar43 + 0xc;
      }
      dVar13 = (pFVar39->Location).field0_0x0._s_0.Y;
      dVar8 = (pFVar39->Location).field0_0x0._s_0.Z;
      iVar33 = *(int *)((longlong)&(this->Source)._padding_ + 4);
      lVar32 = (longlong)iVar33;
      dVar9 = (pFVar39->OldLocation).field0_0x0._s_0.X;
      dVar2 = (pFVar39->Location).field0_0x0._s_0.X;
      dVar3 = (pFVar39->OldLocation).field0_0x0._s_0.Y;
      dVar4 = (pFVar39->OldLocation).field0_0x0._s_0.Z;
      dVar11 = dVar2 - dVar9;
      dVar48 = dVar13 - dVar3;
      dVar12 = dVar8 - dVar4;
      if (iVar33 != 0) {
        dVar11 = ((double)*(float *)((longlong)&(pFVar39->OldLocation).field0_0x0 + lVar32 + 0xc) +
                 dVar2) - ((double)*(float *)((longlong)&pFVar39->Rotation + lVar32) + dVar9);
        dVar48 = ((double)*(float *)((longlong)&(pFVar39->OldLocation).field0_0x0 + lVar32 + 0x10) +
                 dVar13) - ((double)*(float *)((longlong)&(pFVar39->Velocity).field0_0x0 + lVar32) +
                           dVar3);
        dVar12 = ((double)*(float *)((longlong)&(pFVar39->OldLocation).field0_0x0 + lVar32 + 0x14) +
                 dVar8) - ((double)*(float *)((longlong)&(pFVar39->Velocity).field0_0x0 + lVar32 + 4
                                             ) + dVar4);
      }
      if (((dVar11 == 0.0) && (dVar48 == 0.0)) && (dVar12 == 0.0)) {
        local_218 = 0;
        uStack_210 = 0;
      }
      else {
        if (*(char *)((longlong)&(this->Source)._padding_ + 4) != '\0') {
          dVar8 = dVar11 * *(double *)&local_360->field_0x118;
          dVar9 = *(double *)&local_360->field_0x140 * dVar48;
          dVar13 = *(double *)&local_360->field_0x120 * dVar11;
          dVar11 = *(double *)&local_360->field_0x130 * dVar48 +
                   dVar11 * *(double *)&local_360->field_0x110 +
                   *(double *)&local_360->field_0x150 * dVar12 +
                   *(double *)&local_360->field_0x170 * 0.0;
          dVar48 = *(double *)&local_360->field_0x138 * dVar48 + dVar8 +
                   *(double *)&local_360->field_0x158 * dVar12 +
                   *(double *)&local_360->field_0x178 * 0.0;
          dVar12 = dVar9 + dVar13 + *(double *)&local_360->field_0x160 * dVar12 +
                   *(double *)&local_360->field_0x180 * 0.0;
        }
        fVar47 = (float)SQRT(dVar48 * dVar48 + dVar11 * dVar11 + dVar12 * dVar12);
        uVar49 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        if (__real_322bcc77 < fVar47) {
          dVar13 = (double)(__real_3f800000 / fVar47);
          uVar49 = dVar48 * dVar13;
          uVar14 = dVar11 * dVar13;
          uVar15 = dVar12 * dVar13;
        }
        uStack_210 = CONCAT44(fVar47,(float)(double)uVar15);
        local_218 = CONCAT44((float)(double)uVar49,(float)(double)uVar14);
      }
      if (((this->_padding_ & 1) != 0) && (iVar33 = (int)(this->Source)._padding_, 0 < iVar33)) {
        plVar1 = (longlong *)((longlong)&(pFVar39->OldLocation).field0_0x0 + (longlong)iVar33);
        local_330 = (void *)*plVar1;
        lStack_328 = plVar1[1];
        uVar35 = 0;
        if (param_6 != 0) {
          do {
            uVar36 = uVar35 + 1;
            plVar1 = (longlong *)((ulonglong)(uVar35 * FVar20.Bits) + (longlong)pvVar37);
            *plVar1 = (longlong)local_330;
            plVar1[1] = lStack_328;
            uVar35 = uVar36;
          } while (uVar36 < param_6);
        }
        pvVar37 = (void *)((longlong)pvVar37 + (ulonglong)(FVar20.Bits * param_6));
      }
      if (((this->Source).SubUVInterpMethod != 0) &&
         (iVar33 = (this->Source).SubUVDataOffset, 0 < iVar33)) {
        fVar47 = *(float *)((longlong)&(pFVar39->OldLocation).field0_0x0 + (longlong)iVar33);
        iVar33 = (int)ROUND((fVar47 + fVar47) - __real_3f000000) >> 1;
        uStack_206 = (undefined2)(iVar33 / local_340);
        local_208 = (undefined2)(iVar33 % local_340);
        uStack_202 = (undefined2)((iVar33 + 1) / local_340);
        uStack_204 = (undefined2)((iVar33 + 1) % local_340);
        fStack_200 = (float)truncf(fVar47);
        fStack_200 = fVar47 - fStack_200;
      }
      fStack_1fc = pFVar39->RelativeTime;
      if (param_6 != 0) {
        *(undefined8 *)param_1 = local_258;
        *(undefined8 *)((longlong)param_1 + 8) = uStack_250;
        *(ulonglong *)((longlong)param_1 + 0x10) = CONCAT44(fStack_244,local_248);
        *(ulonglong *)((longlong)param_1 + 0x18) = CONCAT44(fStack_23c,fStack_240);
        *(ulonglong *)((longlong)param_1 + 0x20) = CONCAT44(fStack_234,local_238);
        *(ulonglong *)((longlong)param_1 + 0x28) = CONCAT44(fStack_22c,fStack_230);
        *(ulonglong *)((longlong)param_1 + 0x30) = CONCAT44(fStack_224,local_228);
        *(ulonglong *)((longlong)param_1 + 0x38) = CONCAT44(fStack_21c,fStack_220);
        *(undefined8 *)((longlong)param_1 + 0x40) = local_218;
        *(undefined8 *)((longlong)param_1 + 0x48) = uStack_210;
        *(ulonglong *)((longlong)param_1 + 0x50) =
             CONCAT26(uStack_202,CONCAT24(uStack_204,CONCAT22(uStack_206,local_208)));
        *(ulonglong *)((longlong)param_1 + 0x58) = CONCAT44(fStack_1fc,fStack_200);
        puVar40 = param_1;
        puVar42 = (undefined8 *)((longlong)param_1 + 0x60);
        for (uVar34 = (ulonglong)param_6 * 0x60 - 0x60 >> 3; uVar34 != 0; uVar34 = uVar34 - 1) {
          *puVar42 = *puVar40;
          puVar40 = puVar40 + 1;
          puVar42 = puVar42 + 1;
        }
      }
      param_1 = (void *)((longlong)param_1 + local_2c8);
      local_318 = local_318 + -1;
      FVar38 = local_310;
      FVar44 = local_308;
    } while (-1 < local_318);
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar44,CycleScopeEnd);
  }
  return;
}

// GetMeshLODIndexFromProxy @ 1481fc580

uint __thiscall
FDynamicMeshEmitterData::GetMeshLODIndexFromProxy
          (FDynamicMeshEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FStaticMeshRenderData *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  
  pFVar7 = UStaticMesh::GetRenderData(this->StaticMesh);
  bVar1 = pFVar7->CurrentFirstLODIdx;
  uVar9 = (ulonglong)bVar1;
  uVar4 = (uint)bVar1;
  pFVar7 = UStaticMesh::GetRenderData(this->StaticMesh);
  if ((int)(uint)bVar1 < (pFVar7->LODResources).Array.ArrayNum) {
    lVar10 = uVar9 * 8;
    do {
      pFVar7 = UStaticMesh::GetRenderData(this->StaticMesh);
      uVar4 = (uint)uVar9;
      uVar8 = 0;
      if ((int)uVar4 < (pFVar7->LODResources).Array.ArrayNum) {
        uVar8 = ~uVar4 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      iVar5 = FStaticMeshLODResources::GetNumVertices
                        (*(FStaticMeshLODResources **)
                          ((pFVar7->LODResources).Array.AllocatorInstance.Data + lVar10));
      if (0 < iVar5) break;
      uVar4 = uVar4 + 1;
      uVar9 = (ulonglong)uVar4;
      lVar10 = lVar10 + 8;
      pFVar7 = UStaticMesh::GetRenderData(this->StaticMesh);
    } while ((int)uVar4 < (pFVar7->LODResources).Array.ArrayNum);
  }
  if ((param_1 != (FParticleSystemSceneProxy *)0x0) && (GFXAllowParticleMeshLODs != 0)) {
    uVar6 = UStaticMesh::GetMinLODIdx(this->StaticMesh,false);
    pFVar7 = UStaticMesh::GetRenderData(this->StaticMesh);
    uVar11 = (pFVar7->LODResources).Array.ArrayNum - 1;
    uVar8 = uVar11;
    if ((int)uVar6 < (int)uVar11) {
      uVar8 = uVar6;
    }
    uVar6 = *(uint *)((longlong)&this->_padding_ + 4);
    if ((int)uVar4 < (int)uVar8) {
      uVar4 = uVar8;
    }
    uVar8 = 0;
    if ((-1 < (int)uVar6) && (uVar8 = 0, (int)uVar6 < (param_1->MeshEmitterLODIndices).ArrayNum)) {
      uVar8 = 0;
      if ((int)uVar6 < (param_1->MeshEmitterLODIndices).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      uVar8 = *(uint *)((param_1->MeshEmitterLODIndices).AllocatorInstance.Data +
                       (longlong)(int)uVar6 * 4);
    }
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
    if ((int)uVar4 < (int)uVar11) {
      uVar4 = uVar11;
    }
  }
  return uVar4;
}

// GetParticlePrevTransform @ 1481fd130

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

void __thiscall
FDynamicMeshEmitterData::GetParticlePrevTransform
          (FDynamicMeshEmitterData *this,FBaseParticle *param_1,FParticleSystemSceneProxy *param_2,
          FSceneView *param_3,TMatrix<double> *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  IRendererModule *pIVar10;
  longlong lVar11;
  TVector<float> *pTVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_288 [32];
  float local_218;
  float fStack_214;
  double dStack_210;
  double local_208;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_288;
  iVar6 = (this->Source).MeshRotationOffset;
  pTVar12 = (TVector<float> *)
            ((longlong)&(param_1->OldLocation).field0_0x0 +
            (longlong)(this->Source).MeshMotionBlurOffset);
  pIVar10 = GetRendererModule();
  lVar11 = (**(code **)((longlong)*pIVar10 + 0x238))(pIVar10,param_3);
  dVar7 = __real_3ff0000000000000;
  local_1e8._s_0.X = *(double *)(lVar11 + 0x818);
  local_1e8._s_0.Y = *(double *)(lVar11 + 0x820);
  dVar2 = *(double *)(lVar11 + 0x828);
  dVar3 = *(double *)(lVar11 + 400);
  dVar4 = *(double *)(lVar11 + 0x1b0);
  dVar5 = *(double *)(lVar11 + 0x1d0);
  local_200._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_200._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_200._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1e8._s_0.Z = dVar2;
  if (*(int *)((longlong)&(this->Source)._padding_ + 4) != 0) {
    dVar8 = *(double *)(lVar11 + 0x818);
    dVar14 = *(double *)(lVar11 + 0x820);
    _local_218 = dVar8;
    dStack_210 = dVar14;
    local_208 = dVar2;
    if (*(char *)((longlong)&(this->Source)._padding_ + 4) != '\0') {
      UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&param_2->field_0x110,&local_1c8);
      dVar8 = local_1c8.M[1][0] * dStack_210 + local_1c8.M[0][0] * (double)_local_218 +
              local_1c8.M[2][0] * local_208 + local_1c8.M[3][0] * dVar7;
      dVar14 = local_1c8.M[1][1] * dStack_210 + local_1c8.M[0][1] * (double)_local_218 +
               local_1c8.M[2][1] * local_208 + local_1c8.M[3][1] * dVar7;
      dVar2 = local_1c8.M[1][2] * dStack_210 + local_1c8.M[0][2] * (double)_local_218 +
              local_1c8.M[2][2] * local_208 + local_1c8.M[3][2] * dVar7;
    }
    dVar8 = dVar8 - (param_1->OldLocation).field0_0x0._s_0.X;
    dVar14 = dVar14 - (param_1->OldLocation).field0_0x0._s_0.Y;
    dVar2 = dVar2 - (param_1->OldLocation).field0_0x0._s_0.Z;
    fVar1 = pTVar12[4].field0_0x0._s_0.Y;
    dVar13 = dVar14 * dVar14 + dVar8 * dVar8 + dVar2 * dVar2;
    if (__real_3e45798ee0000000 < dVar13) {
      _local_218 = dVar7 / SQRT(dVar13);
      dVar8 = dVar8 * (double)_local_218;
      dVar14 = dVar14 * (double)_local_218;
      dVar2 = dVar2 * (double)_local_218;
    }
    dVar7 = (double)fVar1;
    local_200._s_0.Z = dVar7 * dVar2;
    local_200._s_0.Y = dVar7 * dVar14;
    local_200._s_0.X = dVar7 * dVar8;
    if ((float)dVar13 <= fVar1 * fVar1) {
      local_200._s_0.Z = local_200._s_0.Z * __real_4290000000000000;
      local_200._s_0.Y = local_200._s_0.Y * __real_4290000000000000;
      local_200._s_0.X = local_200._s_0.X * __real_4290000000000000;
    }
  }
  cVar9 = (**(code **)(**(longlong **)&param_2->field_0x220 + 0xe8))
                    (*(longlong **)&param_2->field_0x220,*(undefined8 *)&param_2->field_0x228,
                     &local_148);
  if (cVar9 == '\0') {
    local_148.M[0][0] = *(double *)&param_2->field_0x110;
    local_148.M[0][1] = *(double *)&param_2->field_0x118;
    local_148.M[0][2] = *(double *)&param_2->field_0x120;
    local_148.M[0][3] = *(double *)&param_2->field_0x128;
    local_148.M[1][0] = *(double *)&param_2->field_0x130;
    local_148.M[1][1] = *(double *)&param_2->field_0x138;
    local_148.M[1][2] = *(double *)&param_2->field_0x140;
    local_148.M[1][3] = *(double *)&param_2->field_0x148;
    local_148.M[2][0] = *(double *)&param_2->field_0x150;
    local_148.M[2][1] = *(double *)&param_2->field_0x158;
    local_148.M[2][2] = *(double *)&param_2->field_0x160;
    local_148.M[2][3] = *(double *)&param_2->field_0x168;
    local_148.M[3][0] = *(double *)&param_2->field_0x170;
    local_148.M[3][1] = *(double *)&param_2->field_0x178;
    local_148.M[3][2] = *(double *)&param_2->field_0x180;
    local_148.M[3][3] = *(double *)&param_2->field_0x188;
  }
  dStack_210 = (double)CONCAT44(dStack_210._4_4_,(float)dVar5);
  fStack_214 = (float)dVar4;
  local_218 = (float)dVar3;
  CalculateParticleTransform
            (this,&local_148,&param_1->OldLocation,pTVar12[4].field0_0x0._s_0.X,pTVar12,pTVar12 + 1,
             (TVector<float> *)((longlong)&(param_1->OldLocation).field0_0x0 + (longlong)iVar6),
             pTVar12 + 2,(TVector<double> *)&local_200._s_0,pTVar12 + 3,
             (TVector<double> *)&local_1e8._s_0,(TVector<float> *)&local_218,param_4);
  return;
}

// GetParticleTransform @ 1481fd6b0

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
FDynamicMeshEmitterData::GetParticleTransform
          (FDynamicMeshEmitterData *this,FBaseParticle *param_1,FParticleSystemSceneProxy *param_2,
          FSceneView *param_3,TMatrix<double> *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_1b8;
  float fStack_1b4;
  undefined4 local_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  float local_190;
  float fStack_18c;
  undefined4 local_188;
  TVector<float>_u_0 local_180;
  TVector<double>_u_0 local_170;
  TMatrix<double> local_158 [2];
  
  dVar11 = __real_3ff0000000000000;
  lVar8 = (longlong)(this->Source).MeshRotationOffset;
  uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar17 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  uVar1 = *(undefined4 *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8);
  uVar2 = *(undefined4 *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8 + 4);
  uVar3 = *(undefined4 *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8 + 8);
  fVar4 = *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar8);
  fVar5 = *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar8 + 4);
  _local_1b8 = (undefined8)*(float *)((longlong)&(param_1->Location).field0_0x0 + lVar8 + 8);
  local_170._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_170._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_170._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar14 = _local_1b8;
  if (*(int *)((longlong)&(this->Source)._padding_ + 4) != 0) {
    local_1a8._0_8_ = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
    dVar13 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
    dVar15 = (param_3->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
    local_1a8._8_8_ = dVar13;
    local_198 = dVar15;
    if (*(char *)((longlong)&(this->Source)._padding_ + 4) != '\0') {
      UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&param_2->field_0x110,local_158);
      uVar16 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar17 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_158[0].M[0][1] = (double)local_1a8._0_8_ * local_158[0].M[0][1];
      local_158[0].M[0][2] = (double)local_1a8._0_8_ * local_158[0].M[0][2];
      local_1a8._0_8_ =
           (double)local_1a8._8_8_ * local_158[0].M[1][0] +
           (double)local_1a8._0_8_ * local_158[0].M[0][0] + local_198 * local_158[0].M[2][0] +
           dVar11 * local_158[0].M[3][0];
      dVar13 = (double)local_1a8._8_8_ * local_158[0].M[1][1] + local_158[0].M[0][1] +
               local_198 * local_158[0].M[2][1] + dVar11 * local_158[0].M[3][1];
      dVar15 = (double)local_1a8._8_8_ * local_158[0].M[1][2] + local_158[0].M[0][2] +
               local_198 * local_158[0].M[2][2] + dVar11 * local_158[0].M[3][2];
    }
    local_1a8._0_8_ = (double)local_1a8._0_8_ - (param_1->Location).field0_0x0._s_0.X;
    dVar13 = dVar13 - (param_1->Location).field0_0x0._s_0.Y;
    dVar15 = dVar15 - (param_1->Location).field0_0x0._s_0.Z;
    fVar6 = *(float *)((longlong)&(param_1->OldLocation).field0_0x0 +
                      (longlong)*(int *)((longlong)&(this->Source)._padding_ + 4) + 4);
    dVar9 = dVar13 * dVar13 + (double)local_1a8._0_8_ * (double)local_1a8._0_8_ + dVar15 * dVar15;
    if (__real_3e45798ee0000000 < dVar9) {
      dVar11 = dVar11 / SQRT(dVar9);
      local_1a8._0_8_ = (double)local_1a8._0_8_ * dVar11;
      dVar13 = dVar13 * dVar11;
      dVar15 = dVar15 * dVar11;
    }
    dVar11 = (double)fVar6;
    local_170._s_0.Z = dVar11 * dVar15;
    local_170._s_0.Y = dVar11 * dVar13;
    local_170._s_0.X = dVar11 * (double)local_1a8._0_8_;
    uVar14 = _local_1b8;
    if ((float)dVar9 <= fVar6 * fVar6) {
      local_170._s_0.Z = local_170._s_0.Z * __real_4290000000000000;
      local_170._s_0.Y = local_170._s_0.Y * __real_4290000000000000;
      local_170._s_0.X = local_170._s_0.X * __real_4290000000000000;
    }
  }
  dVar11 = (double)CONCAT44(uVar17,uVar16);
  iVar7 = *(int *)((longlong)&(this->Source)._padding_ + 4);
  lVar8 = (longlong)iVar7;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (iVar7 != 0) {
    uVar10 = (undefined8)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8 + 0xc);
    uVar12 = (undefined8)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8 + 0x10);
    dVar11 = (double)*(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar8 + 0x14);
  }
  fStack_18c = (float)(param_3->ViewMatrices).ViewMatrix.M[1][2];
  local_190 = (float)(param_3->ViewMatrices).ViewMatrix.M[0][2];
  local_188 = (undefined4)(param_3->ViewMatrices).ViewMatrix.M[2][2];
  fStack_1b4 = (float)(double)uVar12;
  local_1b8 = (float)(double)uVar10;
  local_1b0 = (undefined4)dVar11;
  local_180._s_0.Z = (float)(double)uVar14;
  local_1a8._4_4_ = uVar2;
  local_1a8._0_4_ = uVar1;
  local_1a8._8_4_ = uVar3;
  local_180._s_0.X = fVar4;
  local_180._s_0.Y = fVar5;
  CalculateParticleTransform
            (this,(TMatrix<double> *)&param_2->field_0x110,&param_1->Location,param_1->Rotation,
             &param_1->Velocity,&param_1->Size,(TVector<float> *)local_1a8,
             (TVector<float> *)&local_180._s_0,(TVector<double> *)&local_170._s_0,
             (TVector<float> *)&local_1b8,&(param_3->ViewMatrices).ViewOrigin,
             (TVector<float> *)&local_190,param_4);
  return;
}

// GetSource @ 1481fedf0

FDynamicEmitterReplayDataBase * __thiscall
FDynamicMeshEmitterData::GetSource(FDynamicMeshEmitterData *this)

{
  return (FDynamicEmitterReplayDataBase *)&this->Source;
}

// GetSourceData @ 1481fee00

FDynamicSpriteEmitterReplayDataBase * __thiscall
FDynamicMeshEmitterData::GetSourceData(FDynamicMeshEmitterData *this)

{
  return (FDynamicSpriteEmitterReplayDataBase *)&this->Source;
}

// Init @ 148201690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDynamicMeshEmitterData::Init
          (FDynamicMeshEmitterData *this,bool param_1,FParticleMeshEmitterInstance *param_2,
          UStaticMesh *param_3,bool param_4,float param_5,Type param_6)

{
  TArray<FMaterialRenderProxy_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar uVar2;
  int iVar3;
  longlong *plVar4;
  UParticleModuleTypeDataMesh *pUVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UMaterial *pUVar10;
  undefined8 uVar11;
  uint uVar12;
  ForElementType<UMaterialInterface_*> FVar13;
  ForElementType<FMaterialRenderProxy_*> FVar14;
  ForElementType<FMaterialRenderProxy_*> FVar15;
  uint uVar16;
  uchar uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStackY_c8 [32];
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TArray<UMaterialInterface_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this->LODSizeScale = param_5;
  this->EmitterInstance = param_2;
  this->StaticMesh = param_3;
  this->bUseStaticMeshLODs = param_4;
  if ((param_3 == (UStaticMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                         ,0x3fb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((0x7ff < (int)(this->Source)._padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Source.ParticleStride < 2 * 1024",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemRender.cpp"
                         ,0x3fc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar16 = *(uint *)&param_2->field_0x20;
  lVar18 = *(longlong *)&param_2->field_0x8;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<UMaterialInterface_*>)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 2;
  uVar12 = 0;
  if ((int)uVar16 < *(int *)(lVar18 + 0x48)) {
    uVar12 = ~uVar16 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FParticleMeshEmitterInstance::GetMeshMaterials
            (param_2,&local_68,
             *(UParticleLODLevel **)(*(longlong *)(lVar18 + 0x40) + (longlong)(int)uVar16 * 8),false
            );
  uVar16 = 0;
  if (0 < local_68.ArrayNum) {
    lVar18 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < local_68.ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar13 = (ForElementType<UMaterialInterface_*>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
        FVar13 = local_68.AllocatorInstance.SecondaryData;
      }
      plVar4 = *(longlong **)(lVar18 + (longlong)FVar13);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar8 = (**(code **)(*plVar4 + 0x378))(plVar4,3), cVar8 == '\0')) {
        pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
        uVar12 = 0;
        if ((int)uVar16 < local_68.ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar13 = (ForElementType<UMaterialInterface_*>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
          FVar13 = local_68.AllocatorInstance.SecondaryData;
        }
        *(UMaterial **)(lVar18 + (longlong)FVar13) = pUVar10;
      }
      uVar16 = uVar16 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar16 < local_68.ArrayNum);
  }
  iVar3 = local_68.ArrayNum;
  pTVar1 = &this->MeshMaterials;
  iVar9 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMaterialRenderProxy_*>_>
                    (8,8,local_68.ArrayNum,&pTVar1->AllocatorInstance,
                     &(this->MeshMaterials).ArrayNum,&(this->MeshMaterials).ArrayMax);
  FVar14 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FMaterialRenderProxy_*>)0x0) {
    FVar14 = (ForElementType<FMaterialRenderProxy_*>)pTVar1;
  }
  memset((void *)((longlong)FVar14 + (longlong)iVar9 * 8),0,(longlong)iVar3 << 3);
  uVar16 = 0;
  if (0 < local_68.ArrayNum) {
    lVar18 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < local_68.ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar13 = (ForElementType<UMaterialInterface_*>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
        FVar13 = local_68.AllocatorInstance.SecondaryData;
      }
      uVar11 = (**(code **)(**(longlong **)(lVar18 + (longlong)FVar13) + 0x310))();
      uVar12 = 0;
      if ((int)uVar16 < (this->MeshMaterials).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar14 = (this->MeshMaterials).AllocatorInstance.SecondaryData;
      FVar15 = (ForElementType<FMaterialRenderProxy_*>)pTVar1;
      if (FVar14 != (ForElementType<FMaterialRenderProxy_*>)0x0) {
        FVar15 = FVar14;
      }
      uVar16 = uVar16 + 1;
      *(undefined8 *)(lVar18 + (longlong)FVar15) = uVar11;
      lVar18 = lVar18 + 8;
    } while ((int)uVar16 < local_68.ArrayNum);
  }
  lVar18 = (**(code **)(this->_padding_ + 0x50))(this);
  iVar3 = *(int *)(lVar18 + 0xa0);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffffe;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | (uint)(0 < iVar3);
  pUVar5 = param_2->MeshTypeData;
  if (pUVar5 != (UParticleModuleTypeDataMesh *)0x0) {
    this->MeshTypeDataOffset = *(uint *)&param_2->field_0x24;
    FRawDistributionVector::GetRange
              (&pUVar5->RollPitchYawRange,(TVector<double> *)&local_98._s_0,
               (TVector<double> *)&local_80._s_0);
    if ((local_98._s_0.Y * local_98._s_0.Y + local_98._s_0.X * local_98._s_0.X +
         local_98._s_0.Z * local_98._s_0.Z == 0.0) &&
       (local_80._s_0.Y * local_80._s_0.Y + local_80._s_0.X * local_80._s_0.X +
        local_80._s_0.Z * local_80._s_0.Z == 0.0)) {
      this->bApplyPreRotation = 0;
    }
    else {
      this->bApplyPreRotation = 1;
    }
    uVar16 = *(uint *)&this->field_0x164;
    if (pUVar5->bCameraFacing == 0) {
      this->CameraFacingOption = '\0';
      *(uint *)&this->field_0x164 = uVar16 & 0xfffffff3;
      uVar16 = uVar16 & 0xffffffe3;
      uVar17 = '\0';
    }
    else {
      uVar16 = uVar16 | 4;
      *(uint *)&this->field_0x164 = uVar16;
      uVar17 = (pUVar5->CameraFacingOption).Value;
      this->CameraFacingOption = uVar17;
      uVar16 = ((uint)(byte)pUVar5->field_0xac << 3 ^ uVar16) & 8 ^ uVar16;
      *(uint *)&this->field_0x164 = uVar16;
      uVar16 = ((uint)(byte)pUVar5->field_0xac << 3 ^ uVar16) & 0x10 ^ uVar16;
    }
    *(uint *)&this->field_0x164 = uVar16;
    uVar2 = (pUVar5->AxisLockOption).Value;
    if ((byte)(uVar2 - 1) < 6) {
      fVar19 = 0.0;
      *(uint *)&this->field_0x164 = uVar16 | 2;
      if (uVar2 == '\x03') {
        fVar20 = 0.0;
        fVar22 = __real_3f800000;
        fVar21 = 0.0;
      }
      else {
        fVar20 = fVar19;
        if (uVar2 == '\x06') {
          fVar22 = __real_bf800000;
          fVar21 = 0.0;
        }
        else {
          fVar22 = 0.0;
          fVar21 = __real_3f800000;
          if ((((uVar2 != '\x02') && (fVar21 = __real_bf800000, uVar2 != '\x05')) &&
              (fVar21 = 0.0, fVar20 = __real_3f800000, uVar2 != '\x01')) &&
             (fVar20 = fVar19, uVar2 == '\x04')) {
            fVar20 = __real_bf800000;
          }
        }
      }
      (this->Source).LockedAxis.field0_0x0._s_0.X = fVar20;
      (this->Source).LockedAxis.field0_0x0._s_0.Y = fVar21;
      (this->Source).LockedAxis.field0_0x0._s_0.Z = fVar22;
    }
    else if ((byte)(uVar17 - 5) < 4) {
      *(uint *)&this->field_0x164 = uVar16 | 2;
      *(undefined8 *)&(this->Source).LockedAxis.field0_0x0 = 0x3f800000;
      (this->Source).LockedAxis.field0_0x0._s_0.Z = 0.0;
    }
  }
  (this->Source)._padding_ = 0;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReleaseRenderThreadResources @ 14820e420

void __thiscall
FDynamicMeshEmitterData::ReleaseRenderThreadResources
          (FDynamicMeshEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  return;
}

// SetupVertexFactory @ 148219fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshEmitterData::SetupVertexFactory
          (FDynamicMeshEmitterData *this,FRHICommandListBase *param_1,
          FMeshParticleVertexFactory *param_2,FStaticMeshLODResources *param_3,uint param_4)

{
  undefined1 auStack_188 [32];
  FDataType local_168;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_168._padding_._4_4_ = 4;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_._0_4_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_._0_4_ = 0xffffffff;
  local_168._padding_ = 0;
  local_168._padding_ = 0;
  local_168._padding_._4_2_ = 0xff;
  local_168._padding_._6_1_ = 0;
  local_168.ParticleColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.ParticleColorComponent.StreamOffset = 0;
  local_168.ParticleColorComponent.Offset = '\0';
  local_168.ParticleColorComponent.Stride = '\0';
  local_168.ParticleColorComponent.Type.Value = '\0';
  local_168.ParticleColorComponent.VertexStreamUsage = Default;
  local_168.TransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[0].StreamOffset = 0;
  local_168.TransformComponent[0].Offset = '\0';
  local_168.TransformComponent[0].Stride = '\0';
  local_168.TransformComponent[0].Type.Value = '\0';
  local_168.TransformComponent[0].VertexStreamUsage = Default;
  local_168.TransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[1].StreamOffset = 0;
  local_168.TransformComponent[1].Offset = '\0';
  local_168.TransformComponent[1].Stride = '\0';
  local_168.TransformComponent[1].Type.Value = '\0';
  local_168.TransformComponent[1].VertexStreamUsage = Default;
  local_168.TransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[2].StreamOffset = 0;
  local_168.TransformComponent[2].Offset = '\0';
  local_168.TransformComponent[2].Stride = '\0';
  local_168.TransformComponent[2].Type.Value = '\0';
  local_168.TransformComponent[2].VertexStreamUsage = Default;
  local_168.VelocityComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.VelocityComponent.StreamOffset = 0;
  local_168.VelocityComponent.Offset = '\0';
  local_168.VelocityComponent.Stride = '\0';
  local_168.VelocityComponent.Type.Value = '\0';
  local_168.VelocityComponent.VertexStreamUsage = Default;
  local_168.SubUVs.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.SubUVs.StreamOffset = 0;
  local_168.SubUVs.Offset = '\0';
  local_168.SubUVs.Stride = '\0';
  local_168.SubUVs.Type.Value = '\0';
  local_168.SubUVs.VertexStreamUsage = Default;
  local_168.SubUVLerpAndRelTime.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.SubUVLerpAndRelTime.StreamOffset = 0;
  local_168.SubUVLerpAndRelTime.Offset = '\0';
  local_168.SubUVLerpAndRelTime.Stride = '\0';
  local_168.SubUVLerpAndRelTime.Type.Value = '\0';
  local_168.SubUVLerpAndRelTime.VertexStreamUsage = Default;
  local_168.bInitialized = false;
  FPositionVertexBuffer::BindPositionVertexBuffer
            (&(param_3->VertexBuffers).PositionVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_168);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            (&(param_3->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_168);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            (&(param_3->VertexBuffers).StaticMeshVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_168,4);
  FColorVertexBuffer::BindColorVertexBuffer
            (&(param_3->VertexBuffers).ColorVertexBuffer,(FVertexFactory *)param_2,
             (FStaticMeshDataType *)&local_168);
  local_168.ParticleColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.ParticleColorComponent.StreamOffset = 0;
  local_168.ParticleColorComponent.Offset = '\0';
  local_168.ParticleColorComponent.Stride = '\0';
  local_168.ParticleColorComponent.Type.Value = '\x04';
  local_168.ParticleColorComponent.VertexStreamUsage = Instancing;
  local_168.TransformComponent[0].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[0].StreamOffset = 0;
  local_168.TransformComponent[0].Offset = '\x10';
  local_168.TransformComponent[0].Stride = '\0';
  local_168.TransformComponent[0].Type.Value = '\x04';
  local_168.TransformComponent[0].VertexStreamUsage = Instancing;
  local_168.TransformComponent[1].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[1].StreamOffset = 0;
  local_168.TransformComponent[1].Offset = ' ';
  local_168.TransformComponent[1].Stride = '\0';
  local_168.TransformComponent[1].Type.Value = '\x04';
  local_168.TransformComponent[1].VertexStreamUsage = Instancing;
  local_168.TransformComponent[2].VertexBuffer = (FVertexBuffer *)0x0;
  local_168.TransformComponent[2].StreamOffset = 0;
  local_168.TransformComponent[2].Offset = '0';
  local_168.TransformComponent[2].Stride = '\0';
  local_168.TransformComponent[2].Type.Value = '\x04';
  local_168.TransformComponent[2].VertexStreamUsage = Instancing;
  local_168.VelocityComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.VelocityComponent.StreamOffset = 0;
  local_168.VelocityComponent.Offset = '@';
  local_168.VelocityComponent.Stride = '\0';
  local_168.VelocityComponent.Type.Value = '\x04';
  local_168.VelocityComponent.VertexStreamUsage = Instancing;
  local_168.SubUVs.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.SubUVs.StreamOffset = 0;
  local_168.SubUVs.Offset = 'P';
  local_168.SubUVs.Stride = '\0';
  local_168.SubUVs.Type.Value = '\n';
  local_168.SubUVs.VertexStreamUsage = Instancing;
  local_168.SubUVLerpAndRelTime.VertexBuffer = (FVertexBuffer *)0x0;
  local_168.SubUVLerpAndRelTime.StreamOffset = 0;
  local_168.SubUVLerpAndRelTime.Offset = 'X';
  local_168.SubUVLerpAndRelTime.Stride = '\0';
  local_168.SubUVLerpAndRelTime.Type.Value = '\x02';
  local_168.SubUVLerpAndRelTime.VertexStreamUsage = Instancing;
  local_168.bInitialized = true;
  FMeshParticleVertexFactory::SetData(param_2,param_1,&local_168);
  param_2->LODIdx = (uchar)param_4;
  return;
}

// UpdateRenderThreadResourcesEmitter @ 148225860

void __thiscall
FDynamicMeshEmitterData::UpdateRenderThreadResourcesEmitter
          (FDynamicMeshEmitterData *this,FParticleSystemSceneProxy *param_1)

{
  return;
}

