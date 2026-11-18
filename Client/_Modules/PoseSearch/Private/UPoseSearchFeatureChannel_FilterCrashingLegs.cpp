// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// StaticClass @ 14a8d5cf0

UClass * __cdecl UPoseSearchFeatureChannel_FilterCrashingLegs::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_FilterCrashingLegs",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.
                InnerSingleton,StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               local_res8,UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton;
}

// UPoseSearchFeatureChannel_FilterCrashingLegs @ 14a8e1850

UPoseSearchFeatureChannel_FilterCrashingLegs * __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::UPoseSearchFeatureChannel_FilterCrashingLegs
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->LeftThigh).BoneName.ComparisonIndex = 0;
  (this->LeftThigh).BoneName.Number = 0;
  puVar1 = &(this->LeftThigh).field_0x8;
  (this->LeftThigh).BoneIndex = -1;
  (this->LeftThigh).bUseSkeletonIndex = 0;
  (this->LeftThigh).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RightThigh).BoneName.ComparisonIndex = 0;
  (this->RightThigh).BoneName.Number = 0;
  puVar1 = &(this->RightThigh).field_0x8;
  (this->RightThigh).BoneIndex = -1;
  (this->RightThigh).bUseSkeletonIndex = 0;
  (this->RightThigh).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LeftFoot).BoneName.ComparisonIndex = 0;
  (this->LeftFoot).BoneName.Number = 0;
  puVar1 = &(this->LeftFoot).field_0x8;
  (this->LeftFoot).BoneIndex = -1;
  (this->LeftFoot).bUseSkeletonIndex = 0;
  (this->LeftFoot).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RightFoot).BoneName.ComparisonIndex = 0;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->RightFoot).BoneName.Number = 0;
  puVar1 = &(this->RightFoot).field_0x8;
  (this->RightFoot).BoneIndex = -1;
  (this->RightFoot).bUseSkeletonIndex = 0;
  (this->RightFoot).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar2;
  this->Weight = 0.2;
  this->InputQueryPose = UseContinuingPose;
  this->AllowedTolerance = 0.3;
  return this;
}

// UPoseSearchFeatureChannel_FilterCrashingLegs @ 14a8e1910

UPoseSearchFeatureChannel_FilterCrashingLegs * __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::UPoseSearchFeatureChannel_FilterCrashingLegs
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->LeftThigh).BoneName.ComparisonIndex = 0;
  (this->LeftThigh).BoneName.Number = 0;
  puVar1 = &(this->LeftThigh).field_0x8;
  (this->LeftThigh).BoneIndex = -1;
  (this->LeftThigh).bUseSkeletonIndex = 0;
  (this->LeftThigh).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RightThigh).BoneName.ComparisonIndex = 0;
  (this->RightThigh).BoneName.Number = 0;
  puVar1 = &(this->RightThigh).field_0x8;
  (this->RightThigh).BoneIndex = -1;
  (this->RightThigh).bUseSkeletonIndex = 0;
  (this->RightThigh).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->LeftFoot).BoneName.ComparisonIndex = 0;
  (this->LeftFoot).BoneName.Number = 0;
  puVar1 = &(this->LeftFoot).field_0x8;
  (this->LeftFoot).BoneIndex = -1;
  (this->LeftFoot).bUseSkeletonIndex = 0;
  (this->LeftFoot).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->RightFoot).BoneName.ComparisonIndex = 0;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->RightFoot).BoneName.Number = 0;
  puVar1 = &(this->RightFoot).field_0x8;
  (this->RightFoot).BoneIndex = -1;
  (this->RightFoot).bUseSkeletonIndex = 0;
  (this->RightFoot).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar2;
  this->Weight = 0.2;
  this->InputQueryPose = UseContinuingPose;
  this->AllowedTolerance = 0.3;
  return this;
}

// ~UPoseSearchFeatureChannel_FilterCrashingLegs @ 14a8e2d70

void __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::~UPoseSearchFeatureChannel_FilterCrashingLegs
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e62d0

void __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::AddDependentChannels
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,UPoseSearchSchema *param_1)

{
  if (param_1->bInjectAdditionalDebugChannels != false) {
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->LeftThigh).BoneName,&this->SampleRole,UseSampleTime);
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->RightThigh).BoneName,&this->SampleRole,UseSampleTime);
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->LeftFoot).BoneName,&this->SampleRole,UseSampleTime);
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->RightFoot).BoneName,&this->SampleRole,UseSampleTime);
  }
  return;
}

