// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FTexturePageLocks @ 1458cca80

FTexturePageLocks * __thiscall FTexturePageLocks::FTexturePageLocks(FTexturePageLocks *this)

{
  FHashTable::FHashTable(&this->TileHash,0x400,0);
  FHashTable::FHashTable(&this->ProducerToTileIndex,0x400,0);
  (this->LockedTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockedTiles).ArrayNum = 0;
  (this->LockedTiles).ArrayMax = 0;
  (this->LockCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LockCounts).ArrayNum = 0;
  (this->LockCounts).ArrayMax = 0;
  (this->FreeIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIndices).ArrayNum = 0;
  (this->FreeIndices).ArrayMax = 0;
  return this;
}

// ~FTexturePageLocks @ 1458d0e30

void __thiscall FTexturePageLocks::~FTexturePageLocks(FTexturePageLocks *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FreeIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LockCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LockedTiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->ProducerToTileIndex).IndexSize != 0) {
    (this->ProducerToTileIndex).HashMask = 0;
    (this->ProducerToTileIndex).IndexSize = 0;
    operator_delete__((this->ProducerToTileIndex).Hash);
    (this->ProducerToTileIndex).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ProducerToTileIndex).NextIndex);
    (this->ProducerToTileIndex).NextIndex = (uint *)0x0;
  }
  if ((this->TileHash).IndexSize != 0) {
    (this->TileHash).HashMask = 0;
    (this->TileHash).IndexSize = 0;
    operator_delete__((this->TileHash).Hash);
    (this->TileHash).Hash = FHashTable::EmptyHash;
    operator_delete__((this->TileHash).NextIndex);
    (this->TileHash).NextIndex = (uint *)0x0;
  }
  return;
}

// AcquireIndex @ 1458d6320

uint __thiscall FTexturePageLocks::AcquireIndex(FTexturePageLocks *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (0 < (this->FreeIndices).ArrayNum) {
    iVar4 = (this->FreeIndices).ArrayNum;
    iVar6 = iVar4 + -1;
    uVar5 = *(uint *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar4 * 4 + -4);
    (this->FreeIndices).ArrayNum = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeIndices).AllocatorInstance,iVar6,&(this->FreeIndices).ArrayMax);
    return uVar5;
  }
  iVar4 = (this->LockedTiles).ArrayNum;
  piVar1 = &(this->LockedTiles).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LockedTiles).AllocatorInstance,piVar1);
  }
  (this->LockedTiles).ArrayNum = iVar4 + 1;
  DefaultConstructItems<FVirtualTextureLocalTile,int>
            ((this->LockedTiles).AllocatorInstance.Data + (longlong)iVar4 * 8,1);
  uVar5 = (this->LockCounts).ArrayNum;
  piVar1 = &(this->LockCounts).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&(this->LockCounts).AllocatorInstance,piVar1);
  }
  (this->LockCounts).ArrayNum = uVar5 + 1;
  *(undefined2 *)((this->LockCounts).AllocatorInstance.Data + (longlong)(int)uVar5 * 2) = 0;
  if ((this->LockedTiles).ArrayNum != (this->LockCounts).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockedTiles.Num() == LockCounts.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                       ,0x11,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
  }
  return uVar5;
}

