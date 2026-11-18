// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 12

// StaticStruct @ 1463d1d50

UScriptStruct * __cdecl FAnimNode_AimOffsetLookAt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt,(UObject *)pUVar1,
                         L"AnimNode_AimOffsetLookAt");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton;
}

// FAnimNode_AimOffsetLookAt @ 146402d30

FAnimNode_AimOffsetLookAt * __thiscall
FAnimNode_AimOffsetLookAt::FAnimNode_AimOffsetLookAt(FAnimNode_AimOffsetLookAt *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_AimOffsetLookAt__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *&(this->SocketLocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->SocketLocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->SocketLocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->SocketLocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->SocketLocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->SocketLocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->PivotSocketLocalTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PivotSocketLocalTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PivotSocketLocalTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PivotSocketLocalTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PivotSocketLocalTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PivotSocketLocalTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&this->BasePose = 0;
  *(undefined4 *)&(this->BasePose).field_0x8 = 0xffffffff;
  (this->BasePose).field_0xc = 0;
  this->LODThreshold = -1;
  (this->SourceSocketName).ComparisonIndex = 0;
  (this->SourceSocketName).Number = 0;
  (this->PivotSocketName).ComparisonIndex = 0;
  (this->PivotSocketName).Number = 0;
  (this->SocketAxis).field0_0x0._s_0.X = 1.0;
  (this->LookAtLocation).field0_0x0._s_0.X = 0.0;
  (this->LookAtLocation).field0_0x0._s_0.Y = 0.0;
  (this->LookAtLocation).field0_0x0._s_0.Z = 0.0;
  (this->SocketAxis).field0_0x0._s_0.Y = 0.0;
  (this->SocketAxis).field0_0x0._s_0.Z = 0.0;
  this->Alpha = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentBlendInput).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentBlendInput).field0_0x0._s_0.Y = (double)uVar2;
  (this->CurrentBlendInput).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->SocketBoneReference).BoneName.ComparisonIndex = 0;
  (this->SocketBoneReference).BoneName.Number = 0;
  puVar1 = &(this->SocketBoneReference).field_0x8;
  (this->SocketBoneReference).BoneIndex = -1;
  (this->SocketBoneReference).bUseSkeletonIndex = 0;
  (this->SocketBoneReference).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PivotSocketBoneReference).BoneName.ComparisonIndex = 0;
  (this->PivotSocketBoneReference).BoneName.Number = 0;
  puVar1 = &(this->PivotSocketBoneReference).field_0x8;
  (this->PivotSocketBoneReference).BoneIndex = -1;
  (this->PivotSocketBoneReference).bUseSkeletonIndex = 0;
  (this->PivotSocketBoneReference).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bIsLODEnabled = false;
  return this;
}

// CacheBones_AnyThread @ 1464196b0

void __thiscall
FAnimNode_AimOffsetLookAt::CacheBones_AnyThread
          (FAnimNode_AimOffsetLookAt *this,FAnimationCacheBonesContext *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_AimOffsetLookAt::CacheBones_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->BasePose,param_1);
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FBoneReference::Initialize(&this->SocketBoneReference,*(FBoneContainer **)(lVar1 + 0x660));
  lVar1 = *(longlong *)param_1;
  if (*(longlong *)(lVar1 + 0x660) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FBoneReference::Initialize(&this->PivotSocketBoneReference,*(FBoneContainer **)(lVar1 + 0x660));
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 146439080

void __thiscall
FAnimNode_AimOffsetLookAt::Evaluate_AnyThread(FAnimNode_AimOffsetLookAt *this,FPoseContext *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_d8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_80;
  undefined8 local_78;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  bool local_40;
  FAnimationPoseData local_38;
  FAnimationPoseData local_20;
  
  FPoseLink::Evaluate(&this->BasePose,param_1);
  pTVar1 = CVarAimOffsetLookAtEnable.Ref;
  if (this->bIsLODEnabled == false) {
    return;
  }
  if (this->Alpha <= __real_3727c5ac) {
    return;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_1464390ff;
  }
  lVar3 = 0;
LAB_1464390ff:
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 1) {
    UpdateFromLookAtTarget(this,param_1);
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_40 = param_1->bExpectsAdditivePose != false;
    local_d8._32_8_ = 0;
    local_d8._40_8_ = 0;
    local_d8._48_8_ = 0;
    local_d8._56_8_ = 0;
    local_d8._64_8_ = 0;
    local_d8[0x48] = 0;
    local_d8._80_8_ = 0;
    pTStack_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_78 = 0;
    local_70 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_68 = 0;
    local_60 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    local_58 = 0;
    local_50 = (void *)0x0;
    local_48 = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_);
    local_d8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_d8._24_4_ = (undefined4)param_1->_padding_;
    FAnimNode_BlendSpacePlayerBase::Evaluate_AnyThread
              ((FAnimNode_BlendSpacePlayerBase *)this,(FPoseContext *)local_d8);
    FAnimationPoseData::FAnimationPoseData(&local_20,param_1);
    FAnimationPoseData::FAnimationPoseData(&local_38,(FPoseContext *)local_d8);
    FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPose
              (&local_20,&local_38,this->Alpha);
    FCompactPose::NormalizeRotations(&param_1->Pose);
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_60,(int)local_58);
    if (local_60 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_60);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_70,(int)local_68);
    if (local_70 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_70);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_80,(int)local_78);
    if (pTStack_80 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_80);
    }
  }
  return;
}

