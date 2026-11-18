// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// FEvaluateCameraShake @ 14675fc70

/* WARNING: Enum "Type": Some values do not have unique names */

FEvaluateCameraShake * __thiscall
UE::MovieScene::FEvaluateCameraShake::FEvaluateCameraShake
          (FEvaluateCameraShake *this,UMovieSceneEntitySystemLinker *param_1)

{
  code *pcVar1;
  bool bVar2;
  FEvaluateCameraShake *pFVar3;
  
  if ((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEvaluateCameraShake *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->InstanceRegistry = (param_1->InstanceRegistry).Ptr;
  *(undefined8 *)&this->AccumulatedShakes = 0;
  *(undefined8 *)&(this->AccumulatedShakes).field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedShakes).field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedShakes).field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedShakes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedShakes).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedShakes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedShakes).field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedShakes).field_0x48 = 0;
  return this;
}

// EvaluateCameraComponentShake @ 14678c2b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateCameraShake::EvaluateCameraComponentShake
          (FEvaluateCameraShake *this,UCameraComponent *param_1,
          FMovieSceneCameraShakeComponentData *param_2,FMovieSceneCameraShakeInstanceData *param_3,
          FSequenceInstance *param_4)

{
  longlong *plVar1;
  TArray<TTuple<FPostProcessSettings,float>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int *piVar3;
  float fVar4;
  void *pvVar5;
  code *pcVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 extraout_EAX;
  int iVar11;
  undefined4 extraout_EAX_00;
  double *pdVar13;
  TRotator<double> *pTVar14;
  ulonglong uVar15;
  TQuat<double> *pTVar16;
  FAccumulatedShake *pFVar17;
  undefined4 uVar18;
  uint uVar19;
  ForElementType<TTuple<FPostProcessSettings,float>_> FVar20;
  int iVar21;
  longlong lVar22;
  FPostProcessSettings *pFVar23;
  FMovieSceneContext *pFVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auStack_1368 [32];
  FPostProcessSettings *local_1348;
  ForElementType<TTuple<FPostProcessSettings,float>_> local_1340;
  longlong local_1338;
  longlong local_1330;
  undefined8 local_1328;
  UCameraComponent *local_1318;
  undefined8 local_1310;
  undefined8 local_1308;
  uint local_1300;
  undefined4 uStack_12fc;
  int local_12f8;
  float fStack_12f4;
  undefined1 local_12e8 [32];
  longlong local_12c8;
  double local_12c0;
  double dStack_12b8;
  double local_12b0;
  double local_12a8;
  double dStack_12a0;
  double local_1298;
  double dStack_1290;
  TRotator<double> local_1288;
  TQuat<double> local_1268;
  TTransform<double> local_1248;
  TTransform<double> local_11e8;
  TTransform<double> local_1188;
  TTransform<double> local_1128;
  TVector<double>_u_0 local_10c8;
  TRotator<double> TStack_10b0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined4 local_1088;
  undefined1 local_1084;
  undefined4 local_1080;
  undefined2 local_107c;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined1 local_1064;
  uint local_1060;
  undefined1 local_105c;
  float local_1058;
  FPostProcessSettings local_1048;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined1 local_868;
  undefined4 local_858;
  undefined4 local_854;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined4 local_838;
  undefined8 local_828;
  undefined8 uStack_820;
  double local_818;
  double dStack_810;
  double local_808;
  FPostProcessSettings local_7f8;
  float local_88;
  ulonglong local_78;
  FPostProcessSettings *pFVar12;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1368;
  local_10c8._s_0.X = 0.0;
  local_10c8._s_0.Y = 0.0;
  local_10c8._s_0.Z = 0.0;
  TStack_10b0.Pitch = 0.0;
  local_1060 = local_1060 & 0xfffffffc | 4;
  TStack_10b0.Yaw = 0.0;
  TStack_10b0.Roll = 0.0;
  pFVar23 = &local_1048;
  local_1098 = ___xmm_3f80000042b4000042b4000042b40000;
  uStack_1090 = _UNK_150fabfd8;
  local_1088 = 0x44000000;
  local_1084 = 1;
  local_1080 = 0;
  local_107c = 0;
  local_1078 = ___xmm_3faaaaabbf8000004a00000000000000;
  uStack_1070 = _UNK_150fabfe8;
  local_1064 = 0;
  local_105c = 0;
  local_1058 = 0.0;
  local_1318 = param_1;
  pFVar12 = FPostProcessSettings::FPostProcessSettings(pFVar23);
  fVar4 = __real_3f800000;
  uVar10 = SUB84(pFVar12,0);
  uVar18 = SUB84(pFVar23,0);
  local_868 = 0;
  local_8d8 = 0;
  uStack_8d0 = 0;
  plVar1 = &local_1318->_padding_;
  local_848 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_840 = _UNK_15076b1f8;
  local_828 = 0;
  uStack_820 = 0;
  local_808 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_858 = 0x3f800000;
  local_854 = 0x3f800000;
  local_838 = 0;
  local_818 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_810 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_12c0 = (double)local_1318->_padding_;
  dStack_12b8 = (double)local_1318->_padding_;
  local_12b0 = (double)local_1318->_padding_;
  local_12e8._16_8_ = local_1318->_padding_;
  local_12e8._24_8_ = local_1318->_padding_;
  local_12e8._0_8_ = local_1318->_padding_;
  local_12e8._8_8_ = local_1318->_padding_;
  local_10c8._s_0.X = local_12c0;
  local_10c8._s_0.Y = dStack_12b8;
  local_10c8._s_0.Z = local_12b0;
  if (*plVar1 == 0) {
    pdVar13 = ::operator_new(0x40);
    dVar7 = UE::Math::TQuat<double>::Identity.Y;
    if (pdVar13 == (double *)0x0) {
      pdVar13 = (double *)0x0;
    }
    else {
      *pdVar13 = UE::Math::TQuat<double>::Identity.X;
      pdVar13[1] = dVar7;
      dVar7 = UE::Math::TQuat<double>::Identity.W;
      pdVar13[2] = UE::Math::TQuat<double>::Identity.Z;
      pdVar13[3] = dVar7;
      dVar7 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      pdVar13[4] = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      pdVar13[5] = dVar7;
      pdVar13[6] = UE::Math::TRotator<double>::ZeroRotator.Roll;
    }
    if (plVar1 != &local_12c8) {
      pvVar5 = (void *)*plVar1;
      *plVar1 = (longlong)pdVar13;
      pdVar13 = (double *)0x0;
      ::operator_delete(pvVar5,0x40);
    }
    ::operator_delete(pdVar13,0x40);
    uVar18 = SUB84(pdVar13,0);
    uVar10 = extraout_EAX;
  }
  pdVar13 = (double *)*plVar1;
  auVar28._8_8_ = -(ulonglong)(pdVar13[3] != local_12e8._24_8_);
  auVar28._0_8_ = -(ulonglong)(pdVar13[2] != local_12e8._16_8_);
  uVar19 = movmskpd(uVar18,auVar28);
  auVar25._8_8_ = -(ulonglong)((double)local_12e8._8_8_ != pdVar13[1]);
  auVar25._0_8_ = -(ulonglong)((double)local_12e8._0_8_ != *pdVar13);
  iVar11 = movmskpd(uVar10,auVar25);
  auVar28 = local_12e8._16_16_;
  if ((uVar19 & 0x3fffffff) != 0 || iVar11 != 0) {
    *pdVar13 = (double)local_12e8._0_8_;
    pdVar13[1] = (double)local_12e8._8_8_;
    pdVar13[2] = local_12e8._16_8_;
    pdVar13[3] = local_12e8._24_8_;
    pTVar14 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_12e8,&local_1288);
    dVar7 = pTVar14->Yaw;
    pdVar13[4] = pTVar14->Pitch;
    pdVar13[5] = dVar7;
    pdVar13[6] = pTVar14->Roll;
  }
  iVar11 = (param_2->SectionStartTime).Value;
  fStack_12f4 = 0.0;
  TStack_10b0.Pitch = pdVar13[4];
  TStack_10b0.Yaw = pdVar13[5];
  TStack_10b0.Roll = pdVar13[6];
  uVar19 = *(uint *)((longlong)&(param_4->Context)._padding_ + 4);
  local_1098 = CONCAT44(local_1098._4_4_,local_1318->FieldOfView);
  local_12f8 = iVar11;
  if (uVar19 == 0x80000000) {
    if ((int)(param_4->Context)._padding_ == 0) {
      pFVar24 = (FMovieSceneContext *)((longlong)&(param_4->Context)._padding_ + 4);
      if (*(char *)((longlong)&(param_4->Context)._padding_ + 4) == '\x02') {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    else {
      if ((char)(param_4->Context)._padding_ == '\x02') {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pFVar24 = &param_4->Context;
    }
    uVar15 = *(longlong *)((longlong)&pFVar24->_padding_ + 4);
  }
  else {
    uStack_12fc = 0;
    uVar15 = (ulonglong)uVar19;
    local_1300 = uVar19;
  }
  lVar22 = (param_4->Context)._padding_;
  local_1310._4_4_ = (float)(uVar15 >> 0x20);
  auVar28 = roundps(auVar28,ZEXT416((uint)(local_1310._4_4_ - fStack_12f4)),1);
  fVar29 = (local_1310._4_4_ - fStack_12f4) - auVar28._0_4_;
  iVar21 = (int)((ulonglong)lVar22 >> 0x20);
  if (::FFrameTime::MaxSubframe <= fVar29) {
    fVar29 = ::FFrameTime::MaxSubframe;
  }
  iVar11 = (int)auVar28._0_4_ + ((int)uVar15 - iVar11);
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  local_1310 = CONCAT44(fVar29,iVar11);
  local_1308 = local_1310;
  UCameraShakeBase::ScrubAndApplyCameraShake
            ((param_3->ShakeInstance).field0_0x0.DebugPtr,
             ((float)((longlong)iVar11 * (longlong)iVar21) + fVar29 * (float)iVar21) /
             (float)(int)lVar22,fVar4,(FMinimalViewInfo *)&local_10c8._s_0);
  auVar27._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
        (double)CONCAT44(*(uint *)((longlong)&local_1318->_padding_ + 4) & _UNK_15061cc8c,
                         (uint)local_1318->_padding_ & _UNK_15061cc88));
  auVar27._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
        (double)CONCAT44(*(uint *)((longlong)&local_1318->_padding_ + 4) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)local_1318->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
        );
  uVar19 = movmskpd(iVar21,auVar27);
  auVar26._8_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
        (double)CONCAT44(*(uint *)((longlong)&local_1318->_padding_ + 4) & _UNK_15061cc8c,
                         (uint)local_1318->_padding_ & _UNK_15061cc88));
  auVar26._0_8_ =
       -(ulonglong)
        ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
        (double)CONCAT44(*(uint *)((longlong)&local_1318->_padding_ + 4) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)local_1318->_padding_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
        );
  iVar11 = movmskpd(extraout_EAX_00,auVar26);
  if ((uVar19 & 0x3fffffff) == 0 && iVar11 == 0) {
    local_11e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_11e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_11e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_11e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_11e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_11e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast
              ((TTransform<double> *)&local_1318->_padding_,&local_11e8);
  }
  fVar4 = local_1318->FieldOfView;
  pTVar16 = UE::Math::TRotator<double>::Quaternion(&TStack_10b0,&local_1268);
  fVar8 = (float)local_1098;
  local_1298 = pTVar16->Z;
  dStack_1290 = pTVar16->W;
  local_12a8 = pTVar16->X;
  dStack_12a0 = pTVar16->Y;
  local_1128.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_1128.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_1188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1128.Translation.XY.m128d_f64[0] = local_10c8._s_0.X;
  local_1128.Translation.XY.m128d_f64[1] = local_10c8._s_0.Y;
  local_1188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1128.Translation.ZW.m128d_f64[0] = local_10c8._s_0.Z;
  local_1128.Translation.ZW.m128d_f64[1] = 0.0;
  local_1128.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_1128.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_1188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_1128.Rotation.XY.m128d_f64[0] = local_12a8;
  local_1128.Rotation.XY.m128d_f64[1] = dStack_12a0;
  local_1128.Rotation.ZW.m128d_f64[0] = local_1298;
  local_1128.Rotation.ZW.m128d_f64[1] = dStack_1290;
  UE::Math::TTransform<double>::Multiply(&local_1188,&local_1128,&local_11e8);
  uVar19 = ((uint)((ulonglong)local_1318 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1318 >> 4)) *
           -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  pFVar17 = TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
            ::FindOrAddImpl<UCameraComponent_*_const_&>
                      ((TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
                        *)&this->AccumulatedShakes,uVar19 >> 0x10 ^ uVar19,&local_1318);
  local_1248.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1248.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1248.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1248.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1248.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1248.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1248.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1248.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1248.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1248.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1248.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1248.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1248,&pFVar17->TotalTransformOffset,&local_1188);
  (pFVar17->TotalTransformOffset).Rotation.XY.m128d_f64[0] = local_1248.Rotation.XY.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Rotation.XY.m128d_f64[1] = local_1248.Rotation.XY.m128d_f64[1];
  pFVar17->bApplyTransform = true;
  (pFVar17->TotalTransformOffset).Rotation.ZW.m128d_f64[0] = local_1248.Rotation.ZW.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Rotation.ZW.m128d_f64[1] = local_1248.Rotation.ZW.m128d_f64[1];
  fVar29 = pFVar17->TotalFOVOffset;
  (pFVar17->TotalTransformOffset).Translation.XY.m128d_f64[0] =
       local_1248.Translation.XY.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Translation.XY.m128d_f64[1] =
       local_1248.Translation.XY.m128d_f64[1];
  (pFVar17->TotalTransformOffset).Translation.ZW.m128d_f64[0] =
       local_1248.Translation.ZW.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Translation.ZW.m128d_f64[1] =
       local_1248.Translation.ZW.m128d_f64[1];
  (pFVar17->TotalTransformOffset).Scale3D.XY.m128d_f64[0] = local_1248.Scale3D.XY.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Scale3D.XY.m128d_f64[1] = local_1248.Scale3D.XY.m128d_f64[1];
  pFVar17->TotalFOVOffset = (fVar4 - fVar8) + fVar29;
  (pFVar17->TotalTransformOffset).Scale3D.ZW.m128d_f64[0] = local_1248.Scale3D.ZW.m128d_f64[0];
  (pFVar17->TotalTransformOffset).Scale3D.ZW.m128d_f64[1] = local_1248.Scale3D.ZW.m128d_f64[1];
  if (0.0 < local_1058) {
    uVar19 = ((uint)((ulonglong)local_1318 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_1318 >> 4)) *
             -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    pFVar17 = TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
              ::FindOrAddImpl<UCameraComponent_*_const_&>
                        ((TMapBase<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
                          *)&this->AccumulatedShakes,uVar19 >> 0x10 ^ uVar19,&local_1318);
    fVar4 = local_1058;
    pTVar2 = &pFVar17->PostProcessSettings;
    FPostProcessSettings::FPostProcessSettings(&local_7f8,&local_1048);
    FVar20 = (pFVar17->PostProcessSettings).AllocatorInstance.SecondaryData;
    local_88 = fVar4;
    if (FVar20 == (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
      FVar20 = (ForElementType<TTuple<FPostProcessSettings,float>_>)pTVar2;
    }
    if (((ulonglong)FVar20 <= &local_7f8) &&
       (lVar22 = (longlong)(pFVar17->PostProcessSettings).ArrayMax,
       &local_7f8 < (FPostProcessSettings *)(lVar22 * 0x780 + (longlong)FVar20))) {
      local_1330 = (longlong)(pFVar17->PostProcessSettings).ArrayNum;
      local_1328 = 0x780;
      local_1348 = &local_7f8;
      local_1340 = FVar20;
      local_1338 = lVar22;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar11 = (pFVar17->PostProcessSettings).ArrayNum;
    piVar3 = &(pFVar17->PostProcessSettings).ArrayMax;
    if (iVar11 == *piVar3) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPostProcessSettings,float>_>_>
                         (0x780,0x10,&pTVar2->AllocatorInstance,piVar3);
    }
    (pFVar17->PostProcessSettings).ArrayNum = iVar11 + 1;
    FVar20 = (pFVar17->PostProcessSettings).AllocatorInstance.SecondaryData;
    if (FVar20 == (ForElementType<TTuple<FPostProcessSettings,float>_>)0x0) {
      FVar20 = (ForElementType<TTuple<FPostProcessSettings,float>_>)pTVar2;
    }
    pFVar23 = (FPostProcessSettings *)((longlong)iVar11 * 0x780 + (longlong)FVar20);
    FPostProcessSettings::FPostProcessSettings(pFVar23,&local_7f8);
    *(float *)(pFVar23 + 1) = local_88;
    if (local_7f8.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_7f8.WeightedBlendables.Array.AllocatorInstance.Data);
    }
    pFVar17->bApplyPostProcessing = true;
  }
  if (local_1048.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_1048.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// PostTask @ 1467b2a10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall UE::MovieScene::FEvaluateCameraShake::PostTask(FEvaluateCameraShake *this)

{
  undefined1 *puVar1;
  TMap<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  UCameraComponent *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  FPostProcessSettings *pFVar11;
  uint uVar12;
  uint uVar13;
  FPostProcessSettings *pFVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  FPostProcessSettings *pFVar19;
  TMap<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
  *pTVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  TMap<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UCameraComponent_*,UE::MovieScene::FAccumulatedShake,0>_>
  *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar4 = *(int *)&(this->AccumulatedShakes).field_0x28;
  puVar1 = &(this->AccumulatedShakes).field_0x10;
  iVar15 = 0;
  pTVar2 = &this->AccumulatedShakes;
  uVar7 = 1;
  iVar17 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->AccumulatedShakes).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1467b2aae;
      uVar13 = puVar18[lVar9 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = local_res18 + -1 + iVar17;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_1467b2aae:
  uVar13 = *(uint *)&(this->AccumulatedShakes).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar15);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->AccumulatedShakes).field_0x8 -
                       *(int *)&(this->AccumulatedShakes).field_0x34);
  local_res20 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AccumulatedShakes).field_0x28;
  pTVar20 = pTVar2;
  if (uVar13 != uVar7) {
    puVar16 = *(undefined1 **)&(this->AccumulatedShakes).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_1467b2bb0;
      uVar13 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1467b2bb0:
  while( true ) {
    if (*(int *)&(this->AccumulatedShakes).field_0x8 - *(int *)&(this->AccumulatedShakes).field_0x34
        != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UCameraComponent_*,UE::MovieScene::FAccumulatedShake>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar2 == pTVar20))
    break;
    lVar9 = *(longlong *)pTVar2;
    lVar10 = (longlong)TStack_70.CurrentBitIndex * 0xfc0;
    this_00 = *(UCameraComponent **)(lVar10 + lVar9);
    if (*(char *)(lVar10 + 0x10 + lVar9) != '\0') {
      UCameraComponent::ClearAdditiveOffset(this_00);
      UCameraComponent::AddAdditiveOffset
                (this_00,(TTransform<double> *)(lVar9 + 0x20 + lVar10),
                 *(float *)(lVar10 + 0x80 + lVar9));
    }
    if (*(char *)(lVar10 + 0x11 + lVar9) != '\0') {
      UCameraComponent::ClearExtraPostProcessBlends(this_00);
      pFVar19 = (FPostProcessSettings *)(lVar9 + 0x90 + lVar10);
      pFVar11 = *(FPostProcessSettings **)(lVar10 + 0xf90 + lVar9);
      if (pFVar11 == (FPostProcessSettings *)0x0) {
        pFVar11 = pFVar19;
      }
      iVar4 = *(int *)&pFVar19[2].field_0x30;
      pFVar14 = (FPostProcessSettings *)((longlong)iVar4 * 0x780 + (longlong)pFVar11);
      while( true ) {
        if (*(int *)&pFVar19[2].field_0x30 != iVar4) {
          `TCheckedPointerIterator<TTuple<FPostProcessSettings,float>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        pTVar20 = local_res20;
        if (pFVar11 == pFVar14) break;
        UCameraComponent::AddExtraPostProcessBlend(this_00,pFVar11,*(float *)(pFVar11 + 1));
        pFVar11 = (FPostProcessSettings *)&pFVar11[1].field_0x10;
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return;
}

