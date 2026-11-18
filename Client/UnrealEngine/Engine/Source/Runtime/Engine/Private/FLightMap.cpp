// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FLightMap @ 147ea5030

FLightMap * __thiscall FLightMap::FLightMap(FLightMap *this)

{
  bool bVar1;
  
  this->_padding_ = (longlong)&___7FLightMap__6B_;
  (this->LightGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LightGuids).ArrayNum = 0;
  (this->LightGuids).ArrayMax = 0;
  this->bAllowHighQualityLightMaps = true;
  this->NumRefs = 0;
  bVar1 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)GMaxRHIFeatureLevel);
  this->bAllowHighQualityLightMaps = bVar1;
  return this;
}

// Cleanup @ 147eb3810

void __thiscall FLightMap::Cleanup(FLightMap *this)

{
  uint uVar1;
  FIndexedLockFreeLink *pFVar2;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    pFVar2 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar2 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar1 >> 0xe] + (uVar1 & 0x3fff);
  }
  pFVar2->Payload = (atomic<void_*>)this;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)&PendingCleanupObjectsList,uVar1);
  return;
}

// Serialize @ 147edb880

void __thiscall FLightMap::Serialize(FLightMap *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FGuid,TSizedDefaultAllocator<32>_>(param_1,&this->LightGuids);
  return;
}

