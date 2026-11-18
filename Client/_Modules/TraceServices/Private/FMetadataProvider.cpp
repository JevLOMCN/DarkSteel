// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 33

// FMetadataProvider @ 14d4243a0

FMetadataProvider * __thiscall
TraceServices::FMetadataProvider::FMetadataProvider
          (FMetadataProvider *this,IAnalysisSession *param_1)

{
  ILinearAllocator *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IMetadataProvider__;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableMetadataProvider__;
  (this->Lock).RWLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->Session = param_1;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*param_1 + 0xb8))(param_1);
  (this->RegisteredTypes).PageSize = 0x10;
  (this->RegisteredTypes).Allocator = pIVar1;
  (this->RegisteredTypes).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredTypes).PagesArray.ArrayNum = 0;
  (this->RegisteredTypes).PagesArray.ArrayMax = 0;
  (this->RegisteredTypes).FirstPage = (TPagedArrayPage<TraceServices::FMetadataSchema> *)0x0;
  (this->RegisteredTypes).LastPage = (TPagedArrayPage<TraceServices::FMetadataSchema> *)0x0;
  (this->RegisteredTypes).TotalItemCount = 0;
  *(undefined8 *)&this->RegisteredTypesMap = 0;
  *(undefined8 *)&(this->RegisteredTypesMap).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredTypesMap).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredTypesMap).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x48 = 0;
  pIVar1 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
  (this->MetadataStore).Allocator = pIVar1;
  (this->MetadataStore).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataStore).PagesArray.ArrayNum = 0;
  (this->MetadataStore).PagesArray.ArrayMax = 0;
  (this->MetadataStore).FirstPage =
       (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *)0x0;
  (this->MetadataStore).LastPage =
       (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *)0x0;
  (this->MetadataStore).PageSize = 0x400;
  (this->MetadataStore).TotalItemCount = 0;
  *(undefined8 *)&this->Threads = 0;
  *(undefined8 *)&(this->Threads).field_0x8 = 0;
  *(undefined8 *)&(this->Threads).field_0x20 = 0;
  *(undefined4 *)&(this->Threads).field_0x28 = 0;
  *(undefined4 *)&(this->Threads).field_0x2c = 0x80;
  *(undefined4 *)&(this->Threads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Threads).field_0x34 = 0;
  *(undefined8 *)&(this->Threads).field_0x40 = 0;
  *(undefined4 *)&(this->Threads).field_0x48 = 0;
  *(undefined8 *)&this->SavedStackMap = 0;
  *(undefined8 *)&(this->SavedStackMap).field_0x8 = 0;
  *(undefined8 *)&(this->SavedStackMap).field_0x20 = 0;
  *(undefined4 *)&(this->SavedStackMap).field_0x28 = 0;
  *(undefined4 *)&(this->SavedStackMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SavedStackMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SavedStackMap).field_0x34 = 0;
  *(undefined8 *)&(this->SavedStackMap).field_0x40 = 0;
  *(undefined4 *)&(this->SavedStackMap).field_0x48 = 0;
  this->MetaScopeErrors = 0;
  this->ClearScopeErrors = 0;
  this->RestoreScopeErrors = 0;
  this->PushSavedStackErrors = 0;
  this->EventCount = 0;
  this->AllocationEventCount = 0;
  this->AllocationCount = 0;
  this->TotalAllocatedMemory = 0;
  return this;
}

// ~FMetadataProvider @ 14d42bde0

void __thiscall TraceServices::FMetadataProvider::~FMetadataProvider(FMetadataProvider *this)

{
  ulong64 uVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  void *pvVar7;
  code *pcVar8;
  TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  *pTVar9;
  TMap<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,0>_>
  *pTVar10;
  bool bVar11;
  BOOLEAN BVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulong64 uVar16;
  uint uVar17;
  FMetadataStoreEntry *pFVar18;
  uint uVar19;
  FMetadataStoreEntry *pFVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint *puVar24;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  local_f8;
  TMap<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,0>_>
  *local_c8;
  undefined1 auStack_c0 [20];
  uint uStack_ac;
  ulong64 local_a8;
  FMetadataStoreEntry *pFStack_a0;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  local_98;
  undefined4 local_4c;
  
  iVar21 = 0;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IMetadataProvider__;
  puVar2 = &(this->Threads).field_0x10;
  this->_padding_ = (longlong)&_vftable__for__TraceServices__IEditableMetadataProvider__;
  local_f8.Outer =
       (TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
        *)&this->Threads;
  iVar4 = *(int *)&(this->Threads).field_0x28;
  iVar23 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar4 != 0) {
    puVar24 = *(uint **)&(this->Threads).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar2;
    }
    uVar19 = *puVar24;
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar21;
      iVar23 = iVar23 + 0x20;
      iVar21 = iVar21 + 1;
      iVar14 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14d42be9d;
      uVar19 = puVar24[lVar15 + 1];
    }
    uVar13 = -uVar19 & uVar19;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    iVar14 = iVar23 + -1 + local_res18;
    if (iVar4 < iVar14) {
      iVar14 = iVar4;
    }
  }