// BuildQuery @ 14a8e87c0

void __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::BuildQuery
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,FSearchContext *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  float *pfVar8;
  bool bVar9;
  uint uVar10;
  UPoseSearchFeatureChannel *pUVar11;
  UClass *pUVar12;
  TArrayView<float,int> *pTVar13;
  uint uVar14;
  float fVar15;
  undefined8 uVar16;
  TArrayView<float_const_,int> local_198;
  undefined1 local_188 [16];
  double local_178;
  float *local_168;
  undefined8 uStack_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  double local_a8;
  TVector<double> local_a0;
  TVector<double> local_88;
  TArrayView<float,int> local_70;
  TArrayView<float,int> local_60;
  TArrayView<float,int> local_50 [2];
  
  pFVar1 = &this->SampleRole;
  if (param_1->bUseCachedChannelData != false) {
    FVar3 = *pFVar1;
    uVar14 = *(uint *)(this->_padding_ + 0xc);
    uVar10 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    local_198.DataPtr = (float *)0x0;
    local_198.ArrayNum = 0;
    uVar14 = uVar14 * 0x40 + FVar3.Number + (uVar14 >> 2) + uVar10 + 0x9e3779b9 ^ uVar14;
    uVar14 = this->LeftThighIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
    uVar14 = this->RightThighIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
    uVar14 = this->LeftFootIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
    uVar14 = this->RightFootIdx + -0x61c88647 + uVar14 * 0x40 + (uVar14 >> 2) ^ uVar14;
    pUVar11 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                        (param_1,this->InputQueryPose + 0x9e3779b9 + uVar14 * 0x40 + (uVar14 >> 2) ^
                                 uVar14,(UPoseSearchFeatureChannel *)this,&local_198);
    if (pUVar11 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar12 = StaticClass();
      iVar2 = (int)pUVar12->_padding_;
      if (((*(int *)(pUVar11->_padding_ + 0x38) < iVar2) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
           &pUVar12->_padding_)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x50,L""), pUVar11 = (UPoseSearchFeatureChannel *)0x0, bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pUVar11->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->GetChannelCardinality() == ChannelCardinality"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x51,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((local_198.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedChannelData.Num() == ChannelCardinality",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x52,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((FName)pUVar11[2]._padding_ != *pFVar1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->SampleRole == SampleRole",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x55,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(char *)((longlong)&pUVar11[2]._padding_ + 4) != this->LeftThighIdx) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->LeftThighIdx == LeftThighIdx",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x56,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(char *)((longlong)&pUVar11[2]._padding_ + 5) != this->RightThighIdx) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->RightThighIdx == RightThighIdx",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x57,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(char *)((longlong)&pUVar11[2]._padding_ + 6) != this->LeftFootIdx) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->LeftFootIdx == LeftFootIdx",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x58,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(char *)((longlong)&pUVar11[2]._padding_ + 7) != this->RightFootIdx) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->RightFootIdx == RightFootIdx",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x59,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((EInputQueryPose)pUVar11[2]._padding_ != this->InputQueryPose) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedFilterCrashingLegs->InputQueryPose == InputQueryPose",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_FilterCrashingLegs.cpp"
                             ,0x5a,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pfVar8 = local_198.DataPtr;
      uVar6._4_4_ = local_198._12_4_;
      uVar6._0_4_ = local_198.ArrayNum;
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pTVar13 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_70);
      local_f8.DataPtr = pfVar8;
      local_f8._8_8_ = uVar6;
      pTVar13 = TArrayView<float,int>::Slice
                          (pTVar13,&local_60,(int)this->_padding_,
                           *(int *)((longlong)&this->_padding_ + 4));
      local_e8.DataPtr = pTVar13->DataPtr;
      local_e8.ArrayNum = pTVar13->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
      UE::PoseSearch::FFeatureVectorHelper::Copy(&local_e8,0,iVar2,&local_f8);
      return;
    }
  }
  bVar9 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
  if ((this->InputQueryPose == UseCharacterPose) || (!bVar9)) {
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,&local_88,0.0,0.0,this->RightThighIdx,'\0',pFVar1,pFVar1,UseSampleTime,
               (TVector<double> *)0x0);
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,&local_a0,0.0,0.0,this->LeftThighIdx,'\0',pFVar1,pFVar1,UseSampleTime,
               (TVector<double> *)0x0);
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,(TVector<double> *)&local_158._s_0,0.0,0.0,this->RightFootIdx,'\0',pFVar1,
               pFVar1,UseSampleTime,(TVector<double> *)0x0);
    UE::PoseSearch::FSearchContext::GetSamplePosition
              (param_1,(TVector<double> *)&local_140._s_0,0.0,0.0,this->LeftFootIdx,'\0',pFVar1,
               pFVar1,UseSampleTime,(TVector<double> *)0x0);
    ComputeThighsSideAndForward
              (&local_88,&local_a0,(TVector<double> *)&local_128._s_0,
               (TVector<double> *)&local_110._s_0);
    local_188._0_8_ = local_158._s_0.X - local_140._s_0.X;
    local_158._s_0.Y = local_158._s_0.Y - local_140._s_0.Y;
    local_178 = local_158._s_0.Z - local_140._s_0.Z;
    local_188._8_8_ = local_158._s_0.Y;
    dVar5 = local_158._s_0.Y * local_158._s_0.Y + (double)local_188._0_8_ * (double)local_188._0_8_;
    if (dVar5 == __real_3ff0000000000000) {
      uVar16 = 0.0;
      uVar6 = local_188._0_8_;
      if (local_178 == 0.0) {
        local_188._8_4_ = SUB84(local_158._s_0.Y,0);
        local_188._12_4_ = (int)((ulonglong)local_158._s_0.Y >> 0x20);
        uVar16 = local_178;
        local_a8 = local_178;
      }
    }
    else if (__real_3f1a36e2e0000000 <= dVar5) {
      uVar16 = 0.0;
      uVar6 = (double)local_188._0_8_ * (__real_3ff0000000000000 / SQRT(dVar5));
      local_158._s_0.Y = local_158._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar5));
    }
    else {
      local_a8 = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Z;
      uVar16 = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.X;
      local_158._s_0.Y = UE::Math::TVector<double>::LeftVector.field0_0x0._s_0.Y;
    }
    fVar15 = FGenericPlatformMath::Atan2
                       ((float)(local_110._s_0.Y * local_158._s_0.Y +
                                local_110._s_0.X * (double)uVar6 + local_110._s_0.Z * (double)uVar16
                               ),(float)(local_128._s_0.Y * local_158._s_0.Y +
                                         local_128._s_0.X * (double)uVar6 +
                                        local_128._s_0.Z * (double)uVar16));
    uVar14 = (uint)this->_padding_;
    fVar15 = fVar15 * __real_3ea2f983;
    pTVar13 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_b8);
    local_168 = pTVar13->DataPtr;
    uStack_160 = *(undefined8 *)&pTVar13->ArrayNum;
    iVar2 = pTVar13->ArrayNum;
    if ((iVar2 < (int)uVar14) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Values.Num() >= DataOffset + 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                           ,0x7e,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar10 = 0;
    if ((int)uVar14 < iVar2) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_168[(int)uVar14] = fVar15;
  }
  else {
    local_d8.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
    local_d8.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    lVar7 = this->_padding_;
    pTVar13 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,local_50);
    local_c8.DataPtr = pTVar13->DataPtr;
    local_c8.ArrayNum = pTVar13->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
    UE::PoseSearch::FFeatureVectorHelper::Copy(&local_c8,(int)lVar7,iVar2,&local_d8);
  }
  return;
}

