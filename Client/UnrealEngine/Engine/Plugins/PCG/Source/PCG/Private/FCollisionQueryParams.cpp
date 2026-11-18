// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// FCollisionQueryParams @ 149be5950

FCollisionQueryParams * __thiscall
FCollisionQueryParams::FCollisionQueryParams
          (FCollisionQueryParams *this,FCollisionQueryParams *param_1)

{
  ForElementType<unsigned_int> FVar1;
  
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
  if ((param_1->IgnoreComponents).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->IgnoreComponents,&param_1->IgnoreComponents,0x20);
  }
  FVar1 = (this->IgnoreComponents).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->IgnoreComponents).AllocatorInstance.SecondaryData =
       (param_1->IgnoreComponents).AllocatorInstance.SecondaryData;
  (param_1->IgnoreComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->IgnoreComponents).ArrayNum = (param_1->IgnoreComponents).ArrayNum;
  (this->IgnoreComponents).ArrayMax = (param_1->IgnoreComponents).ArrayMax;
  (param_1->IgnoreComponents).ArrayNum = 0;
  (param_1->IgnoreComponents).ArrayMax = 8;
  (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  if ((param_1->IgnoreSourceObjects).AllocatorInstance.SecondaryData ==
      (ForElementType<unsigned_int>)0x0) {
    memmove(&this->IgnoreSourceObjects,&param_1->IgnoreSourceObjects,0x10);
  }
  FVar1 = (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->IgnoreSourceObjects).AllocatorInstance.SecondaryData =
       (param_1->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
  (param_1->IgnoreSourceObjects).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
  ;
  (this->IgnoreSourceObjects).ArrayNum = (param_1->IgnoreSourceObjects).ArrayNum;
  (this->IgnoreSourceObjects).ArrayMax = (param_1->IgnoreSourceObjects).ArrayMax;
  (param_1->IgnoreSourceObjects).ArrayNum = 0;
  (param_1->IgnoreSourceObjects).ArrayMax = 4;
  return this;
}

