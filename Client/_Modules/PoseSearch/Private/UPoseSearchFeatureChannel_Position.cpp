// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 15

// StaticClass @ 14a8d5a50

UClass * __cdecl UPoseSearchFeatureChannel_Position::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Position",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Position,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Position>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Position>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton;
}

// UPoseSearchFeatureChannel_Position @ 14a8e2230

UPoseSearchFeatureChannel_Position * __thiscall
UPoseSearchFeatureChannel_Position::UPoseSearchFeatureChannel_Position
          (UPoseSearchFeatureChannel_Position *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->bDefaultWithRootBone = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
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
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->MaxPositionDistanceSquared = 0.0;
  this->bNormalizeDisplacement = false;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_Position @ 14a8e22e0

UPoseSearchFeatureChannel_Position * __thiscall
UPoseSearchFeatureChannel_Position::UPoseSearchFeatureChannel_Position
          (UPoseSearchFeatureChannel_Position *this)

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
  this->SchemaBoneIdx = '\0';
  this->SchemaOriginBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  this->ComponentStripping = None;
  this->PermutationTimeType = UseSampleTime;
  this->MaxPositionDistanceSquared = 0.0;
  this->bNormalizeDisplacement = false;
  this->bUseBlueprintQueryOverride = false;
  if (lVar6 != 0) {
    pUVar5 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14a8e23bb;
  }
  lVar6 = 0;
LAB_14a8e23bb:
  this->bUseBlueprintQueryOverride = lVar6 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_Position @ 14a8e2f90

void __thiscall
UPoseSearchFeatureChannel_Position::~UPoseSearchFeatureChannel_Position
          (UPoseSearchFeatureChannel_Position *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e64e0

void __thiscall
UPoseSearchFeatureChannel_Position::AddDependentChannels
          (UPoseSearchFeatureChannel_Position *this,UPoseSearchSchema *param_1)

{
  EPermutationTimeType EVar1;
  
  if ((param_1->bInjectAdditionalDebugChannels != false) &&
     (((this->SchemaOriginBoneIdx != '\0' || (this->PermutationTimeType == UsePermutationTime)) &&
      (this->bDefaultWithRootBone != false)))) {
    EVar1 = UseSampleTime;
    if (this->PermutationTimeType == UsePermutationTime) {
      EVar1 = UseSampleToPermutationTime;
    }
    FindOrAddToSchema(param_1,0.0,&(this->OriginBone).BoneName,&this->OriginRole,EVar1);
  }
  return;
}

// BP_GetWorldPosition @ 14a8e78d0

TVector<double> * __thiscall
UPoseSearchFeatureChannel_Position::BP_GetWorldPosition
          (UPoseSearchFeatureChannel_Position *this,TVector<double> *__return_storage_ptr__,
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
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_18;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_10;
  return __return_storage_ptr__;
}

// BuildQuery @ 14a8e9a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchFeatureChannel_Position::BuildQuery
          (UPoseSearchFeatureChannel_Position *this,FSearchContext *param_1)

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
  TArrayView<float,int> *pTVar13;
  UPoseSearchFeatureChannel *pUVar14;
  TArrayView<float,int> *pTVar15;
  TVector<double> *pTVar16;
  EComponentStrippingVector EVar17;
  UObject *pUVar18;
  uint uVar19;
  int iVar20;
  TVector<double>_u_0 *pTVar21;
  TArrayView<float_const_,int> local_178;
  TVector<double>_u_0 local_168;
  UObject *local_150;
  double local_148;
  double dStack_140;
  double local_138;
  TArrayView<float,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
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
      local_178.DataPtr = (float *)0x0;
      local_178.ArrayNum = 0;
      uVar19 = this->ComponentStripping + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      uVar19 = this->PermutationTimeType + 0x9e3779b9 + uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19;
      pUVar14 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                          (param_1,this->bNormalizeDisplacement + 0x9e3779b9 +
                                   uVar19 * 0x40 + (uVar19 >> 2) ^ uVar19,
                           (UPoseSearchFeatureChannel *)this,&local_178);
      if (pUVar14 != (UPoseSearchFeatureChannel *)0x0) {
        pUVar11 = StaticClass();
        iVar20 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar20) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
            &pUVar11->_padding_)) {
          pUVar14 = (UPoseSearchFeatureChannel *)0x0;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedPositionChannel",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                             ,0x96,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((pUVar14->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->GetChannelCardinality() == ChannelCardinality"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x97,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_178.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedChannelData.Num() == ChannelCardinality",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x98,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar14[1]._padding_ + 4) != *pFVar1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->SampleRole == SampleRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x9b,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(FName *)((longlong)&pUVar14[1]._padding_ + 4) != this->OriginRole) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->OriginRole == OriginRole",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x9c,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)((longlong)&pUVar14[1]._padding_ + 4) != this->SamplingAttributeId) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->SamplingAttributeId == SamplingAttributeId",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x9d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->SampleTimeOffset != (float)pUVar14[1].ChannelDataOffset) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->SampleTimeOffset == SampleTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x9e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((this->OriginTimeOffset != (float)pUVar14[1].ChannelCardinality) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->OriginTimeOffset == OriginTimeOffset",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0x9f,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((char)pUVar14[2]._padding_ != this->SchemaBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->SchemaBoneIdx == SchemaBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0xa0,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(char *)((longlong)&pUVar14[2]._padding_ + 1) != this->SchemaOriginBoneIdx) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->SchemaOriginBoneIdx == SchemaOriginBoneIdx",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0xa1,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EInputQueryPose *)((longlong)&pUVar14[2]._padding_ + 2) != this->InputQueryPose) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->InputQueryPose == InputQueryPose",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0xa2,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EComponentStrippingVector *)((longlong)&pUVar14[2]._padding_ + 3) !=
             this->ComponentStripping) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->ComponentStripping == ComponentStripping",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0xa3,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(EPermutationTimeType *)((longlong)&pUVar14[2]._padding_ + 4) !=
             this->PermutationTimeType) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CachedPositionChannel->PermutationTimeType == PermutationTimeType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                               ,0xa4,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((bool)*(char *)((longlong)&pUVar14[2]._padding_ + 4) != this->bNormalizeDisplacement)
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CachedPositionChannel->bNormalizeDisplacement == bNormalizeDisplacement"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                                  ,0xa5,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pfVar7 = local_178.DataPtr;
        uVar5._4_4_ = local_178._12_4_;
        uVar5._0_4_ = local_178.ArrayNum;
        iVar20 = *(int *)((longlong)&this->_padding_ + 4);
        pTVar15 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_88);
        local_118.DataPtr = pfVar7;
        local_118._8_8_ = uVar5;
        pTVar15 = TArrayView<float,int>::Slice
                            (pTVar15,&local_78,(int)this->_padding_,
                             *(int *)((longlong)&this->_padding_ + 4));
        local_108.DataPtr = pTVar15->DataPtr;
        local_108.ArrayNum = pTVar15->ArrayNum;
        local_108._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
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
      pTVar15 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_68);
      local_e8.DataPtr = pTVar15->DataPtr;
      local_e8.ArrayNum = pTVar15->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar15->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_e8,(int)lVar6,iVar20,&local_f8);
      return;
    }
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,(TVector<double> *)&local_168._s_0,this->SampleTimeOffset,
               this->OriginTimeOffset,this->SchemaBoneIdx,this->SchemaOriginBoneIdx,pFVar1,
               &this->OriginRole,this->PermutationTimeType,(TVector<double> *)0x0);
    if (this->bNormalizeDisplacement != false) {
      pTVar16 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)&local_168._s_0,local_48,__real_3ff0000000000000);
      local_168._s_0.X = (pTVar16->field0_0x0)._s_0.X;
      local_168._s_0.Y = (pTVar16->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (pTVar16->field0_0x0)._s_0.Z;
    }
    EVar17 = this->ComponentStripping;
    iVar20 = (int)this->_padding_;
    pTVar13 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_58);
    pTVar21 = &local_168;
    pTVar15 = &local_d8;
    local_d8.DataPtr = pTVar13->DataPtr;
    local_d8.ArrayNum = pTVar13->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    goto LAB_14a8ea1f9;
  }
  pFVar10 = UE::PoseSearch::FSearchContext::GetContext(param_1,pFVar1);
  if ((pFVar10->ObjectParams).ArrayNum < 1) {
LAB_14a8e9af6:
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
      if (pUVar18 == (UObject *)0x0) goto LAB_14a8e9af6;
      UE::GC::MarkAsReachable(pUVar18);
    }
    if (pUVar18 == (UObject *)0x0) goto LAB_14a8e9af6;
    pUVar11 = Z_Construct_UClass_UAnimInstance_NoRegister();
    iVar20 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar20) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar20 * 8) !=
        &pUVar11->_padding_)) goto LAB_14a8e9af6;
  }
  if (pUVar18 == (UObject *)0x0) {
    if ((byte)LogPoseSearch._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  local_138 = 0.0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_150 = pUVar18;
  pUVar12 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UPoseSearchFeatureChannel_Position_BP_GetWorldPosition);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar12,&local_150);
  local_c8._s_0.X = local_148;
  local_c8._s_0.Y = dStack_140;
  local_c8._s_0.Z = local_138;
  UE::PoseSearch::FSearchContext::GetSamplePosition
            (param_1,(TVector<double> *)&local_b0._s_0,this->SampleTimeOffset,this->OriginTimeOffset
             ,this->SchemaBoneIdx,this->SchemaOriginBoneIdx,pFVar1,&this->OriginRole,
             this->PermutationTimeType,(TVector<double> *)&local_c8._s_0);
  EVar17 = this->ComponentStripping;
  iVar20 = (int)this->_padding_;
  pTVar13 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_98);
  pTVar21 = &local_b0;
  pTVar15 = &local_128;
  local_128.DataPtr = pTVar13->DataPtr;
  local_128.ArrayNum = pTVar13->ArrayNum;
  local_128._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
