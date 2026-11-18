// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 33

// FSparseDynamicOctree3 @ 143368de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSparseDynamicOctree3 * __thiscall
UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(FSparseDynamicOctree3 *this)

{
  TDynamicVector<int,512> *pTVar1;
  TArray<UE::Geometry::TDynamicVector<unsigned_int,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FDynamicFlagArray *this_00;
  uint *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  FSparseDynamicOctree3 *pFVar12;
  undefined8 *puVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  longlong lVar16;
  void *local_48;
  void *local_40 [5];
  
  this->MaxTreeDepth = 10;
  (this->CellRefCounts).RefCounts.CurBlock = 0;
  (this->CellRefCounts).RefCounts.CurBlockUsed = 0;
  this->RootDimension = 1000.0;
  (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MaxExpandFactor = 0.25;
  (this->CellRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->CellRefCounts).RefCounts.Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->CellRefCounts).RefCounts);
  pTVar1 = &(this->CellRefCounts).FreeIndices;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->CellRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->CellRefCounts).UsedCount = 0;
  (this->Cells).CurBlock = 0;
  (this->Cells).CurBlockUsed = 0;
  (this->Cells).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cells).Blocks.ArrayNum = 0;
  (this->Cells).Blocks.ArrayMax = 0;
  pvVar11 = ::operator_new(0x6800);
  local_48 = (void *)0x0;
  if (pvVar11 != (void *)0x0) {
    lVar16 = 0x200;
    puVar13 = (undefined8 *)((longlong)pvVar11 + 8);
    do {
      *(undefined4 *)(puVar13 + -1) = 0xffffffff;
      *(undefined1 *)((longlong)puVar13 + -4) = 0;
      *puVar13 = 0;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(undefined8 *)((longlong)puVar13 + 0x14) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar13 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar13 + 0x24) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
      puVar13 = (undefined8 *)((longlong)puVar13 + 0x34);
      lVar16 = lVar16 + -1;
      local_48 = pvVar11;
    } while (lVar16 != 0);
  }
  pFVar4 = (this->Cells).Blocks.AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)(this->Cells).Blocks.ArrayMax * 8))
     && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSparseDynamicOctree3 *)(*pcVar5)();
    return pFVar12;
  }
  iVar9 = (this->Cells).Blocks.ArrayNum;
  if (iVar9 == (this->Cells).Blocks.ArrayMax) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Cells).Blocks.AllocatorInstance,&(this->Cells).Blocks.ArrayMax)
    ;
  }
  (this->Cells).Blocks.ArrayNum = iVar9 + 1;
  *(void **)((this->Cells).Blocks.AllocatorInstance.Data + (longlong)iVar9 * 8) = local_48;
  (this->CellObjectLists).ListHeads.CurBlock = 0;
  (this->CellObjectLists).ListHeads.CurBlockUsed = 0;
  (this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellObjectLists).ListHeads.Blocks.ArrayNum = 0;
  (this->CellObjectLists).ListHeads.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&(this->CellObjectLists).ListHeads);
  pTVar1 = &(this->CellObjectLists).ListBlocks;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellObjectLists).ListBlocks.Blocks.ArrayNum = 0;
  (this->CellObjectLists).ListBlocks.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar1 = &(this->CellObjectLists).FreeBlocks;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->CellObjectLists).FreeBlocks.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellObjectLists).FreeBlocks.Blocks.ArrayNum = 0;
  (this->CellObjectLists).FreeBlocks.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  pTVar1 = &(this->CellObjectLists).LinkedListElements;
  (this->CellObjectLists).AllocatedCount = 0;
  pTVar1->CurBlock = 0;
  pTVar1->CurBlockUsed = 0;
  (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CellObjectLists).LinkedListElements.Blocks.ArrayNum = 0;
  (this->CellObjectLists).LinkedListElements.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(pTVar1);
  (this->CellObjectLists).FreeHeadIndex = -1;
  pTVar2 = &(this->ObjectIDToCellMap).Blocks;
  *(undefined8 *)&(this->SpillObjectSet).Elements = 0;
  *(undefined8 *)&(this->SpillObjectSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SpillObjectSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SpillObjectSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SpillObjectSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SpillObjectSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SpillObjectSet).Elements.field_0x34 = 0;
  (this->SpillObjectSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SpillObjectSet).HashSize = 0;
  (this->ObjectIDToCellMap).CurBlock = 0;
  (this->ObjectIDToCellMap).CurBlockUsed = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ObjectIDToCellMap).Blocks.ArrayNum = 0;
  (this->ObjectIDToCellMap).Blocks.ArrayMax = 0;
  local_40[0] = ::operator_new(0x800);
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_40) &&
      ((FScriptContainerElement *)local_40 <
       pFVar4 + (longlong)(this->ObjectIDToCellMap).Blocks.ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar12 = (FSparseDynamicOctree3 *)(*pcVar5)();
    return pFVar12;
  }
  iVar9 = (this->ObjectIDToCellMap).Blocks.ArrayNum;
  if (iVar9 == (this->ObjectIDToCellMap).Blocks.ArrayMax) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,&(this->ObjectIDToCellMap).Blocks.ArrayMax);
  }
  (this->ObjectIDToCellMap).Blocks.ArrayNum = iVar9 + 1;
  this_00 = &this->ValidObjectIDs;
  *(void **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_40[0];
  (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  *(undefined8 *)&(this->ValidObjectIDs).BitArray.MaxBits = 0x80;
  (this->ValidObjectIDs).BitArray.NumBits = 0xfff;
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
  ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,0x80,4);
  (this->ValidObjectIDs).BitArray.MaxBits = 0x1000;
  FVar14 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<unsigned_int>)0x0) {
    FVar14 = (ForElementType<unsigned_int>)this_00;
  }
  memset((void *)FVar14,0,0x200);
  iVar9 = (this->ValidObjectIDs).BitArray.NumBits;
  uVar15 = iVar9 >> 0x1f & 0x1f;
  uVar10 = iVar9 + uVar15;
  iVar9 = (uVar10 & 0x1f) - uVar15;
  if (iVar9 != 0) {
    FVar14 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<unsigned_int>)0x0) {
      FVar14 = (ForElementType<unsigned_int>)this_00;
    }
    puVar3 = (uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4);
    *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
  }
  uVar7 = _UNK_150a9e658;
  uVar6 = ___xmm_800000017fffffff7fffffff7fffffff;
  (this->ValidObjectIDs).MaxIndex = (this->ValidObjectIDs).BitArray.NumBits;
  *(undefined8 *)&(this->RootCells).Elements = 0;
  *(undefined8 *)&(this->RootCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RootCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RootCells).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RootCells).Elements.field_0x34 = 0;
  *(undefined8 *)&(this->RootCells).Elements.field_0x40 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x48 = 0;
  *(undefined8 *)&(this->RootCells).Bounds.Min.field0_0x0 = uVar6;
  *(undefined8 *)((longlong)&(this->RootCells).Bounds.Min.field0_0x0 + 8) = uVar7;
  *(undefined8 *)((longlong)&(this->RootCells).Bounds.Max.field0_0x0 + 4) = 0x8000000180000001;
  return this;
}

// ~FSparseDynamicOctree3 @ 1435692f0

void __thiscall
UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(FSparseDynamicOctree3 *this)

{
  void *pvVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<FSetElementId> FVar3;
  FScriptContainerElement *pFVar4;
  
  TSparseGrid3<unsigned_int>::FreeAll(&this->RootCells);
  *(undefined4 *)&(this->RootCells).Elements.field_0x48 = 0;
  pvVar1 = *(void **)&(this->RootCells).Elements.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootCells);
  FVar2 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>(&this->ObjectIDToCellMap);
  (this->SpillObjectSet).HashSize = 0;
  FVar3 = (this->SpillObjectSet).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SpillObjectSet).Elements);
  FSmallListSet::~FSmallListSet(&this->CellObjectLists);
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::
  ~TDynamicVector<UE::Geometry::FSparseOctreeCell,512>(&this->Cells);
  TDynamicVector<int,512>::Empty(&(this->CellRefCounts).FreeIndices,0);
  pFVar4 = (this->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->CellRefCounts).RefCounts,0);
  pFVar4 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 1435e9330

void __thiscall
`UE::Geometry::FSparseDynamicOctree3::ParallelCollectObjectsInOverlappingCells'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  undefined4 local_48 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_40;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> local_30;
  
  lVar3 = *(longlong *)this;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar3 + 0x108)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_30._0_8_ = **(undefined8 **)((longlong)this + 0x10);
  lVar12 = *(longlong *)(lVar3 + 0x100);
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    lVar12 = lVar3;
  }
  local_30._8_8_ = (*(undefined8 **)((longlong)this + 0x10))[1];
  UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery
            (*(FSparseDynamicOctree3 **)((longlong)this + 8),
             *(FSparseOctreeCell **)(lVar12 + (longlong)param_1 * 8),&local_30,&local_40);
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
  iVar6 = local_40.ArrayNum;
  uVar9 = (ulonglong)local_40.ArrayNum;
  pFVar2 = local_40.AllocatorInstance.Data + uVar9 * 4;
  FVar10.Data = local_40.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar10.Data == pFVar2) break;
    local_48[0] = *(undefined4 *)FVar10.Data;
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x20);
    if ((pFVar4->Data <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar8 + 1;
    FVar10.Data = FVar10.Data + 4;
    *(undefined4 *)(pFVar4->Data + (longlong)iVar8 * 4) = local_48[0];
    uVar9 = local_40._8_8_ & 0xffffffff;
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x18));
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1435e95f0

void __thiscall
`UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> local_28;
  TFunctionRef<bool___cdecl(int)> local_18;
  
  if (**(int **)this == -1) {
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar4 = 0;
    if (param_1 < *(int *)(lVar1 + 0x108)) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_28._0_8_ = **(undefined8 **)((longlong)this + 0x28);
    lVar6 = *(longlong *)(lVar1 + 0x100);
    if (*(longlong *)(lVar1 + 0x100) == 0) {
      lVar6 = lVar1;
    }
    local_28._8_8_ = (*(undefined8 **)((longlong)this + 0x28))[1];
    local_18._0_8_ = **(undefined8 **)((longlong)this + 0x20);
    local_18._8_8_ = (*(undefined8 **)((longlong)this + 0x20))[1];
    iVar5 = UE::Geometry::FSparseDynamicOctree3::BranchCustomOverlapAnyQuery
                      (*(FSparseDynamicOctree3 **)((longlong)this + 0x10),
                       *(FSparseOctreeCell **)(lVar6 + (longlong)param_1 * 8),
                       *(TAxisAlignedBox3<double> **)((longlong)this + 0x18),&local_18,&local_28);
    if (iVar5 != -1) {
      LOCK();
      **(int **)this = iVar5;
      UNLOCK();
    }
  }
  return;
}

// operator() @ 1435ebfc0

