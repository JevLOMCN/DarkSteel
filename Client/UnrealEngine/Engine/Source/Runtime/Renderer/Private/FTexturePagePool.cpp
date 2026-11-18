// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 28

// FTexturePagePool @ 1458ccb60

FTexturePagePool * __thiscall FTexturePagePool::FTexturePagePool(FTexturePagePool *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  (this->FreeHeap).HeapNum = 0;
  (this->FreeHeap).HeapSize = 0;
  (this->FreeHeap).IndexSize = 0;
  (this->FreeHeap).Heap = (ushort *)0x0;
  (this->FreeHeap).Keys = (uint *)0x0;
  (this->FreeHeap).HeapIndexes = (ushort *)0x0;
  FHashTable::FHashTable(&this->PageHash,0x4000,0);
  FHashTable::FHashTable(&this->ProducerToPageIndex,0x400,0);
  (this->Pages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pages).ArrayNum = 0;
  (this->Pages).ArrayMax = 0;
  (this->PageMapping).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PageMapping).ArrayNum = 0;
  (this->PageMapping).ArrayMax = 0;
  this->NumPages = 0;
  this->NumPagesMapped = 0;
  this->NumPagesAllocated = 1;
  return this;
}

// ~FTexturePagePool @ 1458d0fa0

void __thiscall FTexturePagePool::~FTexturePagePool(FTexturePagePool *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PageMapping).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->ProducerToPageIndex).IndexSize != 0) {
    (this->ProducerToPageIndex).HashMask = 0;
    (this->ProducerToPageIndex).IndexSize = 0;
    operator_delete__((this->ProducerToPageIndex).Hash);
    (this->ProducerToPageIndex).Hash = FHashTable::EmptyHash;
    operator_delete__((this->ProducerToPageIndex).NextIndex);
    (this->ProducerToPageIndex).NextIndex = (uint *)0x0;
  }
  if ((this->PageHash).IndexSize != 0) {
    (this->PageHash).HashMask = 0;
    (this->PageHash).IndexSize = 0;
    operator_delete__((this->PageHash).Hash);
    (this->PageHash).Hash = FHashTable::EmptyHash;
    operator_delete__((this->PageHash).NextIndex);
    (this->PageHash).NextIndex = (uint *)0x0;
  }
  operator_delete__((this->FreeHeap).Heap);
  operator_delete__((this->FreeHeap).Keys);
  operator_delete__((this->FreeHeap).HeapIndexes);
  (this->FreeHeap).HeapNum = 0;
  (this->FreeHeap).HeapSize = 0;
  (this->FreeHeap).IndexSize = 0;
  (this->FreeHeap).Heap = (ushort *)0x0;
  (this->FreeHeap).Keys = (uint *)0x0;
  (this->FreeHeap).HeapIndexes = (ushort *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0001458d106f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// AcquireMapping @ 1458d6420

uint __thiscall FTexturePagePool::AcquireMapping(FTexturePagePool *this)

{
  int *piVar1;
  TArray<FTexturePagePool::FPageMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = this->NumPages;
  pTVar2 = &this->PageMapping;
  uVar8 = 0;
  if ((int)uVar6 < (this->PageMapping).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  uVar8 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0xc + 4) & 0xffffff;
  if (uVar8 == uVar6) {
    uVar8 = (this->PageMapping).ArrayNum;
    piVar1 = &(this->PageMapping).ArrayMax;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PageMapping).ArrayNum = uVar8 + 1;
    if (0xffffff < uVar8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index <= PAGE_MAPPING_CAPACITY",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                         ,0xd7,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    uVar6 = 0;
    if ((int)uVar8 < (this->PageMapping).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    lVar7 = (longlong)(int)uVar8;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    *(uint *)(pFVar3 + lVar7 * 0xc + 8) =
         *(uint *)(pFVar3 + lVar7 * 0xc + 8) ^
         (*(uint *)(pFVar3 + lVar7 * 0xc + 8) ^ uVar8) & 0xffffff;
    *(uint *)(pFVar3 + lVar7 * 0xc + 4) =
         *(uint *)(pFVar3 + lVar7 * 0xc + 4) ^
         (*(uint *)(pFVar3 + lVar7 * 0xc + 4) ^ uVar8) & 0xffffff;
  }
  else {
    RemoveMappingFromList(this,uVar8);
  }
  return uVar8;
}

// AddMappingToList @ 1458d8fc0

void __thiscall FTexturePagePool::AddMappingToList(FTexturePagePool *this,uint param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((int)param_1 < (this->PageMapping).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar1 = (this->PageMapping).AllocatorInstance.Data;
  uVar6 = 0;
  if ((int)param_2 < (this->PageMapping).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar2 = (this->PageMapping).AllocatorInstance.Data;
  if (param_2 <= this->NumPages) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index > NumPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                       ,0xbe,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (0xffffff < param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index <= PAGE_MAPPING_CAPACITY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                       ,0xbf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 4) & 0xffffff) != param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mapping.NextIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                       ,0xc2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((*(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 8) & 0xffffff) != param_2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mapping.PrevIndex == Index",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.h"
                       ,0xc3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar6 = *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 8);
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 4) =
       *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 4) ^
       (*(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 4) ^ param_1) & 0xffffff;
  *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 8) =
       *(uint *)(pFVar2 + (longlong)(int)param_2 * 0xc + 8) ^
       (uVar6 ^ *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xc + 8)) & 0xffffff;
  uVar6 = *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xc + 8) & 0xffffff;
  if ((this->PageMapping).ArrayNum <= (int)uVar6) {
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
  pFVar3 = (this->PageMapping).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (ulonglong)uVar6 * 0xc + 4;
  *(uint *)pFVar2 =
       *(uint *)pFVar2 ^ (*(uint *)(pFVar3 + (ulonglong)uVar6 * 0xc + 4) ^ param_2) & 0xffffff;
  *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xc + 8) =
       *(uint *)(pFVar1 + (longlong)(int)param_1 * 0xc + 8) ^
       (*(uint *)(pFVar1 + (longlong)(int)param_1 * 0xc + 8) ^ param_2) & 0xffffff;
  return;
}

// Alloc @ 1458da290

uint __thiscall
FTexturePagePool::Alloc
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,uint param_2,
          FVirtualTextureProducerHandle *param_3,uchar param_4,uint param_5,uchar param_6,
          bool param_7)

{
  FVirtualTextureProducerHandle *pFVar1;
  ushort uVar2;
  FScriptContainerElement *pFVar3;
  ushort *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if (param_3->PackedValue == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProducerHandle.PackedValue != 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x115,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  uVar9 = *(this->FreeHeap).Heap;
  uVar11 = (ulonglong)uVar9;
  if ((this->Pages).ArrayNum <= (int)(uint)uVar9) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  pFVar1 = (FVirtualTextureProducerHandle *)(pFVar3 + uVar11 * 8);
  if ((*(int *)(pFVar3 + uVar11 * 8) != 0) && (this->NumPagesAllocated != this->NumPages)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageEntry.PackedProducerHandle == 0u || NumPagesAllocated == NumPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x11d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  UnmapAllPages(this,param_1,uVar9,true);
  *pFVar1 = *param_3;
  pFVar1[1].PackedValue =
       (((pFVar1[1].PackedValue ^ param_5) & 0xffffff ^ pFVar1[1].PackedValue) & 0xffffff ^
       (uint)param_6 << 0x18) & 0xfffffff | (uint)param_4 << 0x1c;
  uVar8 = (*(ulonglong *)pFVar1 >> 0x21 ^ *(ulonglong *)pFVar1) * -0xae502812aa7333;
  lVar12 = (uVar8 >> 0x21 ^ uVar8) * -0x3b314601e57a13ad;
  uVar10 = (uint)uVar9;
  FHashTable::Add(&this->PageHash,(uint)((ulonglong)lVar12 >> 0x21) & 0xffff ^ (uint)lVar12 & 0xffff
                  ,uVar10);
  uVar7 = (param_3->PackedValue >> 0x10 ^ param_3->PackedValue) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  FHashTable::Add(&this->ProducerToPageIndex,uVar7 >> 0x10 ^ uVar7,uVar10);
  if (param_7) {
    puVar4 = (this->FreeHeap).Heap;
    uVar2 = *puVar4;
    (this->FreeHeap).HeapNum = (this->FreeHeap).HeapNum - 1;
    *puVar4 = puVar4[(this->FreeHeap).HeapNum];
    (this->FreeHeap).HeapIndexes[*(this->FreeHeap).Heap] = 0;
    uVar9 = 0;
    (this->FreeHeap).HeapIndexes[uVar2] = 0xffff;
  }
  else {
    uVar7 = (param_6 & 0xf) + param_2 * 0x10;
    (this->FreeHeap).Keys[uVar11] = uVar7;
    uVar9 = (this->FreeHeap).HeapIndexes[uVar11];
    if ((uVar9 != 0) &&
       (uVar7 < (this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar9 - 1) >> 1 & 0xffff]])) {
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar9);
      goto LAB_1458da48a;
    }
  }
  FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar9);
LAB_1458da48a:
  this->NumPagesAllocated = this->NumPagesAllocated + 1;
  if (this->NumPages < this->NumPagesAllocated) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumPagesAllocated <= NumPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x134,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return uVar7;
    }
  }
  return uVar10;
}

