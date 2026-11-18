// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// FUpdateActiveTilesWorkingMem @ 146dd7ea0

FUpdateActiveTilesWorkingMem * __thiscall
ARecastNavMesh::FUpdateActiveTilesWorkingMem::FUpdateActiveTilesWorkingMem
          (FUpdateActiveTilesWorkingMem *this)

{
  *(undefined8 *)&(this->OldActiveSet).Elements = 0;
  *(undefined8 *)&(this->OldActiveSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OldActiveSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OldActiveSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OldActiveSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OldActiveSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->OldActiveSet).Elements.field_0x30 = 0xffffffff;
  (this->OldActiveSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OldActiveSet).HashSize = 0;
  *(undefined8 *)&this->TilesInMinDistanceMap = 0;
  *(undefined8 *)&(this->TilesInMinDistanceMap).field_0x8 = 0;
  *(undefined8 *)&(this->TilesInMinDistanceMap).field_0x20 = 0;
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x28 = 0;
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x34 = 0;
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TilesInMinDistanceMap).field_0x40 = 0;
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x48 = 0;
  *(undefined8 *)&(this->TilesInMaxDistance).Elements = 0;
  *(undefined8 *)&(this->TilesInMaxDistance).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TilesInMaxDistance).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TilesInMaxDistance).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TilesInMaxDistance).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TilesInMaxDistance).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->TilesInMaxDistance).Elements.field_0x30 = 0xffffffff;
  (this->TilesInMaxDistance).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TilesInMaxDistance).HashSize = 0;
  (this->TileToAppend).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileToAppend).ArrayNum = 0;
  (this->TileToAppend).ArrayMax = 0;
  return this;
}

// ~FUpdateActiveTilesWorkingMem @ 146dd9f50

void __thiscall
ARecastNavMesh::FUpdateActiveTilesWorkingMem::~FUpdateActiveTilesWorkingMem
          (FUpdateActiveTilesWorkingMem *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  pFVar1 = (this->TileToAppend).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TilesInMaxDistance).HashSize = 0;
  FVar2 = (this->TilesInMaxDistance).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TilesInMaxDistance).Elements);
  *(undefined4 *)&(this->TilesInMinDistanceMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TilesInMinDistanceMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FNavMeshDirtyTileElement>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TilesInMinDistanceMap);
  (this->OldActiveSet).HashSize = 0;
  FVar2 = (this->OldActiveSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UE::Math::TIntPoint<int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