// GatherDebugData @ 146441e30

void __thiscall
FAnimNode_AimOffsetLookAt::GatherDebugData(FAnimNode_AimOffsetLookAt *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_AimOffsetLookAt::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt,(UObject *)pUVar1,
                         L"AnimNode_AimOffsetLookAt");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_AimOffsetLookAt.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Play Time: %.3f)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->BasePose,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 14644b390

int __thiscall FAnimNode_AimOffsetLookAt::GetLODThreshold(FAnimNode_AimOffsetLookAt *this)

{
  return this->LODThreshold;
}

// GetPosition @ 14644c7d0

TVector<double> * __thiscall
FAnimNode_AimOffsetLookAt::GetPosition
          (FAnimNode_AimOffsetLookAt *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->CurrentBlendInput).field0_0x0._s_0.Y;
  dVar1 = (this->CurrentBlendInput).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CurrentBlendInput).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// Initialize_AnyThread @ 1464594b0

void __thiscall
FAnimNode_AimOffsetLookAt::Initialize_AnyThread
          (FAnimNode_AimOffsetLookAt *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_AimOffsetLookAt::Initialize_AnyThread");
  FAnimNode_BlendSpacePlayerBase::Initialize_AnyThread
            ((FAnimNode_BlendSpacePlayerBase *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// NeedsOnInitializeAnimInstance @ 14645ed20

bool __thiscall
FAnimNode_AimOffsetLookAt::NeedsOnInitializeAnimInstance(FAnimNode_AimOffsetLookAt *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14645ed70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_AimOffsetLookAt::OnInitializeAnimInstance
          (FAnimNode_AimOffsetLookAt *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  int iVar16;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar17;
  USkeletalMeshSocket *pUVar18;
  TTransform<double> *pTVar19;
  FName FVar20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FAnimNode_Base::OnInitializeAnimInstance((FAnimNode_Base *)this,param_1,param_2);
  local_98 = 0;
  (this->SocketBoneReference).BoneName.ComparisonIndex = 0;
  (this->SocketBoneReference).BoneName.Number = 0;
  this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_2);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  pUVar17 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar17 == (USkeletalMesh *)0x0) {
    return;
  }
  pUVar18 = (USkeletalMeshSocket *)
            (**(code **)(pUVar17->_padding_ + 0x3f0))(pUVar17,this->SourceSocketName);
  if (pUVar18 == (USkeletalMeshSocket *)0x0) {
    iVar16 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this_00,this->SourceSocketName);
    if (iVar16 == -1) goto LAB_14645eebf;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Rotation.XY.m128d_f64 = auVar9;
    auVar10._8_4_ = SUB84((double)fVar2,0);
    auVar10._0_8_ = (double)fVar1;
    auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Rotation.ZW.m128d_f64 = auVar10;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Translation.XY.m128d_f64 = auVar11;
    auVar12._8_4_ = SUB84((double)fVar2,0);
    auVar12._0_8_ = (double)fVar1;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Translation.ZW.m128d_f64 = auVar12;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Scale3D.XY.m128d_f64 = auVar13;
    auVar14._8_4_ = SUB84((double)fVar2,0);
    auVar14._0_8_ = (double)fVar1;
    auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->SocketLocalTransform).Scale3D.ZW.m128d_f64 = auVar14;
    FVar20 = this->SourceSocketName;
  }
  else {
    pTVar19 = USkeletalMeshSocket::GetSocketLocalTransform(pUVar18,&local_88);
    dVar15 = (pTVar19->Rotation).XY.m128d_f64[1];
    (this->SocketLocalTransform).Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    (this->SocketLocalTransform).Rotation.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Rotation).ZW.m128d_f64[1];
    (this->SocketLocalTransform).Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
    (this->SocketLocalTransform).Rotation.ZW.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Translation).XY.m128d_f64[1];
    (this->SocketLocalTransform).Translation.XY.m128d_f64[0] =
         (pTVar19->Translation).XY.m128d_f64[0];
    (this->SocketLocalTransform).Translation.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Translation).ZW.m128d_f64[1];
    (this->SocketLocalTransform).Translation.ZW.m128d_f64[0] =
         (pTVar19->Translation).ZW.m128d_f64[0];
    (this->SocketLocalTransform).Translation.ZW.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Scale3D).XY.m128d_f64[1];
    (this->SocketLocalTransform).Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    (this->SocketLocalTransform).Scale3D.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Scale3D).ZW.m128d_f64[1];
    (this->SocketLocalTransform).Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    (this->SocketLocalTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
    FVar20 = pUVar18->BoneName;
  }
  (this->SocketBoneReference).BoneName = FVar20;
