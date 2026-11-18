// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 3

// Empty @ 148cc2680

void __thiscall
TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::Empty
          (TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>
           *this,int param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&(this->LookupSet).Elements.field_0x28;
  puVar1 = &(this->LookupSet).Elements.field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  iVar16 = 1;
  iVar9 = 0;
  uVar8 = 1;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->LookupSet).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar8 = *puVar15;
    while (uVar8 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar4;
      uVar8 = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148cc271e;
      uVar8 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar8 & uVar8;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar14;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_148cc271e:
  uVar11 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  uVar17 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->LookupSet).Elements.field_0x8 -
                       *(int *)&(this->LookupSet).Elements.field_0x34);
  local_res10 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->LookupSet).Elements.field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->LookupSet).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_148cc2820;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_148cc2820:
  while( true ) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 -
        *(int *)&(this->LookupSet).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pvVar5 = *(void **)(*(longlong *)&(this->LookupSet).Elements +
                       (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pvVar5 != (void *)0x0) {
      if (*(void **)((longlong)pvVar5 + 0x40028) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar5 + 0x40028));
      }
      ::operator_delete(pvVar5,0x40038);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  this->MaxNumElements = local_res10;
  uVar8 = 0;
  if (0 < (int)local_res10) {
    uVar8 = local_res10;
  }
  if (3 < uVar8) {
    uVar3 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar10 & 0x1f);
  }
  piVar2 = &(this->LookupSet).HashSize;
  if ((((int)uVar8 < 1) || (iVar16 <= *piVar2)) && (*piVar2 <= iVar16)) {
    TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
    ::UnhashElements(&this->LookupSet);
    TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar8);
  }
  else {
    TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this,uVar8);
    *piVar2 = iVar16;
    TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
    ::Rehash(&this->LookupSet);
  }
  this->LeastRecent = (FCacheEntry *)0x0;
  this->MostRecent = (FCacheEntry *)0x0;
  return;
}

// MarkAsRecent @ 148cd07b0

void __thiscall
TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::
MarkAsRecent(TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>
             *this,FCacheEntry *param_1)

{
  FCacheEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->LeastRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LeastRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                       ,0x311,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->MostRecent == (FCacheEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MostRecent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LruCache.h"
                       ,0x312,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 == this->LeastRecent) &&
     (pFVar1 = this->LeastRecent->MoreRecent, pFVar1 != (FCacheEntry *)0x0)) {
    this->LeastRecent = pFVar1;
  }
  if (param_1 != this->MostRecent) {
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = param_1->MoreRecent;
    }
    if (param_1->MoreRecent != (FCacheEntry *)0x0) {
      param_1->MoreRecent->LessRecent = param_1->LessRecent;
    }
    param_1->LessRecent = (FCacheEntry *)0x0;
    param_1->MoreRecent = (FCacheEntry *)0x0;
    pFVar1 = this->MostRecent;
    param_1->LessRecent = pFVar1;
    if (pFVar1 != (FCacheEntry *)0x0) {
      pFVar1->MoreRecent = param_1;
    }
    this->MostRecent = param_1;
  }
  return;
}

// Remove @ 148cd9a10

void __thiscall
TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::Remove
          (TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>
           *this,FCacheEntry *param_1)

{
  FCacheEntry **ppFVar1;
  undefined8 uVar2;
  uint uVar3;
  ForElementType<unsigned_char> FVar4;
  uint uVar5;
  
  if (param_1 != (FCacheEntry *)0x0) {
    if (*(int *)&(this->LookupSet).Elements.field_0x8 !=
        *(int *)&(this->LookupSet).Elements.field_0x34) {
      uVar3 = *(uint *)((param_1->Key).Id + 8);
      uVar2 = *(undefined8 *)(param_1->Key).Id;
      uVar5 = (uint)((ulonglong)uVar2 >> 0x20);
      TSet<TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FCacheEntry_*,TLruCache<FIoChunkId,FStorageServerFileCache::CacheEntry,DefaultKeyComparer<FIoChunkId>_>::FKeyFuncs,FDefaultSetAllocator>
      ::RemoveImpl<FIoChunkId>
                (&this->LookupSet,
                 (uVar3 >> 0x18) + 0x58a2c485 +
                 ((((((uVar5 >> 8 & 0xff) * 0x21 + ((ushort)((ulonglong)uVar2 >> 0x30) & 0xff)) *
                     0x21 + (uint)(byte)((ulonglong)uVar2 >> 0x38)) * 0x21 + (uVar3 & 0xff)) * 0x21
                  + (uVar3 >> 8 & 0xff)) * 0x21 + (uVar3 >> 0x10 & 0xff)) * 0x21 +
                 (((uint)((ulonglong)uVar2 >> 8) & 0xff) * 0x21 +
                 ((uint)((ulonglong)uVar2 >> 0x10) & 0xff)) * 0x40a9121 +
                 (uVar5 & 0xff) * -0x13be2b1f +
                 ((uint)((ulonglong)uVar2 >> 0x18) & 0xff) * 0x747c7101 +
                 ((uint)uVar2 & 0xff) * 0x30f35d61,&param_1->Key);
    }
    ppFVar1 = &param_1->MoreRecent;
    if (param_1 == this->LeastRecent) {
      this->LeastRecent = *ppFVar1;
    }
    if (param_1 == this->MostRecent) {
      this->MostRecent = param_1->LessRecent;
    }
    if (param_1->LessRecent != (FCacheEntry *)0x0) {
      param_1->LessRecent->MoreRecent = *ppFVar1;
    }
    if (*ppFVar1 != (FCacheEntry *)0x0) {
      (*ppFVar1)->LessRecent = param_1->LessRecent;
    }
    param_1->LessRecent = (FCacheEntry *)0x0;
    param_1->MoreRecent = (FCacheEntry *)0x0;
    FVar4 = (param_1->Value).Buffer.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_char>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    ::operator_delete(param_1,0x40038);
  }
  return;
}

