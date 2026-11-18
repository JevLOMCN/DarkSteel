// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 17

// FDefaultXRCamera @ 14cf7d400

FDefaultXRCamera * __thiscall
FDefaultXRCamera::FDefaultXRCamera
          (FDefaultXRCamera *this,FAutoRegister *param_1,IXRTrackingSystem *param_2,int param_3)

{
  double dVar1;
  
  *(undefined ***)this = &___7IXRCamera__6B_;
  FSceneViewExtensionBase::FSceneViewExtensionBase
            ((FSceneViewExtensionBase *)&this->field_0x8,param_1);
  this->TrackingSystem = param_2;
  *(undefined ***)this = &_vftable__for__IXRCamera__;
  this->DeviceId = param_3;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FHMDSceneViewExtension__;
  (this->DeltaControlRotation).Pitch = 0.0;
  (this->DeltaControlRotation).Yaw = 0.0;
  (this->DeltaControlRotation).Roll = 0.0;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  (this->DeltaControlOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->DeltaControlOrientation).Y = dVar1;
  dVar1 = UE::Math::TQuat<double>::Identity.W;
  (this->DeltaControlOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->DeltaControlOrientation).W = dVar1;
  (this->LateUpdate)._padding_ = (longlong)&___7FLateUpdateManager__6B_;
  (this->SmoothedCameraRotation).Pitch = 0.0;
  (this->SmoothedCameraRotation).Yaw = 0.0;
  (this->SmoothedCameraRotation).Roll = 0.0;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesGame.ParentToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x8 = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x20 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x28 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x2c = 0x80;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x34 = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x40 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesGame.Primitives.field_0x48 = 0;
  (this->LateUpdate).PipelinedUpdateStatesGame.bSkip = false;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->LateUpdate).PipelinedUpdateStatesRendering.ParentToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x8 = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x20 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x28 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x2c = 0x80;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x34 = 0;
  *(undefined8 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x40 = 0;
  *(undefined4 *)&(this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x48 = 0;
  (this->LateUpdate).PipelinedUpdateStatesRendering.bSkip = false;
  this->bUseImplicitHMDPosition = false;
  return this;
}

// ~FDefaultXRCamera @ 14cf7ec80

void __thiscall FDefaultXRCamera::~FDefaultXRCamera(FDefaultXRCamera *this)

{
  *(undefined ***)this = &_vftable__for__IXRCamera__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FHMDSceneViewExtension__;
  FLateUpdateManager::~FLateUpdateManager(&this->LateUpdate);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)&this->field_0x8);
  return;
}

