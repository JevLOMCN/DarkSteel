// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463d4540

UScriptStruct * __cdecl FAnimNode_ModifyBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone,(UObject *)pUVar1,
                         L"AnimNode_ModifyBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton;
}

// FAnimNode_ModifyBone @ 1464046f0

FAnimNode_ModifyBone * __thiscall
FAnimNode_ModifyBone::FAnimNode_ModifyBone(FAnimNode_ModifyBone *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_ModifyBone__6B_;
  (this->BoneToModify).BoneName.ComparisonIndex = 0;
  (this->BoneToModify).BoneName.Number = 0;
  puVar1 = &(this->BoneToModify).field_0x8;
  (this->BoneToModify).BoneIndex = -1;
  (this->BoneToModify).bUseSkeletonIndex = 0;
  (this->BoneToModify).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Translation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Translation).field0_0x0._s_0.Y = (double)uVar2;
  (this->Translation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar3;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  this->TranslationMode = '\0';
  this->RotationMode = '\0';
  this->ScaleMode = '\0';
  this->TranslationSpace = '\x01';
  this->RotationSpace = '\x01';
  this->ScaleSpace = '\x01';
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642f9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_ModifyBone::EvaluateSkeletalControl_AnyThread
          (FAnimNode_ModifyBone *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FBoneReference *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> TVar6;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> TVar7;
  bool bVar8;
  FCompactPoseBoneIndex FVar9;
  int iVar10;
  TTransform<double> *pTVar11;
  TQuat<double> *pTVar12;
  undefined4 extraout_var;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_298 [32];
  FCompactPoseBoneIndex local_248;
  undefined1 local_244 [20];
  FWeakObjectPtr local_230;
  undefined1 local_228 [16];
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_208;
  FReferenceSkeleton *pFStack_200;
  ForAnyElementType local_1f8;
  double dStack_1f0;
  TQuat<double> local_1e8;
  TTransform<double> local_1c8;
  FScriptContainerElement local_168 [8];
  FSkelMeshRefPoseOverride *pFStack_160;
  FSharedReferencer<1> local_158;
  double dStack_150;
  FScriptContainerElement *local_148;
  double dStack_140;
  FScriptContainerElement *local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr FStack_100;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyBone::EvaluateSkeletalControl_AnyThread");
  if ((param_2->ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutBoneTransforms.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_ModifyBone.cpp"
                         ,0x2d,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->BoneToModify;
  FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)&local_248);
  pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_248);
  local_1c8.Rotation.XY.m128d_f64 = *&(pTVar11->Rotation).XY.m128d_f64;
  local_1c8.Rotation.ZW.m128d_f64 = *&(pTVar11->Rotation).ZW.m128d_f64;
  local_1c8.Translation.XY.m128d_f64 = *&(pTVar11->Translation).XY.m128d_f64;
  local_1c8.Translation.ZW.m128d_f64 = *&(pTVar11->Translation).ZW.m128d_f64;
  local_1c8.Scale3D.XY.m128d_f64 = *&(pTVar11->Scale3D).XY.m128d_f64;
  local_1c8.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_1c8.Scale3D.ZW.m128d_f64[1] = *(double *)((pTVar11->Scale3D).ZW.m128d_f64 + 1);
  lVar13 = param_1->_padding_;
  local_f8.Rotation.XY.m128d_f64[0] = *(double *)(lVar13 + 0x20);
  local_f8.Rotation.XY.m128d_f64[1] = *(double *)(lVar13 + 0x28);
  local_f8.Rotation.ZW.m128d_f64[0] = *(double *)(lVar13 + 0x30);
  local_f8.Rotation.ZW.m128d_f64[1] = *(double *)(lVar13 + 0x38);
  local_f8.Translation.XY.m128d_f64[0] = *(double *)(lVar13 + 0x40);
  local_f8.Translation.XY.m128d_f64[1] = *(double *)(lVar13 + 0x48);
  local_f8.Translation.ZW.m128d_f64[0] = *(double *)(lVar13 + 0x50);
  local_f8.Translation.ZW.m128d_f64[1] = *(double *)(lVar13 + 0x58);
  local_f8.Scale3D.XY.m128d_f64[0] = *(double *)(lVar13 + 0x60);
  local_f8.Scale3D.XY.m128d_f64[1] = *(double *)(lVar13 + 0x68);
  local_f8.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar13 + 0x70);
  local_f8.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar13 + 0x78);
  if ((this->ScaleMode).Value != '\0') {
    FAnimationRuntime::ConvertCSTransformToBoneSpace
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->ScaleSpace).Value);
    if ((this->ScaleMode).Value == '\x02') {
      dVar3 = local_1c8.Scale3D.XY.m128d_f64[0] * (this->Scale).field0_0x0._s_0.X;
      local_244._4_8_ = local_1c8.Scale3D.XY.m128d_f64[0];
      local_244._12_8_ = local_1c8.Scale3D.XY.m128d_f64[1];
      local_1c8.Scale3D.XY.m128d_f64[1] =
           local_1c8.Scale3D.XY.m128d_f64[1] * (this->Scale).field0_0x0._s_0.Y;
      uVar14 = SUB84(local_1c8.Scale3D.XY.m128d_f64[1],0);
      uVar15 = (undefined4)((ulonglong)local_1c8.Scale3D.XY.m128d_f64[1] >> 0x20);
      local_230 = (FWeakObjectPtr)local_1c8.Scale3D.ZW.m128d_f64[0];
      local_218 = (FWeakObjectPtr)
                  (local_1c8.Scale3D.ZW.m128d_f64[0] * (this->Scale).field0_0x0._s_0.Z);
      local_228._8_4_ = uVar14;
      local_228._0_8_ = dVar3;
      local_228._12_4_ = uVar15;
      local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar14;
      local_1c8.Scale3D.XY.m128d_f64[0] = dVar3;
      local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar15;
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)local_218;
    }
    else {
      local_1c8.Scale3D.XY.m128d_f64 = *(double (*) [2])&(this->Scale).field0_0x0;
      local_1c8.Scale3D.ZW.m128d_f64[0] = (this->Scale).field0_0x0._s_0.Z;
    }
    local_1c8.Scale3D.ZW.m128d_f64[1] = 0.0;
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->ScaleSpace).Value);
  }
  if ((this->RotationMode).Value != '\0') {
    FAnimationRuntime::ConvertCSTransformToBoneSpace
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->RotationSpace).Value);
    pTVar12 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_1e8);
    local_208 = (FWeakObjectPtr)pTVar12->X;
    pFStack_200 = (FReferenceSkeleton *)pTVar12->Y;
    local_1f8.Data = (FScriptContainerElement *)pTVar12->Z;
    dStack_1f0 = pTVar12->W;
    TVar7 = *(TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)pTVar12;
    TVar6 = *(TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)&pTVar12->Z;
    if ((this->RotationMode).Value == '\x02') {
      dVar3 = (double)local_208 * local_1c8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              local_1c8.Rotation.ZW.m128d_f64[1] * dStack_1f0 +
              local_1c8.Rotation.XY.m128d_f64[1] * (double)pFStack_200 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              (double)local_1f8.Data * local_1c8.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      TVar6.ArrayNum = SUB84(dVar3,0);
      TVar6.AllocatorInstance.Data =
           (FScriptContainerElement *)
           ((double)local_208 * local_1c8.Rotation.XY.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            local_1c8.Rotation.ZW.m128d_f64[0] * dStack_1f0 +
            local_1c8.Rotation.XY.m128d_f64[0] * (double)pFStack_200 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)local_1f8.Data * local_1c8.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]);
      TVar6.ArrayMax = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = local_1c8.Rotation.ZW.m128d_f64[0] * (double)local_208 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              local_1c8.Rotation.XY.m128d_f64[1] * dStack_1f0 +
              local_1c8.Rotation.ZW.m128d_f64[1] * (double)pFStack_200 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              (double)local_1f8.Data * local_1c8.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      TVar7.ArrayNum = SUB84(dVar3,0);
      TVar7.AllocatorInstance.Data =
           (FScriptContainerElement *)
           (local_1c8.Rotation.ZW.m128d_f64[1] * (double)local_208 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            local_1c8.Rotation.XY.m128d_f64[0] * dStack_1f0 +
            local_1c8.Rotation.ZW.m128d_f64[0] * (double)pFStack_200 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)local_1f8.Data * local_1c8.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]);
      TVar7.ArrayMax = (int)((ulonglong)dVar3 >> 0x20);
    }
    local_1c8.Rotation.ZW.m128d_f64 = (double  [2])TVar6;
    local_1c8.Rotation.XY.m128d_f64 = (double  [2])TVar7;
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->RotationSpace).Value);
  }
  if ((this->TranslationMode).Value != '\0') {
    FAnimationRuntime::ConvertCSTransformToBoneSpace
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->TranslationSpace).Value);
    dVar3 = (this->Translation).field0_0x0._s_0.Z;
    if ((this->TranslationMode).Value == '\x02') {
      dVar4 = local_1c8.Translation.XY.m128d_f64[1] + (this->Translation).field0_0x0._s_0.Y;
      dVar5 = local_1c8.Translation.ZW.m128d_f64[1] + 0.0;
      local_1c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4,0);
      local_1c8.Translation.XY.m128d_f64[0] =
           local_1c8.Translation.XY.m128d_f64[0] + (this->Translation).field0_0x0._s_0.X;
      local_1c8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_1c8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
      local_1c8.Translation.ZW.m128d_f64[0] = local_1c8.Translation.ZW.m128d_f64[0] + dVar3;
      local_1c8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      local_1c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_1c8.Translation.ZW.m128d_f64[0] = dVar3;
      local_1c8.Translation.XY.m128d_f64 =
           (double  [2])
           *(TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *)
            &(this->Translation).field0_0x0;
    }
    FAnimationRuntime::ConvertBoneSpaceTransformToCS
              (&local_f8,&param_1->Pose,&local_1c8,local_248,(uint)(this->TranslationSpace).Value);
  }
  FVar9 = FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)local_244);
  local_168._0_4_ = *(undefined4 *)CONCAT44(extraout_var,FVar9);
  local_158.ReferenceController = (TReferenceControllerBase<1> *)local_1c8.Rotation.XY.m128d_f64[0];
  dStack_150 = local_1c8.Rotation.XY.m128d_f64[1];
  local_148 = (FScriptContainerElement *)local_1c8.Rotation.ZW.m128d_f64[0];
  dStack_140 = local_1c8.Rotation.ZW.m128d_f64[1];
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_138 = (FScriptContainerElement *)local_1c8.Translation.XY.m128d_f64[0];
  dStack_130 = local_1c8.Translation.XY.m128d_f64[1];
  local_128 = local_1c8.Translation.ZW.m128d_f64[0];
  dStack_120 = local_1c8.Translation.ZW.m128d_f64[1];
  local_118 = local_1c8.Scale3D.XY.m128d_f64[0];
  dStack_110 = local_1c8.Scale3D.XY.m128d_f64[1];
  local_108 = (FWeakObjectPtr)local_1c8.Scale3D.ZW.m128d_f64[0];
  FStack_100 = (FWeakObjectPtr)local_1c8.Scale3D.ZW.m128d_f64[1];
  if (((pFVar1 <= local_168) && (local_168 < pFVar1 + (longlong)param_2->ArrayMax * 0x70)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar10 = param_2->ArrayNum;
  if (iVar10 == param_2->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar10 + 1;
  lVar13 = (longlong)iVar10 * 0x70;
  pFVar1 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar1 + lVar13) = CONCAT44(local_168._4_4_,local_168._0_4_);
  *(FSkelMeshRefPoseOverride **)(pFVar1 + lVar13 + 8) = pFStack_160;
  *(TReferenceControllerBase<1> **)(pFVar1 + lVar13 + 0x10) = local_158.ReferenceController;
  *(double *)(pFVar1 + lVar13 + 0x10 + 8) = dStack_150;
  *(FScriptContainerElement **)(pFVar1 + lVar13 + 0x20) = local_148;
  *(double *)(pFVar1 + lVar13 + 0x20 + 8) = dStack_140;
  *(FScriptContainerElement **)(pFVar1 + lVar13 + 0x30) = local_138;
  *(double *)(pFVar1 + lVar13 + 0x30 + 8) = dStack_130;
  *(double *)(pFVar1 + lVar13 + 0x40) = local_128;
  *(double *)(pFVar1 + lVar13 + 0x40 + 8) = dStack_120;
  *(double *)(pFVar1 + lVar13 + 0x50) = local_118;
  *(double *)(pFVar1 + lVar13 + 0x50 + 8) = dStack_110;
  *(FWeakObjectPtr *)(pFVar1 + lVar13 + 0x60) = local_108;
  ((FWeakObjectPtr *)(pFVar1 + lVar13 + 0x60))[1] = FStack_100;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Target"
             ,&this_00->BoneName);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146444760

void __thiscall
FAnimNode_ModifyBone::GatherDebugData(FAnimNode_ModifyBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyBone::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyBone,(UObject *)pUVar1,
                         L"AnimNode_ModifyBone");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyBone.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_48,"(",1);
  ::FString::PrintfImpl(&local_58,L"Alpha: %.1f%%");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->BoneToModify).BoneName,local_38);
  ::FString::PrintfImpl(&local_58,L" Target: %s)");
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_58,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146457250

void __thiscall
FAnimNode_ModifyBone::InitializeBoneReferences(FAnimNode_ModifyBone *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ModifyBone::InitializeBoneReferences");
  FBoneReference::Initialize(&this->BoneToModify,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bbe0

bool __thiscall
FAnimNode_ModifyBone::IsValidToEvaluate
          (FAnimNode_ModifyBone *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->BoneToModify,param_2);
  return bVar1;
}

