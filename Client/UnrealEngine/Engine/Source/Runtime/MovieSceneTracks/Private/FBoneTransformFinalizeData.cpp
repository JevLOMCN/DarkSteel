// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// FBoneTransformFinalizeData @ 146807930

FBoneTransformFinalizeData * __thiscall
UE::MovieScene::FBoneTransformFinalizeData::FBoneTransformFinalizeData
          (FBoneTransformFinalizeData *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 local_res8;
  
  (this->SkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->SwapRootBone = SwapRootBone_None;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->InitialActorTransform).bIsSet = false;
  (this->InverseMeshToActorRotation).bIsSet = false;
  (this->OnBoneTransformsFinalizedHandle).ID = 0;
  return this;
}

// BoneTransformFinalized @ 14681f140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::MovieScene::FBoneTransformFinalizeData::BoneTransformFinalized(FBoneTransformFinalizeData *this)

{
  longlong lVar1;
  bool bVar2;
  USceneComponent *pUVar3;
  TRotator<double> *pTVar4;
  UObject *pUVar5;
  TTransform<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStackY_1a8 [32];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158 [2];
  double local_128;
  TQuat<double> local_118;
  TRotator<double> local_f8;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if ((bVar2) && (this->SwapRootBone != SwapRootBone_None)) {
    local_d8.Rotation.XY.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[0];
    local_d8.Rotation.XY.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[1];
    local_d8.Rotation.ZW.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[0];
    local_d8.Rotation.ZW.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[1];
    local_d8.Translation.XY.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[0];
    local_d8.Translation.XY.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[1];
    local_d8.Translation.ZW.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[0];
    local_d8.Translation.ZW.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[1];
    local_d8.Scale3D.XY.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[0];
    local_d8.Scale3D.XY.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[1];
    local_d8.Scale3D.ZW.m128d_f64[0] =
         (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[0];
    local_d8.Scale3D.ZW.m128d_f64[1] =
         (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[1];
    if ((this->InitialActorTransform).bIsSet != false) {
      local_78.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_78,&local_d8,&(this->InitialActorTransform).TypedValue);
      local_d8.Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
      local_d8.Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
      local_d8.Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
      local_d8.Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
      local_d8.Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
      local_d8.Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
      local_d8.Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
      local_d8.Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
      local_d8.Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
      local_d8.Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
      local_d8.Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
      local_d8.Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
    }
    if (this->SwapRootBone == SwapRootBone_Component) {
      pUVar3 = (USceneComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      local_118.X = local_d8.Rotation.XY.m128d_f64[0];
      local_118.Y = local_d8.Rotation.XY.m128d_f64[1];
      local_118.Z = local_d8.Rotation.ZW.m128d_f64[0];
      local_118.W = local_d8.Rotation.ZW.m128d_f64[1];
      pTVar4 = UE::Math::TQuat<double>::Rotator(&local_118,&local_f8);
      local_158[0]._0_8_ = pTVar4->Pitch;
      local_158[0]._8_8_ = pTVar4->Yaw;
      local_128 = local_d8.Translation.ZW.m128d_f64[0];
      local_158[0]._16_8_ = pTVar4->Roll;
      local_178._s_0.Z = local_d8.Translation.ZW.m128d_f64[0];
      local_178._s_0.X = local_d8.Translation.XY.m128d_f64[0];
      local_178._s_0.Y = local_d8.Translation.XY.m128d_f64[1];
      USceneComponent::SetRelativeLocationAndRotation
                (pUVar3,(TVector<double> *)&local_178._s_0,(TRotator<double> *)&local_158[0]._s_0,
                 false,(FHitResult *)0x0,None);
    }
    else if (this->SwapRootBone == SwapRootBone_Actor) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      lVar1 = *(longlong *)&pUVar5[4].field_0x8;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1b8) != 0)) {
        if (((this->InitialActorTransform).bIsSet == false) ||
           ((this->InverseMeshToActorRotation).bIsSet == false)) {
          uVar7 = local_d8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar8 = local_d8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar9 = local_d8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar10 = local_d8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar11 = local_d8.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar12 = local_d8.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar13 = local_d8.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar14 = local_d8.Rotation.ZW.m128d_f64[1]._4_4_;
        }
        else {
          local_d8.Rotation.XY.m128d_f64[0] =
               (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[0];
          local_d8.Rotation.XY.m128d_f64[1] =
               (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[1];
          local_d8.Rotation.ZW.m128d_f64[0] =
               (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[0];
          local_d8.Rotation.ZW.m128d_f64[1] =
               (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[1];
          local_178._s_0.X = (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[0];
          local_178._s_0.Y = (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[1];
          local_178._s_0.Z = (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[0];
          local_d8.Translation.ZW.m128d_f64[1] =
               (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[1];
          local_d8.Scale3D.XY.m128d_f64[0] =
               (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[0];
          local_d8.Scale3D.XY.m128d_f64[1] =
               (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[1];
          local_d8.Scale3D.ZW.m128d_f64[0] =
               (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[0];
          local_d8.Scale3D.ZW.m128d_f64[1] =
               (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[1];
          local_d8.Translation.XY.m128d_f64[0] = local_178._s_0.X;
          local_d8.Translation.XY.m128d_f64[1] = local_178._s_0.Y;
          local_d8.Translation.ZW.m128d_f64[0] = local_178._s_0.Z;
          UE::Math::TQuat<double>::RotateVector
                    (&(this->InverseMeshToActorRotation).TypedValue,
                     (TVector<double> *)&local_158[0]._s_0,(TVector<double> *)&local_178._s_0);
          local_d8.Translation.XY.m128d_f64[0] = (double)local_158[0]._0_8_;
          local_d8.Translation.XY.m128d_f64[1] = (double)local_158[0]._8_8_;
          local_d8.Translation.ZW.m128d_f64[0] = (double)local_158[0]._16_8_;
          local_d8.Translation.ZW.m128d_f64[1] = 0.0;
          pTVar6 = TOptional<UE::Math::TTransform<double>_>::GetValue(&this->InitialActorTransform);
          local_78.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_78.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_78.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_78.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_78.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_78.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_78.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_78.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_78,&local_d8,pTVar6);
          local_d8.Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
          local_d8.Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
          local_d8.Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
          local_d8.Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
          local_d8.Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
          local_d8.Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
          local_d8.Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
          local_d8.Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
          local_d8.Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
          local_d8.Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
          local_d8.Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
          local_d8.Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
          uVar7 = local_78.Rotation.XY.m128d_f64[0]._0_4_;
          uVar8 = local_78.Rotation.XY.m128d_f64[0]._4_4_;
          uVar9 = local_78.Rotation.XY.m128d_f64[1]._0_4_;
          uVar10 = local_78.Rotation.XY.m128d_f64[1]._4_4_;
          uVar11 = local_78.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar12 = local_78.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar13 = local_78.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar14 = local_78.Rotation.ZW.m128d_f64[1]._4_4_;
        }
        pUVar3 = *(USceneComponent **)(lVar1 + 0x1b8);
        local_118.X = (double)CONCAT44(uVar8,uVar7);
        local_118.Y = (double)CONCAT44(uVar10,uVar9);
        local_118.Z = (double)CONCAT44(uVar12,uVar11);
        local_118.W = (double)CONCAT44(uVar14,uVar13);
        pTVar4 = UE::Math::TQuat<double>::Rotator(&local_118,&local_f8);
        local_178._s_0.X = pTVar4->Pitch;
        local_178._s_0.Y = pTVar4->Yaw;
        local_178._s_0.Z = pTVar4->Roll;
        local_128 = local_d8.Translation.ZW.m128d_f64[0];
        local_158[0]._s_0.Z = local_d8.Translation.ZW.m128d_f64[0];
        local_158[0]._s_0.X = local_d8.Translation.XY.m128d_f64[0];
        local_158[0]._s_0.Y = local_d8.Translation.XY.m128d_f64[1];
        USceneComponent::SetRelativeLocationAndRotation
                  (pUVar3,(TVector<double> *)&local_158[0]._s_0,(TRotator<double> *)&local_178._s_0,
                   false,(FHitResult *)0x0,None);
      }
    }
  }
  return;
}

// Register @ 146859910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::MovieScene::FBoneTransformFinalizeData::Register
          (FBoneTransformFinalizeData *this,USkeletalMeshComponent *param_1,ESwapRootBone param_2,
          TTransform<double> *param_3,TOptional<UE::Math::TTransform<double>_> *param_4)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  TTransform<double> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  ulong64 *puVar12;
  undefined1 auStack_138 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  USkeletalMeshComponent *local_100;
  FDestructionSentinel local_f8;
  FDestructionSentinel local_e0;
  FDelegateAllocation *local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8 [4];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((this->OnBoneTransformsFinalizedHandle).ID == 0) {
    local_100 = param_1;
    if ((GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeletalMeshComponent *)0x0)) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_100);
    this->SwapRootBone = param_2;
    dVar3 = (param_3->Rotation).XY.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[0] =
         (param_3->Rotation).XY.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Rotation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Rotation).ZW.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[0] =
         (param_3->Rotation).ZW.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).XY.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[0] =
         (param_3->Translation).XY.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Translation.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Translation).ZW.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[0] =
         (param_3->Translation).ZW.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Translation.ZW.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).XY.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[0] =
         (param_3->Scale3D).XY.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar3;
    dVar3 = (param_3->Scale3D).ZW.m128d_f64[1];
    (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[0] =
         (param_3->Scale3D).ZW.m128d_f64[0];
    (this->MeshRelativeRootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
    if (param_4 != &this->InitialActorTransform) {
      if (param_4->bIsSet == false) {
        if ((this->InitialActorTransform).bIsSet != false) {
          (this->InitialActorTransform).bIsSet = false;
        }
      }
      else {
        dVar3 = (param_4->TypedValue).Rotation.XY.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Rotation.XY.m128d_f64[0] =
             (param_4->TypedValue).Rotation.XY.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Rotation.XY.m128d_f64[1] = dVar3;
        dVar3 = (param_4->TypedValue).Rotation.ZW.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Rotation.ZW.m128d_f64[0] =
             (param_4->TypedValue).Rotation.ZW.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Rotation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (param_4->TypedValue).Translation.XY.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Translation.XY.m128d_f64[0] =
             (param_4->TypedValue).Translation.XY.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Translation.XY.m128d_f64[1] = dVar3;
        dVar3 = (param_4->TypedValue).Translation.ZW.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Translation.ZW.m128d_f64[0] =
             (param_4->TypedValue).Translation.ZW.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Translation.ZW.m128d_f64[1] = dVar3;
        dVar3 = (param_4->TypedValue).Scale3D.XY.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Scale3D.XY.m128d_f64[0] =
             (param_4->TypedValue).Scale3D.XY.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Scale3D.XY.m128d_f64[1] = dVar3;
        dVar3 = (param_4->TypedValue).Scale3D.ZW.m128d_f64[1];
        (this->InitialActorTransform).TypedValue.Scale3D.ZW.m128d_f64[0] =
             (param_4->TypedValue).Scale3D.ZW.m128d_f64[0];
        (this->InitialActorTransform).TypedValue.Scale3D.ZW.m128d_f64[1] = dVar3;
        (this->InitialActorTransform).bIsSet = true;
      }
    }
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar6) {
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      if (pUVar7 != *(UObject **)(*(longlong *)&pUVar8[4].field_0x8 + 0x1b8)) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        lVar1 = *(longlong *)(*(longlong *)&pUVar7[4].field_0x8 + 0x1b8);
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
        pTVar9 = UE::Math::TTransform<double>::GetRelativeTransformReverse
                           ((TTransform<double> *)(lVar1 + 0x1f0),&local_98,
                            (TTransform<double> *)&pUVar7[0xc].field_0x10);
        dVar3 = (pTVar9->Rotation).XY.m128d_f64[1];
        dVar4 = (pTVar9->Rotation).ZW.m128d_f64[0];
        dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
        if ((TOptional<UE::Math::TQuat<double>_> *)local_b8 != &this->InverseMeshToActorRotation) {
          (this->InverseMeshToActorRotation).TypedValue.X = (pTVar9->Rotation).XY.m128d_f64[0];
          (this->InverseMeshToActorRotation).TypedValue.Y = dVar3;
          (this->InverseMeshToActorRotation).TypedValue.Z = dVar4;
          (this->InverseMeshToActorRotation).TypedValue.W = dVar5;
          (this->InverseMeshToActorRotation).bIsSet = true;
        }
      }
    }
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_110.DelegateSize = 0;
    pcVar2 = *(code **)(*(longlong *)pUVar7 + 0xc50);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_e0);
    local_c8 = &local_110;
    puVar10 = Core::Private::DelegateAllocate(0x20,&local_110);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar11 = FDelegateHandle::GenerateNewID();
      puVar10[2] = uVar11;
      *puVar10 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UE::MovieScene::FBoneTransformFinalizeData::Register'::`5'::<lambda_1>_>
                  ::_vftable_;
      puVar10[3] = this;
    }
    if (local_e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
    }
    puVar12 = (ulong64 *)(*pcVar2)(pUVar7,local_c0);
    (this->OnBoneTransformsFinalizedHandle).ID = *puVar12;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_118,(FWriteAccessScope *)&local_f8);
    if ((local_110.DelegateSize != 0) &&
       (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_110,0,0,0x10);
      local_110.DelegateSize = 0;
    }
    if (local_f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
    }
    if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_110.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  }
  return;
}

// Unregister @ 146870a40

void __thiscall
UE::MovieScene::FBoneTransformFinalizeData::Unregister(FBoneTransformFinalizeData *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    (**(code **)(*(longlong *)pUVar2 + 0xc58))(pUVar2,&this->OnBoneTransformsFinalizedHandle);
  }
  (this->OnBoneTransformsFinalizedHandle).ID = 0;
  if ((this->InitialActorTransform).bIsSet != false) {
    (this->InitialActorTransform).bIsSet = false;
  }
  if ((this->InverseMeshToActorRotation).bIsSet != false) {
    (this->InverseMeshToActorRotation).bIsSet = false;
  }
  return;
}

