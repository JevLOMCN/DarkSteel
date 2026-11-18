// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 14

// StaticClass @ 14a8d6370

UClass * __cdecl UPoseSearchFeatureChannel_Heading::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Heading",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Heading,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Heading>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Heading>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton;
}

// UPoseSearchFeatureChannel_Heading @ 14a8e1b70

UPoseSearchFeatureChannel_Heading * __thiscall
UPoseSearchFeatureChannel_Heading::UPoseSearchFeatureChannel_Heading
          (UPoseSearchFeatureChannel_Heading *this,FVTableHelper *param_1)

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
  this->HeadingAxis = X;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_Heading @ 14a8e1c10

UPoseSearchFeatureChannel_Heading * __thiscall
UPoseSearchFeatureChannel_Heading::UPoseSearchFeatureChannel_Heading
          (UPoseSearchFeatureChannel_Heading *this)

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
  this->SamplingAttributeId = -1;
  this->SampleTimeOffset = 0.0;
  this->OriginTimeOffset = 0.0;
  this->HeadingAxis = X;
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->bUseBlueprintQueryOverride = false;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a8e1ce5;
  }
  lVar6 = 0;
LAB_14a8e1ce5:
  this->bUseBlueprintQueryOverride = lVar6 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_Heading @ 14a8e2e40

void __thiscall
UPoseSearchFeatureChannel_Heading::~UPoseSearchFeatureChannel_Heading
          (UPoseSearchFeatureChannel_Heading *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e63e0

void __thiscall
UPoseSearchFeatureChannel_Heading::AddDependentChannels
          (UPoseSearchFeatureChannel_Heading *this,UPoseSearchSchema *param_1)

{
  EPermutationTimeType EVar1;
  
  if (param_1->bInjectAdditionalDebugChannels != false) {
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,this->SampleTimeOffset,&(this->Bone).BoneName,&this->SampleRole,
               -(this->PermutationTimeType != UseSampleTime) & UseSampleToPermutationTime);
    EVar1 = UseSampleTime;
    if (this->PermutationTimeType == UsePermutationTime) {
      EVar1 = UseSampleToPermutationTime;
    }
    FindOrAddToSchema(param_1,this->OriginTimeOffset,&(this->Bone).BoneName,&this->OriginRole,X,
                      EVar1);
    FindOrAddToSchema(param_1,this->OriginTimeOffset,&(this->Bone).BoneName,&this->OriginRole,Y,
                      EVar1);
  }
  return;
}

// BP_GetWorldRotation @ 14a8e7940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
UPoseSearchFeatureChannel_Heading::BP_GetWorldRotation
          (UPoseSearchFeatureChannel_Heading *this,TQuat<double> *__return_storage_ptr__,
          UAnimInstance *param_1)

{
  UFunction *pUVar1;
  UAnimInstance *local_38 [2];
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = 0.0;
  dStack_20 = 0.0;
  local_18 = ___xmm_3ff00000000000000000000000000000;
  dStack_10 = _UNK_15061cbc8;
  local_38[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_38);
  __return_storage_ptr__->X = local_28;
  __return_storage_ptr__->Y = dStack_20;
  __return_storage_ptr__->Z = local_18;
  __return_storage_ptr__->W = dStack_10;
  return __return_storage_ptr__;
}