LAB_14645eebf:
  pUVar18 = (USkeletalMeshSocket *)
            (**(code **)(pUVar17->_padding_ + 0x3f0))(pUVar17,this->PivotSocketName);
  if (pUVar18 == (USkeletalMeshSocket *)0x0) {
    iVar16 = USkinnedMeshComponent::GetBoneIndex
                       ((USkinnedMeshComponent *)this_00,this->PivotSocketName);
    if (iVar16 == -1) {
      return;
    }
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Rotation.XY.m128d_f64 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Rotation.ZW.m128d_f64 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Translation.XY.m128d_f64 = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Translation.ZW.m128d_f64 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Scale3D.XY.m128d_f64 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this->PivotSocketLocalTransform).Scale3D.ZW.m128d_f64 = auVar8;
    FVar20 = this->PivotSocketName;
  }
  else {
    pTVar19 = USkeletalMeshSocket::GetSocketLocalTransform(pUVar18,&local_88);
    dVar15 = (pTVar19->Rotation).XY.m128d_f64[1];
    (this->PivotSocketLocalTransform).Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0]
    ;
    (this->PivotSocketLocalTransform).Rotation.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Rotation).ZW.m128d_f64[1];
    (this->PivotSocketLocalTransform).Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0]
    ;
    (this->PivotSocketLocalTransform).Rotation.ZW.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Translation).XY.m128d_f64[1];
    (this->PivotSocketLocalTransform).Translation.XY.m128d_f64[0] =
         (pTVar19->Translation).XY.m128d_f64[0];
    (this->PivotSocketLocalTransform).Translation.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Translation).ZW.m128d_f64[1];
    (this->PivotSocketLocalTransform).Translation.ZW.m128d_f64[0] =
         (pTVar19->Translation).ZW.m128d_f64[0];
    (this->PivotSocketLocalTransform).Translation.ZW.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Scale3D).XY.m128d_f64[1];
    (this->PivotSocketLocalTransform).Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
    (this->PivotSocketLocalTransform).Scale3D.XY.m128d_f64[1] = dVar15;
    dVar15 = (pTVar19->Scale3D).ZW.m128d_f64[1];
    (this->PivotSocketLocalTransform).Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
    (this->PivotSocketLocalTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
    FVar20 = pUVar18->BoneName;
  }
  (this->PivotSocketBoneReference).BoneName = FVar20;
  return;
}

// UpdateAssetPlayer @ 146471a00

void __thiscall
FAnimNode_AimOffsetLookAt::UpdateAssetPlayer
          (FAnimNode_AimOffsetLookAt *this,FAnimationUpdateContext *param_1)

{
  bool bVar1;
  FExposedValueHandler *this_00;
  
  bVar1 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  this->bIsLODEnabled = bVar1;
  if (bVar1) {
    this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
    FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
    FAnimNode_BlendSpacePlayerBase::UpdateInternal((FAnimNode_BlendSpacePlayerBase *)this,param_1);
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->BasePose,param_1);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Playback Time",*(float *)((longlong)&this->_padding_ + 4));
  return;
}

// UpdateFromLookAtTarget @ 146473110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FAnimNode_AimOffsetLookAt::UpdateFromLookAtTarget
          (FAnimNode_AimOffsetLookAt *this,FPoseContext *param_1)

