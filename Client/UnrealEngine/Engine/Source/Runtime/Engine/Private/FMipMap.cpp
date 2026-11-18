// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 148715290

FMipMap * __thiscall UE::SVT::FTextureData::FMipMap::operator=(FMipMap *this,FMipMap *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    pFVar3 = (this->PageTable).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->PageTable).AllocatorInstance.Data = (param_1->PageTable).AllocatorInstance.Data;
    (param_1->PageTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->PageTable).ArrayNum = (param_1->PageTable).ArrayNum;
    (this->PageTable).ArrayMax = (param_1->PageTable).ArrayMax;
    (param_1->PageTable).ArrayNum = 0;
    (param_1->PageTable).ArrayMax = 0;
  }
  pTVar1 = &param_1->PhysicalTileDataA;
  pTVar2 = &this->PhysicalTileDataA;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PhysicalTileDataA).ArrayNum = (param_1->PhysicalTileDataA).ArrayNum;
    (this->PhysicalTileDataA).ArrayMax = (param_1->PhysicalTileDataA).ArrayMax;
    (param_1->PhysicalTileDataA).ArrayNum = 0;
    (param_1->PhysicalTileDataA).ArrayMax = 0;
  }
  pTVar1 = &param_1->PhysicalTileDataB;
  pTVar2 = &this->PhysicalTileDataB;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PhysicalTileDataB).ArrayNum = (param_1->PhysicalTileDataB).ArrayNum;
    (this->PhysicalTileDataB).ArrayMax = (param_1->PhysicalTileDataB).ArrayMax;
    (param_1->PhysicalTileDataB).ArrayNum = 0;
    (param_1->PhysicalTileDataB).ArrayMax = 0;
  }
  this->NumPhysicalTiles = param_1->NumPhysicalTiles;
  return this;
}

