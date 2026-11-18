// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// FInteractionSearchContext @ 14a8e03b0

FInteractionSearchContext * __thiscall
UE::PoseSearch::FInteractionSearchContext::FInteractionSearchContext
          (FInteractionSearchContext *this,FInteractionSearchContext *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  ForElementType<int> _Dst;
  ForElementType<FPoseSearchInteractionAvailability> FVar4;
  ForElementType<int> _Src;
  ForElementType<FPoseSearchInteractionAvailability> FVar5;
  
  FInteractionSearchContextBase::FInteractionSearchContextBase
            ((FInteractionSearchContextBase *)this,(FInteractionSearchContextBase *)param_1);
  (this->PlayingAsset).WeakPtr = (param_1->PlayingAsset).WeakPtr;
  this->PlayingAssetAccumulatedTime = param_1->PlayingAssetAccumulatedTime;
  this->bIsPlayingAssetMirrored = param_1->bIsPlayingAssetMirrored;
  dVar3 = (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.Y;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.X =
       (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.X;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Y = dVar3;
  (this->PlayingAssetBlendParameters).field0_0x0._s_0.Z =
       (param_1->PlayingAssetBlendParameters).field0_0x0._s_0.Z;
  this->InterruptMode = param_1->InterruptMode;
  this->bIsContinuingInteraction = param_1->bIsContinuingInteraction;
  (this->TickPriorities).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->TickPriorities).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->TickPriorities).ArrayNum;
  (this->TickPriorities).ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->TickPriorities;
  }
  piVar1 = &(this->TickPriorities).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->TickPriorities).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->TickPriorities).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->TickPriorities;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  (this->DebugAvailabilities).AllocatorInstance.SecondaryData =
       (ForElementType<FPoseSearchInteractionAvailability>)0x0;
  FVar5 = (param_1->DebugAvailabilities).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->DebugAvailabilities).ArrayNum;
  (this->DebugAvailabilities).ArrayNum = iVar2;
  if (FVar5 == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
    FVar5 = (ForElementType<FPoseSearchInteractionAvailability>)&param_1->DebugAvailabilities;
  }
  piVar1 = &(this->DebugAvailabilities).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FPoseSearchInteractionAvailability>_>
              (0x30,8,iVar2,0,&(this->DebugAvailabilities).AllocatorInstance,iVar2,piVar1);
    FVar4 = (this->DebugAvailabilities).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FPoseSearchInteractionAvailability>)0x0) {
      FVar4 = (ForElementType<FPoseSearchInteractionAvailability>)&this->DebugAvailabilities;
    }
    ConstructItems<FPoseSearchInteractionAvailability,FPoseSearchInteractionAvailability,int>
              ((void *)FVar4,(FPoseSearchInteractionAvailability *)FVar5,iVar2);
  }
  return this;
}

