// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// StaticClass @ 14a8d7660

UClass * __cdecl UPoseSearchFeatureChannel_Velocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Velocity",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Velocity,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Velocity>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Velocity>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton;
}

// UPoseSearchFeatureChannel_Velocity @ 14a8e2900

UPoseSearchFeatureChannel_Velocity * __thiscall
UPoseSearchFeatureChannel_Velocity::UPoseSearchFeatureChannel_Velocity
          (UPoseSearchFeatureChannel_Velocity *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bDefaultWithRootBone = true;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->Bone).BoneName.ComparisonIndex = 0;
  (this->Bone).BoneName.Number = 0;
  puVar1 = &(this->Bone).field_0x8;
  (this->Bone).BoneIndex = -1;
  (this->Bone).bUseSkeletonIndex = 0;
  (this->Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar2;
  (this->OriginBone).BoneName.ComparisonIndex = 0;
  (this->OriginBone).BoneName.Number = 0;
  puVar1 = &(this->OriginBone).field_0x8;
  (this->OriginBone).BoneIndex = -1;
  (this->OriginBone).bUseSkeletonIndex = 0;
  (this->OriginBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->OriginRole = FVar2;
  this->SamplingAttributeId = -1;
  this->SampleTimeOffset = 0.0;
  this->OriginTimeOffset = 0.0;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->bUseCharacterSpaceVelocities = true;
  this->bNormalize = false;
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_Velocity @ 14a8e29a0

UPoseSearchFeatureChannel_Velocity * __thiscall
UPoseSearchFeatureChannel_Velocity::UPoseSearchFeatureChannel_Velocity
          (UPoseSearchFeatureChannel_Velocity *this)

{
  undefined1 *puVar1;
  int iVar2;
  FName FVar3;
  FObjectInitializer *pFVar4;
  UClass *pUVar5;
  longlong lVar6;
  
  pFVar4 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar4);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->bDefaultWithRootBone = true;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  FVar3 = UE::PoseSearch::DefaultRole;
  (this->Bone).BoneName.ComparisonIndex = 0;
  (this->Bone).BoneName.Number = 0;
  puVar1 = &(this->Bone).field_0x8;
  (this->Bone).BoneIndex = -1;
  (this->Bone).bUseSkeletonIndex = 0;
  (this->Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar3;
  (this->OriginBone).BoneName.ComparisonIndex = 0;
  (this->OriginBone).BoneName.Number = 0;
  puVar1 = &(this->OriginBone).field_0x8;
  (this->OriginBone).BoneIndex = -1;
  (this->OriginBone).bUseSkeletonIndex = 0;
  (this->OriginBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  lVar6 = this->_padding_;
  this->OriginRole = FVar3;
  this->SamplingAttributeId = -1;
  this->SampleTimeOffset = 0.0;
  this->OriginTimeOffset = 0.0;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->bUseCharacterSpaceVelocities = true;
  this->bNormalize = false;
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a8e2a68;
  }
  lVar6 = 0;
LAB_14a8e2a68:
  this->bUseBlueprintQueryOverride = lVar6 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_Velocity @ 14a8e30a0

void __thiscall
UPoseSearchFeatureChannel_Velocity::~UPoseSearchFeatureChannel_Velocity
          (UPoseSearchFeatureChannel_Velocity *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e6540

void __thiscall
UPoseSearchFeatureChannel_Velocity::AddDependentChannels
          (UPoseSearchFeatureChannel_Velocity *this,UPoseSearchSchema *param_1)

{
  if (param_1->bInjectAdditionalDebugChannels != false) {
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,this->SampleTimeOffset,&(this->Bone).BoneName,&this->SampleRole,
               -(this->PermutationTimeType != UseSampleTime) & UseSampleToPermutationTime);
  }
  return;
}

// BP_GetWorldVelocity @ 14a8e79c0

TVector<double> * __thiscall
UPoseSearchFeatureChannel_Velocity::BP_GetWorldVelocity
          (UPoseSearchFeatureChannel_Velocity *this,TVector<double> *__return_storage_ptr__,
          UAnimInstance *param_1)

{
  UFunction *pUVar1;
  UAnimInstance *local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_10 = 0.0;
  local_20 = 0.0;
  dStack_18 = 0.0;
  local_28 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// BuildQuery @ 14a8ea5e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchFeatureChannel_Velocity::BuildQuery
          (UPoseSearchFeatureChannel_Velocity *this,FSearchContext *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  bool bVar8;
  uint uVar9;
  FChooserEvaluationContext *pFVar10;
  UClass *pUVar11;
  UFunction *pUVar12;
  TVector<double> *pTVar13;
  TArrayView<float,int> *pTVar14;
  UPoseSearchFeatureChannel *pUVar15;
  TArrayView<float,int> *pTVar16;
  EComponentStrippingVector EVar17;
  UObject *pUVar18;
  uint uVar19;
  int iVar20;
  TVector<double>_u_0 *pTVar21;
  TArrayView<float_const_,int> local_188;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  UObject *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TArrayView<float,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TVector<double>_u_0 local_c8;
  TArrayView<float,int> local_b0;
  TArrayView<float,int> local_a0;
  TArrayView<float,int> local_90;
  TArrayView<float,int> local_80;
  TArrayView<float,int> local_70;
  TVector<double> local_60;
  TVector<double> local_48 [2];
  
  pFVar1 = &this->SampleRole;
  if (this->bUseBlueprintQueryOverride == false) {
    if (param_1->bUseCachedChannelData != false) {
      FVar2 = *pFVar1;
      uVar19 = *(uint *)(this->_padding_ + 0xc);
      uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      FVar3 = this->OriginRole;
      uVar19 = uVar19 * 0x40 + FVar2.Number + (uVar19 >> 2) + uVar9 + 0x9e3779b9 ^ uVar19;
      uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar19 = uVar19 * 0x40 + FVar3.Number + (uVar19 >> 2) + uVar9 + 0x9e3779b9 ^ uVar19;
      uVar19 = this->SamplingAttributeId + -0x61c88647 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = uVar19 * 0x40 + (int)this->SampleTimeOffset + (uVar19 >> 2) + 0x9e3779b9 ^ uVar19;
      uVar19 = uVar19 * 0x40 + (int)this->OriginTimeOffset + (uVar19 >> 2) + 0x9e3779b9 ^ uVar19;
      uVar19 = this->SchemaBoneIdx + -0x61c88647 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->SchemaOriginBoneIdx + -0x61c88647 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->InputQueryPose + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      local_188.DataPtr = (float *)0x0;
      local_188.ArrayNum = 0;
      uVar19 = this->bUseCharacterSpaceVelocities + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^
               uVar19;
      uVar19 = this->bNormalize + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->ComponentStripping + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      pUVar15 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                          (param_1,this->PermutationTimeType + 0x9e3779b9 +
                                   uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19,
                           (UPoseSearchFeatureChannel *)this,&local_188);
      if (pUVar15 != (UPoseSearchFeatureChannel *)0x0) {
        pUVar11 = StaticClass();
        iVar20 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar11->_padding_)) {
          pUVar15 = (UPoseSearchFeatureChannel *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedVelocityChannel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                             ,0x5e,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((pUVar15->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->GetChannelCardinality() == ChannelCardinality"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x5f,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_188.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedChannelData.Num() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x60,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar15[1]._padding_ + 4) != *pFVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->SampleRole == SampleRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,99,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar15[1]._padding_ + 4) != this->OriginRole) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->OriginRole == OriginRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,100,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)((longlong)&pUVar15[1]._padding_ + 4) != this->SamplingAttributeId) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->SamplingAttributeId == SamplingAttributeId",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x65,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->SampleTimeOffset != (float)pUVar15[1].ChannelDataOffset) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->SampleTimeOffset == SampleTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x66,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->OriginTimeOffset != (float)pUVar15[1].ChannelCardinality) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->OriginTimeOffset == OriginTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x67,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((char)pUVar15[2]._padding_ != this->SchemaBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->SchemaBoneIdx == SchemaBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x68,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar15[2]._padding_ + 1) != this->SchemaOriginBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->SchemaOriginBoneIdx == SchemaOriginBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x69,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EInputQueryPose *)((longlong)&pUVar15[2]._padding_ + 2) != this->InputQueryPose) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->InputQueryPose == InputQueryPose",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x6a,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((bool)*(char *)((longlong)&pUVar15[2]._padding_ + 3) !=
             this->bUseCharacterSpaceVelocities) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->bUseCharacterSpaceVelocities == bUseCharacterSpaceVelocities"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x6b,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((bool)*(char *)((longlong)&pUVar15[2]._padding_ + 4) != this->bNormalize) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->bNormalize == bNormalize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x6c,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EComponentStrippingVector *)((longlong)&pUVar15[2]._padding_ + 5) !=
             this->ComponentStripping) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->ComponentStripping == ComponentStripping",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x6d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EPermutationTimeType *)((longlong)&pUVar15[2]._padding_ + 6) !=
             this->PermutationTimeType) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedVelocityChannel->PermutationTimeType == PermutationTimeType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Velocity.cpp"
                               ,0x6e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar7 = local_188.DataPtr;
        uVar5._4_4_ = local_188._12_4_;
        uVar5._0_4_ = local_188.ArrayNum;
        iVar20 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar16 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_a0);
        local_118.DataPtr = pfVar7;
        local_118._8_8_ = uVar5;
        pTVar16 = TArrayView<float,int>::Slice
                            (pTVar16,&local_90,(int)this->_padding_,
                             *(int *)((longlong)&this->_padding_ + 4));
        local_108.DataPtr = pTVar16->DataPtr;
        local_108.ArrayNum = pTVar16->ArrayNum;
        local_108._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
        UE::PoseSearch::FFeatureVectorHelper::Copy(&local_108,0,iVar20,&local_118);
        return;
      }
    }
    bVar8 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
    if (((this->InputQueryPose != UseCharacterPose) && (bVar8)) && (*pFVar1 == this->OriginRole)) {
      local_f8.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
      local_f8.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
      local_f8._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
      iVar20 = *(int *)((longlong)&this->_padding_ + 4);
      lVar6 = this->_padding_;
      pTVar16 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_80);
      local_e8.DataPtr = pTVar16->DataPtr;
      local_e8.ArrayNum = pTVar16->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_e8,(int)lVar6,iVar20,&local_f8);
      return;
    }
    UE::PoseSearch::FSearchContext::GetSampleVelocity
              (param_1,(TVector<double> *)&local_160._s_0,this->SampleTimeOffset,
               this->OriginTimeOffset,this->SchemaBoneIdx,this->SchemaOriginBoneIdx,pFVar1,
               &this->OriginRole,this->bUseCharacterSpaceVelocities,this->PermutationTimeType,
               (TVector<double> *)0x0);
    if (this->bNormalize != false) {
      pTVar13 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_160._s_0,local_48,__real_3ff0000000000000);
      local_160._s_0.X = (pTVar13->field0_0x0)._s_0.X;
      local_160._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
      local_160._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
    }
    EVar17 = this->ComponentStripping;
    iVar20 = (int)this->_padding_;
    pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_70);
    pTVar21 = &local_160;
    pTVar16 = &local_d8;
    local_d8.DataPtr = pTVar14->DataPtr;
    local_d8.ArrayNum = pTVar14->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    goto LAB_14a8eae4f;
  }
  pFVar10 = UE::PoseSearch::FSearchContext::GetContext(param_1,pFVar1);
  if ((pFVar10->ObjectParams).ArrayNum < 1) {
LAB_14a8ea6b6:
    pUVar18 = (UObject *)0x0;
  }
  else {
    if (((pFVar10->ObjectParams).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pUVar18 = *(UObject **)(pFVar10->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar18 == (UObject *)0x0) goto LAB_14a8ea6b6;
      UE::GC::MarkAsReachable(pUVar18);
    }
    if (pUVar18 == (UObject *)0x0) goto LAB_14a8ea6b6;
    pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar20 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar11->_padding_)) goto LAB_14a8ea6b6;
  }
  if (pUVar18 == (UObject *)0x0) {
    if ((byte)LogPoseSearch._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  local_130 = 0.0;
  local_140 = 0.0;
  dStack_138 = 0.0;
  local_148 = pUVar18;
  pUVar12 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPoseSearchFeatureChannel_Velocity_BP_GetWorldVelocity);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar12,&local_148);
  local_c8._s_0.X = local_140;
  local_c8._s_0.Y = dStack_138;
  local_c8._s_0.Z = local_130;
  UE::PoseSearch::FSearchContext::GetSampleVelocity
            (param_1,(TVector<double> *)&local_178._s_0,this->SampleTimeOffset,
             this->OriginTimeOffset,this->SchemaBoneIdx,this->SchemaOriginBoneIdx,pFVar1,
             &this->OriginRole,this->bUseCharacterSpaceVelocities,UseSampleTime,
             (TVector<double> *)&local_c8._s_0);
  if (this->bNormalize != false) {
    pTVar13 = UE::Math::TVector<double>::GetClampedToMaxSize
                        ((TVector<double> *)&local_178._s_0,&local_60,__real_3ff0000000000000);
    local_178._s_0.X = (pTVar13->field0_0x0)._s_0.X;
    local_178._s_0.Y = (pTVar13->field0_0x0)._s_0.Y;
    local_178._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
  }
  EVar17 = this->ComponentStripping;
  iVar20 = (int)this->_padding_;
  pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_b0);
  pTVar21 = &local_178;
  pTVar16 = &local_128;
  local_128.DataPtr = pTVar14->DataPtr;
  local_128.ArrayNum = pTVar14->ArrayNum;
  local_128._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
