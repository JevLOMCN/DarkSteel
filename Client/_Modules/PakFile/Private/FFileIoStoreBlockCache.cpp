// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 5

// FFileIoStoreBlockCache @ 142a51a20

FFileIoStoreBlockCache * __thiscall
FFileIoStoreBlockCache::FFileIoStoreBlockCache
          (FFileIoStoreBlockCache *this,FFileIoStoreStats *param_1)

{
  this->Stats = param_1;
  *(undefined8 *)&this->CachedBlocks = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x20 = 0;
  this->CacheMemory = (uchar *)0x0;
  *(undefined4 *)&(this->CachedBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBlocks).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  (this->CacheLruTail).LruNext = (FCachedBlock *)0x0;
  (this->CacheLruTail).Key = 0;
  (this->CacheLruTail).Buffer = (uchar *)0x0;
  (this->CacheLruHead).LruNext = &this->CacheLruTail;
  (this->CacheLruTail).LruPrev = &this->CacheLruHead;
  (this->CacheLruHead).LruPrev = (FCachedBlock *)0x0;
  (this->CacheLruHead).Key = 0;
  (this->CacheLruHead).Buffer = (uchar *)0x0;
  this->ReadBufferSize = 0;
  return this;
}

// ~FFileIoStoreBlockCache @ 142a56060

void __thiscall FFileIoStoreBlockCache::~FFileIoStoreBlockCache(FFileIoStoreBlockCache *this)

{
  FCachedBlock *pFVar1;
  void *pvVar2;
  FCachedBlock *pFVar3;
  
  pFVar3 = (this->CacheLruHead).LruNext;
  while (pFVar3 != &this->CacheLruTail) {
    pFVar1 = pFVar3->LruNext;
    ::operator_delete(pFVar3,0x20);
    pFVar3 = pFVar1;
  }
  FMemory::Free(this->CacheMemory);
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  pvVar2 = *(void **)&(this->CachedBlocks).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedBlocks);
  return;
}

// Initialize @ 142a7c7f0

void __thiscall
FFileIoStoreBlockCache::Initialize(FFileIoStoreBlockCache *this,ulong64 param_1,ulong64 param_2)

{
  ulonglong uVar1;
  uchar *puVar2;
  FCachedBlock *pFVar3;
  FCachedBlock *pFVar4;
  FCachedBlock *pFVar5;
  FCachedBlock *pFVar6;
  
  this->ReadBufferSize = param_2;
  uVar1 = param_1 / param_2;
  if (uVar1 != 0) {
    puVar2 = FMemory::Malloc(uVar1 * param_2,0);
    this->CacheMemory = puVar2;
    pFVar4 = &this->CacheLruHead;
    if (uVar1 != 0) {
      pFVar5 = pFVar4;
      pFVar6 = (FCachedBlock *)0x0;
      do {
        pFVar3 = ::operator_new(0x20);
        pFVar4 = (FCachedBlock *)0x0;
        if (pFVar3 != (FCachedBlock *)0x0) {
          pFVar3->LruPrev = (FCachedBlock *)0x0;
          pFVar3->LruNext = (FCachedBlock *)0x0;
          pFVar3->Buffer = (uchar *)0x0;
          pFVar4 = pFVar3;
        }
        pFVar4->Key = 0xffffffffffffffff;
        puVar2 = this->CacheMemory + (longlong)pFVar6;
        pFVar6 = (FCachedBlock *)((longlong)&pFVar6->LruPrev + param_2);
        pFVar4->Buffer = puVar2;
        pFVar5->LruNext = pFVar4;
        pFVar4->LruPrev = pFVar5;
        uVar1 = uVar1 - 1;
        pFVar5 = pFVar4;
      } while (uVar1 != 0);
    }
    pFVar4->LruNext = &this->CacheLruTail;
    (this->CacheLruTail).LruPrev = pFVar4;
  }
  return;
}

// Read @ 142a8f880