// DebugDraw @ 14a8f0930

void __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::DebugDraw
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  FColor_u_0 local_res20 [2];
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  float *local_168;
  undefined8 uStack_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TVector<double> local_b8;
  TVector<double> local_a0 [5];
  
  bVar6 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                    (param_1,(UPoseSearchFeatureChannel *)this);
  if (bVar6) {
    local_168 = param_2->DataPtr;
    uStack_160 = *(undefined8 *)&param_2->ArrayNum;
    uVar9 = (uint)this->_padding_;
    iVar8 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (iVar8 < (int)uVar9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= DataOffset + 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x84,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar7 = 0;
    if ((int)uVar9 < iVar8) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = &this->SampleRole;
    local_f8.DataPtr = param_2->DataPtr;
    local_f8.ArrayNum = param_2->ArrayNum;
    local_f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    fVar18 = local_168[(int)uVar9];
    UE::PoseSearch::FDebugDrawParams::ExtractPosition
              (param_1,&local_b8,&local_f8,0.0,this->LeftThighIdx,pFVar1,UseSampleTime,-1,0.0);
    local_e8.DataPtr = param_2->DataPtr;
    local_e8.ArrayNum = param_2->ArrayNum;
    local_e8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UE::PoseSearch::FDebugDrawParams::ExtractPosition
              (param_1,local_a0,&local_e8,0.0,this->RightThighIdx,pFVar1,UseSampleTime,-1,0.0);
    local_d8.DataPtr = param_2->DataPtr;
    local_d8.ArrayNum = param_2->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UE::PoseSearch::FDebugDrawParams::ExtractPosition
              (param_1,(TVector<double> *)&local_180._s_0,&local_d8,0.0,this->LeftFootIdx,pFVar1,
               UseSampleTime,-1,0.0);
    local_c8.DataPtr = param_2->DataPtr;
    local_c8.ArrayNum = param_2->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UE::PoseSearch::FDebugDrawParams::ExtractPosition
              (param_1,(TVector<double> *)&local_198._s_0,&local_c8,0.0,this->RightFootIdx,pFVar1,
               UseSampleTime,-1,0.0);
    dVar13 = local_198._s_0.X - local_180._s_0.X;
    dVar4 = local_198._s_0.Y - local_180._s_0.Y;
    dVar3 = local_198._s_0.Z - local_180._s_0.Z;
    ComputeThighsSideAndForward
              (local_a0,&local_b8,(TVector<double> *)&local_140._s_0,
               (TVector<double> *)&local_158._s_0);
    __libm_sse2_sincosf_();
    dVar14 = (double)extraout_XMM0._4_4_;
    dVar5 = (double)extraout_XMM0._0_4_;
    fVar18 = fVar18 + fVar18;
    if (__real_3f800000 <= fVar18) {
      fVar18 = __real_3f800000;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar4 * dVar4 + dVar13 * dVar13 + dVar3 * dVar3;
    auVar11 = sqrtpd(extraout_XMM0,auVar11);
    dVar13 = (double)(float)auVar11._0_8_;
    dVar3 = (dVar5 * local_158._s_0.X + dVar14 * local_140._s_0.X) * dVar13;
    dVar4 = (dVar5 * local_158._s_0.Z + dVar14 * local_140._s_0.Z) * dVar13;
    dVar13 = (dVar5 * local_158._s_0.Y + dVar14 * local_140._s_0.Y) * dVar13;
    if (fVar18 < 0.0) {
      fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
      fVar17 = (__real_3f800000 - fVar18) + (__real_3f800000 - fVar18);
      fVar10 = (float)((uint)FColor::Orange.field0_0x0 >> 0x18) * fVar18;
      fVar12 = (float)((uint)FColor::Orange.field0_0x0 >> 0x10 & 0xff) * fVar18;
      fVar15 = (float)((uint)FColor::Orange.field0_0x0 >> 8 & 0xff) * fVar18;
      fVar16 = (float)((uint)FColor::Orange.field0_0x0 & 0xff) * fVar18;
      uVar9 = ((int)ROUND((float)((uint)FColor::Green.field0_0x0 >> 0x18) * fVar17 + __real_3f000000
                          + fVar10 + fVar10) >> 1 & 0xffU) << 8 |
              (int)ROUND((float)((uint)FColor::Green.field0_0x0 >> 0x10 & 0xff) * fVar17 +
                         __real_3f000000 + fVar12 + fVar12) >> 1 & 0xffU;
      fVar10 = (float)((uint)FColor::Green.field0_0x0 >> 8 & 0xff) * fVar17 + __real_3f000000 +
               fVar15 + fVar15;
      fVar18 = (float)((uint)FColor::Green.field0_0x0 & 0xff) * fVar17;
    }
    else {
      fVar16 = __real_3f800000 - fVar18;
      fVar18 = fVar18 + fVar18;
      fVar10 = (float)((uint)FColor::Green.field0_0x0 >> 0x18) * fVar16;
      fVar12 = (float)((uint)FColor::Green.field0_0x0 >> 0x10 & 0xff) * fVar16;
      fVar15 = (float)((uint)FColor::Green.field0_0x0 >> 8 & 0xff) * fVar16;
      fVar16 = (float)((uint)FColor::Green.field0_0x0 & 0xff) * fVar16;
      uVar9 = ((int)ROUND((float)((uint)FColor::Red.field0_0x0 >> 0x18) * fVar18 + __real_3f000000 +
                          fVar10 + fVar10) >> 1 & 0xffU) << 8 |
              (int)ROUND((float)((uint)FColor::Red.field0_0x0 >> 0x10 & 0xff) * fVar18 +
                         __real_3f000000 + fVar12 + fVar12) >> 1 & 0xffU;
      fVar10 = (float)((uint)FColor::Red.field0_0x0 >> 8 & 0xff) * fVar18 + __real_3f000000 +
               fVar15 + fVar15;
      fVar18 = (float)((uint)FColor::Red.field0_0x0 & 0xff) * fVar18;
    }
    local_128._s_0.Z = local_180._s_0.Z + dVar4;
    local_128._s_0.X = dVar3 + local_180._s_0.X;
    local_128._s_0.Y = dVar13 + local_180._s_0.Y;
    local_res20[0].Bits =
         (uVar9 << 8 | (int)ROUND(fVar10) >> 1 & 0xffU) << 8 |
         (int)ROUND(fVar18 + __real_3f000000 + fVar16 + fVar16) >> 1 & 0xffU;
    UE::PoseSearch::FDebugDrawParams::DrawLine
              (param_1,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_128._s_0,
               (FColor *)&local_res20[0]._s_0,0.0);
    local_110._s_0.X = local_198._s_0.X - dVar3;
    local_110._s_0.Y = local_198._s_0.Y - dVar13;
    local_110._s_0.Z = local_198._s_0.Z - dVar4;
    UE::PoseSearch::FDebugDrawParams::DrawLine
              (param_1,(TVector<double> *)&local_198._s_0,(TVector<double> *)&local_110._s_0,
               (FColor *)&local_res20[0]._s_0,0.0);
  }
  return;
}

// Finalize @ 14a8f6870

bool __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::Finalize
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,UPoseSearchSchema *param_1)

