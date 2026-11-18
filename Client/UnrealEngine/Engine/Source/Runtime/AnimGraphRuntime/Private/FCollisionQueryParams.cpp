// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640ce30

FCollisionQueryParams * __thiscall
FCollisionQueryParams::operator=(FCollisionQueryParams *this,FCollisionQueryParams *param_1)

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
  if (this != param_1) {
    FVar4 = (param_1->IgnoreComponents).AllocatorInstance.SecondaryData;
    piVar1 = &(this->IgnoreComponents).ArrayMax;
    iVar2 = (param_1->IgnoreComponents).ArrayNum;
    if (FVar4 == (ForElementType<unsigned_int>)0x0) {
      FVar4 = (ForElementType<unsigned_int>)&param_1->IgnoreComponents;
    }
    (this->IgnoreComponents).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 8;
      goto LAB_14640cf5a;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar2,*piVar1,&(this->IgnoreComponents).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (FVar3 == (ForElementType<unsigned_int>)0x0) {
        FVar3 = (ForElementType<unsigned_int>)&this->IgnoreComponents;
      }
      memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
      goto LAB_14640cf5a;
    }
  }
  if (this == param_1) {
    return this;
  }
LAB_14640cf5a:
  iVar2 = (param_1->IgnoreSourceObjects).ArrayNum;
  piVar1 = &(this->IgnoreSourceObjects).ArrayMax;
  FVar4 = (param_1->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  (this->IgnoreSourceObjects).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&param_1->IgnoreSourceObjects;
  }
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,iVar2,*piVar1,&(this->IgnoreSourceObjects).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (FVar3 == (ForElementType<unsigned_int>)0x0) {
        FVar3 = (ForElementType<unsigned_int>)&this->IgnoreSourceObjects;
      }
      memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 2);
    }
  }
  return this;
}