// BuildQuery @ 14a8e8ed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchFeatureChannel_Heading::BuildQuery
          (UPoseSearchFeatureChannel_Heading *this,FSearchContext *param_1)

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
  uchar auVar17 [8];
  EComponentStrippingVector EVar18;
  uint uVar19;
  int iVar20;
  TArrayView<float_const_,int> local_1a8;
  TArrayView<float,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<float,int> local_158;
  TArrayView<float,int> local_148;
  uchar local_138 [2] [8];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TQuat<double> local_108;
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TQuat<double> local_98;
  TQuat<double> local_78;
  TVector<double> local_58;
  TVector<double> local_40;
  
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
      uVar19 = this->HeadingAxis + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->SchemaBoneIdx + -0x61c88647 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->SchemaOriginBoneIdx + -0x61c88647 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      local_1a8.DataPtr = (float *)0x0;
      local_1a8.ArrayNum = 0;
      uVar19 = this->InputQueryPose + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->ComponentStripping + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      pUVar15 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                          (param_1,this->PermutationTimeType + 0x9e3779b9 +
                                   uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19,
                           (UPoseSearchFeatureChannel *)this,&local_1a8);
      if (pUVar15 != (UPoseSearchFeatureChannel *)0x0) {
        pUVar11 = StaticClass();
        iVar20 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar11->_padding_)) {
          pUVar15 = (UPoseSearchFeatureChannel *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedHeadingChannel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                             ,0x93,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((pUVar15->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->GetChannelCardinality() == ChannelCardinality"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x94,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_1a8.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedChannelData.Num() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x95,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar15[1]._padding_ + 4) != *pFVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->SampleRole == SampleRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x98,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar15[1]._padding_ + 4) != this->OriginRole) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->OriginRole == OriginRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x99,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)((longlong)&pUVar15[1]._padding_ + 4) != this->SamplingAttributeId) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->SamplingAttributeId == SamplingAttributeId",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9a,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->SampleTimeOffset != (float)pUVar15[1].ChannelDataOffset) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->SampleTimeOffset == SampleTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9b,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->OriginTimeOffset != (float)pUVar15[1].ChannelCardinality) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->OriginTimeOffset == OriginTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9c,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((EHeadingAxis)pUVar15[2]._padding_ != this->HeadingAxis) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->HeadingAxis == HeadingAxis",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar15[2]._padding_ + 1) != this->SchemaBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->SchemaBoneIdx == SchemaBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar15[2]._padding_ + 2) != this->SchemaOriginBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->SchemaOriginBoneIdx == SchemaOriginBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0x9f,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EInputQueryPose *)((longlong)&pUVar15[2]._padding_ + 3) != this->InputQueryPose) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->InputQueryPose == InputQueryPose",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0xa0,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EComponentStrippingVector *)((longlong)&pUVar15[2]._padding_ + 4) !=
             this->ComponentStripping) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->ComponentStripping == ComponentStripping",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0xa1,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EPermutationTimeType *)((longlong)&pUVar15[2]._padding_ + 5) !=
             this->PermutationTimeType) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedHeadingChannel->PermutationTimeType == PermutationTimeType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                               ,0xa2,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar7 = local_1a8.DataPtr;
        uVar5._4_4_ = local_1a8._12_4_;
        uVar5._0_4_ = local_1a8.ArrayNum;
        iVar20 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar16 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_d8);
        local_188.DataPtr = pfVar7;
        local_188._8_8_ = uVar5;
        pTVar16 = TArrayView<float,int>::Slice
                            (pTVar16,&local_c8,(int)this->_padding_,
                             *(int *)((longlong)&this->_padding_ + 4));
        local_178.DataPtr = pTVar16->DataPtr;
        local_178.ArrayNum = pTVar16->ArrayNum;
        local_178._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
        UE::PoseSearch::FFeatureVectorHelper::Copy(&local_178,0,iVar20,&local_188);
        return;
      }
    }
    bVar8 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
    if (((this->InputQueryPose != UseCharacterPose) && (bVar8)) && (*pFVar1 == this->OriginRole)) {
      local_168.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
      local_168.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
      local_168._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
      iVar20 = *(int *)((longlong)&this->_padding_ + 4);
      lVar6 = this->_padding_;
      pTVar16 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_b8);
      local_158.DataPtr = pTVar16->DataPtr;
      local_158.ArrayNum = pTVar16->ArrayNum;
      local_158._12_4_ = *(undefined4 *)&pTVar16->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_158,(int)lVar6,iVar20,&local_168);
      return;
    }
    UE::PoseSearch::FSearchContext::GetSampleRotation
              (param_1,&local_78,this->SampleTimeOffset,this->OriginTimeOffset,this->SchemaBoneIdx,
               this->SchemaOriginBoneIdx,pFVar1,&this->OriginRole,this->PermutationTimeType,
               (TQuat<double> *)0x0);
    EVar18 = this->ComponentStripping;
    pTVar13 = GetAxis(this,&local_40,&local_78);
    iVar20 = (int)this->_padding_;
    pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_a8);
    pTVar16 = &local_148;
    local_148.DataPtr = pTVar14->DataPtr;
    local_148.ArrayNum = pTVar14->ArrayNum;
    local_148._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
    goto LAB_14a8e9690;
  }
  pFVar10 = UE::PoseSearch::FSearchContext::GetContext(param_1,pFVar1);
  if ((pFVar10->ObjectParams).ArrayNum < 1) {
LAB_14a8e8fab:
    auVar17[0] = '\0';
    auVar17[1] = '\0';
    auVar17[2] = '\0';
    auVar17[3] = '\0';
    auVar17[4] = '\0';
    auVar17[5] = '\0';
    auVar17[6] = '\0';
    auVar17[7] = '\0';
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
    auVar17 = *&(pFVar10->ObjectParams).AllocatorInstance.InlineData[0].Pad;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (auVar17 == (uchar  [8])0x0) goto LAB_14a8e8fab;
      UE::GC::MarkAsReachable((UObject *)auVar17);
    }
    if (auVar17 == (uchar  [8])0x0) goto LAB_14a8e8fab;
    pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar20 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)((longlong)auVar17 + 0x10) + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)auVar17 + 0x10) + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar11->_padding_)) goto LAB_14a8e8fab;
  }
  if (auVar17 == (uchar  [8])0x0) {
    if ((byte)LogPoseSearch._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  dStack_110 = _UNK_15061cbc8;
  local_138[0] = auVar17;
  pUVar12 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPoseSearchFeatureChannel_Heading_BP_GetWorldRotation);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar12,local_138);
  local_108.X = local_128;
  local_108.Y = dStack_120;
  local_108.Z = local_118;
  local_108.W = dStack_110;
  UE::PoseSearch::FSearchContext::GetSampleRotation
            (param_1,&local_98,this->SampleTimeOffset,this->OriginTimeOffset,this->SchemaBoneIdx,
             this->SchemaOriginBoneIdx,pFVar1,&this->OriginRole,UseSampleTime,&local_108);
  EVar18 = this->ComponentStripping;
  pTVar13 = GetAxis(this,&local_58,&local_98);
  iVar20 = (int)this->_padding_;
  pTVar14 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_e8);
  pTVar16 = &local_198;
  local_198.DataPtr = pTVar14->DataPtr;
  local_198.ArrayNum = pTVar14->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
