// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 6

// StaticStruct @ 1463d56a0

UScriptStruct * __cdecl FAnimNode_ObserveBone::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ObserveBone.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ObserveBone.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ObserveBone,(UObject *)pUVar1,
                         L"AnimNode_ObserveBone");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ObserveBone.OuterSingleton;
}

// FAnimNode_ObserveBone @ 1464048a0

FAnimNode_ObserveBone * __thiscall
FAnimNode_ObserveBone::FAnimNode_ObserveBone(FAnimNode_ObserveBone *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->_padding_ = (longlong)&___7FAnimNode_ObserveBone__6B_;
  (this->BoneToObserve).BoneName.ComparisonIndex = 0;
  (this->BoneToObserve).BoneName.Number = 0;
  puVar1 = &(this->BoneToObserve).field_0x8;
  (this->BoneToObserve).BoneIndex = -1;
  (this->BoneToObserve).bUseSkeletonIndex = 0;
  (this->BoneToObserve).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->DisplaySpace = '\x01';
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bRelativeToRefPose = false;
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
  return this;
}

// EvaluateSkeletalControl_AnyThread @ 14642ff30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_ObserveBone::EvaluateSkeletalControl_AnyThread
          (FAnimNode_ObserveBone *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  __m128d *p_Var1;
  __m128d *p_Var2;
  double dVar3;
  longlong lVar4;
  code *pcVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  bool bVar9;
  uint uVar10;
  TTransform<double> *pTVar11;
  TRotator<double> *pTVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStackY_188 [32];
  FCompactPoseBoneIndex local_158;
  TQuat<double> local_148;
  TRotator<double> local_128;
  TVector<double> local_110;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FStatsHierarchical::BeginMeasurement("FAnimNode_ObserveBone::EvaluateSkeletalControl_AnyThread");
  lVar4 = *(longlong *)&(param_1->Pose).Pose.field_0x10;
  FBoneReference::GetCompactPoseIndex(&this->BoneToObserve,(FBoneContainer *)&local_158);
  pTVar11 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->Pose,local_158);
  local_f8.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  local_f8.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
  local_f8.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_f8.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
  local_f8.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  local_f8.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
  local_f8.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  local_f8.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
  local_f8.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  local_f8.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
  local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
  FAnimationRuntime::ConvertCSTransformToBoneSpace
            ((TTransform<double> *)(param_1->_padding_ + 0x20),&param_1->Pose,&local_f8,local_158,
             (uint)(this->DisplaySpace).Value);
  if (this->bRelativeToRefPose == false) {
    local_148.X._0_4_ = local_f8.Rotation.XY.m128d_f64[0]._0_4_;
    local_148.X._4_4_ = local_f8.Rotation.XY.m128d_f64[0]._4_4_;
    local_148.Y._0_4_ = local_f8.Rotation.XY.m128d_f64[1]._0_4_;
    local_148.Y._4_4_ = local_f8.Rotation.XY.m128d_f64[1]._4_4_;
    local_148.Z._0_4_ = local_f8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_148.Z._4_4_ = local_f8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_148.W._0_4_ = local_f8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_148.W._4_4_ = local_f8.Rotation.ZW.m128d_f64[1]._4_4_;
    uVar15 = local_f8.Translation.ZW.m128d_f64[0]._0_4_;
    uVar16 = local_f8.Translation.ZW.m128d_f64[0]._4_4_;
    uVar17 = local_f8.Translation.XY.m128d_f64[0]._0_4_;
    uVar18 = local_f8.Translation.XY.m128d_f64[0]._4_4_;
    iVar19 = local_f8.Translation.XY.m128d_f64[1]._0_4_;
    iVar20 = local_f8.Translation.XY.m128d_f64[1]._4_4_;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x48);
    uVar14 = (this->BoneToObserve).BoneIndex;
    uVar10 = 0;
    if ((int)uVar14 < *(int *)(lVar4 + 0x38)) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                        (&local_f8,&local_98,
                         (TTransform<double> *)
                         ((longlong)(int)uVar14 * 0x60 + *(longlong *)(lVar4 + 0x30)));
    local_f8.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
    pdVar6 = (pTVar11->Rotation).XY.m128d_f64 + 1;
    local_f8.Rotation.XY.m128d_f64[1] = *pdVar6;
    p_Var1 = &(pTVar11->Rotation).ZW;
    local_f8.Rotation.ZW.m128d_f64[0] = p_Var1->m128d_f64[0];
    pdVar7 = (pTVar11->Rotation).ZW.m128d_f64 + 1;
    local_f8.Rotation.ZW.m128d_f64[1] = *pdVar7;
    local_f8.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
    pdVar8 = (pTVar11->Translation).XY.m128d_f64 + 1;
    local_f8.Translation.XY.m128d_f64[1] = *pdVar8;
    p_Var2 = &(pTVar11->Translation).ZW;
    local_f8.Translation.ZW.m128d_f64[0] = p_Var2->m128d_f64[0];
    local_f8.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
    local_f8.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
    local_f8.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
    local_f8.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
    local_f8.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
    local_148.X._0_4_ = *(undefined4 *)(pTVar11->Rotation).XY.m128d_f64;
    local_148.X._4_4_ = *(undefined4 *)((longlong)(pTVar11->Rotation).XY.m128d_f64 + 4);
    local_148.Y._0_4_ = *(int *)pdVar6;
    local_148.Y._4_4_ = *(int *)((longlong)(pTVar11->Rotation).XY.m128d_f64 + 0xc);
    local_148.Z._0_4_ = *(undefined4 *)p_Var1->m128d_f64;
    local_148.Z._4_4_ = *(undefined4 *)((longlong)(pTVar11->Rotation).ZW.m128d_f64 + 4);
    local_148.W._0_4_ = *(int *)pdVar7;
    local_148.W._4_4_ = *(int *)((longlong)(pTVar11->Rotation).ZW.m128d_f64 + 0xc);
    uVar15 = *(undefined4 *)p_Var2->m128d_f64;
    uVar16 = *(undefined4 *)((longlong)(pTVar11->Translation).ZW.m128d_f64 + 4);
    uVar17 = *(undefined4 *)(pTVar11->Translation).XY.m128d_f64;
    uVar18 = *(undefined4 *)((longlong)(pTVar11->Translation).XY.m128d_f64 + 4);
    iVar19 = *(int *)pdVar8;
    iVar20 = *(int *)((longlong)(pTVar11->Translation).XY.m128d_f64 + 0xc);
  }
  *(undefined4 *)&(this->Translation).field0_0x0 = uVar17;
  *(undefined4 *)((longlong)&(this->Translation).field0_0x0 + 4) = uVar18;
  *(int *)((longlong)&(this->Translation).field0_0x0 + 8) = iVar19;
  *(int *)((longlong)&(this->Translation).field0_0x0 + 0xc) = iVar20;
  (this->Translation).field0_0x0._s_0.Z = (double)CONCAT44(uVar16,uVar15);
  pTVar12 = UE::Math::TQuat<double>::Rotator(&local_148,&local_128);
  dVar3 = pTVar12->Yaw;
  (this->Rotation).Pitch = pTVar12->Pitch;
  (this->Rotation).Yaw = dVar3;
  dVar3 = pTVar12->Roll;
  (this->Scale).field0_0x0._s_0.X = local_f8.Scale3D.XY.m128d_f64[0];
  (this->Scale).field0_0x0._s_0.Y = local_f8.Scale3D.XY.m128d_f64[1];
  (this->Scale).field0_0x0._s_0.Z = local_f8.Scale3D.ZW.m128d_f64[0];
  (this->Rotation).Roll = dVar3;
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Bone",
             &(this->BoneToObserve).BoneName);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Translation",&this->Translation);
  pTVar13 = UE::Math::TRotator<double>::Euler(&this->Rotation,&local_110);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Rotation",pTVar13);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Scale",
             &this->Scale);
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146444e40

void __thiscall
FAnimNode_ObserveBone::GatherDebugData(FAnimNode_ObserveBone *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TVector<double> local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ObserveBone::GatherDebugData");
  ::FString::PrintfImpl(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f");
  UE::Math::TRotator<double>::Euler(&this->Rotation,&local_38);
  ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_88,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FName::ToString(&(this->BoneToObserve).BoneName,&local_48);
  ::FString::PrintfImpl(&local_58,L"(Bone: %s has T(%s), R(%s), S(%s))");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_58.Data.AllocatorInstance.Data;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_58.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_88,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeBoneReferences @ 146457290

void __thiscall
FAnimNode_ObserveBone::InitializeBoneReferences(FAnimNode_ObserveBone *this,FBoneContainer *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ObserveBone::InitializeBoneReferences");
  FBoneReference::Initialize(&this->BoneToObserve,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bc00

bool __thiscall
FAnimNode_ObserveBone::IsValidToEvaluate
          (FAnimNode_ObserveBone *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->BoneToObserve,param_2);
  return bVar1;
}