LAB_14a8eae4f:
  UE::PoseSearch::FFeatureVectorHelper::EncodeVector
            (pTVar16,iVar20,(TVector<double> *)&pTVar21->_s_0,EVar17,false);
  return;
}

// DebugDraw @ 14a8f2780

void __thiscall
UPoseSearchFeatureChannel_Velocity::DebugDraw
          (UPoseSearchFeatureChannel_Velocity *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TQuat<double> *this_00;
  EPermutationTimeType EVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  FColor local_138 [2];
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [2];
  
  bVar2 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (!bVar2) {
    return;
  }
  FLinearColor::ToFColorSRGB(&FLinearColor::Green);
  if (this->bNormalize == false) {
    uVar5 = (undefined4)__real_3fb47ae140000000;
    uVar6 = (undefined4)((ulonglong)__real_3fb47ae140000000 >> 0x20);
  }
  else {
    uVar5 = (undefined4)__real_402e000000000000;
    uVar6 = (undefined4)((ulonglong)__real_402e000000000000 >> 0x20);
  }
  local_e8.DataPtr = param_2->DataPtr;
  local_e8.ArrayNum = param_2->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar4 = UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime(param_1,&local_e8);
  EVar3 = this->PermutationTimeType;
  if (EVar3 != UseSampleTime) {
    if ((EVar3 == UsePermutationTime) || (EVar3 == UseSampleToPermutationTime)) goto LAB_14a8f286d;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0xad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = 0.0;
LAB_14a8f286d:
  local_d8.DataPtr = param_2->DataPtr;
  local_d8.ArrayNum = param_2->ArrayNum;
  local_d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  EVar3 = UseSampleTime;
  if (this->PermutationTimeType == UsePermutationTime) {
    EVar3 = UseSampleToPermutationTime;
  }
  UE::PoseSearch::FFeatureVectorHelper::DecodeVector
            ((TVector<double> *)&local_a8._s_0,&local_d8,(int)this->_padding_,
             this->ComponentStripping);
  local_c8.DataPtr = param_2->DataPtr;
  local_c8.ArrayNum = param_2->ArrayNum;
  local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this_00 = UE::PoseSearch::FDebugDrawParams::ExtractRotation
                      (param_1,local_68,&local_c8,this->SampleTimeOffset,'\0',&this->SampleRole,
                       EVar3,this->SamplingAttributeId,fVar4);
  local_88._s_0.X = local_a8._s_0.X;
  local_88._s_0.Y = local_a8._s_0.Y;
  local_88._s_0.Z = local_a8._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_88._s_0);
  local_b8.DataPtr = param_2->DataPtr;
  local_b8.ArrayNum = param_2->ArrayNum;
  local_b8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::PoseSearch::FDebugDrawParams::ExtractPosition
            (param_1,(TVector<double> *)&local_130._s_0,&local_b8,this->SampleTimeOffset,
             this->SchemaBoneIdx,&this->SampleRole,EVar3,this->SamplingAttributeId,fVar4);
  local_100._s_0.X = local_118._s_0.X * (double)CONCAT44(uVar6,uVar5) + local_130._s_0.X;
  local_100._s_0.Y = local_118._s_0.Y * (double)CONCAT44(uVar6,uVar5) + local_130._s_0.Y;
  local_100._s_0.Z = local_118._s_0.Z * (double)CONCAT44(uVar6,uVar5) + local_130._s_0.Z;
  UE::PoseSearch::FDebugDrawParams::DrawLine
            (param_1,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_100._s_0,local_138
             ,0.0);
  return;
}