// AnyFreeAvailable @ 1458dcf80

bool __thiscall FTexturePagePool::AnyFreeAvailable(FTexturePagePool *this,uint param_1,uint param_2)

{
  if ((this->FreeHeap).HeapNum != 0) {
    return ((this->FreeHeap).Keys[*(this->FreeHeap).Heap] >> 4) + param_2 < param_1;
  }
  return false;
}

// CollectProducerCounts @ 1458e1900

void __thiscall
FTexturePagePool::CollectProducerCounts
          (FTexturePagePool *this,
          TMap<unsigned_int,UE::Math::TIntVector2<unsigned_int>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TIntVector2<unsigned_int>,0>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint local_res8 [2];
  int local_res18 [2];
  uint *local_res20;
  
  uVar7 = 1;
  if (1 < this->NumPages) {
    do {
      uVar3 = 0;
      if ((int)uVar7 < (this->Pages).ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res8[0] = *(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8);
      if (local_res8[0] != 0) {
        if ((uVar7 & 0xffff) < (this->FreeHeap).IndexSize) {
          uVar3 = (uint)((this->FreeHeap).HeapIndexes[uVar7 & 0xffff] == 0xffff);
        }
        else {
          uVar3 = 1;
        }
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          puVar6 = &param_1->field_0x38;
          if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
            puVar6 = *(undefined1 **)&param_1->field_0x40;
          }
          iVar4 = *(int *)(puVar6 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & local_res8[0]) *
                                    4);
          if (iVar4 != -1) {
            do {
              lVar5 = *(longlong *)param_1 + (longlong)iVar4 * 0x14;
              if (*(uint *)(*(longlong *)param_1 + (longlong)iVar4 * 0x14) == local_res8[0]) {
                if (lVar5 != 0) goto LAB_1458e1a50;
                break;
              }
              iVar4 = *(int *)(lVar5 + 0xc);
            } while (iVar4 != -1);
          }
        }
        local_res20 = local_res8;
        TSet<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TIntVector2<unsigned_int>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned_int,UE::Math::TIntVector2<unsigned_int>_>,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TIntVector2<unsigned_int>,0>,FDefaultSetAllocator>
                    *)param_1,(uint)local_res18,
                   (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res8[0],
                   (bool *)&local_res20);
        lVar5 = *(longlong *)param_1 + (longlong)local_res18[0] * 0x14;
LAB_1458e1a50:
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + uVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < this->NumPages);
  }
  return;
}

// EvictAllPages @ 1458ed940

void __thiscall
FTexturePagePool::EvictAllPages(FTexturePagePool *this,FVirtualTextureSystem *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort local_48 [4];
  ForAnyElementType local_40;
  uint local_38;
  uint auStack_34 [3];
  
  uVar7 = (this->FreeHeap).HeapNum;
  uVar9 = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  auStack_34[0] = 0;
  uVar10 = uVar9;
  if (uVar7 != 0) {
    do {
      puVar3 = (this->FreeHeap).Heap;
      local_48[0] = *puVar3;
      uVar1 = *puVar3;
      (this->FreeHeap).HeapNum = uVar7 - 1;
      *puVar3 = puVar3[uVar7 - 1];
      (this->FreeHeap).HeapIndexes[*(this->FreeHeap).Heap] = 0;
      (this->FreeHeap).HeapIndexes[uVar1] = 0xffff;
      FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,0);
      if (((local_40.Data <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < local_40.Data + (longlong)(int)auStack_34[0] * 2))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_38 == auStack_34[0]) {
        local_38 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_40,(int *)auStack_34);
      }
      uVar8 = local_38 + 1;
      *(ushort *)(local_40.Data + (longlong)(int)local_38 * 2) = local_48[0];
      uVar7 = (this->FreeHeap).HeapNum;
      local_38 = uVar8;
    } while (uVar7 != 0);
    uVar10 = (ulonglong)uVar8;
  }
  uVar11 = uVar9;
  if (0 < (int)uVar10) {
    do {
      uVar8 = (uint)uVar9;
      uVar7 = 0;
      if ((int)uVar8 < (int)uVar10) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UnmapAllPages(this,param_1,*(ushort *)(local_40.Data + uVar11),true);
      uVar7 = 0;
      if ((int)uVar8 < (int)local_38) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (this->FreeHeap).HeapSize;
      uVar1 = *(ushort *)(local_40.Data + uVar11);
      uVar10 = (ulonglong)uVar1;
      if ((this->FreeHeap).HeapNum == uVar7) {
        uVar7 = uVar7 * 2;
        if (uVar7 < 0x20) {
          uVar7 = 0x20;
        }
        FBinaryHeap<unsigned_int,unsigned_short>::ResizeHeap(&this->FreeHeap,uVar7);
      }
      if ((this->FreeHeap).IndexSize <= (uint)uVar1) {
        uVar9 = uVar10 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar7 = 1 << ((byte)lVar4 & 0x1f);
        if (uVar7 < 0x20) {
          uVar7 = 0x20;
        }
        FBinaryHeap<unsigned_int,unsigned_short>::ResizeIndexes(&this->FreeHeap,uVar7);
      }
      uVar2 = (ushort)(this->FreeHeap).HeapNum;
      (this->FreeHeap).HeapNum = (this->FreeHeap).HeapNum + 1;
      (this->FreeHeap).Heap[uVar2] = uVar1;
      (this->FreeHeap).Keys[uVar10] = 0;
      (this->FreeHeap).HeapIndexes[uVar10] = uVar2;
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar2);
      uVar10 = (ulonglong)local_38;
      uVar9 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 2;
    } while ((int)(uVar8 + 1) < (int)local_38);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// EvictPages @ 1458edc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTexturePagePool::EvictPages
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,
          FVirtualTextureProducerHandle *param_2)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<unsigned_int> FVar7;
  longlong lVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  undefined1 auStack_4b8 [32];
  uint *local_498;
  ForElementType<unsigned_int> local_490;
  longlong local_488;
  longlong local_480;
  undefined8 local_478;
  undefined1 local_468 [4];
  uint local_464;
  FVirtualTextureSystem *local_460;
  ForElementType<unsigned_int> local_458;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  FVar10 = (ForElementType<unsigned_int>)0x0;
  uVar5 = (param_2->PackedValue >> 0x10 ^ param_2->PackedValue) * -0x7a143595;
  local_458.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4c = 0x100;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = (this->ProducerToPageIndex).Hash
          [(uVar5 >> 0x10 ^ uVar5) & (this->ProducerToPageIndex).HashMask];
  local_460 = param_1;
  iVar2 = local_50;
  FVar7 = local_490;
  do {
    local_50 = iVar2;
    if (uVar5 == 0xffffffff) {
      FVar9 = (ForElementType<unsigned_int>)&local_458;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar10;
      }
      FVar10 = (ForElementType<unsigned_int>)((longlong)FVar9 + (longlong)iVar2 * 4);
      local_464 = 0xffffffff;
      local_490 = FVar7;
      while( true ) {
        if (local_50 != iVar2) {
          local_468[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_468);
        }
        if (FVar9 == FVar10) break;
        uVar1 = *(ushort *)FVar9;
        UnmapAllPages(this,param_1,uVar1,false);
        if ((((this->FreeHeap).IndexSize <= (uint)uVar1) ||
            ((this->FreeHeap).HeapIndexes[uVar1] == 0xffff)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("FreeHeap.IsPresent(pAddress)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                               ,0x78,
                               L"If the address is present in the FreeHeap already, then there\'s an issue because we expect all locked pages to have been unlocked earlier by a call to ForceUnlockAllTiles"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->FreeHeap).Keys[uVar1] = 0;
        uVar1 = (this->FreeHeap).HeapIndexes[uVar1];
        if ((uVar1 == 0) ||
           ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar1 - 1) >> 1 & 0xffff]] == 0)) {
          FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar1);
          FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
          param_1 = local_460;
        }
        else {
          FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar1);
          FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
          param_1 = local_460;
        }
      }
      if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_458.SecondaryData);
      }
      return;
    }
    iVar2 = (this->Pages).ArrayNum;
    local_490 = (ForElementType<unsigned_int>)(longlong)iVar2;
    uVar6 = 0;
    if ((int)uVar5 < iVar2) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    local_464 = uVar5;
    if (uVar6 == 0) {
      local_498 = (uint *)(longlong)(int)uVar5;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      FVar10 = local_458.SecondaryData;
      FVar7 = local_490;
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_490 = FVar7;
    if (*(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 8) ==
        param_2->PackedValue) {
      FVar7 = (ForElementType<unsigned_int>)&local_458;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar10;
      }
      if ((ulonglong)FVar7 <= &local_464) {
        FVar7 = (ForElementType<unsigned_int>)&local_458;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar10;
        }
        if (&local_464 < (uint *)((longlong)FVar7 + (longlong)local_4c * 4)) {
          local_480 = (longlong)local_50;
          local_478 = 4;
          local_490 = (ForElementType<unsigned_int>)&local_458;
          if (FVar10 != (ForElementType<unsigned_int>)0x0) {
            local_490 = FVar10;
          }
          local_498 = &local_464;
          local_488 = (longlong)local_4c;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          FVar10 = local_458.SecondaryData;
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_458,&local_4c);
        FVar10 = local_458.SecondaryData;
      }
      lVar8 = (longlong)local_50;
      FVar7 = (ForElementType<unsigned_int>)&local_458;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar7 = FVar10;
      }
      local_50 = local_50 + 1;
      *(uint *)((longlong)FVar7 + lVar8 * 4) = local_464;
      FVar10 = local_458.SecondaryData;
    }
    uVar5 = (this->ProducerToPageIndex).NextIndex[local_464];
    iVar2 = local_50;
    FVar7 = local_490;
  } while( true );
}

