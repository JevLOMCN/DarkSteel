// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticStruct @ 14749cd40

UScriptStruct * __cdecl FAnimNode_TransitionPoseEvaluator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator,
                         (UObject *)pUVar1,L"AnimNode_TransitionPoseEvaluator");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton;
}

// FAnimNode_TransitionPoseEvaluator @ 1474b1890

FAnimNode_TransitionPoseEvaluator * __thiscall
FAnimNode_TransitionPoseEvaluator::FAnimNode_TransitionPoseEvaluator
          (FAnimNode_TransitionPoseEvaluator *this)

{
  this->FramesToCachePose = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_TransitionPoseEvaluator__6B_;
  (this->CachedBonesCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  *(undefined8 *)&this->CachedPose = 0;
  *(undefined8 *)&(this->CachedPose).field_0x8 = 0;
  *(undefined8 *)&(this->CachedPose).field_0x10 = 0;
  *(undefined8 *)&this->CachedCurve = 0;
  *(undefined8 *)&(this->CachedCurve).field_0x8 = 0;
  (this->CachedCurve).field_0x10 = 0;
  *(undefined8 *)&(this->CachedCurve).field_0x18 = 0;
  *(undefined8 *)&this->CachedAttributes = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->CachedAttributes).field_0x38 = 0;
  this->CacheFramesRemaining = 1;
  this->DataSource = '\0';
  this->EvaluatorMode = '\0';
  (this->CachedBonesCounter).Counter = -1;
  (this->CachedBonesCounter).SkipFrames = 0;
  return this;
}

// CacheBones_AnyThread @ 1474c1e20

void __thiscall
FAnimNode_TransitionPoseEvaluator::CacheBones_AnyThread
          (FAnimNode_TransitionPoseEvaluator *this,FAnimationCacheBonesContext *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uchar uVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  ulong64 uVar7;
  FBoneContainer *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  
  lVar6 = *(longlong *)param_1;
  sVar4 = (this->CachedBonesCounter).Counter;
  if ((((sVar4 == -1) ||
       (uVar7 = (this->CachedBonesCounter).LastSyncronizedFrame, uVar7 == 0xffffffffffffffff)) ||
      (sVar4 != *(short *)(lVar6 + 0x5a0))) || (uVar7 != *(ulong64 *)(lVar6 + 0x598))) {
    (this->CachedBonesCounter).Counter = *(short *)(lVar6 + 0x5a0);
    (this->CachedBonesCounter).LastSyncronizedFrame = *(ulong64 *)(lVar6 + 0x598);
    (this->CachedBonesCounter).SkipFrames = *(short *)(lVar6 + 0x5a2);
    uVar3 = (this->EvaluatorMode).Value;
    if (uVar3 == '\x01') {
      this->CacheFramesRemaining = 1;
    }
    else if (uVar3 == '\x02') {
      iVar11 = 1;
      if (1 < this->FramesToCachePose) {
        iVar11 = this->FramesToCachePose;
      }
      this->CacheFramesRemaining = iVar11;
    }
    lVar6 = *(longlong *)param_1;
    if ((*(longlong *)(lVar6 + 0x660) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = *(FBoneContainer **)(lVar6 + 0x660);
    if ((((pFVar8 == (FBoneContainer *)0x0) ||
         (bVar10 = FWeakObjectPtr::IsValid(&(pFVar8->Asset).WeakPtr), !bVar10)) ||
        ((pFVar8->RefSkeleton == (FReferenceSkeleton *)0x0 ||
         ((pFVar8->BoneIndicesArray).ArrayNum < 1)))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InBoneContainer && InBoneContainer->IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BonePose.h"
                            ,0x97,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(FBoneContainer **)&(this->CachedPose).field_0x10 = pFVar8;
    uVar5 = (pFVar8->BoneIndicesArray).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    puVar1 = &(this->CachedPose).field_0xc;
    puVar2 = &(this->CachedPose).field_0x8;
    *(undefined4 *)puVar2 = 0;
    if (*(int *)&(this->CachedPose).field_0xc < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar5,(ForAnyElementType *)&this->CachedPose,0,(int *)puVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar5,(ForAnyElementType *)&this->CachedPose,(int *)puVar2,(int *)puVar1);
    FBlendedHeapCurve::InitFrom(&this->CachedCurve,pFVar8);
  }
  return;
}

// CachePose @ 1474c20e0

void __thiscall
FAnimNode_TransitionPoseEvaluator::CachePose
          (FAnimNode_TransitionPoseEvaluator *this,FPoseContext *param_1)

{
  FCompactHeapPose *this_00;
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = *(int *)&(param_1->Pose).field_0x8;
  this_00 = &this->CachedPose;
  _Src = *(void **)&param_1->Pose;
  puVar1 = &(this->CachedPose).field_0xc;
  *(int *)&(this->CachedPose).field_0x8 = iVar2;
  if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar2,*(int *)puVar1,(ForAnyElementType *)this_00,iVar2,(int *)puVar1);
    if (iVar2 != 0) {
      memcpy(*(void **)this_00,_Src,(longlong)iVar2 * 0x60);
    }
  }
  *(undefined8 *)&(this->CachedPose).field_0x10 = *(undefined8 *)&(param_1->Pose).field_0x10;
  FCompactHeapPose::NormalizeRotations(this_00);
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
  CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &this->CachedCurve,
             (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  CopyFrom<TMemStackAllocator<0>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CachedAttributes,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &param_1->CustomAttributes);
  return;
}

// Evaluate_AnyThread @ 1474d1440

void __thiscall
FAnimNode_TransitionPoseEvaluator::Evaluate_AnyThread
          (FAnimNode_TransitionPoseEvaluator *this,FPoseContext *param_1)

{
  int iVar1;
  int iVar2;
  
  FBaseCompactPose<TMemStackAllocator<0>_>::CopyBonesFrom<TSizedDefaultAllocator<32>_>
            ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
             (FBaseCompactPose<TSizedDefaultAllocator<32>_> *)&this->CachedPose);
  TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
  CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve,
             (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &this->CachedCurve);
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  CopyFrom<TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &param_1->CustomAttributes,
             (TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->CachedAttributes);
  if (((this->EvaluatorMode).Value != '\0') && (0 < this->CacheFramesRemaining)) {
    iVar2 = this->CacheFramesRemaining + -1;
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    this->CacheFramesRemaining = iVar1;
  }
  return;
}

// GatherDebugData @ 1474d55f0

void __thiscall
FAnimNode_TransitionPoseEvaluator::GatherDebugData
          (FAnimNode_TransitionPoseEvaluator *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionPoseEvaluator,
                         (UObject *)pUVar1,L"AnimNode_TransitionPoseEvaluator");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_TransitionPoseEvaluator.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Cached Frames Remaining: %i)");
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
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// Initialize_AnyThread @ 1474e9990

