// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 7

// FAnalysisCache @ 14d3cb5c0

/* WARNING: Enum "Type": Some values do not have unique names */

FAnalysisCache * __thiscall
TraceServices::FAnalysisCache::FAnalysisCache(FAnalysisCache *this,wchar_t *param_1)

{
  TUniquePtr<TraceServices::FAnalysisCache::FFileContents,TDefaultDelete<TraceServices::FAnalysisCache::FFileContents>_>
  *pTVar1;
  int iVar2;
  IFileHandle *pIVar3;
  undefined1 *puVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  FFileContents *pFVar8;
  FFileContents *pFVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FFileContents *pFVar14;
  FScriptContainerElement *pFVar15;
  uint local_res8 [2];
  int local_res18 [2];
  uint *local_res20;
  TDefaultDelete<TraceServices::FAnalysisCache::FFileContents> local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  
  pFVar14 = (FFileContents *)0x0;
  pTVar1 = &this->Contents;
  pTVar1->Ptr = (FFileContents *)0x0;
  this->_padding_ = (longlong)&___7FAnalysisCache_TraceServices__6B_;
  (this->Stats).BytesRead = 0;
  (this->Stats).BytesWritten = 0;
  *(undefined8 *)&this->CachedBlocks = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x20 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->CachedBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBlocks).field_0x34 = 0;
  *(undefined8 *)&(this->CachedBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  *(undefined8 *)&this->IndexBlockCount = 0;
  *(undefined8 *)&(this->IndexBlockCount).field_0x8 = 0;
  *(undefined8 *)&(this->IndexBlockCount).field_0x20 = 0;
  *(undefined4 *)&(this->IndexBlockCount).field_0x28 = 0;
  *(undefined4 *)&(this->IndexBlockCount).field_0x2c = 0x80;
  *(undefined4 *)&(this->IndexBlockCount).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IndexBlockCount).field_0x34 = 0;
  *(undefined8 *)&(this->IndexBlockCount).field_0x40 = 0;
  *(undefined4 *)&(this->IndexBlockCount).field_0x48 = 0;
  ::FString::FString(&local_70,param_1);
  ::FString::FString(&local_60,L".ucache");
  pFVar7 = FPaths::SetExtension(&local_50,&local_70,&local_60);
  if (&local_70 != pFVar7) {
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    local_70.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_70.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar12.Data = local_70.Data.AllocatorInstance.Data;
  }
  pFVar8 = ::operator_new(0x48);
  pFVar9 = pFVar14;
  if (pFVar8 != (FFileContents *)0x0) {
    pFVar9 = FFileContents::FFileContents(pFVar8,(wchar_t *)FVar12.Data);
  }
  if ((TDefaultDelete<TraceServices::FAnalysisCache::FFileContents> *)pTVar1 != local_78) {
    pFVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9;
    pFVar9 = pFVar14;
    if (pFVar8 != (FFileContents *)0x0) {
      if ((((pFVar8->Blocks).ArrayNum != 0) && (bVar5 = FFileContents::Save(pFVar8), !bVar5)) &&
         (1 < (byte)LogAnalysisCache._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
      }
      pFVar13 = (pFVar8->Blocks).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
                ((FIndexEntry *)(pFVar8->IndexEntries).AllocatorInstance.Data,
                 (pFVar8->IndexEntries).ArrayNum);
      pFVar13 = (pFVar8->IndexEntries).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      pIVar3 = (pFVar8->CacheFileWrite).Ptr;
      if (pIVar3 != (IFileHandle *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
      pIVar3 = (pFVar8->CacheFile).Ptr;
      if (pIVar3 != (IFileHandle *)0x0) {
        (**(code **)*pIVar3)(pIVar3,1);
      }
      pFVar13 = (pFVar8->CacheFilePath).Data.AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      ::operator_delete(pFVar8,0x48);
    }
  }
  TDefaultDelete<TraceServices::FAnalysisCache::FFileContents>::operator()(local_78,pFVar9);
  pFVar14 = pTVar1->Ptr;
  iVar2 = (pFVar14->Blocks).ArrayNum;
  pFVar13 = (pFVar14->Blocks).AllocatorInstance.Data;
  pFVar15 = pFVar13 + (longlong)iVar2 * 0x38;
  do {
    if ((pFVar14->Blocks).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FBlockEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar15) {
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      return this;
    }
    local_res8[0] = *(uint *)pFVar13 >> 0x14;
    if (*(int *)&(this->IndexBlockCount).field_0x8 != *(int *)&(this->IndexBlockCount).field_0x34) {
      puVar4 = *(undefined1 **)&(this->IndexBlockCount).field_0x40;
      puVar11 = &(this->IndexBlockCount).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar11 = puVar4;
      }
      uVar6 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->IndexBlockCount).field_0x48 - 1U & local_res8[0])
                       * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)&this->IndexBlockCount);
          if (*puVar10 == local_res8[0]) {
            if (puVar10 != (uint *)0x0) goto LAB_14d3cb887;
            break;
          }
          uVar6 = puVar10[2];
        } while (uVar6 != 0xffffffff);
      }
    }
    local_res20 = local_res8;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->IndexBlockCount,(uint)local_res18,
               (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res8[0],
               (bool *)&local_res20);
    puVar10 = (uint *)((longlong)local_res18[0] * 0x10 + *(longlong *)&this->IndexBlockCount);
