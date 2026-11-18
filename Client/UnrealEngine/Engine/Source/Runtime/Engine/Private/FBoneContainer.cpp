// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// GetSkeletonIndex @ 147404d30

int __thiscall FBoneContainer::GetSkeletonIndex(FBoneContainer *this,FCompactPoseBoneIndex *param_1)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  FVar1 = *param_1;
  uVar4 = 0;
  if ((int)FVar1 < (this->CompactPoseToSkeletonIndex).ArrayNum) {
    uVar4 = ~(uint)FVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return *(int *)((this->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                 (longlong)(int)FVar1 * 4);
}

// IsValid @ 1474679b0

bool __thiscall FBoneContainer::IsValid(FBoneContainer *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Asset).WeakPtr);
  if (((bVar1) && (this->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (this->BoneIndicesArray).ArrayNum)) {
    return true;
  }
  return false;
}

// GetSkeletonPoseIndexFromMeshPoseIndex @ 147562c80

FSkeletonPoseBoneIndex __thiscall
FBoneContainer::GetSkeletonPoseIndexFromMeshPoseIndex
          (FBoneContainer *this,FMeshPoseBoneIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkeletonPoseBoneIndex FVar5;
  uint *in_R8;
  
  uVar1 = *in_R8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->PoseToSkeletonBoneIndexArray).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->PoseToSkeletonBoneIndexArray).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FSkeletonPoseBoneIndex)(*pcVar2)();
        return FVar5;
      }
    }
    *param_1 = *(FMeshPoseBoneIndex *)
                ((this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data +
                (longlong)(int)uVar1 * 4);
    return SUB84(param_1,0);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8192494858347217480>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                     ,0x248,"PoseToSkeletonBoneIndexArray.IsValidIndex(MeshIndex.GetInt())");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar5 = (FSkeletonPoseBoneIndex)(*pcVar2)();
    return FVar5;
  }
  *param_1 = (FMeshPoseBoneIndex)0xffffffff;
  return SUB84(param_1,0);
}

// GetCompactPoseIndexFromSkeletonPoseIndex @ 1475d32d0

FCompactPoseBoneIndex __thiscall
FBoneContainer::GetCompactPoseIndexFromSkeletonPoseIndex
          (FBoneContainer *this,FSkeletonPoseBoneIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCompactPoseBoneIndex FVar5;
  uint *in_R8;
  
  uVar1 = *in_R8;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->SkeletonToCompactPose).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->SkeletonToCompactPose).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar5 = (FCompactPoseBoneIndex)(*pcVar2)();
        return FVar5;
      }
    }
    *param_1 = *(FSkeletonPoseBoneIndex *)
                ((this->SkeletonToCompactPose).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
    return SUB84(param_1,0);
  }
  *param_1 = (FSkeletonPoseBoneIndex)0xffffffff;
  return SUB84(param_1,0);
}

// FBoneContainer @ 147686e70

FBoneContainer * __thiscall
FBoneContainer::FBoneContainer
          (FBoneContainer *this,TArrayView<unsigned_short_const_,int> *param_1,
          FCurveEvaluationOption *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  ushort *_Src;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  FLLMScope local_res8 [2];
  UObject *local_res10;
  FMemScope local_res18;
  FCurveFilterSettings local_38;
  
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  (this->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  (this->BoneIndicesArray).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->BoneIndicesArray).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->BoneSwitchArray).NumBits = 0;
  (this->BoneSwitchArray).MaxBits = 0x80;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  (this->Asset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&(this->Asset).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = (UObject *)0x0;
  (this->AssetSkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeletalMesh).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = (UObject *)0x0;
  (this->AssetSkeleton).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeleton).WeakPtr,(FObjectPtr)&local_res10);
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->RefSkeleton = (FReferenceSkeleton *)0x0;
  (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  (this->SkeletonToPoseBoneIndexArray).ArrayMax = 0;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  (this->PoseToSkeletonBoneIndexArray).ArrayMax = 0;
  (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseToSkeletonIndex).ArrayNum = 0;
  (this->CompactPoseToSkeletonIndex).ArrayMax = 0;
  (this->SkeletonToCompactPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToCompactPose).ArrayNum = 0;
  (this->SkeletonToCompactPose).ArrayMax = 0;
  (this->CompactPoseParentBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseParentBones).ArrayNum = 0;
  (this->CompactPoseParentBones).ArrayMax = 0;
  (this->VirtualBoneCompactPoseData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBoneCompactPoseData).ArrayNum = 0;
  (this->VirtualBoneCompactPoseData).ArrayMax = 0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  *(undefined8 *)&this->CurveFlags = 0;
  *(undefined8 *)&(this->CurveFlags).field_0x8 = 0;
  (this->CurveFlags).field_0x10 = 0;
  (this->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)0x0;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SerialNumber = 0;
  this->CalculatedForLOD = -1;
  this->bDisableRetargeting = false;
  this->bUseRAWData = false;
  this->bUseSourceData = false;
  *(undefined8 *)&this->RetargetSourceCachedDataLUT = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x48 = 0;
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name54,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name54,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name54,true);
  local_38.FilterCurves = param_2->DisallowedList;
  local_38.FilterMode = DisallowAll;
  if (param_2->bAllowCurveEvaluation != false) {
    local_38.FilterMode = DisallowFiltered;
  }
  local_38.LODIndex = param_2->LODIndex;
  Initialize(this,&local_38);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// FBoneContainer @ 147687160

FBoneContainer * __thiscall
FBoneContainer::FBoneContainer
          (FBoneContainer *this,TArrayView<unsigned_short_const_,int> *param_1,
          FCurveFilterSettings *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  ushort *_Src;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  FLLMScope local_res8 [2];
  UObject *local_res10;
  FMemScope local_res20;
  
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  (this->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  _Src = param_1->DataPtr;
  (this->BoneIndicesArray).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->BoneIndicesArray).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  }
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->BoneSwitchArray).NumBits = 0;
  (this->BoneSwitchArray).MaxBits = 0x80;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  (this->Asset).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&(this->Asset).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = (UObject *)0x0;
  (this->AssetSkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeletalMesh).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = (UObject *)0x0;
  (this->AssetSkeleton).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeleton).WeakPtr,(FObjectPtr)&local_res10);
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  this->RefSkeleton = (FReferenceSkeleton *)0x0;
  (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  (this->SkeletonToPoseBoneIndexArray).ArrayMax = 0;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar5 * 8);
  (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  (this->PoseToSkeletonBoneIndexArray).ArrayMax = 0;
  (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseToSkeletonIndex).ArrayNum = 0;
  (this->CompactPoseToSkeletonIndex).ArrayMax = 0;
  (this->SkeletonToCompactPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToCompactPose).ArrayNum = 0;
  (this->SkeletonToCompactPose).ArrayMax = 0;
  (this->CompactPoseParentBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseParentBones).ArrayNum = 0;
  (this->CompactPoseParentBones).ArrayMax = 0;
  (this->VirtualBoneCompactPoseData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBoneCompactPoseData).ArrayNum = 0;
  (this->VirtualBoneCompactPoseData).ArrayMax = 0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  *(undefined8 *)&this->CurveFlags = 0;
  *(undefined8 *)&(this->CurveFlags).field_0x8 = 0;
  (this->CurveFlags).field_0x10 = 0;
  (this->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)0x0;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SerialNumber = 0;
  this->CalculatedForLOD = -1;
  this->bDisableRetargeting = false;
  this->bUseRAWData = false;
  this->bUseSourceData = false;
  *(undefined8 *)&this->RetargetSourceCachedDataLUT = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x48 = 0;
  if (*(int *)(lVar3 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name74,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name74,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name74,true);
  Initialize(this,param_2);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// FBoneContainer @ 147687410

FBoneContainer * __thiscall FBoneContainer::FBoneContainer(FBoneContainer *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  FLLMScope local_res8 [2];
  undefined8 local_res10;
  FMemScope local_res18 [2];
  
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  (this->BoneIndicesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneIndicesArray).ArrayNum = 0;
  (this->BoneSwitchArray).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  *piVar1 = 0;
  (this->BoneSwitchArray).NumBits = 0;
  (this->BoneSwitchArray).MaxBits = 0x80;
  local_res10 = 0;
  (this->Asset).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Asset).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = 0;
  (this->AssetSkeletalMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeletalMesh).WeakPtr,(FObjectPtr)&local_res10);
  local_res10 = 0;
  (this->AssetSkeleton).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->AssetSkeleton).WeakPtr,(FObjectPtr)&local_res10);
  pvVar6 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  piVar2 = &(this->SkeletonToPoseBoneIndexArray).ArrayMax;
  piVar3 = &(this->PoseToSkeletonBoneIndexArray).ArrayMax;
  this->RefSkeleton = (FReferenceSkeleton *)0x0;
  (this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  lVar5 = *(longlong *)((longlong)pvVar6 + uVar7 * 8);
  *piVar2 = 0;
  (this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  *piVar3 = 0;
  (this->CompactPoseToSkeletonIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseToSkeletonIndex).ArrayNum = 0;
  (this->CompactPoseToSkeletonIndex).ArrayMax = 0;
  (this->SkeletonToCompactPose).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonToCompactPose).ArrayNum = 0;
  (this->SkeletonToCompactPose).ArrayMax = 0;
  (this->CompactPoseParentBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompactPoseParentBones).ArrayNum = 0;
  (this->CompactPoseParentBones).ArrayMax = 0;
  (this->VirtualBoneCompactPoseData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBoneCompactPoseData).ArrayNum = 0;
  (this->VirtualBoneCompactPoseData).ArrayMax = 0;
  (this->CurveFilter)._padding_ = 0;
  (this->CurveFilter)._padding_ = 0;
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  *(undefined8 *)&this->CurveFlags = 0;
  *(undefined8 *)&(this->CurveFlags).field_0x8 = 0;
  (this->CurveFlags).field_0x10 = 0;
  (this->RefPoseOverride).Object = (FSkelMeshRefPoseOverride *)0x0;
  (this->RefPoseOverride).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SerialNumber = 0;
  this->CalculatedForLOD = -1;
  this->bDisableRetargeting = false;
  this->bUseRAWData = false;
  this->bUseSourceData = false;
  *(undefined8 *)&this->RetargetSourceCachedDataLUT = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetSourceCachedDataLUT).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetSourceCachedDataLUT).field_0x48 = 0;
  if (*(int *)(lVar5 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name33,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name33,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name33,true);
  (this->BoneIndicesArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  iVar4 = (this->BoneSwitchArray).MaxBits;
  (this->BoneSwitchArray).NumBits = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    (this->BoneSwitchArray).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->BoneSwitchArray,0);
  }
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkeletonToPoseBoneIndexArray).AllocatorInstance,0,piVar2);
  }
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PoseToSkeletonBoneIndexArray).AllocatorInstance,0,piVar3);
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// operator() @ 14768d250

