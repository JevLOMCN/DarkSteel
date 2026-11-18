// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463ede40

UScriptStruct * __cdecl FAnimNode_CopyBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone,(UObject *)pUVar1,
                         L"AnimNode_CopyBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton;
}

// FAnimNode_CopyBone @ 146403940

FAnimNode_CopyBone * __thiscall FAnimNode_CopyBone::FAnimNode_CopyBone(FAnimNode_CopyBone *this)

{
  undefined1 *puVar1;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_CopyBone__6B_;
  (this->SourceBone).BoneName.ComparisonIndex = 0;
  (this->SourceBone).BoneName.Number = 0;
  puVar1 = &(this->SourceBone).field_0x8;
  (this->SourceBone).BoneIndex = -1;
  (this->SourceBone).bUseSkeletonIndex = 0;
  (this->SourceBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->TargetBone).BoneName.ComparisonIndex = 0;
  (this->TargetBone).BoneName.Number = 0;
  puVar1 = &(this->TargetBone).field_0x8;
  (this->TargetBone).BoneIndex = -1;
  (this->TargetBone).bUseSkeletonIndex = 0;
  (this->TargetBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bCopyTranslation = false;
  this->bCopyRotation = false;
  this->bCopyScale = false;
  this->ControlSpace = '\x01';
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_CopyBone::EvaluateSkeletalControl_AnyThread
          (FAnimNode_CopyBone *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  byte bVar1;
  FCompactPoseBoneIndex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  TTransform<double> *pTVar8;
  longlong lVar9;
  undefined1 auStackY_208 [32];
  FCompactPoseBoneIndex local_1b8;
  FCompactPoseBoneIndex local_1b4;
  FScriptContainerElement *local_1b0;
  double dStack_1a8;
  FScriptContainerElement *local_1a0;
  ForElementType<unsigned_int> local_198;
  ForElementType<unsigned_int> FStack_190;
  FWeakObjectPtr local_188;
  TTransform<double> local_178;
  FCompactPoseBoneIndex local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  FWeakObjectPtr local_108;
  FWeakObjectPtr FStack_100;
  FScriptContainerElement *local_f8;
  double dStack_f0;
  FScriptContainerElement *local_e8;
  double dStack_e0;
  FScriptContainerElement *local_d8;
  FSkelMeshRefPoseOverride *pFStack_d0;
  FSharedReferencer<1> local_c8;
  ForElementType<unsigned_int> FStack_c0;
  FWeakObjectPtr local_b8;
  FWeakObjectPtr FStack_b0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBone::EvaluateSkeletalControl_AnyThread");
  if (param_2->ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutBoneTransforms.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_CopyBone.cpp"
                       ,0x28,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((this->bCopyTranslation != false) || (this->bCopyRotation != false)) ||
     (this->bCopyScale != false)) {
    FBoneReference::GetCompactPoseIndex(&this->SourceBone,(FBoneContainer *)&local_1b4);
    FBoneReference::GetCompactPoseIndex(&this->TargetBone,(FBoneContainer *)&local_1b8);
    pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_1b4);
    local_a8.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    local_a8.Rotation.XY.m128d_f64[1] = *(double *)((pTVar8->Rotation).XY.m128d_f64 + 1);
    local_a8.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    local_a8.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_a8.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    local_a8.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
    local_a8.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    local_a8.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
    local_a8.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    local_a8.Scale3D.XY.m128d_f64[1] = *(double *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
    local_a8.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
    local_a8.Scale3D.ZW.m128d_f64[1] = (pTVar8->Scale3D).ZW.m128d_f64[1];
    pTVar8 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_1b8);
    local_178.Rotation.XY.m128d_f64[0] = (pTVar8->Rotation).XY.m128d_f64[0];
    local_178.Rotation.XY.m128d_f64[1] = *(double *)((pTVar8->Rotation).XY.m128d_f64 + 1);
    local_178.Rotation.ZW.m128d_f64[0] = (pTVar8->Rotation).ZW.m128d_f64[0];
    local_178.Rotation.ZW.m128d_f64[1] = (pTVar8->Rotation).ZW.m128d_f64[1];
    local_178.Translation.XY.m128d_f64[0] = (pTVar8->Translation).XY.m128d_f64[0];
    local_178.Translation.XY.m128d_f64[1] = (pTVar8->Translation).XY.m128d_f64[1];
    local_178.Translation.ZW.m128d_f64[0] = (pTVar8->Translation).ZW.m128d_f64[0];
    local_178.Translation.ZW.m128d_f64[1] = (pTVar8->Translation).ZW.m128d_f64[1];
    local_178.Scale3D.XY.m128d_f64[0] = (pTVar8->Scale3D).XY.m128d_f64[0];
    local_178.Scale3D.XY.m128d_f64[1] = *(double *)((pTVar8->Scale3D).XY.m128d_f64 + 1);
    local_178.Scale3D.ZW.m128d_f64[0] = (pTVar8->Scale3D).ZW.m128d_f64[0];
    local_178.Scale3D.ZW.m128d_f64[1] = *(double *)((pTVar8->Scale3D).ZW.m128d_f64 + 1);
    bVar1 = (this->ControlSpace).Value;
    bVar6 = 1;
    if (bVar1 != 1) {
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_a8,
                 local_1b4,(uint)bVar1);
      FAnimationRuntime::ConvertCSTransformToBoneSpace
                ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_178,
                 local_1b8,(uint)(this->ControlSpace).Value);
      bVar6 = (this->ControlSpace).Value;
    }
    if (this->bCopyTranslation != false) {
      local_1b0 = (FScriptContainerElement *)local_a8.Translation.XY.m128d_f64[0];
      dStack_1a8 = local_a8.Translation.XY.m128d_f64[1];
      local_178.Translation.XY.m128d_f64[0] = local_a8.Translation.XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] = local_a8.Translation.XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64[0] = local_a8.Translation.ZW.m128d_f64[0];
      local_178.Translation.ZW.m128d_f64[1] = 0.0;
      local_1a0 = (FScriptContainerElement *)local_a8.Translation.ZW.m128d_f64[0];
    }
    if (this->bCopyRotation != false) {
      local_178.Rotation.XY.m128d_f64[0] = local_a8.Rotation.XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = local_a8.Rotation.XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = local_a8.Rotation.ZW.m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = local_a8.Rotation.ZW.m128d_f64[1];
    }
    if (this->bCopyScale != false) {
      local_198 = (ForElementType<unsigned_int>)local_a8.Scale3D.XY.m128d_f64[0];
      FStack_190 = (ForElementType<unsigned_int>)local_a8.Scale3D.XY.m128d_f64[1];
      local_178.Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0];
      local_178.Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1];
      local_178.Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0];
      local_178.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_188 = (FWeakObjectPtr)local_a8.Scale3D.ZW.m128d_f64[0];
    }
    if (bVar6 != 1) {
      FAnimationRuntime::ConvertBoneSpaceTransformToCS
                ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_178,
                 local_1b8,(uint)bVar6);
    }
    pFVar2 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
    local_108 = (FWeakObjectPtr)local_178.Rotation.XY.m128d_f64[0];
    FStack_100 = (FWeakObjectPtr)local_178.Rotation.XY.m128d_f64[1];
    local_f8 = (FScriptContainerElement *)local_178.Rotation.ZW.m128d_f64[0];
    dStack_f0 = local_178.Rotation.ZW.m128d_f64[1];
    local_118 = local_1b8;
    local_e8 = (FScriptContainerElement *)local_178.Translation.XY.m128d_f64[0];
    dStack_e0 = local_178.Translation.XY.m128d_f64[1];
    local_d8 = (FScriptContainerElement *)local_178.Translation.ZW.m128d_f64[0];
    pFStack_d0 = (FSkelMeshRefPoseOverride *)local_178.Translation.ZW.m128d_f64[1];
    local_c8.ReferenceController = (TReferenceControllerBase<1> *)local_178.Scale3D.XY.m128d_f64[0];
    FStack_c0 = (ForElementType<unsigned_int>)local_178.Scale3D.XY.m128d_f64[1];
    local_b8 = (FWeakObjectPtr)local_178.Scale3D.ZW.m128d_f64[0];
    FStack_b0 = (FWeakObjectPtr)local_178.Scale3D.ZW.m128d_f64[1];
    if ((pFVar2 <= &local_118) && (&local_118 < pFVar2 + (longlong)param_2->ArrayMax * 0x1c)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    lVar9 = (longlong)iVar7 * 0x70;
    pFVar3 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar3 + lVar9) = CONCAT44(uStack_114,local_118);
    *(undefined8 *)(pFVar3 + lVar9 + 8) = uStack_110;
    *(FWeakObjectPtr *)(pFVar3 + lVar9 + 0x10) = local_108;
    ((FWeakObjectPtr *)(pFVar3 + lVar9 + 0x10))[1] = FStack_100;
    *(FScriptContainerElement **)(pFVar3 + lVar9 + 0x20) = local_f8;
    *(double *)(pFVar3 + lVar9 + 0x20 + 8) = dStack_f0;
    *(FScriptContainerElement **)(pFVar3 + lVar9 + 0x30) = local_e8;
    *(double *)(pFVar3 + lVar9 + 0x30 + 8) = dStack_e0;
    *(FScriptContainerElement **)(pFVar3 + lVar9 + 0x40) = local_d8;
    *(FSkelMeshRefPoseOverride **)(pFVar3 + lVar9 + 0x40 + 8) = pFStack_d0;
    *(ForElementType<unsigned_int> *)(pFVar3 + lVar9 + 0x50) =
         (ForElementType<unsigned_int>)local_c8.ReferenceController;
    ((ForElementType<unsigned_int> *)(pFVar3 + lVar9 + 0x50))[1] = FStack_c0;
    *(FWeakObjectPtr *)(pFVar3 + lVar9 + 0x60) = local_b8;
    ((FWeakObjectPtr *)(pFVar3 + lVar9 + 0x60))[1] = FStack_b0;
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Source Bone",&(this->SourceBone).BoneName);
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
               L"Target Bone",&(this->TargetBone).BoneName);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1464430f0