LAB_14d42be9d:
  uVar19 = *(uint *)&(this->Threads).field_0x28;
  uVar17 = uVar19 & 0xffffffe0;
  local_f8.CurrentPageIndex = CONCAT44(uVar13,iVar21);
  local_f8.CurrentItem =
       (FMetadataStoreEntry *)
       CONCAT44(local_f8.CurrentItem._4_4_,
                *(int *)&(this->Threads).field_0x8 - *(int *)&(this->Threads).field_0x34);
  local_f8.CurrentPageLastItem = (FMetadataStoreEntry *)CONCAT44(iVar14,0xffffffff);
  local_f8.CurrentItemIndex = CONCAT44(local_4c,iVar23);
  auStack_c0._0_8_ = local_f8.CurrentPageIndex;
  iVar23 = (int)uVar19 >> 5;
  stack0xffffffffffffff50 = local_f8.CurrentPageLastItem;
  local_a8 = local_f8.CurrentItemIndex;
  pFStack_a0 = local_f8.CurrentItem;
  local_f8.CurrentPageFirstItem = (FMetadataStoreEntry *)puVar2;
  local_c8 = (TMap<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,0>_>
              *)local_f8.Outer;
  auStack_c0._8_8_ = puVar2;
  if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar13 = *(uint *)&(this->Threads).field_0x28;
  if (uVar19 != uVar13) {
    puVar22 = *(undefined1 **)&(this->Threads).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar23 * 4);
    while (uVar19 == 0) {
      lVar15 = (longlong)iVar23;
      uVar17 = uVar17 + 0x20;
      iVar23 = iVar23 + 1;
      uVar19 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_14d42bfb0;
      uVar19 = *(uint *)(puVar22 + lVar15 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    uVar19 = local_res20 + -1 + uVar17;
    if ((int)uVar13 < (int)uVar19) {
      uVar19 = uVar13;
    }
  }
LAB_14d42bfb0:
  while( true ) {
    pTVar10 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)(&local_c8->field_0x30 + 4) != (int)pFStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)(int)uStack_ac;
    if (((uStack_ac == uVar19) && ((undefined1 *)auStack_c0._8_8_ == &(this->Threads).field_0x10))
       && (pTVar10 == &this->Threads)) break;
    lVar5 = *(longlong *)&pTVar10->field_0x0;
    lVar6 = *(longlong *)(lVar5 + 8 + lVar15 * 0x18);
    iVar4 = *(int *)(lVar6 + 0x10);
    pFVar18 = *(FMetadataStoreEntry **)(lVar6 + 8);
    pFVar20 = (FMetadataStoreEntry *)((longlong)pFVar18 + (longlong)iVar4 * 0x18);
    while( true ) {
      if (*(int *)(lVar6 + 0x10) != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TraceServices::FMetadataProvider::FMetadataStackEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar18 == pFVar20) break;
      if (*(int *)&pFVar18[1].field0_0x0 == -1) {
        InternalFreeStoreEntry(this,pFVar18);
      }
      pFVar18 = (FMetadataStoreEntry *)pFVar18[1].ValueEx;
    }
    pvVar7 = *(void **)(lVar5 + lVar15 * 0x18 + 8);
    if (pvVar7 != (void *)0x0) {
      if (*(void **)((longlong)pvVar7 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 0x50));
      }
      TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
      ::
      ~TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                ((TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
                  *)((longlong)pvVar7 + 0x18));
      if (*(void **)((longlong)pvVar7 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar7 + 8));
      }
      ::operator_delete(pvVar7,0x60);
    }
    stack0xffffffffffffff50 =
         (FMetadataStoreEntry *)CONCAT44(uStack_ac,auStack_c0._16_4_ & ~auStack_c0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
  }
  uVar1 = local_f8.CurrentPageIndex;
  if ((this->MetadataStore).TotalItemCount != 0) {
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
    ::
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
              (&local_f8,&this->MetadataStore,0);
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
    ::
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
              (&local_98,&this->MetadataStore,(this->MetadataStore).TotalItemCount);
    pTVar9 = local_f8.Outer;
    uVar1 = local_f8.CurrentPageIndex;
    pFVar18 = local_f8.CurrentPageLastItem;
    uVar16 = local_f8.CurrentItemIndex;
    pFVar20 = local_f8.CurrentItem;
    while (local_f8.CurrentItemIndex = uVar16, local_f8.CurrentItem = pFVar20,
          uVar16 != local_98.CurrentItemIndex) {
      InternalFreeStoreEntry(this,pFVar20);
      if (pFVar20 == pFVar18) {
        if (uVar1 == (longlong)((pTVar9->PagesArray).ArrayNum + -1)) {
          uVar16 = pTVar9->TotalItemCount;
          local_f8.CurrentPageFirstItem = (FMetadataStoreEntry *)0x0;
          local_f8.CurrentPageLastItem = (FMetadataStoreEntry *)0x0;
          pFVar20 = (FMetadataStoreEntry *)0x0;
          pFVar18 = (FMetadataStoreEntry *)0x0;
        }
        else {
          uVar1 = uVar1 + 1;
          local_f8.CurrentPageFirstItem = pTVar9->FirstPage[uVar1].Items;
          pFVar20 = local_f8.CurrentPageFirstItem;
          if (local_f8.CurrentPageFirstItem == (FMetadataStoreEntry *)0x0) {
            pFVar18 = (FMetadataStoreEntry *)0x0;
            uVar16 = uVar1 * pTVar9->PageSize;
            local_f8.CurrentPageLastItem = (FMetadataStoreEntry *)0x0;
          }
          else {
            pFVar18 = local_f8.CurrentPageFirstItem + (pTVar9->FirstPage[uVar1].Count - 1);
            uVar16 = uVar1 * pTVar9->PageSize;
            local_f8.CurrentPageLastItem = pFVar18;
          }
        }
      }
      else {
        uVar16 = uVar16 + 1;
        pFVar20 = pFVar20 + 1;
      }
    }
  }
  local_f8.CurrentPageIndex = uVar1;
  if ((this->AllocationCount != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationCount == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                          ,0x34,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((this->TotalAllocatedMemory != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("TotalAllocatedMemory == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                          ,0x35,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  *(undefined4 *)&(this->SavedStackMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->SavedStackMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SavedStackMap);
  *(undefined4 *)&(this->Threads).field_0x48 = 0;
  pvVar7 = *(void **)&(this->Threads).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Threads);
  TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  ::
  ~TPagedArray<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
            (&this->MetadataStore);
  *(undefined4 *)&(this->RegisteredTypesMap).field_0x48 = 0;
  pvVar7 = *(void **)&(this->RegisteredTypesMap).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,unsigned_short>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredTypesMap);
  TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
  ::
  ~TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
            (&this->RegisteredTypes);
  BVar12 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  if (BVar12 == '\0') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  }
  return;
}

// BeginClearStackScope @ 14d441860

void __thiscall
TraceServices::FMetadataProvider::BeginClearStackScope(FMetadataProvider *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMetadataThread *pFVar6;
  undefined4 local_18 [4];
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  pFVar6 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  local_18[0] = (**(code **)(this->_padding_ + 0x60))(this,param_1);
  pFVar2 = (pFVar6->SavedMetadataStack).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(pFVar6->SavedMetadataStack).ArrayMax * 4)) {
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
  iVar5 = (pFVar6->SavedMetadataStack).ArrayNum;
  piVar1 = &(pFVar6->SavedMetadataStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar6->SavedMetadataStack).AllocatorInstance,piVar1);
  }
  (pFVar6->SavedMetadataStack).ArrayNum = iVar5 + 1;
  *(undefined4 *)((pFVar6->SavedMetadataStack).AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18[0];
  InternalClearStack((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar6);
  return;
}

// BeginEdit @ 14d441ab0

void __thiscall TraceServices::FMetadataProvider::BeginEdit(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b80))
  ;
  return;
}

// BeginRead @ 14d4420c0

void __thiscall TraceServices::FMetadataProvider::BeginRead(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::BeginRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b80));
  return;
}