LAB_14d3cb887:
    puVar10[1] = puVar10[1] + 1;
    pFVar13 = pFVar13 + 0x38;
  } while( true );
}

// ~FAnalysisCache @ 14d3cf1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FAnalysisCache::~FAnalysisCache(FAnalysisCache *this)

{
  undefined1 *puVar1;
  int iVar2;
  FFileContents *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  IFileHandle *pIVar6;
  bool bVar7;
  
  this->_padding_ = (longlong)&___7FAnalysisCache_TraceServices__6B_;
  bVar7 = 1 < *(int *)&(this->CachedBlocks).field_0x48;
  if (!bVar7) {
    TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
                      *)&this->CachedBlocks);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->CachedBlocks,0,*(int *)&(this->CachedBlocks).field_0x8);
  puVar1 = &(this->CachedBlocks).field_0xc;
  *(undefined4 *)&(this->CachedBlocks).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->CachedBlocks,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CachedBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CachedBlocks).field_0x34 = 0;
  iVar2 = *(int *)&(this->CachedBlocks).field_0x2c;
  *(undefined4 *)&(this->CachedBlocks).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CachedBlocks).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedBlocks).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->CachedBlocks).field_0x48 = 1;
    TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
              *)&this->CachedBlocks);
  }
  pFVar3 = (this->Contents).Ptr;
  if (pFVar3 != (FFileContents *)0x0) {
    (this->Contents).Ptr = (FFileContents *)0x0;
    TDefaultDelete<TraceServices::FAnalysisCache::FFileContents>::operator()
              ((TDefaultDelete<TraceServices::FAnalysisCache::FFileContents> *)&this->Contents,
               pFVar3);
  }
  if (3 < (byte)LogAnalysisCache._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
  }
  *(undefined4 *)&(this->IndexBlockCount).field_0x48 = 0;
  pvVar4 = *(void **)&(this->IndexBlockCount).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IndexBlockCount);
  *(undefined4 *)&(this->CachedBlocks).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CachedBlocks).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FSharedBuffer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedBlocks);
  pFVar3 = (this->Contents).Ptr;
  if (pFVar3 != (FFileContents *)0x0) {
    if ((((pFVar3->Blocks).ArrayNum != 0) && (bVar7 = FFileContents::Save(pFVar3), !bVar7)) &&
       (1 < (byte)LogAnalysisCache._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    pFVar5 = (pFVar3->Blocks).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    DestructItems<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int>
              ((FIndexEntry *)(pFVar3->IndexEntries).AllocatorInstance.Data,
               (pFVar3->IndexEntries).ArrayNum);
    pFVar5 = (pFVar3->IndexEntries).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pIVar6 = (pFVar3->CacheFileWrite).Ptr;
    if (pIVar6 != (IFileHandle *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    pIVar6 = (pFVar3->CacheFile).Ptr;
    if (pIVar6 != (IFileHandle *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
    pFVar5 = (pFVar3->CacheFilePath).Data.AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    ::operator_delete(pFVar3,0x48);
  }
  return;
}

// CreateBlocks @ 14d3d61c0

FSharedBuffer __thiscall
TraceServices::FAnalysisCache::CreateBlocks(FAnalysisCache *this,uint param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  FSharedBuffer FVar9;
  void *_Dst;
  FBufferOwner *pFVar10;
  undefined4 in_register_00000014;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> this_00;
  undefined1 *puVar11;
  ulong64 _Size;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar12;
  uint in_R9D;
  undefined1 local_res8 [16];
  uint local_res18 [2];
  uint local_res20 [2];
  FSharedBuffer local_68;
  FBufferOwner *local_60;
  uint *local_58;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_50;
  
  this_00.Owner._4_4_ = in_register_00000014;
  this_00.Owner._0_4_ = param_1;
  local_res18[0] = param_2;
  puVar8 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                       *)&this->IndexBlockCount,param_2,local_res18);
  uVar4 = local_res18[0];
  uVar1 = *puVar8;
  if ((((0xffe < local_res18[0]) || (0xffffe < uVar1)) || (local_res18[0] == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheId < 0xfff && BlockIndex < 0x000fffff && CacheId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.h"
                         ,0x86,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    FVar9.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
    return (FSharedBuffer)FVar9.Owner.Owner;
  }
  local_res20[0] = uVar4 << 0x14 | uVar1;
  _Size = (ulonglong)in_R9D << 0xd;
  _Dst = FMemory::Malloc(_Size,0x1000);
  memset(_Dst,0,_Size);
  uVar4 = local_res18[0];
  pFVar10 = ::operator_new(0x30);
  if (pFVar10 == (FBufferOwner *)0x0) {
    pFVar10 = (FBufferOwner *)0x0;
  }
  else {
    pFVar10->Data = _Dst;
    pFVar10->Size = _Size;
    pFVar10->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
    pFVar10->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::CreateBlocks'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar10[1]._padding_ = (longlong)this;
    *(uint *)&pFVar10[1].Data = uVar4;
    *(uint *)((longlong)&pFVar10[1].Data + 4) = uVar1;
    LOCK();
    pFVar10->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar10->ReferenceCountsAndFlags | 0x4000000000000000);
    UNLOCK();
    LOCK();
    pFVar10->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar10->ReferenceCountsAndFlags | 0x1000000000000000);
    UNLOCK();
    pFVar10->_padding_ =
         (longlong)
         &UE::SharedBuffer::Private::
          TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::CreateBlocks'::`2'::<lambda_1>_>
          ::_vftable_;
    LOCK();
    pFVar10->ReferenceCountsAndFlags =
         (atomic<unsigned___int64>)
         ((ulonglong)pFVar10->ReferenceCountsAndFlags | 0x2000000000000000);
    UNLOCK();
  }
  TVar12.Owner = (FBufferOwner *)0x0;
  FSharedBuffer::FSharedBuffer((FSharedBuffer *)this_00.Owner,pFVar10);
  puVar8 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           ::FindChecked((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                          *)&this->IndexBlockCount,local_res18[0]);
  *puVar8 = *puVar8 + in_R9D;
  uVar6 = FFileContents::GetFlags((this->Contents).Ptr,local_res18[0]);
  if ((uVar6 & 2) == 0) {
    if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
      puVar11 = *(undefined1 **)&(this->CachedBlocks).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->CachedBlocks).field_0x38;
      }
      iVar7 = *(int *)(puVar11 +
                      (ulonglong)(*(int *)&(this->CachedBlocks).field_0x48 - 1U & local_res20[0]) *
                      4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->CachedBlocks + (longlong)iVar7 * 0x18) == local_res20[0]
             ) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!CachedBlocks.Contains(BlockKey)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.cpp"
                               ,0x24d,L"");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              FVar9.Owner.Owner =
                   (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
              return (FSharedBuffer)FVar9.Owner.Owner;
            }
            break;
          }
          iVar7 = *(int *)(*(longlong *)&this->CachedBlocks + 0x10 + (longlong)iVar7 * 0x18);
        } while (iVar7 != -1);
      }
    }
    plVar2 = (longlong *)(this_00.Owner)->_padding_;
    pFVar10 = TVar12.Owner;
    if (plVar2 != (longlong *)0x0) {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      pFVar10 = (FBufferOwner *)plVar2[2];
    }
    plVar2 = (longlong *)(this_00.Owner)->_padding_;
    if (plVar2 != (longlong *)0x0) {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      TVar12.Owner = (FBufferOwner *)plVar2[1];
    }
    local_58 = local_res20;
    local_68.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar12.Owner;
    local_60 = pFVar10;
    local_50.Owner =
         (FBufferOwner *)
         FSharedBuffer::MakeView((TMemoryView<void_const_> *)(local_res8 + 8),&local_68);
    TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,FSharedBuffer_&&>_>
              ((TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
                *)&this->CachedBlocks,
               (TPairInitializer<unsigned_int_const_&,FSharedBuffer_&&> *)local_res8,
               (bool *)&local_58);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)(local_res8 + 8));
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)this_00.Owner;
}

