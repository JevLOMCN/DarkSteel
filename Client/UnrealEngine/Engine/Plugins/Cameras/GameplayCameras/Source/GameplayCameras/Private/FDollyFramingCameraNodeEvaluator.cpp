// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// BuildDollyShotTransform @ 14d65cdd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::BuildDollyShotTransform
          (FDollyFramingCameraNodeEvaluator *this,TTransform<double> *__return_storage_ptr__,
          FCameraPose *param_1)

{
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FCameraPose::GetTransform(param_1,__return_storage_ptr__);
  local_78.Translation.ZW.m128d_f64[0] = (this->DollyPosition).field0_0x0._s_0.Y;
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1] = (this->DollyPosition).field0_0x0._s_0.X;
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_78.Translation.XY.m128d_f64[0] = 0.0;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Rotation.XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  local_78.Rotation.XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  local_78.Rotation.ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  local_78.Rotation.ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  local_78.Scale3D.ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  local_78.Scale3D.ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_d8,&local_78,__return_storage_ptr__);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// ComputeFramingTranslation @ 14d65d510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TVector<double> * __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::ComputeFramingTranslation
          (FDollyFramingCameraNodeEvaluator *this,TVector<double> *__return_storage_ptr__,
          FCameraPose *param_1,TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  int iVar7;
  FCameraFieldsOfView *pFVar8;
  TTransform<double> *pTVar9;
  uint uVar10;
  FCameraPose *pFVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  uint uVar40;
  double dVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auStack_1d8 [32];
  FCameraFieldsOfView local_1b8 [2];
  TVector2<double>_u_0 local_198;
  TTransform<double> local_188;
  FCameraFieldsOfView local_128;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b8[0].HorizontalFieldOfView = (double)param_2->Object;
  local_1b8[0].VerticalFieldOfView = (double)(param_2->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_1b8[0].VerticalFieldOfView !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_1b8[0].VerticalFieldOfView)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_1b8[0].VerticalFieldOfView)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  dVar12 = FCameraPoseMath::GetEffectiveAspectRatio
                     (param_1,(TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *)
                              local_1b8);
  pFVar8 = FCameraPoseMath::GetEffectiveFieldsOfView(local_1b8,param_1,(double)(float)dVar12);
  local_128.HorizontalFieldOfView = pFVar8->HorizontalFieldOfView;
  local_128.VerticalFieldOfView = pFVar8->VerticalFieldOfView;
  pFVar11 = param_1;
  pTVar9 = FCameraPose::GetTransform(param_1,&local_118);
  auVar30._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(pTVar9->Scale3D).ZW.m128d_f64);
  auVar30._8_4_ = _UNK_15061cc88 & *(uint *)((pTVar9->Scale3D).ZW.m128d_f64 + 1);
  auVar30._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(pTVar9->Scale3D).ZW.m128d_f64 + 0xc);
  auVar34._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 4),
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)(pTVar9->Scale3D).XY.m128d_f64);
  auVar34._8_4_ = _UNK_15061cc88 & *(uint *)((pTVar9->Scale3D).XY.m128d_f64 + 1);
  auVar34._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(pTVar9->Scale3D).XY.m128d_f64 + 0xc);
  auVar36._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar30._8_8_);
  auVar36._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar30._0_8_);
  uVar10 = movmskpd((int)pFVar11,auVar36);
  auVar23._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar34._8_8_);
  auVar23._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar34._0_8_);
  iVar7 = movmskpd((int)pTVar9,auVar23);
  if ((uVar10 & 0x3fffffff) == 0 && iVar7 == 0) {
    local_188.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_188.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_188.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_188.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_188.Rotation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_188.Rotation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_188.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_188.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_188.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_188.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_188.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_188.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_188.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    local_188.Scale3D.XY = UE::Math::TTransform<double>::Identity.Scale3D.XY;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(pTVar9,&local_188);
  }
  dVar41 = local_188.Scale3D.XY.m128d_f64[0] * *(double *)&this->field_0x148;
  dVar45 = local_188.Scale3D.XY.m128d_f64[1] * *(double *)&this->field_0x150;
  dVar12 = *(double *)&this->field_0x158 * local_188.Scale3D.ZW.m128d_f64[0];
  dVar3 = local_188.Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar31._4_4_ = local_188.Rotation.XY.m128d_f64[0]._4_4_;
  auVar31._0_4_ = local_188.Rotation.XY.m128d_f64[0]._0_4_;
  auVar31._8_4_ = local_188.Rotation.XY.m128d_f64[1]._0_4_;
  auVar31._12_4_ = local_188.Rotation.XY.m128d_f64[1]._4_4_;
  auVar47._8_4_ = SUB84(dVar45,0);
  auVar47._0_8_ = dVar41;
  uVar39 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar47._12_4_ = uVar39;
  auVar35._4_4_ = local_188.Rotation.XY.m128d_f64[0]._4_4_;
  auVar35._0_4_ = local_188.Rotation.XY.m128d_f64[0]._0_4_;
  auVar35._8_4_ = local_188.Rotation.XY.m128d_f64[1]._0_4_;
  auVar35._12_4_ = local_188.Rotation.XY.m128d_f64[1]._4_4_;
  dVar13 = auVar31._8_8_;
  auVar22._8_4_ = SUB84(dVar45,0);
  auVar22._0_8_ = dVar41;
  auVar22._12_4_ = uVar39;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar12;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar23 = blendpd(auVar22,auVar2,2);
  auVar5._4_4_ = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
  auVar5._0_4_ = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
  auVar5._8_4_ = local_188.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar5._12_4_ = local_188.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar36 = blendpd(auVar35,auVar5,2);
  auVar14._8_4_ = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
  auVar14._0_8_ = dVar13;
  auVar14._12_4_ = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
  auVar48._0_8_ =
       auVar47._8_8_ *
       (double)CONCAT44(local_188.Rotation.XY.m128d_f64[0]._4_4_,
                        local_188.Rotation.XY.m128d_f64[0]._0_4_) - dVar13 * dVar41;
  auVar48._8_8_ =
       dVar12 * (double)CONCAT44(local_188.Rotation.XY.m128d_f64[1]._4_4_,
                                 local_188.Rotation.XY.m128d_f64[1]._0_4_) - auVar14._8_8_ * dVar45;
  auVar24._0_8_ =
       auVar23._0_8_ *
       (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[0]._4_4_,
                        local_188.Rotation.ZW.m128d_f64[0]._0_4_) - auVar36._0_8_ * dVar12;
  auVar24._8_8_ =
       auVar23._8_8_ *
       (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[1]._4_4_,
                        local_188.Rotation.ZW.m128d_f64[1]._0_4_) - auVar36._8_8_ * dVar3;
  auVar23 = blendpd(auVar48,auVar24,2);
  dVar3 = auVar48._8_8_ + auVar48._8_8_;
  dVar21 = auVar24._0_8_ + auVar24._0_8_;
  uVar39 = SUB84(dVar21,0);
  uVar46 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar49._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar49._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar28._8_4_ = uVar39;
  auVar28._0_8_ = dVar3;
  auVar28._12_4_ = uVar46;
  auVar15._8_4_ = uVar39;
  auVar15._0_8_ = dVar3;
  auVar15._12_4_ = uVar46;
  auVar25._8_4_ = uVar39;
  auVar25._0_8_ = dVar3;
  auVar25._12_4_ = uVar46;
  auVar23 = blendpd(auVar25,auVar49,2);
  auVar29._0_8_ =
       auVar28._8_8_ *
       (double)CONCAT44(local_188.Rotation.XY.m128d_f64[0]._4_4_,
                        local_188.Rotation.XY.m128d_f64[0]._0_4_) - dVar3 * dVar13;
  auVar29._8_8_ =
       auVar49._0_8_ *
       (double)CONCAT44(local_188.Rotation.XY.m128d_f64[1]._4_4_,
                        local_188.Rotation.XY.m128d_f64[1]._0_4_) -
       auVar15._8_8_ *
       (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[0]._4_4_,
                        local_188.Rotation.ZW.m128d_f64[0]._0_4_);
  auVar16._8_4_ = SUB84(auVar49._8_8_,0);
  auVar16._0_8_ = auVar49._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
  auVar26._0_8_ =
       auVar23._0_8_ *
       (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[0]._4_4_,
                        local_188.Rotation.ZW.m128d_f64[0]._0_4_) - auVar49._0_8_ * auVar36._0_8_;
  auVar26._8_8_ =
       auVar23._8_8_ *
       (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[1]._4_4_,
                        local_188.Rotation.ZW.m128d_f64[1]._0_4_) - auVar16._8_8_ * auVar36._8_8_;
  auVar17._8_4_ = SUB84(auVar29._8_8_,0);
  auVar17._0_8_ = auVar29._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar23 = blendpd(auVar29,auVar26,2);
  dVar3 = dVar3 * (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[1]._4_4_,
                                   local_188.Rotation.ZW.m128d_f64[1]._0_4_) + dVar41 +
          auVar17._8_8_ +
          (double)CONCAT44(local_188.Translation.XY.m128d_f64[0]._4_4_,
                           local_188.Translation.XY.m128d_f64[0]._0_4_);
  dVar21 = dVar21 * (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_188.Rotation.ZW.m128d_f64[1]._0_4_) + dVar45 +
           auVar26._0_8_ +
           (double)CONCAT44(local_188.Translation.XY.m128d_f64[1]._4_4_,
                            local_188.Translation.XY.m128d_f64[1]._0_4_);
  FCameraFramingMath::GetTargetAngles
            ((TVector2<double> *)&local_198._s_0,(TVector2<double> *)&this->field_0x278,&local_128);
  dVar13 = sin(local_198._s_0.X * __real_3f91df46a2529d39);
  dVar41 = sin(local_198._s_0.Y * __real_3f91df46a2529d39);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  auVar6._4_8_ = auVar26._8_8_;
  auVar6._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar27._0_8_ = auVar6._0_8_ << 0x20;
  auVar27._8_4_ = SUB84(dVar21,0);
  auVar27._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  uVar10 = SUB84(dVar41 * dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar40 = (uint)((ulonglong)(dVar41 * dVar3) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = auVar27._8_8_ - dVar13 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (auVar49._0_8_ *
        (double)CONCAT44(local_188.Rotation.ZW.m128d_f64[1]._4_4_,
                         local_188.Rotation.ZW.m128d_f64[1]._0_4_) + dVar12 + auVar23._0_8_ +
       (double)CONCAT44(local_188.Translation.ZW.m128d_f64[0]._4_4_,
                        local_188.Translation.ZW.m128d_f64[0]._0_4_)) -
       (double)CONCAT44(uVar40,uVar10);
  pTVar9 = FCameraPose::GetTransform(param_1,&local_118);
  dVar45 = (pTVar9->Scale3D).XY.m128d_f64[0] * dVar3;
  dVar50 = (pTVar9->Scale3D).XY.m128d_f64[1] * dVar13 * dVar3;
  auVar23 = *(undefined1 (*) [16])(pTVar9->Rotation).ZW.m128d_f64;
  dVar21 = auVar23._0_8_;
  auVar42._8_4_ = SUB84(dVar50,0);
  auVar42._0_8_ = dVar45;
  uVar39 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar42._12_4_ = uVar39;
  dVar13 = (double)CONCAT44(uVar40,uVar10) * (pTVar9->Scale3D).ZW.m128d_f64[0];
  dVar12 = (pTVar9->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar36 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  dVar41 = (pTVar9->Rotation).ZW.m128d_f64[1];
  auVar30 = blendpd(auVar36,auVar23,2);
  auVar43._0_8_ = auVar42._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar45;
  auVar43._8_8_ = dVar13 * auVar36._8_8_ - dVar21 * dVar50;
  auVar18._8_4_ = SUB84(dVar50,0);
  auVar18._0_8_ = dVar45;
  auVar18._12_4_ = uVar39;
  auVar4._8_4_ = SUB84(dVar12,0);
  auVar4._0_8_ = dVar13;
  auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar36 = blendpd(auVar18,auVar4,2);
  auVar19._0_8_ = auVar36._0_8_ * dVar21 - auVar30._0_8_ * dVar13;
  auVar19._8_8_ = auVar36._8_8_ * auVar23._8_8_ - auVar30._8_8_ * dVar12;
  auVar36 = *(undefined1 (*) [16])(pTVar9->Rotation).XY.m128d_f64;
  auVar30 = blendpd(auVar43,auVar19,2);
  dVar3 = auVar43._8_8_ + auVar43._8_8_;
  dVar12 = auVar19._0_8_ + auVar19._0_8_;
  uVar39 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar44._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar44._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar37._8_4_ = SUB84(dVar12,0);
  auVar37._0_8_ = dVar3;
  auVar37._12_4_ = uVar39;
  auVar32._8_4_ = SUB84(dVar12,0);
  auVar32._0_8_ = dVar3;
  auVar32._12_4_ = uVar39;
  auVar30 = blendpd(auVar32,auVar44,2);
  auVar38._0_8_ = auVar37._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar3;
  auVar38._8_8_ = auVar44._0_8_ * auVar36._8_8_ - dVar21 * dVar12;
  auVar20._8_4_ = SUB84(auVar38._8_8_,0);
  auVar20._0_8_ = auVar38._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
  auVar36 = blendpd(auVar36,auVar23,2);
  auVar33._0_8_ = auVar30._0_8_ * dVar21 - auVar36._0_8_ * auVar44._0_8_;
  auVar33._8_8_ = auVar30._8_8_ * auVar23._8_8_ - auVar36._8_8_ * auVar44._8_8_;
  auVar23 = blendpd(auVar38,auVar33,2);
  dVar21 = dVar12 * dVar41 + dVar50 + auVar33._0_8_ + (pTVar9->Translation).XY.m128d_f64[1];
  dVar12 = (pTVar9->Translation).ZW.m128d_f64[0];
  auVar1._8_4_ = SUB84(dVar21,0);
  auVar1._0_8_ = dVar3 * dVar41 + dVar45 + auVar20._8_8_ + (pTVar9->Translation).XY.m128d_f64[0];
  auVar1._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])&(this->DebugNextDesiredTarget).field0_0x0 = auVar1;
  (this->DebugNextDesiredTarget).field0_0x0._s_0.Z =
       auVar44._0_8_ * dVar41 + dVar13 + auVar23._0_8_ + dVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetTypeID @ 14d661bc0

FCameraObjectTypeID * __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::GetTypeID(FDollyFramingCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662e50

bool __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::IsKindOf
          (FDollyFramingCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FBaseFramingCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d664890

void __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::OnBuildDebugBlocks
          (FDollyFramingCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  FCameraDebugBlock *pFVar4;
  
  FBaseFramingCameraNodeEvaluator::OnBuildDebugBlocks
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar4 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x78,8);
  pFVar4[1]._padding_ = 0;
  pFVar4[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[1].Attachments.ArrayNum = 0;
  pFVar4[1].Attachments.ArrayMax = 0;
  pFVar4[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[1].Children.ArrayNum = 0;
  pFVar4[1].Children.ArrayMax = 0;
  pFVar4[2]._padding_ = 0;
  pFVar4[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[2].Attachments.ArrayNum = 0;
  pFVar4[2].Attachments.ArrayMax = 0;
  pFVar4[2].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4[2].Children.ArrayNum = 0;
  pFVar4[2].Children.ArrayMax = 0;
  (pFVar4->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Attachments).ArrayNum = 0;
  (pFVar4->Attachments).ArrayMax = 0;
  (pFVar4->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->Children).ArrayNum = 0;
  (pFVar4->Children).ArrayMax = 0;
  pFVar4->_padding_ = (longlong)&___7FDollyFramingCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar4);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar4);
  pFVar1 = (FScriptContainerElement *)(this->DollyPosition).field0_0x0._s_0.Y;
  pFVar4[1]._padding_ = (longlong)(this->DollyPosition).field0_0x0._s_0.X;
  pFVar4[1].Attachments.AllocatorInstance.Data = pFVar1;
  pFVar1 = (FScriptContainerElement *)(this->DebugDollyCorrection).field0_0x0._s_0.Y;
  *(double *)&pFVar4[1].Attachments.ArrayNum = (this->DebugDollyCorrection).field0_0x0._s_0.X;
  pFVar4[1].Children.AllocatorInstance.Data = pFVar1;
  uVar3 = *(undefined4 *)&this->field_0x14c;
  lVar2 = *(longlong *)&this->field_0x150;
  pFVar4[1].Children.ArrayNum = *(undefined4 *)&this->field_0x148;
  pFVar4[1].Children.ArrayMax = uVar3;
  pFVar4[2]._padding_ = lVar2;
  pFVar4[2].Attachments.AllocatorInstance.Data = *(FScriptContainerElement **)&this->field_0x158;
  pFVar1 = (FScriptContainerElement *)(this->DebugNextDesiredTarget).field0_0x0._s_0.Y;
  *(double *)&pFVar4[2].Attachments.ArrayNum = (this->DebugNextDesiredTarget).field0_0x0._s_0.X;
  pFVar4[2].Children.AllocatorInstance.Data = pFVar1;
  *(double *)&pFVar4[2].Children.ArrayNum = (this->DebugNextDesiredTarget).field0_0x0._s_0.Z;
  return;
}

// OnInitialize @ 14d667f20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::OnInitialize
          (FDollyFramingCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  FBaseFramingCameraNodeEvaluator::OnInitialize
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  if (*(longlong *)&this->field_0x10 != 0) {
    pUVar2 = UDollyFramingCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->field_0x10,pUVar2);
    if (bVar1) {
      lVar3 = *(longlong *)&this->field_0x10;
      goto LAB_14d667f56;
    }
  }
  lVar3 = 0;
LAB_14d667f56:
  (this->CanMoveLaterallyReader).DefaultValuePtr = (bool *)(lVar3 + 0x170);
  (this->CanMoveLaterallyReader).VariableID.Value = *(uint *)(lVar3 + 0x174);
  (this->CanMoveVerticallyReader).DefaultValuePtr = (bool *)(lVar3 + 0x180);
  (this->CanMoveVerticallyReader).VariableID.Value = *(uint *)(lVar3 + 0x184);
  (this->DollyPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// OnRun @ 14d66c7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FDollyFramingCameraNodeEvaluator::OnRun
          (FDollyFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool *pbVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_398 [32];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_378;
  TVector<double>_u_0 local_368;
  char local_350;
  TVector<double> local_348;
  TVector<double>_u_0 local_328;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (param_1->bIsFirstFrame != false) {
    FBaseFramingCameraNodeEvaluator::GetInitialDesiredWorldTarget
              ((FBaseFramingCameraNodeEvaluator *)this,
               (TOptional<UE::Math::TVector<double>_> *)&local_368._s_0,param_1,param_2);
    if (local_350 != '\0') {
      FCameraPose::GetTransform(&param_2->CameraPose,&local_f8);
      if (local_350 == '\0') {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_f8.Rotation.XY.m128d_f64[0] =
           local_f8.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] =
           local_f8.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] =
           local_f8.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] =
           local_f8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] = local_368._s_0.Z - local_f8.Translation.ZW.m128d_f64[0]
      ;
      local_f8.Translation.XY.m128d_f64[0] = local_368._s_0.X - local_f8.Translation.XY.m128d_f64[0]
      ;
      local_f8.Translation.XY.m128d_f64[1] = local_368._s_0.Y - local_f8.Translation.XY.m128d_f64[1]
      ;
      uVar14 = (undefined4)((ulonglong)local_f8.Translation.XY.m128d_f64[1] >> 0x20);
      auVar18._8_4_ = SUB84(local_f8.Translation.XY.m128d_f64[1],0);
      auVar18._0_8_ = local_f8.Translation.XY.m128d_f64[0];
      auVar18._12_4_ = uVar14;
      auVar13._8_4_ = SUB84(local_f8.Translation.XY.m128d_f64[1],0);
      auVar13._0_8_ = local_f8.Translation.XY.m128d_f64[0];
      auVar13._12_4_ = uVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_f8.Translation.ZW.m128d_f64[0];
      auVar6 = blendpd(auVar13,auVar6,2);
      auVar19._0_8_ =
           auVar18._8_8_ * local_f8.Rotation.XY.m128d_f64[0] -
           local_f8.Rotation.XY.m128d_f64[1] * local_f8.Translation.XY.m128d_f64[0];
      auVar19._8_8_ =
           local_f8.Translation.ZW.m128d_f64[0] * local_f8.Rotation.XY.m128d_f64[1] -
           local_f8.Rotation.ZW.m128d_f64[0] * local_f8.Translation.XY.m128d_f64[1];
      auVar12._8_4_ = SUB84(local_f8.Rotation.XY.m128d_f64[1],0);
      auVar12._0_8_ = local_f8.Rotation.XY.m128d_f64[0];
      auVar12._12_4_ = (int)((ulonglong)local_f8.Rotation.XY.m128d_f64[1] >> 0x20);
      auVar20._8_4_ = SUB84(local_f8.Rotation.ZW.m128d_f64[1],0);
      auVar20._0_8_ = local_f8.Rotation.ZW.m128d_f64[0];
      auVar20._12_4_ = (int)((ulonglong)local_f8.Rotation.ZW.m128d_f64[1] >> 0x20);
      auVar13 = blendpd(auVar12,auVar20,2);
      auVar7._0_8_ = auVar6._0_8_ * local_f8.Rotation.ZW.m128d_f64[0] -
                     auVar13._0_8_ * local_f8.Translation.ZW.m128d_f64[0];
      auVar7._8_8_ = auVar6._8_8_ * local_f8.Rotation.ZW.m128d_f64[1] - auVar13._8_8_ * 0.0;
      auVar20 = blendpd(auVar19,auVar7,2);
      dVar2 = auVar19._8_8_ + auVar19._8_8_;
      dVar3 = auVar7._0_8_ + auVar7._0_8_;
      uVar14 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar21._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar21._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      auVar10._8_4_ = SUB84(dVar3,0);
      auVar10._0_8_ = dVar2;
      auVar10._12_4_ = uVar14;
      auVar8._8_4_ = SUB84(dVar3,0);
      auVar8._0_8_ = dVar2;
      auVar8._12_4_ = uVar14;
      auVar20 = blendpd(auVar8,auVar21,2);
      auVar11._0_8_ =
           auVar10._8_8_ * local_f8.Rotation.XY.m128d_f64[0] -
           dVar2 * local_f8.Rotation.XY.m128d_f64[1];
      auVar11._8_8_ =
           auVar21._0_8_ * local_f8.Rotation.XY.m128d_f64[1] -
           dVar3 * local_f8.Rotation.ZW.m128d_f64[0];
      auVar9._0_8_ = auVar20._0_8_ * local_f8.Rotation.ZW.m128d_f64[0] -
                     auVar21._0_8_ * auVar13._0_8_;
      auVar9._8_8_ = auVar20._8_8_ * local_f8.Rotation.ZW.m128d_f64[1] -
                     auVar21._8_8_ * auVar13._8_8_;
      auVar20 = blendpd(auVar11,auVar9,2);
      (this->DollyPosition).field0_0x0._s_0.Y =
           auVar21._0_8_ * local_f8.Rotation.ZW.m128d_f64[1] + local_f8.Translation.ZW.m128d_f64[0]
           + auVar20._0_8_;
      (this->DollyPosition).field0_0x0._s_0.X =
           dVar3 * local_f8.Rotation.ZW.m128d_f64[1] + local_f8.Translation.XY.m128d_f64[1] +
           auVar9._0_8_;
    }
  }
  BuildDollyShotTransform(this,&local_1b8,&param_2->CameraPose);
  FBaseFramingCameraNodeEvaluator::UpdateFramingState
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2,&local_1b8);
  if (this->field_0x298 == '\0') {
    (this->DebugDollyCorrection).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  else {
    local_328._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
    local_328._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
    local_328._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
    dStack_310 = (param_2->CameraPose).Rotation.Pitch;
    local_308 = (param_2->CameraPose).Rotation.Yaw;
    dStack_300 = (param_2->CameraPose).Rotation.Roll;
    local_2f8 = (param_2->CameraPose).TargetDistance;
    uStack_2f0._0_4_ = (param_2->CameraPose).FieldOfView;
    uStack_2f0._4_4_ = (param_2->CameraPose).FocalLength;
    local_2e8._0_4_ = (param_2->CameraPose).OrthographicWidth;
    local_2e8._4_4_ = (param_2->CameraPose).Aperture;
    uStack_2e0._0_4_ = (param_2->CameraPose).ShutterSpeed;
    uStack_2e0._4_4_ = (param_2->CameraPose).FocusDistance;
    local_2d8._0_4_ = (param_2->CameraPose).SensorWidth;
    local_2d8._4_4_ = (param_2->CameraPose).SensorHeight;
    uStack_2d0._0_4_ = (param_2->CameraPose).SensorHorizontalOffset;
    uStack_2d0._4_4_ = (param_2->CameraPose).SensorVerticalOffset;
    local_2c8._0_4_ = (param_2->CameraPose).ISO;
    local_2c8._4_4_ = (param_2->CameraPose).SqueezeFactor;
    uStack_2c0._0_4_ = (param_2->CameraPose).Overscan;
    uStack_2c0._4_4_ = (param_2->CameraPose).DiaphragmBladeCount;
    local_2b8._0_4_ = (param_2->CameraPose).NearClippingPlane;
    local_2b8._4_4_ = (param_2->CameraPose).FarClippingPlane;
    uStack_2b0._0_4_ = (param_2->CameraPose).PhysicalCameraBlendWeight;
    uStack_2b0._4_1_ = (param_2->CameraPose).EnablePhysicalCamera;
    uStack_2b0._5_1_ = (param_2->CameraPose).ConstrainAspectRatio;
    uStack_2b0._6_1_ = (param_2->CameraPose).OverrideAspectRatioAxisConstraint;
    uStack_2b0._7_1_ = (param_2->CameraPose).AspectRatioAxisConstraint;
    local_2a8._0_1_ = (param_2->CameraPose).ProjectionMode;
    local_2a8._1_4_ = (param_2->CameraPose).ChangedFlags;
    local_2a8._5_3_ = *(undefined3 *)&(param_2->CameraPose).field_0x85;
    local_298.Rotation.ZW.m128d_f64[0] = local_1b8.Rotation.ZW.m128d_f64[0];
    local_298.Rotation.ZW.m128d_f64[1] = local_1b8.Rotation.ZW.m128d_f64[1];
    local_298.Rotation.XY.m128d_f64[0] = local_1b8.Rotation.XY.m128d_f64[0];
    local_298.Rotation.XY.m128d_f64[1] = local_1b8.Rotation.XY.m128d_f64[1];
    local_298.Translation.ZW.m128d_f64[0] = local_1b8.Translation.ZW.m128d_f64[0];
    local_298.Translation.ZW.m128d_f64[1] = local_1b8.Translation.ZW.m128d_f64[1];
    local_298.Translation.XY.m128d_f64[0] = local_1b8.Translation.XY.m128d_f64[0];
    local_298.Translation.XY.m128d_f64[1] = local_1b8.Translation.XY.m128d_f64[1];
    local_298.Scale3D.ZW.m128d_f64[0] = local_1b8.Scale3D.ZW.m128d_f64[0];
    local_298.Scale3D.ZW.m128d_f64[1] = local_1b8.Scale3D.ZW.m128d_f64[1];
    local_298.Scale3D.XY.m128d_f64[0] = local_1b8.Scale3D.XY.m128d_f64[0];
    local_298.Scale3D.XY.m128d_f64[1] = local_1b8.Scale3D.XY.m128d_f64[1];
    FCameraPose::SetTransform((FCameraPose *)&local_328._s_0,&local_298,false);
    local_378.Object = (param_1->EvaluationContext).Object;
    local_378.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_378.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ComputeFramingTranslation(this,&local_348,(FCameraPose *)&local_328._s_0,&local_378);
    pbVar5 = TCameraParameterReader<bool>::Get
                       (&this->CanMoveLaterallyReader,&param_2->VariableTable);
    uVar14 = 0;
    uVar15 = 0;
    if (*pbVar5 == false) {
      uVar16 = 0;
      uVar17 = 0;
    }
    else {
      uVar16 = SUB84(local_348.field0_0x0._s_0.Y,0);
      uVar17 = (undefined4)((ulonglong)local_348.field0_0x0._8_8_ >> 0x20);
    }
    pbVar5 = TCameraParameterReader<bool>::Get
                       (&this->CanMoveVerticallyReader,&param_2->VariableTable);
    if (*pbVar5 != false) {
      uVar14 = SUB84(local_348.field0_0x0._s_0.Z,0);
      uVar15 = (undefined4)((ulonglong)local_348.field0_0x0._16_8_ >> 0x20);
    }
    dVar2 = (this->DollyPosition).field0_0x0._s_0.Y;
    (this->DollyPosition).field0_0x0._s_0.X =
         (double)CONCAT44(uVar17,uVar16) + (this->DollyPosition).field0_0x0._s_0.X;
    (this->DollyPosition).field0_0x0._s_0.Y = (double)CONCAT44(uVar15,uVar14) + dVar2;
    (this->DebugDollyCorrection).field0_0x0._s_0.X = (double)CONCAT44(uVar17,uVar16);
    (this->DebugDollyCorrection).field0_0x0._s_0.Y = (double)CONCAT44(uVar15,uVar14);
  }
  BuildDollyShotTransform(this,&local_158,&param_2->CameraPose);
  local_238.Rotation.XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
  local_238.Rotation.XY.m128d_f64[1] = local_158.Rotation.XY.m128d_f64[1];
  local_238.Rotation.ZW.m128d_f64[0] = local_158.Rotation.ZW.m128d_f64[0];
  local_238.Rotation.ZW.m128d_f64[1] = local_158.Rotation.ZW.m128d_f64[1];
  local_238.Translation.XY.m128d_f64[0] = local_158.Translation.XY.m128d_f64[0];
  local_238.Translation.XY.m128d_f64[1] = local_158.Translation.XY.m128d_f64[1];
  local_238.Translation.ZW.m128d_f64[0] = local_158.Translation.ZW.m128d_f64[0];
  local_238.Translation.ZW.m128d_f64[1] = local_158.Translation.ZW.m128d_f64[1];
  local_238.Scale3D.XY.m128d_f64[0] = local_158.Scale3D.XY.m128d_f64[0];
  local_238.Scale3D.XY.m128d_f64[1] = local_158.Scale3D.XY.m128d_f64[1];
  local_238.Scale3D.ZW.m128d_f64[0] = local_158.Scale3D.ZW.m128d_f64[0];
  local_238.Scale3D.ZW.m128d_f64[1] = local_158.Scale3D.ZW.m128d_f64[1];
  FCameraPose::SetTransform(&param_2->CameraPose,&local_238,false);
  FBaseFramingCameraNodeEvaluator::EndFramingUpdate
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  return;
}