{
  schar sVar1;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
  sVar1 = UPoseSearchSchema::AddBoneReference(param_1,&this->LeftThigh,&this->SampleRole);
  this->LeftThighIdx = sVar1;
  sVar1 = UPoseSearchSchema::AddBoneReference(param_1,&this->RightThigh,&this->SampleRole);
  this->RightThighIdx = sVar1;
  sVar1 = UPoseSearchSchema::AddBoneReference(param_1,&this->LeftFoot,&this->SampleRole);
  this->LeftFootIdx = sVar1;
  sVar1 = UPoseSearchSchema::AddBoneReference(param_1,&this->RightFoot,&this->SampleRole);
  this->RightFootIdx = sVar1;
  if ((((this->LeftThighIdx != -2) && (this->RightThighIdx != -2)) && (this->LeftFootIdx != -2)) &&
     (sVar1 != -2)) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14a8fc330

UClass * __cdecl UPoseSearchFeatureChannel_FilterCrashingLegs::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_FilterCrashingLegs",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.
                InnerSingleton,StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs,
               0x98,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_FilterCrashingLegs>,
               local_res8,UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_FilterCrashingLegs.InnerSingleton;
}

// IsFilterActive @ 14a901bf0

bool __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::IsFilterActive
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this)

{
  if ((float)(this->LeftFoot).BoneName.Number != 0.0) {
    return true;
  }
  return false;
}

