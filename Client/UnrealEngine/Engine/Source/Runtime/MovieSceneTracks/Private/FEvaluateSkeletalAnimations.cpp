// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// FEvaluateSkeletalAnimations @ 146807d20

/* WARNING: Enum "Type": Some values do not have unique names */

FEvaluateSkeletalAnimations * __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::FEvaluateSkeletalAnimations
          (FEvaluateSkeletalAnimations *this,UMovieSceneEntitySystemLinker *param_1,
          FSkeletalAnimationSystemData *param_2)

{
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> *pTVar1;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *pTVar2;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> *pTVar3;
  FPreAnimatedStateExtension *this_00;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage,1> local_58;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> local_48;
  TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage,1> local_38;
  
  this->Linker = param_1;
  pTVar1 = &this->PreAnimatedStorage;
  this->SystemData = param_2;
  pTVar2 = &this->PreAnimatedMontageStorage;
  (this->PreAnimatedStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = &this->PreAnimatedAnimInstanceStorage;
  pTVar1->Object = (FPreAnimatedSkeletalAnimationStorage *)0x0;
  this_00 = &param_1->PreAnimatedState;
  pTVar2->Object = (FPreAnimatedSkeletalAnimationMontageStorage *)0x0;
  (this->PreAnimatedMontageStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3->Object = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0;
  (this->PreAnimatedAnimInstanceStorage).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage>
            (this_00,&local_58,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationStorage>)
             FPreAnimatedSkeletalAnimationStorage::StorageID);
  if (pTVar1 != &local_58) {
    pTVar1->Object = local_58.Object;
    local_58.Object = (FPreAnimatedSkeletalAnimationStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedStorage).SharedReferenceCount,&local_58.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage>
            (this_00,&local_48,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage>)
             FPreAnimatedSkeletalAnimationMontageStorage::StorageID);
  if (pTVar2 != &local_48) {
    pTVar2->Object = local_48.Object;
    local_48.Object = (FPreAnimatedSkeletalAnimationMontageStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedMontageStorage).SharedReferenceCount,
               &local_48.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  FPreAnimatedStateExtension::
  GetOrCreateStorage<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage>
            (this_00,&local_38,
             (TPreAnimatedStorageID<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceStorage>
              )FPreAnimatedSkeletalAnimationAnimInstanceStorage::StorageID);
  if (pTVar3 != &local_38) {
    pTVar3->Object = local_38.Object;
    local_38.Object = (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PreAnimatedAnimInstanceStorage).SharedReferenceCount,
               &local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return this;
}

// operator() @ 146813fa0

bool __thiscall
`UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations'::__l13::<lambda_2>::
operator()(void *this,FActiveSkeletalAnimation *param_1)

{
  USkeletalMeshComponent *this_00;
  UMovieSceneSkeletalAnimationSection *pUVar1;
  bool bVar2;
  UAnimSequenceBase *pUVar3;
  USkeletalMesh *pUVar4;
  longlong lVar5;
  UObject *local_18 [2];
  
  pUVar3 = UMovieSceneSkeletalAnimationSection::GetPlaybackAnimation(param_1->AnimSection);
  this_00 = (USkeletalMeshComponent *)**(undefined8 **)this;
  pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar4 != (USkeletalMesh *)0x0) {
    pUVar4 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    lVar5 = (**(code **)(pUVar4->_padding_ + 0x408))(pUVar4);
    if (((lVar5 != 0) && (pUVar3 != (UAnimSequenceBase *)0x0)) && (pUVar3->_padding_ != 0)) {
      pUVar1 = param_1->AnimSection;
      ISequencerAnimationOverride::GetSequencerAnimOverride
                ((TScriptInterface<ISequencerAnimationOverride> *)local_18,
                 (USkeletalMeshComponent *)**(undefined8 **)this);
      if ((pUVar1->Params).bForceCustomMode != false) {
        return true;
      }
      if (local_18[0] != (UObject *)0x0) {
        bVar2 = ISequencerAnimationOverride::Execute_AllowsCinematicOverride(local_18[0]);
        return bVar2;
      }
    }
  }
  return false;
}

// ApplyAnimations @ 14681c680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::ApplyAnimations
          (FEvaluateSkeletalAnimations *this,USkeletalMeshComponent *param_1,
          TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> *param_2)

{
  float *pfVar1;
  undefined1 *puVar2;
  ESwapRootBone EVar3;
  UMovieSceneSkeletalAnimationSection *this_00;
  FSkeletalAnimationSystemData *this_01;
  FFrameTime FVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  USkeletalMeshComponent *this_02;
  longlong lVar10;
  FActiveSkeletalAnimation *pFVar11;
  bool bVar12;
  FActiveSkeletalAnimation *pFVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStackY_368 [32];
  FWeakObjectPtr local_338;
  FWeakObjectPtr local_330;
  int local_328;
  float fStack_324;
  FSetAnimPositionParams local_320;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  FRootMotionParams local_218;
  TOptional<UE::Math::TTransform<double>_> local_128;
  ulonglong local_b8;
  
  fVar5 = __real_3f000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar11 = param_2->DataPtr;
  pFVar13 = pFVar11 + param_2->ArrayNum;
  if (pFVar11 != pFVar13) {
    fStack_324 = 0.0;
    do {
      pfVar1 = &(pFVar11->EvalFrameTime).SubFrame;
      this_00 = pFVar11->AnimSection;
      local_328 = (pFVar11->EvalFrameTime).FrameNumber.Value;
      local_218.Transform.bIsSet = false;
      local_218.PreviousTransform.bIsSet = false;
      if (fVar5 < *pfVar1 || fVar5 == *pfVar1) {
        local_328 = local_328 + 1;
      }
      FVar4.SubFrame = fStack_324;
      FVar4.FrameNumber.Value = local_328;
      UMovieSceneSkeletalAnimationSection::GetRootMotion(this_00,FVar4,&local_218);
      EVar3 = (this_00->Params).SwapRootBone;
      if (EVar3 != SwapRootBone_None) {
        local_2e8.Rotation.XY.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Rotation.XY.m128d_f64[0]._0_4_;
        local_2e8.Rotation.XY.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Rotation.XY.m128d_f64[0]._4_4_;
        local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Rotation.XY.m128d_f64[1]._0_4_;
        local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Rotation.XY.m128d_f64[1]._4_4_;
        local_2e8.Rotation.ZW.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Rotation.ZW.m128d_f64[0]._0_4_;
        local_2e8.Rotation.ZW.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Rotation.ZW.m128d_f64[0]._4_4_;
        local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Rotation.ZW.m128d_f64[1]._0_4_;
        local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Rotation.ZW.m128d_f64[1]._4_4_;
        local_2e8.Translation.XY.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Translation.XY.m128d_f64[0]._0_4_;
        local_2e8.Translation.XY.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Translation.XY.m128d_f64[0]._4_4_;
        local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Translation.XY.m128d_f64[1]._0_4_;
        local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Translation.XY.m128d_f64[1]._4_4_;
        local_2e8.Translation.ZW.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Translation.ZW.m128d_f64[0]._0_4_;
        local_2e8.Translation.ZW.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Translation.ZW.m128d_f64[0]._4_4_;
        local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Translation.ZW.m128d_f64[1]._0_4_;
        local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Translation.ZW.m128d_f64[1]._4_4_;
        local_2e8.Scale3D.XY.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Scale3D.XY.m128d_f64[0]._0_4_;
        local_2e8.Scale3D.XY.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Scale3D.XY.m128d_f64[0]._4_4_;
        local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Scale3D.XY.m128d_f64[1]._0_4_;
        local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Scale3D.XY.m128d_f64[1]._4_4_;
        local_2e8.Scale3D.ZW.m128d_f64[0]._0_4_ =
             local_218.Transform.TypedValue.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_2e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
             local_218.Transform.TypedValue.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             local_218.Transform.TypedValue.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             local_218.Transform.TypedValue.Scale3D.ZW.m128d_f64[1]._4_4_;
        if (local_218.Transform.bIsSet == false) {
          local_2e8.Rotation.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          local_2e8.Rotation.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          local_2e8.Rotation.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          local_2e8.Rotation.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          local_2e8.Rotation.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          local_2e8.Translation.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
          local_2e8.Translation.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
          local_2e8.Translation.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
          local_2e8.Translation.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
          local_2e8.Translation.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
          local_2e8.Translation.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
          local_2e8.Translation.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
          local_2e8.Translation.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
          local_2e8.Scale3D.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          local_2e8.Scale3D.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_2e8.Scale3D.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_2e8.Scale3D.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        bVar12 = false;
        if (EVar3 == SwapRootBone_Component) {
          bVar6 = ContainsTransform(this,(UObject *)param_1);
          this_02 = param_1;
          uVar14 = local_288.Rotation.XY.m128d_f64[0]._0_4_;
          uVar15 = local_288.Rotation.XY.m128d_f64[0]._4_4_;
          uVar16 = local_288.Rotation.XY.m128d_f64[1]._0_4_;
          uVar17 = local_288.Rotation.XY.m128d_f64[1]._4_4_;
          uVar18 = local_288.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar19 = local_288.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar20 = local_288.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar21 = local_288.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar22 = local_288.Translation.XY.m128d_f64[0]._0_4_;
          uVar23 = local_288.Translation.XY.m128d_f64[0]._4_4_;
          uVar24 = local_288.Translation.XY.m128d_f64[1]._0_4_;
          uVar25 = local_288.Translation.XY.m128d_f64[1]._4_4_;
          uVar26 = local_288.Translation.ZW.m128d_f64[0]._0_4_;
          uVar27 = local_288.Translation.ZW.m128d_f64[0]._4_4_;
          uVar28 = local_288.Translation.ZW.m128d_f64[1]._0_4_;
          uVar29 = local_288.Translation.ZW.m128d_f64[1]._4_4_;
          uVar30 = local_288.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar31 = local_288.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar32 = local_288.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar33 = local_288.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar34 = local_288.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar35 = local_288.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar36 = local_288.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar37 = local_288.Scale3D.ZW.m128d_f64[1]._4_4_;
          if (bVar6) {
LAB_14681c7f2:
            pTVar8 = USceneComponent::GetRelativeTransform
                               ((USceneComponent *)this_02,&local_128.TypedValue);
            uVar14 = local_288.Rotation.XY.m128d_f64[0]._0_4_;
            uVar15 = local_288.Rotation.XY.m128d_f64[0]._4_4_;
            uVar16 = local_288.Rotation.XY.m128d_f64[1]._0_4_;
            uVar17 = local_288.Rotation.XY.m128d_f64[1]._4_4_;
            uVar18 = local_288.Rotation.ZW.m128d_f64[0]._0_4_;
            uVar19 = local_288.Rotation.ZW.m128d_f64[0]._4_4_;
            uVar20 = local_288.Rotation.ZW.m128d_f64[1]._0_4_;
            uVar21 = local_288.Rotation.ZW.m128d_f64[1]._4_4_;
            uVar22 = local_288.Translation.XY.m128d_f64[0]._0_4_;
            uVar23 = local_288.Translation.XY.m128d_f64[0]._4_4_;
            uVar24 = local_288.Translation.XY.m128d_f64[1]._0_4_;
            uVar25 = local_288.Translation.XY.m128d_f64[1]._4_4_;
            uVar26 = local_288.Translation.ZW.m128d_f64[0]._0_4_;
            uVar27 = local_288.Translation.ZW.m128d_f64[0]._4_4_;
            uVar28 = local_288.Translation.ZW.m128d_f64[1]._0_4_;
            uVar29 = local_288.Translation.ZW.m128d_f64[1]._4_4_;
            uVar30 = local_288.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar31 = local_288.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar32 = local_288.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar33 = local_288.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar34 = local_288.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar35 = local_288.Scale3D.ZW.m128d_f64[0]._4_4_;
            uVar36 = local_288.Scale3D.ZW.m128d_f64[1]._0_4_;
            uVar37 = local_288.Scale3D.ZW.m128d_f64[1]._4_4_;
            if (pTVar8 != &local_288) {
              bVar12 = true;
              uVar14 = *(undefined4 *)(pTVar8->Rotation).XY.m128d_f64;
              uVar15 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 4);
              uVar16 = *(undefined4 *)((pTVar8->Rotation).XY.m128d_f64 + 1);
              uVar17 = *(undefined4 *)((longlong)(pTVar8->Rotation).XY.m128d_f64 + 0xc);
              uVar18 = *(undefined4 *)(pTVar8->Rotation).ZW.m128d_f64;
              uVar19 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 4);
              uVar20 = *(undefined4 *)((pTVar8->Rotation).ZW.m128d_f64 + 1);
              uVar21 = *(undefined4 *)((longlong)(pTVar8->Rotation).ZW.m128d_f64 + 0xc);
              uVar22 = *(undefined4 *)(pTVar8->Translation).XY.m128d_f64;
              uVar23 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 4);
              uVar24 = *(undefined4 *)((pTVar8->Translation).XY.m128d_f64 + 1);
              uVar25 = *(undefined4 *)((longlong)(pTVar8->Translation).XY.m128d_f64 + 0xc);
              uVar26 = *(undefined4 *)(pTVar8->Translation).ZW.m128d_f64;
              uVar27 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 4);
              uVar28 = *(undefined4 *)((pTVar8->Translation).ZW.m128d_f64 + 1);
              uVar29 = *(undefined4 *)((longlong)(pTVar8->Translation).ZW.m128d_f64 + 0xc);
              uVar30 = *(undefined4 *)(pTVar8->Scale3D).XY.m128d_f64;
              uVar31 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 4);
              uVar32 = *(undefined4 *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
              uVar33 = *(undefined4 *)((longlong)(pTVar8->Scale3D).XY.m128d_f64 + 0xc);
              uVar34 = *(undefined4 *)(pTVar8->Scale3D).ZW.m128d_f64;
              uVar35 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 4);
              uVar36 = *(undefined4 *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
              uVar37 = *(undefined4 *)((longlong)(pTVar8->Scale3D).ZW.m128d_f64 + 0xc);
            }
          }
        }
        else {
          uVar14 = local_288.Rotation.XY.m128d_f64[0]._0_4_;
          uVar15 = local_288.Rotation.XY.m128d_f64[0]._4_4_;
          uVar16 = local_288.Rotation.XY.m128d_f64[1]._0_4_;
          uVar17 = local_288.Rotation.XY.m128d_f64[1]._4_4_;
          uVar18 = local_288.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar19 = local_288.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar20 = local_288.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar21 = local_288.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar22 = local_288.Translation.XY.m128d_f64[0]._0_4_;
          uVar23 = local_288.Translation.XY.m128d_f64[0]._4_4_;
          uVar24 = local_288.Translation.XY.m128d_f64[1]._0_4_;
          uVar25 = local_288.Translation.XY.m128d_f64[1]._4_4_;
          uVar26 = local_288.Translation.ZW.m128d_f64[0]._0_4_;
          uVar27 = local_288.Translation.ZW.m128d_f64[0]._4_4_;
          uVar28 = local_288.Translation.ZW.m128d_f64[1]._0_4_;
          uVar29 = local_288.Translation.ZW.m128d_f64[1]._4_4_;
          uVar30 = local_288.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar31 = local_288.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar32 = local_288.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar33 = local_288.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar34 = local_288.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar35 = local_288.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar36 = local_288.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar37 = local_288.Scale3D.ZW.m128d_f64[1]._4_4_;
          if ((((EVar3 == SwapRootBone_Actor) && (param_1->_padding_ != 0)) &&
              (this_02 = *(USkeletalMeshComponent **)(param_1->_padding_ + 0x1b8),
              this_02 != (USkeletalMeshComponent *)0x0)) &&
             (bVar6 = ContainsTransform(this,(UObject *)this_02),
             uVar14 = local_288.Rotation.XY.m128d_f64[0]._0_4_,
             uVar15 = local_288.Rotation.XY.m128d_f64[0]._4_4_,
             uVar16 = local_288.Rotation.XY.m128d_f64[1]._0_4_,
             uVar17 = local_288.Rotation.XY.m128d_f64[1]._4_4_,
             uVar18 = local_288.Rotation.ZW.m128d_f64[0]._0_4_,
             uVar19 = local_288.Rotation.ZW.m128d_f64[0]._4_4_,
             uVar20 = local_288.Rotation.ZW.m128d_f64[1]._0_4_,
             uVar21 = local_288.Rotation.ZW.m128d_f64[1]._4_4_,
             uVar22 = local_288.Translation.XY.m128d_f64[0]._0_4_,
             uVar23 = local_288.Translation.XY.m128d_f64[0]._4_4_,
             uVar24 = local_288.Translation.XY.m128d_f64[1]._0_4_,
             uVar25 = local_288.Translation.XY.m128d_f64[1]._4_4_,
             uVar26 = local_288.Translation.ZW.m128d_f64[0]._0_4_,
             uVar27 = local_288.Translation.ZW.m128d_f64[0]._4_4_,
             uVar28 = local_288.Translation.ZW.m128d_f64[1]._0_4_,
             uVar29 = local_288.Translation.ZW.m128d_f64[1]._4_4_,
             uVar30 = local_288.Scale3D.XY.m128d_f64[0]._0_4_,
             uVar31 = local_288.Scale3D.XY.m128d_f64[0]._4_4_,
             uVar32 = local_288.Scale3D.XY.m128d_f64[1]._0_4_,
             uVar33 = local_288.Scale3D.XY.m128d_f64[1]._4_4_,
             uVar34 = local_288.Scale3D.ZW.m128d_f64[0]._0_4_,
             uVar35 = local_288.Scale3D.ZW.m128d_f64[0]._4_4_,
             uVar36 = local_288.Scale3D.ZW.m128d_f64[1]._0_4_,
             uVar37 = local_288.Scale3D.ZW.m128d_f64[1]._4_4_, bVar6)) goto LAB_14681c7f2;
        }
        this_01 = this->SystemData;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (USkeletalMeshComponent *)0x0)) {
          GC::MarkAsReachable((UObject *)param_1);
        }
        local_338.ObjectIndex = 0;
        local_338.ObjectSerialNumber = 0;
        local_330 = (FWeakObjectPtr)param_1;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (USkeletalMeshComponent *)0x0)) {
          GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_338,(FObjectPtr)&local_330);
        local_330 = local_338;
        iVar7 = TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr>_>
                          ((TSet<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations,0>,FDefaultSetAllocator>
                            *)this_01,local_338.ObjectSerialNumber ^ local_338.ObjectIndex,
                           (TWeakObjectPtr<USkeletalMeshComponent_const_,FWeakObjectPtr> *)
                           &local_330);
        if (iVar7 == -1) {
          lVar10 = 0;
        }
        else {
          lVar10 = (longlong)iVar7 * 0x420 + *(longlong *)&this_01->SkeletalAnimations;
        }
        lVar9 = lVar10 + 0x10;
        if (lVar10 == 0) {
          lVar9 = 0;
        }
        if (lVar9 != 0) {
          if (bVar12 != false) {
            local_128.TypedValue.Rotation.XY.m128d_f64[0]._0_4_ = uVar14;
            local_128.TypedValue.Rotation.XY.m128d_f64[0]._4_4_ = uVar15;
            local_128.TypedValue.Rotation.XY.m128d_f64[1]._0_4_ = uVar16;
            local_128.TypedValue.Rotation.XY.m128d_f64[1]._4_4_ = uVar17;
            local_128.TypedValue.Rotation.ZW.m128d_f64[0]._0_4_ = uVar18;
            local_128.TypedValue.Rotation.ZW.m128d_f64[0]._4_4_ = uVar19;
            local_128.TypedValue.Rotation.ZW.m128d_f64[1]._0_4_ = uVar20;
            local_128.TypedValue.Rotation.ZW.m128d_f64[1]._4_4_ = uVar21;
            local_128.TypedValue.Translation.XY.m128d_f64[0]._0_4_ = uVar22;
            local_128.TypedValue.Translation.XY.m128d_f64[0]._4_4_ = uVar23;
            local_128.TypedValue.Translation.XY.m128d_f64[1]._0_4_ = uVar24;
            local_128.TypedValue.Translation.XY.m128d_f64[1]._4_4_ = uVar25;
            local_128.TypedValue.Translation.ZW.m128d_f64[0]._0_4_ = uVar26;
            local_128.TypedValue.Translation.ZW.m128d_f64[0]._4_4_ = uVar27;
            local_128.TypedValue.Translation.ZW.m128d_f64[1]._0_4_ = uVar28;
            local_128.TypedValue.Translation.ZW.m128d_f64[1]._4_4_ = uVar29;
            local_128.TypedValue.Scale3D.XY.m128d_f64[0]._0_4_ = uVar30;
            local_128.TypedValue.Scale3D.XY.m128d_f64[0]._4_4_ = uVar31;
            local_128.TypedValue.Scale3D.XY.m128d_f64[1]._0_4_ = uVar32;
            local_128.TypedValue.Scale3D.XY.m128d_f64[1]._4_4_ = uVar33;
            local_128.TypedValue.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar34;
            local_128.TypedValue.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar35;
            local_128.TypedValue.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar36;
            local_128.TypedValue.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar37;
          }
          local_128.bIsSet = bVar12;
          FBoneTransformFinalizeData::Register
                    ((FBoneTransformFinalizeData *)(lVar9 + 0x2e0),param_1,
                     (this_00->Params).SwapRootBone,&local_2e8,&local_128);
        }
      }
      local_320.ToPosition = pFVar11->ToEvalTime;
      bVar12 = false;
      local_320.FromPosition = pFVar11->FromEvalTime;
      if ((this_00->Params).bReverse == 0) {
        if (local_320.ToPosition <= local_320.FromPosition) {
          bVar12 = true;
        }
      }
      else {
        bVar12 = local_320.FromPosition <= local_320.ToPosition;
      }
      local_320.EntityID.Value = (pFVar11->EntityID).Value;
      local_320.RootInstanceHandle = pFVar11->RootInstanceHandle;
      local_320.CurrentTime = pFVar11->EvalFrameTime;
      local_320.bWantsRestoreState = pFVar11->bWantsRestoreState;
      local_320.bPlaying = pFVar11->bPlaying;
      local_320.Weight = (float)pFVar11->BlendWeight;
      if (((pFVar11->bFireNotifies == 0) || ((this_00->Params).bSkipAnimNotifiers != false)) ||
         (local_320.bFireNotifies = true, bVar12)) {
        local_320.bFireNotifies = false;
      }
      local_320.bResetDynamics = pFVar11->bResetDynamics;
      local_320.Section = this_00;
      local_320.SkeletalMeshComponent = param_1;
      if (pFVar11->bPreviewPlayback == '\0') {
        SetAnimPosition(this,&local_320);
      }
      else {
        PreviewSetAnimPosition(this,&local_320);
      }
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar13);
  }
  return;
}

// ContainsTransform @ 1468225b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::ContainsTransform
          (FEvaluateSkeletalAnimations *this,UObject *param_1)

{
  int iVar1;
  FBuiltInComponentTypes *pFVar2;
  FMovieSceneTracksComponentTypes *pFVar3;
  FScriptContainerElement *this_00;
  undefined1 auStack_1e8 [32];
  bool local_1c8 [4];
  FComponentTypeID local_1c4;
  FComponentTypeID local_1c2 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  undefined8 local_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  <lambda_1> local_180;
  TComponentTypeID<UObject_*> local_170;
  undefined6 uStack_16e;
  undefined8 uStack_168;
  TStatIdData *pTStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  FComponentTypeID local_148;
  TComponentTypeID<unsigned_short> local_146;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_144;
  FComponentTypeID local_142 [5];
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>
  local_138;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_180.bContainsTransform = local_1c8;
  local_1c8[0] = false;
  local_180.InBoundObject = param_1;
  pFVar2 = FBuiltInComponentTypes::Get();
  pFVar3 = FMovieSceneTracksComponentTypes::Get();
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_170 = pFVar2->BoundObject;
  local_1c4.Value = (pFVar3->ComponentTransform).PropertyTag.Value;
  local_1a0 = 0;
  uStack_188 = 0x6ff;
  uStack_184 = uStack_184 & 0xffffff00;
  uStack_158 = CONCAT71(uStack_18f,local_190) & 0xffffffffffffffe0;
  uStack_150._4_4_ = uStack_184;
  uStack_150._0_4_ = AnyHiPriThreadHiPriTask;
  uStack_168 = 0;
  pTStack_160 = &TStatId::TStatId_NAME_None;
  local_110.AllMask.Bits.NumBits = 0;
  local_138._2_6_ = uStack_16e;
  local_138.Accessors = (TTuple<UE::MovieScene::TReadAccess<UObject_*>_>)local_170;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_138.CommonParams.TaskParams.DebugName = (wchar_t *)0x0;
  local_138.CommonParams.TaskParams.StatId.StatIdPtr = &TStatId::TStatId_NAME_None;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_5c = 0x180;
  local_28 = 0;
  local_24 = 0x180;
  local_190 = local_190 & 0xe0;
  local_138.CommonParams.TaskParams._16_8_ = uStack_158;
  local_138.CommonParams._24_8_ = uStack_150;
  AddAccessorToFilter((FComponentAccess *)&local_138,&local_110);
  local_1b8._First = &local_1c4;
  local_1b8._Last = local_1c2;
  FComponentMask::SetAll(&local_110.AllMask,&local_1b8);
  local_148.Value = *(ushort *)&pFVar2->CustomPropertyIndex;
  local_146 = pFVar2->FastPropertyOffset;
  local_144 = pFVar2->SlowProperty;
  iVar1 = local_110.ComplexMasks.ArrayNum;
  if (local_110.ComplexMasks.ArrayNum == local_110.ComplexMasks.ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_110.ComplexMasks.AllocatorInstance,
                       &local_110.ComplexMasks.ArrayMax);
  }
  local_110.ComplexMasks.ArrayNum = iVar1 + 1;
  local_1b8._First = &local_148;
  this_00 = local_110.ComplexMasks.AllocatorInstance.Data + (longlong)iVar1 * 0x3c;
  local_1b8._Last = local_142;
  *(int *)(this_00 + 0x30) = 0;
  *(int *)(this_00 + 0x34) = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  FComponentMask::SetAll((FComponentMask *)this_00,&local_1b8);
  TEntityTaskComponentsImpl<TIntegerSequence<int,0>,UE::MovieScene::TReadAccess<UObject_*>_>::
  Iterate_PerEntityImpl<_UE::MovieScene::FEvaluateSkeletalAnimations::ContainsTransform_::__l2::<lambda_1>_&>
            (&local_138,&this->Linker->EntityManager,&local_110,&local_180);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return local_1c8[0];
}

// EvaluateSkeletalAnimations @ 146827df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations
          (FEvaluateSkeletalAnimations *this,USkeletalMeshComponent *param_1,
          FBoundObjectActiveSkeletalAnimations *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar2;
  FPreAnimatedSkeletalAnimationStorage *pFVar3;
  FSkeletalAnimationSystemData *pFVar4;
  UMovieSceneEntitySystemLinker *pUVar5;
  FName FVar6;
  code *pcVar7;
  USkeletalMeshComponent *pUVar8;
  FEvaluateSkeletalAnimations *pFVar9;
  bool bVar10;
  uint uVar11;
  USkeletalMesh *pUVar12;
  UAnimInstance *pUVar13;
  UClass *pUVar14;
  longlong *plVar15;
  UAnimSequencerInstance *pUVar16;
  FAnimMontageInstance *pFVar17;
  UMovieSceneMotionVectorSimulationSystem *this_00;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> *pTVar18;
  FString *pFVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  ForElementType<UE::MovieScene::FActiveSkeletalAnimation> FVar28;
  uchar *puVar29;
  wchar_t *pwVar30;
  longlong *plVar31;
  FEvaluateSkeletalAnimations *pFVar32;
  wchar_t *pwVar33;
  int iVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  longlong *plVar36;
  uint uVar37;
  undefined1 auStack_248 [32];
  USkeletalMeshComponent *local_228;
  bool local_218 [8];
  USkeletalMeshComponent *local_210;
  undefined1 local_208;
  undefined1 local_207;
  FCachePreAnimatedValueParams local_206;
  undefined1 local_205;
  undefined1 local_204 [4];
  uint local_200;
  FWeakObjectPtr local_1fc;
  FWeakObjectPtr local_1f0;
  UAnimInstance *local_1e8;
  FEvaluateSkeletalAnimations *local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  USkeletalMeshComponent *local_1c8;
  FWeakObjectPtr *local_1c0;
  longlong *local_1b8;
  FBoundObjectActiveSkeletalAnimations *local_1b0;
  UClass *local_1a8;
  longlong *local_1a0;
  uint uStack_198;
  uint uStack_194;
  TBitArray<FDefaultBitArrayAllocator> *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  longlong *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> local_138;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> local_128;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> local_118;
  FString local_108;
  FString local_f8;
  TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int> local_e8 [2];
  undefined4 local_bc;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_210 = param_1;
  local_1e0 = this;
  local_1b0 = param_2;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    local_208 = 0;
    `UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations'::__l2::<lambda_1>::
    operator()(&local_208);
    if (local_210 == (USkeletalMeshComponent *)0x0) {
      return;
    }
  }
  pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_210);
  if (pUVar12 != (USkeletalMesh *)0x0) {
    if ((GAnimationUIFlickerFix != true) &&
       ((ShouldUseLegacyControlRigTemplate == (_func___cdecl_bool *)0x0 ||
        (bVar10 = (*ShouldUseLegacyControlRigTemplate)(), bVar10)))) {
      FVar2 = (param_2->Animations).AllocatorInstance.SecondaryData;
      iVar25 = (param_2->Animations).ArrayNum;
      FVar28 = (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)param_2;
      if (FVar2 != (ForElementType<UE::MovieScene::FActiveSkeletalAnimation>)0x0) {
        FVar28 = FVar2;
      }
      puVar29 = (uchar *)((longlong)FVar28 + 0x90);
      while( true ) {
        if ((param_2->Animations).ArrayNum != iVar25) {
          local_207 = 0;
          `TCheckedPointerIterator<UE::MovieScene::FActiveSkeletalAnimation_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_207);
        }
        pFVar3 = (this->PreAnimatedStorage).Object;
        if ((ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)(puVar29 + -0x90) ==
            (ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *)
            ((longlong)iVar25 * 0xb0 + (longlong)FVar28)) break;
        if ((pFVar3 == (FPreAnimatedSkeletalAnimationStorage *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar26 = &((this->PreAnimatedStorage).Object)->field_0xd8;
        local_228 = local_210;
        (**(code **)(*(longlong *)puVar26 + 8))
                  (puVar26,*(undefined2 *)puVar29,puVar29[0x1c] >> 3 & 1);
        puVar29 = puVar29 + 0xb0;
      }
      local_206.bForcePersist = false;
      if ((pFVar3 == (FPreAnimatedSkeletalAnimationStorage *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>::
      CachePreAnimatedValue
                ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationTraits>
                  *)(this->PreAnimatedStorage).Object,&local_206,(UObject *)local_210,CacheIfTracked
                );
    }
    bVar10 = Algo::
             NoneOf<TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,_UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations_::__l13::<lambda_2>_>
                       (&param_2->Animations,(<lambda_2>)&local_210);
    if (!bVar10) {
      USkeletalMeshComponent::SetAnimationMode(local_210,AnimationCustomMode,true);
    }
    pUVar13 = USkeletalMeshComponent::GetAnimInstance(local_210);
    local_1e8 = pUVar13;
    if (pUVar13 != (UAnimInstance *)0x0) {
      pUVar14 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
      plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar13,pUVar14);
      if (plVar15 != (longlong *)0x0) {
        pUVar13 = (UAnimInstance *)(**(code **)(*plVar15 + 0x10))(plVar15);
        local_1e8 = pUVar13;
      }
    }
    local_218[0] = false;
    pUVar16 = FAnimCustomInstanceHelper::BindToSkeletalMeshComponent<UAnimSequencerInstance>
                        (local_210,local_218);
    pUVar8 = local_210;
    plVar31 = (longlong *)0x0;
    iVar25 = 0;
    plVar15 = plVar31;
    if ((pUVar16 == (UAnimSequencerInstance *)0x0) ||
       (plVar15 = (longlong *)&pUVar16->field_0x428, plVar15 == (longlong *)0x0)) {
      if (pUVar13 != (UAnimInstance *)0x0) {
        uVar11 = 0;
        pFVar4 = this->SystemData;
        local_1fc.ObjectIndex = 0;
        local_1fc.ObjectSerialNumber = 0;
        plVar36 = plVar31;
        if (local_210 != (USkeletalMeshComponent *)0x0) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable((UObject *)local_210);
          }
          local_1f0.ObjectIndex = 0;
          local_1f0.ObjectSerialNumber = 0;
          local_1c8 = pUVar8;
          if ((GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (USkeletalMeshComponent *)0x0)) {
            GC::MarkAsReachable((UObject *)pUVar8);
          }
          FWeakObjectPtr::operator=(&local_1f0,(FObjectPtr)&local_1c8);
          local_1fc = local_1f0;
          iVar25 = local_1f0.ObjectIndex;
          plVar36 = (longlong *)((ulonglong)local_1f0 >> 0x20);
        }
        iVar27 = (int)plVar36;
        uVar24 = iVar25 - iVar27 ^ (uint)((ulonglong)plVar36 >> 0xd);
        uVar20 = (-0x61c88647 - iVar27) - uVar24 ^ uVar24 << 8;
        uVar37 = (iVar27 - uVar20) - uVar24 ^ uVar20 >> 0xd;
        uVar24 = (uVar24 - uVar37) - uVar20 ^ uVar37 >> 0xc;
        uVar20 = (uVar20 - uVar24) - uVar37 ^ uVar24 << 0x10;
        uVar37 = (uVar37 - uVar20) - uVar24 ^ uVar20 >> 5;
        uVar24 = (uVar24 - uVar37) - uVar20 ^ uVar37 >> 3;
        uVar20 = (uVar20 - uVar24) - uVar37 ^ uVar24 << 10;
        uVar20 = (uVar37 - uVar20) - uVar24 ^ uVar20 >> 0xf;
        if (*(int *)&(pFVar4->MontageData).field_0x8 != *(int *)&(pFVar4->MontageData).field_0x34) {
          puVar26 = *(undefined1 **)&(pFVar4->MontageData).field_0x40;
          if (puVar26 == (undefined1 *)0x0) {
            puVar26 = &(pFVar4->MontageData).field_0x38;
          }
          iVar34 = *(int *)(puVar26 +
                           (ulonglong)(*(int *)&(pFVar4->MontageData).field_0x48 - 1U & uVar20) * 4)
          ;
          if (iVar34 != -1) {
            lVar22 = *(longlong *)&pFVar4->MontageData;
            do {
              lVar21 = (longlong)iVar34 * 0x60;
              if ((*(int *)(lVar21 + lVar22) == iVar25) && (*(int *)(lVar21 + 4 + lVar22) == iVar27)
                 ) {
                if ((iVar34 != -1) && (lVar22 = (longlong)iVar34 * 0x60 + lVar22, lVar22 != 0))
                goto LAB_14682821f;
                break;
              }
              iVar34 = *(int *)(lVar21 + 0x58 + lVar22);
            } while (iVar34 != -1);
          }
        }
        local_1c0 = &local_1fc;
        local_228 = (USkeletalMeshComponent *)0x0;
        TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
                  ((TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                    *)&pFVar4->MontageData,(uint)&local_200,
                   (TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar20,(bool *)&local_1c0);
        lVar22 = (longlong)(int)local_200 * 0x60 + *(longlong *)&pFVar4->MontageData;
LAB_14682821f:
        local_1b8 = (longlong *)(lVar22 + 8);
        uVar20 = *(uint *)(lVar22 + 0x30);
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar22 + 0x18);
        uStack_194 = 1;
        iVar25 = 0;
        uStack_198 = uVar11;
        local_180 = uVar11;
        if (uVar20 != 0) {
          pTVar35 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x28);
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x28) ==
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar35 = pTVar1;
          }
          uVar11 = *(uint *)(pTVar35->AllocatorInstance).InlineData;
          plVar36 = plVar31;
          uStack_198 = 0;
          local_180 = 0;
          while (uVar11 == 0) {
            uStack_198 = (int)plVar31 + 1;
            plVar31 = (longlong *)(ulonglong)uStack_198;
            local_180 = (int)plVar36 + 0x20;
            plVar36 = (longlong *)(ulonglong)local_180;
            uVar11 = uVar20;
            if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_198)
            goto LAB_14682829d;
            uVar11 = *(uint *)((pTVar35->AllocatorInstance).InlineData +
                              (longlong)(int)uStack_198 * 4);
          }
          uStack_194 = ~(uVar11 - 1) & uVar11;
          uVar23 = (ulonglong)uStack_194 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          local_1d0 = (int)lVar21;
          uVar11 = (local_180 - 1) + local_1d0;
          if ((int)uVar20 < (int)uVar11) {
            uVar11 = uVar20;
          }
LAB_14682829d:
          iVar25 = *(int *)(lVar22 + 0x30);
        }
        uVar20 = *(uint *)(lVar22 + 0x30);
        uStack_17c = local_bc;
        uVar24 = uVar20 & 0xffffffe0;
        iStack_178 = *(int *)(lVar22 + 0x10) - *(int *)(lVar22 + 0x3c);
        uStack_188 = 0xffffffff;
        TStack_168._padding_ = CONCAT44(uStack_194,uStack_198);
        TStack_168.CurrentBitIndex = uVar11;
        TStack_168.UnvisitedBitMask = 0xffffffff;
        iVar27 = (int)uVar20 >> 5;
        TStack_168._28_4_ = local_bc;
        TStack_168.BaseBitIndex = local_180;
        uStack_148 = CONCAT44(uStack_174,iStack_178);
        local_1a0 = local_1b8;
        local_190 = pTVar1;
        uStack_184 = uVar11;
        local_170 = local_1b8;
        TStack_168.Array = pTVar1;
        if ((((int)uVar20 < 0) || (iVar25 < (int)uVar20)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar31 = local_1b8;
        pUVar13 = local_1e8;
        uVar11 = *(uint *)(lVar22 + 0x30);
        if (uVar20 != uVar11) {
          pTVar35 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x28) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar35 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar22 + 0x28);
          }
          uVar20 = -1 << ((byte)uVar20 & 0x1f) &
                   *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
          while (uVar20 == 0) {
            iVar27 = iVar27 + 1;
            uVar24 = uVar24 + 0x20;
            uVar20 = uVar11;
            if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar27)
            goto LAB_1468283a0;
            uVar20 = *(uint *)((pTVar35->AllocatorInstance).InlineData + (longlong)iVar27 * 4);
          }
          uVar23 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
          lVar22 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar20 = (int)lVar22 + -1 + uVar24;
          if ((int)uVar11 < (int)uVar20) {
            uVar20 = uVar11;
          }
        }
LAB_1468283a0:
        while( true ) {
          plVar36 = local_170;
          if ((int)local_170[1] - *(int *)((longlong)local_170 + 0x34) != (int)uStack_148) {
            `TSparseArray<TSparseSetElement<TTuple<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_205);
          }
          if (((TStack_168.CurrentBitIndex == uVar20) && (TStack_168.Array == pTVar1)) &&
             (param_2 = local_1b0, this = local_1e0, plVar36 == plVar31)) break;
          pFVar17 = UAnimInstance::GetMontageInstanceForID
                              (pUVar13,*(int *)((longlong)TStack_168.CurrentBitIndex * 0x1c + 0x10 +
                                               *plVar36));
          if (pFVar17 != (FAnimMontageInstance *)0x0) {
            FAlphaBlend::SetDesiredValue(&pFVar17->Blend,0.0);
            FAlphaBlend::SetAlpha(&pFVar17->Blend,0.0);
          }
          TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
        }
      }
    }
    else if (local_218[0] == false) {
      (**(code **)(*plVar15 + 0x38))(plVar15);
      (**(code **)(*plVar15 + 0x40))(plVar15);
    }
    else {
      (**(code **)(*plVar15 + 0x50))();
      (**(code **)(*plVar15 + 0x40))(plVar15);
    }
    if ((param_2->SimulatedAnimations).ArrayNum != 0) {
      pUVar5 = this->Linker;
      local_1a8 = UMovieSceneMotionVectorSimulationSystem::StaticClass();
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)local_1a8);
      }
      this_00 = (UMovieSceneMotionVectorSimulationSystem *)
                UMovieSceneEntitySystemLinker::FindSystem
                          (pUVar5,(TSubclassOf<UMovieSceneEntitySystem>)&local_1a8);
      if (this_00 != (UMovieSceneMotionVectorSimulationSystem *)0x0) {
        pUVar14 = UMovieSceneMotionVectorSimulationSystem::StaticClass();
        iVar25 = (int)pUVar14->_padding_;
        if ((*(int *)(this_00->_padding_ + 0x38) < iVar25) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar25 * 8) !=
            &pUVar14->_padding_)) {
          pFVar19 = GetTypeName<UMovieSceneMotionVectorSimulationSystem>(&local_108);
          pwVar30 = L"";
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar33 = L"";
          }
          else {
            pwVar33 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
          pFVar19 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                              (&local_f8,(UMovieSceneEntitySystem *)this_00);
          if ((pFVar19->Data).ArrayNum != 0) {
            pwVar30 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar30,pwVar33);
        }
        if (this_00->bSimulationEnabled != false) {
          pTVar18 = TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int>::
                    TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int><TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                              (&local_118,&param_2->SimulatedAnimations);
          local_138.DataPtr = pTVar18->DataPtr;
          local_138.ArrayNum = pTVar18->ArrayNum;
          local_138._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
          ApplyAnimations(this,local_210,&local_138);
          USkeletalMeshComponent::TickAnimation(local_210,0.0,false);
          USkinnedMeshComponent::ForceMotionVector((USkinnedMeshComponent *)local_210);
          pUVar8 = local_210;
          local_200 = (uint)local_210->_padding_;
          uVar23 = (ulonglong)(int)local_200;
          pFVar32 = (FEvaluateSkeletalAnimations *)local_210->_padding_;
          local_1e0 = (FEvaluateSkeletalAnimations *)(&pFVar32->Linker + uVar23);
          while( true ) {
            pFVar9 = local_1e0;
            if ((int)pUVar8->_padding_ != (int)uVar23) {
              `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_204);
            }
            if (pFVar32 == pFVar9) break;
            pUVar5 = pFVar32->Linker;
            if (pUVar5 != (UMovieSceneEntitySystemLinker *)0x0) {
              FVar6.ComparisonIndex.Value =
                   *(uint *)&(pUVar5->EntityManager).EntityLocations.field_0x18;
              FVar6.Number = *(uint *)&(pUVar5->EntityManager).EntityLocations.field_0x1c;
              local_1d8 = 0;
              if (FVar6 != (FName)0x0) {
                (**(code **)(pUVar8->_padding_ + 0x520))(pUVar8,&local_b8,FVar6,2);
                UMovieSceneMotionVectorSimulationSystem::AddSimulatedTransform
                          (this_00,(USceneComponent *)pUVar8,&local_b8,FVar6);
              }
            }
            uVar23 = (ulonglong)local_200;
            pFVar32 = (FEvaluateSkeletalAnimations *)&pFVar32->SystemData;
          }
        }
      }
    }
    pTVar18 = TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int>::
              TArrayView<UE::MovieScene::FActiveSkeletalAnimation_const_,int><TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_const_&,TArray<UE::MovieScene::FActiveSkeletalAnimation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>
                        (local_e8,&param_2->Animations);
    local_128.DataPtr = pTVar18->DataPtr;
    local_128.ArrayNum = pTVar18->ArrayNum;
    local_128._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    ApplyAnimations(this,local_210,&local_128);
    if ((local_210->bPostEvaluatingAnimation == '\0') &&
       ((bVar10 = USkeletalMeshComponent::PoseTickedThisFrame(local_210), bVar10 ||
        ((plVar15 != (longlong *)0x0 &&
         (pUVar13 = (UAnimInstance *)(**(code **)(*plVar15 + 0x10))(plVar15), pUVar13 != local_1e8))
        )))) {
      USkeletalMeshComponent::HandleExistingParallelEvaluationTask(local_210,true,true);
      USkeletalMeshComponent::TickAnimation(local_210,0.0,false);
      (**(code **)(local_210->_padding_ + 0xb88))();
      USkinnedMeshComponent::RefreshFollowerComponents((USkinnedMeshComponent *)local_210);
      USceneComponent::UpdateComponentToWorld((USceneComponent *)local_210,None,None);
      (**(code **)(local_210->_padding_ + 0xbc8))();
      UActorComponent::MarkRenderTransformDirty((UActorComponent *)local_210);
      UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)local_210);
    }
  }
  return;
}

// GetCurrentTransform @ 146834470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TOptional<UE::Math::TTransform<double>_> * __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::GetCurrentTransform
          (FEvaluateSkeletalAnimations *this,
          TOptional<UE::Math::TTransform<double>_> *__return_storage_ptr__,ESwapRootBone param_1,
          USkeletalMeshComponent *param_2)

{
  double dVar1;
  bool bVar2;
  TOptional<UE::Math::TTransform<double>_> *pTVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  __return_storage_ptr__->bIsSet = false;
  if ((param_1 == SwapRootBone_Component) ||
     (((param_1 == SwapRootBone_Actor && (param_2->_padding_ != 0)) &&
      (param_2 = *(USkeletalMeshComponent **)(param_2->_padding_ + 0x1b8),
      param_2 != (USkeletalMeshComponent *)0x0)))) {
    bVar2 = ContainsTransform(this,(UObject *)param_2);
    if (bVar2) {
      pTVar3 = (TOptional<UE::Math::TTransform<double>_> *)
               USceneComponent::GetRelativeTransform((USceneComponent *)param_2,&local_78);
      if (pTVar3 != __return_storage_ptr__) {
        dVar1 = (pTVar3->TypedValue).Rotation.XY.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[0] =
             (pTVar3->TypedValue).Rotation.XY.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Rotation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar3->TypedValue).Rotation.ZW.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[0] =
             (pTVar3->TypedValue).Rotation.ZW.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Rotation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar3->TypedValue).Translation.XY.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[0] =
             (pTVar3->TypedValue).Translation.XY.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Translation.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar3->TypedValue).Translation.ZW.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[0] =
             (pTVar3->TypedValue).Translation.ZW.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Translation.ZW.m128d_f64[1] = dVar1;
        dVar1 = (pTVar3->TypedValue).Scale3D.XY.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[0] =
             (pTVar3->TypedValue).Scale3D.XY.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Scale3D.XY.m128d_f64[1] = dVar1;
        dVar1 = (pTVar3->TypedValue).Scale3D.ZW.m128d_f64[1];
        (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[0] =
             (pTVar3->TypedValue).Scale3D.ZW.m128d_f64[0];
        (__return_storage_ptr__->TypedValue).Scale3D.ZW.m128d_f64[1] = dVar1;
        __return_storage_ptr__->bIsSet = true;
      }
    }
  }
  return __return_storage_ptr__;
}

// PreviewSetAnimPosition @ 146857730

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::PreviewSetAnimPosition
          (FEvaluateSkeletalAnimations *this,FSetAnimPositionParams *param_1)

{
  UMovieSceneSkeletalAnimationSection *pUVar1;
  USkeletalMeshComponent *pUVar2;
  FSkeletalAnimationSystemData *pFVar3;
  UMovieSceneSkeletalAnimationSection *pUVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  FObjectKey FVar7;
  double adVar8 [2];
  double adVar9 [2];
  double adVar10 [2];
  double adVar11 [2];
  double adVar12 [2];
  double adVar13 [2];
  bool bVar14;
  UAnimSequenceBase *pUVar15;
  USkeletalMesh *pUVar16;
  longlong lVar17;
  UAnimSequencerInstance *this_00;
  UAnimInstance *this_01;
  UClass *pUVar18;
  longlong *plVar19;
  int *piVar20;
  FMontagePlayerPerSectionData *pFVar21;
  UObject *pUVar22;
  FPreAnimatedSkeletalAnimationMontageStorage *pFVar23;
  FAnimMontageInstance *pFVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  float fVar34;
  FCachePreAnimatedValueParams local_res10 [8];
  FCachePreAnimatedValueParams local_res18 [8];
  int local_res20 [2];
  FWeakObjectPtr local_568;
  FWeakObjectPtr local_560;
  FObjectKey local_558;
  FWeakObjectPtr local_550;
  int local_548;
  int local_544;
  FWeakObjectPtr local_540;
  FWeakObjectPtr local_538;
  FObjectKey local_530;
  FWeakObjectPtr local_528;
  FWeakObjectPtr local_520;
  USkeletalMeshComponent *local_518;
  FWeakObjectPtr *local_510;
  UMovieSceneSkeletalAnimationSection *local_508;
  UAnimMontage *local_500;
  USkeletalMeshComponent *local_4f8;
  FWeakObjectPtr *local_4f0;
  UMovieSceneSkeletalAnimationSection *local_4e8;
  <lambda_1> local_4e0;
  FAnimSequencerData local_4c8;
  TOptional<FRootMotionOverride> local_418;
  FRootMotionParams local_338;
  uint local_248;
  undefined4 uStack_244;
  longlong lStack_240;
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  TOptional<UE::Math::TTransform<double>_> local_178 [2];
  
  pUVar1 = param_1->Section;
  pUVar15 = UMovieSceneSkeletalAnimationSection::GetPlaybackAnimation(pUVar1);
  pUVar2 = param_1->SkeletalMeshComponent;
  pUVar16 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
  if (pUVar16 != (USkeletalMesh *)0x0) {
    pUVar16 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
    lVar17 = (**(code **)(pUVar16->_padding_ + 0x408))(pUVar16);
    if (((lVar17 != 0) && (pUVar15 != (UAnimSequenceBase *)0x0)) && (pUVar15->_padding_ != 0)) {
      this_00 = GetAnimSequencerInstance(param_1->SkeletalMeshComponent);
      if (this_00 == (UAnimSequencerInstance *)0x0) {
        this_01 = USkeletalMeshComponent::GetAnimInstance(param_1->SkeletalMeshComponent);
        if (this_01 != (UAnimInstance *)0x0) {
          pUVar18 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
          plVar19 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar18);
          if (plVar19 != (longlong *)0x0) {
            this_01 = (UAnimInstance *)(**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        if (this_01 != (UAnimInstance *)0x0) {
          pFVar3 = this->SystemData;
          iVar27 = 0;
          pUVar2 = param_1->SkeletalMeshComponent;
          local_568.ObjectIndex = 0;
          local_568.ObjectSerialNumber = 0;
          uVar25 = 0;
          if (pUVar2 != (USkeletalMeshComponent *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar2);
            }
            local_540.ObjectIndex = 0;
            local_540.ObjectSerialNumber = 0;
            local_518 = pUVar2;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar2);
            }
            FWeakObjectPtr::operator=(&local_540,(FObjectPtr)&local_518);
            local_568 = local_540;
            FVar6 = local_568;
            iVar27 = local_540.ObjectIndex;
            local_568.ObjectSerialNumber = local_540.ObjectSerialNumber;
            uVar25 = local_568.ObjectSerialNumber;
            local_568 = FVar6;
          }
          uVar28 = iVar27 - uVar25 ^ uVar25 >> 0xd;
          uVar26 = (-0x61c88647 - uVar25) - uVar28 ^ uVar28 << 8;
          uVar33 = (uVar25 - uVar26) - uVar28 ^ uVar26 >> 0xd;
          uVar28 = (uVar28 - uVar33) - uVar26 ^ uVar33 >> 0xc;
          uVar26 = (uVar26 - uVar28) - uVar33 ^ uVar28 << 0x10;
          uVar33 = (uVar33 - uVar26) - uVar28 ^ uVar26 >> 5;
          uVar28 = (uVar28 - uVar33) - uVar26 ^ uVar33 >> 3;
          uVar26 = (uVar26 - uVar28) - uVar33 ^ uVar28 << 10;
          uVar26 = (uVar33 - uVar26) - uVar28 ^ uVar26 >> 0xf;
          if (*(int *)&(pFVar3->MontageData).field_0x8 != *(int *)&(pFVar3->MontageData).field_0x34)
          {
            puVar29 = *(undefined1 **)&(pFVar3->MontageData).field_0x40;
            if (puVar29 == (undefined1 *)0x0) {
              puVar29 = &(pFVar3->MontageData).field_0x38;
            }
            iVar31 = *(int *)(puVar29 +
                             (ulonglong)(*(int *)&(pFVar3->MontageData).field_0x48 - 1U & uVar26) *
                             4);
            if (iVar31 != -1) {
              do {
                piVar20 = (int *)((longlong)iVar31 * 0x60 + *(longlong *)&pFVar3->MontageData);
                if ((*piVar20 == iVar27) && (piVar20[1] == uVar25)) {
                  if ((iVar31 != -1) && (piVar20 != (int *)0x0)) goto LAB_146857e46;
                  break;
                }
                iVar31 = piVar20[0x16];
              } while (iVar31 != -1);
            }
          }
          local_510 = &local_568;
          TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
                    ((TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                      *)&pFVar3->MontageData,(uint)&local_548,
                     (TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar26,(bool *)&local_510);
          piVar20 = (int *)((longlong)local_548 * 0x60 + *(longlong *)&pFVar3->MontageData);
LAB_146857e46:
          pUVar4 = param_1->Section;
          local_530.ObjectIndex = 0;
          local_530.ObjectSerialNumber = 0;
          if (pUVar4 != (UMovieSceneSkeletalAnimationSection *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar4);
            }
            local_538.ObjectIndex = 0;
            local_538.ObjectSerialNumber = 0;
            local_508 = pUVar4;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar4);
            }
            FWeakObjectPtr::operator=(&local_538,(FObjectPtr)&local_508);
            local_530.ObjectIndex = local_538.ObjectIndex;
            local_530.ObjectSerialNumber = local_538.ObjectSerialNumber;
          }
          pFVar21 = TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                    ::Find((TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                            *)(piVar20 + 2),&local_530);
          if (pFVar21 == (FMontagePlayerPerSectionData *)0x0) {
            local_res20[0] = -1;
          }
          else {
            local_res20[0] = pFVar21->MontageInstanceId;
          }
          fVar34 = pUVar15->RateScale;
          if ((float)((uint)pUVar15->RateScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
              __real_322bcc77) {
            fVar34 = __real_3f800000;
          }
          local_500 = FAnimMontageInstance::PreviewSequencerMontagePosition
                                ((pUVar1->Params).SlotName,param_1->SkeletalMeshComponent,this_01,
                                 local_res20,pUVar15,
                                 (__real_3f800000 / fVar34) * param_1->FromPosition,
                                 (__real_3f800000 / fVar34) * param_1->ToPosition,param_1->Weight,
                                 false,param_1->bFireNotifies,param_1->bPlaying);
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_500 != (UAnimMontage *)0x0)
             ) {
            GC::MarkAsReachable((UObject *)local_500);
          }
          uVar32 = 0;
          iVar27 = 0;
          local_550.ObjectIndex = 0;
          local_550.ObjectSerialNumber = 0;
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_500 != (UAnimMontage *)0x0)
             ) {
            GC::MarkAsReachable((UObject *)local_500);
          }
          FWeakObjectPtr::operator=(&local_550,(FObjectPtr)&local_500);
          pUVar22 = FWeakObjectPtr::Get(&local_550);
          if (pUVar22 != (UObject *)0x0) {
            pUVar2 = param_1->SkeletalMeshComponent;
            pFVar3 = this->SystemData;
            local_560.ObjectIndex = 0;
            local_560.ObjectSerialNumber = 0;
            if (pUVar2 != (USkeletalMeshComponent *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              local_528.ObjectIndex = 0;
              local_528.ObjectSerialNumber = 0;
              local_4f8 = pUVar2;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              FWeakObjectPtr::operator=(&local_528,(FObjectPtr)&local_4f8);
              local_560 = local_528;
              iVar27 = local_528.ObjectIndex;
              uVar32 = (ulonglong)local_528 >> 0x20;
            }
            iVar31 = (int)uVar32;
            uVar26 = iVar27 - iVar31 ^ (uint)(uVar32 >> 0xd);
            uVar25 = (-0x61c88647 - iVar31) - uVar26 ^ uVar26 << 8;
            uVar28 = (iVar31 - uVar25) - uVar26 ^ uVar25 >> 0xd;
            uVar26 = (uVar26 - uVar28) - uVar25 ^ uVar28 >> 0xc;
            uVar25 = (uVar25 - uVar26) - uVar28 ^ uVar26 << 0x10;
            uVar28 = (uVar28 - uVar25) - uVar26 ^ uVar25 >> 5;
            uVar26 = (uVar26 - uVar28) - uVar25 ^ uVar28 >> 3;
            uVar25 = (uVar25 - uVar26) - uVar28 ^ uVar26 << 10;
            uVar25 = (uVar28 - uVar25) - uVar26 ^ uVar25 >> 0xf;
            if (*(int *)&(pFVar3->MontageData).field_0x8 !=
                *(int *)&(pFVar3->MontageData).field_0x34) {
              puVar29 = *(undefined1 **)&(pFVar3->MontageData).field_0x40;
              if (puVar29 == (undefined1 *)0x0) {
                puVar29 = &(pFVar3->MontageData).field_0x38;
              }
              iVar30 = *(int *)(puVar29 +
                               (ulonglong)(*(int *)&(pFVar3->MontageData).field_0x48 - 1U & uVar25)
                               * 4);
              if (iVar30 != -1) {
                do {
                  piVar20 = (int *)((longlong)iVar30 * 0x60 + *(longlong *)&pFVar3->MontageData);
                  if ((*piVar20 == iVar27) && (piVar20[1] == iVar31)) {
                    if ((iVar30 != -1) && (piVar20 != (int *)0x0)) goto LAB_146858136;
                    break;
                  }
                  iVar30 = piVar20[0x16];
                } while (iVar30 != -1);
              }
            }
            local_4f0 = &local_560;
            TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
                      ((TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                        *)&pFVar3->MontageData,(uint)&local_544,
                       (TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar25,(bool *)&local_4f0);
            piVar20 = (int *)((longlong)local_544 * 0x60 + *(longlong *)&pFVar3->MontageData);
LAB_146858136:
            pUVar1 = param_1->Section;
            iVar27 = 0;
            local_558.ObjectIndex = 0;
            local_558.ObjectSerialNumber = 0;
            uVar25 = 0;
            if (pUVar1 != (UMovieSceneSkeletalAnimationSection *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar1);
              }
              local_520.ObjectIndex = 0;
              local_520.ObjectSerialNumber = 0;
              local_4e8 = pUVar1;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar1);
              }
              FWeakObjectPtr::operator=(&local_520,(FObjectPtr)&local_4e8);
              local_558.ObjectIndex = local_520.ObjectIndex;
              local_558.ObjectSerialNumber = local_520.ObjectSerialNumber;
              FVar7 = local_558;
              iVar27 = local_520.ObjectIndex;
              local_558.ObjectSerialNumber = local_520.ObjectSerialNumber;
              uVar25 = local_558.ObjectSerialNumber;
              local_558 = FVar7;
            }
            uVar26 = iVar27 - uVar25 ^ uVar25 >> 0xd;
            uVar33 = (-0x61c88647 - uVar25) - uVar26 ^ uVar26 << 8;
            uVar28 = (uVar25 - uVar33) - uVar26 ^ uVar33 >> 0xd;
            uVar25 = (uVar26 - uVar28) - uVar33 ^ uVar28 >> 0xc;
            uVar33 = (uVar33 - uVar25) - uVar28 ^ uVar25 << 0x10;
            uVar26 = (uVar28 - uVar33) - uVar25 ^ uVar33 >> 5;
            uVar25 = (uVar25 - uVar26) - uVar33 ^ uVar26 >> 3;
            uVar28 = (uVar33 - uVar25) - uVar26 ^ uVar25 << 10;
            pFVar21 = TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                      ::FindOrAddImpl<FObjectKey>
                                ((TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                                  *)(piVar20 + 2),(uVar26 - uVar28) - uVar25 ^ uVar28 >> 0xf,
                                 &local_558);
            (pFVar21->Montage).WeakPtr = local_550;
            pFVar21->MontageInstanceId = local_res20[0];
            pFVar23 = TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>::
                      operator->(&this->PreAnimatedMontageStorage);
            (**(code **)(*(longlong *)&pFVar23->field_0xd8 + 8))
                      (&pFVar23->field_0xd8,(param_1->EntityID).Value,param_1->bWantsRestoreState,
                       param_1->RootInstanceHandle,pUVar22);
            pFVar23 = TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>::
                      operator->(&this->PreAnimatedMontageStorage);
            local_4e0.InstanceId = local_res20[0];
            local_res18[0].bForcePersist = false;
            local_4e0.AnimInst = this_01;
            TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
            ::
            CachePreAnimatedValue<_UE::MovieScene::FEvaluateSkeletalAnimations::PreviewSetAnimPosition_::__l18::<lambda_1>_>
                      ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                        *)pFVar23,local_res18,pUVar22,&local_4e0,CacheIfTracked);
            pFVar24 = UAnimInstance::GetMontageInstanceForID(this_01,local_res20[0]);
            pFVar24->bPlaying = param_1->bPlaying;
          }
          if (param_1->bResetDynamics != false) {
            UAnimInstance::ResetDynamics(this_01,ResetPhysics);
          }
        }
      }
      else {
        if (((this->PreAnimatedAnimInstanceStorage).Object ==
             (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar29 = &((this->PreAnimatedAnimInstanceStorage).Object)->field_0xd8;
        (**(code **)(*(longlong *)puVar29 + 8))
                  (puVar29,(param_1->EntityID).Value,param_1->bWantsRestoreState,
                   param_1->RootInstanceHandle,this_00);
        if (((this->PreAnimatedAnimInstanceStorage).Object ==
             (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10[0].bForcePersist = false;
        TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
        ::CachePreAnimatedValue
                  ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                    *)(this->PreAnimatedAnimInstanceStorage).Object,local_res10,(UObject *)this_00,
                   CacheIfTracked);
        local_418.bIsSet = false;
        local_338.Transform.bIsSet = false;
        local_338.PreviousTransform.bIsSet = false;
        UMovieSceneSkeletalAnimationSection::GetRootMotion
                  (param_1->Section,param_1->CurrentTime,&local_338);
        uVar25 = local_248;
        if (local_338.Transform.bIsSet != false) {
          uStack_244 = 0xffffffff;
          local_1f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_1f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_1e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_1e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          adVar12 = local_198;
          local_188[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_188[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          adVar13 = local_188;
          local_248 = local_248 & 0xffffff00;
          local_238[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_238[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_228[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_228[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_218[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_218[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_208[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_208[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          adVar8 = local_1d8;
          local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          adVar9 = local_1c8;
          local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          adVar10 = local_1b8;
          local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          adVar11 = local_1a8;
          local_418.TypedValue._padding_ = lStack_240;
          local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[0] = local_1d8[0];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[1] = local_1d8[1];
          local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[0] = local_1c8[0];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[1] = local_1c8[1];
          local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[0] = local_1b8[0];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[1] = local_1b8[1];
          local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[0] = local_1a8[0];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[1] = local_1a8[1];
          local_188[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_188[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[0] = local_198[0];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[1] = local_198[1];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[0] = local_188[0];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[1] = local_188[1];
          local_418.TypedValue.RootMotion.Rotation.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Rotation.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Rotation.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Rotation.ZW.m128d_f64[1];
          local_418.TypedValue.RootMotion.Rotation.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Rotation.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Rotation.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.RootMotion.Translation.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Translation.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Translation.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.RootMotion.Translation.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Translation.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Translation.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Translation.XY.m128d_f64[1];
          local_418.TypedValue.RootMotion.Scale3D.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Scale3D.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Scale3D.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Scale3D.ZW.m128d_f64[1];
          local_418.bIsSet = true;
          local_418.TypedValue.RootMotion.Scale3D.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Scale3D.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Scale3D.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue._1_7_ = (int7)(CONCAT44(local_338.ChildBoneIndex,uVar25) >> 8);
          local_418.TypedValue.bBlendFirstChildOfRoot = local_338.bBlendFirstChildOfRoot;
          local_1d8 = adVar8;
          local_1c8 = adVar9;
          local_1b8 = adVar10;
          local_1a8 = adVar11;
          local_198 = adVar12;
          local_188 = adVar13;
          if ((local_338.PreviousTransform.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((local_418.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Translation.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Translation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Translation.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Scale3D.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Scale3D.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Scale3D.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Rotation.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Rotation.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Rotation.ZW.m128d_f64[1];
        }
        pUVar1 = param_1->Section;
        uVar25 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                 -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        GetCurrentTransform(this,local_178,(pUVar1->Params).SwapRootBone,
                            param_1->SkeletalMeshComponent);
        local_4c8.MirrorDataTable =
             *(UMirrorDataTable **)&(param_1->Section->Params).MirrorDataTable.field0_0x0;
        local_4c8.SwapRootBone = (param_1->Section->Params).SwapRootBone;
        local_4c8.RootMotion = &local_418;
        local_4c8.FromPosition = param_1->FromPosition;
        local_4c8.ToPosition = param_1->ToPosition;
        local_4c8.Weight = param_1->Weight;
        local_4c8.bFireNotifies = param_1->bFireNotifies;
        local_4c8.AnimSequence = pUVar15;
        local_4c8.SequenceId = uVar25 >> 0x10 ^ uVar25;
        UAnimSequencerInstance::UpdateAnimTrackWithRootMotion(this_00,&local_4c8);
      }
    }
  }
  return;
}

// Run @ 146868910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEvaluateSkeletalAnimations::Run(FEvaluateSkeletalAnimations *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FSkeletalAnimationSystemData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  USkeletalMeshComponent *pUVar9;
  longlong lVar10;
  FWeakObjectPtr *this_00;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = this->SystemData;
  iVar13 = 0;
  iVar3 = *(int *)&(pFVar4->SkeletalAnimations).field_0x28;
  puVar1 = &(pFVar4->SkeletalAnimations).field_0x10;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(pFVar4->SkeletalAnimations).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1468689ad;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar8 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1468689ad:
  uVar12 = *(uint *)&(pFVar4->SkeletalAnimations).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pFVar4->SkeletalAnimations).field_0x8 -
                       *(int *)&(pFVar4->SkeletalAnimations).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(pFVar4->SkeletalAnimations).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(pFVar4->SkeletalAnimations).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_146868ab0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_146868ab0:
  while( true ) {
    if (*(int *)&(pFVar4->SkeletalAnimations).field_0x8 -
        *(int *)&(pFVar4->SkeletalAnimations).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>,UE::MovieScene::FBoundObjectActiveSkeletalAnimations>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (FWeakObjectPtr *)
              (*(longlong *)&pFVar4->SkeletalAnimations +
              (longlong)TStack_60.CurrentBitIndex * 0x420);
    bVar6 = FWeakObjectPtr::IsValid(this_00);
    if (bVar6) {
      pUVar9 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_00);
      EvaluateSkeletalAnimations(this,pUVar9,(FBoundObjectActiveSkeletalAnimations *)(this_00 + 2));
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// SetAnimPosition @ 14686b1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEvaluateSkeletalAnimations::SetAnimPosition
          (FEvaluateSkeletalAnimations *this,FSetAnimPositionParams *param_1)

{
  UMovieSceneSkeletalAnimationSection *pUVar1;
  USkeletalMeshComponent *pUVar2;
  FSkeletalAnimationSystemData *pFVar3;
  UMovieSceneSkeletalAnimationSection *pUVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  FObjectKey FVar7;
  double adVar8 [2];
  double adVar9 [2];
  double adVar10 [2];
  double adVar11 [2];
  double adVar12 [2];
  double adVar13 [2];
  bool bVar14;
  UAnimSequenceBase *pUVar15;
  USkeletalMesh *pUVar16;
  longlong lVar17;
  UAnimSequencerInstance *this_00;
  UAnimInstance *this_01;
  UClass *pUVar18;
  longlong *plVar19;
  int *piVar20;
  FMontagePlayerPerSectionData *pFVar21;
  UObject *pUVar22;
  FPreAnimatedSkeletalAnimationMontageStorage *pFVar23;
  FAnimMontageInstance *pFVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  ulonglong uVar32;
  uint uVar33;
  float fVar34;
  FCachePreAnimatedValueParams local_res10 [8];
  FCachePreAnimatedValueParams local_res18 [8];
  int local_res20 [2];
  FWeakObjectPtr local_568;
  FWeakObjectPtr local_560;
  FObjectKey local_558;
  FWeakObjectPtr local_550;
  int local_548;
  int local_544;
  FWeakObjectPtr local_540;
  FWeakObjectPtr local_538;
  FObjectKey local_530;
  FWeakObjectPtr local_528;
  FWeakObjectPtr local_520;
  USkeletalMeshComponent *local_518;
  FWeakObjectPtr *local_510;
  UMovieSceneSkeletalAnimationSection *local_508;
  UAnimMontage *local_500;
  USkeletalMeshComponent *local_4f8;
  FWeakObjectPtr *local_4f0;
  UMovieSceneSkeletalAnimationSection *local_4e8;
  <lambda_1> local_4e0;
  FAnimSequencerData local_4c8;
  TOptional<FRootMotionOverride> local_418;
  FRootMotionParams local_338;
  uint local_248;
  undefined4 uStack_244;
  longlong lStack_240;
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  double local_1e8 [2];
  double local_1d8 [2];
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  TOptional<UE::Math::TTransform<double>_> local_178 [2];
  
  pUVar1 = param_1->Section;
  pUVar15 = UMovieSceneSkeletalAnimationSection::GetPlaybackAnimation(pUVar1);
  pUVar2 = param_1->SkeletalMeshComponent;
  pUVar16 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
  if (pUVar16 != (USkeletalMesh *)0x0) {
    pUVar16 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar2);
    lVar17 = (**(code **)(pUVar16->_padding_ + 0x408))(pUVar16);
    if (((lVar17 != 0) && (pUVar15 != (UAnimSequenceBase *)0x0)) && (pUVar15->_padding_ != 0)) {
      this_00 = GetAnimSequencerInstance(param_1->SkeletalMeshComponent);
      if (this_00 == (UAnimSequencerInstance *)0x0) {
        this_01 = USkeletalMeshComponent::GetAnimInstance(param_1->SkeletalMeshComponent);
        if (this_01 != (UAnimInstance *)0x0) {
          pUVar18 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
          plVar19 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar18);
          if (plVar19 != (longlong *)0x0) {
            this_01 = (UAnimInstance *)(**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
        if (this_01 != (UAnimInstance *)0x0) {
          pUVar2 = param_1->SkeletalMeshComponent;
          iVar27 = 0;
          pFVar3 = this->SystemData;
          local_568.ObjectIndex = 0;
          local_568.ObjectSerialNumber = 0;
          uVar25 = 0;
          if (pUVar2 != (USkeletalMeshComponent *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar2);
            }
            local_540.ObjectIndex = 0;
            local_540.ObjectSerialNumber = 0;
            local_518 = pUVar2;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar2);
            }
            FWeakObjectPtr::operator=(&local_540,(FObjectPtr)&local_518);
            local_568 = local_540;
            FVar6 = local_568;
            iVar27 = local_540.ObjectIndex;
            local_568.ObjectSerialNumber = local_540.ObjectSerialNumber;
            uVar25 = local_568.ObjectSerialNumber;
            local_568 = FVar6;
          }
          uVar28 = iVar27 - uVar25 ^ uVar25 >> 0xd;
          uVar26 = (-0x61c88647 - uVar25) - uVar28 ^ uVar28 << 8;
          uVar33 = (uVar25 - uVar26) - uVar28 ^ uVar26 >> 0xd;
          uVar28 = (uVar28 - uVar33) - uVar26 ^ uVar33 >> 0xc;
          uVar26 = (uVar26 - uVar28) - uVar33 ^ uVar28 << 0x10;
          uVar33 = (uVar33 - uVar26) - uVar28 ^ uVar26 >> 5;
          uVar28 = (uVar28 - uVar33) - uVar26 ^ uVar33 >> 3;
          uVar26 = (uVar26 - uVar28) - uVar33 ^ uVar28 << 10;
          uVar26 = (uVar33 - uVar26) - uVar28 ^ uVar26 >> 0xf;
          if (*(int *)&(pFVar3->MontageData).field_0x8 != *(int *)&(pFVar3->MontageData).field_0x34)
          {
            puVar29 = *(undefined1 **)&(pFVar3->MontageData).field_0x40;
            if (puVar29 == (undefined1 *)0x0) {
              puVar29 = &(pFVar3->MontageData).field_0x38;
            }
            iVar31 = *(int *)(puVar29 +
                             (ulonglong)(*(int *)&(pFVar3->MontageData).field_0x48 - 1U & uVar26) *
                             4);
            if (iVar31 != -1) {
              do {
                piVar20 = (int *)((longlong)iVar31 * 0x60 + *(longlong *)&pFVar3->MontageData);
                if ((*piVar20 == iVar27) && (piVar20[1] == uVar25)) {
                  if ((iVar31 != -1) && (piVar20 != (int *)0x0)) goto LAB_14686b8b8;
                  break;
                }
                iVar31 = piVar20[0x16];
              } while (iVar31 != -1);
            }
          }
          local_510 = &local_568;
          TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
                    ((TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                      *)&pFVar3->MontageData,(uint)&local_548,
                     (TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar26,(bool *)&local_510);
          piVar20 = (int *)((longlong)local_548 * 0x60 + *(longlong *)&pFVar3->MontageData);
LAB_14686b8b8:
          pUVar4 = param_1->Section;
          local_530.ObjectIndex = 0;
          local_530.ObjectSerialNumber = 0;
          if (pUVar4 != (UMovieSceneSkeletalAnimationSection *)0x0) {
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar4);
            }
            local_538.ObjectIndex = 0;
            local_538.ObjectSerialNumber = 0;
            local_508 = pUVar4;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable((UObject *)pUVar4);
            }
            FWeakObjectPtr::operator=(&local_538,(FObjectPtr)&local_508);
            local_530.ObjectIndex = local_538.ObjectIndex;
            local_530.ObjectSerialNumber = local_538.ObjectSerialNumber;
          }
          pFVar21 = TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                    ::Find((TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                            *)(piVar20 + 2),&local_530);
          if (pFVar21 == (FMontagePlayerPerSectionData *)0x0) {
            local_res20[0] = -1;
          }
          else {
            local_res20[0] = pFVar21->MontageInstanceId;
          }
          fVar34 = pUVar15->RateScale;
          if ((float)((uint)pUVar15->RateScale & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
              __real_322bcc77) {
            fVar34 = __real_3f800000;
          }
          local_500 = FAnimMontageInstance::SetSequencerMontagePosition
                                ((pUVar1->Params).SlotName,this_01,local_res20,pUVar15,
                                 (__real_3f800000 / fVar34) * param_1->FromPosition,
                                 (__real_3f800000 / fVar34) * param_1->ToPosition,param_1->Weight,
                                 false,param_1->bPlaying);
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_500 != (UAnimMontage *)0x0)
             ) {
            GC::MarkAsReachable((UObject *)local_500);
          }
          uVar32 = 0;
          iVar27 = 0;
          local_550.ObjectIndex = 0;
          local_550.ObjectSerialNumber = 0;
          if ((GC::GIsIncrementalReachabilityPending != false) && (local_500 != (UAnimMontage *)0x0)
             ) {
            GC::MarkAsReachable((UObject *)local_500);
          }
          FWeakObjectPtr::operator=(&local_550,(FObjectPtr)&local_500);
          pUVar22 = FWeakObjectPtr::Get(&local_550);
          if (pUVar22 != (UObject *)0x0) {
            pUVar2 = param_1->SkeletalMeshComponent;
            pFVar3 = this->SystemData;
            local_560.ObjectIndex = 0;
            local_560.ObjectSerialNumber = 0;
            if (pUVar2 != (USkeletalMeshComponent *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              local_528.ObjectIndex = 0;
              local_528.ObjectSerialNumber = 0;
              local_4f8 = pUVar2;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar2);
              }
              FWeakObjectPtr::operator=(&local_528,(FObjectPtr)&local_4f8);
              local_560 = local_528;
              iVar27 = local_528.ObjectIndex;
              uVar32 = (ulonglong)local_528 >> 0x20;
            }
            iVar31 = (int)uVar32;
            uVar26 = iVar27 - iVar31 ^ (uint)(uVar32 >> 0xd);
            uVar25 = (-0x61c88647 - iVar31) - uVar26 ^ uVar26 << 8;
            uVar28 = (iVar31 - uVar25) - uVar26 ^ uVar25 >> 0xd;
            uVar26 = (uVar26 - uVar28) - uVar25 ^ uVar28 >> 0xc;
            uVar25 = (uVar25 - uVar26) - uVar28 ^ uVar26 << 0x10;
            uVar28 = (uVar28 - uVar25) - uVar26 ^ uVar25 >> 5;
            uVar26 = (uVar26 - uVar28) - uVar25 ^ uVar28 >> 3;
            uVar25 = (uVar25 - uVar26) - uVar28 ^ uVar26 << 10;
            uVar25 = (uVar28 - uVar25) - uVar26 ^ uVar25 >> 0xf;
            if (*(int *)&(pFVar3->MontageData).field_0x8 !=
                *(int *)&(pFVar3->MontageData).field_0x34) {
              puVar29 = *(undefined1 **)&(pFVar3->MontageData).field_0x40;
              if (puVar29 == (undefined1 *)0x0) {
                puVar29 = &(pFVar3->MontageData).field_0x38;
              }
              iVar30 = *(int *)(puVar29 +
                               (ulonglong)(*(int *)&(pFVar3->MontageData).field_0x48 - 1U & uVar25)
                               * 4);
              if (iVar30 != -1) {
                do {
                  piVar20 = (int *)((longlong)iVar30 * 0x60 + *(longlong *)&pFVar3->MontageData);
                  if ((*piVar20 == iVar27) && (piVar20[1] == iVar31)) {
                    if ((iVar30 != -1) && (piVar20 != (int *)0x0)) goto LAB_14686bb98;
                    break;
                  }
                  iVar30 = piVar20[0x16];
                } while (iVar30 != -1);
              }
            }
            local_4f0 = &local_560;
            TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
                      ((TSet<TTuple<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMap<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>,0>,FDefaultSetAllocator>
                        *)&pFVar3->MontageData,(uint)&local_544,
                       (TKeyInitializer<FObjectKey_&&> *)(ulonglong)uVar25,(bool *)&local_4f0);
            piVar20 = (int *)((longlong)local_544 * 0x60 + *(longlong *)&pFVar3->MontageData);
LAB_14686bb98:
            pUVar1 = param_1->Section;
            iVar27 = 0;
            local_558.ObjectIndex = 0;
            local_558.ObjectSerialNumber = 0;
            uVar25 = 0;
            if (pUVar1 != (UMovieSceneSkeletalAnimationSection *)0x0) {
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar1);
              }
              local_520.ObjectIndex = 0;
              local_520.ObjectSerialNumber = 0;
              local_4e8 = pUVar1;
              if (GC::GIsIncrementalReachabilityPending != false) {
                GC::MarkAsReachable((UObject *)pUVar1);
              }
              FWeakObjectPtr::operator=(&local_520,(FObjectPtr)&local_4e8);
              local_558.ObjectIndex = local_520.ObjectIndex;
              local_558.ObjectSerialNumber = local_520.ObjectSerialNumber;
              FVar7 = local_558;
              iVar27 = local_520.ObjectIndex;
              local_558.ObjectSerialNumber = local_520.ObjectSerialNumber;
              uVar25 = local_558.ObjectSerialNumber;
              local_558 = FVar7;
            }
            uVar26 = iVar27 - uVar25 ^ uVar25 >> 0xd;
            uVar33 = (-0x61c88647 - uVar25) - uVar26 ^ uVar26 << 8;
            uVar28 = (uVar25 - uVar33) - uVar26 ^ uVar33 >> 0xd;
            uVar25 = (uVar26 - uVar28) - uVar33 ^ uVar28 >> 0xc;
            uVar33 = (uVar33 - uVar25) - uVar28 ^ uVar25 << 0x10;
            uVar26 = (uVar28 - uVar33) - uVar25 ^ uVar33 >> 5;
            uVar25 = (uVar25 - uVar26) - uVar33 ^ uVar26 >> 3;
            uVar28 = (uVar33 - uVar25) - uVar26 ^ uVar25 << 10;
            pFVar21 = TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                      ::FindOrAddImpl<FObjectKey>
                                ((TMapBase<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::MovieScene::FMontagePlayerPerSectionData,0>_>
                                  *)(piVar20 + 2),(uVar26 - uVar28) - uVar25 ^ uVar28 >> 0xf,
                                 &local_558);
            (pFVar21->Montage).WeakPtr = local_550;
            pFVar21->MontageInstanceId = local_res20[0];
            pFVar23 = TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>::
                      operator->(&this->PreAnimatedMontageStorage);
            (**(code **)(*(longlong *)&pFVar23->field_0xd8 + 8))
                      (&pFVar23->field_0xd8,(param_1->EntityID).Value,param_1->bWantsRestoreState,
                       param_1->RootInstanceHandle,pUVar22);
            pFVar23 = TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>::
                      operator->(&this->PreAnimatedMontageStorage);
            local_4e0.InstanceId = local_res20[0];
            local_res18[0].bForcePersist = false;
            local_4e0.AnimInst = this_01;
            TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
            ::
            CachePreAnimatedValue<_UE::MovieScene::FEvaluateSkeletalAnimations::SetAnimPosition_::__l18::<lambda_1>_>
                      ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageTraits>
                        *)pFVar23,local_res18,pUVar22,&local_4e0,CacheIfTracked);
            pFVar24 = UAnimInstance::GetMontageInstanceForID(this_01,local_res20[0]);
            pFVar24->bPlaying = param_1->bPlaying;
          }
        }
      }
      else {
        if (((this->PreAnimatedAnimInstanceStorage).Object ==
             (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar29 = &((this->PreAnimatedAnimInstanceStorage).Object)->field_0xd8;
        (**(code **)(*(longlong *)puVar29 + 8))
                  (puVar29,(param_1->EntityID).Value,param_1->bWantsRestoreState,
                   param_1->RootInstanceHandle,this_00);
        if (((this->PreAnimatedAnimInstanceStorage).Object ==
             (FPreAnimatedSkeletalAnimationAnimInstanceStorage *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_res10[0].bForcePersist = false;
        TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
        ::CachePreAnimatedValue
                  ((TPreAnimatedStateStorage_ObjectTraits<UE::MovieScene::FPreAnimatedSkeletalAnimationAnimInstanceTraits>
                    *)(this->PreAnimatedAnimInstanceStorage).Object,local_res10,(UObject *)this_00,
                   CacheIfTracked);
        local_418.bIsSet = false;
        local_338.Transform.bIsSet = false;
        local_338.PreviousTransform.bIsSet = false;
        UMovieSceneSkeletalAnimationSection::GetRootMotion
                  (param_1->Section,param_1->CurrentTime,&local_338);
        if (local_338.Transform.bIsSet != false) {
          uStack_244 = 0xffffffff;
          local_1f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_1f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_1e8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_1e8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          adVar12 = local_198;
          local_188[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_188[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          adVar13 = local_188;
          local_248 = local_248 & 0xffffff00;
          local_238[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_238[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_228[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_228[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_218[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_218[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_208[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_208[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          adVar8 = local_1d8;
          local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          adVar9 = local_1c8;
          local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          adVar10 = local_1b8;
          local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          adVar11 = local_1a8;
          local_418.TypedValue._padding_ = lStack_240;
          local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
          local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
          local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
          local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[0] = local_1d8[0];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[1] = local_1d8[1];
          local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
          local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[0] = local_1c8[0];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[1] = local_1c8[1];
          local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
          local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[0] = local_1b8[0];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[1] = local_1b8[1];
          local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
          local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[0] = local_1a8[0];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[1] = local_1a8[1];
          local_188[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_188[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[0] = local_198[0];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[1] = local_198[1];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[0] = local_188[0];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[1] = local_188[1];
          local_418.TypedValue._1_7_ = SUB87(CONCAT44(0xffffffff,local_248) >> 8,0);
          local_418.TypedValue.bBlendFirstChildOfRoot = local_338.bBlendFirstChildOfRoot;
          local_418.TypedValue.RootMotion.Rotation.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Rotation.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Rotation.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Rotation.ZW.m128d_f64[1];
          local_418.TypedValue.RootMotion.Rotation.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Rotation.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Rotation.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.RootMotion.Translation.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Translation.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Translation.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.RootMotion.Translation.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Translation.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Translation.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Translation.XY.m128d_f64[1];
          local_418.TypedValue.RootMotion.Scale3D.ZW.m128d_f64[0] =
               local_338.Transform.TypedValue.Scale3D.ZW.m128d_f64[0];
          local_418.TypedValue.RootMotion.Scale3D.ZW.m128d_f64[1] =
               local_338.Transform.TypedValue.Scale3D.ZW.m128d_f64[1];
          local_418.bIsSet = true;
          local_418.TypedValue.RootMotion.Scale3D.XY.m128d_f64[0] =
               local_338.Transform.TypedValue.Scale3D.XY.m128d_f64[0];
          local_418.TypedValue.RootMotion.Scale3D.XY.m128d_f64[1] =
               local_338.Transform.TypedValue.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue.ChildBoneIndex = local_338.ChildBoneIndex;
          local_1d8 = adVar8;
          local_1c8 = adVar9;
          local_1b8 = adVar10;
          local_1a8 = adVar11;
          local_198 = adVar12;
          local_188 = adVar13;
          if ((local_338.PreviousTransform.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if ((local_418.bIsSet == false) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Translation.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Translation.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Translation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Translation.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Translation.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Translation.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Scale3D.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Scale3D.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Scale3D.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Scale3D.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Scale3D.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Scale3D.ZW.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Rotation.XY.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Rotation.XY.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Rotation.XY.m128d_f64[1];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[0] =
               local_338.PreviousTransform.TypedValue.Rotation.ZW.m128d_f64[0];
          local_418.TypedValue.PreviousTransform.Rotation.ZW.m128d_f64[1] =
               local_338.PreviousTransform.TypedValue.Rotation.ZW.m128d_f64[1];
        }
        pUVar1 = param_1->Section;
        uVar25 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
                 -0x7a143595;
        uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
        GetCurrentTransform(this,local_178,(pUVar1->Params).SwapRootBone,
                            param_1->SkeletalMeshComponent);
        local_4c8.MirrorDataTable =
             *(UMirrorDataTable **)&(param_1->Section->Params).MirrorDataTable.field0_0x0;
        local_4c8.SwapRootBone = (param_1->Section->Params).SwapRootBone;
        local_4c8.RootMotion = &local_418;
        local_4c8.FromPosition = param_1->FromPosition;
        local_4c8.ToPosition = param_1->ToPosition;
        local_4c8.Weight = param_1->Weight;
        local_4c8.bFireNotifies = param_1->bFireNotifies;
        local_4c8.AnimSequence = pUVar15;
        local_4c8.SequenceId = uVar25 >> 0x10 ^ uVar25;
        UAnimSequencerInstance::UpdateAnimTrackWithRootMotion(this_00,&local_4c8);
      }
    }
  }
  return;
}

// operator() @ 1504f4400

bool __thiscall
`UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8775670319571533223>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8775670319571533223>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FEvaluateSkeletalAnimations::EvaluateSkeletalAnimations(USkeletalMeshComponent*___ptr64,UE::MovieScene::FBoundObjectActiveSkeletalAnimations_const&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