// ForceUnlockAll @ 1458f7bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTexturePageLocks::ForceUnlockAll
          (FTexturePageLocks *this,FVirtualTextureProducerHandle *param_1,
          TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ForElementType<int> FVar2;
  uint *puVar3;
  code *pcVar4;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  ForElementType<int> FVar13;
  ForElementType<int> FVar14;
  ForElementType<int> FVar15;
  uint uVar16;
  undefined1 auStack_158 [32];
  ForElementType<int> local_138;
  ForElementType<int> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [4];
  uint local_104;
  uint local_100;
  uint local_fc;
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *local_f8;
  FVirtualTextureProducerHandle *local_f0;
  ForElementType<int> local_e8;
  ForElementType<int> local_d8;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  uVar7 = (param_1->PackedValue >> 0x10 ^ param_1->PackedValue) * -0x7a143595;
  FVar13 = (ForElementType<int>)0x0;
  local_d8.SecondaryData = (ForElementType<int>)0x0;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_50 = 0;
  local_4c = 0x20;
  local_f0 = param_1;
  local_f8 = param_2;
  local_fc = local_50;
  FVar15 = local_130;
  for (uVar7 = (this->ProducerToTileIndex).Hash
               [(uVar7 >> 0x10 ^ uVar7) & (this->ProducerToTileIndex).HashMask]; local_50 = local_fc
      , uVar7 != 0xffffffff; uVar7 = (this->ProducerToTileIndex).NextIndex[uVar7]) {
    iVar8 = (this->LockedTiles).ArrayNum;
    local_130 = (ForElementType<int>)(longlong)iVar8;
    uVar9 = 0;
    if ((int)uVar7 < iVar8) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_138 = (ForElementType<int>)(longlong)(int)uVar7;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      FVar13 = local_d8.SecondaryData;
      FVar15 = local_130;
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_130 = FVar15;
    FVar15 = (ForElementType<int>)(longlong)(int)uVar7;
    if (*(uint *)((this->LockedTiles).AllocatorInstance.Data + (longlong)FVar15 * 8) ==
        param_1->PackedValue) {
      iVar8 = (this->LockCounts).ArrayNum;
      uVar9 = 0;
      if ((int)uVar7 < iVar8) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (local_138 = FVar15, local_130 = (ForElementType<int>)(longlong)iVar8,
         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar13 = local_d8.SecondaryData, bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(short *)((this->LockCounts).AllocatorInstance.Data + (longlong)FVar15 * 2) != 0) {
        FVar15 = (ForElementType<int>)&local_d8;
        if (FVar13 != (ForElementType<int>)0x0) {
          FVar15 = FVar13;
        }
        local_104 = uVar7;
        if ((ulonglong)FVar15 <= &local_104) {
          FVar15 = (ForElementType<int>)&local_d8;
          if (FVar13 != (ForElementType<int>)0x0) {
            FVar15 = FVar13;
          }
          if ((FScriptContainerElement *)&local_104 <
              (FScriptContainerElement *)((longlong)FVar15 + (longlong)(int)local_4c * 4)) {
            local_120 = (longlong)(int)local_50;
            local_118 = 4;
            local_130 = (ForElementType<int>)&local_d8;
            if (FVar13 != (ForElementType<int>)0x0) {
              local_130 = FVar13;
            }
            local_138 = (ForElementType<int>)&local_104;
            local_128 = (longlong)(int)local_4c;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            FVar13 = local_d8.SecondaryData;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_d8,(int *)&local_4c);
          FVar13 = local_d8.SecondaryData;
        }
        lVar10 = (longlong)(int)local_50;
        FVar15 = (ForElementType<int>)&local_d8;
        if (FVar13 != (ForElementType<int>)0x0) {
          FVar15 = FVar13;
        }
        local_50 = local_50 + 1;
        *(uint *)((longlong)FVar15 + lVar10 * 4) = local_104;
        FVar13 = local_d8.SecondaryData;
      }
    }
    local_fc = local_50;
    FVar15 = local_130;
  }
  uVar11 = (ulonglong)(int)local_fc;
  FVar14 = (ForElementType<int>)&local_d8;
  if (FVar13 != (ForElementType<int>)0x0) {
    FVar14 = FVar13;
  }
  local_e8 = (ForElementType<int>)((longlong)FVar14 + uVar11 * 4);
  local_130 = FVar15;
  do {
    FVar13 = local_e8;
    pTVar5 = local_f8;
    if (local_50 != (uint)uVar11) {
      local_108[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (FVar14 == FVar13) {
      if (local_d8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_d8.SecondaryData);
      }
      return;
    }
    uVar7 = *(uint *)FVar14;
    iVar8 = (this->LockedTiles).ArrayNum;
    uVar16 = ~uVar7 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar7 < iVar8) {
      uVar9 = uVar16;
    }
    if (uVar9 == 0) {
      local_138 = (ForElementType<int>)(longlong)(int)uVar7;
      local_130 = (ForElementType<int>)(longlong)iVar8;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar15 = (ForElementType<int>)(longlong)(int)uVar7;
    FVar13 = (ForElementType<int>)
             ((this->LockedTiles).AllocatorInstance.Data + (longlong)FVar15 * 8);
    if ((*(uint *)FVar13 != local_f0->PackedValue) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tile.GetProducerHandle() == ProducerHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                           ,0x5a,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar2 = (ForElementType<int>)(pTVar5->AllocatorInstance).Data;
    if (((ulonglong)FVar2 <= (ulonglong)FVar13) &&
       ((ulonglong)FVar13 < (ulonglong)((longlong)FVar2 + (longlong)pTVar5->ArrayMax * 8))) {
      local_120 = (longlong)pTVar5->ArrayNum;
      local_118 = 8;
      local_138 = FVar13;
      local_130 = FVar2;
      local_128 = (longlong)pTVar5->ArrayMax;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = pTVar5->ArrayNum;
    if (iVar8 == pTVar5->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar8 + 1;
    *(ulonglong *)((pTVar5->AllocatorInstance).Data + (longlong)iVar8 * 8) = *(ulonglong *)FVar13;
    FVar2 = (ForElementType<int>)(this->FreeIndices).AllocatorInstance.Data;
    local_100 = uVar7;
    if (((ulonglong)FVar2 <= &local_100) &&
       (lVar10 = (longlong)(this->FreeIndices).ArrayMax,
       (FScriptContainerElement *)&local_100 <
       (FScriptContainerElement *)((longlong)FVar2 + lVar10 * 4))) {
      local_120 = (longlong)(this->FreeIndices).ArrayNum;
      local_118 = 4;
      local_138 = (ForElementType<int>)&local_100;
      local_130 = FVar2;
      local_128 = lVar10;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->FreeIndices).ArrayNum;
    piVar1 = &(this->FreeIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeIndices).AllocatorInstance,piVar1);
    }
    (this->FreeIndices).ArrayNum = iVar8 + 1;
    *(uint *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_100;
    uVar11 = (*(ulonglong *)FVar13 >> 0x21 ^ *(ulonglong *)FVar13) * -0xae502812aa7333;
    uVar11 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
    if (uVar7 < (this->TileHash).IndexSize) {
      uVar11 = (uVar11 >> 0x21 ^ uVar11) & (ulonglong)(ushort)(this->TileHash).HashMask;
      puVar3 = (this->TileHash).Hash;
      puVar12 = puVar3 + uVar11;
      uVar9 = puVar3[uVar11];
      if (uVar9 == uVar7) {
        uVar9 = (this->TileHash).NextIndex[uVar7];
LAB_1458f80b5:
        *puVar12 = uVar9;
      }
      else if (uVar9 != 0xffffffff) {
        puVar3 = (this->TileHash).NextIndex;
        do {
          puVar12 = puVar3 + uVar9;
          uVar9 = puVar3[uVar9];
          if (uVar9 == uVar7) {
            uVar9 = puVar3[uVar7];
            goto LAB_1458f80b5;
          }
        } while (uVar9 != 0xffffffff);
      }
    }
    uVar9 = (*(uint *)FVar13 >> 0x10 ^ *(uint *)FVar13) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if (uVar7 < (this->ProducerToTileIndex).IndexSize) {
      uVar9 = (uVar9 >> 0x10 ^ uVar9) & (this->ProducerToTileIndex).HashMask;
      puVar3 = (this->ProducerToTileIndex).Hash;
      puVar12 = puVar3 + uVar9;
      uVar9 = puVar3[uVar9];
      if (uVar9 == uVar7) {
        uVar9 = (this->ProducerToTileIndex).NextIndex[uVar7];
LAB_1458f8125:
        *puVar12 = uVar9;
      }
      else if (uVar9 != 0xffffffff) {
        puVar3 = (this->ProducerToTileIndex).NextIndex;
        do {
          puVar12 = puVar3 + uVar9;
          uVar9 = puVar3[uVar9];
          if (uVar9 == uVar7) {
            uVar9 = puVar3[uVar7];
            goto LAB_1458f8125;
          }
        } while (uVar9 != 0xffffffff);
      }
    }
    iVar8 = (this->LockCounts).ArrayNum;
    uVar9 = 0;
    if ((int)uVar7 < iVar8) {
      uVar9 = uVar16;
    }
    if ((uVar9 == 0) &&
       (local_138 = FVar15, local_130 = (ForElementType<int>)(longlong)iVar8,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined2 *)((this->LockCounts).AllocatorInstance.Data + (longlong)FVar15 * 2) = 0;
    iVar8 = (this->LockedTiles).ArrayNum;
    uVar9 = 0;
    if ((int)uVar7 < iVar8) {
      uVar9 = uVar16;
    }
    if ((uVar9 == 0) &&
       (local_138 = FVar15, local_130 = (ForElementType<int>)(longlong)iVar8,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar14 = (ForElementType<int>)((longlong)FVar14 + 4);
    uVar11 = (ulonglong)local_fc;
    *(undefined8 *)((this->LockedTiles).AllocatorInstance.Data + (longlong)FVar15 * 8) = 0;
  } while( true );
}

// IsLocked @ 14590ea10

bool __thiscall
FTexturePageLocks::IsLocked(FTexturePageLocks *this,FVirtualTextureLocalTile *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (param_1->PackedValue >> 0x21 ^ param_1->PackedValue) * -0xae502812aa7333;
  uVar6 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
  uVar1 = (this->TileHash).Hash
          [(uVar6 >> 0x21 ^ uVar6) & (ulonglong)(ushort)(this->TileHash).HashMask];
  while( true ) {
    if (uVar1 == 0xffffffff) {
      return false;
    }
    uVar5 = 0;
    if ((int)uVar1 < (this->LockedTiles).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if (*(ulong64 *)((this->LockedTiles).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) ==
        param_1->PackedValue) {
      uVar5 = 0;
      if ((int)uVar1 < (this->LockCounts).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((*(short *)((this->LockCounts).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LockCounts[Index] > 0u",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                             ,0x6c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      return true;
    }
    uVar1 = (this->TileHash).NextIndex[uVar1];
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// Lock @ 14590fa40

bool __thiscall FTexturePageLocks::Lock(FTexturePageLocks *this,FVirtualTextureLocalTile *param_1)

{
  TArray<FVirtualTextureLocalTile,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  short sVar3;
  FVirtualTextureLocalTile FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  uVar13 = (param_1->PackedValue >> 0x21 ^ param_1->PackedValue) * -0xae502812aa7333;
  pTVar1 = &this->LockedTiles;
  uVar13 = (uVar13 >> 0x21 ^ uVar13) * -0x3b314601e57a13ad;
  uVar8 = (ushort)(uVar13 >> 0x21) ^ (ushort)uVar13;
  uVar10 = (this->TileHash).Hash[(ulonglong)(this->TileHash).HashMask & (ulonglong)uVar8];
  while( true ) {
    if (uVar10 == 0xffffffff) {
      if ((this->FreeIndices).ArrayNum < 1) {
        iVar9 = (this->LockedTiles).ArrayNum;
        piVar2 = &(this->LockedTiles).ArrayMax;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
          (this->LockedTiles).ArrayNum = iVar9;
        }
        (this->LockedTiles).ArrayNum = iVar9 + 1;
        DefaultConstructItems<FVirtualTextureLocalTile,int>
                  ((pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 8,1);
        uVar10 = (this->LockCounts).ArrayNum;
        piVar2 = &(this->LockCounts).ArrayMax;
        if (uVar10 == *piVar2) {
          uVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&(this->LockCounts).AllocatorInstance,piVar2);
        }
        (this->LockCounts).ArrayNum = uVar10 + 1;
        *(undefined2 *)((this->LockCounts).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) = 0;
        if (((this->LockedTiles).ArrayNum != (this->LockCounts).ArrayNum) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("LockedTiles.Num() == LockCounts.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                               ,0x11,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else {
        iVar9 = (this->FreeIndices).ArrayNum;
        iVar14 = iVar9 + -1;
        uVar10 = *(uint *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar9 * 4 + -4);
        (this->FreeIndices).ArrayNum = iVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->FreeIndices).AllocatorInstance,iVar14,&(this->FreeIndices).ArrayMax);
      }
      FVar4 = *param_1;
      uVar11 = 0;
      if ((int)uVar10 < (this->LockedTiles).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      *(FVirtualTextureLocalTile *)
       ((this->LockedTiles).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = FVar4;
      uVar11 = 0;
      if ((int)uVar10 < (this->LockCounts).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      *(undefined2 *)((this->LockCounts).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) = 1;
      FHashTable::Add(&this->TileHash,(uint)uVar8,uVar10);
      uVar11 = ((param_1->_s_1).PackedProducerHandle >> 0x10 ^ (param_1->_s_1).PackedProducerHandle)
               * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      FHashTable::Add(&this->ProducerToTileIndex,uVar11 >> 0x10 ^ uVar11,uVar10);
      return true;
    }
    uVar12 = ~uVar10 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar10 < (this->LockedTiles).ArrayNum) {
      uVar11 = uVar12;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    lVar15 = (longlong)(int)uVar10;
    if (*(ulong64 *)((pTVar1->AllocatorInstance).Data + lVar15 * 8) == param_1->PackedValue) break;
    uVar10 = (this->TileHash).NextIndex[uVar10];
  }
  uVar11 = 0;
  if ((int)uVar10 < (this->LockCounts).ArrayNum) {
    uVar11 = uVar12;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  sVar3 = *(short *)((this->LockCounts).AllocatorInstance.Data + lVar15 * 2);
  if (sVar3 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevLockCount > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                       ,0x1d,L"");
    if (bVar6) {
code_r0x00014590fc13:
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else if ((sVar3 == -1) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevLockCount < 0xffff",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                              ,0x1e,L""), bVar6)) goto code_r0x00014590fc13;
  uVar11 = 0;
  if ((int)uVar10 < (this->LockCounts).ArrayNum) {
    uVar11 = uVar12;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  *(short *)((this->LockCounts).AllocatorInstance.Data + lVar15 * 2) = sVar3 + 1;
  return false;
}

// Unlock @ 145926630

bool __thiscall FTexturePageLocks::Unlock(FTexturePageLocks *this,FVirtualTextureLocalTile *param_1)

{
  int *piVar1;
  short sVar2;
  FScriptContainerElement *pFVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_18 [4];
  
  uVar14 = (param_1->PackedValue >> 0x21 ^ param_1->PackedValue) * -0xae502812aa7333;
  uVar14 = (uVar14 >> 0x21 ^ uVar14) * -0x3b314601e57a13ad;
  uVar14 = uVar14 >> 0x21 & 0xffff ^ uVar14 & 0xffff;
  uVar8 = (this->TileHash).Hash[(this->TileHash).HashMask & uVar14];
  while( true ) {
    if (uVar8 == 0xffffffff) {
      return false;
    }
    uVar13 = 0;
    uVar10 = uVar13;
    if ((int)uVar8 < (this->LockedTiles).ArrayNum) {
      uVar10 = ~uVar8 >> 0x1f;
    }
    local_18[0] = uVar8;
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if (*(ulong64 *)((this->LockedTiles).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) ==
        param_1->PackedValue) break;
    uVar8 = (this->TileHash).NextIndex[local_18[0]];
  }
  lVar12 = (longlong)(int)local_18[0];
  uVar8 = uVar13;
  if ((int)local_18[0] < (this->LockCounts).ArrayNum) {
    uVar8 = ~local_18[0] >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  sVar2 = *(short *)((this->LockCounts).AllocatorInstance.Data + lVar12 * 2);
  if (sVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevLockCount > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageLocks.cpp"
                       ,0x34,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else if (sVar2 == 1) {
    pFVar3 = (this->FreeIndices).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->FreeIndices).ArrayMax * 4))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar9 = (this->FreeIndices).ArrayNum;
    piVar1 = &(this->FreeIndices).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->FreeIndices).AllocatorInstance,piVar1);
    }
    uVar8 = local_18[0];
    (this->FreeIndices).ArrayNum = iVar9 + 1;
    *(uint *)((this->FreeIndices).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_18[0];
    if (local_18[0] < (this->TileHash).IndexSize) {
      puVar4 = (this->TileHash).Hash;
      uVar14 = (this->TileHash).HashMask & uVar14;
      puVar11 = puVar4 + uVar14;
      uVar10 = puVar4[uVar14];
      if (uVar10 == local_18[0]) {
        uVar10 = (this->TileHash).NextIndex[local_18[0]];
LAB_1459268fa:
        *puVar11 = uVar10;
      }
      else if (uVar10 != 0xffffffff) {
        puVar4 = (this->TileHash).NextIndex;
        do {
          puVar11 = puVar4 + uVar10;
          uVar10 = puVar4[uVar10];
          if (uVar10 == local_18[0]) {
            uVar10 = puVar4[local_18[0]];
            goto LAB_1459268fa;
          }
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar10 = ((param_1->_s_1).PackedProducerHandle >> 0x10 ^ (param_1->_s_1).PackedProducerHandle) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (local_18[0] < (this->ProducerToTileIndex).IndexSize) {
      uVar10 = (uVar10 >> 0x10 ^ uVar10) & (this->ProducerToTileIndex).HashMask;
      puVar4 = (this->ProducerToTileIndex).Hash;
      puVar11 = puVar4 + uVar10;
      uVar10 = puVar4[uVar10];
      if (uVar10 == local_18[0]) {
        uVar10 = (this->ProducerToTileIndex).NextIndex[local_18[0]];
LAB_145926968:
        *puVar11 = uVar10;
      }
      else if (uVar10 != 0xffffffff) {
        puVar4 = (this->ProducerToTileIndex).NextIndex;
        do {
          puVar11 = puVar4 + uVar10;
          uVar10 = puVar4[uVar10];
          if (uVar10 == local_18[0]) {
            uVar10 = puVar4[local_18[0]];
            goto LAB_145926968;
          }
        } while (uVar10 != 0xffffffff);
      }
    }
    uVar10 = 0;
    if ((int)local_18[0] < (this->LockCounts).ArrayNum) {
      uVar10 = ~local_18[0] >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(undefined2 *)((this->LockCounts).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) = 0;
    lVar12 = (longlong)(int)local_18[0];
    uVar8 = 0;
    if ((int)local_18[0] < (this->LockedTiles).ArrayNum) {
      uVar8 = ~local_18[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(undefined8 *)((this->LockedTiles).AllocatorInstance.Data + lVar12 * 8) = 0;
    return true;
  }
  lVar12 = (longlong)(int)local_18[0];
  if ((int)local_18[0] < (this->LockCounts).ArrayNum) {
    uVar13 = ~local_18[0] >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  *(short *)((this->LockCounts).AllocatorInstance.Data + lVar12 * 2) = sVar2 + -1;
  return false;
}