void __thiscall
`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_3>::operator()
          (void *this,uint *param_1)

{
  double *pdVar1;
  longlong lVar2;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  pdVar1 = *(double **)((longlong)this + 0x10);
  lVar9 = (ulonglong)(*param_1 & 0x1ff) * 0x34;
  lVar2 = *(longlong *)((longlong)pdVar1[0xb] + (ulonglong)(*param_1 >> 9) * 8);
  local_28 = *pdVar1 / (double)(ulonglong)(1L << (*(byte *)(lVar2 + 4 + lVar9) & 0x1f));
  dVar10 = (double)*(int *)(lVar2 + 8 + lVar9) * local_28;
  dVar11 = (double)*(int *)(lVar2 + 0xc + lVar9) * local_28;
  dVar13 = local_28 * pdVar1[1];
  dVar12 = (double)*(int *)(lVar2 + 0x10 + lVar9) * local_28;
  local_50 = dVar10 - dVar13;
  local_48 = dVar11 - dVar13;
  local_40 = dVar12 - dVar13;
  local_38 = dVar10 + dVar13 + local_28;
  local_30 = dVar11 + dVar13 + local_28;
  local_28 = dVar12 + dVar13 + local_28;
  cVar5 = (*(code *)**(undefined8 **)((longlong)this + 8))
                    ((*(undefined8 **)((longlong)this + 8))[1],&local_50);
  if (cVar5 != '\0') {
    FVar3 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)this;
    local_58 = (ulonglong)(*param_1 & 0x1ff) * 0x34 +
               *(longlong *)
                (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x58) +
                (ulonglong)(*param_1 >> 9) * 8);
    FVar8 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)((longlong)FVar3 + 0x100);
    if (*(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)((longlong)FVar3 + 0x100) ==
        (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar8 = FVar3;
    }
    if ((((ulonglong)FVar8 <= &local_58) &&
        (&local_58 < (longlong *)((longlong)FVar8 + (longlong)*(int *)((longlong)FVar3 + 0x10c) * 8)
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)((longlong)FVar3 + 0x108);
    if (iVar7 == *(int *)((longlong)FVar3 + 0x10c)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                        (0x808,(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)FVar3,
                         (int *)((longlong)FVar3 + 0x10c));
    }
    *(int *)((longlong)FVar3 + 0x108) = iVar7 + 1;
    FVar8 = *(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)((longlong)FVar3 + 0x100);
    if (*(ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)((longlong)FVar3 + 0x100) ==
        (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar8 = FVar3;
    }
    *(longlong *)((longlong)FVar8 + (longlong)iVar7 * 8) = local_58;
  }
  return;
}

// BranchCustomOverlapAnyQuery @ 1435f1b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::FSparseDynamicOctree3::BranchCustomOverlapAnyQuery
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *param_1,TAxisAlignedBox3<double> *param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *param_4)

{
  void *_Dst;
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar7;
  uint *puVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auStack_288 [32];
  FSparseOctreeCell **local_268;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> local_260;
  longlong local_258;
  longlong local_250;
  undefined8 local_248;
  int local_238 [2];
  undefined1 local_230 [8];
  FSparseOctreeCell *local_228;
  TFunctionRef<bool___cdecl(int)> *local_220;
  int *local_218;
  code *local_210;
  TFunctionRef<bool___cdecl(int)> **local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> local_198;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_288;
  local_8c = 0x20;
  local_198.SecondaryData = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0;
  local_90 = 0;
  iVar6 = 0;
  local_230 = (undefined1  [8])param_1;
  if ((&local_198 <= (ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)local_230) &&
     (local_230 < &local_198.SecondaryData)) {
    local_248 = 8;
    local_260 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
    local_250 = 0;
    local_258 = 0x20;
    local_268 = (FSparseOctreeCell **)local_230;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
    iVar6 = local_90;
    if (local_90 == local_8c) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                        (0x808,&local_198,&local_8c);
    }
  }
  local_90 = iVar6 + 1;
  FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
  if (local_198.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FVar7 = local_198.SecondaryData;
  }
  *(undefined1 (*) [8])((longlong)FVar7 + (longlong)iVar6 * 8) = local_230;
  while( true ) {
    if (local_90 < 1) {
      if (local_198.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        FMemory::Free((void *)local_198.SecondaryData);
      }
      return -1;
    }
    iVar6 = local_90 + -1;
    FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
    if (local_198.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar7 = local_198.SecondaryData;
    }
    piVar2 = *(int **)((longlong)FVar7 + (longlong)iVar6 * 8);
    FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
    if (local_198.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar7 = local_198.SecondaryData;
    }
    _Dst = (void *)((longlong)FVar7 + (longlong)iVar6 * 8);
    iVar6 = (local_90 - iVar6) + -1;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
    }
    local_218 = local_238;
    local_238[0] = -1;
    local_90 = local_90 + -1;
    local_208 = &local_220;
    local_210 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::BranchCustomOverlapAnyQuery'::__l4::<lambda_1>,bool,int>
                ::Call;
    local_220 = param_3;
    bVar4 = FSmallListSet::EnumerateEarlyOut
                      (&this->CellObjectLists,*piVar2,(TFunctionRef<bool___cdecl(int)> *)&local_210)
    ;
    iVar6 = local_238[0];
    if (!bVar4) break;
    puVar8 = (uint *)(piVar2 + 5);
    lVar9 = 8;
    do {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        local_228 = (FSparseOctreeCell *)
                    (*(longlong *)
                      ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 0x34);
        local_1b8 = (param_2->Min).field0_0x0._s_0.Z;
        dStack_1b0 = (param_2->Max).field0_0x0._s_0.X;
        local_1c8 = (param_2->Min).field0_0x0._s_0.X;
        dStack_1c0 = (param_2->Min).field0_0x0._s_0.Y;
        local_1a8 = (param_2->Max).field0_0x0._s_0.Y;
        dStack_1a0 = (param_2->Max).field0_0x0._s_0.Z;
        local_1d8 = this->RootDimension / (double)(ulonglong)(1L << (local_228->Level & 0x1f));
        dVar10 = local_1d8 * this->MaxExpandFactor;
        local_200 = (double)(local_228->Index).field0_0x0._s_0.X * local_1d8 - dVar10;
        local_1f8 = (double)(local_228->Index).field0_0x0._s_0.Y * local_1d8 - dVar10;
        local_1f0 = (double)(local_228->Index).field0_0x0._s_0.Z * local_1d8 - dVar10;
        local_1d8 = dVar10 + dVar10 + local_1d8;
        local_1e8 = local_1d8 + local_200;
        local_1e0 = local_1d8 + local_1f8;
        local_1d8 = local_1d8 + local_1f0;
        if ((((local_200 < dStack_1b0) && (local_1c8 < local_1e8)) && (local_1f8 < local_1a8)) &&
           (((dStack_1c0 < local_1e0 && (local_1f0 < dStack_1a0)) &&
            ((local_1b8 < local_1d8 &&
             (cVar5 = (**(code **)param_4)(*(undefined8 *)&param_4->field_0x8,&local_200),
             cVar5 != '\0')))))) {
          FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
          if (local_198.SecondaryData !=
              (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar7 = local_198.SecondaryData;
          }
          if ((ulonglong)FVar7 <= &local_228) {
            FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
            if (local_198.SecondaryData !=
                (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar7 = local_198.SecondaryData;
            }
            if (&local_228 < (FSparseOctreeCell **)((longlong)FVar7 + (longlong)local_8c * 8)) {
              local_250 = (longlong)local_90;
              local_248 = 8;
              local_268 = &local_228;
              local_260 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
              if (local_198.SecondaryData !=
                  (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                local_260 = local_198.SecondaryData;
              }
              local_258 = (longlong)local_8c;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                iVar6 = (*pcVar3)();
                return iVar6;
              }
            }
          }
          iVar6 = local_90;
          if (local_90 == local_8c) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                              (0x808,&local_198,&local_8c);
          }
          local_90 = iVar6 + 1;
          FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
          if (local_198.SecondaryData !=
              (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar7 = local_198.SecondaryData;
          }
          *(FSparseOctreeCell **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_228;
        }
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (local_198.SecondaryData == (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    return local_238[0];
  }
  FMemory::Free((void *)local_198.SecondaryData);
  return iVar6;
}

// BranchRangeQuery @ 1435f2050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *param_1,
          TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  void *_Dst;
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar7;
  uint *puVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1f8 [32];
  FSparseOctreeCell **local_1d8;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [8];
  FSparseOctreeCell *local_1a0;
  <lambda_1> local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> local_160;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_160.SecondaryData = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0;
  local_58 = 0;
  local_54 = 0x20;
  iVar6 = 0;
  local_1a8 = (undefined1  [8])param_1;
  if ((&local_160 <= (ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)local_1a8) &&
     (iVar6 = 0, local_1a8 < &local_160.SecondaryData)) {
    local_1b8 = 8;
    local_1d0 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
    local_1c0 = 0;
    local_1c8 = 0x20;
    local_1d8 = (FSparseOctreeCell **)local_1a8;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = local_58;
    if (local_58 == local_54) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                        (0x808,&local_160,&local_54);
    }
  }
  local_58 = iVar6 + 1;
  FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
  if (local_160.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FVar7 = local_160.SecondaryData;
  }
  *(undefined1 (*) [8])((longlong)FVar7 + (longlong)iVar6 * 8) = local_1a8;
  do {
    if (local_58 < 1) {
      if (local_160.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        FMemory::Free((void *)local_160.SecondaryData);
      }
      return;
    }
    iVar6 = local_58 + -1;
    FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
    if (local_160.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar7 = local_160.SecondaryData;
    }
    piVar2 = *(int **)((longlong)FVar7 + (longlong)iVar6 * 8);
    FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
    if (local_160.SecondaryData != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar7 = local_160.SecondaryData;
    }
    _Dst = (void *)((longlong)FVar7 + (longlong)iVar6 * 8);
    iVar6 = (local_58 - iVar6) + -1;
    if (iVar6 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
    }
    local_58 = local_58 + -1;
    local_198.ObjectIDs = param_3;
    FSmallListSet::
    Enumerate<_UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery_::__l4::<lambda_1>_>
              (&this->CellObjectLists,*piVar2,&local_198);
    puVar8 = (uint *)(piVar2 + 5);
    lVar9 = 8;
    do {
      uVar1 = *puVar8;
      if (uVar1 != 0xffffffff) {
        local_1a0 = (FSparseOctreeCell *)
                    (*(longlong *)
                      ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar1 >> 9) * 8) +
                    (ulonglong)(uVar1 & 0x1ff) * 0x34);
        local_168 = this->RootDimension / (double)(ulonglong)(1L << (local_1a0->Level & 0x1f));
        dVar10 = (double)(local_1a0->Index).field0_0x0._s_0.X * local_168;
        dVar13 = local_168 * this->MaxExpandFactor;
        dVar11 = (double)(local_1a0->Index).field0_0x0._s_0.Y * local_168;
        dVar12 = (double)(local_1a0->Index).field0_0x0._s_0.Z * local_168;
        local_190 = dVar10 - dVar13;
        local_188 = dVar11 - dVar13;
        local_180 = dVar12 - dVar13;
        local_178 = dVar10 + dVar13 + local_168;
        local_170 = dVar11 + dVar13 + local_168;
        local_168 = dVar12 + dVar13 + local_168;
        cVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_190);
        if (cVar5 != '\0') {
          FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
          if (local_160.SecondaryData !=
              (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar7 = local_160.SecondaryData;
          }
          if ((ulonglong)FVar7 <= &local_1a0) {
            FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
            if (local_160.SecondaryData !=
                (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar7 = local_160.SecondaryData;
            }
            if (&local_1a0 < (FSparseOctreeCell **)((longlong)FVar7 + (longlong)local_54 * 8)) {
              local_1c0 = (longlong)local_58;
              local_1b8 = 8;
              local_1d8 = &local_1a0;
              local_1d0 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
              if (local_160.SecondaryData !=
                  (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                local_1d0 = local_160.SecondaryData;
              }
              local_1c8 = (longlong)local_54;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
          }
          iVar6 = local_58;
          if (local_58 == local_54) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                              (0x808,&local_160,&local_54);
          }
          local_58 = iVar6 + 1;
          FVar7 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_160;
          if (local_160.SecondaryData !=
              (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar7 = local_160.SecondaryData;
          }
          *(FSparseOctreeCell **)((longlong)FVar7 + (longlong)iVar6 * 8) = local_1a0;
        }
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  } while( true );
}

// BranchRangeQuery @ 1435f24a0

void __thiscall
UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *param_1,TAxisAlignedBox3<double> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  TAxisAlignedBox3<double> *local_res18 [2];
  code *local_18;
  TAxisAlignedBox3<double> **local_10;
  
  local_10 = local_res18;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::BranchRangeQuery'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
             ::Call;
  local_res18[0] = param_2;
  BranchRangeQuery(this,param_1,
                   (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
                   &local_18,param_3);
  return;
}

// CanFit @ 1435f3060

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::CanFit
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *param_1,TAxisAlignedBox3<double> *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  local_20 = this->RootDimension / (double)(ulonglong)(1L << (param_1->Level & 0x1f));
  dVar2 = (double)(param_1->Index).field0_0x0._s_0.X * local_20;
  dVar3 = (double)(param_1->Index).field0_0x0._s_0.Y * local_20;
  dVar5 = local_20 * this->MaxExpandFactor;
  dVar4 = (double)(param_1->Index).field0_0x0._s_0.Z * local_20;
  local_48._s_0.X = dVar2 - dVar5;
  local_48._s_0.Y = dVar3 - dVar5;
  local_48._s_0.Z = dVar4 - dVar5;
  local_30 = dVar2 + dVar5 + local_20;
  local_28 = dVar3 + dVar5 + local_20;
  local_20 = dVar4 + dVar5 + local_20;
  bVar1 = TAxisAlignedBox3<double>::Contains((TAxisAlignedBox3<double> *)&local_48._s_0,param_2);
  return bVar1;
}

// CheckIfObjectNeedsReinsert @ 1435f3190

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::CheckIfObjectNeedsReinsert
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2,uint *param_3)

{
  uint uVar1;
  bool bVar2;
  
  *param_3 = 0xffffffff;
  bVar2 = ContainsObject(this,param_1);
  if (bVar2) {
    if ((param_1 < 0) ||
       ((ulonglong)
        ((this->ObjectIDToCellMap).CurBlock * 0x200 + (this->ObjectIDToCellMap).CurBlockUsed) <=
        (ulonglong)(longlong)param_1)) {
      *param_3 = 0xffffffff;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)
                         ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
      *param_3 = uVar1;
      if ((uVar1 != 0xfffffffe) && (uVar1 != 0xffffffff)) {
        bVar2 = CanFit(this,(FSparseOctreeCell *)
                            ((ulonglong)(uVar1 & 0x1ff) * 0x34 +
                            *(longlong *)
                             ((this->Cells).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar1 >> 9) * 8)),param_2);
        return !bVar2;
      }
    }
  }
  return true;
}

// CheckValidity @ 1435f3250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001435f3405) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::CheckValidity
          (FSparseDynamicOctree3 *this,TFunctionRef<bool___cdecl(int)> *param_1,
          TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *param_2,
          EValidityCheckFailMode param_3,bool param_4,bool param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  undefined8 uVar16;
  int iVar17;
  undefined ***pppuVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<FSetElementId> FVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  double dVar30;
  undefined1 auStackY_268 [32];
  undefined1 local_218 [8];
  undefined1 local_210 [8];
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [8];
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  ForAnyElementType local_1c8;
  int local_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  uint local_1ac;
  TFunctionRef<bool___cdecl(int)> *local_1a8;
  uint local_1a0 [2];
  uint local_198 [2];
  TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *local_190;
  <lambda_4> local_188;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined4 local_148;
  uint uStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  code *local_108 [2];
  undefined **local_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e0;
  code *local_d8;
  undefined **local_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b0;
  code *local_a8;
  undefined **local_98;
  undefined1 *puStack_90;
  undefined8 uStack_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_268;
  uVar22 = 0;
  local_f8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_108[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,void,bool>
                 ::Call;
  local_218[0] = 1;
  pppuStack_e0 = (undefined ***)0x0;
  local_1a8 = param_1;
  local_190 = param_2;
  if (param_3 == Check) {
    local_108[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l5::<lambda_2>,void,bool>
                   ::Call;
    pppuStack_e0 = (undefined ***)0x0;
    local_f8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`5'::<lambda_2>,0,0>
                ::_vftable_;
    puStack_f0 = local_218;
    local_d8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,void,bool>
               ::Call;
    local_c8 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    puStack_c0 = local_218;
    uStack_b0 = 0;
    pppuVar18 = &local_c8;