LAB_14a8e9690:
  UE::PoseSearch::FFeatureVectorHelper::EncodeVector(pTVar16,iVar20,pTVar13,EVar18,true);
  return;
}

// DebugDraw @ 14a8f0fd0

void __thiscall
UPoseSearchFeatureChannel_Heading::DebugDraw
          (UPoseSearchFeatureChannel_Heading *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  EPermutationTimeType EVar1;
  code *pcVar2;
  bool bVar3;
  TQuat<double> *this_00;
  EPermutationTimeType EVar4;
  float fVar5;
  float fVar6;
  FColor local_res20 [2];
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  TQuat<double> local_78 [3];
  
  bVar3 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (!bVar3) {
    return;
  }
  FLinearColor::ToFColorSRGB(&FLinearColor::White);
  local_f8.DataPtr = param_2->DataPtr;
  local_f8.ArrayNum = param_2->ArrayNum;
  local_f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  fVar5 = UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime(param_1,&local_f8);
  EVar1 = this->PermutationTimeType;
  if (EVar1 == UseSampleTime) {
LAB_14a8f10a3:
    fVar5 = 0.0;
  }
  else {
    fVar6 = fVar5;
    if (EVar1 == UsePermutationTime) goto LAB_14a8f10a9;
    if (EVar1 != UseSampleToPermutationTime) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0xad,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14a8f10a3;
    }
  }
  fVar6 = 0.0;
