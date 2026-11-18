// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 14

// StaticClass @ 14a8d6820

UClass * __cdecl UPoseSearchFeatureChannel_Distance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Distance",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Distance,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Distance>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Distance>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton;
}

// UPoseSearchFeatureChannel_Distance @ 14a8e16b0

UPoseSearchFeatureChannel_Distance * __thiscall
UPoseSearchFeatureChannel_Distance::UPoseSearchFeatureChannel_Distance
          (UPoseSearchFeatureChannel_Distance *this,FVTableHelper *param_1)

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
  this->MaxDistance = 0.0;
  this->SamplingAttributeId = -1;
  this->SampleTimeOffset = 0.0;
  this->OriginTimeOffset = 0.0;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_Distance @ 14a8e1750

UPoseSearchFeatureChannel_Distance * __thiscall
UPoseSearchFeatureChannel_Distance::UPoseSearchFeatureChannel_Distance
          (UPoseSearchFeatureChannel_Distance *this)

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
  this->bDefaultWithRootBone = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
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
  this->MaxDistance = 0.0;
  this->SamplingAttributeId = -1;
  this->SampleTimeOffset = 0.0;
  this->OriginTimeOffset = 0.0;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a8e1821;
  }
  lVar6 = 0;
LAB_14a8e1821:
  this->bUseBlueprintQueryOverride = lVar6 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_Distance @ 14a8e2d40

void __thiscall
UPoseSearchFeatureChannel_Distance::~UPoseSearchFeatureChannel_Distance
          (UPoseSearchFeatureChannel_Distance *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e6270

void __thiscall
UPoseSearchFeatureChannel_Distance::AddDependentChannels
          (UPoseSearchFeatureChannel_Distance *this,UPoseSearchSchema *param_1)

{
  EPermutationTimeType EVar1;
  
  if ((param_1->bInjectAdditionalDebugChannels != false) &&
     (((this->SchemaOriginBoneIdx != '\0' || (this->PermutationTimeType == UsePermutationTime)) &&
      (this->bDefaultWithRootBone != false)))) {
    EVar1 = UseSampleTime;
    if (this->PermutationTimeType == UsePermutationTime) {
      EVar1 = UseSampleToPermutationTime;
    }
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->OriginBone).BoneName,&this->OriginRole,EVar1);
  }
  return;
}

// BP_GetDistance @ 14a8e77a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UPoseSearchFeatureChannel_Distance::BP_GetDistance
          (UPoseSearchFeatureChannel_Distance *this,FChooserEvaluationContext *param_1)

{
  float fVar1;
  UFunction *pUVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [136];
  float fStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._0_8_ = (UObject *)0x0;
  local_b8[8] = false;
  local_b8._80_8_ = (ForElementType<FStructView>)0x0;
  local_b8._88_4_ = 0;
  local_b8._92_4_ = 4;
  local_b8._128_4_ = 0;
  stack0xffffffffffffffcc = 4;
  FChooserEvaluationContext::operator=((FChooserEvaluationContext *)local_b8,param_1);
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_Distance_BP_GetDistance);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_b8);
  FChooserEvaluationContext::operator=(param_1,(FChooserEvaluationContext *)local_b8);
  fVar1 = fStack_30;
  if ((ForElementType<FStructView>)local_b8._80_8_ != (ForElementType<FStructView>)0x0) {
    FMemory::Free((void *)local_b8._80_8_);
  }
  return fVar1;
}