LAB_1435f33f8:
    pppuStack_e0 = (undefined ***)0x0;
    (*(code *)(*pppuVar18)[2])();
  }
  else {
    puStack_f0 = local_218;
    if (param_3 == Ensure) {
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l9::<lambda_3>,void,bool>
                     ::Call;
      pppuStack_e0 = (undefined ***)0x0;
      local_f8 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`9'::<lambda_3>,0,0>
                  ::_vftable_;
      puStack_f0 = local_218;
      local_a8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::__l2::<lambda_1>,void,bool>
                 ::Call;
      local_98 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Geometry::FSparseDynamicOctree3::CheckValidity'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      puStack_90 = local_218;
      uStack_80 = 0;
      pppuVar18 = &local_98;
      goto LAB_1435f33f8;
    }
  }
  local_1c8.Data = (FScriptContainerElement *)0x0;
  lVar25 = 0x20;
  local_1c0 = 0;
  iStack_1bc = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1cc = 0;
  local_1b8 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x20,&local_1c8,0,&iStack_1bc);
  lVar28 = 0x20;
  do {
    if (((local_1c8.Data <= (FScriptContainerElement *)&local_1b8) &&
        ((FScriptContainerElement *)&local_1b8 < local_1c8.Data + (longlong)iStack_1bc * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_1c0 == iStack_1bc) {
      local_1c0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1c8,&iStack_1bc);
    }
    iVar17 = local_1c0 + 1;
    *(undefined4 *)(local_1c8.Data + (longlong)local_1c0 * 4) = local_1b8;
    lVar28 = lVar28 + -1;
    local_1c0 = iVar17;
  } while (lVar28 != 0);
  local_1b4 = 0;
  local_1d0 = 0;
  if (local_1cc != 0x20) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x20,&local_1d8,0,&local_1cc);
  }
  do {
    if (((local_1d8.Data <= (FScriptContainerElement *)&local_1b4) &&
        ((FScriptContainerElement *)&local_1b4 < local_1d8.Data + (longlong)local_1cc * 4)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_1d0 == local_1cc) {
      local_1d0 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1d8,&local_1cc);
    }
    iVar17 = local_1d0 + 1;
    *(undefined4 *)(local_1d8.Data + (longlong)local_1d0 * 4) = local_1b4;
    lVar25 = lVar25 + -1;
    local_1d0 = iVar17;
  } while (lVar25 != 0);
  local_1ac = 0;
  local_1b0 = 0;
  uVar27 = (this->CellRefCounts).RefCounts.CurBlock * 0x200 +
           (this->CellRefCounts).RefCounts.CurBlockUsed;
  uVar26 = uVar22;
  if ((uVar27 != 0) &&
     (pFVar6 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar26 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar26 = 1;
    uVar23 = 1;
    if ((int)uVar27 < 2) goto LAB_1435f3648;
    do {
      uVar20 = (ulonglong)((uint)uVar26 & 0x1ff);
      lVar25 = *(longlong *)(pFVar6 + (uVar26 >> 9) * 8);
      if ((*(short *)(lVar25 + uVar20 * 2) != 0) && (*(short *)(lVar25 + uVar20 * 2) != -1)) break;
      uVar23 = (uint)uVar26 + 1;
      uVar26 = (ulonglong)uVar23;
    } while ((int)uVar23 < (int)uVar27);
  }
  uVar23 = (uint)uVar26;
LAB_1435f3648:
  if (uVar23 != uVar27) {
    local_188.CheckOrFailF = (TFunction<void___cdecl(bool)> *)local_108;
    local_188.IsValidObjectIDFunc = param_1;
LAB_1435f3660:
    do {
      FSmallListSet::
      Enumerate<_UE::Geometry::FSparseDynamicOctree3::CheckValidity_::__l13::<lambda_4>_>
                (&this->CellObjectLists,(int)uVar26,&local_188);
      uVar23 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar23;
      if ((int)uVar23 < (int)uVar27) {
        do {
          uVar20 = (ulonglong)((uint)uVar26 & 0x1ff);
          lVar25 = *(longlong *)
                    ((this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (uVar26 >> 9) * 8);
          if ((*(short *)(lVar25 + uVar20 * 2) != 0) && (*(short *)(lVar25 + uVar20 * 2) != -1))
          goto LAB_1435f3660;
          uVar23 = (uint)uVar26 + 1;
          uVar26 = (ulonglong)uVar23;
        } while ((int)uVar23 < (int)uVar27);
      }
    } while (uVar23 != uVar27);
  }
  uVar27 = (this->ObjectIDToCellMap).CurBlock * 0x200 + (this->ObjectIDToCellMap).CurBlockUsed;
  uVar26 = uVar22;
  if (uVar27 != 0) {
LAB_1435f36f0:
    uVar23 = (uint)uVar22;
    local_1a0[0] = uVar23;
    cVar14 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_1a0);
    if (cVar14 != '\0') {
      local_198[0] = uVar23;
      (**(code **)local_190)(&local_178,*(undefined8 *)&local_190->field_0x8,local_198);
      local_210[0] = uVar23 < (this->ObjectIDToCellMap).CurBlock * 0x200 +
                              (this->ObjectIDToCellMap).CurBlockUsed;
      Core::Private::Function::CheckCallable(local_108[0]);
      pcVar8 = local_108[0];
      pppuVar18 = &local_f8;
      if (pppuStack_e0 != (undefined ***)0x0) {
        pppuVar18 = pppuStack_e0;
      }
      uVar16 = (*(code *)(*pppuVar18)[1])();
      (*pcVar8)(uVar16,local_210);
      uVar24 = *(uint *)(*(longlong *)
                          ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
                          (uVar22 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
      if (param_5) {
        local_208[0] = uVar24 != 0xffffffff;
        Core::Private::Function::CheckCallable(local_108[0]);
        pcVar8 = local_108[0];
        pppuVar18 = &local_f8;
        if (pppuStack_e0 != (undefined ***)0x0) {
          pppuVar18 = pppuStack_e0;
        }
        uVar16 = (*(code *)(*pppuVar18)[1])();
        (*pcVar8)(uVar16,local_208);
      }
      if (uVar24 == 0xfffffffe) {
        local_1ac = (int)uVar26 + 1;
        uVar26 = (ulonglong)local_1ac;
        if (*(int *)&(this->SpillObjectSet).Elements.field_0x8 !=
            *(int *)&(this->SpillObjectSet).Elements.field_0x34) {
          FVar7 = (this->SpillObjectSet).Hash.SecondaryData;
          FVar21 = (ForElementType<FSetElementId>)&(this->SpillObjectSet).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar21 = FVar7;
          }
          iVar17 = *(int *)((longlong)FVar21 + ((this->SpillObjectSet).HashSize - 1 & uVar22) * 4);
          if (iVar17 != -1) {
            lVar25 = *(longlong *)&(this->SpillObjectSet).Elements;
            do {
              if (*(uint *)(lVar25 + (longlong)iVar17 * 0xc) == uVar23) goto LAB_1435f382c;
              iVar17 = *(int *)(lVar25 + 4 + (longlong)iVar17 * 0xc);
            } while (iVar17 != -1);
          }
        }
        iVar17 = -1;
LAB_1435f382c:
        local_200[0] = iVar17 != -1;
        Core::Private::Function::CheckCallable(local_108[0]);
        pcVar8 = local_108[0];
        pppuVar18 = &local_f8;
        if (pppuStack_e0 != (undefined ***)0x0) {
          pppuVar18 = pppuStack_e0;
        }
        uVar16 = (*(code *)(*pppuVar18)[1])();
        (*pcVar8)(uVar16,local_200);
        param_1 = local_1a8;
        goto LAB_1435f3cba;
      }
      if (uVar24 == 0xffffffff) {
        local_1b0 = local_1b0 + 1;
        if (*(int *)&(this->SpillObjectSet).Elements.field_0x8 !=
            *(int *)&(this->SpillObjectSet).Elements.field_0x34) {
          FVar7 = (this->SpillObjectSet).Hash.SecondaryData;
          FVar21 = (ForElementType<FSetElementId>)&(this->SpillObjectSet).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar21 = FVar7;
          }
          iVar17 = *(int *)((longlong)FVar21 + ((this->SpillObjectSet).HashSize - 1 & uVar22) * 4);
          if (iVar17 != -1) {
            lVar25 = *(longlong *)&(this->SpillObjectSet).Elements;
            do {
              if (*(uint *)(lVar25 + (longlong)iVar17 * 0xc) == uVar23) goto LAB_1435f38cd;
              iVar17 = *(int *)(lVar25 + 4 + (longlong)iVar17 * 0xc);
            } while (iVar17 != -1);
          }
        }
        iVar17 = -1;
LAB_1435f38cd:
        local_1f8[0] = iVar17 == -1;
        Core::Private::Function::CheckCallable(local_108[0]);
        pcVar8 = local_108[0];
        pppuVar18 = &local_f8;
        if (pppuStack_e0 != (undefined ***)0x0) {
          pppuVar18 = pppuStack_e0;
        }
        uVar16 = (*(code *)(*pppuVar18)[1])();
        (*pcVar8)(uVar16,local_1f8);
        param_1 = local_1a8;
        goto LAB_1435f3cba;
      }
      if ((((int)uVar24 < 0) ||
          ((int)((this->CellRefCounts).RefCounts.CurBlock * 0x200 +
                (this->CellRefCounts).RefCounts.CurBlockUsed) <= (int)uVar24)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (ulonglong)(uVar24 >> 9) * 8) +
                                      (ulonglong)(uVar24 & 0x1ff) * 2) - 1U))) {
        local_1f0[0] = 0;
      }
      else {
        local_1f0[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_108[0]);
      pcVar8 = local_108[0];
      pppuVar18 = &local_f8;
      if (pppuStack_e0 != (undefined ***)0x0) {
        pppuVar18 = pppuStack_e0;
      }
      uVar16 = (*(code *)(*pppuVar18)[1])();
      (*pcVar8)(uVar16,local_1f0);
      lVar28 = (ulonglong)(uVar24 & 0x1ff) * 0x34;
      lVar25 = *(longlong *)
                ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar24 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar25 + 0x20 + lVar28);
      local_128 = *puVar2;
      uStack_120 = puVar2[1];
      puVar1 = (undefined4 *)(lVar25 + lVar28);
      local_148 = *puVar1;
      uStack_144 = puVar1[1];
      iStack_140 = puVar1[2];
      iStack_13c = puVar1[3];
      piVar3 = (int *)(lVar25 + 0x10 + lVar28);
      local_138 = *piVar3;
      iStack_134 = piVar3[1];
      iStack_130 = piVar3[2];
      iStack_12c = piVar3[3];
      local_118 = *(undefined4 *)(lVar25 + 0x30 + lVar28);
      bVar15 = (byte)uStack_144;
      uVar29 = uStack_144 & 0xff;
      dVar9 = this->RootDimension / (double)(ulonglong)(1L << (bVar15 & 0x1f));
      dVar10 = dVar9 * this->MaxExpandFactor;
      dVar12 = (double)iStack_140 * dVar9 - dVar10;
      dVar30 = (double)iStack_13c * dVar9 - dVar10;
      dVar11 = (double)local_138 * dVar9 - dVar10;
      dVar9 = dVar10 + dVar10 + dVar9;
      if ((((local_178 < dVar12) || (local_170 < dVar30)) ||
          ((local_168 < dVar11 || ((dVar9 + dVar12 < local_178 || (dVar9 + dVar30 < local_170))))))
         || ((dVar9 + dVar11 < local_168 ||
             (((((local_160 < dVar12 || (local_158 < dVar30)) || (local_150 < dVar11)) ||
               ((dVar9 + dVar12 < local_160 || (dVar9 + dVar30 < local_158)))) ||
              (dVar9 + dVar11 < local_150)))))) {
        local_1e8[0] = 0;
      }
      else {
        local_1e8[0] = 1;
      }
      Core::Private::Function::CheckCallable(local_108[0]);
      pcVar8 = local_108[0];
      pppuVar18 = &local_f8;
      if (pppuStack_e0 != (undefined ***)0x0) {
        pppuVar18 = pppuStack_e0;
      }
      uVar16 = (*(code *)(*pppuVar18)[1])();
      (*pcVar8)(uVar16,local_1e8);
      uVar24 = *(uint *)(*(longlong *)
                          ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar24 >> 9) * 8) + (ulonglong)(uVar24 & 0x1ff) * 4);
      if (uVar24 != 0xffffffff) {
        pFVar6 = (this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data;
        uVar19 = uVar24 + 1;
        uVar22 = (ulonglong)uVar19;
        iVar17 = *(int *)(*(longlong *)(pFVar6 + (ulonglong)(uVar24 >> 9) * 8) +
                         (ulonglong)(uVar24 & 0x1ff) * 4);
        if (iVar17 < 8) {
          while ((int)uVar19 <= (int)(iVar17 + uVar24)) {
            if (*(uint *)(*(longlong *)(pFVar6 + (uVar22 >> 9) * 8) +
                         (ulonglong)((uint)uVar22 & 0x1ff) * 4) == uVar23) goto LAB_1435f3b95;
            uVar19 = (uint)uVar22 + 1;
            uVar22 = (ulonglong)uVar19;
          }
        }
        else {
          while ((int)uVar19 <= (int)(uVar24 + 8)) {
            if (*(uint *)(*(longlong *)(pFVar6 + (uVar22 >> 9) * 8) +
                         (ulonglong)((uint)uVar22 & 0x1ff) * 4) == uVar23) goto LAB_1435f3b95;
            uVar19 = (uint)uVar22 + 1;
            uVar22 = (ulonglong)uVar19;
          }
          uVar24 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar24 + 9 >> 9) * 8) +
                            (ulonglong)(uVar24 + 9 & 0x1ff) * 4);
          if (uVar24 != 0xffffffff) {
            pFVar6 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
            do {
              if (*(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar24 >> 9) * 8) +
                           (ulonglong)(uVar24 & 0x1ff) * 4) == uVar23) goto LAB_1435f3b95;
              uVar24 = *(uint *)(*(longlong *)(pFVar6 + (ulonglong)(uVar24 + 1 >> 9) * 8) +
                                (ulonglong)(uVar24 + 1 & 0x1ff) * 4);
            } while (uVar24 != 0xffffffff);
          }
        }
      }
      local_1e0[0] = 0;
      goto LAB_1435f3c3d;
    }
    goto LAB_1435f3cba;
  }
LAB_1435f3ce1:
  bVar15 = 0;
  uVar23 = (this->CellRefCounts).RefCounts.CurBlockUsed +
           (this->CellRefCounts).RefCounts.CurBlock * 0x200;
  uVar27 = 0;
  if ((uVar23 != 0) &&
     (pFVar6 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar27 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar24 = 1;
    uVar27 = 1;
    if (1 < (int)uVar23) {
      do {
        sVar5 = *(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar24 >> 9) * 8) +
                          (ulonglong)(uVar24 & 0x1ff) * 2);
        if ((sVar5 != 0) && (uVar27 = uVar24, sVar5 != -1)) break;
        uVar24 = uVar24 + 1;
        uVar27 = uVar24;
      } while ((int)uVar24 < (int)uVar23);
    }
  }
joined_r0x0001435f3d49:
  do {
    if (uVar27 == uVar23) {
      if (param_4) {
        if (2 < (byte)LogTemp._0_1_) {
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        uVar27 = 0;
        do {
          if (2 < (byte)LogTemp._0_1_) {
            uVar23 = 0;
            if ((int)uVar27 < local_1d0) {
              uVar23 = ~uVar27 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar23 = 0;
            if ((int)uVar27 < local_1c0) {
              uVar23 = ~uVar27 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 <= bVar15);
      }
      if (local_1d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      if (local_108[0] != (code *)0x0) {
        pppuVar18 = &local_f8;
        if (pppuStack_e0 != (undefined ***)0x0) {
          pppuVar18 = pppuStack_e0;
        }
        (*(code *)(*pppuVar18)[2])();
      }
      return;
    }
    while( true ) {
      lVar28 = (ulonglong)(uVar27 & 0x1ff) * 0x34;
      lVar25 = *(longlong *)
                ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8);
      bVar4 = *(byte *)(lVar25 + 4 + lVar28);
      if ((local_1c0 <= (int)(uint)bVar4) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(int *)(local_1c8.Data + (ulonglong)bVar4 * 4) =
           *(int *)(local_1c8.Data + (ulonglong)bVar4 * 4) + 1;
      bVar4 = *(byte *)(lVar25 + 4 + lVar28);
      if (bVar4 < bVar15) {
        bVar4 = bVar15;
      }
      bVar15 = bVar4;
      uVar27 = uVar27 + 1;
      if ((int)uVar23 <= (int)uVar27) break;
      while( true ) {
        lVar25 = *(longlong *)
                  ((this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar27 >> 9) * 8);
        if ((*(short *)(lVar25 + (ulonglong)(uVar27 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar25 + (ulonglong)(uVar27 & 0x1ff) * 2) != -1)) break;
        uVar27 = uVar27 + 1;
        if ((int)uVar23 <= (int)uVar27) goto joined_r0x0001435f3d49;
      }
    }
  } while( true );
LAB_1435f3b95:
  local_1e0[0] = 1;
LAB_1435f3c3d:
  Core::Private::Function::CheckCallable(local_108[0]);
  pcVar8 = local_108[0];
  pppuVar18 = &local_f8;
  if (pppuStack_e0 != (undefined ***)0x0) {
    pppuVar18 = pppuStack_e0;
  }
  uVar16 = (*(code *)(*pppuVar18)[1])();
  (*pcVar8)(uVar16,local_1e0);
  if ((local_1d0 <= (int)uVar29) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(int *)(local_1d8.Data + (ulonglong)bVar15 * 4) =
       *(int *)(local_1d8.Data + (ulonglong)bVar15 * 4) + 1;
  uVar26 = (ulonglong)local_1ac;
  param_1 = local_1a8;
LAB_1435f3cba:
  uVar22 = (ulonglong)(uVar23 + 1);
  if (uVar27 <= uVar23 + 1) goto LAB_1435f3ce1;
  goto LAB_1435f36f0;
}

// ComputeStatistics @ 1435f6350

void __thiscall
UE::Geometry::FSparseDynamicOctree3::ComputeStatistics
          (FSparseDynamicOctree3 *this,FStatistics *param_1)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined4 local_38;
  undefined4 local_34 [3];
  
  uVar13 = 0;
  param_1->SpillObjCount =
       *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
       *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  param_1->Levels = 0;
  uVar14 = (this->CellRefCounts).RefCounts.CurBlockUsed +
           (this->CellRefCounts).RefCounts.CurBlock * 0x200;
  uVar11 = uVar13;
  if ((uVar14 != 0) &&
     (pFVar4 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar11 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar11 = 1;
    uVar9 = 1;
    if ((int)uVar14 < 2) goto joined_r0x0001435f63f6;
    do {
      lVar15 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      lVar5 = *(longlong *)(pFVar4 + (uVar11 >> 9) * 8);
      if ((*(short *)(lVar15 + lVar5) != 0) && (*(short *)(lVar15 + lVar5) != -1)) break;
      uVar9 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
    } while ((int)uVar9 < (int)uVar14);
  }
  uVar9 = (uint)uVar11;
joined_r0x0001435f63f6:
  if (uVar9 != uVar14) {
    while( true ) {
      bVar2 = *(byte *)(*(longlong *)
                         ((this->Cells).Blocks.AllocatorInstance.Data + (uVar11 >> 9) * 8) + 4 +
                       (ulonglong)((uint)uVar11 & 0x1ff) * 0x34);
      uVar7 = (ulonglong)bVar2;
      if ((uint)bVar2 < (uint)uVar13) {
        uVar7 = uVar13;
      }
      uVar13 = uVar7;
      uVar9 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar9;
      param_1->Levels = (int)uVar13;
      if ((int)uVar14 <= (int)uVar9) break;
      pFVar4 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar5 = (uVar11 >> 9) * 8;
        lVar15 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
        if ((*(short *)(lVar15 + *(longlong *)(pFVar4 + lVar5)) != 0) &&
           (*(short *)(lVar15 + *(longlong *)(pFVar4 + lVar5)) != -1)) break;
        uVar9 = (uint)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
        if ((int)uVar14 <= (int)uVar9) goto joined_r0x0001435f63f6;
      }
    }
    goto joined_r0x0001435f63f6;
  }
  uVar14 = param_1->Levels + 1;
  local_38 = 0;
  param_1->Levels = uVar14;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  piVar1 = &(param_1->LevelObjCounts).ArrayMax;
  (param_1->LevelObjCounts).ArrayNum = 0;
  if (*piVar1 != uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(param_1->LevelObjCounts).AllocatorInstance,0,piVar1);
  }
  iVar16 = 0;
  if (0 < (int)uVar14) {
    do {
      pFVar4 = (param_1->LevelObjCounts).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (param_1->LevelObjCounts).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(param_1->LevelObjCounts).AllocatorInstance,piVar1);
      }
      iVar16 = iVar16 + 1;
      (param_1->LevelObjCounts).ArrayNum = iVar10 + 1;
      *(undefined4 *)((param_1->LevelObjCounts).AllocatorInstance.Data + (longlong)iVar10 * 4) =
           local_38;
    } while (iVar16 < (int)uVar14);
  }
  uVar14 = param_1->Levels;
  uVar11 = (ulonglong)uVar14;
  local_34[0] = 0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar11);
  }
  piVar1 = &(param_1->LevelBoxCounts).ArrayMax;
  (param_1->LevelBoxCounts).ArrayNum = 0;
  if (*piVar1 != uVar14) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14,&(param_1->LevelBoxCounts).AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar14) {
    do {
      pFVar4 = (param_1->LevelBoxCounts).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_34) &&
          ((FScriptContainerElement *)local_34 < pFVar4 + (longlong)*piVar1 * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar16 = (param_1->LevelBoxCounts).ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(param_1->LevelBoxCounts).AllocatorInstance,piVar1);
      }
      (param_1->LevelBoxCounts).ArrayNum = iVar16 + 1;
      *(undefined4 *)((param_1->LevelBoxCounts).AllocatorInstance.Data + (longlong)iVar16 * 4) =
           local_34[0];
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar9 = (this->CellRefCounts).RefCounts.CurBlockUsed +
          (this->CellRefCounts).RefCounts.CurBlock * 0x200;
  uVar14 = 0;
  if ((uVar9 != 0) &&
     (pFVar4 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
    uVar12 = 1;
    uVar14 = 1;
    if (1 < (int)uVar9) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar12 >> 9) * 8) +
                          (ulonglong)(uVar12 & 0x1ff) * 2);
        if ((sVar3 != 0) && (uVar14 = uVar12, sVar3 != -1)) break;
        uVar12 = uVar12 + 1;
        uVar14 = uVar12;
      } while ((int)uVar12 < (int)uVar9);
    }
  }
joined_r0x0001435f66c9:
  do {
    if (uVar14 == uVar9) {
      return;
    }
    while( true ) {
      lVar5 = (ulonglong)(uVar14 >> 9) * 8;
      lVar15 = *(longlong *)((this->Cells).Blocks.AllocatorInstance.Data + lVar5) +
               (ulonglong)(uVar14 & 0x1ff) * 0x34;
      bVar2 = *(byte *)(lVar15 + 4);
      if (((param_1->LevelBoxCounts).ArrayNum <= (int)(uint)bVar2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->LevelBoxCounts).AllocatorInstance.Data + (ulonglong)bVar2 * 4;
      *(int *)pFVar4 = *(int *)pFVar4 + 1;
      uVar12 = *(uint *)(*(longlong *)
                          ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data + lVar5)
                        + (ulonglong)(uVar14 & 0x1ff) * 4);
      if (uVar12 == 0xffffffff) {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(*(longlong *)
                           ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
      }
      bVar2 = *(byte *)(lVar15 + 4);
      if (((param_1->LevelObjCounts).ArrayNum <= (int)(uint)bVar2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = uVar14 + 1;
      pFVar4 = (param_1->LevelObjCounts).AllocatorInstance.Data + (ulonglong)bVar2 * 4;
      *(int *)pFVar4 = *(int *)pFVar4 + iVar16;
      if ((int)uVar9 <= (int)uVar14) break;
      while( true ) {
        lVar15 = (ulonglong)(uVar14 & 0x1ff) * 2;
        lVar5 = *(longlong *)
                 ((this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar14 >> 9) * 8);
        if ((*(short *)(lVar15 + lVar5) != 0) && (*(short *)(lVar15 + lVar5) != -1)) break;
        uVar14 = uVar14 + 1;
        if ((int)uVar9 <= (int)uVar14) goto joined_r0x0001435f66c9;
      }
    }
  } while( true );
}

// ContainmentQuery @ 1435f6ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::ContainmentQuery
          (FSparseDynamicOctree3 *this,TVector<double> *param_1,
          TFunctionRef<void___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  void *_Dst;
  double dVar2;
  double dVar3;
  int iVar4;
  code *pcVar5;
  double dVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar19;
  TVector<double> *pTVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2a8 [32];
  undefined1 local_258 [8];
  longlong local_250;
  undefined4 local_248 [2];
  undefined4 local_240 [2];
  undefined4 local_238 [2];
  undefined4 local_230 [2];
  TVector<double> *local_228;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_220;
  int iStack_218;
  uint uStack_214;
  undefined1 *local_210;
  undefined4 uStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  int local_1f0;
  int local_1ec;
  TVector<double> *local_1e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  code *local_1b0;
  TVector<double> **local_1a8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double dStack_180;
  double local_178;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_170;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_200 = 0;
  uStack_214 = 1;
  local_220 = &this->SpillObjectSet;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar4 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_218 = 0;
  iStack_204 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar17 = *puVar15;
    while (uVar17 == 0) {
      lVar10 = (longlong)iStack_218;
      local_200 = local_200 + 0x20;
      iStack_218 = iStack_218 + 1;
      iStack_204 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218) goto LAB_1435f6dad;
      uVar17 = puVar15[lVar10 + 1];
    }
    uStack_214 = -uVar17 & uVar17;
    uVar14 = (ulonglong)uStack_214 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1f0 = (int)lVar10;
    iStack_204 = local_1f0 + -1 + local_200;
    if (iVar4 < iStack_204) {
      iStack_204 = iVar4;
    }
  }
LAB_1435f6dad:
  uVar17 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_1f8 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_1d8._padding_ = CONCAT44(uStack_214,iStack_218);
  uStack_208 = 0xffffffff;
  TStack_1d8.CurrentBitIndex = iStack_204;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar17 >> 5;
  TStack_1d8._28_4_ = iStack_204;
  TStack_1d8.BaseBitIndex = local_200;
  uStack_1b8 = CONCAT44(uStack_1f4,iStack_1f8);
  local_228 = param_1;
  local_210 = puVar1;
  iStack_1fc = iStack_204;
  local_1e0 = local_220;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar17 != uVar13) {
    puVar18 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar17 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar17 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1435f6eb0;
      uVar17 = *(uint *)(puVar18 + lVar10 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_1ec = (int)lVar10;
    uVar17 = local_1ec + -1 + uVar16;
    if ((int)uVar13 < (int)uVar17) {
      uVar17 = uVar13;
    }
  }
LAB_1435f6eb0:
  while( true ) {
    pTVar7 = local_1e0;
    if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
        (int)uStack_1b8) {
      local_258[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    pTVar20 = local_228;
    if (((TStack_1d8.CurrentBitIndex == uVar17) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar7 == &this->SpillObjectSet)) break;
    local_248[0] = *(undefined4 *)
                    (*(longlong *)&pTVar7->Elements + (longlong)TStack_1d8.CurrentBitIndex * 0xc);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_248);
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  local_1a8 = &local_1e8;
  local_1e8 = local_228;
  local_1b0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  local_1a0._s_0.X = (local_228->field0_0x0)._s_0.X;
  local_1a0._s_0.Y = (local_228->field0_0x0)._s_0.Y;
  local_1a0._s_0.Z = (local_228->field0_0x0)._s_0.Z;
  local_188 = local_1a0._s_0.X;
  dStack_180 = local_1a0._s_0.Y;
  local_178 = local_1a0._s_0.Z;
  InitializeQueryQueue
            (this,&local_170,(TAxisAlignedBox3<double> *)&local_1a0._s_0,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_1b0,false);
  FVar19 = local_170.AllocatorInstance.SecondaryData;
  iVar12 = local_170.ArrayNum;
  iVar4 = local_170.ArrayNum;
  do {
    local_170.ArrayNum = iVar12;
    if (local_170.ArrayNum < 1) {
      if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        local_170.ArrayNum = iVar4;
        FMemory::Free((void *)FVar19);
      }
      return;
    }
    iVar12 = local_170.ArrayNum + -1;
    FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_170;
    if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar9 = FVar19;
    }
    puVar15 = *(uint **)((longlong)FVar9 + (longlong)iVar12 * 8);
    FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_170;
    if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar9 = FVar19;
    }
    _Dst = (void *)((longlong)FVar9 + (longlong)iVar12 * 8);
    iVar12 = (local_170.ArrayNum - iVar12) + -1;
    if (iVar12 != 0) {
      local_170.ArrayNum = iVar4;
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar12 << 3);
      FVar19 = local_170.AllocatorInstance.SecondaryData;
    }
    local_170.ArrayNum = local_170.ArrayNum + -1;
    uVar17 = *puVar15;
    uVar17 = *(uint *)(*(longlong *)
                        ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
    if (uVar17 != 0xffffffff) {
      uVar16 = uVar17 + 1;
      uVar14 = (ulonglong)uVar16;
      iVar4 = *(int *)(*(longlong *)
                        ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
      if (iVar4 < 8) {
        uVar13 = uVar16;
        while ((int)uVar13 <= (int)(uVar17 + iVar4)) {
          local_240[0] = *(undefined4 *)
                          (*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar14 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_240);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar16 = uVar16 + 1;
          FVar19 = local_170.AllocatorInstance.SecondaryData;
        }
      }
      else {
        uVar13 = uVar16;
        while ((int)uVar13 <= (int)(uVar17 + 8)) {
          local_238[0] = *(undefined4 *)
                          (*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar14 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_238);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar16 = uVar16 + 1;
          FVar19 = local_170.AllocatorInstance.SecondaryData;
        }
        uVar17 = *(uint *)(*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar17 + 9 >> 9) * 8) + (ulonglong)(uVar17 + 9 & 0x1ff) * 4)
        ;
        pTVar20 = local_228;
        if (uVar17 != 0xffffffff) {
          pFVar11 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
          do {
            local_230[0] = *(undefined4 *)
                            (*(longlong *)(pFVar11 + (ulonglong)(uVar17 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
            (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_230);
            pFVar11 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
            uVar17 = *(uint *)(*(longlong *)(pFVar11 + (ulonglong)(uVar17 + 1 >> 9) * 8) +
                              (ulonglong)(uVar17 + 1 & 0x1ff) * 4);
            FVar19 = local_170.AllocatorInstance.SecondaryData;
            pTVar20 = local_228;
          } while (uVar17 != 0xffffffff);
        }
      }
    }
    puVar15 = puVar15 + 5;
    lVar10 = 8;
    iVar12 = local_170.ArrayNum;
    do {
      uVar17 = *puVar15;
      if (uVar17 != 0xffffffff) {
        local_250 = *(longlong *)
                     ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8) +
                    (ulonglong)(uVar17 & 0x1ff) * 0x34;
        dVar2 = (pTVar20->field0_0x0)._s_0.X;
        dVar22 = this->RootDimension / (double)(ulonglong)(1L << (*(byte *)(local_250 + 4) & 0x1f));
        dVar21 = dVar22 * this->MaxExpandFactor;
        dVar23 = (double)*(int *)(local_250 + 0xc) * dVar22 - dVar21;
        dVar6 = (double)*(int *)(local_250 + 8) * dVar22 - dVar21;
        dVar24 = (double)*(int *)(local_250 + 0x10) * dVar22 - dVar21;
        dVar22 = dVar21 + dVar21 + dVar22;
        if (((dVar6 <= dVar2) && (dVar21 = (pTVar20->field0_0x0)._s_0.Y, dVar23 <= dVar21)) &&
           ((dVar3 = (pTVar20->field0_0x0)._s_0.Z, dVar24 <= dVar3 &&
            (((dVar2 <= dVar22 + dVar6 && (dVar21 <= dVar22 + dVar23)) && (dVar3 <= dVar22 + dVar24)
             ))))) {
          FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_170;
          if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar9 = FVar19;
          }
          if ((ulonglong)FVar9 <= &local_250) {
            FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_170;
            if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar9 = FVar19;
            }
            if ((&local_250 < (longlong *)((longlong)FVar9 + (longlong)local_170.ArrayMax * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar19 = local_170.AllocatorInstance.SecondaryData,
               iVar12 = local_170.ArrayNum, bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          if (iVar12 == local_170.ArrayMax) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                               (0x808,&local_170.AllocatorInstance,&local_170.ArrayMax);
            FVar19 = local_170.AllocatorInstance.SecondaryData;
          }
          local_170.ArrayNum = iVar12 + 1;
          FVar9 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_170;
          if (FVar19 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar9 = FVar19;
          }
          *(longlong *)((longlong)FVar9 + (longlong)iVar12 * 8) = local_250;
          FVar19 = local_170.AllocatorInstance.SecondaryData;
          iVar12 = local_170.ArrayNum;
        }
      }
      puVar15 = puVar15 + 1;
      lVar10 = lVar10 + -1;
      iVar4 = local_170.ArrayNum;
    } while (lVar10 != 0);
  } while( true );
}

// ContainmentQueryCancellable @ 1435f7420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::ContainmentQueryCancellable
          (FSparseDynamicOctree3 *this,TVector<double> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  void *_Dst;
  double dVar3;
  double dVar4;
  uint uVar5;
  code *pcVar6;
  double dVar7;
  TFunctionRef<bool___cdecl(int)> *pTVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  uint uVar21;
  undefined1 *puVar22;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar23;
  int iVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_2c8 [32];
  undefined1 local_278 [8];
  TFunctionRef<bool___cdecl(int)> *local_270;
  longlong local_268;
  undefined4 local_260 [2];
  undefined4 local_258 [2];
  undefined4 local_250 [2];
  uint local_248;
  undefined4 local_240 [2];
  uint *local_238;
  TVector<double> *local_230;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_228;
  int iStack_220;
  uint uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_210;
  int iStack_20c;
  int local_208;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  int local_1f4;
  TVector<double> *local_1f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  code *local_1b8;
  TVector<double> **local_1b0;
  TVector<double>_u_0 local_1a8;
  double local_190;
  double dStack_188;
  double local_180;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_178;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar24 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  pTVar2 = &this->SpillObjectSet;
  iStack_220 = 0;
  uStack_21c = 1;
  local_208 = 0;
  iStack_20c = 0;
  if (iVar24 != 0) {
    puVar18 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar21 = *puVar18;
    local_208 = 0;
    while (uVar21 == 0) {
      lVar14 = (longlong)iStack_220;
      local_208 = local_208 + 0x20;
      iStack_220 = iStack_220 + 1;
      iStack_20c = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_220) goto LAB_1435f74ed;
      uVar21 = puVar18[lVar14 + 1];
    }
    uStack_21c = -uVar21 & uVar21;
    uVar17 = (ulonglong)uStack_21c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1f8 = (int)lVar14;
    iStack_20c = local_1f8 + -1 + local_208;
    if (iVar24 < iStack_20c) {
      iStack_20c = iVar24;
    }
  }
LAB_1435f74ed:
  uVar21 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  uVar19 = uVar21 & 0xffffffe0;
  iStack_200 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  TStack_1e0._padding_ = CONCAT44(uStack_21c,iStack_220);
  uStack_210 = 0xffffffff;
  TStack_1e0.CurrentBitIndex = iStack_20c;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar21 >> 5;
  TStack_1e0._28_4_ = iStack_20c;
  TStack_1e0.BaseBitIndex = local_208;
  uStack_1c0 = CONCAT44(uStack_1fc,iStack_200);
  local_270 = param_2;
  local_230 = param_1;
  local_228 = pTVar2;
  local_218 = puVar1;
  iStack_204 = iStack_20c;
  local_1e8 = pTVar2;
  TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar24 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  uVar5 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar21 != uVar5) {
    puVar22 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar14 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar21 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1435f7600;
      uVar21 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_1f4 = (int)lVar14;
    uVar21 = local_1f4 + -1 + uVar19;
    if ((int)uVar5 < (int)uVar21) {
      uVar21 = uVar5;
    }
  }
LAB_1435f7600:
  while( true ) {
    pTVar9 = local_1e8;
    if (*(int *)&(local_1e8->Elements).field_0x8 - *(int *)&(local_1e8->Elements).field_0x34 !=
        (int)uStack_1c0) {
      local_278[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    pTVar20 = local_230;
    if (((TStack_1e0.CurrentBitIndex == uVar21) &&
        (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2))
    break;
    local_260[0] = *(undefined4 *)
                    (*(longlong *)&pTVar9->Elements + (longlong)TStack_1e0.CurrentBitIndex * 0xc);
    cVar12 = (**(code **)local_270)(*(undefined8 *)&local_270->field_0x8,local_260);
    if (cVar12 == '\0') {
      return false;
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  }
  local_1b0 = &local_1f0;
  local_1f0 = local_230;
  local_1b8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  local_1a8._s_0.X = (local_230->field0_0x0)._s_0.X;
  local_1a8._s_0.Y = (local_230->field0_0x0)._s_0.Y;
  local_1a8._s_0.Z = (local_230->field0_0x0)._s_0.Z;
  local_190 = local_1a8._s_0.X;
  dStack_188 = local_1a8._s_0.Y;
  local_180 = local_1a8._s_0.Z;
  InitializeQueryQueue
            (this,&local_178,(TAxisAlignedBox3<double> *)&local_1a8._s_0,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_1b8,false);
  FVar23 = local_178.AllocatorInstance.SecondaryData;
  iVar24 = local_178.ArrayNum;
  do {
    if (iVar24 < 1) {
      if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        FMemory::Free((void *)FVar23);
      }
      return true;
    }
    if ((iVar24 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar23 = local_178.AllocatorInstance.SecondaryData, iVar24 = local_178.ArrayNum, bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar11 = (*pcVar6)();
      return (bool)uVar11;
    }
    iVar16 = iVar24 + -1;
    FVar13 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_178;
    if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar13 = FVar23;
    }
    puVar18 = *(uint **)((longlong)FVar13 + (longlong)iVar16 * 8);
    FVar13 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_178;
    if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar13 = FVar23;
    }
    _Dst = (void *)((longlong)FVar13 + (longlong)iVar16 * 8);
    iVar16 = (iVar24 - iVar16) + -1;
    local_238 = puVar18;
    if (iVar16 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar16 << 3);
      FVar23 = local_178.AllocatorInstance.SecondaryData;
      iVar24 = local_178.ArrayNum;
    }
    pTVar8 = local_270;
    local_178.ArrayNum = iVar24 + -1;
    bVar10 = true;
    local_248 = *(uint *)(*(longlong *)
                           ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data +
                           (ulonglong)(*puVar18 >> 9) * 8) + (ulonglong)(*puVar18 & 0x1ff) * 4);
    if (local_248 != 0xffffffff) {
      uVar21 = local_248 + 1;
      uVar17 = (ulonglong)uVar21;
      iVar24 = *(int *)(*(longlong *)
                         ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                         (ulonglong)(local_248 >> 9) * 8) + (ulonglong)(local_248 & 0x1ff) * 4);
      if (iVar24 < 8) {
        iVar24 = local_248 + iVar24;
        if (iVar24 < (int)uVar21) goto LAB_1435f794a;
        do {
          if (bVar10) {
            local_258[0] = *(undefined4 *)
                            (*(longlong *)
                              ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                              (uVar17 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
            cVar12 = (**(code **)local_270)(*(undefined8 *)&local_270->field_0x8,local_258);
            bVar10 = true;
            if (cVar12 == '\0') {
              bVar10 = false;
            }
          }
          uVar19 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar19;
          uVar21 = uVar21 + 1;
          FVar23 = local_178.AllocatorInstance.SecondaryData;
        } while ((int)uVar19 <= iVar24);
      }
      else {
        iVar24 = local_248 + 8;
        if ((int)uVar21 <= iVar24) {
          do {
            if (bVar10) {
              local_250[0] = *(undefined4 *)
                              (*(longlong *)
                                ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                (uVar17 >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 4);
              cVar12 = (**(code **)pTVar8)(*(undefined8 *)&pTVar8->field_0x8,local_250);
              bVar10 = true;
              if (cVar12 == '\0') {
                bVar10 = false;
              }
            }
            uVar19 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar19;
            uVar21 = uVar21 + 1;
            FVar23 = local_178.AllocatorInstance.SecondaryData;
            puVar18 = local_238;
          } while ((int)uVar19 <= iVar24);
        }
        uVar21 = *(uint *)(*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (ulonglong)(local_248 + 9 >> 9) * 8) +
                          (ulonglong)(local_248 + 9 & 0x1ff) * 4);
        if (uVar21 != 0xffffffff) {
          pFVar15 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
          do {
            if (bVar10) {
              local_240[0] = *(undefined4 *)
                              (*(longlong *)(pFVar15 + (ulonglong)(uVar21 >> 9) * 8) +
                              (ulonglong)(uVar21 & 0x1ff) * 4);
              cVar12 = (**(code **)local_270)(*(undefined8 *)&local_270->field_0x8,local_240);
              bVar10 = true;
              if (cVar12 == '\0') {
                bVar10 = false;
              }
            }
            pFVar15 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
            uVar21 = *(uint *)(*(longlong *)(pFVar15 + (ulonglong)(uVar21 + 1 >> 9) * 8) +
                              (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
            FVar23 = local_178.AllocatorInstance.SecondaryData;
            puVar18 = local_238;
          } while (uVar21 != 0xffffffff);
        }
      }
      pTVar20 = local_230;
      if (!bVar10) {
        if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
          FMemory::Free((void *)FVar23);
        }
        return false;
      }
    }
LAB_1435f794a:
    puVar18 = puVar18 + 5;
    lVar14 = 8;
    iVar24 = local_178.ArrayNum;
    do {
      uVar21 = *puVar18;
      if (uVar21 != 0xffffffff) {
        local_268 = *(longlong *)
                     ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar21 >> 9) * 8) +
                    (ulonglong)(uVar21 & 0x1ff) * 0x34;
        dVar3 = (pTVar20->field0_0x0)._s_0.X;
        dVar26 = this->RootDimension / (double)(ulonglong)(1L << (*(byte *)(local_268 + 4) & 0x1f));
        dVar25 = dVar26 * this->MaxExpandFactor;
        dVar27 = (double)*(int *)(local_268 + 0xc) * dVar26 - dVar25;
        dVar7 = (double)*(int *)(local_268 + 8) * dVar26 - dVar25;
        dVar28 = (double)*(int *)(local_268 + 0x10) * dVar26 - dVar25;
        dVar26 = dVar25 + dVar25 + dVar26;
        if (((((dVar7 <= dVar3) && (dVar25 = (pTVar20->field0_0x0)._s_0.Y, dVar27 <= dVar25)) &&
             (dVar4 = (pTVar20->field0_0x0)._s_0.Z, dVar28 <= dVar4)) &&
            ((dVar3 <= dVar26 + dVar7 && (dVar25 <= dVar26 + dVar27)))) &&
           (dVar4 <= dVar26 + dVar28)) {
          FVar13 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_178;
          if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar13 = FVar23;
          }
          if ((ulonglong)FVar13 <= &local_268) {
            FVar13 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_178;
            if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar13 = FVar23;
            }
            if ((&local_268 < (longlong *)((longlong)FVar13 + (longlong)local_178.ArrayMax * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar23 = local_178.AllocatorInstance.SecondaryData,
               iVar24 = local_178.ArrayNum, bVar10)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
          }
          if (iVar24 == local_178.ArrayMax) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                               (0x808,&local_178.AllocatorInstance,&local_178.ArrayMax);
            FVar23 = local_178.AllocatorInstance.SecondaryData;
          }
          local_178.ArrayNum = iVar24 + 1;
          FVar13 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_178;
          if (FVar23 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar13 = FVar23;
          }
          *(longlong *)((longlong)FVar13 + (longlong)iVar24 * 8) = local_268;
          FVar23 = local_178.AllocatorInstance.SecondaryData;
          iVar24 = local_178.ArrayNum;
        }
      }
      puVar18 = puVar18 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  } while( true );
}

// ContainsObject @ 1435f7f10

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::ContainsObject(FSparseDynamicOctree3 *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ForElementType<unsigned_int> FVar4;
  
  if ((this->ValidObjectIDs).MaxIndex <= (uint)param_1) {
    return false;
  }
  if ((param_1 < 0) || ((this->ValidObjectIDs).BitArray.NumBits <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5c6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FVar4 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<unsigned_int>)0x0) {
    FVar4 = (ForElementType<unsigned_int>)&this->ValidObjectIDs;
  }
  return (*(uint *)((longlong)FVar4 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (param_1 & 0x1fU) & 1) != 0;
}

// FindCurrentContainingCell @ 1435fce20

FSparseOctreeCell * __thiscall
UE::Geometry::FSparseDynamicOctree3::FindCurrentContainingCell
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *__return_storage_ptr__,
          TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uchar uVar8;
  undefined3 uVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  FSparseOctreeCell *pFVar17;
  int iVar18;
  FSparseOctreeCell *pFVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  FVector3i_u_0 local_148;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  undefined4 local_108;
  uint uStack_104;
  undefined8 uStack_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  
  dVar10 = __real_3fe0000000000000;
  dVar21 = ((param_1->Max).field0_0x0._s_0.X + (param_1->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar6 = ((param_1->Max).field0_0x0._s_0.Z + (param_1->Min).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  dVar5 = ((param_1->Max).field0_0x0._s_0.Y + (param_1->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  local_138._s_0.X = dVar21;
  local_138._s_0.Y = dVar5;
  local_138._s_0.Z = dVar6;
  PointToIndex(this,(FVector3i *)&local_148._s_0,0,(TVector<double> *)&local_138._s_0);
  uVar12 = FCrc::MemCrc_DEPRECATED(&local_148,0xc,0);
  if (*(int *)&(this->RootCells).Elements.field_0x8 !=
      *(int *)&(this->RootCells).Elements.field_0x34) {
    puVar16 = *(undefined1 **)&(this->RootCells).Elements.field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->RootCells).Elements.field_0x38;
    }
    iVar18 = *(int *)(puVar16 +
                     (ulonglong)(*(int *)&(this->RootCells).Elements.field_0x48 - 1U & uVar12) * 4);
    if (iVar18 != -1) {
      do {
        piVar14 = (int *)((longlong)iVar18 * 0x20 + *(longlong *)&(this->RootCells).Elements);
        if (((*piVar14 == local_148._s_0.X) && (piVar14[1] == local_148._s_0.Y)) &&
           (piVar14[2] == local_148._s_0.Z)) {
          if (((iVar18 != -1) && (piVar14 != (int *)0x0)) &&
             (*(uint **)(piVar14 + 4) != (uint *)0x0)) {
            uVar12 = **(uint **)(piVar14 + 4);
            pFVar2 = (this->Cells).Blocks.AllocatorInstance.Data;
            pFVar17 = (FSparseOctreeCell *)
                      (*(longlong *)(pFVar2 + (ulonglong)(uVar12 >> 9) * 8) +
                      (ulonglong)(uVar12 & 0x1ff) * 0x34);
            bVar11 = CanFit(this,pFVar17,param_1);
            if (!bVar11) goto LAB_1435fd32e;
            dVar1 = this->RootDimension;
            dVar3 = dVar1 / (double)(ulonglong)(1L << (pFVar17->Level & 0x1f));
            iVar18 = 4;
            if (dVar6 < ((double)(pFVar17->Index).field0_0x0._s_0.Z + dVar10) * dVar3) {
              iVar18 = 0;
            }
            iVar13 = 2;
            if (dVar5 < ((double)(pFVar17->Index).field0_0x0._s_0.Y + dVar10) * dVar3) {
              iVar13 = 0;
            }
            uVar15 = (ulonglong)
                     (iVar18 + iVar13 +
                     (uint)(((double)(pFVar17->Index).field0_0x0._s_0.X + dVar10) * dVar3 <= dVar21)
                     );
            if ((pFVar17->Children).Elements[uVar15] == 0xffffffff) goto LAB_1435fd307;
            dVar3 = this->MaxExpandFactor;
            goto LAB_1435fd192;
          }
          break;
        }
        iVar18 = piVar14[6];
      } while (iVar18 != -1);
    }
  }
  local_110 = this->RootDimension;
  uStack_100 = CONCAT44(local_148._s_0.Y,local_148._s_0.X);
  dVar21 = local_110 * this->MaxExpandFactor;
  local_108 = 0xffffffff;
  uStack_104 = uStack_104 & 0xffffff00;
  local_f8 = local_148._s_0.Z;
  uStack_ec = 0xffffffff;
  uStack_e8 = 0xffffffff;
  uStack_f4 = 0xffffffff;
  uStack_f0 = 0xffffffff;
  uStack_e0 = 0xffffffffffffffff;
  uStack_e4 = 0xffffffff;
  local_138._s_0.X = (double)local_148._s_0.X * local_110 - dVar21;
  local_138._s_0.Y = (double)local_148._s_0.Y * local_110 - dVar21;
  local_120 = (double)local_148._s_0.X * local_110 + dVar21 + local_110;
  local_138._s_0.Z = (double)local_148._s_0.Z * local_110 - dVar21;
  local_118 = (double)local_148._s_0.Y * local_110 + dVar21 + local_110;
  local_110 = (double)local_148._s_0.Z * local_110 + dVar21 + local_110;
  bVar11 = TAxisAlignedBox3<double>::Contains((TAxisAlignedBox3<double> *)&local_138._s_0,param_1);
  if (bVar11) {
    __return_storage_ptr__->CellID = local_108;
    __return_storage_ptr__->Level = (char)uStack_104;
    *(int3 *)&__return_storage_ptr__->field_0x5 = (int3)(uStack_104 >> 8);
    *(undefined8 *)&(__return_storage_ptr__->Index).field0_0x0 = uStack_100;
    *(ulonglong *)((longlong)&(__return_storage_ptr__->Index).field0_0x0 + 8) =
         CONCAT44(uStack_f4,local_f8);
    *(ulonglong *)((__return_storage_ptr__->Children).Elements + 1) = CONCAT44(uStack_ec,uStack_f0);
    *(ulonglong *)((__return_storage_ptr__->Children).Elements + 3) = CONCAT44(uStack_e4,uStack_e8);
    *(undefined8 *)((__return_storage_ptr__->Children).Elements + 5) = uStack_e0;
    (__return_storage_ptr__->Children).Elements[7] = 0xffffffff;
    return __return_storage_ptr__;
  }
LAB_1435fd32e:
  __return_storage_ptr__->CellID = 0xffffffff;
  __return_storage_ptr__->Level = 0xff;
  *(undefined8 *)&(__return_storage_ptr__->Index).field0_0x0 = 0;
  (__return_storage_ptr__->Index).field0_0x0._s_0.Z = 0;
  (__return_storage_ptr__->Children).Elements[2] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[3] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[0] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[1] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[6] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[7] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[4] = 0xffffffff;
  (__return_storage_ptr__->Children).Elements[5] = 0xffffffff;
  return __return_storage_ptr__;
  while( true ) {
    dVar4 = dVar4 * dVar10;
    iVar18 = 4;
    if (dVar6 < dVar4 + dVar24) {
      iVar18 = 0;
    }
    iVar13 = 2;
    if (dVar5 < dVar4 + dVar23) {
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(iVar18 + iVar13 + (uint)(dVar4 + dVar22 <= dVar21));
    pFVar17 = pFVar19;
    if ((pFVar19->Children).Elements[uVar15] == 0xffffffff) break;
LAB_1435fd192:
    uVar12 = (pFVar17->Children).Elements[uVar15];
    pFVar19 = (FSparseOctreeCell *)
              (*(longlong *)(pFVar2 + (ulonglong)(uVar12 >> 9) * 8) +
              (ulonglong)(uVar12 & 0x1ff) * 0x34);
    dVar4 = dVar1 / (double)(ulonglong)(1L << (pFVar19->Level & 0x1f));
    dVar23 = (double)(pFVar19->Index).field0_0x0._s_0.Y * dVar4;
    dVar20 = dVar4 * dVar3;
    dVar22 = (double)(pFVar19->Index).field0_0x0._s_0.X * dVar4;
    dVar24 = (double)(pFVar19->Index).field0_0x0._s_0.Z * dVar4;
    local_138._s_0.Y = dVar23 - dVar20;
    local_138._s_0.X = dVar22 - dVar20;
    local_138._s_0.Z = dVar24 - dVar20;
    local_120 = dVar22 + dVar20 + dVar4;
    local_118 = dVar23 + dVar20 + dVar4;
    local_110 = dVar24 + dVar20 + dVar4;
    bVar11 = TAxisAlignedBox3<double>::Contains((TAxisAlignedBox3<double> *)&local_138._s_0,param_1)
    ;
    if (!bVar11) break;
  }
LAB_1435fd307:
  uVar8 = pFVar17->Level;
  uVar9 = *(undefined3 *)&pFVar17->field_0x5;
  uVar7 = *(undefined8 *)&(pFVar17->Index).field0_0x0;
  __return_storage_ptr__->CellID = pFVar17->CellID;
  __return_storage_ptr__->Level = uVar8;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = uVar9;
  *(undefined8 *)&(__return_storage_ptr__->Index).field0_0x0 = uVar7;
  uVar7 = *(undefined8 *)((pFVar17->Children).Elements + 1);
  *(undefined8 *)((longlong)&(__return_storage_ptr__->Index).field0_0x0 + 8) =
       *(undefined8 *)((longlong)&(pFVar17->Index).field0_0x0 + 8);
  *(undefined8 *)((__return_storage_ptr__->Children).Elements + 1) = uVar7;
  uVar7 = *(undefined8 *)((pFVar17->Children).Elements + 5);
  *(undefined8 *)((__return_storage_ptr__->Children).Elements + 3) =
       *(undefined8 *)((pFVar17->Children).Elements + 3);
  *(undefined8 *)((__return_storage_ptr__->Children).Elements + 5) = uVar7;
  (__return_storage_ptr__->Children).Elements[7] = (pFVar17->Children).Elements[7];
  return __return_storage_ptr__;
}

// FindNearestHitObject @ 1435fd7a0

int __thiscall
UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
          (FSparseDynamicOctree3 *this,TRay<double> *param_1,
          TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *param_2,
          TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *param_3,double param_4)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  double dVar15;
  undefined1 local_108 [4];
  int local_104;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_100;
  FSparseOctreeCell *local_f0;
  int local_e8 [2];
  int local_e0 [2];
  int local_d8 [2];
  int local_d0 [2];
  uint *local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  int local_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  <lambda_1> local_58;
  
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  local_104 = -1;
  iVar6 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  pTVar2 = &this->SpillObjectSet;
  iStack_b8 = 0;
  local_a0 = 0;
  uStack_b4 = 1;
  iStack_a4 = 0;
  if (iVar6 != 0) {
    puVar11 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar13 = *puVar11;
    while (uVar13 == 0) {
      lVar7 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_1435fd85d;
      uVar13 = puVar11[lVar7 + 1];
    }
    uStack_b4 = -uVar13 & uVar13;
    uVar10 = (ulonglong)uStack_b4 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_90 = (int)lVar7;
    iStack_a4 = local_90 + -1 + local_a0;
    if (iVar6 < iStack_a4) {
      iStack_a4 = iVar6;
    }
  }
LAB_1435fd85d:
  uVar13 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_98 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
              *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  TStack_80._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uStack_a8 = 0xffffffff;
  TStack_80.CurrentBitIndex = iStack_a4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar8 = (int)uVar13 >> 5;
  TStack_80._28_4_ = iStack_a4;
  TStack_80.BaseBitIndex = local_a0;
  uStack_60 = CONCAT44(uStack_94,iStack_98);
  local_c0 = pTVar2;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar6 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  uVar9 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar13 != uVar9) {
    puVar14 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar8 * 4);
    while (uVar13 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_1435fd970;
      uVar13 = *(uint *)(puVar14 + lVar7 * 4 + 4);
    }
    uVar10 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_8c = (int)lVar7;
    uVar13 = local_8c + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_1435fd970:
  while( true ) {
    pTVar4 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      local_108[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_80.CurrentBitIndex == uVar13) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar4 == pTVar2))
    break;
    iVar6 = *(int *)(*(longlong *)&pTVar4->Elements + (longlong)TStack_80.CurrentBitIndex * 0xc);
    local_e8[0] = iVar6;
    dVar15 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_e8,param_1);
    if (dVar15 < param_4) {
      param_4 = dVar15;
      local_104 = iVar6;
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  }
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x40,&local_100.AllocatorInstance,0,&local_100.ArrayMax);
  local_58.MaxDistance = &param_4;
  local_58.Queue = &local_100;
  local_58.__this = this;
  local_58.Ray = param_1;
  TSparseGrid3<unsigned_int>::
  AllocatedIteration<_UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject_::__l2::<lambda_1>_>
            (&this->RootCells,&local_58);
  while( true ) {
    if (local_100.ArrayNum < 1) {
      if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      return local_104;
    }
    if ((local_100.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    iVar6 = local_100.ArrayNum + -1;
    puVar11 = *(uint **)(local_100.AllocatorInstance.Data + (longlong)iVar6 * 8);
    iVar8 = (local_100.ArrayNum - iVar6) + -1;
    local_c8 = puVar11;
    if (iVar8 != 0) {
      memmove(local_100.AllocatorInstance.Data + (longlong)iVar6 * 8,
              local_100.AllocatorInstance.Data + (longlong)iVar6 * 8 + 8,(longlong)iVar8 << 3);
    }
    local_100.ArrayNum = local_100.ArrayNum + -1;
    uVar13 = *(uint *)(*(longlong *)
                        ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data +
                        (ulonglong)(*puVar11 >> 9) * 8) + (ulonglong)(*puVar11 & 0x1ff) * 4);
    if (uVar13 != 0xffffffff) {
      uVar12 = uVar13 + 1;
      uVar10 = (ulonglong)uVar12;
      iVar6 = *(int *)(*(longlong *)
                        ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
      if (iVar6 < 8) {
        uVar9 = uVar12;
        while ((int)uVar9 <= (int)(iVar6 + uVar13)) {
          iVar8 = *(int *)(*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar10 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
          local_e0[0] = iVar8;
          dVar15 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_e0,param_1)
          ;
          if (dVar15 < param_4) {
            param_4 = dVar15;
            local_104 = iVar8;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar12 = uVar12 + 1;
          puVar11 = local_c8;
        }
      }
      else {
        uVar9 = uVar12;
        while ((int)uVar9 <= (int)(uVar13 + 8)) {
          iVar6 = *(int *)(*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar10 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
          local_d8[0] = iVar6;
          dVar15 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_d8,param_1)
          ;
          if (dVar15 < param_4) {
            param_4 = dVar15;
            local_104 = iVar6;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          uVar12 = uVar12 + 1;
          puVar11 = local_c8;
        }
        for (uVar13 = *(uint *)(*(longlong *)
                                 ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar13 + 9 >> 9) * 8) +
                               (ulonglong)(uVar13 + 9 & 0x1ff) * 4); uVar13 != 0xffffffff;
            uVar13 = *(uint *)(*(longlong *)
                                ((this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance
                                 .Data + (ulonglong)(uVar13 + 1 >> 9) * 8) +
                              (ulonglong)(uVar13 + 1 & 0x1ff) * 4)) {
          iVar6 = *(int *)(*(longlong *)
                            ((this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.
                             Data + (ulonglong)(uVar13 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4)
          ;
          local_d0[0] = iVar6;
          dVar15 = (double)(**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_d0,param_1)
          ;
          if (dVar15 < param_4) {
            param_4 = dVar15;
            local_104 = iVar6;
          }
        }
      }
    }
    puVar11 = puVar11 + 5;
    lVar7 = 8;
    do {
      uVar13 = *puVar11;
      if (uVar13 != 0xffffffff) {
        local_f0 = (FSparseOctreeCell *)
                   ((ulonglong)(uVar13 & 0x1ff) * 0x34 +
                   *(longlong *)
                    ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar13 >> 9) * 8));
        dVar15 = FindNearestRayCellIntersection(this,local_f0,param_1);
        if (dVar15 < param_4) {
          if (((local_100.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 <
               local_100.AllocatorInstance.Data + (longlong)local_100.ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            iVar6 = (*pcVar3)();
            return iVar6;
          }
          iVar6 = local_100.ArrayNum;
          if (local_100.ArrayNum == local_100.ArrayMax) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_100.AllocatorInstance,&local_100.ArrayMax);
          }
          local_100.ArrayNum = iVar6 + 1;
          *(FSparseOctreeCell **)(local_100.AllocatorInstance.Data + (longlong)iVar6 * 8) = local_f0
          ;
        }
      }
      puVar11 = puVar11 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  pcVar3 = (code *)swi(3);
  iVar6 = (*pcVar3)();
  return iVar6;
}

// FindNearestRayCellIntersection @ 1435fdff0

double __thiscall
UE::Geometry::FSparseDynamicOctree3::FindNearestRayCellIntersection
          (FSparseDynamicOctree3 *this,FSparseOctreeCell *param_1,TRay<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  EIntersectionType local_res8 [2];
  int local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_78;
  TVector<double> local_60;
  TVector<double>_u_0 local_48;
  double local_30;
  double local_28;
  double local_20;
  
  dVar1 = __real_7fefffffffffffff;
  local_20 = this->RootDimension / (double)(ulonglong)(1L << (param_1->Level & 0x1f));
  local_res8[0] = Empty;
  dVar2 = (double)(param_1->Index).field0_0x0._s_0.X * local_20;
  dVar5 = local_20 * this->MaxExpandFactor;
  dVar3 = (double)(param_1->Index).field0_0x0._s_0.Y * local_20;
  local_48._s_0.X = dVar2 - dVar5;
  dVar4 = (double)(param_1->Index).field0_0x0._s_0.Z * local_20;
  local_48._s_0.Y = dVar3 - dVar5;
  local_48._s_0.Z = dVar4 - dVar5;
  local_30 = dVar2 + dVar5 + local_20;
  local_28 = dVar3 + dVar5 + local_20;
  local_20 = dVar4 + dVar5 + local_20;
  local_res18 = 0.0;
  local_res20 = __real_7fefffffffffffff;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_48._s_0,true,local_res10,&local_60,&local_78,
             local_res8);
  if (local_res8[0] != Empty) {
    return local_res18;
  }
  return dVar1;
}

// InitializeQueryQueue @ 14360c170

TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
* __thiscall
UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue
          (FSparseDynamicOctree3 *this,
          TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,TAxisAlignedBox3<double> *param_1,
          TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *param_2,
          bool param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  FVector3i_u_0 local_78;
  FVector3i_u_0 local_68;
  TVector<double>_u_0 local_58 [2];
  
  lVar6 = 0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0x20;
  iVar10 = *(int *)&(this->RootCells).Elements.field_0x8 -
           *(int *)&(this->RootCells).Elements.field_0x34;
  if (10 < iVar10) {
    dVar3 = this->MaxExpandFactor * this->RootDimension;
    local_58[0]._0_8_ = (param_1->Min).field0_0x0._s_0.X - dVar3;
    local_58[0]._8_8_ = (param_1->Min).field0_0x0._s_0.Y - dVar3;
    local_58[0]._16_8_ = (param_1->Min).field0_0x0._s_0.Z - dVar3;
    PointToIndex(this,(FVector3i *)&local_68._s_0,0,(TVector<double> *)&local_58[0]._s_0);
    local_58[0]._0_8_ = dVar3 + (param_1->Max).field0_0x0._s_0.X;
    local_58[0]._8_8_ = dVar3 + (param_1->Max).field0_0x0._s_0.Y;
    local_58[0]._16_8_ = dVar3 + (param_1->Max).field0_0x0._s_0.Z;
    PointToIndex(this,(FVector3i *)&local_78._s_0,0,(TVector<double> *)&local_58[0]._s_0);
    uVar2 = *(undefined8 *)&(this->RootCells).Bounds.Min.field0_0x0;
    uVar1 = (this->RootCells).Bounds.Min.field0_0x0._s_0.Z;
    local_58[0]._16_8_ = *(double *)((longlong)&(this->RootCells).Bounds.Max.field0_0x0 + 4);
    uVar9 = (undefined4)uVar2;
    if ((int)uVar9 <= local_68._s_0.X) {
      uVar9 = local_68._s_0.X;
    }
    uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar8 <= local_68._s_0.Y) {
      uVar8 = local_68._s_0.Y;
    }
    if ((int)uVar1 <= local_68._s_0.Z) {
      uVar1 = local_68._s_0.Z;
    }
    uVar4 = (undefined4)
            ((ulonglong)*(undefined8 *)((longlong)&(this->RootCells).Bounds.Min.field0_0x0 + 8) >>
            0x20);
    local_68._s_0.Y = uVar8;
    local_68._s_0.X = uVar9;
    if (local_78._s_0.X <= (int)uVar4) {
      uVar4 = local_78._s_0.X;
    }
    local_68._s_0.Z = uVar1;
    uVar5 = (int)local_58[0]._16_8_;
    if (local_78._s_0.Y <= (int)local_58[0]._16_8_) {
      uVar5 = local_78._s_0.Y;
    }
    uVar7 = (undefined4)((ulonglong)local_58[0]._16_8_ >> 0x20);
    if (local_78._s_0.Z <= (int)uVar7) {
      uVar7 = local_78._s_0.Z;
    }
    local_78._s_0.Z = uVar7;
    local_78._s_0.Y = uVar5;
    local_78._s_0.X = uVar4;
    do {
      if (*(int *)((longlong)&local_78 + lVar6) < *(int *)((longlong)&local_68 + lVar6)) {
        return __return_storage_ptr__;
      }
      lVar6 = lVar6 + 4;
    } while (lVar6 < 0xc);
    if ((double)((uVar4 - uVar9) + 1) * (double)((uVar5 - uVar8) + 1) *
        (double)((uVar7 - uVar1) + 1) < (double)iVar10) {
      if (param_3) {
        local_58[0]._0_8_ = __return_storage_ptr__;
        local_58[0]._8_8_ = param_2;
        local_58[0]._16_8_ = this;
        TSparseGrid3<unsigned_int>::
        RangeIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l16::<lambda_1>_>
                  (&this->RootCells,(FVector3i *)&local_68._s_0,(FVector3i *)&local_78._s_0,
                   (<lambda_1> *)&local_58[0]._s_0);
        return __return_storage_ptr__;
      }
      local_58[0]._0_8_ = __return_storage_ptr__;
      local_58[0]._8_8_ = this;
      TSparseGrid3<unsigned_int>::
      RangeIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l18::<lambda_2>_>
                (&this->RootCells,(FVector3i *)&local_68._s_0,(FVector3i *)&local_78._s_0,
                 (<lambda_2> *)&local_58[0]._s_0);
      return __return_storage_ptr__;
    }
  }
  local_58[0]._0_8_ = __return_storage_ptr__;
  local_58[0]._8_8_ = param_2;
  local_58[0]._16_8_ = this;
  TSparseGrid3<unsigned_int>::
  AllocatedIteration<_UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue_::__l2::<lambda_3>_>
            (&this->RootCells,(<lambda_3> *)&local_58[0]._s_0);
  return __return_storage_ptr__;
}

// InsertObject @ 14360c7e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::InsertObject
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auStack_128 [32];
  int local_108 [4];
  FSparseOctreeCell local_f8;
  int local_b8 [4];
  FSparseOctreeCell local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_128;
  FindCurrentContainingCell(this,&local_f8,param_2);
  if (local_f8.Level == 0xff) {
    local_108[0] = param_1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->SpillObjectSet,local_b8,(bool *)local_108);
    TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&SpillCellID,param_1);
    FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
    return;
  }
  uVar16 = local_f8.CellID;
  if ((local_f8.Level == 0) && (uVar16 == 0xffffffff)) {
    local_a8.Index.field0_0x0._0_8_ =
         CONCAT44(local_f8.Index.field0_0x0._s_0.Y,local_f8.Index.field0_0x0._s_0.X);
    local_a8.Children.Elements[7] = local_f8.Children.Elements[7];
    local_a8.CellID = local_f8.CellID;
    local_a8.Level = local_f8.Level;
    local_a8._5_3_ = local_f8._5_3_;
    local_a8.Index.field0_0x0._s_0.Z = local_f8.Index.field0_0x0._s_0.Z;
    local_a8.Children.Elements[0] = local_f8.Children.Elements[0];
    local_a8.Children.Elements[1] = local_f8.Children.Elements[1];
    local_a8.Children.Elements[2] = local_f8.Children.Elements[2];
    local_a8.Children.Elements[3] = local_f8.Children.Elements[3];
    local_a8.Children.Elements[4] = local_f8.Children.Elements[4];
    local_a8.Children.Elements[5] = local_f8.Children.Elements[5];
    local_a8.Children.Elements[6] = local_f8.Children.Elements[6];
    uVar8 = FRefCountVector::Allocate(&this->CellRefCounts);
    uVar16 = (this->Cells).CurBlock;
    uVar15 = (this->Cells).CurBlockUsed;
    uVar9 = uVar16 * 0x200 + uVar15;
    local_a8.CellID = uVar8;
    if (uVar8 == uVar9) {
      if (uVar15 == 0x200) {
        if (uVar16 == (this->Cells).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock(&this->Cells);
        }
        (this->Cells).CurBlock = (this->Cells).CurBlock + 1;
        uVar16 = (this->Cells).CurBlock;
        uVar15 = 0;
        (this->Cells).CurBlockUsed = 0;
      }
      lVar18 = (longlong)(int)uVar15 * 0x34;
      lVar2 = *(longlong *)((this->Cells).Blocks.AllocatorInstance.Data + (longlong)(int)uVar16 * 8)
      ;
      *(undefined8 *)(lVar2 + lVar18) = local_a8._0_8_;
      ((undefined8 *)(lVar2 + lVar18))[1] = local_a8.Index.field0_0x0._0_8_;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[0],local_a8.Index.field0_0x0._s_0.Z);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[2],local_a8.Children.Elements[1]);
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[4],local_a8.Children.Elements[3]);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[6],local_a8.Children.Elements[5]);
      *(uint *)(lVar2 + 0x30 + lVar18) = local_a8.Children.Elements[7];
      puVar12 = &(this->Cells).CurBlockUsed;
      *puVar12 = *puVar12 + 1;
    }
    else if (uVar9 < uVar8) {
      TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Resize(&this->Cells,uVar8);
      uVar16 = (this->Cells).CurBlockUsed;
      if (uVar16 == 0x200) {
        if ((this->Cells).CurBlock == (this->Cells).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock(&this->Cells);
        }
        (this->Cells).CurBlock = (this->Cells).CurBlock + 1;
        uVar16 = 0;
        (this->Cells).CurBlockUsed = 0;
      }
      lVar18 = (longlong)(int)uVar16 * 0x34;
      lVar2 = *(longlong *)
               ((this->Cells).Blocks.AllocatorInstance.Data +
               (longlong)(int)(this->Cells).CurBlock * 8);
      *(undefined8 *)(lVar2 + lVar18) = local_a8._0_8_;
      ((undefined8 *)(lVar2 + lVar18))[1] = local_a8.Index.field0_0x0._0_8_;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[0],local_a8.Index.field0_0x0._s_0.Z);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[2],local_a8.Children.Elements[1]);
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[4],local_a8.Children.Elements[3]);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[6],local_a8.Children.Elements[5]);
      *(uint *)(lVar2 + 0x30 + lVar18) = local_a8.Children.Elements[7];
      puVar12 = &(this->Cells).CurBlockUsed;
      *puVar12 = *puVar12 + 1;
    }
    else {
      lVar18 = (ulonglong)(uVar8 & 0x1ff) * 0x34;
      lVar2 = *(longlong *)
               ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      *(undefined8 *)(lVar2 + lVar18) = local_a8._0_8_;
      ((undefined8 *)(lVar2 + lVar18))[1] = local_a8.Index.field0_0x0._0_8_;
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[0],local_a8.Index.field0_0x0._s_0.Z);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[2],local_a8.Children.Elements[1]);
      puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar18);
      *puVar1 = CONCAT44(local_a8.Children.Elements[4],local_a8.Children.Elements[3]);
      puVar1[1] = CONCAT44(local_a8.Children.Elements[6],local_a8.Children.Elements[5]);
      *(uint *)(lVar2 + 0x30 + lVar18) = local_a8.Children.Elements[7];
    }
    TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&local_a8.CellID,param_1);
    FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
    puVar12 = TSparseGrid3<unsigned_int>::Get(&this->RootCells,&local_a8.Index,true);
    *puVar12 = local_a8.CellID;
    FSmallListSet::AllocateAt(&this->CellObjectLists,local_a8.CellID);
    FSmallListSet::Insert(&this->CellObjectLists,local_a8.CellID,param_1);
    return;
  }
  dVar20 = this->RootDimension / (double)(ulonglong)(1L << (local_f8.Level & 0x1f));
  iVar14 = 4;
  if (((param_2->Min).field0_0x0._s_0.Z + (param_2->Max).field0_0x0._s_0.Z) *
      __real_3fe0000000000000 <
      ((double)local_f8.Index.field0_0x0._s_0.Z + __real_3fe0000000000000) * dVar20) {
    iVar14 = 0;
  }
  iVar10 = 2;
  if (((param_2->Min).field0_0x0._s_0.Y + (param_2->Max).field0_0x0._s_0.Y) *
      __real_3fe0000000000000 <
      ((double)local_f8.Index.field0_0x0._s_0.Y + __real_3fe0000000000000) * dVar20) {
    iVar10 = 0;
  }
  uVar15 = iVar14 + iVar10 +
           (uint)(((double)local_f8.Index.field0_0x0._s_0.X + __real_3fe0000000000000) * dVar20 <=
                 ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) *
                 __real_3fe0000000000000);
  if (local_f8.Children.Elements[uVar15] != 0xffffffff) {
LAB_14360cd59:
    TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&local_f8.CellID,param_1);
    FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
    FSmallListSet::Insert(&this->CellObjectLists,uVar16,param_1);
    return;
  }
  local_a8.Children.Elements[2] = 0xffffffff;
  local_a8.Children.Elements[3] = 0xffffffff;
  local_a8.Children.Elements[0] = 0xffffffff;
  local_a8.Children.Elements[1] = 0xffffffff;
  local_a8.Level = local_f8.Level + 1;
  local_a8.CellID = 0xffffffff;
  local_a8.Children.Elements[6] = 0xffffffff;
  local_a8.Children.Elements[7] = 0xffffffff;
  local_a8.Children.Elements[4] = 0xffffffff;
  local_a8.Children.Elements[5] = 0xffffffff;
  local_a8.Index.field0_0x0._s_0.Y = (uVar15 >> 1 & 1) + local_f8.Index.field0_0x0._s_0.Y * 2;
  local_a8.Index.field0_0x0._s_0.X = (uVar15 & 1) + local_f8.Index.field0_0x0._s_0.X * 2;
  local_a8.Index.field0_0x0._s_0.Z = (uVar15 >> 2) + local_f8.Index.field0_0x0._s_0.Z * 2;
  if ((this->MaxTreeDepth < (int)(uint)(byte)(local_f8.Level + 1)) ||
     (bVar7 = CanFit(this,&local_a8,param_2), !bVar7)) goto LAB_14360cd59;
  uVar3 = CONCAT44(local_a8.Children.Elements[0],local_a8.Index.field0_0x0._s_0.Z);
  uVar4._4_4_ = local_a8.Children.Elements[2];
  uVar4._0_4_ = local_a8.Children.Elements[1];
  uVar13 = local_f8._0_8_ & 0xffffffff;
  uVar5._4_4_ = local_a8.Children.Elements[4];
  uVar5._0_4_ = local_a8.Children.Elements[3];
  uVar6._4_4_ = local_a8.Children.Elements[6];
  uVar6._0_4_ = local_a8.Children.Elements[5];
  local_f8.Children.Elements[7] = 0xffffffff;
  local_f8.CellID = local_a8.CellID;
  local_f8.Level = local_a8.Level;
  local_f8._5_3_ = local_a8._5_3_;
  local_f8.Index.field0_0x0._s_0.X = (int)local_a8.Index.field0_0x0._0_8_;
  local_f8.Index.field0_0x0._s_0.Y = (int)((ulonglong)local_a8.Index.field0_0x0._0_8_ >> 0x20);
  local_f8.Index.field0_0x0._s_0.Z = local_a8.Index.field0_0x0._s_0.Z;
  local_f8.Children.Elements[0] = local_a8.Children.Elements[0];
  lVar2 = *(longlong *)((this->Cells).Blocks.AllocatorInstance.Data + (uVar13 >> 9) * 8);
  local_f8.Children.Elements._4_8_ = uVar4;
  local_f8.Children.Elements._12_8_ = uVar5;
  local_f8.Children.Elements._20_8_ = uVar6;
  uVar11 = FRefCountVector::Allocate(&this->CellRefCounts);
  uVar9 = (this->Cells).CurBlock;
  uVar8 = (this->Cells).CurBlockUsed;
  uVar17 = uVar9 * 0x200 + uVar8;
  local_f8.CellID = uVar11;
  if (uVar11 == uVar17) {
    if (uVar8 == 0x200) {
      if (uVar9 == (this->Cells).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock(&this->Cells);
      }
      (this->Cells).CurBlock = (this->Cells).CurBlock + 1;
      uVar8 = 0;
      uVar9 = (this->Cells).CurBlock;
      (this->Cells).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar11 <= uVar17) {
      lVar19 = (ulonglong)(uVar11 & 0x1ff) * 0x34;
      lVar18 = *(longlong *)
                ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      *(undefined8 *)(lVar18 + lVar19) = local_f8._0_8_;
      ((undefined8 *)(lVar18 + lVar19))[1] =
           CONCAT44(local_f8.Index.field0_0x0._s_0.Y,local_f8.Index.field0_0x0._s_0.X);
      puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar19);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar12 = (uint *)(lVar18 + 0x20 + lVar19);
      *(undefined8 *)puVar12 = uVar5;
      *(undefined8 *)(puVar12 + 2) = uVar6;
      *(undefined4 *)(lVar18 + 0x30 + lVar19) = 0xffffffff;
      goto LAB_14360ccf9;
    }
    TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Resize(&this->Cells,uVar11);
    uVar8 = (this->Cells).CurBlockUsed;
    if (uVar8 == 0x200) {
      if ((this->Cells).CurBlock == (this->Cells).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::AddAllocatedBlock(&this->Cells);
      }
      (this->Cells).CurBlock = (this->Cells).CurBlock + 1;
      (this->Cells).CurBlockUsed = 0;
      uVar8 = 0;
    }
    uVar9 = (this->Cells).CurBlock;
  }
  lVar19 = (longlong)(int)uVar8 * 0x34;
  lVar18 = *(longlong *)((this->Cells).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  *(undefined8 *)(lVar18 + lVar19) = local_f8._0_8_;
  ((undefined8 *)(lVar18 + lVar19))[1] =
       CONCAT44(local_f8.Index.field0_0x0._s_0.Y,local_f8.Index.field0_0x0._s_0.X);
  puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar19);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar12 = (uint *)(lVar18 + 0x20 + lVar19);
  *(undefined8 *)puVar12 = uVar5;
  *(undefined8 *)(puVar12 + 2) = uVar6;
  *(undefined4 *)(lVar18 + 0x30 + lVar19) = 0xffffffff;
  puVar12 = &(this->Cells).CurBlockUsed;
  *puVar12 = *puVar12 + 1;
LAB_14360ccf9:
  TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&local_f8.CellID,param_1);
  FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
  FSmallListSet::AllocateAt(&this->CellObjectLists,uVar11);
  FSmallListSet::Insert(&this->CellObjectLists,uVar11,param_1);
  *(uint *)((ulonglong)(uVar16 & 0x1ff) * 0x34 + lVar2 + 0x14 + (ulonglong)uVar15 * 4) = uVar11;
  return;
}

// Insert_NewChildCell @ 14360cdd0

void __thiscall
UE::Geometry::FSparseDynamicOctree3::Insert_NewChildCell
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2,int param_3,
          FSparseOctreeCell *param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  
  lVar1 = *(longlong *)
           ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_3 >> 9) * 8);
  uVar6 = FRefCountVector::Allocate(&this->CellRefCounts);
  uVar7 = (this->Cells).CurBlock * 0x200 + (this->Cells).CurBlockUsed;
  param_4->CellID = uVar6;
  if (uVar6 != uVar7) {
    if (uVar6 <= uVar7) {
      uVar2 = *(undefined8 *)&(param_4->Index).field0_0x0;
      uVar3 = *(undefined8 *)((longlong)&(param_4->Index).field0_0x0 + 8);
      uVar4 = *(undefined8 *)((param_4->Children).Elements + 1);
      uVar7 = (param_4->Children).Elements[7];
      puVar8 = (undefined8 *)
               (*(longlong *)
                 ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar6 >> 9) * 8) +
               (ulonglong)(uVar6 & 0x1ff) * 0x34);
      *puVar8 = *(undefined8 *)param_4;
      puVar8[1] = uVar2;
      uVar2 = *(undefined8 *)((param_4->Children).Elements + 3);
      uVar5 = *(undefined8 *)((param_4->Children).Elements + 5);
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      puVar8[4] = uVar2;
      puVar8[5] = uVar5;
      *(uint *)(puVar8 + 6) = uVar7;
      goto LAB_14360ce81;
    }
    TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Resize(&this->Cells,uVar6);
  }
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Add(&this->Cells,param_4);
LAB_14360ce81:
  TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&param_4->CellID,param_1);
  FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
  FSmallListSet::AllocateAt(&this->CellObjectLists,uVar6);
  FSmallListSet::Insert(&this->CellObjectLists,uVar6,param_1);
  *(uint *)((ulonglong)(param_3 & 0x1ff) * 0x34 + lVar1 + 0x14 + (ulonglong)(uint)param_5 * 4) =
       uVar6;
  return;
}

// Insert_NewRoot @ 14360cef0

void __thiscall
UE::Geometry::FSparseDynamicOctree3::Insert_NewRoot
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2,
          FSparseOctreeCell *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = FRefCountVector::Allocate(&this->CellRefCounts);
  param_3->CellID = uVar1;
  TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::InsertAt(&this->Cells,param_3,uVar1);
  TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&param_3->CellID,param_1);
  FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
  puVar2 = TSparseGrid3<unsigned_int>::Get(&this->RootCells,&param_3->Index,true);
  *puVar2 = param_3->CellID;
  FSmallListSet::AllocateAt(&this->CellObjectLists,param_3->CellID);
  FSmallListSet::Insert(&this->CellObjectLists,param_3->CellID,param_1);
  return;
}

// Insert_Spill @ 14360cf80

void __thiscall
UE::Geometry::FSparseDynamicOctree3::Insert_Spill
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->SpillObjectSet,local_res8,(bool *)local_res10);
  TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&SpillCellID,param_1);
  FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
  return;
}

// Insert_ToCell @ 14360cff0

void __thiscall
UE::Geometry::FSparseDynamicOctree3::Insert_ToCell
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2,
          FSparseOctreeCell *param_3)

{
  TDynamicVector<unsigned_int,512>::InsertAt(&this->ObjectIDToCellMap,&param_3->CellID,param_1);
  FDynamicFlagArray::Set(&this->ValidObjectIDs,param_1,true);
  FSmallListSet::Insert(&this->CellObjectLists,param_3->CellID,param_1);
  return;
}

// ParallelCollectObjectsInOverlappingCells @ 1436122d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::ParallelCollectObjectsInOverlappingCells
          (FSparseDynamicOctree3 *this,
          TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
          *param_1,TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)>
                   *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar1;
  undefined1 auStackY_c8 [32];
  <lambda_1> local_88;
  TArrayView<std::nullptr_t,int> local_80;
  code *local_70;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  **local_68;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_60;
  FSparseDynamicOctree3 *local_58;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *local_50;
  _RTL_CRITICAL_SECTION *local_48;
  TArray<int,TSizedDefaultAllocator<32>_> *local_40;
  _RTL_CRITICAL_SECTION local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  InitializeCriticalSectionAndSpinCount(&local_38,4000);
  local_48 = &local_38;
  local_80.DataPtr = (void **)0x0;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelCollectObjectsInOverlappingCells'::__l2::<lambda_1>,void,int>
             ::Call;
  local_68 = &local_60;
  local_80.ArrayNum = 0;
  local_60 = param_1;
  local_58 = this;
  local_50 = param_2;
  local_40 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_1->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_70,
             local_88,None,&local_80);
  DeleteCriticalSection(&local_38);
  FVar1 = (param_1->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  return;
}

// ParallelOverlapAnyQuery @ 143612e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int __thiscall
UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery
          (FSparseDynamicOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *param_3)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  TAxisAlignedBox3<double> *pTVar6;
  FSparseDynamicOctree3 *pFVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  undefined1 auStackY_288 [32];
  <lambda_1> local_248 [4];
  int local_244;
  int local_240 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_238;
  int iStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  int local_218;
  int iStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  int local_208;
  TAxisAlignedBox3<double> *local_200;
  TAxisAlignedBox3<double> *local_1f8;
  FSparseDynamicOctree3 *local_1f0;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *local_1e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d8;
  undefined8 uStack_1b8;
  code *local_1b0;
  TAxisAlignedBox3<double> **local_1a8;
  TArrayView<std::nullptr_t,int> local_1a0;
  code *local_190;
  int **local_188;
  int *local_180;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  *local_178;
  FSparseDynamicOctree3 *local_170;
  TAxisAlignedBox3<double> *local_168;
  TFunctionRef<bool___cdecl(int)> *local_160;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *local_158;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_288;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar11 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  pTVar2 = &this->SpillObjectSet;
  iStack_230 = 0;
  local_218 = 0;
  uStack_22c = 1;
  iStack_21c = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_230;
      local_218 = local_218 + 0x20;
      iStack_230 = iStack_230 + 1;
      iStack_21c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_230) goto LAB_143612edd;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_22c = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_22c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_208 = (int)lVar12;
    iStack_21c = local_218 + -1 + local_208;
    if (iVar11 < iStack_21c) {
      iStack_21c = iVar11;
    }
  }
LAB_143612edd:
  uVar15 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_210 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar14 = uVar15 & 0xffffffe0;
  uStack_220 = 0xffffffff;
  TStack_1d8._padding_ = CONCAT44(uStack_22c,iStack_230);
  TStack_1d8.CurrentBitIndex = iStack_21c;
  TStack_1d8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_1d8._28_4_ = iStack_21c;
  TStack_1d8.BaseBitIndex = local_218;
  uStack_1b8 = CONCAT44(uStack_20c,iStack_210);
  local_238 = pTVar2;
  local_228 = puVar1;
  iStack_214 = iStack_21c;
  local_200 = param_1;
  local_1f0 = this;
  local_1e8 = param_3;
  local_1e0 = pTVar2;
  TStack_1d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar11 = (*pcVar5)();
    return iVar11;
  }
  uVar4 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_143612ff0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_143612ff0:
  while( true ) {
    pTVar8 = local_1e0;
    if (*(int *)&(local_1e0->Elements).field_0x8 - *(int *)&(local_1e0->Elements).field_0x34 !=
        (int)uStack_1b8) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
    }
    pFVar7 = local_1f0;
    pTVar6 = local_200;
    if (((TStack_1d8.CurrentBitIndex == uVar15) &&
        (TStack_1d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    iVar11 = *(int *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_1d8.CurrentBitIndex * 0xc);
    local_240[0] = iVar11;
    cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_240);
    if (cVar10 != '\0') {
      return iVar11;
    }
    TStack_1d8.UnvisitedBitMask = TStack_1d8.UnvisitedBitMask & ~TStack_1d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d8);
  }
  local_1a8 = &local_1f8;
  local_1f8 = local_200;
  local_1b0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  InitializeQueryQueue
            (local_1f0,&local_150,local_200,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_1b0,false);
  local_180 = &local_244;
  local_244 = -1;
  local_178 = &local_150;
  local_1a0.DataPtr = (void **)0x0;
  local_158 = local_1e8;
  local_190 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelOverlapAnyQuery'::__l2::<lambda_1>,void,int>
              ::Call;
  local_188 = &local_180;
  local_1a0.ArrayNum = 0;
  local_170 = pFVar7;
  local_168 = pTVar6;
  local_160 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_150.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_190,
             local_248[0],None,&local_1a0);
  iVar11 = local_244;
  if (local_150.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
  }
  return iVar11;
}

// ParallelRangeQuery @ 143613150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery
          (FSparseDynamicOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TAxisAlignedBox3<double> *pTVar7;
  FSparseDynamicOctree3 *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> _Dst;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> _Src;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_368 [32];
  undefined1 local_318 [4];
  undefined4 local_314;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_310;
  int iStack_308;
  uint uStack_304;
  undefined1 *local_300;
  undefined4 uStack_2f8;
  int iStack_2f4;
  int local_2f0;
  int iStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  int local_2dc;
  TAxisAlignedBox3<double> *local_2d8;
  TAxisAlignedBox3<double> *local_2d0;
  FSparseDynamicOctree3 *local_2c8;
  TAxisAlignedBox3<double> *local_2c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 uStack_290;
  code *local_288;
  TAxisAlignedBox3<double> **local_280;
  code *local_278;
  TAxisAlignedBox3<double> **local_270;
  undefined1 local_268 [256];
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> local_168;
  int local_160;
  int local_15c;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_158;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar10 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  pTVar2 = &this->SpillObjectSet;
  iStack_308 = 0;
  local_2f0 = 0;
  uStack_304 = 1;
  iStack_2f4 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_308;
      local_2f0 = local_2f0 + 0x20;
      iStack_308 = iStack_308 + 1;
      iStack_2f4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_308) goto LAB_14361321d;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_304 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_304 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2e0 = (int)lVar11;
    iStack_2f4 = local_2e0 + -1 + local_2f0;
    if (iVar10 < iStack_2f4) {
      iStack_2f4 = iVar10;
    }
  }
LAB_14361321d:
  uVar13 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_2e8 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar17 = uVar13 & 0xffffffe0;
  uStack_2f8 = 0xffffffff;
  TStack_2b0._padding_ = CONCAT44(uStack_304,iStack_308);
  TStack_2b0.CurrentBitIndex = iStack_2f4;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_2b0._28_4_ = iStack_2f4;
  TStack_2b0.BaseBitIndex = local_2f0;
  uStack_290 = CONCAT44(uStack_2e4,iStack_2e8);
  local_310 = pTVar2;
  local_300 = puVar1;
  iStack_2ec = iStack_2f4;
  local_2d8 = param_1;
  local_2c8 = this;
  local_2b8 = pTVar2;
  TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143613330;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2dc = (int)lVar11;
    uVar13 = local_2dc + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_143613330:
  while( true ) {
    pTVar8 = local_2b8;
    if (*(int *)&(local_2b8->Elements).field_0x8 - *(int *)&(local_2b8->Elements).field_0x34 !=
        (int)uStack_290) {
      local_318[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_318);
    }
    this_00 = local_2c8;
    pTVar7 = local_2d8;
    if (((TStack_2b0.CurrentBitIndex == uVar13) &&
        (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    piVar14 = &param_2->ArrayMax;
    local_314 = *(undefined4 *)
                 (*(longlong *)&pTVar8->Elements + (longlong)TStack_2b0.CurrentBitIndex * 0xc);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_314) &&
        ((FScriptContainerElement *)&local_314 < pFVar5 + (longlong)*piVar14 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == *piVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_2->AllocatorInstance,piVar14);
    }
    param_2->ArrayNum = iVar10 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_314;
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  local_280 = &local_2d0;
  local_2d0 = local_2d8;
  local_288 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  InitializeQueryQueue
            (local_2c8,&local_158,local_2d8,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_288,false);
  local_270 = &local_2c0;
  local_2c0 = pTVar7;
  local_278 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  local_168 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0;
  local_160 = local_158.ArrayNum;
  _Src = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_158;
  if (local_158.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    _Src = local_158.AllocatorInstance.SecondaryData;
  }
  if (local_158.ArrayNum == 0) {
    local_15c = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
              (8,8,local_158.ArrayNum,0,
               (ForElementType<UE::Geometry::FSparseOctreeCell_const_*> *)local_268,
               local_158.ArrayNum,&local_15c);
    _Dst = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)local_268;
    if (local_168 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      _Dst = local_168;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)local_158.ArrayNum << 3);
  }
  ParallelCollectObjectsInOverlappingCells
            (this_00,(TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
                      *)local_268,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_278,param_2);
  if (local_158.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FMemory::Free((void *)local_158.AllocatorInstance.SecondaryData);
  }
  return;
}

// ParallelRangeQuery @ 143613570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery
          (FSparseDynamicOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *pTVar7;
  FSparseDynamicOctree3 *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> _Dst;
  int iVar12;
  uint uVar13;
  int *piVar14;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> _Src;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStackY_358 [32];
  undefined1 local_308 [4];
  undefined4 local_304;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_300;
  int iStack_2f8;
  uint uStack_2f4;
  undefined1 *local_2f0;
  undefined4 uStack_2e8;
  int iStack_2e4;
  int local_2e0;
  int iStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  int local_2d0;
  int local_2cc;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *local_2c8;
  TAxisAlignedBox3<double> *local_2c0;
  FSparseDynamicOctree3 *local_2b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2a8;
  undefined8 uStack_288;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> local_280;
  TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> local_270;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_260;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_358;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar10 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  pTVar2 = &this->SpillObjectSet;
  iStack_2f8 = 0;
  local_2e0 = 0;
  uStack_2f4 = 1;
  iStack_2e4 = 0;
  if (iVar10 != 0) {
    puVar16 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_2f8;
      local_2e0 = local_2e0 + 0x20;
      iStack_2f8 = iStack_2f8 + 1;
      iStack_2e4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2f8) goto LAB_14361363d;
      uVar13 = puVar16[lVar11 + 1];
    }
    uStack_2f4 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_2f4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2d0 = (int)lVar11;
    iStack_2e4 = local_2e0 + -1 + local_2d0;
    if (iVar10 < iStack_2e4) {
      iStack_2e4 = iVar10;
    }
  }
LAB_14361363d:
  uVar13 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_2d8 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar17 = uVar13 & 0xffffffe0;
  uStack_2e8 = 0xffffffff;
  TStack_2a8._padding_ = CONCAT44(uStack_2f4,iStack_2f8);
  TStack_2a8.CurrentBitIndex = iStack_2e4;
  TStack_2a8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_2a8._28_4_ = iStack_2e4;
  TStack_2a8.BaseBitIndex = local_2e0;
  uStack_288 = CONCAT44(uStack_2d4,iStack_2d8);
  local_300 = pTVar2;
  local_2f0 = puVar1;
  iStack_2dc = iStack_2e4;
  local_2c8 = param_2;
  local_2c0 = param_1;
  local_2b8 = this;
  local_2b0 = pTVar2;
  TStack_2a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar10 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar13 != uVar4) {
    puVar15 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_143613750;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_2cc = (int)lVar11;
    uVar13 = local_2cc + -1 + uVar17;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_143613750:
  while( true ) {
    pTVar8 = local_2b0;
    if (*(int *)&(local_2b0->Elements).field_0x8 - *(int *)&(local_2b0->Elements).field_0x34 !=
        (int)uStack_288) {
      local_308[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_308);
    }
    this_00 = local_2b8;
    pTVar7 = local_2c8;
    if (((TStack_2a8.CurrentBitIndex == uVar13) &&
        (TStack_2a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    piVar14 = &param_3->ArrayMax;
    local_304 = *(undefined4 *)
                 (*(longlong *)&pTVar8->Elements + (longlong)TStack_2a8.CurrentBitIndex * 0xc);
    pFVar5 = (param_3->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_304) &&
        ((FScriptContainerElement *)&local_304 < pFVar5 + (longlong)*piVar14 * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = param_3->ArrayNum;
    if (iVar10 == *piVar14) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_3->AllocatorInstance,piVar14);
    }
    param_3->ArrayNum = iVar10 + 1;
    *(undefined4 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_304;
    TStack_2a8.UnvisitedBitMask = TStack_2a8.UnvisitedBitMask & ~TStack_2a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2a8);
  }
  local_280._0_8_ = *(undefined8 *)local_2c8;
  local_280._8_8_ = *(undefined8 *)&local_2c8->field_0x8;
  InitializeQueryQueue(local_2b8,&local_150,local_2c0,&local_280,true);
  local_270._0_8_ = *(undefined8 *)pTVar7;
  local_270._8_8_ = *(undefined8 *)&pTVar7->field_0x8;
  local_260.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0;
  local_260.ArrayNum = local_150.ArrayNum;
  _Src = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_150;
  if (local_150.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    _Src = local_150.AllocatorInstance.SecondaryData;
  }
  if (local_150.ArrayNum == 0) {
    local_260.ArrayMax = 0x20;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
              (8,8,local_150.ArrayNum,0,&local_260.AllocatorInstance,local_150.ArrayNum,
               &local_260.ArrayMax);
    _Dst = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_260;
    if (local_260.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      _Dst = local_260.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)local_150.ArrayNum << 3);
  }
  ParallelCollectObjectsInOverlappingCells(this_00,&local_260,&local_270,param_3);
  if (local_150.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FMemory::Free((void *)local_150.AllocatorInstance.SecondaryData);
  }
  return;
}

// PointToIndex @ 143614190

FVector3i * __thiscall
UE::Geometry::FSparseDynamicOctree3::PointToIndex
          (FSparseDynamicOctree3 *this,FVector3i *__return_storage_ptr__,uint param_1,
          TVector<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  uint in_EAX;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  dVar8 = __real_c1e0000000000000;
  dVar7 = __real_41dfffffffc00000;
  uVar11 = 1L << ((byte)param_1 & 0x1f);
  if ((longlong)uVar11 < 0) {
    in_EAX = (uint)(uVar11 >> 1) | (uint)uVar11 & 1;
  }
  dVar4 = __real_3ff0000000000000 / (this->RootDimension / (double)uVar11);
  dVar6 = dVar4 * (param_2->field0_0x0)._s_0.X;
  lVar10 = (longlong)dVar6;
  if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar6)) {
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar9 = movmskpd(in_EAX,auVar5);
    dVar6 = (double)(longlong)(lVar10 - (ulonglong)(uVar9 & 1));
  }
  if (__real_41dfffffffc00000 <= dVar6) {
    dVar6 = __real_41dfffffffc00000;
  }
  dVar2 = dVar4 * (param_2->field0_0x0)._s_0.Y;
  if (dVar6 <= __real_c1e0000000000000) {
    dVar6 = __real_c1e0000000000000;
  }
  lVar10 = (longlong)dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (int)dVar6;
  if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar9 = movmskpd((int)dVar6,auVar1);
    dVar2 = (double)(longlong)(lVar10 - (ulonglong)(uVar9 & 1));
  }
  dVar4 = dVar4 * (param_2->field0_0x0)._s_0.Z;
  if (dVar7 <= dVar2) {
    dVar2 = dVar7;
  }
  if (dVar2 <= dVar8) {
    dVar2 = dVar8;
  }
  lVar10 = (longlong)dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (int)dVar2;
  if ((lVar10 != -0x8000000000000000) && ((double)lVar10 != dVar4)) {
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uVar9 = movmskpd((int)dVar2,auVar3);
    dVar4 = (double)(longlong)(lVar10 - (ulonglong)(uVar9 & 1));
  }
  if (dVar7 <= dVar4) {
    dVar4 = dVar7;
  }
  if (dVar4 <= dVar8) {
    dVar4 = dVar8;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (int)dVar4;
  return __return_storage_ptr__;
}

// RangeQuery @ 1436148a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::RangeQuery
          (FSparseDynamicOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  TAxisAlignedBox3<double> *pTVar9;
  FSparseDynamicOctree3 *pFVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  int iVar13;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar14;
  longlong lVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined1 *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_2c8 [32];
  undefined1 local_278 [4];
  undefined4 local_274;
  longlong local_270;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_268;
  int iStack_260;
  uint uStack_25c;
  undefined1 *local_258;
  undefined4 uStack_250;
  int iStack_24c;
  int local_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  int local_238;
  int local_234;
  TAxisAlignedBox3<double> *local_230;
  TAxisAlignedBox3<double> *local_228;
  FSparseDynamicOctree3 *local_220;
  <lambda_1> local_218;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  code *local_1e0;
  TAxisAlignedBox3<double> **local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_248 = 0;
  uStack_25c = 1;
  pTVar1 = &this->SpillObjectSet;
  iStack_260 = 0;
  puVar2 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar13 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  iStack_24c = 0;
  if (iVar13 != 0) {
    puVar17 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar19 = *puVar17;
    while (uVar19 == 0) {
      lVar15 = (longlong)iStack_260;
      local_248 = local_248 + 0x20;
      iStack_260 = iStack_260 + 1;
      iStack_24c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_260) goto LAB_14361497d;
      uVar19 = puVar17[lVar15 + 1];
    }
    uStack_25c = -uVar19 & uVar19;
    uVar3 = (ulonglong)uStack_25c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_238 = (int)lVar15;
    iStack_24c = local_248 + -1 + local_238;
    if (iVar13 < iStack_24c) {
      iStack_24c = iVar13;
    }
  }
LAB_14361497d:
  iStack_240 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar19 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  TStack_208._padding_ = CONCAT44(uStack_25c,iStack_260);
  uVar18 = uVar19 & 0xffffffe0;
  uStack_250 = 0xffffffff;
  TStack_208.CurrentBitIndex = iStack_24c;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_208._28_4_ = iStack_24c;
  TStack_208.BaseBitIndex = local_248;
  uStack_1e8 = CONCAT44(uStack_23c,iStack_240);
  local_268 = pTVar1;
  local_258 = puVar2;
  iStack_244 = iStack_24c;
  local_230 = param_1;
  local_220 = this;
  local_210 = pTVar1;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar19 < 0) || (iVar13 < (int)uVar19)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar19 != uVar4) {
    puVar21 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_143614a90;
      uVar19 = *(uint *)(puVar21 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_234 = (int)lVar15;
    uVar19 = local_234 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
    }
  }
LAB_143614a90:
  while( true ) {
    pTVar11 = local_210;
    if (*(int *)&(local_210->Elements).field_0x8 - *(int *)&(local_210->Elements).field_0x34 !=
        (int)uStack_1e8) {
      local_278[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_278);
    }
    pFVar10 = local_220;
    pTVar9 = local_230;
    if (((TStack_208.CurrentBitIndex == uVar19) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar11 == pTVar1)
       ) break;
    piVar20 = &param_2->ArrayMax;
    local_274 = *(undefined4 *)
                 (*(longlong *)&pTVar11->Elements + (longlong)TStack_208.CurrentBitIndex * 0xc);
    pFVar5 = (param_2->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_274) &&
        ((FScriptContainerElement *)&local_274 < pFVar5 + (longlong)*piVar20 * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar13 = param_2->ArrayNum;
    if (iVar13 == *piVar20) {
      iVar13 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&param_2->AllocatorInstance,piVar20);
    }
    param_2->ArrayNum = iVar13 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_274;
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  local_1d8 = &local_228;
  local_228 = local_230;
  local_1e0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  InitializeQueryQueue
            (local_220,&local_198,local_230,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_1e0,false);
  if (0 < local_198.ArrayNum) {
    if ((local_198.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    do {
      iVar13 = local_198.ArrayNum + -1;
      FVar14 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
      if (local_198.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        FVar14 = local_198.AllocatorInstance.SecondaryData;
      }
      piVar20 = *(int **)((longlong)FVar14 + (longlong)iVar13 * 8);
      FVar14 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
      if (local_198.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        FVar14 = local_198.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)FVar14 + (longlong)iVar13 * 8);
      iVar13 = (local_198.ArrayNum - iVar13) + -1;
      if (iVar13 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar13 << 3);
      }
      local_198.ArrayNum = local_198.ArrayNum + -1;
      local_218.ObjectIDs = param_2;
      FSmallListSet::Enumerate<_UE::Geometry::FSparseDynamicOctree3::RangeQuery_::__l8::<lambda_1>_>
                (&pFVar10->CellObjectLists,*piVar20,&local_218);
      puVar17 = (uint *)(piVar20 + 5);
      lVar15 = 8;
      do {
        uVar19 = *puVar17;
        if (uVar19 != 0xffffffff) {
          local_270 = *(longlong *)
                       ((pFVar10->Cells).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 0x34;
          local_1b8 = (pTVar9->Min).field0_0x0._s_0.Z;
          dStack_1b0 = (pTVar9->Max).field0_0x0._s_0.X;
          local_1c8 = (pTVar9->Min).field0_0x0._s_0.X;
          dStack_1c0 = (pTVar9->Min).field0_0x0._s_0.Y;
          local_1a8 = (pTVar9->Max).field0_0x0._s_0.Y;
          dStack_1a0 = (pTVar9->Max).field0_0x0._s_0.Z;
          dVar23 = pFVar10->RootDimension /
                   (double)(ulonglong)(1L << (*(byte *)(local_270 + 4) & 0x1f));
          dVar22 = dVar23 * pFVar10->MaxExpandFactor;
          dVar24 = (double)*(int *)(local_270 + 0xc) * dVar23 - dVar22;
          dVar7 = (double)*(int *)(local_270 + 8) * dVar23 - dVar22;
          dVar8 = (double)*(int *)(local_270 + 0x10) * dVar23 - dVar22;
          dVar23 = dVar22 + dVar22 + dVar23;
          if (((((dVar7 < dStack_1b0) && (local_1c8 < dVar23 + dVar7)) && (dVar24 < local_1a8)) &&
              ((dStack_1c0 < dVar23 + dVar24 && (dVar8 < dStack_1a0)))) &&
             (local_1b8 < dVar23 + dVar8)) {
            FVar14 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
            if (local_198.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar14 = local_198.AllocatorInstance.SecondaryData;
            }
            if ((ulonglong)FVar14 <= &local_270) {
              FVar14 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
              if (local_198.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
                FVar14 = local_198.AllocatorInstance.SecondaryData;
              }
              if ((&local_270 < (longlong *)((longlong)FVar14 + (longlong)local_198.ArrayMax * 8))
                 && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar13 = local_198.ArrayNum;
            if (local_198.ArrayNum == local_198.ArrayMax) {
              iVar13 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                                 (0x808,&local_198.AllocatorInstance,&local_198.ArrayMax);
            }
            local_198.ArrayNum = iVar13 + 1;
            FVar14 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
            if (local_198.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar14 = local_198.AllocatorInstance.SecondaryData;
            }
            *(longlong *)((longlong)FVar14 + (longlong)iVar13 * 8) = local_270;
          }
        }
        puVar17 = puVar17 + 1;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    } while (0 < local_198.ArrayNum);
  }
  if (local_198.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
    FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
  }
  return;
}

// RangeQuery @ 143614f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicOctree3::RangeQuery
          (FSparseDynamicOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TFunctionRef<void___cdecl(int)> *param_2)

{
  undefined1 *puVar1;
  void *_Dst;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  ForElementType<UE::Geometry::FSparseOctreeCell_const_*> FVar17;
  uint uVar18;
  TAxisAlignedBox3<double> *pTVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_2d8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  undefined4 local_278 [2];
  undefined4 local_270 [2];
  undefined4 local_268 [2];
  undefined4 local_260 [2];
  TAxisAlignedBox3<double> *local_258;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_250;
  int iStack_248;
  uint uStack_244;
  undefined1 *local_240;
  undefined4 uStack_238;
  int iStack_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  int local_220;
  int local_21c;
  TAxisAlignedBox3<double> *local_218;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  code *local_1e0;
  TAxisAlignedBox3<double> **local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TArray<UE::Geometry::FSparseOctreeCell_const_*,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  local_230 = 0;
  local_250 = &this->SpillObjectSet;
  iStack_248 = 0;
  puVar1 = &(this->SpillObjectSet).Elements.field_0x10;
  iVar2 = *(int *)&(this->SpillObjectSet).Elements.field_0x28;
  uStack_244 = 1;
  iStack_234 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar15 = *puVar14;
    while (uVar15 == 0) {
      lVar9 = (longlong)iStack_248;
      local_230 = local_230 + 0x20;
      iStack_248 = iStack_248 + 1;
      iStack_234 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_248) goto LAB_14361504f;
      uVar15 = puVar14[lVar9 + 1];
    }
    uStack_244 = -uVar15 & uVar15;
    uVar13 = (ulonglong)uStack_244 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_220 = (int)lVar9;
    iStack_234 = local_220 + -1 + local_230;
    if (iVar2 < iStack_234) {
      iStack_234 = iVar2;
    }
  }
LAB_14361504f:
  iStack_228 = *(int *)&(this->SpillObjectSet).Elements.field_0x8 -
               *(int *)&(this->SpillObjectSet).Elements.field_0x34;
  uVar15 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  TStack_208._padding_ = CONCAT44(uStack_244,iStack_248);
  uVar18 = uVar15 & 0xffffffe0;
  uStack_238 = 0xffffffff;
  TStack_208.CurrentBitIndex = iStack_234;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_208._28_4_ = iStack_234;
  TStack_208.BaseBitIndex = local_230;
  uStack_1e8 = CONCAT44(uStack_224,iStack_228);
  local_258 = param_1;
  local_240 = puVar1;
  iStack_22c = iStack_234;
  local_210 = local_250;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = *(uint *)&(this->SpillObjectSet).Elements.field_0x28;
  if (uVar15 != uVar12) {
    puVar16 = *(undefined1 **)&(this->SpillObjectSet).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      lVar9 = (longlong)iVar11;
      uVar18 = uVar18 + 0x20;
      iVar11 = iVar11 + 1;
      uVar15 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14361515f;
      uVar15 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_21c = (int)lVar9;
    uVar15 = local_21c + -1 + uVar18;
    if ((int)uVar12 < (int)uVar15) {
      uVar15 = uVar12;
    }
  }
LAB_14361515f:
  while( true ) {
    pTVar6 = local_210;
    if (*(int *)&(local_210->Elements).field_0x8 - *(int *)&(local_210->Elements).field_0x34 !=
        (int)uStack_1e8) {
      local_288[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    pTVar19 = local_258;
    if (((TStack_208.CurrentBitIndex == uVar15) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar6 == &this->SpillObjectSet)) break;
    local_278[0] = *(undefined4 *)
                    (*(longlong *)&pTVar6->Elements + (longlong)TStack_208.CurrentBitIndex * 0xc);
    (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_278);
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  local_1d8 = &local_218;
  local_218 = local_258;
  local_1e0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FSparseDynamicOctree3::InitializeQueryQueue'::__l2::<lambda_1>,bool,UE::Geometry::TAxisAlignedBox3<double>_const_&>
              ::Call;
  InitializeQueryQueue
            (this,&local_198,local_258,
             (TFunctionRef<bool___cdecl(UE::Geometry::TAxisAlignedBox3<double>_const_&)> *)
             &local_1e0,false);
  FVar17 = local_198.AllocatorInstance.SecondaryData;
  iVar11 = local_198.ArrayNum;
  iVar2 = local_198.ArrayNum;
  do {
    local_198.ArrayNum = iVar11;
    if (local_198.ArrayNum < 1) {
      if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
        local_198.ArrayNum = iVar2;
        FMemory::Free((void *)FVar17);
      }
      return;
    }
    iVar11 = local_198.ArrayNum + -1;
    FVar8 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
    if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar8 = FVar17;
    }
    puVar14 = *(uint **)((longlong)FVar8 + (longlong)iVar11 * 8);
    FVar8 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
    if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
      FVar8 = FVar17;
    }
    _Dst = (void *)((longlong)FVar8 + (longlong)iVar11 * 8);
    iVar11 = (local_198.ArrayNum - iVar11) + -1;
    if (iVar11 != 0) {
      local_198.ArrayNum = iVar2;
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar11 << 3);
      FVar17 = local_198.AllocatorInstance.SecondaryData;
    }
    local_198.ArrayNum = local_198.ArrayNum + -1;
    uVar15 = *puVar14;
    uVar15 = *(uint *)(*(longlong *)
                        ((this->CellObjectLists).ListHeads.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if (uVar15 != 0xffffffff) {
      uVar18 = uVar15 + 1;
      uVar13 = (ulonglong)uVar18;
      iVar2 = *(int *)(*(longlong *)
                        ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
      if (iVar2 < 8) {
        uVar12 = uVar18;
        while ((int)uVar12 <= (int)(uVar15 + iVar2)) {
          local_270[0] = *(undefined4 *)
                          (*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar13 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_270);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar18 = uVar18 + 1;
          FVar17 = local_198.AllocatorInstance.SecondaryData;
        }
      }
      else {
        uVar12 = uVar18;
        while ((int)uVar12 <= (int)(uVar15 + 8)) {
          local_268[0] = *(undefined4 *)
                          (*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (uVar13 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
          (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_268);
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar18 = uVar18 + 1;
          FVar17 = local_198.AllocatorInstance.SecondaryData;
        }
        uVar15 = *(uint *)(*(longlong *)
                            ((this->CellObjectLists).ListBlocks.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar15 + 9 >> 9) * 8) + (ulonglong)(uVar15 + 9 & 0x1ff) * 4)
        ;
        pTVar19 = local_258;
        if (uVar15 != 0xffffffff) {
          pFVar10 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
          do {
            local_260[0] = *(undefined4 *)
                            (*(longlong *)(pFVar10 + (ulonglong)(uVar15 >> 9) * 8) +
                            (ulonglong)(uVar15 & 0x1ff) * 4);
            (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_260);
            pFVar10 = (this->CellObjectLists).LinkedListElements.Blocks.AllocatorInstance.Data;
            uVar15 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar15 + 1 >> 9) * 8) +
                              (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
            FVar17 = local_198.AllocatorInstance.SecondaryData;
            pTVar19 = local_258;
          } while (uVar15 != 0xffffffff);
        }
      }
    }
    puVar14 = puVar14 + 5;
    lVar9 = 8;
    iVar11 = local_198.ArrayNum;
    do {
      uVar15 = *puVar14;
      if (uVar15 != 0xffffffff) {
        local_280 = *(longlong *)
                     ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8) +
                    (ulonglong)(uVar15 & 0x1ff) * 0x34;
        local_1b8 = (pTVar19->Min).field0_0x0._s_0.Z;
        dStack_1b0 = (pTVar19->Max).field0_0x0._s_0.X;
        local_1c8 = (pTVar19->Min).field0_0x0._s_0.X;
        dStack_1c0 = (pTVar19->Min).field0_0x0._s_0.Y;
        local_1a8 = (pTVar19->Max).field0_0x0._s_0.Y;
        dStack_1a0 = (pTVar19->Max).field0_0x0._s_0.Z;
        dVar21 = this->RootDimension / (double)(ulonglong)(1L << (*(byte *)(local_280 + 4) & 0x1f));
        dVar20 = dVar21 * this->MaxExpandFactor;
        dVar22 = (double)*(int *)(local_280 + 0xc) * dVar21 - dVar20;
        dVar4 = (double)*(int *)(local_280 + 8) * dVar21 - dVar20;
        dVar5 = (double)*(int *)(local_280 + 0x10) * dVar21 - dVar20;
        dVar21 = dVar20 + dVar20 + dVar21;
        if (((dVar4 < dStack_1b0) && (local_1c8 < dVar21 + dVar4)) &&
           ((dVar22 < local_1a8 &&
            (((dStack_1c0 < dVar21 + dVar22 && (dVar5 < dStack_1a0)) && (local_1b8 < dVar21 + dVar5)
             ))))) {
          FVar8 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
          if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar8 = FVar17;
          }
          if ((ulonglong)FVar8 <= &local_280) {
            FVar8 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
            if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
              FVar8 = FVar17;
            }
            if ((&local_280 < (longlong *)((longlong)FVar8 + (longlong)local_198.ArrayMax * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), FVar17 = local_198.AllocatorInstance.SecondaryData,
               iVar11 = local_198.ArrayNum, bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (iVar11 == local_198.ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::FSparseOctreeCell_const_*>_>
                               (0x808,&local_198.AllocatorInstance,&local_198.ArrayMax);
            FVar17 = local_198.AllocatorInstance.SecondaryData;
          }
          local_198.ArrayNum = iVar11 + 1;
          FVar8 = (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)&local_198;
          if (FVar17 != (ForElementType<UE::Geometry::FSparseOctreeCell_const_*>)0x0) {
            FVar8 = FVar17;
          }
          *(longlong *)((longlong)FVar8 + (longlong)iVar11 * 8) = local_280;
          FVar17 = local_198.AllocatorInstance.SecondaryData;
          iVar11 = local_198.ArrayNum;
        }
      }
      puVar14 = puVar14 + 1;
      lVar9 = lVar9 + -1;
      iVar2 = local_198.ArrayNum;
    } while (lVar9 != 0);
  } while( true );
}

// ReinsertObject @ 1436167f0

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::ReinsertObject
          (FSparseDynamicOctree3 *this,int param_1,TAxisAlignedBox3<double> *param_2,uint param_3)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ForElementType<unsigned_int> FVar5;
  int local_res20 [2];
  
  if (param_3 == 0xffffffff) {
    bVar3 = ContainsObject(this,param_1);
    if (((!bVar3) || (param_1 < 0)) ||
       ((ulonglong)
        ((this->ObjectIDToCellMap).CurBlock * 0x200 + (this->ObjectIDToCellMap).CurBlockUsed) <=
        (ulonglong)(longlong)param_1)) goto LAB_143616964;
    param_3 = *(uint *)(*(longlong *)
                         ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
                         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
    if (param_3 == 0xfffffffe) goto LAB_1436168a9;
    if (param_3 == 0xffffffff) goto LAB_143616964;
    bVar3 = CanFit(this,(FSparseOctreeCell *)
                        ((ulonglong)(param_3 & 0x1ff) * 0x34 +
                        *(longlong *)
                         ((this->Cells).Blocks.AllocatorInstance.Data +
                         (ulonglong)(param_3 >> 9) * 8)),param_2);
    if (bVar3) {
      return false;
    }
LAB_1436168ca:
    *(undefined4 *)
     (*(longlong *)
       ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
       (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) = 0xffffffff;
    FSmallListSet::Remove(&this->CellObjectLists,param_3,param_1);
  }
  else {
    if (param_3 != 0xfffffffe) goto LAB_1436168ca;
LAB_1436168a9:
    local_res20[0] = param_1;
    if (*(int *)&(this->SpillObjectSet).Elements.field_0x8 !=
        *(int *)&(this->SpillObjectSet).Elements.field_0x34) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&this->SpillObjectSet,param_1,local_res20);
    }
  }
  if ((uint)param_1 < (this->ValidObjectIDs).MaxIndex) {
    if (((param_1 < 0) || ((this->ValidObjectIDs).BitArray.NumBits <= param_1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar5 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&this->ValidObjectIDs;
    }
    puVar1 = (uint *)((longlong)FVar5 +
                     (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
LAB_143616964:
  InsertObject(this,param_1,param_2);
  return true;
}

// RemoveObject @ 1436174f0

bool __thiscall
UE::Geometry::FSparseDynamicOctree3::RemoveObject(FSparseDynamicOctree3 *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  int local_res18 [2];
  
  bVar3 = ContainsObject(this,param_1);
  if (((bVar3) && (-1 < param_1)) &&
     ((ulonglong)(longlong)param_1 <
      (ulonglong)
      ((this->ObjectIDToCellMap).CurBlockUsed + (this->ObjectIDToCellMap).CurBlock * 0x200))) {
    iVar5 = *(int *)(*(longlong *)
                      ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
    if (iVar5 == -2) {
      local_res18[0] = param_1;
      if (*(int *)&(this->SpillObjectSet).Elements.field_0x8 ==
          *(int *)&(this->SpillObjectSet).Elements.field_0x34) {
        iVar5 = 0;
      }
      else {
        iVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          (&this->SpillObjectSet,param_1,local_res18);
      }
      if ((uint)param_1 < (this->ValidObjectIDs).MaxIndex) {
        if (((this->ValidObjectIDs).BitArray.NumBits <= param_1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar6 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)&this->ValidObjectIDs;
        }
        puVar1 = (uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
      }
      return 0 < iVar5;
    }
    if (iVar5 != -1) {
      *(undefined4 *)
       (*(longlong *)
         ((this->ObjectIDToCellMap).Blocks.AllocatorInstance.Data +
         (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4) = 0xffffffff;
      if ((uint)param_1 < (this->ValidObjectIDs).MaxIndex) {
        if (((this->ValidObjectIDs).BitArray.NumBits <= param_1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar6 = (this->ValidObjectIDs).BitArray.AllocatorInstance.SecondaryData;
        if (FVar6 == (ForElementType<unsigned_int>)0x0) {
          FVar6 = (ForElementType<unsigned_int>)&this->ValidObjectIDs;
        }
        puVar1 = (uint *)((longlong)FVar6 + (ulonglong)((uint)param_1 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
      }
      FSmallListSet::Remove(&this->CellObjectLists,iVar5,param_1);
      return true;
    }
  }
  return false;
}