// ApplyHMDRotation @ 14cf82e90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FDefaultXRCamera::ApplyHMDRotation
          (FDefaultXRCamera *this,APlayerController *param_1,TRotator<double> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  char cVar9;
  double *pdVar10;
  TQuat<double> *pTVar11;
  TRotator<double> *pTVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar27;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_c8 [24];
  TRotator<double> local_b0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  auVar29._0_8_ = param_2->Pitch;
  auVar29._8_8_ = param_2->Yaw;
  auVar17 = divpd(auVar29,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar17 = roundpd(in_XMM1,auVar17,3);
  dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar28._0_8_ = auVar17._0_8_ * dVar4;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar28._8_8_ = auVar17._8_8_ * dVar7;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2->Roll;
  auVar17 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar37 = (double)auVar29._0_8_ - auVar28._0_8_;
  dVar40 = (double)auVar29._8_8_ - auVar28._8_8_;
  auVar29 = roundpd(auVar28,auVar17,3);
  dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar18._8_4_ = SUB84(dVar40,0);
  auVar18._0_8_ = dVar37;
  auVar18._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  dVar27 = auVar18._8_8_ + dVar7;
  dVar5 = param_2->Roll - auVar29._0_8_ * dVar3;
  dVar6 = 0.0 - auVar29._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar13 = -(ulonglong)(0.0 <= dVar37);
  uVar15 = -(ulonglong)(0.0 <= dVar40);
  uVar14 = -(ulonglong)(0.0 <= dVar5);
  uVar16 = -(ulonglong)(0.0 <= dVar6);
  auVar30._0_8_ = uVar13 & (ulonglong)dVar37;
  auVar30._8_4_ = (undefined4)(uVar15 & (ulonglong)dVar40);
  auVar30._12_4_ = (undefined4)((uVar15 & (ulonglong)dVar40) >> 0x20);
  auVar41._0_4_ = ~(uint)uVar13 & SUB84(dVar37 + dVar4,0);
  auVar41._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar37 + dVar4) >> 0x20);
  auVar41._8_4_ = ~(uint)uVar15 & SUB84(dVar27,0);
  auVar41._12_4_ = ~(uint)(uVar15 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
  auVar41 = auVar41 | auVar30;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar5;
  auVar19._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar27 = auVar19._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar35._0_8_ = (ulonglong)dVar5 & uVar14;
  auVar35._8_4_ = (undefined4)(uVar16 & (ulonglong)dVar6);
  auVar35._12_4_ = (undefined4)((uVar16 & (ulonglong)dVar6) >> 0x20);
  auVar31._0_4_ = ~(uint)uVar14 & SUB84(dVar5 + dVar3,0);
  auVar31._4_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)(dVar5 + dVar3) >> 0x20);
  auVar31._8_4_ = ~(uint)uVar16 & SUB84(dVar27,0);
  auVar31._12_4_ = ~(uint)(uVar16 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
  auVar31 = auVar31 | auVar35;
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar31._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar41._0_8_);
  uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar41._8_8_);
  auVar20._0_8_ = (ulonglong)(auVar41._0_8_ - dVar4) & uVar15;
  uVar13 = uVar16 & (ulonglong)(auVar41._8_8_ - dVar7);
  auVar20._8_4_ = (undefined4)uVar13;
  auVar20._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar38._0_4_ = ~(uint)uVar15 & auVar41._0_4_;
  auVar38._4_4_ = ~(uint)(uVar15 >> 0x20) & auVar41._4_4_;
  auVar38._8_4_ = ~(uint)uVar16 & auVar41._8_4_;
  auVar38._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar41._12_4_;
  param_2->Pitch = (double)SUB168(auVar20 | auVar38,0);
  param_2->Yaw = (double)SUB168(auVar20 | auVar38,8);
  param_2->Roll =
       (double)(uVar14 & (ulonglong)(auVar31._0_8_ - dVar3) |
               CONCAT44(~(uint)(uVar14 >> 0x20) & auVar31._4_4_,~(uint)uVar14 & auVar31._0_4_));
  cVar9 = (**(code **)((longlong)*this->TrackingSystem + 0x58))
                    (this->TrackingSystem,this->DeviceId,&local_98,local_c8);
  if (cVar9 != '\0') {
    pdVar10 = (double *)(**(code **)(param_1->_padding_ + 0x7a8))(param_1,&local_b0);
    pTVar12 = &this->DeltaControlRotation;
    auVar22._0_8_ = (param_2->Roll - pdVar10[2]) + (this->DeltaControlRotation).Roll;
    dVar37 = (param_2->Pitch - *pdVar10) + pTVar12->Pitch;
    auVar32._0_8_ = (param_2->Yaw - pdVar10[1]) + (this->DeltaControlRotation).Yaw;
    auVar32._8_8_ = 0;
    auVar21._8_4_ = SUB84(auVar32._0_8_,0);
    auVar21._0_8_ = dVar37;
    auVar21._12_4_ = (int)((ulonglong)auVar32._0_8_ >> 0x20);
    auVar29 = divpd(auVar21,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
    auVar29 = roundpd(auVar32,auVar29,3);
    dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
    auVar33._0_8_ = auVar29._0_8_ * dVar6;
    dVar4 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
    auVar33._8_8_ = auVar29._8_8_ * dVar4;
    auVar22._8_8_ = 0;
    auVar29 = divpd(auVar22,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
    dVar37 = dVar37 - auVar33._0_8_;
    dVar40 = auVar32._0_8_ - auVar33._8_8_;
    auVar29 = roundpd(auVar33,auVar29,3);
    dVar7 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
    auVar23._8_4_ = SUB84(dVar40,0);
    auVar23._0_8_ = dVar37;
    auVar23._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    dVar27 = auVar23._8_8_ + dVar4;
    dVar3 = auVar22._0_8_ - auVar29._0_8_ * dVar7;
    dVar5 = 0.0 - auVar29._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    uVar13 = -(ulonglong)(0.0 <= dVar37);
    uVar14 = -(ulonglong)(0.0 <= dVar40);
    auVar34._0_8_ = uVar13 & (ulonglong)dVar37;
    auVar34._8_4_ = (undefined4)(uVar14 & (ulonglong)dVar40);
    auVar34._12_4_ = (undefined4)((uVar14 & (ulonglong)dVar40) >> 0x20);
    auVar39._0_4_ = ~(uint)uVar13 & SUB84(dVar37 + dVar6,0);
    auVar39._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar37 + dVar6) >> 0x20);
    auVar39._8_4_ = ~(uint)uVar14 & SUB84(dVar27,0);
    auVar39._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
    auVar24._8_4_ = SUB84(dVar5,0);
    auVar24._0_8_ = dVar3;
    auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar27 = auVar24._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
    auVar39 = auVar39 | auVar34;
    uVar13 = -(ulonglong)(0.0 <= dVar3);
    uVar14 = -(ulonglong)(0.0 <= dVar5);
    auVar42._0_4_ = ~(uint)uVar13 & SUB84(dVar3 + dVar7,0);
    auVar42._4_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)(dVar3 + dVar7) >> 0x20);
    auVar42._8_4_ = ~(uint)uVar14 & SUB84(dVar27,0);
    auVar42._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar27 >> 0x20);
    auVar8._8_4_ = (int)((ulonglong)dVar5 & uVar14);
    auVar8._0_8_ = (ulonglong)dVar3 & uVar13;
    auVar8._12_4_ = (int)(((ulonglong)dVar5 & uVar14) >> 0x20);
    auVar42 = auVar42 | auVar8;
    uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_);
    uVar16 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
    uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar42._0_8_);
    auVar36._0_8_ = uVar14 & (ulonglong)(auVar39._0_8_ - dVar6);
    uVar13 = uVar16 & (ulonglong)(auVar39._8_8_ - dVar4);
    auVar36._8_4_ = (undefined4)uVar13;
    auVar36._12_4_ = (undefined4)(uVar13 >> 0x20);
    auVar25._0_4_ = ~(uint)uVar14 & auVar39._0_4_;
    auVar25._4_4_ = ~(uint)(uVar14 >> 0x20) & auVar39._4_4_;
    auVar25._8_4_ = ~(uint)uVar16 & auVar39._8_4_;
    auVar25._12_4_ = ~(uint)(uVar16 >> 0x20) & auVar39._12_4_;
    pTVar12->Pitch = (double)SUB168(auVar36 | auVar25,0);
    pTVar12->Yaw = (double)SUB168(auVar36 | auVar25,8);
    (this->DeltaControlRotation).Roll =
         (double)((ulonglong)(auVar42._0_8_ - dVar7) & uVar15 |
                 CONCAT44(~(uint)(uVar15 >> 0x20) & auVar42._4_4_,~(uint)uVar15 & auVar42._0_4_));
    pTVar12->Pitch = 0.0;
    (this->DeltaControlRotation).Roll = 0.0;
    local_b0.Roll = auVar22._0_8_;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(pTVar12,(TQuat<double> *)local_78);
    dVar3 = pTVar11->Y;
    (this->DeltaControlOrientation).X = pTVar11->X;
    (this->DeltaControlOrientation).Y = dVar3;
    uVar1 = pTVar11->Z;
    uVar2 = pTVar11->W;
    (this->DeltaControlOrientation).Z = (double)uVar1;
    (this->DeltaControlOrientation).W = (double)uVar2;
    dVar6 = (this->DeltaControlOrientation).X;
    dVar4 = (this->DeltaControlOrientation).Y;
    auVar26._8_4_ = (int)uVar1;
    auVar26._0_8_ = uVar1;
    auVar26._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    dVar3 = dVar6 * local_88 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dStack_90 * (double)uVar2 +
            dStack_80 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar26._8_8_ * local_98 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar5 = dVar6 * local_98 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dStack_80 * (double)uVar2 +
            dStack_90 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            (double)uVar1 * local_88 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_78._8_4_ = SUB84(dVar3,0);
    local_78._0_8_ =
         dVar6 * dStack_80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         local_98 * (double)uVar2 +
         local_88 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         (double)uVar1 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
    ;
    local_78._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_68._8_4_ = SUB84(dVar5,0);
    local_68._0_8_ =
         dVar6 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         local_88 * (double)uVar2 +
         local_98 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         (double)uVar1 * dStack_80 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
    ;
    local_68._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    pTVar12 = UE::Math::TRotator<double>::TRotator<double>(&local_b0,(TQuat<double> *)local_78);
    dVar3 = pTVar12->Yaw;
    param_2->Pitch = pTVar12->Pitch;
    param_2->Yaw = dVar3;
    param_2->Roll = pTVar12->Roll;
  }
  return;
}

