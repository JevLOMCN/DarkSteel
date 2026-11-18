// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// FBoneWeights @ 1433665e0

FBoneWeights * __thiscall UE::AnimationCore::FBoneWeights::FBoneWeights(FBoneWeights *this)

{
  (this->BoneWeights).AllocatorInstance.SecondaryData =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  (this->BoneWeights).ArrayNum = 0;
  (this->BoneWeights).ArrayMax = 0xc;
  return this;
}

// ~FBoneWeights @ 14336a300

void __thiscall UE::AnimationCore::FBoneWeights::~FBoneWeights(FBoneWeights *this)

{
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  FLowLevelMemTracker *this_00;
  
  FVar1 = (this->BoneWeights).AllocatorInstance.SecondaryData;
  if (FVar1 == (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    return;
  }
  if (FVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// operator= @ 14336b080

FBoneWeights * __thiscall
UE::AnimationCore::FBoneWeights::operator=(FBoneWeights *this,FBoneWeights *param_1)

{
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  
  if (this != param_1) {
    if ((param_1->BoneWeights).AllocatorInstance.SecondaryData ==
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      memmove(this,param_1,0x30);
    }
    FVar1 = (this->BoneWeights).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->BoneWeights).AllocatorInstance.SecondaryData =
         (param_1->BoneWeights).AllocatorInstance.SecondaryData;
    (param_1->BoneWeights).AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    (this->BoneWeights).ArrayNum = (param_1->BoneWeights).ArrayNum;
    (this->BoneWeights).ArrayMax = (param_1->BoneWeights).ArrayMax;
    (param_1->BoneWeights).ArrayNum = 0;
    (param_1->BoneWeights).ArrayMax = 0xc;
  }
  return this;
}

// operator= @ 14336b0f0

FBoneWeights * __thiscall
UE::AnimationCore::FBoneWeights::operator=(FBoneWeights *this,FBoneWeights *param_1)

{
  int iVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  int *piVar3;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->BoneWeights).AllocatorInstance.SecondaryData;
    piVar3 = &(this->BoneWeights).ArrayMax;
    iVar1 = (param_1->BoneWeights).ArrayNum;
    if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      param_1 = (FBoneWeights *)FVar2;
    }
    (this->BoneWeights).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 0xc;
      return this;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
              (4,2,iVar1,*piVar3,(ForElementType<UE::AnimationCore::FBoneWeight> *)this,iVar1,piVar3
              );
    FVar2 = (this->BoneWeights).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)this;
    if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 2);
    }
  }
  return this;
}