// EvictPages @ 1458edf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTexturePagePool::EvictPages
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,
          FVirtualTextureProducerHandle *param_2,FVTProducerDescription *param_3,
          TIntRect<int> *param_4,uint param_5,uint param_6,EVTInvalidatePriority param_7,
          TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
          *param_8)

{
  ForElementType<unsigned_int> FVar1;
  ushort uVar2;
  code *pcVar3;
  FVirtualTextureSystem *pFVar4;
  bool bVar5;
  uint uVar6;
  FVirtualTextureLocalTileRequest *this_00;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  FVirtualTextureLocalTileRequest *pFVar10;
  uint *puVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined1 auStack_4d8 [32];
  uint *local_4b8;
  ForElementType<unsigned_int> local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  bool local_488;
  bool local_487 [3];
  uint local_484;
  undefined1 local_480 [8];
  FVirtualTextureLocalTileRequest local_478;
  FVirtualTextureLocalTileRequest local_470;
  TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
  *local_468;
  FVirtualTextureSystem *local_460;
  ForElementType<unsigned_int> local_458;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  local_468 = param_8;
  uVar6 = (param_2->PackedValue >> 0x10 ^ param_2->PackedValue) * -0x7a143595;
  local_458.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4c = 0x100;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  local_484 = (this->ProducerToPageIndex).Hash
              [(uVar6 >> 0x10 ^ uVar6) & (this->ProducerToPageIndex).HashMask];
  local_460 = param_1;
  if (local_484 != 0xffffffff) {
    do {
      puVar11 = (uint *)(longlong)(int)local_484;
      iVar9 = (this->Pages).ArrayNum;
      uVar6 = 0;
      if ((int)local_484 < iVar9) {
        uVar6 = ~local_484 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (local_4b8 = puVar11, local_4b0 = (ForElementType<unsigned_int>)(longlong)iVar9,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(uint *)((this->Pages).AllocatorInstance.Data + (longlong)puVar11 * 8) ==
          param_2->PackedValue) {
        puVar11 = (uint *)(longlong)(int)local_484;
        iVar9 = (this->Pages).ArrayNum;
        uVar6 = 0;
        if ((int)local_484 < iVar9) {
          uVar6 = ~local_484 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (local_4b8 = puVar11, local_4b0 = (ForElementType<unsigned_int>)(longlong)iVar9,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = (this->Pages).ArrayNum;
        uVar6 = *(uint *)((this->Pages).AllocatorInstance.Data + (longlong)puVar11 * 8 + 4);
        puVar11 = (uint *)(longlong)(int)local_484;
        uVar12 = uVar6 & 0xffffff;
        uVar17 = 0;
        if ((int)local_484 < iVar9) {
          uVar17 = ~local_484 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_4b8 = puVar11, local_4b0 = (ForElementType<unsigned_int>)(longlong)iVar9,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar17 = (byte)(this->Pages).AllocatorInstance.Data[(longlong)puVar11 * 8 + 7] & 0xf;
        if (uVar17 <= param_5) {
          iVar16 = param_3->TileSize << (sbyte)uVar17;
          uVar6 = uVar6 & 0x555555;
          uVar6 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
          uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
          uVar7 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
          uVar6 = uVar12 >> 1 & 0x55555555;
          iVar15 = ((uVar7 >> 8 ^ uVar7) & 0xffff) * iVar16;
          uVar6 = (uVar6 >> 1 ^ uVar6) & 0x33333333;
          uVar6 = (uVar6 >> 2 ^ uVar6) & 0xf0f0f0f;
          uVar6 = (uVar6 >> 4 ^ uVar6) & 0xff00ff;
          iVar9 = param_3->TileBorderSize << (sbyte)uVar17;
          iVar14 = ((uVar6 >> 8 ^ uVar6) & 0xffff) * iVar16;
          if ((((iVar15 - iVar9 <= *(int *)((longlong)&param_4->field0_0x0 + 8)) &&
               (*(int *)&param_4->field0_0x0 <= iVar9 + iVar15 + iVar16)) &&
              (iVar14 - iVar9 <= *(int *)((longlong)&param_4->field0_0x0 + 0xc))) &&
             (*(int *)((longlong)&param_4->field0_0x0 + 4) <= iVar14 + iVar9 + iVar16)) {
            if (((local_484 & 0xffff) < (this->FreeHeap).IndexSize) &&
               ((this->FreeHeap).HeapIndexes[local_484 & 0xffff] != 0xffff)) {
              if ((this->FreeHeap).Keys[local_484 & 0xffff] >> 4 < param_6) {
                FVar13 = (ForElementType<unsigned_int>)&local_458;
                if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar13 = local_458.SecondaryData;
                }
                if ((ulonglong)FVar13 <= &local_484) {
                  FVar13 = (ForElementType<unsigned_int>)&local_458;
                  if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                    FVar13 = local_458.SecondaryData;
                  }
                  if (&local_484 < (uint *)((longlong)FVar13 + (longlong)local_4c * 4)) {
                    local_4a0 = (longlong)local_50;
                    local_498 = 4;
                    local_4b8 = &local_484;
                    local_4b0 = (ForElementType<unsigned_int>)&local_458;
                    if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                      local_4b0 = local_458.SecondaryData;
                    }
                    local_4a8 = (longlong)local_4c;
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                }
                if (local_50 == local_4c) {
                  local_50 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                       (0x404,&local_458,&local_4c);
                }
                lVar8 = (longlong)local_50;
                FVar13 = (ForElementType<unsigned_int>)&local_458;
                if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                  FVar13 = local_458.SecondaryData;
                }
                local_50 = local_50 + 1;
                *(uint *)((longlong)FVar13 + lVar8 * 4) = local_484;
              }
              else {
                local_478.PackedValue =
                     (((ulonglong)(param_3->Priority & 7) | (ulonglong)param_7 << 3) << 0x1c |
                      (ulonglong)(uVar17 << 0x18) | (ulonglong)uVar12) << 0x20 |
                     (ulonglong)param_2->PackedValue;
                FVirtualTextureLocalTileRequest::ValidatePriorities
                          ((FVirtualTextureLocalTileRequest *)&local_478._s_1);
                local_488 = false;
                this_00 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                          ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                                    (local_468,
                                     (int)((local_478.PackedValue & 0xfffffffffffffff) >> 0x20) *
                                     0x17 + (int)(local_478.PackedValue & 0xfffffffffffffff),
                                     &local_478,&local_488);
                if (local_488 != false) {
                  pFVar10 = &local_478;
                  goto LAB_1458ee47d;
                }
              }
            }
            else {
              local_470.PackedValue =
                   (((ulonglong)(param_3->Priority & 7) | (ulonglong)param_7 << 3) << 0x1c |
                    (ulonglong)(uVar17 << 0x18) | (ulonglong)uVar12) << 0x20 |
                   (ulonglong)param_2->PackedValue;
              FVirtualTextureLocalTileRequest::ValidatePriorities
                        ((FVirtualTextureLocalTileRequest *)&local_470._s_1);
              local_487[0] = false;
              this_00 = TSet<FVirtualTextureLocalTileRequest,DefaultKeyFuncs<FVirtualTextureLocalTileRequest,0>,FDefaultSetAllocator>
                        ::FindOrAddByHash<FVirtualTextureLocalTileRequest_const_&>
                                  (local_468,
                                   (int)((local_470.PackedValue & 0xfffffffffffffff) >> 0x20) * 0x17
                                   + (int)(local_470.PackedValue & 0xfffffffffffffff),&local_470,
                                   local_487);
              if (local_487[0] != false) {
                pFVar10 = &local_470;
LAB_1458ee47d:
                FVirtualTextureLocalTileRequest::MergeWith
                          ((FVirtualTextureLocalTileRequest *)&this_00->_s_1,pFVar10);
              }
            }
          }
        }
      }
      local_484 = (this->ProducerToPageIndex).NextIndex[local_484];
    } while (local_484 != 0xffffffff);
    local_484 = 0xffffffff;
  }
  iVar9 = local_50;
  pFVar4 = local_460;
  FVar13 = (ForElementType<unsigned_int>)&local_458;
  if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar13 = local_458.SecondaryData;
  }
  FVar1 = (ForElementType<unsigned_int>)((longlong)FVar13 + (longlong)local_50 * 4);
  while( true ) {
    if (local_50 != iVar9) {
      `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_480);
    }
    if (FVar13 == FVar1) break;
    uVar2 = *(ushort *)FVar13;
    UnmapAllPages(this,pFVar4,uVar2,true);
    (this->FreeHeap).Keys[uVar2] = 0;
    uVar2 = (this->FreeHeap).HeapIndexes[uVar2];
    if ((uVar2 == 0) ||
       ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar2 - 1) >> 1 & 0xffff]] == 0)) {
      FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar2);
      FVar13 = (ForElementType<unsigned_int>)((longlong)FVar13 + 4);
    }
    else {
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar2);
      FVar13 = (ForElementType<unsigned_int>)((longlong)FVar13 + 4);
    }
  }
  if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_458.SecondaryData);
  }
  return;
}

// FindNearestPageAddress @ 1458f68a0

uint __thiscall
FTexturePagePool::FindNearestPageAddress
          (FTexturePagePool *this,FVirtualTextureProducerHandle *param_1,uchar param_2,uint param_3,
          uchar param_4,uchar param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if (param_4 <= param_5) {
    do {
      uVar5 = param_1->PackedValue;
      uVar3 = param_3 & 0xffffff | (param_4 & 0xf | (uint)param_2 << 4) << 0x18;
      uVar6 = ((ulonglong)(uVar3 >> 1) ^ CONCAT44(uVar3,uVar5)) * -0xae502812aa7333;
      uVar6 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
      uVar7 = (this->PageHash).Hash
              [(uVar6 >> 0x21 ^ uVar6) & (ulonglong)(ushort)(this->PageHash).HashMask];
      if (uVar7 != 0xffffffff) {
        do {
          uVar4 = 0;
          if ((int)uVar7 < (this->Pages).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          if (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) ==
              CONCAT44(uVar3,uVar5)) {
            if (uVar7 != 0xffffffff) {
              return uVar7;
            }
            break;
          }
          uVar7 = (this->PageHash).NextIndex[uVar7];
        } while (uVar7 != 0xffffffff);
      }
      param_4 = param_4 + 1;
      param_3 = param_3 >> 2;
    } while (param_4 <= param_5);
  }
  return 0xffffffff;
}

// FindNearestPageLevel @ 1458f6c20

uint __thiscall
FTexturePagePool::FindNearestPageLevel
          (FTexturePagePool *this,FVirtualTextureProducerHandle *param_1,uchar param_2,uint param_3,
          uchar param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (ulonglong)param_3;
  while( true ) {
    if (0xf < param_4) {
      return 0xffffffff;
    }
    uVar4 = FindPageAddress(this,param_1,param_2,(uint)uVar2,param_4);
    if (uVar4 != 0xffffffff) break;
    param_4 = param_4 + 1;
    uVar2 = uVar2 >> 2;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->Pages).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  return (byte)(this->Pages).AllocatorInstance.Data[(longlong)(int)uVar4 * 8 + 7] & 0xf;
}

// FindPageAddress @ 1458f6d90

uint __thiscall
FTexturePagePool::FindPageAddress
          (FTexturePagePool *this,FVirtualTextureProducerHandle *param_1,uchar param_2,uint param_3,
          uchar param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar5 = param_1->PackedValue;
  uVar3 = (param_4 & 0xf | (uint)param_2 << 4) << 0x18 | param_3 & 0xffffff;
  uVar6 = ((ulonglong)(uVar3 >> 1) ^ CONCAT44(uVar3,uVar5)) * -0xae502812aa7333;
  uVar6 = (uVar6 >> 0x21 ^ uVar6) * -0x3b314601e57a13ad;
  uVar7 = (this->PageHash).Hash
          [(uVar6 >> 0x21 ^ uVar6) & (ulonglong)(ushort)(this->PageHash).HashMask];
  if (uVar7 != 0xffffffff) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Pages).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
      }
      if (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) ==
          CONCAT44(uVar3,uVar5)) {
        return uVar7;
      }
      uVar7 = (this->PageHash).NextIndex[uVar7];
    } while (uVar7 != 0xffffffff);
  }
  return 0xffffffff;
}

// Free @ 1458f88e0

void __thiscall
FTexturePagePool::Free(FTexturePagePool *this,FVirtualTextureSystem *param_1,ushort param_2)

{
  FBinaryHeap<unsigned_int,unsigned_short> *this_00;
  ushort uVar1;
  
  UnmapAllPages(this,param_1,param_2,true);
  this_00 = &this->FreeHeap;
  if (((this->FreeHeap).IndexSize <= (uint)param_2) ||
     ((this->FreeHeap).HeapIndexes[param_2] == 0xffff)) {
    FBinaryHeap<unsigned_int,unsigned_short>::Add(this_00,0,param_2);
    return;
  }
  (this->FreeHeap).Keys[param_2] = 0;
  uVar1 = (this->FreeHeap).HeapIndexes[param_2];
  if ((uVar1 != 0) &&
     ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar1 - 1) >> 1 & 0xffff]] != 0)) {
    FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(this_00,uVar1);
    return;
  }
  FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(this_00,uVar1);
  return;
}

// GetAllLockedPages @ 1458feae0

void __thiscall
FTexturePagePool::GetAllLockedPages
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,
          TSet<FVirtualTextureLocalTile,DefaultKeyFuncs<FVirtualTextureLocalTile,0>,FDefaultSetAllocator>
          *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FVirtualTextureLocalTile local_res18;
  undefined4 local_res20;
  uint local_res24;
  
  uVar7 = 1;
  uVar10 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar8 = 1;
  if (1 < this->NumPages) {
    uVar8 = this->NumPages;
  }
  uVar8 = (uVar10 - 1) + (uVar8 - (this->FreeHeap).HeapNum);
  iVar4 = 1;
  if (uVar10 < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_2,uVar8);
    if (3 < uVar8) {
      uVar1 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar11 & 0x1f);
    }
    if ((param_2->HashSize == 0) || (param_2->HashSize < iVar4)) {
      param_2->HashSize = iVar4;
      TSet<FVirtualTextureLocalTile,DefaultKeyFuncs<FVirtualTextureLocalTile,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  if (1 < this->NumPages) {
    do {
      uVar8 = (uint)uVar7;
      if (((this->FreeHeap).IndexSize <= (uint)(uVar7 & 0xffff)) ||
         ((this->FreeHeap).HeapIndexes[uVar7 & 0xffff] == 0xffff)) {
        uVar9 = ~uVar8 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar8 < (this->Pages).ArrayNum) {
          uVar10 = uVar9;
        }
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar11 = (longlong)(int)uVar8;
        uVar10 = *(uint *)((this->Pages).AllocatorInstance.Data + lVar11 * 8 + 4);
        uVar5 = 0;
        if ((int)uVar8 < (this->Pages).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = *(uint *)((this->Pages).AllocatorInstance.Data + lVar11 * 8 + 4);
        uVar6 = 0;
        if ((int)uVar8 < (this->Pages).ArrayNum) {
          uVar6 = uVar9;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res24 = uVar10 & 0xf000000 | uVar5 & 0xffffff;
        local_res20 = *(undefined4 *)((this->Pages).AllocatorInstance.Data + lVar11 * 8);
        TSet<FVirtualTextureLocalTile,DefaultKeyFuncs<FVirtualTextureLocalTile,0>,FDefaultSetAllocator>
        ::Emplace<FVirtualTextureLocalTile>(param_2,&local_res18,(bool *)&local_res20);
      }
      uVar7 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < this->NumPages);
  }
  return;
}

// GetLocalTileFromPhysicalAddress @ 145900a60

FVirtualTextureLocalTile __thiscall
FTexturePagePool::GetLocalTileFromPhysicalAddress(FTexturePagePool *this,ushort param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  FVirtualTextureLocalTile FVar5;
  undefined6 in_register_00000012;
  undefined4 *puVar6;
  ulonglong uVar7;
  ushort in_R8W;
  
  puVar6 = (undefined4 *)CONCAT62(in_register_00000012,param_1);
  uVar7 = (ulonglong)in_R8W;
  if ((this->Pages).ArrayNum <= (int)(uint)in_R8W) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.PackedValue = (*pcVar3)();
      return (FVirtualTextureLocalTile)FVar5.PackedValue;
    }
  }
  uVar1 = *(uint *)((this->Pages).AllocatorInstance.Data + uVar7 * 8 + 4);
  if ((this->Pages).ArrayNum <= (int)(uint)in_R8W) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.PackedValue = (*pcVar3)();
      return (FVirtualTextureLocalTile)FVar5.PackedValue;
    }
  }
  uVar2 = *(uint *)((this->Pages).AllocatorInstance.Data + uVar7 * 8 + 4);
  if ((this->Pages).ArrayNum <= (int)(uint)in_R8W) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar5.PackedValue = (*pcVar3)();
      return (FVirtualTextureLocalTile)FVar5.PackedValue;
    }
  }
  *puVar6 = *(undefined4 *)((this->Pages).AllocatorInstance.Data + uVar7 * 8);
  puVar6[1] = ((puVar6[1] ^ uVar2) & 0xffffff ^ puVar6[1]) & 0xffffff ^ uVar1 & 0xf000000;
  return (FVirtualTextureLocalTile)(ulong64)puVar6;
}

// GetNumVisiblePages @ 145900f30

uint __thiscall FTexturePagePool::GetNumVisiblePages(FTexturePagePool *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = 0;
  uVar4 = 1;
  if (1 < this->NumPages) {
    do {
      uVar2 = uVar4 & 0xffff;
      if (((uint)uVar2 < (this->FreeHeap).IndexSize) &&
         ((this->FreeHeap).HeapIndexes[uVar2] != 0xffff)) {
        uVar3 = uVar1 + 1;
        if ((this->FreeHeap).Keys[uVar2] >> 4 <= param_1) {
          uVar3 = uVar1;
        }
      }
      else {
        uVar3 = uVar1 + 1;
      }
      uVar1 = uVar3;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < this->NumPages);
  }
  return uVar1;
}

// GetPageHash @ 1459017d0

ushort __cdecl FTexturePagePool::GetPageHash(FPageEntry *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (param_1->PackedValue >> 0x21 ^ param_1->PackedValue) * -0xae502812aa7333;
  uVar1 = (uVar1 >> 0x21 ^ uVar1) * -0x3b314601e57a13ad;
  return (ushort)(uVar1 >> 0x21) ^ (ushort)uVar1;
}

// Initialize @ 14590d780

void __thiscall FTexturePagePool::Initialize(FTexturePagePool *this,uint param_1)

{
  ulonglong uVar1;
  int *piVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  this->NumPages = param_1;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&(this->Pages).AllocatorInstance,&(this->Pages).ArrayNum,
                     &(this->Pages).ArrayMax);
  memset((this->Pages).AllocatorInstance.Data + (longlong)iVar7 * 8,0,(longlong)(int)param_1 << 3);
  FHashTable::Resize(&this->PageHash,param_1);
  if (param_1 != (this->FreeHeap).HeapSize) {
    FBinaryHeap<unsigned_int,unsigned_short>::ResizeHeap(&this->FreeHeap,param_1);
  }
  if (param_1 != (this->FreeHeap).IndexSize) {
    FBinaryHeap<unsigned_int,unsigned_short>::ResizeIndexes(&this->FreeHeap,param_1);
  }
  uVar11 = 1;
  if (1 < param_1) {
    do {
      uVar10 = (this->FreeHeap).HeapSize;
      if ((this->FreeHeap).HeapNum == uVar10) {
        uVar10 = uVar10 * 2;
        if (uVar10 < 0x20) {
          uVar10 = 0x20;
        }
        FBinaryHeap<unsigned_int,unsigned_short>::ResizeHeap(&this->FreeHeap,uVar10);
      }
      uVar12 = uVar11 & 0xffff;
      if ((this->FreeHeap).IndexSize <= (uint)uVar12) {
        uVar1 = uVar12 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = 1 << ((byte)lVar8 & 0x1f);
        if (uVar10 < 0x20) {
          uVar10 = 0x20;
        }
        FBinaryHeap<unsigned_int,unsigned_short>::ResizeIndexes(&this->FreeHeap,uVar10);
      }
      uVar3 = (ushort)(this->FreeHeap).HeapNum;
      (this->FreeHeap).HeapNum = (this->FreeHeap).HeapNum + 1;
      (this->FreeHeap).Heap[uVar3] = (ushort)uVar11;
      (this->FreeHeap).Keys[uVar12] = 0;
      (this->FreeHeap).HeapIndexes[uVar12] = uVar3;
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar3);
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while (uVar10 < param_1);
  }
  piVar2 = &(this->PageMapping).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,param_1 + 1,&(this->PageMapping).AllocatorInstance,piVar2,
             &(this->PageMapping).ArrayMax);
  uVar10 = 0;
  while( true ) {
    uVar9 = 0;
    if ((int)uVar10 < *piVar2) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    lVar8 = (longlong)(int)uVar10;
    pFVar4 = (this->PageMapping).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + lVar8 * 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(pFVar4 + lVar8 * 0xc + 8) = 0xffffffff;
    *(uint *)(pFVar4 + lVar8 * 0xc + 8) =
         *(uint *)(pFVar4 + lVar8 * 0xc + 8) ^
         (*(uint *)(pFVar4 + lVar8 * 0xc + 8) ^ uVar10) & 0xffffff;
    uVar9 = *(uint *)(pFVar4 + lVar8 * 0xc + 4) ^ uVar10;
    uVar10 = uVar10 + 1;
    *(uint *)(pFVar4 + lVar8 * 0xc + 4) = *(uint *)(pFVar4 + lVar8 * 0xc + 4) ^ uVar9 & 0xffffff;
    if (param_1 < uVar10) {
      return;
    }
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Lock @ 14590fe10

void __thiscall FTexturePagePool::Lock(FTexturePagePool *this,ushort param_1)

{
  FBinaryHeap<unsigned_int,unsigned_short> *this_00;
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  this_00 = &this->FreeHeap;
  if ((uint)param_1 < (this->FreeHeap).IndexSize) {
    uVar1 = (this->FreeHeap).HeapIndexes[param_1];
    if (uVar1 != 0xffff) {
      puVar3 = (this->FreeHeap).Heap;
      uVar2 = (this->FreeHeap).Keys[param_1];
      this_00->HeapNum = this_00->HeapNum - 1;
      puVar3[uVar1] = puVar3[this_00->HeapNum];
      (this->FreeHeap).HeapIndexes[(this->FreeHeap).Heap[uVar1]] = uVar1;
      (this->FreeHeap).HeapIndexes[param_1] = 0xffff;
      if (uVar2 < (this->FreeHeap).Keys[(this->FreeHeap).Heap[uVar1]]) {
        FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(this_00,uVar1);
        return;
      }
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(this_00,uVar1);
    }
  }
  return;
}

// MapPage @ 145911d30

void __thiscall
FTexturePagePool::MapPage
          (FTexturePagePool *this,FVirtualTextureSpace *param_1,
          FVirtualTexturePhysicalSpace *param_2,uchar param_3,uchar param_4,uchar param_5,
          uint param_6,uchar param_7,ushort param_8)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_8 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pAddress >= NumReservedPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x183,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->NumPages <= (uint)param_8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("pAddress < NumPages",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x184,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Pages).ArrayNum <= (int)(uint)param_8) {
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
  pFVar1 = (this->Pages).AllocatorInstance.Data;
  if (*(int *)(pFVar1 + (ulonglong)param_8 * 8) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageEntry.PackedProducerHandle != 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x186,L"Trying to map pAddress %04x that hasn\'t been allocated");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Description).NumPageTableLayers <= param_3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageTableLayerIndex < Description.NumPageTableLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                       ,0x43,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FTexturePageMap::MapPage
            (param_1->PhysicalPageMap + param_3,param_1,param_2,
             *(uint *)(pFVar1 + (ulonglong)param_8 * 8),param_4,param_5,param_6,param_7,param_8);
  this->NumPagesMapped = this->NumPagesMapped + 1;
  uVar4 = AcquireMapping(this);
  AddMappingToList(this,(uint)param_8,uVar4);
  uVar5 = 0;
  if ((int)uVar4 < (this->PageMapping).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  pFVar1 = (this->PageMapping).AllocatorInstance.Data;
  uVar5 = *(uint *)(pFVar1 + (longlong)(int)uVar4 * 0xc);
  pFVar1 = pFVar1 + (longlong)(int)uVar4 * 0xc;
  pFVar1[7] = (FScriptContainerElement)param_1->ID;
  pFVar1[0xb] = (FScriptContainerElement)param_3;
  *(uint *)pFVar1 =
       ((uint)param_5 << 0x18 ^ ((uVar5 ^ param_6) & 0xffffff ^ *(uint *)pFVar1) & 0xffffff) &
       0xfffffff | (uint)param_4 << 0x1c;
  return;
}

// RemapPages @ 145917200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTexturePagePool::RemapPages
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,uchar param_2,
          FVirtualTexturePhysicalSpace *param_3,FVirtualTextureProducerHandle *param_4,uint param_5,
          FVirtualTextureProducerHandle *param_6,uint param_7,int param_8,uint param_9)

{
  FVirtualTextureProducerHandle *pFVar1;
  ulonglong uVar2;
  FScriptContainerElement FVar3;
  ushort uVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  ForElementType<unsigned_int> FVar17;
  FVirtualTextureSpace *pFVar18;
  byte bVar19;
  uint uVar20;
  uint uVar21;
  ForElementType<unsigned_int> FVar22;
  undefined1 auStackY_508 [32];
  undefined1 local_4b8 [4];
  uint local_4b4;
  uint local_4b0;
  uint local_4ac;
  uint local_4a8;
  uint local_4a4;
  uint local_4a0;
  uint local_49c;
  uint local_498;
  FVirtualTextureProducerHandle *local_490;
  FVirtualTextureProducerHandle *local_488;
  ForElementType<unsigned_int> local_480;
  undefined4 local_478;
  undefined4 local_474;
  FVirtualTextureProducerHandle *local_470;
  FVirtualTexturePhysicalSpace *local_468;
  ForElementType<unsigned_int> local_460;
  ForElementType<unsigned_int> local_458;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_508;
  uVar10 = (param_4->PackedValue >> 0x10 ^ param_4->PackedValue) * -0x7a143595;
  uVar20 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_4b0 = uVar20 >> 0x10 ^ uVar20;
  uVar10 = (param_6->PackedValue >> 0x10 ^ param_6->PackedValue) * -0x7a143595;
  local_4ac = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_4ac = local_4ac >> 0x10 ^ local_4ac;
  uVar14 = param_5 >> 1 & 0x55555555;
  uVar10 = ((param_5 & 0x55555555) >> 1 ^ param_5 & 0x55555555) & 0x33333333;
  uVar10 = (uVar10 >> 2 ^ uVar10) & 0xf0f0f0f;
  uVar10 = (uVar10 >> 4 ^ uVar10) & 0xff00ff;
  local_4a8 = (uVar10 >> 8 ^ uVar10) & 0xffff;
  uVar10 = (uVar14 >> 1 ^ uVar14) & 0x33333333;
  uVar10 = (uVar10 >> 2 ^ uVar10) & 0xf0f0f0f;
  uVar10 = (uVar10 >> 4 ^ uVar10) & 0xff00ff;
  local_4a4 = (uVar10 >> 8 ^ uVar10) & 0xffff;
  uVar10 = ((param_7 & 0x55555555) >> 1 ^ param_7 & 0x55555555) & 0x33333333;
  uVar10 = (uVar10 >> 2 ^ uVar10) & 0xf0f0f0f;
  local_4c = 0x100;
  uVar14 = param_7 >> 1 & 0x55555555;
  FVar22 = (ForElementType<unsigned_int>)0x0;
  uVar10 = (uVar10 >> 4 ^ uVar10) & 0xff00ff;
  local_458.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50 = 0;
  local_4a0 = (uVar10 >> 8 ^ uVar10) & 0xffff;
  uVar10 = (uVar14 >> 1 ^ uVar14) & 0x33333333;
  uVar10 = (uVar10 >> 2 ^ uVar10) & 0xf0f0f0f;
  uVar10 = (uVar10 >> 4 ^ uVar10) & 0xff00ff;
  local_49c = (uVar10 >> 8 ^ uVar10) & 0xffff;
  uVar10 = (this->ProducerToPageIndex).Hash
           [(uVar20 >> 0x10 ^ uVar20) & (this->ProducerToPageIndex).HashMask];
  local_468 = param_3;
  local_490 = param_6;
  local_488 = param_4;
  local_498 = local_50;
  while (local_50 = local_498, uVar10 != 0xffffffff) {
    uVar14 = 0;
    if ((int)uVar10 < (this->Pages).ArrayNum) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    local_4b4 = uVar10;
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar22 = local_458.SecondaryData, bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(uint *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) ==
        param_4->PackedValue) {
      FVar17 = (ForElementType<unsigned_int>)&local_458;
      if (FVar22 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar22;
      }
      if ((ulonglong)FVar17 <= &local_4b4) {
        FVar17 = (ForElementType<unsigned_int>)&local_458;
        if (FVar22 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = FVar22;
        }
        if ((&local_4b4 < (uint *)((longlong)FVar17 + (longlong)(int)local_4c * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar22 = local_458.SecondaryData, bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_458,(int *)&local_4c);
        FVar22 = local_458.SecondaryData;
      }
      lVar13 = (longlong)(int)local_50;
      FVar17 = (ForElementType<unsigned_int>)&local_458;
      if (FVar22 != (ForElementType<unsigned_int>)0x0) {
        FVar17 = FVar22;
      }
      local_50 = local_50 + 1;
      *(uint *)((longlong)FVar17 + lVar13 * 4) = local_4b4;
      FVar22 = local_458.SecondaryData;
    }
    local_498 = local_50;
    uVar10 = (this->ProducerToPageIndex).NextIndex[local_4b4];
  }
  uVar15 = (ulonglong)(int)local_498;
  FVar17 = (ForElementType<unsigned_int>)&local_458;
  if (FVar22 != (ForElementType<unsigned_int>)0x0) {
    FVar17 = FVar22;
  }
  local_460 = (ForElementType<unsigned_int>)((longlong)FVar17 + uVar15 * 4);
  local_4b4 = 0xffffffff;
  do {
    while( true ) {
      FVar22 = local_460;
      local_480 = FVar17;
      if (local_50 != (uint)uVar15) {
        local_4b8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_4b8);
      }
      if (FVar17 == FVar22) {
        if (local_458.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_458.SecondaryData);
        }
        return;
      }
      uVar10 = *(uint *)FVar17;
      uVar14 = 0;
      if ((int)uVar10 < (this->Pages).ArrayNum) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar1 = (FVirtualTextureProducerHandle *)
               ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
      local_470 = pFVar1;
      if ((pFVar1->PackedValue != param_4->PackedValue) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PageEntry.PackedProducerHandle == OldProducerHandle.PackedValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                             ,0x1dd,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (-1 < (int)(((byte)*(FScriptContainerElement *)((longlong)pFVar1 + 7) & 0xf) + param_8))
      break;
      UnmapAllPages(this,param_1,(ushort)uVar10,false);
      (this->FreeHeap).Keys[uVar10 & 0xffff] = 0;
      uVar4 = (this->FreeHeap).HeapIndexes[uVar10 & 0xffff];
      if ((uVar4 == 0) ||
         ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar4 - 1) >> 1 & 0xffff]] == 0)) {
        FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar4);
        uVar15 = (ulonglong)local_498;
        FVar17 = (ForElementType<unsigned_int>)((longlong)local_480 + 4);
      }
      else {
        FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar4);
        uVar15 = (ulonglong)local_498;
        FVar17 = (ForElementType<unsigned_int>)((longlong)local_480 + 4);
      }
    }
    uVar15 = (*(ulonglong *)pFVar1 >> 0x21 ^ *(ulonglong *)pFVar1) * -0xae502812aa7333;
    uVar15 = (uVar15 >> 0x21 ^ uVar15) * -0x3b314601e57a13ad;
    if (uVar10 < (this->PageHash).IndexSize) {
      uVar15 = (ulonglong)(ushort)(this->PageHash).HashMask & (uVar15 >> 0x21 ^ uVar15);
      puVar5 = (this->PageHash).Hash;
      puVar16 = puVar5 + uVar15;
      uVar14 = puVar5[uVar15];
      if (uVar14 == uVar10) {
        uVar14 = (this->PageHash).NextIndex[uVar10];
LAB_145917757:
        *puVar16 = uVar14;
      }
      else if (uVar14 != 0xffffffff) {
        puVar5 = (this->PageHash).NextIndex;
        do {
          puVar16 = puVar5 + uVar14;
          uVar14 = puVar5[uVar14];
          if (uVar14 == uVar10) {
            uVar14 = puVar5[uVar10];
            goto LAB_145917757;
          }
        } while (uVar14 != 0xffffffff);
      }
    }
    *pFVar1 = *param_6;
    uVar14 = pFVar1[1].PackedValue;
    pFVar1[1].PackedValue = (param_8 * 0x1000000 + uVar14 ^ uVar14) & 0xf000000 ^ uVar14;
    uVar15 = (*(ulonglong *)pFVar1 >> 0x21 ^ *(ulonglong *)pFVar1) * -0xae502812aa7333;
    uVar15 = (uVar15 >> 0x21 ^ uVar15) * -0x3b314601e57a13ad;
    if ((this->PageHash).IndexSize <= uVar10) {
      iVar12 = 1;
      if (uVar10 + 1 != 0) {
        iVar12 = uVar10 + 1;
      }
      uVar2 = (ulonglong)(iVar12 - 1) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar13 & 0x1f);
      local_478 = (undefined4)lVar13;
      if (uVar14 < 0x20) {
        uVar14 = 0x20;
      }
      FHashTable::Resize(&this->PageHash,uVar14);
    }
    uVar15 = (ulonglong)(this->PageHash).HashMask & (uVar15 >> 0x21 ^ uVar15) & 0xffff;
    (this->PageHash).NextIndex[uVar10] = (this->PageHash).Hash[uVar15];
    (this->PageHash).Hash[uVar15] = uVar10;
    if (uVar10 < (this->ProducerToPageIndex).IndexSize) {
      uVar20 = (this->ProducerToPageIndex).HashMask & local_4b0;
      puVar16 = (this->ProducerToPageIndex).Hash;
      uVar14 = puVar16[uVar20];
      if (uVar14 == uVar10) {
        puVar16[uVar20] = (this->ProducerToPageIndex).NextIndex[uVar10];
      }
      else if (uVar14 != 0xffffffff) {
        puVar16 = (this->ProducerToPageIndex).NextIndex;
        do {
          uVar15 = (ulonglong)uVar14;
          uVar14 = puVar16[uVar14];
          if (uVar14 == uVar10) {
            puVar16[uVar15] = puVar16[uVar10];
            break;
          }
        } while (uVar14 != 0xffffffff);
      }
      if ((this->ProducerToPageIndex).IndexSize <= uVar10) goto LAB_14591786d;
    }
    else {
LAB_14591786d:
      iVar12 = 1;
      if (uVar10 + 1 != 0) {
        iVar12 = uVar10 + 1;
      }
      uVar15 = (ulonglong)(iVar12 - 1) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = 1 << ((byte)lVar13 & 0x1f);
      local_474 = (undefined4)lVar13;
      if (uVar14 < 0x20) {
        uVar14 = 0x20;
      }
      FHashTable::Resize(&this->ProducerToPageIndex,uVar14);
    }
    uVar14 = (this->ProducerToPageIndex).HashMask & local_4ac;
    (this->ProducerToPageIndex).NextIndex[uVar10] = (this->ProducerToPageIndex).Hash[uVar14];
    (this->ProducerToPageIndex).Hash[uVar14] = uVar10;
    uVar14 = uVar10 & 0xffff;
    if ((uVar14 < (this->FreeHeap).IndexSize) && ((this->FreeHeap).HeapIndexes[uVar14] != 0xffff)) {
      uVar20 = ((byte)*(FScriptContainerElement *)((longlong)pFVar1 + 7) & 0xf) + param_9 * 0x10;
      (this->FreeHeap).Keys[uVar14] = uVar20;
      uVar4 = (this->FreeHeap).HeapIndexes[uVar14];
      if ((uVar4 == 0) ||
         ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar4 - 1) >> 1 & 0xffff]] <= uVar20)) {
        FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar4);
      }
      else {
        FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar4);
      }
    }
    uVar14 = 0;
    if ((int)uVar10 < (this->PageMapping).ArrayNum) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar14 = *(uint *)((this->PageMapping).AllocatorInstance.Data + (longlong)(int)uVar10 * 0xc + 4)
             & 0xffffff;
    if (uVar14 != uVar10) {
      bVar8 = (byte)param_8;
      do {
        if (((this->PageMapping).ArrayNum <= (int)uVar14) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->PageMapping).AllocatorInstance.Data;
        FVar3 = pFVar6[(ulonglong)uVar14 * 0xc + 7];
        pFVar6 = pFVar6 + (ulonglong)uVar14 * 0xc;
        if ((int)(uint)(byte)FVar3 < (param_1->Spaces).ArrayNum) {
          if (((param_1->Spaces).ArrayNum <= (int)(uint)(byte)FVar3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar18 = *(FVirtualTextureSpace **)
                     ((param_1->Spaces).AllocatorInstance.Data + (ulonglong)(byte)FVar3 * 8);
        }
        else {
          pFVar18 = (FVirtualTextureSpace *)0x0;
        }
        FVar3 = pFVar6[0xb];
        if (((pFVar18->Description).NumPageTableLayers <= (byte)FVar3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PageTableLayerIndex < Description.NumPageTableLayers",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                               ,0x43,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FTexturePageMap::UnmapPage
                  (pFVar18->PhysicalPageMap + (byte)FVar3,param_1,pFVar18,
                   (byte)(*(uint *)pFVar6 >> 0x18) & 0xf,*(uint *)pFVar6 & 0xffffff,false);
        uVar14 = *(uint *)pFVar6;
        uVar20 = ((uVar14 & 0x555555) >> 1 ^ uVar14 & 0x555555) & 0x33333333;
        uVar20 = (uVar20 >> 2 ^ uVar20) & 0xf0f0f0f;
        uVar20 = (uVar20 >> 4 ^ uVar20) & 0xff00ff;
        uVar21 = ((uVar20 >> 8 ^ uVar20) & 0xffff) - local_4a8;
        uVar20 = uVar14 >> 1 & 0x555555;
        uVar20 = (uVar20 >> 1 ^ uVar20) & 0x33333333;
        uVar20 = (uVar20 >> 2 ^ uVar20) & 0xf0f0f0f;
        uVar20 = (uVar20 >> 4 ^ uVar20) & 0xff00ff;
        uVar11 = ((uVar20 >> 8 ^ uVar20) & 0xffff) - local_4a4;
        uVar20 = uVar21 << (bVar8 & 0x1f);
        if (param_8 < 0) {
          uVar20 = uVar21 >> (-bVar8 & 0x1f);
        }
        if (param_8 < 0) {
          uVar11 = uVar11 >> (-bVar8 & 0x1f);
        }
        else {
          uVar11 = uVar11 << (bVar8 & 0x1f);
        }
        uVar20 = uVar20 + local_4a0 & 0xffff;
        uVar20 = (uVar20 << 8 ^ uVar20) & 0xff00ff;
        uVar20 = (uVar20 << 4 ^ uVar20) & 0xf0f0f0f;
        uVar21 = (uVar20 * 4 ^ uVar20) & 0x33333333;
        uVar20 = local_49c + uVar11 & 0xffff;
        uVar20 = (uVar20 << 8 ^ uVar20) & 0xff00ff;
        uVar20 = (uVar20 << 4 ^ uVar20) & 0xf0f0f0f;
        uVar20 = (uVar20 * 4 ^ uVar20) & 0x33333333;
        uVar11 = ((uVar20 * 2 ^ uVar20) & 0x555555) * 2 | (uVar21 * 2 ^ uVar21) & 0x555555;
        uVar20 = uVar11 | uVar14 & 0xff000000;
        uVar14 = ((uVar14 >> 0x1c) + param_8) * 0x10000000 |
                 ((((uVar14 >> 0x18) + param_8) * 0x1000000 ^ uVar20) & 0xf000000 ^ uVar20) &
                 0xfffffff;
        *(uint *)pFVar6 = uVar14;
        bVar19 = (byte)(uVar14 >> 0x18);
        FTexturePageMap::MapPage
                  (pFVar18->PhysicalPageMap + (byte)FVar3,pFVar18,local_468,local_490->PackedValue,
                   bVar19 >> 4,bVar19 & 0xf,uVar11,
                   (byte)*(FScriptContainerElement *)((longlong)local_470 + 7) & 0xf,(ushort)uVar10)
        ;
        uVar14 = *(uint *)(pFVar6 + 4) & 0xffffff;
      } while (uVar14 != uVar10);
    }
    FVar17 = (ForElementType<unsigned_int>)((longlong)local_480 + 4);
    uVar15 = (ulonglong)local_498;
    param_6 = local_490;
    param_4 = local_488;
  } while( true );
}

// RemoveMappingFromList @ 145918a90

void __thiscall FTexturePagePool::RemoveMappingFromList(FTexturePagePool *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)(int)param_1;
  uVar7 = 0;
  if ((int)param_1 < (this->PageMapping).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
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
  pFVar2 = (this->PageMapping).AllocatorInstance.Data;
  uVar7 = *(uint *)(pFVar2 + lVar6 * 0xc + 8) & 0xffffff;
  if ((this->PageMapping).ArrayNum <= (int)uVar7) {
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
  pFVar3 = (this->PageMapping).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (ulonglong)uVar7 * 0xc + 4;
  *(uint *)pFVar1 =
       *(uint *)pFVar1 ^
       (*(uint *)(pFVar3 + (ulonglong)uVar7 * 0xc + 4) ^ *(uint *)(pFVar2 + lVar6 * 0xc + 4)) &
       0xffffff;
  uVar7 = *(uint *)(pFVar2 + lVar6 * 0xc + 4) & 0xffffff;
  if ((this->PageMapping).ArrayNum <= (int)uVar7) {
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
  pFVar3 = (this->PageMapping).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (ulonglong)uVar7 * 0xc + 8;
  *(uint *)pFVar1 =
       *(uint *)pFVar1 ^
       (*(uint *)(pFVar3 + (ulonglong)uVar7 * 0xc + 8) ^ *(uint *)(pFVar2 + lVar6 * 0xc + 8)) &
       0xffffff;
  *(uint *)(pFVar2 + lVar6 * 0xc + 8) =
       *(uint *)(pFVar2 + lVar6 * 0xc + 8) ^
       (*(uint *)(pFVar2 + lVar6 * 0xc + 8) ^ param_1) & 0xffffff;
  *(uint *)(pFVar2 + lVar6 * 0xc + 4) =
       *(uint *)(pFVar2 + lVar6 * 0xc + 4) ^
       (*(uint *)(pFVar2 + lVar6 * 0xc + 4) ^ param_1) & 0xffffff;
  return;
}

// Unlock @ 145926a30

void __thiscall FTexturePagePool::Unlock(FTexturePagePool *this,uint param_1,ushort param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Pages).ArrayNum <= (int)(uint)param_2) {
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
  FBinaryHeap<unsigned_int,unsigned_short>::Add
            (&this->FreeHeap,
             ((byte)(this->Pages).AllocatorInstance.Data[(ulonglong)param_2 * 8 + 7] & 0xf) +
             param_1 * 0x10,param_2);
  return;
}

// UnmapAllPages @ 145926f10

void __thiscall
FTexturePagePool::UnmapAllPages
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,ushort param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  uint *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  
  uVar5 = (ulonglong)param_2;
  uVar11 = (uint)param_2;
  if (((this->Pages).ArrayNum <= (int)uVar11) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->Pages).AllocatorInstance.Data;
  pFVar1 = pFVar2 + uVar5 * 8;
  if (*(int *)(pFVar2 + uVar5 * 8) != 0) {
    if ((this->NumPagesAllocated < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumPagesAllocated > NumReservedPages",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                           ,0x1b0,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->NumPagesAllocated = this->NumPagesAllocated - 1;
    uVar9 = (*(ulonglong *)pFVar1 >> 0x21 ^ *(ulonglong *)pFVar1) * -0xae502812aa7333;
    uVar9 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
    if (uVar11 < (this->PageHash).IndexSize) {
      uVar9 = (uVar9 >> 0x21 ^ uVar9) & (ulonglong)(ushort)(this->PageHash).HashMask;
      puVar3 = (this->PageHash).Hash;
      puVar10 = puVar3 + uVar9;
      uVar8 = puVar3[uVar9];
      if (uVar8 == uVar11) {
        uVar8 = (this->PageHash).NextIndex[uVar5];
LAB_145927045:
        *puVar10 = uVar8;
      }
      else if (uVar8 != 0xffffffff) {
        puVar3 = (this->PageHash).NextIndex;
        do {
          puVar10 = puVar3 + uVar8;
          uVar8 = puVar3[uVar8];
          if (uVar8 == uVar11) {
            uVar8 = puVar3[uVar5];
            goto LAB_145927045;
          }
        } while (uVar8 != 0xffffffff);
      }
    }
    uVar8 = (*(uint *)pFVar1 >> 0x10 ^ *(uint *)pFVar1) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (uVar11 < (this->ProducerToPageIndex).IndexSize) {
      uVar8 = (uVar8 >> 0x10 ^ uVar8) & (this->ProducerToPageIndex).HashMask;
      puVar3 = (this->ProducerToPageIndex).Hash;
      puVar10 = puVar3 + uVar8;
      uVar8 = puVar3[uVar8];
      if (uVar8 == uVar11) {
        uVar8 = (this->ProducerToPageIndex).NextIndex[uVar5];
LAB_1459270b5:
        *puVar10 = uVar8;
      }
      else if (uVar8 != 0xffffffff) {
        puVar3 = (this->ProducerToPageIndex).NextIndex;
        do {
          puVar10 = puVar3 + uVar8;
          uVar8 = puVar3[uVar8];
          if (uVar8 == uVar11) {
            uVar8 = puVar3[uVar5];
            goto LAB_1459270b5;
          }
        } while (uVar8 != 0xffffffff);
      }
    }
    *(ulonglong *)pFVar1 = 0;
  }
  if (((this->PageMapping).ArrayNum <= (int)uVar11) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)((this->PageMapping).AllocatorInstance.Data + uVar5 * 0xc + 4);
  while (uVar6 = uVar8 & 0xffffff, uVar6 != uVar11) {
    if (((this->PageMapping).ArrayNum <= (int)uVar6) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = *(uint *)((this->PageMapping).AllocatorInstance.Data + (ulonglong)uVar6 * 0xc + 4);
    UnmapPageMapping(this,param_1,uVar6,param_3);
  }
  if (((this->PageMapping).ArrayNum <= (int)uVar11) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((*(uint *)((this->PageMapping).AllocatorInstance.Data + uVar5 * 0xc + 4) & 0xffffff) !=
       uVar11) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PageMapping[pAddress].NextIndex == pAddress",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                         ,0x1c2,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// UnmapAllPagesForSpace @ 145927230

void __thiscall
FTexturePagePool::UnmapAllPagesForSpace
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,uchar param_2,uint param_3,
          uint param_4,uint param_5,uint param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  
  if ((param_4 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Width > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                         ,0x41,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Height > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                         ,0x42,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((-1 << ((char)param_6 * '\x02' & 0x1fU) & param_3) != param_3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(vAddress & (0xffffffff << (MaxLevel * 2u))) == vAddress",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                         ,0x43,L"vAddress %08X is not aligned to max level %d"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar5 = ((param_3 & 0x55555555) >> 1 ^ param_3 & 0x55555555) & 0x33333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f;
  uVar5 = (uVar5 >> 4 ^ uVar5) & 0xff00ff;
  uVar9 = (uVar5 >> 8 ^ uVar5) & 0xffff;
  uVar5 = param_3 >> 1 & 0x55555555;
  uVar5 = (uVar5 >> 1 ^ uVar5) & 0x33333333;
  uVar5 = (uVar5 >> 2 ^ uVar5) & 0xf0f0f0f;
  uVar6 = (uVar5 >> 4 ^ uVar5) & 0xff00ff;
  uVar5 = uVar9 + param_4;
  uVar3 = (uVar6 >> 8 ^ uVar6) & 0xffff;
  uVar6 = uVar3 + param_5;
  uVar7 = uVar5 & 0xffff;
  uVar11 = this->NumPages + 1;
  uVar7 = (uVar7 << 8 ^ uVar7) & 0xff00ff;
  uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f;
  uVar4 = uVar6 & 0xffff;
  uVar14 = (uVar7 * 4 ^ uVar7) & 0x33333333;
  uVar7 = (uVar4 << 8 ^ uVar4) & 0xff00ff;
  uVar7 = (uVar7 << 4 ^ uVar7) & 0xf0f0f0f;
  uVar7 = (uVar7 * 4 ^ uVar7) & 0x33333333;
  if ((int)uVar11 < (this->PageMapping).ArrayNum) {
    lVar12 = (longlong)(int)uVar11 * 0xc;
    do {
      uVar4 = 0;
      if ((int)uVar11 < (this->PageMapping).ArrayNum) {
        uVar4 = ~uVar11 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar13 = (this->PageMapping).AllocatorInstance.Data + lVar12;
      if ((pFVar13[0xb] != (FScriptContainerElement)0xff) &&
         (pFVar13[7] == (FScriptContainerElement)param_2)) {
        uVar4 = *(uint *)pFVar13;
        uVar8 = uVar4 >> 0x18 & 0xf;
        if ((uVar8 <= param_6) &&
           ((uVar10 = uVar4 & 0xffffff, param_3 <= uVar10 &&
            (uVar10 < (((uVar7 * 2 ^ uVar7) & 0xd5555555) * 2 | (uVar14 * 2 ^ uVar14) & 0x55555555))
            ))) {
          if (((-1 << (char)uVar8 * '\x02' & uVar4 & 0xffffff) != uVar10) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Mapping.vAddress & (0xffffffff << (Mapping.vLogSize * 2u))) == Mapping.vAddress"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                                 ,0x55,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar4 = *(uint *)pFVar13;
          uVar8 = ((uVar4 & 0x555555) >> 1 ^ uVar4 & 0x555555) & 0x33333333;
          uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
          uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
          uVar10 = (uVar8 >> 8 ^ uVar8) & 0xffff;
          uVar8 = uVar4 >> 1 & 0x555555;
          uVar8 = (uVar8 >> 1 ^ uVar8) & 0x33333333;
          uVar8 = (uVar8 >> 2 ^ uVar8) & 0xf0f0f0f;
          uVar8 = (uVar8 >> 4 ^ uVar8) & 0xff00ff;
          if ((((uVar9 <= uVar10) && (uVar8 = (uVar8 >> 8 ^ uVar8) & 0xffff, uVar3 <= uVar8)) &&
              (uVar10 < uVar5)) && (uVar8 < uVar6)) {
            if ((uVar4 >> 0x1c != param_6) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Mapping.MaxLevel == MaxLevel",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                                   ,0x60,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            UnmapPageMapping(this,param_1,uVar11,false);
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0xc;
    } while ((int)uVar11 < (this->PageMapping).ArrayNum);
  }
  return;
}

// UnmapPageMapping @ 145927c10

void __thiscall
FTexturePagePool::UnmapPageMapping
          (FTexturePagePool *this,FVirtualTextureSystem *param_1,uint param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FVirtualTextureSpace *pFVar7;
  
  uVar6 = 0;
  if ((int)param_2 < (this->PageMapping).ArrayNum) {
    uVar6 = ~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
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
  pFVar3 = (this->PageMapping).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(int)param_2 * 0xc;
  pFVar7 = FVirtualTextureSystem::GetSpace
                     (param_1,(uint)(byte)pFVar3[(longlong)(int)param_2 * 0xc + 7]);
  FVar2 = pFVar1[0xb];
  if ((pFVar7->Description).NumPageTableLayers <= (byte)FVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PageTableLayerIndex < Description.NumPageTableLayers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\VirtualTextureSpace.h"
                       ,0x43,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FTexturePageMap::UnmapPage
            (pFVar7->PhysicalPageMap + (byte)FVar2,param_1,pFVar7,
             (byte)(*(uint *)pFVar1 >> 0x18) & 0xf,*(uint *)pFVar1 & 0xffffff,param_3);
  if (this->NumPagesMapped == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumPagesMapped > 0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\TexturePagePool.cpp"
                       ,0x19f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this->NumPagesMapped = this->NumPagesMapped - 1;
  *(uint *)(pFVar1 + 8) = *(uint *)(pFVar1 + 8) | 0xff000000;
  pFVar1[7] = (FScriptContainerElement)0xf;
  *(uint *)pFVar1 = 0xffffffff;
  uVar6 = this->NumPages;
  RemoveMappingFromList(this,param_2);
  AddMappingToList(this,uVar6,param_2);
  return;
}

// UpdateUsage @ 1459296b0

void __thiscall FTexturePagePool::UpdateUsage(FTexturePagePool *this,uint param_1,ushort param_2)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (((uint)param_2 < (this->FreeHeap).IndexSize) &&
     ((this->FreeHeap).HeapIndexes[param_2] != 0xffff)) {
    if (((this->Pages).ArrayNum <= (int)(uint)param_2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar4 = ((byte)(this->Pages).AllocatorInstance.Data[(ulonglong)param_2 * 8 + 7] & 0xf) +
            param_1 * 0x10;
    (this->FreeHeap).Keys[param_2] = uVar4;
    uVar1 = (this->FreeHeap).HeapIndexes[param_2];
    if ((uVar1 == 0) ||
       ((this->FreeHeap).Keys[(this->FreeHeap).Heap[(int)(uVar1 - 1) >> 1 & 0xffff]] <= uVar4)) {
      FBinaryHeap<unsigned_int,unsigned_short>::DownHeap(&this->FreeHeap,uVar1);
    }
    else {
      FBinaryHeap<unsigned_int,unsigned_short>::UpHeap(&this->FreeHeap,uVar1);
    }
  }
  return;
}