// BeginRenderViewFamily @ 14cf83780

void __thiscall
FDefaultXRCamera::BeginRenderViewFamily(FDefaultXRCamera *this,FSceneViewFamily *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRCamera.cpp"
                       ,0xe4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cf837d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x28 + 0x198))(*(longlong **)&this->field_0x28,param_1);
  return;
}

// CalculateStereoCameraOffset @ 14cf83dc0

void __thiscall
FDefaultXRCamera::CalculateStereoCameraOffset
          (FDefaultXRCamera *this,int param_1,TRotator<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  TQuat<double> *pTVar11;
  TVector<double> *pTVar12;
  TRotator<double> *pTVar13;
  longlong lVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  TVector<double>_u_0 local_138;
  undefined1 local_118 [16];
  TVector<double>_u_0 local_108;
  undefined1 local_e8 [32];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [112];
  
  cVar10 = (**(code **)((longlong)*this->TrackingSystem + 0x60))
                     (this->TrackingSystem,this->DeviceId,param_1,&local_a8,&local_c8);
  if (cVar10 == '\0') {
    if (param_1 != -1) {
      return;
    }
    lVar14 = (**(code **)((longlong)*this->TrackingSystem + 0x118))();
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (longlong *)(**(code **)((longlong)*this->TrackingSystem + 0x118))();
    (**(code **)(*plVar15 + 0x70))(plVar15,local_res8,local_118);
    if (0.0 < local_res8[0]) {
      plVar15 = (longlong *)(**(code **)((longlong)*this->TrackingSystem + 0x118))();
      fVar16 = tanf(local_res8[0] * __real_3c8efa35);
      fVar17 = (float)(**(code **)(*plVar15 + 0x90))(plVar15);
      pTVar11 = UE::Math::TRotator<double>::Quaternion(param_2,(TQuat<double> *)local_e8);
      local_138._s_0.Y = 0.0;
      local_138._s_0.Z = 0.0;
      local_138._s_0.X = (double)((fVar17 * __real_bf000000) / fVar16);
      pTVar12 = UE::Math::TQuat<double>::RotateVector
                          (pTVar11,(TVector<double> *)&local_108._s_0,
                           (TVector<double> *)&local_138._s_0);
      (param_3->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
      (param_3->field0_0x0)._s_0.Y = (pTVar12->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
      (param_3->field0_0x0)._s_0.Z = (pTVar12->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
    }
  }
  else {
    pTVar11 = UE::Math::TRotator<double>::Quaternion(param_2,(TQuat<double> *)local_e8);
    local_138._s_0.X = local_c8;
    local_138._s_0.Y = dStack_c0;
    local_138._s_0.Z = local_b8;
    pTVar12 = UE::Math::TQuat<double>::RotateVector
                        (pTVar11,(TVector<double> *)&local_108._s_0,
                         (TVector<double> *)&local_138._s_0);
    (param_3->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X + (pTVar12->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (pTVar12->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = (pTVar12->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
    pTVar11 = UE::Math::TRotator<double>::Quaternion(param_2,(TQuat<double> *)&local_138._s_0);
    dVar3 = pTVar11->X;
    dVar4 = pTVar11->Y;
    dVar5 = pTVar11->Z;
    dVar6 = pTVar11->W;
    dVar1 = dVar3 * local_98 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar6 * dStack_a0 +
            dStack_90 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar5 * local_a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar2 = dVar3 * local_a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dStack_90 * dVar6 +
            dVar4 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar5 * local_98 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_e8._8_4_ = SUB84(dVar1,0);
    local_e8._0_8_ =
         dVar3 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar6 * local_a8 +
         local_98 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar5 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_e8._24_4_ = SUB84(dVar2,0);
    local_e8._16_8_ =
         dVar3 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         local_98 * dVar6 +
         dVar4 * local_a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar5 * dStack_90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_e8._28_4_ = (int)((ulonglong)dVar2 >> 0x20);
    pTVar13 = UE::Math::TRotator<double>::TRotator<double>
                        ((TRotator<double> *)&local_108._s_0,(TQuat<double> *)local_e8);
    uVar7 = *(undefined4 *)((longlong)&pTVar13->Pitch + 4);
    uVar8 = *(undefined4 *)&pTVar13->Yaw;
    uVar9 = *(undefined4 *)((longlong)&pTVar13->Yaw + 4);
    *(undefined4 *)&param_2->Pitch = *(undefined4 *)&pTVar13->Pitch;
    *(undefined4 *)((longlong)&param_2->Pitch + 4) = uVar7;
    *(undefined4 *)&param_2->Yaw = uVar8;
    *(undefined4 *)((longlong)&param_2->Yaw + 4) = uVar9;
    param_2->Roll = pTVar13->Roll;
  }
  if (this->bUseImplicitHMDPosition == false) {
    (**(code **)((longlong)*this->TrackingSystem + 0x58))
              (this->TrackingSystem,this->DeviceId,local_88,&local_138);
    local_108._s_0.X = local_138._s_0.X;
    local_108._s_0.Y = local_138._s_0.Y;
    local_108._s_0.Z = local_138._s_0.Z;
    pTVar12 = UE::Math::TQuat<double>::RotateVector
                        (&this->DeltaControlOrientation,(TVector<double> *)local_e8,
                         (TVector<double> *)&local_108._s_0);
    (param_3->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = (pTVar12->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.Z = (pTVar12->field0_0x0)._s_0.Z + (param_3->field0_0x0)._s_0.Z;
  }
  return;
}

// GetSystemDeviceId @ 14cf914b0

int __thiscall FDefaultXRCamera::GetSystemDeviceId(FDefaultXRCamera *this)

{
  return this->DeviceId;
}

// GetSystemName @ 14cf914c0

FName __thiscall FDefaultXRCamera::GetSystemName(FDefaultXRCamera *this)

{
  FName in_RDX;
  
  (**(code **)*this->TrackingSystem)();
  return in_RDX;
}

// GetUseImplicitHMDPosition @ 14cf91a50

bool __thiscall FDefaultXRCamera::GetUseImplicitHMDPosition(FDefaultXRCamera *this)

{
  return this->bUseImplicitHMDPosition;
}

// IsActiveThisFrame_Internal @ 14cf92940

bool __thiscall
FDefaultXRCamera::IsActiveThisFrame_Internal
          (FDefaultXRCamera *this,FSceneViewExtensionContext *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = FHMDSceneViewExtension::IsActiveThisFrame_Internal((FHMDSceneViewExtension *)this,param_1)
  ;
  (this->LateUpdate).PipelinedUpdateStatesRendering.field_0xb9 = bVar1;
  if (bVar1) {
    cVar2 = (**(code **)(**(longlong **)&this->field_0x28 + 0x148))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// OverrideFOV @ 14cf93f00

void __thiscall FDefaultXRCamera::OverrideFOV(FDefaultXRCamera *this,float *param_1)

{
  return;
}

// PreRenderViewFamily_RenderThread @ 14cf96e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultXRCamera::PreRenderViewFamily_RenderThread
          (FDefaultXRCamera *this,FRDGBuilder *param_1,FSceneViewFamily *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRCamera.cpp"
                       ,0xea,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_2->Views).ArrayNum < 1) ||
     (*(char *)(*(longlong *)(param_2->Views).AllocatorInstance.Data + 0x11e8) == '\0')) {
    (**(code **)(**(longlong **)&this->field_0x28 + 0x188))
              (*(longlong **)&this->field_0x28,param_1,param_2);
    cVar5 = (**(code **)(**(longlong **)&this->field_0x28 + 0x20))();
    if (cVar5 != '\0') {
      cVar5 = (**(code **)(**(longlong **)&this->field_0x28 + 0x58))
                        (*(longlong **)&this->field_0x28,*(undefined4 *)&this->TrackingSystem,
                         &local_108,&local_128);
      if (cVar5 != '\0') {
        iVar1 = (param_2->Views).ArrayNum;
        if (iVar1 < 1) {
          local_138 = 0;
          local_130 = (longlong)iVar1;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar2 = *(longlong *)(param_2->Views).AllocatorInstance.Data;
        if (lVar2 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MainView",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRCamera.cpp"
                             ,0xfb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_88.Rotation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0xc70);
        local_88.Rotation.ZW.m128d_f64[1] = *(double *)(lVar2 + 0xc78);
        local_88.Rotation.XY.m128d_f64[0] = *(double *)(lVar2 + 0xc60);
        local_88.Rotation.XY.m128d_f64[1] = *(double *)(lVar2 + 0xc68);
        local_88.Translation.XY.m128d_f64[0] = *(double *)(lVar2 + 0xc80);
        local_88.Translation.XY.m128d_f64[1] = *(double *)(lVar2 + 0xc88);
        local_88.Translation.ZW.m128d_f64[0] = *(double *)(lVar2 + 0xc90);
        local_88.Translation.ZW.m128d_f64[1] = 0.0;
        local_e8.Rotation.ZW.m128d_f64[0] = local_f8;
        local_e8.Rotation.ZW.m128d_f64[1] = dStack_f0;
        local_e8.Translation.ZW.m128d_f64[0] = local_118;
        local_e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_88.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_88.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_88.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_88.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_e8.Rotation.XY.m128d_f64[0] = local_108;
        local_e8.Rotation.XY.m128d_f64[1] = dStack_100;
        local_e8.Translation.XY.m128d_f64[0] = local_128;
        local_e8.Translation.XY.m128d_f64[1] = dStack_120;
        local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        FLateUpdateManager::Apply_RenderThread
                  ((FLateUpdateManager *)&this->field_0x98,param_2->Scene,&local_88,&local_e8);
        (**(code **)(**(longlong **)&this->field_0x28 + 0x1a8))
                  (*(longlong **)&this->field_0x28,param_1,&local_e8);
      }
    }
  }
  return;
}

// PreRenderView_RenderThread @ 14cf97080

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultXRCamera::PreRenderView_RenderThread
          (FDefaultXRCamera *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  longlong *plVar12;
  TMatrix<double> *pTVar13;
  TQuat<double> *pTVar14;
  TRotator<double> *pTVar15;
  bool bVar16;
  double dVar17;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  undefined1 local_238 [8];
  TReferenceControllerBase<1> *local_230;
  undefined1 local_228 [8];
  TReferenceControllerBase<1> *local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  TRotator<double> local_1f8;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [128];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar16 = false;
  local_278 = 0;
  bVar10 = IsInRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultXRCamera.cpp"
                          ,0xbb,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->LateUpdate).PipelinedUpdateStatesRendering.Primitives.field_0x48 != '\0') {
    return;
  }
  cVar11 = (**(code **)(**(longlong **)&this->field_0x28 + 0x28))();
  if (cVar11 != '\0') {
    plVar12 = (longlong *)
              (**(code **)(**(longlong **)&this->field_0x28 + 0x120))
                        (*(longlong **)&this->field_0x28,local_238);
    bVar16 = true;
    if ((*plVar12 != 0) && (param_2->bIsSceneCapture == false)) {
      bVar10 = true;
      goto LAB_14cf97135;
    }
  }
  bVar10 = false;
LAB_14cf97135:
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_230);
  }
  if (bVar10) {
    plVar12 = (longlong *)
              (**(code **)(**(longlong **)&this->field_0x28 + 0x120))
                        (*(longlong **)&this->field_0x28,local_228);
    if ((*plVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pTVar13 = (TMatrix<double> *)
              (**(code **)(*(longlong *)*plVar12 + 0x60))
                        ((longlong *)*plVar12,local_118,param_2->StereoViewIndex);
    FSceneView::UpdateProjectionMatrix(param_2,pTVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_220);
  }
  cVar11 = (**(code **)(**(longlong **)&this->field_0x28 + 0x58))
                     (*(longlong **)&this->field_0x28,*(undefined4 *)&this->TrackingSystem,
                      &local_258,&local_270);
  if (cVar11 != '\0') {
    dVar2 = (param_2->BaseHmdOrientation).X *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar3 = (param_2->BaseHmdOrientation).Y *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar4 = (param_2->BaseHmdOrientation).Z *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar5 = (param_2->BaseHmdOrientation).W *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar6 = dVar2 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar5 * local_258 +
            dVar3 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar4 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar7 = dVar2 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar5 * dStack_250 +
            dVar3 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar4 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar8 = dVar2 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar5 * local_248 +
            dVar3 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar4 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar3 = dVar2 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar5 * dStack_240 +
            dVar3 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar4 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    pTVar14 = UE::Math::TRotator<double>::Quaternion(&param_2->ViewRotation,&local_1d8);
    dVar4 = pTVar14->X;
    dVar5 = pTVar14->Y;
    dVar9 = pTVar14->Z;
    dVar17 = pTVar14->W;
    dVar2 = dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar17 * dVar7 +
            dVar5 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_218._8_4_ = SUB84(dVar2,0);
    local_218._0_8_ =
         dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar17 * dVar6 +
         dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_218._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar2 = dVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar17 * dVar3 +
            dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar9 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_208._8_4_ = SUB84(dVar2,0);
    local_208._0_8_ =
         dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar17 * dVar8 +
         dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_208._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    pTVar15 = UE::Math::TRotator<double>::TRotator<double>(&local_1f8,(TQuat<double> *)local_218);
    dVar2 = pTVar15->Yaw;
    (param_2->ViewRotation).Pitch = pTVar15->Pitch;
    (param_2->ViewRotation).Yaw = dVar2;
    (param_2->ViewRotation).Roll = pTVar15->Roll;
    if ((this->LateUpdate).PipelinedUpdateStatesRendering.field_0xb8 != '\0') {
      pTVar14 = UE::Math::TRotator<double>::Quaternion(&param_2->ViewRotation,&local_1b8);
      local_248 = local_248 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dStack_240 = dStack_240 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar2 = pTVar14->X;
      dVar3 = pTVar14->Y;
      dVar4 = pTVar14->Z;
      dVar5 = pTVar14->W;
      local_258 = local_258 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dStack_250 = dStack_250 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_260 = local_260 - (param_2->BaseHmdLocation).field0_0x0._s_0.Z;
      local_270 = local_270 - (param_2->BaseHmdLocation).field0_0x0._s_0.X;
      local_268 = local_268 - (param_2->BaseHmdLocation).field0_0x0._s_0.Y;
      dVar8 = dVar2 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar5 * local_258 +
              dVar3 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar4 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar9 = dVar2 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar5 * dStack_250 +
              dVar3 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              dVar4 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar6 = dVar2 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar5 * local_248 +
              dVar3 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar4 * dStack_240 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar7 = dVar2 * local_258 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar5 * dStack_240 +
              dVar3 * dStack_250 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar4 * local_248 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar5 = local_260 * dVar9 - local_268 * dVar6;
      dVar5 = dVar5 + dVar5;
      dVar4 = local_270 * dVar6 - local_260 * dVar8;
      dVar4 = dVar4 + dVar4;
      dVar17 = local_268 * dVar8 - local_270 * dVar9;
      dVar17 = dVar17 + dVar17;
      dVar2 = (param_2->ViewLocation).field0_0x0._s_0.Y;
      (param_2->ViewLocation).field0_0x0._s_0.X =
           (dVar17 * dVar9 - dVar4 * dVar6) + dVar5 * dVar7 +
           local_270 + (param_2->ViewLocation).field0_0x0._s_0.X;
      dVar3 = (param_2->ViewLocation).field0_0x0._s_0.Z;
      (param_2->ViewLocation).field0_0x0._s_0.Y =
           (dVar5 * dVar6 - dVar17 * dVar8) + dVar4 * dVar7 + local_268 + dVar2;
      (param_2->ViewLocation).field0_0x0._s_0.Z =
           (dVar4 * dVar8 - dVar5 * dVar9) + local_260 + dVar17 * dVar7 + dVar3;
    }
    FSceneView::UpdateViewMatrix(param_2);
    if (param_2->bIsPlanarReflection != false) {
      dVar2 = (double)(param_2->GlobalClippingPlane)._padding_;
      dVar3 = (double)(param_2->GlobalClippingPlane)._padding_;
      dVar4 = (double)(param_2->GlobalClippingPlane)._padding_;
      local_128 = (param_2->GlobalClippingPlane).W;
      local_138 = (dVar2 + dVar2) * local_128;
      local_120 = __real_3ff0000000000000;
      local_198 = __real_3ff0000000000000 - (dVar2 + dVar2) * dVar2;
      local_190 = dVar3 * __real_c000000000000000 * dVar2;
      local_150 = dVar3 * __real_c000000000000000 * dVar4;
      local_188 = dVar4 * __real_c000000000000000 * dVar2;
      local_178 = dVar2 * __real_c000000000000000 * dVar3;
      local_168 = dVar4 * __real_c000000000000000 * dVar3;
      local_158 = dVar2 * __real_c000000000000000 * dVar4;
      local_170 = __real_3ff0000000000000 - (dVar3 + dVar3) * dVar3;
      local_130 = (dVar3 + dVar3) * local_128;
      local_180 = 0;
      local_128 = (dVar4 + dVar4) * local_128;
      local_148 = __real_3ff0000000000000 - (dVar4 + dVar4) * dVar4;
      local_160 = 0;
      local_140 = 0;
      FSceneView::UpdatePlanarReflectionViewMatrix
                (param_2,param_2,(TMirrorMatrix<double> *)&local_198);
    }
  }
  return;
}

// SetupLateUpdate @ 14cf9b930

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FDefaultXRCamera::SetupLateUpdate
          (FDefaultXRCamera *this,TTransform<double> *param_1,USceneComponent *param_2,bool param_3)

{
  FLateUpdateManager::Setup(&this->LateUpdate,param_1,param_2,param_3);
  return;
}

// SetupView @ 14cf9b950

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
FDefaultXRCamera::SetupView(FDefaultXRCamera *this,FSceneViewFamily *param_1,FSceneView *param_2)

{
  char cVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  cVar1 = (**(code **)(**(longlong **)&this->field_0x28 + 0x58))
                    (*(longlong **)&this->field_0x28,*(undefined4 *)&this->TrackingSystem,&local_28,
                     &local_48);
  if (cVar1 != '\0') {
    (param_2->BaseHmdOrientation).X = local_28;
    (param_2->BaseHmdOrientation).Y = dStack_20;
    (param_2->BaseHmdOrientation).Z = local_18;
    (param_2->BaseHmdOrientation).W = dStack_10;
    (param_2->BaseHmdLocation).field0_0x0._s_0.X = local_48;
    (param_2->BaseHmdLocation).field0_0x0._s_0.Y = dStack_40;
    (param_2->BaseHmdLocation).field0_0x0._s_0.Z = local_38;
  }
  return;
}

// SetupViewFamily @ 14cf9ba60

void __thiscall FDefaultXRCamera::SetupViewFamily(FDefaultXRCamera *this,FSceneViewFamily *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  EShadingPath EVar6;
  TConsoleVariableData<int> *pTVar7;
  longlong *plVar8;
  IConsoleManager *pIVar9;
  TConsoleVariableData<int> *pTVar10;
  uint uVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar9 = IConsoleManager::Get();
    plVar8 = (longlong *)(**(code **)((longlong)*pIVar9 + 0xc0))(pIVar9,L"vr.AllowMotionBlurInVR",1)
    ;
    pTVar10 = (TConsoleVariableData<int> *)0x0;
    if (plVar8 != (longlong *)0x0) {
      pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar8 + 0x68))(plVar8);
    }
    CVarAllowMotionBlurInVR = pTVar10;
    _Init_thread_footer(&::_TSS0);
  }
  pTVar10 = CVarAllowMotionBlurInVR;
  if (CVarAllowMotionBlurInVR != (TConsoleVariableData<int> *)0x0) {
    bVar3 = IsInParallelGameThread();
    if (bVar3) {
LAB_14cf9bacd:
      pTVar7 = (TConsoleVariableData<int> *)0x0;
    }
    else {
      bVar3 = IsInGameThread();
      pTVar7 = (TConsoleVariableData<int> *)&DAT_00000004;
      if (bVar3) goto LAB_14cf9bacd;
    }
    uVar11 = 0x200;
    if (*(int *)((longlong)pTVar10->ShadowedValue + (longlong)pTVar7->ShadowedValue) != 0)
    goto LAB_14cf9badc;
  }
  uVar11 = 0;
LAB_14cf9badc:
  plVar8 = (longlong *)(**(code **)(**(longlong **)&this->field_0x28 + 0x118))();
  (param_1->EngineShowFlags).MotionBlur = 0;
  puVar1 = &(param_1->EngineShowFlags).field_0x4;
  *(uint *)puVar1 = *(uint *)puVar1 | uVar11;
  if ((0 < (param_1->Views).ArrayNum) &&
     (*(char *)(*(longlong *)(param_1->Views).AllocatorInstance.Data + 0x11e8) == '\0')) {
    if (plVar8 == (longlong *)0x0) {
      bVar4 = 0;
    }
    else {
      pcVar2 = *(code **)(*plVar8 + 0x98);
      EVar6 = FSceneInterface::GetShadingPath(param_1->Scene->FeatureLevel);
      bVar4 = (*pcVar2)(plVar8,EVar6);
    }
    puVar1 = &(param_1->EngineShowFlags).field_0x10;
    *(uint *)puVar1 =
         *(uint *)puVar1 ^
         ((uint)bVar4 << 0x17 ^ *(uint *)&(param_1->EngineShowFlags).field_0x10) & 0x800000;
  }
  puVar1 = &(param_1->EngineShowFlags).field_0x10;
  *(uint *)puVar1 =
       *(uint *)puVar1 ^
       ((uint)(byte)(this->LateUpdate).PipelinedUpdateStatesRendering.field_0xb9 << 0x18 ^
       *(uint *)&(param_1->EngineShowFlags).field_0x10) & 0x1000000;
  if (plVar8 == (longlong *)0x0) {
    uVar11 = 1;
  }
  else {
    cVar5 = (**(code **)(*plVar8 + 0x1b0))(plVar8);
    uVar11 = (uint)(cVar5 == '\0');
  }
  (param_1->EngineShowFlags).Rendering = 0;
  puVar1 = &(param_1->EngineShowFlags).field_0x10;
  *(uint *)puVar1 = *(uint *)puVar1 | uVar11 << 0x15;
  return;
}

// UpdatePlayerCamera @ 14cf9de00

bool __thiscall
FDefaultXRCamera::UpdatePlayerCamera
          (FDefaultXRCamera *this,TQuat<double> *param_1,TVector<double> *param_2,float param_3)

{
  double dVar1;
  TConsoleVariableData<bool> *pTVar2;
  char cVar3;
  bool bVar4;
  TRotator<double> *pTVar5;
  longlong lVar6;
  TQuat<double> *pTVar7;
  TRotator<double> local_98;
  TQuat<double> local_78;
  double local_58;
  double dStack_50;
  double local_48;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  
  cVar3 = (**(code **)((longlong)*this->TrackingSystem + 0x58))
                    (this->TrackingSystem,this->DeviceId,&local_38,&local_58);
  if (cVar3 != '\0') {
    if ((GEnableVREditorHacks != false) && (this->bUseImplicitHMDPosition == false)) {
      dVar1 = param_1->Y;
      (this->DeltaControlOrientation).X = param_1->X;
      (this->DeltaControlOrientation).Y = dVar1;
      dVar1 = param_1->W;
      (this->DeltaControlOrientation).Z = param_1->Z;
      (this->DeltaControlOrientation).W = dVar1;
      pTVar5 = UE::Math::TQuat<double>::Rotator
                         (&this->DeltaControlOrientation,(TRotator<double> *)&local_78);
      dVar1 = pTVar5->Yaw;
      (this->DeltaControlRotation).Pitch = pTVar5->Pitch;
      (this->DeltaControlRotation).Yaw = dVar1;
      (this->DeltaControlRotation).Roll = pTVar5->Roll;
    }
    (param_2->field0_0x0)._s_0.X = local_58;
    (param_2->field0_0x0)._s_0.Y = dStack_50;
    (param_2->field0_0x0)._s_0.Z = local_48;
    param_1->X = local_38;
    param_1->Y = dStack_30;
    param_1->Z = local_28;
    param_1->W = dStack_20;
    UE::Math::TQuat<double>::Rotator(param_1,&local_98);
    pTVar2 = CVarCameraSmoothing.Ref;
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 1;
    }
    if (pTVar2->ShadowedValue[lVar6] == true) {
      local_78.X = local_98.Pitch;
      local_78.Y = local_98.Yaw;
      local_78.Z = local_98.Roll;
      DecayRotatorTowardsTarget(&this->SmoothedCameraRotation,(TRotator<double> *)&local_78,param_3)
      ;
      pTVar7 = UE::Math::TRotator<double>::Quaternion(&this->SmoothedCameraRotation,&local_78);
      dVar1 = pTVar7->Y;
      param_1->X = pTVar7->X;
      param_1->Y = dVar1;
      dVar1 = pTVar7->W;
      param_1->Z = pTVar7->Z;
      param_1->W = dVar1;
    }
    else {
      (this->SmoothedCameraRotation).Pitch = local_98.Pitch;
      (this->SmoothedCameraRotation).Yaw = local_98.Yaw;
      (this->SmoothedCameraRotation).Roll = local_98.Roll;
    }
    return true;
  }
  return false;
}

// UseImplicitHMDPosition @ 14cf9e350

void __thiscall FDefaultXRCamera::UseImplicitHMDPosition(FDefaultXRCamera *this,bool param_1)

{
  this->bUseImplicitHMDPosition = param_1;
  return;
}

