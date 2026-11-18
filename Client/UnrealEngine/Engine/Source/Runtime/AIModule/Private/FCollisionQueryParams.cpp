// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 1

// FCollisionQueryParams @ 146f289c0

FCollisionQueryParams * __thiscall
FCollisionQueryParams::FCollisionQueryParams
          (FCollisionQueryParams *this,FCollisionQueryParams *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  ForElementType<unsigned_int> FVar4;
  
  this->TraceTag = param_1->TraceTag;
  this->OwnerTag = param_1->OwnerTag;
  this->bTraceComplex = param_1->bTraceComplex;
  this->bFindInitialOverlaps = param_1->bFindInitialOverlaps;
  this->bReturnFaceIndex = param_1->bReturnFaceIndex;
  this->bReturnPhysicalMaterial = param_1->bReturnPhysicalMaterial;
  this->bIgnoreBlocks = param_1->bIgnoreBlocks;
  this->bIgnoreTouches = param_1->bIgnoreTouches;
  this->bSkipNarrowPhase = param_1->bSkipNarrowPhase;
  this->bTraceIntoSubComponents = param_1->bTraceIntoSubComponents;
  this->bReplaceHitWithSubComponents = param_1->bReplaceHitWithSubComponents;
  this->MobilityType = param_1->MobilityType;
  this->IgnoreMask = param_1->IgnoreMask;
  (this->StatId).StatIdPtr = (param_1->StatId).StatIdPtr;
  this->bDebugQuery = param_1->bDebugQuery;
  this->bComponentListUnique = param_1->bComponentListUnique;
  (this->IgnoreComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FVar4 = (param_1->IgnoreComponents).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->IgnoreComponents).ArrayNum;
  (this->IgnoreComponents).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&param_1->IgnoreComponents;
  }
  piVar1 = &(this->IgnoreComponents).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar2,0,&(this->IgnoreComponents).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_int>)0x0) {
      FVar3 = (ForElementType<unsigned_int>)&this->IgnoreComponents;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
  }
  (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FVar4 = (param_1->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->IgnoreSourceObjects).ArrayNum;
  (this->IgnoreSourceObjects).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&param_1->IgnoreSourceObjects;
  }
  piVar1 = &(this->IgnoreSourceObjects).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar2,0,&(this->IgnoreSourceObjects).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<unsigned_int>)0x0) {
      FVar3 = (ForElementType<unsigned_int>)&this->IgnoreSourceObjects;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
  }
  return this;
}