// GetBlocks @ 14d3e0020

/* WARNING: Enum "Type": Some values do not have unique names */

FSharedBuffer __thiscall
TraceServices::FAnalysisCache::GetBlocks
          (FAnalysisCache *this,uint param_1,uint param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  FSharedBuffer FVar8;
  uint *puVar9;
  void *pvVar10;
  FBufferOwner *pFVar11;
  FBufferOwner *pFVar12;
  undefined4 in_register_00000014;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulong64 uVar16;
  ulonglong uVar17;
  uint local_res8 [2];
  uint local_res18 [2];
  uint local_res20;
  uint in_stack_00000028;
  TPairInitializer<unsigned_int_const_&,FSharedBuffer_const_&> local_78;
  ulong64 local_68;
  void *local_60;
  TMemoryView<void> local_58;
  uint *local_48;
  FSharedBuffer **local_40;
  
  TVar13.Owner._4_4_ = in_register_00000014;
  TVar13.Owner._0_4_ = param_1;
  local_res18[0] = param_2;
  local_res20 = param_3;
  if ((((0xffe < param_2) || (0xffffe < param_3)) || (param_2 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheId < 0xfff && BlockIndex < 0x000fffff && CacheId > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.h"
                         ,0x86,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    FVar8.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
    return (FSharedBuffer)FVar8.Owner.Owner;
  }
  local_res8[0] = param_2 << 0x14 | param_3;
  puVar9 = TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
           ::FindOrAddImpl<unsigned_int_const_&>
                     ((TMapBase<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>_>
                       *)&this->IndexBlockCount,local_res18[0],local_res18);
  uVar17 = (ulonglong)in_stack_00000028;
  if ((param_3 < *puVar9) && (param_3 + in_stack_00000028 <= *puVar9)) {
    pFVar12 = (FBufferOwner *)0x0;
    if (*(int *)&(this->CachedBlocks).field_0x8 != *(int *)&(this->CachedBlocks).field_0x34) {
      puVar14 = *(undefined1 **)&(this->CachedBlocks).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(this->CachedBlocks).field_0x38;
      }
      iVar7 = *(int *)(puVar14 +
                      (ulonglong)(*(int *)&(this->CachedBlocks).field_0x48 - 1U & local_res8[0]) * 4
                      );
      if (iVar7 != -1) {
        do {
          lVar2 = *(longlong *)&this->CachedBlocks + (longlong)iVar7 * 0x18;
          if (*(uint *)(*(longlong *)&this->CachedBlocks + (longlong)iVar7 * 0x18) == local_res8[0])
          {
            pFVar11 = (FBufferOwner *)(lVar2 + 8);
            if (lVar2 == 0) {
              pFVar11 = pFVar12;
            }
            if (pFVar11 != (FBufferOwner *)0x0) {
              lVar2 = pFVar11->_padding_;
              if (lVar2 != 0) {
                LOCK();
                puVar1 = (ulonglong *)(lVar2 + 0x18);
                uVar17 = *puVar1;
                *puVar1 = *puVar1 + 1;
                UNLOCK();
                if ((uVar17 & 0x3fffffff) == 0) {
                  LOCK();
                  *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + 0x40000000;
                  UNLOCK();
                }
              }
              (TVar13.Owner)->_padding_ = lVar2;
              return (FSharedBuffer)
                     (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar13.Owner;
            }
            break;
          }
          iVar7 = *(int *)(lVar2 + 0x10);
        } while (iVar7 != -1);
      }
    }
    uVar16 = uVar17 << 0xd;
    local_68 = uVar16;
    pvVar10 = FMemory::Malloc(uVar16,0x1000);
    uVar15 = param_3;
    local_60 = pvVar10;
    if (in_stack_00000028 != 0) {
      do {
        uVar15 = local_res18[0];
        if ((((0xffe < local_res18[0]) || (0xffffe < param_3)) || (local_res18[0] == 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("CacheId < 0xfff && BlockIndex < 0x000fffff && CacheId > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.h"
                               ,0x86,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          FVar8.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(*pcVar3)();
          return (FSharedBuffer)FVar8.Owner.Owner;
        }
        local_58.Size = 0x2000;
        local_58.Data = pvVar10;
        uVar16 = FFileContents::LoadBlock((this->Contents).Ptr,&local_58,uVar15 << 0x14 | param_3);
        (this->Stats).BytesRead = (this->Stats).BytesRead + uVar16;
        param_3 = param_3 + 1;
        pvVar10 = (void *)((longlong)pvVar10 + 0x2000);
        uVar17 = uVar17 - 1;
        uVar16 = local_68;
        uVar15 = local_res20;
      } while (uVar17 != 0);
    }
    uVar4 = local_res18[0];
    pFVar11 = ::operator_new(0x30);
    if (pFVar11 != (FBufferOwner *)0x0) {
      pFVar11->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
      pFVar11->Data = local_60;
      pFVar11->_padding_ =
           (longlong)
           &UE::SharedBuffer::Private::
            TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::GetBlocks'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar11->Size = uVar16;
      pFVar11[1]._padding_ = (longlong)this;
      *(uint *)&pFVar11[1].Data = uVar4;
      *(uint *)((longlong)&pFVar11[1].Data + 4) = uVar15;
      LOCK();
      pFVar11->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar11->ReferenceCountsAndFlags | 0x4000000000000000);
      UNLOCK();
      LOCK();
      pFVar11->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar11->ReferenceCountsAndFlags | 0x1000000000000000);
      UNLOCK();
      pFVar11->_padding_ =
           (longlong)
           &UE::SharedBuffer::Private::
            TBufferOwnerDeleteFunction<`TraceServices::FAnalysisCache::GetBlocks'::`2'::<lambda_1>_>
            ::_vftable_;
      LOCK();
      pFVar11->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar11->ReferenceCountsAndFlags | 0x2000000000000000);
      UNLOCK();
      pFVar12 = pFVar11;
    }
    FSharedBuffer::FSharedBuffer((FSharedBuffer *)&local_78.Value,pFVar12);
    uVar6 = FFileContents::GetFlags((this->Contents).Ptr,local_res18[0]);
    if ((uVar6 & 2) == 0) {
      local_48 = local_res8;
      local_40 = &local_78.Value;
      TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,FSharedBuffer_const_&>_>
                ((TSet<TTuple<unsigned_int,FSharedBuffer>,TDefaultMapHashableKeyFuncs<unsigned_int,FSharedBuffer,0>,FDefaultSetAllocator>
                  *)&this->CachedBlocks,&local_78,(bool *)&local_48);
    }
    (TVar13.Owner)->_padding_ = (longlong)local_78.Value;
  }
  else {
    if (1 < (byte)LogAnalysisCache._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnalysisCache);
    }
    (TVar13.Owner)->_padding_ = 0;
  }
  return (FSharedBuffer)(TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)TVar13.Owner;
}

// GetCacheId @ 14d3e0390

uint __thiscall
TraceServices::FAnalysisCache::GetCacheId(FAnalysisCache *this,wchar_t *param_1,ushort param_2)

{
  TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FFileContents *pFVar3;
  int iVar4;
  uint uVar5;
  FIndexEntry *pFVar6;
  FScriptContainerElement *this_00;
  
  pFVar3 = (this->Contents).Ptr;
  pTVar1 = &pFVar3->IndexEntries;
  pFVar6 = AlgoImpl::
           FindByPredicate<TArray<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,TSizedDefaultAllocator<32>_>_&,_TraceServices::FAnalysisCache::FFileContents::GetId_::__l2::<lambda_1>_>
                     (pTVar1,(<lambda_1>)param_1);
  if (pFVar6 == (FIndexEntry *)0x0) {
    iVar4 = (pFVar3->IndexEntries).ArrayNum;
    piVar2 = &(pFVar3->IndexEntries).ArrayMax;
    uVar5 = iVar4 + 1;
    if (iVar4 == *piVar2) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&pTVar1->AllocatorInstance,piVar2);
      (pFVar3->IndexEntries).ArrayNum = iVar4;
    }
    (pFVar3->IndexEntries).ArrayNum = iVar4 + 1;
    this_00 = (pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 0x58;
    *(undefined8 *)&this_00->field_0x0 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)&this_00[0x10].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)&this_00[0x20].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)&this_00[0x30].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)&this_00[0x40].field_0x0 = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)&this_00[0x50].field_0x0 = 0;
    ::FString::operator=((FString *)this_00,param_1);
    *(uint *)&this_00[0x10].field_0x0 = uVar5;
    *(uint *)(this_00 + 0x14) = (uint)param_2;
  }
  else {
    uVar5 = pFVar6->Id;
  }
  return uVar5;
}