LAB_14a8f10a9:
  local_e8.DataPtr = param_2->DataPtr;
  local_e8.ArrayNum = param_2->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  EVar1 = this->PermutationTimeType;
  UE::PoseSearch::FFeatureVectorHelper::DecodeVector
            ((TVector<double> *)&local_b8._s_0,&local_e8,(int)this->_padding_,
             this->ComponentStripping);
  local_d8.DataPtr = param_2->DataPtr;
  local_d8.ArrayNum = param_2->ArrayNum;
  local_d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  EVar4 = UseSampleTime;
  if (EVar1 == UsePermutationTime) {
    EVar4 = UseSampleToPermutationTime;
  }
  this_00 = UE::PoseSearch::FDebugDrawParams::ExtractRotation
                      (param_1,local_78,&local_d8,this->OriginTimeOffset,this->SchemaOriginBoneIdx,
                       &this->OriginRole,EVar4,-1,fVar6);
  local_98._s_0.X = local_b8._s_0.X;
  local_98._s_0.Y = local_b8._s_0.Y;
  local_98._s_0.Z = local_b8._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_98._s_0);
  local_c8.DataPtr = param_2->DataPtr;
  local_c8.ArrayNum = param_2->ArrayNum;
  local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::PoseSearch::FDebugDrawParams::ExtractPosition
            (param_1,(TVector<double> *)&local_160._s_0,&local_c8,this->SampleTimeOffset,
             this->SchemaBoneIdx,&this->SampleRole,
             -(EVar1 != UseSampleTime) & UseSampleToPermutationTime,this->SamplingAttributeId,fVar5)
  ;
  UE::PoseSearch::FDebugDrawParams::DrawPoint
            (param_1,(TVector<double> *)&local_160._s_0,local_res20,__real_40400000);
  local_130._s_0.X = local_148._s_0.X * __real_402e000000000000 + local_160._s_0.X;
  local_130._s_0.Z = local_148._s_0.Z * __real_402e000000000000 + local_160._s_0.Z;
  local_130._s_0.Y = local_148._s_0.Y * __real_402e000000000000 + local_160._s_0.Y;
  local_118._s_0.X = local_148._s_0.X * __real_4010000000000000 + local_160._s_0.X;
  local_118._s_0.Y = local_148._s_0.Y * __real_4010000000000000 + local_160._s_0.Y;
  local_118._s_0.Z = local_148._s_0.Z * __real_4010000000000000 + local_160._s_0.Z;
  UE::PoseSearch::FDebugDrawParams::DrawLine
            (param_1,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_130._s_0,
             local_res20,0.0);
  return;
}

// Finalize @ 14a8f69e0

bool __thiscall
UPoseSearchFeatureChannel_Heading::Finalize
          (UPoseSearchFeatureChannel_Heading *this,UPoseSearchSchema *param_1)

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

// FindOrAddToSchema @ 14a8f7ea0

