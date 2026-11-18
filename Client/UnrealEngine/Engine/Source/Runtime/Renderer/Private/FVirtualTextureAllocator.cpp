// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// FVirtualTextureAllocator @ 1458cce80

FVirtualTextureAllocator * __thiscall
FVirtualTextureAllocator::FVirtualTextureAllocator(FVirtualTextureAllocator *this,uint param_1)

{
  this->vDimensions = param_1;
  this->AllocatedWidth = 0;
  this->AllocatedHeight = 0;
  (this->AddressBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddressBlocks).ArrayNum = 0;
  (this->AddressBlocks).ArrayMax = 0;
  (this->FreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  (this->PartiallyFreeList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartiallyFreeList).ArrayNum = 0;
  (this->PartiallyFreeList).ArrayMax = 0;
  (this->SortedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedAddresses).ArrayNum = 0;
  (this->SortedAddresses).ArrayMax = 0;
  (this->SortedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedIndices).ArrayNum = 0;
  (this->SortedIndices).ArrayMax = 0;
  FHashTable::FHashTable(&this->HashTable,0x400,0);
  this->NumAllocations = 0;
  this->NumAllocatedPages = 0;
  return this;
}

// ~FVirtualTextureAllocator @ 1458d10a0

void __thiscall FVirtualTextureAllocator::~FVirtualTextureAllocator(FVirtualTextureAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->HashTable).IndexSize != 0) {
    (this->HashTable).HashMask = 0;
    (this->HashTable).IndexSize = 0;
    operator_delete__((this->HashTable).Hash);
    (this->HashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->HashTable).NextIndex);
    (this->HashTable).NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->SortedIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedAddresses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PartiallyFreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AddressBlocks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AcquireBlock @ 1458d60d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FVirtualTextureAllocator::AcquireBlock(FVirtualTextureAllocator *this)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  uVar1 = this->GlobalFreeList;
  uVar6 = (uint)uVar1;
  if (uVar1 == 0xffff) {
    uVar6 = (this->AddressBlocks).ArrayNum;
    if (uVar6 == (this->AddressBlocks).ArrayMax) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->AddressBlocks).AllocatorInstance,
                         &(this->AddressBlocks).ArrayMax);
    }
    (this->AddressBlocks).ArrayNum = uVar6 + 1;
    if (0x8000 < (int)uVar6) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1590090192553771121>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x71,"Index <= 0x8000");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
    }
    if (0xffff < (int)uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= 0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x72,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        iVar7 = (*pcVar2)();
        return iVar7;
      }
    }
  }
  else {
    UnlinkFreeList(this,&this->GlobalFreeList,GlobalFreeList,uVar1);
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->AddressBlocks).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      iVar7 = (*pcVar2)();
      return iVar7;
    }
  }
  uVar4 = _UNK_15104e658;
  uVar3 = ___xmm_cccccccccccccccccccccccccccccccc;
  pFVar9 = (this->AddressBlocks).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x20;
  *(undefined8 *)pFVar9 = ___xmm_cccccccccccccccccccccccccccccccc;
  *(undefined8 *)(pFVar9 + 8) = uVar4;
  *(undefined8 *)(pFVar9 + 0x10) = uVar3;
  *(undefined8 *)(pFVar9 + 0x18) = uVar4;
  return uVar6;
}

// Alloc @ 1458da540