{
  FBoneContainer *pFVar1;
  FAnimInstanceProxy *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [12];
  float fVar13;
  TConsoleVariableData<int> *pTVar14;
  bool bVar15;
  UBlendSpace *this_01;
  TTransform<double> *pTVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  TRotator<double> *pTVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  double dVar36;
  ulong64 uVar44;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  double dVar51;
  undefined4 uVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  undefined1 auVar56 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar70;
  undefined1 auStackY_5f8 [32];
  FCompactPoseBoneIndex local_5b8;
  FCompactPoseBoneIndex local_5b4;
  TVector2<double>_u_0 local_5b0;
  TVector2<double>_u_0 local_5a0;
  TVector<double>_u_0 local_588;
  ForAnyElementType local_568;
  double dStack_560;
  undefined8 local_558;
  TVector<double>_u_0 local_548;
  TVector<double>_u_0 local_528;
  undefined1 local_508 [40];
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> local_4e0;
  ForElementType<FCompactPoseBoneIndex> local_4d0;
  FSharedReferencer<1> local_4c8;
  FString local_4b8;
  undefined1 local_4a8 [32];
  TVector<double>_u_0 local_488;
  FScriptContainerElement *local_468;
  double dStack_460;
  double local_458;
  TVector<double>_u_0 local_448;
  TVector<double>_u_0 local_430;
  TVector<double>_u_0 local_418;
  TVector<double>_u_0 local_400;
  TVector<double>_u_0 local_3e8;
  TVector<double>_u_0 local_3d0;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TQuat<double> local_368;
  TVector<double> local_348 [4];
  TVector<double> local_2e8;
  TVector<double> local_2d0 [3];
  TRotator<double> local_288;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5f8;
  this_01 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))();
  pFVar1 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
  if (this_01 == (UBlendSpace *)0x0) {
    return;
  }
  bVar15 = FBoneReference::IsValidToEvaluate(&this->SocketBoneReference,pFVar1);
  if (!bVar15) goto LAB_146473ce9;
  local_508._0_8_ = 0;
  local_508._8_8_ = 0;
  local_508._16_8_ = 0;
  local_508._24_8_ = 0;
  local_508._32_8_ = 0;
  local_4e0._0_8_ = 0;
  local_4e0._8_8_ = 0;
  local_4d0.Data = (FCompactPoseBoneIndex *)0x0;
  local_4c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FCSPose<FCompactPose>::InitPose((FCSPose<FCompactPose> *)local_508,&param_1->Pose);
  FBoneReference::GetCompactPoseIndex(&this->SocketBoneReference,(FBoneContainer *)&local_5b8);
  pTVar16 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      ((FCSPose<FCompactPose> *)local_508,local_5b8);
  local_148.Rotation.XY.m128d_f64[0] = (pTVar16->Rotation).XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (pTVar16->Rotation).XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (pTVar16->Rotation).ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (pTVar16->Rotation).ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (pTVar16->Translation).XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (pTVar16->Translation).XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (pTVar16->Translation).ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (pTVar16->Translation).ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (pTVar16->Scale3D).XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (pTVar16->Scale3D).XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (pTVar16->Scale3D).ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (pTVar16->Scale3D).ZW.m128d_f64[1];
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1a8,&this->SocketLocalTransform,&local_148);
  bVar15 = FBoneReference::IsValidToEvaluate(&this->PivotSocketBoneReference,pFVar1);
  if (bVar15) {
    FBoneReference::GetCompactPoseIndex
              (&this->PivotSocketBoneReference,(FBoneContainer *)&local_5b4);
    pTVar16 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        ((FCSPose<FCompactPose> *)local_508,local_5b4);
    local_208.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_208.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_208.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_208.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_208.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_208.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_208.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_208.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_208,&this->PivotSocketLocalTransform,pTVar16);
    local_468 = (FScriptContainerElement *)local_208.Translation.XY.m128d_f64[0];
    dStack_460 = local_208.Translation.XY.m128d_f64[1];
    local_1a8.Translation.XY.m128d_f64[0] = local_208.Translation.XY.m128d_f64[0];
    local_1a8.Translation.XY.m128d_f64[1] = local_208.Translation.XY.m128d_f64[1];
    local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_1a8.Translation.ZW.m128d_f64[0] = local_208.Translation.ZW.m128d_f64[0];
    local_458 = local_208.Translation.ZW.m128d_f64[0];
  }
  this_00 = (FAnimInstanceProxy *)param_1->_padding_;
  if ((this_00 == (FAnimInstanceProxy *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AnimProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_AimOffsetLookAt.cpp"
                          ,0x87,L""), bVar15)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_268.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_268.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_268.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_268.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  uVar44 = GlobalVectorConstants::FloatZero.m128_u64[1];
  local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_268.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_268.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_268.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_268.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_268,&local_1a8,&this_00->ComponentTransform);
  local_4a8._0_16_ = *(undefined1 (*) [16])&(this->LookAtLocation).field0_0x0;
  local_488._s_0.X = (this_00->ActorTransform).Rotation.XY.m128d_f64[0];
  local_488._s_0.Y = (this_00->ActorTransform).Rotation.XY.m128d_f64[1];
  local_588._s_0.X = (this->LookAtLocation).field0_0x0._s_0.Z;
  local_468 = (FScriptContainerElement *)(this_00->ActorTransform).Translation.XY.m128d_f64[0];
  dStack_460 = (this_00->ActorTransform).Translation.XY.m128d_f64[1];
  dVar9 = local_488._s_0.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar58 = local_488._s_0.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_528._s_0.X = (this_00->ActorTransform).Rotation.ZW.m128d_f64[0];
  local_528._s_0.Y = (this_00->ActorTransform).Rotation.ZW.m128d_f64[1];
  auVar12._4_8_ = uVar44;
  auVar12._0_4_ = local_4a8._4_4_;
  auVar37._0_8_ = auVar12._0_8_ << 0x20;
  auVar37._8_4_ = local_4a8._8_4_;
  auVar37._12_4_ = local_4a8._12_4_;
  dVar10 = local_528._s_0.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = local_528._s_0.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  iVar70 = (int)((ulonglong)dVar11 >> 0x20);
  local_548._s_0.X = (this_00->ActorTransform).Translation.ZW.m128d_f64[0];
  local_548._s_0.Y = (this_00->ActorTransform).Translation.ZW.m128d_f64[1];
  auVar68._8_4_ = SUB84(dVar58,0);
  auVar68._0_8_ = dVar9;
  auVar68._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
  dVar45 = local_4a8._0_8_ - local_268.Translation.XY.m128d_f64[0];
  dVar36 = auVar37._8_8_ - local_268.Translation.XY.m128d_f64[1];
  local_588._s_0.Y = 0.0;
  dVar4 = local_588._s_0.X - local_268.Translation.ZW.m128d_f64[0];
  uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar59._8_8_ = 0;
  auVar59._0_8_ = dVar4;
  auVar53._8_4_ = SUB84(dVar36,0);
  auVar53._0_8_ = dVar45;
  auVar53._12_4_ = uVar52;
  unique0x10000f96 = SUB84(dVar11,0);
  local_568.Data = (FScriptContainerElement *)dVar11;
  unique0x10000f9a = iVar70;
  auVar20._8_4_ = SUB84(dVar36,0);
  auVar20._0_8_ = dVar45;
  auVar20._12_4_ = uVar52;
  auVar21 = blendpd(auVar20,auVar59,2);
  auVar69._8_4_ = SUB84(dVar11,0);
  auVar69._0_8_ = dVar10;
  auVar69._12_4_ = iVar70;
  auVar69 = blendpd(auVar68,auVar69,2);
  auVar54._0_8_ = auVar53._8_8_ * dVar9 - dVar58 * dVar45;
  auVar54._8_8_ = dVar4 * dVar58 - dVar10 * dVar36;
  dVar5 = auVar69._0_8_;
  dVar3 = auVar69._8_8_;
  auVar47._8_4_ = SUB84(auVar54._8_8_,0);
  auVar47._0_8_ = auVar54._0_8_;
  auVar47._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
  auVar22._0_8_ = auVar21._0_8_ * dVar10 - dVar5 * dVar4;
  auVar22._8_8_ = auVar21._8_8_ * dVar11 - dVar3 * 0.0;
  dVar46 = auVar47._8_8_ + auVar47._8_8_;
  dVar51 = auVar22._0_8_ + auVar22._0_8_;
  auVar21 = blendpd(auVar54,auVar22,2);
  auVar55._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar55._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar38._8_4_ = SUB84(dVar51,0);
  auVar38._0_8_ = dVar46;
  uVar52 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar38._12_4_ = uVar52;
  auVar39._0_8_ = auVar38._8_8_ * dVar9 - dVar46 * dVar58;
  auVar39._8_8_ = auVar55._0_8_ * dVar58 - dVar51 * dVar10;
  auVar23._8_4_ = SUB84(dVar51,0);
  auVar23._0_8_ = dVar46;
  auVar23._12_4_ = uVar52;
  auVar21 = blendpd(auVar23,auVar55,2);
  auVar24._0_8_ = auVar21._0_8_ * dVar10 - auVar55._0_8_ * dVar5;
  auVar24._8_8_ = auVar21._8_8_ * dVar11 - auVar55._8_8_ * dVar3;
  auVar21 = blendpd(auVar39,auVar24,2);
  local_388._s_0.Z = auVar55._0_8_ * dVar11 + dVar4 + auVar21._0_8_;
  local_388._s_0.X = dVar46 * dVar11 + dVar45 + auVar39._8_8_;
  local_388._s_0.Y = dVar51 * dVar11 + dVar36 + auVar24._0_8_;
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_388._s_0,local_348,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  dVar8 = (this->SocketAxis).field0_0x0._s_0.Z * local_268.Scale3D.ZW.m128d_f64[0];
  dVar4 = local_268.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar51 = local_268.Scale3D.XY.m128d_f64[0] * (this->SocketAxis).field0_0x0._s_0.X;
  dVar6 = local_268.Scale3D.XY.m128d_f64[1] * (this->SocketAxis).field0_0x0._s_0.Y;
  uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar45 = local_268.Rotation.ZW.m128d_f64[0];
  dVar57 = local_268.Rotation.XY.m128d_f64[1];
  auVar69 = blendpd((undefined1  [16])local_268.Rotation.XY.m128d_f64,
                    (undefined1  [16])local_268.Rotation.ZW.m128d_f64,2);
  auVar62._8_4_ = SUB84(dVar6,0);
  auVar62._0_8_ = dVar51;
  auVar62._12_4_ = uVar52;
  dVar46 = local_268.Rotation.ZW.m128d_f64[1];
  auVar25._8_4_ = SUB84(dVar6,0);
  auVar25._0_8_ = dVar51;
  auVar25._12_4_ = uVar52;
  auVar63._0_8_ = auVar62._8_8_ * local_268.Rotation.XY.m128d_f64[0] - dVar57 * dVar51;
  auVar63._8_8_ = dVar8 * dVar57 - dVar45 * dVar6;
  auVar21._8_4_ = SUB84(dVar4,0);
  auVar21._0_8_ = dVar8;
  auVar21._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar21 = blendpd(auVar25,auVar21,2);
  auVar26._0_8_ = auVar21._0_8_ * dVar45 - auVar69._0_8_ * dVar8;
  auVar26._8_8_ = auVar21._8_8_ * dVar46 - auVar69._8_8_ * dVar4;
  auVar21 = blendpd(auVar63,auVar26,2);
  dVar4 = auVar63._8_8_ + auVar63._8_8_;
  dVar36 = auVar26._0_8_ + auVar26._0_8_;
  uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar64._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar64._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar40._8_4_ = SUB84(dVar36,0);
  auVar40._0_8_ = dVar4;
  auVar40._12_4_ = uVar52;
  auVar27._8_4_ = SUB84(dVar36,0);
  auVar27._0_8_ = dVar4;
  auVar27._12_4_ = uVar52;
  auVar21 = blendpd(auVar27,auVar64,2);
  auVar41._0_8_ = auVar40._8_8_ * local_268.Rotation.XY.m128d_f64[0] - dVar4 * dVar57;
  auVar41._8_8_ = auVar64._0_8_ * dVar57 - dVar36 * dVar45;
  auVar28._0_8_ = auVar21._0_8_ * dVar45 - auVar64._0_8_ * auVar69._0_8_;
  auVar28._8_8_ = auVar21._8_8_ * dVar46 - auVar64._8_8_ * auVar69._8_8_;
  auVar21 = blendpd(auVar41,auVar28,2);
  local_400._s_0.Z = auVar64._0_8_ * dVar46 + dVar8 + auVar21._0_8_;
  dVar36 = dVar36 * dVar46 + dVar6 + auVar28._0_8_;
  local_400._8_4_ = SUB84(dVar36,0);
  local_400._0_8_ = dVar4 * dVar46 + dVar51 + auVar41._8_8_;
  local_400._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  pTVar17 = UE::Math::TVector<double>::GetSafeNormal
                      ((TVector<double> *)&local_400._s_0,&local_2e8,__real_3e45798ee0000000,
                       &UE::Math::TVector<double>::ZeroVector);
  auVar21 = *(undefined1 (*) [16])&pTVar17->field0_0x0;
  dVar4 = (pTVar17->field0_0x0)._s_0.Z;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = dVar4;
  dVar46 = auVar21._8_8_;
  auVar69 = blendpd(auVar21,auVar56,2);
  auVar60._0_8_ = dVar46 * dVar9 - dVar58 * auVar21._0_8_;
  auVar60._8_8_ = dVar4 * dVar58 - dVar10 * dVar46;
  auVar48._8_4_ = SUB84(auVar60._8_8_,0);
  auVar48._0_8_ = auVar60._0_8_;
  auVar48._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  auVar29._0_8_ = auVar69._0_8_ * dVar10 - dVar5 * dVar4;
  auVar29._8_8_ = auVar69._8_8_ * dVar11 - dVar3 * 0.0;
  auVar69 = blendpd(auVar60,auVar29,2);
  dVar36 = auVar48._8_8_ + auVar48._8_8_;
  dVar45 = auVar29._0_8_ + auVar29._0_8_;
  auVar61._0_8_ = auVar69._0_8_ + auVar69._0_8_;
  auVar61._8_8_ = auVar69._8_8_ + auVar69._8_8_;
  auVar42._8_4_ = SUB84(dVar45,0);
  auVar42._0_8_ = dVar36;
  uVar52 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar42._12_4_ = uVar52;
  auVar30._8_4_ = SUB84(dVar45,0);
  auVar30._0_8_ = dVar36;
  auVar30._12_4_ = uVar52;
  auVar69 = blendpd(auVar30,auVar61,2);
  auVar43._0_8_ = auVar42._8_8_ * dVar9 - dVar36 * dVar58;
  auVar43._8_8_ = auVar61._0_8_ * dVar58 - dVar45 * dVar10;
  auVar31._0_8_ = auVar69._0_8_ * dVar10 - auVar61._0_8_ * dVar5;
  auVar31._8_8_ = auVar69._8_8_ * dVar11 - auVar61._8_8_ * dVar3;
  local_3e8._s_0.X = dVar36 * (double)local_568.Data + auVar21._0_8_ + auVar43._8_8_;
  local_3e8._s_0.Y = dVar45 * dStack_560 + dVar46 + auVar31._0_8_;
  auVar21 = blendpd(auVar43,auVar31,2);
  local_418._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
  local_418._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
  local_418._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  local_3e8._s_0.Z = auVar61._0_8_ * (double)local_568.Data + dVar4 + auVar21._0_8_;
  local_430._s_0.X = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.X;
  local_430._s_0.Y = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Y;
  local_430._s_0.Z = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
  local_448._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  local_448._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_448._s_0.Y = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  FMath::GetAzimuthAndElevation
            ((TVector2<double> *)&local_5a0._s_0,(TVector<double> *)&local_3e8._s_0,
             (TVector<double> *)&local_418._s_0,(TVector<double> *)&local_430._s_0,
             (TVector<double> *)&local_448._s_0);
  FMath::GetAzimuthAndElevation
            ((TVector2<double> *)&local_5b0._s_0,local_348,(TVector<double> *)&local_418._s_0,
             (TVector<double> *)&local_430._s_0,(TVector<double> *)&local_448._s_0);
  dVar36 = __real_4076800000000000;
  dVar5 = __real_404ca5dc1a63c1f8;
  dVar4 = FGenericPlatformMath::Fmod
                    ((local_5b0._s_0.X - local_5a0._s_0.X) * __real_404ca5dc1a63c1f8,
                     __real_4076800000000000);
  dVar3 = __real_4066800000000000;
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar36;
  }
  if (__real_4066800000000000 < dVar4) {
    dVar4 = dVar4 - dVar36;
  }
  (this->CurrentBlendInput).field0_0x0._s_0.X = dVar4;
  dVar4 = FGenericPlatformMath::Fmod((local_5b0._s_0.Y - local_5a0._s_0.Y) * dVar5,dVar36);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar36;
  }
  if (dVar3 < dVar4) {
    dVar4 = dVar4 - dVar36;
  }
  (this->CurrentBlendInput).field0_0x0._s_0.Y = dVar4;
  pTVar14 = CVarAimOffsetLookAtDebug.Ref;
  bVar15 = IsInParallelGameThread();
  if (bVar15) {
LAB_146473923:
    lVar18 = 0;
  }
  else {
    bVar15 = IsInGameThread();
    lVar18 = 4;
    if (bVar15) goto LAB_146473923;
  }
  fVar13 = __real_bf800000;
  if (*(int *)((longlong)pTVar14->ShadowedValue + lVar18) == 1) {
    local_3d0._s_0.Z = local_588._s_0.X;
    local_3d0._s_0.X = (double)local_4a8._0_8_;
    local_3d0._s_0.Y = (double)local_4a8._8_8_;
    local_3b8._s_0.X = local_268.Translation.XY.m128d_f64[0];
    local_3b8._s_0.Y = local_268.Translation.XY.m128d_f64[1];
    local_3b8._s_0.Z = local_268.Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugLine
              (this_00,(TVector<double> *)&local_3b8._s_0,(TVector<double> *)&local_3d0._s_0,
               &FColor::Green,false,__real_bf800000,0.0,SDPG_World);
    dVar8 = local_268.Translation.XY.m128d_f64[1];
    dVar6 = local_268.Translation.XY.m128d_f64[0];
    dVar51 = (this->SocketAxis).field0_0x0._s_0.Z * local_268.Scale3D.ZW.m128d_f64[0];
    dVar4 = local_268.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar9 = local_268.Translation.ZW.m128d_f64[0];
    dVar45 = local_268.Scale3D.XY.m128d_f64[0] * (this->SocketAxis).field0_0x0._s_0.X;
    dVar46 = local_268.Scale3D.XY.m128d_f64[1] * (this->SocketAxis).field0_0x0._s_0.Y;
    uVar52 = (undefined4)((ulonglong)dVar46 >> 0x20);
    dVar3 = local_268.Rotation.ZW.m128d_f64[0];
    dVar58 = local_268.Rotation.XY.m128d_f64[1];
    auVar69 = blendpd((undefined1  [16])local_268.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_268.Rotation.ZW.m128d_f64,2);
    auVar65._8_4_ = SUB84(dVar46,0);
    auVar65._0_8_ = dVar45;
    auVar65._12_4_ = uVar52;
    dVar36 = local_268.Rotation.ZW.m128d_f64[1];
    auVar32._8_4_ = SUB84(dVar46,0);
    auVar32._0_8_ = dVar45;
    auVar32._12_4_ = uVar52;
    auVar66._0_8_ = auVar65._8_8_ * local_268.Rotation.XY.m128d_f64[0] - dVar45 * dVar58;
    auVar66._8_8_ = dVar51 * dVar58 - dVar46 * dVar3;
    auVar7._8_4_ = SUB84(dVar4,0);
    auVar7._0_8_ = dVar51;
    auVar7._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar21 = blendpd(auVar32,auVar7,2);
    auVar33._0_8_ = auVar21._0_8_ * dVar3 - auVar69._0_8_ * dVar51;
    auVar33._8_8_ = auVar21._8_8_ * dVar36 - auVar69._8_8_ * dVar4;
    auVar21 = blendpd(auVar66,auVar33,2);
    dVar4 = auVar66._8_8_ + auVar66._8_8_;
    dVar5 = auVar33._0_8_ + auVar33._0_8_;
    uVar52 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar67._0_8_ = auVar21._0_8_ + auVar21._0_8_;
    auVar67._8_8_ = auVar21._8_8_ + auVar21._8_8_;
    auVar49._8_4_ = SUB84(dVar5,0);
    auVar49._0_8_ = dVar4;
    auVar49._12_4_ = uVar52;
    auVar34._8_4_ = SUB84(dVar5,0);
    auVar34._0_8_ = dVar4;
    auVar34._12_4_ = uVar52;
    auVar21 = blendpd(auVar34,auVar67,2);
    auVar50._0_8_ = auVar49._8_8_ * local_268.Rotation.XY.m128d_f64[0] - dVar4 * dVar58;
    auVar50._8_8_ = auVar67._0_8_ * dVar58 - dVar5 * dVar3;
    auVar35._0_8_ = auVar21._0_8_ * dVar3 - auVar67._0_8_ * auVar69._0_8_;
    auVar35._8_8_ = auVar21._8_8_ * dVar36 - auVar67._8_8_ * auVar69._8_8_;
    auVar21 = blendpd(auVar50,auVar35,2);
    dVar5 = dVar5 * dVar36 + dVar46 + auVar35._0_8_;
    local_3a0._s_0.Z = auVar67._0_8_ * dVar36 + dVar51 + auVar21._0_8_;
    local_3a0._8_4_ = SUB84(dVar5,0);
    local_3a0._0_8_ = dVar4 * dVar36 + dVar45 + auVar50._8_8_;
    local_3a0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    pTVar17 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_3a0._s_0,local_2d0,__real_3e45798ee0000000,
                         &UE::Math::TVector<double>::ZeroVector);
    dVar4 = SQRT(((double)local_4a8._8_8_ - dVar8) * ((double)local_4a8._8_8_ - dVar8) +
                 ((double)local_4a8._0_8_ - dVar6) * ((double)local_4a8._0_8_ - dVar6) +
                 (local_588._s_0.X - dVar9) * (local_588._s_0.X - dVar9));
    local_588._s_0.Z = dVar9;
    local_588._s_0.X = dVar6;
    local_588._s_0.Y = dVar8;
    dStack_560 = dVar8 + dVar4 * (pTVar17->field0_0x0)._s_0.Y;
    local_568.Data = (FScriptContainerElement *)(dVar4 * (pTVar17->field0_0x0)._s_0.X + dVar6);
    local_558 = dVar9 + dVar4 * (pTVar17->field0_0x0)._s_0.Z;
    FAnimInstanceProxy::AnimDrawDebugLine
              (this_00,(TVector<double> *)&local_588._s_0,(TVector<double> *)&local_568,&FColor::Red
               ,false,fVar13,0.0,SDPG_World);
    local_368.X = local_488._s_0.X;
    local_368.Y = local_488._s_0.Y;
    local_368.Z = local_528._s_0.X;
    local_368.W = local_528._s_0.Y;
    pTVar19 = UE::Math::TQuat<double>::Rotator(&local_368,&local_288);
    local_528._s_0.X = (double)local_468;
    local_528._s_0.Y = dStack_460;
    local_528._s_0.Z = local_548._s_0.X;
    FAnimInstanceProxy::AnimDrawDebugCoordinateSystem
              (this_00,(TVector<double> *)&local_528._s_0,pTVar19,__real_42c80000,false,fVar13,0.0,
               SDPG_World);
    ::FString::PrintfImpl
              (&local_4b8,L"Socket (X:%f, Y:%f), Target (X:%f, Y:%f), Result (X:%f, Y:%f)");
    FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
              (this_00,&local_4b8,&FColor::Red,&UE::Math::TVector2<double>::UnitVector,SDPG_World);
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
  }
LAB_146473ce9:
  local_548._s_0.X = (this->CurrentBlendInput).field0_0x0._s_0.X;
  local_548._s_0.Y = (this->CurrentBlendInput).field0_0x0._s_0.Y;
  local_548._s_0.Z = 0.0;
  UBlendSpace::FilterInput
            (this_01,(TVector<double> *)&local_488._s_0,(FBlendFilter *)&this->_padding_,
             (TVector<double> *)&local_548._s_0,*(float *)&this->_padding_);
  UBlendSpace::UpdateBlendSamples
            (this_01,(TVector<double> *)&local_488._s_0,*(float *)&this->_padding_,
             (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)&this->_padding_,
             (int *)&this->_padding_);
  return;
}