void __thiscall
`FBoneContainer::CacheRequiredAnimCurves'::__l11::<lambda_1>::operator()
          (void *this,FName *param_1,FCurveMetaData *param_2)

{
  FName FVar1;
  FName *pFVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  FName *pFVar7;
  uint uVar8;
  int iVar9;
  FName FVar10;
  uint uVar11;
  uint uVar12;
  FName FVar13;
  char cVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement FVar16;
  FScriptContainerElement *pFVar17;
  bool bVar18;
  undefined1 local_res8 [8];
  FName *local_res10;
  uint local_res18;
  
  FVar16 = (FScriptContainerElement)0x0;
  bVar18 = (param_2->Type).bMaterial != false;
  FVar3 = *(FName *)((longlong)this + 0x10);
  uVar12 = (((FName *)((longlong)FVar3 + 0x108))->ComparisonIndex).Value;
  bVar6 = bVar18 | 2;
  if ((param_2->Type).bMorphtarget == false) {
    bVar6 = bVar18;
  }
  local_res18 = (uint)bVar6;
  FVar10 = *(FName *)((longlong)FVar3 + 0x100);
  if (*(FName *)((longlong)FVar3 + 0x100) == (FName)0x0) {
    FVar10 = FVar3;
  }
  FVar1 = (FName)((longlong)FVar10 + (longlong)(int)uVar12 * 8);
  local_res10 = param_1;
  if (FVar10 != FVar1) {
    FVar13 = FVar10;
    do {
      if (*(FName *)FVar13 == *param_1) {
        uVar11 = (uint)((longlong)FVar13 - (longlong)FVar10 >> 3);
        if (uVar11 != 0xffffffff) {
          FVar16 = (FScriptContainerElement)0x2;
          uVar8 = 0;
          if ((int)uVar11 < (int)uVar12) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar10 = *(FName *)((longlong)FVar3 + 0x100);
          if (*(FName *)((longlong)FVar3 + 0x100) == (FName)0x0) {
            FVar10 = FVar3;
          }
          iVar9 = ~uVar11 + *(int *)((longlong)FVar3 + 0x108);
          if (1 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            memmove((longlong *)((longlong)FVar10 + (longlong)(int)uVar11 * 8),
                    (longlong *)
                    ((longlong)FVar10 + (longlong)(*(int *)((longlong)FVar3 + 0x108) - iVar9) * 8),
                    (longlong)iVar9 << 3);
          }
          *(int *)((longlong)FVar3 + 0x108) = *(int *)((longlong)FVar3 + 0x108) + -1;
        }
        break;
      }
      FVar13 = (FName)((longlong)FVar13 + 8);
    } while (FVar13 != FVar1);
  }
  if ((int)(uint)param_2->MaxLOD < *(int *)(*(longlong *)((longlong)this + 8) + 0xc)) {
LAB_14768d4d7:
    FVar16 = (FScriptContainerElement)((byte)FVar16 | 1);
  }
  else {
    iVar9 = (param_2->LinkedBones).ArrayNum;
    if (0 < iVar9) {
      pFVar15 = (param_2->LinkedBones).AllocatorInstance.Data;
      pFVar17 = pFVar15 + (longlong)iVar9 * 0x10;
      do {
        while( true ) {
          if ((param_2->LinkedBones).ArrayNum != iVar9) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res8);
          }
          if (pFVar15 == pFVar17) goto LAB_14768d4d7;
          if (((*(uint *)(pFVar15 + 8) & 0x7fffffff) != 0x7fffffff) && (*(longlong *)pFVar15 != 0))
          break;
LAB_14768d4ce:
          pFVar15 = pFVar15 + 0x10;
        }
        if ((-1 < (int)*(uint *)(pFVar15 + 8)) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<1256154934806577476>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BoneContainer.cpp"
                                ,0x144,"LinkedBoneReference.bUseSkeletonIndex"), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar4 = *(longlong *)this;
        uVar12 = *(int *)(pFVar15 + 8) * 2 >> 1;
        if (((int)uVar12 < 0) || (*(int *)(lVar4 + 0x88) <= (int)uVar12)) {
          bVar18 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<8192494858347217512>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                              ,0x268,"SkeletonToCompactPose.IsValidIndex(SkeletonIndex)");
          if (bVar18) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_14768d4ce;
        }
        uVar11 = 0;
        if ((int)uVar12 < *(int *)(lVar4 + 0x88)) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(int *)(*(longlong *)(lVar4 + 0x80) + (longlong)(int)uVar12 * 4) != -1) break;
        pFVar15 = pFVar15 + 0x10;
      } while( true );
    }
  }
  pFVar7 = local_res10;
  if (FVar16 != (FScriptContainerElement)0x0) {
    lVar4 = *(longlong *)this;
    FVar3 = *local_res10;
    iVar9 = *(int *)(lVar4 + 0xb8);
    if (iVar9 == *(int *)(lVar4 + 0xbc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)(lVar4 + 0xb0),(int *)(lVar4 + 0xbc));
    }
    *(int *)(lVar4 + 0xb8) = iVar9 + 1;
    pFVar15 = ((ForAnyElementType *)(lVar4 + 0xb0))->Data;
    *(FName *)(pFVar15 + (longlong)iVar9 * 0xc) = FVar3;
    pFVar15[(longlong)iVar9 * 0xc + 8] = FVar16;
    *(undefined1 *)(lVar4 + 0xc0) = 0;
  }
  cVar14 = (char)local_res18;
  if (cVar14 != '\0') {
    lVar4 = *(longlong *)this;
    iVar9 = *(int *)(lVar4 + 0xd8);
    if (iVar9 == *(int *)(lVar4 + 0xdc)) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)(lVar4 + 0xd0),(int *)(lVar4 + 0xdc));
    }
    *(int *)(lVar4 + 0xd8) = iVar9 + 1;
    pFVar2 = (FName *)(((ForAnyElementType *)(lVar4 + 0xd0))->Data + (longlong)iVar9 * 0xc);
    *pFVar2 = *pFVar7;
    *(char *)&pFVar2[1].ComparisonIndex.Value = cVar14;
    *(undefined1 *)(lVar4 + 0xe0) = 0;
  }
  return;
}

// operator() @ 14768dbe0

void __thiscall
`FBoneContainer::CacheRequiredAnimCurves'::__l17::<lambda_2>::operator()
          (void *this,FName param_1,FCurveMetaData *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  
  FVar6 = (FScriptContainerElement)((param_2->Type).bMaterial != false);
  FVar5 = (FScriptContainerElement)((byte)FVar6 | 2);
  if ((param_2->Type).bMorphtarget == false) {
    FVar5 = FVar6;
  }
  if (FVar5 != (FScriptContainerElement)0x0) {
    pFVar2 = *(ForAnyElementType **)this;
    piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
    iVar4 = *(int *)&pFVar2[1].Data;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,pFVar2,piVar1);
    }
    *(int *)&pFVar2[1].Data = iVar4 + 1;
    pFVar3 = pFVar2->Data;
    *(FName *)(pFVar3 + (longlong)iVar4 * 0xc) = param_1;
    pFVar3[(longlong)iVar4 * 0xc + 8] = FVar5;
    *(undefined1 *)&pFVar2[2].Data = 0;
  }
  return;
}

// BoneIsChildOf @ 1476952f0

