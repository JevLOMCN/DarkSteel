// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FSyncTimeSlicedData @ 146e36bb0

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

FSyncTimeSlicedData * __thiscall
FRecastNavMeshGenerator::FSyncTimeSlicedData::FSyncTimeSlicedData(FSyncTimeSlicedData *this)

{
  (this->UpdatedTilesCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdatedTilesCache).ArrayNum = 0;
  (this->UpdatedTilesCache).ArrayMax = 0;
  (this->ResultTileRefsCached).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ResultTileRefsCached).ArrayNum = 0;
  (this->ResultTileRefsCached).ArrayMax = 0;
  *(undefined8 *)&this->OldLayerTileIdMapCached = 0;
  *(undefined8 *)&(this->OldLayerTileIdMapCached).field_0x8 = 0;
  *(undefined8 *)&(this->OldLayerTileIdMapCached).field_0x20 = 0;
  this->CurrentTileRegenDuration = 0.0;
  this->TileRegenStartFrame = 0;
  this->TileRegenEndFrame = 0;
  this->bTimeSliceRegenActive = false;
  this->bNextTimeSliceRegenActive = false;
  this->ProcessTileTasksSyncState = Init;
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x28 = 0;
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x2c = 0x80;
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x34 = 0;
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OldLayerTileIdMapCached).field_0x40 = 0;
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x48 = 0;
  this->AddGeneratedTilesState = Init;
  this->AddGenTilesLayerIndex = 0;
  (this->TileGeneratorSync).Object = (FRecastTileGenerator *)0x0;
  (this->TileGeneratorSync).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->TimeSliceManager = (FNavRegenTimeSliceManager *)0x0;
  return this;
}

// ~FSyncTimeSlicedData @ 146e37a40

/* WARNING: Enum "ERasterizeGeomTimeSlicedState": Some values do not have unique names */
/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
FRecastNavMeshGenerator::FSyncTimeSlicedData::~FSyncTimeSlicedData(FSyncTimeSlicedData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TileGeneratorSync).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->OldLayerTileIdMapCached).field_0x48 = 0;
  pvVar1 = *(void **)&(this->OldLayerTileIdMapCached).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OldLayerTileIdMapCached);
  pFVar2 = (this->ResultTileRefsCached).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UpdatedTilesCache).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

