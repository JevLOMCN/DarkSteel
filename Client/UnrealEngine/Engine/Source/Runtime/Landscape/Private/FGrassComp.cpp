// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// FGrassComp @ 145f418f0

FGrassComp * __thiscall
FCachedLandscapeFoliage::FGrassComp::FGrassComp(FGrassComp *this,FGrassComp *param_1)

{
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FWeakObjectPtr FVar4;
  int iVar5;
  int iVar6;
  
  FVar4 = (param_1->Key).GrassType.WeakPtr;
  pTVar1 = &this->ExcludedBoxes;
  (this->Key).BasedOn.WeakPtr = (param_1->Key).BasedOn.WeakPtr;
  (this->Key).GrassType.WeakPtr = FVar4;
  iVar3 = (param_1->Key).CachedMaxInstancesPerComponent;
  iVar5 = (param_1->Key).SubsectionX;
  iVar6 = (param_1->Key).SubsectionY;
  (this->Key).SqrtSubsections = (param_1->Key).SqrtSubsections;
  (this->Key).CachedMaxInstancesPerComponent = iVar3;
  (this->Key).SubsectionX = iVar5;
  (this->Key).SubsectionY = iVar6;
  iVar3 = (param_1->Key).VarietyIndex;
  (this->Key).NumVarieties = (param_1->Key).NumVarieties;
  (this->Key).VarietyIndex = iVar3;
  (this->Foliage).WeakPtr = (param_1->Foliage).WeakPtr;
  (this->PreviousFoliage).WeakPtr = (param_1->PreviousFoliage).WeakPtr;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->ExcludedBoxes).ArrayMax;
  iVar3 = (param_1->ExcludedBoxes).ArrayNum;
  _Src = (param_1->ExcludedBoxes).AllocatorInstance.Data;
  (this->ExcludedBoxes).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x38);
  }
  this->LastUsedFrameNumber = param_1->LastUsedFrameNumber;
  this->ExclusionChangeTag = param_1->ExclusionChangeTag;
  this->LastUsedTime = param_1->LastUsedTime;
  this->Pending = param_1->Pending;
  this->PendingRemovalRebuild = param_1->PendingRemovalRebuild;
  return this;
}