void __thiscall
FAnimNode_CopyBone::GatherDebugData(FAnimNode_CopyBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBone::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CopyBone,(UObject *)pUVar1,
                         L"AnimNode_CopyBone");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_CopyBone.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_68);
  ::FString::PrintfImpl(&local_58,L"%s<W:%.1f%%> %s");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(&local_58,"(",1);
  ::FString::PrintfImpl(&local_68,L"Alpha: %.1f%%");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FName::ToString(&(this->TargetBone).BoneName,local_38);
  ::FName::ToString(&(this->SourceBone).BoneName,&local_48);
  ::FString::PrintfImpl(&local_68,L" Src: %s Dst: %s)");
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_68,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146456820

void __thiscall
FAnimNode_CopyBone::InitializeBoneReferences(FAnimNode_CopyBone *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_CopyBone::InitializeBoneReferences");
  FBoneReference::Initialize(&this->SourceBone,param_1);
  FBoneReference::Initialize(&this->TargetBone,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645b840

bool __thiscall
FAnimNode_CopyBone::IsValidToEvaluate
          (FAnimNode_CopyBone *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->TargetBone,param_2);
  if (!bVar1) {
    return false;
  }
  if (((this->TargetBone).BoneName != (this->SourceBone).BoneName) &&
     (bVar1 = FBoneReference::IsValidToEvaluate(&this->SourceBone,param_2), !bVar1)) {
    return false;
  }
  return true;
}

