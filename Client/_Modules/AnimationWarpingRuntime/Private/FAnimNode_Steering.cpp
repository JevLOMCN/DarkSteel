// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 8

// StaticStruct @ 14a713f70

UScriptStruct * __cdecl FAnimNode_Steering::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Steering,(UObject *)pUVar1,
                         L"AnimNode_Steering");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton;
}

// Initialize_AnyThread @ 14a713fb0

void __thiscall
FAnimNode_Steering::Initialize_AnyThread
          (FAnimNode_Steering *this,FAnimationInitializeContext *param_1)

{
  undefined8 uVar1;
  
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// GatherDebugData @ 14a713ff0

void __thiscall
FAnimNode_Steering::GatherDebugData(FAnimNode_Steering *this,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_Steering::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Steering,(UObject *)pUVar1,
                         L"AnimNode_Steering");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Steering.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"Alpha:%.3f");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInternal @ 14a714160

void __thiscall
FAnimNode_Steering::UpdateInternal(FAnimNode_Steering *this,FAnimationUpdateContext *param_1)

{
  longlong lVar1;
  double dVar2;
  FRootOffsetProvider *pFVar3;
  
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  pFVar3 = FAnimationBaseContext::GetMessage<UE::AnimationWarping::FRootOffsetProvider>
                     ((FAnimationBaseContext *)param_1);
  if (pFVar3 != (FRootOffsetProvider *)0x0) {
    dVar2 = (pFVar3->RootTransform).Rotation.XY.m128d_f64[1];
    (this->RootBoneTransform).Rotation.XY.m128d_f64[0] =
         (pFVar3->RootTransform).Rotation.XY.m128d_f64[0];
    (this->RootBoneTransform).Rotation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar3->RootTransform).Rotation.ZW.m128d_f64[1];
    (this->RootBoneTransform).Rotation.ZW.m128d_f64[0] =
         (pFVar3->RootTransform).Rotation.ZW.m128d_f64[0];
    (this->RootBoneTransform).Rotation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pFVar3->RootTransform).Translation.XY.m128d_f64[1];
    (this->RootBoneTransform).Translation.XY.m128d_f64[0] =
         (pFVar3->RootTransform).Translation.XY.m128d_f64[0];
    (this->RootBoneTransform).Translation.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar3->RootTransform).Translation.ZW.m128d_f64[1];
    (this->RootBoneTransform).Translation.ZW.m128d_f64[0] =
         (pFVar3->RootTransform).Translation.ZW.m128d_f64[0];
    (this->RootBoneTransform).Translation.ZW.m128d_f64[1] = dVar2;
    dVar2 = (pFVar3->RootTransform).Scale3D.XY.m128d_f64[1];
    (this->RootBoneTransform).Scale3D.XY.m128d_f64[0] =
         (pFVar3->RootTransform).Scale3D.XY.m128d_f64[0];
    (this->RootBoneTransform).Scale3D.XY.m128d_f64[1] = dVar2;
    dVar2 = (pFVar3->RootTransform).Scale3D.ZW.m128d_f64[1];
    (this->RootBoneTransform).Scale3D.ZW.m128d_f64[0] =
         (pFVar3->RootTransform).Scale3D.ZW.m128d_f64[0];
    (this->RootBoneTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
    return;
  }
  lVar1 = param_1->_padding_;
  dVar2 = *(double *)(lVar1 + 0x28);
  (this->RootBoneTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x20);
  (this->RootBoneTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x38);
  (this->RootBoneTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x30);
  (this->RootBoneTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x48);
  (this->RootBoneTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar1 + 0x40);
  (this->RootBoneTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x58);
  (this->RootBoneTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x50);
  (this->RootBoneTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x68);
  (this->RootBoneTransform).Scale3D.XY.m128d_f64[0] = *(double *)(lVar1 + 0x60);
  (this->RootBoneTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = *(double *)(lVar1 + 0x78);
  (this->RootBoneTransform).Scale3D.ZW.m128d_f64[0] = *(double *)(lVar1 + 0x70);
  (this->RootBoneTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14a714230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNode_Steering::EvaluateSkeletalControl_AnyThread
          (FAnimNode_Steering *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  UMirrorDataTable *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  IAnimRootMotionProvider *pIVar19;
  UAnimSequenceBase *pUVar20;
  TTransform<double> *pTVar21;
  undefined4 *puVar22;
  TRotator<double> *pTVar23;
  TQuat<double> *pTVar24;
  ulonglong uVar25;
  ulonglong uVar26;
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
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar48 [16];
  double dVar55;
  undefined1 auVar49 [16];
  double dVar56;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 in_XMM4_Qb;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  uint uVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  float fVar77;
  undefined1 auStackY_3e8 [32];
  FName local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_368;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  TVector<double>_u_0 local_328;
  undefined1 local_308 [8];
  undefined8 uStack_300;
  undefined1 local_2f8 [8];
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  float local_2e8;
  float local_2e4;
  TVector<double>_u_0 local_2d8;
  TQuat<double> local_2b8;
  undefined1 local_298 [32];
  undefined1 local_278 [128];
  undefined1 local_1f8 [8];
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [8];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8 [2];
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined1 local_184;
  undefined2 local_183;
  undefined1 local_181;
  undefined1 local_180;
  void *local_178;
  double local_170;
  void *local_168;
  double local_160;
  undefined1 local_157;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  fVar67 = *(float *)(param_1->_padding_ + 0x168);
  if (((0.0 < fVar67) && (0.0 < *(float *)((longlong)&this->_padding_ + 4))) &&
     (bAnimNodeSteeringEnabled)) {
    local_2e8 = fVar67;
    pIVar19 = UE::Anim::IAnimRootMotionProvider::Get();
    if (pIVar19 == (IAnimRootMotionProvider *)0x0) {
      `FAnimNode_Steering::EvaluateSkeletalControl_AnyThread'::__l8::<lambda_1>::operator()
                (local_398);
    }
    else {
      local_1f8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      _uStack_1f0 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_1e8 = (undefined1  [8])UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      _uStack_1e0 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_1d8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_1d8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_1c8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_1c8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_1b8[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_1b8[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      local_1a8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_1a8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      cVar18 = (**(code **)((longlong)*pIVar19 + 0x20))
                         (pIVar19,&param_1->CustomAttributes,local_1f8);
      dVar2 = __real_4059000000000000;
      if (cVar18 != '\0') {
        local_368._s_0.Z = local_1c8[0];
        local_2e4 = (float)(SQRT(local_1d8[0] * local_1d8[0] + local_1d8[1] * local_1d8[1] +
                                 local_1c8[0] * local_1c8[0]) *
                           (__real_3ff0000000000000 / (double)fVar67));
        if (this->DisableSteeringBelowSpeed <= local_2e4 &&
            local_2e4 != this->DisableSteeringBelowSpeed) {
          auVar52 = *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.XY.m128d_f64;
          auVar64 = *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.ZW.m128d_f64;
          dVar7 = auVar52._0_8_;
          dVar8 = auVar64._0_8_;
          if (FVisualLogger::bIsRecording != 0) {
            local_388._s_0.Z = (this->RootBoneTransform).Translation.ZW.m128d_f64[0];
            dVar3 = dVar7 + dVar7;
            auVar10._4_8_ = in_XMM4_Qb;
            auVar10._0_4_ = auVar52._4_4_;
            auVar57._0_8_ = auVar10._0_8_ << 0x20;
            auVar57._8_4_ = auVar52._8_4_;
            auVar57._12_4_ = auVar52._12_4_;
            auVar11._4_8_ = in_XMM3_Qb;
            auVar11._0_4_ = auVar64._4_4_;
            auVar48._0_8_ = auVar11._0_8_ << 0x20;
            auVar48._8_4_ = auVar64._8_4_;
            auVar48._12_4_ = auVar64._12_4_;
            uVar65 = SUB84(dVar8 + dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000;
            uVar66 = (uint)((ulonglong)(dVar8 + dVar8) >> 0x20) ^
                     __xmm_80000000000000008000000000000000._4_4_;
            local_388._s_0.X = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
            local_388._s_0.Y = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
            local_338 = (dVar3 * auVar48._8_8_ - (double)CONCAT44(uVar66,uVar65) * auVar57._8_8_) *
                        __real_4056800000000000 + local_388._s_0.Z;
            dStack_340 = (((double)CONCAT44(uVar66,uVar65) * dVar8 - dVar3 * dVar7) +
                         __real_3ff0000000000000) * __real_4056800000000000 +
                         (this->RootBoneTransform).Translation.XY.m128d_f64[1];
            local_348 = (dVar3 * auVar57._8_8_ + (double)CONCAT44(uVar66,uVar65) * auVar48._8_8_) *
                        __real_4056800000000000 +
                        (this->RootBoneTransform).Translation.XY.m128d_f64[0];
            local_368._s_0.Z = local_388._s_0.Z;
            ::FName::FName(&local_3a8,"Steering");
            FVisualLogger::ArrowLineLogfImpl
                      (*(UObject **)(param_1->_padding_ + 0x140),&local_3a8,Display,
                       (TVector<double> *)&local_388._s_0,(TVector<double> *)&local_348,
                       &FColor::Green,0,L"");
            if (FVisualLogger::bIsRecording != 0) {
              dVar3 = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              dVar38 = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              dVar47 = (this->RootBoneTransform).Translation.ZW.m128d_f64[0];
              local_388._s_0.X = ___xmm_3ff00000000000000000000000000000;
              local_388._s_0.Y = _UNK_15061cbc8;
              local_388._s_0.Z = 0.0;
              UE::Math::TQuat<double>::RotateVector
                        (&this->TargetOrientation,(TVector<double> *)&local_348,
                         (TVector<double> *)&local_388._s_0);
              local_298._8_8_ = dStack_340 * dVar2 + dVar38;
              local_298._0_8_ = local_348 * dVar2 + dVar3;
              local_298._16_8_ = (double)local_338 * dVar2 + dVar47;
              local_328._s_0.X = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              local_328._s_0.Y = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              local_368._s_0.Z = dVar47;
              local_328._s_0.Z = dVar47;
              ::FName::FName(&local_3a8,"Steering");
              FVisualLogger::ArrowLineLogfImpl
                        (*(UObject **)(param_1->_padding_ + 0x140),&local_3a8,Display,
                         (TVector<double> *)&local_328._s_0,(TVector<double> *)local_298,
                         &FColor::Blue,0,L"");
            }
          }
          dVar13 = (this->TargetOrientation).Z;
          dVar14 = (this->TargetOrientation).W;
          dVar47 = dVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar38 = auVar52._8_8_;
          dVar4 = dVar38 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar55 = (this->TargetOrientation).X;
          dVar15 = (this->TargetOrientation).Y;
          dVar5 = dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar9 = auVar64._8_8_;
          dVar6 = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar58._8_4_ = SUB84(dVar47,0);
          auVar58._0_8_ = dVar47;
          auVar58._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          auVar52._8_4_ = SUB84(dVar6,0);
          auVar52._0_8_ = dVar6;
          auVar52._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          auVar39._8_4_ = SUB84(dVar4,0);
          auVar39._0_8_ = dVar4;
          auVar39._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          auVar64._8_4_ = SUB84(dVar5,0);
          auVar64._0_8_ = dVar5;
          auVar64._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          local_278._0_8_ =
               dVar47 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar6 * dVar55 +
               dVar4 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar5 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_278._8_8_ =
               auVar58._8_8_ * dVar13 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar52._8_8_ * dVar15 +
               auVar39._8_8_ * dVar14 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar64._8_8_ * dVar55 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar3 = dVar47 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar6 * dVar14 +
                  dVar4 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                  dVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_278._24_4_ = SUB84(dVar3,0);
          local_278._16_8_ =
               dVar47 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar6 * dVar13 +
               dVar4 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_278._28_4_ = (int)((ulonglong)dVar3 >> 0x20);
          if ((0.0 < this->AnimatedTargetTime) &&
             (pUVar20 = Cast<UAnimSequenceBase,UAnimationAsset>(&this->CurrentAnimAsset),
             pUVar20 != (UAnimSequenceBase *)0x0)) {
            if ((this->bMirrored == false) ||
               (pUVar1 = (this->MirrorDataTable).field0_0x0.DebugPtr,
               pUVar1 == (UMirrorDataTable *)0x0)) {
              local_198._12_4_ = this->AnimatedTargetTime;
              local_183 = uStack_3a0._1_2_;
              local_181 = uStack_3a0._3_1_;
              local_180 = pUVar20->bLoop;
              local_198._0_8_ = (undefined8)this->CurrentAnimAssetTime;
              local_198[8] = 1;
              local_188 = 0;
              local_184 = 0;
              local_178 = (void *)0x0;
              local_170 = 0.0;
              local_168 = (void *)0x0;
              local_160 = 0.0;
              local_157 = 0;
              puVar22 = (undefined4 *)
                        (**(code **)(pUVar20->_padding_ + 0x348))(pUVar20,local_138,local_198);
              uVar72 = *puVar22;
              uVar69 = puVar22[1];
              uVar70 = puVar22[2];
              uVar71 = puVar22[3];
              uVar73 = puVar22[4];
              uVar74 = puVar22[5];
              uVar75 = puVar22[6];
              uVar76 = puVar22[7];
              if (local_168 != (void *)0x0) {
                FMemory::Free(local_168);
              }
              if (local_178 != (void *)0x0) {
                FMemory::Free(local_178);
              }
            }
            else {
              pTVar21 = UE::Anim::ExtractRootMotionFromAnimationAsset
                                  ((TTransform<double> *)local_198,(UAnimationAsset *)pUVar20,pUVar1
                                   ,this->CurrentAnimAssetTime,this->AnimatedTargetTime,
                                   pUVar20->bLoop);
              uVar72 = *(undefined4 *)(pTVar21->Rotation).XY.m128d_f64;
              uVar69 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 4);
              uVar70 = *(undefined4 *)((pTVar21->Rotation).XY.m128d_f64 + 1);
              uVar71 = *(undefined4 *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 0xc);
              uVar73 = *(undefined4 *)(pTVar21->Rotation).ZW.m128d_f64;
              uVar74 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 4);
              uVar75 = *(undefined4 *)((pTVar21->Rotation).ZW.m128d_f64 + 1);
              uVar76 = *(undefined4 *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 0xc);
            }
            local_2b8.X._0_4_ = uVar72;
            local_2b8.X._4_4_ = uVar69;
            local_2b8.Y._0_4_ = uVar70;
            local_2b8.Y._4_4_ = uVar71;
            local_2b8.Z._0_4_ = uVar73;
            local_2b8.Z._4_4_ = uVar74;
            local_2b8.W._0_4_ = uVar75;
            local_2b8.W._4_4_ = uVar76;
            UE::Math::TRotator<double>::TRotator<double>((TRotator<double> *)&local_348,&local_2b8);
            fVar77 = (float)dStack_340;
            if (this->RootMotionThreshold <=
                (float)((uint)fVar77 & __xmm_7fffffff7fffffff7fffffff7fffffff) &&
                (float)((uint)fVar77 & __xmm_7fffffff7fffffff7fffffff7fffffff) !=
                this->RootMotionThreshold) {
              if (FVisualLogger::bIsRecording != 0) {
                dVar13 = (double)CONCAT44(local_2b8.X._4_4_,local_2b8.X._0_4_);
                auVar16._8_4_ = local_2b8.Y._0_4_;
                auVar16._0_8_ = dVar13;
                auVar16._12_4_ = local_2b8.Y._4_4_;
                dVar14 = (double)CONCAT44(local_2b8.Z._4_4_,local_2b8.Z._0_4_);
                auVar17._8_4_ = local_2b8.W._0_4_;
                auVar17._0_8_ = dVar14;
                auVar17._12_4_ = local_2b8.W._4_4_;
                dVar4 = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
                dVar5 = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
                dVar6 = (this->RootBoneTransform).Translation.ZW.m128d_f64[0];
                dVar55 = auVar16._8_8_;
                auVar59._8_4_ = local_2b8.X._0_4_;
                auVar59._0_8_ = dVar13;
                auVar59._12_4_ = local_2b8.X._4_4_;
                dVar47 = auVar17._8_8_;
                auVar27._8_4_ = local_2b8.W._0_4_;
                auVar27._0_8_ = dVar47;
                auVar27._12_4_ = local_2b8.W._4_4_;
                auVar40._8_4_ = local_2b8.Y._0_4_;
                auVar40._0_8_ = dVar55;
                auVar40._12_4_ = local_2b8.Y._4_4_;
                auVar28._8_4_ = local_2b8.Z._0_4_;
                auVar28._0_8_ = dVar14;
                auVar28._12_4_ = local_2b8.Z._4_4_;
                local_2d8._s_0.X = ___xmm_3ff00000000000000000000000000000;
                local_2d8._s_0.Y = _UNK_15061cbc8;
                dVar3 = dVar13 * dVar7 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                        dVar47 * dVar9 +
                        dVar55 * dVar38 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                        dVar14 * dVar8 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                uStack_300 = auVar59._8_8_ * dVar8 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                             auVar27._8_8_ * dVar38 +
                             auVar40._8_8_ * dVar9 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                             auVar28._8_8_ * dVar7 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                local_308 = (undefined1  [8])
                            (dVar13 * dVar9 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                             dVar47 * dVar7 +
                             dVar55 * dVar8 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                            dVar14 * dVar38 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
                local_2d8._s_0.Z = 0.0;
                uStack_2f0 = SUB84(dVar3,0);
                local_2f8 = (undefined1  [8])
                            (dVar13 * dVar38 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                             dVar47 * dVar8 +
                             dVar55 * dVar7 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                            dVar14 * dVar9 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
                uStack_2ec = (int)((ulonglong)dVar3 >> 0x20);
                UE::Math::TQuat<double>::RotateVector
                          ((TQuat<double> *)local_308,(TVector<double> *)local_298,
                           (TVector<double> *)&local_2d8._s_0);
                local_328._s_0.X = (double)local_298._0_8_ * dVar2 + dVar4;
                local_328._s_0.Y = (double)local_298._8_8_ * dVar2 + dVar5;
                local_328._s_0.Z = (double)local_298._16_8_ * dVar2 + dVar6;
                local_368._s_0.X = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
                local_368._s_0.Y = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
                local_368._s_0.Z = dVar6;
                ::FName::FName(&local_3a8,"Steering");
                FVisualLogger::ArrowLineLogfImpl
                          (*(UObject **)(param_1->_padding_ + 0x140),&local_3a8,Display,
                           (TVector<double> *)&local_368._s_0,(TVector<double> *)&local_328._s_0,
                           &FColor::Orange,0,L"");
              }
              pTVar23 = UE::Math::TRotator<double>::TRotator<double>
                                  ((TRotator<double> *)&local_368._s_0,(TQuat<double> *)local_278);
              fVar67 = (float)pTVar23->Yaw;
              if (fVar77 - fVar67 <= __real_43340000) {
                if (__real_43340000 < fVar67 - fVar77) {
                  fVar67 = fVar67 + __real_c3b40000;
                }
              }
              else {
                fVar67 = fVar67 + __real_43b40000;
              }
              local_308 = local_1f8;
              uStack_300 = _uStack_1f0;
              fVar68 = fVar67 / fVar77;
              if (this->MaxScaleRatio <= fVar67 / fVar77) {
                fVar68 = this->MaxScaleRatio;
              }
              local_2f8 = local_1e8;
              _uStack_2f0 = _uStack_1e0;
              if (fVar68 <= this->MinScaleRatio) {
                fVar68 = this->MinScaleRatio;
              }
              fVar67 = (fVar68 - __real_3f800000) * *(float *)((longlong)&this->_padding_ + 4) +
                       __real_3f800000;
              UE::Math::TRotator<double>::TRotator<double>
                        ((TRotator<double> *)&local_388._s_0,(TQuat<double> *)local_308);
              dVar2 = (double)fVar67;
              local_388._s_0.Y = local_388._s_0.Y * dVar2;
              pTVar24 = UE::Math::TRotator<double>::Quaternion
                                  ((TRotator<double> *)&local_388._s_0,(TQuat<double> *)local_308);
              local_1f8 = (undefined1  [8])pTVar24->X;
              _uStack_1f0 = pTVar24->Y;
              local_1e8 = (undefined1  [8])pTVar24->Z;
              _uStack_1e0 = pTVar24->W;
              dStack_340 = dStack_340 * dVar2;
              pTVar24 = UE::Math::TRotator<double>::Quaternion
                                  ((TRotator<double> *)&local_348,(TQuat<double> *)local_308);
              dVar8 = dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar9 = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              uVar72 = (undefined4)((ulonglong)dVar9 >> 0x20);
              dVar7 = dVar7 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar38 = dVar38 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              uVar69 = (undefined4)((ulonglong)dVar38 >> 0x20);
              dVar2 = pTVar24->X;
              dVar3 = pTVar24->Y;
              auVar60._8_4_ = SUB84(dVar9,0);
              auVar60._0_8_ = dVar8;
              auVar60._12_4_ = uVar72;
              dVar13 = (this->TargetOrientation).X;
              dVar14 = (this->TargetOrientation).Y;
              auVar41._8_4_ = SUB84(dVar9,0);
              auVar41._0_8_ = dVar8;
              auVar41._12_4_ = uVar72;
              local_2b8.X._0_4_ = SUB84(dVar2,0);
              local_2b8.X._4_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
              local_2b8.Y._0_4_ = SUB84(dVar3,0);
              local_2b8.Y._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
              dVar2 = dVar2 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar3 = dVar3 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              dVar47 = pTVar24->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar4 = pTVar24->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              uVar72 = (undefined4)((ulonglong)dVar4 >> 0x20);
              auVar49._8_4_ = SUB84(dVar4,0);
              auVar49._0_8_ = dVar47;
              auVar49._12_4_ = uVar72;
              dVar56 = auVar49._8_8_;
              auVar29._8_4_ = SUB84(dVar4,0);
              auVar29._0_8_ = dVar56;
              auVar29._12_4_ = uVar72;
              auVar30._8_4_ = SUB84(dVar47,0);
              auVar30._0_8_ = dVar47;
              auVar30._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              dVar5 = auVar60._8_8_ * dVar2 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                      dVar56 * dVar7 +
                      dVar8 * dVar3 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                      dVar47 * dVar38 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar6 = dVar8 * dVar2 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      auVar29._8_8_ * dVar38 +
                      auVar41._8_8_ * dVar3 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                      auVar30._8_8_ * dVar7 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              auVar31._8_4_ = SUB84(dVar38,0);
              auVar31._0_8_ = dVar7;
              auVar31._12_4_ = uVar69;
              dVar55 = (this->TargetOrientation).Z;
              dVar15 = (this->TargetOrientation).W;
              unique0x100014e6 = SUB84(dVar38,0);
              local_348 = dVar7;
              unique0x100014ea = uVar69;
              uStack_3a0 = dVar2 * dVar38 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar56 * dVar8 +
                           dVar7 * dVar3 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                           auVar60._8_8_ * dVar47 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar2 = dVar2 * dVar7 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar4 * dVar9 +
                      auVar31._8_8_ * dVar3 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar8 * dVar47 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              auVar50._8_4_ = SUB84(dVar2,0);
              auVar50._0_8_ = uStack_3a0;
              auVar50._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
              auVar61._8_4_ = SUB84(dVar5,0);
              auVar61._0_8_ = dVar5;
              auVar61._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              local_3a8 = (FName)uStack_3a0;
              local_278._0_8_ =
                   dVar5 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar13 * auVar50._8_8_ +
                   dVar55 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + uStack_3a0 * dVar14 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              local_278._8_8_ =
                   auVar61._8_8_ * dVar55 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar14 * dVar2
                   + dVar15 * dVar6 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   uStack_3a0 * dVar13 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar2 = dVar5 * dVar13 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar15 * dVar2 +
                      dVar14 * dVar6 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      uStack_3a0 * dVar55 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              local_278._24_4_ = SUB84(dVar2,0);
              local_278._16_8_ =
                   dVar5 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                   + dVar55 * auVar50._8_8_ +
                   dVar13 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                   + uStack_3a0 * dVar15 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              local_278._28_4_ = (int)((ulonglong)dVar2 >> 0x20);
              fVar67 = local_2e8;
            }
          }
          if (this->DisableAdditiveBelowSpeed <= local_2e4 &&
              local_2e4 != this->DisableAdditiveBelowSpeed) {
            local_2b8.X._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.X,0);
            local_2b8.X._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.X >> 0x20)
            ;
            local_2b8.Y._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
            local_2b8.Y._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20)
            ;
            local_2b8.Z._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
            local_2b8.Z._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20)
            ;
            local_2b8.W._0_4_ = SUB84(UE::Math::TQuat<double>::Identity.W,0);
            local_2b8.W._4_4_ = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20)
            ;
            SpringMath::CriticalSpringDamperQuat
                      (&local_2b8,&this->AngularVelocity,(TQuat<double> *)local_278,
                       this->ProceduralTargetTime * __real_3fb8aa3b,fVar67);
            dVar8 = (double)CONCAT44(local_2b8.Z._4_4_,local_2b8.Z._0_4_);
            dVar3 = (double)CONCAT44(local_2b8.W._4_4_,local_2b8.W._0_4_);
            dVar2 = (double)CONCAT44(local_2b8.X._4_4_,local_2b8.X._0_4_);
            dVar7 = (double)CONCAT44(local_2b8.Y._4_4_,local_2b8.Y._0_4_);
            if (FVisualLogger::bIsRecording != 0) {
              auVar52 = *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.XY.m128d_f64;
              auVar64 = *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.ZW.m128d_f64;
              dVar6 = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              dVar13 = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              dVar14 = (this->RootBoneTransform).Translation.ZW.m128d_f64[0];
              dVar5 = auVar64._8_8_;
              dVar38 = auVar52._0_8_;
              auVar51._8_4_ = auVar52._0_4_;
              auVar51._0_8_ = dVar38;
              auVar51._12_4_ = auVar52._4_4_;
              dVar9 = auVar64._0_8_;
              dVar47 = auVar52._8_8_;
              auVar42._8_4_ = auVar52._8_4_;
              auVar42._0_8_ = dVar47;
              auVar42._12_4_ = auVar52._12_4_;
              auVar32._8_4_ = auVar64._0_4_;
              auVar32._0_8_ = dVar9;
              auVar32._12_4_ = auVar64._4_4_;
              local_368._s_0.Z = 0.0;
              dVar4 = dVar38 * dVar2 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar5 * dVar3 +
                      dVar7 * dVar47 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar9 * dVar8 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              uStack_300 = auVar51._8_8_ * dVar8 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                           dVar7 * dVar5 +
                           auVar42._8_8_ * dVar3 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                           auVar32._8_8_ * dVar2 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              local_308 = (undefined1  [8])
                          (dVar38 * dVar3 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                           dVar2 * dVar5 +
                           dVar47 * dVar8 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                          dVar9 * dVar7 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
              uStack_2f0 = SUB84(dVar4,0);
              local_2f8 = (undefined1  [8])
                          (dVar38 * dVar7 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar5 * dVar8 +
                           dVar2 * dVar47 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                          dVar9 * dVar3 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
              uStack_2ec = (int)((ulonglong)dVar4 >> 0x20);
              local_368._s_0.X = ___xmm_3ff00000000000000000000000000000;
              local_368._s_0.Y = _UNK_15061cbc8;
              UE::Math::TQuat<double>::RotateVector
                        ((TQuat<double> *)local_308,(TVector<double> *)&local_388._s_0,
                         (TVector<double> *)&local_368._s_0);
              local_328._s_0.X = local_388._s_0.X * __real_405e000000000000 + dVar6;
              local_328._s_0.Y = local_388._s_0.Y * __real_405e000000000000 + dVar13;
              local_328._s_0.Z = local_388._s_0.Z * __real_405e000000000000 + dVar14;
              local_2d8._s_0.X = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              local_2d8._s_0.Y = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              local_368._s_0.Z = dVar14;
              local_2d8._s_0.Z = dVar14;
              ::FName::FName(&local_3a8,"Steering");
              FVisualLogger::ArrowLineLogfImpl
                        (*(UObject **)(param_1->_padding_ + 0x140),&local_3a8,Display,
                         (TVector<double> *)&local_2d8._s_0,(TVector<double> *)&local_328._s_0,
                         &FColor::Magenta,0,L"");
            }
            dVar4 = local_1f8;
            dVar47 = local_1e8._8_8_;
            dVar38 = local_1e8;
            dVar9 = local_1f8._8_8_;
            auVar43._8_4_ = uStack_1f0;
            auVar43._0_8_ = dVar9;
            auVar43._12_4_ = uStack_1ec;
            auVar33._8_4_ = local_1e8._0_4_;
            auVar33._0_8_ = dVar38;
            auVar33._12_4_ = local_1e8._4_4_;
            auVar62._0_8_ =
                 dVar38 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            auVar62._8_8_ =
                 dVar38 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar38 = dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                     + dVar2 * dVar47 +
                     dVar9 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                     + dVar38 * dVar7 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar5 = dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                    + dVar7 * dVar47 +
                    auVar43._8_8_ * dVar3 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar33._8_8_ * dVar2 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar8 = dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                    + dVar47 * dVar8 +
                    dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                    + auVar62._0_8_;
            dVar2 = dVar4 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                    + dVar47 * dVar3 +
                    dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                    + auVar62._8_8_;
            uVar72 = (undefined4)((ulonglong)dVar2 >> 0x20);
            local_298._8_4_ = SUB84(dVar5,0);
            local_298._0_8_ = dVar38;
            local_298._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
            local_298._24_4_ = SUB84(dVar2,0);
            local_298._16_8_ = dVar8;
            local_298._28_4_ = uVar72;
            if (FVisualLogger::bIsRecording != 0) {
              dVar4 = (this->RootBoneTransform).Rotation.XY.m128d_f64[0];
              dVar9 = (this->RootBoneTransform).Rotation.XY.m128d_f64[1];
              auVar52 = *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.ZW.m128d_f64;
              dVar6 = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              dVar13 = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              dVar14 = (this->RootBoneTransform).Translation.ZW.m128d_f64[0];
              auVar63._8_4_ = SUB84(dVar8,0);
              auVar63._0_8_ = dVar2;
              auVar63._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
              dVar47 = auVar52._8_8_;
              auVar44._8_4_ = SUB84(dVar2,0);
              auVar44._0_8_ = dVar8;
              auVar44._12_4_ = uVar72;
              dVar3 = auVar52._0_8_;
              auVar34._8_4_ = auVar52._8_4_;
              auVar34._0_8_ = dVar47;
              auVar34._12_4_ = auVar52._12_4_;
              auVar35._8_4_ = auVar52._0_4_;
              auVar35._0_8_ = dVar3;
              auVar35._12_4_ = auVar52._4_4_;
              local_368._s_0.Z = 0.0;
              auVar62._0_8_ =
                   dVar2 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   dVar47 * dVar38 +
                   dVar8 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar3 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              auVar62._8_8_ =
                   auVar63._8_8_ * dVar4 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar34._8_8_ * dVar5 +
                   auVar44._8_8_ * dVar9 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar35._8_8_ * dVar38 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar7 = dVar4 * dVar38 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      dVar2 * dVar47 +
                      dVar9 * dVar5 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar8 * dVar3 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              uStack_2f0 = SUB84(dVar7,0);
              local_2f8 = (undefined1  [8])
                          (dVar4 * dVar5 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                           dVar8 * dVar47 +
                           dVar9 * dVar38 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                          dVar2 * dVar3 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
              uStack_2ec = (int)((ulonglong)dVar7 >> 0x20);
              local_368._s_0.X = ___xmm_3ff00000000000000000000000000000;
              local_368._s_0.Y = _UNK_15061cbc8;
              _local_308 = (double  [2])auVar62;
              UE::Math::TQuat<double>::RotateVector
                        ((TQuat<double> *)local_308,(TVector<double> *)&local_388._s_0,
                         (TVector<double> *)&local_368._s_0);
              local_328._s_0.X = local_388._s_0.X * __real_4061800000000000 + dVar6;
              local_328._s_0.Y = local_388._s_0.Y * __real_4061800000000000 + dVar13;
              local_328._s_0.Z = local_388._s_0.Z * __real_4061800000000000 + dVar14;
              local_2d8._s_0.X = (this->RootBoneTransform).Translation.XY.m128d_f64[0];
              local_2d8._s_0.Y = (this->RootBoneTransform).Translation.XY.m128d_f64[1];
              local_2d8._s_0.Z = dVar14;
              ::FName::FName(&local_3a8,"Steering");
              FVisualLogger::ArrowLineLogfImpl
                        (*(UObject **)(param_1->_padding_ + 0x140),&local_3a8,Display,
                         (TVector<double> *)&local_2d8._s_0,(TVector<double> *)&local_328._s_0,
                         &FColor::Red,0,L"");
            }
            local_308._4_4_ = local_1f8._4_4_;
            local_308._0_4_ = local_1f8._0_4_;
            uStack_300._0_4_ = uStack_1f0;
            uStack_300._4_4_ = uStack_1ec;
            local_2f8._4_4_ = local_1e8._4_4_;
            local_2f8._0_4_ = local_1e8._0_4_;
            uStack_2f0 = uStack_1e0;
            uStack_2ec = uStack_1dc;
            pTVar24 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_2b8,(TQuat<double> *)local_308,(TQuat<double> *)local_298,
                                 (double)*(float *)((longlong)&this->_padding_ + 4));
            dVar2 = pTVar24->X;
            dVar7 = pTVar24->Y;
            dVar8 = pTVar24->Z;
            dVar3 = pTVar24->W;
            dVar38 = dVar2 * dVar2 + dVar8 * dVar8;
            dVar47 = dVar7 * dVar7 + dVar3 * dVar3;
            auVar36._8_4_ = SUB84(dVar47,0);
            auVar36._0_8_ = dVar38;
            auVar36._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
            auVar37._0_8_ = auVar36._8_8_ + dVar38;
            auVar37._8_8_ = dVar38 + dVar47;
            auVar64 = sqrtpd(auVar62,auVar37);
            uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= auVar37._0_8_);
            uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= auVar37._8_8_);
            uVar65 = (uint)(uVar25 >> 0x20);
            uVar66 = (uint)(uVar26 >> 0x20);
            auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar64)
            ;
            auVar53._0_8_ = uVar25 & (ulonglong)(auVar52._0_8_ * dVar2);
            uVar12 = uVar26 & (ulonglong)(auVar52._8_8_ * dVar7);
            auVar53._8_4_ = (undefined4)uVar12;
            auVar53._12_4_ = (undefined4)(uVar12 >> 0x20);
            auVar45._0_4_ =
                 ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar45._4_4_ =
                 ~uVar65 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar45._8_4_ =
                 ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar45._12_4_ =
                 ~uVar66 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            _local_1f8 = (double  [2])(auVar53 | auVar45);
            auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar64)
            ;
            auVar46._0_8_ = (ulonglong)(auVar52._0_8_ * dVar8) & uVar25;
            uVar12 = (ulonglong)(auVar52._8_8_ * dVar3) & uVar26;
            auVar46._8_4_ = (undefined4)uVar12;
            auVar46._12_4_ = (undefined4)(uVar12 >> 0x20);
            auVar54._0_4_ =
                 ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar54._4_4_ =
                 ~uVar65 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar54._8_4_ =
                 ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar54._12_4_ =
                 ~uVar66 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            _local_1e8 = (double  [2])(auVar54 | auVar46);
          }
          (**(code **)((longlong)*pIVar19 + 0x18))(pIVar19,local_1f8,&param_1->CustomAttributes);
        }
      }
    }
  }
  return;
}

// IsValidToEvaluate @ 14a7152e0

bool __thiscall
FAnimNode_Steering::IsValidToEvaluate
          (FAnimNode_Steering *this,USkeleton *param_1,FBoneContainer *param_2)

{
  return true;
}

// FAnimNode_Steering @ 14a71b780

FAnimNode_Steering * __thiscall FAnimNode_Steering::FAnimNode_Steering(FAnimNode_Steering *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_Steering__6B_;
  dVar10 = UE::Math::TQuat<double>::Identity.Y;
  (this->TargetOrientation).X = UE::Math::TQuat<double>::Identity.X;
  (this->TargetOrientation).Y = dVar10;
  dVar10 = UE::Math::TQuat<double>::Identity.W;
  (this->TargetOrientation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->TargetOrientation).W = dVar10;
  (this->MirrorDataTable).field0_0x0.DebugPtr = (UMirrorDataTable *)0x0;
  (this->CurrentAnimAsset).field0_0x0.DebugPtr = (UAnimationAsset *)0x0;
  this->CurrentAnimAssetTime = 0.0;
  this->bMirrored = false;
  this->ProceduralTargetTime = 0.2;
  this->TargetTime_DEPRECATED = 0.2;
  this->AnimatedTargetTime = 2.0;
  this->RootMotionThreshold = 1.0;
  this->DisableSteeringBelowSpeed = 1.0;
  this->DisableAdditiveBelowSpeed = -1.0;
  this->MinScaleRatio = 0.5;
  this->MaxScaleRatio = 1.5;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->AngularVelocity).field0_0x0._s_0.Y = (double)uVar9;
  (this->AngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->RootBoneTransform).Scale3D.ZW.m128d_f64 = auVar8;
  return this;
}

// operator() @ 150552f90

bool __thiscall
`FAnimNode_Steering::EvaluateSkeletalControl_AnyThread'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8164946439894466494>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8164946439894466494>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