// BuildQuery @ 14a8e8050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseSearchFeatureChannel_Distance::BuildQuery
          (UPoseSearchFeatureChannel_Distance *this,FSearchContext *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  bool bVar8;
  uint uVar9;
  FChooserEvaluationContext *this_00;
  UFunction *pUVar10;
  TArrayView<float,int> *pTVar11;
  UPoseSearchFeatureChannel *pUVar12;
  UClass *pUVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auStackY_208 [32];
  TArrayView<float_const_,int> local_1b8;
  float *local_1a8;
  undefined8 uStack_1a0;
  float *local_198;
  undefined8 uStack_190;
  TVector<double>_u_0 local_188;
  TArrayView<float_const_,int> local_168;
  TArrayView<float,int> local_158;
  TArrayView<float_const_,int> local_148;
  TArrayView<float,int> local_138;
  TArrayView<float,int> local_128;
  TArrayView<float,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float,int> local_e8;
  undefined1 local_d8 [136];
  float fStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (this->bUseBlueprintQueryOverride == false) {
    if (param_1->bUseCachedChannelData != false) {
      FVar2 = this->SampleRole;
      uVar14 = *(uint *)(this->_padding_ + 0xc);
      uVar9 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      FVar3 = this->OriginRole;
      uVar14 = uVar14 * 0x40 + FVar2.Number + (uVar14 >> 2) + uVar9 + 0x9e3779b9 ^ uVar14;
      uVar9 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      uVar14 = uVar14 * 0x40 + FVar3.Number + (uVar14 >> 2) + uVar9 + 0x9e3779b9 ^ uVar14;
      uVar14 = this->SamplingAttributeId + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
      uVar14 = uVar14 * 0x40 + (int)this->SampleTimeOffset + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
      uVar14 = uVar14 * 0x40 + (int)this->OriginTimeOffset + (uVar14 >> 2) + 0x9e3779b9 ^ uVar14;
      uVar14 = this->SchemaBoneIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
      uVar14 = this->SchemaOriginBoneIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
      uVar14 = this->InputQueryPose + 0x9e3779b9 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
      local_1b8.DataPtr = (float *)0x0;
      local_1b8.ArrayNum = 0;
      pUVar12 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                          (param_1,this->PermutationTimeType + 0x9e3779b9 +
                                   uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14,
                           (UPoseSearchFeatureChannel *)this,&local_1b8);
      if (pUVar12 != (UPoseSearchFeatureChannel *)0x0) {
        pUVar13 = StaticClass();
        iVar1 = (int)pUVar13->_padding_;
        if (((*(int *)(pUVar12->_padding_ + 0x38) < iVar1) ||
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
             &pUVar13->_padding_)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x67,L""), pUVar12 = (UPoseSearchFeatureChannel *)0x0, bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pUVar12->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->GetChannelCardinality() == ChannelCardinality"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x68,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_1b8.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedChannelData.Num() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x69,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar12[1]._padding_ + 4) != this->SampleRole) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->SampleRole == SampleRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x6c,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar12[1]._padding_ + 4) != this->OriginRole) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->OriginRole == OriginRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x6d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((pUVar12[1].ChannelDataOffset != this->SamplingAttributeId) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->SamplingAttributeId == SamplingAttributeId",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x6e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->SampleTimeOffset != (float)pUVar12[1].ChannelCardinality) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->SampleTimeOffset == SampleTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x6f,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->OriginTimeOffset != *(float *)&pUVar12[2]._padding_) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->OriginTimeOffset == OriginTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x70,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar12[2]._padding_ + 4) != this->SchemaBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->SchemaBoneIdx == SchemaBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x71,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar12[2]._padding_ + 5) != this->SchemaOriginBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->SchemaOriginBoneIdx == SchemaOriginBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x72,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EInputQueryPose *)((longlong)&pUVar12[2]._padding_ + 6) != this->InputQueryPose) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->InputQueryPose == InputQueryPose",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x73,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EPermutationTimeType *)((longlong)&pUVar12[2]._padding_ + 7) !=
             this->PermutationTimeType) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedDistanceChannel->PermutationTimeType == PermutationTimeType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                               ,0x74,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar7 = local_1b8.DataPtr;
        uVar5._4_4_ = local_1b8._12_4_;
        uVar5._0_4_ = local_1b8.ArrayNum;
        iVar1 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar11 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_118);
        local_168.DataPtr = pfVar7;
        local_168._8_8_ = uVar5;
        pTVar11 = TArrayView<float,int>::Slice
                            (pTVar11,&local_108,(int)this->_padding_,
                             *(int *)((longlong)&this->_padding_ + 4));
        local_158.DataPtr = pTVar11->DataPtr;
        local_158.ArrayNum = pTVar11->ArrayNum;
        local_158._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
        UE::PoseSearch::FFeatureVectorHelper::Copy(&local_158,0,iVar1,&local_168);
        return;
      }
    }
    bVar8 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
    if (((this->InputQueryPose != UseCharacterPose) && (bVar8)) &&
       (this->SampleRole == this->OriginRole)) {
      local_148.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
      local_148.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
      local_148._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      lVar6 = this->_padding_;
      pTVar11 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_f8);
      local_138.DataPtr = pTVar11->DataPtr;
      local_138.ArrayNum = pTVar11->ArrayNum;
      local_138._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_138,(int)lVar6,iVar1,&local_148);
      return;
    }
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,(TVector<double> *)&local_188._s_0,this->SampleTimeOffset,
               this->OriginTimeOffset,this->SchemaBoneIdx,this->SchemaOriginBoneIdx,
               &this->SampleRole,&this->OriginRole,this->PermutationTimeType,(TVector<double> *)0x0)
    ;
    uVar14 = (uint)this->_padding_;
    auVar15._0_8_ = local_188._s_0.Y * local_188._s_0.Y;
    auVar15._8_8_ = 0;
    auVar16._8_8_ = 0;
    auVar16._0_8_ =
         local_188._s_0.X * local_188._s_0.X + auVar15._0_8_ + local_188._s_0.Z * local_188._s_0.Z;
    auVar16 = sqrtpd(auVar15,auVar16);
    fVar17 = (float)auVar16._0_8_;
    pTVar11 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_e8);
    iVar1 = pTVar11->ArrayNum;
    local_198 = pTVar11->DataPtr;
    uStack_190 = *(undefined8 *)&pTVar11->ArrayNum;
    if ((iVar1 < (int)uVar14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x7e,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = 0;
    if ((int)uVar14 < iVar1) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = UE::PoseSearch::FSearchContext::GetContext(param_1,&this->SampleRole);
    if (this_00 == (FChooserEvaluationContext *)0x0) {
      return;
    }
    local_d8._92_4_ = 4;
    local_d8._0_8_ = (UObject *)0x0;
    local_d8[8] = false;
    local_d8._80_8_ = (ForElementType<FStructView>)0x0;
    local_d8._88_4_ = 0;
    local_d8._128_4_ = 0;
    stack0xffffffffffffffac = 4;
    FChooserEvaluationContext::operator=((FChooserEvaluationContext *)local_d8,this_00);
    pUVar10 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_UPoseSearchFeatureChannel_Distance_BP_GetDistance);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar10,local_d8);
    FChooserEvaluationContext::operator=(this_00,(FChooserEvaluationContext *)local_d8);
    fVar17 = fStack_50;
    if ((ForElementType<FStructView>)local_d8._80_8_ != (ForElementType<FStructView>)0x0) {
      FMemory::Free((void *)local_d8._80_8_);
    }
    uVar14 = (uint)this->_padding_;
    pTVar11 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_128);
    local_1a8 = pTVar11->DataPtr;
    uStack_1a0 = *(undefined8 *)&pTVar11->ArrayNum;
    iVar1 = pTVar11->ArrayNum;
    if ((iVar1 < (int)uVar14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x7e,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar9 = 0;
    if ((int)uVar14 < iVar1) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    local_198 = local_1a8;
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       local_198 = local_1a8, bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_198[(int)uVar14] = fVar17;
  return;
}

// DebugDraw @ 14a8f06e0

void __thiscall
UPoseSearchFeatureChannel_Distance::DebugDraw
          (UPoseSearchFeatureChannel_Distance *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  float fVar1;
  EPermutationTimeType EVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  FColor local_b8 [4];
  float *local_a8;
  undefined8 uStack_a0;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  TVector<double> local_78 [3];
  
  bVar5 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (!bVar5) {
    return;
  }
  FLinearColor::ToFColorSRGB(&FLinearColor::Blue);
  local_98.DataPtr = param_2->DataPtr;
  local_98.ArrayNum = param_2->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar8 = UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime(param_1,&local_98);
  EVar2 = this->PermutationTimeType;
  if (EVar2 != UseSampleTime) {
    if (EVar2 == UsePermutationTime) goto LAB_14a8f07bc;
    if ((EVar2 != UseSampleToPermutationTime) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0xad,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar8 = 0.0;
LAB_14a8f07bc:
  local_a8 = param_2->DataPtr;
  uStack_a0 = *(undefined8 *)&param_2->ArrayNum;
  uVar3 = (uint)this->_padding_;
  EVar2 = UseSampleTime;
  if (this->PermutationTimeType == UsePermutationTime) {
    EVar2 = UseSampleToPermutationTime;
  }
  iVar6 = (int)*(undefined8 *)&param_2->ArrayNum;
  if ((iVar6 < (int)uVar3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= DataOffset + 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0;
  if ((int)uVar3 < iVar6) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_88.DataPtr = param_2->DataPtr;
  local_88.ArrayNum = param_2->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar1 = local_a8[(int)uVar3];
  UE::PoseSearch::FDebugDrawParams::ExtractPosition
            (param_1,local_78,&local_88,this->OriginTimeOffset,this->SchemaOriginBoneIdx,
             &this->OriginRole,EVar2,-1,fVar8);
  UE::PoseSearch::FDebugDrawParams::DrawSphere(param_1,local_78,fVar1,0x20,local_b8,0.0);
  return;
}

// Finalize @ 14a8f67e0

bool __thiscall
UPoseSearchFeatureChannel_Distance::Finalize
          (UPoseSearchFeatureChannel_Distance *this,UPoseSearchSchema *param_1)

{
  schar sVar1;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
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

// GetPermutationTimeType @ 14a8fb340

EPermutationTimeType __thiscall
UPoseSearchFeatureChannel_Distance::GetPermutationTimeType(UPoseSearchFeatureChannel_Distance *this)

{
  return this->PermutationTimeType;
}

// GetPrivateStaticClass @ 14a8fc270

UClass * __cdecl UPoseSearchFeatureChannel_Distance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Distance",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Distance,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Distance>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Distance>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Distance.InnerSingleton;
}

// IsFilterActive @ 14a901bd0

bool __thiscall
UPoseSearchFeatureChannel_Distance::IsFilterActive(UPoseSearchFeatureChannel_Distance *this)

{
  return 0.0 < (float)(this->Bone).BoneName.ComparisonIndex.Value;
}

// IsFilterValid @ 14a901ca0

bool __thiscall
UPoseSearchFeatureChannel_Distance::IsFilterValid
          (UPoseSearchFeatureChannel_Distance *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  pfVar3 = param_1->DataPtr;
  uVar9 = (uint)this->_padding_;
  iVar8 = (int)*(undefined8 *)&param_1->ArrayNum;
  if (iVar8 < (int)uVar9) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x84,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  uVar7 = 0;
  if ((int)uVar9 < iVar8) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  pfVar4 = param_2->DataPtr;
  uVar7 = (uint)this->_padding_;
  fVar10 = pfVar3[(int)uVar9];
  iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
  if (iVar8 < (int)uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Values.Num() >= DataOffset + 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                       ,0x84,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  uVar9 = 0;
  if ((int)uVar7 < iVar8) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  fVar1 = pfVar4[(int)uVar7];
  if ((float)(this->Bone).BoneName.ComparisonIndex.Value <= 0.0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxDistance > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Distance.cpp"
                       ,0x40,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  fVar10 = (float)((uint)(fVar10 - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  return fVar10 < (float)(this->Bone).BoneName.ComparisonIndex.Value ||
         fVar10 == (float)(this->Bone).BoneName.ComparisonIndex.Value;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Distance @ 14a908d70

void __cdecl
UPoseSearchFeatureChannel_Distance::StaticRegisterNativesUPoseSearchFeatureChannel_Distance(void)

{
  return;
}