uint __thiscall
FVirtualTextureAllocator::Alloc(FVirtualTextureAllocator *this,FAllocatedVirtualTexture *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  code *pcVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  ulong64 *puVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ushort uVar23;
  longlong lVar24;
  uint uVar25;
  uint local_res18;
  ulong64 local_68;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  
  uVar12 = (int)param_1->_padding_ * (int)param_1->_padding_;
  uVar19 = *(int *)((longlong)&param_1->_padding_ + 4) * *(int *)((longlong)&param_1->_padding_ + 4)
  ;
  uVar7 = uVar19;
  if (uVar12 < uVar19) {
    uVar7 = uVar12;
  }
  uVar11 = 1;
  if (uVar7 != 0) {
    uVar11 = uVar7;
  }
  uVar21 = (ulonglong)(uVar11 - 1) * 2 + 1;
  lVar24 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> lVar24 == 0; lVar24 = lVar24 + -1) {
    }
  }
  local_58 = (undefined4)lVar24;
  uVar7 = uVar19;
  if (uVar19 < uVar12) {
    uVar7 = uVar12;
  }
  uVar11 = 1;
  if (uVar7 != 0) {
    uVar11 = uVar7;
  }
  uVar21 = (ulonglong)(uVar11 - 1) * 2 + 1;
  uVar3 = 0x3f;
  if (uVar21 != 0) {
    for (; uVar21 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar7 = *(uint *)((longlong)&param_1->_padding_ + 4);
  uVar11 = this->vDimensions;
  uVar9 = (uint)uVar3;
  if ((this->FreeList).ArrayNum <= (int)uVar9) {
    return 0xffffffff;
  }
  uVar16 = 0xffff;
  uVar25 = 0xffffffff;
  uVar22 = 0xffff;
  lVar24 = (longlong)(int)uVar9 * 2;
  uVar21 = uVar3;
  local_res18 = uVar9;
  local_54 = uVar9;
  do {
    uVar20 = (uint)uVar21;
    uVar8 = 0;
    if ((int)uVar20 < (this->FreeList).ArrayNum) {
      uVar8 = ~uVar20 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       uVar16 = uVar22, bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar5 = *(ushort *)((this->FreeList).AllocatorInstance.Data + lVar24);
    uVar8 = uVar25;
    uVar23 = uVar16;
    while (uVar16 = uVar23, uVar25 = uVar8, uVar23 = uVar5, uVar23 != 0xffff) {
      if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar23) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      pFVar2 = (this->AddressBlocks).AllocatorInstance.Data;
      if ((pFVar2[(ulonglong)uVar23 * 0x20 + 0x18] != (FScriptContainerElement)0x2) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocBlock.State == EBlockState::FreeList",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                             ,0x1ab,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      uVar20 = local_res18;
      uVar5 = *(ushort *)(pFVar2 + (ulonglong)uVar23 * 0x20 + 0x14);
      uVar8 = *(uint *)(pFVar2 + (ulonglong)uVar23 * 0x20 + 8) & 0xffffff;
      uVar22 = uVar23;
      if (uVar25 <= (*(uint *)(pFVar2 + (ulonglong)uVar23 * 0x20 + 8) & 0xffffff)) {
        uVar8 = uVar25;
        uVar23 = uVar16;
        uVar22 = uVar16;
      }
    }
    local_res18 = uVar20 + 1;
    uVar21 = (ulonglong)local_res18;
    lVar24 = lVar24 + 2;
  } while ((int)local_res18 < (this->FreeList).ArrayNum);
  if ((uVar9 < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)vLogMaxSize >= MaxLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x1b8,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return uVar7;
  }
  uVar20 = uVar9 - uVar7;
  if (3 < uVar9 - uVar7) {
    uVar20 = 3;
  }
  local_res18 = 0;
  lVar24 = (longlong)(int)uVar9 * 8;
  do {
    uVar8 = 0;
    if ((int)uVar9 < (this->PartiallyFreeList).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    local_60 = lVar24;
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    for (uVar16 = *(ushort *)((this->PartiallyFreeList).AllocatorInstance.Data + lVar24);
        uVar16 != 0xffff; uVar16 = *(ushort *)(pFVar2 + (ulonglong)uVar16 * 0x20 + 0x14)) {
      if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar16) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
      pFVar2 = (this->AddressBlocks).AllocatorInstance.Data;
      if ((byte)pFVar2[(ulonglong)uVar16 * 0x20 + 0x19] == local_res18) {
        local_68 = 0;
        RecurseComputeFreeMip(this,uVar16,0,&local_68);
        puVar18 = BlockOverlapByDepth;
        uVar8 = 0;
        do {
          if ((*puVar18 & local_68) != *puVar18) break;
          uVar8 = uVar8 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar8 < 3);
        if ((byte)pFVar2[(ulonglong)uVar16 * 0x20 + 0x19] != uVar8) goto LAB_1458da90e;
      }
      else {
LAB_1458da90e:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(AllocBlock.FreeMip == FreeMipIndex) && (AllocBlock.FreeMip == ComputeFreeMip(FreeIndex))"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                           ,0x1c3,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
      }
      uVar8 = uVar25;
      uVar23 = uVar22;
      if ((*(uint *)(pFVar2 + (ulonglong)uVar16 * 0x20 + 8) & 0xffffff) < uVar25) {
        if ((pFVar2[(ulonglong)uVar16 * 0x20 + 0x18] != (FScriptContainerElement)0x3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AllocBlock.State == EBlockState::PartiallyFreeList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x1c7,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        uVar15 = *(uint *)(pFVar2 + (ulonglong)uVar16 * 0x20 + 8) & 0xffffff;
        iVar17 = 1 << ((byte)uVar3 & 0x1f);
        uVar8 = *(uint *)(pFVar2 + (ulonglong)uVar16 * 0x20 + 8) & 0x555555;
        uVar8 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
        uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
        uVar13 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
        uVar8 = uVar15 >> 1 & 0x55555555;
        uVar8 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
        uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
        uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
        uVar14 = (uVar13 >> 8 ^ uVar13) & 0xffff;
        uVar10 = (uVar8 >> 8 ^ uVar8) & 0xffff;
        uVar13 = uVar14 + iVar17;
        uVar1 = uVar10 + iVar17;
        while ((uVar8 = uVar25, uVar23 = uVar22, uVar19 + uVar10 <= uVar1 &&
               ((uVar13 < uVar12 + uVar14 ||
                (bVar6 = TestAllocation(this,(uint)uVar16,uVar14,uVar10,uVar12 + uVar14,
                                        uVar19 + uVar10), uVar8 = uVar15, uVar23 = uVar16, !bVar6)))
               )) {
          uVar15 = uVar15 + (1 << ((byte)uVar7 * (char)uVar11 & 0x1f));
          uVar8 = ((uVar15 & 0x55555555) >> 1 ^ uVar15 & 0x55555555) & 0x33333333;
          uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
          uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
          uVar14 = (uVar8 >> 8 ^ uVar8) & 0xffff;
          uVar8 = uVar15 >> 1 & 0x55555555;
          uVar8 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
          uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
          uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
          uVar10 = (uVar8 >> 8 ^ uVar8) & 0xffff;
        }
      }
      uVar25 = uVar8;
      uVar22 = uVar23;
    }
    local_res18 = local_res18 + 1;
    lVar24 = local_60 + 2;
    if (uVar20 < local_res18) {
      if (uVar22 != 0xffff) {
        local_60 = lVar24;
        if ((uVar25 == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("vAddress != ~0u",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x1f2,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar22) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        uVar11 = ((uVar25 & 0x55555555) >> 1 ^ uVar25 & 0x55555555) & 0x33333333;
        uVar11 = (uVar11 >> 2 ^ uVar11) & 0xf0f0f0f;
        uVar11 = (uVar11 >> 4 ^ uVar11) & 0xff00ff;
        uVar11 = (uVar11 >> 8 ^ uVar11) & 0xffff;
        uVar9 = uVar25 >> 1 & 0x55555555;
        uVar9 = (uVar9 >> 1 ^ uVar9) & 0x33333333;
        uVar9 = (uVar9 >> 2 ^ uVar9) & 0xf0f0f0f;
        uVar9 = (uVar9 >> 4 ^ uVar9) & 0xff00ff;
        uVar9 = (uVar9 >> 8 ^ uVar9) & 0xffff;
        MarkBlockAllocated(this,(uint)uVar22,uVar11,uVar9,param_1);
        if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar22) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        if (((this->AddressBlocks).AllocatorInstance.Data[(ulonglong)uVar22 * 0x20 + 0x18] ==
             (FScriptContainerElement)0x2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("AddressBlocks[AllocIndex].State != EBlockState::FreeList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x1f9,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
        iVar17 = 1 << ((byte)uVar7 & 0x1f);
        uVar11 = ((uVar12 - 1) + iVar17 & ~(iVar17 - 1U)) + uVar11;
        if (uVar11 < this->AllocatedWidth) {
          uVar11 = this->AllocatedWidth;
        }
        this->AllocatedWidth = uVar11;
        uVar9 = ((uVar19 - 1) + iVar17 & ~(iVar17 - 1U)) + uVar9;
        if (uVar9 < this->AllocatedHeight) {
          uVar9 = this->AllocatedHeight;
        }
        this->AllocatedHeight = uVar9;
      }
      return uVar25;
    }
  } while( true );
}

// ComputeFreeMip @ 1458e20f0

uint __thiscall
FVirtualTextureAllocator::ComputeFreeMip(FVirtualTextureAllocator *this,ushort param_1)

{
  ulong64 *puVar1;
  uint uVar2;
  ulong64 local_res18 [2];
  
  uVar2 = 0;
  local_res18[0] = 0;
  RecurseComputeFreeMip(this,param_1,0,local_res18);
  puVar1 = BlockOverlapByDepth;
  do {
    if ((*puVar1 & local_res18[0]) != *puVar1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 3);
  return uVar2;
}

// DumpToConsole @ 1458ebd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVirtualTextureAllocator::DumpToConsole(FVirtualTextureAllocator *this,bool param_1)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->SortedIndices).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 2;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->SortedIndices).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar1 = *(ushort *)((this->SortedIndices).AllocatorInstance.Data + lVar7);
      if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->AddressBlocks).AllocatorInstance.Data;
      if (3 < (byte)LogVirtualTexturing._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
      }
      if (*(longlong *)(pFVar2 + (ulonglong)uVar1 * 0x20) == 0) {
        if ((param_1) && (3 < (byte)LogVirtualTexturing._0_1_)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
        }
      }
      else if ((param_1) && (3 < (byte)LogVirtualTexturing._0_1_)) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualTexturing);
      }
      lVar7 = lVar7 + -2;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// Find @ 1458f6590

FAllocatedVirtualTexture * __thiscall
FVirtualTextureAllocator::Find(FVirtualTextureAllocator *this,uint param_1,uint *param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAllocatedVirtualTexture *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar4 = FindAddressBlock(this,param_1);
  uVar6 = 0;
  if ((int)uVar4 < (this->SortedIndices).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedVirtualTexture *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(ushort *)((this->SortedIndices).AllocatorInstance.Data + (longlong)(int)uVar4 * 2);
  if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedVirtualTexture *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar7 = (this->AddressBlocks).AllocatorInstance.Data + (ulonglong)uVar1 * 0x20;
  uVar6 = 0;
  if ((int)uVar4 < (this->SortedAddresses).ArrayNum) {
    uVar6 = ~uVar4 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedVirtualTexture *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (*(uint *)((this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) !=
      (*(uint *)(pFVar7 + 8) & 0xffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SortedAddresses[SortedIndex] == AddressBlock.vAddress",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x9a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedVirtualTexture *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar6 = *(uint *)(pFVar7 + 8) & 0xffffff;
  if ((param_1 < uVar6) ||
     ((1 << (((byte)(*(uint *)(pFVar7 + 8) >> 0x18) & 0xf) * (char)this->vDimensions & 0x1f)) +
      uVar6 <= param_1)) {
    pFVar5 = (FAllocatedVirtualTexture *)0x0;
  }
  else {
    pFVar5 = *(FAllocatedVirtualTexture **)pFVar7;
    if (pFVar5 != (FAllocatedVirtualTexture *)0x0) {
      *param_2 = param_1 - (int)pFVar5->_padding_;
    }
  }
  return pFVar5;
}

// FindAddressBlock @ 1458f6730

uint __thiscall
FVirtualTextureAllocator::FindAddressBlock(FVirtualTextureAllocator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (this->SortedAddresses).ArrayNum;
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      uVar6 = (uVar5 - uVar7 >> 1) + uVar7;
      uVar4 = 0;
      if ((int)uVar6 < (this->SortedAddresses).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      pFVar1 = (this->SortedAddresses).AllocatorInstance.Data;
      if (*(uint *)(pFVar1 + (longlong)(int)uVar6 * 4) <= param_1) {
        uVar5 = uVar6;
      }
      uVar4 = uVar6 + 1;
      if (*(uint *)(pFVar1 + (longlong)(int)uVar6 * 4) <= param_1) {
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar5);
  }
  return uVar7;
}

// Free @ 1458f8990

void __thiscall
FVirtualTextureAllocator::Free(FVirtualTextureAllocator *this,FAllocatedVirtualTexture *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)param_1 >> 4 & 0xffff;
  uVar1 = (this->HashTable).Hash[(this->HashTable).HashMask & uVar10];
  do {
    do {
      while( true ) {
        do {
          do {
            uVar5 = uVar1;
            if (uVar5 == 0xffffffff) {
              return;
            }
            uVar1 = (this->HashTable).NextIndex[uVar5];
            uVar8 = 0;
            if ((int)uVar5 < (this->AddressBlocks).ArrayNum) {
              uVar8 = ~uVar5 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar9 = (this->AddressBlocks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20;
          } while (*(FAllocatedVirtualTexture **)pFVar9 != param_1);
          if ((pFVar9[0x18] != (FScriptContainerElement)0x4) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("AddressBlock.State == EBlockState::AllocatedTexture",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                 ,0x212,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(short *)(pFVar9 + 0xe) != -1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("AddressBlock.FirstChild == 0xffff",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                 ,0x213,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar9[0x18] = (FScriptContainerElement)0x0;
          *(longlong *)pFVar9 = 0;
          FreeMipUpdateParents(this,*(ushort *)(pFVar9 + 0xc));
          if ((this->NumAllocations == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumAllocations > 0u",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                 ,0x21c,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this->NumAllocations = this->NumAllocations - 1;
          uVar8 = 1 << (((byte)pFVar9[0xb] & 0xf) * (char)this->vDimensions & 0x1f);
          if ((this->NumAllocatedPages < uVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumAllocatedPages >= NumPagesForBlock",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                 ,0x220,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          this->NumAllocatedPages = this->NumAllocatedPages - uVar8;
          FreeAddressBlock(this,uVar5,true);
        } while ((this->HashTable).IndexSize <= uVar5);
        puVar3 = (this->HashTable).Hash;
        uVar7 = (this->HashTable).HashMask & uVar10;
        uVar8 = puVar3[uVar7];
        if (uVar8 != uVar5) break;
        puVar3[uVar7] = (this->HashTable).NextIndex[uVar5];
      }
    } while (uVar8 == 0xffffffff);
    puVar3 = (this->HashTable).NextIndex;
    do {
      uVar2 = puVar3[uVar8];
      if (uVar2 == uVar5) {
        puVar3[uVar8] = puVar3[uVar5];
        break;
      }
      uVar8 = uVar2;
    } while (uVar2 != 0xffffffff);
  } while( true );
}

// FreeAddressBlock @ 1458f8bd0

void __thiscall
FVirtualTextureAllocator::FreeAddressBlock(FVirtualTextureAllocator *this,uint param_1,bool param_2)

{
  uint uVar1;
  int *piVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  undefined2 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  
  while( true ) {
    uVar13 = 0;
    if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
      uVar13 = ~param_1 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar16 = (this->AddressBlocks).AllocatorInstance.Data + (longlong)(int)param_1 * 0x20;
    if (param_2 == false) {
      FVar3 = pFVar16[0xb];
      if ((this->PartiallyFreeList).ArrayNum <= (int)((byte)FVar3 & 0xf)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      UnlinkFreeList(this,(ushort *)
                          ((this->PartiallyFreeList).AllocatorInstance.Data +
                          ((ulonglong)(byte)pFVar16[0x19] + (ulonglong)((byte)FVar3 & 0xf) * 4) * 2)
                     ,PartiallyFreeList,(ushort)param_1);
    }
    else if (pFVar16[0x18] != (FScriptContainerElement)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressBlock.State == EBlockState::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x234,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(longlong *)pFVar16 != 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressBlock.VT == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x23c,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(short *)(pFVar16 + 0x14) != -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressBlock.NextFree == 0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x23d,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(short *)(pFVar16 + 0x16) != -1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressBlock.PrevFree == 0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x23e,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar4 = *(ushort *)(pFVar16 + 0x10);
    bVar8 = uVar4 != 0xffff;
    *(undefined2 *)(pFVar16 + 0xe) = 0xffff;
    if (bVar8) {
      while (uVar13 = (uint)uVar4, uVar13 != 0xffff) {
        if ((this->AddressBlocks).ArrayNum <= (int)uVar13) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar6 = (this->AddressBlocks).AllocatorInstance.Data;
        if (uVar13 != param_1) {
          if (pFVar6[(ulonglong)uVar13 * 0x20 + 0x18] == (FScriptContainerElement)0x0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SiblingBlock.State != EBlockState::None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x24b,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (pFVar6[(ulonglong)uVar13 * 0x20 + 0x18] == (FScriptContainerElement)0x1) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("SiblingBlock.State != EBlockState::GlobalFreeList",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x24c,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          bVar8 = (bool)(bVar8 & pFVar6[(ulonglong)uVar13 * 0x20 + 0x18] ==
                                 (FScriptContainerElement)0x2);
        }
        uVar4 = *(ushort *)(pFVar6 + (ulonglong)uVar13 * 0x20 + 0x12);
        if (!bVar8) goto LAB_1458f8e51;
      }
    }
    if (!bVar8) break;
    uVar13 = (uint)*(ushort *)(pFVar16 + 0x10);
    if (*(ushort *)(pFVar16 + 0x10) != 0xffff) {
      do {
        if ((this->AddressBlocks).ArrayNum <= (int)uVar13) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar6 = (this->AddressBlocks).AllocatorInstance.Data;
        if (uVar13 != param_1) {
          FVar3 = pFVar16[0xb];
          if ((this->FreeList).ArrayNum <= (int)((byte)FVar3 & 0xf)) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          UnlinkFreeList(this,(ushort *)
                              ((this->FreeList).AllocatorInstance.Data +
                              (ulonglong)((byte)FVar3 & 0xf) * 2),FreeList,(ushort)uVar13);
        }
        LinkFreeList(this,&this->GlobalFreeList,GlobalFreeList,(ushort)uVar13);
        uVar13 = (uint)*(ushort *)(pFVar6 + (ulonglong)uVar13 * 0x20 + 0x12);
      } while (uVar13 != 0xffff);
    }
    if (pFVar16[0x18] != (FScriptContainerElement)0x1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("AddressBlock.State == EBlockState::GlobalFreeList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x26a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar4 = *(ushort *)(pFVar16 + 0x10);
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar4) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar13 = FindAddressBlock(this,*(uint *)((this->AddressBlocks).AllocatorInstance.Data +
                                            (ulonglong)uVar4 * 0x20 + 8) & 0xffffff);
    uVar4 = *(ushort *)(pFVar16 + 0x10);
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar4) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = (this->AddressBlocks).AllocatorInstance.Data;
    uVar15 = 0;
    if ((int)uVar13 < (this->SortedAddresses).ArrayNum) {
      uVar15 = ~uVar13 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(uint *)((this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) !=
        (*(uint *)(pFVar6 + (ulonglong)uVar4 * 0x20 + 8) & 0xffffff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedAddresses[SortedIndexRangeEnd] == AddressBlocks[AddressBlock.FirstSibling].vAddress"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x270,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar15 = 1 << ((byte)this->vDimensions & 0x1f);
    if (uVar13 + 1 < uVar15) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedIndexRangeEnd + 1 >= NumSiblings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x272,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar1 = uVar15 - 1;
    uVar14 = (uVar13 - uVar15) + 1;
    uVar10 = 0;
    if ((int)uVar13 <= (this->SortedAddresses).ArrayNum) {
      uVar10 = ~(uVar1 | uVar14) >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (uVar1 != 0) {
      pFVar6 = (this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
      iVar11 = ((this->SortedAddresses).ArrayNum - uVar1) - uVar14;
      if (iVar11 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)(int)uVar1 * 4,(longlong)iVar11 << 2);
      }
      piVar2 = &(this->SortedAddresses).ArrayNum;
      *piVar2 = *piVar2 - uVar1;
    }
    piVar2 = &(this->SortedIndices).ArrayNum;
    iVar11 = uVar15 - 1;
    uVar10 = 0;
    if ((int)(iVar11 + uVar14) <= (this->SortedIndices).ArrayNum) {
      uVar10 = ~(uVar1 | uVar14) >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar11 != 0) {
      pFVar6 = (this->SortedIndices).AllocatorInstance.Data + (longlong)(int)uVar14 * 2;
      iVar12 = (*piVar2 - iVar11) - uVar14;
      if (iVar12 != 0) {
        memmove(pFVar6,pFVar6 + (longlong)iVar11 * 2,(longlong)iVar12 * 2);
      }
      *piVar2 = *piVar2 - iVar11;
    }
    uVar15 = ~((uVar13 - uVar15) + 1) >> 0x1f;
    uVar5 = *(undefined2 *)(pFVar16 + 0xc);
    uVar13 = 0;
    if ((int)uVar14 < (this->SortedIndices).ArrayNum) {
      uVar13 = uVar15;
    }
    if (uVar13 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined2 *)((this->SortedIndices).AllocatorInstance.Data + (longlong)(int)uVar14 * 2) =
         uVar5;
    uVar4 = *(ushort *)(pFVar16 + 0xc);
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar4) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = (this->AddressBlocks).AllocatorInstance.Data;
    uVar13 = 0;
    if ((int)uVar14 < (this->SortedAddresses).ArrayNum) {
      uVar13 = uVar15;
    }
    if (uVar13 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(uint *)((this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar14 * 4) !=
        (*(uint *)(pFVar6 + (ulonglong)uVar4 * 0x20 + 8) & 0xffffff)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedAddresses[SortedIndexRangeStart] == AddressBlocks[AddressBlock.Parent].vAddress"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x27a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    param_1 = (uint)*(ushort *)(pFVar16 + 0xc);
    param_2 = false;
  }
LAB_1458f8e51:
  FVar3 = pFVar16[0xb];
  if ((this->FreeList).ArrayNum <= (int)((byte)FVar3 & 0xf)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  LinkFreeList(this,(ushort *)
                    ((this->FreeList).AllocatorInstance.Data + (ulonglong)((byte)FVar3 & 0xf) * 2),
               FreeList,(ushort)param_1);
  return;
}

// FreeMipUpdateParents @ 1458f95c0

void __thiscall
FVirtualTextureAllocator::FreeMipUpdateParents(FVirtualTextureAllocator *this,ushort param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulong64 local_res18;
  
  uVar8 = 0;
  do {
    if (param_1 == 0xffff) {
      return;
    }
    if (((this->AddressBlocks).ArrayNum <= (int)(uint)param_1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->AddressBlocks).AllocatorInstance.Data;
    local_res18 = 0;
    FVar1 = pFVar3[(ulonglong)param_1 * 0x20 + 0x19];
    RecurseComputeFreeMip(this,param_1,0,&local_res18);
    uVar7 = 0;
    do {
      if ((BlockOverlapByDepth[uVar7] & local_res18) != BlockOverlapByDepth[uVar7]) break;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < 3);
    if (SUB81(uVar7,0) != FVar1) {
      FVar2 = pFVar3[(ulonglong)param_1 * 0x20 + 0xb];
      if (((this->PartiallyFreeList).ArrayNum <= (int)((byte)FVar2 & 0xf)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnlinkFreeList(this,(ushort *)
                          ((this->PartiallyFreeList).AllocatorInstance.Data +
                          ((ulonglong)(byte)FVar1 + (ulonglong)((byte)FVar2 & 0xf) * 4) * 2),
                     PartiallyFreeList,param_1);
      FVar1 = pFVar3[(ulonglong)param_1 * 0x20 + 0xb];
      pFVar3[(ulonglong)param_1 * 0x20 + 0x19] = SUB81(uVar7,0);
      if (((this->PartiallyFreeList).ArrayNum <= (int)((byte)FVar1 & 0xf)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      LinkFreeList(this,(ushort *)
                        ((this->PartiallyFreeList).AllocatorInstance.Data +
                        ((uVar7 & 0xff) + (ulonglong)((byte)FVar1 & 0xf) * 4) * 2),PartiallyFreeList
                   ,param_1);
    }
    param_1 = *(ushort *)(pFVar3 + (ulonglong)param_1 * 0x20 + 0xc);
    uVar8 = uVar8 + 1;
    if (3 < uVar8) {
      return;
    }
  } while( true );
}

// Initialize @ 14590d9f0

void __thiscall FVirtualTextureAllocator::Initialize(FVirtualTextureAllocator *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_78 [2];
  undefined4 local_74;
  int *local_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  
  uVar14 = 1;
  if (param_1 != 0) {
    uVar14 = param_1;
  }
  uVar12 = (ulonglong)(uVar14 - 1) * 2 + 1;
  lVar7 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
    }
  }
  uVar14 = (uint)lVar7;
  if ((0xc < uVar14) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("vLogSize <= 12u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x1f,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->NumAllocations != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumAllocations == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x20,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &(this->AddressBlocks).ArrayMax;
  (this->AddressBlocks).ArrayNum = 0;
  if ((this->AddressBlocks).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,&(this->AddressBlocks).AllocatorInstance,0,piVar1);
  }
  (this->SortedAddresses).ArrayNum = 0;
  if ((this->SortedAddresses).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&(this->SortedAddresses).AllocatorInstance,0,&(this->SortedAddresses).ArrayMax)
    ;
  }
  (this->SortedIndices).ArrayNum = 0;
  if ((this->SortedIndices).ArrayMax < 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,1,&(this->SortedIndices).AllocatorInstance,0,&(this->SortedIndices).ArrayMax);
  }
  uVar15 = uVar14 + 1;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  piVar2 = &(this->FreeList).ArrayMax;
  piVar3 = &(this->FreeList).ArrayNum;
  *piVar3 = 0;
  if ((this->FreeList).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar15,&(this->FreeList).AllocatorInstance,0,piVar2);
  }
  local_70 = &(this->PartiallyFreeList).ArrayMax;
  piVar4 = &(this->PartiallyFreeList).ArrayNum;
  *piVar4 = 0;
  if ((this->PartiallyFreeList).ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,2,uVar15,&(this->PartiallyFreeList).AllocatorInstance,0,local_70);
  }
  pFVar5 = (this->AddressBlocks).AllocatorInstance.Data;
  local_68 = 0;
  iStack_60 = (uVar14 & 0xf) << 0x18;
  uStack_5c = 0xffffffff;
  uStack_58 = 0xffffffff;
  uStack_54 = 0xffffffff;
  uStack_50 = 2;
  if (((pFVar5 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 < pFVar5 + (longlong)*piVar1 * 0x20)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar10 = (this->AddressBlocks).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&(this->AddressBlocks).AllocatorInstance,piVar1);
  }
  local_74 = 0;
  (this->AddressBlocks).ArrayNum = iVar10 + 1;
  piVar1 = &(this->SortedAddresses).ArrayMax;
  pFVar6 = (this->AddressBlocks).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar10 * 0x20;
  *(undefined8 *)pFVar5 = local_68;
  *(ulonglong *)(pFVar5 + 8) = CONCAT44(uStack_5c,iStack_60);
  pFVar6 = pFVar6 + (longlong)iVar10 * 0x20 + 0x10;
  *(ulonglong *)pFVar6 = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(pFVar6 + 8) = CONCAT62(uStack_4e,uStack_50);
  pFVar5 = (this->SortedAddresses).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_74) &&
      ((FScriptContainerElement *)&local_74 < pFVar5 + (longlong)*piVar1 * 4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar10 = (this->SortedAddresses).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&(this->SortedAddresses).AllocatorInstance,piVar1);
  }
  piVar1 = &(this->SortedIndices).ArrayMax;
  (this->SortedAddresses).ArrayNum = iVar10 + 1;
  uVar13 = 0;
  local_78[0] = 0;
  *(undefined4 *)((this->SortedAddresses).AllocatorInstance.Data + (longlong)iVar10 * 4) = local_74;
  pFVar5 = (this->SortedIndices).AllocatorInstance.Data;
  if (((pFVar5 <= (FScriptContainerElement *)local_78) &&
      ((FScriptContainerElement *)local_78 < pFVar5 + (longlong)*piVar1 * 2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar10 = (this->SortedIndices).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x202,&(this->SortedIndices).AllocatorInstance,piVar1);
  }
  pFVar5 = (this->SortedIndices).AllocatorInstance.Data;
  (this->SortedIndices).ArrayNum = iVar10 + 1;
  *(undefined2 *)(pFVar5 + (longlong)iVar10 * 2) = local_78[0];
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar15,&(this->FreeList).AllocatorInstance,piVar3,piVar2);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,2,uVar15,&(this->PartiallyFreeList).AllocatorInstance,piVar4,local_70);
  uVar12 = 0;
  if (uVar14 != 0) {
    do {
      if (((this->FreeList).ArrayNum <= (int)uVar13) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(undefined2 *)((this->FreeList).AllocatorInstance.Data + uVar12 * 2) = 0xffff;
      if ((*piVar4 <= (int)uVar13) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar11 = (char)uVar12 + 1;
      uVar13 = (uint)bVar11;
      *(undefined8 *)((this->PartiallyFreeList).AllocatorInstance.Data + uVar12 * 8) =
           0xffffffffffffffff;
      uVar12 = (ulonglong)bVar11;
    } while (uVar13 < uVar14);
  }
  uVar15 = 0;
  if ((int)uVar14 < (this->FreeList).ArrayNum) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined2 *)((this->FreeList).AllocatorInstance.Data + (longlong)(int)uVar14 * 2) = 0;
  uVar15 = 0;
  if ((int)uVar14 < (this->PartiallyFreeList).ArrayNum) {
    uVar15 = ~uVar14 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined8 *)((this->PartiallyFreeList).AllocatorInstance.Data + (longlong)(int)uVar14 * 8) =
       0xffffffffffffffff;
  this->GlobalFreeList = 0xffff;
  this->RootIndex = 0;
  return;
}

// LinkFreeList @ 14590eec0

void __thiscall
FVirtualTextureAllocator::LinkFreeList
          (FVirtualTextureAllocator *this,ushort *param_1,EBlockState param_2,ushort param_3)

{
  ushort uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->AddressBlocks).ArrayNum <= (int)(uint)param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->AddressBlocks).AllocatorInstance.Data;
  if (pFVar2[(ulonglong)param_3 * 0x20 + 0x18] != (FScriptContainerElement)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddressBlock.State == EBlockState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x44,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(short *)(pFVar2 + (ulonglong)param_3 * 0x20 + 0x14) != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddressBlock.NextFree == 0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x45,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(short *)(pFVar2 + (ulonglong)param_3 * 0x20 + 0x16) != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddressBlock.PrevFree == 0xffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x46,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_2 != PartiallyFreeList) && (*(short *)(pFVar2 + (ulonglong)param_3 * 0x20 + 0xe) != -1)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State == EBlockState::PartiallyFreeList || AddressBlock.FirstChild == 0xffff"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2[(ulonglong)param_3 * 0x20 + 0x18] = (FScriptContainerElement)param_2;
  uVar1 = *param_1;
  *(ushort *)(pFVar2 + (ulonglong)param_3 * 0x20 + 0x14) = uVar1;
  if (uVar1 != 0xffff) {
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + (ulonglong)uVar1 * 0x20 + 0x16) =
         param_3;
  }
  *param_1 = param_3;
  return;
}

// MarkBlockAllocated @ 145911fb0

void __thiscall
FVirtualTextureAllocator::MarkBlockAllocated
          (FVirtualTextureAllocator *this,uint param_1,uint param_2,uint param_3,
          FAllocatedVirtualTexture *param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  
  iVar16 = 0;
  uVar8 = ~param_1 >> 0x1f;
  uVar5 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar5 = uVar8;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar15 = (longlong)(int)param_1 * 0x20;
  pFVar9 = (this->AddressBlocks).AllocatorInstance.Data + lVar15;
  if ((pFVar9[0x18] == (FScriptContainerElement)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocBlock->State != EBlockState::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x10e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar9[0x18] == (FScriptContainerElement)0x1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocBlock->State != EBlockState::GlobalFreeList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                         ,0x10f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = *(uint *)(pFVar9 + 8);
  uVar7 = uVar5 >> 0x18 & 0xf;
  iVar11 = 1 << (sbyte)uVar7;
  uVar4 = (int)param_4->_padding_ * (int)param_4->_padding_ + param_2;
  uVar6 = (uVar5 & 0xffffff) >> 1 & 0x55555555;
  uVar5 = ((uVar5 & 0x555555) >> 1 ^ uVar5 & 0x555555) & 0x33333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f;
  uVar5 = (uVar5 >> 4 ^ uVar5) & 0xff00ff;
  uVar14 = (uVar5 >> 8 ^ uVar5) & 0xffff;
  uVar5 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f;
  uVar6 = (uVar5 >> 4 ^ uVar5) & 0xff00ff;
  uVar5 = uVar14 + iVar11;
  uVar13 = (uVar6 >> 8 ^ uVar6) & 0xffff;
  uVar6 = uVar13 + iVar11;
  if ((((uVar14 < uVar4) && (param_2 < uVar5)) &&
      (uVar12 = *(int *)((longlong)&param_4->_padding_ + 4) *
                *(int *)((longlong)&param_4->_padding_ + 4) + param_3, uVar13 < uVar12)) &&
     (param_3 < uVar6)) {
    if (((uVar14 < param_2) || (uVar4 < uVar5)) || ((uVar13 < param_3 || (uVar12 < uVar6)))) {
      if (pFVar9[0x18] == (FScriptContainerElement)0x2) {
        SubdivideBlock(this,param_1);
      }
      uVar5 = 0;
      if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->AddressBlocks).AllocatorInstance.Data[lVar15 + 0x18] !=
           (FScriptContainerElement)0x3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("AddressBlocks[Index].State == EBlockState::PartiallyFreeList",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                             ,0x144,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = 0;
      if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar1 = *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + lVar15 + 0xe);
      uVar10 = (ulonglong)uVar1;
      if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((uVar1 != *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + uVar10 * 0x20 + 0x10)
          ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ChildIndex == AddressBlocks[ChildIndex].FirstSibling",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                   ,0x148,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      while (uVar1 != 0xffff) {
        uVar5 = (uint)uVar10;
        if (((this->AddressBlocks).ArrayNum <= (int)uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((*(ushort *)((this->AddressBlocks).AllocatorInstance.Data + uVar10 * 0x20 + 0xc) !=
             param_1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("AddressBlocks[ChildIndex].Parent == Index",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x14b,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        MarkBlockAllocated(this,uVar5,param_2,param_3,param_4);
        if (((this->AddressBlocks).ArrayNum <= (int)uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar16 = iVar16 + 1;
        uVar1 = *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + uVar10 * 0x20 + 0x12);
        uVar10 = (ulonglong)uVar1;
      }
      if ((iVar16 != 1 << ((byte)this->vDimensions & 0x1f)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumChildren == (1u << vDimensions)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                             ,0x152,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if ((*(short *)(pFVar9 + 0xe) != -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocBlock->FirstChild == 0xffff",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                             ,299,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->FreeList).ArrayNum <= (int)uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UnlinkFreeList(this,(ushort *)((this->FreeList).AllocatorInstance.Data + (ulonglong)uVar7 * 2)
                     ,FreeList,(ushort)param_1);
      this->NumAllocations = this->NumAllocations + 1;
      this->NumAllocatedPages =
           this->NumAllocatedPages + (1 << ((sbyte)uVar7 * (char)this->vDimensions & 0x1fU));
      FHashTable::Add(&this->HashTable,(uint)((ulonglong)param_4 >> 4) & 0xffff,param_1);
      *(FAllocatedVirtualTexture **)pFVar9 = param_4;
      pFVar9[0x18] = (FScriptContainerElement)0x4;
      FreeMipUpdateParents(this,*(ushort *)(pFVar9 + 0xc));
    }
  }
  return;
}

// RecurseComputeFreeMip @ 145913f00

void __thiscall
FVirtualTextureAllocator::RecurseComputeFreeMip
          (FVirtualTextureAllocator *this,ushort param_1,uint param_2,ulong64 *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  
  if (((this->AddressBlocks).ArrayNum <= (int)(uint)param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->AddressBlocks).AllocatorInstance.Data;
  if ((param_2 < 3) &&
     (uVar7 = (uint)*(ushort *)(pFVar1 + (ulonglong)param_1 * 0x20 + 0xe),
     *(ushort *)(pFVar1 + (ulonglong)param_1 * 0x20 + 0xe) != 0xffff)) {
    do {
      RecurseComputeFreeMip(this,(ushort)uVar7,param_2 + 1,param_3);
      if (((this->AddressBlocks).ArrayNum <= (int)uVar7) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = (uint)*(ushort *)
                     ((this->AddressBlocks).AllocatorInstance.Data + (ulonglong)uVar7 * 0x20 + 0x12)
      ;
    } while (uVar7 != 0xffff);
  }
  if (pFVar1[(ulonglong)param_1 * 0x20 + 0x18] == (FScriptContainerElement)0x4) {
    uVar7 = *(uint *)(pFVar1 + (ulonglong)param_1 * 0x20 + 8);
    uVar5 = ((uVar7 & 0x555555) >> 1 ^ uVar7 & 0x555555) & 0x33333333;
    uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f;
    uVar10 = (uVar5 >> 4 ^ uVar5) & 0xff00ff;
    uVar5 = uVar7 >> 1 & 0x555555;
    iVar6 = (uVar7 >> 0x18 & 0xf) + param_2;
    uVar7 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
    uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
    uVar5 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
    uVar7 = (1 << ((byte)iVar6 & 0x1f)) - 1;
    uVar10 = (uVar10 >> 8 ^ uVar10) & uVar7 & 0xffff;
    iVar6 = iVar6 + -3;
    uVar7 = (uVar5 >> 8 ^ uVar5) & uVar7 & 0xffff;
    bVar4 = (byte)iVar6;
    if (iVar6 < 0) {
      cVar9 = (char)(uVar10 << (-bVar4 & 0x1f));
      cVar8 = (char)(uVar7 << (-bVar4 & 0x1f));
    }
    else {
      cVar9 = (char)(uVar10 >> (bVar4 & 0x1f));
      cVar8 = (char)(uVar7 >> (bVar4 & 0x1f));
    }
    *param_3 = *param_3 | BlockMaskByDepth[param_2] << (cVar9 + cVar8 * '\b' & 0x3fU);
  }
  return;
}

// SubdivideBlock @ 145920cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FVirtualTextureAllocator::SubdivideBlock(FVirtualTextureAllocator *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  ushort local_res8;
  ushort local_res18;
  uint local_res20;
  uint6 uStack_8e;
  
  uVar23 = 1 << ((byte)this->vDimensions & 0x1f);
  uVar19 = ~param_1 >> 0x1f;
  uVar18 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar18 = uVar19;
  }
  if (uVar18 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar24 = (longlong)(int)param_1 * 0x20;
  FVar5 = (this->AddressBlocks).AllocatorInstance.Data[lVar24 + 0xb];
  uVar18 = (byte)FVar5 & 0xf;
  if (((byte)FVar5 & 0xf) == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("vParentLogSize > 0u",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                        ,0xbe,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar13 = uVar18 - 1;
  uVar14 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar14 = uVar19;
  }
  if (uVar14 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(short *)((this->AddressBlocks).AllocatorInstance.Data + lVar24 + 0xe) != -1) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("AddressBlocks[ParentIndex].FirstChild == 0xffff",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                        ,0xc2,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((this->FreeList).ArrayNum <= (int)uVar18) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar9 = (ulonglong)uVar18 * 2;
  uVar21 = (ushort)param_1;
  UnlinkFreeList(this,(ushort *)((this->FreeList).AllocatorInstance.Data + lVar9),FreeList,uVar21);
  uVar14 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar14 = uVar19;
  }
  if (uVar14 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  (this->AddressBlocks).AllocatorInstance.Data[lVar24 + 0x19] = (FScriptContainerElement)0x0;
  if ((this->PartiallyFreeList).ArrayNum <= (int)uVar18) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  LinkFreeList(this,(ushort *)
                    ((this->PartiallyFreeList).AllocatorInstance.Data + (ulonglong)uVar18 * 8),
               PartiallyFreeList,uVar21);
  uVar18 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar18 = uVar19;
  }
  if (uVar18 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar22 = *(uint *)((this->AddressBlocks).AllocatorInstance.Data + lVar24 + 8) & 0xffffff;
  uVar14 = FindAddressBlock(this,uVar22);
  piVar1 = &(this->SortedAddresses).ArrayNum;
  lVar25 = (longlong)(int)uVar14;
  uVar18 = 0;
  if ((int)uVar14 < (this->SortedAddresses).ArrayNum) {
    uVar18 = ~uVar14 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (uVar22 != *(uint *)((this->SortedAddresses).AllocatorInstance.Data + lVar25 * 4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("vAddress == SortedAddresses[SortedIndex]",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                        ,0xc9,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar6 = uVar23 - 1;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar6,&(this->SortedAddresses).AllocatorInstance,piVar1,
                      &(this->SortedAddresses).ArrayMax);
  pFVar4 = (this->SortedAddresses).AllocatorInstance.Data + lVar25 * 4;
  memmove(pFVar4 + (longlong)iVar6 * 4,pFVar4,(longlong)(int)(iVar15 - uVar14) << 2);
  piVar2 = &(this->SortedIndices).ArrayNum;
  iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (2,2,iVar6,&(this->SortedIndices).AllocatorInstance,piVar2,
                      &(this->SortedIndices).ArrayMax);
  pFVar4 = (this->SortedIndices).AllocatorInstance.Data + lVar25 * 2;
  memmove(pFVar4 + (longlong)iVar6 * 2,pFVar4,(longlong)(int)(iVar15 - uVar14) * 2);
  if ((this->SortedAddresses).ArrayNum != (this->SortedIndices).ArrayNum) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("SortedAddresses.Num() == SortedIndices.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                        ,0xce,L"");
    if (bVar12) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_res8 = 0xffff;
  local_res18 = 0xffff;
  local_res20 = 0;
  if (uVar23 != 0) {
    do {
      uVar17 = this->GlobalFreeList;
      uVar18 = (uint)uVar17;
      if (uVar17 == 0xffff) {
        uVar18 = (this->AddressBlocks).ArrayNum;
        piVar3 = &(this->AddressBlocks).ArrayMax;
        if (uVar18 == *piVar3) {
          uVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->AddressBlocks).AllocatorInstance,piVar3);
        }
        (this->AddressBlocks).ArrayNum = uVar18 + 1;
        if (0x8000 < (int)uVar18) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<1590090192553771121>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                              ,0x71,"Index <= 0x8000");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        if (0xffff < (int)uVar18) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index <= 0xffff",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                              ,0x72,L"");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      else {
        UnlinkFreeList(this,&this->GlobalFreeList,GlobalFreeList,uVar17);
      }
      uVar16 = 0;
      if ((int)uVar18 < (this->AddressBlocks).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar11 = _UNK_15104e658;
      uVar10 = ___xmm_cccccccccccccccccccccccccccccccc;
      pFVar7 = (this->AddressBlocks).AllocatorInstance.Data;
      lVar25 = (longlong)(int)uVar18 * 0x20;
      pFVar4 = pFVar7 + lVar25;
      *(undefined8 *)pFVar4 = ___xmm_cccccccccccccccccccccccccccccccc;
      *(undefined8 *)(pFVar4 + 8) = uVar11;
      pFVar7 = pFVar7 + lVar25 + 0x10;
      *(undefined8 *)pFVar7 = uVar10;
      *(undefined8 *)(pFVar7 + 8) = uVar11;
      uVar20 = (uVar14 - local_res20) + (uVar23 - 1);
      uVar26 = (local_res20 << ((char)uVar13 * (char)this->vDimensions & 0x1fU)) + uVar22;
      uVar16 = 0;
      if ((int)uVar20 < *piVar1) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(uint *)((this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar20 * 4) = uVar26
      ;
      uVar16 = 0;
      if ((int)uVar20 < *piVar2) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar17 = (ushort)uVar18;
      *(ushort *)((this->SortedIndices).AllocatorInstance.Data + (longlong)(int)uVar20 * 2) = uVar17
      ;
      iVar6 = (this->AddressBlocks).ArrayNum;
      if (local_res20 == 0) {
        uVar16 = 0;
        if ((int)param_1 < iVar6) {
          uVar16 = uVar19;
        }
        if (uVar16 == 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + lVar24 + 0xe) = uVar17;
        local_res8 = uVar17;
      }
      else {
        if (iVar6 <= (int)(uint)local_res18) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        *(ushort *)
         ((this->AddressBlocks).AllocatorInstance.Data + (ulonglong)local_res18 * 0x20 + 0x12) =
             uVar17;
      }
      uVar16 = 0;
      if ((int)uVar18 < (this->AddressBlocks).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar7 = (this->AddressBlocks).AllocatorInstance.Data;
      pFVar4 = pFVar7 + lVar25;
      *(undefined8 *)pFVar4 = 0;
      *(ulonglong *)(pFVar4 + 8) =
           CONCAT26(0xffff,CONCAT24(uVar21,uVar26 & 0xffffff | (uVar13 & 0xf) << 0x18));
      pFVar7 = pFVar7 + lVar25 + 0x10;
      *(ulonglong *)pFVar7 = CONCAT44(0xffffffff,CONCAT22(0xffff,local_res8));
      *(ulonglong *)(pFVar7 + 8) = (ulonglong)uStack_8e << 0x10;
      uVar18 = 0;
      if ((int)uVar13 < (this->FreeList).ArrayNum) {
        uVar18 = ~uVar13 >> 0x1f;
      }
      if (uVar18 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      LinkFreeList(this,(ushort *)((this->FreeList).AllocatorInstance.Data + lVar9 + -2),FreeList,
                   uVar17);
      local_res20 = local_res20 + 1;
      local_res18 = uVar17;
    } while (local_res20 < uVar23);
  }
  return;
}

// TestAllocation @ 1459247f0

bool __thiscall
FVirtualTextureAllocator::TestAllocation
          (FVirtualTextureAllocator *this,uint param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  FScriptContainerElement FVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  uVar7 = 0;
  if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (this->AddressBlocks).AllocatorInstance.Data;
  lVar8 = (longlong)(int)param_1 * 0x20;
  uVar7 = *(uint *)(pFVar3 + lVar8 + 8);
  iVar11 = 1 << ((byte)(uVar7 >> 0x18) & 0xf);
  uVar9 = (uVar7 & 0xffffff) >> 1 & 0x55555555;
  uVar7 = ((uVar7 & 0x555555) >> 1 ^ uVar7 & 0x555555) & 0x33333333;
  uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
  uVar7 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
  uVar13 = (uVar7 >> 8 ^ uVar7) & 0xffff;
  uVar7 = (uVar9 >> 1 ^ uVar9) & 0x33333333;
  uVar7 = (uVar7 >> 2 ^ uVar7) & 0xf0f0f0f;
  uVar9 = (uVar7 >> 4 ^ uVar7) & 0xff00ff;
  uVar7 = uVar13 + iVar11;
  uVar9 = (uVar9 >> 8 ^ uVar9) & 0xffff;
  uVar12 = iVar11 + uVar9;
  if ((((uVar13 < param_4) && (param_2 < uVar7)) && (uVar9 < param_5)) && (param_3 < uVar12)) {
    FVar1 = pFVar3[lVar8 + 0x18];
    if (FVar1 != (FScriptContainerElement)0x4) {
      if ((FVar1 != (FScriptContainerElement)0x3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocBlock.State == EBlockState::PartiallyFreeList",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                             ,0x16f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (((uVar13 < param_2) || (param_4 < uVar7)) || ((uVar9 < param_3 || (param_5 < uVar12)))) {
        uVar7 = 0;
        if ((int)param_1 < (this->AddressBlocks).ArrayNum) {
          uVar7 = ~param_1 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar2 = *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + lVar8 + 0xe);
        uVar10 = (ulonglong)uVar2;
        if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if ((uVar2 != *(ushort *)
                       ((this->AddressBlocks).AllocatorInstance.Data + uVar10 * 0x20 + 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ChildIndex == AddressBlocks[ChildIndex].FirstSibling",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                               ,0x17a,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        while (uVar2 != 0xffff) {
          if (((this->AddressBlocks).ArrayNum <= (int)(uint)uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar3 = (this->AddressBlocks).AllocatorInstance.Data;
          if ((*(ushort *)(pFVar3 + uVar10 * 0x20 + 0xc) != param_1) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChildBlock.Parent == Index",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                                 ,0x17e,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if ((pFVar3[uVar10 * 0x20 + 0x18] != (FScriptContainerElement)0x2) &&
             (bVar5 = TestAllocation(this,(uint)uVar10,param_2,param_3,param_4,param_5), !bVar5))
          goto LAB_145924b4b;
          uVar2 = *(ushort *)(pFVar3 + uVar10 * 0x20 + 0x12);
          uVar10 = (ulonglong)uVar2;
        }
        goto LAB_145924b31;
      }
    }
LAB_145924b4b:
    bVar5 = false;
  }
  else {
LAB_145924b31:
    bVar5 = true;
  }
  return bVar5;
}

// TryAlloc @ 1459252c0

bool __thiscall FVirtualTextureAllocator::TryAlloc(FVirtualTextureAllocator *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)(int)param_1;
  if ((int)param_1 < (this->FreeList).ArrayNum) {
    lVar7 = uVar6 * 2;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->FreeList).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      if (*(short *)((this->FreeList).AllocatorInstance.Data + lVar7) != -1) {
        return true;
      }
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 2;
    } while ((int)(uVar5 + 1) < (this->FreeList).ArrayNum);
  }
  return false;
}

// UnlinkFreeList @ 1459264a0

void __thiscall
FVirtualTextureAllocator::UnlinkFreeList
          (FVirtualTextureAllocator *this,ushort *param_1,EBlockState param_2,ushort param_3)

{
  ushort uVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  if ((this->AddressBlocks).ArrayNum <= (int)(uint)param_3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->AddressBlocks).AllocatorInstance.Data;
  if (pFVar3[(ulonglong)param_3 * 0x20 + 0x18] != (FScriptContainerElement)param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddressBlock.State == State",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureAllocator.cpp"
                       ,0x57,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(ushort *)(pFVar3 + (ulonglong)param_3 * 0x20 + 0x16);
  uVar2 = *(ushort *)(pFVar3 + (ulonglong)param_3 * 0x20 + 0x14);
  if (uVar1 != 0xffff) {
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + (ulonglong)uVar1 * 0x20 + 0x14) =
         uVar2;
    *(undefined2 *)(pFVar3 + (ulonglong)param_3 * 0x20 + 0x16) = 0xffff;
  }
  if (uVar2 != 0xffff) {
    if ((this->AddressBlocks).ArrayNum <= (int)(uint)uVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(ushort *)((this->AddressBlocks).AllocatorInstance.Data + (ulonglong)uVar2 * 0x20 + 0x16) =
         uVar1;
    *(undefined2 *)(pFVar3 + (ulonglong)param_3 * 0x20 + 0x14) = 0xffff;
  }
  if (*param_1 == param_3) {
    *param_1 = uVar2;
  }
  pFVar3[(ulonglong)param_3 * 0x20 + 0x18] = (FScriptContainerElement)0x0;
  return;
}

