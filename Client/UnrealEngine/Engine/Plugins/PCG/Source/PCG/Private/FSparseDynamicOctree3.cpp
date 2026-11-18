// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// operator= @ 149892fa0

FSparseDynamicOctree3 * __thiscall
UE::Geometry::FSparseDynamicOctree3::operator=
          (FSparseDynamicOctree3 *this,FSparseDynamicOctree3 *param_1)

{
  FRefCountVector *this_00;
  FRefCountVector *this_01;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Geometry::TDynamicVector<unsigned_short,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this_02;
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this_03;
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<UE::Geometry::TDynamicVector<unsigned_int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  TDynamicVector<unsigned_int,512> *this_04;
  TDynamicVector<unsigned_int,512> *this_05;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  TArray<UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar7;
  TArray<UE::Geometry::TDynamicVector<unsigned_int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar8;
  
  this_00 = &param_1->CellRefCounts;
  this->RootDimension = param_1->RootDimension;
  this_01 = &this->CellRefCounts;
  this->MaxExpandFactor = param_1->MaxExpandFactor;
  this->MaxTreeDepth = param_1->MaxTreeDepth;
  if (this_01 != this_00) {
    TDynamicVector<unsigned_short,512>::Empty(&this_01->RefCounts,0);
    pTVar1 = &(param_1->CellRefCounts).RefCounts.Blocks;
    pTVar2 = &(this->CellRefCounts).RefCounts.Blocks;
    (this_01->RefCounts).CurBlock = (this_00->RefCounts).CurBlock;
    (this->CellRefCounts).RefCounts.CurBlockUsed = (param_1->CellRefCounts).RefCounts.CurBlockUsed;
    if (pTVar2 != pTVar1) {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CellRefCounts).RefCounts.Blocks.ArrayNum =
           (param_1->CellRefCounts).RefCounts.Blocks.ArrayNum;
      (this->CellRefCounts).RefCounts.Blocks.ArrayMax =
           (param_1->CellRefCounts).RefCounts.Blocks.ArrayMax;
      (param_1->CellRefCounts).RefCounts.Blocks.ArrayNum = 0;
      (param_1->CellRefCounts).RefCounts.Blocks.ArrayMax = 0;
    }
    (this_00->RefCounts).CurBlock = 0;
    (this_00->RefCounts).CurBlockUsed = 0;
    TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&this_00->RefCounts);
  }
  TDynamicVector<int,512>::operator=
            (&(this->CellRefCounts).FreeIndices,&(param_1->CellRefCounts).FreeIndices);
  (this->CellRefCounts).UsedCount = (param_1->CellRefCounts).UsedCount;
  this_02 = &this->Cells;
  (param_1->CellRefCounts).UsedCount = 0;
  this_03 = &param_1->Cells;
  if (this_02 != this_03) {
    TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Empty(this_02,0);
    pTVar3 = &(param_1->Cells).Blocks;
    this_02->CurBlock = this_03->CurBlock;
    (this->Cells).CurBlockUsed = (param_1->Cells).CurBlockUsed;
    pTVar7 = &(this->Cells).Blocks;
    if (pTVar7 != pTVar3) {
      pFVar5 = (pTVar7->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar7->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Cells).Blocks.ArrayNum = (param_1->Cells).Blocks.ArrayNum;
      (this->Cells).Blocks.ArrayMax = (param_1->Cells).Blocks.ArrayMax;
      (param_1->Cells).Blocks.ArrayNum = 0;
      (param_1->Cells).Blocks.ArrayMax = 0;
    }
    this_03->CurBlock = 0;
    this_03->CurBlockUsed = 0;
    TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock(this_03);
  }
  TDynamicVector<int,512>::operator=
            (&(this->CellObjectLists).ListHeads,&(param_1->CellObjectLists).ListHeads);
  TDynamicVector<int,512>::operator=
            (&(this->CellObjectLists).ListBlocks,&(param_1->CellObjectLists).ListBlocks);
  TDynamicVector<int,512>::operator=
            (&(this->CellObjectLists).FreeBlocks,&(param_1->CellObjectLists).FreeBlocks);
  (this->CellObjectLists).AllocatedCount = (param_1->CellObjectLists).AllocatedCount;
  TDynamicVector<int,512>::operator=
            (&(this->CellObjectLists).LinkedListElements,
             &(param_1->CellObjectLists).LinkedListElements);
  (this->CellObjectLists).FreeHeadIndex = (param_1->CellObjectLists).FreeHeadIndex;
  if (&this->SpillObjectSet != &param_1->SpillObjectSet) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (&this->SpillObjectSet,&param_1->SpillObjectSet);
  }
  this_04 = &param_1->ObjectIDToCellMap;
  this_05 = &this->ObjectIDToCellMap;
  if (this_05 != this_04) {
    TDynamicVector<unsigned_int,512>::Empty(this_05,0);
    pTVar4 = &(param_1->ObjectIDToCellMap).Blocks;
    this_05->CurBlock = this_04->CurBlock;
    (this->ObjectIDToCellMap).CurBlockUsed = (param_1->ObjectIDToCellMap).CurBlockUsed;
    pTVar8 = &(this->ObjectIDToCellMap).Blocks;
    if (pTVar8 != pTVar4) {
      pFVar5 = (pTVar8->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar8->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ObjectIDToCellMap).Blocks.ArrayNum = (param_1->ObjectIDToCellMap).Blocks.ArrayNum;
      (this->ObjectIDToCellMap).Blocks.ArrayMax = (param_1->ObjectIDToCellMap).Blocks.ArrayMax;
      (param_1->ObjectIDToCellMap).Blocks.ArrayNum = 0;
      (param_1->ObjectIDToCellMap).Blocks.ArrayMax = 0;
    }
    this_04->CurBlock = 0;
    this_04->CurBlockUsed = 0;
    TDynamicVector<unsigned_int,512>::AddAllocatedBlock(this_04);
  }
  if (&this->ValidObjectIDs != &param_1->ValidObjectIDs) {
    if ((param_1->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(&this->ValidObjectIDs,&param_1->ValidObjectIDs,0x10);
    }
    FVar6 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData =
         (param_1->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
    (param_1->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (this->ValidObjectIDs).BitArray.NumBits = (param_1->ValidObjectIDs).BitArray.NumBits;
    (this->ValidObjectIDs).BitArray.MaxBits = (param_1->ValidObjectIDs).BitArray.MaxBits;
    (param_1->ValidObjectIDs).BitArray.NumBits = 0;
    (param_1->ValidObjectIDs).BitArray.MaxBits = 0;
  }
  (this->ValidObjectIDs).MaxIndex = (param_1->ValidObjectIDs).MaxIndex;
  TSparseGrid3<unsigned_int>::operator=(&this->RootCells,&param_1->RootCells);
  return this;
}