bool __thiscall
FFileIoStoreBlockCache::Read(FFileIoStoreBlockCache *this,FFileIoStoreReadRequest *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  FCachedBlock *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  if (this->CacheMemory == (uchar *)0x0) {
    return false;
  }
  if (param_1->Buffer == (FFileIoStoreBuffer *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Block->Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                       ,0x97,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uVar2 = (param_1->Key).field0_0x0.Hash;
  if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
    puVar8 = *(undefined1 **)&(this->CachedBlocks).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->CachedBlocks).field_0x38;
    }
    iVar7 = *(int *)(puVar8 + ((ulonglong)(*(int *)&(this->CachedBlocks).field_0x48 - 1) &
                              (uVar2 >> 0x20) * 0x17 + uVar2) * 4);
    if (iVar7 != -1) {
      do {
        lVar1 = *(longlong *)&this->CachedBlocks + (longlong)iVar7 * 0x18;
        if (*(ulonglong *)(*(longlong *)&this->CachedBlocks + (longlong)iVar7 * 0x18) == uVar2) {
          if ((lVar1 != 0) &&
             (pFVar3 = *(FCachedBlock **)(lVar1 + 8), pFVar3 != (FCachedBlock *)0x0)) {
            pFVar3->LruPrev->LruNext = pFVar3->LruNext;
            pFVar3->LruNext->LruPrev = pFVar3->LruPrev;
            pFVar3->LruPrev = &this->CacheLruHead;
            pFVar3->LruNext = (this->CacheLruHead).LruNext;
            (this->CacheLruHead).LruNext = pFVar3;
            pFVar3->LruNext->LruPrev = pFVar3;
            if (pFVar3->Buffer == (uchar *)0x0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CachedBlock->Buffer",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                                 ,0xa8,L"");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
            }
            UE::FIoDispatcherFilesystemStats::OnBlockCacheHit
                      (&this->Stats->Stats,this->ReadBufferSize);
            memcpy(param_1->Buffer->Memory,pFVar3->Buffer,this->ReadBufferSize);
            return true;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10);
      } while (iVar7 != -1);
    }
  }
  UE::FIoDispatcherFilesystemStats::OnBlockCacheMiss(&this->Stats->Stats,this->ReadBufferSize);
  return false;
}

// Store @ 142aa1be0

void __thiscall
FFileIoStoreBlockCache::Store(FFileIoStoreBlockCache *this,FFileIoStoreReadRequest *param_1)

{
  code *pcVar1;
  bool bVar2;
  FCachedBlock *local_res18;
  ulong64 local_res20;
  ulong64 *local_28;
  FCachedBlock **local_20;
  
  if ((this->CacheMemory != (uchar *)0x0) && ((ulonglong)param_1->BytesUsed < param_1->Size)) {
    if ((param_1->Buffer == (FFileIoStoreBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block->Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0xb6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1->Buffer->Memory == (uchar *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Block->Buffer->Memory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                           ,0xb7,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res18 = (this->CacheLruTail).LruPrev;
    if (local_res18 != &this->CacheLruHead) {
      if ((local_res18 == (FCachedBlock *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockToReplace",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0xbd,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res20 = local_res18->Key;
      if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
        TSet<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned___int64>
                  ((TSet<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
                    *)&this->CachedBlocks,(int)(local_res20 >> 0x20) * 0x17 + (int)local_res20,
                   &local_res20);
      }
      local_res18->Key = (ulong64)(param_1->Key).field0_0x0;
      local_res18->LruPrev->LruNext = local_res18->LruNext;
      local_res18->LruNext->LruPrev = local_res18->LruPrev;
      local_res18->LruPrev = &this->CacheLruHead;
      local_res18->LruNext = (this->CacheLruHead).LruNext;
      local_res18->LruPrev->LruNext = local_res18;
      local_res18->LruNext->LruPrev = local_res18;
      if ((local_res18->Buffer == (uchar *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockToReplace->Buffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PakFile\\Private\\IoDispatcherFileBackend.cpp"
                             ,0xca,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      memcpy(local_res18->Buffer,param_1->Buffer->Memory,this->ReadBufferSize);
      UE::FIoDispatcherFilesystemStats::OnBlockCacheStore(&this->Stats->Stats,this->ReadBufferSize);
      local_28 = &local_res18->Key;
      local_20 = &local_res18;
      TSet<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<unsigned___int64_const_&,FFileIoStoreBlockCache::FCachedBlock_*_const_&>_>
                ((TSet<TTuple<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FFileIoStoreBlockCache::FCachedBlock_*,0>,FDefaultSetAllocator>
                  *)&this->CachedBlocks,
                 (TPairInitializer<unsigned___int64_const_&,FFileIoStoreBlockCache::FCachedBlock_*_const_&>
                  *)&stack0x00000008,(bool *)&local_28);
    }
  }
  return;
}