void __cdecl
UPoseSearchFeatureChannel_Heading::FindOrAddToSchema
          (UPoseSearchSchema *param_1,float param_2,FName *param_3,FName *param_4,
          EHeadingAxis param_5,EPermutationTimeType param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPoseSearchFeatureChannel *pUVar5;
  UPoseSearchFeatureChannel_Heading *pUVar6;
  undefined4 uStack_9c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_98;
  float local_88;
  undefined4 uStack_84;
  FName *pFStack_80;
  FName local_78;
  EHeadingAxis EStack_70;
  EPermutationTimeType EStack_6f;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined4 local_64;
  FName local_58;
  undefined4 local_4e;
  undefined2 local_4a;
  <lambda_1> local_48;
  
  local_78 = *param_4;
  iVar1 = (param_1->FinalizedChannels).ArrayNum;
  uStack_84 = local_64;
  EStack_70 = param_5;
  EStack_6f = param_6;
  uStack_6e = local_4e;
  uStack_6a = local_4a;
  pFVar2 = (param_1->FinalizedChannels).AllocatorInstance.Data;
  local_88 = param_2;
  pFStack_80 = param_3;
  local_58 = local_78;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48._4_4_ = uStack_84;
  local_48.SampleTimeOffset = local_88;
  local_48.PermutationTimeType = EStack_6f;
  local_48.HeadingAxis = EStack_70;
  local_48._26_4_ = uStack_6e;
  local_48._30_2_ = uStack_6a;
  local_48.BoneName = pFStack_80;
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar1;
  local_48.Role = local_78;
  local_98.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar2;
  pUVar5 = UPoseSearchSchema::
           FindChannelRecursive<_UPoseSearchFeatureChannel_Heading::FindOrAddToSchema_::__l3::<lambda_1>_>
                     (&local_98,&local_48);
  if (pUVar5 == (UPoseSearchFeatureChannel *)0x0) {
    pUVar6 = NewObject<UPoseSearchFeatureChannel_Heading>
                       ((UObject *)param_1,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar6->Bone).BoneName = *param_3;
    pUVar6->SampleRole = *param_4;
    pUVar6->OriginRole = *param_4;
    pUVar6->SampleTimeOffset = param_2;
    pUVar6->HeadingAxis = param_5;
    pUVar6->PermutationTimeType = param_6;
    UPoseSearchSchema::AddTemporaryChannel(param_1,(UPoseSearchFeatureChannel *)pUVar6);
  }
  return;
}

// GetAxis @ 14a8f9620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UPoseSearchFeatureChannel_Heading::GetAxis
          (UPoseSearchFeatureChannel_Heading *this,TVector<double> *__return_storage_ptr__,
          TQuat<double> *param_1)

{
  EHeadingAxis EVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 *pTVar6;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  EVar1 = this->HeadingAxis;
  if (EVar1 == X) {
    pTVar6 = &local_28;
    local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_28._s_0.Y = _UNK_150689518;
    local_28._s_0.Z = 0.0;
  }
  else if (EVar1 == Y) {
    pTVar6 = &local_48;
    local_48._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_48._s_0.Y = _UNK_15061cbc8;
    local_48._s_0.Z = 0.0;
  }
  else {
    if (EVar1 != Z) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Heading.cpp"
                         ,0x65,L"");
      uVar3 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      return __return_storage_ptr__;
    }
    pTVar6 = &local_68;
    local_68._s_0.Z = __real_3ff0000000000000;
    local_68._s_0.X = 0.0;
    local_68._s_0.Y = 0.0;
  }
  UE::Math::TQuat<double>::RotateVector
            (param_1,__return_storage_ptr__,(TVector<double> *)&pTVar6->_s_0);
  return __return_storage_ptr__;
}

// GetPermutationTimeType @ 14a8fb350

EPermutationTimeType __thiscall
UPoseSearchFeatureChannel_Heading::GetPermutationTimeType(UPoseSearchFeatureChannel_Heading *this)

{
  return this->PermutationTimeType;
}

// GetPrivateStaticClass @ 14a8fc570

UClass * __cdecl UPoseSearchFeatureChannel_Heading::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Heading",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Heading,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Heading>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Heading>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Heading.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Heading @ 14a908db0

void __cdecl
UPoseSearchFeatureChannel_Heading::StaticRegisterNativesUPoseSearchFeatureChannel_Heading(void)

{
  return;
}

