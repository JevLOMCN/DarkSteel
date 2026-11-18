// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 25

// FTexturePageMap @ 1458ccad0

FTexturePageMap * __thiscall FTexturePageMap::FTexturePageMap(FTexturePageMap *this)

{
  this->LayerIndex = 0;
  this->vDimensions = 0;
  (this->Pages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pages).ArrayNum = 0;
  (this->Pages).ArrayMax = 0;
  FHashTable::FHashTable(&this->HashTable,0x1000,0);
  this->MappedPageCount = 0;
  (this->UnsortedKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnsortedKeys).ArrayNum = 0;
  (this->UnsortedKeys).ArrayMax = 0;
  (this->UnsortedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnsortedAddresses).ArrayNum = 0;
  (this->UnsortedAddresses).ArrayMax = 0;
  (this->SortedKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedKeys).ArrayNum = 0;
  (this->SortedKeys).ArrayMax = 0;
  (this->SortedAddresses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedAddresses).ArrayNum = 0;
  (this->SortedAddresses).ArrayMax = 0;
  this->SortedKeysDirty = false;
  (this->SortedSubIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedSubIndexes).ArrayNum = 0;
  (this->SortedSubIndexes).ArrayMax = 0;
  (this->SortedAddIndexes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedAddIndexes).ArrayNum = 0;
  (this->SortedAddIndexes).ArrayMax = 0;
  return this;
}

// ~FTexturePageMap @ 1458d0ee0