// IsFilterValid @ 14a901e50

bool __thiscall
UPoseSearchFeatureChannel_FilterCrashingLegs::IsFilterValid
          (UPoseSearchFeatureChannel_FilterCrashingLegs *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  uint *puVar1;
  code *pcVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  
  pfVar3 = param_1->DataPtr;
  uVar7 = (uint)this->_padding_;
  iVar9 = (int)*(undefined8 *)&param_1->ArrayNum;
  if ((iVar9 < (int)uVar7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= DataOffset + 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar8 = 0;
  if ((int)uVar7 < iVar9) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  pfVar4 = param_2->DataPtr;
  uVar8 = (uint)this->_padding_;
  fVar10 = pfVar3[(int)uVar7];
  iVar9 = (int)*(undefined8 *)&param_2->ArrayNum;
  if ((iVar9 < (int)uVar8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Values.Num() >= DataOffset + 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                         ,0x84,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  uVar7 = 0;
  if ((int)uVar8 < iVar9) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  fVar10 = (float)((uint)(pfVar4[(int)uVar8] - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  puVar1 = &(this->LeftFoot).BoneName.Number;
  return fVar10 < (float)*puVar1 || fVar10 == (float)*puVar1;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs @ 14a908d80

void __cdecl
UPoseSearchFeatureChannel_FilterCrashingLegs::
StaticRegisterNativesUPoseSearchFeatureChannel_FilterCrashingLegs(void)

{
  return;
}