LAB_14a8ea1f9:
  UE::PoseSearch::FFeatureVectorHelper::EncodeVector
            (pTVar15,iVar20,(TVector<double> *)&pTVar21->_s_0,EVar17,false);
  return;
}

// DebugDraw @ 14a8f18f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseSearchFeatureChannel_Position::DebugDraw
          (UPoseSearchFeatureChannel_Position *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  TQuat<double> *this_00;
  EPermutationTimeType EVar4;
  TVector<double>_u_0 *pTVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStackY_268 [32];
  FColor_u_0 local_218;
  FColor_u_0 local_214;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TArrayView<float_const_,int> local_1a8;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar3 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (!bVar3) {
    return;
  }
  FLinearColor::ToFColorSRGB(&FLinearColor::Blue);
  local_1a8.DataPtr = param_2->DataPtr;
  local_1a8.ArrayNum = param_2->ArrayNum;
  local_1a8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_218 = local_214;
  fVar6 = UE::PoseSearch::FDebugDrawParams::ExtractPermutationTime(param_1,&local_1a8);
  EVar4 = this->PermutationTimeType;
  if (EVar4 != UseSampleTime) {
    if (EVar4 == UsePermutationTime) goto LAB_14a8f19de;
    if ((EVar4 != UseSampleToPermutationTime) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0xad,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar6 = 0.0;
LAB_14a8f19de:
  local_198.DataPtr = param_2->DataPtr;
  local_198.ArrayNum = param_2->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&param_2->field_0xc;
  EVar4 = UseSampleTime;
  if (this->PermutationTimeType == UsePermutationTime) {
    EVar4 = UseSampleToPermutationTime;
  }
  UE::PoseSearch::FFeatureVectorHelper::DecodeVector
            ((TVector<double> *)&local_168._s_0,&local_198,(int)this->_padding_,
             this->ComponentStripping);
  local_188.DataPtr = param_2->DataPtr;
  local_188.ArrayNum = param_2->ArrayNum;
  local_188._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pFVar1 = &this->OriginRole;
  UE::PoseSearch::FDebugDrawParams::ExtractPosition
            (param_1,(TVector<double> *)&local_210._s_0,&local_188,this->OriginTimeOffset,
             this->SchemaOriginBoneIdx,pFVar1,EVar4,-1,fVar6);
  local_178.DataPtr = param_2->DataPtr;
  local_178.ArrayNum = param_2->ArrayNum;
  local_178._12_4_ = *(undefined4 *)&param_2->field_0xc;
  this_00 = UE::PoseSearch::FDebugDrawParams::ExtractRotation
                      (param_1,&local_128,&local_178,this->OriginTimeOffset,'\0',pFVar1,EVar4,-1,
                       fVar6);
  local_148._s_0.X = local_168._s_0.X;
  local_148._s_0.Y = local_168._s_0.Y;
  local_148._s_0.Z = local_168._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_1e0._s_0,(TVector<double> *)&local_148._s_0);
  local_1f8._s_0.X = local_210._s_0.X + local_1e0._s_0.X;
  local_1f8._s_0.Y = local_210._s_0.Y + local_1e0._s_0.Y;
  local_1f8._s_0.Z = local_210._s_0.Z + local_1e0._s_0.Z;
  if (0.0 < this->MaxPositionDistanceSquared) {
    fVar6 = SQRT(this->MaxPositionDistanceSquared);
    if (this->ComponentStripping == StripZ) {
      local_108.M[0][0] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_108.M[0][1] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_108.M[0][2] = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_108.M[2][0] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
      local_108.M[2][1] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
      local_108.M[1][0] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
      local_108.M[1][1] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      local_108.M[1][2] = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      local_108.M[3][3] = __real_3ff0000000000000;
      local_108.M[0][3] = 0.0;
      local_108.M[1][3] = 0.0;
      local_108.M[2][2] = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
      local_108.M[2][3] = 0.0;
      local_108.M[3][0] = local_1f8._s_0.X;
      local_108.M[3][1] = local_1f8._s_0.Y;
      local_108.M[3][2] = local_1f8._s_0.Z;
      UE::PoseSearch::FDebugDrawParams::DrawCircle
                (param_1,&local_108,fVar6,0x20,(FColor *)&local_218._s_0,0.0);
    }
    else {
      UE::PoseSearch::FDebugDrawParams::DrawSphere
                (param_1,(TVector<double> *)&local_1f8._s_0,fVar6,0x20,(FColor *)&local_218._s_0,0.0
                );
    }
  }
  fVar6 = __real_40c00000;
  if (this->bNormalizeDisplacement == false) {
    UE::PoseSearch::FDebugDrawParams::DrawPoint
              (param_1,(TVector<double> *)&local_1f8._s_0,(FColor *)&local_218._s_0,__real_40c00000)
    ;
    uVar7 = SUB84(local_1e0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)local_1e0._0_8_ >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((((double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2e0000000 ||
          (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2e0000000) &&
        (uVar7 = SUB84(local_1e0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar8 = (uint)((ulonglong)local_1e0._8_8_ >> 0x20) &
                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        (double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2e0000000 ||
        (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2e0000000)) &&
       (uVar7 = SUB84(local_1e0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)local_1e0._16_8_ >> 0x20) &
               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       (double)CONCAT44(uVar8,uVar7) < __real_3f1a36e2e0000000 ||
       (double)CONCAT44(uVar8,uVar7) == __real_3f1a36e2e0000000)) {
      return;
    }
    if (((this->SchemaOriginBoneIdx == '\0') &&
        ((float)((uint)this->OriginTimeOffset & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77)) &&
       ((this->SampleRole == *pFVar1 &&
        ((this->PermutationTimeType == UseSampleTime && (this->bUseBlueprintQueryOverride == false))
        )))) {
      return;
    }
    UE::PoseSearch::FDebugDrawParams::DrawPoint
              (param_1,(TVector<double> *)&local_210._s_0,(FColor *)&local_218._s_0,fVar6);
    pTVar5 = &local_1f8;
  }
  else {
    pTVar5 = &local_1c8;
    local_1c8._s_0.X = local_1e0._s_0.X * __real_4059000000000000 + local_210._s_0.X;
    local_1c8._s_0.Y = local_1e0._s_0.Y * __real_4059000000000000 + local_210._s_0.Y;
    local_1c8._s_0.Z = local_1e0._s_0.Z * __real_4059000000000000 + local_210._s_0.Z;
  }
  UE::PoseSearch::FDebugDrawParams::DrawLine
            (param_1,(TVector<double> *)&local_210._s_0,(TVector<double> *)&pTVar5->_s_0,
             (FColor *)&local_218._s_0,0.0);
  return;
}

// Finalize @ 14a8f7410

bool __thiscall
UPoseSearchFeatureChannel_Position::Finalize
          (UPoseSearchFeatureChannel_Position *this,UPoseSearchSchema *param_1)

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

// FindOrAddToSchema @ 14a8f81c0

void __cdecl
UPoseSearchFeatureChannel_Position::FindOrAddToSchema
          (UPoseSearchSchema *param_1,float param_2,FName *param_3,FName *param_4,
          EPermutationTimeType param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UPoseSearchFeatureChannel *pUVar5;
  UPoseSearchFeatureChannel_Position *pUVar6;
  undefined4 uStack_9c;
  TArrayView<TObjectPtr<UPoseSearchFeatureChannel>_const_,int> local_98;
  float local_88;
  undefined4 uStack_84;
  FName *pFStack_80;
  FName *local_78;
  EPermutationTimeType EStack_70;
  undefined4 uStack_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  undefined4 local_64;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  <lambda_1> local_48;
  
  iVar1 = (param_1->FinalizedChannels).ArrayNum;
  uStack_84 = local_64;
  uStack_6f = local_4f;
  uStack_6b = local_4b;
  uStack_69 = local_49;
  pFVar2 = (param_1->FinalizedChannels).AllocatorInstance.Data;
  EStack_70 = param_5;
  local_88 = param_2;
  pFStack_80 = param_3;
  local_78 = param_4;
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
  local_48._25_4_ = uStack_6f;
  local_48.PermutationTimeType = EStack_70;
  local_48._29_2_ = uStack_6b;
  local_48._31_1_ = uStack_69;
  local_48.BoneName = pFStack_80;
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar1;
  local_48.Role = local_78;
  local_98.DataPtr = (TObjectPtr<UPoseSearchFeatureChannel> *)pFVar2;
  pUVar5 = UPoseSearchSchema::
           FindChannelRecursive<_UPoseSearchFeatureChannel_Position::FindOrAddToSchema_::__l3::<lambda_1>_>
                     (&local_98,&local_48);
  if (pUVar5 == (UPoseSearchFeatureChannel *)0x0) {
    pUVar6 = NewObject<UPoseSearchFeatureChannel_Position>
                       ((UObject *)param_1,(FName)0x0,RF_Transient,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    (pUVar6->Bone).BoneName = *param_3;
    pUVar6->SampleRole = *param_4;
    pUVar6->OriginRole = *param_4;
    pUVar6->SampleTimeOffset = param_2;
    pUVar6->PermutationTimeType = param_5;
    UPoseSearchSchema::AddTemporaryChannel(param_1,(UPoseSearchFeatureChannel *)pUVar6);
  }
  return;
}

// GetPermutationTimeType @ 14a8fb360

EPermutationTimeType __thiscall
UPoseSearchFeatureChannel_Position::GetPermutationTimeType(UPoseSearchFeatureChannel_Position *this)

{
  return this->PermutationTimeType;
}

// GetPrivateStaticClass @ 14a8fc930

UClass * __cdecl UPoseSearchFeatureChannel_Position::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Position",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Position,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Position>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Position>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Position.InnerSingleton;
}

// IsFilterActive @ 14a901c80

bool __thiscall
UPoseSearchFeatureChannel_Position::IsFilterActive(UPoseSearchFeatureChannel_Position *this)

{
  return 0.0 < (float)(this->SampleRole).Number;
}

// IsFilterValid @ 14a9020a0

bool __thiscall
UPoseSearchFeatureChannel_Position::IsFilterValid
          (UPoseSearchFeatureChannel_Position *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  float fVar5;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  UE::PoseSearch::FFeatureVectorHelper::DecodeVector
            ((TVector<double> *)&local_48._s_0,&local_68,(int)this->_padding_,
             (this->Bone).CachedCompactPoseIndex.field_0x3);
  local_58.DataPtr = param_2->DataPtr;
  local_58.ArrayNum = param_2->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::PoseSearch::FFeatureVectorHelper::DecodeVector
            ((TVector<double> *)&local_30._s_0,&local_58,(int)this->_padding_,
             (this->Bone).CachedCompactPoseIndex.field_0x3);
  fVar5 = (float)((local_48._s_0.Y - local_30._s_0.Y) * (local_48._s_0.Y - local_30._s_0.Y) +
                  (local_48._s_0.X - local_30._s_0.X) * (local_48._s_0.X - local_30._s_0.X) +
                 (local_48._s_0.Z - local_30._s_0.Z) * (local_48._s_0.Z - local_30._s_0.Z));
  if ((float)(this->SampleRole).Number <= 0.0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxPositionDistanceSquared > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Position.cpp"
                       ,0x66,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  puVar1 = &(this->SampleRole).Number;
  return fVar5 < (float)*puVar1 || fVar5 == (float)*puVar1;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Position @ 14a908e00

void __cdecl
UPoseSearchFeatureChannel_Position::StaticRegisterNativesUPoseSearchFeatureChannel_Position(void)

{
  return;
}

