// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 12

// FSparseDynamicPointOctree3 @ 1435e4170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSparseDynamicPointOctree3 * __thiscall
UE::Geometry::FSparseDynamicPointOctree3::FSparseDynamicPointOctree3
          (FSparseDynamicPointOctree3 *this)

{
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this_01;
  TDynamicVector<unsigned_int,512> *this_02;
  undefined8 uVar1;
  undefined8 uVar2;
  
  this->MaxTreeDepth = 10;
  (this->CellRefCounts).RefCounts.CurBlockUsed = 0;
  this->RootDimension = 1000.0;
  (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellRefCounts).RefCounts.Blocks.ArrayNum = 0;
  (this->CellRefCounts).RefCounts.Blocks.ArrayMax = 0;
  this->MaxPointsPerCell = 1000;
  (this->CellRefCounts).RefCounts.CurBlock = 0;
  TDynamicVector<unsigned_short,512>::AddAllocatedBlock(&(this->CellRefCounts).RefCounts);
  this_00 = &(this->CellRefCounts).FreeIndices;
  this_00->CurBlock = 0;
  this_00->CurBlockUsed = 0;
  (this->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CellRefCounts).FreeIndices.Blocks.ArrayNum = 0;
  (this->CellRefCounts).FreeIndices.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(this_00);
  this_01 = &this->Cells;
  (this->CellRefCounts).UsedCount = 0;
  this_01->CurBlock = 0;
  this_01->CurBlockUsed = 0;
  (this->Cells).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Cells).Blocks.ArrayNum = 0;
  (this->Cells).Blocks.ArrayMax = 0;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::AddAllocatedBlock(this_01);
  TSparseListSet<int>::TSparseListSet<int>(&this->CellPointLists);
  this_02 = &this->PointIDToCellMap;
  this_02->CurBlock = 0;
  this_02->CurBlockUsed = 0;
  (this->PointIDToCellMap).Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointIDToCellMap).Blocks.ArrayNum = 0;
  (this->PointIDToCellMap).Blocks.ArrayMax = 0;
  TDynamicVector<unsigned_int,512>::AddAllocatedBlock(this_02);
  uVar2 = _UNK_150a9e658;
  uVar1 = ___xmm_800000017fffffff7fffffff7fffffff;
  *(undefined8 *)&(this->RootCells).Elements = 0;
  *(undefined8 *)&(this->RootCells).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RootCells).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RootCells).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RootCells).Elements.field_0x40 = 0;
  *(undefined4 *)&(this->RootCells).Elements.field_0x48 = 0;
  *(undefined8 *)&(this->RootCells).Bounds.Min.field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->RootCells).Bounds.Min.field0_0x0 + 8) = uVar2;
  *(undefined8 *)((longlong)&(this->RootCells).Bounds.Max.field0_0x0 + 4) = 0x8000000180000001;
  return this;
}

