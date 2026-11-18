// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Reset @ 1461cd740

void __thiscall UE::MovieScene::FTaskPrerequisiteCache::Reset(FTaskPrerequisiteCache *this)

{
  FScriptContainerElement *pFVar1;
  TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>
  *pTVar2;
  FTaskPrerequisiteCache local_28;
  
  if (this != &local_28) {
    DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
              ((FEntry *)(this->SystemWidePrerequisites).Entries.AllocatorInstance.Data,
               (this->SystemWidePrerequisites).Entries.ArrayNum);
    pFVar1 = (this->SystemWidePrerequisites).Entries.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->SystemWidePrerequisites).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SystemWidePrerequisites).Entries.ArrayNum = 0;
    (this->SystemWidePrerequisites).Entries.ArrayMax = 0;
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)0x0,0);
  pTVar2 = &this->ForcedSystemWidePrerequisites;
  if (pTVar2 != &local_28.ForcedSystemWidePrerequisites) {
    DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
              ((FEntry *)(pTVar2->Entries).AllocatorInstance.Data,
               (this->ForcedSystemWidePrerequisites).Entries.ArrayNum);
    pFVar1 = (pTVar2->Entries).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ForcedSystemWidePrerequisites).Entries.ArrayNum = 0;
    (this->ForcedSystemWidePrerequisites).Entries.ArrayMax = 0;
  }
  DestructItems<UE::MovieScene::TDynamicSparseBitSet<unsigned_int,UE::MovieScene::TDynamicSparseBitSetBucketStorage<unsigned_short,0>_>::FEntry,int>
            ((FEntry *)0x0,0);
  return;
}

