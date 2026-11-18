// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Allocate @ 148721920

uint __thiscall
UE::SVT::FTileAllocator::Allocate
          (FTileAllocator *this,uint param_1,uint param_2,ushort param_3,uint param_4,uint param_5,
          bool param_6,FAllocation *param_7)

{
  FAllocation *pFVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (((this->FreeHeap).HeapNum == 0) ||
     (uVar8 = *(this->FreeHeap).Heap,
     param_1 <= (int)((this->FreeHeap).Keys[uVar8] >> 0x20) + param_2)) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar9 = ((uVar8 >> 0x10 & 0xff) * (this->ResolutionInTiles).field0_0x0._s_0.Y +
            (uVar8 >> 8 & 0xff)) * (this->ResolutionInTiles).field0_0x0._s_0.X + (uVar8 & 0xff);
    uVar7 = 0;
    if ((int)uVar9 < (this->Allocations).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
    pFVar3 = (this->Allocations).AllocatorInstance.Data;
    pFVar1 = (FAllocation *)(pFVar3 + (longlong)(int)uVar9 * 8);
    uVar2 = *(ushort *)(pFVar3 + (longlong)(int)uVar9 * 8 + 6);
    if ((uVar2 & 2) == 0) {
      param_7->TileIndexInFrame = 0;
      param_7->FrameIndex = 0;
      *(undefined2 *)&param_7->field_0x6 = 0;
    }
    else {
      if (((uVar2 & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Allocation.bIsLocked",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                             ,0x7ff,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return uVar8;
      }
      *param_7 = *pFVar1;
      this->NumAllocated = this->NumAllocated - 1;
    }
    pFVar1->TileIndexInFrame = param_4;
    pFVar1->bIsLocked = 0;
    pFVar1->FrameIndex = param_3;
    *(ushort *)&pFVar1->field_0x6 = *(ushort *)&pFVar1->field_0x6 | (ushort)(param_6 | 2);
    if (param_6) {
      puVar4 = (this->FreeHeap).Heap;
      uVar7 = *puVar4;
      (this->FreeHeap).HeapNum = (this->FreeHeap).HeapNum - 1;
      *puVar4 = puVar4[(this->FreeHeap).HeapNum];
      (this->FreeHeap).HeapIndexes[*(this->FreeHeap).Heap] = 0;
      (this->FreeHeap).HeapIndexes[uVar7] = 0xffffffff;
      FBinaryHeap<unsigned___int64,unsigned_int>::DownHeap(&this->FreeHeap,0);
    }
    else {
      FBinaryHeap<unsigned___int64,unsigned_int>::Update
                (&this->FreeHeap,CONCAT44(param_1,param_5),uVar8);
    }
    this->NumAllocated = this->NumAllocated + 1;
    if ((this->TileCapacity < this->NumAllocated) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumAllocated <= TileCapacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                           ,0x81c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return uVar8;
    }
  }
  return uVar8;
}

// Free @ 148735020

void __thiscall UE::SVT::FTileAllocator::Free(FTileAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_1 & 0xffffff;
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TileCoord",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                       ,0x82e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = uVar5 >> 0x10;
  uVar4 = uVar5 >> 8 & 0xff;
  if ((((((int)(param_1 & 0xff) < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
        ((int)(uVar5 >> 8 & 0xff) < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
       ((int)uVar3 < UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) ||
      (((this->ResolutionInTiles).field0_0x0._s_0.X <= (int)(param_1 & 0xff) ||
       ((this->ResolutionInTiles).field0_0x0._s_0.Y <= (int)uVar4)))) ||
     ((this->ResolutionInTiles).field0_0x0._s_0.Z <= (int)uVar3)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInBounds(UnpackedTileCoord, FIntVector3::ZeroValue, ResolutionInTiles)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                       ,0x832,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = (uVar3 * (this->ResolutionInTiles).field0_0x0._s_0.Y + uVar4) *
          (this->ResolutionInTiles).field0_0x0._s_0.X + (param_1 & 0xff);
  uVar3 = 0;
  if ((int)uVar4 < (this->Allocations).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(undefined8 *)((this->Allocations).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = 0;
  if ((uVar5 < (this->FreeHeap).IndexSize) && ((this->FreeHeap).HeapIndexes[uVar5] != 0xffffffff)) {
    (this->FreeHeap).Keys[uVar5] = 0;
    uVar5 = (this->FreeHeap).HeapIndexes[uVar5];
    if ((uVar5 == 0) || ((this->FreeHeap).Keys[(this->FreeHeap).Heap[uVar5 - 1 >> 1]] == 0)) {
      FBinaryHeap<unsigned___int64,unsigned_int>::DownHeap(&this->FreeHeap,uVar5);
    }
    else {
      FBinaryHeap<unsigned___int64,unsigned_int>::UpHeap(&this->FreeHeap,uVar5);
    }
  }
  else {
    FBinaryHeap<unsigned___int64,unsigned_int>::Add(&this->FreeHeap,0,uVar5);
  }
  if (this->NumAllocated < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumAllocated > 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                       ,0x843,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumAllocated = this->NumAllocated - 1;
  return;
}

// GetAllocatedSize @ 148738b60

ulong64 __thiscall UE::SVT::FTileAllocator::GetAllocatedSize(FTileAllocator *this)

{
  return ((ulonglong)(this->FreeHeap).IndexSize * 3 + (longlong)(this->Allocations).ArrayMax * 2 +
         (ulonglong)(this->FreeHeap).HeapSize) * 4;
}

// Init @ 1487432f0

void __thiscall UE::SVT::FTileAllocator::Init(FTileAllocator *this,TIntVector3<int> *param_1)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  ulonglong uVar3;
  uint uVar4;
  ulong64 *puVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulong64 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar18;
  uint local_res8;
  uint local_res10;
  ulonglong uVar17;
  
  if (((((param_1->field0_0x0)._s_0.X < 1) || ((param_1->field0_0x0)._s_0.Y < 1)) ||
      ((param_1->field0_0x0)._s_0.Z < 1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResolutionInTiles.X > 0 && InResolutionInTiles.Y > 0 && InResolutionInTiles.Z > 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SparseVolumeTexture\\SparseVolumeTextureStreamingManager.cpp"
                         ,0x7cd,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (this->FreeHeap).HeapNum = 0;
  memset((this->FreeHeap).HeapIndexes,0xff,(ulonglong)(this->FreeHeap).IndexSize << 2);
  piVar2 = &(this->Allocations).ArrayNum;
  *(undefined8 *)&(this->ResolutionInTiles).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  iVar10 = (param_1->field0_0x0)._s_0.Z;
  (this->ResolutionInTiles).field0_0x0._s_0.Z = iVar10;
  iVar9 = (this->ResolutionInTiles).field0_0x0._s_0.X;
  this->NumAllocated = 1;
  uVar18 = iVar9 * iVar10 * (this->ResolutionInTiles).field0_0x0._s_0.Y;
  this->TileCapacity = uVar18;
  iVar10 = *piVar2;
  if (iVar10 < (int)uVar18) {
    iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar18 - iVar10,&(this->Allocations).AllocatorInstance,piVar2,
                       &(this->Allocations).ArrayMax);
    memset((this->Allocations).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
           (longlong)(int)(uVar18 - iVar10) << 3);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar10) {
      uVar16 = iVar10 - uVar18;
      if (((int)(uVar16 | uVar18) < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar16 != 0) {
        _Dst = (this->Allocations).AllocatorInstance.Data + (longlong)(int)uVar18 * 8;
        iVar10 = (*piVar2 - uVar16) - uVar18;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar16 * 8,(longlong)iVar10 << 3);
        }
        *piVar2 = *piVar2 - uVar16;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&(this->Allocations).AllocatorInstance,*piVar2,&(this->Allocations).ArrayMax)
        ;
      }
    }
  }
  if ((*piVar2 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_res10 = 0;
  *(undefined8 *)(this->Allocations).AllocatorInstance.Data = 0x3ffffffffffff;
  if (0 < (this->ResolutionInTiles).field0_0x0._s_0.Z) {
    do {
      local_res8 = 0;
      if (0 < (this->ResolutionInTiles).field0_0x0._s_0.Y) {
        do {
          uVar18 = 0;
          if (0 < (this->ResolutionInTiles).field0_0x0._s_0.X) {
            do {
              uVar16 = uVar18 & 0xff | ((local_res10 & 0xff) << 8 | local_res8 & 0xff) << 8;
              uVar17 = (ulonglong)uVar16;
              if (uVar16 != 0) {
                uVar15 = (this->FreeHeap).HeapSize;
                if ((this->FreeHeap).HeapNum == uVar15) {
                  uVar15 = uVar15 * 2;
                  if (uVar15 < 0x20) {
                    uVar15 = 0x20;
                  }
                  if (uVar15 == 0) {
                    (this->FreeHeap).HeapNum = 0;
                    (this->FreeHeap).HeapSize = 0;
                    operator_delete__((this->FreeHeap).Heap);
                    (this->FreeHeap).Heap = (uint *)0x0;
                  }
                  else {
                    uVar13 = SUB168(ZEXT816(4) * ZEXT416(uVar15),0);
                    if (SUB168(ZEXT816(4) * ZEXT416(uVar15),8) != 0) {
                      uVar13 = 0xffffffffffffffff;
                    }
                    puVar14 = operator_new__(uVar13);
                    uVar11 = (this->FreeHeap).HeapSize;
                    if (uVar11 != 0) {
                      memcpy(puVar14,(this->FreeHeap).Heap,(ulonglong)uVar11 << 2);
                      operator_delete__((this->FreeHeap).Heap);
                    }
                    (this->FreeHeap).Heap = puVar14;
                    uVar11 = uVar15;
                    if ((this->FreeHeap).HeapNum < uVar15) {
                      uVar11 = (this->FreeHeap).HeapNum;
                    }
                    (this->FreeHeap).HeapNum = uVar11;
                    (this->FreeHeap).HeapSize = uVar15;
                  }
                }
                if ((this->FreeHeap).IndexSize <= uVar16) {
                  uVar3 = uVar17 * 2 + 1;
                  lVar6 = 0x3f;
                  if (uVar3 != 0) {
                    for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                    }
                  }
                  uVar15 = 1 << ((byte)lVar6 & 0x1f);
                  if (uVar15 < 0x20) {
                    uVar15 = 0x20;
                  }
                  FBinaryHeap<unsigned___int64,unsigned_int>::ResizeIndexes(&this->FreeHeap,uVar15);
                }
                uVar15 = (this->FreeHeap).HeapNum;
                (this->FreeHeap).HeapNum = uVar15 + 1;
                (this->FreeHeap).Heap[uVar15] = uVar16;
                (this->FreeHeap).Keys[uVar17] = 0;
                (this->FreeHeap).HeapIndexes[uVar17] = uVar15;
                uVar16 = (this->FreeHeap).Heap[uVar15];
                uVar11 = uVar15;
                if (uVar15 != 0) {
                  do {
                    puVar5 = (this->FreeHeap).Keys;
                    uVar1 = uVar11 - 1;
                    puVar14 = (this->FreeHeap).Heap;
                    uVar12 = uVar1 >> 1;
                    uVar4 = puVar14[uVar12];
                    if (puVar5[uVar4] <= puVar5[uVar16]) break;
                    puVar14[uVar11] = uVar4;
                    (this->FreeHeap).HeapIndexes[(this->FreeHeap).Heap[uVar11]] = uVar11;
                    uVar11 = uVar12;
                  } while (uVar1 >> 1 != 0);
                  if (uVar11 != uVar15) {
                    (this->FreeHeap).Heap[uVar11] = uVar16;
                    (this->FreeHeap).HeapIndexes[(this->FreeHeap).Heap[uVar11]] = uVar11;
                  }
                }
              }
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (this->ResolutionInTiles).field0_0x0._s_0.X);
          }
          local_res8 = local_res8 + 1;
        } while ((int)local_res8 < (this->ResolutionInTiles).field0_0x0._s_0.Y);
      }
      local_res10 = local_res10 + 1;
    } while ((int)local_res10 < (this->ResolutionInTiles).field0_0x0._s_0.Z);
  }
  return;
}

// UpdateUsage @ 14875ebc0

void __thiscall
UE::SVT::FTileAllocator::UpdateUsage(FTileAllocator *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (((this->FreeHeap).IndexSize <= param_2) ||
     ((this->FreeHeap).HeapIndexes[param_2] == 0xffffffff)) {
    return;
  }
  (this->FreeHeap).Keys[param_2] = CONCAT44(param_1,param_3);
  uVar1 = (this->FreeHeap).HeapIndexes[param_2];
  if ((uVar1 != 0) &&
     (CONCAT44(param_1,param_3) < (this->FreeHeap).Keys[(this->FreeHeap).Heap[uVar1 - 1 >> 1]])) {
    FBinaryHeap<unsigned___int64,unsigned_int>::UpHeap(&this->FreeHeap,uVar1);
    return;
  }
  FBinaryHeap<unsigned___int64,unsigned_int>::DownHeap(&this->FreeHeap,uVar1);
  return;
}