// Finalize @ 14a8f7ac0

bool __thiscall
UPoseSearchFeatureChannel_Velocity::Finalize
          (UPoseSearchFeatureChannel_Velocity *this,UPoseSearchSchema *param_1)

{
  schar sVar1;
  int iVar2;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  iVar2 = UE::PoseSearch::FFeatureVectorHelper::GetVectorCardinality(this->ComponentStripping);
  *(int *)((longlong)&this->_padding_ + 4) = iVar2;
  param_1->SchemaCardinality = param_1->SchemaCardinality + iVar2;
  sVar1 = UPoseSearchSchema::AddBoneReference
                    (param_1,&this->Bone,&this->SampleRole,this->bDefaultWithRootBone);
  this->SchemaBoneIdx = sVar1;
  sVar1 = UPoseSearchSchema::AddBoneReference
                    (param_1,&this->OriginBone,&this->OriginRole,this->bDefaultWithRootBone);
  this->SchemaOriginBoneIdx = sVar1;
  if ((this->SchemaBoneIdx != -2) && (sVar1 != -2)) {
    return true;
  }
  return false;
}

// GetPermutationTimeType @ 14a8fb370

EPermutationTimeType __thiscall
UPoseSearchFeatureChannel_Velocity::GetPermutationTimeType(UPoseSearchFeatureChannel_Velocity *this)

{
  return this->PermutationTimeType;
}

// GetPrivateStaticClass @ 14a8fcc30

UClass * __cdecl UPoseSearchFeatureChannel_Velocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Velocity",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Velocity,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Velocity>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Velocity>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Velocity.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Velocity @ 14a908e40

void __cdecl
UPoseSearchFeatureChannel_Velocity::StaticRegisterNativesUPoseSearchFeatureChannel_Velocity(void)

{
  return;
}

