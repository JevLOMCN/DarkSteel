// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// operator= @ 143741a50

FChaosVDCollisionQueryParams * __thiscall
FChaosVDCollisionQueryParams::operator=
          (FChaosVDCollisionQueryParams *this,FChaosVDCollisionQueryParams *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  ushort uVar6;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->TraceTag = param_1->TraceTag;
  pTVar1 = &this->IgnoredComponentsIDs;
  pTVar2 = &param_1->IgnoredComponentsIDs;
  this->OwnerTag = param_1->OwnerTag;
  uVar6 = (this->bTraceComplex ^ param_1->bTraceComplex) & 1 ^ *(ushort *)&this->field_0x20;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 2 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 4 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 8 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 0x10 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 0x20 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 0x40 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  uVar6 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 0x80 ^ uVar6;
  *(ushort *)&this->field_0x20 = uVar6;
  *(ushort *)&this->field_0x20 = (uVar6 ^ *(ushort *)&param_1->field_0x20) & 0x100 ^ uVar6;
  this->IgnoreMask = param_1->IgnoreMask;
  if (pTVar1 != pTVar2) {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IgnoredComponentsIDs).ArrayNum = (param_1->IgnoredComponentsIDs).ArrayNum;
    (this->IgnoredComponentsIDs).ArrayMax = (param_1->IgnoredComponentsIDs).ArrayMax;
    (param_1->IgnoredComponentsIDs).ArrayNum = 0;
    (param_1->IgnoredComponentsIDs).ArrayMax = 0;
  }
  pTVar1 = &param_1->IgnoredActorsIDs;
  pTVar2 = &this->IgnoredActorsIDs;
  if (pTVar2 != pTVar1) {
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IgnoredActorsIDs).ArrayNum = (param_1->IgnoredActorsIDs).ArrayNum;
    (this->IgnoredActorsIDs).ArrayMax = (param_1->IgnoredActorsIDs).ArrayMax;
    (param_1->IgnoredActorsIDs).ArrayNum = 0;
    (param_1->IgnoredActorsIDs).ArrayMax = 0;
  }
  pTVar3 = &param_1->IgnoredActorsNames;
  pTVar4 = &this->IgnoredActorsNames;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IgnoredActorsNames).ArrayNum = (param_1->IgnoredActorsNames).ArrayNum;
    (this->IgnoredActorsNames).ArrayMax = (param_1->IgnoredActorsNames).ArrayMax;
    (param_1->IgnoredActorsNames).ArrayNum = 0;
    (param_1->IgnoredActorsNames).ArrayMax = 0;
  }
  pTVar3 = &param_1->IgnoredComponentsNames;
  pTVar4 = &this->IgnoredComponentsNames;
  if (pTVar4 != pTVar3) {
    pFVar5 = (pTVar4->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->IgnoredComponentsNames).ArrayNum = (param_1->IgnoredComponentsNames).ArrayNum;
    (this->IgnoredComponentsNames).ArrayMax = (param_1->IgnoredComponentsNames).ArrayMax;
    (param_1->IgnoredComponentsNames).ArrayNum = 0;
    (param_1->IgnoredComponentsNames).ArrayMax = 0;
  }
  return this;
}