void __thiscall
FAnimNode_TransitionPoseEvaluator::Initialize_AnyThread
          (FAnimNode_TransitionPoseEvaluator *this,FAnimationInitializeContext *param_1)

{
  uchar uVar1;
  int iVar2;
  
  uVar1 = (this->EvaluatorMode).Value;
  if (uVar1 == '\x01') {
    this->CacheFramesRemaining = 1;
    return;
  }
  if (uVar1 == '\x02') {
    iVar2 = 1;
    if (1 < this->FramesToCachePose) {
      iVar2 = this->FramesToCachePose;
    }
    this->CacheFramesRemaining = iVar2;
  }
  return;
}

// InputNodeNeedsEvaluate @ 1474e99f0

bool __thiscall
FAnimNode_TransitionPoseEvaluator::InputNodeNeedsEvaluate(FAnimNode_TransitionPoseEvaluator *this)

{
  if (((this->EvaluatorMode).Value != '\0') && (this->CacheFramesRemaining < 1)) {
    return false;
  }
  return true;
}

// InputNodeNeedsUpdate @ 1474e9a10

bool __thiscall
FAnimNode_TransitionPoseEvaluator::InputNodeNeedsUpdate
          (FAnimNode_TransitionPoseEvaluator *this,FAnimationUpdateContext *param_1)

{
  uchar uVar1;
  short sVar2;
  ulong64 uVar3;
  
  uVar1 = (this->EvaluatorMode).Value;
  if ((uVar1 != '\0') && ((uVar1 != '\x02' || (this->CacheFramesRemaining < 1)))) {
    sVar2 = (this->CachedBonesCounter).Counter;
    if ((sVar2 != -1) &&
       (((uVar3 = (this->CachedBonesCounter).LastSyncronizedFrame, uVar3 != 0xffffffffffffffff &&
         (sVar2 == *(short *)(param_1->_padding_ + 0x5a0))) &&
        (uVar3 == *(ulong64 *)(param_1->_padding_ + 0x598))))) {
      return false;
    }
  }
  return true;
}

// SetupCacheFrames @ 1474f9e20

void __thiscall
FAnimNode_TransitionPoseEvaluator::SetupCacheFrames(FAnimNode_TransitionPoseEvaluator *this)

{
  uchar uVar1;
  int iVar2;
  
  uVar1 = (this->EvaluatorMode).Value;
  if (uVar1 == '\x01') {
    this->CacheFramesRemaining = 1;
    return;
  }
  if (uVar1 == '\x02') {
    iVar2 = 1;
    if (1 < this->FramesToCachePose) {
      iVar2 = this->FramesToCachePose;
    }
    this->CacheFramesRemaining = iVar2;
  }
  return;
}

// Update_AnyThread @ 147502170

void __thiscall
FAnimNode_TransitionPoseEvaluator::Update_AnyThread
          (FAnimNode_TransitionPoseEvaluator *this,FAnimationUpdateContext *param_1)

{
  uchar uVar1;
  short sVar2;
  longlong lVar3;
  ulong64 uVar4;
  int iVar5;
  
  sVar2 = (this->CachedBonesCounter).Counter;
  lVar3 = param_1->_padding_;
  if ((((sVar2 == -1) ||
       (uVar4 = (this->CachedBonesCounter).LastSyncronizedFrame, uVar4 == 0xffffffffffffffff)) ||
      (sVar2 != *(short *)(lVar3 + 0x5a0))) || (uVar4 != *(ulong64 *)(lVar3 + 0x598))) {
    (this->CachedBonesCounter).Counter = *(short *)(lVar3 + 0x5a0);
    (this->CachedBonesCounter).LastSyncronizedFrame = *(ulong64 *)(lVar3 + 0x598);
    (this->CachedBonesCounter).SkipFrames = *(short *)(lVar3 + 0x5a2);
    uVar1 = (this->EvaluatorMode).Value;
    if (uVar1 == '\x01') {
      this->CacheFramesRemaining = 1;
    }
    else if (uVar1 == '\x02') {
      iVar5 = 1;
      if (1 < this->FramesToCachePose) {
        iVar5 = this->FramesToCachePose;
      }
      this->CacheFramesRemaining = iVar5;
    }
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Cached Frames Remaining",this->CacheFramesRemaining);
  return;
}