bool __thiscall
FBoneContainer::BoneIsChildOf
          (FBoneContainer *this,FCompactPoseBoneIndex *param_1,FCompactPoseBoneIndex *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FCompactPoseBoneIndex FVar5;
  
  FVar5 = *param_1;
  if ((int)*param_2 < (int)FVar5) {
    uVar4 = 0;
    if ((int)FVar5 < (this->CompactPoseParentBones).ArrayNum) {
      uVar4 = ~(uint)FVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FVar5 = *(FCompactPoseBoneIndex *)
             ((this->CompactPoseParentBones).AllocatorInstance.Data + (longlong)(int)FVar5 * 4);
    do {
      if (FVar5 == *param_2) {
        return true;
      }
      uVar4 = 0;
      if ((int)FVar5 < (this->CompactPoseParentBones).ArrayNum) {
        uVar4 = ~(uint)FVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      FVar5 = *(FCompactPoseBoneIndex *)
               ((this->CompactPoseParentBones).AllocatorInstance.Data + (longlong)(int)FVar5 * 4);
    } while (FVar5 != (FCompactPoseBoneIndex)0xffffffff);
  }
  return false;
}

// BoneIsChildOf @ 147695400

bool __thiscall FBoneContainer::BoneIsChildOf(FBoneContainer *this,int param_1,int param_2)

{
  FReferenceSkeleton *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_2 != -1) && (param_2 < param_1)) {
    this_00 = this->RefSkeleton;
    uVar4 = FReferenceSkeleton::GetParentIndex(this_00,param_1);
    do {
      if (uVar4 == param_2) {
        return true;
      }
      uVar5 = 0;
      if ((int)uVar4 < (this_00->FinalRefBoneInfo).ArrayNum) {
        uVar5 = ~uVar4 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      uVar4 = *(uint *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data +
                       (longlong)(int)uVar4 * 0xc + 8);
    } while (uVar4 != 0xffffffff);
  }
  return false;
}

// CacheRequiredAnimCurves @ 1476974d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBoneContainer::CacheRequiredAnimCurves(FBoneContainer *this,FCurveFilterSettings *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ECurveElementFlags *pEVar4;
  FCurveFilter *pFVar5;
  FBulkCurveFlags *pFVar6;
  ushort *puVar7;
  ForElementType<FName> FVar8;
  undefined8 *puVar9;
  FCurveElementFlags *pFVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  FName FVar12;
  FName FVar13;
  longlong lVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  UObject *pUVar18;
  UClass *pUVar19;
  FName *pFVar20;
  FName *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  ForElementType<FName> FVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  FBoneContainer *pFVar28;
  undefined1 auStackY_228 [32];
  int local_1e8;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  char local_1d0;
  FLLMScope local_1c8 [2];
  FBoneContainer *local_1c0;
  USkeleton *local_1b8;
  FScriptContainerElement *local_1b0;
  UClass *local_1a8;
  ForAnyElementType *local_1a0;
  FMemScope local_198;
  code *local_190;
  FBoneContainer **local_188;
  code *local_180;
  ForAnyElementType **local_178;
  FBoneContainer *local_170;
  FCurveFilterSettings *local_168;
  ForElementType<FName> *local_160;
  ForElementType<FName> local_158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c0 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name270,L"Animation/BoneContainer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1c8,LLMScope_Name270,false,None,Default,true);
  FMemScope::FMemScope(&local_198,&LLMScope_Name270,true);
  pFVar5 = &this->CurveFilter;
  iVar17 = *(int *)((longlong)&(this->CurveFilter)._padding_ + 4);
  piVar1 = (int *)((longlong)&(this->CurveFilter)._padding_ + 4);
  *(undefined4 *)&(this->CurveFilter)._padding_ = 0;
  if (iVar17 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)pFVar5,0,piVar1);
  }
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  pFVar6 = &this->CurveFlags;
  (this->CurveFilter).FilterMode = None;
  puVar2 = &(this->CurveFlags).field_0xc;
  puVar3 = &(this->CurveFlags).field_0x8;
  (this->CurveFilter).FilterMode = param_1->FilterMode;
  *(undefined4 *)puVar3 = 0;
  if (*(int *)puVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)pFVar6,0,(int *)puVar2);
  }
  (this->CurveFlags).field_0x10 = 0;
  local_1b8 = (USkeleton *)FWeakObjectPtr::GetEvenIfUnreachable(&(this->AssetSkeleton).WeakPtr);
  pFVar28 = this;
  if (local_1b8 != (USkeleton *)0x0) {
    local_4c = 0x20;
    local_158.SecondaryData = (ForElementType<FName>)0x0;
    local_50 = 0;
    pTVar11 = param_1->FilterCurves;
    if (pTVar11 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      local_1e8 = pTVar11->ArrayNum;
      local_1b0 = (pTVar11->AllocatorInstance).Data;
      local_50 = local_1e8;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,local_1e8,0x20,&local_158,local_1e8,&local_4c);
      FVar24 = (ForElementType<FName>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FName>)0x0) {
        FVar24 = local_158.SecondaryData;
      }
      if (local_1e8 != 0) {
        memcpy((void *)FVar24,local_1b0,(longlong)local_1e8 << 3);
      }
    }
    if (param_1->FilterMode != DisallowAll) {
      local_160 = &local_158;
      local_188 = &local_170;
      local_190 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FBoneContainer::CacheRequiredAnimCurves'::__l11::<lambda_1>,void,FName,FCurveMetaData_const_&>
                  ::Call;
      local_170 = this;
      local_168 = param_1;
      USkeleton::ForEachCurveMetaData
                (local_1b8,(TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *)&local_190);
      iVar17 = local_50;
      lVar27 = (longlong)local_50;
      FVar24 = (ForElementType<FName>)&local_158;
      if (local_158.SecondaryData != (ForElementType<FName>)0x0) {
        FVar24 = local_158.SecondaryData;
      }
      if ((local_50 < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar16)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar26 = (int)(this->CurveFilter)._padding_;
      uVar25 = iVar17 + iVar26;
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      if (*piVar1 < (int)uVar25) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar25,(ForAnyElementType *)pFVar5,iVar26,piVar1);
      }
      FVar8 = (ForElementType<FName>)((longlong)FVar24 + lVar27 * 8);
      pFVar28 = local_1c0;
      for (; local_1c0 = pFVar28, FVar24 != FVar8;
          FVar24 = (ForElementType<FName>)((longlong)FVar24 + 8)) {
        iVar17 = (int)(this->CurveFilter)._padding_;
        if (iVar17 == *piVar1) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)pFVar5,piVar1);
        }
        *(int *)&(this->CurveFilter)._padding_ = iVar17 + 1;
        puVar9 = (undefined8 *)(pFVar5->_padding_ + (longlong)iVar17 * 0xc);
        *puVar9 = *(undefined8 *)FVar24;
        *(undefined1 *)(puVar9 + 1) = 2;
        pFVar28 = local_1c0;
      }
      *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
    }
    if (local_158.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_158.SecondaryData);
    }
  }
  pUVar18 = FWeakObjectPtr::Get(&(pFVar28->AssetSkeletalMesh).WeakPtr);
  if (pUVar18 == (UObject *)0x0) goto LAB_147697bbf;
  pcVar15 = *(code **)(*(longlong *)(pUVar18 + 6) + 0x18);
  local_1a8 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8);
  }
  lVar27 = (*pcVar15)(pUVar18 + 6,&local_1a8);
  if (lVar27 == 0) {
LAB_147697821:
    lVar27 = 0;
  }
  else {
    pUVar19 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
    iVar17 = (int)pUVar19->_padding_;
    if ((*(int *)(*(longlong *)(lVar27 + 0x10) + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar27 + 0x10) + 0x30) + (longlong)iVar17 * 8)
        != &pUVar19->_padding_)) goto LAB_147697821;
  }
  if (lVar27 == 0) goto LAB_147697bbf;
  local_1e0.Data = (FScriptContainerElement *)0x0;
  local_1a0 = &local_1e0;
  local_1d8 = 0;
  local_178 = &local_1a0;
  local_1d0 = '\0';
  local_180 = UE::Core::Private::Function::
              TFunctionRefCaller<`FBoneContainer::CacheRequiredAnimCurves'::__l17::<lambda_2>,void,FName,FCurveMetaData_const_&>
              ::Call;
  (**(code **)(*(longlong *)(lVar27 + 0x28) + 0x10))((longlong *)(lVar27 + 0x28),&local_180);
  FVar23.Data = local_1e0.Data;
  iVar17 = (int)local_1d8;
  lVar27 = (longlong)(int)local_1d8;
  if ((*(int *)puVar3 == 0) && (0 < (int)local_1d8)) {
    if (pFVar6 != (FBulkCurveFlags *)&local_1e0) {
      *(int *)puVar3 = (int)local_1d8;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,(int)local_1d8,*(int *)puVar2,(ForAnyElementType *)pFVar6,(int)local_1d8,
                 (int *)puVar2);
      if (iVar17 != 0) {
        memcpy(*(void **)pFVar6,FVar23.Data,lVar27 * 0xc);
      }
    }
    (this->CurveFlags).field_0x10 = local_1d0;
  }
  else {
    if (pFVar6 == (FBulkCurveFlags *)&local_1e0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)&InOutValueArray0 != (void*)&InValueArray1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\NamedValueArray.h"
                          ,0x10a,L"");
      if (bVar16) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar17 = (int)local_1d8;
    }
    iVar26 = *(int *)puVar3;
    if (iVar17 != 0) {
      iVar22 = iVar17;
      if ((this->CurveFlags).field_0x10 == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
                  (*(FCurveElementFlags **)pFVar6,iVar26,local_1e8._0_1_,
                   (FElementSortPredicate)local_1e8._0_1_);
        (this->CurveFlags).field_0x10 = 1;
        iVar22 = (int)local_1d8;
      }
      if (local_1d0 == '\0') {
        AlgoImpl::
        IntroSortInternal<UE::Anim::FCurveElementFlags,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementFlags>::FElementSortPredicate>
                  ((FCurveElementFlags *)local_1e0.Data,iVar22,local_1e8._0_1_,
                   (FElementSortPredicate)local_1e8._0_1_);
        local_1d0 = '\x01';
      }
      iVar22 = iVar17;
      if (iVar17 < iVar26) {
        iVar22 = iVar26;
      }
      uVar25 = iVar22 / 2 + iVar22;
      if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
      }
      if (*(int *)puVar2 < (int)uVar25) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar25,(ForAnyElementType *)pFVar6,*(int *)puVar3,(int *)puVar2);
      }
      pFVar20 = *(FName **)pFVar6;
      pFVar21 = (FName *)((longlong)pFVar20 + (longlong)iVar26 * 0xc);
      pFVar10 = (FCurveElementFlags *)(local_1e0.Data + (longlong)iVar17 * 0xc);
      FVar23.Data = local_1e0.Data;
      if (pFVar20 != pFVar21) {
        pFVar28 = local_1c0;
        if ((FCurveElementFlags *)local_1e0.Data == pFVar10) goto LAB_147697bb0;
        do {
          while( true ) {
            FVar12 = *pFVar20;
            FVar13 = ((FCurveElementFlags *)FVar23.Data)->Name;
            if (FVar12 != FVar13) break;
            *pFVar20 = ((FCurveElementFlags *)FVar23.Data)->Name;
            pEVar4 = &((FCurveElementFlags *)FVar23.Data)->Flags;
            FVar23.Data = FVar23.Data + 0xc;
            pFVar20[1].ComparisonIndex.Value = *(uint *)pEVar4;
            pFVar20 = (FName *)&pFVar20[1].Number;
            if ((pFVar20 == pFVar21) || ((FCurveElementFlags *)FVar23.Data == pFVar10))
            goto LAB_147697af3;
          }
          iVar17 = FVar12.ComparisonIndex.Value.Value - FVar13.ComparisonIndex.Value;
          if (iVar17 == 0) {
            iVar17 = FVar12.Number - FVar13.Number;
          }
          if (iVar17 < 0) {
            pFVar20 = (FName *)&pFVar20[1].Number;
            bVar16 = pFVar20 == pFVar21;
          }
          else {
            lVar27 = ((longlong)pFVar20 - *(longlong *)pFVar6) / 6 +
                     ((longlong)pFVar20 - *(longlong *)pFVar6 >> 0x3f);
            iVar26 = (int)(lVar27 >> 1) - (int)(lVar27 >> 0x3f);
            iVar17 = *(int *)puVar3;
            if (iVar17 == *(int *)puVar2) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x40c,(ForAnyElementType *)pFVar6,(int *)puVar2);
            }
            *(int *)puVar3 = iVar17 + 1;
            lVar27 = (longlong)iVar26 * 0xc;
            memmove((void *)(*(longlong *)pFVar6 + lVar27 + 0xc),
                    (void *)(*(longlong *)pFVar6 + lVar27),(longlong)(iVar17 - iVar26) * 0xc);
            iVar17 = *(int *)puVar3;
            lVar14 = *(longlong *)pFVar6;
            *(undefined8 *)(lVar14 + lVar27) = 0;
            pFVar21 = (FName *)(lVar14 + (longlong)iVar17 * 0xc);
            *(undefined4 *)(lVar14 + lVar27 + 8) = 0;
            *(FName *)(lVar14 + lVar27) = ((FCurveElementFlags *)FVar23.Data)->Name;
            *(FName *)(lVar14 + lVar27) = ((FCurveElementFlags *)FVar23.Data)->Name;
            pEVar4 = &((FCurveElementFlags *)FVar23.Data)->Flags;
            FVar23.Data = FVar23.Data + 0xc;
            *(undefined4 *)(lVar14 + lVar27 + 8) = *(undefined4 *)pEVar4;
            pFVar20 = (FName *)(lVar14 + lVar27 + 0xc);
            bVar16 = (FCurveElementFlags *)FVar23.Data == pFVar10;
          }
        } while (!bVar16);
      }
LAB_147697af3:
      pFVar28 = local_1c0;
      if (FVar23.Data < pFVar10) {
        iVar17 = *(int *)puVar3;
        lVar27 = ((longlong)pFVar10 - (longlong)FVar23.Data) / 6 +
                 ((longlong)pFVar10 - (longlong)FVar23.Data >> 0x3f);
        iVar26 = (int)(lVar27 >> 1) - (int)(lVar27 >> 0x3f);
        uVar25 = iVar26 + iVar17;
        if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
        }
        if (*(int *)puVar2 < (int)uVar25) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,uVar25,(ForAnyElementType *)pFVar6,iVar17,(int *)puVar2);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,iVar26,(ForAnyElementType *)pFVar6,(int *)puVar3,(int *)puVar2);
        pFVar21 = (FName *)(*(longlong *)pFVar6 + (longlong)iVar17 * 0xc);
        do {
          pFVar21->ComparisonIndex = 0;
          pFVar21->Number = 0;
          pFVar21[1].ComparisonIndex.Value = 0;
          *pFVar21 = ((FCurveElementFlags *)FVar23.Data)->Name;
          *pFVar21 = ((FCurveElementFlags *)FVar23.Data)->Name;
          pEVar4 = &((FCurveElementFlags *)FVar23.Data)->Flags;
          FVar23.Data = FVar23.Data + 0xc;
          pFVar21[1].ComparisonIndex.Value = *(uint *)pEVar4;
          pFVar21 = (FName *)&pFVar21[1].Number;
          pFVar28 = local_1c0;
        } while (FVar23.Data < pFVar10);
      }
    }
  }
LAB_147697bb0:
  if ((FCurveElementFlags *)local_1e0.Data != (FCurveElementFlags *)0x0) {
    FMemory::Free(local_1e0.Data);
  }
LAB_147697bbf:
  puVar7 = &pFVar28->SerialNumber;
  *puVar7 = *puVar7 + 1;
  if (*puVar7 == 0) {
    pFVar28->SerialNumber = 1;
  }
  FMemScope::~FMemScope(&local_198);
  FLLMScope::~FLLMScope(local_1c8);
  return;
}

// GetDepthBetweenBones @ 1476b09f0

int __thiscall FBoneContainer::GetDepthBetweenBones(FBoneContainer *this,int param_1,int param_2)

{
  FReferenceSkeleton *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  pFVar1 = this->RefSkeleton;
  if (param_2 <= param_1) {
    iVar5 = 0;
    do {
      if (param_1 == param_2) {
        return iVar5;
      }
      uVar4 = 0;
      if (param_1 < (pFVar1->FinalRefBoneInfo).ArrayNum) {
        uVar4 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      param_1 = *(int *)((pFVar1->FinalRefBoneInfo).AllocatorInstance.Data +
                        (longlong)param_1 * 0xc + 8);
    } while (param_1 != 0xffffffff);
  }
  return -1;
}

// GetParentBoneIndex @ 1476b2760

FCompactPoseBoneIndex __thiscall
FBoneContainer::GetParentBoneIndex(FBoneContainer *this,FCompactPoseBoneIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FCompactPoseBoneIndex FVar5;
  uint *in_R8;
  
  uVar1 = *in_R8;
  uVar4 = 0;
  if ((int)uVar1 < (this->CompactPoseParentBones).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5 = (FCompactPoseBoneIndex)(*pcVar2)();
      return FVar5;
    }
  }
  *param_1 = *(FCompactPoseBoneIndex *)
              ((this->CompactPoseParentBones).AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  return SUB84(param_1,0);
}

// GetParentBoneIndex @ 1476b27f0

int __thiscall FBoneContainer::GetParentBoneIndex(FBoneContainer *this,int param_1)

{
  int iVar1;
  
  iVar1 = FReferenceSkeleton::GetParentIndex(this->RefSkeleton,param_1);
  return iVar1;
}

// GetPoseBoneIndexForBoneName @ 1476b3270

int __thiscall FBoneContainer::GetPoseBoneIndexForBoneName(FBoneContainer *this,FName *param_1)

{
  int *piVar1;
  
  if (*param_1 != (FName)0x0) {
    piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->RefSkeleton->FinalNameToIndexMap,*param_1);
    if (piVar1 != (int *)0x0) {
      return *piVar1;
    }
  }
  return -1;
}

// GetRetargetSourceCachedData @ 1476b4a70

FRetargetSourceCachedData * __thiscall
FBoneContainer::GetRetargetSourceCachedData(FBoneContainer *this,FName *param_1)

{
  USkeleton *this_00;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FRetargetSourceCachedData *pFVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  FSkeletonRemapping local_48;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name406,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name406,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name406,true);
  this_00 = (USkeleton *)FWeakObjectPtr::GetEvenIfUnreachable(&(this->AssetSkeleton).WeakPtr);
  pTVar1 = USkeleton::GetRefLocalPoses(this_00,*param_1);
  local_48.SourceToTargetBoneIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SourceToTargetBoneIndexes.ArrayNum = 0;
  local_48.SourceToTargetBoneIndexes.ArrayMax = 0;
  local_48.TargetToSourceBoneIndexes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.TargetToSourceBoneIndexes.ArrayNum = 0;
  local_48.TargetToSourceBoneIndexes.ArrayMax = 0;
  local_48.RetargetingTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.RetargetingTable.ArrayNum = 0;
  local_48.RetargetingTable.ArrayMax = 0;
  local_48.SourceSkeleton.WeakPtr.ObjectIndex = 0;
  local_48.SourceSkeleton.WeakPtr.ObjectSerialNumber = 0;
  local_48.TargetSkeleton.WeakPtr.ObjectIndex = 0;
  local_48.TargetSkeleton.WeakPtr.ObjectSerialNumber = 0;
  pFVar2 = GetRetargetSourceCachedData(this,param_1,&local_48,pTVar1);
  if (local_48.RetargetingTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.RetargetingTable.AllocatorInstance.Data);
  }
  if (local_48.TargetToSourceBoneIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.TargetToSourceBoneIndexes.AllocatorInstance.Data);
  }
  if (local_48.SourceToTargetBoneIndexes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SourceToTargetBoneIndexes.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar2;
}

// GetRetargetSourceCachedData @ 1476b4be0

FRetargetSourceCachedData * __thiscall
FBoneContainer::GetRetargetSourceCachedData
          (FBoneContainer *this,FName *param_1,FSkeletonRemapping *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  undefined8 *puVar3;
  TMap<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>_>
  *this_00;
  ushort uVar4;
  FSkelMeshRefPoseOverride *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  uint uVar12;
  double dVar13;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  FReferenceSkeleton *pFVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  Type TVar21;
  int iVar22;
  USkeleton *pUVar23;
  FRetargetSourceCachedData *pFVar24;
  FSkeletonRemapping *this_01;
  longlong lVar25;
  undefined1 *puVar26;
  FName *pFVar27;
  longlong lVar28;
  FName FVar29;
  uint uVar30;
  FName FVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  FLLMScope local_res8 [2];
  uint local_res10;
  FSkeletonRemapping *local_res18;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *local_res20;
  longlong local_258;
  TKeyInitializer<FRetargetSourceCachedDataKey_const_&> local_250;
  longlong local_248;
  FRetargetSourceCachedDataKey local_240;
  double local_228;
  double dStack_220;
  double local_218;
  FRetargetSourceCachedDataKey *local_210;
  USkeleton *local_208;
  FReferenceSkeleton *local_200;
  FMemScope local_1f8;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  float local_198;
  undefined4 uStack_194;
  double dStack_190;
  double dStack_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_148;
  TQuat<double> local_138;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name416,L"Animation/BoneContainer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name416,false,None,Default,true);
  FMemScope::FMemScope(&local_1f8,&LLMScope_Name416,true);
  bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
  if ((!bVar16) ||
     (bVar16 = FWeakObjectPtr::IsValid(&(param_2->TargetSkeleton).WeakPtr), this_01 = param_2,
     !bVar16)) {
    this_01 = (FSkeletonRemapping *)&this->AssetSkeleton;
  }
  pUVar23 = (USkeleton *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
  local_208 = pUVar23;
  if ((pUVar23 == (USkeleton *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceSkeleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BoneContainer.cpp"
                          ,0x1a3,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
    return pFVar24;
  }
  FVar31 = *param_1;
  uVar18 = ::GetTypeHash(FVar31.ComparisonIndex.Value);
  FVar29.ComparisonIndex.Value = 0;
  FVar29.Number = 0;
  local_240.SourceRetargetName = FVar29;
  if (*(int *)&(pUVar23->AnimRetargetSources).field_0x8 !=
      *(int *)&(pUVar23->AnimRetargetSources).field_0x34) {
    puVar26 = *(undefined1 **)&(pUVar23->AnimRetargetSources).field_0x40;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = &(pUVar23->AnimRetargetSources).field_0x38;
    }
    iVar19 = *(int *)(puVar26 +
                     (ulonglong)
                     (*(int *)&(pUVar23->AnimRetargetSources).field_0x48 - 1U &
                     FVar31.Number + uVar18) * 4);
    if (iVar19 != -1) {
      do {
        local_240.SourceRetargetName = FVar31;
        if (*(FName *)(*(longlong *)&pUVar23->AnimRetargetSources + (longlong)iVar19 * 0x28) ==
            FVar31) break;
        iVar19 = *(int *)(*(longlong *)&pUVar23->AnimRetargetSources + 0x20 +
                         (longlong)iVar19 * 0x28);
        local_240.SourceRetargetName = FVar29;
      } while (iVar19 != -1);
    }
  }
  local_240.SourceSkeletonPath.PackageName.ComparisonIndex.Value = 0;
  local_240.SourceSkeletonPath.PackageName.Number = 0;
  local_240.SourceSkeletonPath.AssetName.ComparisonIndex.Value = 0;
  local_240.SourceSkeletonPath.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_240.SourceSkeletonPath,(UObject *)pUVar23);
  this_00 = &this->RetargetSourceCachedDataLUT;
  uVar18 = ::GetTypeHash(&local_240);
  if (*(int *)&(this->RetargetSourceCachedDataLUT).field_0x8 !=
      *(int *)&(this->RetargetSourceCachedDataLUT).field_0x34) {
    puVar26 = *(undefined1 **)&(this->RetargetSourceCachedDataLUT).field_0x40;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = &(this->RetargetSourceCachedDataLUT).field_0x38;
    }
    uVar18 = *(uint *)(puVar26 +
                      (ulonglong)
                      (*(int *)&(this->RetargetSourceCachedDataLUT).field_0x48 - 1U & uVar18) * 4);
    if (uVar18 != 0xffffffff) {
      do {
        pFVar27 = (FName *)((longlong)(int)uVar18 * 0x40 + *(longlong *)&this_00->field_0x0);
        if (((*pFVar27 == local_240.SourceSkeletonPath.PackageName) &&
            (pFVar27[1] == local_240.SourceSkeletonPath.AssetName)) &&
           (pFVar27[2] == local_240.SourceRetargetName)) {
          if (uVar18 != 0xffffffff) {
            FVar31 = (FName)(pFVar27 + 3);
            if (pFVar27 == (FName *)0x0) {
              FVar31 = FVar29;
            }
            if (FVar31 != (FName)0x0) goto LAB_1476b5575;
          }
          break;
        }
        uVar18 = pFVar27[7].ComparisonIndex.Value;
      } while (uVar18 != 0xffffffff);
    }
  }
  local_210 = &local_240;
  TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FRetargetSourceCachedDataKey_const_&>_>
            ((TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
              *)this_00,&local_250,(bool *)&local_210);
  local_200 = this->RefSkeleton;
  iVar19 = (this->BoneIndicesArray).ArrayNum;
  FVar31 = (FName)(*(longlong *)&this_00->field_0x0 + (longlong)(int)local_250.Key * 0x40 + 0x18);
  *(int *)((longlong)FVar31 + 0x18) = 0;
  if (*(int *)((longlong)FVar31 + 0x1c) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)((longlong)FVar31 + 0x10),0,
               (int *)((longlong)FVar31 + 0x1c));
  }
  dVar13 = __real_3f50624de0000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar11 = __real_322bcc77;
  dVar10 = __real_3ff0000000000000;
  local_res10 = 0;
  if (0 < iVar19) {
    local_248 = 0;
    local_258 = 0;
    do {
      lVar25 = local_248;
      uVar30 = ~FVar29.ComparisonIndex.Value.Value >> 0x1f;
      uVar20 = 0;
      if ((int)FVar29.ComparisonIndex.Value.Value < (this->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar20 = uVar30;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
        return pFVar24;
      }
      uVar20 = *(uint *)((this->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar25);
      bVar16 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2);
      uVar33 = uVar20;
      if ((bVar16) && (bVar16 = FWeakObjectPtr::IsValid(&(param_2->TargetSkeleton).WeakPtr), bVar16)
         ) {
        if (((int)uVar20 < 0) || ((param_2->TargetToSourceBoneIndexes).ArrayNum <= (int)uVar20)) {
          uVar33 = 0xffffffff;
        }
        else {
          uVar33 = 0;
          if ((int)uVar20 < (param_2->TargetToSourceBoneIndexes).ArrayNum) {
            uVar33 = ~uVar20 >> 0x1f;
          }
          if ((uVar33 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
            return pFVar24;
          }
          uVar33 = *(uint *)((param_2->TargetToSourceBoneIndexes).AllocatorInstance.Data +
                            (longlong)(int)uVar20 * 4);
        }
      }
      pUVar23 = (USkeleton *)FWeakObjectPtr::GetEvenIfUnreachable(&(this->AssetSkeleton).WeakPtr);
      bVar17 = USkeleton::GetUseRetargetModesFromCompatibleSkeleton(pUVar23);
      bVar16 = this->bDisableRetargeting;
      pUVar23 = (USkeleton *)FWeakObjectPtr::GetEvenIfUnreachable(&(this->AssetSkeleton).WeakPtr);
      TVar21 = FAnimationRuntime::GetBoneTranslationRetargetingMode
                         (bVar17,uVar33,uVar20,local_208,pUVar23,bVar16);
      pTVar14 = local_res20;
      if (((TVar21 == OrientAndScale) && (-1 < (int)uVar33)) &&
         ((int)uVar33 < local_res20->ArrayNum)) {
        if (((int)uVar33 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
          return pFVar24;
        }
        uVar20 = local_res10;
        pFVar5 = (this->RefPoseOverride).Object;
        pFVar6 = (pTVar14->AllocatorInstance).Data;
        pFVar1 = pFVar6 + (longlong)(int)uVar33 * 0x60 + 0x20;
        dVar8 = *(double *)pFVar1;
        dVar9 = *(double *)(pFVar1 + 8);
        local_218 = *(double *)(pFVar6 + (longlong)(int)uVar33 * 0x60 + 0x30);
        iVar22 = (this->BoneIndicesArray).ArrayNum;
        local_228 = dVar8;
        dStack_220 = dVar9;
        if (pFVar5 == (FSkelMeshRefPoseOverride *)0x0) {
          uVar33 = 0;
          if ((int)local_res10 < iVar22) {
            uVar33 = uVar30;
          }
          if ((uVar33 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
            return pFVar24;
          }
          pFVar15 = local_200;
          uVar4 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + local_258);
          if (((local_200->FinalRefBonePose).ArrayNum <= (int)(uint)uVar4) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
            return pFVar24;
          }
          pFVar6 = (pFVar15->FinalRefBonePose).AllocatorInstance.Data;
          lVar25 = (ulonglong)uVar4 * 0x60;
          pFVar1 = pFVar6 + lVar25 + 0x20;
          uVar38 = *(undefined4 *)pFVar1;
          uVar39 = *(undefined4 *)(pFVar1 + 4);
          uVar40 = *(undefined4 *)(pFVar1 + 8);
          uVar41 = *(undefined4 *)(pFVar1 + 0xc);
          local_f0 = *(undefined8 *)(pFVar6 + lVar25 + 0x30);
          uVar32 = (undefined4)local_f0;
          uVar34 = (undefined4)((ulonglong)local_f0 >> 0x20);
          local_100 = uVar38;
          uStack_fc = uVar39;
          uStack_f8 = uVar40;
          uStack_f4 = uVar41;
        }
        else {
          uVar33 = 0;
          if ((int)local_res10 < iVar22) {
            uVar33 = uVar30;
          }
          if ((uVar33 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
            return pFVar24;
          }
          uVar4 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + local_258);
          if (((pFVar5->RefBonePoses).ArrayNum <= (int)(uint)uVar4) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
            return pFVar24;
          }
          pFVar6 = (pFVar5->RefBonePoses).AllocatorInstance.Data;
          lVar25 = (ulonglong)uVar4 * 0x60;
          pFVar1 = pFVar6 + lVar25 + 0x20;
          uVar38 = *(undefined4 *)pFVar1;
          uVar39 = *(undefined4 *)(pFVar1 + 4);
          uVar40 = *(undefined4 *)(pFVar1 + 8);
          uVar41 = *(undefined4 *)(pFVar1 + 0xc);
          local_108 = *(undefined8 *)(pFVar6 + lVar25 + 0x30);
          uVar32 = (undefined4)local_108;
          uVar34 = (undefined4)((ulonglong)local_108 >> 0x20);
          local_118 = uVar38;
          uStack_114 = uVar39;
          uStack_110 = uVar40;
          uStack_10c = uVar41;
        }
        local_148 = (double)CONCAT44(uVar34,uVar32);
        dVar36 = dVar8 - (double)CONCAT44(uVar39,uVar38);
        dVar37 = (double)CONCAT44(uVar41,uVar40);
        uVar33 = SUB84(dVar36,0) & uVar18;
        uVar35 = (uint)((ulonglong)dVar36 >> 0x20) & uVar12;
        if (((dVar13 <= (double)CONCAT44(uVar35,uVar33) && (double)CONCAT44(uVar35,uVar33) != dVar13
             ) || (uVar33 = SUB84(dVar9 - dVar37,0) & uVar18,
                  uVar35 = (uint)((ulonglong)(dVar9 - dVar37) >> 0x20) & uVar12,
                  dVar13 <= (double)CONCAT44(uVar35,uVar33) &&
                  (double)CONCAT44(uVar35,uVar33) != dVar13)) ||
           (uVar33 = SUB84(local_218 - local_148,0) & uVar18,
           uVar35 = (uint)((ulonglong)(local_218 - local_148) >> 0x20) & uVar12,
           dVar13 <= (double)CONCAT44(uVar35,uVar33) && (double)CONCAT44(uVar35,uVar33) != dVar13))
        {
          fVar43 = (float)SQRT(dVar9 * dVar9 + dVar8 * dVar8 + local_218 * local_218);
          fVar42 = (float)SQRT((double)CONCAT44(uVar41,uVar40) * dVar37 +
                               (double)CONCAT44(uVar39,uVar38) * (double)CONCAT44(uVar39,uVar38) +
                               local_148 * local_148);
          if (fVar11 < fVar42 * fVar43) {
            dVar36 = dVar10 / (double)fVar43;
            local_1d8._s_0.Z = dVar36 * local_218;
            local_1d8._s_0.Y = dVar36 * dVar9;
            local_1d8._s_0.X = dVar36 * dVar8;
            dVar36 = dVar10 / (double)fVar42;
            local_1f0._s_0.X = (double)CONCAT44(uVar39,uVar38) * dVar36;
            local_1f0._s_0.Y = dVar37 * dVar36;
            local_1f0._s_0.Z = local_148 * dVar36;
            UE::Math::TQuat<double>::FindBetweenNormals
                      (&local_138,(TVector<double> *)&local_1d8._s_0,
                       (TVector<double> *)&local_1f0._s_0);
            local_1b8 = local_138.X;
            dStack_1b0 = local_138.Y;
            local_1a8 = local_138.Z;
            dStack_1a0 = local_138.W;
            dStack_180 = local_218;
            local_168 = CONCAT44(uVar34,uVar32);
            local_198 = fVar42 / fVar43;
            dStack_190 = dVar8;
            dStack_188 = dVar9;
            local_178 = uVar38;
            uStack_174 = uVar39;
            uStack_170 = uVar40;
            uStack_16c = uVar41;
            if (((*(double **)FVar31 <= &local_1b8) &&
                (&local_1b8 < *(double **)FVar31 + (longlong)*(int *)((longlong)FVar31 + 0xc) * 0xc)
                ) && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
              pcVar7 = (code *)swi(3);
              pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
              return pFVar24;
            }
            iVar22 = *(int *)((longlong)FVar31 + 8);
            if (iVar22 == *(int *)((longlong)FVar31 + 0xc)) {
              iVar22 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1060,(ForAnyElementType *)FVar31,(int *)((longlong)FVar31 + 0xc)
                                 );
            }
            *(int *)((longlong)FVar31 + 8) = iVar22 + 1;
            lVar25 = *(longlong *)FVar31;
            lVar28 = (longlong)iVar22 * 0x60;
            *(double *)(lVar28 + lVar25) = local_1b8;
            ((double *)(lVar28 + lVar25))[1] = dStack_1b0;
            pdVar2 = (double *)(lVar28 + 0x10 + lVar25);
            *pdVar2 = local_1a8;
            pdVar2[1] = dStack_1a0;
            puVar3 = (undefined8 *)(lVar28 + 0x20 + lVar25);
            *puVar3 = CONCAT44(uStack_194,local_198);
            puVar3[1] = dStack_190;
            pdVar2 = (double *)(lVar28 + 0x30 + lVar25);
            *pdVar2 = dStack_188;
            pdVar2[1] = dStack_180;
            puVar3 = (undefined8 *)(lVar28 + 0x40 + lVar25);
            *puVar3 = CONCAT44(uStack_174,local_178);
            puVar3[1] = CONCAT44(uStack_16c,uStack_170);
            puVar3 = (undefined8 *)(lVar28 + 0x50 + lVar25);
            *puVar3 = local_168;
            puVar3[1] = uStack_160;
            if (*(int *)((longlong)FVar31 + 0x18) == 0) {
              local_250.Key._4_4_ = 0xffffffff;
              TArray<int,TSizedDefaultAllocator<32>_>::Init
                        ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar31 + 0x10),
                         (int *)((longlong)&local_250.Key + 4),iVar19);
            }
            uVar33 = 0;
            if ((int)uVar20 < *(int *)((longlong)FVar31 + 0x18)) {
              uVar33 = uVar30;
            }
            if ((uVar33 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              pFVar24 = (FRetargetSourceCachedData *)(*pcVar7)();
              return pFVar24;
            }
            *(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)FVar31 + 0x10))->
                     AllocatorInstance).Data + local_248) = iVar22;
          }
        }
      }
      FVar29.ComparisonIndex.Value = local_res10 + 1;
      FVar29.Number = 0;
      local_258 = local_258 + 2;
      local_248 = local_248 + 4;
      param_2 = local_res18;
      local_res10 = FVar29.ComparisonIndex.Value;
    } while ((int)FVar29.ComparisonIndex.Value < iVar19);
  }
LAB_1476b5575:
  FMemScope::~FMemScope(&local_1f8);
  FLLMScope::~FLLMScope(local_res8);
  return (FRetargetSourceCachedData *)FVar31;
}

// GetUIDToArrayIndexLookupTableValidCount @ 1476b6010

int __thiscall FBoneContainer::GetUIDToArrayIndexLookupTableValidCount(FBoneContainer *this)

{
  return 0;
}

// GetUIDToArrayLookupTable @ 1476b6020

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
FBoneContainer::GetUIDToArrayLookupTable(FBoneContainer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FBoneContainer::GetUIDToArrayLookupTable'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetUIDToArrayLookupTableBackup @ 1476b6090

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
FBoneContainer::GetUIDToArrayLookupTableBackup(FBoneContainer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FBoneContainer::GetUIDToArrayLookupTableBackup'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// GetUIDToCurveTypeLookupTable @ 1476b6100

TArray<FAnimCurveType,TSizedDefaultAllocator<32>_> * __thiscall
FBoneContainer::GetUIDToCurveTypeLookupTable(FBoneContainer *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FBoneContainer::GetUIDToCurveTypeLookupTable'::__l2::
             _dynamic_atexit_destructor_for__Dummy__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::Dummy;
}

// Initialize @ 1476b8760

void __thiscall FBoneContainer::Initialize(FBoneContainer *this,FCurveFilterSettings *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  int *piVar1;
  FTlsAutoCleanup *pFVar2;
  FTlsAutoCleanup *pFVar3;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FVirtualBoneCompactPoseData,TSizedDefaultAllocator<32>_> *pTVar5;
  ushort *puVar6;
  uint *puVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  USkeleton *pUVar18;
  UClass *pUVar19;
  FReferenceSkeleton *pFVar20;
  USkeleton *pUVar21;
  longlong lVar22;
  FSkeletonToMeshLinkup *pFVar23;
  FTlsAutoCleanup *pFVar24;
  ForElementType<unsigned_int> FVar25;
  uint uVar26;
  ForElementType<unsigned_int> FVar27;
  ulonglong uVar28;
  ForAnyElementType FVar29;
  uint uVar30;
  longlong lVar31;
  FScriptContainerElement *pFVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  USkeleton *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [4];
  FLLMScope local_c4;
  FLLMScope local_c0;
  int local_bc;
  int iStack_b8;
  int local_b4;
  uint local_b0;
  FString local_a8;
  FName local_98;
  USkeleton *local_90;
  USkeleton *local_88;
  FMemScope local_80 [2];
  FScriptContainerElement *local_70;
  FMemScope local_68;
  code *local_60;
  undefined1 *local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name131,L"Animation/BoneContainer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_c0,LLMScope_Name131,false,None,Default,true);
  FMemScope::FMemScope(&local_68,&LLMScope_Name131,true);
  this->RefSkeleton = (FReferenceSkeleton *)0x0;
  pUVar18 = (USkeleton *)FWeakObjectPtr::Get(&(this->Asset).WeakPtr);
  if (pUVar18 == (USkeleton *)0x0) {
LAB_1476b8872:
    this->CalculatedForLOD = param_1->LODIndex;
    if (pUVar18 != (USkeleton *)0x0) {
      pUVar19 = Z_Construct_UClass_USkeleton_NoRegister();
      iVar15 = (int)pUVar19->_padding_;
      if ((iVar15 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
          &pUVar19->_padding_)) {
        this->RefSkeleton = &pUVar18->ReferenceSkeleton;
        pUVar21 = (USkeleton *)0x0;
        local_d8 = pUVar18;
        goto LAB_1476b894b;
      }
    }
    pUVar21 = (USkeleton *)0x0;
    local_d8 = (USkeleton *)0x0;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("AssetSkeletalMeshObj || AssetSkeletonObj",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BoneContainer.cpp"
                        ,0xa3,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    ::FString::FString(&local_a8,L"None");
  }
  else {
    pUVar19 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar15 = (int)pUVar19->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar15) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
        &pUVar19->_padding_)) goto LAB_1476b8872;
    this->CalculatedForLOD = param_1->LODIndex;
    pFVar20 = (FReferenceSkeleton *)(**(code **)(pUVar18->_padding_ + 800))(pUVar18);
    this->RefSkeleton = pFVar20;
    local_d8 = (USkeleton *)(**(code **)(pUVar18->_padding_ + 0x408))(pUVar18);
    pUVar21 = pUVar18;
    if (local_d8 != (USkeleton *)0x0) goto LAB_1476b894b;
    local_98 = (FName)pUVar18->_padding_;
    ::FName::ToString(&local_98,&local_a8);
  }
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("AssetSkeletonObj",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BoneContainer.cpp"
                      ,0xa5,L"%s missing skeleton");
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (bVar14) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
LAB_1476b894b:
  if ((this->RefSkeleton == (FReferenceSkeleton *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("RefSkeleton",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BoneContainer.cpp"
                          ,0xa6,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_90 = local_d8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  FWeakObjectPtr::operator=(&(this->AssetSkeleton).WeakPtr,(FObjectPtr)&local_90);
  local_88 = pUVar21;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar21 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  FWeakObjectPtr::operator=(&(this->AssetSkeletalMesh).WeakPtr,(FObjectPtr)&local_88);
  pFVar20 = this->RefSkeleton;
  if (local_d8 == (USkeleton *)0x0) {
    iVar15 = (pFVar20->FinalRefBoneInfo).ArrayNum;
  }
  else {
    iVar15 = (local_d8->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
    if (iVar15 < (pFVar20->FinalRefBoneInfo).ArrayNum) {
      iVar15 = (pFVar20->FinalRefBoneInfo).ArrayNum;
    }
  }
  this_00 = &this->BoneSwitchArray;
  (this->BoneSwitchArray).NumBits = iVar15;
  uVar30 = iVar15 + 0x1fU >> 5;
  if (iVar15 + 0x1fU >> 5 != 0) {
    if ((this->BoneSwitchArray).MaxBits + 0x1fU >> 5 < uVar30) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar30,4);
      (this->BoneSwitchArray).MaxBits = uVar30 << 5;
    }
    FVar25 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
    if (FVar25 == (ForElementType<unsigned_int>)0x0) {
      FVar25 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar25,0,(ulonglong)uVar30 << 2);
    iVar15 = (this->BoneSwitchArray).NumBits;
    uVar26 = iVar15 >> 0x1f & 0x1f;
    uVar30 = iVar15 + uVar26;
    iVar15 = (uVar30 & 0x1f) - uVar26;
    if (iVar15 != 0) {
      FVar25 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
      if (FVar25 == (ForElementType<unsigned_int>)0x0) {
        FVar25 = (ForElementType<unsigned_int>)this_00;
      }
      puVar7 = (uint *)((longlong)FVar25 + (longlong)((int)uVar30 >> 5) * 4);
      *puVar7 = *puVar7 & 0xffffffffU >> (0x20U - (char)iVar15 & 0x1f);
    }
  }
  lVar22 = (longlong)(this->BoneIndicesArray).ArrayNum;
  uVar30 = 0;
  lVar31 = 0;
  if (0 < lVar22) {
    do {
      uVar26 = 0;
      if ((int)uVar30 < (this->BoneIndicesArray).ArrayNum) {
        uVar26 = ~uVar30 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar8 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar31 * 2);
      if (((this->BoneSwitchArray).NumBits <= (int)(uint)uVar8) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FVar25 = (this->BoneSwitchArray).AllocatorInstance.SecondaryData;
      FVar27 = (ForElementType<unsigned_int>)&this->BoneSwitchArray;
      if (FVar25 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = FVar25;
      }
      uVar30 = uVar30 + 1;
      lVar31 = lVar31 + 1;
      puVar7 = (uint *)((longlong)FVar27 + (ulonglong)(uVar8 >> 5) * 4);
      *puVar7 = *puVar7 | 1 << ((byte)uVar8 & 0x1f);
    } while (lVar31 < lVar22);
  }
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  if ((this->SkeletonToPoseBoneIndexArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkeletonToPoseBoneIndexArray).AllocatorInstance,0,
               &(this->SkeletonToPoseBoneIndexArray).ArrayMax);
  }
  if (pUVar21 == (USkeleton *)0x0) {
    RemapFromSkeleton(this,local_d8);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&LLMScope_Name566,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(&local_c4,LLMScope_Name566,false,None,Default,true);
    FMemScope::FMemScope(local_80,&LLMScope_Name566,true);
    pFVar23 = USkeleton::FindOrAddMeshLinkupData(local_d8,(USkinnedAsset *)pUVar21);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&this->SkeletonToPoseBoneIndexArray,&pFVar23->SkeletonToMeshTable);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              (&this->PoseToSkeletonBoneIndexArray,&pFVar23->MeshToSkeletonTable);
    FMemScope::~FMemScope(local_80);
    FLLMScope::~FLLMScope(&local_c4);
  }
  uVar30 = (this->BoneIndicesArray).ArrayNum;
  if (-1 < (int)uVar30) {
    (this->CompactPoseParentBones).ArrayNum = 0;
    if ((this->CompactPoseParentBones).ArrayMax < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar30,&(this->CompactPoseParentBones).AllocatorInstance,0,
                 &(this->CompactPoseParentBones).ArrayMax);
    }
    piVar1 = &(this->CompactPoseToSkeletonIndex).ArrayMax;
    (this->CompactPoseToSkeletonIndex).ArrayNum = 0;
    if ((this->CompactPoseToSkeletonIndex).ArrayMax < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar30,&(this->CompactPoseToSkeletonIndex).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar30,&(this->CompactPoseToSkeletonIndex).AllocatorInstance,
               &(this->CompactPoseToSkeletonIndex).ArrayNum,piVar1);
    uVar26 = (this->SkeletonToPoseBoneIndexArray).ArrayNum;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    (this->SkeletonToCompactPose).ArrayNum = 0;
    if ((this->SkeletonToCompactPose).ArrayMax < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar26,&(this->SkeletonToCompactPose).AllocatorInstance,0,
                 &(this->SkeletonToCompactPose).ArrayMax);
    }
    uVar26 = (this->RefSkeleton->UsedVirtualBoneData).ArrayNum;
    if (-1 < (int)uVar26) {
      (this->VirtualBoneCompactPoseData).ArrayNum = 0;
      if ((this->VirtualBoneCompactPoseData).ArrayMax < (int)uVar26) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,uVar26,&(this->VirtualBoneCompactPoseData).AllocatorInstance,0,
                   &(this->VirtualBoneCompactPoseData).ArrayMax);
      }
      local_58 = local_c8;
      local_60 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FBoneContainerScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar24 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,
                           &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FBoneContainerScratchArea>::GetTlsSlot(void)'
                            ::__l2::TlsSlot);
      uVar26 = (this->PoseToSkeletonBoneIndexArray).ArrayNum;
      pFVar2 = pFVar24 + 2;
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      iVar15 = *(int *)&pFVar24[3].field_0x4;
      *(undefined4 *)(pFVar24 + 3) = 0;
      pFVar3 = pFVar24 + 3;
      if (iVar15 < (int)uVar26) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar26,(ForAnyElementType *)pFVar2,0,(int *)&pFVar24[3].field_0x4);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(this->PoseToSkeletonBoneIndexArray).ArrayNum,(ForAnyElementType *)pFVar2,
                 (int *)pFVar3,(int *)&pFVar24[3].field_0x4);
      FVar29.Data = *(FScriptContainerElement **)pFVar2;
      iVar15 = *(int *)pFVar3;
      pFVar32 = FVar29.Data + (longlong)iVar15 * 4;
      while( true ) {
        if (*(int *)pFVar3 != iVar15) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar29.Data == pFVar32) break;
        *(undefined4 *)FVar29.Data = 0xffffffff;
        FVar29.Data = FVar29.Data + 4;
      }
      uVar26 = 0;
      lVar22 = 0;
      if (0 < (int)uVar30) {
        pTVar4 = &this->CompactPoseParentBones;
        do {
          uVar16 = 0;
          if ((int)uVar26 < (this->BoneIndicesArray).ArrayNum) {
            uVar16 = ~uVar26 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar8 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar22 * 2);
          if ((*(int *)(pFVar24 + 3) <= (int)(uint)uVar8) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          *(uint *)(*(FScriptContainerElement **)pFVar2 + (ulonglong)uVar8 * 4) = uVar26;
          uVar16 = FReferenceSkeleton::GetParentIndex(this->RefSkeleton,(uint)uVar8);
          if (uVar16 == 0xffffffff) {
            local_d0 = 0xffffffff;
          }
          else {
            uVar17 = 0;
            if ((int)uVar16 < *(int *)(pFVar24 + 3)) {
              uVar17 = ~uVar16 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_d0 = *(undefined4 *)
                        (*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar16 * 4);
          }
          pFVar32 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar32 <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               pFVar32 + (longlong)(this->CompactPoseParentBones).ArrayMax * 4)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar15 = (this->CompactPoseParentBones).ArrayNum;
          if (iVar15 == (this->CompactPoseParentBones).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar4->AllocatorInstance,
                                &(this->CompactPoseParentBones).ArrayMax);
          }
          uVar26 = uVar26 + 1;
          (this->CompactPoseParentBones).ArrayNum = iVar15 + 1;
          lVar22 = lVar22 + 1;
          *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_d0;
        } while (lVar22 < (int)uVar30);
        uVar26 = 0;
        lVar22 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar26 < (this->BoneIndicesArray).ArrayNum) {
            uVar16 = ~uVar26 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar8 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar22 * 2);
          if (((this->PoseToSkeletonBoneIndexArray).ArrayNum <= (int)(uint)uVar8) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar9 = *(undefined4 *)
                   ((this->PoseToSkeletonBoneIndexArray).AllocatorInstance.Data +
                   (ulonglong)uVar8 * 4);
          uVar16 = 0;
          if ((int)uVar26 < (this->CompactPoseToSkeletonIndex).ArrayNum) {
            uVar16 = ~uVar26 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar26 = uVar26 + 1;
          *(undefined4 *)((this->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar22 * 4) =
               uVar9;
          lVar22 = lVar22 + 1;
        } while (lVar22 < (int)uVar30);
      }
      uVar30 = 0;
      if (0 < (this->SkeletonToPoseBoneIndexArray).ArrayNum) {
        pTVar4 = &this->SkeletonToCompactPose;
        lVar22 = 0;
        do {
          uVar26 = 0;
          if ((int)uVar30 < (this->SkeletonToPoseBoneIndexArray).ArrayNum) {
            uVar26 = ~uVar30 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          uVar26 = *(uint *)((this->SkeletonToPoseBoneIndexArray).AllocatorInstance.Data + lVar22);
          if (uVar26 == 0xffffffff) {
            local_cc = 0xffffffff;
          }
          else {
            uVar16 = 0;
            if ((int)uVar26 < *(int *)(pFVar24 + 3)) {
              uVar16 = ~uVar26 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            local_cc = *(undefined4 *)
                        (*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar26 * 4);
          }
          pFVar32 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar32 <= (FScriptContainerElement *)&local_cc) &&
              ((FScriptContainerElement *)&local_cc <
               pFVar32 + (longlong)(this->SkeletonToCompactPose).ArrayMax * 4)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar15 = (this->SkeletonToCompactPose).ArrayNum;
          if (iVar15 == (this->SkeletonToCompactPose).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar4->AllocatorInstance,
                                &(this->SkeletonToCompactPose).ArrayMax);
          }
          uVar30 = uVar30 + 1;
          (this->SkeletonToCompactPose).ArrayNum = iVar15 + 1;
          lVar22 = lVar22 + 4;
          *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 4) = local_cc;
        } while ((int)uVar30 < (this->SkeletonToPoseBoneIndexArray).ArrayNum);
      }
      pFVar20 = this->RefSkeleton;
      pTVar5 = &this->VirtualBoneCompactPoseData;
      local_b0 = (pFVar20->UsedVirtualBoneData).ArrayNum;
      uVar28 = (ulonglong)(int)local_b0;
      pFVar32 = (pFVar20->UsedVirtualBoneData).AllocatorInstance.Data;
      local_70 = pFVar32 + uVar28 * 0xc;
      while( true ) {
        pFVar12 = local_70;
        if ((pFVar20->UsedVirtualBoneData).ArrayNum != (int)uVar28) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FVirtualBoneRefData_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (pFVar32 == pFVar12) {
          CacheRequiredAnimCurves(this,param_1);
          TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
          ::Reset((TSet<TTuple<FRetargetSourceCachedDataKey,FRetargetSourceCachedData>,TDefaultMapHashableKeyFuncs<FRetargetSourceCachedDataKey,FRetargetSourceCachedData,0>,FDefaultSetAllocator>
                   *)&this->RetargetSourceCachedDataLUT);
          puVar6 = &this->SerialNumber;
          *puVar6 = *puVar6 + 1;
          if (*puVar6 == 0) {
            this->SerialNumber = 1;
          }
          FMemScope::~FMemScope(&local_68);
          FLLMScope::~FLLMScope(&local_c0);
          return;
        }
        uVar30 = *(uint *)pFVar32;
        uVar26 = 0;
        if ((int)uVar30 < *(int *)(pFVar24 + 3)) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) break;
        iVar15 = *(int *)(*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar30 * 4);
        uVar30 = *(uint *)(pFVar32 + 4);
        uVar26 = 0;
        if ((int)uVar30 < *(int *)(pFVar24 + 3)) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar10 = *(int *)(*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar30 * 4);
        uVar30 = *(uint *)(pFVar32 + 8);
        uVar26 = 0;
        if ((int)uVar30 < *(int *)(pFVar24 + 3)) {
          uVar26 = ~uVar30 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar11 = *(int *)(*(FScriptContainerElement **)pFVar2 + (longlong)(int)uVar30 * 4);
        if (((iVar15 != -1) && (iVar10 != -1)) && (iVar11 != -1)) {
          pFVar12 = (pTVar5->AllocatorInstance).Data;
          local_bc = iVar15;
          iStack_b8 = iVar10;
          local_b4 = iVar11;
          if (((pFVar12 <= (FScriptContainerElement *)&local_bc) &&
              ((FScriptContainerElement *)&local_bc <
               pFVar12 + (longlong)(this->VirtualBoneCompactPoseData).ArrayMax * 0xc)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar15 = (this->VirtualBoneCompactPoseData).ArrayNum;
          if (iVar15 == (this->VirtualBoneCompactPoseData).ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar5->AllocatorInstance,
                                &(this->VirtualBoneCompactPoseData).ArrayMax);
          }
          (this->VirtualBoneCompactPoseData).ArrayNum = iVar15 + 1;
          pFVar12 = (pTVar5->AllocatorInstance).Data;
          *(ulonglong *)(pFVar12 + (longlong)iVar15 * 0xc) = CONCAT44(iStack_b8,local_bc);
          *(int *)(pFVar12 + (longlong)iVar15 * 0xc + 8) = local_b4;
        }
        uVar28 = (ulonglong)local_b0;
        pFVar32 = pFVar32 + 0xc;
      }
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
}

// InitializeTo @ 1476b9dc0

void __thiscall
FBoneContainer::InitializeTo
          (FBoneContainer *this,TArrayView<unsigned_short_const_,int> *param_1,
          FCurveEvaluationOption *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  ushort *_Src;
  FLLMScope local_res8 [2];
  UObject *local_res10;
  FMemScope local_res18;
  FCurveFilterSettings local_28;
  
  local_28.FilterCurves = param_2->DisallowedList;
  local_28.FilterMode = DisallowAll;
  if (param_2->bAllowCurveEvaluation != false) {
    local_28.FilterMode = DisallowFiltered;
  }
  local_28.LODIndex = param_2->LODIndex;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name86,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name86,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,&LLMScope_Name86,true);
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  _Src = param_1->DataPtr;
  (this->BoneIndicesArray).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->BoneIndicesArray).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
  }
  local_res10 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&(this->Asset).WeakPtr,(FObjectPtr)&local_res10);
  Initialize(this,&local_28);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// InitializeTo @ 1476b9f50

void __thiscall
FBoneContainer::InitializeTo
          (FBoneContainer *this,TArrayView<unsigned_short_const_,int> *param_1,
          FCurveFilterSettings *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  ushort *_Src;
  FLLMScope local_res8 [2];
  UObject *local_res10 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name86,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name86,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name86,true);
  iVar2 = param_1->ArrayNum;
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  _Src = param_1->DataPtr;
  (this->BoneIndicesArray).ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((this->BoneIndicesArray).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
    }
  }
  local_res10[0] = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  FWeakObjectPtr::operator=(&(this->Asset).WeakPtr,(FObjectPtr)local_res10);
  Initialize(this,param_2);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegenerateSerialNumber @ 1476c0070

void __thiscall FBoneContainer::RegenerateSerialNumber(FBoneContainer *this)

{
  ushort *puVar1;
  
  puVar1 = &this->SerialNumber;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 == 0) {
    this->SerialNumber = 1;
  }
  return;
}

// RemapFromSkelMesh @ 1476c0ec0

void __thiscall
FBoneContainer::RemapFromSkelMesh(FBoneContainer *this,USkeletalMesh *param_1,USkeleton *param_2)

{
  FSkeletonToMeshLinkup *pFVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name566,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name566,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name566,true);
  pFVar1 = USkeleton::FindOrAddMeshLinkupData(param_2,(USkinnedAsset *)param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletonToPoseBoneIndexArray,&pFVar1->SkeletonToMeshTable);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->PoseToSkeletonBoneIndexArray,&pFVar1->MeshToSkeletonTable);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RemapFromSkeleton @ 1476c0fd0

void __thiscall FBoneContainer::RemapFromSkeleton(FBoneContainer *this,USkeleton *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ushort uVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  FLLMScope local_res8 [5];
  int local_res18 [2];
  undefined8 local_res20;
  FMemScope local_38 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name578,L"Animation/BoneContainer");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name578,false,None,Default,true);
  FMemScope::FMemScope(local_38,&LLMScope_Name578,true);
  local_res20 = 0;
  pTVar7 = USkeleton::GetRefLocalPoses(param_1,(FName)0x0);
  this_00 = &this->SkeletonToPoseBoneIndexArray;
  local_res18[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(this_00,local_res18,pTVar7->ArrayNum);
  iVar8 = (this->BoneIndicesArray).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar8) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar10);
      if ((this->SkeletonToPoseBoneIndexArray).ArrayNum <= (int)(uint)uVar3) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 2;
      *(uint *)((this_00->AllocatorInstance).Data + (ulonglong)uVar3 * 4) = (uint)uVar3;
      iVar8 = (this->BoneIndicesArray).ArrayNum;
    } while ((int)uVar9 < iVar8);
  }
  pTVar1 = &this->PoseToSkeletonBoneIndexArray;
  if (pTVar1 != this_00) {
    iVar8 = (this->SkeletonToPoseBoneIndexArray).ArrayNum;
    piVar2 = &(this->PoseToSkeletonBoneIndexArray).ArrayMax;
    _Src = (this_00->AllocatorInstance).Data;
    (this->PoseToSkeletonBoneIndexArray).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar8,*piVar2,&pTVar1->AllocatorInstance,iVar8,piVar2);
      if (iVar8 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar8 << 2);
      }
    }
  }
  FMemScope::~FMemScope(local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// Reset @ 1476c4280

void __thiscall FBoneContainer::Reset(FBoneContainer *this)

{
  int *piVar1;
  FCurveFilter *pFVar2;
  FBulkCurveFlags *pFVar3;
  ushort *puVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  TSharedPtr<FSkelMeshRefPoseOverride,1> local_58;
  undefined8 local_48 [3];
  undefined8 local_30 [5];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->Asset).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->AssetSkeletalMesh).WeakPtr = local_res8;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->AssetSkeleton).WeakPtr = local_res8;
  this->RefSkeleton = (FReferenceSkeleton *)0x0;
  local_58.Object = (FSkelMeshRefPoseOverride *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TSharedPtr<FSkelMeshRefPoseOverride,1>::operator=(&this->RefPoseOverride,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  this->CalculatedForLOD = -1;
  piVar1 = &(this->BoneIndicesArray).ArrayMax;
  this->bDisableRetargeting = false;
  this->bUseRAWData = false;
  this->bUseSourceData = false;
  (this->BoneIndicesArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,(ForAnyElementType *)this,0,piVar1);
  }
  iVar5 = (this->BoneSwitchArray).MaxBits;
  (this->BoneSwitchArray).NumBits = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    (this->BoneSwitchArray).MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->BoneSwitchArray,0);
  }
  piVar1 = &(this->SkeletonToPoseBoneIndexArray).ArrayMax;
  (this->SkeletonToPoseBoneIndexArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkeletonToPoseBoneIndexArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PoseToSkeletonBoneIndexArray).ArrayMax;
  (this->PoseToSkeletonBoneIndexArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PoseToSkeletonBoneIndexArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CompactPoseToSkeletonIndex).ArrayMax;
  (this->CompactPoseToSkeletonIndex).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CompactPoseToSkeletonIndex).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->SkeletonToCompactPose).ArrayMax;
  (this->SkeletonToCompactPose).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SkeletonToCompactPose).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CompactPoseParentBones).ArrayMax;
  (this->CompactPoseParentBones).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CompactPoseParentBones).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->VirtualBoneCompactPoseData).ArrayMax;
  (this->VirtualBoneCompactPoseData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->VirtualBoneCompactPoseData).AllocatorInstance,0,piVar1);
  }
  pFVar2 = &this->CurveFilter;
  if (pFVar2 != (FCurveFilter *)local_30) {
    if ((void *)pFVar2->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar2->_padding_);
    }
    pFVar2->_padding_ = 0;
    (this->CurveFilter)._padding_ = 0;
  }
  *(undefined1 *)&(this->CurveFilter)._padding_ = 0;
  (this->CurveFilter).FilterMode = None;
  pFVar3 = &this->CurveFlags;
  if (pFVar3 != (FBulkCurveFlags *)local_48) {
    if (*(void **)pFVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar3);
    }
    *(undefined8 *)pFVar3 = 0;
    *(undefined8 *)&(this->CurveFlags).field_0x8 = 0;
  }
  (this->CurveFlags).field_0x10 = 0;
  puVar4 = &this->SerialNumber;
  *puVar4 = *puVar4 + 1;
  if (*puVar4 == 0) {
    this->SerialNumber = 1;
  }
  return;
}

// FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 147921ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FBoneContainer::
FillWithCompactRefPose<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (FBoneContainer *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  uint uVar3;
  FSkelMeshRefPoseOverride *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar27;
  
  uVar3 = (this->BoneIndicesArray).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar3,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_1,uVar3,Default);
  pFVar4 = (this->RefPoseOverride).Object;
  if (pFVar4 == (FSkelMeshRefPoseOverride *)0x0) {
    pTVar27 = &this->RefSkeleton->FinalRefBonePose;
  }
  else {
    pTVar27 = &pFVar4->RefBonePoses;
  }
  uVar25 = 0;
  if (0 < (int)uVar3) {
    lVar24 = 0;
    lVar26 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar25 < (this->BoneIndicesArray).ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(ushort *)((this->BoneIndicesArray).AllocatorInstance.Data + lVar24 * 2);
      if ((pTVar27->ArrayNum <= (int)(uint)uVar2) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pTVar27->AllocatorInstance).Data;
      lVar23 = (ulonglong)uVar2 * 0x60;
      uVar11 = *(undefined8 *)(pFVar5 + lVar23 + 0x10);
      uVar12 = *(undefined8 *)(pFVar5 + lVar23 + 0x10 + 8);
      uVar13 = *(undefined8 *)(pFVar5 + lVar23 + 0x20);
      uVar14 = *(undefined8 *)(pFVar5 + lVar23 + 0x20 + 8);
      pFVar1 = pFVar5 + lVar23;
      uVar7 = *(undefined4 *)pFVar1;
      uVar8 = *(undefined4 *)(pFVar1 + 4);
      uVar9 = *(undefined4 *)(pFVar1 + 8);
      uVar10 = *(undefined4 *)(pFVar1 + 0xc);
      uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x30);
      uVar16 = *(undefined8 *)(pFVar5 + lVar23 + 0x30 + 8);
      uVar17 = *(undefined8 *)(pFVar5 + lVar23 + 0x50);
      uVar18 = *(undefined8 *)(pFVar5 + lVar23 + 0x50 + 8);
      uVar19 = *(undefined8 *)(pFVar5 + lVar23 + 0x40);
      uVar20 = *(undefined8 *)(pFVar5 + lVar23 + 0x40 + 8);
      uVar22 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar22 = ~uVar25 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      uVar25 = uVar25 + 1;
      lVar24 = lVar24 + 1;
      pFVar1 = pFVar5 + lVar26;
      *(undefined4 *)pFVar1 = uVar7;
      *(undefined4 *)(pFVar1 + 4) = uVar8;
      *(undefined4 *)(pFVar1 + 8) = uVar9;
      *(undefined4 *)(pFVar1 + 0xc) = uVar10;
      *(undefined8 *)(pFVar5 + lVar26 + 0x10) = uVar11;
      *(undefined8 *)(pFVar5 + lVar26 + 0x10 + 8) = uVar12;
      *(undefined8 *)(pFVar5 + lVar26 + 0x20) = uVar13;
      *(undefined8 *)(pFVar5 + lVar26 + 0x20 + 8) = uVar14;
      *(undefined8 *)(pFVar5 + lVar26 + 0x30) = uVar15;
      *(undefined8 *)(pFVar5 + lVar26 + 0x30 + 8) = uVar16;
      *(undefined8 *)(pFVar5 + lVar26 + 0x40) = uVar19;
      *(undefined8 *)(pFVar5 + lVar26 + 0x40 + 8) = uVar20;
      *(undefined8 *)(pFVar5 + lVar26 + 0x50) = uVar17;
      *(undefined8 *)(pFVar5 + lVar26 + 0x50 + 8) = uVar18;
      lVar26 = lVar26 + 0x60;
    } while (lVar24 < (int)uVar3);
  }
  return;
}