void __thiscall FTexturePageMap::~FTexturePageMap(FTexturePageMap *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SortedAddIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedSubIndexes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedAddresses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SortedKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UnsortedAddresses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UnsortedKeys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->HashTable).IndexSize != 0) {
    (this->HashTable).HashMask = 0;
    (this->HashTable).IndexSize = 0;
    operator_delete__((this->HashTable).Hash);
    (this->HashTable).Hash = FHashTable::EmptyHash;
    operator_delete__((this->HashTable).NextIndex);
    (this->HashTable).NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 1458d3870

bool __thiscall
`FTexturePageMap::BuildSortedKeys'::__l2::<lambda_1>::operator()
          (void *this,ulong64 *param_1,ulong64 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = (uint)*param_1;
  lVar2 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x10)) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  uVar7 = (uint)*param_2;
  lVar3 = *(longlong *)this;
  uVar8 = 0;
  if ((int)uVar7 < *(int *)(lVar3 + 0x10)) {
    uVar8 = ~uVar7 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  return *(uint *)(lVar2 + (longlong)(int)uVar1 * 0x18) <
         *(uint *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar7 * 0x18);
}

// AddPageToList @ 1458d9430

void __thiscall FTexturePageMap::AddPageToList(FTexturePageMap *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if ((int)param_1 < (this->Pages).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2 < (this->Pages).ArrayNum) {
    uVar5 = ~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar2 = (this->Pages).AllocatorInstance.Data;
  if (param_2 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= PageListHead_Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                       ,0xa5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0x18 + 4) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Page.NextIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                       ,0xa8,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0x18 + 8) != param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Page.PrevIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                       ,0xa9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0x18 + 4) = param_1;
  *(undefined4 *)(pFVar2 + (longlong)(int)param_2 * 0x18 + 8) =
       *(undefined4 *)(pFVar1 + (longlong)(int)param_1 * 0x18 + 8);
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x18 + 8);
  uVar6 = 0;
  if ((int)uVar5 < (this->Pages).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  *(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18 + 4) = param_2;
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0x18 + 8) = param_2;
  return;
}

// BuildSortedKeys @ 1458e02f0

void __thiscall FTexturePageMap::BuildSortedKeys(FTexturePageMap *this)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  FIdentityFunctor local_res8 [8];
  uint local_res10;
  int local_res18;
  uint local_res20;
  longlong local_90;
  longlong local_80;
  FTexturePageMap *local_70;
  FScriptContainerElement *local_68;
  longlong local_60;
  size_t local_58;
  
  AlgoImpl::
  IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,TLess<void>_>_>
            ((uint *)(this->SortedSubIndexes).AllocatorInstance.Data,
             (this->SortedSubIndexes).ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  local_70 = this;
  AlgoImpl::
  IntroSortInternal<unsigned___int64,int,FIdentityFunctor,TDereferenceWrapper<unsigned___int64,_FTexturePageMap::BuildSortedKeys_::__l2::<lambda_1>_>_>
            ((ulong64 *)(this->SortedAddIndexes).AllocatorInstance.Data,
             (this->SortedAddIndexes).ArrayNum,local_res8[0],(<lambda_1> *)&local_70);
  iVar12 = (this->UnsortedKeys).ArrayNum;
  iVar11 = (this->UnsortedKeys).ArrayMax;
  piVar1 = &(this->SortedKeys).ArrayNum;
  pFVar6 = (this->SortedKeys).AllocatorInstance.Data;
  iVar8 = (this->SortedKeys).ArrayNum;
  iVar9 = (this->SortedKeys).ArrayMax;
  (this->SortedKeys).AllocatorInstance.Data = (this->UnsortedKeys).AllocatorInstance.Data;
  (this->SortedKeys).ArrayNum = iVar12;
  (this->SortedKeys).ArrayMax = iVar11;
  (this->UnsortedKeys).AllocatorInstance.Data = pFVar6;
  (this->UnsortedKeys).ArrayNum = iVar8;
  (this->UnsortedKeys).ArrayMax = iVar9;
  iVar12 = (this->UnsortedAddresses).ArrayNum;
  iVar11 = (this->UnsortedAddresses).ArrayMax;
  pFVar6 = (this->SortedAddresses).AllocatorInstance.Data;
  iVar8 = (this->SortedAddresses).ArrayNum;
  iVar9 = (this->SortedAddresses).ArrayMax;
  (this->SortedAddresses).AllocatorInstance.Data = (this->UnsortedAddresses).AllocatorInstance.Data;
  (this->SortedAddresses).ArrayNum = iVar12;
  (this->SortedAddresses).ArrayMax = iVar11;
  (this->UnsortedAddresses).AllocatorInstance.Data = pFVar6;
  (this->UnsortedAddresses).ArrayNum = iVar8;
  (this->UnsortedAddresses).ArrayMax = iVar9;
  uVar4 = (this->UnsortedKeys).ArrayNum;
  iVar12 = *piVar1;
  uVar18 = ((this->SortedAddIndexes).ArrayNum - (this->SortedSubIndexes).ArrayNum) + uVar4;
  if (iVar12 < (int)uVar18) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar18 - iVar12,&(this->SortedKeys).AllocatorInstance,piVar1,
                        &(this->SortedKeys).ArrayMax);
    memset((this->SortedKeys).AllocatorInstance.Data + (longlong)iVar11 * 4,0,
           (longlong)(int)(uVar18 - iVar12) << 2);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar12) {
      uVar17 = iVar12 - uVar18;
      if (((int)(uVar17 | uVar18) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar17 != 0) {
        pFVar6 = (this->SortedKeys).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
        iVar12 = (*piVar1 - uVar17) - uVar18;
        if (iVar12 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)(int)uVar17 * 4,(longlong)iVar12 << 2);
        }
        *piVar1 = *piVar1 - uVar17;
      }
    }
  }
  piVar1 = &(this->SortedAddresses).ArrayNum;
  iVar12 = *piVar1;
  uVar18 = ((this->SortedAddIndexes).ArrayNum - (this->SortedSubIndexes).ArrayNum) + uVar4;
  if (iVar12 < (int)uVar18) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar18 - iVar12,&(this->SortedAddresses).AllocatorInstance,piVar1,
                        &(this->SortedAddresses).ArrayMax);
    DefaultConstructItems<FPhysicalSpaceIDAndAddress,int>
              ((this->SortedAddresses).AllocatorInstance.Data + (longlong)iVar11 * 4,uVar18 - iVar12
              );
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar12) {
      uVar17 = iVar12 - uVar18;
      if (((int)(uVar17 | uVar18) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (uVar17 != 0) {
        pFVar6 = (this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar18 * 4;
        iVar12 = (*piVar1 - uVar17) - uVar18;
        if (iVar12 != 0) {
          memmove(pFVar6,pFVar6 + (longlong)(int)uVar17 * 4,(longlong)iVar12 << 2);
        }
        *piVar1 = *piVar1 - uVar17;
      }
    }
  }
  uVar18 = 0;
  local_res18 = 0;
  uVar17 = 0;
  local_res10 = 0;
  uVar19 = 0;
  if (0 < (this->SortedKeys).ArrayNum) {
    local_90 = 0;
    local_80 = 0;
    do {
      uVar21 = uVar4;
      if (local_res18 < (this->SortedSubIndexes).ArrayNum) {
        if ((local_res18 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar21 = *(uint *)((this->SortedSubIndexes).AllocatorInstance.Data + local_80);
      }
      uVar13 = ~uVar18;
      uVar20 = uVar4;
      if ((int)uVar18 < (this->SortedAddIndexes).ArrayNum) {
        if (((int)uVar18 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar20 = (uint)((ulonglong)
                        *(undefined8 *)((this->SortedAddIndexes).AllocatorInstance.Data + local_90)
                       >> 0x20);
      }
      uVar15 = uVar20;
      if (uVar21 < uVar20) {
        uVar15 = uVar21;
      }
      if (uVar15 < uVar17) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MinIndex >= (uint32)UnsortedI",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                            ,0x135,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else if (uVar17 < uVar15) {
        local_res20 = uVar15 - uVar17;
        uVar18 = 0;
        if ((int)uVar17 < (this->UnsortedKeys).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_68 = (this->UnsortedKeys).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar19 < (this->SortedKeys).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_58 = (ulonglong)local_res20 << 2;
        local_60 = (longlong)(int)uVar19 * 4;
        memcpy((this->SortedKeys).AllocatorInstance.Data + local_60,
               local_68 + (longlong)(int)uVar17 * 4,local_58);
        uVar18 = 0;
        if ((int)uVar17 < (this->UnsortedAddresses).ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->UnsortedAddresses).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar19 < (this->SortedAddresses).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        memcpy((this->SortedAddresses).AllocatorInstance.Data + local_60,
               pFVar6 + (longlong)(int)uVar17 * 4,local_58);
        uVar19 = uVar19 + local_res20;
        uVar18 = local_res10;
        uVar17 = uVar15;
        if ((this->SortedKeys).ArrayNum <= (int)uVar19) break;
      }
      if (uVar21 < uVar20) {
        uVar17 = uVar17 + 1;
        local_res18 = local_res18 + 1;
        local_80 = local_80 + 4;
      }
      else {
        uVar21 = 0;
        if ((int)uVar18 < (this->SortedAddIndexes).ArrayNum) {
          uVar21 = uVar13 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = *(uint *)((this->SortedAddIndexes).AllocatorInstance.Data + local_90);
        lVar16 = (longlong)(int)uVar18;
        uVar21 = 0;
        if ((int)uVar18 < (this->Pages).ArrayNum) {
          uVar21 = ~uVar18 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->Pages).AllocatorInstance.Data;
        uVar5 = *(undefined4 *)(pFVar6 + lVar16 * 0x18);
        uVar18 = 0;
        if ((int)uVar19 < (this->SortedKeys).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar14 = (longlong)(int)uVar19;
        *(undefined4 *)((this->SortedKeys).AllocatorInstance.Data + lVar14 * 4) = uVar5;
        FVar2 = pFVar6[lVar16 * 0x18 + 0x16];
        uVar3 = *(ushort *)(pFVar6 + lVar16 * 0x18 + 0x14);
        uVar18 = 0;
        if ((int)uVar19 < (this->SortedAddresses).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar19 = uVar19 + 1;
        *(uint *)((this->SortedAddresses).AllocatorInstance.Data + lVar14 * 4) =
             (uint)uVar3 << 0x10 | (uint)(byte)FVar2;
        uVar18 = local_res10 + 1;
        local_90 = local_90 + 8;
        local_res10 = uVar18;
      }
    } while ((int)uVar19 < (this->SortedKeys).ArrayNum);
  }
  (this->SortedSubIndexes).ArrayNum = 0;
  if ((this->SortedSubIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SortedSubIndexes).AllocatorInstance,0,
               &(this->SortedSubIndexes).ArrayMax);
  }
  (this->SortedAddIndexes).ArrayNum = 0;
  if ((this->SortedAddIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SortedAddIndexes).AllocatorInstance,0,
               &(this->SortedAddIndexes).ArrayMax);
  }
  this->SortedKeysDirty = false;
  return;
}

// EqualRange @ 1458ed830

ulong64 __thiscall
FTexturePageMap::EqualRange
          (FTexturePageMap *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    do {
      uVar7 = (param_2 - param_1 >> 1) + param_1;
      uVar4 = 0;
      if ((int)uVar7 < (this->SortedKeys).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      uVar6 = param_4 & *(uint *)((this->SortedKeys).AllocatorInstance.Data +
                                 (longlong)(int)uVar7 * 4);
      uVar4 = param_1;
      uVar2 = uVar7;
      if ((uVar6 <= param_3) && (uVar4 = uVar7 + 1, uVar2 = param_2, param_3 <= uVar6)) {
        uVar4 = LowerBound(this,param_1,uVar7,param_3,param_4);
        uVar7 = UpperBound(this,uVar7 + 1,param_2,param_3,param_4);
        return CONCAT44(uVar7,uVar4);
      }
      param_2 = uVar2;
      param_1 = uVar4;
    } while (param_1 != param_2);
  }
  return 0;
}

// ExpandPageTableUpdateMasked @ 1458f4370

void __thiscall
FTexturePageMap::ExpandPageTableUpdateMasked
          (FTexturePageMap *this,FVirtualTextureSystem *param_1,FPageTableUpdate param_2,
          TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *param_3)

{
  FScriptContainerElement *pFVar1;
  FPageTableUpdate *pFVar2;
  FPageTableUpdate FVar3;
  code *pcVar4;
  char cVar5;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> TVar6;
  uint uVar7;
  uchar uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulong64 uVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  int *piVar18;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint local_res8;
  FPageTableUpdate local_res18;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *local_res20;
  int local_58;
  FPhysicalTileLocation FStack_54;
  uchar uStack_52;
  uchar uStack_51;
  FPageTableUpdate local_50;
  undefined8 local_48 [2];
  
  local_res18 = param_2;
  local_res20 = param_3;
  if (this->SortedKeysDirty != false) {
    BuildSortedKeys(this);
  }
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FTexturePageMap::ExpandPageTableUpdateMasked'::__l2::
           _dynamic_atexit_destructor_for__LoopInput__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar18 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    atexit(`FTexturePageMap::ExpandPageTableUpdateMasked'::__l2::
           _dynamic_atexit_destructor_for__LoopOutput__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar18 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    atexit(`FTexturePageMap::ExpandPageTableUpdateMasked'::__l2::
           _dynamic_atexit_destructor_for__Stack__);
    _Init_thread_footer(&::_TSS2);
  }
  LoopInput.ArrayNum = 0;
  if ((LoopInput.ArrayMax < 0) && (LoopInput.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&LoopInput.AllocatorInstance,0,&LoopInput.ArrayMax);
  }
  LoopOutput.ArrayNum = 0;
  if ((LoopOutput.ArrayMax < 0) && (LoopOutput.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&LoopOutput.AllocatorInstance,0,&LoopOutput.ArrayMax);
  }
  uVar7 = local_res18.vAddress;
  uVar8 = local_res18.vLogSize;
  uVar24 = (uint)local_res18.vLogSize;
  pTVar19 = param_3 + local_res18.vLogSize;
  local_50 = local_res18;
  pFVar2 = (FPageTableUpdate *)(pTVar19->AllocatorInstance).Data;
  if (((pFVar2 <= &local_50) && (&local_50 < pFVar2 + pTVar19->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = pTVar19->ArrayNum;
  if (iVar10 == pTVar19->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar19->AllocatorInstance,&pTVar19->ArrayMax);
  }
  pTVar19->ArrayNum = iVar10 + 1;
  *(FPageTableUpdate *)((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_50;
  if ((LoopOutput.AllocatorInstance.Data <= &local_res18) &&
     (&local_res18 <
      (FPageTableUpdate *)(LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8)))
  {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar17.Data = LoopOutput.AllocatorInstance.Data;
  iVar10 = LoopOutput.ArrayNum;
  if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
    FVar17.Data = LoopOutput.AllocatorInstance.Data;
  }
  LoopOutput.ArrayNum = iVar10 + 1;
  *(FPageTableUpdate *)(FVar17.Data + (longlong)iVar10 * 8) = local_res18;
  uVar11 = (this->SortedKeys).ArrayNum;
  if (uVar8 != 0) {
    do {
      uVar24 = uVar24 - 1;
      uVar13 = EqualRange(this,0,uVar11,uVar24 * 0x1000000 | uVar7,
                          -1 << (uVar8 * (char)this->vDimensions & 0x1f));
      TVar6 = LoopOutput;
      if (uVar13 != 0) {
        uVar11 = (uint)uVar13;
        lVar14 = LoopInput._8_8_;
        LoopOutput.ArrayMax = LoopInput.ArrayMax;
        LoopOutput.AllocatorInstance = LoopInput.AllocatorInstance.Data;
        LoopOutput.ArrayNum = 0;
        LoopInput = TVar6;
        if ((lVar14 < 0) && (LoopOutput.ArrayMax != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&LoopOutput.AllocatorInstance,0,&LoopOutput.ArrayMax);
        }
        if ((LoopInput.ArrayNum < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_res8 = 1;
        lVar14 = 1;
        uVar22 = uVar13 & 0xffffffff;
        local_res18 = *(FPageTableUpdate *)LoopInput.AllocatorInstance.Data;
        uVar21 = uVar11;
        while (uVar21 < (uint)(uVar13 >> 0x20)) {
          uVar20 = (uint)uVar22;
          uVar21 = 0;
          if ((int)uVar20 < (this->SortedKeys).ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar23 = *(uint *)((this->SortedKeys).AllocatorInstance.Data + (longlong)(int)uVar20 * 4)
                   & 0xffffff;
          uVar21 = 0;
          if ((int)uVar20 < (this->SortedAddresses).ArrayNum) {
            uVar21 = ~uVar20 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar5 = (char)this->vDimensions;
          bVar15 = local_res18.vLogSize * cVar5;
          if (((local_res18.vAddress & (1 << (cVar5 * local_res18.vLogSize & 0x1f)) - 1U) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(vAddress & LowBitMask) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureShared.h"
                                 ,0x32,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((uVar23 & (1 << ((char)this->vDimensions * (uchar)uVar24 & 0x1f)) - 1U) != 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(vAddress & LowBitMask) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureShared.h"
                                 ,0x32,L""), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (uVar23 < local_res18.vAddress) {
            uVar22 = (ulonglong)(uVar20 + 1);
          }
          else {
            if (uVar23 < local_res18.vAddress + (1 << (bVar15 & 0x1f))) {
              if ((local_res18.vAddress != uVar23) || (local_res18.vLogSize != (uchar)uVar24)) {
                iVar10 = 1 << ((byte)this->vDimensions & 0x1f);
                local_res18.vLogSize = local_res18.vLogSize + 0xff;
                while (iVar10 = iVar10 + -1, iVar10 != 0) {
                  uStack_51 = local_res18.vLogSize;
                  local_58 = (iVar10 << ((char)this->vDimensions * local_res18.vLogSize & 0x1f)) +
                             local_res18.vAddress;
                  FStack_54.Packed = local_res18.pTileLocation.Packed;
                  uStack_52 = local_res18.vLevel;
                  if (((Stack.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
                      ((FScriptContainerElement *)&local_58 <
                       Stack.AllocatorInstance.Data + (longlong)Stack.ArrayMax * 8)) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  if (Stack.ArrayNum == Stack.ArrayMax) {
                    Stack.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&Stack.AllocatorInstance,&Stack.ArrayMax);
                  }
                  lVar16 = (longlong)Stack.ArrayNum;
                  Stack.ArrayNum = Stack.ArrayNum + 1;
                  *(ulonglong *)(Stack.AllocatorInstance.Data + lVar16 * 8) =
                       CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT24(FStack_54.Packed,local_58)));
                }
                goto LAB_1458f4b34;
              }
              uVar22 = (ulonglong)(uVar20 + 1);
            }
            else {
              if ((LoopOutput.AllocatorInstance.Data <= &local_res18) &&
                 (&local_res18 <
                  (FPageTableUpdate *)
                  (LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8))) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar9) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              FVar17.Data = LoopOutput.AllocatorInstance.Data;
              if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
                LoopOutput.ArrayNum = iVar10;
                FVar17.Data = LoopOutput.AllocatorInstance.Data;
              }
              lVar16 = (longlong)LoopOutput.ArrayNum;
              LoopOutput.ArrayNum = LoopOutput.ArrayNum + 1;
              *(FPageTableUpdate *)(FVar17.Data + lVar16 * 8) = local_res18;
            }
            if (Stack.ArrayNum == 0) {
              if (LoopInput.ArrayNum <= (int)local_res8) {
                local_res18.vLogSize = 0xff;
                goto joined_r0x0001458f4c12;
              }
              uVar21 = 0;
              if ((int)local_res8 < LoopInput.ArrayNum) {
                uVar21 = ~local_res8 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_res8 = local_res8 + 1;
              lVar16 = lVar14 * 8;
              lVar14 = lVar14 + 1;
              local_res18 = *(FPageTableUpdate *)(LoopInput.AllocatorInstance.Data + lVar16);
            }
            else {
              if ((Stack.ArrayNum < 1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar10 = Stack.ArrayNum + -1;
              FVar3 = *(FPageTableUpdate *)(Stack.AllocatorInstance.Data + (longlong)iVar10 * 8);
              iVar12 = (Stack.ArrayNum - iVar10) + -1;
              if (iVar12 != 0) {
                memmove(Stack.AllocatorInstance.Data + (longlong)iVar10 * 8,
                        Stack.AllocatorInstance.Data + (longlong)iVar10 * 8 + 8,
                        (longlong)iVar12 << 3);
              }
              Stack.ArrayNum = Stack.ArrayNum + -1;
              local_res18 = FVar3;
            }
          }
LAB_1458f4b34:
          uVar21 = (uint)uVar22;
        }
        if (local_res18.vLogSize != 0xff) {
          if ((LoopOutput.AllocatorInstance.Data <= &local_res18) &&
             (&local_res18 <
              (FPageTableUpdate *)
              (LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8))) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FVar17.Data = LoopOutput.AllocatorInstance.Data;
          if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
            LoopOutput.ArrayNum = iVar10;
            FVar17.Data = LoopOutput.AllocatorInstance.Data;
          }
          lVar14 = (longlong)LoopOutput.ArrayNum;
          LoopOutput.ArrayNum = LoopOutput.ArrayNum + 1;
          *(FPageTableUpdate *)(FVar17.Data + lVar14 * 8) = local_res18;
        }
joined_r0x0001458f4c12:
        while (Stack.ArrayNum != 0) {
          if ((Stack.ArrayNum < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar1 = Stack.AllocatorInstance.Data + (longlong)(Stack.ArrayNum + -1) * 8;
          local_48[0] = *(undefined8 *)pFVar1;
          iVar10 = (Stack.ArrayNum - (Stack.ArrayNum + -1)) + -1;
          if (iVar10 != 0) {
            memmove(pFVar1,pFVar1 + 8,(longlong)iVar10 << 3);
          }
          Stack.ArrayNum = Stack.ArrayNum + -1;
          if ((LoopOutput.AllocatorInstance.Data <= (FScriptContainerElement *)local_48) &&
             ((FScriptContainerElement *)local_48 <
              LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8)) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar9) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          FVar17.Data = LoopOutput.AllocatorInstance.Data;
          if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
            LoopOutput.ArrayNum = iVar10;
            FVar17.Data = LoopOutput.AllocatorInstance.Data;
          }
          lVar14 = (longlong)LoopOutput.ArrayNum;
          LoopOutput.ArrayNum = LoopOutput.ArrayNum + 1;
          *(undefined8 *)(FVar17.Data + lVar14 * 8) = local_48[0];
        }
        iVar10 = LoopInput.ArrayNum - local_res8;
        pFVar1 = LoopInput.AllocatorInstance.Data + (longlong)(int)local_res8 * 8;
        if (((pFVar1 == (FScriptContainerElement *)0x0) && (iVar10 != 0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,iVar10,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayNum,
                            &LoopOutput.ArrayMax);
        if (iVar10 != 0) {
          memcpy(LoopOutput.AllocatorInstance.Data + (longlong)iVar12 * 8,pFVar1,
                 (longlong)iVar10 << 3);
        }
      }
      if (LoopOutput.ArrayNum == 0) break;
      pTVar19 = local_res20 + uVar24;
      if ((pTVar19 == &LoopOutput) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = (longlong)LoopOutput.ArrayNum;
      if (LoopOutput.ArrayNum != 0) {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,LoopOutput.ArrayNum,&pTVar19->AllocatorInstance,&pTVar19->ArrayNum,
                            &pTVar19->ArrayMax);
        memcpy((pTVar19->AllocatorInstance).Data + (longlong)iVar10 * 8,
               LoopOutput.AllocatorInstance.Data,lVar14 << 3);
      }
    } while (uVar24 != 0);
  }
  ReleaseUnmappedPages(this);
  return;
}

// ExpandPageTableUpdatePainters @ 1458f4fc0

void __thiscall
FTexturePageMap::ExpandPageTableUpdatePainters
          (FTexturePageMap *this,FVirtualTextureSystem *param_1,FPageTableUpdate param_2,
          TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *param_3)

{
  ushort uVar1;
  FPageTableUpdate *pFVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  int iVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FPageTableUpdate local_res18;
  uint local_res20;
  uint local_58;
  uint local_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *local_48;
  
  local_res18 = param_2;
  if (this->SortedKeysDirty != false) {
    BuildSortedKeys(this);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FTexturePageMap::ExpandPageTableUpdatePainters'::__l2::
           _dynamic_atexit_destructor_for__LoopOutput__);
    _Init_thread_footer(&::_TSS0);
  }
  LoopOutput.ArrayNum = 0;
  if ((LoopOutput.ArrayMax < 0) && (LoopOutput.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&LoopOutput.AllocatorInstance,0,&LoopOutput.ArrayMax);
  }
  uVar4 = local_res18.vLogSize;
  uVar8 = (ulonglong)local_res18.vLogSize;
  uVar15 = local_res18.vAddress;
  pTVar11 = param_3 + uVar8;
  local_res20 = local_res18.vAddress;
  pFVar2 = (FPageTableUpdate *)(pTVar11->AllocatorInstance).Data;
  if (((pFVar2 <= &local_res18) && (&local_res18 < pFVar2 + pTVar11->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar6 = pTVar11->ArrayNum;
  if (iVar6 == pTVar11->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
  }
  pTVar11->ArrayNum = iVar6 + 1;
  *(FPageTableUpdate *)((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res18;
  if (((LoopOutput.AllocatorInstance.Data <= &local_res18) &&
      (&local_res18 <
       (FPageTableUpdate *)(LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8)))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
    LoopOutput.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
  }
  lVar9 = (longlong)LoopOutput.ArrayNum;
  LoopOutput.ArrayNum = LoopOutput.ArrayNum + 1;
  *(FPageTableUpdate *)(LoopOutput.AllocatorInstance.Data + lVar9 * 8) = local_res18;
  local_58 = (this->SortedKeys).ArrayNum;
  if (uVar4 != 0) {
    pTVar11 = param_3 + uVar8;
    do {
      uVar13 = (int)uVar8 - 1;
      uVar12 = (undefined1)uVar13;
      pTVar11 = pTVar11 + -1;
      local_48 = pTVar11;
      uVar7 = EqualRange(this,0,local_58,uVar13 * 0x1000000 | uVar15,
                         -1 << (uVar4 * (char)this->vDimensions & 0x1f));
      if (uVar7 != 0) {
        local_58 = (uint)uVar7;
        uVar8 = uVar7 & 0xffffffff;
        uVar15 = local_res20;
        uVar14 = local_58;
        while (local_res20 = uVar15, uVar14 < (uint)(uVar7 >> 0x20)) {
          uVar14 = (uint)uVar8;
          uVar15 = 0;
          if ((int)uVar14 < (this->SortedKeys).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_50 = *(uint *)((this->SortedKeys).AllocatorInstance.Data + (longlong)(int)uVar14 * 4
                              ) & 0xffffff;
          uVar15 = 0;
          if ((int)uVar14 < (this->SortedAddresses).ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar10 = (this->SortedAddresses).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
          uVar1 = *(ushort *)pFVar10;
          if ((int)(uint)uVar1 < (param_1->PhysicalSpaces).ArrayNum) {
            if (((param_1->PhysicalSpaces).ArrayNum <= (int)(uint)uVar1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar9 = *(longlong *)
                     ((param_1->PhysicalSpaces).AllocatorInstance.Data + (ulonglong)uVar1 * 8);
          }
          else {
            lVar9 = 0;
          }
          uVar8 = (ulonglong)*(ushort *)(pFVar10 + 2);
          uStack_4b = (undefined1)(uVar8 / *(uint *)(lVar9 + 0x38));
          uStack_4c = (undefined1)(uVar8 % (ulonglong)*(uint *)(lVar9 + 0x38));
          uStack_4a = uVar12;
          uStack_49 = uVar12;
          if (((LoopOutput.AllocatorInstance.Data <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 <
               LoopOutput.AllocatorInstance.Data + (longlong)LoopOutput.ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (LoopOutput.ArrayNum == LoopOutput.ArrayMax) {
            LoopOutput.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&LoopOutput.AllocatorInstance,&LoopOutput.ArrayMax);
          }
          uVar14 = uVar14 + 1;
          uVar8 = (ulonglong)uVar14;
          lVar9 = (longlong)LoopOutput.ArrayNum;
          LoopOutput.ArrayNum = LoopOutput.ArrayNum + 1;
          *(ulonglong *)(LoopOutput.AllocatorInstance.Data + lVar9 * 8) =
               CONCAT17(uStack_49,
                        CONCAT16(uStack_4a,CONCAT15(uStack_4b,CONCAT14(uStack_4c,local_50))));
          pTVar11 = local_48;
          uVar15 = local_res20;
        }
      }
      uVar8 = (ulonglong)uVar13;
      if ((pTVar11 == &LoopOutput) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = (longlong)LoopOutput.ArrayNum;
      if (LoopOutput.ArrayNum != 0) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,LoopOutput.ArrayNum,&pTVar11->AllocatorInstance,&pTVar11->ArrayNum,
                           &pTVar11->ArrayMax);
        memcpy((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 8,
               LoopOutput.AllocatorInstance.Data,lVar9 << 3);
      }
    } while (uVar13 != 0);
  }
  ReleaseUnmappedPages(this);
  return;
}

// FindNearestPageAddress @ 1458f6800

uint __thiscall
FTexturePageMap::FindNearestPageAddress(FTexturePageMap *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FindNearestPageIndex(this,param_1,param_2,'\v');
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->Pages).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)*(ushort *)
                ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 0x14);
}

// FindNearestPageIndex @ 1458f6a40

uint __thiscall
FTexturePageMap::FindNearestPageIndex
          (FTexturePageMap *this,uchar param_1,uint param_2,uchar param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    if (param_3 < param_1) {
      return 0xffffffff;
    }
    uVar5 = param_2 & 0xffffff | (uint)param_1 << 0x18;
    uVar4 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    for (uVar4 = (this->HashTable).Hash
                 [(uVar4 >> 0x10 ^ uVar4 & 0xffff) & (this->HashTable).HashMask];
        uVar4 != 0xffffffff; uVar4 = (this->HashTable).NextIndex[uVar4]) {
      uVar3 = 0;
      if ((int)uVar4 < (this->Pages).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      if (*(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18) == uVar5) {
        if (uVar4 != 0xffffffff) {
          return uVar4;
        }
        break;
      }
    }
    param_1 = param_1 + 1;
    param_2 = param_2 & -1 << (param_1 * (char)this->vDimensions & 0x1f);
  } while( true );
}

// FindNearestPageLevel @ 1458f6b80

uint __thiscall
FTexturePageMap::FindNearestPageLevel(FTexturePageMap *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FindNearestPageIndex(this,param_1,param_2,'\v');
  if (uVar3 == 0xffffffff) {
    return 0xff;
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->Pages).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 0x14) >>
         0x1c;
}

// FindPageAddress @ 1458f6d00

uint __thiscall FTexturePageMap::FindPageAddress(FTexturePageMap *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FindPageIndex(this,param_1,param_2);
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  uVar4 = 0;
  if ((int)uVar3 < (this->Pages).ArrayNum) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)*(ushort *)
                ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x18 + 0x14);
}

// FindPageIndex @ 1458f6ed0

uint __thiscall FTexturePageMap::FindPageIndex(FTexturePageMap *this,uchar param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1 << 0x18 | param_2 & 0xffffff;
  uVar4 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = (this->HashTable).Hash[(uVar4 >> 0x10 ^ uVar4 & 0xffff) & (this->HashTable).HashMask];
  while( true ) {
    if (uVar4 == 0xffffffff) {
      return 0xffffffff;
    }
    uVar3 = 0;
    if ((int)uVar4 < (this->Pages).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18) == uVar5) {
      return uVar4;
    }
    uVar4 = (this->HashTable).NextIndex[uVar4];
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return uVar4;
}

// FindPagePhysicalSpaceIDAndAddress @ 1458f6fd0

FPhysicalSpaceIDAndAddress __thiscall
FTexturePageMap::FindPagePhysicalSpaceIDAndAddress
          (FTexturePageMap *this,FTexturePage *param_1,ushort param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined6 in_register_00000082;
  ushort in_R9W;
  
  uVar5 = (this->HashTable).Hash[(ulonglong)(this->HashTable).HashMask & (ulonglong)in_R9W];
  do {
    if (uVar5 == 0xffffffff) {
      param_1->Packed = 0xffffffff;
LAB_1458f7083:
      return (FPhysicalSpaceIDAndAddress)(uint)param_1;
    }
    uVar4 = 0;
    if ((int)uVar5 < (this->Pages).ArrayNum) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (FPhysicalSpaceIDAndAddress)uVar5;
    }
    pFVar1 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18;
    if (*(int *)pFVar1 == *(int *)CONCAT62(in_register_00000082,param_2)) {
      *(ushort *)param_1 = (ushort)(byte)pFVar1[0x16];
      *(undefined2 *)((longlong)&(param_1->_s_1).vAddress + 2) = *(undefined2 *)(pFVar1 + 0x14);
      goto LAB_1458f7083;
    }
    uVar5 = (this->HashTable).NextIndex[uVar5];
  } while( true );
}

// FindPagePhysicalSpaceIDAndAddress @ 1458f70c0

FPhysicalSpaceIDAndAddress __thiscall
FTexturePageMap::FindPagePhysicalSpaceIDAndAddress(FTexturePageMap *this,uchar param_1,uint param_2)

{
  undefined7 in_register_00000011;
  uint in_R9D;
  uint local_res18 [4];
  
  local_res18[0] = param_2 << 0x18 | in_R9D & 0xffffff;
  FindPagePhysicalSpaceIDAndAddress
            (this,(FTexturePage *)CONCAT71(in_register_00000011,param_1),(ushort)local_res18);
  return (FPhysicalSpaceIDAndAddress)(uint)(FTexturePage *)CONCAT71(in_register_00000011,param_1);
}

// GetMappedPagesInRange @ 145900ba0

void __thiscall
FTexturePageMap::GetMappedPagesInRange
          (FTexturePageMap *this,uint param_1,uint param_2,uint param_3,
          TArray<FMappedTexturePage,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar13 = ((param_1 & 0x55555555) >> 1 ^ param_1 & 0x55555555) & 0x33333333;
  uVar13 = (uVar13 >> 2 ^ uVar13) & 0xf0f0f0f;
  uVar13 = (uVar13 >> 4 ^ uVar13) & 0xff00ff;
  uVar14 = (uVar13 >> 8 ^ uVar13) & 0xffff;
  uVar13 = param_1 >> 1 & 0x55555555;
  uVar13 = (uVar13 >> 1 ^ uVar13) & 0x33333333;
  uVar13 = (uVar13 >> 2 ^ uVar13) & 0xf0f0f0f;
  uVar13 = (uVar13 >> 4 ^ uVar13) & 0xff00ff;
  uVar15 = (uVar13 >> 8 ^ uVar13) & 0xffff;
  uVar13 = uVar14 + param_2;
  uVar7 = uVar13 & 0xffff;
  uVar1 = param_3 + uVar15;
  uVar7 = (uVar7 << 8 ^ uVar7) & 0xff00ff;
  uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f;
  uVar8 = uVar1 & 0xffff;
  uVar11 = (uVar7 * 4 ^ uVar7) & 0x33333333;
  uVar7 = (uVar8 << 8 ^ uVar8) & 0xff00ff;
  uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f;
  uVar7 = (uVar7 * 4 ^ uVar7) & 0x33333333;
  if (((this->Pages).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = 0;
  uVar8 = *(uint *)((this->Pages).AllocatorInstance.Data + 0x1c);
  while( true ) {
    if (uVar8 == 1) {
      if ((this->MappedPageCount != uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MappedPageCount == CheckPageCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                             ,0x10d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      return;
    }
    uVar12 = 0;
    if ((int)uVar8 < (this->Pages).ArrayNum) {
      uVar12 = ~uVar8 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    uVar12 = *(uint *)(pFVar3 + (longlong)(int)uVar8 * 0x18);
    pFVar3 = pFVar3 + (longlong)(int)uVar8 * 0x18;
    if ((param_1 <= (uVar12 & 0xffffff)) &&
       ((uVar12 & 0xffffff) <
        (((uVar7 * 2 ^ uVar7) & 0xd5555555) * 2 | (uVar11 * 2 ^ uVar11) & 0x55555555))) {
      uVar9 = uVar12 >> 1 & 0x555555;
      uVar8 = ((uVar12 & 0x555555) >> 1 ^ uVar12 & 0x555555) & 0x33333333;
      uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
      uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
      uVar12 = (uVar8 >> 8 ^ uVar8) & 0xffff;
      uVar8 = (uVar9 >> 1 ^ uVar9) & 0x33333333;
      uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
      uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
      if ((uVar14 <= uVar12) &&
         (((uVar8 = (uVar8 >> 8 ^ uVar8) & 0xffff, uVar15 <= uVar8 && (uVar12 < uVar13)) &&
          (uVar8 < uVar1)))) {
        iVar6 = param_4->ArrayNum;
        if (iVar6 == param_4->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_4->AllocatorInstance,&param_4->ArrayMax);
        }
        param_4->ArrayNum = iVar6 + 1;
        pFVar2 = (param_4->AllocatorInstance).Data + (longlong)iVar6 * 8;
        DefaultConstructItems<FMappedTexturePage,int>(pFVar2,1);
        *(undefined4 *)pFVar2 = *(undefined4 *)pFVar3;
        *(undefined2 *)(pFVar2 + 4) = *(undefined2 *)(pFVar3 + 0x14);
        uVar8 = *(uint *)(pFVar2 + 4) & 0xf000ffff | *(uint *)(pFVar3 + 0x14) & 0xff0000;
        *(uint *)(pFVar2 + 4) = uVar8;
        *(uint *)(pFVar2 + 4) =
             (uVar8 ^ *(uint *)(pFVar3 + 0x14)) & 0xfffffff ^ *(uint *)(pFVar3 + 0x14);
      }
    }
    uVar8 = *(uint *)(pFVar3 + 4);
    uVar10 = uVar10 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// Initialize @ 14590d5d0

void __thiscall
FTexturePageMap::Initialize(FTexturePageMap *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 + 3;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &(this->Pages).ArrayMax;
  (this->Pages).ArrayNum = 0;
  if (*piVar1 != uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,&(this->Pages).AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Pages).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Pages).AllocatorInstance,piVar1);
  }
  (this->Pages).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Pages).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  DefaultConstructItems<FTexturePageMap::FPageEntry,int>(pFVar2,1);
  *(undefined8 *)(pFVar2 + 4) = 0;
  iVar3 = (this->Pages).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Pages).AllocatorInstance,piVar1);
  }
  (this->Pages).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Pages).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  DefaultConstructItems<FTexturePageMap::FPageEntry,int>(pFVar2,1);
  *(undefined4 *)(pFVar2 + 8) = 1;
  *(undefined4 *)(pFVar2 + 4) = 1;
  iVar3 = (this->Pages).ArrayNum;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->Pages).AllocatorInstance,piVar1);
  }
  (this->Pages).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Pages).AllocatorInstance.Data + (longlong)iVar3 * 0x18;
  DefaultConstructItems<FTexturePageMap::FPageEntry,int>(pFVar2,1);
  *(undefined4 *)(pFVar2 + 8) = 2;
  *(undefined4 *)(pFVar2 + 4) = 2;
  this->LayerIndex = param_2;
  this->vDimensions = param_3;
  FHashTable::Resize(&this->HashTable,param_1);
  if (-1 < (int)param_1) {
    if ((this->SortedKeys).ArrayMax < (int)param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->SortedKeys).AllocatorInstance,(this->SortedKeys).ArrayNum,
                 &(this->SortedKeys).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
}

// InvalidateUnmappedRootPage @ 14590e880

void __thiscall
FTexturePageMap::InvalidateUnmappedRootPage
          (FTexturePageMap *this,FVirtualTextureSpace *param_1,FVirtualTexturePhysicalSpace *param_2
          ,uint param_3,uchar param_4,uchar param_5,uint param_6,uchar param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPhysicalTileLocation local_res8 [4];
  
  uVar3 = FindPageIndex(this,param_5,param_6);
  if (uVar3 != 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FindPageIndex(vLogSize, vAddress) == ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                       ,0xe7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0]._0_1_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X._0_1_;
  local_res8[0]._1_1_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y._0_1_;
  FVirtualTextureSpace::QueueUpdate
            (param_1,(uchar)this->LayerIndex,param_5,param_6,param_7,local_res8);
  return;
}

// LowerBound @ 1459106f0

uint __thiscall
FTexturePageMap::LowerBound
          (FTexturePageMap *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    do {
      uVar4 = (param_2 - param_1 >> 1) + param_1;
      uVar3 = 0;
      if ((int)uVar4 < (this->SortedKeys).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if ((param_4 & *(uint *)((this->SortedKeys).AllocatorInstance.Data + (longlong)(int)uVar4 * 4)
          ) < param_3) {
        param_1 = uVar4 + 1;
        uVar4 = param_2;
      }
      param_2 = uVar4;
    } while (param_1 != param_2);
  }
  return param_1;
}

// MapPage @ 145911890

void __thiscall
FTexturePageMap::MapPage
          (FTexturePageMap *this,FVirtualTextureSpace *param_1,FVirtualTexturePhysicalSpace *param_2
          ,uint param_3,uchar param_4,uchar param_5,uint param_6,uchar param_7,ushort param_8)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  FPhysicalTileLocation local_res8 [4];
  FVirtualTextureSpace *local_res10;
  FVirtualTexturePhysicalSpace *local_res18;
  uint local_res20;
  undefined8 local_58 [3];
  
  uVar10 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_5 < param_4) {
    uVar7 = FindNearestPageIndex
                      (this,param_5 + '\x01',
                       -1 << ((param_5 + '\x01') * (char)this->vDimensions & 0x1f) & param_6,param_4
                      );
    if (uVar7 != 0xffffffff) {
      uVar8 = uVar10;
      if ((int)uVar7 < (this->Pages).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar3 = (this->Pages).AllocatorInstance.Data;
      if (*(uint *)(pFVar3 + (longlong)(int)uVar7 * 0x18 + 0x10) != param_3) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AncestorPage.PackedProducerHandle == PackedProducerHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                           ,0xc2,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((ushort)(byte)pFVar3[(longlong)(int)uVar7 * 0x18 + 0x16] != param_2->ID) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("AncestorPage.PhysicalSpaceID == PhysicalSpace->GetID()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                           ,0xc3,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  uVar7 = param_6 & 0xffffff | (uint)param_5 << 0x18;
  if ((this->Pages).ArrayNum < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = *(uint *)((this->Pages).AllocatorInstance.Data + 4);
  if (uVar8 == 0) {
    uVar8 = (this->Pages).ArrayNum;
    piVar1 = &(this->Pages).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->Pages).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    (this->Pages).ArrayNum = uVar8 + 1;
    lVar12 = (longlong)(int)uVar8 * 0x18;
    DefaultConstructItems<FTexturePageMap::FPageEntry,int>(pFVar3 + lVar12,1);
    uVar9 = uVar10;
    if ((int)uVar8 < (this->Pages).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    *(uint *)(pFVar3 + lVar12 + 8) = uVar8;
    *(uint *)(pFVar3 + lVar12 + 4) = uVar8;
  }
  else {
    RemovePageFromList(this,uVar8);
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageIndex > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                       ,0xca,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((int)uVar8 < (this->Pages).ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar12 = (longlong)(int)uVar8;
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  *(uint *)(pFVar3 + lVar12 * 0x18) = uVar7;
  *(uint *)(pFVar3 + lVar12 * 0x18 + 0x10) = local_res20;
  *(ushort *)(pFVar3 + lVar12 * 0x18 + 0x14) = param_8;
  *(uint *)(pFVar3 + lVar12 * 0x18 + 0x14) =
       ((uint)param_4 << 0x18 ^ *(uint *)(pFVar3 + lVar12 * 0x18 + 0x14) & 0xffffff) & 0xfffffff |
       (uint)param_7 << 0x1c;
  pFVar3[lVar12 * 0x18 + 0x16] = *(FScriptContainerElement *)&local_res18->ID;
  this->MappedPageCount = this->MappedPageCount + 1;
  AddPageToList(this,1,uVar8);
  pTVar2 = &this->SortedAddIndexes;
  uVar10 = UpperBound(this,0,(this->SortedKeys).ArrayNum,(uint)param_5 << 0x18 | param_6,0xffffffff)
  ;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_58[0] = CONCAT44(uVar10,uVar8);
  if ((pFVar3 <= (FScriptContainerElement *)local_58) &&
     ((FScriptContainerElement *)local_58 < pFVar3 + (longlong)(this->SortedAddIndexes).ArrayMax * 8
     )) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar11 = (this->SortedAddIndexes).ArrayNum;
  piVar1 = &(this->SortedAddIndexes).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SortedAddIndexes).ArrayNum = iVar11 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_58[0];
  uVar10 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  FHashTable::Add(&this->HashTable,uVar10 >> 0x10 ^ uVar10 & 0xffff,uVar8);
  uVar4 = (ulonglong)(uint)(local_res18->DescriptionExt).TileWidthHeight;
  local_res8[0]._1_1_ = (undefined1)(param_8 / uVar4);
  local_res8[0]._0_1_ = (undefined1)((ulonglong)param_8 % uVar4);
  FVirtualTextureSpace::QueueUpdate
            (local_res10,(uchar)this->LayerIndex,param_5,param_6,param_7,local_res8);
  this->SortedKeysDirty = true;
  return;
}

// RefreshEntirePageTable @ 1459140d0

void __thiscall
FTexturePageMap::RefreshEntirePageTable
          (FTexturePageMap *this,FVirtualTextureSystem *param_1,
          TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *pTVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  byte bStack_32;
  byte bStack_31;
  
  if (this->SortedKeysDirty != false) {
    BuildSortedKeys(this);
  }
  uVar10 = (this->SortedKeys).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 * 4;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->SortedKeys).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      uVar6 = *(uint *)((this->SortedKeys).AllocatorInstance.Data + lVar13);
      local_38 = uVar6 & 0xffffff;
      bStack_32 = (byte)(uVar6 >> 0x18);
      uVar6 = 0;
      if ((int)uVar10 < (this->SortedAddresses).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
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
      pFVar3 = (this->SortedAddresses).AllocatorInstance.Data;
      uVar2 = *(ushort *)(pFVar3 + lVar13);
      if ((int)(uint)uVar2 < (param_1->PhysicalSpaces).ArrayNum) {
        if (((param_1->PhysicalSpaces).ArrayNum <= (int)(uint)uVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar12 = *(longlong *)
                  ((param_1->PhysicalSpaces).AllocatorInstance.Data + (ulonglong)uVar2 * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar8 = (ulonglong)*(ushort *)(pFVar3 + lVar13 + 2);
      uStack_33 = (undefined1)(uVar8 / *(uint *)(lVar12 + 0x38));
      bStack_31 = bStack_32;
      uVar11 = (ulonglong)bStack_32;
      piVar9 = &param_2[bStack_32].ArrayNum;
      uStack_34 = (undefined1)(uVar8 % (ulonglong)*(uint *)(lVar12 + 0x38));
      do {
        pFVar3 = (((TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *)(piVar9 + -2))->
                 AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
            ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)piVar9[1] * 8)) &&
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
        iVar7 = *piVar9;
        if (iVar7 == piVar9[1]) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)(piVar9 + -2),piVar9 + 1);
        }
        *piVar9 = iVar7 + 1;
        pTVar1 = (TArray<FPageTableUpdate,TSizedDefaultAllocator<32>_> *)(piVar9 + -2);
        piVar9 = piVar9 + -4;
        uVar11 = uVar11 - 1;
        *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) =
             CONCAT17(bStack_31,CONCAT16(bStack_32,CONCAT15(uStack_33,CONCAT14(uStack_34,local_38)))
                     );
      } while (-1 < (longlong)uVar11);
      lVar13 = lVar13 + -4;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  ReleaseUnmappedPages(this);
  return;
}

// ReleaseUnmappedPages @ 145916de0

void __thiscall FTexturePageMap::ReleaseUnmappedPages(FTexturePageMap *this)

{
  longlong lVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (((this->Pages).ArrayNum < 3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = *(uint *)((this->Pages).AllocatorInstance.Data + 0x34);
  while( true ) {
    if (uVar6 == 2) {
      if (((this->Pages).ArrayNum < 3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)((this->Pages).AllocatorInstance.Data + 0x34) != 2) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pages[PageListHead_Unmapped].NextIndex == PageListHead_Unmapped",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                             ,0x16f,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      return;
    }
    uVar11 = ~uVar6 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar6 < (this->Pages).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar1 = (longlong)(int)uVar6 * 0x18;
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    uVar8 = *(uint *)(pFVar3 + lVar1 + 4);
    *(undefined4 *)(pFVar3 + lVar1) = 0xffffffff;
    *(undefined8 *)(pFVar3 + lVar1 + 0x10) = 0xffffffff;
    uVar10 = 0;
    if ((int)uVar6 < (this->Pages).ArrayNum) {
      uVar10 = uVar11;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    uVar10 = *(uint *)(pFVar3 + lVar1 + 8);
    uVar2 = *(undefined4 *)(pFVar3 + lVar1 + 4);
    uVar9 = 0;
    if ((int)uVar10 < (this->Pages).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18 + 4) = uVar2
    ;
    uVar10 = *(uint *)(pFVar3 + lVar1 + 4);
    uVar2 = *(undefined4 *)(pFVar3 + lVar1 + 8);
    uVar9 = 0;
    if ((int)uVar10 < (this->Pages).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18 + 8) = uVar2
    ;
    *(uint *)(pFVar3 + lVar1 + 8) = uVar6;
    *(uint *)(pFVar3 + lVar1 + 4) = uVar6;
    if (((this->Pages).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Pages).AllocatorInstance.Data;
    uVar10 = 0;
    if ((int)uVar6 < (this->Pages).ArrayNum) {
      uVar10 = uVar11;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->Pages).AllocatorInstance.Data;
    if ((uVar6 < 3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= PageListHead_Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                           ,0xa5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(uint *)(pFVar4 + lVar1 + 4) != uVar6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Page.NextIndex == Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                           ,0xa8,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(uint *)(pFVar4 + lVar1 + 8) != uVar6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Page.PrevIndex == Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.h"
                           ,0xa9,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined4 *)(pFVar4 + lVar1 + 4) = 0;
    *(undefined4 *)(pFVar4 + lVar1 + 8) = *(undefined4 *)(pFVar3 + 8);
    uVar11 = *(uint *)(pFVar3 + 8);
    uVar10 = 0;
    if ((int)uVar11 < (this->Pages).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) break;
    *(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18 + 4) = uVar6;
    *(uint *)(pFVar3 + 8) = uVar6;
    uVar6 = uVar8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// RemovePageFromList @ 145918c10

void __thiscall FTexturePageMap::RemovePageFromList(FTexturePageMap *this,uint param_1)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_1;
  uVar6 = 0;
  if ((int)param_1 < (this->Pages).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar2 = (this->Pages).AllocatorInstance.Data;
  uVar6 = *(uint *)(pFVar2 + lVar7 * 0x18 + 8);
  uVar1 = *(undefined4 *)(pFVar2 + lVar7 * 0x18 + 4);
  uVar5 = 0;
  if ((int)uVar6 < (this->Pages).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 4) = uVar1;
  uVar6 = *(uint *)(pFVar2 + lVar7 * 0x18 + 4);
  uVar1 = *(undefined4 *)(pFVar2 + lVar7 * 0x18 + 8);
  uVar5 = 0;
  if ((int)uVar6 < (this->Pages).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  *(undefined4 *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18 + 8) = uVar1;
  *(uint *)(pFVar2 + lVar7 * 0x18 + 8) = param_1;
  *(uint *)(pFVar2 + lVar7 * 0x18 + 4) = param_1;
  return;
}

// UnmapPage @ 145927620

void __thiscall
FTexturePageMap::UnmapPage
          (FTexturePageMap *this,FVirtualTextureSystem *param_1,FVirtualTextureSpace *param_2,
          uchar param_3,uint param_4,bool param_5)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FVirtualTexturePhysicalSpace *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  FPhysicalTileLocation local_res20 [4];
  uint local_58 [6];
  
  uVar9 = FindPageIndex(this,param_3,param_4);
  uVar17 = 0;
  uVar20 = (ulonglong)uVar9;
  if ((uVar9 == 0xffffffff) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PageIndex != ~0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                         ,0x74,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar18 = param_4 & 0xffffff | (uint)param_3 << 0x18;
  uVar13 = 0;
  if ((int)uVar9 < (this->Pages).ArrayNum) {
    uVar13 = ~uVar9 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar11 = (longlong)(int)uVar9;
  pFVar4 = (this->Pages).AllocatorInstance.Data;
  if ((*(uint *)(pFVar4 + lVar11 * 0x18) != uVar18) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entry.Page == Page",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                         ,0x78,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  if (uVar9 < (this->HashTable).IndexSize) {
    uVar14 = ((ulonglong)(uVar13 >> 0x10) ^ (ulonglong)uVar13 & 0xffff) &
             (ulonglong)(this->HashTable).HashMask;
    puVar5 = (this->HashTable).Hash;
    puVar15 = puVar5 + uVar14;
    uVar13 = puVar5[uVar14];
    if (uVar13 == uVar9) {
      uVar13 = (this->HashTable).NextIndex[uVar20];
LAB_1459277ca:
      *puVar15 = uVar13;
    }
    else if (uVar13 != 0xffffffff) {
      puVar5 = (this->HashTable).NextIndex;
      do {
        puVar15 = puVar5 + uVar13;
        uVar13 = puVar5[uVar13];
        if (uVar13 == uVar9) {
          uVar13 = puVar5[uVar20];
          goto LAB_1459277ca;
        }
      } while (uVar13 != 0xffffffff);
    }
  }
  if (param_5) {
    uVar13 = FindNearestPageIndex
                       (this,param_3 + '\x01',
                        -1 << ((param_3 + '\x01') * (char)this->vDimensions & 0x1f) & param_4,
                        (byte)pFVar4[lVar11 * 0x18 + 0x17] & 0xf);
    if (uVar13 != 0xffffffff) {
      uVar18 = 0;
      if ((int)uVar13 < (this->Pages).ArrayNum) {
        uVar18 = ~uVar13 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->Pages).AllocatorInstance.Data;
      if ((*(int *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x10) !=
           *(int *)(pFVar4 + lVar11 * 0x18 + 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AncestorPage.PackedProducerHandle == Entry.PackedProducerHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                             ,0x88,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar6[(longlong)(int)uVar13 * 0x18 + 0x16] != pFVar4[lVar11 * 0x18 + 0x16]) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AncestorPage.PhysicalSpaceID == Entry.PhysicalSpaceID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                             ,0x89,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = FVirtualTextureSystem::GetPhysicalSpace
                          (param_1,(uint)(byte)pFVar6[(longlong)(int)uVar13 * 0x18 + 0x16]);
      uVar14 = (ulonglong)(uint)(pFVar12->DescriptionExt).TileWidthHeight;
      local_res20[0]._1_1_ =
           (undefined1)(*(ushort *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x14) / uVar14);
      local_res20[0]._0_1_ =
           (undefined1)
           ((ulonglong)*(ushort *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x14) % uVar14);
      FVirtualTextureSpace::QueueUpdate
                (param_2,(uchar)this->LayerIndex,param_3,param_4,
                 (byte)((uint)*(undefined4 *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x14) >> 0x1c)
                 ,local_res20);
    }
  }
  uVar13 = 0;
  uVar14 = uVar17;
  if (0 < (this->SortedAddIndexes).ArrayNum) {
    do {
      uVar19 = (uint)uVar14;
      uVar16 = ~uVar19 >> 0x1f;
      uVar18 = uVar13;
      if ((int)uVar19 < (this->SortedAddIndexes).ArrayNum) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(uint *)((this->SortedAddIndexes).AllocatorInstance.Data + uVar17) == uVar20) {
        if ((int)uVar19 < (this->SortedAddIndexes).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar3 = (this->SortedAddIndexes).ArrayNum;
        pFVar4 = (this->SortedAddIndexes).AllocatorInstance.Data;
        iVar10 = ~uVar19 + iVar3;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar19 * 8,pFVar4 + (longlong)(iVar3 - iVar10) * 8,
                  (longlong)iVar10 << 3);
        }
        piVar1 = &(this->SortedAddIndexes).ArrayNum;
        *piVar1 = *piVar1 + -1;
        goto LAB_145927ae7;
      }
      uVar17 = uVar17 + 8;
      uVar14 = (ulonglong)(uVar19 + 1);
    } while ((int)(uVar19 + 1) < (this->SortedAddIndexes).ArrayNum);
  }
  uVar18 = (uint)param_3 << 0x18 | param_4;
  local_58[0] = LowerBound(this,0,(this->SortedKeys).ArrayNum,uVar18,0xffffffff);
  lVar11 = (longlong)(int)local_58[0];
  if ((int)local_58[0] < (this->SortedKeys).ArrayNum) {
    uVar13 = ~local_58[0] >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(uint *)((this->SortedKeys).AllocatorInstance.Data + lVar11 * 4) != uVar18) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SortedKeys[OldIndex] == OldKey",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                         ,0xa0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this->SortedSubIndexes;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
      ((FScriptContainerElement *)local_58 <
       pFVar4 + (longlong)(this->SortedSubIndexes).ArrayMax * 4)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (this->SortedSubIndexes).ArrayNum;
  piVar1 = &(this->SortedSubIndexes).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SortedSubIndexes).ArrayNum = iVar10 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58[0];
LAB_145927ae7:
  RemovePageFromList(this,uVar9);
  AddPageToList(this,2,uVar9);
  if ((this->MappedPageCount == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedPageCount > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePageMap.cpp"
                         ,0xaa,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->MappedPageCount = this->MappedPageCount - 1;
  this->SortedKeysDirty = true;
  return;
}

// UpperBound @ 1459297f0

uint __thiscall
FTexturePageMap::UpperBound
          (FTexturePageMap *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != param_2) {
    do {
      uVar4 = (param_2 - param_1 >> 1) + param_1;
      uVar3 = 0;
      if ((int)uVar4 < (this->SortedKeys).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      if ((param_4 & *(uint *)((this->SortedKeys).AllocatorInstance.Data + (longlong)(int)uVar4 * 4)
          ) <= param_3) {
        param_1 = uVar4 + 1;
        uVar4 = param_2;
      }
      param_2 = uVar4;
    } while (param_1 != param_2);
  }
  return param_1;
}