// ~FSparseDynamicPointOctree3 @ 1435e4bc0

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::~FSparseDynamicPointOctree3
          (FSparseDynamicPointOctree3 *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
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
  TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>(&this->PointIDToCellMap);
  TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>::
  ~TDynamicVector<UE::Geometry::TSparseListSet<int>::FList,512>(&(this->CellPointLists).Lists);
  DeleteCriticalSection((LPCRITICAL_SECTION)&(this->CellPointLists).AllocationLock);
  pFVar2 = (this->CellPointLists).FreeList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TUniquePtr<UE::Geometry::TSparseListSet<int>::FChunk,TDefaultDelete<UE::Geometry::TSparseListSet<int>::FChunk>_>,int>
            ((TUniquePtr<UE::Geometry::TSparseListSet<int>::FChunk,TDefaultDelete<UE::Geometry::TSparseListSet<int>::FChunk>_>
              *)(this->CellPointLists).ChunkList.AllocatorInstance.Data,
             (this->CellPointLists).ChunkList.ArrayNum);
  pFVar2 = (this->CellPointLists).ChunkList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::
  ~TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>(&this->Cells);
  TDynamicVector<int,512>::Empty(&(this->CellRefCounts).FreeIndices,0);
  pFVar2 = (this->CellRefCounts).FreeIndices.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDynamicVector<unsigned_short,512>::Empty(&(this->CellRefCounts).RefCounts,0);
  pFVar2 = (this->CellRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 1435e7f00

double __thiscall
`UE::Geometry::FSparseDynamicPointOctree3::FindClosestPoint'::__l2::<lambda_1>::operator()
          (void *this,double param_1,FSparsePointOctreeCell *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined4 *puVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  FSparsePointOctreeCell *local_b0;
  longlong local_a8;
  double *local_a0;
  undefined4 *local_98;
  longlong local_90;
  longlong local_88;
  uint *local_80;
  
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x38);
  local_b0 = param_2;
  if (((pFVar4->Data <= (FScriptContainerElement *)&local_b0) &&
      ((FScriptContainerElement *)&local_b0 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    dVar21 = (double)(*pcVar8)();
    return dVar21;
  }
  iVar12 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar12 + 1;
  *(FSparsePointOctreeCell **)(pFVar4->Data + (longlong)iVar12 * 8) = local_b0;
  plVar5 = *(longlong **)((longlong)this + 0x38);
  iVar12 = (int)plVar5[1];
  while( true ) {
    if (iVar12 < 1) {
      return param_1;
    }
    if (((int)plVar5[1] < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    local_80 = *(uint **)(*plVar5 + -8 + (longlong)(int)plVar5[1] * 8);
    *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
    local_a0 = *(double **)this;
    dVar21 = *(double *)((longlong)this + 8);
    dVar22 = *local_a0 / (double)(ulonglong)(1L << ((byte)local_80[1] & 0x1f));
    dVar25 = (double)(int)local_80[2] * dVar22;
    dVar23 = (double)(int)local_80[3] * dVar22;
    dVar24 = (double)(int)local_80[4] * dVar22;
    if (dVar25 <= dVar21) {
      if (dVar21 <= dVar25 + dVar22) {
        dVar25 = 0.0;
      }
      else {
        dVar25 = dVar21 - (dVar25 + dVar22);
      }
    }
    else {
      dVar25 = dVar25 - dVar21;
    }
    dVar21 = *(double *)((longlong)this + 0x10);
    if (dVar23 <= dVar21) {
      if (dVar21 <= dVar23 + dVar22) {
        dVar23 = 0.0;
      }
      else {
        dVar23 = dVar21 - (dVar23 + dVar22);
      }
    }
    else {
      dVar23 = dVar23 - dVar21;
    }
    dVar21 = *(double *)((longlong)this + 0x18);
    if (dVar24 <= dVar21) {
      if (dVar21 <= dVar24 + dVar22) {
        dVar24 = 0.0;
      }
      else {
        dVar24 = dVar21 - (dVar24 + dVar22);
      }
    }
    else {
      dVar24 = dVar24 - dVar21;
    }
    if (dVar23 * dVar23 + dVar25 * dVar25 + dVar24 * dVar24 < param_1) {
      uVar17 = *local_80;
      if ((-1 < (int)uVar17) &&
         ((int)uVar17 < *(int *)(local_a0 + 0x16) * 0x200 + *(int *)((longlong)local_a0 + 0xb4))) {
        lVar16 = (ulonglong)(uVar17 & 0x1ff) * 0x60;
        if (*(longlong *)
             (*(longlong *)((longlong)local_a0[0x17] + (ulonglong)(uVar17 >> 9) * 8) + 0x50 + lVar16
             ) != 0) {
          local_98 = *(undefined4 **)((longlong)this + 0x20);
          puVar6 = *(undefined8 **)((longlong)this + 0x28);
          puVar7 = *(undefined8 **)((longlong)this + 0x30);
          lVar16 = *(longlong *)((longlong)local_a0[0x17] + (ulonglong)(uVar17 >> 9) * 8) + lVar16;
          local_90 = lVar16;
          if (*(longlong *)(lVar16 + 0x50) != 0) {
            iVar12 = *(int *)(lVar16 + 0x48);
            local_88 = (longlong)iVar12;
            uVar17 = 0;
            lVar20 = 0;
            if (0 < iVar12) {
              do {
                uVar13 = 0;
                if ((int)uVar17 < *(int *)(lVar16 + 0x48)) {
                  uVar13 = ~uVar17 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  dVar21 = (double)(*pcVar8)();
                  return dVar21;
                }
                puVar9 = local_98;
                lVar15 = lVar16;
                if (*(longlong *)(lVar16 + 0x40) != 0) {
                  lVar15 = *(longlong *)(lVar16 + 0x40);
                }
                puVar18 = *(undefined4 **)(lVar15 + lVar20 * 8);
                if (uVar17 == iVar12 - 1U) {
                  iVar14 = *(int *)(lVar16 + 0x58);
                }
                else {
                  iVar14 = *(int *)(local_a0 + 0xc);
                }
                puVar2 = puVar18 + iVar14;
                while (puVar18 != puVar2) {
                  uVar3 = *puVar18;
                  puVar18 = puVar18 + 1;
                  local_res18[0] = uVar3;
                  cVar11 = (*(code *)*puVar6)(puVar6[1],local_res18);
                  lVar16 = local_90;
                  if ((cVar11 != '\0') &&
                     (local_res20[0] = uVar3,
                     dVar21 = (double)(*(code *)*puVar7)(puVar7[1],local_res20), lVar16 = local_90,
                     dVar21 < param_1)) {
                    *puVar9 = uVar3;
                    param_1 = dVar21;
                  }
                }
                uVar17 = uVar17 + 1;
                lVar20 = lVar20 + 1;
              } while (lVar20 < local_88);
            }
          }
        }
      }
      puVar19 = local_80 + 5;
      lVar16 = 8;
      do {
        uVar17 = *puVar19;
        if (uVar17 != 0xffffffff) {
          local_a8 = *(longlong *)((longlong)(*(double **)this)[10] + (ulonglong)(uVar17 >> 9) * 8)
                     + (ulonglong)(uVar17 & 0x1ff) * 0x34;
          dVar21 = *(double *)((longlong)this + 8);
          dVar22 = **(double **)this / (double)(ulonglong)(1L << (*(byte *)(local_a8 + 4) & 0x1f));
          dVar25 = (double)*(int *)(local_a8 + 0xc) * dVar22;
          dVar23 = (double)*(int *)(local_a8 + 8) * dVar22;
          dVar24 = (double)*(int *)(local_a8 + 0x10) * dVar22;
          if (dVar23 <= dVar21) {
            if (dVar21 <= dVar23 + dVar22) {
              dVar23 = 0.0;
            }
            else {
              dVar23 = dVar21 - (dVar23 + dVar22);
            }
          }
          else {
            dVar23 = dVar23 - dVar21;
          }
          dVar21 = *(double *)((longlong)this + 0x10);
          if (dVar25 <= dVar21) {
            if (dVar21 <= dVar25 + dVar22) {
              dVar25 = 0.0;
            }
            else {
              dVar25 = dVar21 - (dVar25 + dVar22);
            }
          }
          else {
            dVar25 = dVar25 - dVar21;
          }
          dVar21 = *(double *)((longlong)this + 0x18);
          if (dVar24 <= dVar21) {
            if (dVar21 <= dVar24 + dVar22) {
              dVar24 = 0.0;
            }
            else {
              dVar24 = dVar21 - (dVar24 + dVar22);
            }
          }
          else {
            dVar24 = dVar24 - dVar21;
          }
          if (dVar23 * dVar23 + dVar25 * dVar25 + dVar24 * dVar24 < param_1) {
            pFVar4 = *(ForAnyElementType **)((longlong)this + 0x38);
            if (((pFVar4->Data <= (FScriptContainerElement *)&local_a8) &&
                ((FScriptContainerElement *)&local_a8 <
                 pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              dVar21 = (double)(*pcVar8)();
              return dVar21;
            }
            iVar12 = *(int *)&pFVar4[1].Data;
            piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar4,piVar1);
            }
            *(int *)&pFVar4[1].Data = iVar12 + 1;
            *(longlong *)(pFVar4->Data + (longlong)iVar12 * 8) = local_a8;
          }
        }
        puVar19 = puVar19 + 1;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    plVar5 = *(longlong **)((longlong)this + 0x38);
    iVar12 = (int)plVar5[1];
  }
  pcVar8 = (code *)swi(3);
  dVar21 = (double)(*pcVar8)();
  return dVar21;
}

// operator() @ 1435e85a0

double __thiscall
`UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>::operator()
          (void *this,double param_1,FSparsePointOctreeCell *param_2)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  longlong *plVar4;
  double *pdVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  <lambda_1> local_res8 [8];
  double local_res10;
  FSparsePointOctreeCell *local_98;
  longlong local_90;
  <lambda_2> local_88 [2];
  
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x40);
  local_res10 = param_1;
  local_98 = param_2;
  if (((pFVar3->Data <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 <
       pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    dVar11 = (double)(*pcVar6)();
    return dVar11;
  }
  iVar8 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar8 + 1;
  *(FSparsePointOctreeCell **)(pFVar3->Data + (longlong)iVar8 * 8) = local_98;
  plVar4 = *(longlong **)((longlong)this + 0x40);
  iVar8 = (int)plVar4[1];
  while( true ) {
    if (iVar8 < 1) {
      return local_res10;
    }
    if (((int)plVar4[1] < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    puVar9 = *(uint **)(*plVar4 + -8 + (longlong)(int)plVar4[1] * 8);
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    pdVar5 = *(double **)this;
    dVar11 = *(double *)((longlong)this + 8);
    dVar12 = *pdVar5 / (double)(ulonglong)(1L << ((byte)puVar9[1] & 0x1f));
    dVar15 = (double)(int)puVar9[2] * dVar12;
    dVar13 = (double)(int)puVar9[3] * dVar12;
    dVar14 = (double)(int)puVar9[4] * dVar12;
    if (dVar15 <= dVar11) {
      if (dVar11 <= dVar15 + dVar12) {
        dVar15 = 0.0;
      }
      else {
        dVar15 = dVar11 - (dVar15 + dVar12);
      }
    }
    else {
      dVar15 = dVar15 - dVar11;
    }
    dVar11 = *(double *)((longlong)this + 0x10);
    if (dVar13 <= dVar11) {
      if (dVar11 <= dVar13 + dVar12) {
        dVar13 = 0.0;
      }
      else {
        dVar13 = dVar11 - (dVar13 + dVar12);
      }
    }
    else {
      dVar13 = dVar13 - dVar11;
    }
    dVar11 = *(double *)((longlong)this + 0x18);
    if (dVar14 <= dVar11) {
      if (dVar11 <= dVar14 + dVar12) {
        dVar14 = 0.0;
      }
      else {
        dVar14 = dVar11 - (dVar14 + dVar12);
      }
    }
    else {
      dVar14 = dVar14 - dVar11;
    }
    if (dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14 < local_res10) {
      uVar2 = *puVar9;
      if (((-1 < (int)uVar2) &&
          ((int)uVar2 < *(int *)(pdVar5 + 0x16) * 0x200 + *(int *)((longlong)pdVar5 + 0xb4))) &&
         (*(longlong *)
           (*(longlong *)((longlong)pdVar5[0x17] + (ulonglong)(uVar2 >> 9) * 8) + 0x50 +
           (ulonglong)(uVar2 & 0x1ff) * 0x60) != 0)) {
        local_88[0].PredicateFunc = *(TFunctionRef<bool___cdecl(int)> **)((longlong)this + 0x30);
        local_88[0].DistSqFunc = *(TFunctionRef<double___cdecl(int)> **)((longlong)this + 0x38);
        local_88[0].CurThresholdSq = &local_res10;
        local_88[0].FoundPoints =
             *(TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x28);
        local_88[0].NumToFind = (int *)((longlong)this + 0x20);
        local_88[0].HeapPredicate = local_res8;
        UE::Geometry::TSparseListSet<int>::
        Enumerate<__UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints_::__l2::<lambda_1>::operator()_::__l10::<lambda_2>_>
                  ((TSparseListSet<int> *)(pdVar5 + 0xc),uVar2,local_88);
      }
      puVar9 = puVar9 + 5;
      lVar10 = 8;
      do {
        uVar2 = *puVar9;
        if (uVar2 != 0xffffffff) {
          local_90 = *(longlong *)((longlong)(*(double **)this)[10] + (ulonglong)(uVar2 >> 9) * 8) +
                     (ulonglong)(uVar2 & 0x1ff) * 0x34;
          dVar11 = *(double *)((longlong)this + 8);
          dVar12 = **(double **)this / (double)(ulonglong)(1L << (*(byte *)(local_90 + 4) & 0x1f));
          dVar15 = (double)*(int *)(local_90 + 0xc) * dVar12;
          dVar13 = (double)*(int *)(local_90 + 8) * dVar12;
          dVar14 = (double)*(int *)(local_90 + 0x10) * dVar12;
          if (dVar13 <= dVar11) {
            if (dVar11 <= dVar13 + dVar12) {
              dVar13 = 0.0;
            }
            else {
              dVar13 = dVar11 - (dVar13 + dVar12);
            }
          }
          else {
            dVar13 = dVar13 - dVar11;
          }
          dVar11 = *(double *)((longlong)this + 0x10);
          if (dVar15 <= dVar11) {
            if (dVar11 <= dVar15 + dVar12) {
              dVar15 = 0.0;
            }
            else {
              dVar15 = dVar11 - (dVar15 + dVar12);
            }
          }
          else {
            dVar15 = dVar15 - dVar11;
          }
          dVar11 = *(double *)((longlong)this + 0x18);
          if (dVar14 <= dVar11) {
            if (dVar11 <= dVar14 + dVar12) {
              dVar14 = 0.0;
            }
            else {
              dVar14 = dVar11 - (dVar14 + dVar12);
            }
          }
          else {
            dVar14 = dVar14 - dVar11;
          }
          if (dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14 < local_res10) {
            pFVar3 = *(ForAnyElementType **)((longlong)this + 0x40);
            if (((pFVar3->Data <= (FScriptContainerElement *)&local_90) &&
                ((FScriptContainerElement *)&local_90 <
                 pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              dVar11 = (double)(*pcVar6)();
              return dVar11;
            }
            iVar8 = *(int *)&pFVar3[1].Data;
            piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,pFVar3,piVar1);
            }
            *(int *)&pFVar3[1].Data = iVar8 + 1;
            *(longlong *)(pFVar3->Data + (longlong)iVar8 * 8) = local_90;
          }
        }
        puVar9 = puVar9 + 1;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    plVar4 = *(longlong **)((longlong)this + 0x40);
    iVar8 = (int)plVar4[1];
  }
  pcVar6 = (code *)swi(3);
  dVar11 = (double)(*pcVar6)();
  return dVar11;
}

// operator() @ 1435e9510

void __thiscall
`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  int *piVar1;
  FSparseDynamicPointOctree3 *this_00;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVector3i_u_0 FStack_34;
  undefined4 local_28;
  TVector<double> local_20;
  
  this_00 = *(FSparseDynamicPointOctree3 **)((longlong)this + 8);
  (*(code *)**(undefined8 **)((longlong)this + 0x10))
            (&local_20,(*(undefined8 **)((longlong)this + 0x10))[1]);
  UE::Geometry::FSparseDynamicPointOctree3::PointToIndex
            (this_00,(FVector3i *)&FStack_34._s_0,0,&local_20);
  plVar2 = *(longlong **)this;
  local_28 = 0xffffffff;
  uVar6 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = *plVar2;
  piVar1 = (int *)(lVar3 + (longlong)param_1 * 0x14);
  *piVar1 = param_1;
  piVar1[1] = FStack_34._s_0.X;
  piVar1[2] = FStack_34._s_0.Y;
  piVar1[3] = FStack_34._s_0.Z;
  *(undefined4 *)(lVar3 + 0x10 + (longlong)param_1 * 0x14) = 0xffffffff;
  return;
}

// operator() @ 1435ea600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_2>::
operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  int *piVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FListHandle FVar13;
  uint uVar14;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this_00;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
  *pTVar18;
  ForAnyElementType FVar19;
  void *pvVar20;
  double *pdVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  int *piVar28;
  ulonglong uVar29;
  double dVar30;
  undefined1 auStackY_258 [32];
  undefined1 local_208 [8];
  void *local_200;
  uint local_1f8 [4];
  ForAnyElementType local_1e8;
  undefined8 uStack_1e0;
  ForAnyElementType local_1d8;
  int local_1d0 [2];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_1b0;
  int *local_1a0;
  uint local_198;
  TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
  *local_190;
  ForAnyElementType local_188;
  int local_180 [2];
  ForAnyElementType local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined4 local_160 [2];
  uint local_158;
  uint local_154;
  int *local_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  undefined8 uStack_134;
  int iStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  FVector3i_u_0 local_110;
  undefined8 local_104;
  int local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [8];
  uint local_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  plVar3 = *(longlong **)this;
  uVar16 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  local_200 = this;
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1a0 = *(int **)(*plVar3 + (longlong)param_1 * 8);
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  uVar16 = *(uint *)(*(longlong *)((longlong)this + 8) + 8);
  if ((int)uVar16 < 1) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
  }
  else {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar16,&local_1d8,local_1d0,local_1d0 + 1);
    memset(local_1d8.Data + (longlong)iVar9 * 0x10,0,(longlong)(int)uVar16 << 4);
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  uVar16 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar6 = __real_3fe0000000000000;
  local_150 = *(int **)(*plVar3 + (longlong)param_1 * 8);
  local_1b8 = *local_150 * 0x200 + local_150[1];
  for (uVar16 = 0; uVar22 = 0, local_198 = uVar16, uVar16 != local_1b8; uVar16 = uVar16 + 1) {
    plVar3 = *(longlong **)((longlong)this + 0x18);
    local_154 = *(uint *)(*(longlong *)(*(longlong *)(local_150 + 2) + (ulonglong)(uVar16 >> 9) * 8)
                         + (ulonglong)(uVar16 & 0x1ff) * 4);
    pTVar18 = (TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
               *)(longlong)(int)local_154;
    uVar27 = ~local_154 >> 0x1f;
    uVar14 = 0;
    uVar10 = uVar14;
    if ((int)local_154 < (int)plVar3[1]) {
      uVar10 = uVar27;
    }
    local_158 = uVar27;
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_160[0] = *(undefined4 *)(*plVar3 + (longlong)pTVar18 * 0x14);
    local_190 = pTVar18;
    (*(code *)**(undefined8 **)((longlong)this + 0x20))
              (&local_b0,(*(undefined8 **)((longlong)this + 0x20))[1],local_160);
    pvVar20 = local_200;
    local_e8 = *local_1a0;
    iStack_e4 = local_1a0[1];
    iStack_e0 = local_1a0[2];
    iStack_dc = local_1a0[3];
    local_d8 = local_1a0[4];
    iStack_d4 = local_1a0[5];
    iStack_d0 = local_1a0[6];
    iStack_cc = local_1a0[7];
    pdVar21 = *(double **)((longlong)local_200 + 8);
    local_c8 = *(undefined8 *)(local_1a0 + 8);
    uStack_c0 = *(undefined8 *)(local_1a0 + 10);
    local_b8 = local_1a0[0xc];
    uVar29 = uVar22;
    uVar10 = uVar14;
    if (0 < *(int *)(pdVar21 + 1)) {
      do {
        iVar9 = local_d8;
        dVar30 = *pdVar21 / (double)(ulonglong)(1L << ((byte)iStack_e4 & 0x1f));
        uVar14 = (uint)uVar22;
        local_148 = -1;
        iStack_12c = -1;
        uStack_128 = 0xffffffff;
        uStack_134 = 0xffffffffffffffff;
        uStack_11c = 0xffffffff;
        uStack_118 = 0xffffffff;
        uStack_124 = 0xffffffff;
        uStack_120 = 0xffffffff;
        iVar25 = 2;
        if (local_a8 < ((double)iStack_dc + dVar6) * dVar30) {
          iVar25 = 0;
        }
        iVar12 = 4;
        if (local_a0 < ((double)local_d8 + dVar6) * dVar30) {
          iVar12 = 0;
        }
        uVar27 = iVar25 + iVar12 + (uint)(((double)iStack_e0 + dVar6) * dVar30 <= local_b0);
        iStack_144 = CONCAT31(iStack_144._1_3_,(byte)iStack_e4 + 1);
        iStack_140 = (uVar27 & 1) + iStack_e0 * 2;
        iStack_13c = (uVar27 >> 1 & 1) + iStack_dc * 2;
        iVar25 = (uVar27 >> 2) + local_d8 * 2;
        uVar16 = 0;
        if ((int)uVar14 < local_1d0[0]) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        local_138 = iVar25;
        if ((uVar16 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_110._0_8_ = CONCAT44(iStack_dc,iStack_e0);
        local_104 = CONCAT44(iStack_13c,iStack_140);
        local_f4 = 0;
        local_f0 = 0xffffffff;
        local_110._s_0.Z = iVar9;
        local_fc = iVar25;
        local_f8 = uVar27;
        uVar10 = TArray<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::FParentChildCell,TSizedDefaultAllocator<32>_>
                 ::
                 AddUniqueImpl<_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet_::__l2::FParentChildCell>
                           (local_1d8.Data + (longlong)(int)uVar14 * 0x10,
                            (FParentChildCell *)&local_110._s_0);
        pdVar21 = *(double **)((longlong)pvVar20 + 8);
        uVar14 = uVar14 + 1;
        uVar22 = (ulonglong)uVar14;
        uVar29 = uVar29 + 1;
        local_b8 = -1;
        local_c8 = CONCAT44(uStack_124,uStack_128);
        uStack_c0 = CONCAT44(uStack_11c,uStack_120);
        local_e8 = local_148;
        iStack_e4 = iStack_144;
        iStack_e0 = iStack_140;
        iStack_dc = iStack_13c;
        local_d8 = local_138;
        iStack_d4 = (int)uStack_134;
        iStack_d0 = uStack_134._4_4_;
        iStack_cc = iStack_12c;
        pTVar18 = local_190;
        uVar16 = local_198;
        uVar27 = local_158;
      } while ((int)uVar14 < *(int *)(pdVar21 + 1));
    }
    plVar3 = *(longlong **)((longlong)local_200 + 0x18);
    uVar11 = 0;
    if ((int)local_154 < (int)plVar3[1]) {
      uVar11 = uVar27;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(uint *)(*plVar3 + 0x10 + (longlong)pTVar18 * 0x14) = uVar10;
    uVar27 = 0;
    if ((int)(uVar14 - 1) < local_1d0[0]) {
      uVar27 = ~(uVar14 - 1) >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar19.Data = local_1d8.Data;
    uVar27 = 0;
    if ((int)uVar10 < *(int *)(local_1d8.Data + (uVar29 - 1) * 0x10 + 8)) {
      uVar27 = ~uVar10 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    piVar28 = (int *)(*(longlong *)&FVar19.Data[(uVar29 - 1) * 0x10].field_0x0 + 0x1c +
                     (longlong)(int)uVar10 * 0x24);
    *piVar28 = *piVar28 + 1;
    this = local_200;
  }
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_178.Data = (FScriptContainerElement *)0x0;
  uStack_170 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  uStack_1e0 = 0;
  iVar9 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_178,(int *)((longlong)&uStack_170 + 4));
  uStack_170 = CONCAT44(uStack_170._4_4_,iVar9 + 1);
  *(int **)(local_178.Data + (longlong)iVar9 * 8) = local_1a0;
  lVar26 = *(longlong *)((longlong)this + 8);
  uVar29 = uVar22;
  if (0 < *(int *)(lVar26 + 8)) {
    do {
      uVar27 = (uint)uVar22;
      uVar16 = 0;
      if ((int)uVar27 < local_1d0[0]) {
        uVar16 = ~uVar27 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_190 = (TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
                   *)local_1d8.Data;
      local_1b8 = *(uint *)(local_1d8.Data + uVar29 + 8);
      uVar22 = (ulonglong)(int)local_1b8;
      piVar28 = *(int **)(local_1d8.Data + uVar29);
      local_1a0 = piVar28 + uVar22 * 9;
      while( true ) {
        piVar7 = local_1a0;
        if (*(int *)((longlong)&local_190->ArrayNum + uVar29) != (int)uVar22) {
          local_208[0] = 0;
          `TCheckedPointerIterator<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::FParentChildCell,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_208);
        }
        uVar22 = uStack_170;
        FVar19.Data = local_1e8.Data;
        if (piVar28 == piVar7) break;
        pFVar15 = (FScriptContainerElement *)0x0;
        if (local_178.Data != local_178.Data + (longlong)(int)uStack_170 * 8) {
          FVar19.Data = local_178.Data;
          do {
            lVar26 = *(longlong *)FVar19.Data;
            if (((*(int *)(lVar26 + 8) == *piVar28) && (*(int *)(lVar26 + 0xc) == piVar28[1])) &&
               (pFVar15 = FVar19.Data, *(int *)(lVar26 + 0x10) == piVar28[2])) break;
            FVar19.Data = FVar19.Data + 8;
            pFVar15 = (FScriptContainerElement *)0x0;
          } while (FVar19.Data != local_178.Data + (longlong)(int)uStack_170 * 8);
        }
        lVar26 = *(longlong *)pFVar15;
        uVar16 = piVar28[6];
        iStack_88 = (uVar16 & 1) + *(int *)(lVar26 + 8) * 2;
        iStack_84 = (uVar16 >> 1 & 1) + *(int *)(lVar26 + 0xc) * 2;
        local_80 = (uVar16 >> 2 & 1) + *(int *)(lVar26 + 0x10) * 2;
        uStack_8c = CONCAT31(uStack_8c._1_3_,*(char *)(lVar26 + 4) + '\x01');
        local_90 = 0xffffffff;
        uStack_74 = 0xffffffff;
        uStack_70 = 0xffffffff;
        uStack_7c = 0xffffffff;
        uStack_78 = 0xffffffff;
        uStack_64 = 0xffffffffffffffff;
        uStack_6c = 0xffffffffffffffff;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
        lVar26 = *(longlong *)((longlong)this + 8);
        *(int *)(lVar26 + 0x40) = *(int *)(lVar26 + 0x40) + 1;
        iVar9 = *(int *)(lVar26 + 0x28);
        if ((iVar9 == 0) && (*(int *)(lVar26 + 0x2c) == 0)) {
          iVar9 = *(int *)(lVar26 + 0x14);
          if (*(int *)(lVar26 + 0x14) == 0x200) {
            if (*(int *)(lVar26 + 0x10) == *(int *)(lVar26 + 0x20) + -1) {
              UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                        ((TDynamicVector<unsigned_short,512> *)(lVar26 + 0x10));
            }
            *(int *)(lVar26 + 0x10) = *(int *)(lVar26 + 0x10) + 1;
            *(undefined4 *)(lVar26 + 0x14) = 0;
            iVar9 = 0;
          }
LAB_1435ead8a:
          *(undefined2 *)
           (*(longlong *)(*(longlong *)(lVar26 + 0x18) + (longlong)*(int *)(lVar26 + 0x10) * 8) +
           (longlong)iVar9 * 2) = 1;
          *(int *)(lVar26 + 0x14) = *(int *)(lVar26 + 0x14) + 1;
          uVar16 = *(int *)(lVar26 + 0x14) + -1 + *(int *)(lVar26 + 0x10) * 0x200;
        }
        else {
          do {
            if ((iVar9 == 0) && (*(int *)(lVar26 + 0x2c) == 0)) {
              iVar9 = *(int *)(lVar26 + 0x14);
              if (iVar9 == 0x200) {
                if (*(int *)(lVar26 + 0x10) == *(int *)(lVar26 + 0x20) + -1) {
                  UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                            ((TDynamicVector<unsigned_short,512> *)(lVar26 + 0x10));
                }
                *(int *)(lVar26 + 0x10) = *(int *)(lVar26 + 0x10) + 1;
                *(undefined4 *)(lVar26 + 0x14) = 0;
                iVar9 = 0;
              }
              goto LAB_1435ead8a;
            }
            iVar25 = *(int *)(lVar26 + 0x2c) + -1;
            uVar16 = *(uint *)(*(longlong *)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar9 * 8) +
                              (longlong)iVar25 * 4);
            iVar12 = iVar9;
            if (*(int *)(lVar26 + 0x2c) == 0) {
LAB_1435eadf3:
              if (iVar9 != 0) {
                *(undefined4 *)(lVar26 + 0x2c) = 0x200;
                *(int *)(lVar26 + 0x28) = iVar9 + -1;
                iVar12 = iVar9 + -1;
              }
            }
            else {
              *(int *)(lVar26 + 0x2c) = iVar25;
              iVar12 = *(int *)(lVar26 + 0x28);
              if (iVar25 == 0) goto LAB_1435eadf3;
            }
            iVar9 = iVar12;
          } while (uVar16 == 0xffffffff);
          *(undefined2 *)
           (*(longlong *)(*(longlong *)(lVar26 + 0x18) + (ulonglong)(uVar16 >> 9) * 8) +
           (ulonglong)(uVar16 & 0x1ff) * 2) = 1;
        }
        lVar26 = *(longlong *)((longlong)this + 8);
        this_00 = (TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *)(lVar26 + 0x48);
        uVar10 = this_00->CurBlock;
        iVar9 = *(int *)(lVar26 + 0x4c);
        uVar14 = uVar10 * 0x200 + iVar9;
        local_90 = uVar16;
        if (uVar16 == uVar14) {
          if (iVar9 == 0x200) {
            if (uVar10 == *(int *)(lVar26 + 0x58) - 1U) {
              UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::
              AddAllocatedBlock(this_00);
            }
            this_00->CurBlock = this_00->CurBlock + 1;
            uVar10 = this_00->CurBlock;
            *(undefined4 *)(lVar26 + 0x4c) = 0;
            iVar9 = 0;
          }
LAB_1435eaedb:
          lVar23 = (longlong)iVar9 * 0x34;
          lVar24 = *(longlong *)(*(longlong *)(lVar26 + 0x50) + (longlong)(int)uVar10 * 8);
          *(undefined8 *)(lVar24 + lVar23) = CONCAT44(uStack_8c,local_90);
          ((undefined8 *)(lVar24 + lVar23))[1] = CONCAT44(iStack_84,iStack_88);
          puVar1 = (undefined8 *)(lVar24 + 0x10 + lVar23);
          *puVar1 = CONCAT44(uStack_7c,local_80);
          puVar1[1] = CONCAT44(uStack_74,uStack_78);
          puVar2 = (undefined4 *)(lVar24 + 0x20 + lVar23);
          *puVar2 = uStack_70;
          puVar2[1] = (undefined4)uStack_6c;
          puVar2[2] = uStack_6c._4_4_;
          puVar2[3] = (undefined4)uStack_64;
          *(undefined4 *)(lVar24 + 0x30 + lVar23) = uStack_64._4_4_;
          *(int *)(lVar26 + 0x4c) = *(int *)(lVar26 + 0x4c) + 1;
        }
        else {
          if (uVar14 < uVar16) {
            UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Resize
                      (this_00,uVar16);
            iVar9 = *(int *)(lVar26 + 0x4c);
            if (iVar9 == 0x200) {
              if (this_00->CurBlock == *(int *)(lVar26 + 0x58) - 1U) {
                UE::Geometry::TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::
                AddAllocatedBlock(this_00);
              }
              this_00->CurBlock = this_00->CurBlock + 1;
              iVar9 = 0;
              *(undefined4 *)(lVar26 + 0x4c) = 0;
            }
            uVar10 = this_00->CurBlock;
            goto LAB_1435eaedb;
          }
          lVar24 = (ulonglong)(uVar16 & 0x1ff) * 0x34;
          lVar26 = *(longlong *)(*(longlong *)(lVar26 + 0x50) + (ulonglong)(uVar16 >> 9) * 8);
          *(undefined8 *)(lVar26 + lVar24) = CONCAT44(uStack_8c,uVar16);
          ((undefined8 *)(lVar26 + lVar24))[1] = CONCAT44(iStack_84,iStack_88);
          puVar1 = (undefined8 *)(lVar26 + 0x10 + lVar24);
          *puVar1 = CONCAT44(uStack_7c,local_80);
          puVar1[1] = CONCAT44(uStack_74,uStack_78);
          puVar2 = (undefined4 *)(lVar26 + 0x20 + lVar24);
          *puVar2 = uStack_70;
          puVar2[1] = (undefined4)uStack_6c;
          puVar2[2] = uStack_6c._4_4_;
          puVar2[3] = (undefined4)uStack_64;
          *(undefined4 *)(lVar26 + 0x30 + lVar24) = uStack_64._4_4_;
        }
        if (uVar27 == *(int *)(*(longlong *)((longlong)this + 8) + 8) - 1U) {
          if (((local_1c8.Data <= (FScriptContainerElement *)&local_90) &&
              ((FScriptContainerElement *)&local_90 < local_1c8.Data + (longlong)local_1c0._4_4_ * 4
              )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = (int)local_1c0;
          if ((int)local_1c0 == local_1c0._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_1c8,(int *)((longlong)&local_1c0 + 4));
          }
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar9 + 1);
          *(uint *)(local_1c8.Data + (longlong)iVar9 * 4) = local_90;
        }
        local_168 = (ulonglong)(local_90 & 0x1ff) * 0x34 +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x50) +
                     (ulonglong)(local_90 >> 9) * 8);
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)this + 0x28));
        *(uint *)(*(longlong *)pFVar15 + 0x14 + (ulonglong)(uint)piVar28[6] * 4) = local_90;
        piVar28[8] = local_90;
        if (((local_1e8.Data <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 < local_1e8.Data + (longlong)uStack_1e0._4_4_ * 8
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (int)uStack_1e0;
        if ((int)uStack_1e0 == uStack_1e0._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_1e8,(int *)((longlong)&uStack_1e0 + 4));
        }
        uVar22 = (ulonglong)local_1b8;
        piVar28 = piVar28 + 9;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,iVar9 + 1);
        *(longlong *)(local_1e8.Data + (longlong)iVar9 * 8) = local_168;
      }
      local_1e8.Data = local_178.Data;
      local_178.Data = FVar19.Data;
      uStack_170 = uStack_1e0;
      uStack_1e0 = uVar22 & 0xffffffff00000000;
      if (((longlong)uVar22 < 0) && ((int)(uVar22 >> 0x20) != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_1e8,0,(int *)((longlong)&uStack_1e0 + 4));
      }
      lVar26 = *(longlong *)((longlong)this + 8);
      uVar22 = (ulonglong)(uVar27 + 1);
      uVar29 = uVar29 + 0x10;
    } while ((int)(uVar27 + 1) < *(int *)(lVar26 + 8));
  }
  uVar22 = 0;
  uVar27 = *(int *)(lVar26 + 8) - 1;
  uVar16 = 0;
  if ((int)uVar27 < local_1d0[0]) {
    uVar16 = ~uVar27 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar18 = (TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
             *)(local_1d8.Data + (longlong)(int)uVar27 * 0x10);
  uVar16 = *(uint *)((longlong)pTVar18 + 8);
  lVar26 = (longlong)(int)uVar16;
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180[0] = 0;
  local_180[1] = 0;
  local_190 = pTVar18;
  if ((int)uVar16 < 1) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
  }
  else {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar16,&local_188,local_180,local_180 + 1);
    DefaultConstructItems<UE::Geometry::TSparseListSet<int>::FListHandle,int>
              (local_188.Data + (longlong)iVar9 * 8,uVar16);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)((longlong)local_200 + 0x30));
  pvVar20 = local_200;
  uVar29 = uVar22;
  local_1a0 = (int *)lVar26;
  if (0 < (int)uVar16) {
    do {
      lVar24 = *(longlong *)((longlong)pvVar20 + 8);
      uVar10 = (uint)uVar22;
      uVar27 = 0;
      if ((int)uVar10 < (int)local_1c0) {
        uVar27 = ~uVar10 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar13 = UE::Geometry::TSparseListSet<int>::AllocateAt
                         ((TSparseListSet<int> *)(lVar24 + 0x60),(int)local_98);
      uVar4 = *(undefined8 *)FVar13.ListRef;
      uVar27 = 0;
      if ((int)uVar10 < local_180[0]) {
        uVar27 = ~uVar10 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar22 = (ulonglong)(uVar10 + 1);
      *(undefined8 *)(local_188.Data + uVar29 * 8) = uVar4;
      uVar29 = uVar29 + 1;
      pTVar18 = local_190;
    } while ((longlong)uVar29 < lVar26);
  }
  pvVar20 = local_200;
  uVar22 = 0;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)((longlong)local_200 + 0x30));
  local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ArrayNum = 0;
  local_1b0.ArrayMax = 0;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_1b0,uVar16,Default);
  if (0 < (int)uVar16) {
    lVar24 = 0;
    uVar29 = uVar22;
    do {
      uVar27 = (uint)uVar22;
      uVar16 = 0;
      if ((int)uVar27 < *(int *)((longlong)pTVar18 + 8)) {
        uVar16 = ~uVar27 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar16 = *(uint *)(*(longlong *)&((FScriptContainerElement *)pTVar18)->field_0x0 + 0x1c +
                        lVar24);
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if (local_1b0.ArrayMax < (int)uVar16) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar16,&local_1b0.AllocatorInstance,local_1b0.ArrayNum,&local_1b0.ArrayMax
                  );
      }
      uVar22 = (ulonglong)(uVar27 + 1);
      uVar29 = uVar29 + 1;
      lVar24 = lVar24 + 0x24;
      pvVar20 = local_200;
    } while ((longlong)uVar29 < lVar26);
  }
  uVar22 = 0;
  iVar9 = *local_150;
  iVar25 = local_150[1];
  while( true ) {
    piVar28 = local_1a0;
    uVar29 = 0;
    uVar16 = (uint)uVar22;
    if (uVar16 == iVar9 * 0x200 + iVar25) {
      uVar22 = uVar29;
      if (0 < (longlong)local_1a0) {
        do {
          lVar26 = *(longlong *)((longlong)pvVar20 + 8);
          uVar27 = (uint)uVar29;
          uVar16 = 0;
          if ((int)uVar27 < local_1b0.ArrayNum) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)
                    (local_1b0.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10);
          uVar16 = 0;
          if ((int)uVar27 < local_180[0]) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UE::Geometry::TSparseListSet<int>::SetValues_Internal
                    ((TSparseListSet<int> *)(lVar26 + 0x60),*(FList **)(local_188.Data + uVar22 * 8)
                     ,pTVar17);
          uVar29 = (ulonglong)(uVar27 + 1);
          uVar22 = uVar22 + 1;
          pvVar20 = local_200;
        } while ((longlong)uVar22 < (longlong)piVar28);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data,
                 local_1b0.ArrayNum);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1b0.AllocatorInstance.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1b0.AllocatorInstance.Data);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      if (local_1e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      DestructItems<TArray<_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet_::__l2::FParentChildCell,TSizedDefaultAllocator<32>_>,int>
                ((TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
                  *)local_1d8.Data,local_1d0[0]);
      if ((TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
           *)local_1d8.Data !=
          (TArray<_public:_void___cdecl_UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet(int,TFunctionRef<UE::Math::TVector<double>___cdecl(int)>)_::_2_::FParentChildCell,TSizedDefaultAllocator<32>_>
           *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      return;
    }
    uVar27 = *(uint *)(*(longlong *)(*(longlong *)(local_150 + 2) + (uVar22 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 4);
    plVar3 = *(longlong **)((longlong)local_200 + 0x18);
    uVar10 = 0;
    if ((int)uVar27 < (int)plVar3[1]) {
      uVar10 = ~uVar27 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1f8[0] = *(uint *)(*plVar3 + (longlong)(int)uVar27 * 0x14);
    plVar3 = *(longlong **)((longlong)local_200 + 0x18);
    uVar10 = 0;
    if ((int)uVar27 < (int)plVar3[1]) {
      uVar10 = ~uVar27 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar27 = *(uint *)(*plVar3 + 0x10 + (longlong)(int)uVar27 * 0x14);
    uVar10 = 0;
    if ((int)uVar27 < local_1b0.ArrayNum) {
      uVar10 = ~uVar27 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = local_1b0.AllocatorInstance.Data + (longlong)(int)uVar27 * 0x10;
    if (((*(FScriptContainerElement **)&pFVar15->field_0x0 <= (FScriptContainerElement *)local_1f8)
        && ((FScriptContainerElement *)local_1f8 <
            *(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)*(int *)(pFVar15 + 0xc) * 4
           )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = *(int *)(pFVar15 + 8);
    if (iVar12 == *(int *)(pFVar15 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar15,(int *)(pFVar15 + 0xc));
    }
    *(int *)(pFVar15 + 8) = iVar12 + 1;
    *(uint *)(*(FScriptContainerElement **)&pFVar15->field_0x0 + (longlong)iVar12 * 4) =
         local_1f8[0];
    uVar10 = 0;
    if ((int)uVar27 < *(int *)((longlong)pTVar18 + 8)) {
      uVar10 = ~uVar27 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    uVar22 = (ulonglong)(uVar16 + 1);
    *(undefined4 *)
     (*(longlong *)
       (*(longlong *)(*(longlong *)((longlong)local_200 + 8) + 0xd0) +
       (ulonglong)(local_1f8[0] >> 9) * 8) + (ulonglong)(local_1f8[0] & 0x1ff) * 4) =
         *(undefined4 *)
          (*(longlong *)&((FScriptContainerElement *)pTVar18)->field_0x0 + 0x20 +
          (longlong)(int)uVar27 * 0x24);
    pvVar20 = local_200;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// FindClosestPoint @ 1435fbed0

int __thiscall
UE::Geometry::FSparseDynamicPointOctree3::FindClosestPoint
          (FSparseDynamicPointOctree3 *this,TVector<double> *param_1,double param_2,
          TFunctionRef<bool___cdecl(int)> *param_3,TFunctionRef<double___cdecl(int)> *param_4,
          TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_98;
  code *local_88;
  FSparseDynamicPointOctree3 **local_80;
  TVector<double>_u_0 local_78;
  FSparseDynamicPointOctree3 *local_58;
  double local_50;
  double dStack_48;
  double local_40;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> **local_38;
  TFunctionRef<bool___cdecl(int)> *local_30;
  TFunctionRef<double___cdecl(int)> *local_28;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *local_20;
  
  pTVar2 = param_5;
  param_5._0_4_ = -1;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  pTVar3 = &local_98;
  if (pTVar2 != (TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *)
                0x0) {
    pTVar3 = pTVar2;
  }
  pTVar3->ArrayNum = 0;
  if (pTVar3->ArrayMax < 0x80) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x80,&pTVar3->AllocatorInstance,0,&pTVar3->ArrayMax);
  }
  local_78._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_38 = &param_5;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_28 = param_4;
  local_80 = &local_58;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::FindClosestPoint'::__l2::<lambda_1>,double,double,UE::Geometry::FSparsePointOctreeCell_const_&>
             ::Call;
  local_58 = this;
  local_50 = local_78._s_0.X;
  dStack_48 = local_78._s_0.Y;
  local_40 = local_78._s_0.Z;
  local_30 = param_3;
  local_20 = pTVar3;
  IterateRootsInRadius
            (this,(TVector<double> *)&local_78._s_0,param_2,
             (TFunctionRef<double___cdecl(double,UE::Geometry::FSparsePointOctreeCell_const_&)> *)
             &local_88);
  iVar1 = (int)param_5;
  if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return iVar1;
}

// FindKClosestPoints @ 1435fd3a0

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints
          (FSparseDynamicPointOctree3 *this,TVector<double> *param_1,double param_2,int param_3,
          TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> *param_4,
          TFunctionRef<bool___cdecl(int)> *param_5,TFunctionRef<double___cdecl(int)> *param_6,
          TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *param_7)

{
  int *piVar1;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_b8;
  code *local_a8;
  FSparseDynamicPointOctree3 **local_a0;
  TVector<double>_u_0 local_98;
  FSparseDynamicPointOctree3 *local_78;
  double local_70;
  double dStack_68;
  double local_60;
  int local_58;
  TArray<TTuple<int,double>,TSizedDefaultAllocator<32>_> *local_50;
  TFunctionRef<bool___cdecl(int)> *local_48;
  TFunctionRef<double___cdecl(int)> *local_40;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *local_38;
  
  piVar1 = &param_4->ArrayMax;
  param_4->ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_4->AllocatorInstance,0,piVar1);
  }
  if (0 < param_3) {
    if (*piVar1 < param_3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_3,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pTVar2 = &local_b8;
    if (param_7 !=
        (TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar2 = param_7;
    }
    pTVar2->ArrayNum = 0;
    if (pTVar2->ArrayMax < 0x80) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0x80,&pTVar2->AllocatorInstance,0,&pTVar2->ArrayMax);
    }
    local_98._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_98._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_98._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_48 = param_5;
    local_40 = param_6;
    local_a0 = &local_78;
    local_a8 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::FindKClosestPoints'::__l2::<lambda_1>,double,double,UE::Geometry::FSparsePointOctreeCell_const_&>
               ::Call;
    local_50 = param_4;
    local_78 = this;
    local_70 = local_98._s_0.X;
    dStack_68 = local_98._s_0.Y;
    local_60 = local_98._s_0.Z;
    local_58 = param_3;
    local_38 = pTVar2;
    IterateRootsInRadius
              (this,(TVector<double> *)&local_98._s_0,param_2,
               (TFunctionRef<double___cdecl(double,UE::Geometry::FSparsePointOctreeCell_const_&)> *)
               &local_a8);
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// IterateRootsInRadius @ 14360d810

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius
          (FSparseDynamicPointOctree3 *this,TVector<double> *param_1,double param_2,
          TFunctionRef<double___cdecl(double,UE::Geometry::FSparsePointOctreeCell_const_&)> *param_3
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_res8;
  FVector3i_u_0 local_98;
  FVector3i_u_0 local_88;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 TStack_60;
  <lambda_1> local_48;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  local_78._s_0.X = dVar1 - param_2;
  local_78._s_0.Y = dVar2 - param_2;
  TStack_60._s_0.X = dVar1 + param_2;
  TStack_60._s_0.Y = dVar2 + param_2;
  local_78._s_0.Z = dVar3 - param_2;
  TStack_60._s_0.Z = dVar3 + param_2;
  local_res8 = param_2 * param_2;
  PointToIndex(this,(FVector3i *)&local_88._s_0,0,(TVector<double> *)&local_78._s_0);
  PointToIndex(this,(FVector3i *)&local_98._s_0,0,(TVector<double> *)&TStack_60._s_0);
  uVar6 = *(undefined8 *)&(this->RootCells).Bounds.Min.field0_0x0;
  uVar5 = (this->RootCells).Bounds.Min.field0_0x0._s_0.Z;
  uVar4 = *(undefined8 *)((longlong)&(this->RootCells).Bounds.Max.field0_0x0 + 4);
  uVar12 = (undefined4)uVar6;
  if ((int)uVar12 <= local_88._s_0.X) {
    uVar12 = local_88._s_0.X;
  }
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar11 <= local_88._s_0.Y) {
    uVar11 = local_88._s_0.Y;
  }
  if ((int)uVar5 <= local_88._s_0.Z) {
    uVar5 = local_88._s_0.Z;
  }
  uVar8 = (undefined4)
          ((ulonglong)*(undefined8 *)((longlong)&(this->RootCells).Bounds.Min.field0_0x0 + 8) >>
          0x20);
  local_88._s_0.Y = uVar11;
  local_88._s_0.X = uVar12;
  if (local_98._s_0.X <= (int)uVar8) {
    uVar8 = local_98._s_0.X;
  }
  uVar9 = (undefined4)uVar4;
  local_88._s_0.Z = uVar5;
  if (local_98._s_0.Y <= (int)uVar9) {
    uVar9 = local_98._s_0.Y;
  }
  uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (local_98._s_0.Z <= (int)uVar10) {
    uVar10 = local_98._s_0.Z;
  }
  lVar7 = 0;
  local_98._s_0.Z = uVar10;
  local_98._s_0.Y = uVar9;
  local_98._s_0.X = uVar8;
  do {
    if (*(int *)((longlong)&local_98 + lVar7) < *(int *)((longlong)&local_88 + lVar7)) {
      return;
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 < 0xc);
  TStack_60._s_0.Y = (double)&local_res8;
  local_78._s_0.Y = (param_1->field0_0x0)._s_0.X;
  local_78._s_0.Z = (param_1->field0_0x0)._s_0.Y;
  local_48.QueryPt.field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_78._s_0.X = (double)this;
  TStack_60._s_0.Z = (double)param_3;
  local_48.__this = this;
  local_48.QueryPt.field0_0x0._s_0.X = local_78._s_0.Y;
  local_48.QueryPt.field0_0x0._s_0.Y = local_78._s_0.Z;
  local_48.ThresholdSq = (double *)TStack_60._s_0.Y;
  local_48.RootFn = param_3;
  if ((double)(*(int *)&(this->RootCells).Elements.field_0x8 -
              *(int *)&(this->RootCells).Elements.field_0x34) <=
      (double)((uVar8 - uVar12) + 1) * (double)((uVar9 - uVar11) + 1) *
      (double)((uVar10 - uVar5) + 1)) {
    TSparseGrid3<unsigned_int>::
    AllocatedIteration<_UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius_::__l12::<lambda_2>_>
              (&this->RootCells,(<lambda_2> *)&local_48);
  }
  else {
    TSparseGrid3<unsigned_int>::
    RangeIteration<_UE::Geometry::FSparseDynamicPointOctree3::IterateRootsInRadius_::__l10::<lambda_1>_>
              (&this->RootCells,(FVector3i *)&local_88._s_0,(FVector3i *)&local_98._s_0,&local_48);
  }
  return;
}

// ParallelInsertDensePointSet @ 1436123e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet
          (FSparseDynamicPointOctree3 *this,int param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  TDynamicVector<int,512> *pTVar9;
  longlong lVar10;
  uint *puVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  FSparseDynamicPointOctree3 *pFVar15;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *this_00;
  ulong64 uVar16;
  ulong64 uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStackY_2d8 [32];
  <lambda_1> local_288;
  ForAnyElementType local_280;
  uint local_278;
  uint local_274;
  uint local_270 [2];
  ForAnyElementType local_268;
  undefined8 local_260;
  ForAnyElementType local_258;
  int local_250 [2];
  TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>
  local_248;
  ForAnyElementType local_240;
  int local_238 [4];
  FSparseDynamicPointOctree3 *local_228;
  uint local_218;
  uint uStack_214;
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_1d8;
  int iStack_1c8;
  int iStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512> *local_198;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_190;
  TArrayView<std::nullptr_t,int> local_188;
  code *local_178;
  ForAnyElementType **local_170;
  FScriptContainerElement *local_168;
  uint *local_160;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  ForAnyElementType **local_140;
  ForAnyElementType *local_138;
  FSparseDynamicPointOctree3 *local_130;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_128;
  ForAnyElementType *local_120;
  FSparseDynamicPointOctree3 *local_118;
  ForAnyElementType *local_110;
  ForAnyElementType *local_108;
  TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *local_100;
  _RTL_CRITICAL_SECTION *local_f8;
  _RTL_CRITICAL_SECTION *local_f0;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,0>,FDefaultSetAllocator>
  local_e8;
  _RTL_CRITICAL_SECTION local_98;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = &this->Cells;
  local_238[2] = param_1;
  local_228 = this;
  local_198 = this_00;
  local_190 = param_2;
  if (((this->Cells).CurBlock == 0) && ((this->Cells).CurBlockUsed == 0)) {
    lVar19 = 0;
    local_258.Data = (FScriptContainerElement *)0x0;
    local_250[0] = 0;
    local_250[1] = 0;
    if (param_1 < 1) {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,param_1,&local_258,local_250,local_250 + 1);
    }
    local_138 = &local_258;
    local_178 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_1>,void,int>
                ::Call;
    local_170 = &local_138;
    local_188.DataPtr = (void **)0x0;
    local_188.ArrayNum = 0;
    local_130 = this;
    local_128 = param_2;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_1,1,(TFunctionRef<void___cdecl(int)> *)&local_178,local_288
               ,None,&local_188);
    uVar16 = 0;
    local_e8.Elements._44_4_ = 0x80;
    local_e8.Elements._0_8_ = 0;
    local_278 = 0;
    local_e8.Elements._8_8_ = 0;
    local_e8.Elements._32_8_ = 0;
    local_e8.Elements._40_4_ = 0;
    local_e8.Elements._48_4_ = 0xffffffff;
    local_e8.Elements._52_4_ = 0;
    local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_e8.HashSize = 0;
    local_280.Data = (FScriptContainerElement *)0x0;
    local_274 = 0;
    local_268.Data = (FScriptContainerElement *)0x0;
    local_260 = 0;
    uVar17 = uVar16;
    uVar13 = uVar16;
    if (0 < param_1) {
      do {
        uVar8 = (uint)uVar13;
        local_270[0] = 0;
        uVar14 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < local_250[0]) {
          uVar5 = uVar14;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar3.Data = local_258.Data;
        uVar5 = FCrc::MemCrc_DEPRECATED(local_258.Data + lVar19 + 4,0xc,0);
        iVar6 = TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,0>,FDefaultSetAllocator>
                ::FindIndexByHash<UE::Geometry::FVector3i>
                          (&local_e8,uVar5,(FVector3i *)(FVar3.Data + lVar19 + 4));
        if (iVar6 == -1) {
LAB_143612636:
          local_270[0] = (uint)uVar17;
          uVar17 = (ulong64)(local_270[0] + 1);
          uVar5 = 0;
          if ((int)uVar8 < local_250[0]) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_160 = local_270;
          local_168 = local_258.Data + lVar19 + 4;
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    (&local_e8,&local_1d8,(bool *)&local_168);
          pTVar9 = ::operator_new(0x18);
          if (pTVar9 == (TDynamicVector<int,512> *)0x0) {
            pTVar9 = (TDynamicVector<int,512> *)0x0;
          }
          else {
            pTVar9->CurBlock = 0;
            pTVar9->CurBlockUsed = 0;
            (pTVar9->Blocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (pTVar9->Blocks).ArrayNum = 0;
            (pTVar9->Blocks).ArrayMax = 0;
            TDynamicVector<int,512>::AddAllocatedBlock(pTVar9);
          }
          local_248.Ptr = pTVar9;
          if (((local_268.Data <= (FScriptContainerElement *)&local_248) &&
              ((FScriptContainerElement *)&local_248 <
               local_268.Data + (longlong)local_260._4_4_ * 8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar6 = (int)local_260;
          if ((int)local_260 == local_260._4_4_) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_268,(int *)((longlong)&local_260 + 4));
          }
          local_260 = CONCAT44(local_260._4_4_,iVar6 + 1);
          *(TDynamicVector<int,512> **)(local_268.Data + (longlong)iVar6 * 8) = local_248.Ptr;
          local_248.Ptr = (TDynamicVector<int,512> *)0x0;
          uVar5 = 0;
          if ((int)uVar8 < local_250[0]) {
            uVar5 = uVar14;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar12 = local_258.Data + lVar19 + 4;
          if (((local_280.Data <= pFVar12) &&
              (pFVar12 < local_280.Data + (longlong)(int)local_274 * 0xc)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (local_278 == local_274) {
            local_278 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&local_280,(int *)&local_274);
          }
          *(undefined8 *)(local_280.Data + (longlong)(int)local_278 * 0xc) = *(undefined8 *)pFVar12;
          *(undefined4 *)(local_280.Data + (longlong)(int)local_278 * 0xc + 8) =
               *(undefined4 *)(pFVar12 + 8);
          local_278 = local_278 + 1;
        }
        else {
          lVar10 = local_e8.Elements._0_8_ + (longlong)iVar6 * 0x18;
          puVar11 = (uint *)(lVar10 + 0xc);
          if (lVar10 == 0) {
            puVar11 = (uint *)0x0;
          }
          if (puVar11 == (uint *)0x0) goto LAB_143612636;
          local_270[0] = *puVar11;
        }
        uVar5 = local_270[0];
        uVar14 = 0;
        if ((int)local_270[0] < (int)local_260) {
          uVar14 = ~local_270[0] >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar9 = *(TDynamicVector<int,512> **)(local_268.Data + (longlong)(int)uVar5 * 8);
        uVar5 = pTVar9->CurBlockUsed;
        if (uVar5 == 0x200) {
          if (pTVar9->CurBlock == (pTVar9->Blocks).ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(pTVar9);
          }
          pTVar9->CurBlock = pTVar9->CurBlock + 1;
          uVar5 = 0;
          pTVar9->CurBlockUsed = 0;
        }
        uVar16 = uVar16 + 1;
        lVar19 = lVar19 + 0x14;
        *(uint *)(*(longlong *)
                   ((pTVar9->Blocks).AllocatorInstance.Data + (longlong)(int)pTVar9->CurBlock * 8) +
                 (longlong)(int)uVar5 * 4) = uVar8;
        pTVar9->CurBlockUsed = pTVar9->CurBlockUsed + 1;
        uVar13 = (ulonglong)(uVar8 + 1);
      } while ((longlong)uVar16 < (longlong)param_1);
      uVar16 = (ulong64)local_278;
      this = local_228;
      this_00 = local_198;
    }
    local_240.Data = (FScriptContainerElement *)0x0;
    local_238[0] = 0;
    local_238[1] = 0;
    iVar6 = (int)uVar16;
    if (iVar6 < 1) {
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar16);
      }
    }
    else {
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar6,&local_240,local_238,local_238 + 1);
      uVar16 = (ulong64)local_278;
    }
    uVar13 = 0;
    if (0 < (int)uVar16) {
      pFVar15 = this;
      uVar18 = uVar13;
      uVar20 = uVar13;
      do {
        uVar14 = (uint)uVar13;
        uVar5 = 0;
        if ((int)uVar14 < (int)uVar16) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_1d8.Value._4_4_ = local_1d8.Value._4_4_ & 0xffffff00;
        uStack_1b4 = 0xffffffff;
        uStack_1b0 = 0xffffffff;
        auStack_210._0_4_ = (undefined4)*(undefined8 *)(local_280.Data + uVar20);
        auStack_210._4_4_ =
             (undefined4)((ulonglong)*(undefined8 *)(local_280.Data + uVar20) >> 0x20);
        local_1c0 = *(undefined4 *)(local_280.Data + uVar20 + 8);
        local_1d8.Value._0_4_ = 0xffffffff;
        local_218 = 0xffffffff;
        uStack_214 = local_1d8.Value._4_4_;
        uStack_1bc = 0xffffffff;
        uStack_1b8 = 0xffffffff;
        auStack_210._8_8_ = CONCAT44(0xffffffff,local_1c0);
        uStack_200 = 0xffffffffffffffff;
        uStack_1a4 = 0xffffffff;
        uStack_1a0 = 0xffffffff;
        uStack_1ac = 0xffffffff;
        uStack_1a8 = 0xffffffff;
        local_1f8 = 0xffffffffffffffff;
        uStack_1f0 = 0xffffffffffffffff;
        local_1e8 = 0xffffffff;
        iStack_1c8 = auStack_210._0_4_;
        iStack_1c4 = auStack_210._4_4_;
        local_218 = FRefCountVector::Allocate(&this->CellRefCounts);
        uVar5 = this_00->CurBlock;
        uVar8 = (pFVar15->Cells).CurBlockUsed;
        uVar7 = uVar5 * 0x200 + uVar8;
        if (local_218 == uVar7) {
          if (uVar8 == 0x200) {
            if (uVar5 == (pFVar15->Cells).Blocks.ArrayNum - 1U) {
              TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::AddAllocatedBlock(this_00);
            }
            this_00->CurBlock = this_00->CurBlock + 1;
            uVar5 = this_00->CurBlock;
            this_00->CurBlockUsed = 0;
          }
          uVar8 = this_00->CurBlockUsed;
LAB_143612ae1:
          lVar10 = (longlong)(int)uVar8 * 0x34;
          lVar19 = *(longlong *)
                    ((this_00->Blocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
          *(undefined8 *)(lVar19 + lVar10) = CONCAT44(uStack_214,local_218);
          ((undefined8 *)(lVar19 + lVar10))[1] = CONCAT44(auStack_210._4_4_,auStack_210._0_4_);
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar10);
          *puVar1 = auStack_210._8_8_;
          puVar1[1] = uStack_200;
          puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar10);
          *puVar1 = local_1f8;
          puVar1[1] = uStack_1f0;
          *(undefined4 *)(lVar19 + 0x30 + lVar10) = local_1e8;
          this_00->CurBlockUsed = this_00->CurBlockUsed + 1;
        }
        else {
          if (uVar7 < local_218) {
            TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::Resize(this_00,local_218);
            uVar8 = this_00->CurBlockUsed;
            if (uVar8 == 0x200) {
              if (this_00->CurBlock == (pFVar15->Cells).Blocks.ArrayNum - 1U) {
                TDynamicVector<UE::Geometry::FSparsePointOctreeCell,512>::AddAllocatedBlock(this_00)
                ;
              }
              this_00->CurBlock = this_00->CurBlock + 1;
              uVar8 = 0;
              this_00->CurBlockUsed = 0;
            }
            uVar5 = this_00->CurBlock;
            goto LAB_143612ae1;
          }
          lVar10 = (ulonglong)(local_218 & 0x1ff) * 0x34;
          lVar19 = *(longlong *)
                    ((this_00->Blocks).AllocatorInstance.Data + (ulonglong)(local_218 >> 9) * 8);
          *(undefined8 *)(lVar19 + lVar10) = CONCAT44(uStack_214,local_218);
          ((undefined8 *)(lVar19 + lVar10))[1] = CONCAT44(auStack_210._4_4_,auStack_210._0_4_);
          puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar10);
          *puVar1 = auStack_210._8_8_;
          puVar1[1] = uStack_200;
          puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar10);
          *puVar1 = local_1f8;
          puVar1[1] = uStack_1f0;
          *(undefined4 *)(lVar19 + 0x30 + lVar10) = local_1e8;
        }
        puVar11 = TSparseGrid3<unsigned_int>::Get(&this->RootCells,(FVector3i *)auStack_210,true);
        *puVar11 = local_218;
        uVar8 = local_218 & 0x1ff;
        lVar19 = *(longlong *)
                  ((pFVar15->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(local_218 >> 9) * 8)
        ;
        uVar5 = 0;
        if ((int)uVar14 < local_238[0]) {
          uVar5 = ~uVar14 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar13 = (ulonglong)(uVar14 + 1);
        uVar20 = uVar20 + 0xc;
        *(ulonglong *)(local_240.Data + uVar18) = (ulonglong)uVar8 * 0x34 + lVar19;
        uVar18 = uVar18 + 8;
        uVar16 = (ulong64)local_278;
        pFVar15 = local_228;
      } while ((int)(uVar14 + 1) < (int)local_278);
    }
    local_278 = 0;
    if (local_274 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_280,0,(int *)&local_274);
    }
    pFVar15 = local_228;
    TDynamicVector<unsigned_int,512>::Resize(&local_228->PointIDToCellMap,local_238[2]);
    InitializeCriticalSectionAndSpinCount(&local_70,4000);
    InitializeCriticalSectionAndSpinCount(&local_98,4000);
    local_120 = &local_240;
    local_110 = &local_268;
    local_118 = pFVar15;
    local_108 = &local_258;
    local_100 = local_190;
    local_f8 = &local_70;
    local_f0 = &local_98;
    local_148 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FSparseDynamicPointOctree3::ParallelInsertDensePointSet'::__l2::<lambda_2>,void,int>
                ::Call;
    local_140 = &local_120;
    local_158.DataPtr = (void **)0x0;
    local_158.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_238[0],1,(TFunctionRef<void___cdecl(int)> *)&local_148,
               local_288,Unbalanced,&local_158);
    DeleteCriticalSection(&local_98);
    DeleteCriticalSection(&local_70);
    if (local_240.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_240.Data);
    }
    DestructItems<TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>,int>
              ((TUniquePtr<UE::Geometry::TDynamicVector<int,512>,TDefaultDelete<UE::Geometry::TDynamicVector<int,512>_>_>
                *)local_268.Data,(int)local_260);
    if (local_268.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data);
    }
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    local_e8.HashSize = 0;
    if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e8.Elements);
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data);
    }
  }
  else {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3954211054661139908>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\SparseDynamicPointOctree3.h"
                       ,0x23c,"Cells.IsEmpty()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// PointToIndex @ 1436142e0

FVector3i * __thiscall
UE::Geometry::FSparseDynamicPointOctree3::PointToIndex
          (FSparseDynamicPointOctree3 *this,FVector3i *__return_storage_ptr__,uint param_1,
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

// RangeQuery @ 1436156f0

void __thiscall
UE::Geometry::FSparseDynamicPointOctree3::RangeQuery
          (FSparseDynamicPointOctree3 *this,TAxisAlignedBox3<double> *param_1,
          TFunctionRef<bool___cdecl(int)> *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  uint *puVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_128;
  TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> local_120;
  FVector3i_u_0 local_110;
  FVector3i_u_0 local_100 [2];
  FVector3i_u_0 local_e8;
  FVector3i_u_0 local_d8;
  <lambda_1> local_c8;
  <lambda_2> local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  
  iVar6 = 0;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  pTVar7 = &local_120;
  if (param_4 !=
      (TArray<UE::Geometry::FSparsePointOctreeCell_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = param_4;
  }
  pTVar7->ArrayNum = 0;
  piVar1 = &pTVar7->ArrayMax;
  if (pTVar7->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar7->AllocatorInstance,0,piVar1);
    iVar6 = pTVar7->ArrayNum;
  }
  if (*piVar1 < 0x80) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x80,&pTVar7->AllocatorInstance,iVar6,piVar1);
  }
  PointToIndex(this,(FVector3i *)&local_100[0]._s_0,0,&param_1->Min);
  PointToIndex(this,(FVector3i *)&local_110._s_0,0,&param_1->Max);
  local_e8._0_8_ = local_110._0_8_;
  local_e8._s_0.Z = local_110._s_0.Z;
  local_d8._0_8_ = local_100[0]._0_8_;
  local_d8._s_0.Z = local_100[0]._s_0.Z;
  local_c8.__this = this;
  local_c8.Queue = pTVar7;
  TSparseGrid3<unsigned_int>::
  RangeIteration<_UE::Geometry::FSparseDynamicPointOctree3::RangeQuery_::__l2::<lambda_1>_>
            (&this->RootCells,(FVector3i *)&local_d8._s_0,(FVector3i *)&local_e8._s_0,&local_c8);
  iVar6 = pTVar7->ArrayNum;
  do {
    if (iVar6 < 1) {
      if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.AllocatorInstance.Data);
      }
      return;
    }
    puVar8 = *(uint **)((pTVar7->AllocatorInstance).Data + (longlong)pTVar7->ArrayNum * 8 + -8);
    pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
    uVar2 = *puVar8;
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 <
         (int)((this->CellPointLists).Lists.CurBlock * 0x200 +
              (this->CellPointLists).Lists.CurBlockUsed))) &&
       (*(longlong *)
         (*(longlong *)
           ((this->CellPointLists).Lists.Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8
           ) + 0x50 + (ulonglong)(uVar2 & 0x1ff) * 0x60) != 0)) {
      local_b8.PredicateFunc = param_2;
      local_b8.PointIDs = param_3;
      TSparseListSet<int>::
      Enumerate<_UE::Geometry::FSparseDynamicPointOctree3::RangeQuery_::__l7::<lambda_2>_>
                (&this->CellPointLists,uVar2,&local_b8);
    }
    puVar8 = puVar8 + 5;
    lVar9 = 8;
    do {
      uVar2 = *puVar8;
      if (uVar2 != 0xffffffff) {
        local_128 = *(longlong *)
                     ((this->Cells).Blocks.AllocatorInstance.Data + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 0x34;
        local_98 = (param_1->Min).field0_0x0._s_0.Z;
        dStack_90 = (param_1->Max).field0_0x0._s_0.X;
        local_a8 = (param_1->Min).field0_0x0._s_0.X;
        dStack_a0 = (param_1->Min).field0_0x0._s_0.Y;
        local_88 = (param_1->Max).field0_0x0._s_0.Y;
        dStack_80 = (param_1->Max).field0_0x0._s_0.Z;
        dVar11 = this->RootDimension / (double)(ulonglong)(1L << (*(byte *)(local_128 + 4) & 0x1f));
        dVar10 = (double)*(int *)(local_128 + 8) * dVar11;
        dVar12 = (double)*(int *)(local_128 + 0xc) * dVar11;
        dVar13 = (double)*(int *)(local_128 + 0x10) * dVar11;
        if ((((dVar10 < dStack_90) && (local_a8 < dVar11 + dVar10)) &&
            ((dVar12 < local_88 && ((dStack_a0 < dVar11 + dVar12 && (dVar13 < dStack_80)))))) &&
           (local_98 < dVar11 + dVar13)) {
          pFVar3 = (pTVar7->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = pTVar7->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar7->AllocatorInstance,piVar1);
          }
          pTVar7->ArrayNum = iVar6 + 1;
          *(longlong *)((pTVar7->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_128;
        }
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar6 = pTVar7->ArrayNum;
  } while( true );
}