// GetUserData @ 14d3e3aa0

TMemoryView<void> * __thiscall
TraceServices::FAnalysisCache::GetUserData
          (FAnalysisCache *this,TMemoryView<void> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FFileContents *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pFVar2 = (this->Contents).Ptr;
  iVar1 = (pFVar2->IndexEntries).ArrayNum;
  pFVar3 = (pFVar2->IndexEntries).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((pFVar2->IndexEntries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAnalysisCache::FFileContents::FIndexEntry,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar4) goto LAB_14d3e3b02;
    if (*(uint *)(pFVar3 + 0x10) == param_1) break;
    pFVar3 = pFVar3 + 0x58;
  }
  if (pFVar3 == (FScriptContainerElement *)0x0) {
LAB_14d3e3b02:
    pFVar4 = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->Size = 0;
    pFVar3 = pFVar4;
  }
  else {
    pFVar4 = (FScriptContainerElement *)0x40;
    pFVar3 = pFVar3 + 0x18;
  }
  __return_storage_ptr__->Data = pFVar3;
  __return_storage_ptr__->Size = (ulong64)pFVar4;
  return __return_storage_ptr__;
}

// ReleaseBlocks @ 14d400670

void __thiscall
TraceServices::FAnalysisCache::ReleaseBlocks
          (FAnalysisCache *this,uchar *param_1,uint param_2,uint param_3,ulong64 param_4)

{
  ulong64 *puVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  ulonglong uVar6;
  TMemoryView<void_const_> local_28;
  
  uVar4 = param_4 >> 0xd;
  uVar6 = uVar4 & 0xffffffff;
  if ((uVar4 != uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)uVar4 != 0) {
    do {
      if ((((0xffe < param_2) || (0xffffe < param_3)) || (param_2 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CacheId < 0xfff && BlockIndex < 0x000fffff && CacheId > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\AnalysisCache.h"
                             ,0x86,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28.Size = 0x2000;
      local_28.Data = param_1;
      uVar5 = FFileContents::UpdateBlock((this->Contents).Ptr,&local_28,param_3 | param_2 << 0x14);
      puVar1 = &(this->Stats).BytesWritten;
      *puVar1 = *puVar1 + uVar5;
      param_1 = param_1 + 0x2000;
      param_3 = param_3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

