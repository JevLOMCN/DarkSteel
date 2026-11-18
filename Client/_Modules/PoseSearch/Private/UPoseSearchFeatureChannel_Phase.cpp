// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 10

// StaticClass @ 14a8d6dd0

UClass * __cdecl UPoseSearchFeatureChannel_Phase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Phase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Phase,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Phase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Phase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton;
}

// UPoseSearchFeatureChannel_Phase @ 14a8e1e50

UPoseSearchFeatureChannel_Phase * __thiscall
UPoseSearchFeatureChannel_Phase::UPoseSearchFeatureChannel_Phase
          (UPoseSearchFeatureChannel_Phase *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->Bone).BoneName.ComparisonIndex = 0;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->Bone).BoneName.Number = 0;
  puVar1 = &(this->Bone).field_0x8;
  (this->Bone).BoneIndex = -1;
  (this->Bone).bUseSkeletonIndex = 0;
  (this->Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar2;
  this->SchemaBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  return this;
}

// UPoseSearchFeatureChannel_Phase @ 14a8e1ec0

UPoseSearchFeatureChannel_Phase * __thiscall
UPoseSearchFeatureChannel_Phase::UPoseSearchFeatureChannel_Phase
          (UPoseSearchFeatureChannel_Phase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  (this->Bone).BoneName.ComparisonIndex = 0;
  FVar2 = UE::PoseSearch::DefaultRole;
  (this->Bone).BoneName.Number = 0;
  puVar1 = &(this->Bone).field_0x8;
  (this->Bone).BoneIndex = -1;
  (this->Bone).bUseSkeletonIndex = 0;
  (this->Bone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->SampleRole = FVar2;
  this->SchemaBoneIdx = '\0';
  this->InputQueryPose = UseContinuingPose;
  return this;
}

// ~UPoseSearchFeatureChannel_Phase @ 14a8e2ed0

void __thiscall
UPoseSearchFeatureChannel_Phase::~UPoseSearchFeatureChannel_Phase
          (UPoseSearchFeatureChannel_Phase *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddDependentChannels @ 14a8e64b0

void __thiscall
UPoseSearchFeatureChannel_Phase::AddDependentChannels
          (UPoseSearchFeatureChannel_Phase *this,UPoseSearchSchema *param_1)

{
  if (param_1->bInjectAdditionalDebugChannels != false) {
    UPoseSearchFeatureChannel_Position::FindOrAddToSchema
              (param_1,0.0,&(this->Bone).BoneName,&this->SampleRole,UseSampleTime);
  }
  return;
}

// BuildQuery @ 14a8e97b0

void __thiscall
UPoseSearchFeatureChannel_Phase::BuildQuery
          (UPoseSearchFeatureChannel_Phase *this,FSearchContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPoseSearchFeatureChannel *pUVar3;
  UClass *pUVar4;
  TArrayView<float,int> *pTVar5;
  TArrayView<float,int> *pTVar6;
  int iVar7;
  int iVar8;
  TArrayView<float_const_,int> *pTVar9;
  uint uVar10;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float,int> local_18;
  
  if (param_1->bUseCachedChannelData != false) {
    uVar10 = *(uint *)(this->_padding_ + 0xc);
    local_88.DataPtr = (float *)0x0;
    local_88.ArrayNum = 0;
    uVar10 = this->SchemaBoneIdx + -0x61c88647 + uVar10 * 0x40 + (uVar10 >> 2) ^ uVar10;
    pUVar3 = UE::PoseSearch::FSearchContext::GetCachedChannelData
                       (param_1,this->InputQueryPose + 0x9e3779b9 + uVar10 * 0x40 + (uVar10 >> 2) ^
                                uVar10,(UPoseSearchFeatureChannel *)this,&local_88);
    if (pUVar3 != (UPoseSearchFeatureChannel *)0x0) {
      pUVar4 = StaticClass();
      iVar8 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar4->_padding_)) {
        pUVar3 = (UPoseSearchFeatureChannel *)0x0;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CachedPhaseChannel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Phase.cpp"
                           ,0x147,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((pUVar3->ChannelCardinality != *(int *)((longlong)&this->_padding_ + 4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedPhaseChannel->GetChannelCardinality() == ChannelCardinality",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Phase.cpp"
                             ,0x148,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((local_88.ArrayNum != *(int *)((longlong)&this->_padding_ + 4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedChannelData.Num() == ChannelCardinality",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Phase.cpp"
                             ,0x149,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((char)pUVar3[1]._padding_ != this->SchemaBoneIdx) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedPhaseChannel->SchemaBoneIdx == SchemaBoneIdx",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Phase.cpp"
                             ,0x14c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*(EInputQueryPose *)((longlong)&pUVar3[1]._padding_ + 1) != this->InputQueryPose) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CachedPhaseChannel->InputQueryPose == InputQueryPose",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel_Phase.cpp"
                             ,0x14d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_78._12_4_ = local_88._12_4_;
      local_78.ArrayNum = local_88.ArrayNum;
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      local_78.DataPtr = local_88.DataPtr;
      pTVar5 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_38);
      pTVar6 = TArrayView<float,int>::Slice
                         (pTVar5,&local_28,(int)this->_padding_,
                          *(int *)((longlong)&this->_padding_ + 4));
      pTVar9 = &local_78;
      iVar7 = 0;
      pTVar5 = &local_68;
      local_68.DataPtr = pTVar6->DataPtr;
      local_68.ArrayNum = pTVar6->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      goto LAB_14a8e99ee;
    }
  }
  bVar2 = UE::PoseSearch::FSearchContext::CanUseContinuingPoseValues(param_1);
  if (this->InputQueryPose == UseCharacterPose) {
    return;
  }
  if (!bVar2) {
    return;
  }
  local_58.DataPtr = (param_1->ContinuingPoseValues).DataPtr;
  local_58.ArrayNum = (param_1->ContinuingPoseValues).ArrayNum;
  local_58._12_4_ = *(undefined4 *)&(param_1->ContinuingPoseValues).field_0xc;
  iVar8 = *(int *)((longlong)&this->_padding_ + 4);
  iVar7 = (int)this->_padding_;
  pTVar6 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,&local_18);
  pTVar9 = &local_58;
  pTVar5 = &local_48;
  local_48.DataPtr = pTVar6->DataPtr;
  local_48.ArrayNum = pTVar6->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
LAB_14a8e99ee:
  UE::PoseSearch::FFeatureVectorHelper::Copy(pTVar5,iVar7,iVar8,pTVar9);
  return;
}

// DebugDraw @ 14a8f12a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UPoseSearchFeatureChannel_Phase::DebugDraw
          (UPoseSearchFeatureChannel_Phase *this,FDebugDrawParams *param_1,
          TArrayView<float_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float *pfVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar29;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar30;
  undefined4 uVar31;
  undefined1 auVar28 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar50;
  undefined1 auVar49 [16];
  double dVar51;
  undefined1 auVar52 [16];
  double dVar57;
  undefined4 uVar58;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined1 auVar72 [16];
  undefined1 auStackY_258 [32];
  FColor_u_0 local_208 [2];
  double local_200;
  float *local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  TVector<double>_u_0 local_1e0;
  TVector<double>_u_0 local_1c8;
  TArrayView<float_const_,int> local_1a8;
  TVector<double>_u_0 local_198 [3];
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  bVar13 = UE::PoseSearch::FDebugDrawParams::IsAnyWeightRelevant
                     (param_1,(UPoseSearchFeatureChannel *)this);
  if (bVar13) {
    FLinearColor::ToFColorSRGB(&FLinearColor::Yellow);
    uVar1 = (uint)this->_padding_;
    local_1f8 = param_2->DataPtr;
    uStack_1f0 = *(undefined8 *)&param_2->ArrayNum;
    uVar16 = uVar1 + 1;
    local_208[0] = local_200._0_4_;
    iVar15 = (int)*(undefined8 *)&param_2->ArrayNum;
    if (iVar15 < (int)uVar16) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Values.Num() >= DataOffset + 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                          ,0x78,L"");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar14 = 0;
    if ((int)uVar16 < iVar15) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pfVar12 = local_1f8;
    local_1e8 = (double)local_1f8[(int)uVar16];
    uVar16 = 0;
    if ((int)uVar1 < iVar15) {
      uVar16 = ~uVar1 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_200 = (double)pfVar12[(int)uVar1];
    local_1a8.DataPtr = param_2->DataPtr;
    local_1a8.ArrayNum = param_2->ArrayNum;
    local_1a8._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UE::PoseSearch::FDebugDrawParams::ExtractPosition
              (param_1,(TVector<double> *)&local_1e0._s_0,&local_1a8,0.0,this->SchemaBoneIdx,
               &this->SampleRole,UseSampleTime,-1,0.0);
    UE::PoseSearch::FDebugDrawParams::GetRootBoneTransform(param_1,&local_148,&this->SampleRole,0.0)
    ;
    dVar3 = local_148.Scale3D.XY.m128d_f64[0] *
            UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    dVar4 = local_148.Scale3D.XY.m128d_f64[1] *
            UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar7 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z *
            local_148.Scale3D.ZW.m128d_f64[0];
    dVar51 = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar59._8_4_ = SUB84(dVar4,0);
    auVar59._0_8_ = dVar3;
    auVar59._12_4_ = uVar31;
    dVar10 = local_148.Rotation.ZW.m128d_f64[0];
    dVar9 = local_148.Rotation.XY.m128d_f64[1];
    uVar70 = local_148.Rotation.ZW.m128d_f64[0]._0_4_;
    uVar71 = local_148.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar32._8_4_ = SUB84(dVar4,0);
    auVar32._0_8_ = dVar3;
    auVar32._12_4_ = uVar31;
    dVar8 = local_148.Rotation.XY.m128d_f64[0];
    auVar72._8_4_ = SUB84(dVar51,0);
    auVar72._0_8_ = dVar7;
    auVar72._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    auVar33 = blendpd(auVar32,auVar72,2);
    dVar11 = local_148.Rotation.ZW.m128d_f64[1];
    auVar72 = blendpd((undefined1  [16])local_148.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_148.Rotation.ZW.m128d_f64,2);
    auVar18._8_4_ = uVar70;
    auVar18._0_8_ = dVar9;
    auVar18._12_4_ = uVar71;
    auVar60._0_8_ = auVar59._8_8_ * dVar8 - dVar9 * dVar3;
    auVar60._8_8_ = dVar7 * dVar9 - auVar18._8_8_ * dVar4;
    dVar17 = auVar72._0_8_;
    dVar29 = auVar72._8_8_;
    auVar52._8_4_ = SUB84(auVar60._8_8_,0);
    auVar52._0_8_ = auVar60._0_8_;
    auVar52._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
    auVar34._0_8_ = auVar33._0_8_ * dVar10 - dVar17 * dVar7;
    auVar34._8_8_ = auVar33._8_8_ * dVar11 - dVar29 * dVar51;
    auVar33 = blendpd(auVar60,auVar34,2);
    dVar51 = auVar52._8_8_ + auVar52._8_8_;
    dVar57 = auVar34._0_8_ + auVar34._0_8_;
    auVar61._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar61._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    uVar31 = SUB84(dVar57,0);
    auVar46._8_4_ = uVar31;
    auVar46._0_8_ = dVar51;
    uVar58 = (undefined4)((ulonglong)dVar57 >> 0x20);
    auVar46._12_4_ = uVar58;
    auVar19._8_4_ = uVar31;
    auVar19._0_8_ = dVar51;
    auVar19._12_4_ = uVar58;
    auVar35._8_4_ = uVar31;
    auVar35._0_8_ = dVar51;
    auVar35._12_4_ = uVar58;
    auVar33 = blendpd(auVar35,auVar61,2);
    auVar47._0_8_ = auVar46._8_8_ * dVar8 - dVar51 * dVar9;
    auVar47._8_8_ = auVar61._0_8_ * dVar9 - auVar19._8_8_ * dVar10;
    auVar20._8_4_ = SUB84(auVar61._8_8_,0);
    auVar20._0_8_ = auVar61._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
    auVar36._0_8_ = auVar33._0_8_ * dVar10 - auVar61._0_8_ * dVar17;
    auVar36._8_8_ = auVar33._8_8_ * dVar11 - auVar20._8_8_ * dVar29;
    auVar21._8_4_ = SUB84(auVar47._8_8_,0);
    auVar21._0_8_ = auVar47._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
    local_198[0]._0_8_ = dVar51 * dVar11 + dVar3 + auVar21._8_8_;
    local_198[0]._8_8_ = dVar57 * dVar11 + dVar4 + auVar36._0_8_;
    auVar33 = blendpd(auVar47,auVar36,2);
    local_198[0]._16_8_ = auVar61._0_8_ * dVar11 + dVar7 + auVar33._0_8_;
    dVar3 = local_148.Scale3D.XY.m128d_f64[0] *
            UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
    dVar4 = local_148.Scale3D.XY.m128d_f64[1] *
            UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
    uVar31 = SUB84(dVar4,0);
    uVar58 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar62._8_4_ = uVar31;
    auVar62._0_8_ = dVar3;
    auVar62._12_4_ = uVar58;
    dVar7 = UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z *
            local_148.Scale3D.ZW.m128d_f64[0];
    uVar68 = SUB84(local_148.Scale3D.ZW.m128d_f64[1] * 0.0,0);
    uVar69 = (undefined4)((ulonglong)(local_148.Scale3D.ZW.m128d_f64[1] * 0.0) >> 0x20);
    auVar22._8_4_ = uVar31;
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar58;
    auVar37._8_4_ = uVar31;
    auVar37._0_8_ = dVar3;
    auVar37._12_4_ = uVar58;
    auVar5._8_4_ = uVar68;
    auVar5._0_8_ = dVar7;
    auVar5._12_4_ = uVar69;
    auVar33 = blendpd(auVar37,auVar5,2);
    auVar63._0_8_ = auVar62._8_8_ * dVar8 - dVar3 * dVar9;
    auVar63._8_8_ = dVar7 * dVar9 - auVar22._8_8_ * dVar10;
    auVar23._8_4_ = uVar68;
    auVar23._0_8_ = dVar7;
    auVar23._12_4_ = uVar69;
    auVar48._8_4_ = SUB84(auVar63._8_8_,0);
    auVar48._0_8_ = auVar63._0_8_;
    auVar48._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar38._0_8_ = auVar33._0_8_ * dVar10 - dVar7 * dVar17;
    auVar38._8_8_ = auVar33._8_8_ * dVar11 - auVar23._8_8_ * dVar29;
    auVar24._8_4_ = uVar70;
    auVar24._0_8_ = dVar9;
    auVar24._12_4_ = uVar71;
    auVar33 = blendpd(auVar63,auVar38,2);
    auVar64._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar64._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    dVar45 = auVar48._8_8_ + auVar48._8_8_;
    dVar50 = auVar38._0_8_ + auVar38._0_8_;
    auVar53._8_4_ = SUB84(dVar50,0);
    auVar53._0_8_ = dVar45;
    uVar31 = (undefined4)((ulonglong)dVar50 >> 0x20);
    auVar53._12_4_ = uVar31;
    auVar39._8_4_ = SUB84(dVar50,0);
    auVar39._0_8_ = dVar45;
    auVar39._12_4_ = uVar31;
    auVar33 = blendpd(auVar39,auVar64,2);
    auVar49._8_4_ = local_148.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar49._0_8_ = dVar11;
    auVar49._12_4_ = local_148.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar54._0_8_ = auVar53._8_8_ * dVar8 - dVar9 * dVar45;
    auVar54._8_8_ = auVar64._0_8_ * dVar9 - auVar24._8_8_ * dVar50;
    local_148.Scale3D.ZW.m128d_f64[0] =
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z *
         local_148.Scale3D.ZW.m128d_f64[0];
    local_148.Scale3D.ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar40._0_8_ = auVar33._0_8_ * dVar10 - dVar17 * auVar64._0_8_;
    auVar40._8_8_ = auVar33._8_8_ * dVar11 - dVar29 * auVar64._8_8_;
    auVar25._8_4_ = SUB84(auVar54._8_8_,0);
    auVar25._0_8_ = auVar54._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
    auVar72 = blendpd(auVar54,auVar40,2);
    local_148.Scale3D.XY.m128d_f64[0] =
         local_148.Scale3D.XY.m128d_f64[0] *
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_148.Scale3D.XY.m128d_f64[1] =
         local_148.Scale3D.XY.m128d_f64[1] *
         UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    uVar31 = (undefined4)((ulonglong)local_148.Scale3D.XY.m128d_f64[1] >> 0x20);
    auVar26._8_4_ = uVar70;
    auVar26._0_8_ = dVar9;
    auVar26._12_4_ = uVar71;
    auVar65._8_4_ = SUB84(local_148.Scale3D.XY.m128d_f64[1],0);
    auVar65._0_8_ = local_148.Scale3D.XY.m128d_f64[0];
    auVar65._12_4_ = uVar31;
    auVar41._8_4_ = SUB84(local_148.Scale3D.XY.m128d_f64[1],0);
    auVar41._0_8_ = local_148.Scale3D.XY.m128d_f64[0];
    auVar41._12_4_ = uVar31;
    auVar33._8_4_ = SUB84(local_148.Scale3D.ZW.m128d_f64[1],0);
    auVar33._0_8_ = local_148.Scale3D.ZW.m128d_f64[0];
    auVar33._12_4_ = (int)((ulonglong)local_148.Scale3D.ZW.m128d_f64[1] >> 0x20);
    auVar33 = blendpd(auVar41,auVar33,2);
    auVar66._0_8_ = auVar65._8_8_ * dVar8 - dVar9 * local_148.Scale3D.XY.m128d_f64[0];
    auVar66._8_8_ =
         local_148.Scale3D.ZW.m128d_f64[0] * dVar9 -
         auVar26._8_8_ * local_148.Scale3D.XY.m128d_f64[1];
    auVar42._0_8_ = auVar33._0_8_ * dVar10 - dVar17 * local_148.Scale3D.ZW.m128d_f64[0];
    auVar42._8_8_ = auVar33._8_8_ * dVar11 - dVar29 * local_148.Scale3D.ZW.m128d_f64[1];
    auVar27._8_4_ = SUB84(auVar66._8_8_,0);
    auVar27._0_8_ = auVar66._0_8_;
    auVar27._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
    dVar57 = auVar27._8_8_ + auVar27._8_8_;
    dVar30 = auVar42._0_8_ + auVar42._0_8_;
    auVar33 = blendpd(auVar66,auVar42,2);
    auVar67._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar67._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar55._8_4_ = SUB84(dVar30,0);
    auVar55._0_8_ = dVar57;
    uVar31 = (undefined4)((ulonglong)dVar30 >> 0x20);
    auVar55._12_4_ = uVar31;
    auVar43._8_4_ = SUB84(dVar30,0);
    auVar43._0_8_ = dVar57;
    auVar43._12_4_ = uVar31;
    auVar33 = blendpd(auVar43,auVar67,2);
    auVar56._0_8_ = auVar55._8_8_ * dVar8 - dVar9 * dVar57;
    auVar56._8_8_ = auVar67._0_8_ * dVar9 - dVar10 * dVar30;
    auVar44._0_8_ = auVar33._0_8_ * dVar10 - dVar17 * auVar67._0_8_;
    auVar44._8_8_ = auVar33._8_8_ * dVar11 - dVar29 * auVar67._8_8_;
    auVar28._8_4_ = SUB84(auVar56._8_8_,0);
    auVar28._0_8_ = auVar56._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar33 = blendpd(auVar56,auVar44,2);
    dVar51 = (double)ScaleFactor;
    dVar3 = (local_200 * (dVar11 * dVar57 + local_148.Scale3D.XY.m128d_f64[0] + auVar28._8_8_) +
            (dVar11 * dVar45 + dVar3 + auVar25._8_8_) * local_1e8) * dVar51;
    dVar7 = (local_200 *
             (dVar11 * auVar67._0_8_ + local_148.Scale3D.ZW.m128d_f64[0] + auVar33._0_8_) +
            (dVar11 * auVar64._0_8_ + dVar7 + auVar72._0_8_) * local_1e8) * dVar51;
    local_1c8._s_0.X = dVar3 + local_1e0._s_0.X;
    dVar51 = (local_200 *
              (auVar49._8_8_ * dVar30 + local_148.Scale3D.XY.m128d_f64[1] + auVar44._0_8_) +
             (dVar11 * dVar50 + dVar4 + auVar40._0_8_) * local_1e8) * dVar51;
    local_1c8._s_0.Z = dVar7 + local_1e0._s_0.Z;
    local_1c8._s_0.Y = dVar51 + local_1e0._s_0.Y;
    UE::PoseSearch::FDebugDrawParams::DrawLine
              (param_1,(TVector<double> *)&local_1e0._s_0,(TVector<double> *)&local_1c8._s_0,
               (FColor *)&local_208[0]._s_0,0.0);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar51 * dVar51 + dVar3 * dVar3 + dVar7 * dVar7;
    auVar33 = sqrtpd(extraout_XMM0,auVar6);
    UE::PoseSearch::FDebugDrawParams::DrawCircle
              (param_1,(TVector<double> *)&local_1e0._s_0,(TVector<double> *)&local_198[0]._s_0,
               (float)auVar33._0_8_,Segments,(FColor *)&local_208[0]._s_0,0.0);
  }
  return;
}

// Finalize @ 14a8f6ab0

bool __thiscall
UPoseSearchFeatureChannel_Phase::Finalize
          (UPoseSearchFeatureChannel_Phase *this,UPoseSearchSchema *param_1)

{
  schar sVar1;
  
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 2;
  sVar1 = UPoseSearchSchema::AddBoneReference(param_1,&this->Bone,&this->SampleRole);
  this->SchemaBoneIdx = sVar1;
  return sVar1 != -2;
}

// GetPrivateStaticClass @ 14a8fc7b0

UClass * __cdecl UPoseSearchFeatureChannel_Phase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_Phase",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_Phase,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_Phase>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_Phase>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_Phase.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_Phase @ 14a908de0

void __cdecl
UPoseSearchFeatureChannel_Phase::StaticRegisterNativesUPoseSearchFeatureChannel_Phase(void)

{
  return;
}