// BeginRestoreSavedStackScope @ 14d442180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::BeginRestoreSavedStackScope
          (FMetadataProvider *this,uint param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMetadataThread *pFVar9;
  FMetadataThread *pFVar10;
  FStaticBasicLogRecord *pFVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined4 local_28 [4];
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  pFVar9 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  local_28[0] = (**(code **)(this->_padding_ + 0x60))(this,param_1);
  pFVar4 = (pFVar9->SavedMetadataStack).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
      ((FScriptContainerElement *)local_28 <
       pFVar4 + (longlong)(pFVar9->SavedMetadataStack).ArrayMax * 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (pFVar9->SavedMetadataStack).ArrayNum;
  piVar1 = &(pFVar9->SavedMetadataStack).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(pFVar9->SavedMetadataStack).AllocatorInstance,piVar1);
  }
  (pFVar9->SavedMetadataStack).ArrayNum = iVar8 + 1;
  *(undefined4 *)((pFVar9->SavedMetadataStack).AllocatorInstance.Data + (longlong)iVar8 * 4) =
       local_28[0];
  InternalClearStack((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar9);
  if (*(int *)&this->SavedStackMap != *(int *)&(this->SavedStackMap).field_0x2c) {
    puVar12 = *(undefined1 **)&(this->SavedStackMap).field_0x38;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->SavedStackMap).field_0x30;
    }
    iVar8 = *(int *)(puVar12 +
                    (ulonglong)(*(int *)&(this->SavedStackMap).field_0x40 - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)&(this->Threads).field_0x48;
      do {
        lVar2 = lVar5 + (longlong)iVar8 * 0x14;
        if (*(uint *)(lVar5 + (longlong)iVar8 * 0x14) == param_2) {
          puVar13 = (uint *)(lVar2 + 4);
          if (lVar2 == 0) {
            puVar13 = (uint *)0x0;
          }
          if (puVar13 != (uint *)0x0) {
            uVar3 = puVar13[1];
            if (uVar3 == 0xffffffff) {
              return;
            }
            pFVar10 = GetThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,*puVar13);
            if ((pFVar10 != (FMetadataThread *)0x0) &&
               ((ulonglong)uVar3 < (pFVar10->Metadata).TotalItemCount)) {
              InternalPushSavedStack
                        ((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar9,pFVar10,uVar3);
              return;
            }
            this->MetaScopeErrors = this->MetaScopeErrors + 1;
            if (100 < this->MetaScopeErrors) {
              return;
            }
            if ((byte)LogTraceServices._0_1_ < 2) {
              return;
            }
            pFVar11 = &::LOG_Static;
            goto LAB_14d4422f6;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0xc);
      } while (iVar8 != -1);
    }
  }
  this->MetaScopeErrors = this->MetaScopeErrors + 1;
  if ((this->MetaScopeErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
    pFVar11 = &::LOG_Static;
LAB_14d4422f6:
    UE::Logging::Private::BasicLog<2>(pFVar11,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// EditAccessCheck @ 14d450050

void __thiscall TraceServices::FMetadataProvider::EditAccessCheck(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::WriteAccessCheck
            ((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b80));
  return;
}

// EndClearStackScope @ 14d4512d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::EndClearStackScope(FMetadataProvider *this,uint param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetadataThread *pFVar5;
  int iVar6;
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  pFVar5 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  if ((pFVar5->SavedMetadataStack).ArrayNum == 0) {
    puVar1 = &(this->SavedStackMap).field_0x4c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    if ((*(uint *)&(this->SavedStackMap).field_0x4c < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    if ((0 < (pFVar5->CurrentStack).ArrayNum) && (2 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
    if (((pFVar5->SavedMetadataStack).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (pFVar5->SavedMetadataStack).ArrayNum;
    uVar4 = *(uint *)((pFVar5->SavedMetadataStack).AllocatorInstance.Data + (longlong)iVar6 * 4 + -4
                     );
    iVar6 = iVar6 + -1;
    (pFVar5->SavedMetadataStack).ArrayNum = iVar6;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(pFVar5->SavedMetadataStack).AllocatorInstance,iVar6,
               &(pFVar5->SavedMetadataStack).ArrayMax);
    if (uVar4 != 0xffffffff) {
      if ((ulonglong)uVar4 < (pFVar5->Metadata).TotalItemCount) {
        InternalPushSavedStack
                  ((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar5,pFVar5,uVar4);
      }
      else {
        uVar4 = *(int *)&(this->SavedStackMap).field_0x4c + 1;
        *(uint *)&(this->SavedStackMap).field_0x4c = uVar4;
        if ((uVar4 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
  }
  return;
}

// EndEdit @ 14d451590

void __thiscall TraceServices::FMetadataProvider::EndEdit(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndWrite((FProviderLock *)&this->_padding_,(FThreadLocalState *)(lVar1 + 0x9b80));
  return;
}

// EndRead @ 14d451a10

void __thiscall TraceServices::FMetadataProvider::EndRead(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::EndRead(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b80));
  return;
}

// EndRestoreSavedStackScope @ 14d451ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::EndRestoreSavedStackScope(FMetadataProvider *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMetadataThread *pFVar4;
  int iVar5;
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  pFVar4 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  if ((pFVar4->SavedMetadataStack).ArrayNum == 0) {
    uVar3 = this->MetaScopeErrors + 1;
    this->MetaScopeErrors = uVar3;
    if ((uVar3 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    InternalClearStack((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar4);
    if (((pFVar4->SavedMetadataStack).ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (pFVar4->SavedMetadataStack).ArrayNum;
    uVar3 = *(uint *)((pFVar4->SavedMetadataStack).AllocatorInstance.Data + (longlong)iVar5 * 4 + -4
                     );
    iVar5 = iVar5 + -1;
    (pFVar4->SavedMetadataStack).ArrayNum = iVar5;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(pFVar4->SavedMetadataStack).AllocatorInstance,iVar5,
               &(pFVar4->SavedMetadataStack).ArrayMax);
    if (uVar3 != 0xffffffff) {
      if ((ulonglong)uVar3 < (pFVar4->Metadata).TotalItemCount) {
        InternalPushSavedStack
                  ((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar4,pFVar4,uVar3);
      }
      else {
        uVar3 = *(int *)&(this->SavedStackMap).field_0x4c + 1;
        *(uint *)&(this->SavedStackMap).field_0x4c = uVar3;
        if ((uVar3 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
        }
      }
    }
  }
  return;
}

// EnumerateMetadata @ 14d45a9d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::EnumerateMetadata
          (FMetadataProvider *this,uint param_1,uint param_2,
          TFunctionRef<bool___cdecl(unsigned_int,unsigned_short,void_const_*,unsigned_int)> *param_3
          )

{
  code *pcVar1;
  FMetadataEntry *pFVar2;
  bool bVar3;
  char cVar4;
  FMetadataThread *pFVar5;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar6;
  FMetadataEntry *pFVar7;
  FMetadataEntry *pFVar8;
  ulong64 uVar9;
  ushort local_res8 [4];
  uint local_a8 [2];
  int local_a0 [2];
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  local_98;
  FMetadataStoreEntry_u_0 local_68;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  local_60;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar5 = GetThread(this,param_1);
  if ((pFVar5 == (FMetadataThread *)0x0) ||
     ((pFVar5->Metadata).TotalItemCount <= (ulonglong)param_2)) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      return;
    }
  }
  else {
    TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
    ::GetIteratorFromItem(&pFVar5->Metadata,&local_98,(ulonglong)param_2);
    pFVar7 = local_98.CurrentItem;
    pFVar8 = local_98.CurrentPageFirstItem;
    uVar9 = local_98.CurrentPageIndex;
    while( true ) {
      pFVar2 = local_98.CurrentItem;
      if (((this->MetadataStore).TotalItemCount <= (ulonglong)pFVar7->StoreIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry->StoreIndex < MetadataStore.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                             ,0x283,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
      ::
      TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                (&local_60,&this->MetadataStore,(ulonglong)pFVar7->StoreIndex);
      local_a8[0] = (uint)*(ushort *)((longlong)local_60.CurrentItem + 0xc);
      local_68 = (FMetadataStoreEntry_u_0)local_60.CurrentItem;
      if (0xc < local_a8[0]) {
        local_68 = (local_60.CurrentItem)->field0_0x0;
      }
      local_res8[0] = *(ushort *)((longlong)local_60.CurrentItem + 0xe);
      local_a0[0] = pFVar7->StackSize - 1;
      cVar4 = (**(code **)param_3)
                        (*(undefined8 *)&param_3->field_0x8,local_a0,local_res8,&local_68,local_a8);
      if ((cVar4 == '\0') || (pFVar7->StackSize == 1)) break;
      if (pFVar2 == pFVar8) {
        if (uVar9 == 0) {
          local_98.CurrentItemIndex = (local_98.Outer)->TotalItemCount;
          local_98.CurrentItem = (FMetadataEntry *)0x0;
          local_98.CurrentPageFirstItem = (FMetadataEntry *)0x0;
          local_98.CurrentPageLastItem = (FMetadataEntry *)0x0;
          pFVar7 = (FMetadataEntry *)0x0;
          pFVar8 = (FMetadataEntry *)0x0;
        }
        else {
          uVar9 = uVar9 - 1;
          pTVar6 = (local_98.Outer)->FirstPage + uVar9;
          pFVar8 = pTVar6->Items;
          if (pFVar8 == (FMetadataEntry *)0x0) {
            local_98.CurrentPageLastItem = (FMetadataEntry *)0x0;
          }
          else {
            local_98.CurrentPageLastItem = pFVar8 + (pTVar6->Count - 1);
          }
          local_98.CurrentItemIndex =
               ((longlong)local_98.CurrentPageLastItem - (longlong)pFVar8 >> 3) +
               uVar9 * (local_98.Outer)->PageSize;
          pFVar7 = local_98.CurrentPageLastItem;
          local_98.CurrentPageIndex = uVar9;
          local_98.CurrentPageFirstItem = pFVar8;
          local_98.CurrentItem = local_98.CurrentPageLastItem;
          if (pTVar6 == (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0) {
            pFVar7 = (FMetadataEntry *)0x0;
            local_98.CurrentItem = local_98.CurrentPageLastItem;
          }
        }
      }
      else {
        local_98.CurrentItemIndex = local_98.CurrentItemIndex - 1;
        pFVar7 = pFVar2 + -1;
        local_98.CurrentItem = pFVar7;
      }
    }
  }
  return;
}

// GetMetadata @ 14d469270

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FMetadataProvider::GetMetadata
          (FMetadataProvider *this,uint param_1,uint param_2,uint param_3,ushort *param_4,
          void **param_5,uint *param_6)

{
  ushort *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FMetadataThread *pFVar6;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar7;
  FMetadataEntry *pFVar8;
  FMetadataEntry *pFVar9;
  ulong64 uVar10;
  FMetadataEntry *pFVar11;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  local_88;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  local_58;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar6 = GetThread(this,param_1);
  if ((pFVar6 == (FMetadataThread *)0x0) ||
     ((pFVar6->Metadata).TotalItemCount <= (ulonglong)param_2)) {
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
    ::GetIteratorFromItem(&pFVar6->Metadata,&local_88,(ulonglong)param_2);
    uVar5 = (uint)(local_88.CurrentItem)->StackSize;
    if (param_3 < uVar5) {
      uVar10 = local_88.CurrentPageIndex;
      pFVar9 = local_88.CurrentPageFirstItem;
      pFVar8 = local_88.CurrentItem;
      pFVar11 = local_88.CurrentItem;
      do {
        if (uVar5 == param_3 + 1) {
          if (((this->MetadataStore).TotalItemCount <= (ulonglong)pFVar11->StoreIndex) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Entry->StoreIndex < MetadataStore.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                                 ,0x269,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
          ::
          TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
                    (&local_58,&this->MetadataStore,(ulonglong)pFVar11->StoreIndex);
          *param_4 = (local_58.CurrentItem)->Type;
          puVar1 = &(local_58.CurrentItem)->Size;
          if (0xc < *puVar1) {
            local_58.CurrentItem = *(FMetadataStoreEntry **)&(local_58.CurrentItem)->field0_0x0;
          }
          *param_5 = local_58.CurrentItem;
          *param_6 = (uint)*puVar1;
          return true;
        }
        if (pFVar8 == pFVar9) {
          if (uVar10 == 0) {
            local_88.CurrentItemIndex = (local_88.Outer)->TotalItemCount;
            local_88.CurrentItem = (FMetadataEntry *)0x0;
            local_88.CurrentPageFirstItem = (FMetadataEntry *)0x0;
            local_88.CurrentPageLastItem = (FMetadataEntry *)0x0;
            pFVar9 = (FMetadataEntry *)0x0;
            pFVar11 = (FMetadataEntry *)0x0;
          }
          else {
            uVar10 = uVar10 - 1;
            pTVar7 = (local_88.Outer)->FirstPage + uVar10;
            pFVar9 = pTVar7->Items;
            if (pFVar9 == (FMetadataEntry *)0x0) {
              pFVar8 = (FMetadataEntry *)0x0;
            }
            else {
              pFVar8 = pFVar9 + (pTVar7->Count - 1);
            }
            local_88.CurrentItemIndex =
                 ((longlong)pFVar8 - (longlong)pFVar9 >> 3) + uVar10 * (local_88.Outer)->PageSize;
            local_88.CurrentPageIndex = uVar10;
            local_88.CurrentPageFirstItem = pFVar9;
            local_88.CurrentPageLastItem = pFVar8;
            if (pTVar7 != (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0)
            goto LAB_14d4693ca;
            pFVar11 = (FMetadataEntry *)0x0;
            local_88.CurrentItem = pFVar8;
          }
LAB_14d4693d5:
          pFVar8 = local_88.CurrentItem;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Entry != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                             ,0x266,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        else {
          local_88.CurrentItemIndex = local_88.CurrentItemIndex - 1;
          pFVar8 = pFVar8 + -1;
LAB_14d4693ca:
          pFVar11 = pFVar8;
          local_88.CurrentItem = pFVar8;
          if (pFVar8 == (FMetadataEntry *)0x0) goto LAB_14d4693d5;
        }
        uVar5 = (uint)pFVar11->StackSize;
      } while( true );
    }
    if (2 < (byte)LogTraceServices._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  *param_4 = 0xff;
  *param_5 = (void *)0x0;
  *param_6 = 0;
  return false;
}

// GetMetadataStackSize @ 14d469740

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
TraceServices::FMetadataProvider::GetMetadataStackSize
          (FMetadataProvider *this,uint param_1,uint param_2)

{
  FMetadataThread *pFVar1;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  local_38;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar1 = GetThread(this,param_1);
  if (pFVar1 != (FMetadataThread *)0x0) {
    if ((ulonglong)param_2 < (pFVar1->Metadata).TotalItemCount) {
      TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
      ::GetIteratorFromItem(&pFVar1->Metadata,&local_38,(ulonglong)param_2);
      return (uint)(local_38.CurrentItem)->StackSize;
    }
  }
  if (2 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return 0;
}

// GetOrAddThread @ 14d46b190

FMetadataThread * __thiscall
TraceServices::FMetadataProvider::GetOrAddThread(FMetadataProvider *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FMetadataThread *pFVar4;
  ILinearAllocator *pIVar5;
  FMetadataThread *pFVar6;
  undefined1 *puVar7;
  TPairInitializer<unsigned_int_const_&,TraceServices::FMetadataProvider::FMetadataThread_*_const_&>
  local_res8;
  FMetadataThread *local_res18;
  FMetadataThread ***local_28;
  FMetadataThread **local_20;
  
  pFVar6 = (FMetadataThread *)0x0;
  if (*(int *)&(this->Threads).field_0x8 != *(int *)&(this->Threads).field_0x34) {
    puVar7 = *(undefined1 **)&(this->Threads).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->Threads).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)(*(int *)&(this->Threads).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Threads).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar4 = (FMetadataThread *)(lVar1 + 8);
          if (lVar1 == 0) {
            pFVar4 = pFVar6;
          }
          if (pFVar4 != (FMetadataThread *)0x0) {
            return *(FMetadataThread **)pFVar4;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_res8.Value._0_4_ = param_1;
  pFVar4 = ::operator_new(0x60);
  if (pFVar4 != (FMetadataThread *)0x0) {
    pIVar5 = (ILinearAllocator *)(**(code **)((longlong)*this->Session + 0xb8))();
    pFVar4->ThreadId = (uint)local_res8.Value;
    (pFVar4->CurrentStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->CurrentStack).ArrayNum = 0;
    (pFVar4->CurrentStack).ArrayMax = 0;
    (pFVar4->Metadata).Allocator = pIVar5;
    (pFVar4->Metadata).PagesArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Metadata).PagesArray.ArrayNum = 0;
    (pFVar4->Metadata).PagesArray.ArrayMax = 0;
    (pFVar4->Metadata).FirstPage =
         (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0;
    (pFVar4->Metadata).LastPage =
         (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0;
    (pFVar4->Metadata).PageSize = 0x400;
    (pFVar4->Metadata).TotalItemCount = 0;
    (pFVar4->SavedMetadataStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->SavedMetadataStack).ArrayNum = 0;
    (pFVar4->SavedMetadataStack).ArrayMax = 0;
    pFVar6 = pFVar4;
  }
  local_28 = &local_res8.Value;
  local_20 = &local_res18;
  local_res18 = pFVar6;
  TSet<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FMetadataProvider::FMetadataThread_*_const_&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataThread_*,0>,FDefaultSetAllocator>
              *)&this->Threads,&local_res8,(bool *)&local_28);
  return local_res18;
}

// GetRegisteredMetadataName @ 14d46c370

FName __thiscall
TraceServices::FMetadataProvider::GetRegisteredMetadataName(FMetadataProvider *this,ushort param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined6 in_register_00000012;
  FName FVar6;
  short in_R8W;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMap<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
  *local_50;
  int iStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  FVar6._2_6_ = in_register_00000012;
  FVar6.ComparisonIndex.Value._0_2_ = param_1;
  (**(code **)(this->_padding_ + 0x18))();
  iVar3 = *(int *)&(this->RegisteredTypesMap).field_0x28;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredTypesMap).field_0x10;
  iStack_48 = 0;
  local_30 = 0;
  uStack_44 = 1;
  iStack_34 = 0;
  if (iVar3 != 0) {
    puVar7 = *(uint **)&(this->RegisteredTypesMap).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_70.Array;
    }
    uVar4 = *puVar7;
    while (uVar4 == 0) {
      lVar5 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14d46c41a;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_44 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uStack_44 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_34 = (int)lVar5 + -1 + local_30;
    if (iVar3 < iStack_34) {
      iStack_34 = iVar3;
    }
  }
LAB_14d46c41a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->RegisteredTypesMap;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar3) {
    do {
      lVar5 = *(longlong *)&this->RegisteredTypesMap;
      puVar1 = (undefined8 *)(lVar5 + (longlong)TStack_70.CurrentBitIndex * 0x14);
      if (*(short *)(lVar5 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x14) == in_R8W) {
        if (puVar1 != (undefined8 *)0x0) {
          *(undefined8 *)FVar6 = *puVar1;
          return FVar6;
        }
        break;
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  *(undefined8 *)FVar6 = 0;
  return FVar6;
}

// GetRegisteredMetadataSchema @ 14d46c4f0

FMetadataSchema * __thiscall
TraceServices::FMetadataProvider::GetRegisteredMetadataSchema
          (FMetadataProvider *this,ushort param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  (**(code **)(this->_padding_ + 0x18))();
  if (uVar2 < (this->RegisteredTypes).TotalItemCount) {
    uVar1 = (this->RegisteredTypes).PageSize;
    return (this->RegisteredTypes).FirstPage[uVar2 / uVar1].Items + uVar2 % uVar1;
  }
  return (FMetadataSchema *)0x0;
}

// GetRegisteredMetadataType @ 14d46c550

ushort __thiscall
TraceServices::FMetadataProvider::GetRegisteredMetadataType(FMetadataProvider *this,FName param_1)

{
  ushort *puVar1;
  
  (**(code **)(this->_padding_ + 0x18))();
  puVar1 = TMapBase<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
           ::Find((TMapBase<FName,unsigned_short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>_>
                   *)&this->RegisteredTypesMap,param_1);
  if (puVar1 != (ushort *)0x0) {
    return *puVar1;
  }
  return 0xff;
}

// GetThread @ 14d46e050

FMetadataThread * __thiscall
TraceServices::FMetadataProvider::GetThread(FMetadataProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->Threads).field_0x8 != *(int *)&(this->Threads).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Threads).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Threads).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Threads).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->Threads + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->Threads + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (FMetadataThread *)0x0;
          }
          return (FMetadataThread *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FMetadataThread *)0x0;
}

// GetThread @ 14d46e0e0

FMetadataThread * __thiscall
TraceServices::FMetadataProvider::GetThread(FMetadataProvider *this,uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->Threads).field_0x8 != *(int *)&(this->Threads).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Threads).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Threads).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->Threads).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->Threads + (longlong)iVar2 * 0x18;
        if (*(uint *)(*(longlong *)&this->Threads + (longlong)iVar2 * 0x18) == param_1) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar3 = (undefined8 *)0x0;
          }
          if (puVar3 == (undefined8 *)0x0) {
            return (FMetadataThread *)0x0;
          }
          return (FMetadataThread *)*puVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return (FMetadataThread *)0x0;
}

// InternalAllocStoreEntry @ 14d474500

void __thiscall
TraceServices::FMetadataProvider::InternalAllocStoreEntry
          (FMetadataProvider *this,FMetadataStoreEntry *param_1,ushort param_2,void *param_3,
          uint param_4)

{
  void *pvVar1;
  FMetadataStoreEntry *_Dst;
  
  _Dst = param_1;
  if (0xc < param_4) {
    pvVar1 = FMemory::Malloc((ulonglong)param_4,0);
    (param_1->field0_0x0).Ptr = pvVar1;
    this->AllocationEventCount = this->AllocationEventCount + 1;
    this->AllocationCount = this->AllocationCount + 1;
    this->TotalAllocatedMemory = this->TotalAllocatedMemory + (ulonglong)param_4;
    _Dst = (param_1->field0_0x0).Ptr;
  }
  memcpy(_Dst,param_3,(ulonglong)param_4);
  param_1->Type = param_2;
  param_1->Size = (ushort)param_4;
  return;
}

// InternalClearStack @ 14d474590

void __thiscall
TraceServices::FMetadataProvider::InternalClearStack
          (FMetadataProvider *this,FMetadataThread *param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  if (0 < (param_1->CurrentStack).ArrayNum) {
    do {
      iVar3 = (param_1->CurrentStack).ArrayNum;
      uVar8 = iVar3 - 1;
      uVar7 = 0;
      if ((int)uVar8 < iVar3) {
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
      pFVar4 = (param_1->CurrentStack).AllocatorInstance.Data;
      lVar1 = (longlong)(param_1->CurrentStack).ArrayNum * 3 + -3;
      if (*(int *)(pFVar4 + lVar1 * 8 + 0x10) == -1) {
        InternalFreeStoreEntry(this,(FMetadataStoreEntry *)(pFVar4 + lVar1 * 8));
      }
      if (((param_1->CurrentStack).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = (param_1->CurrentStack).ArrayNum;
      uVar7 = iVar3 - 1;
      pFVar4 = (param_1->CurrentStack).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x18;
      iVar3 = ~uVar7 + iVar3;
      if (iVar3 != 0) {
        memmove(pFVar4,pFVar4 + 0x18,(longlong)iVar3 * 0x18);
      }
      piVar2 = &(param_1->CurrentStack).ArrayNum;
      *piVar2 = *piVar2 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(param_1->CurrentStack).AllocatorInstance,(param_1->CurrentStack).ArrayNum,
                 &(param_1->CurrentStack).ArrayMax);
    } while (0 < (param_1->CurrentStack).ArrayNum);
  }
  return;
}

// InternalFreeStoreEntry @ 14d4746f0

void __thiscall
TraceServices::FMetadataProvider::InternalFreeStoreEntry
          (FMetadataProvider *this,FMetadataStoreEntry *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (0xc < param_1->Size) {
    FMemory::Free((param_1->field0_0x0).Ptr);
    if (this->AllocationCount == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                         ,0xa6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->AllocationCount = this->AllocationCount - 1;
    if (this->TotalAllocatedMemory < (ulonglong)param_1->Size) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalAllocatedMemory >= InStoreEntry.Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                         ,0xa8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->TotalAllocatedMemory = this->TotalAllocatedMemory - (ulonglong)param_1->Size;
  }
  return;
}

// InternalPopStackEntry @ 14d4747a0

void __thiscall
TraceServices::FMetadataProvider::InternalPopStackEntry
          (FMetadataProvider *this,FMetadataThread *param_1)

{
  TArray<TraceServices::FMetadataProvider::FMetadataStackEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  
  iVar4 = (param_1->CurrentStack).ArrayNum;
  pTVar1 = &param_1->CurrentStack;
  uVar9 = iVar4 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar4) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  lVar2 = (longlong)(param_1->CurrentStack).ArrayNum * 3 + -3;
  if (*(int *)(pFVar5 + lVar2 * 8 + 0x10) == -1) {
    InternalFreeStoreEntry(this,(FMetadataStoreEntry *)(pFVar5 + lVar2 * 8));
  }
  if ((param_1->CurrentStack).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar4 = (param_1->CurrentStack).ArrayNum;
  uVar8 = iVar4 - 1;
  pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18;
  iVar4 = ~uVar8 + iVar4;
  if (iVar4 != 0) {
    memmove(pFVar5,pFVar5 + 0x18,(longlong)iVar4 * 0x18);
  }
  piVar3 = &(param_1->CurrentStack).ArrayNum;
  *piVar3 = *piVar3 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&pTVar1->AllocatorInstance,(param_1->CurrentStack).ArrayNum,
             &(param_1->CurrentStack).ArrayMax);
  return;
}

// InternalPushSavedStack @ 14d4748d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::InternalPushSavedStack
          (FMetadataProvider *this,FMetadataThread *param_1,FMetadataThread *param_2,uint param_3)

{
  code *pcVar1;
  FMetadataEntry *pFVar2;
  bool bVar3;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar4;
  ulong64 uVar5;
  FMetadataEntry *pFVar6;
  FMetadataEntry *pFVar7;
  FMetadataStoreEntry *pFVar8;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  local_98;
  TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
  local_68;
  
  TPagedArray<TraceServices::FMetadataProvider::FMetadataEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>_>
  ::GetIteratorFromItem(&param_2->Metadata,&local_98,(ulonglong)param_3);
  uVar5 = local_98.CurrentPageIndex;
  pFVar6 = local_98.CurrentPageFirstItem;
  pFVar7 = local_98.CurrentItem;
  while( true ) {
    pFVar2 = local_98.CurrentItem;
    if (((this->MetadataStore).TotalItemCount <= (ulonglong)pFVar7->StoreIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry->StoreIndex < MetadataStore.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                           ,0xde,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
    ::
    TPagedArrayIterator<TraceServices::FMetadataProvider::FMetadataStoreEntry,TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>_>
              (&local_68,&this->MetadataStore,(ulonglong)pFVar7->StoreIndex);
    pFVar8 = local_68.CurrentItem;
    if (0xc < (local_68.CurrentItem)->Size) {
      pFVar8 = ((local_68.CurrentItem)->field0_0x0).Ptr;
    }
    if ((param_1->CurrentStack).ArrayNum == 0xffff) break;
    InternalPushStackEntry
              (this,param_1,(local_68.CurrentItem)->Type,pFVar8,(uint)(local_68.CurrentItem)->Size);
    if (pFVar7->StackSize == 1) {
      return;
    }
    if (pFVar2 == pFVar6) {
      if (uVar5 == 0) {
        local_98.CurrentItemIndex = (local_98.Outer)->TotalItemCount;
        local_98.CurrentItem = (FMetadataEntry *)0x0;
        local_98.CurrentPageFirstItem = (FMetadataEntry *)0x0;
        local_98.CurrentPageLastItem = (FMetadataEntry *)0x0;
        pFVar6 = (FMetadataEntry *)0x0;
        pFVar7 = (FMetadataEntry *)0x0;
      }
      else {
        uVar5 = uVar5 - 1;
        pTVar4 = (local_98.Outer)->FirstPage + uVar5;
        pFVar6 = pTVar4->Items;
        if (pFVar6 == (FMetadataEntry *)0x0) {
          local_98.CurrentPageLastItem = (FMetadataEntry *)0x0;
        }
        else {
          local_98.CurrentPageLastItem = pFVar6 + (pTVar4->Count - 1);
        }
        local_98.CurrentItemIndex =
             ((longlong)local_98.CurrentPageLastItem - (longlong)pFVar6 >> 3) +
             uVar5 * (local_98.Outer)->PageSize;
        pFVar7 = local_98.CurrentPageLastItem;
        local_98.CurrentPageIndex = uVar5;
        local_98.CurrentPageFirstItem = pFVar6;
        local_98.CurrentItem = local_98.CurrentPageLastItem;
        if (pTVar4 == (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0) {
          pFVar7 = (FMetadataEntry *)0x0;
          local_98.CurrentItem = local_98.CurrentPageLastItem;
        }
      }
    }
    else {
      local_98.CurrentItemIndex = local_98.CurrentItemIndex - 1;
      pFVar7 = pFVar2 + -1;
      local_98.CurrentItem = pFVar7;
    }
  }
  this->PushSavedStackErrors = this->PushSavedStackErrors + 1;
  if ((this->PushSavedStackErrors < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// InternalPushStackEntry @ 14d474ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::FMetadataProvider::InternalPushStackEntry
          (FMetadataProvider *this,FMetadataThread *param_1,ushort param_2,void *param_3,
          uint param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ****_Dst;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 ***local_78;
  FScriptContainerElement *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 ***local_48;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  ushort uStack_3a;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_4 < 0xd) {
    _Dst = &local_48;
  }
  else {
    _Dst = FMemory::Malloc((ulonglong)param_4,0);
    this->AllocationEventCount = this->AllocationEventCount + 1;
    this->AllocationCount = this->AllocationCount + 1;
    this->TotalAllocatedMemory = this->TotalAllocatedMemory + (ulonglong)param_4;
    local_48 = _Dst;
  }
  memcpy(_Dst,param_3,(ulonglong)param_4);
  pFVar2 = (param_1->CurrentStack).AllocatorInstance.Data;
  uStack_3c = (undefined2)param_4;
  local_38 = 0xffffffffffffffff;
  uStack_3a = param_2;
  if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
     (lVar7 = (longlong)(param_1->CurrentStack).ArrayMax,
     (FScriptContainerElement *)&local_48 < pFVar2 + lVar7 * 0x18)) {
    local_60 = (longlong)(param_1->CurrentStack).ArrayNum;
    local_58 = 0x18;
    local_78 = &local_48;
    local_70 = pFVar2;
    local_68 = lVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->CurrentStack).ArrayNum;
  piVar1 = &(param_1->CurrentStack).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(param_1->CurrentStack).AllocatorInstance,piVar1);
  }
  (param_1->CurrentStack).ArrayNum = iVar6 + 1;
  pFVar3 = (param_1->CurrentStack).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x18;
  *(undefined8 ****)pFVar2 = local_48;
  *(ulonglong *)(pFVar2 + 8) = CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
  *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x18 + 0x10) = local_38;
  return;
}

// OnAnalysisCompleted @ 14d47a950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall TraceServices::FMetadataProvider::OnAnalysisCompleted(FMetadataProvider *this)

{
  (**(code **)(this->_padding_ + 0x18))();
  if ((*(int *)&(this->SavedStackMap).field_0x48 != 0) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((*(int *)&(this->SavedStackMap).field_0x4c != 0) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if ((this->MetaScopeErrors != 0) && (1 < (byte)LogTraceServices._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  if (4 < (byte)LogTraceServices._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
  }
  return;
}

// PinAndGetId @ 14d47c8e0

uint __thiscall TraceServices::FMetadataProvider::PinAndGetId(FMetadataProvider *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *pTVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar7;
  ILinearAllocator *pIVar8;
  code *pcVar9;
  short sVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  FMetadataThread *pFVar16;
  FMetadataStoreEntry *pFVar17;
  FMetadataEntry *pFVar18;
  uint uVar19;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *pTVar20;
  longlong lVar21;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *pTVar22;
  FMetadataStoreEntry_u_0 *pFVar23;
  ulong64 *puVar24;
  TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> **ppTVar25;
  
  (**(code **)(this->_padding_ + 0x18))();
  pFVar16 = GetThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  if ((pFVar16 == (FMetadataThread *)0x0) || (iVar2 = (pFVar16->CurrentStack).ArrayNum, iVar2 == 0))
  {
    return 0xffffffff;
  }
  uVar14 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar14 = ~(iVar2 - 1U) >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return uVar14;
  }
  iVar2 = (pFVar16->CurrentStack).ArrayNum;
  uVar14 = iVar2 - 1;
  lVar21 = (longlong)(int)uVar14 * 0x18;
  uVar19 = *(uint *)((pFVar16->CurrentStack).AllocatorInstance.Data + lVar21 + 0x14);
  if (uVar19 != 0xffffffff) {
    return uVar19;
  }
  for (; -1 < (int)uVar14; uVar14 = uVar14 - 1) {
    uVar19 = 0;
    if ((int)uVar14 < (pFVar16->CurrentStack).ArrayNum) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return uVar14;
    }
    pFVar23 = (FMetadataStoreEntry_u_0 *)((pFVar16->CurrentStack).AllocatorInstance.Data + lVar21);
    if (*(int *)(pFVar23->Value + 0x14) != -1) break;
    if (*(int *)(pFVar23->Value + 0x10) == -1) {
      ppTVar25 = &(this->MetadataStore).FirstPage;
      *(int *)(pFVar23->Value + 0x10) = (int)(this->MetadataStore).PageSize;
      if ((*ppTVar25 ==
           (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *)0x0) ||
         ((TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *)
          (*ppTVar25)->Count == (this->MetadataStore).LastPage)) {
        iVar15 = *(int *)&(this->MetadataStore).PagesArray.AllocatorInstance.Data;
        piVar1 = (int *)((longlong)&(this->MetadataStore).PagesArray.AllocatorInstance.Data + 4);
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&this->MetadataStore,piVar1);
          *(int *)&(this->MetadataStore).PagesArray.AllocatorInstance.Data = iVar15;
        }
        pTVar20 = (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry> *)
                  ((this->MetadataStore).Allocator + (longlong)iVar15 * 2);
        *(int *)&(this->MetadataStore).PagesArray.AllocatorInstance.Data = iVar15 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataStoreEntry>,int>
                  (pTVar20,1);
        plVar3 = *(longlong **)&(this->RegisteredTypesMap).field_0x48;
        pTVar4 = (this->MetadataStore).LastPage;
        *ppTVar25 = pTVar20;
        *(ILinearAllocator **)&(this->MetadataStore).PagesArray.ArrayNum =
             (this->MetadataStore).Allocator;
        pFVar17 = (FMetadataStoreEntry *)(**(code **)(*plVar3 + 8))(plVar3,(longlong)pTVar4 << 4);
        (*ppTVar25)->Items = pFVar17;
      }
      puVar24 = &(this->MetadataStore).PageSize;
      ppTVar25 = &(this->MetadataStore).FirstPage;
      *puVar24 = *puVar24 + 1;
      pTVar4 = *ppTVar25;
      uVar11 = *(undefined8 *)(pFVar23->Value + 8);
      pFVar17 = pTVar4->Items + pTVar4->Count;
      pFVar17->field0_0x0 = *pFVar23;
      pFVar17->ValueEx[0] = (char)uVar11;
      pFVar17->ValueEx[1] = (char)((ulonglong)uVar11 >> 8);
      pFVar17->ValueEx[2] = (char)((ulonglong)uVar11 >> 0x10);
      pFVar17->ValueEx[3] = (char)((ulonglong)uVar11 >> 0x18);
      pFVar17->Size = (short)((ulonglong)uVar11 >> 0x20);
      pFVar17->Type = (short)((ulonglong)uVar11 >> 0x30);
      puVar24 = &(*ppTVar25)->Count;
      *puVar24 = *puVar24 + 1;
    }
    lVar21 = lVar21 + -0x18;
  }
  uVar5 = (pFVar16->Metadata).TotalItemCount;
  uVar14 = 0xffffffff;
  if (uVar5 == 0) {
LAB_14d47cbea:
    uVar14 = uVar14 + 1;
    if (iVar2 <= (int)uVar14) goto LAB_14d47cd16;
  }
  else {
    uVar19 = iVar2 - 2;
    if ((int)uVar19 < 0) goto LAB_14d47cbea;
    lVar21 = (longlong)(int)uVar19 * 0x18;
    do {
      uVar14 = 0;
      if ((int)uVar19 < (pFVar16->CurrentStack).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        uVar14 = (*pcVar9)();
        return uVar14;
      }
      iVar15 = *(int *)((pFVar16->CurrentStack).AllocatorInstance.Data + lVar21 + 0x14);
      if (iVar15 != -1) {
        uVar14 = 0xffffffff;
        if (iVar15 == (int)uVar5 + -1) {
          uVar14 = uVar19;
        }
        goto LAB_14d47cbea;
      }
      lVar21 = lVar21 + -0x18;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
    uVar14 = 0;
  }
  lVar21 = (longlong)(int)uVar14 * 0x18;
  do {
    uVar19 = 0;
    if ((int)uVar14 < (pFVar16->CurrentStack).ArrayNum) {
      uVar19 = ~uVar14 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      uVar14 = (*pcVar9)();
      return uVar14;
    }
    pFVar6 = (pFVar16->CurrentStack).AllocatorInstance.Data;
    *(int *)(pFVar6 + lVar21 + 0x14) = (int)(pFVar16->Metadata).TotalItemCount;
    pTVar7 = (pFVar16->Metadata).LastPage;
    if ((pTVar7 == (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)0x0) ||
       (pTVar7->Count == (pFVar16->Metadata).PageSize)) {
      iVar15 = (pFVar16->Metadata).PagesArray.ArrayNum;
      piVar1 = &(pFVar16->Metadata).PagesArray.ArrayMax;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar16->Metadata).PagesArray.AllocatorInstance,piVar1);
        (pFVar16->Metadata).PagesArray.ArrayNum = iVar15;
      }
      pTVar22 = (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)
                ((pFVar16->Metadata).PagesArray.AllocatorInstance.Data + (longlong)iVar15 * 0x10);
      (pFVar16->Metadata).PagesArray.ArrayNum = iVar15 + 1;
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry>,int>
                (pTVar22,1);
      pTVar7 = (TPagedArrayPage<TraceServices::FMetadataProvider::FMetadataEntry> *)
               (pFVar16->Metadata).PagesArray.AllocatorInstance.Data;
      pIVar8 = (pFVar16->Metadata).Allocator;
      (pFVar16->Metadata).LastPage = pTVar22;
      (pFVar16->Metadata).FirstPage = pTVar7;
      pFVar18 = (FMetadataEntry *)
                (**(code **)((longlong)*pIVar8 + 8))(pIVar8,(pFVar16->Metadata).PageSize << 3);
      ((pFVar16->Metadata).LastPage)->Items = pFVar18;
    }
    puVar24 = &(pFVar16->Metadata).TotalItemCount;
    *puVar24 = *puVar24 + 1;
    pTVar7 = (pFVar16->Metadata).LastPage;
    pFVar18 = pTVar7->Items + pTVar7->Count;
    pFVar18->StoreIndex = 0;
    pFVar18->Type = 0;
    pFVar18->StackSize = 0;
    puVar24 = &((pFVar16->Metadata).LastPage)->Count;
    *puVar24 = *puVar24 + 1;
    pFVar18->StoreIndex = *(uint *)(pFVar6 + lVar21 + 0x10);
    lVar12 = lVar21 + 0xe;
    lVar21 = lVar21 + 0x18;
    pFVar18->Type = *(ushort *)(pFVar6 + lVar12);
    sVar10 = (short)uVar14;
    uVar14 = uVar14 + 1;
    pFVar18->StackSize = sVar10 + 1;
  } while ((int)uVar14 < iVar2);
LAB_14d47cd16:
  iVar2 = (pFVar16->CurrentStack).ArrayNum;
  uVar19 = iVar2 - 1;
  uVar14 = 0;
  if ((int)uVar19 < iVar2) {
    uVar14 = ~uVar19 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    uVar14 = (*pcVar9)();
    return uVar14;
  }
  return *(uint *)((pFVar16->CurrentStack).AllocatorInstance.Data +
                  (longlong)(pFVar16->CurrentStack).ArrayNum * 0x18 + -4);
}

// PopScopedMetadata @ 14d47ce30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::PopScopedMetadata
          (FMetadataProvider *this,uint param_1,ushort param_2)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FMetadataThread *pFVar6;
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  pFVar6 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
  iVar2 = (pFVar6->CurrentStack).ArrayNum;
  if (iVar2 == 0) {
    puVar1 = &(this->SavedStackMap).field_0x48;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    if ((*(uint *)&(this->SavedStackMap).field_0x48 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  else {
    uVar5 = 0;
    if ((int)(iVar2 - 1U) < iVar2) {
      uVar5 = ~(iVar2 - 1U) >> 0x1f;
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
    if (*(ushort *)
         ((pFVar6->CurrentStack).AllocatorInstance.Data +
         (longlong)(pFVar6->CurrentStack).ArrayNum * 0x18 + -10) == param_2) {
      InternalPopStackEntry((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar6);
    }
    else {
      uVar5 = *(int *)&(this->SavedStackMap).field_0x48 + 1;
      *(uint *)&(this->SavedStackMap).field_0x48 = uVar5;
      if ((uVar5 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
  }
  return;
}

// PushScopedMetadata @ 14d47e230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FMetadataProvider::PushScopedMetadata
          (FMetadataProvider *this,uint param_1,ushort param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMetadataThread *pFVar5;
  
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  if ((this->RegisteredTypes).PageSize <= (ulonglong)param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType < RegisteredTypes.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                       ,0xfb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_3 == (void *)0x0) || (param_4 == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InData != nullptr && InSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                       ,0xfc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 < 0x10000) {
    pFVar5 = GetOrAddThread((FMetadataProvider *)&this[-1].TotalAllocatedMemory,param_1);
    if ((pFVar5->CurrentStack).ArrayNum == 0xffff) {
      uVar4 = *(int *)&(this->SavedStackMap).field_0x48 + 1;
      *(uint *)&(this->SavedStackMap).field_0x48 = uVar4;
      if ((uVar4 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
      }
    }
    else {
      InternalPushStackEntry
                ((FMetadataProvider *)&this[-1].TotalAllocatedMemory,pFVar5,param_2,param_3,param_4)
      ;
    }
  }
  else {
    puVar1 = &(this->SavedStackMap).field_0x48;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    if ((*(uint *)&(this->SavedStackMap).field_0x48 < 0x65) && (1 < (byte)LogTraceServices._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTraceServices);
    }
  }
  return;
}

// ReadAccessCheck @ 14d481190

void __thiscall TraceServices::FMetadataProvider::ReadAccessCheck(FMetadataProvider *this)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FProviderLock::ReadAccessCheck(&this->Lock,(FThreadLocalState *)(lVar1 + 0x9b80));
  return;
}

// RegisterMetadataType @ 14d4827e0

ushort __thiscall
TraceServices::FMetadataProvider::RegisterMetadataType
          (FMetadataProvider *this,wchar_t *param_1,FMetadataSchema *param_2)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  ushort local_res8 [4];
  FName local_28;
  FName *local_20;
  ushort *local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (0xffff < (this->RegisteredTypes).PageSize) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RegisteredTypes.Num() <= MaxMetadataTypeId",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Model\\MetadataProvider.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  local_res8[0] = (ushort)(this->RegisteredTypes).PageSize;
  TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
  ::EmplaceBack<TraceServices::FMetadataSchema_const_&>
            ((TPagedArray<TraceServices::FMetadataSchema,TraceServices::TPagedArrayPage<TraceServices::FMetadataSchema>_>
              *)&this->Session,param_2);
  ::FName::FName(&local_28,param_1);
  local_20 = &local_28;
  local_18 = local_res8;
  TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_&&,unsigned_short_const_&>_>
            ((TSet<TTuple<FName,unsigned_short>,TDefaultMapHashableKeyFuncs<FName,unsigned_short,0>,FDefaultSetAllocator>
              *)&(this->RegisteredTypes).TotalItemCount,
             (TPairInitializer<FName_&&,unsigned_short_const_&> *)&stack0x00000020,(bool *)&local_20
            );
  return local_res8[0];
}

// SaveStack @ 14d488c50

void __thiscall
TraceServices::FMetadataProvider::SaveStack(FMetadataProvider *this,uint param_1,uint param_2)

{
  uint local_res8;
  undefined4 local_resc;
  TPairInitializer<unsigned_int_const_&,TraceServices::FMetadataProvider::FMetadataSavedStackInfo_&&>
  local_res10;
  FMetadataSavedStackInfo **local_18;
  uint *local_10;
  
  local_res10.Value._0_4_ = param_2;
  (**(code **)(this->_padding_ + 0x18))();
  *(longlong *)&this->RestoreScopeErrors = *(longlong *)&this->RestoreScopeErrors + 1;
  local_res8 = param_1;
  local_resc = (**(code **)(this->_padding_ + 0x60))(this,param_1);
  local_18 = &local_res10.Value;
  local_10 = &local_res8;
  TSet<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TraceServices::FMetadataProvider::FMetadataSavedStackInfo_&&>_>
            ((TSet<TTuple<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FMetadataProvider::FMetadataSavedStackInfo,0>,FDefaultSetAllocator>
              *)&(this->Threads).field_0x48,&local_res10,(bool *)&local_18);
  return;
}

